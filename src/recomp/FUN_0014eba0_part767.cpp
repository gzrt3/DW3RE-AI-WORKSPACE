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


void FUN_0014eba0_part767(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c4c00u: goto label_2c4c00;
        case 0x2c4c04u: goto label_2c4c04;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c10u: goto label_2c4c10;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c1cu: goto label_2c4c1c;
        case 0x2c4c20u: goto label_2c4c20;
        case 0x2c4c24u: goto label_2c4c24;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c2cu: goto label_2c4c2c;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c34u: goto label_2c4c34;
        case 0x2c4c38u: goto label_2c4c38;
        case 0x2c4c3cu: goto label_2c4c3c;
        case 0x2c4c40u: goto label_2c4c40;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c48u: goto label_2c4c48;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c50u: goto label_2c4c50;
        case 0x2c4c54u: goto label_2c4c54;
        case 0x2c4c58u: goto label_2c4c58;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c60u: goto label_2c4c60;
        case 0x2c4c64u: goto label_2c4c64;
        case 0x2c4c68u: goto label_2c4c68;
        case 0x2c4c6cu: goto label_2c4c6c;
        case 0x2c4c70u: goto label_2c4c70;
        case 0x2c4c74u: goto label_2c4c74;
        case 0x2c4c78u: goto label_2c4c78;
        case 0x2c4c7cu: goto label_2c4c7c;
        case 0x2c4c80u: goto label_2c4c80;
        case 0x2c4c84u: goto label_2c4c84;
        case 0x2c4c88u: goto label_2c4c88;
        case 0x2c4c8cu: goto label_2c4c8c;
        case 0x2c4c90u: goto label_2c4c90;
        case 0x2c4c94u: goto label_2c4c94;
        case 0x2c4c98u: goto label_2c4c98;
        case 0x2c4c9cu: goto label_2c4c9c;
        case 0x2c4ca0u: goto label_2c4ca0;
        case 0x2c4ca4u: goto label_2c4ca4;
        case 0x2c4ca8u: goto label_2c4ca8;
        case 0x2c4cacu: goto label_2c4cac;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cb4u: goto label_2c4cb4;
        case 0x2c4cb8u: goto label_2c4cb8;
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4cc0u: goto label_2c4cc0;
        case 0x2c4cc4u: goto label_2c4cc4;
        case 0x2c4cc8u: goto label_2c4cc8;
        case 0x2c4cccu: goto label_2c4ccc;
        case 0x2c4cd0u: goto label_2c4cd0;
        case 0x2c4cd4u: goto label_2c4cd4;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4cdcu: goto label_2c4cdc;
        case 0x2c4ce0u: goto label_2c4ce0;
        case 0x2c4ce4u: goto label_2c4ce4;
        case 0x2c4ce8u: goto label_2c4ce8;
        case 0x2c4cecu: goto label_2c4cec;
        case 0x2c4cf0u: goto label_2c4cf0;
        case 0x2c4cf4u: goto label_2c4cf4;
        case 0x2c4cf8u: goto label_2c4cf8;
        case 0x2c4cfcu: goto label_2c4cfc;
        case 0x2c4d00u: goto label_2c4d00;
        case 0x2c4d04u: goto label_2c4d04;
        case 0x2c4d08u: goto label_2c4d08;
        case 0x2c4d0cu: goto label_2c4d0c;
        case 0x2c4d10u: goto label_2c4d10;
        case 0x2c4d14u: goto label_2c4d14;
        case 0x2c4d18u: goto label_2c4d18;
        case 0x2c4d1cu: goto label_2c4d1c;
        case 0x2c4d20u: goto label_2c4d20;
        case 0x2c4d24u: goto label_2c4d24;
        case 0x2c4d28u: goto label_2c4d28;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4d30u: goto label_2c4d30;
        case 0x2c4d34u: goto label_2c4d34;
        case 0x2c4d38u: goto label_2c4d38;
        case 0x2c4d3cu: goto label_2c4d3c;
        case 0x2c4d40u: goto label_2c4d40;
        case 0x2c4d44u: goto label_2c4d44;
        case 0x2c4d48u: goto label_2c4d48;
        case 0x2c4d4cu: goto label_2c4d4c;
        case 0x2c4d50u: goto label_2c4d50;
        case 0x2c4d54u: goto label_2c4d54;
        case 0x2c4d58u: goto label_2c4d58;
        case 0x2c4d5cu: goto label_2c4d5c;
        case 0x2c4d60u: goto label_2c4d60;
        case 0x2c4d64u: goto label_2c4d64;
        case 0x2c4d68u: goto label_2c4d68;
        case 0x2c4d6cu: goto label_2c4d6c;
        case 0x2c4d70u: goto label_2c4d70;
        case 0x2c4d74u: goto label_2c4d74;
        case 0x2c4d78u: goto label_2c4d78;
        case 0x2c4d7cu: goto label_2c4d7c;
        case 0x2c4d80u: goto label_2c4d80;
        case 0x2c4d84u: goto label_2c4d84;
        case 0x2c4d88u: goto label_2c4d88;
        case 0x2c4d8cu: goto label_2c4d8c;
        case 0x2c4d90u: goto label_2c4d90;
        case 0x2c4d94u: goto label_2c4d94;
        case 0x2c4d98u: goto label_2c4d98;
        case 0x2c4d9cu: goto label_2c4d9c;
        case 0x2c4da0u: goto label_2c4da0;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4da8u: goto label_2c4da8;
        case 0x2c4dacu: goto label_2c4dac;
        case 0x2c4db0u: goto label_2c4db0;
        case 0x2c4db4u: goto label_2c4db4;
        case 0x2c4db8u: goto label_2c4db8;
        case 0x2c4dbcu: goto label_2c4dbc;
        case 0x2c4dc0u: goto label_2c4dc0;
        case 0x2c4dc4u: goto label_2c4dc4;
        case 0x2c4dc8u: goto label_2c4dc8;
        case 0x2c4dccu: goto label_2c4dcc;
        case 0x2c4dd0u: goto label_2c4dd0;
        case 0x2c4dd4u: goto label_2c4dd4;
        case 0x2c4dd8u: goto label_2c4dd8;
        case 0x2c4ddcu: goto label_2c4ddc;
        case 0x2c4de0u: goto label_2c4de0;
        case 0x2c4de4u: goto label_2c4de4;
        case 0x2c4de8u: goto label_2c4de8;
        case 0x2c4decu: goto label_2c4dec;
        case 0x2c4df0u: goto label_2c4df0;
        case 0x2c4df4u: goto label_2c4df4;
        case 0x2c4df8u: goto label_2c4df8;
        case 0x2c4dfcu: goto label_2c4dfc;
        case 0x2c4e00u: goto label_2c4e00;
        case 0x2c4e04u: goto label_2c4e04;
        case 0x2c4e08u: goto label_2c4e08;
        case 0x2c4e0cu: goto label_2c4e0c;
        case 0x2c4e10u: goto label_2c4e10;
        case 0x2c4e14u: goto label_2c4e14;
        case 0x2c4e18u: goto label_2c4e18;
        case 0x2c4e1cu: goto label_2c4e1c;
        case 0x2c4e20u: goto label_2c4e20;
        case 0x2c4e24u: goto label_2c4e24;
        case 0x2c4e28u: goto label_2c4e28;
        case 0x2c4e2cu: goto label_2c4e2c;
        case 0x2c4e30u: goto label_2c4e30;
        case 0x2c4e34u: goto label_2c4e34;
        case 0x2c4e38u: goto label_2c4e38;
        case 0x2c4e3cu: goto label_2c4e3c;
        case 0x2c4e40u: goto label_2c4e40;
        case 0x2c4e44u: goto label_2c4e44;
        case 0x2c4e48u: goto label_2c4e48;
        case 0x2c4e4cu: goto label_2c4e4c;
        case 0x2c4e50u: goto label_2c4e50;
        case 0x2c4e54u: goto label_2c4e54;
        case 0x2c4e58u: goto label_2c4e58;
        case 0x2c4e5cu: goto label_2c4e5c;
        case 0x2c4e60u: goto label_2c4e60;
        case 0x2c4e64u: goto label_2c4e64;
        case 0x2c4e68u: goto label_2c4e68;
        case 0x2c4e6cu: goto label_2c4e6c;
        case 0x2c4e70u: goto label_2c4e70;
        case 0x2c4e74u: goto label_2c4e74;
        case 0x2c4e78u: goto label_2c4e78;
        case 0x2c4e7cu: goto label_2c4e7c;
        case 0x2c4e80u: goto label_2c4e80;
        case 0x2c4e84u: goto label_2c4e84;
        case 0x2c4e88u: goto label_2c4e88;
        case 0x2c4e8cu: goto label_2c4e8c;
        case 0x2c4e90u: goto label_2c4e90;
        case 0x2c4e94u: goto label_2c4e94;
        case 0x2c4e98u: goto label_2c4e98;
        case 0x2c4e9cu: goto label_2c4e9c;
        case 0x2c4ea0u: goto label_2c4ea0;
        case 0x2c4ea4u: goto label_2c4ea4;
        case 0x2c4ea8u: goto label_2c4ea8;
        case 0x2c4eacu: goto label_2c4eac;
        case 0x2c4eb0u: goto label_2c4eb0;
        case 0x2c4eb4u: goto label_2c4eb4;
        case 0x2c4eb8u: goto label_2c4eb8;
        case 0x2c4ebcu: goto label_2c4ebc;
        case 0x2c4ec0u: goto label_2c4ec0;
        case 0x2c4ec4u: goto label_2c4ec4;
        case 0x2c4ec8u: goto label_2c4ec8;
        case 0x2c4eccu: goto label_2c4ecc;
        case 0x2c4ed0u: goto label_2c4ed0;
        case 0x2c4ed4u: goto label_2c4ed4;
        case 0x2c4ed8u: goto label_2c4ed8;
        case 0x2c4edcu: goto label_2c4edc;
        case 0x2c4ee0u: goto label_2c4ee0;
        case 0x2c4ee4u: goto label_2c4ee4;
        case 0x2c4ee8u: goto label_2c4ee8;
        case 0x2c4eecu: goto label_2c4eec;
        case 0x2c4ef0u: goto label_2c4ef0;
        case 0x2c4ef4u: goto label_2c4ef4;
        case 0x2c4ef8u: goto label_2c4ef8;
        case 0x2c4efcu: goto label_2c4efc;
        case 0x2c4f00u: goto label_2c4f00;
        case 0x2c4f04u: goto label_2c4f04;
        case 0x2c4f08u: goto label_2c4f08;
        case 0x2c4f0cu: goto label_2c4f0c;
        case 0x2c4f10u: goto label_2c4f10;
        case 0x2c4f14u: goto label_2c4f14;
        case 0x2c4f18u: goto label_2c4f18;
        case 0x2c4f1cu: goto label_2c4f1c;
        case 0x2c4f20u: goto label_2c4f20;
        case 0x2c4f24u: goto label_2c4f24;
        case 0x2c4f28u: goto label_2c4f28;
        case 0x2c4f2cu: goto label_2c4f2c;
        case 0x2c4f30u: goto label_2c4f30;
        case 0x2c4f34u: goto label_2c4f34;
        case 0x2c4f38u: goto label_2c4f38;
        case 0x2c4f3cu: goto label_2c4f3c;
        case 0x2c4f40u: goto label_2c4f40;
        case 0x2c4f44u: goto label_2c4f44;
        case 0x2c4f48u: goto label_2c4f48;
        case 0x2c4f4cu: goto label_2c4f4c;
        case 0x2c4f50u: goto label_2c4f50;
        case 0x2c4f54u: goto label_2c4f54;
        case 0x2c4f58u: goto label_2c4f58;
        case 0x2c4f5cu: goto label_2c4f5c;
        case 0x2c4f60u: goto label_2c4f60;
        case 0x2c4f64u: goto label_2c4f64;
        case 0x2c4f68u: goto label_2c4f68;
        case 0x2c4f6cu: goto label_2c4f6c;
        case 0x2c4f70u: goto label_2c4f70;
        case 0x2c4f74u: goto label_2c4f74;
        case 0x2c4f78u: goto label_2c4f78;
        case 0x2c4f7cu: goto label_2c4f7c;
        case 0x2c4f80u: goto label_2c4f80;
        case 0x2c4f84u: goto label_2c4f84;
        case 0x2c4f88u: goto label_2c4f88;
        case 0x2c4f8cu: goto label_2c4f8c;
        case 0x2c4f90u: goto label_2c4f90;
        case 0x2c4f94u: goto label_2c4f94;
        case 0x2c4f98u: goto label_2c4f98;
        case 0x2c4f9cu: goto label_2c4f9c;
        case 0x2c4fa0u: goto label_2c4fa0;
        case 0x2c4fa4u: goto label_2c4fa4;
        case 0x2c4fa8u: goto label_2c4fa8;
        case 0x2c4facu: goto label_2c4fac;
        case 0x2c4fb0u: goto label_2c4fb0;
        case 0x2c4fb4u: goto label_2c4fb4;
        case 0x2c4fb8u: goto label_2c4fb8;
        case 0x2c4fbcu: goto label_2c4fbc;
        case 0x2c4fc0u: goto label_2c4fc0;
        case 0x2c4fc4u: goto label_2c4fc4;
        case 0x2c4fc8u: goto label_2c4fc8;
        case 0x2c4fccu: goto label_2c4fcc;
        case 0x2c4fd0u: goto label_2c4fd0;
        case 0x2c4fd4u: goto label_2c4fd4;
        case 0x2c4fd8u: goto label_2c4fd8;
        case 0x2c4fdcu: goto label_2c4fdc;
        case 0x2c4fe0u: goto label_2c4fe0;
        case 0x2c4fe4u: goto label_2c4fe4;
        case 0x2c4fe8u: goto label_2c4fe8;
        case 0x2c4fecu: goto label_2c4fec;
        case 0x2c4ff0u: goto label_2c4ff0;
        case 0x2c4ff4u: goto label_2c4ff4;
        case 0x2c4ff8u: goto label_2c4ff8;
        case 0x2c4ffcu: goto label_2c4ffc;
        case 0x2c5000u: goto label_2c5000;
        case 0x2c5004u: goto label_2c5004;
        case 0x2c5008u: goto label_2c5008;
        case 0x2c500cu: goto label_2c500c;
        case 0x2c5010u: goto label_2c5010;
        case 0x2c5014u: goto label_2c5014;
        case 0x2c5018u: goto label_2c5018;
        case 0x2c501cu: goto label_2c501c;
        case 0x2c5020u: goto label_2c5020;
        case 0x2c5024u: goto label_2c5024;
        case 0x2c5028u: goto label_2c5028;
        case 0x2c502cu: goto label_2c502c;
        case 0x2c5030u: goto label_2c5030;
        case 0x2c5034u: goto label_2c5034;
        case 0x2c5038u: goto label_2c5038;
        case 0x2c503cu: goto label_2c503c;
        case 0x2c5040u: goto label_2c5040;
        case 0x2c5044u: goto label_2c5044;
        case 0x2c5048u: goto label_2c5048;
        case 0x2c504cu: goto label_2c504c;
        case 0x2c5050u: goto label_2c5050;
        case 0x2c5054u: goto label_2c5054;
        case 0x2c5058u: goto label_2c5058;
        case 0x2c505cu: goto label_2c505c;
        case 0x2c5060u: goto label_2c5060;
        case 0x2c5064u: goto label_2c5064;
        case 0x2c5068u: goto label_2c5068;
        case 0x2c506cu: goto label_2c506c;
        case 0x2c5070u: goto label_2c5070;
        case 0x2c5074u: goto label_2c5074;
        case 0x2c5078u: goto label_2c5078;
        case 0x2c507cu: goto label_2c507c;
        case 0x2c5080u: goto label_2c5080;
        case 0x2c5084u: goto label_2c5084;
        case 0x2c5088u: goto label_2c5088;
        case 0x2c508cu: goto label_2c508c;
        case 0x2c5090u: goto label_2c5090;
        case 0x2c5094u: goto label_2c5094;
        case 0x2c5098u: goto label_2c5098;
        case 0x2c509cu: goto label_2c509c;
        case 0x2c50a0u: goto label_2c50a0;
        case 0x2c50a4u: goto label_2c50a4;
        case 0x2c50a8u: goto label_2c50a8;
        case 0x2c50acu: goto label_2c50ac;
        case 0x2c50b0u: goto label_2c50b0;
        case 0x2c50b4u: goto label_2c50b4;
        case 0x2c50b8u: goto label_2c50b8;
        case 0x2c50bcu: goto label_2c50bc;
        case 0x2c50c0u: goto label_2c50c0;
        case 0x2c50c4u: goto label_2c50c4;
        case 0x2c50c8u: goto label_2c50c8;
        case 0x2c50ccu: goto label_2c50cc;
        case 0x2c50d0u: goto label_2c50d0;
        case 0x2c50d4u: goto label_2c50d4;
        case 0x2c50d8u: goto label_2c50d8;
        case 0x2c50dcu: goto label_2c50dc;
        case 0x2c50e0u: goto label_2c50e0;
        case 0x2c50e4u: goto label_2c50e4;
        case 0x2c50e8u: goto label_2c50e8;
        case 0x2c50ecu: goto label_2c50ec;
        case 0x2c50f0u: goto label_2c50f0;
        case 0x2c50f4u: goto label_2c50f4;
        case 0x2c50f8u: goto label_2c50f8;
        case 0x2c50fcu: goto label_2c50fc;
        case 0x2c5100u: goto label_2c5100;
        case 0x2c5104u: goto label_2c5104;
        case 0x2c5108u: goto label_2c5108;
        case 0x2c510cu: goto label_2c510c;
        case 0x2c5110u: goto label_2c5110;
        case 0x2c5114u: goto label_2c5114;
        case 0x2c5118u: goto label_2c5118;
        case 0x2c511cu: goto label_2c511c;
        case 0x2c5120u: goto label_2c5120;
        case 0x2c5124u: goto label_2c5124;
        case 0x2c5128u: goto label_2c5128;
        case 0x2c512cu: goto label_2c512c;
        case 0x2c5130u: goto label_2c5130;
        case 0x2c5134u: goto label_2c5134;
        case 0x2c5138u: goto label_2c5138;
        case 0x2c513cu: goto label_2c513c;
        case 0x2c5140u: goto label_2c5140;
        case 0x2c5144u: goto label_2c5144;
        case 0x2c5148u: goto label_2c5148;
        case 0x2c514cu: goto label_2c514c;
        case 0x2c5150u: goto label_2c5150;
        case 0x2c5154u: goto label_2c5154;
        case 0x2c5158u: goto label_2c5158;
        case 0x2c515cu: goto label_2c515c;
        case 0x2c5160u: goto label_2c5160;
        case 0x2c5164u: goto label_2c5164;
        case 0x2c5168u: goto label_2c5168;
        case 0x2c516cu: goto label_2c516c;
        case 0x2c5170u: goto label_2c5170;
        case 0x2c5174u: goto label_2c5174;
        case 0x2c5178u: goto label_2c5178;
        case 0x2c517cu: goto label_2c517c;
        case 0x2c5180u: goto label_2c5180;
        case 0x2c5184u: goto label_2c5184;
        case 0x2c5188u: goto label_2c5188;
        case 0x2c518cu: goto label_2c518c;
        case 0x2c5190u: goto label_2c5190;
        case 0x2c5194u: goto label_2c5194;
        case 0x2c5198u: goto label_2c5198;
        case 0x2c519cu: goto label_2c519c;
        case 0x2c51a0u: goto label_2c51a0;
        case 0x2c51a4u: goto label_2c51a4;
        case 0x2c51a8u: goto label_2c51a8;
        case 0x2c51acu: goto label_2c51ac;
        case 0x2c51b0u: goto label_2c51b0;
        case 0x2c51b4u: goto label_2c51b4;
        case 0x2c51b8u: goto label_2c51b8;
        case 0x2c51bcu: goto label_2c51bc;
        case 0x2c51c0u: goto label_2c51c0;
        case 0x2c51c4u: goto label_2c51c4;
        case 0x2c51c8u: goto label_2c51c8;
        case 0x2c51ccu: goto label_2c51cc;
        case 0x2c51d0u: goto label_2c51d0;
        case 0x2c51d4u: goto label_2c51d4;
        case 0x2c51d8u: goto label_2c51d8;
        case 0x2c51dcu: goto label_2c51dc;
        case 0x2c51e0u: goto label_2c51e0;
        case 0x2c51e4u: goto label_2c51e4;
        case 0x2c51e8u: goto label_2c51e8;
        case 0x2c51ecu: goto label_2c51ec;
        case 0x2c51f0u: goto label_2c51f0;
        case 0x2c51f4u: goto label_2c51f4;
        case 0x2c51f8u: goto label_2c51f8;
        case 0x2c51fcu: goto label_2c51fc;
        case 0x2c5200u: goto label_2c5200;
        case 0x2c5204u: goto label_2c5204;
        case 0x2c5208u: goto label_2c5208;
        case 0x2c520cu: goto label_2c520c;
        case 0x2c5210u: goto label_2c5210;
        case 0x2c5214u: goto label_2c5214;
        case 0x2c5218u: goto label_2c5218;
        case 0x2c521cu: goto label_2c521c;
        case 0x2c5220u: goto label_2c5220;
        case 0x2c5224u: goto label_2c5224;
        case 0x2c5228u: goto label_2c5228;
        case 0x2c522cu: goto label_2c522c;
        case 0x2c5230u: goto label_2c5230;
        case 0x2c5234u: goto label_2c5234;
        case 0x2c5238u: goto label_2c5238;
        case 0x2c523cu: goto label_2c523c;
        case 0x2c5240u: goto label_2c5240;
        case 0x2c5244u: goto label_2c5244;
        case 0x2c5248u: goto label_2c5248;
        case 0x2c524cu: goto label_2c524c;
        case 0x2c5250u: goto label_2c5250;
        case 0x2c5254u: goto label_2c5254;
        case 0x2c5258u: goto label_2c5258;
        case 0x2c525cu: goto label_2c525c;
        case 0x2c5260u: goto label_2c5260;
        case 0x2c5264u: goto label_2c5264;
        case 0x2c5268u: goto label_2c5268;
        case 0x2c526cu: goto label_2c526c;
        case 0x2c5270u: goto label_2c5270;
        case 0x2c5274u: goto label_2c5274;
        case 0x2c5278u: goto label_2c5278;
        case 0x2c527cu: goto label_2c527c;
        case 0x2c5280u: goto label_2c5280;
        case 0x2c5284u: goto label_2c5284;
        case 0x2c5288u: goto label_2c5288;
        case 0x2c528cu: goto label_2c528c;
        case 0x2c5290u: goto label_2c5290;
        case 0x2c5294u: goto label_2c5294;
        case 0x2c5298u: goto label_2c5298;
        case 0x2c529cu: goto label_2c529c;
        case 0x2c52a0u: goto label_2c52a0;
        case 0x2c52a4u: goto label_2c52a4;
        case 0x2c52a8u: goto label_2c52a8;
        case 0x2c52acu: goto label_2c52ac;
        case 0x2c52b0u: goto label_2c52b0;
        case 0x2c52b4u: goto label_2c52b4;
        case 0x2c52b8u: goto label_2c52b8;
        case 0x2c52bcu: goto label_2c52bc;
        case 0x2c52c0u: goto label_2c52c0;
        case 0x2c52c4u: goto label_2c52c4;
        case 0x2c52c8u: goto label_2c52c8;
        case 0x2c52ccu: goto label_2c52cc;
        case 0x2c52d0u: goto label_2c52d0;
        case 0x2c52d4u: goto label_2c52d4;
        case 0x2c52d8u: goto label_2c52d8;
        case 0x2c52dcu: goto label_2c52dc;
        case 0x2c52e0u: goto label_2c52e0;
        case 0x2c52e4u: goto label_2c52e4;
        case 0x2c52e8u: goto label_2c52e8;
        case 0x2c52ecu: goto label_2c52ec;
        case 0x2c52f0u: goto label_2c52f0;
        case 0x2c52f4u: goto label_2c52f4;
        case 0x2c52f8u: goto label_2c52f8;
        case 0x2c52fcu: goto label_2c52fc;
        case 0x2c5300u: goto label_2c5300;
        case 0x2c5304u: goto label_2c5304;
        case 0x2c5308u: goto label_2c5308;
        case 0x2c530cu: goto label_2c530c;
        case 0x2c5310u: goto label_2c5310;
        case 0x2c5314u: goto label_2c5314;
        case 0x2c5318u: goto label_2c5318;
        case 0x2c531cu: goto label_2c531c;
        case 0x2c5320u: goto label_2c5320;
        case 0x2c5324u: goto label_2c5324;
        case 0x2c5328u: goto label_2c5328;
        case 0x2c532cu: goto label_2c532c;
        case 0x2c5330u: goto label_2c5330;
        case 0x2c5334u: goto label_2c5334;
        case 0x2c5338u: goto label_2c5338;
        case 0x2c533cu: goto label_2c533c;
        case 0x2c5340u: goto label_2c5340;
        case 0x2c5344u: goto label_2c5344;
        case 0x2c5348u: goto label_2c5348;
        case 0x2c534cu: goto label_2c534c;
        case 0x2c5350u: goto label_2c5350;
        case 0x2c5354u: goto label_2c5354;
        case 0x2c5358u: goto label_2c5358;
        case 0x2c535cu: goto label_2c535c;
        case 0x2c5360u: goto label_2c5360;
        case 0x2c5364u: goto label_2c5364;
        case 0x2c5368u: goto label_2c5368;
        case 0x2c536cu: goto label_2c536c;
        case 0x2c5370u: goto label_2c5370;
        case 0x2c5374u: goto label_2c5374;
        case 0x2c5378u: goto label_2c5378;
        case 0x2c537cu: goto label_2c537c;
        case 0x2c5380u: goto label_2c5380;
        case 0x2c5384u: goto label_2c5384;
        case 0x2c5388u: goto label_2c5388;
        case 0x2c538cu: goto label_2c538c;
        case 0x2c5390u: goto label_2c5390;
        case 0x2c5394u: goto label_2c5394;
        case 0x2c5398u: goto label_2c5398;
        case 0x2c539cu: goto label_2c539c;
        case 0x2c53a0u: goto label_2c53a0;
        case 0x2c53a4u: goto label_2c53a4;
        case 0x2c53a8u: goto label_2c53a8;
        case 0x2c53acu: goto label_2c53ac;
        case 0x2c53b0u: goto label_2c53b0;
        case 0x2c53b4u: goto label_2c53b4;
        case 0x2c53b8u: goto label_2c53b8;
        case 0x2c53bcu: goto label_2c53bc;
        case 0x2c53c0u: goto label_2c53c0;
        case 0x2c53c4u: goto label_2c53c4;
        case 0x2c53c8u: goto label_2c53c8;
        case 0x2c53ccu: goto label_2c53cc;
        default: return;
    }

label_2c4c00:
    // 0x2c4c00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c04:
    // 0x2c4c04: 0x81f118  .word       0x0081F118                   # mult        $fp, $a0, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2c4c08:
    // 0x2c4c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c0c:
    // 0x2c4c0c: 0x42f918  .word       0x0042F918                   # mult        $ra, $v0, $v0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4c10:
    // 0x2c4c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c14:
    // 0x2c4c14: 0x124212c  .word       0x0124212C                   # dadd        $a0, $t1, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c14u;
    { int64_t a = (int64_t)GPR_S64(ctx, 9); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2c4c18:
    // 0x2c4c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c1c:
    // 0x2c4c1c: 0xd019bd  .word       0x00D019BD                   # INVALID     $a2, $s0, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4C1C raw=0x00D019BD");
 /* MITIGATED */
label_2c4c20:
    // 0x2c4c20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c24:
    // 0x2c4c24: 0xd0240a  .word       0x00D0240A                   # movz        $a0, $a2, $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c24u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2c4c28:
    // 0x2c4c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c2c:
    // 0x2c4c2c: 0xd119bd  .word       0x00D119BD                   # INVALID     $a2, $s1, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c2cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4C2C raw=0x00D119BD");
 /* MITIGATED */
label_2c4c30:
    // 0x2c4c30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c34:
    // 0x2c4c34: 0xd1244a  .word       0x00D1244A                   # movz        $a0, $a2, $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c34u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2c4c38:
    // 0x2c4c38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c3c:
    // 0x2c4c3c: 0xd219bd  .word       0x00D219BD                   # INVALID     $a2, $s2, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4C3C raw=0x00D219BD");
 /* MITIGATED */
label_2c4c40:
    // 0x2c4c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c44:
    // 0x2c4c44: 0xd2248a  .word       0x00D2248A                   # movz        $a0, $a2, $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c44u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2c4c48:
    // 0x2c4c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c4c:
    // 0x2c4c4c: 0xd319bd  .word       0x00D319BD                   # INVALID     $a2, $s3, 0x19BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c4cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4C4C raw=0x00D319BD");
 /* MITIGATED */
label_2c4c50:
    // 0x2c4c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c54:
    // 0x2c4c54: 0xd324ca  .word       0x00D324CA                   # movz        $a0, $a2, $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c54u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_2c4c58:
    // 0x2c4c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c5c:
    // 0x2c4c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4c60:
    // 0x2c4c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c64:
    // 0x2c4c64: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4c64u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4c68:
    // 0x2c4c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c6c:
    // 0x2c4c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4c70:
    // 0x2c4c70: 0x420f0696  .word       0x420F0696                   # INVALID     $s0, $t7, 0x696 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4c70u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2C4C70 raw=0x420F0696");
 /* MITIGATED */
label_2c4c74:
    // 0x2c4c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4c78:
    // 0x2c4c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c7c:
    // 0x2c4c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4c80:
    // 0x2c4c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c84:
    // 0x2c4c84: 0x102f8d8  .word       0x0102F8D8                   # mult        $ra, $t0, $v0 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4c88:
    // 0x2c4c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c8c:
    // 0x2c4c8c: 0x41f0d8  .word       0x0041F0D8                   # mult        $fp, $v0, $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2c4c90:
    // 0x2c4c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c94:
    // 0x2c4c94: 0xa318ec  .word       0x00A318EC                   # dadd        $v1, $a1, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4c94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2c4c98:
    // 0x2c4c98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4c98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4c9c:
    // 0x2c4c9c: 0x101f918  .word       0x0101F918                   # mult        $ra, $t0, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4ca0:
    // 0x2c4ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ca4:
    // 0x2c4ca4: 0x42f918  .word       0x0042F918                   # mult        $ra, $v0, $v0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4ca8:
    // 0x2c4ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cac:
    // 0x2c4cac: 0xa4212c  .word       0x00A4212C                   # dadd        $a0, $a1, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2c4cb0:
    // 0x2c4cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cb4:
    // 0x2c4cb4: 0x15019bc  .word       0x015019BC                   # dsll32      $v1, $s0, 6 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 6));
label_2c4cb8:
    // 0x2c4cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cbc:
    // 0x2c4cbc: 0x150240a  .word       0x0150240A                   # movz        $a0, $t2, $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cbcu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
label_2c4cc0:
    // 0x2c4cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cc4:
    // 0x2c4cc4: 0x15119bc  .word       0x015119BC                   # dsll32      $v1, $s1, 6 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 6));
label_2c4cc8:
    // 0x2c4cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ccc:
    // 0x2c4ccc: 0x151244a  .word       0x0151244A                   # movz        $a0, $t2, $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cccu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
label_2c4cd0:
    // 0x2c4cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cd4:
    // 0x2c4cd4: 0x15219bc  .word       0x015219BC                   # dsll32      $v1, $s2, 6 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 6));
label_2c4cd8:
    // 0x2c4cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cdc:
    // 0x2c4cdc: 0x152248a  .word       0x0152248A                   # movz        $a0, $t2, $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cdcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
label_2c4ce0:
    // 0x2c4ce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ce4:
    // 0x2c4ce4: 0x15319bc  .word       0x015319BC                   # dsll32      $v1, $s3, 6 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 6));
label_2c4ce8:
    // 0x2c4ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cec:
    // 0x2c4cec: 0x15324ca  .word       0x015324CA                   # movz        $a0, $t2, $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4cecu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
label_2c4cf0:
    // 0x2c4cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cf4:
    // 0x2c4cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4cf8:
    // 0x2c4cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4cfc:
    // 0x2c4cfc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4cfcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4d00:
    // 0x2c4d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d04:
    // 0x2c4d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4d08:
    // 0x2c4d08: 0x420f0683  .word       0x420F0683                   # INVALID     $s0, $t7, 0x683 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4d08u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3 at 0x2C4D08 raw=0x420F0683");
 /* MITIGATED */
label_2c4d0c:
    // 0x2c4d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4d10:
    // 0x2c4d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d14:
    // 0x2c4d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4d18:
    // 0x2c4d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d1c:
    // 0x2c4d1c: 0x102f8d8  .word       0x0102F8D8                   # mult        $ra, $t0, $v0 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4d20:
    // 0x2c4d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d24:
    // 0x2c4d24: 0x81f8d8  .word       0x0081F8D8                   # mult        $ra, $a0, $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4d28:
    // 0x2c4d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d2c:
    // 0x2c4d2c: 0x6318ec  .word       0x006318EC                   # dadd        $v1, $v1, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_2c4d30:
    // 0x2c4d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d34:
    // 0x2c4d34: 0x101f118  .word       0x0101F118                   # mult        $fp, $t0, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2c4d38:
    // 0x2c4d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d3c:
    // 0x2c4d3c: 0x82f918  .word       0x0082F918                   # mult        $ra, $a0, $v0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4d40:
    // 0x2c4d40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d44:
    // 0x2c4d44: 0x64212c  .word       0x0064212C                   # dadd        $a0, $v1, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2c4d48:
    // 0x2c4d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d4c:
    // 0x2c4d4c: 0x19019bc  .word       0x019019BC                   # dsll32      $v1, $s0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 6));
label_2c4d50:
    // 0x2c4d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d54:
    // 0x2c4d54: 0x1902409  .word       0x01902409                   # jalr        $a0, $t4 # 00100400 <InstrIdType: CPU_SPECIAL>
label_2c4d58:
    if (ctx->pc == 0x2C4D58u) {
        ctx->pc = 0x2C4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D54u;
        // 0x2c4d58: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D5Cu;
        goto label_2c4d5c;
    }
    ctx->pc = 0x2C4D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 4, 0x2C4D5Cu);
        ctx->pc = 0x2C4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D54u;
        // 0x2c4d58: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D54u, 0x2C4D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4D5Cu;
label_2c4d5c:
    // 0x2c4d5c: 0x19119bc  .word       0x019119BC                   # dsll32      $v1, $s1, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 6));
label_2c4d60:
    // 0x2c4d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d64:
    // 0x2c4d64: 0x1912449  .word       0x01912449                   # jalr        $a0, $t4 # 00110440 <InstrIdType: CPU_SPECIAL>
label_2c4d68:
    if (ctx->pc == 0x2C4D68u) {
        ctx->pc = 0x2C4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D64u;
        // 0x2c4d68: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D6Cu;
        goto label_2c4d6c;
    }
    ctx->pc = 0x2C4D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 4, 0x2C4D6Cu);
        ctx->pc = 0x2C4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D64u;
        // 0x2c4d68: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D64u, 0x2C4D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4D6Cu;
label_2c4d6c:
    // 0x2c4d6c: 0x19219bc  .word       0x019219BC                   # dsll32      $v1, $s2, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 6));
label_2c4d70:
    // 0x2c4d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d74:
    // 0x2c4d74: 0x1922489  .word       0x01922489                   # jalr        $a0, $t4 # 00120480 <InstrIdType: CPU_SPECIAL>
label_2c4d78:
    if (ctx->pc == 0x2C4D78u) {
        ctx->pc = 0x2C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D74u;
        // 0x2c4d78: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D7Cu;
        goto label_2c4d7c;
    }
    ctx->pc = 0x2C4D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 4, 0x2C4D7Cu);
        ctx->pc = 0x2C4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D74u;
        // 0x2c4d78: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D74u, 0x2C4D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4D7Cu;
label_2c4d7c:
    // 0x2c4d7c: 0x19319bc  .word       0x019319BC                   # dsll32      $v1, $s3, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 6));
label_2c4d80:
    // 0x2c4d80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d84:
    // 0x2c4d84: 0x19324c9  .word       0x019324C9                   # jalr        $a0, $t4 # 001304C0 <InstrIdType: CPU_SPECIAL>
label_2c4d88:
    if (ctx->pc == 0x2C4D88u) {
        ctx->pc = 0x2C4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D84u;
        // 0x2c4d88: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4D8Cu;
        goto label_2c4d8c;
    }
    ctx->pc = 0x2C4D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 4, 0x2C4D8Cu);
        ctx->pc = 0x2C4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D84u;
        // 0x2c4d88: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D84u, 0x2C4D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4D8Cu;
label_2c4d8c:
    // 0x2c4d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4d90:
    // 0x2c4d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d94:
    // 0x2c4d94: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4d94u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4d98:
    // 0x2c4d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4d9c:
    // 0x2c4d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4da0:
    // 0x2c4da0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2c4da0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2c4da4:
    // 0x2c4da4: 0x0  nop
    ctx->pc = 0x2c4da4u;
    // NOP
label_2c4da8:
    // 0x2c4da8: 0x0  nop
    ctx->pc = 0x2c4da8u;
    // NOP
label_2c4dac:
    // 0x2c4dac: 0x0  nop
    ctx->pc = 0x2c4dacu;
    // NOP
label_2c4db0:
    // 0x2c4db0: 0x0  nop
    ctx->pc = 0x2c4db0u;
    // NOP
label_2c4db4:
    // 0x2c4db4: 0x0  nop
    ctx->pc = 0x2c4db4u;
    // NOP
label_2c4db8:
    // 0x2c4db8: 0x0  nop
    ctx->pc = 0x2c4db8u;
    // NOP
label_2c4dbc:
    // 0x2c4dbc: 0x0  nop
    ctx->pc = 0x2c4dbcu;
    // NOP
label_2c4dc0:
    // 0x2c4dc0: 0x0  nop
    ctx->pc = 0x2c4dc0u;
    // NOP
label_2c4dc4:
    // 0x2c4dc4: 0x0  nop
    ctx->pc = 0x2c4dc4u;
    // NOP
label_2c4dc8:
    // 0x2c4dc8: 0x0  nop
    ctx->pc = 0x2c4dc8u;
    // NOP
label_2c4dcc:
    // 0x2c4dcc: 0x0  nop
    ctx->pc = 0x2c4dccu;
    // NOP
label_2c4dd0:
    // 0x2c4dd0: 0x0  nop
    ctx->pc = 0x2c4dd0u;
    // NOP
label_2c4dd4:
    // 0x2c4dd4: 0x0  nop
    ctx->pc = 0x2c4dd4u;
    // NOP
label_2c4dd8:
    // 0x2c4dd8: 0x0  nop
    ctx->pc = 0x2c4dd8u;
    // NOP
label_2c4ddc:
    // 0x2c4ddc: 0x0  nop
    ctx->pc = 0x2c4ddcu;
    // NOP
label_2c4de0:
    // 0x2c4de0: 0x0  nop
    ctx->pc = 0x2c4de0u;
    // NOP
label_2c4de4:
    // 0x2c4de4: 0x0  nop
    ctx->pc = 0x2c4de4u;
    // NOP
label_2c4de8:
    // 0x2c4de8: 0x0  nop
    ctx->pc = 0x2c4de8u;
    // NOP
label_2c4dec:
    // 0x2c4dec: 0x0  nop
    ctx->pc = 0x2c4decu;
    // NOP
label_2c4df0:
    // 0x2c4df0: 0x0  nop
    ctx->pc = 0x2c4df0u;
    // NOP
label_2c4df4:
    // 0x2c4df4: 0x0  nop
    ctx->pc = 0x2c4df4u;
    // NOP
label_2c4df8:
    // 0x2c4df8: 0x0  nop
    ctx->pc = 0x2c4df8u;
    // NOP
label_2c4dfc:
    // 0x2c4dfc: 0x0  nop
    ctx->pc = 0x2c4dfcu;
    // NOP
label_2c4e00:
    // 0x2c4e00: 0x10000001  b           . + 4 + (0x1 << 2)
label_2c4e04:
    if (ctx->pc == 0x2C4E04u) {
        ctx->pc = 0x2C4E08u;
        goto label_2c4e08;
    }
    ctx->pc = 0x2C4E00u;
    {
        const bool branch_taken_0x2c4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e00) {
            ctx->pc = 0x2C4E08u;
            goto label_2c4e08;
        }
    }
    ctx->pc = 0x2C4E08u;
label_2c4e08:
    // 0x2c4e08: 0x0  nop
    ctx->pc = 0x2c4e08u;
    // NOP
label_2c4e0c:
    // 0x2c4e0c: 0x0  nop
    ctx->pc = 0x2c4e0cu;
    // NOP
label_2c4e10:
    // 0x2c4e10: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4e10u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c4e14:
    // 0x2c4e14: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2c4e14u;
    // NOP (addi to $zero)
label_2c4e18:
    // 0x2c4e18: 0x0  nop
    ctx->pc = 0x2c4e18u;
    // NOP
label_2c4e1c:
    // 0x2c4e1c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2c4e20:
    if (ctx->pc == 0x2C4E20u) {
        ctx->pc = 0x2C4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E1Cu;
        // 0x2c4e20: 0x10000028  b           . + 4 + (0x28 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C4E20 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E24u;
        goto label_2c4e24;
    }
    ctx->pc = 0x2C4E1Cu;
    {
        const bool branch_taken_0x2c4e1c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2C4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E1Cu;
        // 0x2c4e20: 0x10000028  b           . + 4 + (0x28 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C4E20 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e1c) {
            ctx->pc = 0x2C4E20u;
            goto label_2c4e20;
        }
    }
    ctx->pc = 0x2C4E24u;
label_2c4e24:
    // 0x2c4e24: 0x0  nop
    ctx->pc = 0x2c4e24u;
    // NOP
label_2c4e28:
    // 0x2c4e28: 0x0  nop
    ctx->pc = 0x2c4e28u;
    // NOP
label_2c4e2c:
    // 0x2c4e2c: 0x0  nop
    ctx->pc = 0x2c4e2cu;
    // NOP
label_2c4e30:
    // 0x2c4e30: 0x0  nop
    ctx->pc = 0x2c4e30u;
    // NOP
label_2c4e34:
    // 0x2c4e34: 0x4a4e0300  vaddx.z     $vf12, $vf0, $vf14x
    ctx->pc = 0x2c4e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2c4e38:
    // 0x2c4e38: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_2c4e3c:
    if (ctx->pc == 0x2C4E3Cu) {
        ctx->pc = 0x2C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E38u;
        // 0x2c4e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E40u;
        goto label_2c4e40;
    }
    ctx->pc = 0x2C4E38u;
    {
        const bool branch_taken_0x2c4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E38u;
        // 0x2c4e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e38) {
            ctx->pc = 0x2C4E3Cu;
            goto label_2c4e3c;
        }
    }
    ctx->pc = 0x2C4E40u;
label_2c4e40:
    // 0x2c4e40: 0x10030004  beq         $zero, $v1, . + 4 + (0x4 << 2)
label_2c4e44:
    if (ctx->pc == 0x2C4E44u) {
        ctx->pc = 0x2C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E40u;
        // 0x2c4e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E48u;
        goto label_2c4e48;
    }
    ctx->pc = 0x2C4E40u;
    {
        const bool branch_taken_0x2c4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E40u;
        // 0x2c4e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e40) {
            ctx->pc = 0x2C4E54u;
            goto label_2c4e54;
        }
    }
    ctx->pc = 0x2C4E48u;
label_2c4e48:
    // 0x2c4e48: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_2c4e4c:
    if (ctx->pc == 0x2C4E4Cu) {
        ctx->pc = 0x2C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E48u;
        // 0x2c4e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E50u;
        goto label_2c4e50;
    }
    ctx->pc = 0x2C4E48u;
    {
        const bool branch_taken_0x2c4e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E48u;
        // 0x2c4e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e48) {
            ctx->pc = 0x2C4E6Cu;
            goto label_2c4e6c;
        }
    }
    ctx->pc = 0x2C4E50u;
label_2c4e50:
    // 0x2c4e50: 0x1004000a  beq         $zero, $a0, . + 4 + (0xA << 2)
label_2c4e54:
    if (ctx->pc == 0x2C4E54u) {
        ctx->pc = 0x2C4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E50u;
        // 0x2c4e54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E58u;
        goto label_2c4e58;
    }
    ctx->pc = 0x2C4E50u;
    {
        const bool branch_taken_0x2c4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E50u;
        // 0x2c4e54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e50) {
            ctx->pc = 0x2C4E7Cu;
            goto label_2c4e7c;
        }
    }
    ctx->pc = 0x2C4E58u;
label_2c4e58:
    // 0x2c4e58: 0x1005000c  beq         $zero, $a1, . + 4 + (0xC << 2)
label_2c4e5c:
    if (ctx->pc == 0x2C4E5Cu) {
        ctx->pc = 0x2C4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E58u;
        // 0x2c4e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4E60u;
        goto label_2c4e60;
    }
    ctx->pc = 0x2C4E58u;
    {
        const bool branch_taken_0x2c4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E58u;
        // 0x2c4e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e58) {
            ctx->pc = 0x2C4E8Cu;
            goto label_2c4e8c;
        }
    }
    ctx->pc = 0x2C4E60u;
label_2c4e60:
    // 0x2c4e60: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c4e64:
    // 0x2c4e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e68:
    // 0x2c4e68: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c4e6c:
    // 0x2c4e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e70:
    // 0x2c4e70: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c4e74:
    // 0x2c4e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e78:
    // 0x2c4e78: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c4e7c:
    // 0x2c4e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e80:
    // 0x2c4e80: 0x81e91b7c  lb          $t1, 0x1B7C($t7)
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c4e84:
    // 0x2c4e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e88:
    // 0x2c4e88: 0x81ea1b7c  lb          $t2, 0x1B7C($t7)
    ctx->pc = 0x2c4e88u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c4e8c:
    // 0x2c4e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e90:
    // 0x2c4e90: 0x81eb1b7c  lb          $t3, 0x1B7C($t7)
    ctx->pc = 0x2c4e90u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c4e94:
    // 0x2c4e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4e98:
    // 0x2c4e98: 0x81ec1b7c  lb          $t4, 0x1B7C($t7)
    ctx->pc = 0x2c4e98u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c4e9c:
    // 0x2c4e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ea0:
    // 0x2c4ea0: 0x81e5137c  lb          $a1, 0x137C($t7)
    ctx->pc = 0x2c4ea0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c4ea4:
    // 0x2c4ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ea8:
    // 0x2c4ea8: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2c4ea8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c4eac:
    // 0x2c4eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4eb0:
    // 0x2c4eb0: 0x81ed237c  lb          $t5, 0x237C($t7)
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2c4eb4:
    // 0x2c4eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4eb8:
    // 0x2c4eb8: 0x81ee237c  lb          $t6, 0x237C($t7)
    ctx->pc = 0x2c4eb8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2c4ebc:
    // 0x2c4ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ec0:
    // 0x2c4ec0: 0x1f12800  .word       0x01F12800                   # sll         $a1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_2c4ec4:
    // 0x2c4ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ec8:
    // 0x2c4ec8: 0x11e407ff  beq         $t7, $a0, . + 4 + (0x7FF << 2)
label_2c4ecc:
    if (ctx->pc == 0x2C4ECCu) {
        ctx->pc = 0x2C4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EC8u;
        // 0x2c4ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4ED0u;
        goto label_2c4ed0;
    }
    ctx->pc = 0x2C4EC8u;
    {
        const bool branch_taken_0x2c4ec8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EC8u;
        // 0x2c4ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ec8) {
            ctx->pc = 0x2C6EC8u;
            { ctx->pc = 0x2c6ec8; return; }
        }
    }
    ctx->pc = 0x2C4ED0u;
label_2c4ed0:
    // 0x2c4ed0: 0x80022072  lb          $v0, 0x2072($zero)
    ctx->pc = 0x2c4ed0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x2072u));
label_2c4ed4:
    // 0x2c4ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ed8:
    // 0x2c4ed8: 0x800306bc  lb          $v1, 0x6BC($zero)
    ctx->pc = 0x2c4ed8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6BCu));
label_2c4edc:
    // 0x2c4edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ee0:
    // 0x2c4ee0: 0x10040040  beq         $zero, $a0, . + 4 + (0x40 << 2)
label_2c4ee4:
    if (ctx->pc == 0x2C4EE4u) {
        ctx->pc = 0x2C4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EE0u;
        // 0x2c4ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4EE8u;
        goto label_2c4ee8;
    }
    ctx->pc = 0x2C4EE0u;
    {
        const bool branch_taken_0x2c4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EE0u;
        // 0x2c4ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ee0) {
            ctx->pc = 0x2C4FE4u;
            goto label_2c4fe4;
        }
    }
    ctx->pc = 0x2C4EE8u;
label_2c4ee8:
    // 0x2c4ee8: 0x80042230  lb          $a0, 0x2230($zero)
    ctx->pc = 0x2c4ee8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x2230u));
label_2c4eec:
    // 0x2c4eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ef0:
    // 0x2c4ef0: 0x10061801  beq         $zero, $a2, . + 4 + (0x1801 << 2)
label_2c4ef4:
    if (ctx->pc == 0x2C4EF4u) {
        ctx->pc = 0x2C4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EF0u;
        // 0x2c4ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4EF8u;
        goto label_2c4ef8;
    }
    ctx->pc = 0x2C4EF0u;
    {
        const bool branch_taken_0x2c4ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EF0u;
        // 0x2c4ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ef0) {
            ctx->pc = 0x2CAEF8u;
            { ctx->pc = 0x2caef8; return; }
        }
    }
    ctx->pc = 0x2C4EF8u;
label_2c4ef8:
    // 0x2c4ef8: 0x800832b0  lb          $t0, 0x32B0($zero)
    ctx->pc = 0x2c4ef8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x32B0u));
label_2c4efc:
    // 0x2c4efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4f00:
    // 0x2c4f00: 0x81f2337c  lb          $s2, 0x337C($t7)
    ctx->pc = 0x2c4f00u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2c4f04:
    // 0x2c4f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4f08:
    // 0x2c4f08: 0x100b5001  beq         $zero, $t3, . + 4 + (0x5001 << 2)
label_2c4f0c:
    if (ctx->pc == 0x2C4F0Cu) {
        ctx->pc = 0x2C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F08u;
        // 0x2c4f0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4F10u;
        goto label_2c4f10;
    }
    ctx->pc = 0x2C4F08u;
    {
        const bool branch_taken_0x2c4f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F08u;
        // 0x2c4f0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f08) {
            ctx->pc = 0x2D8F10u;
            return;
        }
    }
    ctx->pc = 0x2C4F10u;
label_2c4f10:
    // 0x2c4f10: 0x100c5002  beq         $zero, $t4, . + 4 + (0x5002 << 2)
label_2c4f14:
    if (ctx->pc == 0x2C4F14u) {
        ctx->pc = 0x2C4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F10u;
        // 0x2c4f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4F18u;
        goto label_2c4f18;
    }
    ctx->pc = 0x2C4F10u;
    {
        const bool branch_taken_0x2c4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F10u;
        // 0x2c4f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f10) {
            ctx->pc = 0x2D8F1Cu;
            return;
        }
    }
    ctx->pc = 0x2C4F18u;
label_2c4f18:
    // 0x2c4f18: 0x120d5002  beq         $s0, $t5, . + 4 + (0x5002 << 2)
label_2c4f1c:
    if (ctx->pc == 0x2C4F1Cu) {
        ctx->pc = 0x2C4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F18u;
        // 0x2c4f1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4F20u;
        goto label_2c4f20;
    }
    ctx->pc = 0x2C4F18u;
    {
        const bool branch_taken_0x2c4f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F18u;
        // 0x2c4f1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f18) {
            ctx->pc = 0x2D8F24u;
            return;
        }
    }
    ctx->pc = 0x2C4F20u;
label_2c4f20:
    // 0x2c4f20: 0x3ea8800  .word       0x03EA8800                   # sll         $s1, $t2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 10), 0));
label_2c4f24:
    // 0x2c4f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4f28:
    // 0x2c4f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f2c:
    // 0x2c4f2c: 0x1f22da8  .word       0x01F22DA8                   # mfsa        $a1 # 01F20580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4f2cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2c4f30:
    // 0x2c4f30: 0x81f4337c  lb          $s4, 0x337C($t7)
    ctx->pc = 0x2c4f30u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2c4f34:
    // 0x2c4f34: 0x1f24568  .word       0x01F24568                   # mfsa        $t0 # 01F20540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4f34u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_2c4f38:
    // 0x2c4f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f3c:
    // 0x2c4f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4f40:
    // 0x2c4f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f44:
    // 0x2c4f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4f48:
    // 0x2c4f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f4c:
    // 0x2c4f4c: 0x1f609bc  .word       0x01F609BC                   # dsll32      $at, $s6, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 22) << (32 + 6));
label_2c4f50:
    // 0x2c4f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f54:
    // 0x2c4f54: 0x1f610bd  .word       0x01F610BD                   # INVALID     $t7, $s6, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4F54 raw=0x01F610BD");
 /* MITIGATED */
label_2c4f58:
    // 0x2c4f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f5c:
    // 0x2c4f5c: 0x1f618be  .word       0x01F618BE                   # dsrl32      $v1, $s6, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> (32 + 2));
label_2c4f60:
    // 0x2c4f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f64:
    // 0x2c4f64: 0x1f625cb  .word       0x01F625CB                   # movn        $a0, $t7, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f64u;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c4f68:
    // 0x2c4f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f6c:
    // 0x2c4f6c: 0x1f509bc  .word       0x01F509BC                   # dsll32      $at, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 21) << (32 + 6));
label_2c4f70:
    // 0x2c4f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f74:
    // 0x2c4f74: 0x1f510bd  .word       0x01F510BD                   # INVALID     $t7, $s5, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4F74 raw=0x01F510BD");
 /* MITIGATED */
label_2c4f78:
    // 0x2c4f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f7c:
    // 0x2c4f7c: 0x1f518be  .word       0x01F518BE                   # dsrl32      $v1, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (32 + 2));
label_2c4f80:
    // 0x2c4f80: 0x81f703bc  lb          $s7, 0x3BC($t7)
    ctx->pc = 0x2c4f80u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c4f84:
    // 0x2c4f84: 0x1f5268b  .word       0x01F5268B                   # movn        $a0, $t7, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f84u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c4f88:
    // 0x2c4f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f8c:
    // 0x2c4f8c: 0x1f549bc  .word       0x01F549BC                   # dsll32      $t1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << (32 + 6));
label_2c4f90:
    // 0x2c4f90: 0x100d6805  beq         $zero, $t5, . + 4 + (0x6805 << 2)
label_2c4f94:
    if (ctx->pc == 0x2C4F94u) {
        ctx->pc = 0x2C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F90u;
        // 0x2c4f94: 0x1f550bd  .word       0x01F550BD                   # INVALID     $t7, $s5, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4F94 raw=0x01F550BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4F98u;
        goto label_2c4f98;
    }
    ctx->pc = 0x2C4F90u;
    {
        const bool branch_taken_0x2c4f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F90u;
        // 0x2c4f94: 0x1f550bd  .word       0x01F550BD                   # INVALID     $t7, $s5, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4F94 raw=0x01F550BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f90) {
            ctx->pc = 0x2DEFA8u;
            return;
        }
    }
    ctx->pc = 0x2C4F98u;
label_2c4f98:
    // 0x2c4f98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4f98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4f9c:
    // 0x2c4f9c: 0x1f558be  .word       0x01F558BE                   # dsrl32      $t3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4f9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) >> (32 + 2));
label_2c4fa0:
    // 0x2c4fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4fa4:
    // 0x2c4fa4: 0x1f567cb  .word       0x01F567CB                   # movn        $t4, $t7, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4fa4u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
label_2c4fa8:
    // 0x2c4fa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4fa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4fac:
    // 0x2c4fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4fb0:
    // 0x2c4fb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4fb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4fb4:
    // 0x2c4fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4fb8:
    // 0x2c4fb8: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2c4fb8u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c4fbc:
    // 0x2c4fbc: 0x1e0bddc  .word       0x01E0BDDC                   # dmult       $t7, $zero # 0000BDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4fbcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C4FBC raw=0x01E0BDDC");
 /* MITIGATED */
label_2c4fc0:
    // 0x2c4fc0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2c4fc0u;
    // CACHE instruction (ignored)
label_2c4fc4:
    // 0x2c4fc4: 0x81dff9ff  lb          $ra, -0x601($t6)
    ctx->pc = 0x2c4fc4u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294965759)));
label_2c4fc8:
    // 0x2c4fc8: 0x3eba000  .word       0x03EBA000                   # sll         $s4, $t3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 11), 0));
label_2c4fcc:
    // 0x2c4fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4fd0:
    // 0x2c4fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4fd4:
    // 0x2c4fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4fd8:
    // 0x2c4fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4fdc:
    // 0x2c4fdc: 0x20bdde  .word       0x0020BDDE                   # ddiv        $s7, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4fdcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2C4FDC raw=0x0020BDDE");
 /* MITIGATED */
label_2c4fe0:
    // 0x2c4fe0: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2c4fe0u;
    // NOP (addiu $zero, ...)
label_2c4fe4:
    // 0x2c4fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4fe8:
    // 0x2c4fe8: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2c4fec:
    if (ctx->pc == 0x2C4FECu) {
        ctx->pc = 0x2C4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FE8u;
        // 0x2c4fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4FF0u;
        goto label_2c4ff0;
    }
    ctx->pc = 0x2C4FE8u;
    {
        const bool branch_taken_0x2c4fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FE8u;
        // 0x2c4fec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fe8) {
            ctx->pc = 0x2DB000u;
            return;
        }
    }
    ctx->pc = 0x2C4FF0u;
label_2c4ff0:
    // 0x2c4ff0: 0x3ec6800  .word       0x03EC6800                   # sll         $t5, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_2c4ff4:
    // 0x2c4ff4: 0x1e0d69c  .word       0x01E0D69C                   # dmult       $t7, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ff4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C4FF4 raw=0x01E0D69C");
 /* MITIGATED */
label_2c4ff8:
    // 0x2c4ff8: 0x3ec7002  .word       0x03EC7002                   # srl         $t6, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ff8u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 0));
label_2c4ffc:
    // 0x2c4ffc: 0x1fbb97d  .word       0x01FBB97D                   # INVALID     $t7, $k1, -0x4683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ffcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4FFC raw=0x01FBB97D");
 /* MITIGATED */
label_2c5000:
    // 0x2c5000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5004:
    // 0x2c5004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5008:
    // 0x2c5008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c500c:
    // 0x2c500c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c500cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5010:
    // 0x2c5010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5014:
    // 0x2c5014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5018:
    // 0x2c5018: 0x3edd800  .word       0x03EDD800                   # sll         $k1, $t5, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5018u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_2c501c:
    // 0x2c501c: 0x1fed17d  .word       0x01FED17D                   # INVALID     $t7, $fp, -0x2E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c501cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C501C raw=0x01FED17D");
 /* MITIGATED */
label_2c5020:
    // 0x2c5020: 0x100c6005  beq         $zero, $t4, . + 4 + (0x6005 << 2)
label_2c5024:
    if (ctx->pc == 0x2C5024u) {
        ctx->pc = 0x2C5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5020u;
        // 0x2c5024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5028u;
        goto label_2c5028;
    }
    ctx->pc = 0x2C5020u;
    {
        const bool branch_taken_0x2c5020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5020u;
        // 0x2c5024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5020) {
            ctx->pc = 0x2DD038u;
            return;
        }
    }
    ctx->pc = 0x2C5028u;
label_2c5028:
    // 0x2c5028: 0x81f2337c  lb          $s2, 0x337C($t7)
    ctx->pc = 0x2c5028u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2c502c:
    // 0x2c502c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c502cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5030:
    // 0x2c5030: 0x800427f2  lb          $a0, 0x27F2($zero)
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x27F2u));
label_2c5034:
    // 0x2c5034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5038:
    // 0x2c5038: 0x3edf002  .word       0x03EDF002                   # srl         $fp, $t5, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5038u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 13), 0));
label_2c503c:
    // 0x2c503c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c503cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5040:
    // 0x2c5040: 0x52010008  beql        $s0, $at, . + 4 + (0x8 << 2)
label_2c5044:
    if (ctx->pc == 0x2C5044u) {
        ctx->pc = 0x2C5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5040u;
        // 0x2c5044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5048u;
        goto label_2c5048;
    }
    ctx->pc = 0x2C5040u;
    {
        const bool branch_taken_0x2c5040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c5040) {
            ctx->pc = 0x2C5044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5040u;
            // 0x2c5044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5064u;
            goto label_2c5064;
        }
    }
    ctx->pc = 0x2C5048u;
label_2c5048:
    // 0x2c5048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c504c:
    // 0x2c504c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c504cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5050:
    // 0x2c5050: 0x520407da  beql        $s0, $a0, . + 4 + (0x7DA << 2)
label_2c5054:
    if (ctx->pc == 0x2C5054u) {
        ctx->pc = 0x2C5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5050u;
        // 0x2c5054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5058u;
        goto label_2c5058;
    }
    ctx->pc = 0x2C5050u;
    {
        const bool branch_taken_0x2c5050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5050) {
            ctx->pc = 0x2C5054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5050u;
            // 0x2c5054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6FBCu;
            { ctx->pc = 0x2c6fbc; return; }
        }
    }
    ctx->pc = 0x2C5058u;
label_2c5058:
    // 0x2c5058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c505c:
    // 0x2c505c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c505cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5060:
    // 0x2c5060: 0x800056fc  lb          $zero, 0x56FC($zero)
    ctx->pc = 0x2c5060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x56FCu));
label_2c5064:
    // 0x2c5064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5068:
    // 0x2c5068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c506c:
    // 0x2c506c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c506cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c5070:
    // 0x2c5070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5074:
    // 0x2c5074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5078:
    // 0x2c5078: 0x400007cb  .word       0x400007CB                   # mfc0        $zero, Index # 000007CB <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5078u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c507c:
    // 0x2c507c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c507cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5080:
    // 0x2c5080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5084:
    // 0x2c5084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5088:
    // 0x2c5088: 0xa226800  j           func_889A000
label_2c508c:
    if (ctx->pc == 0x2C508Cu) {
        ctx->pc = 0x2C508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5088u;
        // 0x2c508c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5090u;
        goto label_2c5090;
    }
    ctx->pc = 0x2C5088u;
    ctx->pc = 0x2C508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5088u;
    // 0x2c508c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x889A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x889A000u, 0x2C5088u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C5090u;
label_2c5090:
    // 0x2c5090: 0xa226802  j           func_889A008
label_2c5094:
    if (ctx->pc == 0x2C5094u) {
        ctx->pc = 0x2C5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5090u;
        // 0x2c5094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5098u;
        goto label_2c5098;
    }
    ctx->pc = 0x2C5090u;
    ctx->pc = 0x2C5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5090u;
    // 0x2c5094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x889A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x889A008u, 0x2C5090u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C5098u;
label_2c5098:
    // 0x2c5098: 0x400007f6  .word       0x400007F6                   # mfc0        $zero, Index # 000007F6 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5098u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c509c:
    // 0x2c509c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c509cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c50a0:
    // 0x2c50a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c50a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c50a4:
    // 0x2c50a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c50a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c50a8:
    // 0x2c50a8: 0x0  nop
    ctx->pc = 0x2c50a8u;
    // NOP
label_2c50ac:
    // 0x2c50ac: 0x0  nop
    ctx->pc = 0x2c50acu;
    // NOP
label_2c50b0:
    // 0x2c50b0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2c50b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2c50b4:
    // 0x2c50b4: 0x0  nop
    ctx->pc = 0x2c50b4u;
    // NOP
label_2c50b8:
    // 0x2c50b8: 0x0  nop
    ctx->pc = 0x2c50b8u;
    // NOP
label_2c50bc:
    // 0x2c50bc: 0x0  nop
    ctx->pc = 0x2c50bcu;
    // NOP
label_2c50c0:
    // 0x2c50c0: 0x10000001  b           . + 4 + (0x1 << 2)
label_2c50c4:
    if (ctx->pc == 0x2C50C4u) {
        ctx->pc = 0x2C50C8u;
        goto label_2c50c8;
    }
    ctx->pc = 0x2C50C0u;
    {
        const bool branch_taken_0x2c50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c50c0) {
            ctx->pc = 0x2C50C8u;
            goto label_2c50c8;
        }
    }
    ctx->pc = 0x2C50C8u;
label_2c50c8:
    // 0x2c50c8: 0x0  nop
    ctx->pc = 0x2c50c8u;
    // NOP
label_2c50cc:
    // 0x2c50cc: 0x0  nop
    ctx->pc = 0x2c50ccu;
    // NOP
label_2c50d0:
    // 0x2c50d0: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c50d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c50d4:
    // 0x2c50d4: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2c50d4u;
    // NOP (addi to $zero)
label_2c50d8:
    // 0x2c50d8: 0x0  nop
    ctx->pc = 0x2c50d8u;
    // NOP
label_2c50dc:
    // 0x2c50dc: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2c50e0:
    if (ctx->pc == 0x2C50E0u) {
        ctx->pc = 0x2C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50DCu;
        // 0x2c50e0: 0x10000025  b           . + 4 + (0x25 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C50E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C50E4u;
        goto label_2c50e4;
    }
    ctx->pc = 0x2C50DCu;
    {
        const bool branch_taken_0x2c50dc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50DCu;
        // 0x2c50e0: 0x10000025  b           . + 4 + (0x25 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C50E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50dc) {
            ctx->pc = 0x2C50E0u;
            goto label_2c50e0;
        }
    }
    ctx->pc = 0x2C50E4u;
label_2c50e4:
    // 0x2c50e4: 0x0  nop
    ctx->pc = 0x2c50e4u;
    // NOP
label_2c50e8:
    // 0x2c50e8: 0x0  nop
    ctx->pc = 0x2c50e8u;
    // NOP
label_2c50ec:
    // 0x2c50ec: 0x0  nop
    ctx->pc = 0x2c50ecu;
    // NOP
label_2c50f0:
    // 0x2c50f0: 0x0  nop
    ctx->pc = 0x2c50f0u;
    // NOP
label_2c50f4:
    // 0x2c50f4: 0x4a490300  vaddx.z     $vf12, $vf0, $vf9x
    ctx->pc = 0x2c50f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2c50f8:
    // 0x2c50f8: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_2c50fc:
    if (ctx->pc == 0x2C50FCu) {
        ctx->pc = 0x2C50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50F8u;
        // 0x2c50fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5100u;
        goto label_2c5100;
    }
    ctx->pc = 0x2C50F8u;
    {
        const bool branch_taken_0x2c50f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50F8u;
        // 0x2c50fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50f8) {
            ctx->pc = 0x2C50FCu;
            goto label_2c50fc;
        }
    }
    ctx->pc = 0x2C5100u;
label_2c5100:
    // 0x2c5100: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
label_2c5104:
    if (ctx->pc == 0x2C5104u) {
        ctx->pc = 0x2C5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5100u;
        // 0x2c5104: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5108u;
        goto label_2c5108;
    }
    ctx->pc = 0x2C5100u;
    {
        const bool branch_taken_0x2c5100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5100u;
        // 0x2c5104: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5100) {
            ctx->pc = 0x2C5114u;
            goto label_2c5114;
        }
    }
    ctx->pc = 0x2C5108u;
label_2c5108:
    // 0x2c5108: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
label_2c510c:
    if (ctx->pc == 0x2C510Cu) {
        ctx->pc = 0x2C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5108u;
        // 0x2c510c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5110u;
        goto label_2c5110;
    }
    ctx->pc = 0x2C5108u;
    {
        const bool branch_taken_0x2c5108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5108u;
        // 0x2c510c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5108) {
            ctx->pc = 0x2C512Cu;
            goto label_2c512c;
        }
    }
    ctx->pc = 0x2C5110u;
label_2c5110:
    // 0x2c5110: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x2c5110u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c5114:
    // 0x2c5114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5118:
    // 0x2c5118: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x2c5118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c511c:
    // 0x2c511c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c511cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5120:
    // 0x2c5120: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x2c5120u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c5124:
    // 0x2c5124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5128:
    // 0x2c5128: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x2c5128u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2c512c:
    // 0x2c512c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c512cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5130:
    // 0x2c5130: 0x81e5137c  lb          $a1, 0x137C($t7)
    ctx->pc = 0x2c5130u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c5134:
    // 0x2c5134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5138:
    // 0x2c5138: 0x81e6137c  lb          $a2, 0x137C($t7)
    ctx->pc = 0x2c5138u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c513c:
    // 0x2c513c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c513cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5140:
    // 0x2c5140: 0x81e7137c  lb          $a3, 0x137C($t7)
    ctx->pc = 0x2c5140u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c5144:
    // 0x2c5144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5148:
    // 0x2c5148: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2c5148u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2c514c:
    // 0x2c514c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c514cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5150:
    // 0x2c5150: 0x1e91800  .word       0x01E91800                   # sll         $v1, $t1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_2c5154:
    // 0x2c5154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5158:
    // 0x2c5158: 0x11e407ff  beq         $t7, $a0, . + 4 + (0x7FF << 2)
label_2c515c:
    if (ctx->pc == 0x2C515Cu) {
        ctx->pc = 0x2C515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5158u;
        // 0x2c515c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5160u;
        goto label_2c5160;
    }
    ctx->pc = 0x2C5158u;
    {
        const bool branch_taken_0x2c5158 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5158u;
        // 0x2c515c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5158) {
            ctx->pc = 0x2C7158u;
            { ctx->pc = 0x2c7158; return; }
        }
    }
    ctx->pc = 0x2C5160u;
label_2c5160:
    // 0x2c5160: 0x800f2072  lb          $t7, 0x2072($zero)
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x2072u));
label_2c5164:
    // 0x2c5164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5168:
    // 0x2c5168: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c5168u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c516c:
    // 0x2c516c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c516cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5170:
    // 0x2c5170: 0x10040052  beq         $zero, $a0, . + 4 + (0x52 << 2)
label_2c5174:
    if (ctx->pc == 0x2C5174u) {
        ctx->pc = 0x2C5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5170u;
        // 0x2c5174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5178u;
        goto label_2c5178;
    }
    ctx->pc = 0x2C5170u;
    {
        const bool branch_taken_0x2c5170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5170u;
        // 0x2c5174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5170) {
            ctx->pc = 0x2C52BCu;
            goto label_2c52bc;
        }
    }
    ctx->pc = 0x2C5178u;
label_2c5178:
    // 0x2c5178: 0x80042170  lb          $a0, 0x2170($zero)
    ctx->pc = 0x2c5178u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x2170u));
label_2c517c:
    // 0x2c517c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c517cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5180:
    // 0x2c5180: 0x80042970  lb          $a0, 0x2970($zero)
    ctx->pc = 0x2c5180u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x2970u));
label_2c5184:
    // 0x2c5184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5188:
    // 0x2c5188: 0x10031001  beq         $zero, $v1, . + 4 + (0x1001 << 2)
label_2c518c:
    if (ctx->pc == 0x2C518Cu) {
        ctx->pc = 0x2C518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5188u;
        // 0x2c518c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5190u;
        goto label_2c5190;
    }
    ctx->pc = 0x2C5188u;
    {
        const bool branch_taken_0x2c5188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5188u;
        // 0x2c518c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5188) {
            ctx->pc = 0x2C9190u;
            { ctx->pc = 0x2c9190; return; }
        }
    }
    ctx->pc = 0x2C5190u;
label_2c5190:
    // 0x2c5190: 0x80051ab0  lb          $a1, 0x1AB0($zero)
    ctx->pc = 0x2c5190u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x1AB0u));
label_2c5194:
    // 0x2c5194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5198:
    // 0x2c5198: 0x100b5001  beq         $zero, $t3, . + 4 + (0x5001 << 2)
label_2c519c:
    if (ctx->pc == 0x2C519Cu) {
        ctx->pc = 0x2C519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5198u;
        // 0x2c519c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C51A0u;
        goto label_2c51a0;
    }
    ctx->pc = 0x2C5198u;
    {
        const bool branch_taken_0x2c5198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5198u;
        // 0x2c519c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5198) {
            ctx->pc = 0x2D91A0u;
            return;
        }
    }
    ctx->pc = 0x2C51A0u;
label_2c51a0:
    // 0x2c51a0: 0x100c5002  beq         $zero, $t4, . + 4 + (0x5002 << 2)
label_2c51a4:
    if (ctx->pc == 0x2C51A4u) {
        ctx->pc = 0x2C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51A0u;
        // 0x2c51a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C51A8u;
        goto label_2c51a8;
    }
    ctx->pc = 0x2C51A0u;
    {
        const bool branch_taken_0x2c51a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51A0u;
        // 0x2c51a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51a0) {
            ctx->pc = 0x2D91ACu;
            return;
        }
    }
    ctx->pc = 0x2C51A8u;
label_2c51a8:
    // 0x2c51a8: 0x40200000  dmfc0       $zero, Index
    ctx->pc = 0x2c51a8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2C51A8 raw=0x40200000");
 /* MITIGATED */
label_2c51ac:
    // 0x2c51ac: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2c51acu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2c51b0:
    // 0x2c51b0: 0x81eb1b7c  lb          $t3, 0x1B7C($t7)
    ctx->pc = 0x2c51b0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c51b4:
    // 0x2c51b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c51b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c51b8:
    // 0x2c51b8: 0x81ed1b7c  lb          $t5, 0x1B7C($t7)
    ctx->pc = 0x2c51b8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c51bc:
    // 0x2c51bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c51bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c51c0:
    // 0x2c51c0: 0x81ea1b7c  lb          $t2, 0x1B7C($t7)
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c51c4:
    // 0x2c51c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c51c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c51c8:
    // 0x2c51c8: 0x3ea4800  .word       0x03EA4800                   # sll         $t1, $t2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 0));
label_2c51cc:
    // 0x2c51cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c51ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c51d0:
    // 0x2c51d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51d4:
    // 0x2c51d4: 0x1eb09bc  .word       0x01EB09BC                   # dsll32      $at, $t3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 11) << (32 + 6));
label_2c51d8:
    // 0x2c51d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51dc:
    // 0x2c51dc: 0x1c06b5e  .word       0x01C06B5E                   # ddiv        $t5, $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2C51DC raw=0x01C06B5E");
 /* MITIGATED */
label_2c51e0:
    // 0x2c51e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51e4:
    // 0x2c51e4: 0x1eb10bd  .word       0x01EB10BD                   # INVALID     $t7, $t3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C51E4 raw=0x01EB10BD");
 /* MITIGATED */
label_2c51e8:
    // 0x2c51e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51ec:
    // 0x2c51ec: 0x1eb18be  .word       0x01EB18BE                   # dsrl32      $v1, $t3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> (32 + 2));
label_2c51f0:
    // 0x2c51f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51f4:
    // 0x2c51f4: 0x1eb238b  .word       0x01EB238B                   # movn        $a0, $t7, $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c51f4u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c51f8:
    // 0x2c51f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c51f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c51fc:
    // 0x2c51fc: 0x1eb6b28  .word       0x01EB6B28                   # mfsa        $t5 # 01EB0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c51fcu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_2c5200:
    // 0x2c5200: 0x3eb5000  .word       0x03EB5000                   # sll         $t2, $t3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5200u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 0));
label_2c5204:
    // 0x2c5204: 0x1eb29bc  .word       0x01EB29BC                   # dsll32      $a1, $t3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 6));
label_2c5208:
    // 0x2c5208: 0x100b5803  beq         $zero, $t3, . + 4 + (0x5803 << 2)
label_2c520c:
    if (ctx->pc == 0x2C520Cu) {
        ctx->pc = 0x2C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5208u;
        // 0x2c520c: 0x1eb30bd  .word       0x01EB30BD                   # INVALID     $t7, $t3, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C520C raw=0x01EB30BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5210u;
        goto label_2c5210;
    }
    ctx->pc = 0x2C5208u;
    {
        const bool branch_taken_0x2c5208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5208u;
        // 0x2c520c: 0x1eb30bd  .word       0x01EB30BD                   # INVALID     $t7, $t3, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C520C raw=0x01EB30BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5208) {
            ctx->pc = 0x2DB218u;
            return;
        }
    }
    ctx->pc = 0x2C5210u;
label_2c5210:
    // 0x2c5210: 0x81ee03bc  lb          $t6, 0x3BC($t7)
    ctx->pc = 0x2c5210u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c5214:
    // 0x2c5214: 0x1eb38be  .word       0x01EB38BE                   # dsrl32      $a3, $t3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) >> (32 + 2));
label_2c5218:
    // 0x2c5218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c521c:
    // 0x2c521c: 0x1eb448b  .word       0x01EB448B                   # movn        $t0, $t7, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c521cu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
label_2c5220:
    // 0x2c5220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5224:
    // 0x2c5224: 0x1ec09bc  .word       0x01EC09BC                   # dsll32      $at, $t4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 12) << (32 + 6));
label_2c5228:
    // 0x2c5228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c522c:
    // 0x2c522c: 0x1ec10bd  .word       0x01EC10BD                   # INVALID     $t7, $t4, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c522cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C522C raw=0x01EC10BD");
 /* MITIGATED */
label_2c5230:
    // 0x2c5230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5234:
    // 0x2c5234: 0x1ec18be  .word       0x01EC18BE                   # dsrl32      $v1, $t4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 2));
label_2c5238:
    // 0x2c5238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c523c:
    // 0x2c523c: 0x1ec23cb  .word       0x01EC23CB                   # movn        $a0, $t7, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c523cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c5240:
    // 0x2c5240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5244:
    // 0x2c5244: 0x1ec29bc  .word       0x01EC29BC                   # dsll32      $a1, $t4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 6));
label_2c5248:
    // 0x2c5248: 0x81ef03bc  lb          $t7, 0x3BC($t7)
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c524c:
    // 0x2c524c: 0x1e0739c  .word       0x01E0739C                   # dmult       $t7, $zero # 00007380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c524cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C524C raw=0x01E0739C");
 /* MITIGATED */
label_2c5250:
    // 0x2c5250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5254:
    // 0x2c5254: 0x1ec30bd  .word       0x01EC30BD                   # INVALID     $t7, $t4, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5254u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C5254 raw=0x01EC30BD");
 /* MITIGATED */
label_2c5258:
    // 0x2c5258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c525c:
    // 0x2c525c: 0x1ec38be  .word       0x01EC38BE                   # dsrl32      $a3, $t4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c525cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) >> (32 + 2));
label_2c5260:
    // 0x2c5260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5264:
    // 0x2c5264: 0x1ec44cb  .word       0x01EC44CB                   # movn        $t0, $t7, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5264u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
label_2c5268:
    // 0x2c5268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c526c:
    // 0x2c526c: 0x1f0717d  .word       0x01F0717D                   # INVALID     $t7, $s0, 0x717D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c526cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C526C raw=0x01F0717D");
 /* MITIGATED */
label_2c5270:
    // 0x2c5270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5274:
    // 0x2c5274: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5274u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c5278:
    // 0x2c5278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c527c:
    // 0x2c527c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c527cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5280:
    // 0x2c5280: 0x3ec8000  .word       0x03EC8000                   # sll         $s0, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5280u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_2c5284:
    // 0x2c5284: 0x1e07bdc  .word       0x01E07BDC                   # dmult       $t7, $zero # 00007BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5284u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C5284 raw=0x01E07BDC");
 /* MITIGATED */
label_2c5288:
    // 0x2c5288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c528c:
    // 0x2c528c: 0x1d399ff  .word       0x01D399FF                   # dsra32      $s3, $s3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c528cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 7));
label_2c5290:
    // 0x2c5290: 0x81eb1b7c  lb          $t3, 0x1B7C($t7)
    ctx->pc = 0x2c5290u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c5294:
    // 0x2c5294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5298:
    // 0x2c5298: 0x81ed1b7c  lb          $t5, 0x1B7C($t7)
    ctx->pc = 0x2c5298u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c529c:
    // 0x2c529c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c529cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52a0:
    // 0x2c52a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c52a4:
    // 0x2c52a4: 0x1f1797d  .word       0x01F1797D                   # INVALID     $t7, $s1, 0x797D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c52a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C52A4 raw=0x01F1797D");
 /* MITIGATED */
label_2c52a8:
    // 0x2c52a8: 0x24000fff  addiu       $zero, $zero, 0xFFF
    ctx->pc = 0x2c52a8u;
    // NOP (addiu $zero, ...)
label_2c52ac:
    // 0x2c52ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52b0:
    // 0x2c52b0: 0x81ea1b7c  lb          $t2, 0x1B7C($t7)
    ctx->pc = 0x2c52b0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c52b4:
    // 0x2c52b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52b8:
    // 0x2c52b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c52b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c52bc:
    // 0x2c52bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52c0:
    // 0x2c52c0: 0x3ec8801  .word       0x03EC8801                   # INVALID     $ra, $t4, -0x77FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c52c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C52C0 raw=0x03EC8801");
 /* MITIGATED */
label_2c52c4:
    // 0x2c52c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52c8:
    // 0x2c52c8: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2c52cc:
    if (ctx->pc == 0x2C52CCu) {
        ctx->pc = 0x2C52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52C8u;
        // 0x2c52cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C52D0u;
        goto label_2c52d0;
    }
    ctx->pc = 0x2C52C8u;
    {
        const bool branch_taken_0x2c52c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c52c8) {
            ctx->pc = 0x2C52CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52C8u;
            // 0x2c52cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C52F4u;
            goto label_2c52f4;
        }
    }
    ctx->pc = 0x2C52D0u;
label_2c52d0:
    // 0x2c52d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c52d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c52d4:
    // 0x2c52d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52d8:
    // 0x2c52d8: 0x800427f2  lb          $a0, 0x27F2($zero)
    ctx->pc = 0x2c52d8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x27F2u));
label_2c52dc:
    // 0x2c52dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52e0:
    // 0x2c52e0: 0x100c6003  beq         $zero, $t4, . + 4 + (0x6003 << 2)
label_2c52e4:
    if (ctx->pc == 0x2C52E4u) {
        ctx->pc = 0x2C52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52E0u;
        // 0x2c52e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C52E8u;
        goto label_2c52e8;
    }
    ctx->pc = 0x2C52E0u;
    {
        const bool branch_taken_0x2c52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52E0u;
        // 0x2c52e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52e0) {
            ctx->pc = 0x2DD2F0u;
            return;
        }
    }
    ctx->pc = 0x2C52E8u;
label_2c52e8:
    // 0x2c52e8: 0x520407dc  beql        $s0, $a0, . + 4 + (0x7DC << 2)
label_2c52ec:
    if (ctx->pc == 0x2C52ECu) {
        ctx->pc = 0x2C52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52E8u;
        // 0x2c52ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C52F0u;
        goto label_2c52f0;
    }
    ctx->pc = 0x2C52E8u;
    {
        const bool branch_taken_0x2c52e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c52e8) {
            ctx->pc = 0x2C52ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C52E8u;
            // 0x2c52ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C725Cu;
            { ctx->pc = 0x2c725c; return; }
        }
    }
    ctx->pc = 0x2C52F0u;
label_2c52f0:
    // 0x2c52f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c52f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c52f4:
    // 0x2c52f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c52f8:
    // 0x2c52f8: 0x800056fc  lb          $zero, 0x56FC($zero)
    ctx->pc = 0x2c52f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x56FCu));
label_2c52fc:
    // 0x2c52fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c52fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5300:
    // 0x2c5300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c5304:
    // 0x2c5304: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c5308:
    // 0x2c5308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c530c:
    // 0x2c530c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c530cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5310:
    // 0x2c5310: 0x400007ca  .word       0x400007CA                   # mfc0        $zero, Index # 000007CA <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5310u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c5314:
    // 0x2c5314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5318:
    // 0x2c5318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c531c:
    // 0x2c531c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c531cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5320:
    // 0x2c5320: 0xa2f6000  j           func_8BD8000
label_2c5324:
    if (ctx->pc == 0x2C5324u) {
        ctx->pc = 0x2C5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5320u;
        // 0x2c5324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5328u;
        goto label_2c5328;
    }
    ctx->pc = 0x2C5320u;
    ctx->pc = 0x2C5324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5320u;
    // 0x2c5324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD8000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD8000u, 0x2C5320u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C5328u;
label_2c5328:
    // 0x2c5328: 0xa2f6001  j           func_8BD8004
label_2c532c:
    if (ctx->pc == 0x2C532Cu) {
        ctx->pc = 0x2C532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5328u;
        // 0x2c532c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5330u;
        goto label_2c5330;
    }
    ctx->pc = 0x2C5328u;
    ctx->pc = 0x2C532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5328u;
    // 0x2c532c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8BD8004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8BD8004u, 0x2C5328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C5330u;
label_2c5330:
    // 0x2c5330: 0x400007f4  .word       0x400007F4                   # mfc0        $zero, Index # 000007F4 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5330u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c5334:
    // 0x2c5334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c5334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5338:
    // 0x2c5338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c5338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c533c:
    // 0x2c533c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c533cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c5340:
    // 0x2c5340: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2c5340u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2c5344:
    // 0x2c5344: 0x0  nop
    ctx->pc = 0x2c5344u;
    // NOP
label_2c5348:
    // 0x2c5348: 0x0  nop
    ctx->pc = 0x2c5348u;
    // NOP
label_2c534c:
    // 0x2c534c: 0x0  nop
    ctx->pc = 0x2c534cu;
    // NOP
label_2c5350:
    // 0x2c5350: 0x0  nop
    ctx->pc = 0x2c5350u;
    // NOP
label_2c5354:
    // 0x2c5354: 0x0  nop
    ctx->pc = 0x2c5354u;
    // NOP
label_2c5358:
    // 0x2c5358: 0x0  nop
    ctx->pc = 0x2c5358u;
    // NOP
label_2c535c:
    // 0x2c535c: 0x0  nop
    ctx->pc = 0x2c535cu;
    // NOP
label_2c5360:
    // 0x2c5360: 0x0  nop
    ctx->pc = 0x2c5360u;
    // NOP
label_2c5364:
    // 0x2c5364: 0x0  nop
    ctx->pc = 0x2c5364u;
    // NOP
label_2c5368:
    // 0x2c5368: 0x0  nop
    ctx->pc = 0x2c5368u;
    // NOP
label_2c536c:
    // 0x2c536c: 0x0  nop
    ctx->pc = 0x2c536cu;
    // NOP
label_2c5370:
    // 0x2c5370: 0x0  nop
    ctx->pc = 0x2c5370u;
    // NOP
label_2c5374:
    // 0x2c5374: 0x0  nop
    ctx->pc = 0x2c5374u;
    // NOP
label_2c5378:
    // 0x2c5378: 0x0  nop
    ctx->pc = 0x2c5378u;
    // NOP
label_2c537c:
    // 0x2c537c: 0x0  nop
    ctx->pc = 0x2c537cu;
    // NOP
label_2c5380:
    // 0x2c5380: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5380u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5380 raw=0x4E494C5C");
 /* MITIGATED */
label_2c5384:
    // 0x2c5384: 0x5441444b  bnel        $v0, $at, . + 4 + (0x444B << 2)
label_2c5388:
    if (ctx->pc == 0x2C5388u) {
        ctx->pc = 0x2C5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5384u;
        // 0x2c5388: 0x4e422e41  .word       0x4E422E41                   # INVALID     $s2, $v0, 0x2E41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5388 raw=0x4E422E41");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C538Cu;
        goto label_2c538c;
    }
    ctx->pc = 0x2C5384u;
    {
        const bool branch_taken_0x2c5384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x2c5384) {
            ctx->pc = 0x2C5388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5384u;
            // 0x2c5388: 0x4e422e41  .word       0x4E422E41                   # INVALID     $s2, $v0, 0x2E41 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5388 raw=0x4E422E41");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64B4u;
            return;
        }
    }
    ctx->pc = 0x2C538Cu;
label_2c538c:
    // 0x2c538c: 0x313b53  .word       0x00313B53                   # mtlo        $at # 00113B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c538cu;
    ctx->lo = GPR_U64(ctx, 1);
label_2c5390:
    // 0x2c5390: 0x4d47425c  .word       0x4D47425C                   # INVALID     $t2, $a3, 0x425C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5390u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5390 raw=0x4D47425C");
 /* MITIGATED */
label_2c5394:
    // 0x2c5394: 0x534e422e  beql        $k0, $t6, . + 4 + (0x422E << 2)
label_2c5398:
    if (ctx->pc == 0x2C5398u) {
        ctx->pc = 0x2C5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5394u;
        // 0x2c5398: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C539Cu;
        goto label_2c539c;
    }
    ctx->pc = 0x2C5394u;
    {
        const bool branch_taken_0x2c5394 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c5394) {
            ctx->pc = 0x2C5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5394u;
            // 0x2c5398: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C50u;
            return;
        }
    }
    ctx->pc = 0x2C539Cu;
label_2c539c:
    // 0x2c539c: 0x0  nop
    ctx->pc = 0x2c539cu;
    // NOP
label_2c53a0:
    // 0x2c53a0: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c53a0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C53A0 raw=0x4E494C5C");
 /* MITIGATED */
label_2c53a4:
    // 0x2c53a4: 0x5441444b  bnel        $v0, $at, . + 4 + (0x444B << 2)
label_2c53a8:
    if (ctx->pc == 0x2C53A8u) {
        ctx->pc = 0x2C53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53A4u;
        // 0x2c53a8: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C53A8 raw=0x4E422E32");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C53ACu;
        goto label_2c53ac;
    }
    ctx->pc = 0x2C53A4u;
    {
        const bool branch_taken_0x2c53a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x2c53a4) {
            ctx->pc = 0x2C53A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C53A4u;
            // 0x2c53a8: 0x4e422e32  .word       0x4E422E32                   # INVALID     $s2, $v0, 0x2E32 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C53A8 raw=0x4E422E32");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64D4u;
            return;
        }
    }
    ctx->pc = 0x2C53ACu;
label_2c53ac:
    // 0x2c53ac: 0x313b53  .word       0x00313B53                   # mtlo        $at # 00113B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c53acu;
    ctx->lo = GPR_U64(ctx, 1);
label_2c53b0:
    // 0x2c53b0: 0x4e494c5c  .word       0x4E494C5C                   # INVALID     $s2, $t1, 0x4C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c53b0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C53B0 raw=0x4E494C5C");
 /* MITIGATED */
label_2c53b4:
    // 0x2c53b4: 0x4c564f4b  .word       0x4C564F4B                   # INVALID     $v0, $s6, 0x4F4B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c53b4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C53B4 raw=0x4C564F4B");
 /* MITIGATED */
label_2c53b8:
    // 0x2c53b8: 0x534e422e  beql        $k0, $t6, . + 4 + (0x422E << 2)
label_2c53bc:
    if (ctx->pc == 0x2C53BCu) {
        ctx->pc = 0x2C53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53B8u;
        // 0x2c53bc: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C53C0u;
        goto label_2c53c0;
    }
    ctx->pc = 0x2C53B8u;
    {
        const bool branch_taken_0x2c53b8 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c53b8) {
            ctx->pc = 0x2C53BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C53B8u;
            // 0x2c53bc: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5C74u;
            return;
        }
    }
    ctx->pc = 0x2C53C0u;
label_2c53c0:
    // 0x2c53c0: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x2c53c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_2c53c4:
    // 0x2c53c4: 0x0  nop
    ctx->pc = 0x2c53c4u;
    // NOP
label_2c53c8:
    // 0x2c53c8: 0x0  nop
    ctx->pc = 0x2c53c8u;
    // NOP
label_2c53cc:
    // 0x2c53cc: 0x0  nop
    ctx->pc = 0x2c53ccu;
    // NOP
    ctx->pc = 0x2c53d0u;
    return;
}
