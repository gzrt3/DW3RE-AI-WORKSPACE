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


void FUN_0014eba0_part11(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1539c0u: goto label_1539c0;
        case 0x1539c4u: goto label_1539c4;
        case 0x1539c8u: goto label_1539c8;
        case 0x1539ccu: goto label_1539cc;
        case 0x1539d0u: goto label_1539d0;
        case 0x1539d4u: goto label_1539d4;
        case 0x1539d8u: goto label_1539d8;
        case 0x1539dcu: goto label_1539dc;
        case 0x1539e0u: goto label_1539e0;
        case 0x1539e4u: goto label_1539e4;
        case 0x1539e8u: goto label_1539e8;
        case 0x1539ecu: goto label_1539ec;
        case 0x1539f0u: goto label_1539f0;
        case 0x1539f4u: goto label_1539f4;
        case 0x1539f8u: goto label_1539f8;
        case 0x1539fcu: goto label_1539fc;
        case 0x153a00u: goto label_153a00;
        case 0x153a04u: goto label_153a04;
        case 0x153a08u: goto label_153a08;
        case 0x153a0cu: goto label_153a0c;
        case 0x153a10u: goto label_153a10;
        case 0x153a14u: goto label_153a14;
        case 0x153a18u: goto label_153a18;
        case 0x153a1cu: goto label_153a1c;
        case 0x153a20u: goto label_153a20;
        case 0x153a24u: goto label_153a24;
        case 0x153a28u: goto label_153a28;
        case 0x153a2cu: goto label_153a2c;
        case 0x153a30u: goto label_153a30;
        case 0x153a34u: goto label_153a34;
        case 0x153a38u: goto label_153a38;
        case 0x153a3cu: goto label_153a3c;
        case 0x153a40u: goto label_153a40;
        case 0x153a44u: goto label_153a44;
        case 0x153a48u: goto label_153a48;
        case 0x153a4cu: goto label_153a4c;
        case 0x153a50u: goto label_153a50;
        case 0x153a54u: goto label_153a54;
        case 0x153a58u: goto label_153a58;
        case 0x153a5cu: goto label_153a5c;
        case 0x153a60u: goto label_153a60;
        case 0x153a64u: goto label_153a64;
        case 0x153a68u: goto label_153a68;
        case 0x153a6cu: goto label_153a6c;
        case 0x153a70u: goto label_153a70;
        case 0x153a74u: goto label_153a74;
        case 0x153a78u: goto label_153a78;
        case 0x153a7cu: goto label_153a7c;
        case 0x153a80u: goto label_153a80;
        case 0x153a84u: goto label_153a84;
        case 0x153a88u: goto label_153a88;
        case 0x153a8cu: goto label_153a8c;
        case 0x153a90u: goto label_153a90;
        case 0x153a94u: goto label_153a94;
        case 0x153a98u: goto label_153a98;
        case 0x153a9cu: goto label_153a9c;
        case 0x153aa0u: goto label_153aa0;
        case 0x153aa4u: goto label_153aa4;
        case 0x153aa8u: goto label_153aa8;
        case 0x153aacu: goto label_153aac;
        case 0x153ab0u: goto label_153ab0;
        case 0x153ab4u: goto label_153ab4;
        case 0x153ab8u: goto label_153ab8;
        case 0x153abcu: goto label_153abc;
        case 0x153ac0u: goto label_153ac0;
        case 0x153ac4u: goto label_153ac4;
        case 0x153ac8u: goto label_153ac8;
        case 0x153accu: goto label_153acc;
        case 0x153ad0u: goto label_153ad0;
        case 0x153ad4u: goto label_153ad4;
        case 0x153ad8u: goto label_153ad8;
        case 0x153adcu: goto label_153adc;
        case 0x153ae0u: goto label_153ae0;
        case 0x153ae4u: goto label_153ae4;
        case 0x153ae8u: goto label_153ae8;
        case 0x153aecu: goto label_153aec;
        case 0x153af0u: goto label_153af0;
        case 0x153af4u: goto label_153af4;
        case 0x153af8u: goto label_153af8;
        case 0x153afcu: goto label_153afc;
        case 0x153b00u: goto label_153b00;
        case 0x153b04u: goto label_153b04;
        case 0x153b08u: goto label_153b08;
        case 0x153b0cu: goto label_153b0c;
        case 0x153b10u: goto label_153b10;
        case 0x153b14u: goto label_153b14;
        case 0x153b18u: goto label_153b18;
        case 0x153b1cu: goto label_153b1c;
        case 0x153b20u: goto label_153b20;
        case 0x153b24u: goto label_153b24;
        case 0x153b28u: goto label_153b28;
        case 0x153b2cu: goto label_153b2c;
        case 0x153b30u: goto label_153b30;
        case 0x153b34u: goto label_153b34;
        case 0x153b38u: goto label_153b38;
        case 0x153b3cu: goto label_153b3c;
        case 0x153b40u: goto label_153b40;
        case 0x153b44u: goto label_153b44;
        case 0x153b48u: goto label_153b48;
        case 0x153b4cu: goto label_153b4c;
        case 0x153b50u: goto label_153b50;
        case 0x153b54u: goto label_153b54;
        case 0x153b58u: goto label_153b58;
        case 0x153b5cu: goto label_153b5c;
        case 0x153b60u: goto label_153b60;
        case 0x153b64u: goto label_153b64;
        case 0x153b68u: goto label_153b68;
        case 0x153b6cu: goto label_153b6c;
        case 0x153b70u: goto label_153b70;
        case 0x153b74u: goto label_153b74;
        case 0x153b78u: goto label_153b78;
        case 0x153b7cu: goto label_153b7c;
        case 0x153b80u: goto label_153b80;
        case 0x153b84u: goto label_153b84;
        case 0x153b88u: goto label_153b88;
        case 0x153b8cu: goto label_153b8c;
        case 0x153b90u: goto label_153b90;
        case 0x153b94u: goto label_153b94;
        case 0x153b98u: goto label_153b98;
        case 0x153b9cu: goto label_153b9c;
        case 0x153ba0u: goto label_153ba0;
        case 0x153ba4u: goto label_153ba4;
        case 0x153ba8u: goto label_153ba8;
        case 0x153bacu: goto label_153bac;
        case 0x153bb0u: goto label_153bb0;
        case 0x153bb4u: goto label_153bb4;
        case 0x153bb8u: goto label_153bb8;
        case 0x153bbcu: goto label_153bbc;
        case 0x153bc0u: goto label_153bc0;
        case 0x153bc4u: goto label_153bc4;
        case 0x153bc8u: goto label_153bc8;
        case 0x153bccu: goto label_153bcc;
        case 0x153bd0u: goto label_153bd0;
        case 0x153bd4u: goto label_153bd4;
        case 0x153bd8u: goto label_153bd8;
        case 0x153bdcu: goto label_153bdc;
        case 0x153be0u: goto label_153be0;
        case 0x153be4u: goto label_153be4;
        case 0x153be8u: goto label_153be8;
        case 0x153becu: goto label_153bec;
        case 0x153bf0u: goto label_153bf0;
        case 0x153bf4u: goto label_153bf4;
        case 0x153bf8u: goto label_153bf8;
        case 0x153bfcu: goto label_153bfc;
        case 0x153c00u: goto label_153c00;
        case 0x153c04u: goto label_153c04;
        case 0x153c08u: goto label_153c08;
        case 0x153c0cu: goto label_153c0c;
        case 0x153c10u: goto label_153c10;
        case 0x153c14u: goto label_153c14;
        case 0x153c18u: goto label_153c18;
        case 0x153c1cu: goto label_153c1c;
        case 0x153c20u: goto label_153c20;
        case 0x153c24u: goto label_153c24;
        case 0x153c28u: goto label_153c28;
        case 0x153c2cu: goto label_153c2c;
        case 0x153c30u: goto label_153c30;
        case 0x153c34u: goto label_153c34;
        case 0x153c38u: goto label_153c38;
        case 0x153c3cu: goto label_153c3c;
        case 0x153c40u: goto label_153c40;
        case 0x153c44u: goto label_153c44;
        case 0x153c48u: goto label_153c48;
        case 0x153c4cu: goto label_153c4c;
        case 0x153c50u: goto label_153c50;
        case 0x153c54u: goto label_153c54;
        case 0x153c58u: goto label_153c58;
        case 0x153c5cu: goto label_153c5c;
        case 0x153c60u: goto label_153c60;
        case 0x153c64u: goto label_153c64;
        case 0x153c68u: goto label_153c68;
        case 0x153c6cu: goto label_153c6c;
        case 0x153c70u: goto label_153c70;
        case 0x153c74u: goto label_153c74;
        case 0x153c78u: goto label_153c78;
        case 0x153c7cu: goto label_153c7c;
        case 0x153c80u: goto label_153c80;
        case 0x153c84u: goto label_153c84;
        case 0x153c88u: goto label_153c88;
        case 0x153c8cu: goto label_153c8c;
        case 0x153c90u: goto label_153c90;
        case 0x153c94u: goto label_153c94;
        case 0x153c98u: goto label_153c98;
        case 0x153c9cu: goto label_153c9c;
        case 0x153ca0u: goto label_153ca0;
        case 0x153ca4u: goto label_153ca4;
        case 0x153ca8u: goto label_153ca8;
        case 0x153cacu: goto label_153cac;
        case 0x153cb0u: goto label_153cb0;
        case 0x153cb4u: goto label_153cb4;
        case 0x153cb8u: goto label_153cb8;
        case 0x153cbcu: goto label_153cbc;
        case 0x153cc0u: goto label_153cc0;
        case 0x153cc4u: goto label_153cc4;
        case 0x153cc8u: goto label_153cc8;
        case 0x153cccu: goto label_153ccc;
        case 0x153cd0u: goto label_153cd0;
        case 0x153cd4u: goto label_153cd4;
        case 0x153cd8u: goto label_153cd8;
        case 0x153cdcu: goto label_153cdc;
        case 0x153ce0u: goto label_153ce0;
        case 0x153ce4u: goto label_153ce4;
        case 0x153ce8u: goto label_153ce8;
        case 0x153cecu: goto label_153cec;
        case 0x153cf0u: goto label_153cf0;
        case 0x153cf4u: goto label_153cf4;
        case 0x153cf8u: goto label_153cf8;
        case 0x153cfcu: goto label_153cfc;
        case 0x153d00u: goto label_153d00;
        case 0x153d04u: goto label_153d04;
        case 0x153d08u: goto label_153d08;
        case 0x153d0cu: goto label_153d0c;
        case 0x153d10u: goto label_153d10;
        case 0x153d14u: goto label_153d14;
        case 0x153d18u: goto label_153d18;
        case 0x153d1cu: goto label_153d1c;
        case 0x153d20u: goto label_153d20;
        case 0x153d24u: goto label_153d24;
        case 0x153d28u: goto label_153d28;
        case 0x153d2cu: goto label_153d2c;
        case 0x153d30u: goto label_153d30;
        case 0x153d34u: goto label_153d34;
        case 0x153d38u: goto label_153d38;
        case 0x153d3cu: goto label_153d3c;
        case 0x153d40u: goto label_153d40;
        case 0x153d44u: goto label_153d44;
        case 0x153d48u: goto label_153d48;
        case 0x153d4cu: goto label_153d4c;
        case 0x153d50u: goto label_153d50;
        case 0x153d54u: goto label_153d54;
        case 0x153d58u: goto label_153d58;
        case 0x153d5cu: goto label_153d5c;
        case 0x153d60u: goto label_153d60;
        case 0x153d64u: goto label_153d64;
        case 0x153d68u: goto label_153d68;
        case 0x153d6cu: goto label_153d6c;
        case 0x153d70u: goto label_153d70;
        case 0x153d74u: goto label_153d74;
        case 0x153d78u: goto label_153d78;
        case 0x153d7cu: goto label_153d7c;
        case 0x153d80u: goto label_153d80;
        case 0x153d84u: goto label_153d84;
        case 0x153d88u: goto label_153d88;
        case 0x153d8cu: goto label_153d8c;
        case 0x153d90u: goto label_153d90;
        case 0x153d94u: goto label_153d94;
        case 0x153d98u: goto label_153d98;
        case 0x153d9cu: goto label_153d9c;
        case 0x153da0u: goto label_153da0;
        case 0x153da4u: goto label_153da4;
        case 0x153da8u: goto label_153da8;
        case 0x153dacu: goto label_153dac;
        case 0x153db0u: goto label_153db0;
        case 0x153db4u: goto label_153db4;
        case 0x153db8u: goto label_153db8;
        case 0x153dbcu: goto label_153dbc;
        case 0x153dc0u: goto label_153dc0;
        case 0x153dc4u: goto label_153dc4;
        case 0x153dc8u: goto label_153dc8;
        case 0x153dccu: goto label_153dcc;
        case 0x153dd0u: goto label_153dd0;
        case 0x153dd4u: goto label_153dd4;
        case 0x153dd8u: goto label_153dd8;
        case 0x153ddcu: goto label_153ddc;
        case 0x153de0u: goto label_153de0;
        case 0x153de4u: goto label_153de4;
        case 0x153de8u: goto label_153de8;
        case 0x153decu: goto label_153dec;
        case 0x153df0u: goto label_153df0;
        case 0x153df4u: goto label_153df4;
        case 0x153df8u: goto label_153df8;
        case 0x153dfcu: goto label_153dfc;
        case 0x153e00u: goto label_153e00;
        case 0x153e04u: goto label_153e04;
        case 0x153e08u: goto label_153e08;
        case 0x153e0cu: goto label_153e0c;
        case 0x153e10u: goto label_153e10;
        case 0x153e14u: goto label_153e14;
        case 0x153e18u: goto label_153e18;
        case 0x153e1cu: goto label_153e1c;
        case 0x153e20u: goto label_153e20;
        case 0x153e24u: goto label_153e24;
        case 0x153e28u: goto label_153e28;
        case 0x153e2cu: goto label_153e2c;
        case 0x153e30u: goto label_153e30;
        case 0x153e34u: goto label_153e34;
        case 0x153e38u: goto label_153e38;
        case 0x153e3cu: goto label_153e3c;
        case 0x153e40u: goto label_153e40;
        case 0x153e44u: goto label_153e44;
        case 0x153e48u: goto label_153e48;
        case 0x153e4cu: goto label_153e4c;
        case 0x153e50u: goto label_153e50;
        case 0x153e54u: goto label_153e54;
        case 0x153e58u: goto label_153e58;
        case 0x153e5cu: goto label_153e5c;
        case 0x153e60u: goto label_153e60;
        case 0x153e64u: goto label_153e64;
        case 0x153e68u: goto label_153e68;
        case 0x153e6cu: goto label_153e6c;
        case 0x153e70u: goto label_153e70;
        case 0x153e74u: goto label_153e74;
        case 0x153e78u: goto label_153e78;
        case 0x153e7cu: goto label_153e7c;
        case 0x153e80u: goto label_153e80;
        case 0x153e84u: goto label_153e84;
        case 0x153e88u: goto label_153e88;
        case 0x153e8cu: goto label_153e8c;
        case 0x153e90u: goto label_153e90;
        case 0x153e94u: goto label_153e94;
        case 0x153e98u: goto label_153e98;
        case 0x153e9cu: goto label_153e9c;
        case 0x153ea0u: goto label_153ea0;
        case 0x153ea4u: goto label_153ea4;
        case 0x153ea8u: goto label_153ea8;
        case 0x153eacu: goto label_153eac;
        case 0x153eb0u: goto label_153eb0;
        case 0x153eb4u: goto label_153eb4;
        case 0x153eb8u: goto label_153eb8;
        case 0x153ebcu: goto label_153ebc;
        case 0x153ec0u: goto label_153ec0;
        case 0x153ec4u: goto label_153ec4;
        case 0x153ec8u: goto label_153ec8;
        case 0x153eccu: goto label_153ecc;
        case 0x153ed0u: goto label_153ed0;
        case 0x153ed4u: goto label_153ed4;
        case 0x153ed8u: goto label_153ed8;
        case 0x153edcu: goto label_153edc;
        case 0x153ee0u: goto label_153ee0;
        case 0x153ee4u: goto label_153ee4;
        case 0x153ee8u: goto label_153ee8;
        case 0x153eecu: goto label_153eec;
        case 0x153ef0u: goto label_153ef0;
        case 0x153ef4u: goto label_153ef4;
        case 0x153ef8u: goto label_153ef8;
        case 0x153efcu: goto label_153efc;
        case 0x153f00u: goto label_153f00;
        case 0x153f04u: goto label_153f04;
        case 0x153f08u: goto label_153f08;
        case 0x153f0cu: goto label_153f0c;
        case 0x153f10u: goto label_153f10;
        case 0x153f14u: goto label_153f14;
        case 0x153f18u: goto label_153f18;
        case 0x153f1cu: goto label_153f1c;
        case 0x153f20u: goto label_153f20;
        case 0x153f24u: goto label_153f24;
        case 0x153f28u: goto label_153f28;
        case 0x153f2cu: goto label_153f2c;
        case 0x153f30u: goto label_153f30;
        case 0x153f34u: goto label_153f34;
        case 0x153f38u: goto label_153f38;
        case 0x153f3cu: goto label_153f3c;
        case 0x153f40u: goto label_153f40;
        case 0x153f44u: goto label_153f44;
        case 0x153f48u: goto label_153f48;
        case 0x153f4cu: goto label_153f4c;
        case 0x153f50u: goto label_153f50;
        case 0x153f54u: goto label_153f54;
        case 0x153f58u: goto label_153f58;
        case 0x153f5cu: goto label_153f5c;
        case 0x153f60u: goto label_153f60;
        case 0x153f64u: goto label_153f64;
        case 0x153f68u: goto label_153f68;
        case 0x153f6cu: goto label_153f6c;
        case 0x153f70u: goto label_153f70;
        case 0x153f74u: goto label_153f74;
        case 0x153f78u: goto label_153f78;
        case 0x153f7cu: goto label_153f7c;
        case 0x153f80u: goto label_153f80;
        case 0x153f84u: goto label_153f84;
        case 0x153f88u: goto label_153f88;
        case 0x153f8cu: goto label_153f8c;
        case 0x153f90u: goto label_153f90;
        case 0x153f94u: goto label_153f94;
        case 0x153f98u: goto label_153f98;
        case 0x153f9cu: goto label_153f9c;
        case 0x153fa0u: goto label_153fa0;
        case 0x153fa4u: goto label_153fa4;
        case 0x153fa8u: goto label_153fa8;
        case 0x153facu: goto label_153fac;
        case 0x153fb0u: goto label_153fb0;
        case 0x153fb4u: goto label_153fb4;
        case 0x153fb8u: goto label_153fb8;
        case 0x153fbcu: goto label_153fbc;
        case 0x153fc0u: goto label_153fc0;
        case 0x153fc4u: goto label_153fc4;
        case 0x153fc8u: goto label_153fc8;
        case 0x153fccu: goto label_153fcc;
        case 0x153fd0u: goto label_153fd0;
        case 0x153fd4u: goto label_153fd4;
        case 0x153fd8u: goto label_153fd8;
        case 0x153fdcu: goto label_153fdc;
        case 0x153fe0u: goto label_153fe0;
        case 0x153fe4u: goto label_153fe4;
        case 0x153fe8u: goto label_153fe8;
        case 0x153fecu: goto label_153fec;
        case 0x153ff0u: goto label_153ff0;
        case 0x153ff4u: goto label_153ff4;
        case 0x153ff8u: goto label_153ff8;
        case 0x153ffcu: goto label_153ffc;
        case 0x154000u: goto label_154000;
        case 0x154004u: goto label_154004;
        case 0x154008u: goto label_154008;
        case 0x15400cu: goto label_15400c;
        case 0x154010u: goto label_154010;
        case 0x154014u: goto label_154014;
        case 0x154018u: goto label_154018;
        case 0x15401cu: goto label_15401c;
        case 0x154020u: goto label_154020;
        case 0x154024u: goto label_154024;
        case 0x154028u: goto label_154028;
        case 0x15402cu: goto label_15402c;
        case 0x154030u: goto label_154030;
        case 0x154034u: goto label_154034;
        case 0x154038u: goto label_154038;
        case 0x15403cu: goto label_15403c;
        case 0x154040u: goto label_154040;
        case 0x154044u: goto label_154044;
        case 0x154048u: goto label_154048;
        case 0x15404cu: goto label_15404c;
        case 0x154050u: goto label_154050;
        case 0x154054u: goto label_154054;
        case 0x154058u: goto label_154058;
        case 0x15405cu: goto label_15405c;
        case 0x154060u: goto label_154060;
        case 0x154064u: goto label_154064;
        case 0x154068u: goto label_154068;
        case 0x15406cu: goto label_15406c;
        case 0x154070u: goto label_154070;
        case 0x154074u: goto label_154074;
        case 0x154078u: goto label_154078;
        case 0x15407cu: goto label_15407c;
        case 0x154080u: goto label_154080;
        case 0x154084u: goto label_154084;
        case 0x154088u: goto label_154088;
        case 0x15408cu: goto label_15408c;
        case 0x154090u: goto label_154090;
        case 0x154094u: goto label_154094;
        case 0x154098u: goto label_154098;
        case 0x15409cu: goto label_15409c;
        case 0x1540a0u: goto label_1540a0;
        case 0x1540a4u: goto label_1540a4;
        case 0x1540a8u: goto label_1540a8;
        case 0x1540acu: goto label_1540ac;
        case 0x1540b0u: goto label_1540b0;
        case 0x1540b4u: goto label_1540b4;
        case 0x1540b8u: goto label_1540b8;
        case 0x1540bcu: goto label_1540bc;
        case 0x1540c0u: goto label_1540c0;
        case 0x1540c4u: goto label_1540c4;
        case 0x1540c8u: goto label_1540c8;
        case 0x1540ccu: goto label_1540cc;
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        case 0x154100u: goto label_154100;
        case 0x154104u: goto label_154104;
        case 0x154108u: goto label_154108;
        case 0x15410cu: goto label_15410c;
        case 0x154110u: goto label_154110;
        case 0x154114u: goto label_154114;
        case 0x154118u: goto label_154118;
        case 0x15411cu: goto label_15411c;
        case 0x154120u: goto label_154120;
        case 0x154124u: goto label_154124;
        case 0x154128u: goto label_154128;
        case 0x15412cu: goto label_15412c;
        case 0x154130u: goto label_154130;
        case 0x154134u: goto label_154134;
        case 0x154138u: goto label_154138;
        case 0x15413cu: goto label_15413c;
        case 0x154140u: goto label_154140;
        case 0x154144u: goto label_154144;
        case 0x154148u: goto label_154148;
        case 0x15414cu: goto label_15414c;
        case 0x154150u: goto label_154150;
        case 0x154154u: goto label_154154;
        case 0x154158u: goto label_154158;
        case 0x15415cu: goto label_15415c;
        case 0x154160u: goto label_154160;
        case 0x154164u: goto label_154164;
        case 0x154168u: goto label_154168;
        case 0x15416cu: goto label_15416c;
        case 0x154170u: goto label_154170;
        case 0x154174u: goto label_154174;
        case 0x154178u: goto label_154178;
        case 0x15417cu: goto label_15417c;
        case 0x154180u: goto label_154180;
        case 0x154184u: goto label_154184;
        case 0x154188u: goto label_154188;
        case 0x15418cu: goto label_15418c;
        default: return;
    }

label_1539c0:
    // 0x1539c0: 0x3e00008  jr          $ra
label_1539c4:
    if (ctx->pc == 0x1539C4u) {
        ctx->pc = 0x1539C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539C0u;
        // 0x1539c4: 0xaf8485dc  sw          $a0, -0x7A24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539C8u;
        goto label_1539c8;
    }
    ctx->pc = 0x1539C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1539C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539C0u;
        // 0x1539c4: 0xaf8485dc  sw          $a0, -0x7A24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1539C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1539C8u;
label_1539c8:
    // 0x1539c8: 0x0  nop
    ctx->pc = 0x1539c8u;
    // NOP
label_1539cc:
    // 0x1539cc: 0x0  nop
    ctx->pc = 0x1539ccu;
    // NOP
label_1539d0:
    // 0x1539d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1539d4:
    // 0x1539d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1539d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1539d8:
    // 0x1539d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1539d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1539dc:
    // 0x1539dc: 0x27828140  addiu       $v0, $gp, -0x7EC0
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934848));
label_1539e0:
    // 0x1539e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1539e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1539e4:
    // 0x1539e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1539e8:
    // 0x1539e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1539e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1539ec:
    // 0x1539ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1539ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1539f0:
    // 0x1539f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1539f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1539f4:
    // 0x1539f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1539f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1539f8:
    // 0x1539f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1539f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1539fc:
    // 0x1539fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1539fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_153a00:
    // 0x153a00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_153a04:
    // 0x153a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_153a08:
    // 0x153a08: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x153a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_153a0c:
    // 0x153a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_153a10:
    // 0x153a10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_153a14:
    // 0x153a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_153a18:
    // 0x153a18: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x153a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
label_153a1c:
    // 0x153a1c: 0x8f9085dc  lw          $s0, -0x7A24($gp)
    ctx->pc = 0x153a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_153a20:
    // 0x153a20: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153a24:
    // 0x153a24: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_153a28:
    if (ctx->pc == 0x153A28u) {
        ctx->pc = 0x153A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A24u;
        // 0x153a28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A2Cu;
        goto label_153a2c;
    }
    ctx->pc = 0x153A24u;
    {
        const bool branch_taken_0x153a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A24u;
        // 0x153a28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a24) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153A2Cu;
label_153a2c:
    // 0x153a2c: 0x8f858600  lw          $a1, -0x7A00($gp)
    ctx->pc = 0x153a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_153a30:
    // 0x153a30: 0x8f9585f0  lw          $s5, -0x7A10($gp)
    ctx->pc = 0x153a30u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
label_153a34:
    // 0x153a34: 0x8f9785e8  lw          $s7, -0x7A18($gp)
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153a38:
    // 0x153a38: 0xc0551bc  jal         func_1546F0
label_153a3c:
    if (ctx->pc == 0x153A3Cu) {
        ctx->pc = 0x153A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A38u;
        // 0x153a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A40u;
        goto label_153a40;
    }
    ctx->pc = 0x153A38u;
    SET_GPR_U32(ctx, 31, 0x153A40u);
    ctx->pc = 0x153A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A38u;
    // 0x153a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1546F0u;
    { ctx->pc = 0x1546f0; return; }
    ctx->pc = 0x153A40u;
label_153a40:
    // 0x153a40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_153a44:
    if (ctx->pc == 0x153A44u) {
        ctx->pc = 0x153A48u;
        goto label_153a48;
    }
    ctx->pc = 0x153A40u;
    {
        const bool branch_taken_0x153a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a40) {
            ctx->pc = 0x153A80u;
            goto label_153a80;
        }
    }
    ctx->pc = 0x153A48u;
label_153a48:
    // 0x153a48: 0x8f8485d8  lw          $a0, -0x7A28($gp)
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_153a4c:
    // 0x153a4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x153a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153a50:
    // 0x153a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153a54:
    // 0x153a54: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x153a54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_153a58:
    // 0x153a58: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x153a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_153a5c:
    // 0x153a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153a60:
    // 0x153a60: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x153a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_153a64:
    // 0x153a64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_153a68:
    if (ctx->pc == 0x153A68u) {
        ctx->pc = 0x153A6Cu;
        goto label_153a6c;
    }
    ctx->pc = 0x153A64u;
    {
        const bool branch_taken_0x153a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a64) {
            ctx->pc = 0x153A74u;
            goto label_153a74;
        }
    }
    ctx->pc = 0x153A6Cu;
label_153a6c:
    // 0x153a6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_153a70:
    if (ctx->pc == 0x153A70u) {
        ctx->pc = 0x153A74u;
        goto label_153a74;
    }
    ctx->pc = 0x153A6Cu;
    {
        const bool branch_taken_0x153a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153a6c) {
            ctx->pc = 0x153A84u;
            goto label_153a84;
        }
    }
    ctx->pc = 0x153A74u;
label_153a74:
    // 0x153a74: 0x0  nop
    ctx->pc = 0x153a74u;
    // NOP
label_153a78:
    // 0x153a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_153a7c:
    if (ctx->pc == 0x153A7Cu) {
        ctx->pc = 0x153A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A78u;
        // 0x153a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A80u;
        goto label_153a80;
    }
    ctx->pc = 0x153A78u;
    {
        const bool branch_taken_0x153a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A78u;
        // 0x153a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a78) {
            ctx->pc = 0x153A84u;
            goto label_153a84;
        }
    }
    ctx->pc = 0x153A80u;
label_153a80:
    // 0x153a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153a84:
    // 0x153a84: 0x0  nop
    ctx->pc = 0x153a84u;
    // NOP
label_153a88:
    // 0x153a88: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
label_153a8c:
    if (ctx->pc == 0x153A8Cu) {
        ctx->pc = 0x153A90u;
        goto label_153a90;
    }
    ctx->pc = 0x153A88u;
    {
        const bool branch_taken_0x153a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x153a88) {
            ctx->pc = 0x153AD8u;
            goto label_153ad8;
        }
    }
    ctx->pc = 0x153A90u;
label_153a90:
    // 0x153a90: 0x8f8485fc  lw          $a0, -0x7A04($gp)
    ctx->pc = 0x153a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_153a94:
    // 0x153a94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_153a98:
    // 0x153a98: 0x8f8385e4  lw          $v1, -0x7A1C($gp)
    ctx->pc = 0x153a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_153a9c:
    // 0x153a9c: 0x8f8585f8  lw          $a1, -0x7A08($gp)
    ctx->pc = 0x153a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_153aa0:
    // 0x153aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153aa4:
    // 0x153aa4: 0xaf8585e8  sw          $a1, -0x7A18($gp)
    ctx->pc = 0x153aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 5));
label_153aa8:
    // 0x153aa8: 0xaf8385e4  sw          $v1, -0x7A1C($gp)
    ctx->pc = 0x153aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 3));
label_153aac:
    // 0x153aac: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x153aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153ab0:
    // 0x153ab0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_153ab4:
    if (ctx->pc == 0x153AB4u) {
        ctx->pc = 0x153AB8u;
        goto label_153ab8;
    }
    ctx->pc = 0x153AB0u;
    {
        const bool branch_taken_0x153ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153ab0) {
            ctx->pc = 0x153ABCu;
            goto label_153abc;
        }
    }
    ctx->pc = 0x153AB8u;
label_153ab8:
    // 0x153ab8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_153abc:
    // 0x153abc: 0x0  nop
    ctx->pc = 0x153abcu;
    // NOP
label_153ac0:
    // 0x153ac0: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x153ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153ac4:
    // 0x153ac4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_153ac8:
    // 0x153ac8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_153acc:
    if (ctx->pc == 0x153ACCu) {
        ctx->pc = 0x153AD0u;
        goto label_153ad0;
    }
    ctx->pc = 0x153AC8u;
    {
        const bool branch_taken_0x153ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153ac8) {
            ctx->pc = 0x153AD4u;
            goto label_153ad4;
        }
    }
    ctx->pc = 0x153AD0u;
label_153ad0:
    // 0x153ad0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x153ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_153ad4:
    // 0x153ad4: 0x0  nop
    ctx->pc = 0x153ad4u;
    // NOP
label_153ad8:
    // 0x153ad8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x153ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153adc:
    // 0x153adc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x153adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_153ae0:
    // 0x153ae0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_153ae4:
    if (ctx->pc == 0x153AE4u) {
        ctx->pc = 0x153AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AE0u;
        // 0x153ae4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153AE8u;
        goto label_153ae8;
    }
    ctx->pc = 0x153AE0u;
    {
        const bool branch_taken_0x153ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AE0u;
        // 0x153ae4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ae0) {
            ctx->pc = 0x153B20u;
            goto label_153b20;
        }
    }
    ctx->pc = 0x153AE8u;
label_153ae8:
    // 0x153ae8: 0x8f8485fc  lw          $a0, -0x7A04($gp)
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_153aec:
    // 0x153aec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_153af0:
    // 0x153af0: 0x8f8385e4  lw          $v1, -0x7A1C($gp)
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_153af4:
    // 0x153af4: 0x8f8585f8  lw          $a1, -0x7A08($gp)
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_153af8:
    // 0x153af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153afc:
    // 0x153afc: 0xaf8585e8  sw          $a1, -0x7A18($gp)
    ctx->pc = 0x153afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 5));
label_153b00:
    // 0x153b00: 0xaf8385e4  sw          $v1, -0x7A1C($gp)
    ctx->pc = 0x153b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 3));
label_153b04:
    // 0x153b04: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x153b04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153b08:
    // 0x153b08: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_153b0c:
    if (ctx->pc == 0x153B0Cu) {
        ctx->pc = 0x153B10u;
        goto label_153b10;
    }
    ctx->pc = 0x153B08u;
    {
        const bool branch_taken_0x153b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153b08) {
            ctx->pc = 0x153B14u;
            goto label_153b14;
        }
    }
    ctx->pc = 0x153B10u;
label_153b10:
    // 0x153b10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x153b10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_153b14:
    // 0x153b14: 0x0  nop
    ctx->pc = 0x153b14u;
    // NOP
label_153b18:
    // 0x153b18: 0x10000063  b           . + 4 + (0x63 << 2)
label_153b1c:
    if (ctx->pc == 0x153B1Cu) {
        ctx->pc = 0x153B20u;
        goto label_153b20;
    }
    ctx->pc = 0x153B18u;
    {
        const bool branch_taken_0x153b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153b18) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153B20u;
label_153b20:
    // 0x153b20: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x153b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_153b24:
    // 0x153b24: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_153b28:
    if (ctx->pc == 0x153B28u) {
        ctx->pc = 0x153B2Cu;
        goto label_153b2c;
    }
    ctx->pc = 0x153B24u;
    {
        const bool branch_taken_0x153b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153b24) {
            ctx->pc = 0x153BC4u;
            goto label_153bc4;
        }
    }
    ctx->pc = 0x153B2Cu;
label_153b2c:
    // 0x153b2c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x153b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153b30:
    // 0x153b30: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_153b34:
    // 0x153b34: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_153b38:
    if (ctx->pc == 0x153B38u) {
        ctx->pc = 0x153B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B34u;
        // 0x153b38: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B3Cu;
        goto label_153b3c;
    }
    ctx->pc = 0x153B34u;
    {
        const bool branch_taken_0x153b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B34u;
        // 0x153b38: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b34) {
            ctx->pc = 0x153B4Cu;
            goto label_153b4c;
        }
    }
    ctx->pc = 0x153B3Cu;
label_153b3c:
    // 0x153b3c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x153b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153b40:
    // 0x153b40: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_153b44:
    // 0x153b44: 0x10000058  b           . + 4 + (0x58 << 2)
label_153b48:
    if (ctx->pc == 0x153B48u) {
        ctx->pc = 0x153B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B44u;
        // 0x153b48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B4Cu;
        goto label_153b4c;
    }
    ctx->pc = 0x153B44u;
    {
        const bool branch_taken_0x153b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B44u;
        // 0x153b48: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b44) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153B4Cu;
label_153b4c:
    // 0x153b4c: 0x0  nop
    ctx->pc = 0x153b4cu;
    // NOP
label_153b50:
    // 0x153b50: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_153b54:
    // 0x153b54: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_153b58:
    if (ctx->pc == 0x153B58u) {
        ctx->pc = 0x153B5Cu;
        goto label_153b5c;
    }
    ctx->pc = 0x153B54u;
    {
        const bool branch_taken_0x153b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153b54) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153B5Cu;
label_153b5c:
    // 0x153b5c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x153b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153b60:
    // 0x153b60: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x153b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_153b64:
    // 0x153b64: 0x17c00050  bnez        $fp, . + 4 + (0x50 << 2)
label_153b68:
    if (ctx->pc == 0x153B68u) {
        ctx->pc = 0x153B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B64u;
        // 0x153b68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B6Cu;
        goto label_153b6c;
    }
    ctx->pc = 0x153B64u;
    {
        const bool branch_taken_0x153b64 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x153B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B64u;
        // 0x153b68: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b64) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153B6Cu;
label_153b6c:
    // 0x153b6c: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x153b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_153b70:
    // 0x153b70: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x153b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153b74:
    // 0x153b74: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x153b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_153b78:
    // 0x153b78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_153b7c:
    if (ctx->pc == 0x153B7Cu) {
        ctx->pc = 0x153B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B78u;
        // 0x153b7c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B80u;
        goto label_153b80;
    }
    ctx->pc = 0x153B78u;
    {
        const bool branch_taken_0x153b78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x153B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B78u;
        // 0x153b7c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b78) {
            ctx->pc = 0x153B88u;
            goto label_153b88;
        }
    }
    ctx->pc = 0x153B80u;
label_153b80:
    // 0x153b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_153b84:
    // 0x153b84: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_153b88:
    // 0x153b88: 0x8f8285e4  lw          $v0, -0x7A1C($gp)
    ctx->pc = 0x153b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_153b8c:
    // 0x153b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153b90:
    // 0x153b90: 0x8f8685e8  lw          $a2, -0x7A18($gp)
    ctx->pc = 0x153b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153b94:
    // 0x153b94: 0x8f8885e0  lw          $t0, -0x7A20($gp)
    ctx->pc = 0x153b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_153b98:
    // 0x153b98: 0xc054fcc  jal         func_153F30
label_153b9c:
    if (ctx->pc == 0x153B9Cu) {
        ctx->pc = 0x153B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B98u;
        // 0x153b9c: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BA0u;
        goto label_153ba0;
    }
    ctx->pc = 0x153B98u;
    SET_GPR_U32(ctx, 31, 0x153BA0u);
    ctx->pc = 0x153B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B98u;
    // 0x153b9c: 0x433823  subu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153F30u;
    goto label_153f30;
    ctx->pc = 0x153BA0u;
label_153ba0:
    // 0x153ba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153ba4:
    // 0x153ba4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_153ba8:
    // 0x153ba8: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153bac:
    // 0x153bac: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x153bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_153bb0:
    // 0x153bb0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_153bb4:
    // 0x153bb4: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_153bb8:
    if (ctx->pc == 0x153BB8u) {
        ctx->pc = 0x153BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB4u;
        // 0x153bb8: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BBCu;
        goto label_153bbc;
    }
    ctx->pc = 0x153BB4u;
    {
        const bool branch_taken_0x153bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB4u;
        // 0x153bb8: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb4) {
            ctx->pc = 0x153CB4u;
            goto label_153cb4;
        }
    }
    ctx->pc = 0x153BBCu;
label_153bbc:
    // 0x153bbc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_153bc0:
    if (ctx->pc == 0x153BC0u) {
        ctx->pc = 0x153BC4u;
        goto label_153bc4;
    }
    ctx->pc = 0x153BBCu;
    {
        const bool branch_taken_0x153bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bbc) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153BC4u;
label_153bc4:
    // 0x153bc4: 0x0  nop
    ctx->pc = 0x153bc4u;
    // NOP
label_153bc8:
    // 0x153bc8: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x153bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_153bcc:
    // 0x153bcc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_153bd0:
    if (ctx->pc == 0x153BD0u) {
        ctx->pc = 0x153BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BCCu;
        // 0x153bd0: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BD4u;
        goto label_153bd4;
    }
    ctx->pc = 0x153BCCu;
    {
        const bool branch_taken_0x153bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BCCu;
        // 0x153bd0: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bcc) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153BD4u;
label_153bd4:
    // 0x153bd4: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_153bd8:
    if (ctx->pc == 0x153BD8u) {
        ctx->pc = 0x153BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD4u;
        // 0x153bd8: 0x2475ffe0  addiu       $s5, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BDCu;
        goto label_153bdc;
    }
    ctx->pc = 0x153BD4u;
    {
        const bool branch_taken_0x153bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BD4u;
        // 0x153bd8: 0x2475ffe0  addiu       $s5, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bd4) {
            ctx->pc = 0x153CA8u;
            goto label_153ca8;
        }
    }
    ctx->pc = 0x153BDCu;
label_153bdc:
    // 0x153bdc: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153be0:
    // 0x153be0: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_153be4:
    // 0x153be4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x153be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_153be8:
    // 0x153be8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_153bec:
    if (ctx->pc == 0x153BECu) {
        ctx->pc = 0x153BF0u;
        goto label_153bf0;
    }
    ctx->pc = 0x153BE8u;
    {
        const bool branch_taken_0x153be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153be8) {
            ctx->pc = 0x153C1Cu;
            goto label_153c1c;
        }
    }
    ctx->pc = 0x153BF0u;
label_153bf0:
    // 0x153bf0: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x153bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_153bf4:
    // 0x153bf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_153bf8:
    if (ctx->pc == 0x153BF8u) {
        ctx->pc = 0x153BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BF4u;
        // 0x153bf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153BFCu;
        goto label_153bfc;
    }
    ctx->pc = 0x153BF4u;
    {
        const bool branch_taken_0x153bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BF4u;
        // 0x153bf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bf4) {
            ctx->pc = 0x153C04u;
            goto label_153c04;
        }
    }
    ctx->pc = 0x153BFCu;
label_153bfc:
    // 0x153bfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_153c00:
    if (ctx->pc == 0x153C00u) {
        ctx->pc = 0x153C04u;
        goto label_153c04;
    }
    ctx->pc = 0x153BFCu;
    {
        const bool branch_taken_0x153bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153bfc) {
            ctx->pc = 0x153C0Cu;
            goto label_153c0c;
        }
    }
    ctx->pc = 0x153C04u;
label_153c04:
    // 0x153c04: 0x0  nop
    ctx->pc = 0x153c04u;
    // NOP
label_153c08:
    // 0x153c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153c0c:
    // 0x153c0c: 0x0  nop
    ctx->pc = 0x153c0cu;
    // NOP
label_153c10:
    // 0x153c10: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153c14:
    // 0x153c14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153c18:
    // 0x153c18: 0xaf8285e8  sw          $v0, -0x7A18($gp)
    ctx->pc = 0x153c18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
label_153c1c:
    // 0x153c1c: 0x0  nop
    ctx->pc = 0x153c1cu;
    // NOP
label_153c20:
    // 0x153c20: 0x8f8685e8  lw          $a2, -0x7A18($gp)
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153c24:
    // 0x153c24: 0x8f8785e4  lw          $a3, -0x7A1C($gp)
    ctx->pc = 0x153c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_153c28:
    // 0x153c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153c2c:
    // 0x153c2c: 0x8f8885e0  lw          $t0, -0x7A20($gp)
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_153c30:
    // 0x153c30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x153c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_153c34:
    // 0x153c34: 0x8f898600  lw          $t1, -0x7A00($gp)
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_153c38:
    // 0x153c38: 0x8f8a85fc  lw          $t2, -0x7A04($gp)
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_153c3c:
    // 0x153c3c: 0x2c0f809  jalr        $s6
label_153c40:
    if (ctx->pc == 0x153C40u) {
        ctx->pc = 0x153C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C3Cu;
        // 0x153c40: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C44u;
        goto label_153c44;
    }
    ctx->pc = 0x153C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x153C44u);
        ctx->pc = 0x153C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C3Cu;
        // 0x153c40: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153C3Cu, 0x153C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153C44u;
label_153c44:
    // 0x153c44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153c48:
    // 0x153c48: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x153c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_153c4c:
    // 0x153c4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_153c50:
    if (ctx->pc == 0x153C50u) {
        ctx->pc = 0x153C54u;
        goto label_153c54;
    }
    ctx->pc = 0x153C4Cu;
    {
        const bool branch_taken_0x153c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c4c) {
            ctx->pc = 0x153C5Cu;
            goto label_153c5c;
        }
    }
    ctx->pc = 0x153C54u;
label_153c54:
    // 0x153c54: 0x1000000d  b           . + 4 + (0xD << 2)
label_153c58:
    if (ctx->pc == 0x153C58u) {
        ctx->pc = 0x153C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C54u;
        // 0x153c58: 0x8f838600  lw          $v1, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C5Cu;
        goto label_153c5c;
    }
    ctx->pc = 0x153C54u;
    {
        const bool branch_taken_0x153c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C54u;
        // 0x153c58: 0x8f838600  lw          $v1, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c54) {
            ctx->pc = 0x153C8Cu;
            goto label_153c8c;
        }
    }
    ctx->pc = 0x153C5Cu;
label_153c5c:
    // 0x153c5c: 0x0  nop
    ctx->pc = 0x153c5cu;
    // NOP
label_153c60:
    // 0x153c60: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_153c64:
    // 0x153c64: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_153c68:
    // 0x153c68: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x153c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_153c6c:
    // 0x153c6c: 0x8f828600  lw          $v0, -0x7A00($gp)
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_153c70:
    // 0x153c70: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_153c74:
    // 0x153c74: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x153c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_153c78:
    // 0x153c78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_153c7c:
    if (ctx->pc == 0x153C7Cu) {
        ctx->pc = 0x153C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C78u;
        // 0x153c7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153C80u;
        goto label_153c80;
    }
    ctx->pc = 0x153C78u;
    {
        const bool branch_taken_0x153c78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C78u;
        // 0x153c7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c78) {
            ctx->pc = 0x153C88u;
            goto label_153c88;
        }
    }
    ctx->pc = 0x153C80u;
label_153c80:
    // 0x153c80: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x153c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_153c84:
    // 0x153c84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x153c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_153c88:
    // 0x153c88: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x153c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_153c8c:
    // 0x153c8c: 0x0  nop
    ctx->pc = 0x153c8cu;
    // NOP
label_153c90:
    // 0x153c90: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153c94:
    // 0x153c94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_153c98:
    // 0x153c98: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x153c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_153c9c:
    // 0x153c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153ca0:
    // 0x153ca0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_153ca4:
    if (ctx->pc == 0x153CA4u) {
        ctx->pc = 0x153CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CA0u;
        // 0x153ca4: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CA8u;
        goto label_153ca8;
    }
    ctx->pc = 0x153CA0u;
    {
        const bool branch_taken_0x153ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CA0u;
        // 0x153ca4: 0xaf8285e8  sw          $v0, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ca0) {
            ctx->pc = 0x153CB4u;
            goto label_153cb4;
        }
    }
    ctx->pc = 0x153CA8u;
label_153ca8:
    // 0x153ca8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x153ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_153cac:
    // 0x153cac: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
label_153cb0:
    if (ctx->pc == 0x153CB0u) {
        ctx->pc = 0x153CB4u;
        goto label_153cb4;
    }
    ctx->pc = 0x153CACu;
    {
        const bool branch_taken_0x153cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153cac) {
            ctx->pc = 0x153A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153a2c;
        }
    }
    ctx->pc = 0x153CB4u;
label_153cb4:
    // 0x153cb4: 0x0  nop
    ctx->pc = 0x153cb4u;
    // NOP
label_153cb8:
    // 0x153cb8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x153cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_153cbc:
    // 0x153cbc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_153cc0:
    if (ctx->pc == 0x153CC0u) {
        ctx->pc = 0x153CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CBCu;
        // 0x153cc0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CC4u;
        goto label_153cc4;
    }
    ctx->pc = 0x153CBCu;
    {
        const bool branch_taken_0x153cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CBCu;
        // 0x153cc0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cbc) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153CC4u;
label_153cc4:
    // 0x153cc4: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x153cc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_153cc8:
    // 0x153cc8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_153ccc:
    if (ctx->pc == 0x153CCCu) {
        ctx->pc = 0x153CD0u;
        goto label_153cd0;
    }
    ctx->pc = 0x153CC8u;
    {
        const bool branch_taken_0x153cc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153cc8) {
            ctx->pc = 0x153D70u;
            goto label_153d70;
        }
    }
    ctx->pc = 0x153CD0u;
label_153cd0:
    // 0x153cd0: 0x8f8385f8  lw          $v1, -0x7A08($gp)
    ctx->pc = 0x153cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
label_153cd4:
    // 0x153cd4: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153cd8:
    // 0x153cd8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x153cd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_153cdc:
    // 0x153cdc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_153ce0:
    if (ctx->pc == 0x153CE0u) {
        ctx->pc = 0x153CE4u;
        goto label_153ce4;
    }
    ctx->pc = 0x153CDCu;
    {
        const bool branch_taken_0x153cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x153cdc) {
            ctx->pc = 0x153D0Cu;
            goto label_153d0c;
        }
    }
    ctx->pc = 0x153CE4u;
label_153ce4:
    // 0x153ce4: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x153ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_153ce8:
    // 0x153ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_153cec:
    if (ctx->pc == 0x153CECu) {
        ctx->pc = 0x153CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CE8u;
        // 0x153cec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153CF0u;
        goto label_153cf0;
    }
    ctx->pc = 0x153CE8u;
    {
        const bool branch_taken_0x153ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CE8u;
        // 0x153cec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ce8) {
            ctx->pc = 0x153CF8u;
            goto label_153cf8;
        }
    }
    ctx->pc = 0x153CF0u;
label_153cf0:
    // 0x153cf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_153cf4:
    if (ctx->pc == 0x153CF4u) {
        ctx->pc = 0x153CF8u;
        goto label_153cf8;
    }
    ctx->pc = 0x153CF0u;
    {
        const bool branch_taken_0x153cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153cf0) {
            ctx->pc = 0x153CFCu;
            goto label_153cfc;
        }
    }
    ctx->pc = 0x153CF8u;
label_153cf8:
    // 0x153cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153cfc:
    // 0x153cfc: 0x0  nop
    ctx->pc = 0x153cfcu;
    // NOP
label_153d00:
    // 0x153d00: 0x8f8285e8  lw          $v0, -0x7A18($gp)
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153d04:
    // 0x153d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153d08:
    // 0x153d08: 0xaf8285e8  sw          $v0, -0x7A18($gp)
    ctx->pc = 0x153d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 2));
label_153d0c:
    // 0x153d0c: 0x0  nop
    ctx->pc = 0x153d0cu;
    // NOP
label_153d10:
    // 0x153d10: 0x8f8685e8  lw          $a2, -0x7A18($gp)
    ctx->pc = 0x153d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153d14:
    // 0x153d14: 0x8f8785e4  lw          $a3, -0x7A1C($gp)
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
label_153d18:
    // 0x153d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x153d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_153d1c:
    // 0x153d1c: 0x8f8885e0  lw          $t0, -0x7A20($gp)
    ctx->pc = 0x153d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
label_153d20:
    // 0x153d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153d24:
    // 0x153d24: 0x8f898600  lw          $t1, -0x7A00($gp)
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
label_153d28:
    // 0x153d28: 0x8f8a85fc  lw          $t2, -0x7A04($gp)
    ctx->pc = 0x153d28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_153d2c:
    // 0x153d2c: 0x2c0f809  jalr        $s6
label_153d30:
    if (ctx->pc == 0x153D30u) {
        ctx->pc = 0x153D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D2Cu;
        // 0x153d30: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D34u;
        goto label_153d34;
    }
    ctx->pc = 0x153D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x153D34u);
        ctx->pc = 0x153D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D2Cu;
        // 0x153d30: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153D2Cu, 0x153D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153D34u;
label_153d34:
    // 0x153d34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153d38:
    // 0x153d38: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x153d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_153d3c:
    // 0x153d3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_153d40:
    if (ctx->pc == 0x153D40u) {
        ctx->pc = 0x153D44u;
        goto label_153d44;
    }
    ctx->pc = 0x153D3Cu;
    {
        const bool branch_taken_0x153d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d3c) {
            ctx->pc = 0x153D4Cu;
            goto label_153d4c;
        }
    }
    ctx->pc = 0x153D44u;
label_153d44:
    // 0x153d44: 0x10000003  b           . + 4 + (0x3 << 2)
label_153d48:
    if (ctx->pc == 0x153D48u) {
        ctx->pc = 0x153D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D44u;
        // 0x153d48: 0x8f848600  lw          $a0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D4Cu;
        goto label_153d4c;
    }
    ctx->pc = 0x153D44u;
    {
        const bool branch_taken_0x153d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D44u;
        // 0x153d48: 0x8f848600  lw          $a0, -0x7A00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d44) {
            ctx->pc = 0x153D54u;
            goto label_153d54;
        }
    }
    ctx->pc = 0x153D4Cu;
label_153d4c:
    // 0x153d4c: 0x0  nop
    ctx->pc = 0x153d4cu;
    // NOP
label_153d50:
    // 0x153d50: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x153d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_153d54:
    // 0x153d54: 0x0  nop
    ctx->pc = 0x153d54u;
    // NOP
label_153d58:
    // 0x153d58: 0x8f8385e8  lw          $v1, -0x7A18($gp)
    ctx->pc = 0x153d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936040)));
label_153d5c:
    // 0x153d5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_153d60:
    // 0x153d60: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x153d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_153d64:
    // 0x153d64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_153d68:
    // 0x153d68: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_153d6c:
    if (ctx->pc == 0x153D6Cu) {
        ctx->pc = 0x153D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D68u;
        // 0x153d6c: 0xaf8385e8  sw          $v1, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153D70u;
        goto label_153d70;
    }
    ctx->pc = 0x153D68u;
    {
        const bool branch_taken_0x153d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D68u;
        // 0x153d6c: 0xaf8385e8  sw          $v1, -0x7A18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d68) {
            ctx->pc = 0x153CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153cd0;
        }
    }
    ctx->pc = 0x153D70u;
label_153d70:
    // 0x153d70: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x153d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_153d74:
    // 0x153d74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x153d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_153d78:
    // 0x153d78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x153d78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_153d7c:
    // 0x153d7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x153d7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_153d80:
    // 0x153d80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x153d80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_153d84:
    // 0x153d84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x153d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_153d88:
    // 0x153d88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153d88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153d8c:
    // 0x153d8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153d90:
    // 0x153d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_153d94:
    // 0x153d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_153d98:
    // 0x153d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153d9c:
    // 0x153d9c: 0x3e00008  jr          $ra
label_153da0:
    if (ctx->pc == 0x153DA0u) {
        ctx->pc = 0x153DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D9Cu;
        // 0x153da0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DA4u;
        goto label_153da4;
    }
    ctx->pc = 0x153D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D9Cu;
        // 0x153da0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153DA4u;
label_153da4:
    // 0x153da4: 0x0  nop
    ctx->pc = 0x153da4u;
    // NOP
label_153da8:
    // 0x153da8: 0x0  nop
    ctx->pc = 0x153da8u;
    // NOP
label_153dac:
    // 0x153dac: 0x0  nop
    ctx->pc = 0x153dacu;
    // NOP
label_153db0:
    // 0x153db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_153db4:
    // 0x153db4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_153db8:
    // 0x153db8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_153dbc:
    // 0x153dbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_153dc0:
    // 0x153dc0: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_153dc4:
    // 0x153dc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_153dc8:
    if (ctx->pc == 0x153DC8u) {
        ctx->pc = 0x153DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DC4u;
        // 0x153dc8: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DCCu;
        goto label_153dcc;
    }
    ctx->pc = 0x153DC4u;
    {
        const bool branch_taken_0x153dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DC4u;
        // 0x153dc8: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dc4) {
            ctx->pc = 0x153E0Cu;
            goto label_153e0c;
        }
    }
    ctx->pc = 0x153DCCu;
label_153dcc:
    // 0x153dcc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_153dd0:
    // 0x153dd0: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_153dd4:
    // 0x153dd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x153dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_153dd8:
    // 0x153dd8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_153ddc:
    // 0x153ddc: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x153ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_153de0:
    // 0x153de0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_153de4:
    if (ctx->pc == 0x153DE4u) {
        ctx->pc = 0x153DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE0u;
        // 0x153de4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153DE8u;
        goto label_153de8;
    }
    ctx->pc = 0x153DE0u;
    {
        const bool branch_taken_0x153de0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE0u;
        // 0x153de4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de0) {
            ctx->pc = 0x153DF0u;
            goto label_153df0;
        }
    }
    ctx->pc = 0x153DE8u;
label_153de8:
    // 0x153de8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_153dec:
    // 0x153dec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_153df0:
    // 0x153df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_153df4:
    // 0x153df4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_153df8:
    // 0x153df8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_153dfc:
    if (ctx->pc == 0x153DFCu) {
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF8u;
        // 0x153dfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153E00u;
        goto label_153e00;
    }
    ctx->pc = 0x153DF8u;
    {
        const bool branch_taken_0x153df8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF8u;
        // 0x153dfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df8) {
            ctx->pc = 0x153E08u;
            goto label_153e08;
        }
    }
    ctx->pc = 0x153E00u;
label_153e00:
    // 0x153e00: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_153e04:
    // 0x153e04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_153e08:
    // 0x153e08: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_153e0c:
    // 0x153e0c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_153e10:
    // 0x153e10: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_153e14:
    // 0x153e14: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x153e14u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_153e18:
    // 0x153e18: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x153e18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153e1c:
    // 0x153e1c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x153e1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153e20:
    // 0x153e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153e24:
    // 0x153e24: 0x2810  mfhi        $a1
    ctx->pc = 0x153e24u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_153e28:
    // 0x153e28: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x153e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_153e2c:
    // 0x153e2c: 0x55902  srl         $t3, $a1, 4
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_153e30:
    // 0x153e30: 0xb2840  sll         $a1, $t3, 1
    ctx->pc = 0x153e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_153e34:
    // 0x153e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x153e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_153e38:
    // 0x153e38: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x153e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_153e3c:
    // 0x153e3c: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x153e3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_153e40:
    // 0x153e40: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_153e44:
    // 0x153e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x153e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_153e48:
    // 0x153e48: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x153e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_153e4c:
    // 0x153e4c: 0xffae0008  sd          $t6, 0x8($sp)
    ctx->pc = 0x153e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 14));
label_153e50:
    // 0x153e50: 0xffad0010  sd          $t5, 0x10($sp)
    ctx->pc = 0x153e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 13));
label_153e54:
    // 0x153e54: 0xffac0018  sd          $t4, 0x18($sp)
    ctx->pc = 0x153e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
label_153e58:
    // 0x153e58: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x153e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_153e5c:
    // 0x153e5c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x153e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_153e60:
    // 0x153e60: 0xdf858618  ld          $a1, -0x79E8($gp)
    ctx->pc = 0x153e60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936088)));
label_153e64:
    // 0x153e64: 0xc05ded8  jal         func_177B60
label_153e68:
    if (ctx->pc == 0x153E68u) {
        ctx->pc = 0x153E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E64u;
        // 0x153e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153E6Cu;
        goto label_153e6c;
    }
    ctx->pc = 0x153E64u;
    SET_GPR_U32(ctx, 31, 0x153E6Cu);
    ctx->pc = 0x153E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E64u;
    // 0x153e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x153E6Cu;
label_153e6c:
    // 0x153e6c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_153e70:
    // 0x153e70: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x153e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_153e74:
    // 0x153e74: 0xa2030070  sb          $v1, 0x70($s0)
    ctx->pc = 0x153e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 3));
label_153e78:
    // 0x153e78: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x153e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_153e7c:
    // 0x153e7c: 0xa2030071  sb          $v1, 0x71($s0)
    ctx->pc = 0x153e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 3));
label_153e80:
    // 0x153e80: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153e84:
    // 0x153e84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_153e88:
    // 0x153e88: 0xa2030072  sb          $v1, 0x72($s0)
    ctx->pc = 0x153e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 3));
label_153e8c:
    // 0x153e8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153e90:
    // 0x153e90: 0xa2050073  sb          $a1, 0x73($s0)
    ctx->pc = 0x153e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 5));
label_153e94:
    // 0x153e94: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x153e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
label_153e98:
    // 0x153e98: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_153e9c:
    // 0x153e9c: 0xa2030088  sb          $v1, 0x88($s0)
    ctx->pc = 0x153e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 3));
label_153ea0:
    // 0x153ea0: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x153ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153ea4:
    // 0x153ea4: 0xa2030089  sb          $v1, 0x89($s0)
    ctx->pc = 0x153ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 3));
label_153ea8:
    // 0x153ea8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153eac:
    // 0x153eac: 0xa203008a  sb          $v1, 0x8A($s0)
    ctx->pc = 0x153eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 3));
label_153eb0:
    // 0x153eb0: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x153eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
label_153eb4:
    // 0x153eb4: 0xa205008b  sb          $a1, 0x8B($s0)
    ctx->pc = 0x153eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 5));
label_153eb8:
    // 0x153eb8: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153ebc:
    // 0x153ebc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x153ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_153ec0:
    // 0x153ec0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153ec4:
    // 0x153ec4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_153ec8:
    // 0x153ec8: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
label_153ecc:
    // 0x153ecc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153ed0:
    // 0x153ed0: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_153ed4:
    // 0x153ed4: 0xa20300a0  sb          $v1, 0xA0($s0)
    ctx->pc = 0x153ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 3));
label_153ed8:
    // 0x153ed8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_153edc:
    // 0x153edc: 0xa20300a1  sb          $v1, 0xA1($s0)
    ctx->pc = 0x153edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 3));
label_153ee0:
    // 0x153ee0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_153ee4:
    // 0x153ee4: 0xa20300a2  sb          $v1, 0xA2($s0)
    ctx->pc = 0x153ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 3));
label_153ee8:
    // 0x153ee8: 0xa20500a3  sb          $a1, 0xA3($s0)
    ctx->pc = 0x153ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 5));
label_153eec:
    // 0x153eec: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x153eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
label_153ef0:
    // 0x153ef0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_153ef4:
    // 0x153ef4: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x153ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
label_153ef8:
    // 0x153ef8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_153efc:
    // 0x153efc: 0xa20300b9  sb          $v1, 0xB9($s0)
    ctx->pc = 0x153efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 3));
label_153f00:
    // 0x153f00: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_153f04:
    // 0x153f04: 0xa20300ba  sb          $v1, 0xBA($s0)
    ctx->pc = 0x153f04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 3));
label_153f08:
    // 0x153f08: 0xa20500bb  sb          $a1, 0xBB($s0)
    ctx->pc = 0x153f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 5));
label_153f0c:
    // 0x153f0c: 0xae0400bc  sw          $a0, 0xBC($s0)
    ctx->pc = 0x153f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 4));
label_153f10:
    // 0x153f10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_153f14:
    // 0x153f14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x153f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153f18:
    // 0x153f18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153f1c:
    // 0x153f1c: 0x3e00008  jr          $ra
label_153f20:
    if (ctx->pc == 0x153F20u) {
        ctx->pc = 0x153F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F1Cu;
        // 0x153f20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F24u;
        goto label_153f24;
    }
    ctx->pc = 0x153F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F1Cu;
        // 0x153f20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F24u;
label_153f24:
    // 0x153f24: 0x0  nop
    ctx->pc = 0x153f24u;
    // NOP
label_153f28:
    // 0x153f28: 0x0  nop
    ctx->pc = 0x153f28u;
    // NOP
label_153f2c:
    // 0x153f2c: 0x0  nop
    ctx->pc = 0x153f2cu;
    // NOP
label_153f30:
    // 0x153f30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x153f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_153f34:
    // 0x153f34: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_153f38:
    // 0x153f38: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x153f38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_153f3c:
    // 0x153f3c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_153f40:
    // 0x153f40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_153f44:
    // 0x153f44: 0x28a1000b  slti        $at, $a1, 0xB
    ctx->pc = 0x153f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
label_153f48:
    // 0x153f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_153f4c:
    // 0x153f4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_153f50:
    // 0x153f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_153f54:
    // 0x153f54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x153f54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_153f58:
    // 0x153f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_153f5c:
    // 0x153f5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x153f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_153f60:
    // 0x153f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_153f64:
    // 0x153f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_153f68:
    // 0x153f68: 0x1810  mfhi        $v1
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_153f6c:
    // 0x153f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x153f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_153f70:
    // 0x153f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_153f74:
    // 0x153f74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_153f78:
    // 0x153f78: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_153f7c:
    if (ctx->pc == 0x153F7Cu) {
        ctx->pc = 0x153F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F78u;
        // 0x153f7c: 0x24510178  addiu       $s1, $v0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F80u;
        goto label_153f80;
    }
    ctx->pc = 0x153F78u;
    {
        const bool branch_taken_0x153f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F78u;
        // 0x153f7c: 0x24510178  addiu       $s1, $v0, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f78) {
            ctx->pc = 0x153FA0u;
            goto label_153fa0;
        }
    }
    ctx->pc = 0x153F80u;
label_153f80:
    // 0x153f80: 0xc070834  jal         func_1C20D0
label_153f84:
    if (ctx->pc == 0x153F84u) {
        ctx->pc = 0x153F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F80u;
        // 0x153f84: 0x24a40024  addiu       $a0, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F88u;
        goto label_153f88;
    }
    ctx->pc = 0x153F80u;
    SET_GPR_U32(ctx, 31, 0x153F88u);
    ctx->pc = 0x153F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F80u;
    // 0x153f84: 0x24a40024  addiu       $a0, $a1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x153F88u;
label_153f88:
    // 0x153f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153f8c:
    // 0x153f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153f90:
    // 0x153f90: 0xc05e158  jal         func_178560
label_153f94:
    if (ctx->pc == 0x153F94u) {
        ctx->pc = 0x153F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F90u;
        // 0x153f94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153F98u;
        goto label_153f98;
    }
    ctx->pc = 0x153F90u;
    SET_GPR_U32(ctx, 31, 0x153F98u);
    ctx->pc = 0x153F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F90u;
    // 0x153f94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x153F98u;
label_153f98:
    // 0x153f98: 0x10000008  b           . + 4 + (0x8 << 2)
label_153f9c:
    if (ctx->pc == 0x153F9Cu) {
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FA0u;
        goto label_153fa0;
    }
    ctx->pc = 0x153F98u;
    {
        const bool branch_taken_0x153f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f98) {
            ctx->pc = 0x153FBCu;
            goto label_153fbc;
        }
    }
    ctx->pc = 0x153FA0u;
label_153fa0:
    // 0x153fa0: 0xc070834  jal         func_1C20D0
label_153fa4:
    if (ctx->pc == 0x153FA4u) {
        ctx->pc = 0x153FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FA0u;
        // 0x153fa4: 0x24a40032  addiu       $a0, $a1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FA8u;
        goto label_153fa8;
    }
    ctx->pc = 0x153FA0u;
    SET_GPR_U32(ctx, 31, 0x153FA8u);
    ctx->pc = 0x153FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FA0u;
    // 0x153fa4: 0x24a40032  addiu       $a0, $a1, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x153FA8u;
label_153fa8:
    // 0x153fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153fac:
    // 0x153fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153fb0:
    // 0x153fb0: 0xc05e158  jal         func_178560
label_153fb4:
    if (ctx->pc == 0x153FB4u) {
        ctx->pc = 0x153FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FB0u;
        // 0x153fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153FB8u;
        goto label_153fb8;
    }
    ctx->pc = 0x153FB0u;
    SET_GPR_U32(ctx, 31, 0x153FB8u);
    ctx->pc = 0x153FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153FB0u;
    // 0x153fb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x153FB8u;
label_153fb8:
    // 0x153fb8: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x153fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_153fbc:
    // 0x153fbc: 0x26220017  addiu       $v0, $s1, 0x17
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
label_153fc0:
    // 0x153fc0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x153fc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_153fc4:
    // 0x153fc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x153fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_153fc8:
    // 0x153fc8: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x153fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
label_153fcc:
    // 0x153fcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x153fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_153fd0:
    // 0x153fd0: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x153fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_153fd4:
    // 0x153fd4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x153fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
label_153fd8:
    // 0x153fd8: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x153fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_153fdc:
    // 0x153fdc: 0x240203fc  addiu       $v0, $zero, 0x3FC
    ctx->pc = 0x153fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_153fe0:
    // 0x153fe0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x153fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_153fe4:
    // 0x153fe4: 0x3402e800  ori         $v0, $zero, 0xE800
    ctx->pc = 0x153fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
label_153fe8:
    // 0x153fe8: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x153fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_153fec:
    // 0x153fec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x153fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_153ff0:
    // 0x153ff0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_153ff4:
    // 0x153ff4: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x153ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_153ff8:
    // 0x153ff8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x153ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_153ffc:
    // 0x153ffc: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x153ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_154000:
    // 0x154000: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_154004:
    // 0x154004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x154004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154008:
    // 0x154008: 0xa6060020  sh          $a2, 0x20($s0)
    ctx->pc = 0x154008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 6));
label_15400c:
    // 0x15400c: 0x24040e88  addiu       $a0, $zero, 0xE88
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3720));
label_154010:
    // 0x154010: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x154010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_154014:
    // 0x154014: 0xa6040022  sh          $a0, 0x22($s0)
    ctx->pc = 0x154014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 4));
label_154018:
    // 0x154018: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_15401c:
    // 0x15401c: 0xa6050038  sh          $a1, 0x38($s0)
    ctx->pc = 0x15401cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 5));
label_154020:
    // 0x154020: 0x24476c00  addiu       $a3, $v0, 0x6C00
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_154024:
    // 0x154024: 0xa604003a  sh          $a0, 0x3A($s0)
    ctx->pc = 0x154024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 4));
label_154028:
    // 0x154028: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x154028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_15402c:
    // 0x15402c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154030:
    // 0x154030: 0x24031008  addiu       $v1, $zero, 0x1008
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
label_154034:
    // 0x154034: 0xa6060050  sh          $a2, 0x50($s0)
    ctx->pc = 0x154034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 6));
label_154038:
    // 0x154038: 0x24486c00  addiu       $t0, $v0, 0x6C00
    ctx->pc = 0x154038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_15403c:
    // 0x15403c: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x15403cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
label_154040:
    // 0x154040: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_154044:
    // 0x154044: 0xa6050068  sh          $a1, 0x68($s0)
    ctx->pc = 0x154044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 5));
label_154048:
    // 0x154048: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x154048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_15404c:
    // 0x15404c: 0xa603006a  sh          $v1, 0x6A($s0)
    ctx->pc = 0x15404cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 3));
label_154050:
    // 0x154050: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x154050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_154054:
    // 0x154054: 0xa6070028  sh          $a3, 0x28($s0)
    ctx->pc = 0x154054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 7));
label_154058:
    // 0x154058: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x154058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_15405c:
    // 0x15405c: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x15405cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
label_154060:
    // 0x154060: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x154060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_154064:
    // 0x154064: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x154064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_154068:
    // 0x154068: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x154068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_15406c:
    // 0x15406c: 0xa6080040  sh          $t0, 0x40($s0)
    ctx->pc = 0x15406cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 8));
label_154070:
    // 0x154070: 0xa6040042  sh          $a0, 0x42($s0)
    ctx->pc = 0x154070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 4));
label_154074:
    // 0x154074: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x154074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
label_154078:
    // 0x154078: 0xa6070058  sh          $a3, 0x58($s0)
    ctx->pc = 0x154078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 7));
label_15407c:
    // 0x15407c: 0xa605005a  sh          $a1, 0x5A($s0)
    ctx->pc = 0x15407cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 5));
label_154080:
    // 0x154080: 0xae12005c  sw          $s2, 0x5C($s0)
    ctx->pc = 0x154080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 18));
label_154084:
    // 0x154084: 0xa6080070  sh          $t0, 0x70($s0)
    ctx->pc = 0x154084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 8));
label_154088:
    // 0x154088: 0xa6050072  sh          $a1, 0x72($s0)
    ctx->pc = 0x154088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 5));
label_15408c:
    // 0x15408c: 0xae120074  sw          $s2, 0x74($s0)
    ctx->pc = 0x15408cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
label_154090:
    // 0x154090: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_154094:
    // 0x154094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154098:
    // 0x154098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15409c:
    // 0x15409c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15409cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1540a0:
    // 0x1540a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1540a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1540a4:
    // 0x1540a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1540a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1540a8:
    // 0x1540a8: 0x3e00008  jr          $ra
label_1540ac:
    if (ctx->pc == 0x1540ACu) {
        ctx->pc = 0x1540ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540A8u;
        // 0x1540ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540B0u;
        goto label_1540b0;
    }
    ctx->pc = 0x1540A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540A8u;
        // 0x1540ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540B0u;
label_1540b0:
    // 0x1540b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1540b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1540b4:
    // 0x1540b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1540b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1540b8:
    // 0x1540b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1540b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1540bc:
    // 0x1540bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1540bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1540c0:
    // 0x1540c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1540c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1540c4:
    // 0x1540c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1540c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1540c8:
    // 0x1540c8: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1540c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1540cc:
    // 0x1540cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1540ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1540d0:
    // 0x1540d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1540d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1540d4:
    // 0x1540d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1540d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1540d8:
    // 0x1540d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1540d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1540dc:
    // 0x1540dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1540dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1540e0:
    // 0x1540e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1540e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1540e4:
    // 0x1540e4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1540e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1540e8:
    // 0x1540e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1540e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1540ec:
    // 0x1540ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1540ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1540f0:
    // 0x1540f0: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_1540f4:
    // 0x1540f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1540f8:
    if (ctx->pc == 0x1540F8u) {
        ctx->pc = 0x1540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540F4u;
        // 0x1540f8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540FCu;
        goto label_1540fc;
    }
    ctx->pc = 0x1540F4u;
    {
        const bool branch_taken_0x1540f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540F4u;
        // 0x1540f8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540f4) {
            ctx->pc = 0x15413Cu;
            goto label_15413c;
        }
    }
    ctx->pc = 0x1540FCu;
label_1540fc:
    // 0x1540fc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1540fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_154100:
    // 0x154100: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x154100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_154104:
    // 0x154104: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_154108:
    // 0x154108: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x154108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15410c:
    // 0x15410c: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x15410cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_154110:
    // 0x154110: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_154114:
    if (ctx->pc == 0x154114u) {
        ctx->pc = 0x154114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154110u;
        // 0x154114: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154118u;
        goto label_154118;
    }
    ctx->pc = 0x154110u;
    {
        const bool branch_taken_0x154110 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x154114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154110u;
        // 0x154114: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154110) {
            ctx->pc = 0x154120u;
            goto label_154120;
        }
    }
    ctx->pc = 0x154118u;
label_154118:
    // 0x154118: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x154118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_15411c:
    // 0x15411c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x15411cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_154120:
    // 0x154120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_154124:
    // 0x154124: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_154128:
    // 0x154128: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_15412c:
    if (ctx->pc == 0x15412Cu) {
        ctx->pc = 0x15412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154128u;
        // 0x15412c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154130u;
        goto label_154130;
    }
    ctx->pc = 0x154128u;
    {
        const bool branch_taken_0x154128 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154128u;
        // 0x15412c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154128) {
            ctx->pc = 0x154138u;
            goto label_154138;
        }
    }
    ctx->pc = 0x154130u;
label_154130:
    // 0x154130: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_154134:
    // 0x154134: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x154134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_154138:
    // 0x154138: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x154138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15413c:
    // 0x15413c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x15413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_154140:
    // 0x154140: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x154140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154144:
    // 0x154144: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x154144u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_154148:
    // 0x154148: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x154148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15414c:
    // 0x15414c: 0x0  nop
    ctx->pc = 0x15414cu;
    // NOP
label_154150:
    // 0x154150: 0x2810  mfhi        $a1
    ctx->pc = 0x154150u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_154154:
    // 0x154154: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x154154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_154158:
    // 0x154158: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x154158u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_15415c:
    // 0x15415c: 0xdf858618  ld          $a1, -0x79E8($gp)
    ctx->pc = 0x15415cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936088)));
label_154160:
    // 0x154160: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x154160u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154164:
    // 0x154164: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x154164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_154168:
    // 0x154168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15416c:
    // 0x15416c: 0xc05e158  jal         func_178560
label_154170:
    if (ctx->pc == 0x154170u) {
        ctx->pc = 0x154170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15416Cu;
        // 0x154170: 0x2b0c0  sll         $s6, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154174u;
        goto label_154174;
    }
    ctx->pc = 0x15416Cu;
    SET_GPR_U32(ctx, 31, 0x154174u);
    ctx->pc = 0x154170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15416Cu;
    // 0x154170: 0x2b0c0  sll         $s6, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x154174u;
label_154174:
    // 0x154174: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_154178:
    // 0x154178: 0x15383c  dsll32      $a3, $s5, 0
    ctx->pc = 0x154178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 0));
label_15417c:
    // 0x15417c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_154180:
    // 0x154180: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x154180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_154184:
    // 0x154184: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_154188:
    // 0x154188: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x154188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
label_15418c:
    // 0x15418c: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x15418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    ctx->pc = 0x154190u;
    return;
}
