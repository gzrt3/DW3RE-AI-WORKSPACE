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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part339(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        case 0x240ab0u: goto label_240ab0;
        case 0x240ab4u: goto label_240ab4;
        case 0x240ab8u: goto label_240ab8;
        case 0x240abcu: goto label_240abc;
        case 0x240ac0u: goto label_240ac0;
        case 0x240ac4u: goto label_240ac4;
        case 0x240ac8u: goto label_240ac8;
        case 0x240accu: goto label_240acc;
        case 0x240ad0u: goto label_240ad0;
        case 0x240ad4u: goto label_240ad4;
        case 0x240ad8u: goto label_240ad8;
        case 0x240adcu: goto label_240adc;
        case 0x240ae0u: goto label_240ae0;
        case 0x240ae4u: goto label_240ae4;
        case 0x240ae8u: goto label_240ae8;
        case 0x240aecu: goto label_240aec;
        case 0x240af0u: goto label_240af0;
        case 0x240af4u: goto label_240af4;
        case 0x240af8u: goto label_240af8;
        case 0x240afcu: goto label_240afc;
        case 0x240b00u: goto label_240b00;
        case 0x240b04u: goto label_240b04;
        case 0x240b08u: goto label_240b08;
        case 0x240b0cu: goto label_240b0c;
        case 0x240b10u: goto label_240b10;
        case 0x240b14u: goto label_240b14;
        case 0x240b18u: goto label_240b18;
        case 0x240b1cu: goto label_240b1c;
        case 0x240b20u: goto label_240b20;
        case 0x240b24u: goto label_240b24;
        case 0x240b28u: goto label_240b28;
        case 0x240b2cu: goto label_240b2c;
        case 0x240b30u: goto label_240b30;
        case 0x240b34u: goto label_240b34;
        case 0x240b38u: goto label_240b38;
        case 0x240b3cu: goto label_240b3c;
        case 0x240b40u: goto label_240b40;
        case 0x240b44u: goto label_240b44;
        case 0x240b48u: goto label_240b48;
        case 0x240b4cu: goto label_240b4c;
        case 0x240b50u: goto label_240b50;
        case 0x240b54u: goto label_240b54;
        case 0x240b58u: goto label_240b58;
        case 0x240b5cu: goto label_240b5c;
        case 0x240b60u: goto label_240b60;
        case 0x240b64u: goto label_240b64;
        case 0x240b68u: goto label_240b68;
        case 0x240b6cu: goto label_240b6c;
        case 0x240b70u: goto label_240b70;
        case 0x240b74u: goto label_240b74;
        case 0x240b78u: goto label_240b78;
        case 0x240b7cu: goto label_240b7c;
        case 0x240b80u: goto label_240b80;
        case 0x240b84u: goto label_240b84;
        case 0x240b88u: goto label_240b88;
        case 0x240b8cu: goto label_240b8c;
        case 0x240b90u: goto label_240b90;
        case 0x240b94u: goto label_240b94;
        case 0x240b98u: goto label_240b98;
        case 0x240b9cu: goto label_240b9c;
        case 0x240ba0u: goto label_240ba0;
        case 0x240ba4u: goto label_240ba4;
        case 0x240ba8u: goto label_240ba8;
        case 0x240bacu: goto label_240bac;
        case 0x240bb0u: goto label_240bb0;
        case 0x240bb4u: goto label_240bb4;
        case 0x240bb8u: goto label_240bb8;
        case 0x240bbcu: goto label_240bbc;
        case 0x240bc0u: goto label_240bc0;
        case 0x240bc4u: goto label_240bc4;
        case 0x240bc8u: goto label_240bc8;
        case 0x240bccu: goto label_240bcc;
        case 0x240bd0u: goto label_240bd0;
        case 0x240bd4u: goto label_240bd4;
        case 0x240bd8u: goto label_240bd8;
        case 0x240bdcu: goto label_240bdc;
        case 0x240be0u: goto label_240be0;
        case 0x240be4u: goto label_240be4;
        case 0x240be8u: goto label_240be8;
        case 0x240becu: goto label_240bec;
        case 0x240bf0u: goto label_240bf0;
        case 0x240bf4u: goto label_240bf4;
        case 0x240bf8u: goto label_240bf8;
        case 0x240bfcu: goto label_240bfc;
        case 0x240c00u: goto label_240c00;
        case 0x240c04u: goto label_240c04;
        case 0x240c08u: goto label_240c08;
        case 0x240c0cu: goto label_240c0c;
        case 0x240c10u: goto label_240c10;
        case 0x240c14u: goto label_240c14;
        case 0x240c18u: goto label_240c18;
        case 0x240c1cu: goto label_240c1c;
        case 0x240c20u: goto label_240c20;
        case 0x240c24u: goto label_240c24;
        case 0x240c28u: goto label_240c28;
        case 0x240c2cu: goto label_240c2c;
        case 0x240c30u: goto label_240c30;
        case 0x240c34u: goto label_240c34;
        case 0x240c38u: goto label_240c38;
        case 0x240c3cu: goto label_240c3c;
        case 0x240c40u: goto label_240c40;
        case 0x240c44u: goto label_240c44;
        case 0x240c48u: goto label_240c48;
        case 0x240c4cu: goto label_240c4c;
        case 0x240c50u: goto label_240c50;
        case 0x240c54u: goto label_240c54;
        case 0x240c58u: goto label_240c58;
        case 0x240c5cu: goto label_240c5c;
        case 0x240c60u: goto label_240c60;
        case 0x240c64u: goto label_240c64;
        case 0x240c68u: goto label_240c68;
        case 0x240c6cu: goto label_240c6c;
        case 0x240c70u: goto label_240c70;
        case 0x240c74u: goto label_240c74;
        case 0x240c78u: goto label_240c78;
        case 0x240c7cu: goto label_240c7c;
        case 0x240c80u: goto label_240c80;
        case 0x240c84u: goto label_240c84;
        case 0x240c88u: goto label_240c88;
        case 0x240c8cu: goto label_240c8c;
        case 0x240c90u: goto label_240c90;
        case 0x240c94u: goto label_240c94;
        case 0x240c98u: goto label_240c98;
        case 0x240c9cu: goto label_240c9c;
        case 0x240ca0u: goto label_240ca0;
        case 0x240ca4u: goto label_240ca4;
        case 0x240ca8u: goto label_240ca8;
        case 0x240cacu: goto label_240cac;
        case 0x240cb0u: goto label_240cb0;
        case 0x240cb4u: goto label_240cb4;
        case 0x240cb8u: goto label_240cb8;
        case 0x240cbcu: goto label_240cbc;
        case 0x240cc0u: goto label_240cc0;
        case 0x240cc4u: goto label_240cc4;
        case 0x240cc8u: goto label_240cc8;
        case 0x240cccu: goto label_240ccc;
        case 0x240cd0u: goto label_240cd0;
        case 0x240cd4u: goto label_240cd4;
        case 0x240cd8u: goto label_240cd8;
        case 0x240cdcu: goto label_240cdc;
        case 0x240ce0u: goto label_240ce0;
        case 0x240ce4u: goto label_240ce4;
        case 0x240ce8u: goto label_240ce8;
        case 0x240cecu: goto label_240cec;
        case 0x240cf0u: goto label_240cf0;
        case 0x240cf4u: goto label_240cf4;
        case 0x240cf8u: goto label_240cf8;
        case 0x240cfcu: goto label_240cfc;
        case 0x240d00u: goto label_240d00;
        case 0x240d04u: goto label_240d04;
        case 0x240d08u: goto label_240d08;
        case 0x240d0cu: goto label_240d0c;
        case 0x240d10u: goto label_240d10;
        case 0x240d14u: goto label_240d14;
        case 0x240d18u: goto label_240d18;
        case 0x240d1cu: goto label_240d1c;
        case 0x240d20u: goto label_240d20;
        case 0x240d24u: goto label_240d24;
        case 0x240d28u: goto label_240d28;
        case 0x240d2cu: goto label_240d2c;
        case 0x240d30u: goto label_240d30;
        case 0x240d34u: goto label_240d34;
        case 0x240d38u: goto label_240d38;
        case 0x240d3cu: goto label_240d3c;
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        case 0x240ea0u: goto label_240ea0;
        case 0x240ea4u: goto label_240ea4;
        case 0x240ea8u: goto label_240ea8;
        case 0x240eacu: goto label_240eac;
        case 0x240eb0u: goto label_240eb0;
        case 0x240eb4u: goto label_240eb4;
        case 0x240eb8u: goto label_240eb8;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec0u: goto label_240ec0;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ec8u: goto label_240ec8;
        case 0x240eccu: goto label_240ecc;
        case 0x240ed0u: goto label_240ed0;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ed8u: goto label_240ed8;
        case 0x240edcu: goto label_240edc;
        case 0x240ee0u: goto label_240ee0;
        case 0x240ee4u: goto label_240ee4;
        case 0x240ee8u: goto label_240ee8;
        case 0x240eecu: goto label_240eec;
        case 0x240ef0u: goto label_240ef0;
        case 0x240ef4u: goto label_240ef4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240efcu: goto label_240efc;
        case 0x240f00u: goto label_240f00;
        case 0x240f04u: goto label_240f04;
        case 0x240f08u: goto label_240f08;
        case 0x240f0cu: goto label_240f0c;
        case 0x240f10u: goto label_240f10;
        case 0x240f14u: goto label_240f14;
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        default: return;
    }

label_2409b0:
    // 0x2409b0: 0xc056a20  jal         func_15A880
label_2409b4:
    if (ctx->pc == 0x2409B4u) {
        ctx->pc = 0x2409B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409B0u;
        // 0x2409b4: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409B8u;
        goto label_2409b8;
    }
    ctx->pc = 0x2409B0u;
    SET_GPR_U32(ctx, 31, 0x2409B8u);
    ctx->pc = 0x2409B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409B0u;
    // 0x2409b4: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2409B0u, 0x2409B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409B8u;
label_2409b8:
    // 0x2409b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2409bc:
    // 0x2409bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2409bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2409c0:
    // 0x2409c0: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2409c4:
    // 0x2409c4: 0xc056a04  jal         func_15A810
label_2409c8:
    if (ctx->pc == 0x2409C8u) {
        ctx->pc = 0x2409C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409C4u;
        // 0x2409c8: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409CCu;
        goto label_2409cc;
    }
    ctx->pc = 0x2409C4u;
    SET_GPR_U32(ctx, 31, 0x2409CCu);
    ctx->pc = 0x2409C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409C4u;
    // 0x2409c8: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2409C4u, 0x2409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409CCu;
label_2409cc:
    // 0x2409cc: 0xc057138  jal         func_15C4E0
label_2409d0:
    if (ctx->pc == 0x2409D0u) {
        ctx->pc = 0x2409D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409CCu;
        // 0x2409d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409D4u;
        goto label_2409d4;
    }
    ctx->pc = 0x2409CCu;
    SET_GPR_U32(ctx, 31, 0x2409D4u);
    ctx->pc = 0x2409D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409CCu;
    // 0x2409d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x2409CCu, 0x2409D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409D4u;
label_2409d4:
    // 0x2409d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2409d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2409d8:
    // 0x2409d8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2409dc:
    // 0x2409dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2409e0:
    // 0x2409e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2409e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2409e4:
    // 0x2409e4: 0xc056fc8  jal         func_15BF20
label_2409e8:
    if (ctx->pc == 0x2409E8u) {
        ctx->pc = 0x2409E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E4u;
        // 0x2409e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409ECu;
        goto label_2409ec;
    }
    ctx->pc = 0x2409E4u;
    SET_GPR_U32(ctx, 31, 0x2409ECu);
    ctx->pc = 0x2409E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E4u;
    // 0x2409e8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x2409E4u, 0x2409ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409ECu;
label_2409ec:
    // 0x2409ec: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2409ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2409f0:
    // 0x2409f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2409f4:
    // 0x2409f4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2409f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2409f8:
    // 0x2409f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2409f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2409fc:
    // 0x2409fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2409fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240a00:
    // 0x240a00: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240a04:
    // 0x240a04: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240a04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240a08:
    // 0x240a08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240a0c:
    // 0x240a0c: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240a10:
    // 0x240a10: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_240a14:
    if (ctx->pc == 0x240A14u) {
        ctx->pc = 0x240A18u;
        goto label_240a18;
    }
    ctx->pc = 0x240A10u;
    {
        const bool branch_taken_0x240a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a10) {
            ctx->pc = 0x24097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x24097c; return; }
        }
    }
    ctx->pc = 0x240A18u;
label_240a18:
    // 0x240a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240a1c:
    // 0x240a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240a20:
    // 0x240a20: 0x3e00008  jr          $ra
label_240a24:
    if (ctx->pc == 0x240A24u) {
        ctx->pc = 0x240A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A20u;
        // 0x240a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A28u;
        goto label_240a28;
    }
    ctx->pc = 0x240A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A20u;
        // 0x240a24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240A28u;
label_240a28:
    // 0x240a28: 0x0  nop
    ctx->pc = 0x240a28u;
    // NOP
label_240a2c:
    // 0x240a2c: 0x0  nop
    ctx->pc = 0x240a2cu;
    // NOP
label_240a30:
    // 0x240a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240a34:
    // 0x240a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240a38:
    // 0x240a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240a3c:
    // 0x240a3c: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x240a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240a40:
    // 0x240a40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240a44:
    // 0x240a44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x240a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_240a48:
    // 0x240a48: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x240a48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_240a4c:
    // 0x240a4c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x240a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_240a50:
    // 0x240a50: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_240a54:
    // 0x240a54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x240a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_240a58:
    // 0x240a58: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x240a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_240a5c:
    // 0x240a5c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_240a60:
    if (ctx->pc == 0x240A60u) {
        ctx->pc = 0x240A64u;
        goto label_240a64;
    }
    ctx->pc = 0x240A5Cu;
    {
        const bool branch_taken_0x240a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a5c) {
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x240A64u;
label_240a64:
    // 0x240a64: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_240a68:
    // 0x240a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240a6c:
    // 0x240a6c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_240a70:
    // 0x240a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240a74:
    // 0x240a74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240a78:
    // 0x240a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240a7c:
    // 0x240a7c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240a80:
    // 0x240a80: 0xc056a20  jal         func_15A880
label_240a84:
    if (ctx->pc == 0x240A84u) {
        ctx->pc = 0x240A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A80u;
        // 0x240a84: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A88u;
        goto label_240a88;
    }
    ctx->pc = 0x240A80u;
    SET_GPR_U32(ctx, 31, 0x240A88u);
    ctx->pc = 0x240A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A80u;
    // 0x240a84: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240A80u, 0x240A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A88u;
label_240a88:
    // 0x240a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240a8c:
    // 0x240a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240a90:
    // 0x240a90: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_240a94:
    // 0x240a94: 0xc056a04  jal         func_15A810
label_240a98:
    if (ctx->pc == 0x240A98u) {
        ctx->pc = 0x240A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A94u;
        // 0x240a98: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A9Cu;
        goto label_240a9c;
    }
    ctx->pc = 0x240A94u;
    SET_GPR_U32(ctx, 31, 0x240A9Cu);
    ctx->pc = 0x240A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A94u;
    // 0x240a98: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240A94u, 0x240A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A9Cu;
label_240a9c:
    // 0x240a9c: 0xc057138  jal         func_15C4E0
label_240aa0:
    if (ctx->pc == 0x240AA0u) {
        ctx->pc = 0x240AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A9Cu;
        // 0x240aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AA4u;
        goto label_240aa4;
    }
    ctx->pc = 0x240A9Cu;
    SET_GPR_U32(ctx, 31, 0x240AA4u);
    ctx->pc = 0x240AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A9Cu;
    // 0x240aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x240A9Cu, 0x240AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240AA4u;
label_240aa4:
    // 0x240aa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_240aa8:
    // 0x240aa8: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_240aac:
    // 0x240aac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240ab0:
    // 0x240ab0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240ab4:
    // 0x240ab4: 0xc056fc8  jal         func_15BF20
label_240ab8:
    if (ctx->pc == 0x240AB8u) {
        ctx->pc = 0x240AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AB4u;
        // 0x240ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240ABCu;
        goto label_240abc;
    }
    ctx->pc = 0x240AB4u;
    SET_GPR_U32(ctx, 31, 0x240ABCu);
    ctx->pc = 0x240AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AB4u;
    // 0x240ab8: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240AB4u, 0x240ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240ABCu;
label_240abc:
    // 0x240abc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240ac0:
    // 0x240ac0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240ac4:
    // 0x240ac4: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_240ac8:
    // 0x240ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240acc:
    // 0x240acc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240ad0:
    // 0x240ad0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240ad4:
    // 0x240ad4: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240ad8:
    // 0x240ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240adc:
    // 0x240adc: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240ae0:
    // 0x240ae0: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_240ae4:
    if (ctx->pc == 0x240AE4u) {
        ctx->pc = 0x240AE8u;
        goto label_240ae8;
    }
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240a4c;
        }
    }
    ctx->pc = 0x240AE8u;
label_240ae8:
    // 0x240ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240aec:
    // 0x240aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240af0:
    // 0x240af0: 0x3e00008  jr          $ra
label_240af4:
    if (ctx->pc == 0x240AF4u) {
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AF8u;
        goto label_240af8;
    }
    ctx->pc = 0x240AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240AF8u;
label_240af8:
    // 0x240af8: 0x0  nop
    ctx->pc = 0x240af8u;
    // NOP
label_240afc:
    // 0x240afc: 0x0  nop
    ctx->pc = 0x240afcu;
    // NOP
label_240b00:
    // 0x240b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240b04:
    // 0x240b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_240b08:
    // 0x240b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240b0c:
    // 0x240b0c: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x240b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240b10:
    // 0x240b10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240b14:
    // 0x240b14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x240b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_240b18:
    // 0x240b18: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x240b18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_240b1c:
    // 0x240b1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_240b20:
    // 0x240b20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240b24:
    // 0x240b24: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_240b28:
    // 0x240b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b2c:
    // 0x240b2c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240b30:
    // 0x240b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240b34:
    // 0x240b34: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240b38:
    // 0x240b38: 0xc056a20  jal         func_15A880
label_240b3c:
    if (ctx->pc == 0x240B3Cu) {
        ctx->pc = 0x240B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B38u;
        // 0x240b3c: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B40u;
        goto label_240b40;
    }
    ctx->pc = 0x240B38u;
    SET_GPR_U32(ctx, 31, 0x240B40u);
    ctx->pc = 0x240B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B38u;
    // 0x240b3c: 0xa0234ec5  sb          $v1, 0x4EC5($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20165), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240B38u, 0x240B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B40u;
label_240b40:
    // 0x240b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240b44:
    // 0x240b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240b48:
    // 0x240b48: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_240b4c:
    // 0x240b4c: 0xc056a04  jal         func_15A810
label_240b50:
    if (ctx->pc == 0x240B50u) {
        ctx->pc = 0x240B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B4Cu;
        // 0x240b50: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B54u;
        goto label_240b54;
    }
    ctx->pc = 0x240B4Cu;
    SET_GPR_U32(ctx, 31, 0x240B54u);
    ctx->pc = 0x240B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B4Cu;
    // 0x240b50: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240B4Cu, 0x240B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B54u;
label_240b54:
    // 0x240b54: 0xc057138  jal         func_15C4E0
label_240b58:
    if (ctx->pc == 0x240B58u) {
        ctx->pc = 0x240B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B54u;
        // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B5Cu;
        goto label_240b5c;
    }
    ctx->pc = 0x240B54u;
    SET_GPR_U32(ctx, 31, 0x240B5Cu);
    ctx->pc = 0x240B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B54u;
    // 0x240b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x240B54u, 0x240B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B5Cu;
label_240b5c:
    // 0x240b5c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_240b60:
    // 0x240b60: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_240b64:
    // 0x240b64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240b68:
    // 0x240b68: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240b6c:
    // 0x240b6c: 0xc056fc8  jal         func_15BF20
label_240b70:
    if (ctx->pc == 0x240B70u) {
        ctx->pc = 0x240B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B6Cu;
        // 0x240b70: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B74u;
        goto label_240b74;
    }
    ctx->pc = 0x240B6Cu;
    SET_GPR_U32(ctx, 31, 0x240B74u);
    ctx->pc = 0x240B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B6Cu;
    // 0x240b70: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240B6Cu, 0x240B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B74u;
label_240b74:
    // 0x240b74: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240b78:
    // 0x240b78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240b7c:
    // 0x240b7c: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_240b80:
    // 0x240b80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_240b84:
    // 0x240b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_240b88:
    // 0x240b88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b8c:
    // 0x240b8c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240b90:
    // 0x240b90: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_240b94:
    // 0x240b94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_240b98:
    if (ctx->pc == 0x240B98u) {
        ctx->pc = 0x240B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B94u;
        // 0x240b98: 0xa0244e60  sb          $a0, 0x4E60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240B9Cu;
        goto label_240b9c;
    }
    ctx->pc = 0x240B94u;
    {
        const bool branch_taken_0x240b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B94u;
        // 0x240b98: 0xa0244e60  sb          $a0, 0x4E60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b94) {
            ctx->pc = 0x240B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240b1c;
        }
    }
    ctx->pc = 0x240B9Cu;
label_240b9c:
    // 0x240b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240ba0:
    // 0x240ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240ba4:
    // 0x240ba4: 0x3e00008  jr          $ra
label_240ba8:
    if (ctx->pc == 0x240BA8u) {
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA4u;
        // 0x240ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BACu;
        goto label_240bac;
    }
    ctx->pc = 0x240BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BA4u;
        // 0x240ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BACu;
label_240bac:
    // 0x240bac: 0x0  nop
    ctx->pc = 0x240bacu;
    // NOP
label_240bb0:
    // 0x240bb0: 0x3e00008  jr          $ra
label_240bb4:
    if (ctx->pc == 0x240BB4u) {
        ctx->pc = 0x240BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB0u;
        // 0x240bb4: 0xa38092f4  sb          $zero, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240BB8u;
        goto label_240bb8;
    }
    ctx->pc = 0x240BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB0u;
        // 0x240bb4: 0xa38092f4  sb          $zero, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BB8u;
label_240bb8:
    // 0x240bb8: 0x0  nop
    ctx->pc = 0x240bb8u;
    // NOP
label_240bbc:
    // 0x240bbc: 0x0  nop
    ctx->pc = 0x240bbcu;
    // NOP
label_240bc0:
    // 0x240bc0: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_240bc4:
    // 0x240bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240bc8:
    // 0x240bc8: 0x24e718d0  addiu       $a3, $a3, 0x18D0
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6352));
label_240bcc:
    // 0x240bcc: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x240bccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_240bd0:
    // 0x240bd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x240bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_240bd4:
    // 0x240bd4: 0x28c30029  slti        $v1, $a2, 0x29
    ctx->pc = 0x240bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
label_240bd8:
    // 0x240bd8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x240bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_240bdc:
    // 0x240bdc: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x240bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_240be0:
    // 0x240be0: 0xa4850002  sh          $a1, 0x2($a0)
    ctx->pc = 0x240be0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 5));
label_240be4:
    // 0x240be4: 0x90e50004  lbu         $a1, 0x4($a3)
    ctx->pc = 0x240be4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_240be8:
    // 0x240be8: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x240be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_240bec:
    // 0x240bec: 0x90e50005  lbu         $a1, 0x5($a3)
    ctx->pc = 0x240becu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_240bf0:
    // 0x240bf0: 0xa0850005  sb          $a1, 0x5($a0)
    ctx->pc = 0x240bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
label_240bf4:
    // 0x240bf4: 0x90e50006  lbu         $a1, 0x6($a3)
    ctx->pc = 0x240bf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_240bf8:
    // 0x240bf8: 0xa0850006  sb          $a1, 0x6($a0)
    ctx->pc = 0x240bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 5));
label_240bfc:
    // 0x240bfc: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x240bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_240c00:
    // 0x240c00: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x240c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
label_240c04:
    // 0x240c04: 0x90e50008  lbu         $a1, 0x8($a3)
    ctx->pc = 0x240c04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_240c08:
    // 0x240c08: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x240c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
label_240c0c:
    // 0x240c0c: 0x90e50009  lbu         $a1, 0x9($a3)
    ctx->pc = 0x240c0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_240c10:
    // 0x240c10: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x240c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
label_240c14:
    // 0x240c14: 0x90e5000a  lbu         $a1, 0xA($a3)
    ctx->pc = 0x240c14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
label_240c18:
    // 0x240c18: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x240c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
label_240c1c:
    // 0x240c1c: 0x90e5000b  lbu         $a1, 0xB($a3)
    ctx->pc = 0x240c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
label_240c20:
    // 0x240c20: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x240c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
label_240c24:
    // 0x240c24: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x240c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_240c28:
    // 0x240c28: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x240c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_240c2c:
    // 0x240c2c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x240c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_240c30:
    // 0x240c30: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x240c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_240c34:
    // 0x240c34: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_240c38:
    // 0x240c38: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x240c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_240c3c:
    // 0x240c3c: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x240c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_240c40:
    // 0x240c40: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_240c44:
    if (ctx->pc == 0x240C44u) {
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C40u;
        // 0x240c44: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C48u;
        goto label_240c48;
    }
    ctx->pc = 0x240C40u;
    {
        const bool branch_taken_0x240c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C40u;
        // 0x240c44: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c40) {
            ctx->pc = 0x240BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240bcc;
        }
    }
    ctx->pc = 0x240C48u;
label_240c48:
    // 0x240c48: 0x3e00008  jr          $ra
label_240c4c:
    if (ctx->pc == 0x240C4Cu) {
        ctx->pc = 0x240C50u;
        goto label_240c50;
    }
    ctx->pc = 0x240C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_240c54:
    // 0x240c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_240c58:
    // 0x240c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240c5c:
    // 0x240c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240c60:
    // 0x240c60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x240c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240c64:
    // 0x240c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240c68:
    // 0x240c68: 0xc0905a8  jal         func_2416A0
label_240c6c:
    if (ctx->pc == 0x240C6Cu) {
        ctx->pc = 0x240C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C68u;
        // 0x240c6c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C70u;
        goto label_240c70;
    }
    ctx->pc = 0x240C68u;
    SET_GPR_U32(ctx, 31, 0x240C70u);
    ctx->pc = 0x240C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C68u;
    // 0x240c6c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    { ctx->pc = 0x2416a0; return; }
    ctx->pc = 0x240C70u;
label_240c70:
    // 0x240c70: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240c74:
    // 0x240c74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240c78:
    // 0x240c78: 0x34632394  ori         $v1, $v1, 0x2394
    ctx->pc = 0x240c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9108);
label_240c7c:
    // 0x240c7c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x240c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240c80:
    // 0x240c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240c84:
    // 0x240c84: 0xc078050  jal         func_1E0140
label_240c88:
    if (ctx->pc == 0x240C88u) {
        ctx->pc = 0x240C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C84u;
        // 0x240c88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240C8Cu;
        goto label_240c8c;
    }
    ctx->pc = 0x240C84u;
    SET_GPR_U32(ctx, 31, 0x240C8Cu);
    ctx->pc = 0x240C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240C84u;
    // 0x240c88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240C8Cu;
label_240c8c:
    // 0x240c8c: 0xc078070  jal         func_1E01C0
label_240c90:
    if (ctx->pc == 0x240C90u) {
        ctx->pc = 0x240C94u;
        goto label_240c94;
    }
    ctx->pc = 0x240C8Cu;
    SET_GPR_U32(ctx, 31, 0x240C94u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x240C94u;
label_240c94:
    // 0x240c94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_240c98:
    // 0x240c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240c9c:
    // 0x240c9c: 0x34442380  ori         $a0, $v0, 0x2380
    ctx->pc = 0x240c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9088);
label_240ca0:
    // 0x240ca0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ca4:
    // 0x240ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_240ca8:
    // 0x240ca8: 0x10000003  b           . + 4 + (0x3 << 2)
label_240cac:
    if (ctx->pc == 0x240CACu) {
        ctx->pc = 0x240CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CA8u;
        // 0x240cac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CB0u;
        goto label_240cb0;
    }
    ctx->pc = 0x240CA8u;
    {
        const bool branch_taken_0x240ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CA8u;
        // 0x240cac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ca8) {
            ctx->pc = 0x240CB8u;
            goto label_240cb8;
        }
    }
    ctx->pc = 0x240CB0u;
label_240cb0:
    // 0x240cb0: 0xc07b48c  jal         func_1ED230
label_240cb4:
    if (ctx->pc == 0x240CB4u) {
        ctx->pc = 0x240CB8u;
        goto label_240cb8;
    }
    ctx->pc = 0x240CB0u;
    SET_GPR_U32(ctx, 31, 0x240CB8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x240CB8u;
label_240cb8:
    // 0x240cb8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240cbc:
    // 0x240cbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240cc0:
    // 0x240cc0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240cc4:
    // 0x240cc4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x240cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
label_240cc8:
    // 0x240cc8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_240ccc:
    if (ctx->pc == 0x240CCCu) {
        ctx->pc = 0x240CD0u;
        goto label_240cd0;
    }
    ctx->pc = 0x240CC8u;
    {
        const bool branch_taken_0x240cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240cc8) {
            ctx->pc = 0x240CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240cb0;
        }
    }
    ctx->pc = 0x240CD0u;
label_240cd0:
    // 0x240cd0: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x240cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_240cd4:
    // 0x240cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240cd8:
    if (ctx->pc == 0x240CD8u) {
        ctx->pc = 0x240CDCu;
        goto label_240cdc;
    }
    ctx->pc = 0x240CD4u;
    {
        const bool branch_taken_0x240cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240cd4) {
            ctx->pc = 0x240CE4u;
            goto label_240ce4;
        }
    }
    ctx->pc = 0x240CDCu;
label_240cdc:
    // 0x240cdc: 0x1000024e  b           . + 4 + (0x24E << 2)
label_240ce0:
    if (ctx->pc == 0x240CE0u) {
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CE4u;
        goto label_240ce4;
    }
    ctx->pc = 0x240CDCu;
    {
        const bool branch_taken_0x240cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cdc) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240CE4u;
label_240ce4:
    // 0x240ce4: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x240ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_240ce8:
    // 0x240ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_240cec:
    if (ctx->pc == 0x240CECu) {
        ctx->pc = 0x240CF0u;
        goto label_240cf0;
    }
    ctx->pc = 0x240CE8u;
    {
        const bool branch_taken_0x240ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240ce8) {
            ctx->pc = 0x240CF8u;
            goto label_240cf8;
        }
    }
    ctx->pc = 0x240CF0u;
label_240cf0:
    // 0x240cf0: 0x10000249  b           . + 4 + (0x249 << 2)
label_240cf4:
    if (ctx->pc == 0x240CF4u) {
        ctx->pc = 0x240CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF0u;
        // 0x240cf4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240CF8u;
        goto label_240cf8;
    }
    ctx->pc = 0x240CF0u;
    {
        const bool branch_taken_0x240cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CF0u;
        // 0x240cf4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cf0) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240CF8u;
label_240cf8:
    // 0x240cf8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240cfc:
    // 0x240cfc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240d00:
    // 0x240d00: 0x34632398  ori         $v1, $v1, 0x2398
    ctx->pc = 0x240d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9112);
label_240d04:
    // 0x240d04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240d08:
    // 0x240d08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240d0c:
    // 0x240d0c: 0x146000aa  bnez        $v1, . + 4 + (0xAA << 2)
label_240d10:
    if (ctx->pc == 0x240D10u) {
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D14u;
        goto label_240d14;
    }
    ctx->pc = 0x240D0Cu;
    {
        const bool branch_taken_0x240d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D0Cu;
        // 0x240d10: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d0c) {
            ctx->pc = 0x240FB8u;
            goto label_240fb8;
        }
    }
    ctx->pc = 0x240D14u;
label_240d14:
    // 0x240d14: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_240d18:
    // 0x240d18: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240d1c:
    // 0x240d1c: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240d1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240d20:
    // 0x240d20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240d24:
    // 0x240d24: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_240d28:
    if (ctx->pc == 0x240D28u) {
        ctx->pc = 0x240D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D24u;
        // 0x240d28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D2Cu;
        goto label_240d2c;
    }
    ctx->pc = 0x240D24u;
    {
        const bool branch_taken_0x240d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D24u;
        // 0x240d28: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d24) {
            ctx->pc = 0x240D3Cu;
            goto label_240d3c;
        }
    }
    ctx->pc = 0x240D2Cu;
label_240d2c:
    // 0x240d2c: 0xc05b420  jal         func_16D080
label_240d30:
    if (ctx->pc == 0x240D30u) {
        ctx->pc = 0x240D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D2Cu;
        // 0x240d30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D34u;
        goto label_240d34;
    }
    ctx->pc = 0x240D2Cu;
    SET_GPR_U32(ctx, 31, 0x240D34u);
    ctx->pc = 0x240D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D2Cu;
    // 0x240d30: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240D2Cu, 0x240D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D34u;
label_240d34:
    // 0x240d34: 0x10000238  b           . + 4 + (0x238 << 2)
label_240d38:
    if (ctx->pc == 0x240D38u) {
        ctx->pc = 0x240D3Cu;
        goto label_240d3c;
    }
    ctx->pc = 0x240D34u;
    {
        const bool branch_taken_0x240d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d34) {
            ctx->pc = 0x241618u;
            { ctx->pc = 0x241618; return; }
        }
    }
    ctx->pc = 0x240D3Cu;
label_240d3c:
    // 0x240d3c: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240d3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240d40:
    // 0x240d40: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_240d44:
    // 0x240d44: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_240d48:
    // 0x240d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240d4c:
    // 0x240d4c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_240d50:
    if (ctx->pc == 0x240D50u) {
        ctx->pc = 0x240D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D4Cu;
        // 0x240d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D54u;
        goto label_240d54;
    }
    ctx->pc = 0x240D4Cu;
    {
        const bool branch_taken_0x240d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D4Cu;
        // 0x240d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d4c) {
            ctx->pc = 0x240DB8u;
            goto label_240db8;
        }
    }
    ctx->pc = 0x240D54u;
label_240d54:
    // 0x240d54: 0xc05b420  jal         func_16D080
label_240d58:
    if (ctx->pc == 0x240D58u) {
        ctx->pc = 0x240D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D54u;
        // 0x240d58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D5Cu;
        goto label_240d5c;
    }
    ctx->pc = 0x240D54u;
    SET_GPR_U32(ctx, 31, 0x240D5Cu);
    ctx->pc = 0x240D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240D54u;
    // 0x240d58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240D54u, 0x240D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240D5Cu;
label_240d5c:
    // 0x240d5c: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240d60:
    // 0x240d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d64:
    // 0x240d64: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240d68:
    // 0x240d68: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240d6c:
    // 0x240d6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d70:
    // 0x240d70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240d74:
    // 0x240d74: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240d74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240d78:
    // 0x240d78: 0xac222394  sw          $v0, 0x2394($at)
    ctx->pc = 0x240d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 2));
label_240d7c:
    // 0x240d7c: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240d80:
    // 0x240d80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240d84:
    // 0x240d84: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240d88:
    // 0x240d88: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240d8c:
    // 0x240d8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240d90:
    if (ctx->pc == 0x240D90u) {
        ctx->pc = 0x240D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D8Cu;
        // 0x240d90: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240D94u;
        goto label_240d94;
    }
    ctx->pc = 0x240D8Cu;
    {
        const bool branch_taken_0x240d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D8Cu;
        // 0x240d90: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d8c) {
            ctx->pc = 0x240DA4u;
            goto label_240da4;
        }
    }
    ctx->pc = 0x240D94u;
label_240d94:
    // 0x240d94: 0xc078050  jal         func_1E0140
label_240d98:
    if (ctx->pc == 0x240D98u) {
        ctx->pc = 0x240D9Cu;
        goto label_240d9c;
    }
    ctx->pc = 0x240D94u;
    SET_GPR_U32(ctx, 31, 0x240D9Cu);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240D9Cu;
label_240d9c:
    // 0x240d9c: 0x10000060  b           . + 4 + (0x60 << 2)
label_240da0:
    if (ctx->pc == 0x240DA0u) {
        ctx->pc = 0x240DA4u;
        goto label_240da4;
    }
    ctx->pc = 0x240D9Cu;
    {
        const bool branch_taken_0x240d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d9c) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240DA4u;
label_240da4:
    // 0x240da4: 0x0  nop
    ctx->pc = 0x240da4u;
    // NOP
label_240da8:
    // 0x240da8: 0xc078050  jal         func_1E0140
label_240dac:
    if (ctx->pc == 0x240DACu) {
        ctx->pc = 0x240DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA8u;
        // 0x240dac: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DB0u;
        goto label_240db0;
    }
    ctx->pc = 0x240DA8u;
    SET_GPR_U32(ctx, 31, 0x240DB0u);
    ctx->pc = 0x240DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DA8u;
    // 0x240dac: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240DB0u;
label_240db0:
    // 0x240db0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_240db4:
    if (ctx->pc == 0x240DB4u) {
        ctx->pc = 0x240DB8u;
        goto label_240db8;
    }
    ctx->pc = 0x240DB0u;
    {
        const bool branch_taken_0x240db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240db0) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240DB8u;
label_240db8:
    // 0x240db8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_240dbc:
    // 0x240dbc: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240dc0:
    // 0x240dc0: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240dc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240dc4:
    // 0x240dc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240dc8:
    // 0x240dc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_240dcc:
    if (ctx->pc == 0x240DCCu) {
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DD0u;
        goto label_240dd0;
    }
    ctx->pc = 0x240DC8u;
    {
        const bool branch_taken_0x240dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc8) {
            ctx->pc = 0x240E30u;
            goto label_240e30;
        }
    }
    ctx->pc = 0x240DD0u;
label_240dd0:
    // 0x240dd0: 0xc05b420  jal         func_16D080
label_240dd4:
    if (ctx->pc == 0x240DD4u) {
        ctx->pc = 0x240DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DD0u;
        // 0x240dd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240DD8u;
        goto label_240dd8;
    }
    ctx->pc = 0x240DD0u;
    SET_GPR_U32(ctx, 31, 0x240DD8u);
    ctx->pc = 0x240DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240DD0u;
    // 0x240dd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240DD0u, 0x240DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240DD8u;
label_240dd8:
    // 0x240dd8: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ddc:
    // 0x240ddc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240de0:
    // 0x240de0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240de4:
    // 0x240de4: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240de8:
    // 0x240de8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240dec:
    // 0x240dec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_240df0:
    // 0x240df0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240df4:
    // 0x240df4: 0xac222394  sw          $v0, 0x2394($at)
    ctx->pc = 0x240df4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9108), GPR_U32(ctx, 2));
label_240df8:
    // 0x240df8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240dfc:
    // 0x240dfc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e00:
    // 0x240e00: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e04:
    // 0x240e04: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240e08:
    // 0x240e08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240e0c:
    if (ctx->pc == 0x240E0Cu) {
        ctx->pc = 0x240E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E08u;
        // 0x240e0c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E10u;
        goto label_240e10;
    }
    ctx->pc = 0x240E08u;
    {
        const bool branch_taken_0x240e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E08u;
        // 0x240e0c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e08) {
            ctx->pc = 0x240E20u;
            goto label_240e20;
        }
    }
    ctx->pc = 0x240E10u;
label_240e10:
    // 0x240e10: 0xc078050  jal         func_1E0140
label_240e14:
    if (ctx->pc == 0x240E14u) {
        ctx->pc = 0x240E18u;
        goto label_240e18;
    }
    ctx->pc = 0x240E10u;
    SET_GPR_U32(ctx, 31, 0x240E18u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E18u;
label_240e18:
    // 0x240e18: 0x10000041  b           . + 4 + (0x41 << 2)
label_240e1c:
    if (ctx->pc == 0x240E1Cu) {
        ctx->pc = 0x240E20u;
        goto label_240e20;
    }
    ctx->pc = 0x240E18u;
    {
        const bool branch_taken_0x240e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e18) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240E20u;
label_240e20:
    // 0x240e20: 0xc078050  jal         func_1E0140
label_240e24:
    if (ctx->pc == 0x240E24u) {
        ctx->pc = 0x240E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E20u;
        // 0x240e24: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E28u;
        goto label_240e28;
    }
    ctx->pc = 0x240E20u;
    SET_GPR_U32(ctx, 31, 0x240E28u);
    ctx->pc = 0x240E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E20u;
    // 0x240e24: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E28u;
label_240e28:
    // 0x240e28: 0x1000003d  b           . + 4 + (0x3D << 2)
label_240e2c:
    if (ctx->pc == 0x240E2Cu) {
        ctx->pc = 0x240E30u;
        goto label_240e30;
    }
    ctx->pc = 0x240E28u;
    {
        const bool branch_taken_0x240e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e28) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240E30u;
label_240e30:
    // 0x240e30: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x240e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_240e34:
    // 0x240e34: 0xa32004  sllv        $a0, $v1, $a1
    ctx->pc = 0x240e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240e38:
    // 0x240e38: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240e3c:
    // 0x240e3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_240e40:
    // 0x240e40: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_240e44:
    if (ctx->pc == 0x240E44u) {
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E40u;
        // 0x240e44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E48u;
        goto label_240e48;
    }
    ctx->pc = 0x240E40u;
    {
        const bool branch_taken_0x240e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E40u;
        // 0x240e44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e40) {
            ctx->pc = 0x240EA0u;
            goto label_240ea0;
        }
    }
    ctx->pc = 0x240E48u;
label_240e48:
    // 0x240e48: 0xc05b420  jal         func_16D080
label_240e4c:
    if (ctx->pc == 0x240E4Cu) {
        ctx->pc = 0x240E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E48u;
        // 0x240e4c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E50u;
        goto label_240e50;
    }
    ctx->pc = 0x240E48u;
    SET_GPR_U32(ctx, 31, 0x240E50u);
    ctx->pc = 0x240E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E48u;
    // 0x240e4c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240E48u, 0x240E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240E50u;
label_240e50:
    // 0x240e50: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240e54:
    // 0x240e54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e58:
    // 0x240e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240e5c:
    // 0x240e5c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e60:
    // 0x240e60: 0xac232398  sw          $v1, 0x2398($at)
    ctx->pc = 0x240e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 3));
label_240e64:
    // 0x240e64: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240e68:
    // 0x240e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240e6c:
    // 0x240e6c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240e70:
    // 0x240e70: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240e74:
    // 0x240e74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240e78:
    if (ctx->pc == 0x240E78u) {
        ctx->pc = 0x240E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E74u;
        // 0x240e78: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E7Cu;
        goto label_240e7c;
    }
    ctx->pc = 0x240E74u;
    {
        const bool branch_taken_0x240e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E74u;
        // 0x240e78: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e74) {
            ctx->pc = 0x240E8Cu;
            goto label_240e8c;
        }
    }
    ctx->pc = 0x240E7Cu;
label_240e7c:
    // 0x240e7c: 0xc078050  jal         func_1E0140
label_240e80:
    if (ctx->pc == 0x240E80u) {
        ctx->pc = 0x240E84u;
        goto label_240e84;
    }
    ctx->pc = 0x240E7Cu;
    SET_GPR_U32(ctx, 31, 0x240E84u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E84u;
label_240e84:
    // 0x240e84: 0x10000026  b           . + 4 + (0x26 << 2)
label_240e88:
    if (ctx->pc == 0x240E88u) {
        ctx->pc = 0x240E8Cu;
        goto label_240e8c;
    }
    ctx->pc = 0x240E84u;
    {
        const bool branch_taken_0x240e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e84) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240E8Cu;
label_240e8c:
    // 0x240e8c: 0x0  nop
    ctx->pc = 0x240e8cu;
    // NOP
label_240e90:
    // 0x240e90: 0xc078050  jal         func_1E0140
label_240e94:
    if (ctx->pc == 0x240E94u) {
        ctx->pc = 0x240E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E90u;
        // 0x240e94: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240E98u;
        goto label_240e98;
    }
    ctx->pc = 0x240E90u;
    SET_GPR_U32(ctx, 31, 0x240E98u);
    ctx->pc = 0x240E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240E90u;
    // 0x240e94: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x240E98u;
label_240e98:
    // 0x240e98: 0x10000021  b           . + 4 + (0x21 << 2)
label_240e9c:
    if (ctx->pc == 0x240E9Cu) {
        ctx->pc = 0x240EA0u;
        goto label_240ea0;
    }
    ctx->pc = 0x240E98u;
    {
        const bool branch_taken_0x240e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e98) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240EA0u;
label_240ea0:
    // 0x240ea0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240ea4:
    // 0x240ea4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240ea8:
    // 0x240ea8: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240eac:
    // 0x240eac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_240eb0:
    if (ctx->pc == 0x240EB0u) {
        ctx->pc = 0x240EB4u;
        goto label_240eb4;
    }
    ctx->pc = 0x240EACu;
    {
        const bool branch_taken_0x240eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240eac) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240EB4u;
label_240eb4:
    // 0x240eb4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x240eb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240eb8:
    // 0x240eb8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x240eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_240ebc:
    // 0x240ebc: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x240ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_240ec0:
    // 0x240ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x240ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_240ec4:
    // 0x240ec4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_240ec8:
    if (ctx->pc == 0x240EC8u) {
        ctx->pc = 0x240EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EC4u;
        // 0x240ec8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240ECCu;
        goto label_240ecc;
    }
    ctx->pc = 0x240EC4u;
    {
        const bool branch_taken_0x240ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EC4u;
        // 0x240ec8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ec4) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240ECCu;
label_240ecc:
    // 0x240ecc: 0xc05b420  jal         func_16D080
label_240ed0:
    if (ctx->pc == 0x240ED0u) {
        ctx->pc = 0x240ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240ECCu;
        // 0x240ed0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240ED4u;
        goto label_240ed4;
    }
    ctx->pc = 0x240ECCu;
    SET_GPR_U32(ctx, 31, 0x240ED4u);
    ctx->pc = 0x240ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240ECCu;
    // 0x240ed0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240ECCu, 0x240ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240ED4u;
label_240ed4:
    // 0x240ed4: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ed8:
    // 0x240ed8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240edc:
    // 0x240edc: 0x3463239c  ori         $v1, $v1, 0x239C
    ctx->pc = 0x240edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9116);
label_240ee0:
    // 0x240ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240ee4:
    // 0x240ee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240ee8:
    // 0x240ee8: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x240ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_240eec:
    // 0x240eec: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_240ef0:
    if (ctx->pc == 0x240EF0u) {
        ctx->pc = 0x240EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EECu;
        // 0x240ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EF4u;
        goto label_240ef4;
    }
    ctx->pc = 0x240EECu;
    {
        const bool branch_taken_0x240eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EECu;
        // 0x240ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240eec) {
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240EF4u;
label_240ef4:
    // 0x240ef4: 0xc056940  jal         func_15A500
label_240ef8:
    if (ctx->pc == 0x240EF8u) {
        ctx->pc = 0x240EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EF4u;
        // 0x240ef8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240EFCu;
        goto label_240efc;
    }
    ctx->pc = 0x240EF4u;
    SET_GPR_U32(ctx, 31, 0x240EFCu);
    ctx->pc = 0x240EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EF4u;
    // 0x240ef8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A500u, 0x240EF4u, 0x240EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EFCu;
label_240efc:
    // 0x240efc: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240f00:
    // 0x240f00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f04:
    // 0x240f04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x240f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_240f08:
    // 0x240f08: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240f0c:
    // 0x240f0c: 0xac23239c  sw          $v1, 0x239C($at)
    ctx->pc = 0x240f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9116), GPR_U32(ctx, 3));
label_240f10:
    // 0x240f10: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240f14:
    // 0x240f14: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f18:
    // 0x240f18: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240f18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240f1c:
    // 0x240f1c: 0xac202390  sw          $zero, 0x2390($at)
    ctx->pc = 0x240f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 0));
label_240f20:
    // 0x240f20: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240f24:
    // 0x240f24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f28:
    // 0x240f28: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f2c:
    // 0x240f2c: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_240f30:
    // 0x240f30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_240f34:
    if (ctx->pc == 0x240F34u) {
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F38u;
        goto label_240f38;
    }
    ctx->pc = 0x240F30u;
    {
        const bool branch_taken_0x240f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f30) {
            ctx->pc = 0x240F68u;
            goto label_240f68;
        }
    }
    ctx->pc = 0x240F38u;
label_240f38:
    // 0x240f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240f3c:
    // 0x240f3c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f40:
    // 0x240f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f44:
    // 0x240f44: 0x8c2623a0  lw          $a2, 0x23A0($at)
    ctx->pc = 0x240f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
label_240f48:
    // 0x240f48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f4c:
    // 0x240f4c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x240f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_240f50:
    // 0x240f50: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_240f54:
    // 0x240f54: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240f58:
    // 0x240f58: 0xc07f47c  jal         func_1FD1F0
label_240f5c:
    if (ctx->pc == 0x240F5Cu) {
        ctx->pc = 0x240F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F58u;
        // 0x240f5c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F60u;
        goto label_240f60;
    }
    ctx->pc = 0x240F58u;
    SET_GPR_U32(ctx, 31, 0x240F60u);
    ctx->pc = 0x240F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F58u;
    // 0x240f5c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_240f64:
    if (ctx->pc == 0x240F64u) {
        ctx->pc = 0x240F68u;
        goto label_240f68;
    }
    ctx->pc = 0x240F60u;
    {
        const bool branch_taken_0x240f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f60) {
            ctx->pc = 0x241608u;
            { ctx->pc = 0x241608; return; }
        }
    }
    ctx->pc = 0x240F68u;
label_240f68:
    // 0x240f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240f6c:
    // 0x240f6c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x240f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240f70:
    // 0x240f70: 0x8c28239c  lw          $t0, 0x239C($at)
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9116)));
label_240f74:
    // 0x240f74: 0x2901000a  slti        $at, $t0, 0xA
    ctx->pc = 0x240f74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_240f78:
    // 0x240f78: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_240f7c:
    if (ctx->pc == 0x240F7Cu) {
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F80u;
        goto label_240f80;
    }
    ctx->pc = 0x240F78u;
    {
        const bool branch_taken_0x240f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F78u;
        // 0x240f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f78) {
            ctx->pc = 0x240FA4u;
            goto label_240fa4;
        }
    }
    ctx->pc = 0x240F80u;
label_240f80:
    // 0x240f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f84:
    // 0x240f84: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x240f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240f88:
    // 0x240f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240f8c:
    // 0x240f8c: 0x2409019a  addiu       $t1, $zero, 0x19A
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_240f90:
    // 0x240f90: 0x240a0034  addiu       $t2, $zero, 0x34
    ctx->pc = 0x240f90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_240f94:
    // 0x240f94: 0xc07f47c  jal         func_1FD1F0
label_240f98:
    if (ctx->pc == 0x240F98u) {
        ctx->pc = 0x240F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F94u;
        // 0x240f98: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240F9Cu;
        goto label_240f9c;
    }
    ctx->pc = 0x240F94u;
    SET_GPR_U32(ctx, 31, 0x240F9Cu);
    ctx->pc = 0x240F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F94u;
    // 0x240f98: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x240F9Cu;
label_240f9c:
    // 0x240f9c: 0x1000019a  b           . + 4 + (0x19A << 2)
label_240fa0:
    if (ctx->pc == 0x240FA0u) {
        ctx->pc = 0x240FA4u;
        goto label_240fa4;
    }
    ctx->pc = 0x240F9Cu;
    {
        const bool branch_taken_0x240f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f9c) {
            ctx->pc = 0x241608u;
            { ctx->pc = 0x241608; return; }
        }
    }
    ctx->pc = 0x240FA4u;
label_240fa4:
    // 0x240fa4: 0x0  nop
    ctx->pc = 0x240fa4u;
    // NOP
label_240fa8:
    // 0x240fa8: 0xc07f468  jal         func_1FD1A0
label_240fac:
    if (ctx->pc == 0x240FACu) {
        ctx->pc = 0x240FB0u;
        goto label_240fb0;
    }
    ctx->pc = 0x240FA8u;
    SET_GPR_U32(ctx, 31, 0x240FB0u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x240FB0u;
label_240fb0:
    // 0x240fb0: 0x10000195  b           . + 4 + (0x195 << 2)
label_240fb4:
    if (ctx->pc == 0x240FB4u) {
        ctx->pc = 0x240FB8u;
        goto label_240fb8;
    }
    ctx->pc = 0x240FB0u;
    {
        const bool branch_taken_0x240fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fb0) {
            ctx->pc = 0x241608u;
            { ctx->pc = 0x241608; return; }
        }
    }
    ctx->pc = 0x240FB8u;
label_240fb8:
    // 0x240fb8: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x240fb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_240fbc:
    // 0x240fbc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_240fc0:
    // 0x240fc0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_240fc4:
    // 0x240fc4: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x240fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_240fc8:
    // 0x240fc8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x240fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_240fcc:
    // 0x240fcc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_240fd0:
    if (ctx->pc == 0x240FD0u) {
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FD4u;
        goto label_240fd4;
    }
    ctx->pc = 0x240FCCu;
    {
        const bool branch_taken_0x240fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fcc) {
            ctx->pc = 0x241030u;
            goto label_241030;
        }
    }
    ctx->pc = 0x240FD4u;
label_240fd4:
    // 0x240fd4: 0xc05b420  jal         func_16D080
label_240fd8:
    if (ctx->pc == 0x240FD8u) {
        ctx->pc = 0x240FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FD4u;
        // 0x240fd8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FDCu;
        goto label_240fdc;
    }
    ctx->pc = 0x240FD4u;
    SET_GPR_U32(ctx, 31, 0x240FDCu);
    ctx->pc = 0x240FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FD4u;
    // 0x240fd8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x240FD4u, 0x240FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FDCu;
label_240fdc:
    // 0x240fdc: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240fe0:
    // 0x240fe0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240fe4:
    // 0x240fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240fe8:
    // 0x240fe8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_240fec:
    // 0x240fec: 0xc0905a8  jal         func_2416A0
label_240ff0:
    if (ctx->pc == 0x240FF0u) {
        ctx->pc = 0x240FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FECu;
        // 0x240ff0: 0xac202398  sw          $zero, 0x2398($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240FF4u;
        goto label_240ff4;
    }
    ctx->pc = 0x240FECu;
    SET_GPR_U32(ctx, 31, 0x240FF4u);
    ctx->pc = 0x240FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240FECu;
    // 0x240ff0: 0xac202398  sw          $zero, 0x2398($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    { ctx->pc = 0x2416a0; return; }
    ctx->pc = 0x240FF4u;
label_240ff4:
    // 0x240ff4: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x240ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_240ff8:
    // 0x240ff8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240ffc:
    // 0x240ffc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x240ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241000:
    // 0x241000: 0x8c222394  lw          $v0, 0x2394($at)
    ctx->pc = 0x241000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241004:
    // 0x241004: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_241008:
    if (ctx->pc == 0x241008u) {
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24100Cu;
        goto label_24100c;
    }
    ctx->pc = 0x241004u;
    {
        const bool branch_taken_0x241004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241004u;
        // 0x241008: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241004) {
            ctx->pc = 0x24101Cu;
            goto label_24101c;
        }
    }
    ctx->pc = 0x24100Cu;
label_24100c:
    // 0x24100c: 0xc078050  jal         func_1E0140
label_241010:
    if (ctx->pc == 0x241010u) {
        ctx->pc = 0x241014u;
        goto label_241014;
    }
    ctx->pc = 0x24100Cu;
    SET_GPR_U32(ctx, 31, 0x241014u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x241014u;
label_241014:
    // 0x241014: 0x10000142  b           . + 4 + (0x142 << 2)
label_241018:
    if (ctx->pc == 0x241018u) {
        ctx->pc = 0x24101Cu;
        goto label_24101c;
    }
    ctx->pc = 0x241014u;
    {
        const bool branch_taken_0x241014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241014) {
            ctx->pc = 0x241520u;
            { ctx->pc = 0x241520; return; }
        }
    }
    ctx->pc = 0x24101Cu;
label_24101c:
    // 0x24101c: 0x0  nop
    ctx->pc = 0x24101cu;
    // NOP
label_241020:
    // 0x241020: 0xc078050  jal         func_1E0140
label_241024:
    if (ctx->pc == 0x241024u) {
        ctx->pc = 0x241024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241020u;
        // 0x241024: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241028u;
        goto label_241028;
    }
    ctx->pc = 0x241020u;
    SET_GPR_U32(ctx, 31, 0x241028u);
    ctx->pc = 0x241024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241020u;
    // 0x241024: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x241028u;
label_241028:
    // 0x241028: 0x1000013d  b           . + 4 + (0x13D << 2)
label_24102c:
    if (ctx->pc == 0x24102Cu) {
        ctx->pc = 0x241030u;
        goto label_241030;
    }
    ctx->pc = 0x241028u;
    {
        const bool branch_taken_0x241028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241028) {
            ctx->pc = 0x241520u;
            { ctx->pc = 0x241520; return; }
        }
    }
    ctx->pc = 0x241030u;
label_241030:
    // 0x241030: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x241030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_241034:
    // 0x241034: 0x642804  sllv        $a1, $a0, $v1
    ctx->pc = 0x241034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_241038:
    // 0x241038: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x241038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_24103c:
    // 0x24103c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x24103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_241040:
    // 0x241040: 0x10800078  beqz        $a0, . + 4 + (0x78 << 2)
label_241044:
    if (ctx->pc == 0x241044u) {
        ctx->pc = 0x241044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241040u;
        // 0x241044: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241048u;
        goto label_241048;
    }
    ctx->pc = 0x241040u;
    {
        const bool branch_taken_0x241040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x241044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241040u;
        // 0x241044: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241040) {
            ctx->pc = 0x241224u;
            { ctx->pc = 0x241224; return; }
        }
    }
    ctx->pc = 0x241048u;
label_241048:
    // 0x241048: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24104c:
    // 0x24104c: 0x8c232394  lw          $v1, 0x2394($at)
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_241050:
    // 0x241050: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_241054:
    if (ctx->pc == 0x241054u) {
        ctx->pc = 0x241058u;
        goto label_241058;
    }
    ctx->pc = 0x241050u;
    {
        const bool branch_taken_0x241050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241050) {
            ctx->pc = 0x241154u;
            goto label_241154;
        }
    }
    ctx->pc = 0x241058u;
label_241058:
    // 0x241058: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24105c:
    // 0x24105c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_241060:
    // 0x241060: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241064:
    // 0x241064: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x241064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_241068:
    // 0x241068: 0x8c25238c  lw          $a1, 0x238C($at)
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_24106c:
    // 0x24106c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x24106cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_241070:
    // 0x241070: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241074:
    // 0x241074: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241078:
    // 0x241078: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24107c:
    // 0x24107c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_241080:
    // 0x241080: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241080u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241084:
    // 0x241084: 0x90314a3b  lbu         $s1, 0x4A3B($at)
    ctx->pc = 0x241084u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19003)));
label_241088:
    // 0x241088: 0x2a21000f  slti        $at, $s1, 0xF
    ctx->pc = 0x241088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_24108c:
    // 0x24108c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_241090:
    if (ctx->pc == 0x241090u) {
        ctx->pc = 0x241090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24108Cu;
        // 0x241090: 0x3c035555  lui         $v1, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241094u;
        goto label_241094;
    }
    ctx->pc = 0x24108Cu;
    {
        const bool branch_taken_0x24108c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24108Cu;
        // 0x241090: 0x3c035555  lui         $v1, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24108c) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x241094u;
label_241094:
    // 0x241094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241098:
    // 0x241098: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x241098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_24109c:
    // 0x24109c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2410a0:
    // 0x2410a0: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2410a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2410a4:
    // 0x2410a4: 0x8c2223a4  lw          $v0, 0x23A4($at)
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9124)));
label_2410a8:
    // 0x2410a8: 0x112fc2  srl         $a1, $s1, 31
    ctx->pc = 0x2410a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_2410ac:
    // 0x2410ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2410acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2410b0:
    // 0x2410b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2410b4:
    // 0x2410b4: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_2410b8:
    if (ctx->pc == 0x2410B8u) {
        ctx->pc = 0x2410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410B4u;
        // 0x2410b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410BCu;
        goto label_2410bc;
    }
    ctx->pc = 0x2410B4u;
    {
        const bool branch_taken_0x2410b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2410B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410B4u;
        // 0x2410b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410b4) {
            ctx->pc = 0x24113Cu;
            goto label_24113c;
        }
    }
    ctx->pc = 0x2410BCu;
label_2410bc:
    // 0x2410bc: 0xc05b420  jal         func_16D080
label_2410c0:
    if (ctx->pc == 0x2410C0u) {
        ctx->pc = 0x2410C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410BCu;
        // 0x2410c0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410C4u;
        goto label_2410c4;
    }
    ctx->pc = 0x2410BCu;
    SET_GPR_U32(ctx, 31, 0x2410C4u);
    ctx->pc = 0x2410C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2410BCu;
    // 0x2410c0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x2410BCu, 0x2410C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410C4u;
label_2410c4:
    // 0x2410c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2410c8:
    // 0x2410c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2410cc:
    // 0x2410cc: 0x344423a8  ori         $a0, $v0, 0x23A8
    ctx->pc = 0x2410ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9128);
label_2410d0:
    // 0x2410d0: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2410d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2410d4:
    // 0x2410d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2410d8:
    // 0x2410d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2410dc:
    if (ctx->pc == 0x2410DCu) {
        ctx->pc = 0x2410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D8u;
        // 0x2410dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2410E0u;
        goto label_2410e0;
    }
    ctx->pc = 0x2410D8u;
    {
        const bool branch_taken_0x2410d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D8u;
        // 0x2410dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410d8) {
            ctx->pc = 0x241108u;
            goto label_241108;
        }
    }
    ctx->pc = 0x2410E0u;
label_2410e0:
    // 0x2410e0: 0xc07b48c  jal         func_1ED230
label_2410e4:
    if (ctx->pc == 0x2410E4u) {
        ctx->pc = 0x2410E8u;
        goto label_2410e8;
    }
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2410ec:
    // 0x2410ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2410f0:
    // 0x2410f0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2410f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2410f4:
    // 0x2410f4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x2410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_2410f8:
    // 0x2410f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2410fc:
    // 0x2410fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_241100:
    // 0x241100: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_241104:
    // 0x241104: 0xac2223a8  sw          $v0, 0x23A8($at)
    ctx->pc = 0x241104u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 2));
label_241108:
    // 0x241108: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24110c:
    // 0x24110c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24110cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241110:
    // 0x241110: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241114:
    // 0x241114: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_241118:
    // 0x241118: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_24111c:
    if (ctx->pc == 0x24111Cu) {
        ctx->pc = 0x24111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241118u;
        // 0x24111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241120u;
        goto label_241120;
    }
    ctx->pc = 0x241118u;
    {
        const bool branch_taken_0x241118 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241118u;
        // 0x24111c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241118) {
            ctx->pc = 0x2410E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2410e0;
        }
    }
    ctx->pc = 0x241120u;
label_241120:
    // 0x241120: 0xc056948  jal         func_15A520
label_241124:
    if (ctx->pc == 0x241124u) {
        ctx->pc = 0x241124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241120u;
        // 0x241124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241128u;
        goto label_241128;
    }
    ctx->pc = 0x241120u;
    SET_GPR_U32(ctx, 31, 0x241128u);
    ctx->pc = 0x241124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241120u;
    // 0x241124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A520u, 0x241120u, 0x241128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241128u;
label_241128:
    // 0x241128: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24112c:
    // 0x24112c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241130:
    // 0x241130: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241130u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241134:
    // 0x241134: 0x100000fa  b           . + 4 + (0xFA << 2)
label_241138:
    if (ctx->pc == 0x241138u) {
        ctx->pc = 0x241138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241134u;
        // 0x241138: 0xac3123a0  sw          $s1, 0x23A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24113Cu;
        goto label_24113c;
    }
    ctx->pc = 0x241134u;
    {
        const bool branch_taken_0x241134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241134u;
        // 0x241138: 0xac3123a0  sw          $s1, 0x23A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241134) {
            ctx->pc = 0x241520u;
            { ctx->pc = 0x241520; return; }
        }
    }
    ctx->pc = 0x24113Cu;
label_24113c:
    // 0x24113c: 0x0  nop
    ctx->pc = 0x24113cu;
    // NOP
label_241140:
    // 0x241140: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241144:
    // 0x241144: 0xc05b420  jal         func_16D080
label_241148:
    if (ctx->pc == 0x241148u) {
        ctx->pc = 0x241148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241144u;
        // 0x241148: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24114Cu;
        goto label_24114c;
    }
    ctx->pc = 0x241144u;
    SET_GPR_U32(ctx, 31, 0x24114Cu);
    ctx->pc = 0x241148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241144u;
    // 0x241148: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x241144u, 0x24114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24114Cu;
label_24114c:
    // 0x24114c: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_241150:
    if (ctx->pc == 0x241150u) {
        ctx->pc = 0x241154u;
        goto label_241154;
    }
    ctx->pc = 0x24114Cu;
    {
        const bool branch_taken_0x24114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24114c) {
            ctx->pc = 0x241520u;
            { ctx->pc = 0x241520; return; }
        }
    }
    ctx->pc = 0x241154u;
label_241154:
    // 0x241154: 0x0  nop
    ctx->pc = 0x241154u;
    // NOP
label_241158:
    // 0x241158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24115c:
    // 0x24115c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_241160:
    // 0x241160: 0x8c232390  lw          $v1, 0x2390($at)
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_241164:
    // 0x241164: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x241164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_241168:
    // 0x241168: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x241168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_24116c:
    // 0x24116c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24116cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_241170:
    // 0x241170: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x241170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_241174:
    // 0x241174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241178:
    // 0x241178: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x241178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24117c:
    // 0x24117c: 0x90314a18  lbu         $s1, 0x4A18($at)
    ctx->pc = 0x24117cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18968)));
    ctx->pc = 0x241180u;
    return;
}
