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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part213(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e54u: goto label_1e4e54;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e5cu: goto label_1e4e5c;
        case 0x1e4e60u: goto label_1e4e60;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e70u: goto label_1e4e70;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e78u: goto label_1e4e78;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4e88u: goto label_1e4e88;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e90u: goto label_1e4e90;
        case 0x1e4e94u: goto label_1e4e94;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4e9cu: goto label_1e4e9c;
        case 0x1e4ea0u: goto label_1e4ea0;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4eacu: goto label_1e4eac;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4eb4u: goto label_1e4eb4;
        case 0x1e4eb8u: goto label_1e4eb8;
        case 0x1e4ebcu: goto label_1e4ebc;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ed8u: goto label_1e4ed8;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee4u: goto label_1e4ee4;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4ef4u: goto label_1e4ef4;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f04u: goto label_1e4f04;
        case 0x1e4f08u: goto label_1e4f08;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f14u: goto label_1e4f14;
        case 0x1e4f18u: goto label_1e4f18;
        case 0x1e4f1cu: goto label_1e4f1c;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        case 0x1e5038u: goto label_1e5038;
        case 0x1e503cu: goto label_1e503c;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d0u: goto label_1e51d0;
        case 0x1e51d4u: goto label_1e51d4;
        case 0x1e51d8u: goto label_1e51d8;
        case 0x1e51dcu: goto label_1e51dc;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51e4u: goto label_1e51e4;
        case 0x1e51e8u: goto label_1e51e8;
        case 0x1e51ecu: goto label_1e51ec;
        case 0x1e51f0u: goto label_1e51f0;
        case 0x1e51f4u: goto label_1e51f4;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e51fcu: goto label_1e51fc;
        case 0x1e5200u: goto label_1e5200;
        case 0x1e5204u: goto label_1e5204;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5218u: goto label_1e5218;
        case 0x1e521cu: goto label_1e521c;
        case 0x1e5220u: goto label_1e5220;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5228u: goto label_1e5228;
        case 0x1e522cu: goto label_1e522c;
        case 0x1e5230u: goto label_1e5230;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e5238u: goto label_1e5238;
        case 0x1e523cu: goto label_1e523c;
        case 0x1e5240u: goto label_1e5240;
        case 0x1e5244u: goto label_1e5244;
        case 0x1e5248u: goto label_1e5248;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e5250u: goto label_1e5250;
        case 0x1e5254u: goto label_1e5254;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e525cu: goto label_1e525c;
        case 0x1e5260u: goto label_1e5260;
        case 0x1e5264u: goto label_1e5264;
        case 0x1e5268u: goto label_1e5268;
        case 0x1e526cu: goto label_1e526c;
        case 0x1e5270u: goto label_1e5270;
        case 0x1e5274u: goto label_1e5274;
        case 0x1e5278u: goto label_1e5278;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e5280u: goto label_1e5280;
        case 0x1e5284u: goto label_1e5284;
        case 0x1e5288u: goto label_1e5288;
        case 0x1e528cu: goto label_1e528c;
        case 0x1e5290u: goto label_1e5290;
        case 0x1e5294u: goto label_1e5294;
        case 0x1e5298u: goto label_1e5298;
        case 0x1e529cu: goto label_1e529c;
        case 0x1e52a0u: goto label_1e52a0;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52a8u: goto label_1e52a8;
        case 0x1e52acu: goto label_1e52ac;
        case 0x1e52b0u: goto label_1e52b0;
        case 0x1e52b4u: goto label_1e52b4;
        case 0x1e52b8u: goto label_1e52b8;
        case 0x1e52bcu: goto label_1e52bc;
        case 0x1e52c0u: goto label_1e52c0;
        case 0x1e52c4u: goto label_1e52c4;
        case 0x1e52c8u: goto label_1e52c8;
        case 0x1e52ccu: goto label_1e52cc;
        case 0x1e52d0u: goto label_1e52d0;
        case 0x1e52d4u: goto label_1e52d4;
        case 0x1e52d8u: goto label_1e52d8;
        case 0x1e52dcu: goto label_1e52dc;
        case 0x1e52e0u: goto label_1e52e0;
        case 0x1e52e4u: goto label_1e52e4;
        case 0x1e52e8u: goto label_1e52e8;
        case 0x1e52ecu: goto label_1e52ec;
        case 0x1e52f0u: goto label_1e52f0;
        case 0x1e52f4u: goto label_1e52f4;
        case 0x1e52f8u: goto label_1e52f8;
        case 0x1e52fcu: goto label_1e52fc;
        case 0x1e5300u: goto label_1e5300;
        case 0x1e5304u: goto label_1e5304;
        case 0x1e5308u: goto label_1e5308;
        case 0x1e530cu: goto label_1e530c;
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        case 0x1e53a0u: goto label_1e53a0;
        case 0x1e53a4u: goto label_1e53a4;
        case 0x1e53a8u: goto label_1e53a8;
        case 0x1e53acu: goto label_1e53ac;
        case 0x1e53b0u: goto label_1e53b0;
        case 0x1e53b4u: goto label_1e53b4;
        case 0x1e53b8u: goto label_1e53b8;
        case 0x1e53bcu: goto label_1e53bc;
        case 0x1e53c0u: goto label_1e53c0;
        case 0x1e53c4u: goto label_1e53c4;
        case 0x1e53c8u: goto label_1e53c8;
        case 0x1e53ccu: goto label_1e53cc;
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53d4u: goto label_1e53d4;
        case 0x1e53d8u: goto label_1e53d8;
        case 0x1e53dcu: goto label_1e53dc;
        case 0x1e53e0u: goto label_1e53e0;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e53e8u: goto label_1e53e8;
        case 0x1e53ecu: goto label_1e53ec;
        case 0x1e53f0u: goto label_1e53f0;
        case 0x1e53f4u: goto label_1e53f4;
        case 0x1e53f8u: goto label_1e53f8;
        case 0x1e53fcu: goto label_1e53fc;
        case 0x1e5400u: goto label_1e5400;
        case 0x1e5404u: goto label_1e5404;
        case 0x1e5408u: goto label_1e5408;
        case 0x1e540cu: goto label_1e540c;
        case 0x1e5410u: goto label_1e5410;
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5418u: goto label_1e5418;
        case 0x1e541cu: goto label_1e541c;
        default: return;
    }

label_1e4c50:
    // 0x1e4c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4c54:
    // 0x1e4c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4c58:
    // 0x1e4c58: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e4c58u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e4c5c:
    // 0x1e4c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4c60:
    // 0x1e4c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4c64:
    // 0x1e4c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4c68:
    // 0x1e4c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c6c:
    // 0x1e4c6c: 0x3e00008  jr          $ra
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x0  nop
    ctx->pc = 0x1e4c74u;
    // NOP
label_1e4c78:
    // 0x1e4c78: 0x0  nop
    ctx->pc = 0x1e4c78u;
    // NOP
label_1e4c7c:
    // 0x1e4c7c: 0x0  nop
    ctx->pc = 0x1e4c7cu;
    // NOP
label_1e4c80:
    // 0x1e4c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4c84:
    // 0x1e4c84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e4c88:
    // 0x1e4c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e4c8c:
    // 0x1e4c8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4c90:
    // 0x1e4c90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4c94:
    // 0x1e4c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4c98:
    // 0x1e4c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4c9c:
    // 0x1e4c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4ca0:
    // 0x1e4ca0: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4ca4:
    // 0x1e4ca4: 0xc070ea8  jal         func_1C3AA0
label_1e4ca8:
    if (ctx->pc == 0x1E4CA8u) {
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CACu;
        goto label_1e4cac;
    }
    ctx->pc = 0x1E4CA4u;
    SET_GPR_U32(ctx, 31, 0x1E4CACu);
    ctx->pc = 0x1E4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CA4u;
    // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CACu;
label_1e4cac:
    // 0x1e4cac: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4cb0:
    // 0x1e4cb0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e4cb4:
    // 0x1e4cb4: 0xc070ea8  jal         func_1C3AA0
label_1e4cb8:
    if (ctx->pc == 0x1E4CB8u) {
        ctx->pc = 0x1E4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB4u;
        // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CBCu;
        goto label_1e4cbc;
    }
    ctx->pc = 0x1E4CB4u;
    SET_GPR_U32(ctx, 31, 0x1E4CBCu);
    ctx->pc = 0x1E4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CB4u;
    // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CBCu;
label_1e4cbc:
    // 0x1e4cbc: 0xc070038  jal         func_1C00E0
label_1e4cc0:
    if (ctx->pc == 0x1E4CC0u) {
        ctx->pc = 0x1E4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CBCu;
        // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CC4u;
        goto label_1e4cc4;
    }
    ctx->pc = 0x1E4CBCu;
    SET_GPR_U32(ctx, 31, 0x1E4CC4u);
    ctx->pc = 0x1E4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CBCu;
    // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CC4u;
label_1e4cc4:
    // 0x1e4cc4: 0xc070038  jal         func_1C00E0
label_1e4cc8:
    if (ctx->pc == 0x1E4CC8u) {
        ctx->pc = 0x1E4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC4u;
        // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CCCu;
        goto label_1e4ccc;
    }
    ctx->pc = 0x1E4CC4u;
    SET_GPR_U32(ctx, 31, 0x1E4CCCu);
    ctx->pc = 0x1E4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CC4u;
    // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CCCu;
label_1e4ccc:
    // 0x1e4ccc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd0:
    // 0x1e4cd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd4:
    // 0x1e4cd4: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e4cd8:
    // 0x1e4cd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4cdc:
    // 0x1e4cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4ce0:
    // 0x1e4ce0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4ce4:
    if (ctx->pc == 0x1E4CE4u) {
        ctx->pc = 0x1E4CE8u;
        goto label_1e4ce8;
    }
    ctx->pc = 0x1E4CE0u;
    {
        const bool branch_taken_0x1e4ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ce0) {
            ctx->pc = 0x1E4CF4u;
            goto label_1e4cf4;
        }
    }
    ctx->pc = 0x1E4CE8u;
label_1e4ce8:
    // 0x1e4ce8: 0xc070038  jal         func_1C00E0
label_1e4cec:
    if (ctx->pc == 0x1E4CECu) {
        ctx->pc = 0x1E4CF0u;
        goto label_1e4cf0;
    }
    ctx->pc = 0x1E4CE8u;
    SET_GPR_U32(ctx, 31, 0x1E4CF0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CF0u;
label_1e4cf0:
    // 0x1e4cf0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4cf4:
    // 0x1e4cf4: 0x0  nop
    ctx->pc = 0x1e4cf4u;
    // NOP
label_1e4cf8:
    // 0x1e4cf8: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e4cfc:
    // 0x1e4cfc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d00:
    // 0x1e4d00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d04:
    // 0x1e4d04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D0Cu;
        goto label_1e4d0c;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4D18u;
            goto label_1e4d18;
        }
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0xc070038  jal         func_1C00E0
label_1e4d10:
    if (ctx->pc == 0x1E4D10u) {
        ctx->pc = 0x1E4D14u;
        goto label_1e4d14;
    }
    ctx->pc = 0x1E4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D14u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D14u;
label_1e4d14:
    // 0x1e4d14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d18:
    // 0x1e4d18: 0x27828e48  addiu       $v0, $gp, -0x71B8
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
label_1e4d1c:
    // 0x1e4d1c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d20:
    // 0x1e4d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d24:
    // 0x1e4d24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d28:
    if (ctx->pc == 0x1E4D28u) {
        ctx->pc = 0x1E4D2Cu;
        goto label_1e4d2c;
    }
    ctx->pc = 0x1E4D24u;
    {
        const bool branch_taken_0x1e4d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d24) {
            ctx->pc = 0x1E4D38u;
            goto label_1e4d38;
        }
    }
    ctx->pc = 0x1E4D2Cu;
label_1e4d2c:
    // 0x1e4d2c: 0xc070038  jal         func_1C00E0
label_1e4d30:
    if (ctx->pc == 0x1E4D30u) {
        ctx->pc = 0x1E4D34u;
        goto label_1e4d34;
    }
    ctx->pc = 0x1E4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D34u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D34u;
label_1e4d34:
    // 0x1e4d34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d38:
    // 0x1e4d38: 0x27828e30  addiu       $v0, $gp, -0x71D0
    ctx->pc = 0x1e4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e4d3c:
    // 0x1e4d3c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d40:
    // 0x1e4d40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d44:
    // 0x1e4d44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d48:
    if (ctx->pc == 0x1E4D48u) {
        ctx->pc = 0x1E4D4Cu;
        goto label_1e4d4c;
    }
    ctx->pc = 0x1E4D44u;
    {
        const bool branch_taken_0x1e4d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d44) {
            ctx->pc = 0x1E4D58u;
            goto label_1e4d58;
        }
    }
    ctx->pc = 0x1E4D4Cu;
label_1e4d4c:
    // 0x1e4d4c: 0xc070038  jal         func_1C00E0
label_1e4d50:
    if (ctx->pc == 0x1E4D50u) {
        ctx->pc = 0x1E4D54u;
        goto label_1e4d54;
    }
    ctx->pc = 0x1E4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D54u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d58:
    // 0x1e4d58: 0x27828e18  addiu       $v0, $gp, -0x71E8
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_1e4d5c:
    // 0x1e4d5c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d60:
    // 0x1e4d60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d64:
    // 0x1e4d64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d68:
    if (ctx->pc == 0x1E4D68u) {
        ctx->pc = 0x1E4D6Cu;
        goto label_1e4d6c;
    }
    ctx->pc = 0x1E4D64u;
    {
        const bool branch_taken_0x1e4d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d64) {
            ctx->pc = 0x1E4D78u;
            goto label_1e4d78;
        }
    }
    ctx->pc = 0x1E4D6Cu;
label_1e4d6c:
    // 0x1e4d6c: 0xc070038  jal         func_1C00E0
label_1e4d70:
    if (ctx->pc == 0x1E4D70u) {
        ctx->pc = 0x1E4D74u;
        goto label_1e4d74;
    }
    ctx->pc = 0x1E4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D74u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D74u;
label_1e4d74:
    // 0x1e4d74: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d78:
    // 0x1e4d78: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e4d7c:
    // 0x1e4d7c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d80:
    // 0x1e4d80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d84:
    // 0x1e4d84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d88:
    if (ctx->pc == 0x1E4D88u) {
        ctx->pc = 0x1E4D8Cu;
        goto label_1e4d8c;
    }
    ctx->pc = 0x1E4D84u;
    {
        const bool branch_taken_0x1e4d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d84) {
            ctx->pc = 0x1E4D98u;
            goto label_1e4d98;
        }
    }
    ctx->pc = 0x1E4D8Cu;
label_1e4d8c:
    // 0x1e4d8c: 0xc070038  jal         func_1C00E0
label_1e4d90:
    if (ctx->pc == 0x1E4D90u) {
        ctx->pc = 0x1E4D94u;
        goto label_1e4d94;
    }
    ctx->pc = 0x1E4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D94u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D94u;
label_1e4d94:
    // 0x1e4d94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d98:
    // 0x1e4d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d9c:
    // 0x1e4d9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4da0:
    // 0x1e4da0: 0x0  nop
    ctx->pc = 0x1e4da0u;
    // NOP
label_1e4da4:
    // 0x1e4da4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4da8:
    // 0x1e4da8: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_1e4dac:
    // 0x1e4dac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4db0:
    // 0x1e4db0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e4db4:
    // 0x1e4db4: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4db8:
    // 0x1e4db8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e4dbc:
    // 0x1e4dbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4dc0:
    if (ctx->pc == 0x1E4DC0u) {
        ctx->pc = 0x1E4DC4u;
        goto label_1e4dc4;
    }
    ctx->pc = 0x1E4DBCu;
    {
        const bool branch_taken_0x1e4dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4dbc) {
            ctx->pc = 0x1E4DD0u;
            goto label_1e4dd0;
        }
    }
    ctx->pc = 0x1E4DC4u;
label_1e4dc4:
    // 0x1e4dc4: 0xc070038  jal         func_1C00E0
label_1e4dc8:
    if (ctx->pc == 0x1E4DC8u) {
        ctx->pc = 0x1E4DCCu;
        goto label_1e4dcc;
    }
    ctx->pc = 0x1E4DC4u;
    SET_GPR_U32(ctx, 31, 0x1E4DCCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4DCCu;
label_1e4dcc:
    // 0x1e4dcc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e4dd0:
    // 0x1e4dd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e4dd4:
    // 0x1e4dd4: 0x2a220029  slti        $v0, $s1, 0x29
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e4dd8:
    // 0x1e4dd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e4ddc:
    if (ctx->pc == 0x1E4DDCu) {
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DE0u;
        goto label_1e4de0;
    }
    ctx->pc = 0x1E4DD8u;
    {
        const bool branch_taken_0x1e4dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4dd8) {
            ctx->pc = 0x1E4DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4da0;
        }
    }
    ctx->pc = 0x1E4DE0u;
label_1e4de0:
    // 0x1e4de0: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e4de4:
    // 0x1e4de4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4de8:
    // 0x1e4de8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4dec:
    // 0x1e4dec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4df0:
    if (ctx->pc == 0x1E4DF0u) {
        ctx->pc = 0x1E4DF4u;
        goto label_1e4df4;
    }
    ctx->pc = 0x1E4DECu;
    {
        const bool branch_taken_0x1e4dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4dec) {
            ctx->pc = 0x1E4E00u;
            goto label_1e4e00;
        }
    }
    ctx->pc = 0x1E4DF4u;
label_1e4df4:
    // 0x1e4df4: 0xc070038  jal         func_1C00E0
label_1e4df8:
    if (ctx->pc == 0x1E4DF8u) {
        ctx->pc = 0x1E4DFCu;
        goto label_1e4dfc;
    }
    ctx->pc = 0x1E4DF4u;
    SET_GPR_U32(ctx, 31, 0x1E4DFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4DFCu;
label_1e4dfc:
    // 0x1e4dfc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4e00:
    // 0x1e4e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4e04:
    // 0x1e4e04: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e4e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4e08:
    // 0x1e4e08: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1e4e0c:
    if (ctx->pc == 0x1E4E0Cu) {
        ctx->pc = 0x1E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E08u;
        // 0x1e4e0c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E10u;
        goto label_1e4e10;
    }
    ctx->pc = 0x1E4E08u;
    {
        const bool branch_taken_0x1e4e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E08u;
        // 0x1e4e0c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e08) {
            ctx->pc = 0x1E4CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4cd4;
        }
    }
    ctx->pc = 0x1E4E10u;
label_1e4e10:
    // 0x1e4e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e14:
    // 0x1e4e14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e18:
    // 0x1e4e18: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4e1c:
    // 0x1e4e1c: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1e4e20:
    // 0x1e4e20: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e4e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e4e24:
    // 0x1e4e24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4e28:
    // 0x1e4e28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4e2c:
    if (ctx->pc == 0x1E4E2Cu) {
        ctx->pc = 0x1E4E30u;
        goto label_1e4e30;
    }
    ctx->pc = 0x1E4E28u;
    {
        const bool branch_taken_0x1e4e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e28) {
            ctx->pc = 0x1E4E3Cu;
            goto label_1e4e3c;
        }
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0xc070038  jal         func_1C00E0
label_1e4e34:
    if (ctx->pc == 0x1E4E34u) {
        ctx->pc = 0x1E4E38u;
        goto label_1e4e38;
    }
    ctx->pc = 0x1E4E30u;
    SET_GPR_U32(ctx, 31, 0x1E4E38u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4E38u;
label_1e4e38:
    // 0x1e4e38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e4e3c:
    // 0x1e4e3c: 0x0  nop
    ctx->pc = 0x1e4e3cu;
    // NOP
label_1e4e40:
    // 0x1e4e40: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4e44:
    // 0x1e4e44: 0x24422e30  addiu       $v0, $v0, 0x2E30
    ctx->pc = 0x1e4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11824));
label_1e4e48:
    // 0x1e4e48: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e4e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e4e4c:
    // 0x1e4e4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4e50:
    // 0x1e4e50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4e54:
    if (ctx->pc == 0x1E4E54u) {
        ctx->pc = 0x1E4E58u;
        goto label_1e4e58;
    }
    ctx->pc = 0x1E4E50u;
    {
        const bool branch_taken_0x1e4e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e50) {
            ctx->pc = 0x1E4E64u;
            goto label_1e4e64;
        }
    }
    ctx->pc = 0x1E4E58u;
label_1e4e58:
    // 0x1e4e58: 0xc070038  jal         func_1C00E0
label_1e4e5c:
    if (ctx->pc == 0x1E4E5Cu) {
        ctx->pc = 0x1E4E60u;
        goto label_1e4e60;
    }
    ctx->pc = 0x1E4E58u;
    SET_GPR_U32(ctx, 31, 0x1E4E60u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4E60u;
label_1e4e60:
    // 0x1e4e60: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e4e64:
    // 0x1e4e64: 0x0  nop
    ctx->pc = 0x1e4e64u;
    // NOP
label_1e4e68:
    // 0x1e4e68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4e6c:
    // 0x1e4e6c: 0x2a020054  slti        $v0, $s0, 0x54
    ctx->pc = 0x1e4e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)84) ? 1 : 0);
label_1e4e70:
    // 0x1e4e70: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1e4e74:
    if (ctx->pc == 0x1E4E74u) {
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E78u;
        goto label_1e4e78;
    }
    ctx->pc = 0x1E4E70u;
    {
        const bool branch_taken_0x1e4e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e70) {
            ctx->pc = 0x1E4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4e18;
        }
    }
    ctx->pc = 0x1E4E78u;
label_1e4e78:
    // 0x1e4e78: 0xc07ab58  jal         func_1EAD60
label_1e4e7c:
    if (ctx->pc == 0x1E4E7Cu) {
        ctx->pc = 0x1E4E80u;
        goto label_1e4e80;
    }
    ctx->pc = 0x1E4E78u;
    SET_GPR_U32(ctx, 31, 0x1E4E80u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x1E4E80u;
label_1e4e80:
    // 0x1e4e80: 0xc04e19c  jal         func_138670
label_1e4e84:
    if (ctx->pc == 0x1E4E84u) {
        ctx->pc = 0x1E4E88u;
        goto label_1e4e88;
    }
    ctx->pc = 0x1E4E80u;
    SET_GPR_U32(ctx, 31, 0x1E4E88u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1E4E80u, 0x1E4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E88u;
label_1e4e88:
    // 0x1e4e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4e8c:
    // 0x1e4e8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4e90:
    // 0x1e4e90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4e94:
    // 0x1e4e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4e98:
    // 0x1e4e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e9c:
    // 0x1e4e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4ea0:
    // 0x1e4ea0: 0x3e00008  jr          $ra
label_1e4ea4:
    if (ctx->pc == 0x1E4EA4u) {
        ctx->pc = 0x1E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EA0u;
        // 0x1e4ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EA8u;
        goto label_1e4ea8;
    }
    ctx->pc = 0x1E4EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EA0u;
        // 0x1e4ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4EA8u;
label_1e4ea8:
    // 0x1e4ea8: 0x0  nop
    ctx->pc = 0x1e4ea8u;
    // NOP
label_1e4eac:
    // 0x1e4eac: 0x0  nop
    ctx->pc = 0x1e4eacu;
    // NOP
label_1e4eb0:
    // 0x1e4eb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1e4eb4:
    // 0x1e4eb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e4eb8:
    // 0x1e4eb8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1e4eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1e4ebc:
    // 0x1e4ebc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1e4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1e4ec0:
    // 0x1e4ec0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1e4ec0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ec4:
    // 0x1e4ec4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e4ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e4ec8:
    // 0x1e4ec8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e4ec8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ecc:
    // 0x1e4ecc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1e4ed0:
    // 0x1e4ed0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ed4:
    // 0x1e4ed4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e4ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e4ed8:
    // 0x1e4ed8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e4edc:
    // 0x1e4edc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e4edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e4ee0:
    // 0x1e4ee0: 0xc07a058  jal         func_1E8160
label_1e4ee4:
    if (ctx->pc == 0x1E4EE4u) {
        ctx->pc = 0x1E4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE0u;
        // 0x1e4ee4: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EE8u;
        goto label_1e4ee8;
    }
    ctx->pc = 0x1E4EE0u;
    SET_GPR_U32(ctx, 31, 0x1E4EE8u);
    ctx->pc = 0x1E4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE0u;
    // 0x1e4ee4: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8160u;
    { ctx->pc = 0x1e8160; return; }
    ctx->pc = 0x1E4EE8u;
label_1e4ee8:
    // 0x1e4ee8: 0xc041738  jal         func_105CE0
label_1e4eec:
    if (ctx->pc == 0x1E4EECu) {
        ctx->pc = 0x1E4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE8u;
        // 0x1e4eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EF0u;
        goto label_1e4ef0;
    }
    ctx->pc = 0x1E4EE8u;
    SET_GPR_U32(ctx, 31, 0x1E4EF0u);
    ctx->pc = 0x1E4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE8u;
    // 0x1e4eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4EE8u, 0x1E4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EF0u;
label_1e4ef0:
    // 0x1e4ef0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4ef4:
    // 0x1e4ef4: 0xc070080  jal         func_1C0200
label_1e4ef8:
    if (ctx->pc == 0x1E4EF8u) {
        ctx->pc = 0x1E4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF4u;
        // 0x1e4ef8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EFCu;
        goto label_1e4efc;
    }
    ctx->pc = 0x1E4EF4u;
    SET_GPR_U32(ctx, 31, 0x1E4EFCu);
    ctx->pc = 0x1E4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EF4u;
    // 0x1e4ef8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4EFCu;
label_1e4efc:
    // 0x1e4efc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4f00:
    // 0x1e4f00: 0xc0416e4  jal         func_105B90
label_1e4f04:
    if (ctx->pc == 0x1E4F04u) {
        ctx->pc = 0x1E4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F00u;
        // 0x1e4f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F08u;
        goto label_1e4f08;
    }
    ctx->pc = 0x1E4F00u;
    SET_GPR_U32(ctx, 31, 0x1E4F08u);
    ctx->pc = 0x1E4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F00u;
    // 0x1e4f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F00u, 0x1E4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F08u;
label_1e4f08:
    // 0x1e4f08: 0xaf828e74  sw          $v0, -0x718C($gp)
    ctx->pc = 0x1e4f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 2));
label_1e4f0c:
    // 0x1e4f0c: 0xc041738  jal         func_105CE0
label_1e4f10:
    if (ctx->pc == 0x1E4F10u) {
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F0Cu;
        // 0x1e4f10: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F14u;
        goto label_1e4f14;
    }
    ctx->pc = 0x1E4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F14u);
    ctx->pc = 0x1E4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F0Cu;
    // 0x1e4f10: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4F0Cu, 0x1E4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4f18:
    // 0x1e4f18: 0xc070080  jal         func_1C0200
label_1e4f1c:
    if (ctx->pc == 0x1E4F1Cu) {
        ctx->pc = 0x1E4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F18u;
        // 0x1e4f1c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F20u;
        goto label_1e4f20;
    }
    ctx->pc = 0x1E4F18u;
    SET_GPR_U32(ctx, 31, 0x1E4F20u);
    ctx->pc = 0x1E4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F18u;
    // 0x1e4f1c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4F20u;
label_1e4f20:
    // 0x1e4f20: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_1e4f24:
    // 0x1e4f24: 0xc0416e4  jal         func_105B90
label_1e4f28:
    if (ctx->pc == 0x1E4F28u) {
        ctx->pc = 0x1E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F24u;
        // 0x1e4f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F2Cu;
        goto label_1e4f2c;
    }
    ctx->pc = 0x1E4F24u;
    SET_GPR_U32(ctx, 31, 0x1E4F2Cu);
    ctx->pc = 0x1E4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F24u;
    // 0x1e4f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F24u, 0x1E4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F2Cu;
label_1e4f2c:
    // 0x1e4f2c: 0xaf828e70  sw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938224), GPR_U32(ctx, 2));
label_1e4f30:
    // 0x1e4f30: 0xc041738  jal         func_105CE0
label_1e4f34:
    if (ctx->pc == 0x1E4F34u) {
        ctx->pc = 0x1E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F30u;
        // 0x1e4f34: 0x240407ec  addiu       $a0, $zero, 0x7EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F38u;
        goto label_1e4f38;
    }
    ctx->pc = 0x1E4F30u;
    SET_GPR_U32(ctx, 31, 0x1E4F38u);
    ctx->pc = 0x1E4F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F30u;
    // 0x1e4f34: 0x240407ec  addiu       $a0, $zero, 0x7EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4F30u, 0x1E4F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F38u;
label_1e4f38:
    // 0x1e4f38: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4f3c:
    // 0x1e4f3c: 0xc070080  jal         func_1C0200
label_1e4f40:
    if (ctx->pc == 0x1E4F40u) {
        ctx->pc = 0x1E4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F3Cu;
        // 0x1e4f40: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F44u;
        goto label_1e4f44;
    }
    ctx->pc = 0x1E4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F44u);
    ctx->pc = 0x1E4F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F3Cu;
    // 0x1e4f40: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4F44u;
label_1e4f44:
    // 0x1e4f44: 0x240407ec  addiu       $a0, $zero, 0x7EC
    ctx->pc = 0x1e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
label_1e4f48:
    // 0x1e4f48: 0xc0416e4  jal         func_105B90
label_1e4f4c:
    if (ctx->pc == 0x1E4F4Cu) {
        ctx->pc = 0x1E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F48u;
        // 0x1e4f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F50u;
        goto label_1e4f50;
    }
    ctx->pc = 0x1E4F48u;
    SET_GPR_U32(ctx, 31, 0x1E4F50u);
    ctx->pc = 0x1E4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F48u;
    // 0x1e4f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F48u, 0x1E4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F50u;
label_1e4f50:
    // 0x1e4f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f54:
    // 0x1e4f54: 0xc060678  jal         func_1819E0
label_1e4f58:
    if (ctx->pc == 0x1E4F58u) {
        ctx->pc = 0x1E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F54u;
        // 0x1e4f58: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F5Cu;
        goto label_1e4f5c;
    }
    ctx->pc = 0x1E4F54u;
    SET_GPR_U32(ctx, 31, 0x1E4F5Cu);
    ctx->pc = 0x1E4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F54u;
    // 0x1e4f58: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1E4F5Cu;
label_1e4f5c:
    // 0x1e4f5c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1e4f5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1e4f60:
    // 0x1e4f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f64:
    // 0x1e4f64: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1e4f64u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1e4f68:
    // 0x1e4f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f6c:
    // 0x1e4f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f70:
    // 0x1e4f70: 0xc0602c8  jal         func_180B20
label_1e4f74:
    if (ctx->pc == 0x1E4F74u) {
        ctx->pc = 0x1E4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F70u;
        // 0x1e4f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F78u;
        goto label_1e4f78;
    }
    ctx->pc = 0x1E4F70u;
    SET_GPR_U32(ctx, 31, 0x1E4F78u);
    ctx->pc = 0x1E4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F70u;
    // 0x1e4f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    { ctx->pc = 0x180b20; return; }
    ctx->pc = 0x1E4F78u;
label_1e4f78:
    // 0x1e4f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f7c:
    // 0x1e4f7c: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1e4f80:
    // 0x1e4f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f84:
    // 0x1e4f84: 0x27a600ce  addiu       $a2, $sp, 0xCE
    ctx->pc = 0x1e4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 206));
label_1e4f88:
    // 0x1e4f88: 0xc060390  jal         func_180E40
label_1e4f8c:
    if (ctx->pc == 0x1E4F8Cu) {
        ctx->pc = 0x1E4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F88u;
        // 0x1e4f8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F90u;
        goto label_1e4f90;
    }
    ctx->pc = 0x1E4F88u;
    SET_GPR_U32(ctx, 31, 0x1E4F90u);
    ctx->pc = 0x1E4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F88u;
    // 0x1e4f8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    { ctx->pc = 0x180e40; return; }
    ctx->pc = 0x1E4F90u;
label_1e4f90:
    // 0x1e4f90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e4f94:
    // 0x1e4f94: 0x246330e0  addiu       $v1, $v1, 0x30E0
    ctx->pc = 0x1e4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12512));
label_1e4f98:
    // 0x1e4f98: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1e4f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e4f9c:
    // 0x1e4f9c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e4fa0:
    // 0x1e4fa0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1e4fa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4fa4:
    // 0x1e4fa4: 0xc06063c  jal         func_1818F0
label_1e4fa8:
    if (ctx->pc == 0x1E4FA8u) {
        ctx->pc = 0x1E4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FA4u;
        // 0x1e4fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FACu;
        goto label_1e4fac;
    }
    ctx->pc = 0x1E4FA4u;
    SET_GPR_U32(ctx, 31, 0x1E4FACu);
    ctx->pc = 0x1E4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FA4u;
    // 0x1e4fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    { ctx->pc = 0x1818f0; return; }
    ctx->pc = 0x1E4FACu;
label_1e4fac:
    // 0x1e4fac: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e4facu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e4fb0:
    // 0x1e4fb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e4fb4:
    // 0x1e4fb4: 0x87b100ce  lh          $s1, 0xCE($sp)
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
label_1e4fb8:
    // 0x1e4fb8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1e4fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e4fbc:
    // 0x1e4fbc: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e4fc0:
    if (ctx->pc == 0x1E4FC0u) {
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FC4u;
        goto label_1e4fc4;
    }
    ctx->pc = 0x1E4FBCu;
    {
        const bool branch_taken_0x1e4fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fbc) {
            ctx->pc = 0x1E4F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4f6c;
        }
    }
    ctx->pc = 0x1E4FC4u;
label_1e4fc4:
    // 0x1e4fc4: 0xc070038  jal         func_1C00E0
label_1e4fc8:
    if (ctx->pc == 0x1E4FC8u) {
        ctx->pc = 0x1E4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FC4u;
        // 0x1e4fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FCCu;
        goto label_1e4fcc;
    }
    ctx->pc = 0x1E4FC4u;
    SET_GPR_U32(ctx, 31, 0x1E4FCCu);
    ctx->pc = 0x1E4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FC4u;
    // 0x1e4fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4FCCu;
label_1e4fcc:
    // 0x1e4fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fd0:
    // 0x1e4fd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fd4:
    // 0x1e4fd4: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e4fd8:
    // 0x1e4fd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4fdc:
    // 0x1e4fdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4fe0:
    // 0x1e4fe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE0u;
        // 0x1e4fe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE0u;
        // 0x1e4fe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E4FF4u;
            goto label_1e4ff4;
        }
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0xc070080  jal         func_1C0200
label_1e4fec:
    if (ctx->pc == 0x1E4FECu) {
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FF0u;
        goto label_1e4ff0;
    }
    ctx->pc = 0x1E4FE8u;
    SET_GPR_U32(ctx, 31, 0x1E4FF0u);
    ctx->pc = 0x1E4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FE8u;
    // 0x1e4fec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4FF0u;
label_1e4ff0:
    // 0x1e4ff0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e4ff4:
    // 0x1e4ff4: 0x0  nop
    ctx->pc = 0x1e4ff4u;
    // NOP
label_1e4ff8:
    // 0x1e4ff8: 0x27828e30  addiu       $v0, $gp, -0x71D0
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e4ffc:
    // 0x1e4ffc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5000:
    // 0x1e5000: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e5004:
    // 0x1e5004: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5008:
    if (ctx->pc == 0x1E5008u) {
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E500Cu;
        goto label_1e500c;
    }
    ctx->pc = 0x1E5004u;
    {
        const bool branch_taken_0x1e5004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5004) {
            ctx->pc = 0x1E5018u;
            goto label_1e5018;
        }
    }
    ctx->pc = 0x1E500Cu;
label_1e500c:
    // 0x1e500c: 0xc070080  jal         func_1C0200
label_1e5010:
    if (ctx->pc == 0x1E5010u) {
        ctx->pc = 0x1E5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E500Cu;
        // 0x1e5010: 0x24050d10  addiu       $a1, $zero, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5014u;
        goto label_1e5014;
    }
    ctx->pc = 0x1E500Cu;
    SET_GPR_U32(ctx, 31, 0x1E5014u);
    ctx->pc = 0x1E5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E500Cu;
    // 0x1e5010: 0x24050d10  addiu       $a1, $zero, 0xD10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E5014u;
label_1e5014:
    // 0x1e5014: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5018:
    // 0x1e5018: 0x27828e18  addiu       $v0, $gp, -0x71E8
    ctx->pc = 0x1e5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_1e501c:
    // 0x1e501c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e501cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5020:
    // 0x1e5020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e5024:
    // 0x1e5024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5028:
    if (ctx->pc == 0x1E5028u) {
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E502Cu;
        goto label_1e502c;
    }
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E5038u;
            goto label_1e5038;
        }
    }
    ctx->pc = 0x1E502Cu;
label_1e502c:
    // 0x1e502c: 0xc070080  jal         func_1C0200
label_1e5030:
    if (ctx->pc == 0x1E5030u) {
        ctx->pc = 0x1E5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E502Cu;
        // 0x1e5030: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5034u;
        goto label_1e5034;
    }
    ctx->pc = 0x1E502Cu;
    SET_GPR_U32(ctx, 31, 0x1E5034u);
    ctx->pc = 0x1E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E502Cu;
    // 0x1e5030: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E5034u;
label_1e5034:
    // 0x1e5034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5038:
    // 0x1e5038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e503c:
    // 0x1e503c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e503cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5040:
    // 0x1e5040: 0x0  nop
    ctx->pc = 0x1e5040u;
    // NOP
label_1e5044:
    // 0x1e5044: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5048:
    // 0x1e5048: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_1e504c:
    // 0x1e504c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5050:
    // 0x1e5050: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e5054:
    // 0x1e5054: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e5054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e5058:
    // 0x1e5058: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e505c:
    // 0x1e505c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5060:
    if (ctx->pc == 0x1E5060u) {
        ctx->pc = 0x1E5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E505Cu;
        // 0x1e5060: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5064u;
        goto label_1e5064;
    }
    ctx->pc = 0x1E505Cu;
    {
        const bool branch_taken_0x1e505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E505Cu;
        // 0x1e5060: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e505c) {
            ctx->pc = 0x1E5070u;
            goto label_1e5070;
        }
    }
    ctx->pc = 0x1E5064u;
label_1e5064:
    // 0x1e5064: 0xc070080  jal         func_1C0200
label_1e5068:
    if (ctx->pc == 0x1E5068u) {
        ctx->pc = 0x1E5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5064u;
        // 0x1e5068: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E506Cu;
        goto label_1e506c;
    }
    ctx->pc = 0x1E5064u;
    SET_GPR_U32(ctx, 31, 0x1E506Cu);
    ctx->pc = 0x1E5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5064u;
    // 0x1e5068: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E506Cu;
label_1e506c:
    // 0x1e506c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e506cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e5070:
    // 0x1e5070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5074:
    // 0x1e5074: 0x2a220029  slti        $v0, $s1, 0x29
    ctx->pc = 0x1e5074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e5078:
    // 0x1e5078: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e507c:
    if (ctx->pc == 0x1E507Cu) {
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5080u;
        goto label_1e5080;
    }
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5040;
        }
    }
    ctx->pc = 0x1E5080u;
label_1e5080:
    // 0x1e5080: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e5084:
    // 0x1e5084: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e5084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5088:
    // 0x1e5088: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e508c:
    // 0x1e508c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5090:
    if (ctx->pc == 0x1E5090u) {
        ctx->pc = 0x1E5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E508Cu;
        // 0x1e5090: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5094u;
        goto label_1e5094;
    }
    ctx->pc = 0x1E508Cu;
    {
        const bool branch_taken_0x1e508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E508Cu;
        // 0x1e5090: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e508c) {
            ctx->pc = 0x1E50A0u;
            goto label_1e50a0;
        }
    }
    ctx->pc = 0x1E5094u;
label_1e5094:
    // 0x1e5094: 0xc070080  jal         func_1C0200
label_1e5098:
    if (ctx->pc == 0x1E5098u) {
        ctx->pc = 0x1E5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5094u;
        // 0x1e5098: 0x24050b30  addiu       $a1, $zero, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E509Cu;
        goto label_1e509c;
    }
    ctx->pc = 0x1E5094u;
    SET_GPR_U32(ctx, 31, 0x1E509Cu);
    ctx->pc = 0x1E5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5094u;
    // 0x1e5098: 0x24050b30  addiu       $a1, $zero, 0xB30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E509Cu;
label_1e509c:
    // 0x1e509c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e509cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50a0:
    // 0x1e50a0: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e50a4:
    // 0x1e50a4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50a8:
    // 0x1e50a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50ac:
    // 0x1e50ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50b0:
    if (ctx->pc == 0x1E50B0u) {
        ctx->pc = 0x1E50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ACu;
        // 0x1e50b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50B4u;
        goto label_1e50b4;
    }
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ACu;
        // 0x1e50b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50C0u;
            goto label_1e50c0;
        }
    }
    ctx->pc = 0x1E50B4u;
label_1e50b4:
    // 0x1e50b4: 0xc070080  jal         func_1C0200
label_1e50b8:
    if (ctx->pc == 0x1E50B8u) {
        ctx->pc = 0x1E50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B4u;
        // 0x1e50b8: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50BCu;
        goto label_1e50bc;
    }
    ctx->pc = 0x1E50B4u;
    SET_GPR_U32(ctx, 31, 0x1E50BCu);
    ctx->pc = 0x1E50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50B4u;
    // 0x1e50b8: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50BCu;
label_1e50bc:
    // 0x1e50bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50c0:
    // 0x1e50c0: 0x27828e48  addiu       $v0, $gp, -0x71B8
    ctx->pc = 0x1e50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
label_1e50c4:
    // 0x1e50c4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50c8:
    // 0x1e50c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50cc:
    // 0x1e50cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50d0:
    if (ctx->pc == 0x1E50D0u) {
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50D4u;
        goto label_1e50d4;
    }
    ctx->pc = 0x1E50CCu;
    {
        const bool branch_taken_0x1e50cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50cc) {
            ctx->pc = 0x1E50E0u;
            goto label_1e50e0;
        }
    }
    ctx->pc = 0x1E50D4u;
label_1e50d4:
    // 0x1e50d4: 0xc070080  jal         func_1C0200
label_1e50d8:
    if (ctx->pc == 0x1E50D8u) {
        ctx->pc = 0x1E50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D4u;
        // 0x1e50d8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50DCu;
        goto label_1e50dc;
    }
    ctx->pc = 0x1E50D4u;
    SET_GPR_U32(ctx, 31, 0x1E50DCu);
    ctx->pc = 0x1E50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50D4u;
    // 0x1e50d8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50DCu;
label_1e50dc:
    // 0x1e50dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50e0:
    // 0x1e50e0: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e50e4:
    // 0x1e50e4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50e8:
    // 0x1e50e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50ec:
    // 0x1e50ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50f0:
    if (ctx->pc == 0x1E50F0u) {
        ctx->pc = 0x1E50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ECu;
        // 0x1e50f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50F4u;
        goto label_1e50f4;
    }
    ctx->pc = 0x1E50ECu;
    {
        const bool branch_taken_0x1e50ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ECu;
        // 0x1e50f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50ec) {
            ctx->pc = 0x1E5100u;
            goto label_1e5100;
        }
    }
    ctx->pc = 0x1E50F4u;
label_1e50f4:
    // 0x1e50f4: 0xc070080  jal         func_1C0200
label_1e50f8:
    if (ctx->pc == 0x1E50F8u) {
        ctx->pc = 0x1E50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50F4u;
        // 0x1e50f8: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50FCu;
        goto label_1e50fc;
    }
    ctx->pc = 0x1E50F4u;
    SET_GPR_U32(ctx, 31, 0x1E50FCu);
    ctx->pc = 0x1E50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50F4u;
    // 0x1e50f8: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50FCu;
label_1e50fc:
    // 0x1e50fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5100:
    // 0x1e5100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e5104:
    // 0x1e5104: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e5104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e5108:
    // 0x1e5108: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1e510c:
    if (ctx->pc == 0x1E510Cu) {
        ctx->pc = 0x1E510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5108u;
        // 0x1e510c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5110u;
        goto label_1e5110;
    }
    ctx->pc = 0x1E5108u;
    {
        const bool branch_taken_0x1e5108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5108u;
        // 0x1e510c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5108) {
            ctx->pc = 0x1E4FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4fd4;
        }
    }
    ctx->pc = 0x1E5110u;
label_1e5110:
    // 0x1e5110: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5114:
    // 0x1e5114: 0xaf958e98  sw          $s5, -0x7168($gp)
    ctx->pc = 0x1e5114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938264), GPR_U32(ctx, 21));
label_1e5118:
    // 0x1e5118: 0xac203110  sw          $zero, 0x3110($at)
    ctx->pc = 0x1e5118u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12560), GPR_U32(ctx, 0));
label_1e511c:
    // 0x1e511c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e511cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5120:
    // 0x1e5120: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5124:
    // 0x1e5124: 0xaf968ea0  sw          $s6, -0x7160($gp)
    ctx->pc = 0x1e5124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938272), GPR_U32(ctx, 22));
label_1e5128:
    // 0x1e5128: 0xac203114  sw          $zero, 0x3114($at)
    ctx->pc = 0x1e5128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12564), GPR_U32(ctx, 0));
label_1e512c:
    // 0x1e512c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e512cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5130:
    // 0x1e5130: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5134:
    // 0x1e5134: 0xaf978ea4  sw          $s7, -0x715C($gp)
    ctx->pc = 0x1e5134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 23));
label_1e5138:
    // 0x1e5138: 0xac203118  sw          $zero, 0x3118($at)
    ctx->pc = 0x1e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12568), GPR_U32(ctx, 0));
label_1e513c:
    // 0x1e513c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5140:
    // 0x1e5140: 0xaf808e88  sw          $zero, -0x7178($gp)
    ctx->pc = 0x1e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938248), GPR_U32(ctx, 0));
label_1e5144:
    // 0x1e5144: 0xaf808e8c  sw          $zero, -0x7174($gp)
    ctx->pc = 0x1e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938252), GPR_U32(ctx, 0));
label_1e5148:
    // 0x1e5148: 0xaf808e80  sw          $zero, -0x7180($gp)
    ctx->pc = 0x1e5148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 0));
label_1e514c:
    // 0x1e514c: 0xac20311c  sw          $zero, 0x311C($at)
    ctx->pc = 0x1e514cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12572), GPR_U32(ctx, 0));
label_1e5150:
    // 0x1e5150: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1e5154:
    // 0x1e5154: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e5154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e5158:
    // 0x1e5158: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_1e515c:
    // 0x1e515c: 0x24c63420  addiu       $a2, $a2, 0x3420
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13344));
label_1e5160:
    // 0x1e5160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e5160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5164:
    // 0x1e5164: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5168:
    // 0x1e5168: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x1e5168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
label_1e516c:
    // 0x1e516c: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
label_1e5170:
    // 0x1e5170: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5174:
    // 0x1e5174: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1e5174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1e5178:
    // 0x1e5178: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1e517c:
    // 0x1e517c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e517cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1e5180:
    // 0x1e5180: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_1e5184:
    // 0x1e5184: 0x14470015  bne         $v0, $a3, . + 4 + (0x15 << 2)
label_1e5188:
    if (ctx->pc == 0x1E5188u) {
        ctx->pc = 0x1E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5184u;
        // 0x1e5188: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E518Cu;
        goto label_1e518c;
    }
    ctx->pc = 0x1E5184u;
    {
        const bool branch_taken_0x1e5184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5184u;
        // 0x1e5188: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5184) {
            ctx->pc = 0x1E51DCu;
            goto label_1e51dc;
        }
    }
    ctx->pc = 0x1E518Cu;
label_1e518c:
    // 0x1e518c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e518cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5190:
    // 0x1e5190: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_1e5194:
    if (ctx->pc == 0x1E5194u) {
        ctx->pc = 0x1E5198u;
        goto label_1e5198;
    }
    ctx->pc = 0x1E5190u;
    {
        const bool branch_taken_0x1e5190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e5190) {
            ctx->pc = 0x1E51C0u;
            goto label_1e51c0;
        }
    }
    ctx->pc = 0x1E5198u;
label_1e5198:
    // 0x1e5198: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_1e519c:
    if (ctx->pc == 0x1E519Cu) {
        ctx->pc = 0x1E51A0u;
        goto label_1e51a0;
    }
    ctx->pc = 0x1E5198u;
    {
        const bool branch_taken_0x1e5198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e5198) {
            ctx->pc = 0x1E51B8u;
            goto label_1e51b8;
        }
    }
    ctx->pc = 0x1E51A0u;
label_1e51a0:
    // 0x1e51a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e51a4:
    if (ctx->pc == 0x1E51A4u) {
        ctx->pc = 0x1E51A8u;
        goto label_1e51a8;
    }
    ctx->pc = 0x1E51A0u;
    {
        const bool branch_taken_0x1e51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a0) {
            ctx->pc = 0x1E51B0u;
            goto label_1e51b0;
        }
    }
    ctx->pc = 0x1E51A8u;
label_1e51a8:
    // 0x1e51a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e51ac:
    if (ctx->pc == 0x1E51ACu) {
        ctx->pc = 0x1E51B0u;
        goto label_1e51b0;
    }
    ctx->pc = 0x1E51A8u;
    {
        const bool branch_taken_0x1e51a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a8) {
            ctx->pc = 0x1E51C8u;
            goto label_1e51c8;
        }
    }
    ctx->pc = 0x1E51B0u;
label_1e51b0:
    // 0x1e51b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e51b4:
    if (ctx->pc == 0x1E51B4u) {
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51B8u;
        goto label_1e51b8;
    }
    ctx->pc = 0x1E51B0u;
    {
        const bool branch_taken_0x1e51b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b0) {
            ctx->pc = 0x1E51CCu;
            goto label_1e51cc;
        }
    }
    ctx->pc = 0x1E51B8u;
label_1e51b8:
    // 0x1e51b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e51bc:
    if (ctx->pc == 0x1E51BCu) {
        ctx->pc = 0x1E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B8u;
        // 0x1e51bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51C0u;
        goto label_1e51c0;
    }
    ctx->pc = 0x1E51B8u;
    {
        const bool branch_taken_0x1e51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B8u;
        // 0x1e51bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b8) {
            ctx->pc = 0x1E51CCu;
            goto label_1e51cc;
        }
    }
    ctx->pc = 0x1E51C0u;
label_1e51c0:
    // 0x1e51c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e51c4:
    if (ctx->pc == 0x1E51C4u) {
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51C8u;
        goto label_1e51c8;
    }
    ctx->pc = 0x1E51C0u;
    {
        const bool branch_taken_0x1e51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51c0) {
            ctx->pc = 0x1E51CCu;
            goto label_1e51cc;
        }
    }
    ctx->pc = 0x1E51C8u;
label_1e51c8:
    // 0x1e51c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e51cc:
    // 0x1e51cc: 0x0  nop
    ctx->pc = 0x1e51ccu;
    // NOP
label_1e51d0:
    // 0x1e51d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e51d4:
    // 0x1e51d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e51d8:
    // 0x1e51d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1e51dc:
    // 0x1e51dc: 0x0  nop
    ctx->pc = 0x1e51dcu;
    // NOP
label_1e51e0:
    // 0x1e51e0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e51e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e51e4:
    // 0x1e51e4: 0x29420029  slti        $v0, $t2, 0x29
    ctx->pc = 0x1e51e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e51e8:
    // 0x1e51e8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1e51ec:
    if (ctx->pc == 0x1E51ECu) {
        ctx->pc = 0x1E51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51E8u;
        // 0x1e51ec: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51F0u;
        goto label_1e51f0;
    }
    ctx->pc = 0x1E51E8u;
    {
        const bool branch_taken_0x1e51e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51E8u;
        // 0x1e51ec: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51e8) {
            ctx->pc = 0x1E5174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5174;
        }
    }
    ctx->pc = 0x1E51F0u;
label_1e51f0:
    // 0x1e51f0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e51f4:
    // 0x1e51f4: 0x8c22ccf8  lw          $v0, -0x3308($at)
    ctx->pc = 0x1e51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e51f8:
    // 0x1e51f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e51fc:
    if (ctx->pc == 0x1E51FCu) {
        ctx->pc = 0x1E5200u;
        goto label_1e5200;
    }
    ctx->pc = 0x1E51F8u;
    {
        const bool branch_taken_0x1e51f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51f8) {
            ctx->pc = 0x1E520Cu;
            goto label_1e520c;
        }
    }
    ctx->pc = 0x1E5200u;
label_1e5200:
    // 0x1e5200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5204:
    // 0x1e5204: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5208:
    // 0x1e5208: 0xac22311c  sw          $v0, 0x311C($at)
    ctx->pc = 0x1e5208u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12572), GPR_U32(ctx, 2));
label_1e520c:
    // 0x1e520c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e520cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5210:
    // 0x1e5210: 0x8c22ccfc  lw          $v0, -0x3304($at)
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954236)));
label_1e5214:
    // 0x1e5214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e5218:
    if (ctx->pc == 0x1E5218u) {
        ctx->pc = 0x1E5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5214u;
        // 0x1e5218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E521Cu;
        goto label_1e521c;
    }
    ctx->pc = 0x1E5214u;
    {
        const bool branch_taken_0x1e5214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5214u;
        // 0x1e5218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5214) {
            ctx->pc = 0x1E5224u;
            goto label_1e5224;
        }
    }
    ctx->pc = 0x1E521Cu;
label_1e521c:
    // 0x1e521c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5220:
    // 0x1e5220: 0xac223114  sw          $v0, 0x3114($at)
    ctx->pc = 0x1e5220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12564), GPR_U32(ctx, 2));
label_1e5224:
    // 0x1e5224: 0xaf808e94  sw          $zero, -0x716C($gp)
    ctx->pc = 0x1e5224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938260), GPR_U32(ctx, 0));
label_1e5228:
    // 0x1e5228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e522c:
    // 0x1e522c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e522cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5230:
    // 0x1e5230: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e5234:
    // 0x1e5234: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5238:
    // 0x1e5238: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e523c:
    // 0x1e523c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1e523cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5240:
    // 0x1e5240: 0xc05e234  jal         func_1788D0
label_1e5244:
    if (ctx->pc == 0x1E5244u) {
        ctx->pc = 0x1E5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5240u;
        // 0x1e5244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5248u;
        goto label_1e5248;
    }
    ctx->pc = 0x1E5240u;
    SET_GPR_U32(ctx, 31, 0x1E5248u);
    ctx->pc = 0x1E5244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5240u;
    // 0x1e5244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E5240u, 0x1E5248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5248u;
label_1e5248:
    // 0x1e5248: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1e5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e524c:
    // 0x1e524c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5250:
    // 0x1e5250: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e5250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e5254:
    // 0x1e5254: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1e5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e5258:
    // 0x1e5258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e525c:
    // 0x1e525c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e525cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5260:
    // 0x1e5260: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e5264:
    // 0x1e5264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5268:
    // 0x1e5268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e526c:
    // 0x1e526c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e526cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e5270:
    // 0x1e5270: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e5274:
    // 0x1e5274: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e5274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5278:
    // 0x1e5278: 0xdc2530e0  ld          $a1, 0x30E0($at)
    ctx->pc = 0x1e5278u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12512)));
label_1e527c:
    // 0x1e527c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e527cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5280:
    // 0x1e5280: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e5280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5284:
    // 0x1e5284: 0xc05de30  jal         func_1778C0
label_1e5288:
    if (ctx->pc == 0x1E5288u) {
        ctx->pc = 0x1E5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5284u;
        // 0x1e5288: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E528Cu;
        goto label_1e528c;
    }
    ctx->pc = 0x1E5284u;
    SET_GPR_U32(ctx, 31, 0x1E528Cu);
    ctx->pc = 0x1E5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5284u;
    // 0x1e5288: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E5284u, 0x1E528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E528Cu;
label_1e528c:
    // 0x1e528c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e5290:
    // 0x1e5290: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e5290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e5294:
    // 0x1e5294: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1e5298:
    if (ctx->pc == 0x1E5298u) {
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E529Cu;
        goto label_1e529c;
    }
    ctx->pc = 0x1E5294u;
    {
        const bool branch_taken_0x1e5294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5294u;
        // 0x1e5298: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5294) {
            ctx->pc = 0x1E5230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5230;
        }
    }
    ctx->pc = 0x1E529Cu;
label_1e529c:
    // 0x1e529c: 0xc07a13c  jal         func_1E84F0
label_1e52a0:
    if (ctx->pc == 0x1E52A0u) {
        ctx->pc = 0x1E52A4u;
        goto label_1e52a4;
    }
    ctx->pc = 0x1E529Cu;
    SET_GPR_U32(ctx, 31, 0x1E52A4u);
    ctx->pc = 0x1E84F0u;
    { ctx->pc = 0x1e84f0; return; }
    ctx->pc = 0x1E52A4u;
label_1e52a4:
    // 0x1e52a4: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1e52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1e52a8:
    // 0x1e52a8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1e52ac:
    // 0x1e52ac: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e52b0:
    // 0x1e52b0: 0xaf808e10  sw          $zero, -0x71F0($gp)
    ctx->pc = 0x1e52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 0));
label_1e52b4:
    // 0x1e52b4: 0xaf808e0c  sw          $zero, -0x71F4($gp)
    ctx->pc = 0x1e52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938124), GPR_U32(ctx, 0));
label_1e52b8:
    // 0x1e52b8: 0xc07091c  jal         func_1C2470
label_1e52bc:
    if (ctx->pc == 0x1E52BCu) {
        ctx->pc = 0x1E52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52B8u;
        // 0x1e52bc: 0xaf808e08  sw          $zero, -0x71F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52C0u;
        goto label_1e52c0;
    }
    ctx->pc = 0x1E52B8u;
    SET_GPR_U32(ctx, 31, 0x1E52C0u);
    ctx->pc = 0x1E52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52B8u;
    // 0x1e52bc: 0xaf808e08  sw          $zero, -0x71F8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1E52C0u;
label_1e52c0:
    // 0x1e52c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e52c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e52c4:
    // 0x1e52c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e52c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e52c8:
    // 0x1e52c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e52c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e52cc:
    // 0x1e52cc: 0x27828e18  addiu       $v0, $gp, -0x71E8
    ctx->pc = 0x1e52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_1e52d0:
    // 0x1e52d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e52d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e52d4:
    // 0x1e52d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e52d8:
    // 0x1e52d8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e52d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e52dc:
    // 0x1e52dc: 0xc05e234  jal         func_1788D0
label_1e52e0:
    if (ctx->pc == 0x1E52E0u) {
        ctx->pc = 0x1E52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52DCu;
        // 0x1e52e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E52E4u;
        goto label_1e52e4;
    }
    ctx->pc = 0x1E52DCu;
    SET_GPR_U32(ctx, 31, 0x1E52E4u);
    ctx->pc = 0x1E52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52DCu;
    // 0x1e52e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E52DCu, 0x1E52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52E4u;
label_1e52e4:
    // 0x1e52e4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1e52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1e52e8:
    // 0x1e52e8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e52ec:
    // 0x1e52ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e52ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e52f0:
    // 0x1e52f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e52f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e52f4:
    // 0x1e52f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e52f8:
    // 0x1e52f8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e52f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e52fc:
    // 0x1e52fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e52fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e5300:
    // 0x1e5300: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1e5300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5304:
    // 0x1e5304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5308:
    // 0x1e5308: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e530c:
    // 0x1e530c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e5310:
    // 0x1e5310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e5310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5314:
    // 0x1e5314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e5314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5318:
    // 0x1e5318: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e5318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e531c:
    // 0x1e531c: 0xc05de30  jal         func_1778C0
label_1e5320:
    if (ctx->pc == 0x1E5320u) {
        ctx->pc = 0x1E5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E531Cu;
        // 0x1e5320: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5324u;
        goto label_1e5324;
    }
    ctx->pc = 0x1E531Cu;
    SET_GPR_U32(ctx, 31, 0x1E5324u);
    ctx->pc = 0x1E5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E531Cu;
    // 0x1e5320: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E531Cu, 0x1E5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5324u;
label_1e5324:
    // 0x1e5324: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5328:
    // 0x1e5328: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1e5328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e532c:
    // 0x1e532c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1e5330:
    if (ctx->pc == 0x1E5330u) {
        ctx->pc = 0x1E5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E532Cu;
        // 0x1e5330: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5334u;
        goto label_1e5334;
    }
    ctx->pc = 0x1E532Cu;
    {
        const bool branch_taken_0x1e532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E532Cu;
        // 0x1e5330: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e532c) {
            ctx->pc = 0x1E52CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e52cc;
        }
    }
    ctx->pc = 0x1E5334u;
label_1e5334:
    // 0x1e5334: 0xc079b68  jal         func_1E6DA0
label_1e5338:
    if (ctx->pc == 0x1E5338u) {
        ctx->pc = 0x1E533Cu;
        goto label_1e533c;
    }
    ctx->pc = 0x1E5334u;
    SET_GPR_U32(ctx, 31, 0x1E533Cu);
    ctx->pc = 0x1E6DA0u;
    { ctx->pc = 0x1e6da0; return; }
    ctx->pc = 0x1E533Cu;
label_1e533c:
    // 0x1e533c: 0xc079e1c  jal         func_1E7870
label_1e5340:
    if (ctx->pc == 0x1E5340u) {
        ctx->pc = 0x1E5344u;
        goto label_1e5344;
    }
    ctx->pc = 0x1E533Cu;
    SET_GPR_U32(ctx, 31, 0x1E5344u);
    ctx->pc = 0x1E7870u;
    { ctx->pc = 0x1e7870; return; }
    ctx->pc = 0x1E5344u;
label_1e5344:
    // 0x1e5344: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1e5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1e5348:
    // 0x1e5348: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e5348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e534c:
    // 0x1e534c: 0xaf828dcc  sw          $v0, -0x7234($gp)
    ctx->pc = 0x1e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 2));
label_1e5350:
    // 0x1e5350: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e5350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e5354:
    // 0x1e5354: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1e5354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e5358:
    // 0x1e5358: 0xaf808dd0  sw          $zero, -0x7230($gp)
    ctx->pc = 0x1e5358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 0));
label_1e535c:
    // 0x1e535c: 0xc07091c  jal         func_1C2470
label_1e5360:
    if (ctx->pc == 0x1E5360u) {
        ctx->pc = 0x1E5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E535Cu;
        // 0x1e5360: 0xaf808dc8  sw          $zero, -0x7238($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5364u;
        goto label_1e5364;
    }
    ctx->pc = 0x1E535Cu;
    SET_GPR_U32(ctx, 31, 0x1E5364u);
    ctx->pc = 0x1E5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E535Cu;
    // 0x1e5360: 0xaf808dc8  sw          $zero, -0x7238($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1E5364u;
label_1e5364:
    // 0x1e5364: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5368:
    // 0x1e5368: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e536c:
    // 0x1e536c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e536cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5370:
    // 0x1e5370: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e5374:
    // 0x1e5374: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e5374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1e5378:
    // 0x1e5378: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e5378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e537c:
    // 0x1e537c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e537cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5380:
    // 0x1e5380: 0xc05e234  jal         func_1788D0
label_1e5384:
    if (ctx->pc == 0x1E5384u) {
        ctx->pc = 0x1E5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5380u;
        // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5388u;
        goto label_1e5388;
    }
    ctx->pc = 0x1E5380u;
    SET_GPR_U32(ctx, 31, 0x1E5388u);
    ctx->pc = 0x1E5384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5380u;
    // 0x1e5384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E5380u, 0x1E5388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5388u;
label_1e5388:
    // 0x1e5388: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x1e5388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e538c:
    // 0x1e538c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5390:
    // 0x1e5390: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e5390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e5394:
    // 0x1e5394: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5398:
    // 0x1e5398: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e5398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e539c:
    // 0x1e539c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e53a0:
    // 0x1e53a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e53a4:
    // 0x1e53a4: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1e53a8:
    // 0x1e53a8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e53ac:
    // 0x1e53ac: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_1e53b0:
    // 0x1e53b0: 0xdc253100  ld          $a1, 0x3100($at)
    ctx->pc = 0x1e53b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 12544)));
label_1e53b4:
    // 0x1e53b4: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e53b8:
    // 0x1e53b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e53b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e53bc:
    // 0x1e53bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e53bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e53c0:
    // 0x1e53c0: 0xc05de30  jal         func_1778C0
label_1e53c4:
    if (ctx->pc == 0x1E53C4u) {
        ctx->pc = 0x1E53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C0u;
        // 0x1e53c4: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53C8u;
        goto label_1e53c8;
    }
    ctx->pc = 0x1E53C0u;
    SET_GPR_U32(ctx, 31, 0x1E53C8u);
    ctx->pc = 0x1E53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53C0u;
    // 0x1e53c4: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E53C0u, 0x1E53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53C8u;
label_1e53c8:
    // 0x1e53c8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1e53cc:
    // 0x1e53cc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1e53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e53d0:
    // 0x1e53d0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e53d4:
    // 0x1e53d4: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1e53d8:
    // 0x1e53d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e53dc:
    // 0x1e53dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e53dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e53e0:
    // 0x1e53e0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e53e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e53e4:
    // 0x1e53e4: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e53e8:
    // 0x1e53e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e53ec:
    // 0x1e53ec: 0x2407011c  addiu       $a3, $zero, 0x11C
    ctx->pc = 0x1e53ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_1e53f0:
    // 0x1e53f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e53f4:
    // 0x1e53f4: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1e53f8:
    // 0x1e53f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e53fc:
    // 0x1e53fc: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1e5400:
    // 0x1e5400: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1e5400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1e5404:
    // 0x1e5404: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1e5404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e5408:
    // 0x1e5408: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e540c:
    // 0x1e540c: 0xc05dd88  jal         func_177620
label_1e5410:
    if (ctx->pc == 0x1E5410u) {
        ctx->pc = 0x1E5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E540Cu;
        // 0x1e5410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5414u;
        goto label_1e5414;
    }
    ctx->pc = 0x1E540Cu;
    SET_GPR_U32(ctx, 31, 0x1E5414u);
    ctx->pc = 0x1E5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E540Cu;
    // 0x1e5410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1E540Cu, 0x1E5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5414u;
label_1e5414:
    // 0x1e5414: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1e5414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e5418:
    // 0x1e5418: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e541c:
    // 0x1e541c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1e5420u;
    return;
}
