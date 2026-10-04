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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4cc0u: goto label_1a4cc0;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4cc8u: goto label_1a4cc8;
        case 0x1a4cccu: goto label_1a4ccc;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4cd4u: goto label_1a4cd4;
        case 0x1a4cd8u: goto label_1a4cd8;
        case 0x1a4cdcu: goto label_1a4cdc;
        case 0x1a4ce0u: goto label_1a4ce0;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4cecu: goto label_1a4cec;
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        case 0x1a4cf8u: goto label_1a4cf8;
        case 0x1a4cfcu: goto label_1a4cfc;
        case 0x1a4d00u: goto label_1a4d00;
        case 0x1a4d04u: goto label_1a4d04;
        case 0x1a4d08u: goto label_1a4d08;
        case 0x1a4d0cu: goto label_1a4d0c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d14u: goto label_1a4d14;
        case 0x1a4d18u: goto label_1a4d18;
        case 0x1a4d1cu: goto label_1a4d1c;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        case 0x1a4e78u: goto label_1a4e78;
        case 0x1a4e7cu: goto label_1a4e7c;
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        default: return;
    }

label_1a4b18:
    // 0x1a4b18: 0x3e00008  jr          $ra
label_1a4b1c:
    if (ctx->pc == 0x1A4B1Cu) {
        ctx->pc = 0x1A4B20u;
        goto label_1a4b20;
    }
    ctx->pc = 0x1A4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B20u;
label_1a4b20:
    // 0x1a4b20: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1a4b24:
    // 0x1a4b24: 0xc  syscall     0
    ctx->pc = 0x1a4b24u;
    ctx->pc = 0x1A4B28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b28:
    // 0x1a4b28: 0x3e00008  jr          $ra
label_1a4b2c:
    if (ctx->pc == 0x1A4B2Cu) {
        ctx->pc = 0x1A4B30u;
        goto label_1a4b30;
    }
    ctx->pc = 0x1A4B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x1a4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1a4b34:
    // 0x1a4b34: 0xc  syscall     0
    ctx->pc = 0x1a4b34u;
    ctx->pc = 0x1A4B38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b38:
    // 0x1a4b38: 0x3e00008  jr          $ra
label_1a4b3c:
    if (ctx->pc == 0x1A4B3Cu) {
        ctx->pc = 0x1A4B40u;
        goto label_1a4b40;
    }
    ctx->pc = 0x1A4B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B40u;
label_1a4b40:
    // 0x1a4b40: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1a4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1a4b44:
    // 0x1a4b44: 0xc  syscall     0
    ctx->pc = 0x1a4b44u;
    ctx->pc = 0x1A4B48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b48:
    // 0x1a4b48: 0x3e00008  jr          $ra
label_1a4b4c:
    if (ctx->pc == 0x1A4B4Cu) {
        ctx->pc = 0x1A4B50u;
        goto label_1a4b50;
    }
    ctx->pc = 0x1A4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B50u;
label_1a4b50:
    // 0x1a4b50: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x1a4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
label_1a4b54:
    // 0x1a4b54: 0xc  syscall     0
    ctx->pc = 0x1a4b54u;
    ctx->pc = 0x1A4B58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b58:
    // 0x1a4b58: 0x3e00008  jr          $ra
label_1a4b5c:
    if (ctx->pc == 0x1A4B5Cu) {
        ctx->pc = 0x1A4B60u;
        goto label_1a4b60;
    }
    ctx->pc = 0x1A4B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B60u;
label_1a4b60:
    // 0x1a4b60: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_1a4b64:
    // 0x1a4b64: 0xc  syscall     0
    ctx->pc = 0x1a4b64u;
    ctx->pc = 0x1A4B68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b68:
    // 0x1a4b68: 0x3e00008  jr          $ra
label_1a4b6c:
    if (ctx->pc == 0x1A4B6Cu) {
        ctx->pc = 0x1A4B70u;
        goto label_1a4b70;
    }
    ctx->pc = 0x1A4B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B70u;
label_1a4b70:
    // 0x1a4b70: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
label_1a4b74:
    // 0x1a4b74: 0xc  syscall     0
    ctx->pc = 0x1a4b74u;
    ctx->pc = 0x1A4B78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b78:
    // 0x1a4b78: 0x3e00008  jr          $ra
label_1a4b7c:
    if (ctx->pc == 0x1A4B7Cu) {
        ctx->pc = 0x1A4B80u;
        goto label_1a4b80;
    }
    ctx->pc = 0x1A4B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B80u;
label_1a4b80:
    // 0x1a4b80: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_1a4b84:
    // 0x1a4b84: 0xc  syscall     0
    ctx->pc = 0x1a4b84u;
    ctx->pc = 0x1A4B88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b88:
    // 0x1a4b88: 0x3e00008  jr          $ra
label_1a4b8c:
    if (ctx->pc == 0x1A4B8Cu) {
        ctx->pc = 0x1A4B90u;
        goto label_1a4b90;
    }
    ctx->pc = 0x1A4B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B90u;
label_1a4b90:
    // 0x1a4b90: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1a4b94:
    // 0x1a4b94: 0xc  syscall     0
    ctx->pc = 0x1a4b94u;
    ctx->pc = 0x1A4B98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b98:
    // 0x1a4b98: 0x3e00008  jr          $ra
label_1a4b9c:
    if (ctx->pc == 0x1A4B9Cu) {
        ctx->pc = 0x1A4BA0u;
        goto label_1a4ba0;
    }
    ctx->pc = 0x1A4B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BA0u;
label_1a4ba0:
    // 0x1a4ba0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1a4ba4:
    // 0x1a4ba4: 0xc  syscall     0
    ctx->pc = 0x1a4ba4u;
    ctx->pc = 0x1A4BA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ba8:
    // 0x1a4ba8: 0x3e00008  jr          $ra
label_1a4bac:
    if (ctx->pc == 0x1A4BACu) {
        ctx->pc = 0x1A4BB0u;
        goto label_1a4bb0;
    }
    ctx->pc = 0x1A4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BB0u;
label_1a4bb0:
    // 0x1a4bb0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_1a4bb4:
    // 0x1a4bb4: 0xc  syscall     0
    ctx->pc = 0x1a4bb4u;
    ctx->pc = 0x1A4BB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bb8:
    // 0x1a4bb8: 0x3e00008  jr          $ra
label_1a4bbc:
    if (ctx->pc == 0x1A4BBCu) {
        ctx->pc = 0x1A4BC0u;
        goto label_1a4bc0;
    }
    ctx->pc = 0x1A4BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BC0u;
label_1a4bc0:
    // 0x1a4bc0: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1a4bc4:
    // 0x1a4bc4: 0xc  syscall     0
    ctx->pc = 0x1a4bc4u;
    ctx->pc = 0x1A4BC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bc8:
    // 0x1a4bc8: 0x3e00008  jr          $ra
label_1a4bcc:
    if (ctx->pc == 0x1A4BCCu) {
        ctx->pc = 0x1A4BD0u;
        goto label_1a4bd0;
    }
    ctx->pc = 0x1A4BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BD0u;
label_1a4bd0:
    // 0x1a4bd0: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
label_1a4bd4:
    // 0x1a4bd4: 0xc  syscall     0
    ctx->pc = 0x1a4bd4u;
    ctx->pc = 0x1A4BD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bd8:
    // 0x1a4bd8: 0x3e00008  jr          $ra
label_1a4bdc:
    if (ctx->pc == 0x1A4BDCu) {
        ctx->pc = 0x1A4BE0u;
        goto label_1a4be0;
    }
    ctx->pc = 0x1A4BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BE0u;
label_1a4be0:
    // 0x1a4be0: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1a4be4:
    // 0x1a4be4: 0xc  syscall     0
    ctx->pc = 0x1a4be4u;
    ctx->pc = 0x1A4BE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4be8:
    // 0x1a4be8: 0x3e00008  jr          $ra
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0x2403ff89  addiu       $v1, $zero, -0x77
    ctx->pc = 0x1a4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967177));
label_1a4bf4:
    // 0x1a4bf4: 0xc  syscall     0
    ctx->pc = 0x1a4bf4u;
    ctx->pc = 0x1A4BF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bf8:
    // 0x1a4bf8: 0x3e00008  jr          $ra
label_1a4bfc:
    if (ctx->pc == 0x1A4BFCu) {
        ctx->pc = 0x1A4C00u;
        goto label_1a4c00;
    }
    ctx->pc = 0x1A4BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C00u;
label_1a4c00:
    // 0x1a4c00: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a4c04:
    // 0x1a4c04: 0xc  syscall     0
    ctx->pc = 0x1a4c04u;
    ctx->pc = 0x1A4C08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c08:
    // 0x1a4c08: 0x3e00008  jr          $ra
label_1a4c0c:
    if (ctx->pc == 0x1A4C0Cu) {
        ctx->pc = 0x1A4C10u;
        goto label_1a4c10;
    }
    ctx->pc = 0x1A4C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C10u;
label_1a4c10:
    // 0x1a4c10: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
label_1a4c14:
    // 0x1a4c14: 0xc  syscall     0
    ctx->pc = 0x1a4c14u;
    ctx->pc = 0x1A4C18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c18:
    // 0x1a4c18: 0x3e00008  jr          $ra
label_1a4c1c:
    if (ctx->pc == 0x1A4C1Cu) {
        ctx->pc = 0x1A4C20u;
        goto label_1a4c20;
    }
    ctx->pc = 0x1A4C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C20u;
label_1a4c20:
    // 0x1a4c20: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x1a4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1a4c24:
    // 0x1a4c24: 0xc  syscall     0
    ctx->pc = 0x1a4c24u;
    ctx->pc = 0x1A4C28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c28:
    // 0x1a4c28: 0x3e00008  jr          $ra
label_1a4c2c:
    if (ctx->pc == 0x1A4C2Cu) {
        ctx->pc = 0x1A4C30u;
        goto label_1a4c30;
    }
    ctx->pc = 0x1A4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C30u;
label_1a4c30:
    // 0x1a4c30: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_1a4c34:
    // 0x1a4c34: 0xc  syscall     0
    ctx->pc = 0x1a4c34u;
    ctx->pc = 0x1A4C38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c38:
    // 0x1a4c38: 0x3e00008  jr          $ra
label_1a4c3c:
    if (ctx->pc == 0x1A4C3Cu) {
        ctx->pc = 0x1A4C40u;
        goto label_1a4c40;
    }
    ctx->pc = 0x1A4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C40u;
label_1a4c40:
    // 0x1a4c40: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x1a4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_1a4c44:
    // 0x1a4c44: 0xc  syscall     0
    ctx->pc = 0x1a4c44u;
    ctx->pc = 0x1A4C48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c48:
    // 0x1a4c48: 0x3e00008  jr          $ra
label_1a4c4c:
    if (ctx->pc == 0x1A4C4Cu) {
        ctx->pc = 0x1A4C50u;
        goto label_1a4c50;
    }
    ctx->pc = 0x1A4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C50u;
label_1a4c50:
    // 0x1a4c50: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_1a4c54:
    // 0x1a4c54: 0xc  syscall     0
    ctx->pc = 0x1a4c54u;
    ctx->pc = 0x1A4C58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c58:
    // 0x1a4c58: 0x3e00008  jr          $ra
label_1a4c5c:
    if (ctx->pc == 0x1A4C5Cu) {
        ctx->pc = 0x1A4C60u;
        goto label_1a4c60;
    }
    ctx->pc = 0x1A4C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C60u;
label_1a4c60:
    // 0x1a4c60: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_1a4c64:
    // 0x1a4c64: 0xc  syscall     0
    ctx->pc = 0x1a4c64u;
    ctx->pc = 0x1A4C68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c68:
    // 0x1a4c68: 0x3e00008  jr          $ra
label_1a4c6c:
    if (ctx->pc == 0x1A4C6Cu) {
        ctx->pc = 0x1A4C70u;
        goto label_1a4c70;
    }
    ctx->pc = 0x1A4C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C70u;
label_1a4c70:
    // 0x1a4c70: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1a4c74:
    // 0x1a4c74: 0xc  syscall     0
    ctx->pc = 0x1a4c74u;
    ctx->pc = 0x1A4C78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c78:
    // 0x1a4c78: 0x3e00008  jr          $ra
label_1a4c7c:
    if (ctx->pc == 0x1A4C7Cu) {
        ctx->pc = 0x1A4C80u;
        goto label_1a4c80;
    }
    ctx->pc = 0x1A4C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C80u;
label_1a4c80:
    // 0x1a4c80: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a4c84:
    // 0x1a4c84: 0xc  syscall     0
    ctx->pc = 0x1a4c84u;
    ctx->pc = 0x1A4C88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c88:
    // 0x1a4c88: 0x3e00008  jr          $ra
label_1a4c8c:
    if (ctx->pc == 0x1A4C8Cu) {
        ctx->pc = 0x1A4C90u;
        goto label_1a4c90;
    }
    ctx->pc = 0x1A4C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C90u;
label_1a4c90:
    // 0x1a4c90: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1a4c94:
    // 0x1a4c94: 0xc  syscall     0
    ctx->pc = 0x1a4c94u;
    ctx->pc = 0x1A4C98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c98:
    // 0x1a4c98: 0x3e00008  jr          $ra
label_1a4c9c:
    if (ctx->pc == 0x1A4C9Cu) {
        ctx->pc = 0x1A4CA0u;
        goto label_1a4ca0;
    }
    ctx->pc = 0x1A4C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CA0u;
label_1a4ca0:
    // 0x1a4ca0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a4ca4:
    // 0x1a4ca4: 0x3e00008  jr          $ra
label_1a4ca8:
    if (ctx->pc == 0x1A4CA8u) {
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xac405b50  sw          $zero, 0x5B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CACu;
        goto label_1a4cac;
    }
    ctx->pc = 0x1A4CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xac405b50  sw          $zero, 0x5B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CACu;
label_1a4cac:
    // 0x1a4cac: 0x0  nop
    ctx->pc = 0x1a4cacu;
    // NOP
label_1a4cb0:
    // 0x1a4cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4cb4:
    // 0x1a4cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4cb8:
    // 0x1a4cb8: 0xc06b518  jal         func_1AD460
label_1a4cbc:
    if (ctx->pc == 0x1A4CBCu) {
        ctx->pc = 0x1A4CC0u;
        goto label_1a4cc0;
    }
    ctx->pc = 0x1A4CB8u;
    SET_GPR_U32(ctx, 31, 0x1A4CC0u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4CC0u;
label_1a4cc0:
    // 0x1a4cc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4cc4:
    // 0x1a4cc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4cc8:
    // 0x1a4cc8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_1a4ccc:
    // 0x1a4ccc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a4cd0:
    // 0x1a4cd0: 0xf  sync
    ctx->pc = 0x1a4cd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a4cd4:
    // 0x1a4cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4cd8:
    if (ctx->pc == 0x1A4CD8u) {
        ctx->pc = 0x1A4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CD4u;
        // 0x1a4cd8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CDCu;
        goto label_1a4cdc;
    }
    ctx->pc = 0x1A4CD4u;
    {
        const bool branch_taken_0x1a4cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CD4u;
        // 0x1a4cd8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cd4) {
            ctx->pc = 0x1A4CE8u;
            goto label_1a4ce8;
        }
    }
    ctx->pc = 0x1A4CDCu;
label_1a4cdc:
    // 0x1a4cdc: 0xc06b52a  jal         func_1AD4A8
label_1a4ce0:
    if (ctx->pc == 0x1A4CE0u) {
        ctx->pc = 0x1A4CE4u;
        goto label_1a4ce4;
    }
    ctx->pc = 0x1A4CDCu;
    SET_GPR_U32(ctx, 31, 0x1A4CE4u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A4CE4u;
label_1a4ce4:
    // 0x1a4ce4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4ce8:
    // 0x1a4ce8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_1a4cec:
    // 0x1a4cec: 0x0  nop
    ctx->pc = 0x1a4cecu;
    // NOP
label_1a4cf0:
    // 0x1a4cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a4cf4:
    // 0x1a4cf4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a4cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1a4cf8:
    // 0x1a4cf8: 0x0  nop
    ctx->pc = 0x1a4cf8u;
    // NOP
label_1a4cfc:
    // 0x1a4cfc: 0x0  nop
    ctx->pc = 0x1a4cfcu;
    // NOP
label_1a4d00:
    // 0x1a4d00: 0x0  nop
    ctx->pc = 0x1a4d00u;
    // NOP
label_1a4d04:
    // 0x1a4d04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1a4d08:
    if (ctx->pc == 0x1A4D08u) {
        ctx->pc = 0x1A4D0Cu;
        goto label_1a4d0c;
    }
    ctx->pc = 0x1A4D04u;
    {
        const bool branch_taken_0x1a4d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d04) {
            ctx->pc = 0x1A4CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4cf0;
        }
    }
    ctx->pc = 0x1A4D0Cu;
label_1a4d0c:
    // 0x1a4d0c: 0xc06b518  jal         func_1AD460
label_1a4d10:
    if (ctx->pc == 0x1A4D10u) {
        ctx->pc = 0x1A4D14u;
        goto label_1a4d14;
    }
    ctx->pc = 0x1A4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D14u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4D14u;
label_1a4d14:
    // 0x1a4d14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4d18:
    // 0x1a4d18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4d1c:
    // 0x1a4d1c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_1a4d20:
    // 0x1a4d20: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a4d24:
    // 0x1a4d24: 0xf  sync
    ctx->pc = 0x1a4d24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a4d28:
    // 0x1a4d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a4d2c:
    if (ctx->pc == 0x1A4D2Cu) {
        ctx->pc = 0x1A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D28u;
        // 0x1a4d2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D30u;
        goto label_1a4d30;
    }
    ctx->pc = 0x1A4D28u;
    {
        const bool branch_taken_0x1a4d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D28u;
        // 0x1a4d2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d28) {
            ctx->pc = 0x1A4D38u;
            goto label_1a4d38;
        }
    }
    ctx->pc = 0x1A4D30u;
label_1a4d30:
    // 0x1a4d30: 0x806b52a  j           func_1AD4A8
label_1a4d34:
    if (ctx->pc == 0x1A4D34u) {
        ctx->pc = 0x1A4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D30u;
        // 0x1a4d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D38u;
        goto label_1a4d38;
    }
    ctx->pc = 0x1A4D30u;
    ctx->pc = 0x1A4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D30u;
    // 0x1a4d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A4D38u;
label_1a4d38:
    // 0x1a4d38: 0x3e00008  jr          $ra
label_1a4d3c:
    if (ctx->pc == 0x1A4D3Cu) {
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D40u;
        goto label_1a4d40;
    }
    ctx->pc = 0x1A4D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D38u;
        // 0x1a4d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4D40u;
label_1a4d40:
    // 0x1a4d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4d44:
    // 0x1a4d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4d48:
    // 0x1a4d48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d4c:
    // 0x1a4d4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a4d50:
    // 0x1a4d50: 0xc0692e4  jal         func_1A4B90
label_1a4d54:
    if (ctx->pc == 0x1A4D54u) {
        ctx->pc = 0x1A4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D50u;
        // 0x1a4d54: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D58u;
        goto label_1a4d58;
    }
    ctx->pc = 0x1A4D50u;
    SET_GPR_U32(ctx, 31, 0x1A4D58u);
    ctx->pc = 0x1A4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4D50u;
    // 0x1a4d54: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B90u;
    goto label_1a4b90;
    ctx->pc = 0x1A4D58u;
label_1a4d58:
    // 0x1a4d58: 0xc06b518  jal         func_1AD460
label_1a4d5c:
    if (ctx->pc == 0x1A4D5Cu) {
        ctx->pc = 0x1A4D60u;
        goto label_1a4d60;
    }
    ctx->pc = 0x1A4D58u;
    SET_GPR_U32(ctx, 31, 0x1A4D60u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4D60u;
label_1a4d60:
    // 0x1a4d60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4d64:
    // 0x1a4d64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4d68:
    // 0x1a4d68: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_1a4d6c:
    // 0x1a4d6c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a4d70:
    // 0x1a4d70: 0xf  sync
    ctx->pc = 0x1a4d70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a4d74:
    // 0x1a4d74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4d78:
    if (ctx->pc == 0x1A4D78u) {
        ctx->pc = 0x1A4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D74u;
        // 0x1a4d78: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D7Cu;
        goto label_1a4d7c;
    }
    ctx->pc = 0x1A4D74u;
    {
        const bool branch_taken_0x1a4d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D74u;
        // 0x1a4d78: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d74) {
            ctx->pc = 0x1A4D88u;
            goto label_1a4d88;
        }
    }
    ctx->pc = 0x1A4D7Cu;
label_1a4d7c:
    // 0x1a4d7c: 0xc06b52a  jal         func_1AD4A8
label_1a4d80:
    if (ctx->pc == 0x1A4D80u) {
        ctx->pc = 0x1A4D84u;
        goto label_1a4d84;
    }
    ctx->pc = 0x1A4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D84u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A4D84u;
label_1a4d84:
    // 0x1a4d84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4d88:
    // 0x1a4d88: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1a4d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_1a4d8c:
    // 0x1a4d8c: 0x0  nop
    ctx->pc = 0x1a4d8cu;
    // NOP
label_1a4d90:
    // 0x1a4d90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a4d94:
    // 0x1a4d94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1a4d98:
    // 0x1a4d98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a4d9c:
    if (ctx->pc == 0x1A4D9Cu) {
        ctx->pc = 0x1A4DA0u;
        goto label_1a4da0;
    }
    ctx->pc = 0x1A4D98u;
    {
        const bool branch_taken_0x1a4d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d98) {
            ctx->pc = 0x1A4DACu;
            goto label_1a4dac;
        }
    }
    ctx->pc = 0x1A4DA0u;
label_1a4da0:
    // 0x1a4da0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4da4:
    // 0x1a4da4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1a4da8:
    if (ctx->pc == 0x1A4DA8u) {
        ctx->pc = 0x1A4DACu;
        goto label_1a4dac;
    }
    ctx->pc = 0x1A4DA4u;
    {
        const bool branch_taken_0x1a4da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4da4) {
            ctx->pc = 0x1A4D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4d90;
        }
    }
    ctx->pc = 0x1A4DACu;
label_1a4dac:
    // 0x1a4dac: 0xc06b518  jal         func_1AD460
label_1a4db0:
    if (ctx->pc == 0x1A4DB0u) {
        ctx->pc = 0x1A4DB4u;
        goto label_1a4db4;
    }
    ctx->pc = 0x1A4DACu;
    SET_GPR_U32(ctx, 31, 0x1A4DB4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4DB4u;
label_1a4db4:
    // 0x1a4db4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4db8:
    // 0x1a4db8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a4dbc:
    // 0x1a4dbc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1a4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 3));
label_1a4dc0:
    // 0x1a4dc0: 0xf  sync
    ctx->pc = 0x1a4dc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a4dc4:
    // 0x1a4dc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a4dc8:
    if (ctx->pc == 0x1A4DC8u) {
        ctx->pc = 0x1A4DCCu;
        goto label_1a4dcc;
    }
    ctx->pc = 0x1A4DC4u;
    {
        const bool branch_taken_0x1a4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dc4) {
            ctx->pc = 0x1A4DD4u;
            goto label_1a4dd4;
        }
    }
    ctx->pc = 0x1A4DCCu;
label_1a4dcc:
    // 0x1a4dcc: 0xc06b52a  jal         func_1AD4A8
label_1a4dd0:
    if (ctx->pc == 0x1A4DD0u) {
        ctx->pc = 0x1A4DD4u;
        goto label_1a4dd4;
    }
    ctx->pc = 0x1A4DCCu;
    SET_GPR_U32(ctx, 31, 0x1A4DD4u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4dd8:
    // 0x1a4dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4ddc:
    // 0x1a4ddc: 0x3e00008  jr          $ra
label_1a4de0:
    if (ctx->pc == 0x1A4DE0u) {
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DE4u;
        goto label_1a4de4;
    }
    ctx->pc = 0x1A4DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DDCu;
        // 0x1a4de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4DE4u;
label_1a4de4:
    // 0x1a4de4: 0x0  nop
    ctx->pc = 0x1a4de4u;
    // NOP
label_1a4de8:
    // 0x1a4de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a4dec:
    // 0x1a4dec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a4df0:
    // 0x1a4df0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a4df4:
    // 0x1a4df4: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a4df8:
    // 0x1a4df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a4dfc:
    // 0x1a4dfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a4dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e00:
    // 0x1a4e00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a4e04:
    // 0x1a4e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e08:
    // 0x1a4e08: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1a4e0c:
    if (ctx->pc == 0x1A4E0Cu) {
        ctx->pc = 0x1A4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E08u;
        // 0x1a4e0c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E10u;
        goto label_1a4e10;
    }
    ctx->pc = 0x1A4E08u;
    {
        const bool branch_taken_0x1a4e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E08u;
        // 0x1a4e0c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e08) {
            ctx->pc = 0x1A4E48u;
            goto label_1a4e48;
        }
    }
    ctx->pc = 0x1A4E10u;
label_1a4e10:
    // 0x1a4e10: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a4e14:
    // 0x1a4e14: 0x8e025b50  lw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23376)));
label_1a4e18:
    // 0x1a4e18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a4e1c:
    if (ctx->pc == 0x1A4E1Cu) {
        ctx->pc = 0x1A4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E18u;
        // 0x1a4e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E20u;
        goto label_1a4e20;
    }
    ctx->pc = 0x1A4E18u;
    {
        const bool branch_taken_0x1a4e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E18u;
        // 0x1a4e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e18) {
            ctx->pc = 0x1A4E38u;
            goto label_1a4e38;
        }
    }
    ctx->pc = 0x1A4E20u;
label_1a4e20:
    // 0x1a4e20: 0xc0697b0  jal         func_1A5EC0
label_1a4e24:
    if (ctx->pc == 0x1A4E24u) {
        ctx->pc = 0x1A4E28u;
        goto label_1a4e28;
    }
    ctx->pc = 0x1A4E20u;
    SET_GPR_U32(ctx, 31, 0x1A4E28u);
    ctx->pc = 0x1A5EC0u;
    { ctx->pc = 0x1a5ec0; return; }
    ctx->pc = 0x1A4E28u;
label_1a4e28:
    // 0x1a4e28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4e2c:
    if (ctx->pc == 0x1A4E2Cu) {
        ctx->pc = 0x1A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E28u;
        // 0x1a4e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E30u;
        goto label_1a4e30;
    }
    ctx->pc = 0x1A4E28u;
    {
        const bool branch_taken_0x1a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E28u;
        // 0x1a4e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e28) {
            ctx->pc = 0x1A4E48u;
            goto label_1a4e48;
        }
    }
    ctx->pc = 0x1A4E30u;
label_1a4e30:
    // 0x1a4e30: 0xae025b50  sw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23376), GPR_U32(ctx, 2));
label_1a4e34:
    // 0x1a4e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e38:
    // 0x1a4e38: 0xc069728  jal         func_1A5CA0
label_1a4e3c:
    if (ctx->pc == 0x1A4E3Cu) {
        ctx->pc = 0x1A4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E38u;
        // 0x1a4e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E40u;
        goto label_1a4e40;
    }
    ctx->pc = 0x1A4E38u;
    SET_GPR_U32(ctx, 31, 0x1A4E40u);
    ctx->pc = 0x1A4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E38u;
    // 0x1a4e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5CA0u;
    { ctx->pc = 0x1a5ca0; return; }
    ctx->pc = 0x1A4E40u;
label_1a4e40:
    // 0x1a4e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a4e44:
    if (ctx->pc == 0x1A4E44u) {
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E40u;
        // 0x1a4e44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E48u;
        goto label_1a4e48;
    }
    ctx->pc = 0x1A4E40u;
    {
        const bool branch_taken_0x1a4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E40u;
        // 0x1a4e44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e40) {
            ctx->pc = 0x1A4E50u;
            goto label_1a4e50;
        }
    }
    ctx->pc = 0x1A4E48u;
label_1a4e48:
    // 0x1a4e48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4e4c:
    // 0x1a4e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4e50:
    // 0x1a4e50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4e54:
    // 0x1a4e54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4e58:
    // 0x1a4e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4e5c:
    // 0x1a4e5c: 0x3e00008  jr          $ra
label_1a4e60:
    if (ctx->pc == 0x1A4E60u) {
        ctx->pc = 0x1A4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E5Cu;
        // 0x1a4e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E64u;
        goto label_1a4e64;
    }
    ctx->pc = 0x1A4E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E5Cu;
        // 0x1a4e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E64u;
label_1a4e64:
    // 0x1a4e64: 0x0  nop
    ctx->pc = 0x1a4e64u;
    // NOP
label_1a4e68:
    // 0x1a4e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a4e6c:
    // 0x1a4e6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a4e70:
    // 0x1a4e70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a4e74:
    // 0x1a4e74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a4e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e78:
    // 0x1a4e78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a4e7c:
    // 0x1a4e7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e80:
    // 0x1a4e80: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
label_1a4e84:
    if (ctx->pc == 0x1A4E84u) {
        ctx->pc = 0x1A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E80u;
        // 0x1a4e84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E88u;
        goto label_1a4e88;
    }
    ctx->pc = 0x1A4E80u;
    {
        const bool branch_taken_0x1a4e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E80u;
        // 0x1a4e84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e80) {
            ctx->pc = 0x1A4EC0u;
            goto label_1a4ec0;
        }
    }
    ctx->pc = 0x1A4E88u;
label_1a4e88:
    // 0x1a4e88: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a4e8c:
    // 0x1a4e8c: 0x8e025b50  lw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23376)));
label_1a4e90:
    // 0x1a4e90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a4e94:
    if (ctx->pc == 0x1A4E94u) {
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E98u;
        goto label_1a4e98;
    }
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4EB0u;
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4E98u;
label_1a4e98:
    // 0x1a4e98: 0xc0697b0  jal         func_1A5EC0
label_1a4e9c:
    if (ctx->pc == 0x1A4E9Cu) {
        ctx->pc = 0x1A4EA0u;
        goto label_1a4ea0;
    }
    ctx->pc = 0x1A4E98u;
    SET_GPR_U32(ctx, 31, 0x1A4EA0u);
    ctx->pc = 0x1A5EC0u;
    { ctx->pc = 0x1a5ec0; return; }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a4ea4:
    if (ctx->pc == 0x1A4EA4u) {
        ctx->pc = 0x1A4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA0u;
        // 0x1a4ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EA8u;
        goto label_1a4ea8;
    }
    ctx->pc = 0x1A4EA0u;
    {
        const bool branch_taken_0x1a4ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA0u;
        // 0x1a4ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea0) {
            ctx->pc = 0x1A4EC0u;
            goto label_1a4ec0;
        }
    }
    ctx->pc = 0x1A4EA8u;
label_1a4ea8:
    // 0x1a4ea8: 0xae025b50  sw          $v0, 0x5B50($s0)
    ctx->pc = 0x1a4ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23376), GPR_U32(ctx, 2));
label_1a4eac:
    // 0x1a4eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4eb0:
    // 0x1a4eb0: 0xc06977c  jal         func_1A5DF0
label_1a4eb4:
    if (ctx->pc == 0x1A4EB4u) {
        ctx->pc = 0x1A4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB0u;
        // 0x1a4eb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EB8u;
        goto label_1a4eb8;
    }
    ctx->pc = 0x1A4EB0u;
    SET_GPR_U32(ctx, 31, 0x1A4EB8u);
    ctx->pc = 0x1A4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4EB0u;
    // 0x1a4eb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DF0u;
    { ctx->pc = 0x1a5df0; return; }
    ctx->pc = 0x1A4EB8u;
label_1a4eb8:
    // 0x1a4eb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a4ebc:
    if (ctx->pc == 0x1A4EBCu) {
        ctx->pc = 0x1A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB8u;
        // 0x1a4ebc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EC0u;
        goto label_1a4ec0;
    }
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EB8u;
        // 0x1a4ebc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EC8u;
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EC0u;
label_1a4ec0:
    // 0x1a4ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4ec4:
    // 0x1a4ec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4ec8:
    // 0x1a4ec8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4ecc:
    // 0x1a4ecc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4ed0:
    // 0x1a4ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4ed4:
    // 0x1a4ed4: 0x3e00008  jr          $ra
label_1a4ed8:
    if (ctx->pc == 0x1A4ED8u) {
        ctx->pc = 0x1A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED4u;
        // 0x1a4ed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EDCu;
        goto label_1a4edc;
    }
    ctx->pc = 0x1A4ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ED4u;
        // 0x1a4ed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4EDCu;
label_1a4edc:
    // 0x1a4edc: 0x0  nop
    ctx->pc = 0x1a4edcu;
    // NOP
label_1a4ee0:
    // 0x1a4ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4ee4:
    // 0x1a4ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4ee8:
    // 0x1a4ee8: 0xc08e1ce  jal         func_238738
label_1a4eec:
    if (ctx->pc == 0x1A4EECu) {
        ctx->pc = 0x1A4EF0u;
        goto label_1a4ef0;
    }
    ctx->pc = 0x1A4EE8u;
    SET_GPR_U32(ctx, 31, 0x1A4EF0u);
    ctx->pc = 0x238738u;
    { ctx->pc = 0x238738; return; }
    ctx->pc = 0x1A4EF0u;
label_1a4ef0:
    // 0x1a4ef0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a4ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a4ef4:
    // 0x1a4ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4ef8:
    // 0x1a4ef8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a4efc:
    // 0x1a4efc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a4f00:
    // 0x1a4f00: 0x3e00008  jr          $ra
label_1a4f04:
    if (ctx->pc == 0x1A4F04u) {
        ctx->pc = 0x1A4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F00u;
        // 0x1a4f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F08u;
        goto label_1a4f08;
    }
    ctx->pc = 0x1A4F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F00u;
        // 0x1a4f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F08u;
label_1a4f08:
    // 0x1a4f08: 0x3e00008  jr          $ra
label_1a4f0c:
    if (ctx->pc == 0x1A4F0Cu) {
        ctx->pc = 0x1A4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F08u;
        // 0x1a4f0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F10u;
        goto label_1a4f10;
    }
    ctx->pc = 0x1A4F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F08u;
        // 0x1a4f0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F10u;
label_1a4f10:
    // 0x1a4f10: 0x3e00008  jr          $ra
label_1a4f14:
    if (ctx->pc == 0x1A4F14u) {
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F18u;
        goto label_1a4f18;
    }
    ctx->pc = 0x1A4F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F18u;
label_1a4f18:
    // 0x1a4f18: 0x3e00008  jr          $ra
label_1a4f1c:
    if (ctx->pc == 0x1A4F1Cu) {
        ctx->pc = 0x1A4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F18u;
        // 0x1a4f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F20u;
        goto label_1a4f20;
    }
    ctx->pc = 0x1A4F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F18u;
        // 0x1a4f1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F20u;
label_1a4f20:
    // 0x1a4f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a4f24:
    // 0x1a4f24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a4f28:
    // 0x1a4f28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a4f2c:
    // 0x1a4f2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a4f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a4f30:
    // 0x1a4f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4f34:
    // 0x1a4f34: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
label_1a4f38:
    // 0x1a4f38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a4f3c:
    // 0x1a4f3c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1a4f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_1a4f40:
    // 0x1a4f40: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1a4f44:
    if (ctx->pc == 0x1A4F44u) {
        ctx->pc = 0x1A4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F40u;
        // 0x1a4f44: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F48u;
        goto label_1a4f48;
    }
    ctx->pc = 0x1A4F40u;
    {
        const bool branch_taken_0x1a4f40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F40u;
        // 0x1a4f44: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f40) {
            ctx->pc = 0x1A4F6Cu;
            goto label_1a4f6c;
        }
    }
    ctx->pc = 0x1A4F48u;
label_1a4f48:
    // 0x1a4f48: 0x42000039  di
    ctx->pc = 0x1a4f48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_1a4f4c:
    // 0x1a4f4c: 0x40f  sync.p
    ctx->pc = 0x1a4f4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a4f50:
    // 0x1a4f50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_1a4f54:
    // 0x1a4f54: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1a4f58:
    // 0x1a4f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a4f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a4f5c:
    // 0x1a4f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a4f60:
    if (ctx->pc == 0x1A4F60u) {
        ctx->pc = 0x1A4F64u;
        goto label_1a4f64;
    }
    ctx->pc = 0x1A4F5Cu;
    {
        const bool branch_taken_0x1a4f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f5c) {
            ctx->pc = 0x1A4F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4f48;
        }
    }
    ctx->pc = 0x1A4F64u;
label_1a4f64:
    // 0x1a4f64: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a4f68:
    if (ctx->pc == 0x1A4F68u) {
        ctx->pc = 0x1A4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F64u;
        // 0x1a4f68: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F6Cu;
        goto label_1a4f6c;
    }
    ctx->pc = 0x1A4F64u;
    {
        const bool branch_taken_0x1a4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F64u;
        // 0x1a4f68: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f64) {
            ctx->pc = 0x1A4F70u;
            goto label_1a4f70;
        }
    }
    ctx->pc = 0x1A4F6Cu;
label_1a4f6c:
    // 0x1a4f6c: 0x8e425b54  lw          $v0, 0x5B54($s2)
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
label_1a4f70:
    // 0x1a4f70: 0xc069200  jal         func_1A4800
label_1a4f74:
    if (ctx->pc == 0x1A4F74u) {
        ctx->pc = 0x1A4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F70u;
        // 0x1a4f74: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F78u;
        goto label_1a4f78;
    }
    ctx->pc = 0x1A4F70u;
    SET_GPR_U32(ctx, 31, 0x1A4F78u);
    ctx->pc = 0x1A4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F70u;
    // 0x1a4f74: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4800u;
    { ctx->pc = 0x1a4800; return; }
    ctx->pc = 0x1A4F78u;
label_1a4f78:
    // 0x1a4f78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1a4f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1a4f7c:
    // 0x1a4f7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a4f80:
    if (ctx->pc == 0x1A4F80u) {
        ctx->pc = 0x1A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F7Cu;
        // 0x1a4f80: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F84u;
        goto label_1a4f84;
    }
    ctx->pc = 0x1A4F7Cu;
    {
        const bool branch_taken_0x1a4f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F7Cu;
        // 0x1a4f80: 0x8e425b54  lw          $v0, 0x5B54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f7c) {
            ctx->pc = 0x1A4FA8u;
            goto label_1a4fa8;
        }
    }
    ctx->pc = 0x1A4F84u;
label_1a4f84:
    // 0x1a4f84: 0xc08e1ce  jal         func_238738
label_1a4f88:
    if (ctx->pc == 0x1A4F88u) {
        ctx->pc = 0x1A4F8Cu;
        goto label_1a4f8c;
    }
    ctx->pc = 0x1A4F84u;
    SET_GPR_U32(ctx, 31, 0x1A4F8Cu);
    ctx->pc = 0x238738u;
    { ctx->pc = 0x238738; return; }
    ctx->pc = 0x1A4F8Cu;
label_1a4f8c:
    // 0x1a4f8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a4f90:
    // 0x1a4f90: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1a4f94:
    if (ctx->pc == 0x1A4F94u) {
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F98u;
        goto label_1a4f98;
    }
    ctx->pc = 0x1A4F90u;
    {
        const bool branch_taken_0x1a4f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f90) {
            ctx->pc = 0x1A4F9Cu;
            goto label_1a4f9c;
        }
    }
    ctx->pc = 0x1A4F98u;
label_1a4f98:
    // 0x1a4f98: 0x42000038  ei
    ctx->pc = 0x1a4f98u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a4f9c:
    // 0x1a4f9c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a4fa0:
    // 0x1a4fa0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a4fa4:
    if (ctx->pc == 0x1A4FA4u) {
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FA8u;
        goto label_1a4fa8;
    }
    ctx->pc = 0x1A4FA0u;
    {
        const bool branch_taken_0x1a4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa0) {
            ctx->pc = 0x1A4FB4u;
            goto label_1a4fb4;
        }
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1a4fac:
    if (ctx->pc == 0x1A4FACu) {
        ctx->pc = 0x1A4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA8u;
        // 0x1a4fac: 0xae505b54  sw          $s0, 0x5B54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23380), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FB0u;
        goto label_1a4fb0;
    }
    ctx->pc = 0x1A4FA8u;
    {
        const bool branch_taken_0x1a4fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA8u;
        // 0x1a4fac: 0xae505b54  sw          $s0, 0x5B54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 23380), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa8) {
            ctx->pc = 0x1A4FB4u;
            goto label_1a4fb4;
        }
    }
    ctx->pc = 0x1A4FB0u;
label_1a4fb0:
    // 0x1a4fb0: 0x42000038  ei
    ctx->pc = 0x1a4fb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a4fb4:
    // 0x1a4fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4fb8:
    // 0x1a4fb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4fbc:
    // 0x1a4fbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a4fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4fc0:
    // 0x1a4fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4fc4:
    // 0x1a4fc4: 0x3e00008  jr          $ra
label_1a4fc8:
    if (ctx->pc == 0x1A4FC8u) {
        ctx->pc = 0x1A4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FC4u;
        // 0x1a4fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FCCu;
        goto label_1a4fcc;
    }
    ctx->pc = 0x1A4FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FC4u;
        // 0x1a4fc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FCCu;
label_1a4fcc:
    // 0x1a4fcc: 0x0  nop
    ctx->pc = 0x1a4fccu;
    // NOP
label_1a4fd0:
    // 0x1a4fd0: 0x3e00008  jr          $ra
label_1a4fd4:
    if (ctx->pc == 0x1A4FD4u) {
        ctx->pc = 0x1A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FD0u;
        // 0x1a4fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FD8u;
        goto label_1a4fd8;
    }
    ctx->pc = 0x1A4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FD0u;
        // 0x1a4fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FD8u;
label_1a4fd8:
    // 0x1a4fd8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1a4fdc:
    // 0x1a4fdc: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x1a4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
label_1a4fe0:
    // 0x1a4fe0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a4fe4:
    // 0x1a4fe4: 0x3e00008  jr          $ra
label_1a4fe8:
    if (ctx->pc == 0x1A4FE8u) {
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FECu;
        goto label_1a4fec;
    }
    ctx->pc = 0x1A4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FECu;
label_1a4fec:
    // 0x1a4fec: 0x0  nop
    ctx->pc = 0x1a4fecu;
    // NOP
label_1a4ff0:
    // 0x1a4ff0: 0x3e00008  jr          $ra
label_1a4ff4:
    if (ctx->pc == 0x1A4FF4u) {
        ctx->pc = 0x1A4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FF0u;
        // 0x1a4ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FF8u;
        goto label_1a4ff8;
    }
    ctx->pc = 0x1A4FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FF0u;
        // 0x1a4ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FF8u;
label_1a4ff8:
    // 0x1a4ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4ffc:
    // 0x1a4ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5000:
    // 0x1a5000: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1a5004:
    if (ctx->pc == 0x1A5004u) {
        ctx->pc = 0x1A5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5000u;
        // 0x1a5004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5008u;
        goto label_1a5008;
    }
    ctx->pc = 0x1A5000u;
    {
        const bool branch_taken_0x1a5000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5000u;
        // 0x1a5004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5000) {
            ctx->pc = 0x1A5010u;
            goto label_1a5010;
        }
    }
    ctx->pc = 0x1A5008u;
label_1a5008:
    // 0x1a5008: 0xc06b6b4  jal         func_1ADAD0
label_1a500c:
    if (ctx->pc == 0x1A500Cu) {
        ctx->pc = 0x1A500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5008u;
        // 0x1a500c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5010u;
        goto label_1a5010;
    }
    ctx->pc = 0x1A5008u;
    SET_GPR_U32(ctx, 31, 0x1A5010u);
    ctx->pc = 0x1A500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5008u;
    // 0x1a500c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1A5010u;
label_1a5010:
    // 0x1a5010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5014:
    // 0x1a5014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5018:
    // 0x1a5018: 0x3e00008  jr          $ra
label_1a501c:
    if (ctx->pc == 0x1A501Cu) {
        ctx->pc = 0x1A501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5018u;
        // 0x1a501c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5020u;
        goto label_1a5020;
    }
    ctx->pc = 0x1A5018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5018u;
        // 0x1a501c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5020u;
label_1a5020:
    // 0x1a5020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a5024:
    // 0x1a5024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a5028:
    // 0x1a5028: 0xc08e1ce  jal         func_238738
label_1a502c:
    if (ctx->pc == 0x1A502Cu) {
        ctx->pc = 0x1A5030u;
        goto label_1a5030;
    }
    ctx->pc = 0x1A5028u;
    SET_GPR_U32(ctx, 31, 0x1A5030u);
    ctx->pc = 0x238738u;
    { ctx->pc = 0x238738; return; }
    ctx->pc = 0x1A5030u;
label_1a5030:
    // 0x1a5030: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a5034:
    // 0x1a5034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5038:
    // 0x1a5038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a503c:
    // 0x1a503c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5040:
    // 0x1a5040: 0x3e00008  jr          $ra
label_1a5044:
    if (ctx->pc == 0x1A5044u) {
        ctx->pc = 0x1A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5040u;
        // 0x1a5044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5048u;
        goto label_1a5048;
    }
    ctx->pc = 0x1A5040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5040u;
        // 0x1a5044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5048u;
label_1a5048:
    // 0x1a5048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a504c:
    // 0x1a504c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a5050:
    // 0x1a5050: 0xc08e1ce  jal         func_238738
label_1a5054:
    if (ctx->pc == 0x1A5054u) {
        ctx->pc = 0x1A5058u;
        goto label_1a5058;
    }
    ctx->pc = 0x1A5050u;
    SET_GPR_U32(ctx, 31, 0x1A5058u);
    ctx->pc = 0x238738u;
    { ctx->pc = 0x238738; return; }
    ctx->pc = 0x1A5058u;
label_1a5058:
    // 0x1a5058: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a505c:
    // 0x1a505c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a505cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5060:
    // 0x1a5060: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a5064:
    // 0x1a5064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5068:
    // 0x1a5068: 0x3e00008  jr          $ra
label_1a506c:
    if (ctx->pc == 0x1A506Cu) {
        ctx->pc = 0x1A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5068u;
        // 0x1a506c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5070u;
        goto label_1a5070;
    }
    ctx->pc = 0x1A5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5068u;
        // 0x1a506c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5070u;
label_1a5070:
    // 0x1a5070: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1a5074:
    // 0x1a5074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5078:
    // 0x1a5078: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x1a5078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
label_1a507c:
    // 0x1a507c: 0x0  nop
    ctx->pc = 0x1a507cu;
    // NOP
label_1a5080:
    // 0x1a5080: 0xf  sync
    ctx->pc = 0x1a5080u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5084:
    // 0x1a5084: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1a5084u;
    // CACHE instruction (ignored)
label_1a5088:
    // 0x1a5088: 0xf  sync
    ctx->pc = 0x1a5088u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a508c:
    // 0x1a508c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1a508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
label_1a5090:
    // 0x1a5090: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1a5094:
    // 0x1a5094: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a5098:
    // 0x1a5098: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1a5098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a509c:
    // 0x1a509c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a509cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a50a0:
    // 0x1a50a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a50a4:
    if (ctx->pc == 0x1A50A4u) {
        ctx->pc = 0x1A50A8u;
        goto label_1a50a8;
    }
    ctx->pc = 0x1A50A0u;
    {
        const bool branch_taken_0x1a50a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50a0) {
            ctx->pc = 0x1A50BCu;
            goto label_1a50bc;
        }
    }
    ctx->pc = 0x1A50A8u;
label_1a50a8:
    // 0x1a50a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a50ac:
    if (ctx->pc == 0x1A50ACu) {
        ctx->pc = 0x1A50B0u;
        goto label_1a50b0;
    }
    ctx->pc = 0x1A50A8u;
    {
        const bool branch_taken_0x1a50a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50a8) {
            ctx->pc = 0x1A50BCu;
            goto label_1a50bc;
        }
    }
    ctx->pc = 0x1A50B0u;
label_1a50b0:
    // 0x1a50b0: 0xf  sync
    ctx->pc = 0x1a50b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50b4:
    // 0x1a50b4: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x1a50b4u;
    // CACHE instruction (ignored)
label_1a50b8:
    // 0x1a50b8: 0xf  sync
    ctx->pc = 0x1a50b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50bc:
    // 0x1a50bc: 0xf  sync
    ctx->pc = 0x1a50bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50c0:
    // 0x1a50c0: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1a50c0u;
    // CACHE instruction (ignored)
label_1a50c4:
    // 0x1a50c4: 0xf  sync
    ctx->pc = 0x1a50c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50c8:
    // 0x1a50c8: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1a50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
label_1a50cc:
    // 0x1a50cc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a50ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1a50d0:
    // 0x1a50d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a50d4:
    // 0x1a50d4: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1a50d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a50d8:
    // 0x1a50d8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a50d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a50dc:
    // 0x1a50dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a50e0:
    if (ctx->pc == 0x1A50E0u) {
        ctx->pc = 0x1A50E4u;
        goto label_1a50e4;
    }
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A50F8u;
            goto label_1a50f8;
        }
    }
    ctx->pc = 0x1A50E4u;
label_1a50e4:
    // 0x1a50e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a50e8:
    if (ctx->pc == 0x1A50E8u) {
        ctx->pc = 0x1A50ECu;
        goto label_1a50ec;
    }
    ctx->pc = 0x1A50E4u;
    {
        const bool branch_taken_0x1a50e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a50e4) {
            ctx->pc = 0x1A50F8u;
            goto label_1a50f8;
        }
    }
    ctx->pc = 0x1A50ECu;
label_1a50ec:
    // 0x1a50ec: 0xf  sync
    ctx->pc = 0x1a50ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50f0:
    // 0x1a50f0: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x1a50f0u;
    // CACHE instruction (ignored)
label_1a50f4:
    // 0x1a50f4: 0xf  sync
    ctx->pc = 0x1a50f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50f8:
    // 0x1a50f8: 0xf  sync
    ctx->pc = 0x1a50f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a50fc:
    // 0x1a50fc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1a5100:
    // 0x1a5100: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1a5100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1a5104:
    // 0x1a5104: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1a5108:
    if (ctx->pc == 0x1A5108u) {
        ctx->pc = 0x1A510Cu;
        goto label_1a510c;
    }
    ctx->pc = 0x1A5104u;
    {
        const bool branch_taken_0x1a5104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5104) {
            ctx->pc = 0x1A5080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5080;
        }
    }
    ctx->pc = 0x1A510Cu;
label_1a510c:
    // 0x1a510c: 0x3e00008  jr          $ra
label_1a5110:
    if (ctx->pc == 0x1A5110u) {
        ctx->pc = 0x1A5114u;
        goto label_1a5114;
    }
    ctx->pc = 0x1A510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A510Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5114u;
label_1a5114:
    // 0x1a5114: 0x0  nop
    ctx->pc = 0x1a5114u;
    // NOP
label_1a5118:
    // 0x1a5118: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a511c:
    // 0x1a511c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5120:
    // 0x1a5120: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5124:
    // 0x1a5124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5128:
    // 0x1a5128: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a512c:
    // 0x1a512c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a512cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5130:
    // 0x1a5130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5134:
    // 0x1a5134: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5134u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5138:
    // 0x1a5138: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a513c:
    // 0x1a513c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a513cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5140:
    // 0x1a5140: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a5144:
    if (ctx->pc == 0x1A5144u) {
        ctx->pc = 0x1A5148u;
        goto label_1a5148;
    }
    ctx->pc = 0x1A5140u;
    {
        const bool branch_taken_0x1a5140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5140) {
            ctx->pc = 0x1A5150u;
            goto label_1a5150;
        }
    }
    ctx->pc = 0x1A5148u;
label_1a5148:
    // 0x1a5148: 0xc06b518  jal         func_1AD460
label_1a514c:
    if (ctx->pc == 0x1A514Cu) {
        ctx->pc = 0x1A5150u;
        goto label_1a5150;
    }
    ctx->pc = 0x1A5148u;
    SET_GPR_U32(ctx, 31, 0x1A5150u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5150u;
label_1a5150:
    // 0x1a5150: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1a5154:
    // 0x1a5154: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_1a5158:
    // 0x1a5158: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1a515c:
    // 0x1a515c: 0xc06941c  jal         func_1A5070
label_1a5160:
    if (ctx->pc == 0x1A5160u) {
        ctx->pc = 0x1A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A515Cu;
        // 0x1a5160: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5164u;
        goto label_1a5164;
    }
    ctx->pc = 0x1A515Cu;
    SET_GPR_U32(ctx, 31, 0x1A5164u);
    ctx->pc = 0x1A5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A515Cu;
    // 0x1a5160: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5070u;
    goto label_1a5070;
    ctx->pc = 0x1A5164u;
label_1a5164:
    // 0x1a5164: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a5168:
    if (ctx->pc == 0x1A5168u) {
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A516Cu;
        goto label_1a516c;
    }
    ctx->pc = 0x1A5164u;
    {
        const bool branch_taken_0x1a5164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5164u;
        // 0x1a5168: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5164) {
            ctx->pc = 0x1A5180u;
            goto label_1a5180;
        }
    }
    ctx->pc = 0x1A516Cu;
label_1a516c:
    // 0x1a516c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a516cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5170:
    // 0x1a5170: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5174:
    // 0x1a5174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5178:
    // 0x1a5178: 0x806b52a  j           func_1AD4A8
label_1a517c:
    if (ctx->pc == 0x1A517Cu) {
        ctx->pc = 0x1A517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5178u;
        // 0x1a517c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5180u;
        goto label_1a5180;
    }
    ctx->pc = 0x1A5178u;
    ctx->pc = 0x1A517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5178u;
    // 0x1a517c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5180u;
label_1a5180:
    // 0x1a5180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5184:
    // 0x1a5184: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5188:
    // 0x1a5188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a518c:
    // 0x1a518c: 0x3e00008  jr          $ra
label_1a5190:
    if (ctx->pc == 0x1A5190u) {
        ctx->pc = 0x1A5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A518Cu;
        // 0x1a5190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5194u;
        goto label_1a5194;
    }
    ctx->pc = 0x1A518Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A518Cu;
        // 0x1a5190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A518Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5194u;
label_1a5194:
    // 0x1a5194: 0x0  nop
    ctx->pc = 0x1a5194u;
    // NOP
label_1a5198:
    // 0x1a5198: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a519c:
    // 0x1a519c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1a519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_1a51a0:
    // 0x1a51a0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a51a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a51a4:
    // 0x1a51a4: 0x806941c  j           func_1A5070
label_1a51a8:
    if (ctx->pc == 0x1A51A8u) {
        ctx->pc = 0x1A51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51A4u;
        // 0x1a51a8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51ACu;
        goto label_1a51ac;
    }
    ctx->pc = 0x1A51A4u;
    ctx->pc = 0x1A51A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51A4u;
    // 0x1a51a8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5070u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5070;
    ctx->pc = 0x1A51ACu;
label_1a51ac:
    // 0x1a51ac: 0x0  nop
    ctx->pc = 0x1a51acu;
    // NOP
label_1a51b0:
    // 0x1a51b0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1a51b4:
    // 0x1a51b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a51b8:
    // 0x1a51b8: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x1a51b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
label_1a51bc:
    // 0x1a51bc: 0x0  nop
    ctx->pc = 0x1a51bcu;
    // NOP
label_1a51c0:
    // 0x1a51c0: 0xf  sync
    ctx->pc = 0x1a51c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a51c4:
    // 0x1a51c4: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1a51c4u;
    // CACHE instruction (ignored)
label_1a51c8:
    // 0x1a51c8: 0xf  sync
    ctx->pc = 0x1a51c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a51cc:
    // 0x1a51cc: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
label_1a51d0:
    // 0x1a51d0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1a51d4:
    // 0x1a51d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a51d8:
    // 0x1a51d8: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1a51d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a51dc:
    // 0x1a51dc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a51dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a51e0:
    // 0x1a51e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a51e4:
    if (ctx->pc == 0x1A51E4u) {
        ctx->pc = 0x1A51E8u;
        goto label_1a51e8;
    }
    ctx->pc = 0x1A51E0u;
    {
        const bool branch_taken_0x1a51e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51e0) {
            ctx->pc = 0x1A51FCu;
            goto label_1a51fc;
        }
    }
    ctx->pc = 0x1A51E8u;
label_1a51e8:
    // 0x1a51e8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a51ec:
    if (ctx->pc == 0x1A51ECu) {
        ctx->pc = 0x1A51F0u;
        goto label_1a51f0;
    }
    ctx->pc = 0x1A51E8u;
    {
        const bool branch_taken_0x1a51e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51e8) {
            ctx->pc = 0x1A51FCu;
            goto label_1a51fc;
        }
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0xf  sync
    ctx->pc = 0x1a51f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a51f4:
    // 0x1a51f4: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x1a51f4u;
    // CACHE instruction (ignored)
label_1a51f8:
    // 0x1a51f8: 0xf  sync
    ctx->pc = 0x1a51f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a51fc:
    // 0x1a51fc: 0xf  sync
    ctx->pc = 0x1a51fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5200:
    // 0x1a5200: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1a5200u;
    // CACHE instruction (ignored)
label_1a5204:
    // 0x1a5204: 0xf  sync
    ctx->pc = 0x1a5204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5208:
    // 0x1a5208: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
label_1a520c:
    // 0x1a520c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1a5210:
    // 0x1a5210: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a5214:
    // 0x1a5214: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1a5214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a5218:
    // 0x1a5218: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1a5218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a521c:
    // 0x1a521c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a5220:
    if (ctx->pc == 0x1A5220u) {
        ctx->pc = 0x1A5224u;
        goto label_1a5224;
    }
    ctx->pc = 0x1A521Cu;
    {
        const bool branch_taken_0x1a521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a521c) {
            ctx->pc = 0x1A5238u;
            goto label_1a5238;
        }
    }
    ctx->pc = 0x1A5224u;
label_1a5224:
    // 0x1a5224: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a5228:
    if (ctx->pc == 0x1A5228u) {
        ctx->pc = 0x1A522Cu;
        goto label_1a522c;
    }
    ctx->pc = 0x1A5224u;
    {
        const bool branch_taken_0x1a5224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5224) {
            ctx->pc = 0x1A5238u;
            goto label_1a5238;
        }
    }
    ctx->pc = 0x1A522Cu;
label_1a522c:
    // 0x1a522c: 0xf  sync
    ctx->pc = 0x1a522cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5230:
    // 0x1a5230: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x1a5230u;
    // CACHE instruction (ignored)
label_1a5234:
    // 0x1a5234: 0xf  sync
    ctx->pc = 0x1a5234u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5238:
    // 0x1a5238: 0xf  sync
    ctx->pc = 0x1a5238u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a523c:
    // 0x1a523c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1a523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1a5240:
    // 0x1a5240: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1a5240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1a5244:
    // 0x1a5244: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_1a5248:
    if (ctx->pc == 0x1A5248u) {
        ctx->pc = 0x1A524Cu;
        goto label_1a524c;
    }
    ctx->pc = 0x1A5244u;
    {
        const bool branch_taken_0x1a5244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5244) {
            ctx->pc = 0x1A51C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a51c0;
        }
    }
    ctx->pc = 0x1A524Cu;
label_1a524c:
    // 0x1a524c: 0x3e00008  jr          $ra
label_1a5250:
    if (ctx->pc == 0x1A5250u) {
        ctx->pc = 0x1A5254u;
        goto label_1a5254;
    }
    ctx->pc = 0x1A524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5254u;
label_1a5254:
    // 0x1a5254: 0x0  nop
    ctx->pc = 0x1a5254u;
    // NOP
label_1a5258:
    // 0x1a5258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a525c:
    // 0x1a525c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5260:
    // 0x1a5260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5264:
    // 0x1a5264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5268:
    // 0x1a5268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a526c:
    // 0x1a526c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a526cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5270:
    // 0x1a5270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5274:
    // 0x1a5274: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
label_1a5278:
    // 0x1a5278: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1a527c:
    // 0x1a527c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a527cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a5280:
    // 0x1a5280: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1a5284:
    if (ctx->pc == 0x1A5284u) {
        ctx->pc = 0x1A5288u;
        goto label_1a5288;
    }
    ctx->pc = 0x1A5280u;
    {
        const bool branch_taken_0x1a5280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5280) {
            ctx->pc = 0x1A5290u;
            goto label_1a5290;
        }
    }
    ctx->pc = 0x1A5288u;
label_1a5288:
    // 0x1a5288: 0xc06b518  jal         func_1AD460
label_1a528c:
    if (ctx->pc == 0x1A528Cu) {
        ctx->pc = 0x1A5290u;
        goto label_1a5290;
    }
    ctx->pc = 0x1A5288u;
    SET_GPR_U32(ctx, 31, 0x1A5290u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5290u;
label_1a5290:
    // 0x1a5290: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1a5294:
    // 0x1a5294: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_1a5298:
    // 0x1a5298: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1a529c:
    // 0x1a529c: 0xc06946c  jal         func_1A51B0
label_1a52a0:
    if (ctx->pc == 0x1A52A0u) {
        ctx->pc = 0x1A52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A529Cu;
        // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52A4u;
        goto label_1a52a4;
    }
    ctx->pc = 0x1A529Cu;
    SET_GPR_U32(ctx, 31, 0x1A52A4u);
    ctx->pc = 0x1A52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A529Cu;
    // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    goto label_1a51b0;
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a52a8:
    if (ctx->pc == 0x1A52A8u) {
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52ACu;
        goto label_1a52ac;
    }
    ctx->pc = 0x1A52A4u;
    {
        const bool branch_taken_0x1a52a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52a4) {
            ctx->pc = 0x1A52C0u;
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A52ACu;
label_1a52ac:
    // 0x1a52ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52b0:
    // 0x1a52b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a52b4:
    // 0x1a52b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52b8:
    // 0x1a52b8: 0x806b52a  j           func_1AD4A8
label_1a52bc:
    if (ctx->pc == 0x1A52BCu) {
        ctx->pc = 0x1A52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B8u;
        // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52C0u;
        goto label_1a52c0;
    }
    ctx->pc = 0x1A52B8u;
    ctx->pc = 0x1A52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52B8u;
    // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A52C0u;
label_1a52c0:
    // 0x1a52c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52c4:
    // 0x1a52c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a52c8:
    // 0x1a52c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52cc:
    // 0x1a52cc: 0x3e00008  jr          $ra
label_1a52d0:
    if (ctx->pc == 0x1A52D0u) {
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D4u;
        goto label_1a52d4;
    }
    ctx->pc = 0x1A52CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52CCu;
        // 0x1a52d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A52CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A52D4u;
label_1a52d4:
    // 0x1a52d4: 0x0  nop
    ctx->pc = 0x1a52d4u;
    // NOP
label_1a52d8:
    // 0x1a52d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a52dc:
    // 0x1a52dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1a52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_1a52e0:
    // 0x1a52e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a52e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a52e4:
    // 0x1a52e4: 0x806946c  j           func_1A51B0
    ctx->pc = 0x1a52e8u;
    return;
}
