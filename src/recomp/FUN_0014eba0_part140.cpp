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


void FUN_0014eba0_part140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x192990u: goto label_192990;
        case 0x192994u: goto label_192994;
        case 0x192998u: goto label_192998;
        case 0x19299cu: goto label_19299c;
        case 0x1929a0u: goto label_1929a0;
        case 0x1929a4u: goto label_1929a4;
        case 0x1929a8u: goto label_1929a8;
        case 0x1929acu: goto label_1929ac;
        case 0x1929b0u: goto label_1929b0;
        case 0x1929b4u: goto label_1929b4;
        case 0x1929b8u: goto label_1929b8;
        case 0x1929bcu: goto label_1929bc;
        case 0x1929c0u: goto label_1929c0;
        case 0x1929c4u: goto label_1929c4;
        case 0x1929c8u: goto label_1929c8;
        case 0x1929ccu: goto label_1929cc;
        case 0x1929d0u: goto label_1929d0;
        case 0x1929d4u: goto label_1929d4;
        case 0x1929d8u: goto label_1929d8;
        case 0x1929dcu: goto label_1929dc;
        case 0x1929e0u: goto label_1929e0;
        case 0x1929e4u: goto label_1929e4;
        case 0x1929e8u: goto label_1929e8;
        case 0x1929ecu: goto label_1929ec;
        case 0x1929f0u: goto label_1929f0;
        case 0x1929f4u: goto label_1929f4;
        case 0x1929f8u: goto label_1929f8;
        case 0x1929fcu: goto label_1929fc;
        case 0x192a00u: goto label_192a00;
        case 0x192a04u: goto label_192a04;
        case 0x192a08u: goto label_192a08;
        case 0x192a0cu: goto label_192a0c;
        case 0x192a10u: goto label_192a10;
        case 0x192a14u: goto label_192a14;
        case 0x192a18u: goto label_192a18;
        case 0x192a1cu: goto label_192a1c;
        case 0x192a20u: goto label_192a20;
        case 0x192a24u: goto label_192a24;
        case 0x192a28u: goto label_192a28;
        case 0x192a2cu: goto label_192a2c;
        case 0x192a30u: goto label_192a30;
        case 0x192a34u: goto label_192a34;
        case 0x192a38u: goto label_192a38;
        case 0x192a3cu: goto label_192a3c;
        case 0x192a40u: goto label_192a40;
        case 0x192a44u: goto label_192a44;
        case 0x192a48u: goto label_192a48;
        case 0x192a4cu: goto label_192a4c;
        case 0x192a50u: goto label_192a50;
        case 0x192a54u: goto label_192a54;
        case 0x192a58u: goto label_192a58;
        case 0x192a5cu: goto label_192a5c;
        case 0x192a60u: goto label_192a60;
        case 0x192a64u: goto label_192a64;
        case 0x192a68u: goto label_192a68;
        case 0x192a6cu: goto label_192a6c;
        case 0x192a70u: goto label_192a70;
        case 0x192a74u: goto label_192a74;
        case 0x192a78u: goto label_192a78;
        case 0x192a7cu: goto label_192a7c;
        case 0x192a80u: goto label_192a80;
        case 0x192a84u: goto label_192a84;
        case 0x192a88u: goto label_192a88;
        case 0x192a8cu: goto label_192a8c;
        case 0x192a90u: goto label_192a90;
        case 0x192a94u: goto label_192a94;
        case 0x192a98u: goto label_192a98;
        case 0x192a9cu: goto label_192a9c;
        case 0x192aa0u: goto label_192aa0;
        case 0x192aa4u: goto label_192aa4;
        case 0x192aa8u: goto label_192aa8;
        case 0x192aacu: goto label_192aac;
        case 0x192ab0u: goto label_192ab0;
        case 0x192ab4u: goto label_192ab4;
        case 0x192ab8u: goto label_192ab8;
        case 0x192abcu: goto label_192abc;
        case 0x192ac0u: goto label_192ac0;
        case 0x192ac4u: goto label_192ac4;
        case 0x192ac8u: goto label_192ac8;
        case 0x192accu: goto label_192acc;
        case 0x192ad0u: goto label_192ad0;
        case 0x192ad4u: goto label_192ad4;
        case 0x192ad8u: goto label_192ad8;
        case 0x192adcu: goto label_192adc;
        case 0x192ae0u: goto label_192ae0;
        case 0x192ae4u: goto label_192ae4;
        case 0x192ae8u: goto label_192ae8;
        case 0x192aecu: goto label_192aec;
        case 0x192af0u: goto label_192af0;
        case 0x192af4u: goto label_192af4;
        case 0x192af8u: goto label_192af8;
        case 0x192afcu: goto label_192afc;
        case 0x192b00u: goto label_192b00;
        case 0x192b04u: goto label_192b04;
        case 0x192b08u: goto label_192b08;
        case 0x192b0cu: goto label_192b0c;
        case 0x192b10u: goto label_192b10;
        case 0x192b14u: goto label_192b14;
        case 0x192b18u: goto label_192b18;
        case 0x192b1cu: goto label_192b1c;
        case 0x192b20u: goto label_192b20;
        case 0x192b24u: goto label_192b24;
        case 0x192b28u: goto label_192b28;
        case 0x192b2cu: goto label_192b2c;
        case 0x192b30u: goto label_192b30;
        case 0x192b34u: goto label_192b34;
        case 0x192b38u: goto label_192b38;
        case 0x192b3cu: goto label_192b3c;
        case 0x192b40u: goto label_192b40;
        case 0x192b44u: goto label_192b44;
        case 0x192b48u: goto label_192b48;
        case 0x192b4cu: goto label_192b4c;
        case 0x192b50u: goto label_192b50;
        case 0x192b54u: goto label_192b54;
        case 0x192b58u: goto label_192b58;
        case 0x192b5cu: goto label_192b5c;
        case 0x192b60u: goto label_192b60;
        case 0x192b64u: goto label_192b64;
        case 0x192b68u: goto label_192b68;
        case 0x192b6cu: goto label_192b6c;
        case 0x192b70u: goto label_192b70;
        case 0x192b74u: goto label_192b74;
        case 0x192b78u: goto label_192b78;
        case 0x192b7cu: goto label_192b7c;
        case 0x192b80u: goto label_192b80;
        case 0x192b84u: goto label_192b84;
        case 0x192b88u: goto label_192b88;
        case 0x192b8cu: goto label_192b8c;
        case 0x192b90u: goto label_192b90;
        case 0x192b94u: goto label_192b94;
        case 0x192b98u: goto label_192b98;
        case 0x192b9cu: goto label_192b9c;
        case 0x192ba0u: goto label_192ba0;
        case 0x192ba4u: goto label_192ba4;
        case 0x192ba8u: goto label_192ba8;
        case 0x192bacu: goto label_192bac;
        case 0x192bb0u: goto label_192bb0;
        case 0x192bb4u: goto label_192bb4;
        case 0x192bb8u: goto label_192bb8;
        case 0x192bbcu: goto label_192bbc;
        case 0x192bc0u: goto label_192bc0;
        case 0x192bc4u: goto label_192bc4;
        case 0x192bc8u: goto label_192bc8;
        case 0x192bccu: goto label_192bcc;
        case 0x192bd0u: goto label_192bd0;
        case 0x192bd4u: goto label_192bd4;
        case 0x192bd8u: goto label_192bd8;
        case 0x192bdcu: goto label_192bdc;
        case 0x192be0u: goto label_192be0;
        case 0x192be4u: goto label_192be4;
        case 0x192be8u: goto label_192be8;
        case 0x192becu: goto label_192bec;
        case 0x192bf0u: goto label_192bf0;
        case 0x192bf4u: goto label_192bf4;
        case 0x192bf8u: goto label_192bf8;
        case 0x192bfcu: goto label_192bfc;
        case 0x192c00u: goto label_192c00;
        case 0x192c04u: goto label_192c04;
        case 0x192c08u: goto label_192c08;
        case 0x192c0cu: goto label_192c0c;
        case 0x192c10u: goto label_192c10;
        case 0x192c14u: goto label_192c14;
        case 0x192c18u: goto label_192c18;
        case 0x192c1cu: goto label_192c1c;
        case 0x192c20u: goto label_192c20;
        case 0x192c24u: goto label_192c24;
        case 0x192c28u: goto label_192c28;
        case 0x192c2cu: goto label_192c2c;
        case 0x192c30u: goto label_192c30;
        case 0x192c34u: goto label_192c34;
        case 0x192c38u: goto label_192c38;
        case 0x192c3cu: goto label_192c3c;
        case 0x192c40u: goto label_192c40;
        case 0x192c44u: goto label_192c44;
        case 0x192c48u: goto label_192c48;
        case 0x192c4cu: goto label_192c4c;
        case 0x192c50u: goto label_192c50;
        case 0x192c54u: goto label_192c54;
        case 0x192c58u: goto label_192c58;
        case 0x192c5cu: goto label_192c5c;
        case 0x192c60u: goto label_192c60;
        case 0x192c64u: goto label_192c64;
        case 0x192c68u: goto label_192c68;
        case 0x192c6cu: goto label_192c6c;
        case 0x192c70u: goto label_192c70;
        case 0x192c74u: goto label_192c74;
        case 0x192c78u: goto label_192c78;
        case 0x192c7cu: goto label_192c7c;
        case 0x192c80u: goto label_192c80;
        case 0x192c84u: goto label_192c84;
        case 0x192c88u: goto label_192c88;
        case 0x192c8cu: goto label_192c8c;
        case 0x192c90u: goto label_192c90;
        case 0x192c94u: goto label_192c94;
        case 0x192c98u: goto label_192c98;
        case 0x192c9cu: goto label_192c9c;
        case 0x192ca0u: goto label_192ca0;
        case 0x192ca4u: goto label_192ca4;
        case 0x192ca8u: goto label_192ca8;
        case 0x192cacu: goto label_192cac;
        case 0x192cb0u: goto label_192cb0;
        case 0x192cb4u: goto label_192cb4;
        case 0x192cb8u: goto label_192cb8;
        case 0x192cbcu: goto label_192cbc;
        case 0x192cc0u: goto label_192cc0;
        case 0x192cc4u: goto label_192cc4;
        case 0x192cc8u: goto label_192cc8;
        case 0x192cccu: goto label_192ccc;
        case 0x192cd0u: goto label_192cd0;
        case 0x192cd4u: goto label_192cd4;
        case 0x192cd8u: goto label_192cd8;
        case 0x192cdcu: goto label_192cdc;
        case 0x192ce0u: goto label_192ce0;
        case 0x192ce4u: goto label_192ce4;
        case 0x192ce8u: goto label_192ce8;
        case 0x192cecu: goto label_192cec;
        case 0x192cf0u: goto label_192cf0;
        case 0x192cf4u: goto label_192cf4;
        case 0x192cf8u: goto label_192cf8;
        case 0x192cfcu: goto label_192cfc;
        case 0x192d00u: goto label_192d00;
        case 0x192d04u: goto label_192d04;
        case 0x192d08u: goto label_192d08;
        case 0x192d0cu: goto label_192d0c;
        case 0x192d10u: goto label_192d10;
        case 0x192d14u: goto label_192d14;
        case 0x192d18u: goto label_192d18;
        case 0x192d1cu: goto label_192d1c;
        case 0x192d20u: goto label_192d20;
        case 0x192d24u: goto label_192d24;
        case 0x192d28u: goto label_192d28;
        case 0x192d2cu: goto label_192d2c;
        case 0x192d30u: goto label_192d30;
        case 0x192d34u: goto label_192d34;
        case 0x192d38u: goto label_192d38;
        case 0x192d3cu: goto label_192d3c;
        case 0x192d40u: goto label_192d40;
        case 0x192d44u: goto label_192d44;
        case 0x192d48u: goto label_192d48;
        case 0x192d4cu: goto label_192d4c;
        case 0x192d50u: goto label_192d50;
        case 0x192d54u: goto label_192d54;
        case 0x192d58u: goto label_192d58;
        case 0x192d5cu: goto label_192d5c;
        case 0x192d60u: goto label_192d60;
        case 0x192d64u: goto label_192d64;
        case 0x192d68u: goto label_192d68;
        case 0x192d6cu: goto label_192d6c;
        case 0x192d70u: goto label_192d70;
        case 0x192d74u: goto label_192d74;
        case 0x192d78u: goto label_192d78;
        case 0x192d7cu: goto label_192d7c;
        case 0x192d80u: goto label_192d80;
        case 0x192d84u: goto label_192d84;
        case 0x192d88u: goto label_192d88;
        case 0x192d8cu: goto label_192d8c;
        case 0x192d90u: goto label_192d90;
        case 0x192d94u: goto label_192d94;
        case 0x192d98u: goto label_192d98;
        case 0x192d9cu: goto label_192d9c;
        case 0x192da0u: goto label_192da0;
        case 0x192da4u: goto label_192da4;
        case 0x192da8u: goto label_192da8;
        case 0x192dacu: goto label_192dac;
        case 0x192db0u: goto label_192db0;
        case 0x192db4u: goto label_192db4;
        case 0x192db8u: goto label_192db8;
        case 0x192dbcu: goto label_192dbc;
        case 0x192dc0u: goto label_192dc0;
        case 0x192dc4u: goto label_192dc4;
        case 0x192dc8u: goto label_192dc8;
        case 0x192dccu: goto label_192dcc;
        case 0x192dd0u: goto label_192dd0;
        case 0x192dd4u: goto label_192dd4;
        case 0x192dd8u: goto label_192dd8;
        case 0x192ddcu: goto label_192ddc;
        case 0x192de0u: goto label_192de0;
        case 0x192de4u: goto label_192de4;
        case 0x192de8u: goto label_192de8;
        case 0x192decu: goto label_192dec;
        case 0x192df0u: goto label_192df0;
        case 0x192df4u: goto label_192df4;
        case 0x192df8u: goto label_192df8;
        case 0x192dfcu: goto label_192dfc;
        case 0x192e00u: goto label_192e00;
        case 0x192e04u: goto label_192e04;
        case 0x192e08u: goto label_192e08;
        case 0x192e0cu: goto label_192e0c;
        case 0x192e10u: goto label_192e10;
        case 0x192e14u: goto label_192e14;
        case 0x192e18u: goto label_192e18;
        case 0x192e1cu: goto label_192e1c;
        case 0x192e20u: goto label_192e20;
        case 0x192e24u: goto label_192e24;
        case 0x192e28u: goto label_192e28;
        case 0x192e2cu: goto label_192e2c;
        case 0x192e30u: goto label_192e30;
        case 0x192e34u: goto label_192e34;
        case 0x192e38u: goto label_192e38;
        case 0x192e3cu: goto label_192e3c;
        case 0x192e40u: goto label_192e40;
        case 0x192e44u: goto label_192e44;
        case 0x192e48u: goto label_192e48;
        case 0x192e4cu: goto label_192e4c;
        case 0x192e50u: goto label_192e50;
        case 0x192e54u: goto label_192e54;
        case 0x192e58u: goto label_192e58;
        case 0x192e5cu: goto label_192e5c;
        case 0x192e60u: goto label_192e60;
        case 0x192e64u: goto label_192e64;
        case 0x192e68u: goto label_192e68;
        case 0x192e6cu: goto label_192e6c;
        case 0x192e70u: goto label_192e70;
        case 0x192e74u: goto label_192e74;
        case 0x192e78u: goto label_192e78;
        case 0x192e7cu: goto label_192e7c;
        case 0x192e80u: goto label_192e80;
        case 0x192e84u: goto label_192e84;
        case 0x192e88u: goto label_192e88;
        case 0x192e8cu: goto label_192e8c;
        case 0x192e90u: goto label_192e90;
        case 0x192e94u: goto label_192e94;
        case 0x192e98u: goto label_192e98;
        case 0x192e9cu: goto label_192e9c;
        case 0x192ea0u: goto label_192ea0;
        case 0x192ea4u: goto label_192ea4;
        case 0x192ea8u: goto label_192ea8;
        case 0x192eacu: goto label_192eac;
        case 0x192eb0u: goto label_192eb0;
        case 0x192eb4u: goto label_192eb4;
        case 0x192eb8u: goto label_192eb8;
        case 0x192ebcu: goto label_192ebc;
        case 0x192ec0u: goto label_192ec0;
        case 0x192ec4u: goto label_192ec4;
        case 0x192ec8u: goto label_192ec8;
        case 0x192eccu: goto label_192ecc;
        case 0x192ed0u: goto label_192ed0;
        case 0x192ed4u: goto label_192ed4;
        case 0x192ed8u: goto label_192ed8;
        case 0x192edcu: goto label_192edc;
        case 0x192ee0u: goto label_192ee0;
        case 0x192ee4u: goto label_192ee4;
        case 0x192ee8u: goto label_192ee8;
        case 0x192eecu: goto label_192eec;
        case 0x192ef0u: goto label_192ef0;
        case 0x192ef4u: goto label_192ef4;
        case 0x192ef8u: goto label_192ef8;
        case 0x192efcu: goto label_192efc;
        case 0x192f00u: goto label_192f00;
        case 0x192f04u: goto label_192f04;
        case 0x192f08u: goto label_192f08;
        case 0x192f0cu: goto label_192f0c;
        case 0x192f10u: goto label_192f10;
        case 0x192f14u: goto label_192f14;
        case 0x192f18u: goto label_192f18;
        case 0x192f1cu: goto label_192f1c;
        case 0x192f20u: goto label_192f20;
        case 0x192f24u: goto label_192f24;
        case 0x192f28u: goto label_192f28;
        case 0x192f2cu: goto label_192f2c;
        case 0x192f30u: goto label_192f30;
        case 0x192f34u: goto label_192f34;
        case 0x192f38u: goto label_192f38;
        case 0x192f3cu: goto label_192f3c;
        case 0x192f40u: goto label_192f40;
        case 0x192f44u: goto label_192f44;
        case 0x192f48u: goto label_192f48;
        case 0x192f4cu: goto label_192f4c;
        case 0x192f50u: goto label_192f50;
        case 0x192f54u: goto label_192f54;
        case 0x192f58u: goto label_192f58;
        case 0x192f5cu: goto label_192f5c;
        case 0x192f60u: goto label_192f60;
        case 0x192f64u: goto label_192f64;
        case 0x192f68u: goto label_192f68;
        case 0x192f6cu: goto label_192f6c;
        case 0x192f70u: goto label_192f70;
        case 0x192f74u: goto label_192f74;
        case 0x192f78u: goto label_192f78;
        case 0x192f7cu: goto label_192f7c;
        case 0x192f80u: goto label_192f80;
        case 0x192f84u: goto label_192f84;
        case 0x192f88u: goto label_192f88;
        case 0x192f8cu: goto label_192f8c;
        case 0x192f90u: goto label_192f90;
        case 0x192f94u: goto label_192f94;
        case 0x192f98u: goto label_192f98;
        case 0x192f9cu: goto label_192f9c;
        case 0x192fa0u: goto label_192fa0;
        case 0x192fa4u: goto label_192fa4;
        case 0x192fa8u: goto label_192fa8;
        case 0x192facu: goto label_192fac;
        case 0x192fb0u: goto label_192fb0;
        case 0x192fb4u: goto label_192fb4;
        case 0x192fb8u: goto label_192fb8;
        case 0x192fbcu: goto label_192fbc;
        case 0x192fc0u: goto label_192fc0;
        case 0x192fc4u: goto label_192fc4;
        case 0x192fc8u: goto label_192fc8;
        case 0x192fccu: goto label_192fcc;
        case 0x192fd0u: goto label_192fd0;
        case 0x192fd4u: goto label_192fd4;
        case 0x192fd8u: goto label_192fd8;
        case 0x192fdcu: goto label_192fdc;
        case 0x192fe0u: goto label_192fe0;
        case 0x192fe4u: goto label_192fe4;
        case 0x192fe8u: goto label_192fe8;
        case 0x192fecu: goto label_192fec;
        case 0x192ff0u: goto label_192ff0;
        case 0x192ff4u: goto label_192ff4;
        case 0x192ff8u: goto label_192ff8;
        case 0x192ffcu: goto label_192ffc;
        case 0x193000u: goto label_193000;
        case 0x193004u: goto label_193004;
        case 0x193008u: goto label_193008;
        case 0x19300cu: goto label_19300c;
        case 0x193010u: goto label_193010;
        case 0x193014u: goto label_193014;
        case 0x193018u: goto label_193018;
        case 0x19301cu: goto label_19301c;
        case 0x193020u: goto label_193020;
        case 0x193024u: goto label_193024;
        case 0x193028u: goto label_193028;
        case 0x19302cu: goto label_19302c;
        case 0x193030u: goto label_193030;
        case 0x193034u: goto label_193034;
        case 0x193038u: goto label_193038;
        case 0x19303cu: goto label_19303c;
        case 0x193040u: goto label_193040;
        case 0x193044u: goto label_193044;
        case 0x193048u: goto label_193048;
        case 0x19304cu: goto label_19304c;
        case 0x193050u: goto label_193050;
        case 0x193054u: goto label_193054;
        case 0x193058u: goto label_193058;
        case 0x19305cu: goto label_19305c;
        case 0x193060u: goto label_193060;
        case 0x193064u: goto label_193064;
        case 0x193068u: goto label_193068;
        case 0x19306cu: goto label_19306c;
        case 0x193070u: goto label_193070;
        case 0x193074u: goto label_193074;
        case 0x193078u: goto label_193078;
        case 0x19307cu: goto label_19307c;
        case 0x193080u: goto label_193080;
        case 0x193084u: goto label_193084;
        case 0x193088u: goto label_193088;
        case 0x19308cu: goto label_19308c;
        case 0x193090u: goto label_193090;
        case 0x193094u: goto label_193094;
        case 0x193098u: goto label_193098;
        case 0x19309cu: goto label_19309c;
        case 0x1930a0u: goto label_1930a0;
        case 0x1930a4u: goto label_1930a4;
        case 0x1930a8u: goto label_1930a8;
        case 0x1930acu: goto label_1930ac;
        case 0x1930b0u: goto label_1930b0;
        case 0x1930b4u: goto label_1930b4;
        case 0x1930b8u: goto label_1930b8;
        case 0x1930bcu: goto label_1930bc;
        case 0x1930c0u: goto label_1930c0;
        case 0x1930c4u: goto label_1930c4;
        case 0x1930c8u: goto label_1930c8;
        case 0x1930ccu: goto label_1930cc;
        case 0x1930d0u: goto label_1930d0;
        case 0x1930d4u: goto label_1930d4;
        case 0x1930d8u: goto label_1930d8;
        case 0x1930dcu: goto label_1930dc;
        case 0x1930e0u: goto label_1930e0;
        case 0x1930e4u: goto label_1930e4;
        case 0x1930e8u: goto label_1930e8;
        case 0x1930ecu: goto label_1930ec;
        case 0x1930f0u: goto label_1930f0;
        case 0x1930f4u: goto label_1930f4;
        case 0x1930f8u: goto label_1930f8;
        case 0x1930fcu: goto label_1930fc;
        case 0x193100u: goto label_193100;
        case 0x193104u: goto label_193104;
        case 0x193108u: goto label_193108;
        case 0x19310cu: goto label_19310c;
        case 0x193110u: goto label_193110;
        case 0x193114u: goto label_193114;
        case 0x193118u: goto label_193118;
        case 0x19311cu: goto label_19311c;
        case 0x193120u: goto label_193120;
        case 0x193124u: goto label_193124;
        case 0x193128u: goto label_193128;
        case 0x19312cu: goto label_19312c;
        case 0x193130u: goto label_193130;
        case 0x193134u: goto label_193134;
        case 0x193138u: goto label_193138;
        case 0x19313cu: goto label_19313c;
        case 0x193140u: goto label_193140;
        case 0x193144u: goto label_193144;
        case 0x193148u: goto label_193148;
        case 0x19314cu: goto label_19314c;
        case 0x193150u: goto label_193150;
        case 0x193154u: goto label_193154;
        case 0x193158u: goto label_193158;
        case 0x19315cu: goto label_19315c;
        default: return;
    }

label_192990:
    // 0x192990: 0x4a0002ff  vnop
    ctx->pc = 0x192990u;
    // NOP operation, no action needed for VU0
label_192994:
    // 0x192994: 0x4a0002ff  vnop
    ctx->pc = 0x192994u;
    // NOP operation, no action needed for VU0
label_192998:
    // 0x192998: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x192998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19299c:
    // 0x19299c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x19299cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1929a0:
    // 0x1929a0: 0x4a0002ff  vnop
    ctx->pc = 0x1929a0u;
    // NOP operation, no action needed for VU0
label_1929a4:
    // 0x1929a4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1929a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1929a8:
    // 0x1929a8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1929a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1929ac:
    // 0x1929ac: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1929acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1929b0:
    // 0x1929b0: 0x4a0002ff  vnop
    ctx->pc = 0x1929b0u;
    // NOP operation, no action needed for VU0
label_1929b4:
    // 0x1929b4: 0x4a0002ff  vnop
    ctx->pc = 0x1929b4u;
    // NOP operation, no action needed for VU0
label_1929b8:
    // 0x1929b8: 0x4a0002ff  vnop
    ctx->pc = 0x1929b8u;
    // NOP operation, no action needed for VU0
label_1929bc:
    // 0x1929bc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1929bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1929c0:
    // 0x1929c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1929c0u;
    // VWAITQ (Q already resolved in this runtime)
label_1929c4:
    // 0x1929c4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1929c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1929c8:
    // 0x1929c8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1929c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1929cc:
    // 0x1929cc: 0x0  nop
    ctx->pc = 0x1929ccu;
    // NOP
label_1929d0:
    // 0x1929d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1929d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1929d4:
    // 0x1929d4: 0x0  nop
    ctx->pc = 0x1929d4u;
    // NOP
label_1929d8:
    // 0x1929d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1929dc:
    if (ctx->pc == 0x1929DCu) {
        ctx->pc = 0x1929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929D8u;
        // 0x1929dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929E0u;
        goto label_1929e0;
    }
    ctx->pc = 0x1929D8u;
    {
        const bool branch_taken_0x1929d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929D8u;
        // 0x1929dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929d8) {
            ctx->pc = 0x1929FCu;
            goto label_1929fc;
        }
    }
    ctx->pc = 0x1929E0u;
label_1929e0:
    // 0x1929e0: 0xc066e26  jal         func_19B898
label_1929e4:
    if (ctx->pc == 0x1929E4u) {
        ctx->pc = 0x1929E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929E0u;
        // 0x1929e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929E8u;
        goto label_1929e8;
    }
    ctx->pc = 0x1929E0u;
    SET_GPR_U32(ctx, 31, 0x1929E8u);
    ctx->pc = 0x1929E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929E0u;
    // 0x1929e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1929E8u;
label_1929e8:
    // 0x1929e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1929e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1929ec:
    // 0x1929ec: 0xc066e26  jal         func_19B898
label_1929f0:
    if (ctx->pc == 0x1929F0u) {
        ctx->pc = 0x1929F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929ECu;
        // 0x1929f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929F4u;
        goto label_1929f4;
    }
    ctx->pc = 0x1929ECu;
    SET_GPR_U32(ctx, 31, 0x1929F4u);
    ctx->pc = 0x1929F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929ECu;
    // 0x1929f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1929F4u;
label_1929f4:
    // 0x1929f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1929f8:
    if (ctx->pc == 0x1929F8u) {
        ctx->pc = 0x1929F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F4u;
        // 0x1929f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929FCu;
        goto label_1929fc;
    }
    ctx->pc = 0x1929F4u;
    {
        const bool branch_taken_0x1929f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F4u;
        // 0x1929f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929f4) {
            ctx->pc = 0x192A60u;
            goto label_192a60;
        }
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0xc066e26  jal         func_19B898
label_192a00:
    if (ctx->pc == 0x192A00u) {
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929FCu;
        // 0x192a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A04u;
        goto label_192a04;
    }
    ctx->pc = 0x1929FCu;
    SET_GPR_U32(ctx, 31, 0x192A04u);
    ctx->pc = 0x192A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929FCu;
    // 0x192a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a08:
    // 0x192a08: 0xc066e26  jal         func_19B898
label_192a0c:
    if (ctx->pc == 0x192A0Cu) {
        ctx->pc = 0x192A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A08u;
        // 0x192a0c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A10u;
        goto label_192a10;
    }
    ctx->pc = 0x192A08u;
    SET_GPR_U32(ctx, 31, 0x192A10u);
    ctx->pc = 0x192A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A08u;
    // 0x192a0c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A10u;
label_192a10:
    // 0x192a10: 0x10000012  b           . + 4 + (0x12 << 2)
label_192a14:
    if (ctx->pc == 0x192A14u) {
        ctx->pc = 0x192A18u;
        goto label_192a18;
    }
    ctx->pc = 0x192A10u;
    {
        const bool branch_taken_0x192a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a10) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A18u;
label_192a18:
    // 0x192a18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_192a1c:
    if (ctx->pc == 0x192A1Cu) {
        ctx->pc = 0x192A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A18u;
        // 0x192a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A20u;
        goto label_192a20;
    }
    ctx->pc = 0x192A18u;
    {
        const bool branch_taken_0x192a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A18u;
        // 0x192a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a18) {
            ctx->pc = 0x192A40u;
            goto label_192a40;
        }
    }
    ctx->pc = 0x192A20u;
label_192a20:
    // 0x192a20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192a24:
    // 0x192a24: 0xc066e26  jal         func_19B898
label_192a28:
    if (ctx->pc == 0x192A28u) {
        ctx->pc = 0x192A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A24u;
        // 0x192a28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A2Cu;
        goto label_192a2c;
    }
    ctx->pc = 0x192A24u;
    SET_GPR_U32(ctx, 31, 0x192A2Cu);
    ctx->pc = 0x192A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A24u;
    // 0x192a28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A2Cu;
label_192a2c:
    // 0x192a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a30:
    // 0x192a30: 0xc066e26  jal         func_19B898
label_192a34:
    if (ctx->pc == 0x192A34u) {
        ctx->pc = 0x192A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A30u;
        // 0x192a34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A38u;
        goto label_192a38;
    }
    ctx->pc = 0x192A30u;
    SET_GPR_U32(ctx, 31, 0x192A38u);
    ctx->pc = 0x192A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A30u;
    // 0x192a34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A38u;
label_192a38:
    // 0x192a38: 0x10000008  b           . + 4 + (0x8 << 2)
label_192a3c:
    if (ctx->pc == 0x192A3Cu) {
        ctx->pc = 0x192A40u;
        goto label_192a40;
    }
    ctx->pc = 0x192A38u;
    {
        const bool branch_taken_0x192a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a38) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A40u;
label_192a40:
    // 0x192a40: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_192a44:
    if (ctx->pc == 0x192A44u) {
        ctx->pc = 0x192A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A40u;
        // 0x192a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A48u;
        goto label_192a48;
    }
    ctx->pc = 0x192A40u;
    {
        const bool branch_taken_0x192a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A40u;
        // 0x192a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a40) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A48u;
label_192a48:
    // 0x192a48: 0xc066e26  jal         func_19B898
label_192a4c:
    if (ctx->pc == 0x192A4Cu) {
        ctx->pc = 0x192A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A48u;
        // 0x192a4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A50u;
        goto label_192a50;
    }
    ctx->pc = 0x192A48u;
    SET_GPR_U32(ctx, 31, 0x192A50u);
    ctx->pc = 0x192A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A48u;
    // 0x192a4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A50u;
label_192a50:
    // 0x192a50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a54:
    // 0x192a54: 0xc066e26  jal         func_19B898
label_192a58:
    if (ctx->pc == 0x192A58u) {
        ctx->pc = 0x192A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A54u;
        // 0x192a58: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A5Cu;
        goto label_192a5c;
    }
    ctx->pc = 0x192A54u;
    SET_GPR_U32(ctx, 31, 0x192A5Cu);
    ctx->pc = 0x192A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A54u;
    // 0x192a58: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A5Cu;
label_192a5c:
    // 0x192a5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192a60:
    // 0x192a60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x192a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_192a64:
    // 0x192a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x192a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_192a68:
    // 0x192a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x192a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_192a6c:
    // 0x192a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x192a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192a70:
    // 0x192a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192a74:
    // 0x192a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192a78:
    // 0x192a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192a7c:
    // 0x192a7c: 0x3e00008  jr          $ra
label_192a80:
    if (ctx->pc == 0x192A80u) {
        ctx->pc = 0x192A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A7Cu;
        // 0x192a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A84u;
        goto label_192a84;
    }
    ctx->pc = 0x192A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A7Cu;
        // 0x192a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A84u;
label_192a84:
    // 0x192a84: 0x0  nop
    ctx->pc = 0x192a84u;
    // NOP
label_192a88:
    // 0x192a88: 0x0  nop
    ctx->pc = 0x192a88u;
    // NOP
label_192a8c:
    // 0x192a8c: 0x0  nop
    ctx->pc = 0x192a8cu;
    // NOP
label_192a90:
    // 0x192a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_192a94:
    // 0x192a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192a98:
    // 0x192a98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_192a9c:
    // 0x192a9c: 0xc06d448  jal         func_1B5120
label_192aa0:
    if (ctx->pc == 0x192AA0u) {
        ctx->pc = 0x192AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A9Cu;
        // 0x192aa0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AA4u;
        goto label_192aa4;
    }
    ctx->pc = 0x192A9Cu;
    SET_GPR_U32(ctx, 31, 0x192AA4u);
    ctx->pc = 0x192AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A9Cu;
    // 0x192aa0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x192AA4u;
label_192aa4:
    // 0x192aa4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192aa8:
    // 0x192aa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192aac:
    // 0x192aac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192ab0:
    // 0x192ab0: 0x0  nop
    ctx->pc = 0x192ab0u;
    // NOP
label_192ab4:
    // 0x192ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x192ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192ab8:
    // 0x192ab8: 0x0  nop
    ctx->pc = 0x192ab8u;
    // NOP
label_192abc:
    // 0x192abc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_192ac0:
    if (ctx->pc == 0x192AC0u) {
        ctx->pc = 0x192AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ABCu;
        // 0x192ac0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AC4u;
        goto label_192ac4;
    }
    ctx->pc = 0x192ABCu;
    {
        const bool branch_taken_0x192abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ABCu;
        // 0x192ac0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192abc) {
            ctx->pc = 0x192AE0u;
            goto label_192ae0;
        }
    }
    ctx->pc = 0x192AC4u;
label_192ac4:
    // 0x192ac4: 0x0  nop
    ctx->pc = 0x192ac4u;
    // NOP
label_192ac8:
    // 0x192ac8: 0x0  nop
    ctx->pc = 0x192ac8u;
    // NOP
label_192acc:
    // 0x192acc: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x192accu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_192ad0:
    // 0x192ad0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_192ad4:
    // 0x192ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192ad8:
    // 0x192ad8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_192adc:
    // 0x192adc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x192adcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_192ae0:
    // 0x192ae0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192ae4:
    // 0x192ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ae8:
    // 0x192ae8: 0x0  nop
    ctx->pc = 0x192ae8u;
    // NOP
label_192aec:
    // 0x192aec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x192aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192af0:
    // 0x192af0: 0x0  nop
    ctx->pc = 0x192af0u;
    // NOP
label_192af4:
    // 0x192af4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_192af8:
    if (ctx->pc == 0x192AF8u) {
        ctx->pc = 0x192AFCu;
        goto label_192afc;
    }
    ctx->pc = 0x192AF4u;
    {
        const bool branch_taken_0x192af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192af4) {
            ctx->pc = 0x192B10u;
            goto label_192b10;
        }
    }
    ctx->pc = 0x192AFCu;
label_192afc:
    // 0x192afc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192b00:
    // 0x192b00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b04:
    // 0x192b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b08:
    // 0x192b08: 0x1000000e  b           . + 4 + (0xE << 2)
label_192b0c:
    if (ctx->pc == 0x192B0Cu) {
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B08u;
        // 0x192b0c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B10u;
        goto label_192b10;
    }
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B08u;
        // 0x192b0c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B44u;
            goto label_192b44;
        }
    }
    ctx->pc = 0x192B10u;
label_192b10:
    // 0x192b10: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_192b14:
    // 0x192b14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b18:
    // 0x192b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b1c:
    // 0x192b1c: 0x0  nop
    ctx->pc = 0x192b1cu;
    // NOP
label_192b20:
    // 0x192b20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192b24:
    // 0x192b24: 0x0  nop
    ctx->pc = 0x192b24u;
    // NOP
label_192b28:
    // 0x192b28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_192b2c:
    if (ctx->pc == 0x192B2Cu) {
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B30u;
        goto label_192b30;
    }
    ctx->pc = 0x192B28u;
    {
        const bool branch_taken_0x192b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b28) {
            ctx->pc = 0x192B48u;
            goto label_192b48;
        }
    }
    ctx->pc = 0x192B30u;
label_192b30:
    // 0x192b30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192b34:
    // 0x192b34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b38:
    // 0x192b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b3c:
    // 0x192b3c: 0x0  nop
    ctx->pc = 0x192b3cu;
    // NOP
label_192b40:
    // 0x192b40: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x192b40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_192b44:
    // 0x192b44: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x192b44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_192b48:
    // 0x192b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192b4c:
    // 0x192b4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x192b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192b50:
    // 0x192b50: 0x3e00008  jr          $ra
label_192b54:
    if (ctx->pc == 0x192B54u) {
        ctx->pc = 0x192B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B50u;
        // 0x192b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B58u;
        goto label_192b58;
    }
    ctx->pc = 0x192B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B50u;
        // 0x192b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B58u;
label_192b58:
    // 0x192b58: 0x0  nop
    ctx->pc = 0x192b58u;
    // NOP
label_192b5c:
    // 0x192b5c: 0x0  nop
    ctx->pc = 0x192b5cu;
    // NOP
label_192b60:
    // 0x192b60: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x192b60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b64:
    // 0x192b64: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x192b64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b68:
    // 0x192b68: 0x3c044226  lui         $a0, 0x4226
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16934 << 16));
label_192b6c:
    // 0x192b6c: 0x3c0c0028  lui         $t4, 0x28
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)40 << 16));
label_192b70:
    // 0x192b70: 0x3c034452  lui         $v1, 0x4452
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17490 << 16));
label_192b74:
    // 0x192b74: 0x348827f0  ori         $t0, $a0, 0x27F0
    ctx->pc = 0x192b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10224);
label_192b78:
    // 0x192b78: 0x258c2cc0  addiu       $t4, $t4, 0x2CC0
    ctx->pc = 0x192b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 11456));
label_192b7c:
    // 0x192b7c: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_192b80:
    // 0x192b80: 0x3c0ac348  lui         $t2, 0xC348
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49992 << 16));
label_192b84:
    // 0x192b84: 0x3c09c47a  lui         $t1, 0xC47A
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50298 << 16));
label_192b88:
    // 0x192b88: 0x3467f08e  ori         $a3, $v1, 0xF08E
    ctx->pc = 0x192b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61582);
label_192b8c:
    // 0x192b8c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_192b90:
    // 0x192b90: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_192b94:
    // 0x192b94: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x192b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_192b98:
    // 0x192b98: 0x18e1821  addu        $v1, $t4, $t6
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_192b9c:
    // 0x192b9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x192b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_192ba0:
    // 0x192ba0: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x192ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
label_192ba4:
    // 0x192ba4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x192ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_192ba8:
    // 0x192ba8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x192ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_192bac:
    // 0x192bac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x192bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_192bb0:
    // 0x192bb0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x192bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_192bb4:
    // 0x192bb4: 0xac6b0018  sw          $t3, 0x18($v1)
    ctx->pc = 0x192bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 11));
label_192bb8:
    // 0x192bb8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x192bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_192bbc:
    // 0x192bbc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x192bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_192bc0:
    // 0x192bc0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x192bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_192bc4:
    // 0x192bc4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x192bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_192bc8:
    // 0x192bc8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x192bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_192bcc:
    // 0x192bcc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x192bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_192bd0:
    // 0x192bd0: 0xac6a0034  sw          $t2, 0x34($v1)
    ctx->pc = 0x192bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 10));
label_192bd4:
    // 0x192bd4: 0xac690038  sw          $t1, 0x38($v1)
    ctx->pc = 0x192bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 9));
label_192bd8:
    // 0x192bd8: 0xac6b003c  sw          $t3, 0x3C($v1)
    ctx->pc = 0x192bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 11));
label_192bdc:
    // 0x192bdc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x192bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_192be0:
    // 0x192be0: 0xac6a0044  sw          $t2, 0x44($v1)
    ctx->pc = 0x192be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 10));
label_192be4:
    // 0x192be4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x192be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_192be8:
    // 0x192be8: 0xac6b004c  sw          $t3, 0x4C($v1)
    ctx->pc = 0x192be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 11));
label_192bec:
    // 0x192bec: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x192becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_192bf0:
    // 0x192bf0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x192bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_192bf4:
    // 0x192bf4: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x192bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_192bf8:
    // 0x192bf8: 0xac6b005c  sw          $t3, 0x5C($v1)
    ctx->pc = 0x192bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 11));
label_192bfc:
    // 0x192bfc: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x192bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_192c00:
    // 0x192c00: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x192c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_192c04:
    // 0x192c04: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x192c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
label_192c08:
    // 0x192c08: 0xac6b006c  sw          $t3, 0x6C($v1)
    ctx->pc = 0x192c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 11));
label_192c0c:
    // 0x192c0c: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x192c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
label_192c10:
    // 0x192c10: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x192c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_192c14:
    // 0x192c14: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x192c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_192c18:
    // 0x192c18: 0xac6b007c  sw          $t3, 0x7C($v1)
    ctx->pc = 0x192c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 11));
label_192c1c:
    // 0x192c1c: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x192c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
label_192c20:
    // 0x192c20: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x192c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_192c24:
    // 0x192c24: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x192c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
label_192c28:
    // 0x192c28: 0xac6b008c  sw          $t3, 0x8C($v1)
    ctx->pc = 0x192c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 11));
label_192c2c:
    // 0x192c2c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x192c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
label_192c30:
    // 0x192c30: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x192c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
label_192c34:
    // 0x192c34: 0xac680098  sw          $t0, 0x98($v1)
    ctx->pc = 0x192c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 8));
label_192c38:
    // 0x192c38: 0xac68009c  sw          $t0, 0x9C($v1)
    ctx->pc = 0x192c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 8));
label_192c3c:
    // 0x192c3c: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x192c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
label_192c40:
    // 0x192c40: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x192c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
label_192c44:
    // 0x192c44: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x192c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
label_192c48:
    // 0x192c48: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x192c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
label_192c4c:
    // 0x192c4c: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x192c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
label_192c50:
    // 0x192c50: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x192c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
label_192c54:
    // 0x192c54: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x192c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_192c58:
    // 0x192c58: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x192c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
label_192c5c:
    // 0x192c5c: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x192c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
label_192c60:
    // 0x192c60: 0xac6700c4  sw          $a3, 0xC4($v1)
    ctx->pc = 0x192c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 7));
label_192c64:
    // 0x192c64: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x192c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
label_192c68:
    // 0x192c68: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x192c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
label_192c6c:
    // 0x192c6c: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
label_192c70:
    // 0x192c70: 0xac6600d4  sw          $a2, 0xD4($v1)
    ctx->pc = 0x192c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 6));
label_192c74:
    // 0x192c74: 0xac6500d8  sw          $a1, 0xD8($v1)
    ctx->pc = 0x192c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 5));
label_192c78:
    // 0x192c78: 0xac6400dc  sw          $a0, 0xDC($v1)
    ctx->pc = 0x192c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 4));
label_192c7c:
    // 0x192c7c: 0xac6400e0  sw          $a0, 0xE0($v1)
    ctx->pc = 0x192c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 4));
label_192c80:
    // 0x192c80: 0xa46000e4  sh          $zero, 0xE4($v1)
    ctx->pc = 0x192c80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 228), (uint16_t)GPR_U32(ctx, 0));
label_192c84:
    // 0x192c84: 0xac6d00e8  sw          $t5, 0xE8($v1)
    ctx->pc = 0x192c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 13));
label_192c88:
    // 0x192c88: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x192c88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_192c8c:
    // 0x192c8c: 0x29a30002  slti        $v1, $t5, 0x2
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
label_192c90:
    // 0x192c90: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_192c94:
    if (ctx->pc == 0x192C94u) {
        ctx->pc = 0x192C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C90u;
        // 0x192c94: 0x25ce00f0  addiu       $t6, $t6, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192C98u;
        goto label_192c98;
    }
    ctx->pc = 0x192C90u;
    {
        const bool branch_taken_0x192c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C90u;
        // 0x192c94: 0x25ce00f0  addiu       $t6, $t6, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c90) {
            ctx->pc = 0x192B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192b98;
        }
    }
    ctx->pc = 0x192C98u;
label_192c98:
    // 0x192c98: 0x3e00008  jr          $ra
label_192c9c:
    if (ctx->pc == 0x192C9Cu) {
        ctx->pc = 0x192CA0u;
        goto label_192ca0;
    }
    ctx->pc = 0x192C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CA0u;
label_192ca0:
    // 0x192ca0: 0xaf8081e8  sw          $zero, -0x7E18($gp)
    ctx->pc = 0x192ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935016), GPR_U32(ctx, 0));
label_192ca4:
    // 0x192ca4: 0xaf8088b8  sw          $zero, -0x7748($gp)
    ctx->pc = 0x192ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 0));
label_192ca8:
    // 0x192ca8: 0xaf8081ec  sw          $zero, -0x7E14($gp)
    ctx->pc = 0x192ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935020), GPR_U32(ctx, 0));
label_192cac:
    // 0x192cac: 0x3e00008  jr          $ra
label_192cb0:
    if (ctx->pc == 0x192CB0u) {
        ctx->pc = 0x192CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CACu;
        // 0x192cb0: 0xaf8088bc  sw          $zero, -0x7744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192CB4u;
        goto label_192cb4;
    }
    ctx->pc = 0x192CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CACu;
        // 0x192cb0: 0xaf8088bc  sw          $zero, -0x7744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CB4u;
label_192cb4:
    // 0x192cb4: 0x0  nop
    ctx->pc = 0x192cb4u;
    // NOP
label_192cb8:
    // 0x192cb8: 0x0  nop
    ctx->pc = 0x192cb8u;
    // NOP
label_192cbc:
    // 0x192cbc: 0x0  nop
    ctx->pc = 0x192cbcu;
    // NOP
label_192cc0:
    // 0x192cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192cc4:
    // 0x192cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_192cc8:
    // 0x192cc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_192ccc:
    // 0x192ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192cd0:
    // 0x192cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192cd4:
    // 0x192cd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192cd8:
    // 0x192cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192cdc:
    // 0x192cdc: 0x0  nop
    ctx->pc = 0x192cdcu;
    // NOP
label_192ce0:
    // 0x192ce0: 0x278388b8  addiu       $v1, $gp, -0x7748
    ctx->pc = 0x192ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936760));
label_192ce4:
    // 0x192ce4: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_192ce8:
    // 0x192ce8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x192ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_192cec:
    // 0x192cec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_192cf0:
    if (ctx->pc == 0x192CF0u) {
        ctx->pc = 0x192CF4u;
        goto label_192cf4;
    }
    ctx->pc = 0x192CECu;
    {
        const bool branch_taken_0x192cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x192cec) {
            ctx->pc = 0x192D00u;
            goto label_192d00;
        }
    }
    ctx->pc = 0x192CF4u;
label_192cf4:
    // 0x192cf4: 0xc070038  jal         func_1C00E0
label_192cf8:
    if (ctx->pc == 0x192CF8u) {
        ctx->pc = 0x192CFCu;
        goto label_192cfc;
    }
    ctx->pc = 0x192CF4u;
    SET_GPR_U32(ctx, 31, 0x192CFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x192CFCu;
label_192cfc:
    // 0x192cfc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x192cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_192d00:
    // 0x192d00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_192d04:
    // 0x192d04: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x192d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_192d08:
    // 0x192d08: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_192d0c:
    if (ctx->pc == 0x192D0Cu) {
        ctx->pc = 0x192D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D08u;
        // 0x192d0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D10u;
        goto label_192d10;
    }
    ctx->pc = 0x192D08u;
    {
        const bool branch_taken_0x192d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D08u;
        // 0x192d0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d08) {
            ctx->pc = 0x192CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192cdc;
        }
    }
    ctx->pc = 0x192D10u;
label_192d10:
    // 0x192d10: 0x8f8488b0  lw          $a0, -0x7750($gp)
    ctx->pc = 0x192d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936752)));
label_192d14:
    // 0x192d14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_192d18:
    if (ctx->pc == 0x192D18u) {
        ctx->pc = 0x192D1Cu;
        goto label_192d1c;
    }
    ctx->pc = 0x192D14u;
    {
        const bool branch_taken_0x192d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d14) {
            ctx->pc = 0x192D28u;
            goto label_192d28;
        }
    }
    ctx->pc = 0x192D1Cu;
label_192d1c:
    // 0x192d1c: 0xc070038  jal         func_1C00E0
label_192d20:
    if (ctx->pc == 0x192D20u) {
        ctx->pc = 0x192D24u;
        goto label_192d24;
    }
    ctx->pc = 0x192D1Cu;
    SET_GPR_U32(ctx, 31, 0x192D24u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x192D24u;
label_192d24:
    // 0x192d24: 0xaf8088b0  sw          $zero, -0x7750($gp)
    ctx->pc = 0x192d24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 0));
label_192d28:
    // 0x192d28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192d2c:
    // 0x192d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192d30:
    // 0x192d30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192d34:
    // 0x192d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192d38:
    // 0x192d38: 0x3e00008  jr          $ra
label_192d3c:
    if (ctx->pc == 0x192D3Cu) {
        ctx->pc = 0x192D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D38u;
        // 0x192d3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D40u;
        goto label_192d40;
    }
    ctx->pc = 0x192D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D38u;
        // 0x192d3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192D40u;
label_192d40:
    // 0x192d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192d44:
    // 0x192d44: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x192d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_192d48:
    // 0x192d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_192d4c:
    // 0x192d4c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_192d50:
    // 0x192d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_192d54:
    // 0x192d54: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x192d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_192d58:
    // 0x192d58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x192d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192d5c:
    // 0x192d5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x192d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_192d60:
    // 0x192d60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192d64:
    // 0x192d64: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x192d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_192d68:
    // 0x192d68: 0x24a54970  addiu       $a1, $a1, 0x4970
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18800));
label_192d6c:
    // 0x192d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192d70:
    // 0x192d70: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x192d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_192d74:
    // 0x192d74: 0x24632ea0  addiu       $v1, $v1, 0x2EA0
    ctx->pc = 0x192d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11936));
label_192d78:
    // 0x192d78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_192d7c:
    // 0x192d7c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_192d80:
    // 0x192d80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x192d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_192d84:
    // 0x192d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_192d88:
    // 0x192d88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x192d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_192d8c:
    // 0x192d8c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_192d90:
    if (ctx->pc == 0x192D90u) {
        ctx->pc = 0x192D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D8Cu;
        // 0x192d90: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D94u;
        goto label_192d94;
    }
    ctx->pc = 0x192D8Cu;
    {
        const bool branch_taken_0x192d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x192D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D8Cu;
        // 0x192d90: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d8c) {
            ctx->pc = 0x192D9Cu;
            goto label_192d9c;
        }
    }
    ctx->pc = 0x192D94u;
label_192d94:
    // 0x192d94: 0x10000006  b           . + 4 + (0x6 << 2)
label_192d98:
    if (ctx->pc == 0x192D98u) {
        ctx->pc = 0x192D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D94u;
        // 0x192d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D9Cu;
        goto label_192d9c;
    }
    ctx->pc = 0x192D94u;
    {
        const bool branch_taken_0x192d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D94u;
        // 0x192d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d94) {
            ctx->pc = 0x192DB0u;
            goto label_192db0;
        }
    }
    ctx->pc = 0x192D9Cu;
label_192d9c:
    // 0x192d9c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_192da0:
    // 0x192da0: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x192da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_192da4:
    // 0x192da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192da8:
    // 0x192da8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x192da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_192dac:
    // 0x192dac: 0x0  nop
    ctx->pc = 0x192dacu;
    // NOP
label_192db0:
    // 0x192db0: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x192db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_192db4:
    // 0x192db4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_192db8:
    if (ctx->pc == 0x192DB8u) {
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DB4u;
        // 0x192db8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192DBCu;
        goto label_192dbc;
    }
    ctx->pc = 0x192DB4u;
    {
        const bool branch_taken_0x192db4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DB4u;
        // 0x192db8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192db4) {
            ctx->pc = 0x192DC4u;
            goto label_192dc4;
        }
    }
    ctx->pc = 0x192DBCu;
label_192dbc:
    // 0x192dbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_192dc0:
    if (ctx->pc == 0x192DC0u) {
        ctx->pc = 0x192DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DBCu;
        // 0x192dc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192DC4u;
        goto label_192dc4;
    }
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DBCu;
        // 0x192dc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DD8u;
            goto label_192dd8;
        }
    }
    ctx->pc = 0x192DC4u;
label_192dc4:
    // 0x192dc4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_192dc8:
    // 0x192dc8: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x192dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_192dcc:
    // 0x192dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192dd0:
    // 0x192dd0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_192dd4:
    // 0x192dd4: 0x0  nop
    ctx->pc = 0x192dd4u;
    // NOP
label_192dd8:
    // 0x192dd8: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x192dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_192ddc:
    // 0x192ddc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_192de0:
    if (ctx->pc == 0x192DE0u) {
        ctx->pc = 0x192DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DDCu;
        // 0x192de0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192DE4u;
        goto label_192de4;
    }
    ctx->pc = 0x192DDCu;
    {
        const bool branch_taken_0x192ddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x192DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DDCu;
        // 0x192de0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ddc) {
            ctx->pc = 0x192DECu;
            goto label_192dec;
        }
    }
    ctx->pc = 0x192DE4u;
label_192de4:
    // 0x192de4: 0x10000006  b           . + 4 + (0x6 << 2)
label_192de8:
    if (ctx->pc == 0x192DE8u) {
        ctx->pc = 0x192DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DE4u;
        // 0x192de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192DECu;
        goto label_192dec;
    }
    ctx->pc = 0x192DE4u;
    {
        const bool branch_taken_0x192de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DE4u;
        // 0x192de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192de4) {
            ctx->pc = 0x192E00u;
            goto label_192e00;
        }
    }
    ctx->pc = 0x192DECu;
label_192dec:
    // 0x192dec: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_192df0:
    // 0x192df0: 0x24420cf4  addiu       $v0, $v0, 0xCF4
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3316));
label_192df4:
    // 0x192df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192df8:
    // 0x192df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x192df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_192dfc:
    // 0x192dfc: 0x0  nop
    ctx->pc = 0x192dfcu;
    // NOP
label_192e00:
    // 0x192e00: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x192e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_192e04:
    // 0x192e04: 0xc070080  jal         func_1C0200
label_192e08:
    if (ctx->pc == 0x192E08u) {
        ctx->pc = 0x192E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E04u;
        // 0x192e08: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E0Cu;
        goto label_192e0c;
    }
    ctx->pc = 0x192E04u;
    SET_GPR_U32(ctx, 31, 0x192E0Cu);
    ctx->pc = 0x192E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E04u;
    // 0x192e08: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x192E0Cu;
label_192e0c:
    // 0x192e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192e10:
    // 0x192e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192e14:
    // 0x192e14: 0xc041744  jal         func_105D10
label_192e18:
    if (ctx->pc == 0x192E18u) {
        ctx->pc = 0x192E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E14u;
        // 0x192e18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E1Cu;
        goto label_192e1c;
    }
    ctx->pc = 0x192E14u;
    SET_GPR_U32(ctx, 31, 0x192E1Cu);
    ctx->pc = 0x192E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E14u;
    // 0x192e18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x192E14u, 0x192E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E1Cu;
label_192e1c:
    // 0x192e1c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x192e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_192e20:
    // 0x192e20: 0x278388b8  addiu       $v1, $gp, -0x7748
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936760));
label_192e24:
    // 0x192e24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x192e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_192e28:
    // 0x192e28: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
label_192e2c:
    if (ctx->pc == 0x192E2Cu) {
        ctx->pc = 0x192E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E28u;
        // 0x192e2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E30u;
        goto label_192e30;
    }
    ctx->pc = 0x192E28u;
    {
        const bool branch_taken_0x192e28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x192E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E28u;
        // 0x192e2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e28) {
            ctx->pc = 0x192E60u;
            goto label_192e60;
        }
    }
    ctx->pc = 0x192E30u;
label_192e30:
    // 0x192e30: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_192e34:
    // 0x192e34: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_192e38:
    // 0x192e38: 0x8c306bd0  lw          $s0, 0x6BD0($at)
    ctx->pc = 0x192e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27600)));
label_192e3c:
    // 0x192e3c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_192e40:
    // 0x192e40: 0x8c316bd4  lw          $s1, 0x6BD4($at)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27604)));
label_192e44:
    // 0x192e44: 0xc070080  jal         func_1C0200
label_192e48:
    if (ctx->pc == 0x192E48u) {
        ctx->pc = 0x192E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E44u;
        // 0x192e48: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E4Cu;
        goto label_192e4c;
    }
    ctx->pc = 0x192E44u;
    SET_GPR_U32(ctx, 31, 0x192E4Cu);
    ctx->pc = 0x192E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E44u;
    // 0x192e48: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x192E4Cu;
label_192e4c:
    // 0x192e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192e50:
    // 0x192e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192e54:
    // 0x192e54: 0xc041744  jal         func_105D10
label_192e58:
    if (ctx->pc == 0x192E58u) {
        ctx->pc = 0x192E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E54u;
        // 0x192e58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E5Cu;
        goto label_192e5c;
    }
    ctx->pc = 0x192E54u;
    SET_GPR_U32(ctx, 31, 0x192E5Cu);
    ctx->pc = 0x192E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192E54u;
    // 0x192e58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x192E54u, 0x192E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E5Cu;
label_192e5c:
    // 0x192e5c: 0xaf8288b0  sw          $v0, -0x7750($gp)
    ctx->pc = 0x192e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 2));
label_192e60:
    // 0x192e60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x192e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_192e64:
    // 0x192e64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192e68:
    // 0x192e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192e6c:
    // 0x192e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192e70:
    // 0x192e70: 0x3e00008  jr          $ra
label_192e74:
    if (ctx->pc == 0x192E74u) {
        ctx->pc = 0x192E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E70u;
        // 0x192e74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192E78u;
        goto label_192e78;
    }
    ctx->pc = 0x192E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E70u;
        // 0x192e74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192E78u;
label_192e78:
    // 0x192e78: 0x0  nop
    ctx->pc = 0x192e78u;
    // NOP
label_192e7c:
    // 0x192e7c: 0x0  nop
    ctx->pc = 0x192e7cu;
    // NOP
label_192e80:
    // 0x192e80: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x192e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_192e84:
    // 0x192e84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x192e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_192e88:
    // 0x192e88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x192e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_192e8c:
    // 0x192e8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_192e90:
    // 0x192e90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_192e94:
    // 0x192e94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x192e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192e98:
    // 0x192e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192e9c:
    // 0x192e9c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_192ea0:
    if (ctx->pc == 0x192EA0u) {
        ctx->pc = 0x192EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E9Cu;
        // 0x192ea0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EA4u;
        goto label_192ea4;
    }
    ctx->pc = 0x192E9Cu;
    {
        const bool branch_taken_0x192e9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x192EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E9Cu;
        // 0x192ea0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e9c) {
            ctx->pc = 0x192EACu;
            goto label_192eac;
        }
    }
    ctx->pc = 0x192EA4u;
label_192ea4:
    // 0x192ea4: 0x100000ae  b           . + 4 + (0xAE << 2)
label_192ea8:
    if (ctx->pc == 0x192EA8u) {
        ctx->pc = 0x192EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EA4u;
        // 0x192ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EACu;
        goto label_192eac;
    }
    ctx->pc = 0x192EA4u;
    {
        const bool branch_taken_0x192ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EA4u;
        // 0x192ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ea4) {
            ctx->pc = 0x193160u;
            { ctx->pc = 0x193160; return; }
        }
    }
    ctx->pc = 0x192EACu;
label_192eac:
    // 0x192eac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x192eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_192eb0:
    // 0x192eb0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_192eb4:
    if (ctx->pc == 0x192EB4u) {
        ctx->pc = 0x192EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EB0u;
        // 0x192eb4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EB8u;
        goto label_192eb8;
    }
    ctx->pc = 0x192EB0u;
    {
        const bool branch_taken_0x192eb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EB0u;
        // 0x192eb4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192eb0) {
            ctx->pc = 0x192EC4u;
            goto label_192ec4;
        }
    }
    ctx->pc = 0x192EB8u;
label_192eb8:
    // 0x192eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ebc:
    // 0x192ebc: 0x10000007  b           . + 4 + (0x7 << 2)
label_192ec0:
    if (ctx->pc == 0x192EC0u) {
        ctx->pc = 0x192EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EBCu;
        // 0x192ec0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EC4u;
        goto label_192ec4;
    }
    ctx->pc = 0x192EBCu;
    {
        const bool branch_taken_0x192ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EBCu;
        // 0x192ec0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ebc) {
            ctx->pc = 0x192EDCu;
            goto label_192edc;
        }
    }
    ctx->pc = 0x192EC4u;
label_192ec4:
    // 0x192ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_192ec8:
    // 0x192ec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_192ecc:
    // 0x192ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ed0:
    // 0x192ed0: 0x0  nop
    ctx->pc = 0x192ed0u;
    // NOP
label_192ed4:
    // 0x192ed4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x192ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_192ed8:
    // 0x192ed8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x192ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_192edc:
    // 0x192edc: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x192edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_192ee0:
    // 0x192ee0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_192ee4:
    if (ctx->pc == 0x192EE4u) {
        ctx->pc = 0x192EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EE0u;
        // 0x192ee4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EE8u;
        goto label_192ee8;
    }
    ctx->pc = 0x192EE0u;
    {
        const bool branch_taken_0x192ee0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EE0u;
        // 0x192ee4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ee0) {
            ctx->pc = 0x192EF4u;
            goto label_192ef4;
        }
    }
    ctx->pc = 0x192EE8u;
label_192ee8:
    // 0x192ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192eec:
    // 0x192eec: 0x10000007  b           . + 4 + (0x7 << 2)
label_192ef0:
    if (ctx->pc == 0x192EF0u) {
        ctx->pc = 0x192EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EECu;
        // 0x192ef0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192EF4u;
        goto label_192ef4;
    }
    ctx->pc = 0x192EECu;
    {
        const bool branch_taken_0x192eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EECu;
        // 0x192ef0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192eec) {
            ctx->pc = 0x192F0Cu;
            goto label_192f0c;
        }
    }
    ctx->pc = 0x192EF4u;
label_192ef4:
    // 0x192ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_192ef8:
    // 0x192ef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_192efc:
    // 0x192efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192f00:
    // 0x192f00: 0x0  nop
    ctx->pc = 0x192f00u;
    // NOP
label_192f04:
    // 0x192f04: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x192f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_192f08:
    // 0x192f08: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x192f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_192f0c:
    // 0x192f0c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x192f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192f10:
    // 0x192f10: 0x0  nop
    ctx->pc = 0x192f10u;
    // NOP
label_192f14:
    // 0x192f14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_192f18:
    if (ctx->pc == 0x192F18u) {
        ctx->pc = 0x192F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F14u;
        // 0x192f18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F1Cu;
        goto label_192f1c;
    }
    ctx->pc = 0x192F14u;
    {
        const bool branch_taken_0x192f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F14u;
        // 0x192f18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f14) {
            ctx->pc = 0x192F30u;
            goto label_192f30;
        }
    }
    ctx->pc = 0x192F1Cu;
label_192f1c:
    // 0x192f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_192f20:
    // 0x192f20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192f24:
    // 0x192f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192f28:
    // 0x192f28: 0x0  nop
    ctx->pc = 0x192f28u;
    // NOP
label_192f2c:
    // 0x192f2c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x192f2cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_192f30:
    // 0x192f30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x192f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_192f34:
    // 0x192f34: 0xc04dd00  jal         func_137400
label_192f38:
    if (ctx->pc == 0x192F38u) {
        ctx->pc = 0x192F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F34u;
        // 0x192f38: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F3Cu;
        goto label_192f3c;
    }
    ctx->pc = 0x192F34u;
    SET_GPR_U32(ctx, 31, 0x192F3Cu);
    ctx->pc = 0x192F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F34u;
    // 0x192f38: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137400u, 0x192F34u, 0x192F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F3Cu;
label_192f3c:
    // 0x192f3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x192f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_192f40:
    // 0x192f40: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x192f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_192f44:
    // 0x192f44: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x192f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_192f48:
    // 0x192f48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x192f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_192f4c:
    // 0x192f4c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x192f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_192f50:
    // 0x192f50: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x192f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
label_192f54:
    // 0x192f54: 0x8e6300ac  lw          $v1, 0xAC($s3)
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_192f58:
    // 0x192f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192f5c:
    // 0x192f5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192f60:
    // 0x192f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x192f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_192f64:
    // 0x192f64: 0xae6300ac  sw          $v1, 0xAC($s3)
    ctx->pc = 0x192f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 3));
label_192f68:
    // 0x192f68: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_192f6c:
    // 0x192f6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x192f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_192f70:
    // 0x192f70: 0xc066d7a  jal         func_19B5E8
label_192f74:
    if (ctx->pc == 0x192F74u) {
        ctx->pc = 0x192F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F70u;
        // 0x192f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F78u;
        goto label_192f78;
    }
    ctx->pc = 0x192F70u;
    SET_GPR_U32(ctx, 31, 0x192F78u);
    ctx->pc = 0x192F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F70u;
    // 0x192f74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x192F78u;
label_192f78:
    // 0x192f78: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x192f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_192f7c:
    // 0x192f7c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x192f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_192f80:
    // 0x192f80: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_192f84:
    // 0x192f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192f88:
    // 0x192f88: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x192f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
label_192f8c:
    // 0x192f8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x192f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192f90:
    // 0x192f90: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_192f94:
    // 0x192f94: 0xc066d7a  jal         func_19B5E8
label_192f98:
    if (ctx->pc == 0x192F98u) {
        ctx->pc = 0x192F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F94u;
        // 0x192f98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F9Cu;
        goto label_192f9c;
    }
    ctx->pc = 0x192F94u;
    SET_GPR_U32(ctx, 31, 0x192F9Cu);
    ctx->pc = 0x192F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F94u;
    // 0x192f98: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x192F9Cu;
label_192f9c:
    // 0x192f9c: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x192f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_192fa0:
    // 0x192fa0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_192fa4:
    // 0x192fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_192fa8:
    // 0x192fa8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x192fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_192fac:
    // 0x192fac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x192facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_192fb0:
    // 0x192fb0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_192fb4:
    // 0x192fb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x192fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_192fb8:
    // 0x192fb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_192fbc:
    // 0x192fbc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x192fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192fc0:
    // 0x192fc0: 0xc08e93e  jal         func_23A4F8
label_192fc4:
    if (ctx->pc == 0x192FC4u) {
        ctx->pc = 0x192FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FC0u;
        // 0x192fc4: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192FC8u;
        goto label_192fc8;
    }
    ctx->pc = 0x192FC0u;
    SET_GPR_U32(ctx, 31, 0x192FC8u);
    ctx->pc = 0x192FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FC0u;
    // 0x192fc4: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x192FC8u;
label_192fc8:
    // 0x192fc8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_192fcc:
    // 0x192fcc: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x192fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_192fd0:
    // 0x192fd0: 0xc066e08  jal         func_19B820
label_192fd4:
    if (ctx->pc == 0x192FD4u) {
        ctx->pc = 0x192FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FD0u;
        // 0x192fd4: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192FD8u;
        goto label_192fd8;
    }
    ctx->pc = 0x192FD0u;
    SET_GPR_U32(ctx, 31, 0x192FD8u);
    ctx->pc = 0x192FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FD0u;
    // 0x192fd4: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x192FD8u;
label_192fd8:
    // 0x192fd8: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x192fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192fdc:
    // 0x192fdc: 0x27b40158  addiu       $s4, $sp, 0x158
    ctx->pc = 0x192fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_192fe0:
    // 0x192fe0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x192fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192fe4:
    // 0x192fe4: 0xc7ac0154  lwc1        $f12, 0x154($sp)
    ctx->pc = 0x192fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192fe8:
    // 0x192fe8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x192fe8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_192fec:
    // 0x192fec: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x192fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_192ff0:
    // 0x192ff0: 0x46000344  c1          0x344
    ctx->pc = 0x192ff0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_192ff4:
    // 0x192ff4: 0x0  nop
    ctx->pc = 0x192ff4u;
    // NOP
label_192ff8:
    // 0x192ff8: 0x0  nop
    ctx->pc = 0x192ff8u;
    // NOP
label_192ffc:
    // 0x192ffc: 0xc06d51e  jal         func_1B5478
label_193000:
    if (ctx->pc == 0x193000u) {
        ctx->pc = 0x193004u;
        goto label_193004;
    }
    ctx->pc = 0x192FFCu;
    SET_GPR_U32(ctx, 31, 0x193004u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193004u;
label_193004:
    // 0x193004: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x193004u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_193008:
    // 0x193008: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x193008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_19300c:
    // 0x19300c: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x19300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193010:
    // 0x193010: 0xc06d51e  jal         func_1B5478
label_193014:
    if (ctx->pc == 0x193014u) {
        ctx->pc = 0x193014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193010u;
        // 0x193014: 0xc68d0000  lwc1        $f13, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193018u;
        goto label_193018;
    }
    ctx->pc = 0x193010u;
    SET_GPR_U32(ctx, 31, 0x193018u);
    ctx->pc = 0x193014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193010u;
    // 0x193014: 0xc68d0000  lwc1        $f13, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193018u;
label_193018:
    // 0x193018: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x193018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_19301c:
    // 0x19301c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x19301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_193020:
    // 0x193020: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_193024:
    // 0x193024: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x193024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_193028:
    // 0x193028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19302c:
    // 0x19302c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_193030:
    // 0x193030: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_193034:
    // 0x193034: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x193034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193038:
    // 0x193038: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x193038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19303c:
    // 0x19303c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x19303cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193040:
    // 0x193040: 0xc08e93e  jal         func_23A4F8
label_193044:
    if (ctx->pc == 0x193044u) {
        ctx->pc = 0x193044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193040u;
        // 0x193044: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193048u;
        goto label_193048;
    }
    ctx->pc = 0x193040u;
    SET_GPR_U32(ctx, 31, 0x193048u);
    ctx->pc = 0x193044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193040u;
    // 0x193044: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x193048u;
label_193048:
    // 0x193048: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x193048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_19304c:
    // 0x19304c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x19304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_193050:
    // 0x193050: 0xc066e08  jal         func_19B820
label_193054:
    if (ctx->pc == 0x193054u) {
        ctx->pc = 0x193054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193050u;
        // 0x193054: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193058u;
        goto label_193058;
    }
    ctx->pc = 0x193050u;
    SET_GPR_U32(ctx, 31, 0x193058u);
    ctx->pc = 0x193054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193050u;
    // 0x193054: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x193058u;
label_193058:
    // 0x193058: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x193058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19305c:
    // 0x19305c: 0x27b20168  addiu       $s2, $sp, 0x168
    ctx->pc = 0x19305cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_193060:
    // 0x193060: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x193060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193064:
    // 0x193064: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x193064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193068:
    // 0x193068: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x193068u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_19306c:
    // 0x19306c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x19306cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_193070:
    // 0x193070: 0x46000344  c1          0x344
    ctx->pc = 0x193070u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_193074:
    // 0x193074: 0x0  nop
    ctx->pc = 0x193074u;
    // NOP
label_193078:
    // 0x193078: 0x0  nop
    ctx->pc = 0x193078u;
    // NOP
label_19307c:
    // 0x19307c: 0xc06d51e  jal         func_1B5478
label_193080:
    if (ctx->pc == 0x193080u) {
        ctx->pc = 0x193084u;
        goto label_193084;
    }
    ctx->pc = 0x19307Cu;
    SET_GPR_U32(ctx, 31, 0x193084u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193084u;
label_193084:
    // 0x193084: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x193084u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_193088:
    // 0x193088: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x193088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_19308c:
    // 0x19308c: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x19308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193090:
    // 0x193090: 0xc06d51e  jal         func_1B5478
label_193094:
    if (ctx->pc == 0x193094u) {
        ctx->pc = 0x193094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193090u;
        // 0x193094: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193098u;
        goto label_193098;
    }
    ctx->pc = 0x193090u;
    SET_GPR_U32(ctx, 31, 0x193098u);
    ctx->pc = 0x193094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193090u;
    // 0x193094: 0xc64d0000  lwc1        $f13, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193098u;
label_193098:
    // 0x193098: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x193098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_19309c:
    // 0x19309c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1930a0:
    // 0x1930a0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1930a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1930a4:
    // 0x1930a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1930a8:
    if (ctx->pc == 0x1930A8u) {
        ctx->pc = 0x1930A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930A4u;
        // 0x1930a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930ACu;
        goto label_1930ac;
    }
    ctx->pc = 0x1930A4u;
    {
        const bool branch_taken_0x1930a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930A4u;
        // 0x1930a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930a4) {
            ctx->pc = 0x1930D8u;
            goto label_1930d8;
        }
    }
    ctx->pc = 0x1930ACu;
label_1930ac:
    // 0x1930ac: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1930acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1930b0:
    // 0x1930b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1930b4:
    if (ctx->pc == 0x1930B4u) {
        ctx->pc = 0x1930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B0u;
        // 0x1930b4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930B8u;
        goto label_1930b8;
    }
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B0u;
        // 0x1930b4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x1930C8u;
            goto label_1930c8;
        }
    }
    ctx->pc = 0x1930B8u;
label_1930b8:
    // 0x1930b8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1930b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1930bc:
    // 0x1930bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1930c0:
    if (ctx->pc == 0x1930C0u) {
        ctx->pc = 0x1930C4u;
        goto label_1930c4;
    }
    ctx->pc = 0x1930BCu;
    {
        const bool branch_taken_0x1930bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930bc) {
            ctx->pc = 0x1930D4u;
            goto label_1930d4;
        }
    }
    ctx->pc = 0x1930C4u;
label_1930c4:
    // 0x1930c4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1930c8:
    // 0x1930c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1930c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1930cc:
    // 0x1930cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1930d0:
    if (ctx->pc == 0x1930D0u) {
        ctx->pc = 0x1930D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930CCu;
        // 0x1930d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930D4u;
        goto label_1930d4;
    }
    ctx->pc = 0x1930CCu;
    {
        const bool branch_taken_0x1930cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930CCu;
        // 0x1930d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930cc) {
            ctx->pc = 0x1930D8u;
            goto label_1930d8;
        }
    }
    ctx->pc = 0x1930D4u;
label_1930d4:
    // 0x1930d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1930d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1930d8:
    // 0x1930d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1930dc:
    if (ctx->pc == 0x1930DCu) {
        ctx->pc = 0x1930E0u;
        goto label_1930e0;
    }
    ctx->pc = 0x1930D8u;
    {
        const bool branch_taken_0x1930d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930d8) {
            ctx->pc = 0x193114u;
            goto label_193114;
        }
    }
    ctx->pc = 0x1930E0u;
label_1930e0:
    // 0x1930e0: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_1930e4:
    // 0x1930e4: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1930e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1930e8:
    // 0x1930e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1930ec:
    // 0x1930ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1930ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1930f0:
    // 0x1930f0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1930f4:
    // 0x1930f4: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1930f8:
    // 0x1930f8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1930f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1930fc:
    // 0x1930fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193100:
    // 0x193100: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_193104:
    // 0x193104: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_193108:
    // 0x193108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19310c:
    // 0x19310c: 0x1000000a  b           . + 4 + (0xA << 2)
label_193110:
    if (ctx->pc == 0x193110u) {
        ctx->pc = 0x193110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19310Cu;
        // 0x193110: 0xe4400098  swc1        $f0, 0x98($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193114u;
        goto label_193114;
    }
    ctx->pc = 0x19310Cu;
    {
        const bool branch_taken_0x19310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19310Cu;
        // 0x193110: 0xe4400098  swc1        $f0, 0x98($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19310c) {
            ctx->pc = 0x193138u;
            goto label_193138;
        }
    }
    ctx->pc = 0x193114u;
label_193114:
    // 0x193114: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x193114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_193118:
    // 0x193118: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x193118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19311c:
    // 0x19311c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x19311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193120:
    // 0x193120: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x193120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_193124:
    // 0x193124: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_193128:
    // 0x193128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19312c:
    // 0x19312c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_193130:
    // 0x193130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193134:
    // 0x193134: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x193134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_193138:
    // 0x193138: 0x8e6500e8  lw          $a1, 0xE8($s3)
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_19313c:
    // 0x19313c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_193140:
    // 0x193140: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x193140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193144:
    // 0x193144: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_193148:
    // 0x193148: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19314c:
    // 0x19314c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x19314cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_193150:
    // 0x193150: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x193150u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_193154:
    // 0x193154: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_193158:
    // 0x193158: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19315c:
    // 0x19315c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x19315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    ctx->pc = 0x193160u;
    return;
}
