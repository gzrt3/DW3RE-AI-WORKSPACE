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


void FUN_0014eba0_part341(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f4be0u: goto label_1f4be0;
        case 0x1f4be4u: goto label_1f4be4;
        case 0x1f4be8u: goto label_1f4be8;
        case 0x1f4becu: goto label_1f4bec;
        case 0x1f4bf0u: goto label_1f4bf0;
        case 0x1f4bf4u: goto label_1f4bf4;
        case 0x1f4bf8u: goto label_1f4bf8;
        case 0x1f4bfcu: goto label_1f4bfc;
        case 0x1f4c00u: goto label_1f4c00;
        case 0x1f4c04u: goto label_1f4c04;
        case 0x1f4c08u: goto label_1f4c08;
        case 0x1f4c0cu: goto label_1f4c0c;
        case 0x1f4c10u: goto label_1f4c10;
        case 0x1f4c14u: goto label_1f4c14;
        case 0x1f4c18u: goto label_1f4c18;
        case 0x1f4c1cu: goto label_1f4c1c;
        case 0x1f4c20u: goto label_1f4c20;
        case 0x1f4c24u: goto label_1f4c24;
        case 0x1f4c28u: goto label_1f4c28;
        case 0x1f4c2cu: goto label_1f4c2c;
        case 0x1f4c30u: goto label_1f4c30;
        case 0x1f4c34u: goto label_1f4c34;
        case 0x1f4c38u: goto label_1f4c38;
        case 0x1f4c3cu: goto label_1f4c3c;
        case 0x1f4c40u: goto label_1f4c40;
        case 0x1f4c44u: goto label_1f4c44;
        case 0x1f4c48u: goto label_1f4c48;
        case 0x1f4c4cu: goto label_1f4c4c;
        case 0x1f4c50u: goto label_1f4c50;
        case 0x1f4c54u: goto label_1f4c54;
        case 0x1f4c58u: goto label_1f4c58;
        case 0x1f4c5cu: goto label_1f4c5c;
        case 0x1f4c60u: goto label_1f4c60;
        case 0x1f4c64u: goto label_1f4c64;
        case 0x1f4c68u: goto label_1f4c68;
        case 0x1f4c6cu: goto label_1f4c6c;
        case 0x1f4c70u: goto label_1f4c70;
        case 0x1f4c74u: goto label_1f4c74;
        case 0x1f4c78u: goto label_1f4c78;
        case 0x1f4c7cu: goto label_1f4c7c;
        case 0x1f4c80u: goto label_1f4c80;
        case 0x1f4c84u: goto label_1f4c84;
        case 0x1f4c88u: goto label_1f4c88;
        case 0x1f4c8cu: goto label_1f4c8c;
        case 0x1f4c90u: goto label_1f4c90;
        case 0x1f4c94u: goto label_1f4c94;
        case 0x1f4c98u: goto label_1f4c98;
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca0u: goto label_1f4ca0;
        case 0x1f4ca4u: goto label_1f4ca4;
        case 0x1f4ca8u: goto label_1f4ca8;
        case 0x1f4cacu: goto label_1f4cac;
        case 0x1f4cb0u: goto label_1f4cb0;
        case 0x1f4cb4u: goto label_1f4cb4;
        case 0x1f4cb8u: goto label_1f4cb8;
        case 0x1f4cbcu: goto label_1f4cbc;
        case 0x1f4cc0u: goto label_1f4cc0;
        case 0x1f4cc4u: goto label_1f4cc4;
        case 0x1f4cc8u: goto label_1f4cc8;
        case 0x1f4cccu: goto label_1f4ccc;
        case 0x1f4cd0u: goto label_1f4cd0;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4cd8u: goto label_1f4cd8;
        case 0x1f4cdcu: goto label_1f4cdc;
        case 0x1f4ce0u: goto label_1f4ce0;
        case 0x1f4ce4u: goto label_1f4ce4;
        case 0x1f4ce8u: goto label_1f4ce8;
        case 0x1f4cecu: goto label_1f4cec;
        case 0x1f4cf0u: goto label_1f4cf0;
        case 0x1f4cf4u: goto label_1f4cf4;
        case 0x1f4cf8u: goto label_1f4cf8;
        case 0x1f4cfcu: goto label_1f4cfc;
        case 0x1f4d00u: goto label_1f4d00;
        case 0x1f4d04u: goto label_1f4d04;
        case 0x1f4d08u: goto label_1f4d08;
        case 0x1f4d0cu: goto label_1f4d0c;
        case 0x1f4d10u: goto label_1f4d10;
        case 0x1f4d14u: goto label_1f4d14;
        case 0x1f4d18u: goto label_1f4d18;
        case 0x1f4d1cu: goto label_1f4d1c;
        case 0x1f4d20u: goto label_1f4d20;
        case 0x1f4d24u: goto label_1f4d24;
        case 0x1f4d28u: goto label_1f4d28;
        case 0x1f4d2cu: goto label_1f4d2c;
        case 0x1f4d30u: goto label_1f4d30;
        case 0x1f4d34u: goto label_1f4d34;
        case 0x1f4d38u: goto label_1f4d38;
        case 0x1f4d3cu: goto label_1f4d3c;
        case 0x1f4d40u: goto label_1f4d40;
        case 0x1f4d44u: goto label_1f4d44;
        case 0x1f4d48u: goto label_1f4d48;
        case 0x1f4d4cu: goto label_1f4d4c;
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d54u: goto label_1f4d54;
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d5cu: goto label_1f4d5c;
        case 0x1f4d60u: goto label_1f4d60;
        case 0x1f4d64u: goto label_1f4d64;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d6cu: goto label_1f4d6c;
        case 0x1f4d70u: goto label_1f4d70;
        case 0x1f4d74u: goto label_1f4d74;
        case 0x1f4d78u: goto label_1f4d78;
        case 0x1f4d7cu: goto label_1f4d7c;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d84u: goto label_1f4d84;
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d8cu: goto label_1f4d8c;
        case 0x1f4d90u: goto label_1f4d90;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4d98u: goto label_1f4d98;
        case 0x1f4d9cu: goto label_1f4d9c;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4da4u: goto label_1f4da4;
        case 0x1f4da8u: goto label_1f4da8;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4db0u: goto label_1f4db0;
        case 0x1f4db4u: goto label_1f4db4;
        case 0x1f4db8u: goto label_1f4db8;
        case 0x1f4dbcu: goto label_1f4dbc;
        case 0x1f4dc0u: goto label_1f4dc0;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4dccu: goto label_1f4dcc;
        case 0x1f4dd0u: goto label_1f4dd0;
        case 0x1f4dd4u: goto label_1f4dd4;
        case 0x1f4dd8u: goto label_1f4dd8;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de0u: goto label_1f4de0;
        case 0x1f4de4u: goto label_1f4de4;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4decu: goto label_1f4dec;
        case 0x1f4df0u: goto label_1f4df0;
        case 0x1f4df4u: goto label_1f4df4;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4dfcu: goto label_1f4dfc;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e04u: goto label_1f4e04;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e0cu: goto label_1f4e0c;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e14u: goto label_1f4e14;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e1cu: goto label_1f4e1c;
        case 0x1f4e20u: goto label_1f4e20;
        case 0x1f4e24u: goto label_1f4e24;
        case 0x1f4e28u: goto label_1f4e28;
        case 0x1f4e2cu: goto label_1f4e2c;
        case 0x1f4e30u: goto label_1f4e30;
        case 0x1f4e34u: goto label_1f4e34;
        case 0x1f4e38u: goto label_1f4e38;
        case 0x1f4e3cu: goto label_1f4e3c;
        case 0x1f4e40u: goto label_1f4e40;
        case 0x1f4e44u: goto label_1f4e44;
        case 0x1f4e48u: goto label_1f4e48;
        case 0x1f4e4cu: goto label_1f4e4c;
        case 0x1f4e50u: goto label_1f4e50;
        case 0x1f4e54u: goto label_1f4e54;
        case 0x1f4e58u: goto label_1f4e58;
        case 0x1f4e5cu: goto label_1f4e5c;
        case 0x1f4e60u: goto label_1f4e60;
        case 0x1f4e64u: goto label_1f4e64;
        case 0x1f4e68u: goto label_1f4e68;
        case 0x1f4e6cu: goto label_1f4e6c;
        case 0x1f4e70u: goto label_1f4e70;
        case 0x1f4e74u: goto label_1f4e74;
        case 0x1f4e78u: goto label_1f4e78;
        case 0x1f4e7cu: goto label_1f4e7c;
        case 0x1f4e80u: goto label_1f4e80;
        case 0x1f4e84u: goto label_1f4e84;
        case 0x1f4e88u: goto label_1f4e88;
        case 0x1f4e8cu: goto label_1f4e8c;
        case 0x1f4e90u: goto label_1f4e90;
        case 0x1f4e94u: goto label_1f4e94;
        case 0x1f4e98u: goto label_1f4e98;
        case 0x1f4e9cu: goto label_1f4e9c;
        case 0x1f4ea0u: goto label_1f4ea0;
        case 0x1f4ea4u: goto label_1f4ea4;
        case 0x1f4ea8u: goto label_1f4ea8;
        case 0x1f4eacu: goto label_1f4eac;
        case 0x1f4eb0u: goto label_1f4eb0;
        case 0x1f4eb4u: goto label_1f4eb4;
        case 0x1f4eb8u: goto label_1f4eb8;
        case 0x1f4ebcu: goto label_1f4ebc;
        case 0x1f4ec0u: goto label_1f4ec0;
        case 0x1f4ec4u: goto label_1f4ec4;
        case 0x1f4ec8u: goto label_1f4ec8;
        case 0x1f4eccu: goto label_1f4ecc;
        case 0x1f4ed0u: goto label_1f4ed0;
        case 0x1f4ed4u: goto label_1f4ed4;
        case 0x1f4ed8u: goto label_1f4ed8;
        case 0x1f4edcu: goto label_1f4edc;
        case 0x1f4ee0u: goto label_1f4ee0;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ee8u: goto label_1f4ee8;
        case 0x1f4eecu: goto label_1f4eec;
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4ef4u: goto label_1f4ef4;
        case 0x1f4ef8u: goto label_1f4ef8;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f00u: goto label_1f4f00;
        case 0x1f4f04u: goto label_1f4f04;
        case 0x1f4f08u: goto label_1f4f08;
        case 0x1f4f0cu: goto label_1f4f0c;
        case 0x1f4f10u: goto label_1f4f10;
        case 0x1f4f14u: goto label_1f4f14;
        case 0x1f4f18u: goto label_1f4f18;
        case 0x1f4f1cu: goto label_1f4f1c;
        case 0x1f4f20u: goto label_1f4f20;
        case 0x1f4f24u: goto label_1f4f24;
        case 0x1f4f28u: goto label_1f4f28;
        case 0x1f4f2cu: goto label_1f4f2c;
        case 0x1f4f30u: goto label_1f4f30;
        case 0x1f4f34u: goto label_1f4f34;
        case 0x1f4f38u: goto label_1f4f38;
        case 0x1f4f3cu: goto label_1f4f3c;
        case 0x1f4f40u: goto label_1f4f40;
        case 0x1f4f44u: goto label_1f4f44;
        case 0x1f4f48u: goto label_1f4f48;
        case 0x1f4f4cu: goto label_1f4f4c;
        case 0x1f4f50u: goto label_1f4f50;
        case 0x1f4f54u: goto label_1f4f54;
        case 0x1f4f58u: goto label_1f4f58;
        case 0x1f4f5cu: goto label_1f4f5c;
        case 0x1f4f60u: goto label_1f4f60;
        case 0x1f4f64u: goto label_1f4f64;
        case 0x1f4f68u: goto label_1f4f68;
        case 0x1f4f6cu: goto label_1f4f6c;
        case 0x1f4f70u: goto label_1f4f70;
        case 0x1f4f74u: goto label_1f4f74;
        case 0x1f4f78u: goto label_1f4f78;
        case 0x1f4f7cu: goto label_1f4f7c;
        case 0x1f4f80u: goto label_1f4f80;
        case 0x1f4f84u: goto label_1f4f84;
        case 0x1f4f88u: goto label_1f4f88;
        case 0x1f4f8cu: goto label_1f4f8c;
        case 0x1f4f90u: goto label_1f4f90;
        case 0x1f4f94u: goto label_1f4f94;
        case 0x1f4f98u: goto label_1f4f98;
        case 0x1f4f9cu: goto label_1f4f9c;
        case 0x1f4fa0u: goto label_1f4fa0;
        case 0x1f4fa4u: goto label_1f4fa4;
        case 0x1f4fa8u: goto label_1f4fa8;
        case 0x1f4facu: goto label_1f4fac;
        case 0x1f4fb0u: goto label_1f4fb0;
        case 0x1f4fb4u: goto label_1f4fb4;
        case 0x1f4fb8u: goto label_1f4fb8;
        case 0x1f4fbcu: goto label_1f4fbc;
        case 0x1f4fc0u: goto label_1f4fc0;
        case 0x1f4fc4u: goto label_1f4fc4;
        case 0x1f4fc8u: goto label_1f4fc8;
        case 0x1f4fccu: goto label_1f4fcc;
        case 0x1f4fd0u: goto label_1f4fd0;
        case 0x1f4fd4u: goto label_1f4fd4;
        case 0x1f4fd8u: goto label_1f4fd8;
        case 0x1f4fdcu: goto label_1f4fdc;
        case 0x1f4fe0u: goto label_1f4fe0;
        case 0x1f4fe4u: goto label_1f4fe4;
        case 0x1f4fe8u: goto label_1f4fe8;
        case 0x1f4fecu: goto label_1f4fec;
        case 0x1f4ff0u: goto label_1f4ff0;
        case 0x1f4ff4u: goto label_1f4ff4;
        case 0x1f4ff8u: goto label_1f4ff8;
        case 0x1f4ffcu: goto label_1f4ffc;
        case 0x1f5000u: goto label_1f5000;
        case 0x1f5004u: goto label_1f5004;
        case 0x1f5008u: goto label_1f5008;
        case 0x1f500cu: goto label_1f500c;
        case 0x1f5010u: goto label_1f5010;
        case 0x1f5014u: goto label_1f5014;
        case 0x1f5018u: goto label_1f5018;
        case 0x1f501cu: goto label_1f501c;
        case 0x1f5020u: goto label_1f5020;
        case 0x1f5024u: goto label_1f5024;
        case 0x1f5028u: goto label_1f5028;
        case 0x1f502cu: goto label_1f502c;
        case 0x1f5030u: goto label_1f5030;
        case 0x1f5034u: goto label_1f5034;
        case 0x1f5038u: goto label_1f5038;
        case 0x1f503cu: goto label_1f503c;
        case 0x1f5040u: goto label_1f5040;
        case 0x1f5044u: goto label_1f5044;
        case 0x1f5048u: goto label_1f5048;
        case 0x1f504cu: goto label_1f504c;
        case 0x1f5050u: goto label_1f5050;
        case 0x1f5054u: goto label_1f5054;
        case 0x1f5058u: goto label_1f5058;
        case 0x1f505cu: goto label_1f505c;
        case 0x1f5060u: goto label_1f5060;
        case 0x1f5064u: goto label_1f5064;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f506cu: goto label_1f506c;
        case 0x1f5070u: goto label_1f5070;
        case 0x1f5074u: goto label_1f5074;
        case 0x1f5078u: goto label_1f5078;
        case 0x1f507cu: goto label_1f507c;
        case 0x1f5080u: goto label_1f5080;
        case 0x1f5084u: goto label_1f5084;
        case 0x1f5088u: goto label_1f5088;
        case 0x1f508cu: goto label_1f508c;
        case 0x1f5090u: goto label_1f5090;
        case 0x1f5094u: goto label_1f5094;
        case 0x1f5098u: goto label_1f5098;
        case 0x1f509cu: goto label_1f509c;
        case 0x1f50a0u: goto label_1f50a0;
        case 0x1f50a4u: goto label_1f50a4;
        case 0x1f50a8u: goto label_1f50a8;
        case 0x1f50acu: goto label_1f50ac;
        case 0x1f50b0u: goto label_1f50b0;
        case 0x1f50b4u: goto label_1f50b4;
        case 0x1f50b8u: goto label_1f50b8;
        case 0x1f50bcu: goto label_1f50bc;
        case 0x1f50c0u: goto label_1f50c0;
        case 0x1f50c4u: goto label_1f50c4;
        case 0x1f50c8u: goto label_1f50c8;
        case 0x1f50ccu: goto label_1f50cc;
        case 0x1f50d0u: goto label_1f50d0;
        case 0x1f50d4u: goto label_1f50d4;
        case 0x1f50d8u: goto label_1f50d8;
        case 0x1f50dcu: goto label_1f50dc;
        case 0x1f50e0u: goto label_1f50e0;
        case 0x1f50e4u: goto label_1f50e4;
        case 0x1f50e8u: goto label_1f50e8;
        case 0x1f50ecu: goto label_1f50ec;
        case 0x1f50f0u: goto label_1f50f0;
        case 0x1f50f4u: goto label_1f50f4;
        case 0x1f50f8u: goto label_1f50f8;
        case 0x1f50fcu: goto label_1f50fc;
        case 0x1f5100u: goto label_1f5100;
        case 0x1f5104u: goto label_1f5104;
        case 0x1f5108u: goto label_1f5108;
        case 0x1f510cu: goto label_1f510c;
        case 0x1f5110u: goto label_1f5110;
        case 0x1f5114u: goto label_1f5114;
        case 0x1f5118u: goto label_1f5118;
        case 0x1f511cu: goto label_1f511c;
        case 0x1f5120u: goto label_1f5120;
        case 0x1f5124u: goto label_1f5124;
        case 0x1f5128u: goto label_1f5128;
        case 0x1f512cu: goto label_1f512c;
        case 0x1f5130u: goto label_1f5130;
        case 0x1f5134u: goto label_1f5134;
        case 0x1f5138u: goto label_1f5138;
        case 0x1f513cu: goto label_1f513c;
        case 0x1f5140u: goto label_1f5140;
        case 0x1f5144u: goto label_1f5144;
        case 0x1f5148u: goto label_1f5148;
        case 0x1f514cu: goto label_1f514c;
        case 0x1f5150u: goto label_1f5150;
        case 0x1f5154u: goto label_1f5154;
        case 0x1f5158u: goto label_1f5158;
        case 0x1f515cu: goto label_1f515c;
        case 0x1f5160u: goto label_1f5160;
        case 0x1f5164u: goto label_1f5164;
        case 0x1f5168u: goto label_1f5168;
        case 0x1f516cu: goto label_1f516c;
        case 0x1f5170u: goto label_1f5170;
        case 0x1f5174u: goto label_1f5174;
        case 0x1f5178u: goto label_1f5178;
        case 0x1f517cu: goto label_1f517c;
        case 0x1f5180u: goto label_1f5180;
        case 0x1f5184u: goto label_1f5184;
        case 0x1f5188u: goto label_1f5188;
        case 0x1f518cu: goto label_1f518c;
        case 0x1f5190u: goto label_1f5190;
        case 0x1f5194u: goto label_1f5194;
        case 0x1f5198u: goto label_1f5198;
        case 0x1f519cu: goto label_1f519c;
        case 0x1f51a0u: goto label_1f51a0;
        case 0x1f51a4u: goto label_1f51a4;
        case 0x1f51a8u: goto label_1f51a8;
        case 0x1f51acu: goto label_1f51ac;
        case 0x1f51b0u: goto label_1f51b0;
        case 0x1f51b4u: goto label_1f51b4;
        case 0x1f51b8u: goto label_1f51b8;
        case 0x1f51bcu: goto label_1f51bc;
        case 0x1f51c0u: goto label_1f51c0;
        case 0x1f51c4u: goto label_1f51c4;
        case 0x1f51c8u: goto label_1f51c8;
        case 0x1f51ccu: goto label_1f51cc;
        case 0x1f51d0u: goto label_1f51d0;
        case 0x1f51d4u: goto label_1f51d4;
        case 0x1f51d8u: goto label_1f51d8;
        case 0x1f51dcu: goto label_1f51dc;
        case 0x1f51e0u: goto label_1f51e0;
        case 0x1f51e4u: goto label_1f51e4;
        case 0x1f51e8u: goto label_1f51e8;
        case 0x1f51ecu: goto label_1f51ec;
        case 0x1f51f0u: goto label_1f51f0;
        case 0x1f51f4u: goto label_1f51f4;
        case 0x1f51f8u: goto label_1f51f8;
        case 0x1f51fcu: goto label_1f51fc;
        case 0x1f5200u: goto label_1f5200;
        case 0x1f5204u: goto label_1f5204;
        case 0x1f5208u: goto label_1f5208;
        case 0x1f520cu: goto label_1f520c;
        case 0x1f5210u: goto label_1f5210;
        case 0x1f5214u: goto label_1f5214;
        case 0x1f5218u: goto label_1f5218;
        case 0x1f521cu: goto label_1f521c;
        case 0x1f5220u: goto label_1f5220;
        case 0x1f5224u: goto label_1f5224;
        case 0x1f5228u: goto label_1f5228;
        case 0x1f522cu: goto label_1f522c;
        case 0x1f5230u: goto label_1f5230;
        case 0x1f5234u: goto label_1f5234;
        case 0x1f5238u: goto label_1f5238;
        case 0x1f523cu: goto label_1f523c;
        case 0x1f5240u: goto label_1f5240;
        case 0x1f5244u: goto label_1f5244;
        case 0x1f5248u: goto label_1f5248;
        case 0x1f524cu: goto label_1f524c;
        case 0x1f5250u: goto label_1f5250;
        case 0x1f5254u: goto label_1f5254;
        case 0x1f5258u: goto label_1f5258;
        case 0x1f525cu: goto label_1f525c;
        case 0x1f5260u: goto label_1f5260;
        case 0x1f5264u: goto label_1f5264;
        case 0x1f5268u: goto label_1f5268;
        case 0x1f526cu: goto label_1f526c;
        case 0x1f5270u: goto label_1f5270;
        case 0x1f5274u: goto label_1f5274;
        case 0x1f5278u: goto label_1f5278;
        case 0x1f527cu: goto label_1f527c;
        case 0x1f5280u: goto label_1f5280;
        case 0x1f5284u: goto label_1f5284;
        case 0x1f5288u: goto label_1f5288;
        case 0x1f528cu: goto label_1f528c;
        case 0x1f5290u: goto label_1f5290;
        case 0x1f5294u: goto label_1f5294;
        case 0x1f5298u: goto label_1f5298;
        case 0x1f529cu: goto label_1f529c;
        case 0x1f52a0u: goto label_1f52a0;
        case 0x1f52a4u: goto label_1f52a4;
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52acu: goto label_1f52ac;
        case 0x1f52b0u: goto label_1f52b0;
        case 0x1f52b4u: goto label_1f52b4;
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52bcu: goto label_1f52bc;
        case 0x1f52c0u: goto label_1f52c0;
        case 0x1f52c4u: goto label_1f52c4;
        case 0x1f52c8u: goto label_1f52c8;
        case 0x1f52ccu: goto label_1f52cc;
        case 0x1f52d0u: goto label_1f52d0;
        case 0x1f52d4u: goto label_1f52d4;
        case 0x1f52d8u: goto label_1f52d8;
        case 0x1f52dcu: goto label_1f52dc;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f52e4u: goto label_1f52e4;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f52ecu: goto label_1f52ec;
        case 0x1f52f0u: goto label_1f52f0;
        case 0x1f52f4u: goto label_1f52f4;
        case 0x1f52f8u: goto label_1f52f8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5300u: goto label_1f5300;
        case 0x1f5304u: goto label_1f5304;
        case 0x1f5308u: goto label_1f5308;
        case 0x1f530cu: goto label_1f530c;
        case 0x1f5310u: goto label_1f5310;
        case 0x1f5314u: goto label_1f5314;
        case 0x1f5318u: goto label_1f5318;
        case 0x1f531cu: goto label_1f531c;
        case 0x1f5320u: goto label_1f5320;
        case 0x1f5324u: goto label_1f5324;
        case 0x1f5328u: goto label_1f5328;
        case 0x1f532cu: goto label_1f532c;
        case 0x1f5330u: goto label_1f5330;
        case 0x1f5334u: goto label_1f5334;
        case 0x1f5338u: goto label_1f5338;
        case 0x1f533cu: goto label_1f533c;
        case 0x1f5340u: goto label_1f5340;
        case 0x1f5344u: goto label_1f5344;
        case 0x1f5348u: goto label_1f5348;
        case 0x1f534cu: goto label_1f534c;
        case 0x1f5350u: goto label_1f5350;
        case 0x1f5354u: goto label_1f5354;
        case 0x1f5358u: goto label_1f5358;
        case 0x1f535cu: goto label_1f535c;
        case 0x1f5360u: goto label_1f5360;
        case 0x1f5364u: goto label_1f5364;
        case 0x1f5368u: goto label_1f5368;
        case 0x1f536cu: goto label_1f536c;
        case 0x1f5370u: goto label_1f5370;
        case 0x1f5374u: goto label_1f5374;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f537cu: goto label_1f537c;
        case 0x1f5380u: goto label_1f5380;
        case 0x1f5384u: goto label_1f5384;
        case 0x1f5388u: goto label_1f5388;
        case 0x1f538cu: goto label_1f538c;
        case 0x1f5390u: goto label_1f5390;
        case 0x1f5394u: goto label_1f5394;
        case 0x1f5398u: goto label_1f5398;
        case 0x1f539cu: goto label_1f539c;
        case 0x1f53a0u: goto label_1f53a0;
        case 0x1f53a4u: goto label_1f53a4;
        case 0x1f53a8u: goto label_1f53a8;
        case 0x1f53acu: goto label_1f53ac;
        default: return;
    }

label_1f4be0:
    // 0x1f4be0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4be0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4be4:
    // 0x1f4be4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4be8:
    // 0x1f4be8: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4bec:
    // 0x1f4bec: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4bf0:
    // 0x1f4bf0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4bf4:
    // 0x1f4bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4bf8:
    // 0x1f4bf8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4bfc:
    // 0x1f4bfc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4c00:
    // 0x1f4c00: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4c00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4c04:
    // 0x1f4c04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4c08:
    // 0x1f4c08: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4c0c:
    // 0x1f4c0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c10:
    // 0x1f4c10: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4c14:
    // 0x1f4c14: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4c18:
    // 0x1f4c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4c1c:
    // 0x1f4c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4c20:
    // 0x1f4c20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c24:
    // 0x1f4c24: 0xc08f20e  jal         func_23C838
label_1f4c28:
    if (ctx->pc == 0x1F4C28u) {
        ctx->pc = 0x1F4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C24u;
        // 0x1f4c28: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C2Cu;
        goto label_1f4c2c;
    }
    ctx->pc = 0x1F4C24u;
    SET_GPR_U32(ctx, 31, 0x1F4C2Cu);
    ctx->pc = 0x1F4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C24u;
    // 0x1f4c28: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C2Cu;
label_1f4c2c:
    // 0x1f4c2c: 0x10000050  b           . + 4 + (0x50 << 2)
label_1f4c30:
    if (ctx->pc == 0x1F4C30u) {
        ctx->pc = 0x1F4C34u;
        goto label_1f4c34;
    }
    ctx->pc = 0x1F4C2Cu;
    {
        const bool branch_taken_0x1f4c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c2c) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4C34u;
label_1f4c34:
    // 0x1f4c34: 0x16820011  bne         $s4, $v0, . + 4 + (0x11 << 2)
label_1f4c38:
    if (ctx->pc == 0x1F4C38u) {
        ctx->pc = 0x1F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C34u;
        // 0x1f4c38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C3Cu;
        goto label_1f4c3c;
    }
    ctx->pc = 0x1F4C34u;
    {
        const bool branch_taken_0x1f4c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C34u;
        // 0x1f4c38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c34) {
            ctx->pc = 0x1F4C7Cu;
            goto label_1f4c7c;
        }
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f4c40:
    // 0x1f4c40: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4c44:
    // 0x1f4c44: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c48:
    // 0x1f4c48: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f4c4c:
    // 0x1f4c4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4c50:
    // 0x1f4c50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4c54:
    // 0x1f4c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f4c58:
    // 0x1f4c58: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c5c:
    // 0x1f4c5c: 0xc08f20e  jal         func_23C838
label_1f4c60:
    if (ctx->pc == 0x1F4C60u) {
        ctx->pc = 0x1F4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C5Cu;
        // 0x1f4c60: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C64u;
        goto label_1f4c64;
    }
    ctx->pc = 0x1F4C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C64u);
    ctx->pc = 0x1F4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C5Cu;
    // 0x1f4c60: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C64u;
label_1f4c64:
    // 0x1f4c64: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c68:
    // 0x1f4c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c6c:
    // 0x1f4c6c: 0xc08f20e  jal         func_23C838
label_1f4c70:
    if (ctx->pc == 0x1F4C70u) {
        ctx->pc = 0x1F4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C6Cu;
        // 0x1f4c70: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C74u;
        goto label_1f4c74;
    }
    ctx->pc = 0x1F4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C74u);
    ctx->pc = 0x1F4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C6Cu;
    // 0x1f4c70: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C74u;
label_1f4c74:
    // 0x1f4c74: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1f4c78:
    if (ctx->pc == 0x1F4C78u) {
        ctx->pc = 0x1F4C7Cu;
        goto label_1f4c7c;
    }
    ctx->pc = 0x1F4C74u;
    {
        const bool branch_taken_0x1f4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c74) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4C7Cu;
label_1f4c7c:
    // 0x1f4c7c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1f4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f4c80:
    // 0x1f4c80: 0x1682001e  bne         $s4, $v0, . + 4 + (0x1E << 2)
label_1f4c84:
    if (ctx->pc == 0x1F4C84u) {
        ctx->pc = 0x1F4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C80u;
        // 0x1f4c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C88u;
        goto label_1f4c88;
    }
    ctx->pc = 0x1F4C80u;
    {
        const bool branch_taken_0x1f4c80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C80u;
        // 0x1f4c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c80) {
            ctx->pc = 0x1F4CFCu;
            goto label_1f4cfc;
        }
    }
    ctx->pc = 0x1F4C88u;
label_1f4c88:
    // 0x1f4c88: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4c8c:
    // 0x1f4c8c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4c90:
    // 0x1f4c90: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4c94:
    // 0x1f4c94: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4c98:
    // 0x1f4c98: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c9c:
    // 0x1f4c9c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4ca0:
    // 0x1f4ca0: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4ca4:
    // 0x1f4ca4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4ca8:
    // 0x1f4ca8: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4ca8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4cac:
    // 0x1f4cac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cb0:
    // 0x1f4cb0: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4cb4:
    // 0x1f4cb4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4cb8:
    // 0x1f4cb8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4cbc:
    // 0x1f4cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4cc0:
    // 0x1f4cc0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4cc4:
    // 0x1f4cc4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cc8:
    // 0x1f4cc8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4ccc:
    // 0x1f4ccc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4cd0:
    // 0x1f4cd0: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4cd4:
    // 0x1f4cd4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4cd8:
    // 0x1f4cd8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cdc:
    // 0x1f4cdc: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4ce0:
    // 0x1f4ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4ce4:
    // 0x1f4ce4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4ce8:
    // 0x1f4ce8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4cec:
    // 0x1f4cec: 0xc08f20e  jal         func_23C838
label_1f4cf0:
    if (ctx->pc == 0x1F4CF0u) {
        ctx->pc = 0x1F4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CECu;
        // 0x1f4cf0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4CF4u;
        goto label_1f4cf4;
    }
    ctx->pc = 0x1F4CECu;
    SET_GPR_U32(ctx, 31, 0x1F4CF4u);
    ctx->pc = 0x1F4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CECu;
    // 0x1f4cf0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4CF4u;
label_1f4cf4:
    // 0x1f4cf4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1f4cf8:
    if (ctx->pc == 0x1F4CF8u) {
        ctx->pc = 0x1F4CFCu;
        goto label_1f4cfc;
    }
    ctx->pc = 0x1F4CF4u;
    {
        const bool branch_taken_0x1f4cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cf4) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4CFCu;
label_1f4cfc:
    // 0x1f4cfc: 0x1682001c  bne         $s4, $v0, . + 4 + (0x1C << 2)
label_1f4d00:
    if (ctx->pc == 0x1F4D00u) {
        ctx->pc = 0x1F4D04u;
        goto label_1f4d04;
    }
    ctx->pc = 0x1F4CFCu;
    {
        const bool branch_taken_0x1f4cfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4cfc) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4D04u;
label_1f4d04:
    // 0x1f4d04: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4d08:
    // 0x1f4d08: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4d0c:
    // 0x1f4d0c: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4d10:
    // 0x1f4d10: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4d14:
    // 0x1f4d14: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d18:
    // 0x1f4d18: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4d1c:
    // 0x1f4d1c: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4d20:
    // 0x1f4d20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4d24:
    // 0x1f4d24: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4d24u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4d28:
    // 0x1f4d28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d2c:
    // 0x1f4d2c: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4d30:
    // 0x1f4d30: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4d34:
    // 0x1f4d34: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4d34u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4d38:
    // 0x1f4d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4d3c:
    // 0x1f4d3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4d40:
    // 0x1f4d40: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d44:
    // 0x1f4d44: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4d44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4d48:
    // 0x1f4d48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4d4c:
    // 0x1f4d4c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4d50:
    // 0x1f4d50: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4d54:
    // 0x1f4d54: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d58:
    // 0x1f4d58: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4d5c:
    // 0x1f4d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4d60:
    // 0x1f4d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4d64:
    // 0x1f4d64: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4d68:
    // 0x1f4d68: 0xc08f20e  jal         func_23C838
label_1f4d6c:
    if (ctx->pc == 0x1F4D6Cu) {
        ctx->pc = 0x1F4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D68u;
        // 0x1f4d6c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D70u;
        goto label_1f4d70;
    }
    ctx->pc = 0x1F4D68u;
    SET_GPR_U32(ctx, 31, 0x1F4D70u);
    ctx->pc = 0x1F4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D68u;
    // 0x1f4d6c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4D70u;
label_1f4d70:
    // 0x1f4d70: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d74:
    // 0x1f4d74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d78:
    // 0x1f4d78: 0x24a5d520  addiu       $a1, $a1, -0x2AE0
    ctx->pc = 0x1f4d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
label_1f4d7c:
    // 0x1f4d7c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4d80:
    // 0x1f4d80: 0xc08f20e  jal         func_23C838
label_1f4d84:
    if (ctx->pc == 0x1F4D84u) {
        ctx->pc = 0x1F4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D80u;
        // 0x1f4d84: 0x27a70170  addiu       $a3, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D88u;
        goto label_1f4d88;
    }
    ctx->pc = 0x1F4D80u;
    SET_GPR_U32(ctx, 31, 0x1F4D88u);
    ctx->pc = 0x1F4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D80u;
    // 0x1f4d84: 0x27a70170  addiu       $a3, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4D88u;
label_1f4d88:
    // 0x1f4d88: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d8c:
    // 0x1f4d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d90:
    // 0x1f4d90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f4d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d94:
    // 0x1f4d94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f4d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d98:
    // 0x1f4d98: 0xc08f20e  jal         func_23C838
label_1f4d9c:
    if (ctx->pc == 0x1F4D9Cu) {
        ctx->pc = 0x1F4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D98u;
        // 0x1f4d9c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DA0u;
        goto label_1f4da0;
    }
    ctx->pc = 0x1F4D98u;
    SET_GPR_U32(ctx, 31, 0x1F4DA0u);
    ctx->pc = 0x1F4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D98u;
    // 0x1f4d9c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4DA0u;
label_1f4da0:
    // 0x1f4da0: 0xc07d374  jal         func_1F4DD0
label_1f4da4:
    if (ctx->pc == 0x1F4DA4u) {
        ctx->pc = 0x1F4DA8u;
        goto label_1f4da8;
    }
    ctx->pc = 0x1F4DA0u;
    SET_GPR_U32(ctx, 31, 0x1F4DA8u);
    ctx->pc = 0x1F4DD0u;
    goto label_1f4dd0;
    ctx->pc = 0x1F4DA8u;
label_1f4da8:
    // 0x1f4da8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f4da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f4dac:
    // 0x1f4dac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f4dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4db0:
    // 0x1f4db0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f4db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4db4:
    // 0x1f4db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f4db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4db8:
    // 0x1f4db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4dbc:
    // 0x1f4dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4dc0:
    // 0x1f4dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4dc4:
    // 0x1f4dc4: 0x3e00008  jr          $ra
label_1f4dc8:
    if (ctx->pc == 0x1F4DC8u) {
        ctx->pc = 0x1F4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC4u;
        // 0x1f4dc8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DCCu;
        goto label_1f4dcc;
    }
    ctx->pc = 0x1F4DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC4u;
        // 0x1f4dc8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4DCCu;
label_1f4dcc:
    // 0x1f4dcc: 0x0  nop
    ctx->pc = 0x1f4dccu;
    // NOP
label_1f4dd0:
    // 0x1f4dd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f4dd4:
    // 0x1f4dd4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f4dd8:
    // 0x1f4dd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f4ddc:
    // 0x1f4ddc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f4de0:
    // 0x1f4de0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f4de4:
    // 0x1f4de4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f4de8:
    // 0x1f4de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f4dec:
    // 0x1f4dec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f4decu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4df0:
    // 0x1f4df0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f4df4:
    // 0x1f4df4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f4df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4df8:
    // 0x1f4df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f4dfc:
    // 0x1f4dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4e00:
    // 0x1f4e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4e04:
    // 0x1f4e04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f4e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e08:
    // 0x1f4e08: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1f4e0c:
    // 0x1f4e0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f4e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e10:
    // 0x1f4e10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4e10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e14:
    // 0x1f4e14: 0x0  nop
    ctx->pc = 0x1f4e14u;
    // NOP
label_1f4e18:
    // 0x1f4e18: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f4e1c:
    // 0x1f4e1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1f4e20:
    // 0x1f4e20: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1f4e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1f4e24:
    // 0x1f4e24: 0x24a57fb0  addiu       $a1, $a1, 0x7FB0
    ctx->pc = 0x1f4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32688));
label_1f4e28:
    // 0x1f4e28: 0x24847f90  addiu       $a0, $a0, 0x7F90
    ctx->pc = 0x1f4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32656));
label_1f4e2c:
    // 0x1f4e2c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1f4e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f4e30:
    // 0x1f4e30: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1f4e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1f4e34:
    // 0x1f4e34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f4e38:
    // 0x1f4e38: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1f4e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1f4e3c:
    // 0x1f4e3c: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1f4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f4e40:
    // 0x1f4e40: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1f4e44:
    // 0x1f4e44: 0x93f021  addu        $fp, $a0, $s3
    ctx->pc = 0x1f4e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1f4e48:
    // 0x1f4e48: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1f4e4c:
    // 0x1f4e4c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1f4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1f4e50:
    // 0x1f4e50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f4e54:
    // 0x1f4e54: 0x24847fd0  addiu       $a0, $a0, 0x7FD0
    ctx->pc = 0x1f4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32720));
label_1f4e58:
    // 0x1f4e58: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1f4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1f4e5c:
    // 0x1f4e5c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f4e60:
    // 0x1f4e60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f4e64:
    // 0x1f4e64: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1f4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1f4e68:
    // 0x1f4e68: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1f4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f4e6c:
    // 0x1f4e6c: 0x73b021  addu        $s6, $v1, $s3
    ctx->pc = 0x1f4e6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1f4e70:
    // 0x1f4e70: 0x8eca0000  lw          $t2, 0x0($s6)
    ctx->pc = 0x1f4e70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f4e74:
    // 0x1f4e74: 0x5400050  bltz        $t2, . + 4 + (0x50 << 2)
label_1f4e78:
    if (ctx->pc == 0x1F4E78u) {
        ctx->pc = 0x1F4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E74u;
        // 0x1f4e78: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4E7Cu;
        goto label_1f4e7c;
    }
    ctx->pc = 0x1F4E74u;
    {
        const bool branch_taken_0x1f4e74 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x1F4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E74u;
        // 0x1f4e78: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e74) {
            ctx->pc = 0x1F4FB8u;
            goto label_1f4fb8;
        }
    }
    ctx->pc = 0x1F4E7Cu;
label_1f4e7c:
    // 0x1f4e7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f4e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e80:
    // 0x1f4e80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e84:
    // 0x1f4e84: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f4e88:
    // 0x1f4e88: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f4e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f4e8c:
    // 0x1f4e8c: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f4e90:
    // 0x1f4e90: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f4e94:
    // 0x1f4e94: 0x0  nop
    ctx->pc = 0x1f4e94u;
    // NOP
label_1f4e98:
    // 0x1f4e98: 0x0  nop
    ctx->pc = 0x1f4e98u;
    // NOP
label_1f4e9c:
    // 0x1f4e9c: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f4e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f4ea0:
    // 0x1f4ea0: 0x90a3367c  lbu         $v1, 0x367C($a1)
    ctx->pc = 0x1f4ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f4ea4:
    // 0x1f4ea4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1f4ea8:
    if (ctx->pc == 0x1F4EA8u) {
        ctx->pc = 0x1F4EACu;
        goto label_1f4eac;
    }
    ctx->pc = 0x1F4EA4u;
    {
        const bool branch_taken_0x1f4ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ea4) {
            ctx->pc = 0x1F4EDCu;
            goto label_1f4edc;
        }
    }
    ctx->pc = 0x1F4EACu;
label_1f4eac:
    // 0x1f4eac: 0x8ca33674  lw          $v1, 0x3674($a1)
    ctx->pc = 0x1f4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f4eb0:
    // 0x1f4eb0: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_1f4eb4:
    if (ctx->pc == 0x1F4EB4u) {
        ctx->pc = 0x1F4EB8u;
        goto label_1f4eb8;
    }
    ctx->pc = 0x1F4EB0u;
    {
        const bool branch_taken_0x1f4eb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4eb0) {
            ctx->pc = 0x1F4EDCu;
            goto label_1f4edc;
        }
    }
    ctx->pc = 0x1F4EB8u;
label_1f4eb8:
    // 0x1f4eb8: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f4ebc:
    // 0x1f4ebc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f4ec0:
    // 0x1f4ec0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f4ec4:
    // 0x1f4ec4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f4ec8:
    // 0x1f4ec8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f4ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4ecc:
    // 0x1f4ecc: 0x146a0003  bne         $v1, $t2, . + 4 + (0x3 << 2)
label_1f4ed0:
    if (ctx->pc == 0x1F4ED0u) {
        ctx->pc = 0x1F4ED4u;
        goto label_1f4ed4;
    }
    ctx->pc = 0x1F4ECCu;
    {
        const bool branch_taken_0x1f4ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1f4ecc) {
            ctx->pc = 0x1F4EDCu;
            goto label_1f4edc;
        }
    }
    ctx->pc = 0x1F4ED4u;
label_1f4ed4:
    // 0x1f4ed4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f4ed8:
    if (ctx->pc == 0x1F4ED8u) {
        ctx->pc = 0x1F4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED4u;
        // 0x1f4ed8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4EDCu;
        goto label_1f4edc;
    }
    ctx->pc = 0x1F4ED4u;
    {
        const bool branch_taken_0x1f4ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ED4u;
        // 0x1f4ed8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ed4) {
            ctx->pc = 0x1F4EF0u;
            goto label_1f4ef0;
        }
    }
    ctx->pc = 0x1F4EDCu;
label_1f4edc:
    // 0x1f4edc: 0x0  nop
    ctx->pc = 0x1f4edcu;
    // NOP
label_1f4ee0:
    // 0x1f4ee0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f4ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f4ee4:
    // 0x1f4ee4: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f4ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4ee8:
    // 0x1f4ee8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1f4eec:
    if (ctx->pc == 0x1F4EECu) {
        ctx->pc = 0x1F4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EE8u;
        // 0x1f4eec: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4EF0u;
        goto label_1f4ef0;
    }
    ctx->pc = 0x1F4EE8u;
    {
        const bool branch_taken_0x1f4ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EE8u;
        // 0x1f4eec: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ee8) {
            ctx->pc = 0x1F4E94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4e94;
        }
    }
    ctx->pc = 0x1F4EF0u;
label_1f4ef0:
    // 0x1f4ef0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4ef4:
    // 0x1f4ef4: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
label_1f4ef8:
    if (ctx->pc == 0x1F4EF8u) {
        ctx->pc = 0x1F4EFCu;
        goto label_1f4efc;
    }
    ctx->pc = 0x1F4EF4u;
    {
        const bool branch_taken_0x1f4ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f4ef4) {
            ctx->pc = 0x1F4F0Cu;
            goto label_1f4f0c;
        }
    }
    ctx->pc = 0x1F4EFCu;
label_1f4efc:
    // 0x1f4efc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f4f00:
    // 0x1f4f00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f4f04:
    // 0x1f4f04: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1f4f08:
    if (ctx->pc == 0x1F4F08u) {
        ctx->pc = 0x1F4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F04u;
        // 0x1f4f08: 0xafc70000  sw          $a3, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F0Cu;
        goto label_1f4f0c;
    }
    ctx->pc = 0x1F4F04u;
    {
        const bool branch_taken_0x1f4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F04u;
        // 0x1f4f08: 0xafc70000  sw          $a3, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f04) {
            ctx->pc = 0x1F4FB8u;
            goto label_1f4fb8;
        }
    }
    ctx->pc = 0x1F4F0Cu;
label_1f4f0c:
    // 0x1f4f0c: 0x0  nop
    ctx->pc = 0x1f4f0cu;
    // NOP
label_1f4f10:
    // 0x1f4f10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f4f10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f14:
    // 0x1f4f14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f4f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f18:
    // 0x1f4f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f1c:
    // 0x1f4f1c: 0xc07b95c  jal         func_1EE570
label_1f4f20:
    if (ctx->pc == 0x1F4F20u) {
        ctx->pc = 0x1F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F1Cu;
        // 0x1f4f20: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F24u;
        goto label_1f4f24;
    }
    ctx->pc = 0x1F4F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F24u);
    ctx->pc = 0x1F4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F1Cu;
    // 0x1f4f20: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE570u;
    { ctx->pc = 0x1ee570; return; }
    ctx->pc = 0x1F4F24u;
label_1f4f24:
    // 0x1f4f24: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1f4f28:
    if (ctx->pc == 0x1F4F28u) {
        ctx->pc = 0x1F4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F24u;
        // 0x1f4f28: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4F2Cu;
        goto label_1f4f2c;
    }
    ctx->pc = 0x1F4F24u;
    {
        const bool branch_taken_0x1f4f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F24u;
        // 0x1f4f28: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f24) {
            ctx->pc = 0x1F4FA8u;
            goto label_1f4fa8;
        }
    }
    ctx->pc = 0x1F4F2Cu;
label_1f4f2c:
    // 0x1f4f2c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1f4f30:
    // 0x1f4f30: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1f4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1f4f34:
    // 0x1f4f34: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1f4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1f4f38:
    // 0x1f4f38: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1f4f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_1f4f3c:
    // 0x1f4f3c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1f4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1f4f40:
    // 0x1f4f40: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1f4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1f4f44:
    // 0x1f4f44: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x1f4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f4f48:
    // 0x1f4f48: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1f4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1f4f4c:
    // 0x1f4f4c: 0x90670221  lbu         $a3, 0x221($v1)
    ctx->pc = 0x1f4f4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 545)));
label_1f4f50:
    // 0x1f4f50: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f4f54:
    // 0x1f4f54: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f4f58:
    // 0x1f4f58: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1f4f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1f4f5c:
    // 0x1f4f5c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1f4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f4f60:
    // 0x1f4f60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4f64:
    // 0x1f4f64: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f4f68:
    // 0x1f4f68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f4f6c:
    // 0x1f4f6c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f4f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f4f70:
    // 0x1f4f70: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x1f4f70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1f4f74:
    // 0x1f4f74: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1f4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f4f78:
    // 0x1f4f78: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f4f7c:
    // 0x1f4f7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f4f80:
    // 0x1f4f80: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1f4f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f4f84:
    // 0x1f4f84: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1f4f88:
    if (ctx->pc == 0x1F4F88u) {
        ctx->pc = 0x1F4F8Cu;
        goto label_1f4f8c;
    }
    ctx->pc = 0x1F4F84u;
    {
        const bool branch_taken_0x1f4f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4f84) {
            ctx->pc = 0x1F4FA8u;
            goto label_1f4fa8;
        }
    }
    ctx->pc = 0x1F4F8Cu;
label_1f4f8c:
    // 0x1f4f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4f90:
    // 0x1f4f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4f94:
    // 0x1f4f94: 0x70200b  movn        $a0, $v1, $s0
    ctx->pc = 0x1f4f94u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1f4f98:
    // 0x1f4f98: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1f4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f4f9c:
    // 0x1f4f9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f4fa0:
    // 0x1f4fa0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4fa4:
    if (ctx->pc == 0x1F4FA4u) {
        ctx->pc = 0x1F4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FA0u;
        // 0x1f4fa4: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4FA8u;
        goto label_1f4fa8;
    }
    ctx->pc = 0x1F4FA0u;
    {
        const bool branch_taken_0x1f4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FA0u;
        // 0x1f4fa4: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fa0) {
            ctx->pc = 0x1F4FB8u;
            goto label_1f4fb8;
        }
    }
    ctx->pc = 0x1F4FA8u;
label_1f4fa8:
    // 0x1f4fa8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1f4fa8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1f4fac:
    // 0x1f4fac: 0x2ae3000a  slti        $v1, $s7, 0xA
    ctx->pc = 0x1f4facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f4fb0:
    // 0x1f4fb0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_1f4fb4:
    if (ctx->pc == 0x1F4FB4u) {
        ctx->pc = 0x1F4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FB0u;
        // 0x1f4fb4: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4FB8u;
        goto label_1f4fb8;
    }
    ctx->pc = 0x1F4FB0u;
    {
        const bool branch_taken_0x1f4fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FB0u;
        // 0x1f4fb4: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fb0) {
            ctx->pc = 0x1F4F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4f18;
        }
    }
    ctx->pc = 0x1F4FB8u;
label_1f4fb8:
    // 0x1f4fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f4fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f4fbc:
    // 0x1f4fbc: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x1f4fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f4fc0:
    // 0x1f4fc0: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_1f4fc4:
    if (ctx->pc == 0x1F4FC4u) {
        ctx->pc = 0x1F4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FC0u;
        // 0x1f4fc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4FC8u;
        goto label_1f4fc8;
    }
    ctx->pc = 0x1F4FC0u;
    {
        const bool branch_taken_0x1f4fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FC0u;
        // 0x1f4fc4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fc0) {
            ctx->pc = 0x1F4E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4e14;
        }
    }
    ctx->pc = 0x1F4FC8u;
label_1f4fc8:
    // 0x1f4fc8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f4fcc:
    // 0x1f4fcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f4fd0:
    // 0x1f4fd0: 0x269447b8  addiu       $s4, $s4, 0x47B8
    ctx->pc = 0x1f4fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 18360));
label_1f4fd4:
    // 0x1f4fd4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1f4fd8:
    // 0x1f4fd8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1f4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1f4fdc:
    // 0x1f4fdc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f4fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4fe0:
    // 0x1f4fe0: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_1f4fe4:
    if (ctx->pc == 0x1F4FE4u) {
        ctx->pc = 0x1F4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FE0u;
        // 0x1f4fe4: 0x26b51b00  addiu       $s5, $s5, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4FE8u;
        goto label_1f4fe8;
    }
    ctx->pc = 0x1F4FE0u;
    {
        const bool branch_taken_0x1f4fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FE0u;
        // 0x1f4fe4: 0x26b51b00  addiu       $s5, $s5, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fe0) {
            ctx->pc = 0x1F4E0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4e0c;
        }
    }
    ctx->pc = 0x1F4FE8u;
label_1f4fe8:
    // 0x1f4fe8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f4fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f4fec:
    // 0x1f4fec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f4fecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f4ff0:
    // 0x1f4ff0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f4ff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f4ff4:
    // 0x1f4ff4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f4ff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f4ff8:
    // 0x1f4ff8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f4ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4ffc:
    // 0x1f4ffc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f4ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5000:
    // 0x1f5000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5004:
    // 0x1f5004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5008:
    // 0x1f5008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f500c:
    // 0x1f500c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f500cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5010:
    // 0x1f5010: 0x3e00008  jr          $ra
label_1f5014:
    if (ctx->pc == 0x1F5014u) {
        ctx->pc = 0x1F5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5010u;
        // 0x1f5014: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5018u;
        goto label_1f5018;
    }
    ctx->pc = 0x1F5010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5010u;
        // 0x1f5014: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5018u;
label_1f5018:
    // 0x1f5018: 0x0  nop
    ctx->pc = 0x1f5018u;
    // NOP
label_1f501c:
    // 0x1f501c: 0x0  nop
    ctx->pc = 0x1f501cu;
    // NOP
label_1f5020:
    // 0x1f5020: 0x3e00008  jr          $ra
label_1f5024:
    if (ctx->pc == 0x1F5024u) {
        ctx->pc = 0x1F5028u;
        goto label_1f5028;
    }
    ctx->pc = 0x1F5020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5028u;
label_1f5028:
    // 0x1f5028: 0x0  nop
    ctx->pc = 0x1f5028u;
    // NOP
label_1f502c:
    // 0x1f502c: 0x0  nop
    ctx->pc = 0x1f502cu;
    // NOP
label_1f5030:
    // 0x1f5030: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f5034:
    // 0x1f5034: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f5038:
    // 0x1f5038: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f503c:
    // 0x1f503c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f5040:
    // 0x1f5040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5044:
    // 0x1f5044: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f5048:
    // 0x1f5048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f504c:
    // 0x1f504c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5050:
    // 0x1f5050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5054:
    // 0x1f5054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5058:
    // 0x1f5058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f505c:
    // 0x1f505c: 0x8f838fd4  lw          $v1, -0x702C($gp)
    ctx->pc = 0x1f505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938580)));
label_1f5060:
    // 0x1f5060: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_1f5064:
    if (ctx->pc == 0x1F5064u) {
        ctx->pc = 0x1F5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5060u;
        // 0x1f5064: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5068u;
        goto label_1f5068;
    }
    ctx->pc = 0x1F5060u;
    {
        const bool branch_taken_0x1f5060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5060u;
        // 0x1f5064: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5060) {
            ctx->pc = 0x1F5240u;
            goto label_1f5240;
        }
    }
    ctx->pc = 0x1F5068u;
label_1f5068:
    // 0x1f5068: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1f5068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1f506c:
    // 0x1f506c: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f5070:
    // 0x1f5070: 0x3402e840  ori         $v0, $zero, 0xE840
    ctx->pc = 0x1f5070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59456);
label_1f5074:
    // 0x1f5074: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f5074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f5078:
    // 0x1f5078: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1f5078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1f507c:
    // 0x1f507c: 0x24637ff0  addiu       $v1, $v1, 0x7FF0
    ctx->pc = 0x1f507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32752));
label_1f5080:
    // 0x1f5080: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f5080u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5084:
    // 0x1f5084: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f5084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5088:
    // 0x1f5088: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x1f5088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1f508c:
    // 0x1f508c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f508cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1f5090:
    // 0x1f5090: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1f5090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1f5094:
    // 0x1f5094: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x1f5094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5098:
    // 0x1f5098: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f509c:
    // 0x1f509c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f50a0:
    // 0x1f50a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f50a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a4:
    // 0x1f50a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f50a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50a8:
    // 0x1f50a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f50a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50ac:
    // 0x1f50ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f50acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50b0:
    // 0x1f50b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f50b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f50b4:
    // 0x1f50b4: 0x0  nop
    ctx->pc = 0x1f50b4u;
    // NOP
label_1f50b8:
    // 0x1f50b8: 0x0  nop
    ctx->pc = 0x1f50b8u;
    // NOP
label_1f50bc:
    // 0x1f50bc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f50c0:
    // 0x1f50c0: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x1f50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
label_1f50c4:
    // 0x1f50c4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f50c8:
    // 0x1f50c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f50cc:
    // 0x1f50cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f50d0:
    // 0x1f50d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f50d4:
    // 0x1f50d4: 0x4400044  bltz        $v0, . + 4 + (0x44 << 2)
label_1f50d8:
    if (ctx->pc == 0x1F50D8u) {
        ctx->pc = 0x1F50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50D4u;
        // 0x1f50d8: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F50DCu;
        goto label_1f50dc;
    }
    ctx->pc = 0x1F50D4u;
    {
        const bool branch_taken_0x1f50d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50D4u;
        // 0x1f50d8: 0x3c02004e  lui         $v0, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f50d4) {
            ctx->pc = 0x1F51E8u;
            goto label_1f51e8;
        }
    }
    ctx->pc = 0x1F50DCu;
label_1f50dc:
    // 0x1f50dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f50e0:
    // 0x1f50e0: 0x24427fb0  addiu       $v0, $v0, 0x7FB0
    ctx->pc = 0x1f50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32688));
label_1f50e4:
    // 0x1f50e4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f50e8:
    // 0x1f50e8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f50ec:
    // 0x1f50ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f50f0:
    // 0x1f50f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f50f4:
    // 0x1f50f4: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_1f50f8:
    if (ctx->pc == 0x1F50F8u) {
        ctx->pc = 0x1F50FCu;
        goto label_1f50fc;
    }
    ctx->pc = 0x1F50F4u;
    {
        const bool branch_taken_0x1f50f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f50f4) {
            ctx->pc = 0x1F51BCu;
            goto label_1f51bc;
        }
    }
    ctx->pc = 0x1F50FCu;
label_1f50fc:
    // 0x1f50fc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f5100:
    // 0x1f5100: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f5104:
    if (ctx->pc == 0x1F5104u) {
        ctx->pc = 0x1F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5100u;
        // 0x1f5104: 0x2643018b  addiu       $v1, $s2, 0x18B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 395));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5108u;
        goto label_1f5108;
    }
    ctx->pc = 0x1F5100u;
    {
        const bool branch_taken_0x1f5100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5100u;
        // 0x1f5104: 0x2643018b  addiu       $v1, $s2, 0x18B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5100) {
            ctx->pc = 0x1F5110u;
            goto label_1f5110;
        }
    }
    ctx->pc = 0x1F5108u;
label_1f5108:
    // 0x1f5108: 0x240300f8  addiu       $v1, $zero, 0xF8
    ctx->pc = 0x1f5108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1f510c:
    // 0x1f510c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1f510cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1f5110:
    // 0x1f5110: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1f5110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_1f5114:
    // 0x1f5114: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x1f5114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1f5118:
    // 0x1f5118: 0x87a400c8  lh          $a0, 0xC8($sp)
    ctx->pc = 0x1f5118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1f511c:
    // 0x1f511c: 0x26630055  addiu       $v1, $s3, 0x55
    ctx->pc = 0x1f511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 85));
label_1f5120:
    // 0x1f5120: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1f5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_1f5124:
    // 0x1f5124: 0x3d71821  addu        $v1, $fp, $s7
    ctx->pc = 0x1f5124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_1f5128:
    // 0x1f5128: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x1f5128u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1f512c:
    // 0x1f512c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f512cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f5130:
    // 0x1f5130: 0x24637f90  addiu       $v1, $v1, 0x7F90
    ctx->pc = 0x1f5130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32656));
label_1f5134:
    // 0x1f5134: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f5134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f5138:
    // 0x1f5138: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x1f5138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1f513c:
    // 0x1f513c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1f513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1f5140:
    // 0x1f5140: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1f5140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f5144:
    // 0x1f5144: 0xa6a40090  sh          $a0, 0x90($s5)
    ctx->pc = 0x1f5144u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 4));
label_1f5148:
    // 0x1f5148: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f514c:
    // 0x1f514c: 0x87a400cc  lh          $a0, 0xCC($sp)
    ctx->pc = 0x1f514cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_1f5150:
    // 0x1f5150: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f5150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f5154:
    // 0x1f5154: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1f5154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1f5158:
    // 0x1f5158: 0xa6a40092  sh          $a0, 0x92($s5)
    ctx->pc = 0x1f5158u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 4));
label_1f515c:
    // 0x1f515c: 0x87a400c8  lh          $a0, 0xC8($sp)
    ctx->pc = 0x1f515cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1f5160:
    // 0x1f5160: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1f5160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1f5164:
    // 0x1f5164: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f5164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f5168:
    // 0x1f5168: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1f5168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1f516c:
    // 0x1f516c: 0xa6a400c0  sh          $a0, 0xC0($s5)
    ctx->pc = 0x1f516cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 192), (uint16_t)GPR_U32(ctx, 4));
label_1f5170:
    // 0x1f5170: 0x87a400cc  lh          $a0, 0xCC($sp)
    ctx->pc = 0x1f5170u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_1f5174:
    // 0x1f5174: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f5174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f5178:
    // 0x1f5178: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1f5178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1f517c:
    // 0x1f517c: 0xa6a400c2  sh          $a0, 0xC2($s5)
    ctx->pc = 0x1f517cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 194), (uint16_t)GPR_U32(ctx, 4));
label_1f5180:
    // 0x1f5180: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5184:
    // 0x1f5184: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5188:
    // 0x1f5188: 0xc085a18  jal         func_216860
label_1f518c:
    if (ctx->pc == 0x1F518Cu) {
        ctx->pc = 0x1F518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5188u;
        // 0x1f518c: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5190u;
        goto label_1f5190;
    }
    ctx->pc = 0x1F5188u;
    SET_GPR_U32(ctx, 31, 0x1F5190u);
    ctx->pc = 0x1F518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5188u;
    // 0x1f518c: 0x27a700cc  addiu       $a3, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216860u;
    { ctx->pc = 0x216860; return; }
    ctx->pc = 0x1F5190u;
label_1f5190:
    // 0x1f5190: 0x87a200c8  lh          $v0, 0xC8($sp)
    ctx->pc = 0x1f5190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1f5194:
    // 0x1f5194: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f5198:
    // 0x1f5198: 0xa6a200a8  sh          $v0, 0xA8($s5)
    ctx->pc = 0x1f5198u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 168), (uint16_t)GPR_U32(ctx, 2));
label_1f519c:
    // 0x1f519c: 0x87a200cc  lh          $v0, 0xCC($sp)
    ctx->pc = 0x1f519cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_1f51a0:
    // 0x1f51a0: 0xa6a200aa  sh          $v0, 0xAA($s5)
    ctx->pc = 0x1f51a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 170), (uint16_t)GPR_U32(ctx, 2));
label_1f51a4:
    // 0x1f51a4: 0x87a200c8  lh          $v0, 0xC8($sp)
    ctx->pc = 0x1f51a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1f51a8:
    // 0x1f51a8: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1f51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1f51ac:
    // 0x1f51ac: 0xa6a200d8  sh          $v0, 0xD8($s5)
    ctx->pc = 0x1f51acu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 216), (uint16_t)GPR_U32(ctx, 2));
label_1f51b0:
    // 0x1f51b0: 0x87a200cc  lh          $v0, 0xCC($sp)
    ctx->pc = 0x1f51b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_1f51b4:
    // 0x1f51b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f51b8:
    if (ctx->pc == 0x1F51B8u) {
        ctx->pc = 0x1F51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51B4u;
        // 0x1f51b8: 0xa6a200da  sh          $v0, 0xDA($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 218), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F51BCu;
        goto label_1f51bc;
    }
    ctx->pc = 0x1F51B4u;
    {
        const bool branch_taken_0x1f51b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51B4u;
        // 0x1f51b8: 0xa6a200da  sh          $v0, 0xDA($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 218), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51b4) {
            ctx->pc = 0x1F51E8u;
            goto label_1f51e8;
        }
    }
    ctx->pc = 0x1F51BCu;
label_1f51bc:
    // 0x1f51bc: 0x0  nop
    ctx->pc = 0x1f51bcu;
    // NOP
label_1f51c0:
    // 0x1f51c0: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x1f51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_1f51c4:
    // 0x1f51c4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f51c8:
    // 0x1f51c8: 0xa44000d8  sh          $zero, 0xD8($v0)
    ctx->pc = 0x1f51c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 216), (uint16_t)GPR_U32(ctx, 0));
label_1f51cc:
    // 0x1f51cc: 0xa44000c0  sh          $zero, 0xC0($v0)
    ctx->pc = 0x1f51ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 0));
label_1f51d0:
    // 0x1f51d0: 0xa44000a8  sh          $zero, 0xA8($v0)
    ctx->pc = 0x1f51d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 0));
label_1f51d4:
    // 0x1f51d4: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x1f51d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
label_1f51d8:
    // 0x1f51d8: 0xa44000da  sh          $zero, 0xDA($v0)
    ctx->pc = 0x1f51d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 218), (uint16_t)GPR_U32(ctx, 0));
label_1f51dc:
    // 0x1f51dc: 0xa44000c2  sh          $zero, 0xC2($v0)
    ctx->pc = 0x1f51dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 0));
label_1f51e0:
    // 0x1f51e0: 0xa44000aa  sh          $zero, 0xAA($v0)
    ctx->pc = 0x1f51e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 0));
label_1f51e4:
    // 0x1f51e4: 0xa4400092  sh          $zero, 0x92($v0)
    ctx->pc = 0x1f51e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 146), (uint16_t)GPR_U32(ctx, 0));
label_1f51e8:
    // 0x1f51e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f51ec:
    // 0x1f51ec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1f51ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f51f0:
    // 0x1f51f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f51f4:
    // 0x1f51f4: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1f51f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1f51f8:
    // 0x1f51f8: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x1f51f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_1f51fc:
    // 0x1f51fc: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_1f5200:
    if (ctx->pc == 0x1F5200u) {
        ctx->pc = 0x1F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51FCu;
        // 0x1f5200: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5204u;
        goto label_1f5204;
    }
    ctx->pc = 0x1F51FCu;
    {
        const bool branch_taken_0x1f51fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51FCu;
        // 0x1f5200: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51fc) {
            ctx->pc = 0x1F50B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f50b4;
        }
    }
    ctx->pc = 0x1F5204u;
label_1f5204:
    // 0x1f5204: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f5208:
    // 0x1f5208: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1f5208u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1f520c:
    // 0x1f520c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f5210:
    // 0x1f5210: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f5210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1f5214:
    // 0x1f5214: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f5218:
    // 0x1f5218: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f521c:
    // 0x1f521c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1f5220:
    if (ctx->pc == 0x1F5220u) {
        ctx->pc = 0x1F5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F521Cu;
        // 0x1f5220: 0x26f70340  addiu       $s7, $s7, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5224u;
        goto label_1f5224;
    }
    ctx->pc = 0x1F521Cu;
    {
        const bool branch_taken_0x1f521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F521Cu;
        // 0x1f5220: 0x26f70340  addiu       $s7, $s7, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f521c) {
            ctx->pc = 0x1F50A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f50a0;
        }
    }
    ctx->pc = 0x1F5224u;
label_1f5224:
    // 0x1f5224: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1f5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f5228:
    // 0x1f5228: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f5228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f522c:
    // 0x1f522c: 0x24060e84  addiu       $a2, $zero, 0xE84
    ctx->pc = 0x1f522cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3716));
label_1f5230:
    // 0x1f5230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5234:
    // 0x1f5234: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5238:
    // 0x1f5238: 0xc066c72  jal         func_19B1C8
label_1f523c:
    if (ctx->pc == 0x1F523Cu) {
        ctx->pc = 0x1F523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5238u;
        // 0x1f523c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5240u;
        goto label_1f5240;
    }
    ctx->pc = 0x1F5238u;
    SET_GPR_U32(ctx, 31, 0x1F5240u);
    ctx->pc = 0x1F523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5238u;
    // 0x1f523c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1F5240u;
label_1f5240:
    // 0x1f5240: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f5240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f5244:
    // 0x1f5244: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f5244u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5248:
    // 0x1f5248: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f5248u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f524c:
    // 0x1f524c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f524cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5250:
    // 0x1f5250: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5254:
    // 0x1f5254: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5258:
    // 0x1f5258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f525c:
    // 0x1f525c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f525cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5260:
    // 0x1f5260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5264:
    // 0x1f5264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5268:
    // 0x1f5268: 0x3e00008  jr          $ra
label_1f526c:
    if (ctx->pc == 0x1F526Cu) {
        ctx->pc = 0x1F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5268u;
        // 0x1f526c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5270u;
        goto label_1f5270;
    }
    ctx->pc = 0x1F5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5268u;
        // 0x1f526c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5270u;
label_1f5270:
    // 0x1f5270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f5274:
    // 0x1f5274: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
label_1f5278:
    // 0x1f5278: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f527c:
    // 0x1f527c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1f527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1f5280:
    // 0x1f5280: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f5284:
    // 0x1f5284: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f5284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f5288:
    // 0x1f5288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f528c:
    // 0x1f528c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f5290:
    // 0x1f5290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5294:
    // 0x1f5294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5298:
    // 0x1f5298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f529c:
    // 0x1f529c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f52a0:
    // 0x1f52a0: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f52a4:
    // 0x1f52a4: 0xc085cbc  jal         func_2172F0
label_1f52a8:
    if (ctx->pc == 0x1F52A8u) {
        ctx->pc = 0x1F52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52A4u;
        // 0x1f52a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52ACu;
        goto label_1f52ac;
    }
    ctx->pc = 0x1F52A4u;
    SET_GPR_U32(ctx, 31, 0x1F52ACu);
    ctx->pc = 0x1F52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52A4u;
    // 0x1f52a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172F0u;
    { ctx->pc = 0x2172f0; return; }
    ctx->pc = 0x1F52ACu;
label_1f52ac:
    // 0x1f52ac: 0xc078050  jal         func_1E0140
label_1f52b0:
    if (ctx->pc == 0x1F52B0u) {
        ctx->pc = 0x1F52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52ACu;
        // 0x1f52b0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52B4u;
        goto label_1f52b4;
    }
    ctx->pc = 0x1F52ACu;
    SET_GPR_U32(ctx, 31, 0x1F52B4u);
    ctx->pc = 0x1F52B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52ACu;
    // 0x1f52b0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F52B4u;
label_1f52b4:
    // 0x1f52b4: 0xc078070  jal         func_1E01C0
label_1f52b8:
    if (ctx->pc == 0x1F52B8u) {
        ctx->pc = 0x1F52BCu;
        goto label_1f52bc;
    }
    ctx->pc = 0x1F52B4u;
    SET_GPR_U32(ctx, 31, 0x1F52BCu);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1F52BCu;
label_1f52bc:
    // 0x1f52bc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1f52bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1f52c0:
    // 0x1f52c0: 0x842250f4  lh          $v0, 0x50F4($at)
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20724)));
label_1f52c4:
    // 0x1f52c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1f52c8:
    if (ctx->pc == 0x1F52C8u) {
        ctx->pc = 0x1F52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52C4u;
        // 0x1f52c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F52CCu;
        goto label_1f52cc;
    }
    ctx->pc = 0x1F52C4u;
    {
        const bool branch_taken_0x1f52c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52C4u;
        // 0x1f52c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c4) {
            ctx->pc = 0x1F5324u;
            goto label_1f5324;
        }
    }
    ctx->pc = 0x1F52CCu;
label_1f52cc:
    // 0x1f52cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1f52ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1f52d0:
    // 0x1f52d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f52d4:
    // 0x1f52d4: 0x842350ec  lh          $v1, 0x50EC($at)
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20716)));
label_1f52d8:
    // 0x1f52d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f52d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f52dc:
    // 0x1f52dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f52dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f52e0:
    // 0x1f52e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1f52e4:
    // 0x1f52e4: 0x842250ee  lh          $v0, 0x50EE($at)
    ctx->pc = 0x1f52e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20718)));
label_1f52e8:
    // 0x1f52e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f52e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f52ec:
    // 0x1f52ec: 0x0  nop
    ctx->pc = 0x1f52ecu;
    // NOP
label_1f52f0:
    // 0x1f52f0: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x1f52f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_1f52f4:
    // 0x1f52f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f52f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f52f8:
    // 0x1f52f8: 0xc085cf4  jal         func_2173D0
label_1f52fc:
    if (ctx->pc == 0x1F52FCu) {
        ctx->pc = 0x1F52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52F8u;
        // 0x1f52fc: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5300u;
        goto label_1f5300;
    }
    ctx->pc = 0x1F52F8u;
    SET_GPR_U32(ctx, 31, 0x1F5300u);
    ctx->pc = 0x1F52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52F8u;
    // 0x1f52fc: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173D0u;
    { ctx->pc = 0x2173d0; return; }
    ctx->pc = 0x1F5300u;
label_1f5300:
    // 0x1f5300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5304:
    // 0x1f5304: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5308:
    // 0x1f5308: 0xc085cc4  jal         func_217310
label_1f530c:
    if (ctx->pc == 0x1F530Cu) {
        ctx->pc = 0x1F530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5308u;
        // 0x1f530c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5310u;
        goto label_1f5310;
    }
    ctx->pc = 0x1F5308u;
    SET_GPR_U32(ctx, 31, 0x1F5310u);
    ctx->pc = 0x1F530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5308u;
    // 0x1f530c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F5310u;
label_1f5310:
    // 0x1f5310: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f5314:
    // 0x1f5314: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f5314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5318:
    // 0x1f5318: 0xc085c34  jal         func_2170D0
label_1f531c:
    if (ctx->pc == 0x1F531Cu) {
        ctx->pc = 0x1F531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5318u;
        // 0x1f531c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5320u;
        goto label_1f5320;
    }
    ctx->pc = 0x1F5318u;
    SET_GPR_U32(ctx, 31, 0x1F5320u);
    ctx->pc = 0x1F531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5318u;
    // 0x1f531c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F5320u;
label_1f5320:
    // 0x1f5320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5324:
    // 0x1f5324: 0xc07d5e0  jal         func_1F5780
label_1f5328:
    if (ctx->pc == 0x1F5328u) {
        ctx->pc = 0x1F532Cu;
        goto label_1f532c;
    }
    ctx->pc = 0x1F5324u;
    SET_GPR_U32(ctx, 31, 0x1F532Cu);
    ctx->pc = 0x1F5780u;
    { ctx->pc = 0x1f5780; return; }
    ctx->pc = 0x1F532Cu;
label_1f532c:
    // 0x1f532c: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f5330:
    // 0x1f5330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5334:
    if (ctx->pc == 0x1F5334u) {
        ctx->pc = 0x1F5338u;
        goto label_1f5338;
    }
    ctx->pc = 0x1F5330u;
    {
        const bool branch_taken_0x1f5330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5330) {
            ctx->pc = 0x1F5340u;
            goto label_1f5340;
        }
    }
    ctx->pc = 0x1F5338u;
label_1f5338:
    // 0x1f5338: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1f533c:
    if (ctx->pc == 0x1F533Cu) {
        ctx->pc = 0x1F533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5338u;
        // 0x1f533c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5340u;
        goto label_1f5340;
    }
    ctx->pc = 0x1F5338u;
    {
        const bool branch_taken_0x1f5338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5338u;
        // 0x1f533c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5338) {
            ctx->pc = 0x1F54E8u;
            { ctx->pc = 0x1f54e8; return; }
        }
    }
    ctx->pc = 0x1F5340u;
label_1f5340:
    // 0x1f5340: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f5340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f5344:
    // 0x1f5344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5348:
    if (ctx->pc == 0x1F5348u) {
        ctx->pc = 0x1F5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5344u;
        // 0x1f5348: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F534Cu;
        goto label_1f534c;
    }
    ctx->pc = 0x1F5344u;
    {
        const bool branch_taken_0x1f5344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5344u;
        // 0x1f5348: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5344) {
            ctx->pc = 0x1F5354u;
            goto label_1f5354;
        }
    }
    ctx->pc = 0x1F534Cu;
label_1f534c:
    // 0x1f534c: 0x10000066  b           . + 4 + (0x66 << 2)
label_1f5350:
    if (ctx->pc == 0x1F5350u) {
        ctx->pc = 0x1F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F534Cu;
        // 0x1f5350: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5354u;
        goto label_1f5354;
    }
    ctx->pc = 0x1F534Cu;
    {
        const bool branch_taken_0x1f534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F534Cu;
        // 0x1f5350: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f534c) {
            ctx->pc = 0x1F54E8u;
            { ctx->pc = 0x1f54e8; return; }
        }
    }
    ctx->pc = 0x1F5354u;
label_1f5354:
    // 0x1f5354: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f5354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f5358:
    // 0x1f5358: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f5358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f535c:
    // 0x1f535c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f5360:
    // 0x1f5360: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f5364:
    // 0x1f5364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f5368:
    if (ctx->pc == 0x1F5368u) {
        ctx->pc = 0x1F536Cu;
        goto label_1f536c;
    }
    ctx->pc = 0x1F5364u;
    {
        const bool branch_taken_0x1f5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5364) {
            ctx->pc = 0x1F5380u;
            goto label_1f5380;
        }
    }
    ctx->pc = 0x1F536Cu;
label_1f536c:
    // 0x1f536c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5370:
    // 0x1f5370: 0xc05b420  jal         func_16D080
label_1f5374:
    if (ctx->pc == 0x1F5374u) {
        ctx->pc = 0x1F5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5370u;
        // 0x1f5374: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5378u;
        goto label_1f5378;
    }
    ctx->pc = 0x1F5370u;
    SET_GPR_U32(ctx, 31, 0x1F5378u);
    ctx->pc = 0x1F5374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5370u;
    // 0x1f5374: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1F5378u;
label_1f5378:
    // 0x1f5378: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1f537c:
    if (ctx->pc == 0x1F537Cu) {
        ctx->pc = 0x1F5380u;
        goto label_1f5380;
    }
    ctx->pc = 0x1F5378u;
    {
        const bool branch_taken_0x1f5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5378) {
            ctx->pc = 0x1F54E8u;
            { ctx->pc = 0x1f54e8; return; }
        }
    }
    ctx->pc = 0x1F5380u;
label_1f5380:
    // 0x1f5380: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f5380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f5384:
    // 0x1f5384: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f5384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f5388:
    // 0x1f5388: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1f5388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1f538c:
    // 0x1f538c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f5390:
    // 0x1f5390: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1f5394:
    if (ctx->pc == 0x1F5394u) {
        ctx->pc = 0x1F5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5390u;
        // 0x1f5394: 0x2a01000f  slti        $at, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5398u;
        goto label_1f5398;
    }
    ctx->pc = 0x1F5390u;
    {
        const bool branch_taken_0x1f5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5390u;
        // 0x1f5394: 0x2a01000f  slti        $at, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5390) {
            ctx->pc = 0x1F5434u;
            { ctx->pc = 0x1f5434; return; }
        }
    }
    ctx->pc = 0x1F5398u;
label_1f5398:
    // 0x1f5398: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_1f539c:
    if (ctx->pc == 0x1F539Cu) {
        ctx->pc = 0x1F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5398u;
        // 0x1f539c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F53A0u;
        goto label_1f53a0;
    }
    ctx->pc = 0x1F5398u;
    {
        const bool branch_taken_0x1f5398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5398u;
        // 0x1f539c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5398) {
            ctx->pc = 0x1F54D4u;
            { ctx->pc = 0x1f54d4; return; }
        }
    }
    ctx->pc = 0x1F53A0u;
label_1f53a0:
    // 0x1f53a0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1f53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1f53a4:
    // 0x1f53a4: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x1f53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_1f53a8:
    // 0x1f53a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f53a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f53ac:
    // 0x1f53ac: 0x864206d4  lh          $v0, 0x6D4($s2)
    ctx->pc = 0x1f53acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1748)));
    ctx->pc = 0x1f53b0u;
    return;
}
