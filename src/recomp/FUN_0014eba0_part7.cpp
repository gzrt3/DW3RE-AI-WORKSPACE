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


void FUN_0014eba0_part7(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x151a80u: goto label_151a80;
        case 0x151a84u: goto label_151a84;
        case 0x151a88u: goto label_151a88;
        case 0x151a8cu: goto label_151a8c;
        case 0x151a90u: goto label_151a90;
        case 0x151a94u: goto label_151a94;
        case 0x151a98u: goto label_151a98;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa0u: goto label_151aa0;
        case 0x151aa4u: goto label_151aa4;
        case 0x151aa8u: goto label_151aa8;
        case 0x151aacu: goto label_151aac;
        case 0x151ab0u: goto label_151ab0;
        case 0x151ab4u: goto label_151ab4;
        case 0x151ab8u: goto label_151ab8;
        case 0x151abcu: goto label_151abc;
        case 0x151ac0u: goto label_151ac0;
        case 0x151ac4u: goto label_151ac4;
        case 0x151ac8u: goto label_151ac8;
        case 0x151accu: goto label_151acc;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad4u: goto label_151ad4;
        case 0x151ad8u: goto label_151ad8;
        case 0x151adcu: goto label_151adc;
        case 0x151ae0u: goto label_151ae0;
        case 0x151ae4u: goto label_151ae4;
        case 0x151ae8u: goto label_151ae8;
        case 0x151aecu: goto label_151aec;
        case 0x151af0u: goto label_151af0;
        case 0x151af4u: goto label_151af4;
        case 0x151af8u: goto label_151af8;
        case 0x151afcu: goto label_151afc;
        case 0x151b00u: goto label_151b00;
        case 0x151b04u: goto label_151b04;
        case 0x151b08u: goto label_151b08;
        case 0x151b0cu: goto label_151b0c;
        case 0x151b10u: goto label_151b10;
        case 0x151b14u: goto label_151b14;
        case 0x151b18u: goto label_151b18;
        case 0x151b1cu: goto label_151b1c;
        case 0x151b20u: goto label_151b20;
        case 0x151b24u: goto label_151b24;
        case 0x151b28u: goto label_151b28;
        case 0x151b2cu: goto label_151b2c;
        case 0x151b30u: goto label_151b30;
        case 0x151b34u: goto label_151b34;
        case 0x151b38u: goto label_151b38;
        case 0x151b3cu: goto label_151b3c;
        case 0x151b40u: goto label_151b40;
        case 0x151b44u: goto label_151b44;
        case 0x151b48u: goto label_151b48;
        case 0x151b4cu: goto label_151b4c;
        case 0x151b50u: goto label_151b50;
        case 0x151b54u: goto label_151b54;
        case 0x151b58u: goto label_151b58;
        case 0x151b5cu: goto label_151b5c;
        case 0x151b60u: goto label_151b60;
        case 0x151b64u: goto label_151b64;
        case 0x151b68u: goto label_151b68;
        case 0x151b6cu: goto label_151b6c;
        case 0x151b70u: goto label_151b70;
        case 0x151b74u: goto label_151b74;
        case 0x151b78u: goto label_151b78;
        case 0x151b7cu: goto label_151b7c;
        case 0x151b80u: goto label_151b80;
        case 0x151b84u: goto label_151b84;
        case 0x151b88u: goto label_151b88;
        case 0x151b8cu: goto label_151b8c;
        case 0x151b90u: goto label_151b90;
        case 0x151b94u: goto label_151b94;
        case 0x151b98u: goto label_151b98;
        case 0x151b9cu: goto label_151b9c;
        case 0x151ba0u: goto label_151ba0;
        case 0x151ba4u: goto label_151ba4;
        case 0x151ba8u: goto label_151ba8;
        case 0x151bacu: goto label_151bac;
        case 0x151bb0u: goto label_151bb0;
        case 0x151bb4u: goto label_151bb4;
        case 0x151bb8u: goto label_151bb8;
        case 0x151bbcu: goto label_151bbc;
        case 0x151bc0u: goto label_151bc0;
        case 0x151bc4u: goto label_151bc4;
        case 0x151bc8u: goto label_151bc8;
        case 0x151bccu: goto label_151bcc;
        case 0x151bd0u: goto label_151bd0;
        case 0x151bd4u: goto label_151bd4;
        case 0x151bd8u: goto label_151bd8;
        case 0x151bdcu: goto label_151bdc;
        case 0x151be0u: goto label_151be0;
        case 0x151be4u: goto label_151be4;
        case 0x151be8u: goto label_151be8;
        case 0x151becu: goto label_151bec;
        case 0x151bf0u: goto label_151bf0;
        case 0x151bf4u: goto label_151bf4;
        case 0x151bf8u: goto label_151bf8;
        case 0x151bfcu: goto label_151bfc;
        case 0x151c00u: goto label_151c00;
        case 0x151c04u: goto label_151c04;
        case 0x151c08u: goto label_151c08;
        case 0x151c0cu: goto label_151c0c;
        case 0x151c10u: goto label_151c10;
        case 0x151c14u: goto label_151c14;
        case 0x151c18u: goto label_151c18;
        case 0x151c1cu: goto label_151c1c;
        case 0x151c20u: goto label_151c20;
        case 0x151c24u: goto label_151c24;
        case 0x151c28u: goto label_151c28;
        case 0x151c2cu: goto label_151c2c;
        case 0x151c30u: goto label_151c30;
        case 0x151c34u: goto label_151c34;
        case 0x151c38u: goto label_151c38;
        case 0x151c3cu: goto label_151c3c;
        case 0x151c40u: goto label_151c40;
        case 0x151c44u: goto label_151c44;
        case 0x151c48u: goto label_151c48;
        case 0x151c4cu: goto label_151c4c;
        case 0x151c50u: goto label_151c50;
        case 0x151c54u: goto label_151c54;
        case 0x151c58u: goto label_151c58;
        case 0x151c5cu: goto label_151c5c;
        case 0x151c60u: goto label_151c60;
        case 0x151c64u: goto label_151c64;
        case 0x151c68u: goto label_151c68;
        case 0x151c6cu: goto label_151c6c;
        case 0x151c70u: goto label_151c70;
        case 0x151c74u: goto label_151c74;
        case 0x151c78u: goto label_151c78;
        case 0x151c7cu: goto label_151c7c;
        case 0x151c80u: goto label_151c80;
        case 0x151c84u: goto label_151c84;
        case 0x151c88u: goto label_151c88;
        case 0x151c8cu: goto label_151c8c;
        case 0x151c90u: goto label_151c90;
        case 0x151c94u: goto label_151c94;
        case 0x151c98u: goto label_151c98;
        case 0x151c9cu: goto label_151c9c;
        case 0x151ca0u: goto label_151ca0;
        case 0x151ca4u: goto label_151ca4;
        case 0x151ca8u: goto label_151ca8;
        case 0x151cacu: goto label_151cac;
        case 0x151cb0u: goto label_151cb0;
        case 0x151cb4u: goto label_151cb4;
        case 0x151cb8u: goto label_151cb8;
        case 0x151cbcu: goto label_151cbc;
        case 0x151cc0u: goto label_151cc0;
        case 0x151cc4u: goto label_151cc4;
        case 0x151cc8u: goto label_151cc8;
        case 0x151cccu: goto label_151ccc;
        case 0x151cd0u: goto label_151cd0;
        case 0x151cd4u: goto label_151cd4;
        case 0x151cd8u: goto label_151cd8;
        case 0x151cdcu: goto label_151cdc;
        case 0x151ce0u: goto label_151ce0;
        case 0x151ce4u: goto label_151ce4;
        case 0x151ce8u: goto label_151ce8;
        case 0x151cecu: goto label_151cec;
        case 0x151cf0u: goto label_151cf0;
        case 0x151cf4u: goto label_151cf4;
        case 0x151cf8u: goto label_151cf8;
        case 0x151cfcu: goto label_151cfc;
        case 0x151d00u: goto label_151d00;
        case 0x151d04u: goto label_151d04;
        case 0x151d08u: goto label_151d08;
        case 0x151d0cu: goto label_151d0c;
        case 0x151d10u: goto label_151d10;
        case 0x151d14u: goto label_151d14;
        case 0x151d18u: goto label_151d18;
        case 0x151d1cu: goto label_151d1c;
        case 0x151d20u: goto label_151d20;
        case 0x151d24u: goto label_151d24;
        case 0x151d28u: goto label_151d28;
        case 0x151d2cu: goto label_151d2c;
        case 0x151d30u: goto label_151d30;
        case 0x151d34u: goto label_151d34;
        case 0x151d38u: goto label_151d38;
        case 0x151d3cu: goto label_151d3c;
        case 0x151d40u: goto label_151d40;
        case 0x151d44u: goto label_151d44;
        case 0x151d48u: goto label_151d48;
        case 0x151d4cu: goto label_151d4c;
        case 0x151d50u: goto label_151d50;
        case 0x151d54u: goto label_151d54;
        case 0x151d58u: goto label_151d58;
        case 0x151d5cu: goto label_151d5c;
        case 0x151d60u: goto label_151d60;
        case 0x151d64u: goto label_151d64;
        case 0x151d68u: goto label_151d68;
        case 0x151d6cu: goto label_151d6c;
        case 0x151d70u: goto label_151d70;
        case 0x151d74u: goto label_151d74;
        case 0x151d78u: goto label_151d78;
        case 0x151d7cu: goto label_151d7c;
        case 0x151d80u: goto label_151d80;
        case 0x151d84u: goto label_151d84;
        case 0x151d88u: goto label_151d88;
        case 0x151d8cu: goto label_151d8c;
        case 0x151d90u: goto label_151d90;
        case 0x151d94u: goto label_151d94;
        case 0x151d98u: goto label_151d98;
        case 0x151d9cu: goto label_151d9c;
        case 0x151da0u: goto label_151da0;
        case 0x151da4u: goto label_151da4;
        case 0x151da8u: goto label_151da8;
        case 0x151dacu: goto label_151dac;
        case 0x151db0u: goto label_151db0;
        case 0x151db4u: goto label_151db4;
        case 0x151db8u: goto label_151db8;
        case 0x151dbcu: goto label_151dbc;
        case 0x151dc0u: goto label_151dc0;
        case 0x151dc4u: goto label_151dc4;
        case 0x151dc8u: goto label_151dc8;
        case 0x151dccu: goto label_151dcc;
        case 0x151dd0u: goto label_151dd0;
        case 0x151dd4u: goto label_151dd4;
        case 0x151dd8u: goto label_151dd8;
        case 0x151ddcu: goto label_151ddc;
        case 0x151de0u: goto label_151de0;
        case 0x151de4u: goto label_151de4;
        case 0x151de8u: goto label_151de8;
        case 0x151decu: goto label_151dec;
        case 0x151df0u: goto label_151df0;
        case 0x151df4u: goto label_151df4;
        case 0x151df8u: goto label_151df8;
        case 0x151dfcu: goto label_151dfc;
        case 0x151e00u: goto label_151e00;
        case 0x151e04u: goto label_151e04;
        case 0x151e08u: goto label_151e08;
        case 0x151e0cu: goto label_151e0c;
        case 0x151e10u: goto label_151e10;
        case 0x151e14u: goto label_151e14;
        case 0x151e18u: goto label_151e18;
        case 0x151e1cu: goto label_151e1c;
        case 0x151e20u: goto label_151e20;
        case 0x151e24u: goto label_151e24;
        case 0x151e28u: goto label_151e28;
        case 0x151e2cu: goto label_151e2c;
        case 0x151e30u: goto label_151e30;
        case 0x151e34u: goto label_151e34;
        case 0x151e38u: goto label_151e38;
        case 0x151e3cu: goto label_151e3c;
        case 0x151e40u: goto label_151e40;
        case 0x151e44u: goto label_151e44;
        case 0x151e48u: goto label_151e48;
        case 0x151e4cu: goto label_151e4c;
        case 0x151e50u: goto label_151e50;
        case 0x151e54u: goto label_151e54;
        case 0x151e58u: goto label_151e58;
        case 0x151e5cu: goto label_151e5c;
        case 0x151e60u: goto label_151e60;
        case 0x151e64u: goto label_151e64;
        case 0x151e68u: goto label_151e68;
        case 0x151e6cu: goto label_151e6c;
        case 0x151e70u: goto label_151e70;
        case 0x151e74u: goto label_151e74;
        case 0x151e78u: goto label_151e78;
        case 0x151e7cu: goto label_151e7c;
        case 0x151e80u: goto label_151e80;
        case 0x151e84u: goto label_151e84;
        case 0x151e88u: goto label_151e88;
        case 0x151e8cu: goto label_151e8c;
        case 0x151e90u: goto label_151e90;
        case 0x151e94u: goto label_151e94;
        case 0x151e98u: goto label_151e98;
        case 0x151e9cu: goto label_151e9c;
        case 0x151ea0u: goto label_151ea0;
        case 0x151ea4u: goto label_151ea4;
        case 0x151ea8u: goto label_151ea8;
        case 0x151eacu: goto label_151eac;
        case 0x151eb0u: goto label_151eb0;
        case 0x151eb4u: goto label_151eb4;
        case 0x151eb8u: goto label_151eb8;
        case 0x151ebcu: goto label_151ebc;
        case 0x151ec0u: goto label_151ec0;
        case 0x151ec4u: goto label_151ec4;
        case 0x151ec8u: goto label_151ec8;
        case 0x151eccu: goto label_151ecc;
        case 0x151ed0u: goto label_151ed0;
        case 0x151ed4u: goto label_151ed4;
        case 0x151ed8u: goto label_151ed8;
        case 0x151edcu: goto label_151edc;
        case 0x151ee0u: goto label_151ee0;
        case 0x151ee4u: goto label_151ee4;
        case 0x151ee8u: goto label_151ee8;
        case 0x151eecu: goto label_151eec;
        case 0x151ef0u: goto label_151ef0;
        case 0x151ef4u: goto label_151ef4;
        case 0x151ef8u: goto label_151ef8;
        case 0x151efcu: goto label_151efc;
        case 0x151f00u: goto label_151f00;
        case 0x151f04u: goto label_151f04;
        case 0x151f08u: goto label_151f08;
        case 0x151f0cu: goto label_151f0c;
        case 0x151f10u: goto label_151f10;
        case 0x151f14u: goto label_151f14;
        case 0x151f18u: goto label_151f18;
        case 0x151f1cu: goto label_151f1c;
        case 0x151f20u: goto label_151f20;
        case 0x151f24u: goto label_151f24;
        case 0x151f28u: goto label_151f28;
        case 0x151f2cu: goto label_151f2c;
        case 0x151f30u: goto label_151f30;
        case 0x151f34u: goto label_151f34;
        case 0x151f38u: goto label_151f38;
        case 0x151f3cu: goto label_151f3c;
        case 0x151f40u: goto label_151f40;
        case 0x151f44u: goto label_151f44;
        case 0x151f48u: goto label_151f48;
        case 0x151f4cu: goto label_151f4c;
        case 0x151f50u: goto label_151f50;
        case 0x151f54u: goto label_151f54;
        case 0x151f58u: goto label_151f58;
        case 0x151f5cu: goto label_151f5c;
        case 0x151f60u: goto label_151f60;
        case 0x151f64u: goto label_151f64;
        case 0x151f68u: goto label_151f68;
        case 0x151f6cu: goto label_151f6c;
        case 0x151f70u: goto label_151f70;
        case 0x151f74u: goto label_151f74;
        case 0x151f78u: goto label_151f78;
        case 0x151f7cu: goto label_151f7c;
        case 0x151f80u: goto label_151f80;
        case 0x151f84u: goto label_151f84;
        case 0x151f88u: goto label_151f88;
        case 0x151f8cu: goto label_151f8c;
        case 0x151f90u: goto label_151f90;
        case 0x151f94u: goto label_151f94;
        case 0x151f98u: goto label_151f98;
        case 0x151f9cu: goto label_151f9c;
        case 0x151fa0u: goto label_151fa0;
        case 0x151fa4u: goto label_151fa4;
        case 0x151fa8u: goto label_151fa8;
        case 0x151facu: goto label_151fac;
        case 0x151fb0u: goto label_151fb0;
        case 0x151fb4u: goto label_151fb4;
        case 0x151fb8u: goto label_151fb8;
        case 0x151fbcu: goto label_151fbc;
        case 0x151fc0u: goto label_151fc0;
        case 0x151fc4u: goto label_151fc4;
        case 0x151fc8u: goto label_151fc8;
        case 0x151fccu: goto label_151fcc;
        case 0x151fd0u: goto label_151fd0;
        case 0x151fd4u: goto label_151fd4;
        case 0x151fd8u: goto label_151fd8;
        case 0x151fdcu: goto label_151fdc;
        case 0x151fe0u: goto label_151fe0;
        case 0x151fe4u: goto label_151fe4;
        case 0x151fe8u: goto label_151fe8;
        case 0x151fecu: goto label_151fec;
        case 0x151ff0u: goto label_151ff0;
        case 0x151ff4u: goto label_151ff4;
        case 0x151ff8u: goto label_151ff8;
        case 0x151ffcu: goto label_151ffc;
        case 0x152000u: goto label_152000;
        case 0x152004u: goto label_152004;
        case 0x152008u: goto label_152008;
        case 0x15200cu: goto label_15200c;
        case 0x152010u: goto label_152010;
        case 0x152014u: goto label_152014;
        case 0x152018u: goto label_152018;
        case 0x15201cu: goto label_15201c;
        case 0x152020u: goto label_152020;
        case 0x152024u: goto label_152024;
        case 0x152028u: goto label_152028;
        case 0x15202cu: goto label_15202c;
        case 0x152030u: goto label_152030;
        case 0x152034u: goto label_152034;
        case 0x152038u: goto label_152038;
        case 0x15203cu: goto label_15203c;
        case 0x152040u: goto label_152040;
        case 0x152044u: goto label_152044;
        case 0x152048u: goto label_152048;
        case 0x15204cu: goto label_15204c;
        case 0x152050u: goto label_152050;
        case 0x152054u: goto label_152054;
        case 0x152058u: goto label_152058;
        case 0x15205cu: goto label_15205c;
        case 0x152060u: goto label_152060;
        case 0x152064u: goto label_152064;
        case 0x152068u: goto label_152068;
        case 0x15206cu: goto label_15206c;
        case 0x152070u: goto label_152070;
        case 0x152074u: goto label_152074;
        case 0x152078u: goto label_152078;
        case 0x15207cu: goto label_15207c;
        case 0x152080u: goto label_152080;
        case 0x152084u: goto label_152084;
        case 0x152088u: goto label_152088;
        case 0x15208cu: goto label_15208c;
        case 0x152090u: goto label_152090;
        case 0x152094u: goto label_152094;
        case 0x152098u: goto label_152098;
        case 0x15209cu: goto label_15209c;
        case 0x1520a0u: goto label_1520a0;
        case 0x1520a4u: goto label_1520a4;
        case 0x1520a8u: goto label_1520a8;
        case 0x1520acu: goto label_1520ac;
        case 0x1520b0u: goto label_1520b0;
        case 0x1520b4u: goto label_1520b4;
        case 0x1520b8u: goto label_1520b8;
        case 0x1520bcu: goto label_1520bc;
        case 0x1520c0u: goto label_1520c0;
        case 0x1520c4u: goto label_1520c4;
        case 0x1520c8u: goto label_1520c8;
        case 0x1520ccu: goto label_1520cc;
        case 0x1520d0u: goto label_1520d0;
        case 0x1520d4u: goto label_1520d4;
        case 0x1520d8u: goto label_1520d8;
        case 0x1520dcu: goto label_1520dc;
        case 0x1520e0u: goto label_1520e0;
        case 0x1520e4u: goto label_1520e4;
        case 0x1520e8u: goto label_1520e8;
        case 0x1520ecu: goto label_1520ec;
        case 0x1520f0u: goto label_1520f0;
        case 0x1520f4u: goto label_1520f4;
        case 0x1520f8u: goto label_1520f8;
        case 0x1520fcu: goto label_1520fc;
        case 0x152100u: goto label_152100;
        case 0x152104u: goto label_152104;
        case 0x152108u: goto label_152108;
        case 0x15210cu: goto label_15210c;
        case 0x152110u: goto label_152110;
        case 0x152114u: goto label_152114;
        case 0x152118u: goto label_152118;
        case 0x15211cu: goto label_15211c;
        case 0x152120u: goto label_152120;
        case 0x152124u: goto label_152124;
        case 0x152128u: goto label_152128;
        case 0x15212cu: goto label_15212c;
        case 0x152130u: goto label_152130;
        case 0x152134u: goto label_152134;
        case 0x152138u: goto label_152138;
        case 0x15213cu: goto label_15213c;
        case 0x152140u: goto label_152140;
        case 0x152144u: goto label_152144;
        case 0x152148u: goto label_152148;
        case 0x15214cu: goto label_15214c;
        case 0x152150u: goto label_152150;
        case 0x152154u: goto label_152154;
        case 0x152158u: goto label_152158;
        case 0x15215cu: goto label_15215c;
        case 0x152160u: goto label_152160;
        case 0x152164u: goto label_152164;
        case 0x152168u: goto label_152168;
        case 0x15216cu: goto label_15216c;
        case 0x152170u: goto label_152170;
        case 0x152174u: goto label_152174;
        case 0x152178u: goto label_152178;
        case 0x15217cu: goto label_15217c;
        case 0x152180u: goto label_152180;
        case 0x152184u: goto label_152184;
        case 0x152188u: goto label_152188;
        case 0x15218cu: goto label_15218c;
        case 0x152190u: goto label_152190;
        case 0x152194u: goto label_152194;
        case 0x152198u: goto label_152198;
        case 0x15219cu: goto label_15219c;
        case 0x1521a0u: goto label_1521a0;
        case 0x1521a4u: goto label_1521a4;
        case 0x1521a8u: goto label_1521a8;
        case 0x1521acu: goto label_1521ac;
        case 0x1521b0u: goto label_1521b0;
        case 0x1521b4u: goto label_1521b4;
        case 0x1521b8u: goto label_1521b8;
        case 0x1521bcu: goto label_1521bc;
        case 0x1521c0u: goto label_1521c0;
        case 0x1521c4u: goto label_1521c4;
        case 0x1521c8u: goto label_1521c8;
        case 0x1521ccu: goto label_1521cc;
        case 0x1521d0u: goto label_1521d0;
        case 0x1521d4u: goto label_1521d4;
        case 0x1521d8u: goto label_1521d8;
        case 0x1521dcu: goto label_1521dc;
        case 0x1521e0u: goto label_1521e0;
        case 0x1521e4u: goto label_1521e4;
        case 0x1521e8u: goto label_1521e8;
        case 0x1521ecu: goto label_1521ec;
        case 0x1521f0u: goto label_1521f0;
        case 0x1521f4u: goto label_1521f4;
        case 0x1521f8u: goto label_1521f8;
        case 0x1521fcu: goto label_1521fc;
        case 0x152200u: goto label_152200;
        case 0x152204u: goto label_152204;
        case 0x152208u: goto label_152208;
        case 0x15220cu: goto label_15220c;
        case 0x152210u: goto label_152210;
        case 0x152214u: goto label_152214;
        case 0x152218u: goto label_152218;
        case 0x15221cu: goto label_15221c;
        case 0x152220u: goto label_152220;
        case 0x152224u: goto label_152224;
        case 0x152228u: goto label_152228;
        case 0x15222cu: goto label_15222c;
        case 0x152230u: goto label_152230;
        case 0x152234u: goto label_152234;
        case 0x152238u: goto label_152238;
        case 0x15223cu: goto label_15223c;
        case 0x152240u: goto label_152240;
        case 0x152244u: goto label_152244;
        case 0x152248u: goto label_152248;
        case 0x15224cu: goto label_15224c;
        default: return;
    }

label_151a80:
    // 0x151a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151a84:
    // 0x151a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151a88:
    // 0x151a88: 0xc066d10  jal         func_19B440
label_151a8c:
    if (ctx->pc == 0x151A8Cu) {
        ctx->pc = 0x151A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A88u;
        // 0x151a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A90u;
        goto label_151a90;
    }
    ctx->pc = 0x151A88u;
    SET_GPR_U32(ctx, 31, 0x151A90u);
    ctx->pc = 0x151A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A88u;
    // 0x151a8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x151A90u;
label_151a90:
    // 0x151a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151a94:
    // 0x151a94: 0xc066d30  jal         func_19B4C0
label_151a98:
    if (ctx->pc == 0x151A98u) {
        ctx->pc = 0x151A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A94u;
        // 0x151a98: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A9Cu;
        goto label_151a9c;
    }
    ctx->pc = 0x151A94u;
    SET_GPR_U32(ctx, 31, 0x151A9Cu);
    ctx->pc = 0x151A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A94u;
    // 0x151a98: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x151A9Cu;
label_151a9c:
    // 0x151a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151aa0:
    // 0x151aa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151aa4:
    // 0x151aa4: 0xc066d10  jal         func_19B440
label_151aa8:
    if (ctx->pc == 0x151AA8u) {
        ctx->pc = 0x151AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AA4u;
        // 0x151aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AACu;
        goto label_151aac;
    }
    ctx->pc = 0x151AA4u;
    SET_GPR_U32(ctx, 31, 0x151AACu);
    ctx->pc = 0x151AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AA4u;
    // 0x151aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x151AACu;
label_151aac:
    // 0x151aac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x151aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_151ab0:
    // 0x151ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151ab4:
    // 0x151ab4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x151ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_151ab8:
    // 0x151ab8: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_151abc:
    // 0x151abc: 0xc066cae  jal         func_19B2B8
label_151ac0:
    if (ctx->pc == 0x151AC0u) {
        ctx->pc = 0x151AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151ABCu;
        // 0x151ac0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AC4u;
        goto label_151ac4;
    }
    ctx->pc = 0x151ABCu;
    SET_GPR_U32(ctx, 31, 0x151AC4u);
    ctx->pc = 0x151AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151ABCu;
    // 0x151ac0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x151AC4u;
label_151ac4:
    // 0x151ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x151ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_151ac8:
    // 0x151ac8: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_151acc:
    // 0x151acc: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x151accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_151ad0:
    // 0x151ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151ad4:
    // 0x151ad4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x151ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151ad8:
    // 0x151ad8: 0xc066d4c  jal         func_19B530
label_151adc:
    if (ctx->pc == 0x151ADCu) {
        ctx->pc = 0x151ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AD8u;
        // 0x151adc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AE0u;
        goto label_151ae0;
    }
    ctx->pc = 0x151AD8u;
    SET_GPR_U32(ctx, 31, 0x151AE0u);
    ctx->pc = 0x151ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AD8u;
    // 0x151adc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x151AE0u;
label_151ae0:
    // 0x151ae0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_151ae4:
    // 0x151ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151ae8:
    // 0x151ae8: 0x24a5b930  addiu       $a1, $a1, -0x46D0
    ctx->pc = 0x151ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
label_151aec:
    // 0x151aec: 0xc066d4c  jal         func_19B530
label_151af0:
    if (ctx->pc == 0x151AF0u) {
        ctx->pc = 0x151AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AECu;
        // 0x151af0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AF4u;
        goto label_151af4;
    }
    ctx->pc = 0x151AECu;
    SET_GPR_U32(ctx, 31, 0x151AF4u);
    ctx->pc = 0x151AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AECu;
    // 0x151af0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x151AF4u;
label_151af4:
    // 0x151af4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_151af8:
    // 0x151af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151afc:
    // 0x151afc: 0x24a5b8f0  addiu       $a1, $a1, -0x4710
    ctx->pc = 0x151afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949104));
label_151b00:
    // 0x151b00: 0xc066d4c  jal         func_19B530
label_151b04:
    if (ctx->pc == 0x151B04u) {
        ctx->pc = 0x151B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B00u;
        // 0x151b04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B08u;
        goto label_151b08;
    }
    ctx->pc = 0x151B00u;
    SET_GPR_U32(ctx, 31, 0x151B08u);
    ctx->pc = 0x151B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B00u;
    // 0x151b04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x151B08u;
label_151b08:
    // 0x151b08: 0xc066cd2  jal         func_19B348
label_151b0c:
    if (ctx->pc == 0x151B0Cu) {
        ctx->pc = 0x151B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B08u;
        // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B10u;
        goto label_151b10;
    }
    ctx->pc = 0x151B08u;
    SET_GPR_U32(ctx, 31, 0x151B10u);
    ctx->pc = 0x151B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B08u;
    // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x151B10u;
label_151b10:
    // 0x151b10: 0xc066c46  jal         func_19B118
label_151b14:
    if (ctx->pc == 0x151B14u) {
        ctx->pc = 0x151B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B10u;
        // 0x151b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B18u;
        goto label_151b18;
    }
    ctx->pc = 0x151B10u;
    SET_GPR_U32(ctx, 31, 0x151B18u);
    ctx->pc = 0x151B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B10u;
    // 0x151b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x151B18u;
label_151b18:
    // 0x151b18: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x151b18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
label_151b1c:
    // 0x151b1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x151b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151b20:
    // 0x151b20: 0x26316c70  addiu       $s1, $s1, 0x6C70
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27760));
label_151b24:
    // 0x151b24: 0x8e2303c0  lw          $v1, 0x3C0($s1)
    ctx->pc = 0x151b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 960)));
label_151b28:
    // 0x151b28: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
label_151b2c:
    if (ctx->pc == 0x151B2Cu) {
        ctx->pc = 0x151B30u;
        goto label_151b30;
    }
    ctx->pc = 0x151B28u;
    {
        const bool branch_taken_0x151b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b28) {
            ctx->pc = 0x151CB4u;
            goto label_151cb4;
        }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0x8e2303c4  lw          $v1, 0x3C4($s1)
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 964)));
label_151b34:
    // 0x151b34: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_151b38:
    if (ctx->pc == 0x151B38u) {
        ctx->pc = 0x151B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B34u;
        // 0x151b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B3Cu;
        goto label_151b3c;
    }
    ctx->pc = 0x151B34u;
    {
        const bool branch_taken_0x151b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B34u;
        // 0x151b38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b34) {
            ctx->pc = 0x151CB4u;
            goto label_151cb4;
        }
    }
    ctx->pc = 0x151B3Cu;
label_151b3c:
    // 0x151b3c: 0xc045200  jal         func_114800
label_151b40:
    if (ctx->pc == 0x151B40u) {
        ctx->pc = 0x151B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B3Cu;
        // 0x151b40: 0x262503b0  addiu       $a1, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B44u;
        goto label_151b44;
    }
    ctx->pc = 0x151B3Cu;
    SET_GPR_U32(ctx, 31, 0x151B44u);
    ctx->pc = 0x151B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B3Cu;
    // 0x151b40: 0x262503b0  addiu       $a1, $s1, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x151B3Cu, 0x151B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B44u;
label_151b44:
    // 0x151b44: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_151b48:
    if (ctx->pc == 0x151B48u) {
        ctx->pc = 0x151B4Cu;
        goto label_151b4c;
    }
    ctx->pc = 0x151B44u;
    {
        const bool branch_taken_0x151b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b44) {
            ctx->pc = 0x151C94u;
            goto label_151c94;
        }
    }
    ctx->pc = 0x151B4Cu;
label_151b4c:
    // 0x151b4c: 0x862203ca  lh          $v0, 0x3CA($s1)
    ctx->pc = 0x151b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 970)));
label_151b50:
    // 0x151b50: 0x862403c8  lh          $a0, 0x3C8($s1)
    ctx->pc = 0x151b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 968)));
label_151b54:
    // 0x151b54: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_151b58:
    // 0x151b58: 0x2c620384  sltiu       $v0, $v1, 0x384
    ctx->pc = 0x151b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
label_151b5c:
    // 0x151b5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_151b60:
    if (ctx->pc == 0x151B60u) {
        ctx->pc = 0x151B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B5Cu;
        // 0x151b60: 0x3c0291a2  lui         $v0, 0x91A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37282 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B64u;
        goto label_151b64;
    }
    ctx->pc = 0x151B5Cu;
    {
        const bool branch_taken_0x151b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B5Cu;
        // 0x151b60: 0x3c0291a2  lui         $v0, 0x91A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37282 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b5c) {
            ctx->pc = 0x151B6Cu;
            goto label_151b6c;
        }
    }
    ctx->pc = 0x151B64u;
label_151b64:
    // 0x151b64: 0x10000008  b           . + 4 + (0x8 << 2)
label_151b68:
    if (ctx->pc == 0x151B68u) {
        ctx->pc = 0x151B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B64u;
        // 0x151b68: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B6Cu;
        goto label_151b6c;
    }
    ctx->pc = 0x151B64u;
    {
        const bool branch_taken_0x151b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B64u;
        // 0x151b68: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b64) {
            ctx->pc = 0x151B88u;
            goto label_151b88;
        }
    }
    ctx->pc = 0x151B6Cu;
label_151b6c:
    // 0x151b6c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x151b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_151b70:
    // 0x151b70: 0x3442b3c5  ori         $v0, $v0, 0xB3C5
    ctx->pc = 0x151b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46021);
label_151b74:
    // 0x151b74: 0x430019  multu       $v0, $v1
    ctx->pc = 0x151b74u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_151b78:
    // 0x151b78: 0x0  nop
    ctx->pc = 0x151b78u;
    // NOP
label_151b7c:
    // 0x151b7c: 0x0  nop
    ctx->pc = 0x151b7cu;
    // NOP
label_151b80:
    // 0x151b80: 0x1010  mfhi        $v0
    ctx->pc = 0x151b80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_151b84:
    // 0x151b84: 0x29242  srl         $s2, $v0, 9
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
label_151b88:
    // 0x151b88: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x151b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_151b8c:
    // 0x151b8c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x151b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_151b90:
    // 0x151b90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_151b94:
    if (ctx->pc == 0x151B94u) {
        ctx->pc = 0x151B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B90u;
        // 0x151b94: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B98u;
        goto label_151b98;
    }
    ctx->pc = 0x151B90u;
    {
        const bool branch_taken_0x151b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B90u;
        // 0x151b94: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b90) {
            ctx->pc = 0x151B9Cu;
            goto label_151b9c;
        }
    }
    ctx->pc = 0x151B98u;
label_151b98:
    // 0x151b98: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x151b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151b9c:
    // 0x151b9c: 0x0  nop
    ctx->pc = 0x151b9cu;
    // NOP
label_151ba0:
    // 0x151ba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_151ba4:
    // 0x151ba4: 0x822303ce  lb          $v1, 0x3CE($s1)
    ctx->pc = 0x151ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 974)));
label_151ba8:
    // 0x151ba8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x151ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_151bac:
    // 0x151bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151bb0:
    // 0x151bb0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_151bb4:
    if (ctx->pc == 0x151BB4u) {
        ctx->pc = 0x151BB8u;
        goto label_151bb8;
    }
    ctx->pc = 0x151BB0u;
    {
        const bool branch_taken_0x151bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x151bb0) {
            ctx->pc = 0x151BE4u;
            goto label_151be4;
        }
    }
    ctx->pc = 0x151BB8u;
label_151bb8:
    // 0x151bb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_151bbc:
    if (ctx->pc == 0x151BBCu) {
        ctx->pc = 0x151BC0u;
        goto label_151bc0;
    }
    ctx->pc = 0x151BB8u;
    {
        const bool branch_taken_0x151bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bb8) {
            ctx->pc = 0x151BC8u;
            goto label_151bc8;
        }
    }
    ctx->pc = 0x151BC0u;
label_151bc0:
    // 0x151bc0: 0x10000010  b           . + 4 + (0x10 << 2)
label_151bc4:
    if (ctx->pc == 0x151BC4u) {
        ctx->pc = 0x151BC8u;
        goto label_151bc8;
    }
    ctx->pc = 0x151BC0u;
    {
        const bool branch_taken_0x151bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bc0) {
            ctx->pc = 0x151C04u;
            goto label_151c04;
        }
    }
    ctx->pc = 0x151BC8u;
label_151bc8:
    // 0x151bc8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x151bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_151bcc:
    // 0x151bcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151bccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151bd0:
    // 0x151bd0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x151bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_151bd4:
    // 0x151bd4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x151bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_151bd8:
    // 0x151bd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151bd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_151bdc:
    // 0x151bdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_151be0:
    if (ctx->pc == 0x151BE0u) {
        ctx->pc = 0x151BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BDCu;
        // 0x151be0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151BE4u;
        goto label_151be4;
    }
    ctx->pc = 0x151BDCu;
    {
        const bool branch_taken_0x151bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BDCu;
        // 0x151be0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bdc) {
            ctx->pc = 0x151C10u;
            goto label_151c10;
        }
    }
    ctx->pc = 0x151BE4u;
label_151be4:
    // 0x151be4: 0x0  nop
    ctx->pc = 0x151be4u;
    // NOP
label_151be8:
    // 0x151be8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x151be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_151bec:
    // 0x151bec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151becu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151bf0:
    // 0x151bf0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x151bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_151bf4:
    // 0x151bf4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x151bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_151bf8:
    // 0x151bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_151bfc:
    // 0x151bfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_151c00:
    if (ctx->pc == 0x151C00u) {
        ctx->pc = 0x151C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BFCu;
        // 0x151c00: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C04u;
        goto label_151c04;
    }
    ctx->pc = 0x151BFCu;
    {
        const bool branch_taken_0x151bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151BFCu;
        // 0x151c00: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151bfc) {
            ctx->pc = 0x151C10u;
            goto label_151c10;
        }
    }
    ctx->pc = 0x151C04u;
label_151c04:
    // 0x151c04: 0x0  nop
    ctx->pc = 0x151c04u;
    // NOP
label_151c08:
    // 0x151c08: 0xc0554d4  jal         func_155350
label_151c0c:
    if (ctx->pc == 0x151C0Cu) {
        ctx->pc = 0x151C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C08u;
        // 0x151c0c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C10u;
        goto label_151c10;
    }
    ctx->pc = 0x151C08u;
    SET_GPR_U32(ctx, 31, 0x151C10u);
    ctx->pc = 0x151C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C08u;
    // 0x151c0c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155350u;
    { ctx->pc = 0x155350; return; }
    ctx->pc = 0x151C10u;
label_151c10:
    // 0x151c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151c14:
    // 0x151c14: 0xc066c5c  jal         func_19B170
label_151c18:
    if (ctx->pc == 0x151C18u) {
        ctx->pc = 0x151C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C14u;
        // 0x151c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C1Cu;
        goto label_151c1c;
    }
    ctx->pc = 0x151C14u;
    SET_GPR_U32(ctx, 31, 0x151C1Cu);
    ctx->pc = 0x151C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C14u;
    // 0x151c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x151C1Cu;
label_151c1c:
    // 0x151c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151c20:
    // 0x151c20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151c24:
    // 0x151c24: 0xc066d10  jal         func_19B440
label_151c28:
    if (ctx->pc == 0x151C28u) {
        ctx->pc = 0x151C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C24u;
        // 0x151c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C2Cu;
        goto label_151c2c;
    }
    ctx->pc = 0x151C24u;
    SET_GPR_U32(ctx, 31, 0x151C2Cu);
    ctx->pc = 0x151C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C24u;
    // 0x151c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x151C2Cu;
label_151c2c:
    // 0x151c2c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_151c30:
    // 0x151c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151c34:
    // 0x151c34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x151c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_151c38:
    // 0x151c38: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x151c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_151c3c:
    // 0x151c3c: 0xc066cae  jal         func_19B2B8
label_151c40:
    if (ctx->pc == 0x151C40u) {
        ctx->pc = 0x151C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C3Cu;
        // 0x151c40: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C44u;
        goto label_151c44;
    }
    ctx->pc = 0x151C3Cu;
    SET_GPR_U32(ctx, 31, 0x151C44u);
    ctx->pc = 0x151C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C3Cu;
    // 0x151c40: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x151C44u;
label_151c44:
    // 0x151c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151c48:
    // 0x151c48: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_151c4c:
    // 0x151c4c: 0xc066d4c  jal         func_19B530
label_151c50:
    if (ctx->pc == 0x151C50u) {
        ctx->pc = 0x151C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C4Cu;
        // 0x151c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C54u;
        goto label_151c54;
    }
    ctx->pc = 0x151C4Cu;
    SET_GPR_U32(ctx, 31, 0x151C54u);
    ctx->pc = 0x151C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C4Cu;
    // 0x151c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x151C54u;
label_151c54:
    // 0x151c54: 0xc066cd2  jal         func_19B348
label_151c58:
    if (ctx->pc == 0x151C58u) {
        ctx->pc = 0x151C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C54u;
        // 0x151c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C5Cu;
        goto label_151c5c;
    }
    ctx->pc = 0x151C54u;
    SET_GPR_U32(ctx, 31, 0x151C5Cu);
    ctx->pc = 0x151C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C54u;
    // 0x151c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x151C5Cu;
label_151c5c:
    // 0x151c5c: 0xc066c46  jal         func_19B118
label_151c60:
    if (ctx->pc == 0x151C60u) {
        ctx->pc = 0x151C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C5Cu;
        // 0x151c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C64u;
        goto label_151c64;
    }
    ctx->pc = 0x151C5Cu;
    SET_GPR_U32(ctx, 31, 0x151C64u);
    ctx->pc = 0x151C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C5Cu;
    // 0x151c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x151C64u;
label_151c64:
    // 0x151c64: 0x8e2203c0  lw          $v0, 0x3C0($s1)
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 960)));
label_151c68:
    // 0x151c68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x151c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_151c6c:
    // 0x151c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151c70:
    // 0x151c70: 0xc057150  jal         func_15C540
label_151c74:
    if (ctx->pc == 0x151C74u) {
        ctx->pc = 0x151C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C70u;
        // 0x151c74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C78u;
        goto label_151c78;
    }
    ctx->pc = 0x151C70u;
    SET_GPR_U32(ctx, 31, 0x151C78u);
    ctx->pc = 0x151C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C70u;
    // 0x151c74: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    { ctx->pc = 0x15c540; return; }
    ctx->pc = 0x151C78u;
label_151c78:
    // 0x151c78: 0x922303cf  lbu         $v1, 0x3CF($s1)
    ctx->pc = 0x151c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 975)));
label_151c7c:
    // 0x151c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151c80:
    // 0x151c80: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x151c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_151c84:
    // 0x151c84: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x151c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_151c88:
    // 0x151c88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x151c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_151c8c:
    // 0x151c8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_151c90:
    if (ctx->pc == 0x151C90u) {
        ctx->pc = 0x151C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C8Cu;
        // 0x151c90: 0xa22303cf  sb          $v1, 0x3CF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 975), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151C94u;
        goto label_151c94;
    }
    ctx->pc = 0x151C8Cu;
    {
        const bool branch_taken_0x151c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C8Cu;
        // 0x151c90: 0xa22303cf  sb          $v1, 0x3CF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 975), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c8c) {
            ctx->pc = 0x151CB4u;
            goto label_151cb4;
        }
    }
    ctx->pc = 0x151C94u;
label_151c94:
    // 0x151c94: 0x0  nop
    ctx->pc = 0x151c94u;
    // NOP
label_151c98:
    // 0x151c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151c9c:
    // 0x151c9c: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x151c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_151ca0:
    // 0x151ca0: 0x922303cf  lbu         $v1, 0x3CF($s1)
    ctx->pc = 0x151ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 975)));
label_151ca4:
    // 0x151ca4: 0x388400ff  xori        $a0, $a0, 0xFF
    ctx->pc = 0x151ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)255);
label_151ca8:
    // 0x151ca8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x151ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_151cac:
    // 0x151cac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x151cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_151cb0:
    // 0x151cb0: 0xa22303cf  sb          $v1, 0x3CF($s1)
    ctx->pc = 0x151cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 975), (uint8_t)GPR_U32(ctx, 3));
label_151cb4:
    // 0x151cb4: 0x0  nop
    ctx->pc = 0x151cb4u;
    // NOP
label_151cb8:
    // 0x151cb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x151cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_151cbc:
    // 0x151cbc: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
label_151cc0:
    // 0x151cc0: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
label_151cc4:
    if (ctx->pc == 0x151CC4u) {
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC0u;
        // 0x151cc4: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CC8u;
        goto label_151cc8;
    }
    ctx->pc = 0x151CC0u;
    {
        const bool branch_taken_0x151cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CC0u;
        // 0x151cc4: 0x263103d0  addiu       $s1, $s1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cc0) {
            ctx->pc = 0x151B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b24;
        }
    }
    ctx->pc = 0x151CC8u;
label_151cc8:
    // 0x151cc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x151cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_151ccc:
    // 0x151ccc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_151cd0:
    // 0x151cd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_151cd4:
    // 0x151cd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151cd8:
    // 0x151cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151cdc:
    // 0x151cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151ce0:
    // 0x151ce0: 0x3e00008  jr          $ra
label_151ce4:
    if (ctx->pc == 0x151CE4u) {
        ctx->pc = 0x151CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CE0u;
        // 0x151ce4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151CE8u;
        goto label_151ce8;
    }
    ctx->pc = 0x151CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CE0u;
        // 0x151ce4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CE8u;
label_151ce8:
    // 0x151ce8: 0x0  nop
    ctx->pc = 0x151ce8u;
    // NOP
label_151cec:
    // 0x151cec: 0x0  nop
    ctx->pc = 0x151cecu;
    // NOP
label_151cf0:
    // 0x151cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_151cf4:
    // 0x151cf4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x151cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_151cf8:
    // 0x151cf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_151cfc:
    // 0x151cfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_151d00:
    // 0x151d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_151d04:
    // 0x151d04: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x151d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_151d08:
    // 0x151d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151d0c:
    // 0x151d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_151d10:
    // 0x151d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151d14:
    // 0x151d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151d18:
    // 0x151d18: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_151d1c:
    // 0x151d1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_151d20:
    // 0x151d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151d24:
    // 0x151d24: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x151d24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_151d28:
    // 0x151d28: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x151d28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_151d2c:
    // 0x151d2c: 0xc066c5c  jal         func_19B170
label_151d30:
    if (ctx->pc == 0x151D30u) {
        ctx->pc = 0x151D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D2Cu;
        // 0x151d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D34u;
        goto label_151d34;
    }
    ctx->pc = 0x151D2Cu;
    SET_GPR_U32(ctx, 31, 0x151D34u);
    ctx->pc = 0x151D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D2Cu;
    // 0x151d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x151D34u;
label_151d34:
    // 0x151d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d38:
    // 0x151d38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151d3c:
    // 0x151d3c: 0xc066d10  jal         func_19B440
label_151d40:
    if (ctx->pc == 0x151D40u) {
        ctx->pc = 0x151D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D3Cu;
        // 0x151d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D44u;
        goto label_151d44;
    }
    ctx->pc = 0x151D3Cu;
    SET_GPR_U32(ctx, 31, 0x151D44u);
    ctx->pc = 0x151D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D3Cu;
    // 0x151d40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x151D44u;
label_151d44:
    // 0x151d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d48:
    // 0x151d48: 0xc066d30  jal         func_19B4C0
label_151d4c:
    if (ctx->pc == 0x151D4Cu) {
        ctx->pc = 0x151D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D48u;
        // 0x151d4c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D50u;
        goto label_151d50;
    }
    ctx->pc = 0x151D48u;
    SET_GPR_U32(ctx, 31, 0x151D50u);
    ctx->pc = 0x151D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D48u;
    // 0x151d4c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x151D50u;
label_151d50:
    // 0x151d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d54:
    // 0x151d54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x151d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_151d58:
    // 0x151d58: 0xc066d10  jal         func_19B440
label_151d5c:
    if (ctx->pc == 0x151D5Cu) {
        ctx->pc = 0x151D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D58u;
        // 0x151d5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D60u;
        goto label_151d60;
    }
    ctx->pc = 0x151D58u;
    SET_GPR_U32(ctx, 31, 0x151D60u);
    ctx->pc = 0x151D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D58u;
    // 0x151d5c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x151D60u;
label_151d60:
    // 0x151d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d64:
    // 0x151d64: 0xc066ce8  jal         func_19B3A0
label_151d68:
    if (ctx->pc == 0x151D68u) {
        ctx->pc = 0x151D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D64u;
        // 0x151d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D6Cu;
        goto label_151d6c;
    }
    ctx->pc = 0x151D64u;
    SET_GPR_U32(ctx, 31, 0x151D6Cu);
    ctx->pc = 0x151D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D64u;
    // 0x151d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x151D6Cu;
label_151d6c:
    // 0x151d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x151d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_151d70:
    // 0x151d70: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x151d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_151d74:
    // 0x151d74: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_151d78:
    // 0x151d78: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x151d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_151d7c:
    // 0x151d7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x151d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_151d80:
    // 0x151d80: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_151d84:
    // 0x151d84: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x151d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_151d88:
    // 0x151d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151d8c:
    // 0x151d8c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x151d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_151d90:
    // 0x151d90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_151d94:
    // 0x151d94: 0xc066d5c  jal         func_19B570
label_151d98:
    if (ctx->pc == 0x151D98u) {
        ctx->pc = 0x151D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D94u;
        // 0x151d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151D9Cu;
        goto label_151d9c;
    }
    ctx->pc = 0x151D94u;
    SET_GPR_U32(ctx, 31, 0x151D9Cu);
    ctx->pc = 0x151D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D94u;
    // 0x151d98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x151D9Cu;
label_151d9c:
    // 0x151d9c: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_151da0:
    // 0x151da0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_151da4:
    // 0x151da4: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x151da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_151da8:
    // 0x151da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151dac:
    // 0x151dac: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x151dacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_151db0:
    // 0x151db0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x151db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_151db4:
    // 0x151db4: 0xc066d5c  jal         func_19B570
label_151db8:
    if (ctx->pc == 0x151DB8u) {
        ctx->pc = 0x151DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DB4u;
        // 0x151db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151DBCu;
        goto label_151dbc;
    }
    ctx->pc = 0x151DB4u;
    SET_GPR_U32(ctx, 31, 0x151DBCu);
    ctx->pc = 0x151DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DB4u;
    // 0x151db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x151DBCu;
label_151dbc:
    // 0x151dbc: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x151dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_151dc0:
    // 0x151dc0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_151dc4:
    // 0x151dc4: 0x34631ff9  ori         $v1, $v1, 0x1FF9
    ctx->pc = 0x151dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8185);
label_151dc8:
    // 0x151dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151dcc:
    // 0x151dcc: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x151dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_151dd0:
    // 0x151dd0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x151dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_151dd4:
    // 0x151dd4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x151dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_151dd8:
    // 0x151dd8: 0xc066d5c  jal         func_19B570
label_151ddc:
    if (ctx->pc == 0x151DDCu) {
        ctx->pc = 0x151DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DD8u;
        // 0x151ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151DE0u;
        goto label_151de0;
    }
    ctx->pc = 0x151DD8u;
    SET_GPR_U32(ctx, 31, 0x151DE0u);
    ctx->pc = 0x151DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DD8u;
    // 0x151ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x151DE0u;
label_151de0:
    // 0x151de0: 0xc066cfe  jal         func_19B3F8
label_151de4:
    if (ctx->pc == 0x151DE4u) {
        ctx->pc = 0x151DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DE0u;
        // 0x151de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151DE8u;
        goto label_151de8;
    }
    ctx->pc = 0x151DE0u;
    SET_GPR_U32(ctx, 31, 0x151DE8u);
    ctx->pc = 0x151DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE0u;
    // 0x151de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0xc066c46  jal         func_19B118
label_151dec:
    if (ctx->pc == 0x151DECu) {
        ctx->pc = 0x151DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DE8u;
        // 0x151dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151DF0u;
        goto label_151df0;
    }
    ctx->pc = 0x151DE8u;
    SET_GPR_U32(ctx, 31, 0x151DF0u);
    ctx->pc = 0x151DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE8u;
    // 0x151dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x151DF0u;
label_151df0:
    // 0x151df0: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x151df0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_151df4:
    // 0x151df4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151df8:
    // 0x151df8: 0x26106c70  addiu       $s0, $s0, 0x6C70
    ctx->pc = 0x151df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
label_151dfc:
    // 0x151dfc: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x151dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_151e00:
    // 0x151e00: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_151e04:
    if (ctx->pc == 0x151E04u) {
        ctx->pc = 0x151E08u;
        goto label_151e08;
    }
    ctx->pc = 0x151E00u;
    {
        const bool branch_taken_0x151e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e00) {
            ctx->pc = 0x151E5Cu;
            goto label_151e5c;
        }
    }
    ctx->pc = 0x151E08u;
label_151e08:
    // 0x151e08: 0x8e0303c4  lw          $v1, 0x3C4($s0)
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_151e0c:
    // 0x151e0c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_151e10:
    if (ctx->pc == 0x151E10u) {
        ctx->pc = 0x151E14u;
        goto label_151e14;
    }
    ctx->pc = 0x151E0Cu;
    {
        const bool branch_taken_0x151e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151e0c) {
            ctx->pc = 0x151E5Cu;
            goto label_151e5c;
        }
    }
    ctx->pc = 0x151E14u;
label_151e14:
    // 0x151e14: 0x920403cf  lbu         $a0, 0x3CF($s0)
    ctx->pc = 0x151e14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 975)));
label_151e18:
    // 0x151e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151e1c:
    // 0x151e1c: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_151e20:
    // 0x151e20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x151e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_151e24:
    // 0x151e24: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_151e28:
    if (ctx->pc == 0x151E28u) {
        ctx->pc = 0x151E2Cu;
        goto label_151e2c;
    }
    ctx->pc = 0x151E24u;
    {
        const bool branch_taken_0x151e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e24) {
            ctx->pc = 0x151E5Cu;
            goto label_151e5c;
        }
    }
    ctx->pc = 0x151E2Cu;
label_151e2c:
    // 0x151e2c: 0xc60003b0  lwc1        $f0, 0x3B0($s0)
    ctx->pc = 0x151e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151e30:
    // 0x151e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_151e34:
    // 0x151e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x151e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_151e38:
    // 0x151e38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_151e3c:
    // 0x151e3c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_151e40:
    // 0x151e40: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x151e40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_151e44:
    // 0x151e44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x151e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_151e48:
    // 0x151e48: 0xc60003bc  lwc1        $f0, 0x3BC($s0)
    ctx->pc = 0x151e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151e4c:
    // 0x151e4c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x151e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_151e50:
    // 0x151e50: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151e54:
    // 0x151e54: 0xc05ced8  jal         func_173B60
label_151e58:
    if (ctx->pc == 0x151E58u) {
        ctx->pc = 0x151E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E54u;
        // 0x151e58: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151E5Cu;
        goto label_151e5c;
    }
    ctx->pc = 0x151E54u;
    SET_GPR_U32(ctx, 31, 0x151E5Cu);
    ctx->pc = 0x151E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E54u;
    // 0x151e58: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    { ctx->pc = 0x173b60; return; }
    ctx->pc = 0x151E5Cu;
label_151e5c:
    // 0x151e5c: 0x0  nop
    ctx->pc = 0x151e5cu;
    // NOP
label_151e60:
    // 0x151e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_151e64:
    // 0x151e64: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x151e64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_151e68:
    // 0x151e68: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_151e6c:
    if (ctx->pc == 0x151E6Cu) {
        ctx->pc = 0x151E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E68u;
        // 0x151e6c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151E70u;
        goto label_151e70;
    }
    ctx->pc = 0x151E68u;
    {
        const bool branch_taken_0x151e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E68u;
        // 0x151e6c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e68) {
            ctx->pc = 0x151DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151dfc;
        }
    }
    ctx->pc = 0x151E70u;
label_151e70:
    // 0x151e70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_151e74:
    // 0x151e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151e78:
    // 0x151e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151e7c:
    // 0x151e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151e80:
    // 0x151e80: 0x3e00008  jr          $ra
label_151e84:
    if (ctx->pc == 0x151E84u) {
        ctx->pc = 0x151E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E80u;
        // 0x151e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151E88u;
        goto label_151e88;
    }
    ctx->pc = 0x151E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E80u;
        // 0x151e84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E88u;
label_151e88:
    // 0x151e88: 0x0  nop
    ctx->pc = 0x151e88u;
    // NOP
label_151e8c:
    // 0x151e8c: 0x0  nop
    ctx->pc = 0x151e8cu;
    // NOP
label_151e90:
    // 0x151e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_151e94:
    // 0x151e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_151e98:
    // 0x151e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151e9c:
    // 0x151e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151ea0:
    // 0x151ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x151ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151ea4:
    // 0x151ea4: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_151ea8:
    // 0x151ea8: 0x26106c70  addiu       $s0, $s0, 0x6C70
    ctx->pc = 0x151ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
label_151eac:
    // 0x151eac: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_151eb0:
    // 0x151eb0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
label_151eb4:
    if (ctx->pc == 0x151EB4u) {
        ctx->pc = 0x151EB8u;
        goto label_151eb8;
    }
    ctx->pc = 0x151EB0u;
    {
        const bool branch_taken_0x151eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151eb0) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151EB8u;
label_151eb8:
    // 0x151eb8: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_151ebc:
    // 0x151ebc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_151ec0:
    if (ctx->pc == 0x151EC0u) {
        ctx->pc = 0x151EC4u;
        goto label_151ec4;
    }
    ctx->pc = 0x151EBCu;
    {
        const bool branch_taken_0x151ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ebc) {
            ctx->pc = 0x151F18u;
            goto label_151f18;
        }
    }
    ctx->pc = 0x151EC4u;
label_151ec4:
    // 0x151ec4: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x151ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_151ec8:
    // 0x151ec8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_151ecc:
    if (ctx->pc == 0x151ECCu) {
        ctx->pc = 0x151ED0u;
        goto label_151ed0;
    }
    ctx->pc = 0x151EC8u;
    {
        const bool branch_taken_0x151ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ec8) {
            ctx->pc = 0x151EE8u;
            goto label_151ee8;
        }
    }
    ctx->pc = 0x151ED0u;
label_151ed0:
    // 0x151ed0: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x151ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
label_151ed4:
    // 0x151ed4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_151ed8:
    if (ctx->pc == 0x151ED8u) {
        ctx->pc = 0x151EDCu;
        goto label_151edc;
    }
    ctx->pc = 0x151ED4u;
    {
        const bool branch_taken_0x151ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ed4) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151EDCu;
label_151edc:
    // 0x151edc: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x151edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_151ee0:
    // 0x151ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_151ee4:
    if (ctx->pc == 0x151EE4u) {
        ctx->pc = 0x151EE8u;
        goto label_151ee8;
    }
    ctx->pc = 0x151EE0u;
    {
        const bool branch_taken_0x151ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ee0) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151EE8u;
label_151ee8:
    // 0x151ee8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_151eec:
    if (ctx->pc == 0x151EECu) {
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EE8u;
        // 0x151eec: 0xae0003c4  sw          $zero, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151EF0u;
        goto label_151ef0;
    }
    ctx->pc = 0x151EE8u;
    {
        const bool branch_taken_0x151ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EE8u;
        // 0x151eec: 0xae0003c4  sw          $zero, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ee8) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151EF0u;
label_151ef0:
    // 0x151ef0: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_151ef4:
    // 0x151ef4: 0xc066e26  jal         func_19B898
label_151ef8:
    if (ctx->pc == 0x151EF8u) {
        ctx->pc = 0x151EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EF4u;
        // 0x151ef8: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151EFCu;
        goto label_151efc;
    }
    ctx->pc = 0x151EF4u;
    SET_GPR_U32(ctx, 31, 0x151EFCu);
    ctx->pc = 0x151EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF4u;
    // 0x151ef8: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x151EFCu;
label_151efc:
    // 0x151efc: 0x260403b0  addiu       $a0, $s0, 0x3B0
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_151f00:
    // 0x151f00: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x151f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_151f04:
    // 0x151f04: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_151f08:
    // 0x151f08: 0xc05f3d0  jal         func_17CF40
label_151f0c:
    if (ctx->pc == 0x151F0Cu) {
        ctx->pc = 0x151F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F08u;
        // 0x151f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151F10u;
        goto label_151f10;
    }
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x10000043  b           . + 4 + (0x43 << 2)
label_151f14:
    if (ctx->pc == 0x151F14u) {
        ctx->pc = 0x151F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F10u;
        // 0x151f14: 0xe60003bc  swc1        $f0, 0x3BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x151F18u;
        goto label_151f18;
    }
    ctx->pc = 0x151F10u;
    {
        const bool branch_taken_0x151f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F10u;
        // 0x151f14: 0xe60003bc  swc1        $f0, 0x3BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f10) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151F18u;
label_151f18:
    // 0x151f18: 0x860403ca  lh          $a0, 0x3CA($s0)
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 970)));
label_151f1c:
    // 0x151f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151f20:
    // 0x151f20: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_151f24:
    if (ctx->pc == 0x151F24u) {
        ctx->pc = 0x151F28u;
        goto label_151f28;
    }
    ctx->pc = 0x151F20u;
    {
        const bool branch_taken_0x151f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x151f20) {
            ctx->pc = 0x151F50u;
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F28u;
label_151f28:
    // 0x151f28: 0x860303c8  lh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
label_151f2c:
    // 0x151f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_151f30:
    // 0x151f30: 0xa60303c8  sh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 3));
label_151f34:
    // 0x151f34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x151f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_151f38:
    // 0x151f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x151f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_151f3c:
    // 0x151f3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_151f40:
    // 0x151f40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_151f44:
    if (ctx->pc == 0x151F44u) {
        ctx->pc = 0x151F48u;
        goto label_151f48;
    }
    ctx->pc = 0x151F40u;
    {
        const bool branch_taken_0x151f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f40) {
            ctx->pc = 0x151F50u;
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F48u;
label_151f48:
    // 0x151f48: 0x10000035  b           . + 4 + (0x35 << 2)
label_151f4c:
    if (ctx->pc == 0x151F4Cu) {
        ctx->pc = 0x151F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F48u;
        // 0x151f4c: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151F50u;
        goto label_151f50;
    }
    ctx->pc = 0x151F48u;
    {
        const bool branch_taken_0x151f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F48u;
        // 0x151f4c: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f48) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151F50u;
label_151f50:
    // 0x151f50: 0x860303c8  lh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
label_151f54:
    // 0x151f54: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_151f58:
    // 0x151f58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x151f58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_151f5c:
    // 0x151f5c: 0x0  nop
    ctx->pc = 0x151f5cu;
    // NOP
label_151f60:
    // 0x151f60: 0x0  nop
    ctx->pc = 0x151f60u;
    // NOP
label_151f64:
    // 0x151f64: 0x1810  mfhi        $v1
    ctx->pc = 0x151f64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_151f68:
    // 0x151f68: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x151f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_151f6c:
    // 0x151f6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_151f70:
    if (ctx->pc == 0x151F70u) {
        ctx->pc = 0x151F74u;
        goto label_151f74;
    }
    ctx->pc = 0x151F6Cu;
    {
        const bool branch_taken_0x151f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f6c) {
            ctx->pc = 0x151F78u;
            goto label_151f78;
        }
    }
    ctx->pc = 0x151F74u;
label_151f74:
    // 0x151f74: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151f78:
    // 0x151f78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_151f7c:
    // 0x151f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151f80:
    // 0x151f80: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_151f84:
    // 0x151f84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x151f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_151f88:
    // 0x151f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151f8c:
    // 0x151f8c: 0xc60303bc  lwc1        $f3, 0x3BC($s0)
    ctx->pc = 0x151f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_151f90:
    // 0x151f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151f94:
    // 0x151f94: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_151f98:
    // 0x151f98: 0x24c6b8b0  addiu       $a2, $a2, -0x4750
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949040));
label_151f9c:
    // 0x151f9c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x151f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_151fa0:
    // 0x151fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_151fa4:
    // 0x151fa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_151fa8:
    // 0x151fa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_151fac:
    // 0x151fac: 0x46021819  suba.s      $f3, $f2
    ctx->pc = 0x151facu;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[3], ctx->f[2]));
label_151fb0:
    // 0x151fb0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x151fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_151fb4:
    // 0x151fb4: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x151fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
label_151fb8:
    // 0x151fb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x151fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_151fbc:
    // 0x151fbc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x151fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_151fc0:
    // 0x151fc0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x151fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_151fc4:
    // 0x151fc4: 0xc066d86  jal         func_19B618
label_151fc8:
    if (ctx->pc == 0x151FC8u) {
        ctx->pc = 0x151FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FC4u;
        // 0x151fc8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151FCCu;
        goto label_151fcc;
    }
    ctx->pc = 0x151FC4u;
    SET_GPR_U32(ctx, 31, 0x151FCCu);
    ctx->pc = 0x151FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FC4u;
    // 0x151fc8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x151FCCu;
label_151fcc:
    // 0x151fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151fd0:
    // 0x151fd0: 0xc064f54  jal         func_193D50
label_151fd4:
    if (ctx->pc == 0x151FD4u) {
        ctx->pc = 0x151FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FD0u;
        // 0x151fd4: 0x260503b0  addiu       $a1, $s0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151FD8u;
        goto label_151fd8;
    }
    ctx->pc = 0x151FD0u;
    SET_GPR_U32(ctx, 31, 0x151FD8u);
    ctx->pc = 0x151FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FD0u;
    // 0x151fd4: 0x260503b0  addiu       $a1, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D50u;
    { ctx->pc = 0x193d50; return; }
    ctx->pc = 0x151FD8u;
label_151fd8:
    // 0x151fd8: 0xc60003b0  lwc1        $f0, 0x3B0($s0)
    ctx->pc = 0x151fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151fdc:
    // 0x151fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_151fe0:
    // 0x151fe0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x151fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_151fe4:
    // 0x151fe4: 0xc60003bc  lwc1        $f0, 0x3BC($s0)
    ctx->pc = 0x151fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151fe8:
    // 0x151fe8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x151fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_151fec:
    // 0x151fec: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151ff0:
    // 0x151ff0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x151ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_151ff4:
    // 0x151ff4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x151ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_151ff8:
    // 0x151ff8: 0x860203c8  lh          $v0, 0x3C8($s0)
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
label_151ffc:
    // 0x151ffc: 0x2841003c  slti        $at, $v0, 0x3C
    ctx->pc = 0x151ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_152000:
    // 0x152000: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_152004:
    if (ctx->pc == 0x152004u) {
        ctx->pc = 0x152004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152000u;
        // 0x152004: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152008u;
        goto label_152008;
    }
    ctx->pc = 0x152000u;
    {
        const bool branch_taken_0x152000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152000u;
        // 0x152004: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152000) {
            ctx->pc = 0x152018u;
            goto label_152018;
        }
    }
    ctx->pc = 0x152008u;
label_152008:
    // 0x152008: 0xc045cb8  jal         func_1172E0
label_15200c:
    if (ctx->pc == 0x15200Cu) {
        ctx->pc = 0x152010u;
        goto label_152010;
    }
    ctx->pc = 0x152008u;
    SET_GPR_U32(ctx, 31, 0x152010u);
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x152008u, 0x152010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152010u;
label_152010:
    // 0x152010: 0x10000003  b           . + 4 + (0x3 << 2)
label_152014:
    if (ctx->pc == 0x152014u) {
        ctx->pc = 0x152018u;
        goto label_152018;
    }
    ctx->pc = 0x152010u;
    {
        const bool branch_taken_0x152010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152010) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x152018u;
label_152018:
    // 0x152018: 0xc045c3c  jal         func_1170F0
label_15201c:
    if (ctx->pc == 0x15201Cu) {
        ctx->pc = 0x15201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152018u;
        // 0x15201c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152020u;
        goto label_152020;
    }
    ctx->pc = 0x152018u;
    SET_GPR_U32(ctx, 31, 0x152020u);
    ctx->pc = 0x15201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152018u;
    // 0x15201c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170F0u, 0x152018u, 0x152020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152020u;
label_152020:
    // 0x152020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_152024:
    // 0x152024: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x152024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_152028:
    // 0x152028: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_15202c:
    if (ctx->pc == 0x15202Cu) {
        ctx->pc = 0x15202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152028u;
        // 0x15202c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152030u;
        goto label_152030;
    }
    ctx->pc = 0x152028u;
    {
        const bool branch_taken_0x152028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152028u;
        // 0x15202c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152028) {
            ctx->pc = 0x151EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151eac;
        }
    }
    ctx->pc = 0x152030u;
label_152030:
    // 0x152030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_152034:
    // 0x152034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152038:
    // 0x152038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15203c:
    // 0x15203c: 0x3e00008  jr          $ra
label_152040:
    if (ctx->pc == 0x152040u) {
        ctx->pc = 0x152040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15203Cu;
        // 0x152040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152044u;
        goto label_152044;
    }
    ctx->pc = 0x15203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15203Cu;
        // 0x152040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152044u;
label_152044:
    // 0x152044: 0x0  nop
    ctx->pc = 0x152044u;
    // NOP
label_152048:
    // 0x152048: 0x0  nop
    ctx->pc = 0x152048u;
    // NOP
label_15204c:
    // 0x15204c: 0x0  nop
    ctx->pc = 0x15204cu;
    // NOP
label_152050:
    // 0x152050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_152054:
    // 0x152054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_152058:
    // 0x152058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15205c:
    // 0x15205c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152060:
    // 0x152060: 0xdc830270  ld          $v1, 0x270($a0)
    ctx->pc = 0x152060u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 624)));
label_152064:
    // 0x152064: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_152068:
    // 0x152068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15206c:
    if (ctx->pc == 0x15206Cu) {
        ctx->pc = 0x15206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152068u;
        // 0x15206c: 0x24060258  addiu       $a2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152070u;
        goto label_152070;
    }
    ctx->pc = 0x152068u;
    {
        const bool branch_taken_0x152068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152068u;
        // 0x15206c: 0x24060258  addiu       $a2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152068) {
            ctx->pc = 0x15207Cu;
            goto label_15207c;
        }
    }
    ctx->pc = 0x152070u;
label_152070:
    // 0x152070: 0x24c20096  addiu       $v0, $a2, 0x96
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 150));
label_152074:
    // 0x152074: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x152074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_152078:
    // 0x152078: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152078u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_15207c:
    // 0x15207c: 0xa4a6027c  sh          $a2, 0x27C($a1)
    ctx->pc = 0x15207cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 636), (uint16_t)GPR_U32(ctx, 6));
label_152080:
    // 0x152080: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_152084:
    // 0x152084: 0xa4a6027e  sh          $a2, 0x27E($a1)
    ctx->pc = 0x152084u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 638), (uint16_t)GPR_U32(ctx, 6));
label_152088:
    // 0x152088: 0x8ca20198  lw          $v0, 0x198($a1)
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_15208c:
    // 0x15208c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x15208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_152090:
    // 0x152090: 0xc0751a4  jal         func_1D4690
label_152094:
    if (ctx->pc == 0x152094u) {
        ctx->pc = 0x152094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152090u;
        // 0x152094: 0xaca20198  sw          $v0, 0x198($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152098u;
        goto label_152098;
    }
    ctx->pc = 0x152090u;
    SET_GPR_U32(ctx, 31, 0x152098u);
    ctx->pc = 0x152094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152090u;
    // 0x152094: 0xaca20198  sw          $v0, 0x198($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    { ctx->pc = 0x1d4690; return; }
    ctx->pc = 0x152098u;
label_152098:
    // 0x152098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15209c:
    // 0x15209c: 0x3e00008  jr          $ra
label_1520a0:
    if (ctx->pc == 0x1520A0u) {
        ctx->pc = 0x1520A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15209Cu;
        // 0x1520a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520A4u;
        goto label_1520a4;
    }
    ctx->pc = 0x15209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15209Cu;
        // 0x1520a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1520A4u;
label_1520a4:
    // 0x1520a4: 0x0  nop
    ctx->pc = 0x1520a4u;
    // NOP
label_1520a8:
    // 0x1520a8: 0x0  nop
    ctx->pc = 0x1520a8u;
    // NOP
label_1520ac:
    // 0x1520ac: 0x0  nop
    ctx->pc = 0x1520acu;
    // NOP
label_1520b0:
    // 0x1520b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1520b4:
    // 0x1520b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1520b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1520b8:
    // 0x1520b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1520b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1520bc:
    // 0x1520bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1520bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1520c0:
    // 0x1520c0: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1520c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1520c4:
    // 0x1520c4: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x1520c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_1520c8:
    // 0x1520c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1520cc:
    if (ctx->pc == 0x1520CCu) {
        ctx->pc = 0x1520CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520C8u;
        // 0x1520cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520D0u;
        goto label_1520d0;
    }
    ctx->pc = 0x1520C8u;
    {
        const bool branch_taken_0x1520c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520C8u;
        // 0x1520cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520c8) {
            ctx->pc = 0x1520ECu;
            goto label_1520ec;
        }
    }
    ctx->pc = 0x1520D0u;
label_1520d0:
    // 0x1520d0: 0x2a0100dd  slti        $at, $s0, 0xDD
    ctx->pc = 0x1520d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)221) ? 1 : 0);
label_1520d4:
    // 0x1520d4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1520d8:
    if (ctx->pc == 0x1520D8u) {
        ctx->pc = 0x1520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520D4u;
        // 0x1520d8: 0x2a020019  slti        $v0, $s0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520DCu;
        goto label_1520dc;
    }
    ctx->pc = 0x1520D4u;
    {
        const bool branch_taken_0x1520d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520D4u;
        // 0x1520d8: 0x2a020019  slti        $v0, $s0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520d4) {
            ctx->pc = 0x1520F0u;
            goto label_1520f0;
        }
    }
    ctx->pc = 0x1520DCu;
label_1520dc:
    // 0x1520dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1520dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1520e0:
    // 0x1520e0: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x1520e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1520e4:
    // 0x1520e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1520e8:
    if (ctx->pc == 0x1520E8u) {
        ctx->pc = 0x1520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520E4u;
        // 0x1520e8: 0x24422370  addiu       $v0, $v0, 0x2370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520ECu;
        goto label_1520ec;
    }
    ctx->pc = 0x1520E4u;
    {
        const bool branch_taken_0x1520e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520E4u;
        // 0x1520e8: 0x24422370  addiu       $v0, $v0, 0x2370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520e4) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x1520ECu;
label_1520ec:
    // 0x1520ec: 0x2a020019  slti        $v0, $s0, 0x19
    ctx->pc = 0x1520ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_1520f0:
    // 0x1520f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1520f4:
    if (ctx->pc == 0x1520F4u) {
        ctx->pc = 0x1520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F0u;
        // 0x1520f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1520F8u;
        goto label_1520f8;
    }
    ctx->pc = 0x1520F0u;
    {
        const bool branch_taken_0x1520f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F0u;
        // 0x1520f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520f0) {
            ctx->pc = 0x152108u;
            goto label_152108;
        }
    }
    ctx->pc = 0x1520F8u;
label_1520f8:
    // 0x1520f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1520fc:
    // 0x1520fc: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x1520fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152100:
    // 0x152100: 0x10000018  b           . + 4 + (0x18 << 2)
label_152104:
    if (ctx->pc == 0x152104u) {
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x24422520  addiu       $v0, $v0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152108u;
        goto label_152108;
    }
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x24422520  addiu       $v0, $v0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152100) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x152108u;
label_152108:
    // 0x152108: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_15210c:
    if (ctx->pc == 0x15210Cu) {
        ctx->pc = 0x15210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152108u;
        // 0x15210c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152110u;
        goto label_152110;
    }
    ctx->pc = 0x152108u;
    {
        const bool branch_taken_0x152108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152108u;
        // 0x15210c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152108) {
            ctx->pc = 0x15211Cu;
            goto label_15211c;
        }
    }
    ctx->pc = 0x152110u;
label_152110:
    // 0x152110: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x152110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152114:
    // 0x152114: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_152118:
    if (ctx->pc == 0x152118u) {
        ctx->pc = 0x15211Cu;
        goto label_15211c;
    }
    ctx->pc = 0x152114u;
    {
        const bool branch_taken_0x152114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x152114) {
            ctx->pc = 0x15213Cu;
            goto label_15213c;
        }
    }
    ctx->pc = 0x15211Cu;
label_15211c:
    // 0x15211c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_152120:
    // 0x152120: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x152120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152124:
    // 0x152124: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
label_152128:
    // 0x152128: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x152128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15212c:
    // 0x15212c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15212cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_152130:
    // 0x152130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152134:
    // 0x152134: 0x1000000b  b           . + 4 + (0xB << 2)
label_152138:
    if (ctx->pc == 0x152138u) {
        ctx->pc = 0x152138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152134u;
        // 0x152138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15213Cu;
        goto label_15213c;
    }
    ctx->pc = 0x152134u;
    {
        const bool branch_taken_0x152134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152134u;
        // 0x152138: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152134) {
            ctx->pc = 0x152164u;
            goto label_152164;
        }
    }
    ctx->pc = 0x15213Cu;
label_15213c:
    // 0x15213c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_152140:
    // 0x152140: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x152140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_152144:
    // 0x152144: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x152144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152148:
    // 0x152148: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x152148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
label_15214c:
    // 0x15214c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_152150:
    // 0x152150: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152154:
    // 0x152154: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152158:
    // 0x152158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15215c:
    // 0x15215c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x15215cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_152160:
    // 0x152160: 0x0  nop
    ctx->pc = 0x152160u;
    // NOP
label_152164:
    // 0x152164: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x152164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_152168:
    // 0x152168: 0x40f809  jalr        $v0
label_15216c:
    if (ctx->pc == 0x15216Cu) {
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152170u;
        goto label_152170;
    }
    ctx->pc = 0x152168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x152170u);
        ctx->pc = 0x15216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152168u;
        // 0x15216c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152168u, 0x152170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x152170u;
label_152170:
    // 0x152170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152174:
    // 0x152174: 0xc0751a4  jal         func_1D4690
label_152178:
    if (ctx->pc == 0x152178u) {
        ctx->pc = 0x152178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152174u;
        // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15217Cu;
        goto label_15217c;
    }
    ctx->pc = 0x152174u;
    SET_GPR_U32(ctx, 31, 0x15217Cu);
    ctx->pc = 0x152178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152174u;
    // 0x152178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4690u;
    { ctx->pc = 0x1d4690; return; }
    ctx->pc = 0x15217Cu;
label_15217c:
    // 0x15217c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_152180:
    // 0x152180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152184:
    // 0x152184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152188:
    // 0x152188: 0x3e00008  jr          $ra
label_15218c:
    if (ctx->pc == 0x15218Cu) {
        ctx->pc = 0x15218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152188u;
        // 0x15218c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152190u;
        goto label_152190;
    }
    ctx->pc = 0x152188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152188u;
        // 0x15218c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152190u;
label_152190:
    // 0x152190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_152194:
    // 0x152194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152198:
    // 0x152198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15219c:
    // 0x15219c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1521a0:
    // 0x1521a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1521a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1521a4:
    // 0x1521a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1521a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1521a8:
    // 0x1521a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1521a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1521ac:
    // 0x1521ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1521acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1521b0:
    // 0x1521b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1521b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1521b4:
    // 0x1521b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1521b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1521b8:
    // 0x1521b8: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_1521bc:
    // 0x1521bc: 0x26106c70  addiu       $s0, $s0, 0x6C70
    ctx->pc = 0x1521bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
label_1521c0:
    // 0x1521c0: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x1521c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_1521c4:
    // 0x1521c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1521c8:
    if (ctx->pc == 0x1521C8u) {
        ctx->pc = 0x1521CCu;
        goto label_1521cc;
    }
    ctx->pc = 0x1521C4u;
    {
        const bool branch_taken_0x1521c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521c4) {
            ctx->pc = 0x1521DCu;
            goto label_1521dc;
        }
    }
    ctx->pc = 0x1521CCu;
label_1521cc:
    // 0x1521cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1521ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1521d0:
    // 0x1521d0: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x1521d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1521d4:
    // 0x1521d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1521d8:
    if (ctx->pc == 0x1521D8u) {
        ctx->pc = 0x1521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521D4u;
        // 0x1521d8: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1521DCu;
        goto label_1521dc;
    }
    ctx->pc = 0x1521D4u;
    {
        const bool branch_taken_0x1521d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521D4u;
        // 0x1521d8: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521d4) {
            ctx->pc = 0x1521C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1521c0;
        }
    }
    ctx->pc = 0x1521DCu;
label_1521dc:
    // 0x1521dc: 0x0  nop
    ctx->pc = 0x1521dcu;
    // NOP
label_1521e0:
    // 0x1521e0: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1521e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1521e4:
    // 0x1521e4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_1521e8:
    if (ctx->pc == 0x1521E8u) {
        ctx->pc = 0x1521E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521E4u;
        // 0x1521e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1521ECu;
        goto label_1521ec;
    }
    ctx->pc = 0x1521E4u;
    {
        const bool branch_taken_0x1521e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521E4u;
        // 0x1521e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521e4) {
            ctx->pc = 0x152320u;
            { ctx->pc = 0x152320; return; }
        }
    }
    ctx->pc = 0x1521ECu;
label_1521ec:
    // 0x1521ec: 0xc066e26  jal         func_19B898
label_1521f0:
    if (ctx->pc == 0x1521F0u) {
        ctx->pc = 0x1521F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521ECu;
        // 0x1521f0: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1521F4u;
        goto label_1521f4;
    }
    ctx->pc = 0x1521ECu;
    SET_GPR_U32(ctx, 31, 0x1521F4u);
    ctx->pc = 0x1521F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521ECu;
    // 0x1521f0: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1521F4u;
label_1521f4:
    // 0x1521f4: 0x260403b0  addiu       $a0, $s0, 0x3B0
    ctx->pc = 0x1521f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_1521f8:
    // 0x1521f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1521f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1521fc:
    // 0x1521fc: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_152200:
    // 0x152200: 0xc05f3d0  jal         func_17CF40
label_152204:
    if (ctx->pc == 0x152204u) {
        ctx->pc = 0x152204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152200u;
        // 0x152204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152208u;
        goto label_152208;
    }
    ctx->pc = 0x152200u;
    SET_GPR_U32(ctx, 31, 0x152208u);
    ctx->pc = 0x152204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152200u;
    // 0x152204: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x152208u;
label_152208:
    // 0x152208: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x152208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
label_15220c:
    // 0x15220c: 0x2a62008b  slti        $v0, $s3, 0x8B
    ctx->pc = 0x15220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)139) ? 1 : 0);
label_152210:
    // 0x152210: 0xe60003bc  swc1        $f0, 0x3BC($s0)
    ctx->pc = 0x152210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
label_152214:
    // 0x152214: 0xae1103c4  sw          $s1, 0x3C4($s0)
    ctx->pc = 0x152214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 17));
label_152218:
    // 0x152218: 0xa61203ca  sh          $s2, 0x3CA($s0)
    ctx->pc = 0x152218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 970), (uint16_t)GPR_U32(ctx, 18));
label_15221c:
    // 0x15221c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_152220:
    if (ctx->pc == 0x152220u) {
        ctx->pc = 0x152220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15221Cu;
        // 0x152220: 0xa60003c8  sh          $zero, 0x3C8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152224u;
        goto label_152224;
    }
    ctx->pc = 0x15221Cu;
    {
        const bool branch_taken_0x15221c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15221Cu;
        // 0x152220: 0xa60003c8  sh          $zero, 0x3C8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15221c) {
            ctx->pc = 0x152264u;
            { ctx->pc = 0x152264; return; }
        }
    }
    ctx->pc = 0x152224u;
label_152224:
    // 0x152224: 0x2a6100dd  slti        $at, $s3, 0xDD
    ctx->pc = 0x152224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)221) ? 1 : 0);
label_152228:
    // 0x152228: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_15222c:
    if (ctx->pc == 0x15222Cu) {
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152228u;
        // 0x15222c: 0x2a620026  slti        $v0, $s3, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)38) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152230u;
        goto label_152230;
    }
    ctx->pc = 0x152228u;
    {
        const bool branch_taken_0x152228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152228u;
        // 0x15222c: 0x2a620026  slti        $v0, $s3, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)38) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152228) {
            ctx->pc = 0x152268u;
            { ctx->pc = 0x152268; return; }
        }
    }
    ctx->pc = 0x152230u;
label_152230:
    // 0x152230: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x152230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_152234:
    // 0x152234: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_152238:
    // 0x152238: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x152238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15223c:
    // 0x15223c: 0x246303ab  addiu       $v1, $v1, 0x3AB
    ctx->pc = 0x15223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 939));
label_152240:
    // 0x152240: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_152244:
    // 0x152244: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x152244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_152248:
    // 0x152248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15224c:
    // 0x15224c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15224cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x152250u;
    return;
}
