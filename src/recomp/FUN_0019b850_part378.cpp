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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2539a0u: goto label_2539a0;
        case 0x2539a4u: goto label_2539a4;
        case 0x2539a8u: goto label_2539a8;
        case 0x2539acu: goto label_2539ac;
        case 0x2539b0u: goto label_2539b0;
        case 0x2539b4u: goto label_2539b4;
        case 0x2539b8u: goto label_2539b8;
        case 0x2539bcu: goto label_2539bc;
        case 0x2539c0u: goto label_2539c0;
        case 0x2539c4u: goto label_2539c4;
        case 0x2539c8u: goto label_2539c8;
        case 0x2539ccu: goto label_2539cc;
        case 0x2539d0u: goto label_2539d0;
        case 0x2539d4u: goto label_2539d4;
        case 0x2539d8u: goto label_2539d8;
        case 0x2539dcu: goto label_2539dc;
        case 0x2539e0u: goto label_2539e0;
        case 0x2539e4u: goto label_2539e4;
        case 0x2539e8u: goto label_2539e8;
        case 0x2539ecu: goto label_2539ec;
        case 0x2539f0u: goto label_2539f0;
        case 0x2539f4u: goto label_2539f4;
        case 0x2539f8u: goto label_2539f8;
        case 0x2539fcu: goto label_2539fc;
        case 0x253a00u: goto label_253a00;
        case 0x253a04u: goto label_253a04;
        case 0x253a08u: goto label_253a08;
        case 0x253a0cu: goto label_253a0c;
        case 0x253a10u: goto label_253a10;
        case 0x253a14u: goto label_253a14;
        case 0x253a18u: goto label_253a18;
        case 0x253a1cu: goto label_253a1c;
        case 0x253a20u: goto label_253a20;
        case 0x253a24u: goto label_253a24;
        case 0x253a28u: goto label_253a28;
        case 0x253a2cu: goto label_253a2c;
        case 0x253a30u: goto label_253a30;
        case 0x253a34u: goto label_253a34;
        case 0x253a38u: goto label_253a38;
        case 0x253a3cu: goto label_253a3c;
        case 0x253a40u: goto label_253a40;
        case 0x253a44u: goto label_253a44;
        case 0x253a48u: goto label_253a48;
        case 0x253a4cu: goto label_253a4c;
        case 0x253a50u: goto label_253a50;
        case 0x253a54u: goto label_253a54;
        case 0x253a58u: goto label_253a58;
        case 0x253a5cu: goto label_253a5c;
        case 0x253a60u: goto label_253a60;
        case 0x253a64u: goto label_253a64;
        case 0x253a68u: goto label_253a68;
        case 0x253a6cu: goto label_253a6c;
        case 0x253a70u: goto label_253a70;
        case 0x253a74u: goto label_253a74;
        case 0x253a78u: goto label_253a78;
        case 0x253a7cu: goto label_253a7c;
        case 0x253a80u: goto label_253a80;
        case 0x253a84u: goto label_253a84;
        case 0x253a88u: goto label_253a88;
        case 0x253a8cu: goto label_253a8c;
        case 0x253a90u: goto label_253a90;
        case 0x253a94u: goto label_253a94;
        case 0x253a98u: goto label_253a98;
        case 0x253a9cu: goto label_253a9c;
        case 0x253aa0u: goto label_253aa0;
        case 0x253aa4u: goto label_253aa4;
        case 0x253aa8u: goto label_253aa8;
        case 0x253aacu: goto label_253aac;
        case 0x253ab0u: goto label_253ab0;
        case 0x253ab4u: goto label_253ab4;
        case 0x253ab8u: goto label_253ab8;
        case 0x253abcu: goto label_253abc;
        case 0x253ac0u: goto label_253ac0;
        case 0x253ac4u: goto label_253ac4;
        case 0x253ac8u: goto label_253ac8;
        case 0x253accu: goto label_253acc;
        case 0x253ad0u: goto label_253ad0;
        case 0x253ad4u: goto label_253ad4;
        case 0x253ad8u: goto label_253ad8;
        case 0x253adcu: goto label_253adc;
        case 0x253ae0u: goto label_253ae0;
        case 0x253ae4u: goto label_253ae4;
        case 0x253ae8u: goto label_253ae8;
        case 0x253aecu: goto label_253aec;
        case 0x253af0u: goto label_253af0;
        case 0x253af4u: goto label_253af4;
        case 0x253af8u: goto label_253af8;
        case 0x253afcu: goto label_253afc;
        case 0x253b00u: goto label_253b00;
        case 0x253b04u: goto label_253b04;
        case 0x253b08u: goto label_253b08;
        case 0x253b0cu: goto label_253b0c;
        case 0x253b10u: goto label_253b10;
        case 0x253b14u: goto label_253b14;
        case 0x253b18u: goto label_253b18;
        case 0x253b1cu: goto label_253b1c;
        case 0x253b20u: goto label_253b20;
        case 0x253b24u: goto label_253b24;
        case 0x253b28u: goto label_253b28;
        case 0x253b2cu: goto label_253b2c;
        case 0x253b30u: goto label_253b30;
        case 0x253b34u: goto label_253b34;
        case 0x253b38u: goto label_253b38;
        case 0x253b3cu: goto label_253b3c;
        case 0x253b40u: goto label_253b40;
        case 0x253b44u: goto label_253b44;
        case 0x253b48u: goto label_253b48;
        case 0x253b4cu: goto label_253b4c;
        case 0x253b50u: goto label_253b50;
        case 0x253b54u: goto label_253b54;
        case 0x253b58u: goto label_253b58;
        case 0x253b5cu: goto label_253b5c;
        case 0x253b60u: goto label_253b60;
        case 0x253b64u: goto label_253b64;
        case 0x253b68u: goto label_253b68;
        case 0x253b6cu: goto label_253b6c;
        case 0x253b70u: goto label_253b70;
        case 0x253b74u: goto label_253b74;
        case 0x253b78u: goto label_253b78;
        case 0x253b7cu: goto label_253b7c;
        case 0x253b80u: goto label_253b80;
        case 0x253b84u: goto label_253b84;
        case 0x253b88u: goto label_253b88;
        case 0x253b8cu: goto label_253b8c;
        case 0x253b90u: goto label_253b90;
        case 0x253b94u: goto label_253b94;
        case 0x253b98u: goto label_253b98;
        case 0x253b9cu: goto label_253b9c;
        case 0x253ba0u: goto label_253ba0;
        case 0x253ba4u: goto label_253ba4;
        case 0x253ba8u: goto label_253ba8;
        case 0x253bacu: goto label_253bac;
        case 0x253bb0u: goto label_253bb0;
        case 0x253bb4u: goto label_253bb4;
        case 0x253bb8u: goto label_253bb8;
        case 0x253bbcu: goto label_253bbc;
        case 0x253bc0u: goto label_253bc0;
        case 0x253bc4u: goto label_253bc4;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bccu: goto label_253bcc;
        case 0x253bd0u: goto label_253bd0;
        case 0x253bd4u: goto label_253bd4;
        case 0x253bd8u: goto label_253bd8;
        case 0x253bdcu: goto label_253bdc;
        case 0x253be0u: goto label_253be0;
        case 0x253be4u: goto label_253be4;
        case 0x253be8u: goto label_253be8;
        case 0x253becu: goto label_253bec;
        case 0x253bf0u: goto label_253bf0;
        case 0x253bf4u: goto label_253bf4;
        case 0x253bf8u: goto label_253bf8;
        case 0x253bfcu: goto label_253bfc;
        case 0x253c00u: goto label_253c00;
        case 0x253c04u: goto label_253c04;
        case 0x253c08u: goto label_253c08;
        case 0x253c0cu: goto label_253c0c;
        case 0x253c10u: goto label_253c10;
        case 0x253c14u: goto label_253c14;
        case 0x253c18u: goto label_253c18;
        case 0x253c1cu: goto label_253c1c;
        case 0x253c20u: goto label_253c20;
        case 0x253c24u: goto label_253c24;
        case 0x253c28u: goto label_253c28;
        case 0x253c2cu: goto label_253c2c;
        case 0x253c30u: goto label_253c30;
        case 0x253c34u: goto label_253c34;
        case 0x253c38u: goto label_253c38;
        case 0x253c3cu: goto label_253c3c;
        case 0x253c40u: goto label_253c40;
        case 0x253c44u: goto label_253c44;
        case 0x253c48u: goto label_253c48;
        case 0x253c4cu: goto label_253c4c;
        case 0x253c50u: goto label_253c50;
        case 0x253c54u: goto label_253c54;
        case 0x253c58u: goto label_253c58;
        case 0x253c5cu: goto label_253c5c;
        case 0x253c60u: goto label_253c60;
        case 0x253c64u: goto label_253c64;
        case 0x253c68u: goto label_253c68;
        case 0x253c6cu: goto label_253c6c;
        case 0x253c70u: goto label_253c70;
        case 0x253c74u: goto label_253c74;
        case 0x253c78u: goto label_253c78;
        case 0x253c7cu: goto label_253c7c;
        case 0x253c80u: goto label_253c80;
        case 0x253c84u: goto label_253c84;
        case 0x253c88u: goto label_253c88;
        case 0x253c8cu: goto label_253c8c;
        case 0x253c90u: goto label_253c90;
        case 0x253c94u: goto label_253c94;
        case 0x253c98u: goto label_253c98;
        case 0x253c9cu: goto label_253c9c;
        case 0x253ca0u: goto label_253ca0;
        case 0x253ca4u: goto label_253ca4;
        case 0x253ca8u: goto label_253ca8;
        case 0x253cacu: goto label_253cac;
        case 0x253cb0u: goto label_253cb0;
        case 0x253cb4u: goto label_253cb4;
        case 0x253cb8u: goto label_253cb8;
        case 0x253cbcu: goto label_253cbc;
        case 0x253cc0u: goto label_253cc0;
        case 0x253cc4u: goto label_253cc4;
        case 0x253cc8u: goto label_253cc8;
        case 0x253cccu: goto label_253ccc;
        case 0x253cd0u: goto label_253cd0;
        case 0x253cd4u: goto label_253cd4;
        case 0x253cd8u: goto label_253cd8;
        case 0x253cdcu: goto label_253cdc;
        case 0x253ce0u: goto label_253ce0;
        case 0x253ce4u: goto label_253ce4;
        case 0x253ce8u: goto label_253ce8;
        case 0x253cecu: goto label_253cec;
        case 0x253cf0u: goto label_253cf0;
        case 0x253cf4u: goto label_253cf4;
        case 0x253cf8u: goto label_253cf8;
        case 0x253cfcu: goto label_253cfc;
        case 0x253d00u: goto label_253d00;
        case 0x253d04u: goto label_253d04;
        case 0x253d08u: goto label_253d08;
        case 0x253d0cu: goto label_253d0c;
        case 0x253d10u: goto label_253d10;
        case 0x253d14u: goto label_253d14;
        case 0x253d18u: goto label_253d18;
        case 0x253d1cu: goto label_253d1c;
        case 0x253d20u: goto label_253d20;
        case 0x253d24u: goto label_253d24;
        case 0x253d28u: goto label_253d28;
        case 0x253d2cu: goto label_253d2c;
        case 0x253d30u: goto label_253d30;
        case 0x253d34u: goto label_253d34;
        case 0x253d38u: goto label_253d38;
        case 0x253d3cu: goto label_253d3c;
        case 0x253d40u: goto label_253d40;
        case 0x253d44u: goto label_253d44;
        case 0x253d48u: goto label_253d48;
        case 0x253d4cu: goto label_253d4c;
        case 0x253d50u: goto label_253d50;
        case 0x253d54u: goto label_253d54;
        case 0x253d58u: goto label_253d58;
        case 0x253d5cu: goto label_253d5c;
        case 0x253d60u: goto label_253d60;
        case 0x253d64u: goto label_253d64;
        case 0x253d68u: goto label_253d68;
        case 0x253d6cu: goto label_253d6c;
        case 0x253d70u: goto label_253d70;
        case 0x253d74u: goto label_253d74;
        case 0x253d78u: goto label_253d78;
        case 0x253d7cu: goto label_253d7c;
        case 0x253d80u: goto label_253d80;
        case 0x253d84u: goto label_253d84;
        case 0x253d88u: goto label_253d88;
        case 0x253d8cu: goto label_253d8c;
        case 0x253d90u: goto label_253d90;
        case 0x253d94u: goto label_253d94;
        case 0x253d98u: goto label_253d98;
        case 0x253d9cu: goto label_253d9c;
        case 0x253da0u: goto label_253da0;
        case 0x253da4u: goto label_253da4;
        case 0x253da8u: goto label_253da8;
        case 0x253dacu: goto label_253dac;
        case 0x253db0u: goto label_253db0;
        case 0x253db4u: goto label_253db4;
        case 0x253db8u: goto label_253db8;
        case 0x253dbcu: goto label_253dbc;
        case 0x253dc0u: goto label_253dc0;
        case 0x253dc4u: goto label_253dc4;
        case 0x253dc8u: goto label_253dc8;
        case 0x253dccu: goto label_253dcc;
        case 0x253dd0u: goto label_253dd0;
        case 0x253dd4u: goto label_253dd4;
        case 0x253dd8u: goto label_253dd8;
        case 0x253ddcu: goto label_253ddc;
        case 0x253de0u: goto label_253de0;
        case 0x253de4u: goto label_253de4;
        case 0x253de8u: goto label_253de8;
        case 0x253decu: goto label_253dec;
        case 0x253df0u: goto label_253df0;
        case 0x253df4u: goto label_253df4;
        case 0x253df8u: goto label_253df8;
        case 0x253dfcu: goto label_253dfc;
        case 0x253e00u: goto label_253e00;
        case 0x253e04u: goto label_253e04;
        case 0x253e08u: goto label_253e08;
        case 0x253e0cu: goto label_253e0c;
        case 0x253e10u: goto label_253e10;
        case 0x253e14u: goto label_253e14;
        case 0x253e18u: goto label_253e18;
        case 0x253e1cu: goto label_253e1c;
        case 0x253e20u: goto label_253e20;
        case 0x253e24u: goto label_253e24;
        case 0x253e28u: goto label_253e28;
        case 0x253e2cu: goto label_253e2c;
        case 0x253e30u: goto label_253e30;
        case 0x253e34u: goto label_253e34;
        case 0x253e38u: goto label_253e38;
        case 0x253e3cu: goto label_253e3c;
        case 0x253e40u: goto label_253e40;
        case 0x253e44u: goto label_253e44;
        case 0x253e48u: goto label_253e48;
        case 0x253e4cu: goto label_253e4c;
        case 0x253e50u: goto label_253e50;
        case 0x253e54u: goto label_253e54;
        case 0x253e58u: goto label_253e58;
        case 0x253e5cu: goto label_253e5c;
        case 0x253e60u: goto label_253e60;
        case 0x253e64u: goto label_253e64;
        case 0x253e68u: goto label_253e68;
        case 0x253e6cu: goto label_253e6c;
        case 0x253e70u: goto label_253e70;
        case 0x253e74u: goto label_253e74;
        case 0x253e78u: goto label_253e78;
        case 0x253e7cu: goto label_253e7c;
        case 0x253e80u: goto label_253e80;
        case 0x253e84u: goto label_253e84;
        case 0x253e88u: goto label_253e88;
        case 0x253e8cu: goto label_253e8c;
        case 0x253e90u: goto label_253e90;
        case 0x253e94u: goto label_253e94;
        case 0x253e98u: goto label_253e98;
        case 0x253e9cu: goto label_253e9c;
        case 0x253ea0u: goto label_253ea0;
        case 0x253ea4u: goto label_253ea4;
        case 0x253ea8u: goto label_253ea8;
        case 0x253eacu: goto label_253eac;
        case 0x253eb0u: goto label_253eb0;
        case 0x253eb4u: goto label_253eb4;
        case 0x253eb8u: goto label_253eb8;
        case 0x253ebcu: goto label_253ebc;
        case 0x253ec0u: goto label_253ec0;
        case 0x253ec4u: goto label_253ec4;
        case 0x253ec8u: goto label_253ec8;
        case 0x253eccu: goto label_253ecc;
        case 0x253ed0u: goto label_253ed0;
        case 0x253ed4u: goto label_253ed4;
        case 0x253ed8u: goto label_253ed8;
        case 0x253edcu: goto label_253edc;
        case 0x253ee0u: goto label_253ee0;
        case 0x253ee4u: goto label_253ee4;
        case 0x253ee8u: goto label_253ee8;
        case 0x253eecu: goto label_253eec;
        case 0x253ef0u: goto label_253ef0;
        case 0x253ef4u: goto label_253ef4;
        case 0x253ef8u: goto label_253ef8;
        case 0x253efcu: goto label_253efc;
        case 0x253f00u: goto label_253f00;
        case 0x253f04u: goto label_253f04;
        case 0x253f08u: goto label_253f08;
        case 0x253f0cu: goto label_253f0c;
        case 0x253f10u: goto label_253f10;
        case 0x253f14u: goto label_253f14;
        case 0x253f18u: goto label_253f18;
        case 0x253f1cu: goto label_253f1c;
        case 0x253f20u: goto label_253f20;
        case 0x253f24u: goto label_253f24;
        case 0x253f28u: goto label_253f28;
        case 0x253f2cu: goto label_253f2c;
        case 0x253f30u: goto label_253f30;
        case 0x253f34u: goto label_253f34;
        case 0x253f38u: goto label_253f38;
        case 0x253f3cu: goto label_253f3c;
        case 0x253f40u: goto label_253f40;
        case 0x253f44u: goto label_253f44;
        case 0x253f48u: goto label_253f48;
        case 0x253f4cu: goto label_253f4c;
        case 0x253f50u: goto label_253f50;
        case 0x253f54u: goto label_253f54;
        case 0x253f58u: goto label_253f58;
        case 0x253f5cu: goto label_253f5c;
        case 0x253f60u: goto label_253f60;
        case 0x253f64u: goto label_253f64;
        case 0x253f68u: goto label_253f68;
        case 0x253f6cu: goto label_253f6c;
        case 0x253f70u: goto label_253f70;
        case 0x253f74u: goto label_253f74;
        case 0x253f78u: goto label_253f78;
        case 0x253f7cu: goto label_253f7c;
        case 0x253f80u: goto label_253f80;
        case 0x253f84u: goto label_253f84;
        case 0x253f88u: goto label_253f88;
        case 0x253f8cu: goto label_253f8c;
        case 0x253f90u: goto label_253f90;
        case 0x253f94u: goto label_253f94;
        case 0x253f98u: goto label_253f98;
        case 0x253f9cu: goto label_253f9c;
        case 0x253fa0u: goto label_253fa0;
        case 0x253fa4u: goto label_253fa4;
        case 0x253fa8u: goto label_253fa8;
        case 0x253facu: goto label_253fac;
        case 0x253fb0u: goto label_253fb0;
        case 0x253fb4u: goto label_253fb4;
        case 0x253fb8u: goto label_253fb8;
        case 0x253fbcu: goto label_253fbc;
        case 0x253fc0u: goto label_253fc0;
        case 0x253fc4u: goto label_253fc4;
        case 0x253fc8u: goto label_253fc8;
        case 0x253fccu: goto label_253fcc;
        case 0x253fd0u: goto label_253fd0;
        case 0x253fd4u: goto label_253fd4;
        case 0x253fd8u: goto label_253fd8;
        case 0x253fdcu: goto label_253fdc;
        case 0x253fe0u: goto label_253fe0;
        case 0x253fe4u: goto label_253fe4;
        case 0x253fe8u: goto label_253fe8;
        case 0x253fecu: goto label_253fec;
        case 0x253ff0u: goto label_253ff0;
        case 0x253ff4u: goto label_253ff4;
        case 0x253ff8u: goto label_253ff8;
        case 0x253ffcu: goto label_253ffc;
        case 0x254000u: goto label_254000;
        case 0x254004u: goto label_254004;
        case 0x254008u: goto label_254008;
        case 0x25400cu: goto label_25400c;
        case 0x254010u: goto label_254010;
        case 0x254014u: goto label_254014;
        case 0x254018u: goto label_254018;
        case 0x25401cu: goto label_25401c;
        case 0x254020u: goto label_254020;
        case 0x254024u: goto label_254024;
        case 0x254028u: goto label_254028;
        case 0x25402cu: goto label_25402c;
        case 0x254030u: goto label_254030;
        case 0x254034u: goto label_254034;
        case 0x254038u: goto label_254038;
        case 0x25403cu: goto label_25403c;
        case 0x254040u: goto label_254040;
        case 0x254044u: goto label_254044;
        case 0x254048u: goto label_254048;
        case 0x25404cu: goto label_25404c;
        case 0x254050u: goto label_254050;
        case 0x254054u: goto label_254054;
        case 0x254058u: goto label_254058;
        case 0x25405cu: goto label_25405c;
        case 0x254060u: goto label_254060;
        case 0x254064u: goto label_254064;
        case 0x254068u: goto label_254068;
        case 0x25406cu: goto label_25406c;
        case 0x254070u: goto label_254070;
        case 0x254074u: goto label_254074;
        case 0x254078u: goto label_254078;
        case 0x25407cu: goto label_25407c;
        case 0x254080u: goto label_254080;
        case 0x254084u: goto label_254084;
        case 0x254088u: goto label_254088;
        case 0x25408cu: goto label_25408c;
        case 0x254090u: goto label_254090;
        case 0x254094u: goto label_254094;
        case 0x254098u: goto label_254098;
        case 0x25409cu: goto label_25409c;
        case 0x2540a0u: goto label_2540a0;
        case 0x2540a4u: goto label_2540a4;
        case 0x2540a8u: goto label_2540a8;
        case 0x2540acu: goto label_2540ac;
        case 0x2540b0u: goto label_2540b0;
        case 0x2540b4u: goto label_2540b4;
        case 0x2540b8u: goto label_2540b8;
        case 0x2540bcu: goto label_2540bc;
        case 0x2540c0u: goto label_2540c0;
        case 0x2540c4u: goto label_2540c4;
        case 0x2540c8u: goto label_2540c8;
        case 0x2540ccu: goto label_2540cc;
        case 0x2540d0u: goto label_2540d0;
        case 0x2540d4u: goto label_2540d4;
        case 0x2540d8u: goto label_2540d8;
        case 0x2540dcu: goto label_2540dc;
        case 0x2540e0u: goto label_2540e0;
        case 0x2540e4u: goto label_2540e4;
        case 0x2540e8u: goto label_2540e8;
        case 0x2540ecu: goto label_2540ec;
        case 0x2540f0u: goto label_2540f0;
        case 0x2540f4u: goto label_2540f4;
        case 0x2540f8u: goto label_2540f8;
        case 0x2540fcu: goto label_2540fc;
        case 0x254100u: goto label_254100;
        case 0x254104u: goto label_254104;
        case 0x254108u: goto label_254108;
        case 0x25410cu: goto label_25410c;
        case 0x254110u: goto label_254110;
        case 0x254114u: goto label_254114;
        case 0x254118u: goto label_254118;
        case 0x25411cu: goto label_25411c;
        case 0x254120u: goto label_254120;
        case 0x254124u: goto label_254124;
        case 0x254128u: goto label_254128;
        case 0x25412cu: goto label_25412c;
        case 0x254130u: goto label_254130;
        case 0x254134u: goto label_254134;
        case 0x254138u: goto label_254138;
        case 0x25413cu: goto label_25413c;
        case 0x254140u: goto label_254140;
        case 0x254144u: goto label_254144;
        case 0x254148u: goto label_254148;
        case 0x25414cu: goto label_25414c;
        case 0x254150u: goto label_254150;
        case 0x254154u: goto label_254154;
        case 0x254158u: goto label_254158;
        case 0x25415cu: goto label_25415c;
        case 0x254160u: goto label_254160;
        case 0x254164u: goto label_254164;
        case 0x254168u: goto label_254168;
        case 0x25416cu: goto label_25416c;
        default: return;
    }

label_2539a0:
    if (ctx->pc == 0x2539A0u) {
        ctx->pc = 0x2539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25399Cu;
        // 0x2539a0: 0x306130d  break       774, 76 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2539A4u;
        goto label_2539a4;
    }
    ctx->pc = 0x25399Cu;
    {
        const bool branch_taken_0x25399c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25399Cu;
        // 0x2539a0: 0x306130d  break       774, 76 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25399c) {
            ctx->pc = 0x2555D8u;
            { ctx->pc = 0x2555d8; return; }
        }
    }
    ctx->pc = 0x2539A4u;
label_2539a4:
    // 0x2539a4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2539A4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2539a8:
    // 0x2539a8: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2539A8 raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2539ac:
    // 0x2539ac: 0x0  nop
    ctx->pc = 0x2539acu;
    // NOP
label_2539b0:
    // 0x2539b0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539b4:
    // 0x2539b4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539b8:
    // 0x2539b8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539bc:
    // 0x2539bc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539c0:
    // 0x2539c0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539c4:
    // 0x2539c4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539c8:
    // 0x2539c8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539cc:
    // 0x2539cc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d0:
    // 0x2539d0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d4:
    // 0x2539d4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d8:
    // 0x2539d8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539dc:
    // 0x2539dc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539e0:
    // 0x2539e0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539e4:
    // 0x2539e4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539e8:
    // 0x2539e8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539ec:
    // 0x2539ec: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f0:
    // 0x2539f0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f4:
    // 0x2539f4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f8:
    // 0x2539f8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539fc:
    // 0x2539fc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a00:
    // 0x253a00: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a04:
    // 0x253a04: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a08:
    // 0x253a08: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a0c:
    // 0x253a0c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a10:
    // 0x253a10: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a14:
    // 0x253a14: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a18:
    // 0x253a18: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a1c:
    // 0x253a1c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a20:
    // 0x253a20: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a24:
    // 0x253a24: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a28:
    // 0x253a28: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a2c:
    // 0x253a2c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a30:
    // 0x253a30: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a34:
    // 0x253a34: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a38:
    // 0x253a38: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a3c:
    // 0x253a3c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a40:
    // 0x253a40: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a44:
    // 0x253a44: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a48:
    // 0x253a48: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a4c:
    // 0x253a4c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a4cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a50:
    // 0x253a50: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a54:
    // 0x253a54: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a58:
    // 0x253a58: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a5c:
    // 0x253a5c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a60:
    // 0x253a60: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a64:
    // 0x253a64: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a68:
    // 0x253a68: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a6c:
    // 0x253a6c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a6cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a70:
    // 0x253a70: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a74:
    // 0x253a74: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a78:
    // 0x253a78: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a7c:
    // 0x253a7c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a7cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a80:
    // 0x253a80: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a84:
    // 0x253a84: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a88:
    // 0x253a88: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a8c:
    // 0x253a8c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a90:
    // 0x253a90: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a94:
    // 0x253a94: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a98:
    // 0x253a98: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a9c:
    // 0x253a9c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aa0:
    // 0x253aa0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aa4:
    // 0x253aa4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253aa8:
    // 0x253aa8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253aac:
    // 0x253aac: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aacu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ab0:
    // 0x253ab0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ab4:
    // 0x253ab4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ab8:
    // 0x253ab8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253abc:
    // 0x253abc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253abcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ac0:
    // 0x253ac0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ac4:
    // 0x253ac4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ac8:
    // 0x253ac8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253acc:
    // 0x253acc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253accu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad0:
    // 0x253ad0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad4:
    // 0x253ad4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad8:
    // 0x253ad8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253adc:
    // 0x253adc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253adcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ae0:
    // 0x253ae0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ae4:
    // 0x253ae4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ae8:
    // 0x253ae8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aec:
    // 0x253aec: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253af0:
    // 0x253af0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253af4:
    // 0x253af4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253af8:
    // 0x253af8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253afc:
    // 0x253afc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253afcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b00:
    // 0x253b00: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b04:
    // 0x253b04: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b08:
    // 0x253b08: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b0c:
    // 0x253b0c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b10:
    // 0x253b10: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b14:
    // 0x253b14: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b18:
    // 0x253b18: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b1c:
    // 0x253b1c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b20:
    // 0x253b20: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b24:
    // 0x253b24: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b28:
    // 0x253b28: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b2c:
    // 0x253b2c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b30:
    // 0x253b30: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b34:
    // 0x253b34: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b38:
    // 0x253b38: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_253b3c:
    // 0x253b3c: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_253b40:
    // 0x253b40: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x253b40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_253b44:
    // 0x253b44: 0x0  nop
    ctx->pc = 0x253b44u;
    // NOP
label_253b48:
    // 0x253b48: 0x0  nop
    ctx->pc = 0x253b48u;
    // NOP
label_253b4c:
    // 0x253b4c: 0x0  nop
    ctx->pc = 0x253b4cu;
    // NOP
label_253b50:
    // 0x253b50: 0xf0f1010  jal         func_C3C4040
label_253b54:
    if (ctx->pc == 0x253B54u) {
        ctx->pc = 0x253B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B50u;
        // 0x253b54: 0xe0e0e0f  jal         func_838383C (Delay Slot)
        // JAL 0x838383C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B58u;
        goto label_253b58;
    }
    ctx->pc = 0x253B50u;
    SET_GPR_U32(ctx, 31, 0x253B58u);
    ctx->pc = 0x253B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B50u;
    // 0x253b54: 0xe0e0e0f  jal         func_838383C (Delay Slot)
    // JAL 0x838383C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C4040u, 0x253B50u, 0x253B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B58u;
label_253b58:
    // 0x253b58: 0xd0d0d0e  jal         func_4343438
label_253b5c:
    if (ctx->pc == 0x253B5Cu) {
        ctx->pc = 0x253B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B58u;
        // 0x253b5c: 0xc0c0c0d  jal         func_303034 (Delay Slot)
        // JAL 0x303034 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B60u;
        goto label_253b60;
    }
    ctx->pc = 0x253B58u;
    SET_GPR_U32(ctx, 31, 0x253B60u);
    ctx->pc = 0x253B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B58u;
    // 0x253b5c: 0xc0c0c0d  jal         func_303034 (Delay Slot)
    // JAL 0x303034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4343438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4343438u, 0x253B58u, 0x253B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B60u;
label_253b60:
    // 0x253b60: 0xb0b0b0c  j           func_C2C2C30
label_253b64:
    if (ctx->pc == 0x253B64u) {
        ctx->pc = 0x253B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B60u;
        // 0x253b64: 0xa0a0a0b  j           func_828282C (Delay Slot)
        // J 0x828282C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B68u;
        goto label_253b68;
    }
    ctx->pc = 0x253B60u;
    ctx->pc = 0x253B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B60u;
    // 0x253b64: 0xa0a0a0b  j           func_828282C (Delay Slot)
    // J 0x828282C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2C30u, 0x253B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253B68u;
label_253b68:
    // 0x253b68: 0x909090a  j           func_4242428
label_253b6c:
    if (ctx->pc == 0x253B6Cu) {
        ctx->pc = 0x253B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B68u;
        // 0x253b6c: 0x7080809  tgei        $t8, 0x809 (Delay Slot)
        if (GPR_S64(ctx, 24) >= (int64_t)(int32_t)2057) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B70u;
        goto label_253b70;
    }
    ctx->pc = 0x253B68u;
    ctx->pc = 0x253B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B68u;
    // 0x253b6c: 0x7080809  tgei        $t8, 0x809 (Delay Slot)
    if (GPR_S64(ctx, 24) >= (int64_t)(int32_t)2057) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4242428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4242428u, 0x253B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253B70u;
label_253b70:
    // 0x253b70: 0x5060607  .word       0x05060607                   # INVALID     $t0, $a2, 0x607 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x253b70u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x253B70 raw=0x05060607");
 /* MITIGATED */
label_253b74:
    // 0x253b74: 0x3040405  .word       0x03040405                   # INVALID     $t8, $a0, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253B74 raw=0x03040405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253b78:
    // 0x253b78: 0x2020203  .word       0x02020203                   # sra         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_253b7c:
    // 0x253b7c: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x253b7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_253b80:
    // 0x253b80: 0x0  nop
    ctx->pc = 0x253b80u;
    // NOP
label_253b84:
    // 0x253b84: 0x4b4b0300  vaddx.xz    $vf12, $vf0, $vf11x
    ctx->pc = 0x253b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_253b88:
    // 0x253b88: 0x50784b4b  beql        $v1, $t8, . + 4 + (0x4B4B << 2)
label_253b8c:
    if (ctx->pc == 0x253B8Cu) {
        ctx->pc = 0x253B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B88u;
        // 0x253b8c: 0x1733091  .word       0x01733091                   # mthi        $t3 # 00133080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B90u;
        goto label_253b90;
    }
    ctx->pc = 0x253B88u;
    {
        const bool branch_taken_0x253b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x253b88) {
            ctx->pc = 0x253B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253B88u;
            // 0x253b8c: 0x1733091  .word       0x01733091                   # mthi        $t3 # 00133080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->hi = GPR_U64(ctx, 11);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2668B8u;
            { ctx->pc = 0x2668b8; return; }
        }
    }
    ctx->pc = 0x253B90u;
label_253b90:
    // 0x253b90: 0x1000101  .word       0x01000101                   # INVALID     $t0, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253B90 raw=0x01000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253b94:
    // 0x253b94: 0x56425405  bnel        $s2, $v0, . + 4 + (0x5405 << 2)
label_253b98:
    if (ctx->pc == 0x253B98u) {
        ctx->pc = 0x253B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B94u;
        // 0x253b98: 0x874b6e40  lh          $t3, 0x6E40($k0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B9Cu;
        goto label_253b9c;
    }
    ctx->pc = 0x253B94u;
    {
        const bool branch_taken_0x253b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x253b94) {
            ctx->pc = 0x253B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253B94u;
            // 0x253b98: 0x874b6e40  lh          $t3, 0x6E40($k0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268BACu;
            { ctx->pc = 0x268bac; return; }
        }
    }
    ctx->pc = 0x253B9Cu;
label_253b9c:
    // 0x253b9c: 0x1027331  tgeu        $t0, $v0, 460
    ctx->pc = 0x253b9cu;
    if (GPR_U64(ctx, 8) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_253ba0:
    // 0x253ba0: 0x3020002  .word       0x03020002                   # srl         $zero, $v0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_253ba4:
    // 0x253ba4: 0x44524452  .word       0x44524452                   # cfc1        $s2, $8 # 00000452 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253ba4u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR8
label_253ba8:
    // 0x253ba8: 0x32824664  andi        $v0, $s4, 0x4664
    ctx->pc = 0x253ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)18020);
label_253bac:
    // 0x253bac: 0x3010373  tltu        $t8, $at, 13
    ctx->pc = 0x253bacu;
    if (GPR_U64(ctx, 24) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_253bb0:
    // 0x253bb0: 0x56030300  bnel        $s0, $v1, . + 4 + (0x300 << 2)
label_253bb4:
    if (ctx->pc == 0x253BB4u) {
        ctx->pc = 0x253BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BB0u;
        // 0x253bb4: 0x7d484e40  sq          $t0, 0x4E40($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 20032), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BB8u;
        goto label_253bb8;
    }
    ctx->pc = 0x253BB0u;
    {
        const bool branch_taken_0x253bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x253bb0) {
            ctx->pc = 0x253BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BB0u;
            // 0x253bb4: 0x7d484e40  sq          $t0, 0x4E40($t2) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 10), 20032), GPR_VEC(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547B4u;
            { ctx->pc = 0x2547b4; return; }
        }
    }
    ctx->pc = 0x253BB8u;
label_253bb8:
    // 0x253bb8: 0x73339655  .word       0x73339655                   # INVALID     $t9, $s3, -0x69AB # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x253bb8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253BB8 raw=0x73339655"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253bbc:
    // 0x253bbc: 0x40004  sllv        $zero, $a0, $zero
    ctx->pc = 0x253bbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_253bc0:
    // 0x253bc0: 0x5a440304  .word       0x5A440304                   # blezl       $s2, . + 4 + (0x304 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_253bc4:
    if (ctx->pc == 0x253BC4u) {
        ctx->pc = 0x253BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC0u;
        // 0x253bc4: 0x41644846  .word       0x41644846                   # INVALID     $t3, $a0, 0x4846 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x253BC4 raw=0x41644846"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BC8u;
        goto label_253bc8;
    }
    ctx->pc = 0x253BC0u;
    {
        const bool branch_taken_0x253bc0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x253bc0) {
            ctx->pc = 0x253BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BC0u;
            // 0x253bc4: 0x41644846  .word       0x41644846                   # INVALID     $t3, $a0, 0x4846 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //             throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x253BC4 raw=0x41644846"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547D4u;
            { ctx->pc = 0x2547d4; return; }
        }
    }
    ctx->pc = 0x253BC8u;
label_253bc8:
    // 0x253bc8: 0x573347d  bgezall     $t3, . + 4 + (0x347D << 2)
label_253bcc:
    if (ctx->pc == 0x253BCCu) {
        ctx->pc = 0x253BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC8u;
        // 0x253bcc: 0x5000501  bltz        $t0, . + 4 + (0x501 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x254FD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BD0u;
        goto label_253bd0;
    }
    ctx->pc = 0x253BC8u;
    {
        const bool branch_taken_0x253bc8 = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x253bc8) {
            SET_GPR_U32(ctx, 31, 0x253BD0u);
            ctx->pc = 0x253BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BC8u;
            // 0x253bcc: 0x5000501  bltz        $t0, . + 4 + (0x501 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x254FD4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x260DC0u;
            { ctx->pc = 0x260dc0; return; }
        }
    }
    ctx->pc = 0x253BD0u;
label_253bd0:
    // 0x253bd0: 0x4e4a4c03  .word       0x4E4A4C03                   # INVALID     $s2, $t2, 0x4C03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253bd0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253BD0 raw=0x4E4A4C03");
 /* MITIGATED */
label_253bd4:
    // 0x253bd4: 0x783c5a48  lq          $gp, 0x5A48($at)
    ctx->pc = 0x253bd4u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23112)));
label_253bd8:
    // 0x253bd8: 0x2067335  .word       0x02067335                   # INVALID     $s0, $a2, 0x7335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253bd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x253BD8 raw=0x02067335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253bdc:
    // 0x253bdc: 0x3060006  srlv        $zero, $a2, $t8
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 24) & 0x1F));
label_253be0:
    // 0x253be0: 0x50465244  beql        $v0, $a2, . + 4 + (0x5244 << 2)
label_253be4:
    if (ctx->pc == 0x253BE4u) {
        ctx->pc = 0x253BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE0u;
        // 0x253be4: 0x369b5a82  ori         $k1, $s4, 0x5A82 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)23170);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BE8u;
        goto label_253be8;
    }
    ctx->pc = 0x253BE0u;
    {
        const bool branch_taken_0x253be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253be0) {
            ctx->pc = 0x253BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BE0u;
            // 0x253be4: 0x369b5a82  ori         $k1, $s4, 0x5A82 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)23170);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684F4u;
            { ctx->pc = 0x2684f4; return; }
        }
    }
    ctx->pc = 0x253BE8u;
label_253be8:
    // 0x253be8: 0x700076b  bltz        $t8, . + 4 + (0x76B << 2)
label_253bec:
    if (ctx->pc == 0x253BECu) {
        ctx->pc = 0x253BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE8u;
        // 0x253bec: 0x46030700  add.s       $f28, $f0, $f3 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BF0u;
        goto label_253bf0;
    }
    ctx->pc = 0x253BE8u;
    {
        const bool branch_taken_0x253be8 = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x253BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE8u;
        // 0x253bec: 0x46030700  add.s       $f28, $f0, $f3 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253be8) {
            ctx->pc = 0x255998u;
            { ctx->pc = 0x255998; return; }
        }
    }
    ctx->pc = 0x253BF0u;
label_253bf0:
    // 0x253bf0: 0x8c524450  lw          $s2, 0x4450($v0)
    ctx->pc = 0x253bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17488)));
label_253bf4:
    // 0x253bf4: 0x6b379b64  ldl         $s7, -0x649C($t9)
    ctx->pc = 0x253bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294941540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_253bf8:
    // 0x253bf8: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_253bfc:
    if (ctx->pc == 0x253BFCu) {
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0x52440308  beql        $s2, $a0, . + 4 + (0x308 << 2) (Delay Slot)
        // Likely branch instruction at 0x253BFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C00u;
        goto label_253c00;
    }
    ctx->pc = 0x253BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0x52440308  beql        $s2, $a0, . + 4 + (0x308 << 2) (Delay Slot)
        // Likely branch instruction at 0x253BFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253C00u;
label_253c00:
    // 0x253c00: 0x4b6e4254  vminix.xzw  $vf9, $vf8, $vf14x
    ctx->pc = 0x253c00u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_253c04:
    // 0x253c04: 0x9733887  j           func_5CCE21C
label_253c08:
    if (ctx->pc == 0x253C08u) {
        ctx->pc = 0x253C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C04u;
        // 0x253c08: 0x9000900  j           func_4002400 (Delay Slot)
        // J 0x4002400 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C0Cu;
        goto label_253c0c;
    }
    ctx->pc = 0x253C04u;
    ctx->pc = 0x253C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C04u;
    // 0x253c08: 0x9000900  j           func_4002400 (Delay Slot)
    // J 0x4002400 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x5CCE21Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5CCE21Cu, 0x253C04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253C0Cu;
label_253c0c:
    // 0x253c0c: 0x48544203  .word       0x48544203                   # cfc2.i      $s4, $vi8 # 00000202 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x253c0cu;
    SET_GPR_U32(ctx, 20, static_cast<uint32_t>(ctx->vi[8]));
label_253c10:
    // 0x253c10: 0x9b55874e  lwr         $s5, -0x78B2($k0)
    ctx->pc = 0x253c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294936398); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 21) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 21) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 21, merged64); }
label_253c14:
    // 0x253c14: 0x10a6739  .word       0x010A6739                   # INVALID     $t0, $t2, 0x6739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x253C14 raw=0x010A6739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c18:
    // 0x253c18: 0x30a000a  movz        $zero, $t8, $t2
    ctx->pc = 0x253c18u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 24));
label_253c1c:
    // 0x253c1c: 0x5e386036  .word       0x5E386036                   # bgtzl       $s1, . + 4 + (0x6036 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_253c20:
    if (ctx->pc == 0x253C20u) {
        ctx->pc = 0x253C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C1Cu;
        // 0x253c20: 0x3a8c5082  xori        $t4, $s4, 0x5082 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)20610);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C24u;
        goto label_253c24;
    }
    ctx->pc = 0x253C1Cu;
    {
        const bool branch_taken_0x253c1c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x253c1c) {
            ctx->pc = 0x253C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C1Cu;
            // 0x253c20: 0x3a8c5082  xori        $t4, $s4, 0x5082 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)20610);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BCF8u;
            { ctx->pc = 0x26bcf8; return; }
        }
    }
    ctx->pc = 0x253C24u;
label_253c24:
    // 0x253c24: 0xb030b7e  j           func_C0C2DF8
label_253c28:
    if (ctx->pc == 0x253C28u) {
        ctx->pc = 0x253C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C24u;
        // 0x253c28: 0x4a030b00  vaddx       $vf12, $vf1, $vf3x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C2Cu;
        goto label_253c2c;
    }
    ctx->pc = 0x253C24u;
    ctx->pc = 0x253C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C24u;
    // 0x253c28: 0x4a030b00  vaddx       $vf12, $vf1, $vf3x (Delay Slot)
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C2DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C2DF8u, 0x253C24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253C2Cu;
label_253c2c:
    // 0x253c2c: 0x7d484e4c  sq          $t0, 0x4E4C($t2)
    ctx->pc = 0x253c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 20044), GPR_VEC(ctx, 8));
label_253c30:
    // 0x253c30: 0x7f3b9155  sq          $k1, -0x6EAB($t9)
    ctx->pc = 0x253c30u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 4294938965), GPR_VEC(ctx, 27));
label_253c34:
    // 0x253c34: 0xc020c  .word       0x000C020C                   # syscall     8 # 000C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c34u;
    ctx->pc = 0x253C38u;
runtime->handleSyscall(rdram, ctx, 0x3008u);
label_253c38:
    // 0x253c38: 0x5a5a050c  .word       0x5A5A050C                   # blezl       $s2, . + 4 + (0x50C << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_253c3c:
    if (ctx->pc == 0x253C3Cu) {
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0x508c5a5a  beql        $a0, $t4, . + 4 + (0x5A5A << 2) (Delay Slot)
        // Likely branch instruction at 0x253C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C40u;
        goto label_253c40;
    }
    ctx->pc = 0x253C38u;
    {
        const bool branch_taken_0x253c38 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x253c38) {
            ctx->pc = 0x253C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C38u;
            // 0x253c3c: 0x508c5a5a  beql        $a0, $t4, . + 4 + (0x5A5A << 2) (Delay Slot)
            // Likely branch instruction at 0x253C3C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25506Cu;
            { ctx->pc = 0x25506c; return; }
        }
    }
    ctx->pc = 0x253C40u;
label_253c40:
    // 0x253c40: 0xd7f3c9b  jal         func_5FCF26C
label_253c44:
    if (ctx->pc == 0x253C44u) {
        ctx->pc = 0x253C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C40u;
        // 0x253c44: 0xd000d01  jal         func_4003404 (Delay Slot)
        // JAL 0x4003404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C48u;
        goto label_253c48;
    }
    ctx->pc = 0x253C40u;
    SET_GPR_U32(ctx, 31, 0x253C48u);
    ctx->pc = 0x253C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C40u;
    // 0x253c44: 0xd000d01  jal         func_4003404 (Delay Slot)
    // JAL 0x4003404 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x5FCF26Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5FCF26Cu, 0x253C40u, 0x253C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C48u;
label_253c48:
    // 0x253c48: 0x464c4a03  .word       0x464C4A03                   # INVALID     $s2, $t4, 0x4A03 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253c48u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253C48 raw=0x464C4A03"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c4c:
    // 0x253c4c: 0x9b5f8750  lwr         $ra, -0x78B0($k0)
    ctx->pc = 0x253c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294936400); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 31) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 31) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 31, merged64); }
label_253c50:
    // 0x253c50: 0x30e673d  .word       0x030E673D                   # INVALID     $t8, $t6, 0x673D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x253C50 raw=0x030E673D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c54:
    // 0x253c54: 0x412000e  bltzall     $zero, . + 4 + (0xE << 2)
label_253c58:
    if (ctx->pc == 0x253C58u) {
        ctx->pc = 0x253C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C54u;
        // 0x253c58: 0x4c4a4a4c  .word       0x4C4A4A4C                   # INVALID     $v0, $t2, 0x4A4C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C58 raw=0x4C4A4A4C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C5Cu;
        goto label_253c5c;
    }
    ctx->pc = 0x253C54u;
    {
        const bool branch_taken_0x253c54 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x253c54) {
            SET_GPR_U32(ctx, 31, 0x253C5Cu);
            ctx->pc = 0x253C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C54u;
            // 0x253c58: 0x4c4a4a4c  .word       0x4C4A4A4C                   # INVALID     $v0, $t2, 0x4A4C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C58 raw=0x4C4A4A4C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C90u;
            goto label_253c90;
        }
    }
    ctx->pc = 0x253C5Cu;
label_253c5c:
    // 0x253c5c: 0x3e8c5078  .word       0x3E8C5078                   # lui         $t4, 0x5078 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20600 << 16));
label_253c60:
    // 0x253c60: 0xf030f6b  jal         func_C0C3DAC
label_253c64:
    if (ctx->pc == 0x253C64u) {
        ctx->pc = 0x253C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C60u;
        // 0x253c64: 0x4e031200  .word       0x4E031200                   # INVALID     $s0, $v1, 0x1200 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C64 raw=0x4E031200");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C68u;
        goto label_253c68;
    }
    ctx->pc = 0x253C60u;
    SET_GPR_U32(ctx, 31, 0x253C68u);
    ctx->pc = 0x253C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C60u;
    // 0x253c64: 0x4e031200  .word       0x4E031200                   # INVALID     $s0, $v1, 0x1200 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C64 raw=0x4E031200");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3DACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3DACu, 0x253C60u, 0x253C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C68u;
label_253c68:
    // 0x253c68: 0x7d465048  sq          $a2, 0x5048($t2)
    ctx->pc = 0x253c68u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 20552), GPR_VEC(ctx, 6));
label_253c6c:
    // 0x253c6c: 0x7b3f8755  lq          $ra, -0x78AB($t9)
    ctx->pc = 0x253c6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 25), 4294936405)));
label_253c70:
    // 0x253c70: 0x100310  .word       0x00100310                   # mfhi        $zero # 00100300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_253c74:
    // 0x253c74: 0x50460312  beql        $v0, $a2, . + 4 + (0x312 << 2)
label_253c78:
    if (ctx->pc == 0x253C78u) {
        ctx->pc = 0x253C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C74u;
        // 0x253c78: 0x50784e48  beql        $v1, $t8, . + 4 + (0x4E48 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C78 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C7Cu;
        goto label_253c7c;
    }
    ctx->pc = 0x253C74u;
    {
        const bool branch_taken_0x253c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253c74) {
            ctx->pc = 0x253C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C74u;
            // 0x253c78: 0x50784e48  beql        $v1, $t8, . + 4 + (0x4E48 << 2) (Delay Slot)
            // Likely branch instruction at 0x253C78 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548C0u;
            { ctx->pc = 0x2548c0; return; }
        }
    }
    ctx->pc = 0x253C7Cu;
label_253c7c:
    // 0x253c7c: 0x117b408c  beq         $t3, $k1, . + 4 + (0x408C << 2)
label_253c80:
    if (ctx->pc == 0x253C80u) {
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x12001103  beqz        $s0, . + 4 + (0x1103 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C84u;
        goto label_253c84;
    }
    ctx->pc = 0x253C7Cu;
    {
        const bool branch_taken_0x253c7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 27));
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x12001103  beqz        $s0, . + 4 + (0x1103 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C80 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c7c) {
            ctx->pc = 0x263EB0u;
            { ctx->pc = 0x263eb0; return; }
        }
    }
    ctx->pc = 0x253C84u;
label_253c84:
    // 0x253c84: 0x4e484e03  .word       0x4E484E03                   # INVALID     $s2, $t0, 0x4E03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c84u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C84 raw=0x4E484E03");
 /* MITIGATED */
label_253c88:
    // 0x253c88: 0x82466e48  lb          $a2, 0x6E48($s2)
    ctx->pc = 0x253c88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28232)));
label_253c8c:
    // 0x253c8c: 0x3126341  .word       0x03126341                   # INVALID     $t8, $s2, 0x6341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253C8C raw=0x03126341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c90:
    // 0x253c90: 0x3120012  .word       0x03120012                   # mflo        $zero # 03120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c90u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253c94:
    // 0x253c94: 0x4c4a4c4a  .word       0x4C4A4C4A                   # INVALID     $v0, $t2, 0x4C4A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c94u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C94 raw=0x4C4A4C4A");
 /* MITIGATED */
label_253c98:
    // 0x253c98: 0x42874b73  .word       0x42874B73                   # INVALID     $s4, $a3, 0x4B73 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253c98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x253C98 raw=0x42874B73"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c9c:
    // 0x253c9c: 0x1301137b  beq         $t8, $at, . + 4 + (0x137B << 2)
label_253ca0:
    if (ctx->pc == 0x253CA0u) {
        ctx->pc = 0x253CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C9Cu;
        // 0x253ca0: 0x46031500  add.s       $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CA4u;
        goto label_253ca4;
    }
    ctx->pc = 0x253C9Cu;
    {
        const bool branch_taken_0x253c9c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 1));
        ctx->pc = 0x253CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C9Cu;
        // 0x253ca0: 0x46031500  add.s       $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c9c) {
            ctx->pc = 0x258A8Cu;
            { ctx->pc = 0x258a8c; return; }
        }
    }
    ctx->pc = 0x253CA4u;
label_253ca4:
    // 0x253ca4: 0x7d5a643c  sq          $k0, 0x643C($t2)
    ctx->pc = 0x253ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 25660), GPR_VEC(ctx, 26));
label_253ca8:
    // 0x253ca8: 0x73439155  .word       0x73439155                   # INVALID     $k0, $v1, -0x6EAB # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x253ca8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253CA8 raw=0x73439155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253cac:
    // 0x253cac: 0x140114  .word       0x00140114                   # dsllv       $zero, $s4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253cacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_253cb0:
    // 0x253cb0: 0x50640311  beql        $v1, $a0, . + 4 + (0x311 << 2)
label_253cb4:
    if (ctx->pc == 0x253CB4u) {
        ctx->pc = 0x253CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB0u;
        // 0x253cb4: 0x506e4646  beql        $v1, $t6, . + 4 + (0x4646 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CB4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CB8u;
        goto label_253cb8;
    }
    ctx->pc = 0x253CB0u;
    {
        const bool branch_taken_0x253cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x253cb0) {
            ctx->pc = 0x253CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253CB0u;
            // 0x253cb4: 0x506e4646  beql        $v1, $t6, . + 4 + (0x4646 << 2) (Delay Slot)
            // Likely branch instruction at 0x253CB4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548F8u;
            { ctx->pc = 0x2548f8; return; }
        }
    }
    ctx->pc = 0x253CB8u;
label_253cb8:
    // 0x253cb8: 0x1573448c  bne         $t3, $s3, . + 4 + (0x448C << 2)
label_253cbc:
    if (ctx->pc == 0x253CBCu) {
        ctx->pc = 0x253CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB8u;
        // 0x253cbc: 0x11001501  beqz        $t0, . + 4 + (0x1501 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CBC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CC0u;
        goto label_253cc0;
    }
    ctx->pc = 0x253CB8u;
    {
        const bool branch_taken_0x253cb8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x253CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB8u;
        // 0x253cbc: 0x11001501  beqz        $t0, . + 4 + (0x1501 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CBC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cb8) {
            ctx->pc = 0x264EECu;
            { ctx->pc = 0x264eec; return; }
        }
    }
    ctx->pc = 0x253CC0u;
label_253cc0:
    // 0x253cc0: 0x4e3a5c03  .word       0x4E3A5C03                   # INVALID     $s1, $k0, 0x5C03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253cc0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253CC0 raw=0x4E3A5C03");
 /* MITIGATED */
label_253cc4:
    // 0x253cc4: 0x82466e48  lb          $a2, 0x6E48($s2)
    ctx->pc = 0x253cc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28232)));
label_253cc8:
    // 0x253cc8: 0x1167345  .word       0x01167345                   # INVALID     $t0, $s6, 0x7345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253cc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253CC8 raw=0x01167345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253ccc:
    // 0x253ccc: 0x3170016  dsrlv       $zero, $s7, $t8
    ctx->pc = 0x253cccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> (GPR_U32(ctx, 24) & 0x3F));
label_253cd0:
    // 0x253cd0: 0x484e4452  .word       0x484E4452                   # cfc2.ni     $t6, $vi8 # 00000452 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x253cd0u;
    SET_GPR_U32(ctx, 14, static_cast<uint32_t>(ctx->vi[8]));
label_253cd4:
    // 0x253cd4: 0x468c5078  .word       0x468C5078                   # INVALID     $s4, $t4, 0x5078 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x253cd4u;
// //     throw std::runtime_error("Unhandled FPU.W instruction: function 0x38 at 0x253CD4 raw=0x468C5078"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253cd8:
    // 0x253cd8: 0x17001773  bnez        $t8, . + 4 + (0x1773 << 2)
label_253cdc:
    if (ctx->pc == 0x253CDCu) {
        ctx->pc = 0x253CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CD8u;
        // 0x253cdc: 0x38030a00  xori        $v1, $zero, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)2560);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CE0u;
        goto label_253ce0;
    }
    ctx->pc = 0x253CD8u;
    {
        const bool branch_taken_0x253cd8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x253CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CD8u;
        // 0x253cdc: 0x38030a00  xori        $v1, $zero, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)2560);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cd8) {
            ctx->pc = 0x259AA8u;
            { ctx->pc = 0x259aa8; return; }
        }
    }
    ctx->pc = 0x253CE0u;
label_253ce0:
    // 0x253ce0: 0x6e5c3a5e  ldr         $gp, 0x3A5E($s2)
    ctx->pc = 0x253ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
label_253ce4:
    // 0x253ce4: 0x7e478250  sq          $a3, -0x7DB0($s2)
    ctx->pc = 0x253ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294935120), GPR_VEC(ctx, 7));
label_253ce8:
    // 0x253ce8: 0x180118  .word       0x00180118                   # mult        $zero, $zero, $t8 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_253cec:
    // 0x253cec: 0x4b4b0317  vminiw.xz   $vf12, $vf0, $vf11w
    ctx->pc = 0x253cecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_253cf0:
    // 0x253cf0: 0x557d4b4b  bnel        $t3, $sp, . + 4 + (0x4B4B << 2)
label_253cf4:
    if (ctx->pc == 0x253CF4u) {
        ctx->pc = 0x253CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF0u;
        // 0x253cf4: 0x197b4891  .word       0x197B4891                   # blez        $t3, . + 4 + (0x4891 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253CF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CF8u;
        goto label_253cf8;
    }
    ctx->pc = 0x253CF0u;
    {
        const bool branch_taken_0x253cf0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 29));
        if (branch_taken_0x253cf0) {
            ctx->pc = 0x253CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253CF0u;
            // 0x253cf4: 0x197b4891  .word       0x197B4891                   # blez        $t3, . + 4 + (0x4891 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253CF4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A20u;
            { ctx->pc = 0x266a20; return; }
        }
    }
    ctx->pc = 0x253CF8u;
label_253cf8:
    // 0x253cf8: 0x11001901  beqz        $t0, . + 4 + (0x1901 << 2)
label_253cfc:
    if (ctx->pc == 0x253CFCu) {
        ctx->pc = 0x253CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF8u;
        // 0x253cfc: 0x46425403  .word       0x46425403                   # INVALID     $s2, $v0, 0x5403 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253CFC raw=0x46425403"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D00u;
        goto label_253d00;
    }
    ctx->pc = 0x253CF8u;
    {
        const bool branch_taken_0x253cf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF8u;
        // 0x253cfc: 0x46425403  .word       0x46425403                   # INVALID     $s2, $v0, 0x5403 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253CFC raw=0x46425403"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cf8) {
            ctx->pc = 0x25A100u;
            { ctx->pc = 0x25a100; return; }
        }
    }
    ctx->pc = 0x253D00u;
label_253d00:
    // 0x253d00: 0x965a8250  lhu         $k0, -0x7DB0($s2)
    ctx->pc = 0x253d00u;
    SET_GPR_ZE32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294935120)));
label_253d04:
    // 0x253d04: 0x1a7349  .word       0x001A7349                   # jalr        $t6, $zero # 001A0340 <InstrIdType: CPU_SPECIAL>
label_253d08:
    if (ctx->pc == 0x253D08u) {
        ctx->pc = 0x253D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D04u;
        // 0x253d08: 0x315001a  div         $zero, $t8, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D0Cu;
        goto label_253d0c;
    }
    ctx->pc = 0x253D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x253D0Cu);
        ctx->pc = 0x253D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D04u;
        // 0x253d08: 0x315001a  div         $zero, $t8, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253D04u, 0x253D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253D0Cu;
label_253d0c:
    // 0x253d0c: 0x4c4a4c4a  .word       0x4C4A4C4A                   # INVALID     $v0, $t2, 0x4C4A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253d0cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D0C raw=0x4C4A4C4A");
 /* MITIGATED */
label_253d10:
    // 0x253d10: 0x4a91557d  .word       0x4A91557D                   # INVALID     $s4, $s1, 0x557D # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x253d10u;
//     throw std::runtime_error("Unhandled VU0 Special2 function: 0x55 at 0x253D10 raw=0x4A91557D");
 /* MITIGATED */
label_253d14:
    // 0x253d14: 0x1b031b4b  .word       0x1B031B4B                   # blez        $t8, . + 4 + (0x1B4B << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_253d18:
    if (ctx->pc == 0x253D18u) {
        ctx->pc = 0x253D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D14u;
        // 0x253d18: 0x46032000  add.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D1Cu;
        goto label_253d1c;
    }
    ctx->pc = 0x253D14u;
    {
        const bool branch_taken_0x253d14 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x253D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D14u;
        // 0x253d18: 0x46032000  add.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d14) {
            ctx->pc = 0x25AA44u;
            { ctx->pc = 0x25aa44; return; }
        }
    }
    ctx->pc = 0x253D1Cu;
label_253d1c:
    // 0x253d1c: 0x78554150  lq          $s5, 0x4150($v0)
    ctx->pc = 0x253d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 2), 16720)));
label_253d20:
    // 0x253d20: 0x674b8250  daddiu      $t3, $k0, -0x7DB0
    ctx->pc = 0x253d20u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935120);
label_253d24:
    // 0x253d24: 0x1c011c  .word       0x001C011C                   # dmult       $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x253D24 raw=0x001C011C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d28:
    // 0x253d28: 0x4452031a  .word       0x4452031A                   # cfc1        $s2, $0 # 0000031A <InstrIdType: R5900_COP1>
    ctx->pc = 0x253d28u;
    SET_GPR_U32(ctx, 18, 0x00000000);
label_253d2c:
    // 0x253d2c: 0x5078484e  beql        $v1, $t8, . + 4 + (0x484E << 2)
label_253d30:
    if (ctx->pc == 0x253D30u) {
        ctx->pc = 0x253D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D2Cu;
        // 0x253d30: 0x1d674c8c  .word       0x1D674C8C                   # bgtz        $t3, . + 4 + (0x4C8C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253D30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D34u;
        goto label_253d34;
    }
    ctx->pc = 0x253D2Cu;
    {
        const bool branch_taken_0x253d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x253d2c) {
            ctx->pc = 0x253D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D2Cu;
            // 0x253d30: 0x1d674c8c  .word       0x1D674C8C                   # bgtz        $t3, . + 4 + (0x4C8C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253D30 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E68u;
            { ctx->pc = 0x265e68; return; }
        }
    }
    ctx->pc = 0x253D34u;
label_253d34:
    // 0x253d34: 0x1b001d01  blez        $t8, . + 4 + (0x1D01 << 2)
label_253d38:
    if (ctx->pc == 0x253D38u) {
        ctx->pc = 0x253D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D34u;
        // 0x253d38: 0x40544203  .word       0x40544203                   # cfc0        $s4, BadVaddr # 00000203 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253D38 raw=0x40544203"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D3Cu;
        goto label_253d3c;
    }
    ctx->pc = 0x253D34u;
    {
        const bool branch_taken_0x253d34 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x253D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D34u;
        // 0x253d38: 0x40544203  .word       0x40544203                   # cfc0        $s4, BadVaddr # 00000203 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253D38 raw=0x40544203"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d34) {
            ctx->pc = 0x25B13Cu;
            { ctx->pc = 0x25b13c; return; }
        }
    }
    ctx->pc = 0x253D3Cu;
label_253d3c:
    // 0x253d3c: 0xa05a8c56  sb          $k0, -0x73AA($v0)
    ctx->pc = 0x253d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937686), (uint8_t)GPR_U32(ctx, 26));
label_253d40:
    // 0x253d40: 0x11e674d  break       286, 413
    ctx->pc = 0x253d40u;
    runtime->handleBreak(rdram, ctx);
label_253d44:
    // 0x253d44: 0x31c001e  ddiv        $zero, $t8, $gp
    ctx->pc = 0x253d44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x253D44 raw=0x031C001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d48:
    // 0x253d48: 0x52444e48  beql        $s2, $a0, . + 4 + (0x4E48 << 2)
label_253d4c:
    if (ctx->pc == 0x253D4Cu) {
        ctx->pc = 0x253D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D48u;
        // 0x253d4c: 0x4e965a82  .word       0x4E965A82                   # INVALID     $s4, $s6, 0x5A82 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D4C raw=0x4E965A82");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D50u;
        goto label_253d50;
    }
    ctx->pc = 0x253D48u;
    {
        const bool branch_taken_0x253d48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x253d48) {
            ctx->pc = 0x253D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D48u;
            // 0x253d4c: 0x4e965a82  .word       0x4E965A82                   # INVALID     $s4, $s6, 0x5A82 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D4C raw=0x4E965A82");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26766Cu;
            { ctx->pc = 0x26766c; return; }
        }
    }
    ctx->pc = 0x253D50u;
label_253d50:
    // 0x253d50: 0x1f011f67  .word       0x1F011F67                   # bgtz        $t8, . + 4 + (0x1F67 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_253d54:
    if (ctx->pc == 0x253D54u) {
        ctx->pc = 0x253D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D50u;
        // 0x253d54: 0x4e031d00  .word       0x4E031D00                   # INVALID     $s0, $v1, 0x1D00 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D54 raw=0x4E031D00");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D58u;
        goto label_253d58;
    }
    ctx->pc = 0x253D50u;
    {
        const bool branch_taken_0x253d50 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x253D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D50u;
        // 0x253d54: 0x4e031d00  .word       0x4E031D00                   # INVALID     $s0, $v1, 0x1D00 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D54 raw=0x4E031D00");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d50) {
            ctx->pc = 0x25BAF0u;
            { ctx->pc = 0x25baf0; return; }
        }
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0x6e4c4a48  ldr         $t4, 0x4A48($s2)
    ctx->pc = 0x253d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19016); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_253d5c:
    // 0x253d5c: 0x674f824b  daddiu      $t7, $k0, -0x7DB5
    ctx->pc = 0x253d5cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935115);
label_253d60:
    // 0x253d60: 0x200020  add         $zero, $at, $zero
    ctx->pc = 0x253d60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_253d64:
    // 0x253d64: 0x4254031e  .word       0x4254031E                   # INVALID     $s2, $s4, 0x31E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253d64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x253D64 raw=0x4254031E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d68:
    // 0x253d68: 0x55824452  bnel        $t4, $v0, . + 4 + (0x4452 << 2)
label_253d6c:
    if (ctx->pc == 0x253D6Cu) {
        ctx->pc = 0x253D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D68u;
        // 0x253d6c: 0x21675091  addi        $a3, $t3, 0x5091 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)20625, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D70u;
        goto label_253d70;
    }
    ctx->pc = 0x253D68u;
    {
        const bool branch_taken_0x253d68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x253d68) {
            ctx->pc = 0x253D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D68u;
            // 0x253d6c: 0x21675091  addi        $a3, $t3, 0x5091 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)20625, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x264EB4u;
            { ctx->pc = 0x264eb4; return; }
        }
    }
    ctx->pc = 0x253D70u;
label_253d70:
    // 0x253d70: 0x1f002100  bgtz        $t8, . + 4 + (0x2100 << 2)
label_253d74:
    if (ctx->pc == 0x253D74u) {
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0x54425403  bnel        $v0, $v0, . + 4 + (0x5403 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D74 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D78u;
        goto label_253d78;
    }
    ctx->pc = 0x253D70u;
    {
        const bool branch_taken_0x253d70 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0x54425403  bnel        $v0, $v0, . + 4 + (0x5403 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D74 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d70) {
            ctx->pc = 0x25C174u;
            { ctx->pc = 0x25c174; return; }
        }
    }
    ctx->pc = 0x253D78u;
label_253d78:
    // 0x253d78: 0x8c507842  lw          $s0, 0x7842($v0)
    ctx->pc = 0x253d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30786)));
label_253d7c:
    // 0x253d7c: 0x226751  .word       0x00226751                   # mthi        $at # 00026740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253d7cu;
    ctx->hi = GPR_U64(ctx, 1);
label_253d80:
    // 0x253d80: 0x3200022  sub         $zero, $t9, $zero
    ctx->pc = 0x253d80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 25), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_253d84:
    // 0x253d84: 0x5a3c6234  .word       0x5A3C6234                   # blezl       $s1, . + 4 + (0x6234 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_253d88:
    if (ctx->pc == 0x253D88u) {
        ctx->pc = 0x253D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D84u;
        // 0x253d88: 0x528c5078  beql        $s4, $t4, . + 4 + (0x5078 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D8Cu;
        goto label_253d8c;
    }
    ctx->pc = 0x253D84u;
    {
        const bool branch_taken_0x253d84 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x253d84) {
            ctx->pc = 0x253D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D84u;
            // 0x253d88: 0x528c5078  beql        $s4, $t4, . + 4 + (0x5078 << 2) (Delay Slot)
            // Likely branch instruction at 0x253D88 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C658u;
            { ctx->pc = 0x26c658; return; }
        }
    }
    ctx->pc = 0x253D8Cu;
label_253d8c:
    // 0x253d8c: 0x23002367  addi        $zero, $t8, 0x2367
    ctx->pc = 0x253d8cu;
    // NOP (addi to $zero)
label_253d90:
    // 0x253d90: 0x50032100  beql        $zero, $v1, . + 4 + (0x2100 << 2)
label_253d94:
    if (ctx->pc == 0x253D94u) {
        ctx->pc = 0x253D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D90u;
        // 0x253d94: 0x5a3c5a46  .word       0x5A3C5A46                   # blezl       $s1, . + 4 + (0x5A46 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253D94 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D98u;
        goto label_253d98;
    }
    ctx->pc = 0x253D90u;
    {
        const bool branch_taken_0x253d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x253d90) {
            ctx->pc = 0x253D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D90u;
            // 0x253d94: 0x5a3c5a46  .word       0x5A3C5A46                   # blezl       $s1, . + 4 + (0x5A46 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253D94 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C194u;
            { ctx->pc = 0x25c194; return; }
        }
    }
    ctx->pc = 0x253D98u;
label_253d98:
    // 0x253d98: 0x67537d41  daddiu      $s3, $k0, 0x7D41
    ctx->pc = 0x253d98u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)32065);
label_253d9c:
    // 0x253d9c: 0x240024  and         $zero, $at, $a0
    ctx->pc = 0x253d9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_253da0:
    // 0x253da0: 0x40560322  .word       0x40560322                   # cfc0        $s6, Index # 00000322 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253da0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253DA0 raw=0x40560322"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253da4:
    // 0x253da4: 0x557d3e58  bnel        $t3, $sp, . + 4 + (0x3E58 << 2)
label_253da8:
    if (ctx->pc == 0x253DA8u) {
        ctx->pc = 0x253DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DA4u;
        // 0x253da8: 0x25675491  addiu       $a3, $t3, 0x5491 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 21649));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DACu;
        goto label_253dac;
    }
    ctx->pc = 0x253DA4u;
    {
        const bool branch_taken_0x253da4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 29));
        if (branch_taken_0x253da4) {
            ctx->pc = 0x253DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DA4u;
            // 0x253da8: 0x25675491  addiu       $a3, $t3, 0x5491 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 21649));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263708u;
            { ctx->pc = 0x263708; return; }
        }
    }
    ctx->pc = 0x253DACu;
label_253dac:
    // 0x253dac: 0x23002501  addi        $zero, $t8, 0x2501
    ctx->pc = 0x253dacu;
    // NOP (addi to $zero)
label_253db0:
    // 0x253db0: 0x44524403  .word       0x44524403                   # cfc1        $s2, $8 # 00000403 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253db0u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR8
label_253db4:
    // 0x253db4: 0x965a8252  lhu         $k0, -0x7DAE($s2)
    ctx->pc = 0x253db4u;
    SET_GPR_ZE32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294935122)));
label_253db8:
    // 0x253db8: 0x1266755  .word       0x01266755                   # INVALID     $t1, $a2, 0x6755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253db8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253DB8 raw=0x01266755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253dbc:
    // 0x253dbc: 0x3230026  xor         $zero, $t9, $v1
    ctx->pc = 0x253dbcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 3));
label_253dc0:
    // 0x253dc0: 0x50465442  beql        $v0, $a2, . + 4 + (0x5442 << 2)
label_253dc4:
    if (ctx->pc == 0x253DC4u) {
        ctx->pc = 0x253DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DC0u;
        // 0x253dc4: 0x56915880  bnel        $s4, $s1, . + 4 + (0x5880 << 2) (Delay Slot)
        // Likely branch instruction at 0x253DC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DC8u;
        goto label_253dc8;
    }
    ctx->pc = 0x253DC0u;
    {
        const bool branch_taken_0x253dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253dc0) {
            ctx->pc = 0x253DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DC0u;
            // 0x253dc4: 0x56915880  bnel        $s4, $s1, . + 4 + (0x5880 << 2) (Delay Slot)
            // Likely branch instruction at 0x253DC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x268ECCu;
            { ctx->pc = 0x268ecc; return; }
        }
    }
    ctx->pc = 0x253DC8u;
label_253dc8:
    // 0x253dc8: 0x27012767  addiu       $at, $t8, 0x2767
    ctx->pc = 0x253dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 24), 10087));
label_253dcc:
    // 0x253dcc: 0x4b022400  vaddx.x     $vf16, $vf4, $vf2x
    ctx->pc = 0x253dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_253dd0:
    // 0x253dd0: 0x6e4b4b4b  ldr         $t3, 0x4B4B($s2)
    ctx->pc = 0x253dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_253dd4:
    // 0x253dd4: 0x6757824b  daddiu      $s7, $k0, -0x7DB5
    ctx->pc = 0x253dd4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935115);
label_253dd8:
    // 0x253dd8: 0x280128  .word       0x00280128                   # mfsa        $zero # 00280100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253dd8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_253ddc:
    // 0x253ddc: 0x50460225  beql        $v0, $a2, . + 4 + (0x225 << 2)
label_253de0:
    if (ctx->pc == 0x253DE0u) {
        ctx->pc = 0x253DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DDCu;
        // 0x253de0: 0x55825046  bnel        $t4, $v0, . + 4 + (0x5046 << 2) (Delay Slot)
        // Likely branch instruction at 0x253DE0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DE4u;
        goto label_253de4;
    }
    ctx->pc = 0x253DDCu;
    {
        const bool branch_taken_0x253ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253ddc) {
            ctx->pc = 0x253DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DDCu;
            // 0x253de0: 0x55825046  bnel        $t4, $v0, . + 4 + (0x5046 << 2) (Delay Slot)
            // Likely branch instruction at 0x253DE0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254674u;
            { ctx->pc = 0x254674; return; }
        }
    }
    ctx->pc = 0x253DE4u;
label_253de4:
    // 0x253de4: 0x675896  .word       0x00675896                   # dsrlv       $t3, $a3, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253de4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 3) & 0x3F));
label_253de8:
    // 0x253de8: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_253dec:
    if (ctx->pc == 0x253DECu) {
        ctx->pc = 0x253DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE8u;
        // 0x253dec: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DF0u;
        goto label_253df0;
    }
    ctx->pc = 0x253DE8u;
    {
        const bool branch_taken_0x253de8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x253DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE8u;
        // 0x253dec: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253de8) {
            ctx->pc = 0x2601F0u;
            { ctx->pc = 0x2601f0; return; }
        }
    }
    ctx->pc = 0x253DF0u;
label_253df0:
    // 0x253df0: 0x0  nop
    ctx->pc = 0x253df0u;
    // NOP
label_253df4:
    // 0x253df4: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_253df8:
    // 0x253df8: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x253df8u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_253dfc:
    // 0x253dfc: 0x0  nop
    ctx->pc = 0x253dfcu;
    // NOP
label_253e00:
    // 0x253e00: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x253e00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_253e04:
    // 0x253e04: 0x31010000  andi        $at, $t0, 0x0
    ctx->pc = 0x253e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_253e08:
    // 0x253e08: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_253e0c:
    if (ctx->pc == 0x253E0Cu) {
        ctx->pc = 0x253E10u;
        goto label_253e10;
    }
    ctx->pc = 0x253E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253E10u;
label_253e10:
    // 0x253e10: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e10u;
    
label_253e14:
    // 0x253e14: 0x4310129  bgezal      $at, . + 4 + (0x129 << 2)
label_253e18:
    if (ctx->pc == 0x253E18u) {
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E1Cu;
        goto label_253e1c;
    }
    ctx->pc = 0x253E14u;
    {
        const bool branch_taken_0x253e14 = (GPR_S32(ctx, 1) >= 0);
        SET_GPR_U32(ctx, 31, 0x253E1Cu);
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e14) {
            ctx->pc = 0x2542BCu;
            { ctx->pc = 0x2542bc; return; }
        }
    }
    ctx->pc = 0x253E1Cu;
label_253e1c:
    // 0x253e1c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x253e1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e20:
    // 0x253e20: 0x2a00ff78  slti        $zero, $s0, -0x88
    ctx->pc = 0x253e20u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967160) ? 1 : 0);
label_253e24:
    // 0x253e24: 0x15053101  bne         $t0, $a1, . + 4 + (0x3101 << 2)
label_253e28:
    if (ctx->pc == 0x253E28u) {
        ctx->pc = 0x253E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E24u;
        // 0x253e28: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E2Cu;
        goto label_253e2c;
    }
    ctx->pc = 0x253E24u;
    {
        const bool branch_taken_0x253e24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x253E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E24u;
        // 0x253e28: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e24) {
            ctx->pc = 0x26022Cu;
            { ctx->pc = 0x26022c; return; }
        }
    }
    ctx->pc = 0x253E2Cu;
label_253e2c:
    // 0x253e2c: 0x784b694b  lq          $t3, 0x694B($v0)
    ctx->pc = 0x253e2cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 26955)));
label_253e30:
    // 0x253e30: 0x12b00ff  .word       0x012B00FF                   # dsra32      $zero, $t3, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 11) >> (32 + 3));
label_253e34:
    // 0x253e34: 0x2170431  tgeu        $s0, $s7, 16
    ctx->pc = 0x253e34u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_253e38:
    // 0x253e38: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x253e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e3c:
    // 0x253e3c: 0xff784b69  sd          $t8, 0x4B69($k1)
    ctx->pc = 0x253e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 19305), GPR_U64(ctx, 24));
label_253e40:
    // 0x253e40: 0x31012c00  andi        $at, $t0, 0x2C00
    ctx->pc = 0x253e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)11264);
label_253e44:
    // 0x253e44: 0x4b021105  vsuby.x     $vf4, $vf2, $vf2y
    ctx->pc = 0x253e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_253e48:
    // 0x253e48: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x253e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_253e4c:
    // 0x253e4c: 0xff784b  .word       0x00FF784B                   # movn        $t7, $a3, $ra # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e4cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 7));
label_253e50:
    // 0x253e50: 0x431012d  bgezal      $at, . + 4 + (0x12D << 2)
label_253e54:
    if (ctx->pc == 0x253E54u) {
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E50u;
        // 0x253e54: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E58u;
        goto label_253e58;
    }
    ctx->pc = 0x253E50u;
    {
        const bool branch_taken_0x253e50 = (GPR_S32(ctx, 1) >= 0);
        SET_GPR_U32(ctx, 31, 0x253E58u);
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E50u;
        // 0x253e54: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e50) {
            ctx->pc = 0x254308u;
            { ctx->pc = 0x254308; return; }
        }
    }
    ctx->pc = 0x253E58u;
label_253e58:
    // 0x253e58: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x253e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e5c:
    // 0x253e5c: 0x2e00ff78  sltiu       $zero, $s0, -0x88
    ctx->pc = 0x253e5cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4294967160) ? 1 : 0);
label_253e60:
    // 0x253e60: 0x17053201  bne         $t8, $a1, . + 4 + (0x3201 << 2)
label_253e64:
    if (ctx->pc == 0x253E64u) {
        ctx->pc = 0x253E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E60u;
        // 0x253e64: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E68u;
        goto label_253e68;
    }
    ctx->pc = 0x253E60u;
    {
        const bool branch_taken_0x253e60 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 5));
        ctx->pc = 0x253E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E60u;
        // 0x253e64: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e60) {
            ctx->pc = 0x260668u;
            { ctx->pc = 0x260668; return; }
        }
    }
    ctx->pc = 0x253E68u;
label_253e68:
    // 0x253e68: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_253e6c:
    // 0x253e6c: 0x12f00ff  .word       0x012F00FF                   # dsra32      $zero, $t7, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 15) >> (32 + 3));
label_253e70:
    // 0x253e70: 0x2110031  tgeu        $s0, $s1, 0
    ctx->pc = 0x253e70u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253e74:
    // 0x253e74: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_253e78:
    if (ctx->pc == 0x253E78u) {
        ctx->pc = 0x253E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E74u;
        // 0x253e78: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E7Cu;
        goto label_253e7c;
    }
    ctx->pc = 0x253E74u;
    {
        const bool branch_taken_0x253e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x253e74) {
            ctx->pc = 0x253E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E74u;
            // 0x253e78: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267FB8u;
            { ctx->pc = 0x267fb8; return; }
        }
    }
    ctx->pc = 0x253E7Cu;
label_253e7c:
    // 0x253e7c: 0x31013031  andi        $at, $t0, 0x3031
    ctx->pc = 0x253e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12337);
label_253e80:
    // 0x253e80: 0x50021702  beql        $zero, $v0, . + 4 + (0x1702 << 2)
label_253e84:
    if (ctx->pc == 0x253E84u) {
        ctx->pc = 0x253E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E80u;
        // 0x253e84: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E88u;
        goto label_253e88;
    }
    ctx->pc = 0x253E80u;
    {
        const bool branch_taken_0x253e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x253e80) {
            ctx->pc = 0x253E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E80u;
            // 0x253e84: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259A8Cu;
            { ctx->pc = 0x259a8c; return; }
        }
    }
    ctx->pc = 0x253E88u;
label_253e88:
    // 0x253e88: 0x32ff8c4b  andi        $ra, $s7, 0x8C4B
    ctx->pc = 0x253e88u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)35915);
label_253e8c:
    // 0x253e8c: 0x8310100  j           func_C40400
label_253e90:
    if (ctx->pc == 0x253E90u) {
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E8Cu;
        // 0x253e90: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253E90 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E94u;
        goto label_253e94;
    }
    ctx->pc = 0x253E8Cu;
    ctx->pc = 0x253E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E8Cu;
    // 0x253e90: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253E90 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x253E8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253E94u;
label_253e94:
    // 0x253e94: 0x0  nop
    ctx->pc = 0x253e94u;
    // NOP
label_253e98:
    // 0x253e98: 0x3100ff00  andi        $zero, $t0, 0xFF00
    ctx->pc = 0x253e98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
label_253e9c:
    // 0x253e9c: 0x11033101  beq         $t0, $v1, . + 4 + (0x3101 << 2)
label_253ea0:
    if (ctx->pc == 0x253EA0u) {
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EA4u;
        goto label_253ea4;
    }
    ctx->pc = 0x253E9Cu;
    {
        const bool branch_taken_0x253e9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e9c) {
            ctx->pc = 0x2602A4u;
            { ctx->pc = 0x2602a4; return; }
        }
    }
    ctx->pc = 0x253EA4u;
label_253ea4:
    // 0x253ea4: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x253ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_253ea8:
    // 0x253ea8: 0x3232ff  .word       0x003232FF                   # dsra32      $a2, $s2, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ea8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 18) >> (32 + 11));
label_253eac:
    // 0x253eac: 0x2110833  tltu        $s0, $s1, 32
    ctx->pc = 0x253eacu;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253eb0:
    // 0x253eb0: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253eb0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x253EB0 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253eb4:
    // 0x253eb4: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x253eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_253eb8:
    // 0x253eb8: 0x33003322  andi        $zero, $t8, 0x3322
    ctx->pc = 0x253eb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)13090);
label_253ebc:
    // 0x253ebc: 0x46021109  .word       0x46021109                   # trunc.l.s   $f4, $f2 # 00020000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253ebcu;
// //     throw std::runtime_error("Unhandled FPU.S instruction: function 0x9 at 0x253EBC raw=0x46021109"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253ec0:
    // 0x253ec0: 0x6e464646  ldr         $a2, 0x4646($s2)
    ctx->pc = 0x253ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_253ec4:
    // 0x253ec4: 0x21ff8c4b  addi        $ra, $t7, -0x73B5
    ctx->pc = 0x253ec4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294937675, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_253ec8:
    // 0x253ec8: 0x8320034  j           func_C800D0
label_253ecc:
    if (ctx->pc == 0x253ECCu) {
        ctx->pc = 0x253ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EC8u;
        // 0x253ecc: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x253ECC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253ED0u;
        goto label_253ed0;
    }
    ctx->pc = 0x253EC8u;
    ctx->pc = 0x253ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EC8u;
    // 0x253ecc: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x253ECC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC800D0u, 0x253EC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253ED0u;
label_253ed0:
    // 0x253ed0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x253ed0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_253ed4:
    // 0x253ed4: 0x3511ff8c  ori         $s1, $t0, 0xFF8C
    ctx->pc = 0x253ed4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65420);
label_253ed8:
    // 0x253ed8: 0x11093200  beq         $t0, $t1, . + 4 + (0x3200 << 2)
label_253edc:
    if (ctx->pc == 0x253EDCu) {
        ctx->pc = 0x253EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED8u;
        // 0x253edc: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EDC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EE0u;
        goto label_253ee0;
    }
    ctx->pc = 0x253ED8u;
    {
        const bool branch_taken_0x253ed8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x253EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED8u;
        // 0x253edc: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EDC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ed8) {
            ctx->pc = 0x2606DCu;
            { ctx->pc = 0x2606dc; return; }
        }
    }
    ctx->pc = 0x253EE0u;
label_253ee0:
    // 0x253ee0: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_253ee4:
    // 0x253ee4: 0x3601ff  .word       0x003601FF                   # dsra32      $zero, $s6, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 22) >> (32 + 7));
label_253ee8:
    // 0x253ee8: 0x2110032  tlt         $s0, $s1, 0
    ctx->pc = 0x253ee8u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253eec:
    // 0x253eec: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253ef0:
    if (ctx->pc == 0x253EF0u) {
        ctx->pc = 0x253EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EECu;
        // 0x253ef0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EF4u;
        goto label_253ef4;
    }
    ctx->pc = 0x253EECu;
    {
        const bool branch_taken_0x253eec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253eec) {
            ctx->pc = 0x253EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EECu;
            // 0x253ef0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269444u;
            { ctx->pc = 0x269444; return; }
        }
    }
    ctx->pc = 0x253EF4u;
label_253ef4:
    // 0x253ef4: 0x32013731  andi        $at, $s0, 0x3731
    ctx->pc = 0x253ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14129);
label_253ef8:
    // 0x253ef8: 0x55021108  bnel        $t0, $v0, . + 4 + (0x1108 << 2)
label_253efc:
    if (ctx->pc == 0x253EFCu) {
        ctx->pc = 0x253EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF8u;
        // 0x253efc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253EFC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F00u;
        goto label_253f00;
    }
    ctx->pc = 0x253EF8u;
    {
        const bool branch_taken_0x253ef8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x253ef8) {
            ctx->pc = 0x253EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EF8u;
            // 0x253efc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253EFC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25831Cu;
            { ctx->pc = 0x25831c; return; }
        }
    }
    ctx->pc = 0x253F00u;
label_253f00:
    // 0x253f00: 0x61ff8c4b  daddi       $ra, $t7, -0x73B5
    ctx->pc = 0x253f00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)4294937675; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_253f04:
    // 0x253f04: 0x9320138  j           func_4C804E0
label_253f08:
    if (ctx->pc == 0x253F08u) {
        ctx->pc = 0x253F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F04u;
        // 0x253f08: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F0Cu;
        goto label_253f0c;
    }
    ctx->pc = 0x253F04u;
    ctx->pc = 0x253F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F04u;
    // 0x253f08: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x253F08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C804E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C804E0u, 0x253F04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253F0Cu;
label_253f0c:
    // 0x253f0c: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x253f0cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_253f10:
    // 0x253f10: 0x61ff8c  .word       0x0061FF8C                   # syscall     1022 # 00610000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f10u;
    ctx->pc = 0x253F14u;
runtime->handleSyscall(rdram, ctx, 0x187FEu);
label_253f14:
    // 0x253f14: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_253f18:
    if (ctx->pc == 0x253F18u) {
        ctx->pc = 0x253F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F14u;
        // 0x253f18: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F1Cu;
        goto label_253f1c;
    }
    ctx->pc = 0x253F14u;
    {
        const bool branch_taken_0x253f14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x253F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F14u;
        // 0x253f18: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f14) {
            ctx->pc = 0x26031Cu;
            { ctx->pc = 0x26031c; return; }
        }
    }
    ctx->pc = 0x253F1Cu;
label_253f1c:
    // 0x253f1c: 0x0  nop
    ctx->pc = 0x253f1cu;
    // NOP
label_253f20:
    // 0x253f20: 0x33900ff  .word       0x033900FF                   # dsra32      $zero, $t9, 3 # 03200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 25) >> (32 + 3));
label_253f24:
    // 0x253f24: 0x2120432  tlt         $s0, $s2, 16
    ctx->pc = 0x253f24u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_253f28:
    // 0x253f28: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253f2c:
    if (ctx->pc == 0x253F2Cu) {
        ctx->pc = 0x253F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F28u;
        // 0x253f2c: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F30u;
        goto label_253f30;
    }
    ctx->pc = 0x253F28u;
    {
        const bool branch_taken_0x253f28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253f28) {
            ctx->pc = 0x253F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F28u;
            // 0x253f2c: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269480u;
            { ctx->pc = 0x269480; return; }
        }
    }
    ctx->pc = 0x253F30u;
label_253f30:
    // 0x253f30: 0x32013a4a  andi        $at, $s0, 0x3A4A
    ctx->pc = 0x253f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14922);
label_253f34:
    // 0x253f34: 0x55021506  bnel        $t0, $v0, . + 4 + (0x1506 << 2)
label_253f38:
    if (ctx->pc == 0x253F38u) {
        ctx->pc = 0x253F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F34u;
        // 0x253f38: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253F38 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F3Cu;
        goto label_253f3c;
    }
    ctx->pc = 0x253F34u;
    {
        const bool branch_taken_0x253f34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x253f34) {
            ctx->pc = 0x253F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F34u;
            // 0x253f38: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253F38 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x259350u;
            { ctx->pc = 0x259350; return; }
        }
    }
    ctx->pc = 0x253F3Cu;
label_253f3c:
    // 0x253f3c: 0x51ff8c4b  beql        $t7, $ra, . + 4 + (-0x73B5 << 2)
label_253f40:
    if (ctx->pc == 0x253F40u) {
        ctx->pc = 0x253F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F3Cu;
        // 0x253f40: 0x631013b  bgezal      $s1, . + 4 + (0x13B << 2) (Delay Slot)
        // REGIMM branch instruction to 0x254430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F44u;
        goto label_253f44;
    }
    ctx->pc = 0x253F3Cu;
    {
        const bool branch_taken_0x253f3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 31));
        if (branch_taken_0x253f3c) {
            ctx->pc = 0x253F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F3Cu;
            // 0x253f40: 0x631013b  bgezal      $s1, . + 4 + (0x13B << 2) (Delay Slot)
            // REGIMM branch instruction to 0x254430 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x23706Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23706c; return; }
        }
    }
    ctx->pc = 0x253F44u;
label_253f44:
    // 0x253f44: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2)
label_253f48:
    if (ctx->pc == 0x253F48u) {
        ctx->pc = 0x253F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F44u;
        // 0x253f48: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F4Cu;
        goto label_253f4c;
    }
    ctx->pc = 0x253F44u;
    {
        const bool branch_taken_0x253f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x253f44) {
            ctx->pc = 0x253F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F44u;
            // 0x253f48: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25478Cu;
            { ctx->pc = 0x25478c; return; }
        }
    }
    ctx->pc = 0x253F4Cu;
label_253f4c:
    // 0x253f4c: 0x3c21ff8c  .word       0x3C21FF8C                   # lui         $at, 0xFF8C # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65420 << 16));
label_253f50:
    // 0x253f50: 0x15073200  bne         $t0, $a3, . + 4 + (0x3200 << 2)
label_253f54:
    if (ctx->pc == 0x253F54u) {
        ctx->pc = 0x253F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F50u;
        // 0x253f54: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F54 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F58u;
        goto label_253f58;
    }
    ctx->pc = 0x253F50u;
    {
        const bool branch_taken_0x253f50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x253F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F50u;
        // 0x253f54: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F54 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f50) {
            ctx->pc = 0x260754u;
            { ctx->pc = 0x260754; return; }
        }
    }
    ctx->pc = 0x253F58u;
label_253f58:
    // 0x253f58: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x253f58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_253f5c:
    // 0x253f5c: 0x13d31ff  .word       0x013D31FF                   # dsra32      $a2, $sp, 7 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f5cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 29) >> (32 + 7));
label_253f60:
    // 0x253f60: 0x2120633  tltu        $s0, $s2, 24
    ctx->pc = 0x253f60u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_253f64:
    // 0x253f64: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253f64u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x253F64 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253f68:
    // 0x253f68: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x253f68u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_253f6c:
    // 0x253f6c: 0x32013e06  andi        $at, $s0, 0x3E06
    ctx->pc = 0x253f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15878);
label_253f70:
    // 0x253f70: 0x55021107  bnel        $t0, $v0, . + 4 + (0x1107 << 2)
label_253f74:
    if (ctx->pc == 0x253F74u) {
        ctx->pc = 0x253F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F70u;
        // 0x253f74: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253F74 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F78u;
        goto label_253f78;
    }
    ctx->pc = 0x253F70u;
    {
        const bool branch_taken_0x253f70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x253f70) {
            ctx->pc = 0x253F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F70u;
            // 0x253f74: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253F74 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x258390u;
            { ctx->pc = 0x258390; return; }
        }
    }
    ctx->pc = 0x253F78u;
label_253f78:
    // 0x253f78: 0x21ff8c4b  addi        $ra, $t7, -0x73B5
    ctx->pc = 0x253f78u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294937675, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_253f7c:
    // 0x253f7c: 0x633003f  bgezall     $s1, . + 4 + (0x3F << 2)
label_253f80:
    if (ctx->pc == 0x253F80u) {
        ctx->pc = 0x253F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F7Cu;
        // 0x253f80: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x253F80 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F84u;
        goto label_253f84;
    }
    ctx->pc = 0x253F7Cu;
    {
        const bool branch_taken_0x253f7c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x253f7c) {
            SET_GPR_U32(ctx, 31, 0x253F84u);
            ctx->pc = 0x253F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F7Cu;
            // 0x253f80: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //             throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x253F80 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25407Cu;
            goto label_25407c;
        }
    }
    ctx->pc = 0x253F84u;
label_253f84:
    // 0x253f84: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x253f84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_253f88:
    // 0x253f88: 0x4026ff8c  .word       0x4026FF8C                   # dmfc0       $a2, Reserved31 # 0000078C <InstrIdType: R5900_COP0>
    ctx->pc = 0x253f88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x253F88 raw=0x4026FF8C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253f8c:
    // 0x253f8c: 0x11063201  beq         $t0, $a2, . + 4 + (0x3201 << 2)
label_253f90:
    if (ctx->pc == 0x253F90u) {
        ctx->pc = 0x253F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F8Cu;
        // 0x253f90: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F90 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F94u;
        goto label_253f94;
    }
    ctx->pc = 0x253F8Cu;
    {
        const bool branch_taken_0x253f8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x253F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F8Cu;
        // 0x253f90: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F90 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f8c) {
            ctx->pc = 0x260794u;
            { ctx->pc = 0x260794; return; }
        }
    }
    ctx->pc = 0x253F94u;
label_253f94:
    // 0x253f94: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x253f94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_253f98:
    // 0x253f98: 0x14111ff  .word       0x014111FF                   # dsra32      $v0, $at, 7 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 7));
label_253f9c:
    // 0x253f9c: 0x2110732  tlt         $s0, $s1, 28
    ctx->pc = 0x253f9cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253fa0:
    // 0x253fa0: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253fa4:
    if (ctx->pc == 0x253FA4u) {
        ctx->pc = 0x253FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FA0u;
        // 0x253fa4: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FA8u;
        goto label_253fa8;
    }
    ctx->pc = 0x253FA0u;
    {
        const bool branch_taken_0x253fa0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253fa0) {
            ctx->pc = 0x253FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FA0u;
            // 0x253fa4: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2694F8u;
            { ctx->pc = 0x2694f8; return; }
        }
    }
    ctx->pc = 0x253FA8u;
label_253fa8:
    // 0x253fa8: 0x31010012  andi        $at, $t0, 0x12
    ctx->pc = 0x253fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)18);
label_253fac:
    // 0x253fac: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_253fb0:
    if (ctx->pc == 0x253FB0u) {
        ctx->pc = 0x253FB4u;
        goto label_253fb4;
    }
    ctx->pc = 0x253FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253FB4u;
label_253fb4:
    // 0x253fb4: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253fb4u;
    
label_253fb8:
    // 0x253fb8: 0x1320142  .word       0x01320142                   # srl         $zero, $s2, 5 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253fb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
label_253fbc:
    // 0x253fbc: 0x55550215  bnel        $t2, $s5, . + 4 + (0x215 << 2)
label_253fc0:
    if (ctx->pc == 0x253FC0u) {
        ctx->pc = 0x253FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FBCu;
        // 0x253fc0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FC4u;
        goto label_253fc4;
    }
    ctx->pc = 0x253FBCu;
    {
        const bool branch_taken_0x253fbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253fbc) {
            ctx->pc = 0x253FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FBCu;
            // 0x253fc0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254814u;
            { ctx->pc = 0x254814; return; }
        }
    }
    ctx->pc = 0x253FC4u;
label_253fc4:
    // 0x253fc4: 0x4331ff8c  .word       0x4331FF8C                   # INVALID     $t9, $s1, -0x74 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253fc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x253FC4 raw=0x4331FF8C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253fc8:
    // 0x253fc8: 0x15093101  bne         $t0, $t1, . + 4 + (0x3101 << 2)
label_253fcc:
    if (ctx->pc == 0x253FCCu) {
        ctx->pc = 0x253FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC8u;
        // 0x253fcc: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253FCC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FD0u;
        goto label_253fd0;
    }
    ctx->pc = 0x253FC8u;
    {
        const bool branch_taken_0x253fc8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x253FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC8u;
        // 0x253fcc: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253FCC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fc8) {
            ctx->pc = 0x2603D0u;
            { ctx->pc = 0x2603d0; return; }
        }
    }
    ctx->pc = 0x253FD0u;
label_253fd0:
    // 0x253fd0: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x253fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_253fd4:
    // 0x253fd4: 0x4411ff  .word       0x004411FF                   # dsra32      $v0, $a0, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253fd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 7));
label_253fd8:
    // 0x253fd8: 0x2150132  tlt         $s0, $s5, 4
    ctx->pc = 0x253fd8u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_253fdc:
    // 0x253fdc: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253fe0:
    if (ctx->pc == 0x253FE0u) {
        ctx->pc = 0x253FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FDCu;
        // 0x253fe0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FE4u;
        goto label_253fe4;
    }
    ctx->pc = 0x253FDCu;
    {
        const bool branch_taken_0x253fdc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253fdc) {
            ctx->pc = 0x253FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FDCu;
            // 0x253fe0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269534u;
            { ctx->pc = 0x269534; return; }
        }
    }
    ctx->pc = 0x253FE4u;
label_253fe4:
    // 0x253fe4: 0x32014531  andi        $at, $s0, 0x4531
    ctx->pc = 0x253fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)17713);
label_253fe8:
    // 0x253fe8: 0x55021100  bnel        $t0, $v0, . + 4 + (0x1100 << 2)
label_253fec:
    if (ctx->pc == 0x253FECu) {
        ctx->pc = 0x253FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FE8u;
        // 0x253fec: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253FEC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253FF0u;
        goto label_253ff0;
    }
    ctx->pc = 0x253FE8u;
    {
        const bool branch_taken_0x253fe8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x253fe8) {
            ctx->pc = 0x253FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FE8u;
            // 0x253fec: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253FEC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2583ECu;
            { ctx->pc = 0x2583ec; return; }
        }
    }
    ctx->pc = 0x253FF0u;
label_253ff0:
    // 0x253ff0: 0x32ff8c4b  andi        $ra, $s7, 0x8C4B
    ctx->pc = 0x253ff0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)35915);
label_253ff4:
    // 0x253ff4: 0x320046  .word       0x00320046                   # srlv        $zero, $s2, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ff4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 1) & 0x1F));
label_253ff8:
    // 0x253ff8: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2)
label_253ffc:
    if (ctx->pc == 0x253FFCu) {
        ctx->pc = 0x253FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FF8u;
        // 0x253ffc: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254000u;
        goto label_254000;
    }
    ctx->pc = 0x253FF8u;
    {
        const bool branch_taken_0x253ff8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253ff8) {
            ctx->pc = 0x253FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253FF8u;
            // 0x253ffc: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254840u;
            { ctx->pc = 0x254840; return; }
        }
    }
    ctx->pc = 0x254000u;
label_254000:
    // 0x254000: 0x4727ff8c  .word       0x4727FF8C                   # INVALID     $t9, $a3, -0x74 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254000u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0xC at 0x254000 raw=0x4727FF8C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254004:
    // 0x254004: 0x12013300  beq         $s0, $at, . + 4 + (0x3300 << 2)
label_254008:
    if (ctx->pc == 0x254008u) {
        ctx->pc = 0x254008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254004u;
        // 0x254008: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x254008 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25400Cu;
        goto label_25400c;
    }
    ctx->pc = 0x254004u;
    {
        const bool branch_taken_0x254004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x254008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254004u;
        // 0x254008: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x254008 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254004) {
            ctx->pc = 0x260C08u;
            { ctx->pc = 0x260c08; return; }
        }
    }
    ctx->pc = 0x25400Cu;
label_25400c:
    // 0x25400c: 0x8c4b6e46  lw          $t3, 0x6E46($v0)
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28230)));
label_254010:
    // 0x254010: 0x4826ff  .word       0x004826FF                   # dsra32      $a0, $t0, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254010u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 8) >> (32 + 27));
label_254014:
    // 0x254014: 0x2120033  tltu        $s0, $s2, 0
    ctx->pc = 0x254014u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_254018:
    // 0x254018: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254018u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254018 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25401c:
    // 0x25401c: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x25401cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_254020:
    // 0x254020: 0x32014926  andi        $at, $s0, 0x4926
    ctx->pc = 0x254020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)18726);
label_254024:
    // 0x254024: 0x55021703  bnel        $t0, $v0, . + 4 + (0x1703 << 2)
label_254028:
    if (ctx->pc == 0x254028u) {
        ctx->pc = 0x254028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254024u;
        // 0x254028: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254028 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25402Cu;
        goto label_25402c;
    }
    ctx->pc = 0x254024u;
    {
        const bool branch_taken_0x254024 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254024) {
            ctx->pc = 0x254028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254024u;
            // 0x254028: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254028 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C34u;
            { ctx->pc = 0x259c34; return; }
        }
    }
    ctx->pc = 0x25402Cu;
label_25402c:
    // 0x25402c: 0x61ff8c4b  daddi       $ra, $t7, -0x73B5
    ctx->pc = 0x25402cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)4294937675; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_254030:
    // 0x254030: 0x331014a  .word       0x0331014A                   # movz        $zero, $t9, $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254030u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 25));
label_254034:
    // 0x254034: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2)
label_254038:
    if (ctx->pc == 0x254038u) {
        ctx->pc = 0x254038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254034u;
        // 0x254038: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25403Cu;
        goto label_25403c;
    }
    ctx->pc = 0x254034u;
    {
        const bool branch_taken_0x254034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254034) {
            ctx->pc = 0x254038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254034u;
            // 0x254038: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25488Cu;
            { ctx->pc = 0x25488c; return; }
        }
    }
    ctx->pc = 0x25403Cu;
label_25403c:
    // 0x25403c: 0x4b31ff8c  vmsubx.xw   $vf30, $vf31, $vf17x
    ctx->pc = 0x25403cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_254040:
    // 0x254040: 0x17023101  bne         $t8, $v0, . + 4 + (0x3101 << 2)
label_254044:
    if (ctx->pc == 0x254044u) {
        ctx->pc = 0x254044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254040u;
        // 0x254044: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254044 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254048u;
        goto label_254048;
    }
    ctx->pc = 0x254040u;
    {
        const bool branch_taken_0x254040 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x254044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254040u;
        // 0x254044: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254044 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254040) {
            ctx->pc = 0x260448u;
            { ctx->pc = 0x260448; return; }
        }
    }
    ctx->pc = 0x254048u;
label_254048:
    // 0x254048: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_25404c:
    // 0x25404c: 0x14c21ff  .word       0x014C21FF                   # dsra32      $a0, $t4, 7 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25404cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 12) >> (32 + 7));
label_254050:
    // 0x254050: 0x2110232  tlt         $s0, $s1, 8
    ctx->pc = 0x254050u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_254054:
    // 0x254054: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254058:
    if (ctx->pc == 0x254058u) {
        ctx->pc = 0x254058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254054u;
        // 0x254058: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25405Cu;
        goto label_25405c;
    }
    ctx->pc = 0x254054u;
    {
        const bool branch_taken_0x254054 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254054) {
            ctx->pc = 0x254058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254054u;
            // 0x254058: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2695ACu;
            { ctx->pc = 0x2695ac; return; }
        }
    }
    ctx->pc = 0x25405Cu;
label_25405c:
    // 0x25405c: 0x31004d22  andi        $zero, $t0, 0x4D22
    ctx->pc = 0x25405cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)19746);
label_254060:
    // 0x254060: 0x50021701  beql        $zero, $v0, . + 4 + (0x1701 << 2)
label_254064:
    if (ctx->pc == 0x254064u) {
        ctx->pc = 0x254064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254060u;
        // 0x254064: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254068u;
        goto label_254068;
    }
    ctx->pc = 0x254060u;
    {
        const bool branch_taken_0x254060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254060) {
            ctx->pc = 0x254064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254060u;
            // 0x254064: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259C68u;
            { ctx->pc = 0x259c68; return; }
        }
    }
    ctx->pc = 0x254068u;
label_254068:
    // 0x254068: 0x51ff8c4b  beql        $t7, $ra, . + 4 + (-0x73B5 << 2)
label_25406c:
    if (ctx->pc == 0x25406Cu) {
        ctx->pc = 0x25406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254068u;
        // 0x25406c: 0x431014e  bgezal      $at, . + 4 + (0x14E << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2545A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254070u;
        goto label_254070;
    }
    ctx->pc = 0x254068u;
    {
        const bool branch_taken_0x254068 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 31));
        if (branch_taken_0x254068) {
            ctx->pc = 0x25406Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254068u;
            // 0x25406c: 0x431014e  bgezal      $at, . + 4 + (0x14E << 2) (Delay Slot)
            // REGIMM branch instruction to 0x2545A8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x237198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x237198; return; }
        }
    }
    ctx->pc = 0x254070u;
label_254070:
    // 0x254070: 0x50500212  beql        $v0, $s0, . + 4 + (0x212 << 2)
label_254074:
    if (ctx->pc == 0x254074u) {
        ctx->pc = 0x254074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254070u;
        // 0x254074: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254078u;
        goto label_254078;
    }
    ctx->pc = 0x254070u;
    {
        const bool branch_taken_0x254070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254070) {
            ctx->pc = 0x254074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254070u;
            // 0x254074: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548BCu;
            { ctx->pc = 0x2548bc; return; }
        }
    }
    ctx->pc = 0x254078u;
label_254078:
    // 0x254078: 0x4f32ff8c  .word       0x4F32FF8C                   # INVALID     $t9, $s2, -0x74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x254078u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x254078 raw=0x4F32FF8C");
 /* MITIGATED */
label_25407c:
    // 0x25407c: 0x17043200  bne         $t8, $a0, . + 4 + (0x3200 << 2)
label_254080:
    if (ctx->pc == 0x254080u) {
        ctx->pc = 0x254080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25407Cu;
        // 0x254080: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254080 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254084u;
        goto label_254084;
    }
    ctx->pc = 0x25407Cu;
    {
        const bool branch_taken_0x25407c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 4));
        ctx->pc = 0x254080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25407Cu;
        // 0x254080: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254080 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25407c) {
            ctx->pc = 0x260880u;
            { ctx->pc = 0x260880; return; }
        }
    }
    ctx->pc = 0x254084u;
label_254084:
    // 0x254084: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_254088:
    // 0x254088: 0x5031ff  .word       0x005031FF                   # dsra32      $a2, $s0, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254088u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 16) >> (32 + 7));
label_25408c:
    // 0x25408c: 0x2150532  tlt         $s0, $s5, 20
    ctx->pc = 0x25408cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254090:
    // 0x254090: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254094:
    if (ctx->pc == 0x254094u) {
        ctx->pc = 0x254094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254090u;
        // 0x254094: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254098u;
        goto label_254098;
    }
    ctx->pc = 0x254090u;
    {
        const bool branch_taken_0x254090 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254090) {
            ctx->pc = 0x254094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254090u;
            // 0x254094: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2695E8u;
            { ctx->pc = 0x2695e8; return; }
        }
    }
    ctx->pc = 0x254098u;
label_254098:
    // 0x254098: 0x31005131  andi        $zero, $t0, 0x5131
    ctx->pc = 0x254098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)20785);
label_25409c:
    // 0x25409c: 0x50021705  beql        $zero, $v0, . + 4 + (0x1705 << 2)
label_2540a0:
    if (ctx->pc == 0x2540A0u) {
        ctx->pc = 0x2540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25409Cu;
        // 0x2540a0: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540A4u;
        goto label_2540a4;
    }
    ctx->pc = 0x25409Cu;
    {
        const bool branch_taken_0x25409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25409c) {
            ctx->pc = 0x2540A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25409Cu;
            // 0x2540a0: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259CB4u;
            { ctx->pc = 0x259cb4; return; }
        }
    }
    ctx->pc = 0x2540A4u;
label_2540a4:
    // 0x2540a4: 0x31ff8c4b  andi        $ra, $t7, 0x8C4B
    ctx->pc = 0x2540a4u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)35915);
label_2540a8:
    // 0x2540a8: 0x1320052  .word       0x01320052                   # mflo        $zero # 01320040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2540a8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2540ac:
    // 0x2540ac: 0x55550212  bnel        $t2, $s5, . + 4 + (0x212 << 2)
label_2540b0:
    if (ctx->pc == 0x2540B0u) {
        ctx->pc = 0x2540B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540ACu;
        // 0x2540b0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540B4u;
        goto label_2540b4;
    }
    ctx->pc = 0x2540ACu;
    {
        const bool branch_taken_0x2540ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2540ac) {
            ctx->pc = 0x2540B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540ACu;
            // 0x2540b0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548F8u;
            { ctx->pc = 0x2548f8; return; }
        }
    }
    ctx->pc = 0x2540B4u;
label_2540b4:
    // 0x2540b4: 0x56ff8c  .word       0x0056FF8C                   # syscall     1022 # 00560000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2540b4u;
    ctx->pc = 0x2540B8u;
runtime->handleSyscall(rdram, ctx, 0x15BFEu);
label_2540b8:
    // 0x2540b8: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_2540bc:
    if (ctx->pc == 0x2540BCu) {
        ctx->pc = 0x2540BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540B8u;
        // 0x2540bc: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540C0u;
        goto label_2540c0;
    }
    ctx->pc = 0x2540B8u;
    {
        const bool branch_taken_0x2540b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x2540BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540B8u;
        // 0x2540bc: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540b8) {
            ctx->pc = 0x2604C0u;
            { ctx->pc = 0x2604c0; return; }
        }
    }
    ctx->pc = 0x2540C0u;
label_2540c0:
    // 0x2540c0: 0x0  nop
    ctx->pc = 0x2540c0u;
    // NOP
label_2540c4:
    // 0x2540c4: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2540c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2540c8:
    // 0x2540c8: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x2540c8u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2540cc:
    // 0x2540cc: 0x0  nop
    ctx->pc = 0x2540ccu;
    // NOP
label_2540d0:
    // 0x2540d0: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x2540d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_2540d4:
    // 0x2540d4: 0x31005300  andi        $zero, $t0, 0x5300
    ctx->pc = 0x2540d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)21248);
label_2540d8:
    // 0x2540d8: 0x50021505  beql        $zero, $v0, . + 4 + (0x1505 << 2)
label_2540dc:
    if (ctx->pc == 0x2540DCu) {
        ctx->pc = 0x2540DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540D8u;
        // 0x2540dc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540E0u;
        goto label_2540e0;
    }
    ctx->pc = 0x2540D8u;
    {
        const bool branch_taken_0x2540d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2540d8) {
            ctx->pc = 0x2540DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540D8u;
            // 0x2540dc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2594F0u;
            { ctx->pc = 0x2594f0; return; }
        }
    }
    ctx->pc = 0x2540E0u;
label_2540e0:
    // 0x2540e0: 0x61ff8c4b  daddi       $ra, $t7, -0x73B5
    ctx->pc = 0x2540e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)4294937675; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2540e4:
    // 0x2540e4: 0x4320054  bltzall     $at, . + 4 + (0x54 << 2)
label_2540e8:
    if (ctx->pc == 0x2540E8u) {
        ctx->pc = 0x2540E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540E4u;
        // 0x2540e8: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
        // Likely branch instruction at 0x2540E8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540ECu;
        goto label_2540ec;
    }
    ctx->pc = 0x2540E4u;
    {
        const bool branch_taken_0x2540e4 = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x2540e4) {
            SET_GPR_U32(ctx, 31, 0x2540ECu);
            ctx->pc = 0x2540E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540E4u;
            // 0x2540e8: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
            // Likely branch instruction at 0x2540E8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254238u;
            { ctx->pc = 0x254238; return; }
        }
    }
    ctx->pc = 0x2540ECu;
label_2540ec:
    // 0x2540ec: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x2540ecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2540f0:
    // 0x2540f0: 0x5531ff8c  bnel        $t1, $s1, . + 4 + (-0x74 << 2)
label_2540f4:
    if (ctx->pc == 0x2540F4u) {
        ctx->pc = 0x2540F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F0u;
        // 0x2540f4: 0x12093201  beq         $s0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
        // Likely branch instruction at 0x2540F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2540F8u;
        goto label_2540f8;
    }
    ctx->pc = 0x2540F0u;
    {
        const bool branch_taken_0x2540f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 17));
        if (branch_taken_0x2540f0) {
            ctx->pc = 0x2540F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540F0u;
            // 0x2540f4: 0x12093201  beq         $s0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
            // Likely branch instruction at 0x2540F4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253f24;
        }
    }
    ctx->pc = 0x2540F8u;
label_2540f8:
    // 0x2540f8: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2)
label_2540fc:
    if (ctx->pc == 0x2540FCu) {
        ctx->pc = 0x2540FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540F8u;
        // 0x2540fc: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254100u;
        goto label_254100;
    }
    ctx->pc = 0x2540F8u;
    {
        const bool branch_taken_0x2540f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2540f8) {
            ctx->pc = 0x2540FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2540F8u;
            // 0x2540fc: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269504u;
            { ctx->pc = 0x269504; return; }
        }
    }
    ctx->pc = 0x254100u;
label_254100:
    // 0x254100: 0x15632ff  .word       0x015632FF                   # dsra32      $a2, $s6, 11 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254100u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 22) >> (32 + 11));
label_254104:
    // 0x254104: 0x2120831  tgeu        $s0, $s2, 32
    ctx->pc = 0x254104u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_254108:
    // 0x254108: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25410c:
    if (ctx->pc == 0x25410Cu) {
        ctx->pc = 0x25410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254108u;
        // 0x25410c: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254110u;
        goto label_254110;
    }
    ctx->pc = 0x254108u;
    {
        const bool branch_taken_0x254108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254108) {
            ctx->pc = 0x25410Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254108u;
            // 0x25410c: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26824Cu;
            { ctx->pc = 0x26824c; return; }
        }
    }
    ctx->pc = 0x254110u;
label_254110:
    // 0x254110: 0x32015732  andi        $at, $s0, 0x5732
    ctx->pc = 0x254110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)22322);
label_254114:
    // 0x254114: 0x55021208  bnel        $t0, $v0, . + 4 + (0x1208 << 2)
label_254118:
    if (ctx->pc == 0x254118u) {
        ctx->pc = 0x254118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254114u;
        // 0x254118: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254118 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25411Cu;
        goto label_25411c;
    }
    ctx->pc = 0x254114u;
    {
        const bool branch_taken_0x254114 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254114) {
            ctx->pc = 0x254118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254114u;
            // 0x254118: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254118 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x258938u;
            { ctx->pc = 0x258938; return; }
        }
    }
    ctx->pc = 0x25411Cu;
label_25411c:
    // 0x25411c: 0x31ff8c4b  andi        $ra, $t7, 0x8C4B
    ctx->pc = 0x25411cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)35915);
label_254120:
    // 0x254120: 0x8330158  j           func_CC0560
label_254124:
    if (ctx->pc == 0x254124u) {
        ctx->pc = 0x254124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254120u;
        // 0x254124: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254124 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254128u;
        goto label_254128;
    }
    ctx->pc = 0x254120u;
    ctx->pc = 0x254124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254120u;
    // 0x254124: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254124 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xCC0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xCC0560u, 0x254120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254128u;
label_254128:
    // 0x254128: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x254128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_25412c:
    // 0x25412c: 0x5926ff8c  .word       0x5926FF8C                   # blezl       $t1, . + 4 + (-0x74 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
label_254130:
    if (ctx->pc == 0x254130u) {
        ctx->pc = 0x254130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25412Cu;
        // 0x254130: 0x15093201  bne         $t0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
        // Likely branch instruction at 0x254130 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254134u;
        goto label_254134;
    }
    ctx->pc = 0x25412Cu;
    {
        const bool branch_taken_0x25412c = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x25412c) {
            ctx->pc = 0x254130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25412Cu;
            // 0x254130: 0x15093201  bne         $t0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
            // Likely branch instruction at 0x254130 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253f60;
        }
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2)
label_254138:
    if (ctx->pc == 0x254138u) {
        ctx->pc = 0x254138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254134u;
        // 0x254138: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25413Cu;
        goto label_25413c;
    }
    ctx->pc = 0x254134u;
    {
        const bool branch_taken_0x254134 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254134) {
            ctx->pc = 0x254138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254134u;
            // 0x254138: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269540u;
            { ctx->pc = 0x269540; return; }
        }
    }
    ctx->pc = 0x25413Cu;
label_25413c:
    // 0x25413c: 0x5a31ff  .word       0x005A31FF                   # dsra32      $a2, $k0, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25413cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 26) >> (32 + 7));
label_254140:
    // 0x254140: 0x2150731  tgeu        $s0, $s5, 28
    ctx->pc = 0x254140u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254144:
    // 0x254144: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254148:
    if (ctx->pc == 0x254148u) {
        ctx->pc = 0x254148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254144u;
        // 0x254148: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25414Cu;
        goto label_25414c;
    }
    ctx->pc = 0x254144u;
    {
        const bool branch_taken_0x254144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254144) {
            ctx->pc = 0x254148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254144u;
            // 0x254148: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268288u;
            { ctx->pc = 0x268288; return; }
        }
    }
    ctx->pc = 0x25414Cu;
label_25414c:
    // 0x25414c: 0x32005b00  andi        $zero, $s0, 0x5B00
    ctx->pc = 0x25414cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)23296);
label_254150:
    // 0x254150: 0x55021106  bnel        $t0, $v0, . + 4 + (0x1106 << 2)
label_254154:
    if (ctx->pc == 0x254154u) {
        ctx->pc = 0x254154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254150u;
        // 0x254154: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254154 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254158u;
        goto label_254158;
    }
    ctx->pc = 0x254150u;
    {
        const bool branch_taken_0x254150 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254150) {
            ctx->pc = 0x254154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254150u;
            // 0x254154: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254154 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25856Cu;
            { ctx->pc = 0x25856c; return; }
        }
    }
    ctx->pc = 0x254158u;
label_254158:
    // 0x254158: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254158u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25415c:
    // 0x25415c: 0x632005c  bltzall     $s1, . + 4 + (0x5C << 2)
label_254160:
    if (ctx->pc == 0x254160u) {
        ctx->pc = 0x254160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25415Cu;
        // 0x254160: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
        // Likely branch instruction at 0x254160 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254164u;
        goto label_254164;
    }
    ctx->pc = 0x25415Cu;
    {
        const bool branch_taken_0x25415c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x25415c) {
            SET_GPR_U32(ctx, 31, 0x254164u);
            ctx->pc = 0x254160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25415Cu;
            // 0x254160: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
            // Likely branch instruction at 0x254160 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2542D0u;
            { ctx->pc = 0x2542d0; return; }
        }
    }
    ctx->pc = 0x254164u;
label_254164:
    // 0x254164: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x254164u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_254168:
    // 0x254168: 0x5d00ff8c  bgtzl       $t0, . + 4 + (-0x74 << 2)
label_25416c:
    if (ctx->pc == 0x25416Cu) {
        ctx->pc = 0x25416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254168u;
        // 0x25416c: 0x15063100  bne         $t0, $a2, . + 4 + (0x3100 << 2) (Delay Slot)
        // Likely branch instruction at 0x25416C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254170u;
        { ctx->pc = 0x254170; return; }
    }
    ctx->pc = 0x254168u;
    {
        const bool branch_taken_0x254168 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x254168) {
            ctx->pc = 0x25416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254168u;
            // 0x25416c: 0x15063100  bne         $t0, $a2, . + 4 + (0x3100 << 2) (Delay Slot)
            // Likely branch instruction at 0x25416C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253f9c;
        }
    }
    ctx->pc = 0x254170u;
    ctx->pc = 0x254170u;
    return;
}
