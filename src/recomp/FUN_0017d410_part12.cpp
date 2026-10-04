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


void FUN_0017d410_part12(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x182a00u: goto label_182a00;
        case 0x182a04u: goto label_182a04;
        case 0x182a08u: goto label_182a08;
        case 0x182a0cu: goto label_182a0c;
        case 0x182a10u: goto label_182a10;
        case 0x182a14u: goto label_182a14;
        case 0x182a18u: goto label_182a18;
        case 0x182a1cu: goto label_182a1c;
        case 0x182a20u: goto label_182a20;
        case 0x182a24u: goto label_182a24;
        case 0x182a28u: goto label_182a28;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a30u: goto label_182a30;
        case 0x182a34u: goto label_182a34;
        case 0x182a38u: goto label_182a38;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a40u: goto label_182a40;
        case 0x182a44u: goto label_182a44;
        case 0x182a48u: goto label_182a48;
        case 0x182a4cu: goto label_182a4c;
        case 0x182a50u: goto label_182a50;
        case 0x182a54u: goto label_182a54;
        case 0x182a58u: goto label_182a58;
        case 0x182a5cu: goto label_182a5c;
        case 0x182a60u: goto label_182a60;
        case 0x182a64u: goto label_182a64;
        case 0x182a68u: goto label_182a68;
        case 0x182a6cu: goto label_182a6c;
        case 0x182a70u: goto label_182a70;
        case 0x182a74u: goto label_182a74;
        case 0x182a78u: goto label_182a78;
        case 0x182a7cu: goto label_182a7c;
        case 0x182a80u: goto label_182a80;
        case 0x182a84u: goto label_182a84;
        case 0x182a88u: goto label_182a88;
        case 0x182a8cu: goto label_182a8c;
        case 0x182a90u: goto label_182a90;
        case 0x182a94u: goto label_182a94;
        case 0x182a98u: goto label_182a98;
        case 0x182a9cu: goto label_182a9c;
        case 0x182aa0u: goto label_182aa0;
        case 0x182aa4u: goto label_182aa4;
        case 0x182aa8u: goto label_182aa8;
        case 0x182aacu: goto label_182aac;
        case 0x182ab0u: goto label_182ab0;
        case 0x182ab4u: goto label_182ab4;
        case 0x182ab8u: goto label_182ab8;
        case 0x182abcu: goto label_182abc;
        case 0x182ac0u: goto label_182ac0;
        case 0x182ac4u: goto label_182ac4;
        case 0x182ac8u: goto label_182ac8;
        case 0x182accu: goto label_182acc;
        case 0x182ad0u: goto label_182ad0;
        case 0x182ad4u: goto label_182ad4;
        case 0x182ad8u: goto label_182ad8;
        case 0x182adcu: goto label_182adc;
        case 0x182ae0u: goto label_182ae0;
        case 0x182ae4u: goto label_182ae4;
        case 0x182ae8u: goto label_182ae8;
        case 0x182aecu: goto label_182aec;
        case 0x182af0u: goto label_182af0;
        case 0x182af4u: goto label_182af4;
        case 0x182af8u: goto label_182af8;
        case 0x182afcu: goto label_182afc;
        case 0x182b00u: goto label_182b00;
        case 0x182b04u: goto label_182b04;
        case 0x182b08u: goto label_182b08;
        case 0x182b0cu: goto label_182b0c;
        case 0x182b10u: goto label_182b10;
        case 0x182b14u: goto label_182b14;
        case 0x182b18u: goto label_182b18;
        case 0x182b1cu: goto label_182b1c;
        case 0x182b20u: goto label_182b20;
        case 0x182b24u: goto label_182b24;
        case 0x182b28u: goto label_182b28;
        case 0x182b2cu: goto label_182b2c;
        case 0x182b30u: goto label_182b30;
        case 0x182b34u: goto label_182b34;
        case 0x182b38u: goto label_182b38;
        case 0x182b3cu: goto label_182b3c;
        case 0x182b40u: goto label_182b40;
        case 0x182b44u: goto label_182b44;
        case 0x182b48u: goto label_182b48;
        case 0x182b4cu: goto label_182b4c;
        case 0x182b50u: goto label_182b50;
        case 0x182b54u: goto label_182b54;
        case 0x182b58u: goto label_182b58;
        case 0x182b5cu: goto label_182b5c;
        case 0x182b60u: goto label_182b60;
        case 0x182b64u: goto label_182b64;
        case 0x182b68u: goto label_182b68;
        case 0x182b6cu: goto label_182b6c;
        case 0x182b70u: goto label_182b70;
        case 0x182b74u: goto label_182b74;
        case 0x182b78u: goto label_182b78;
        case 0x182b7cu: goto label_182b7c;
        case 0x182b80u: goto label_182b80;
        case 0x182b84u: goto label_182b84;
        case 0x182b88u: goto label_182b88;
        case 0x182b8cu: goto label_182b8c;
        case 0x182b90u: goto label_182b90;
        case 0x182b94u: goto label_182b94;
        case 0x182b98u: goto label_182b98;
        case 0x182b9cu: goto label_182b9c;
        case 0x182ba0u: goto label_182ba0;
        case 0x182ba4u: goto label_182ba4;
        case 0x182ba8u: goto label_182ba8;
        case 0x182bacu: goto label_182bac;
        case 0x182bb0u: goto label_182bb0;
        case 0x182bb4u: goto label_182bb4;
        case 0x182bb8u: goto label_182bb8;
        case 0x182bbcu: goto label_182bbc;
        case 0x182bc0u: goto label_182bc0;
        case 0x182bc4u: goto label_182bc4;
        case 0x182bc8u: goto label_182bc8;
        case 0x182bccu: goto label_182bcc;
        case 0x182bd0u: goto label_182bd0;
        case 0x182bd4u: goto label_182bd4;
        case 0x182bd8u: goto label_182bd8;
        case 0x182bdcu: goto label_182bdc;
        case 0x182be0u: goto label_182be0;
        case 0x182be4u: goto label_182be4;
        case 0x182be8u: goto label_182be8;
        case 0x182becu: goto label_182bec;
        case 0x182bf0u: goto label_182bf0;
        case 0x182bf4u: goto label_182bf4;
        case 0x182bf8u: goto label_182bf8;
        case 0x182bfcu: goto label_182bfc;
        case 0x182c00u: goto label_182c00;
        case 0x182c04u: goto label_182c04;
        case 0x182c08u: goto label_182c08;
        case 0x182c0cu: goto label_182c0c;
        case 0x182c10u: goto label_182c10;
        case 0x182c14u: goto label_182c14;
        case 0x182c18u: goto label_182c18;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c20u: goto label_182c20;
        case 0x182c24u: goto label_182c24;
        case 0x182c28u: goto label_182c28;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c30u: goto label_182c30;
        case 0x182c34u: goto label_182c34;
        case 0x182c38u: goto label_182c38;
        case 0x182c3cu: goto label_182c3c;
        case 0x182c40u: goto label_182c40;
        case 0x182c44u: goto label_182c44;
        case 0x182c48u: goto label_182c48;
        case 0x182c4cu: goto label_182c4c;
        case 0x182c50u: goto label_182c50;
        case 0x182c54u: goto label_182c54;
        case 0x182c58u: goto label_182c58;
        case 0x182c5cu: goto label_182c5c;
        case 0x182c60u: goto label_182c60;
        case 0x182c64u: goto label_182c64;
        case 0x182c68u: goto label_182c68;
        case 0x182c6cu: goto label_182c6c;
        case 0x182c70u: goto label_182c70;
        case 0x182c74u: goto label_182c74;
        case 0x182c78u: goto label_182c78;
        case 0x182c7cu: goto label_182c7c;
        case 0x182c80u: goto label_182c80;
        case 0x182c84u: goto label_182c84;
        case 0x182c88u: goto label_182c88;
        case 0x182c8cu: goto label_182c8c;
        case 0x182c90u: goto label_182c90;
        case 0x182c94u: goto label_182c94;
        case 0x182c98u: goto label_182c98;
        case 0x182c9cu: goto label_182c9c;
        case 0x182ca0u: goto label_182ca0;
        case 0x182ca4u: goto label_182ca4;
        case 0x182ca8u: goto label_182ca8;
        case 0x182cacu: goto label_182cac;
        case 0x182cb0u: goto label_182cb0;
        case 0x182cb4u: goto label_182cb4;
        case 0x182cb8u: goto label_182cb8;
        case 0x182cbcu: goto label_182cbc;
        case 0x182cc0u: goto label_182cc0;
        case 0x182cc4u: goto label_182cc4;
        case 0x182cc8u: goto label_182cc8;
        case 0x182cccu: goto label_182ccc;
        case 0x182cd0u: goto label_182cd0;
        case 0x182cd4u: goto label_182cd4;
        case 0x182cd8u: goto label_182cd8;
        case 0x182cdcu: goto label_182cdc;
        case 0x182ce0u: goto label_182ce0;
        case 0x182ce4u: goto label_182ce4;
        case 0x182ce8u: goto label_182ce8;
        case 0x182cecu: goto label_182cec;
        case 0x182cf0u: goto label_182cf0;
        case 0x182cf4u: goto label_182cf4;
        case 0x182cf8u: goto label_182cf8;
        case 0x182cfcu: goto label_182cfc;
        case 0x182d00u: goto label_182d00;
        case 0x182d04u: goto label_182d04;
        case 0x182d08u: goto label_182d08;
        case 0x182d0cu: goto label_182d0c;
        case 0x182d10u: goto label_182d10;
        case 0x182d14u: goto label_182d14;
        case 0x182d18u: goto label_182d18;
        case 0x182d1cu: goto label_182d1c;
        case 0x182d20u: goto label_182d20;
        case 0x182d24u: goto label_182d24;
        case 0x182d28u: goto label_182d28;
        case 0x182d2cu: goto label_182d2c;
        case 0x182d30u: goto label_182d30;
        case 0x182d34u: goto label_182d34;
        case 0x182d38u: goto label_182d38;
        case 0x182d3cu: goto label_182d3c;
        case 0x182d40u: goto label_182d40;
        case 0x182d44u: goto label_182d44;
        case 0x182d48u: goto label_182d48;
        case 0x182d4cu: goto label_182d4c;
        case 0x182d50u: goto label_182d50;
        case 0x182d54u: goto label_182d54;
        case 0x182d58u: goto label_182d58;
        case 0x182d5cu: goto label_182d5c;
        case 0x182d60u: goto label_182d60;
        case 0x182d64u: goto label_182d64;
        case 0x182d68u: goto label_182d68;
        case 0x182d6cu: goto label_182d6c;
        case 0x182d70u: goto label_182d70;
        case 0x182d74u: goto label_182d74;
        case 0x182d78u: goto label_182d78;
        case 0x182d7cu: goto label_182d7c;
        case 0x182d80u: goto label_182d80;
        case 0x182d84u: goto label_182d84;
        case 0x182d88u: goto label_182d88;
        case 0x182d8cu: goto label_182d8c;
        case 0x182d90u: goto label_182d90;
        case 0x182d94u: goto label_182d94;
        case 0x182d98u: goto label_182d98;
        case 0x182d9cu: goto label_182d9c;
        case 0x182da0u: goto label_182da0;
        case 0x182da4u: goto label_182da4;
        case 0x182da8u: goto label_182da8;
        case 0x182dacu: goto label_182dac;
        case 0x182db0u: goto label_182db0;
        case 0x182db4u: goto label_182db4;
        case 0x182db8u: goto label_182db8;
        case 0x182dbcu: goto label_182dbc;
        case 0x182dc0u: goto label_182dc0;
        case 0x182dc4u: goto label_182dc4;
        case 0x182dc8u: goto label_182dc8;
        case 0x182dccu: goto label_182dcc;
        case 0x182dd0u: goto label_182dd0;
        case 0x182dd4u: goto label_182dd4;
        case 0x182dd8u: goto label_182dd8;
        case 0x182ddcu: goto label_182ddc;
        case 0x182de0u: goto label_182de0;
        case 0x182de4u: goto label_182de4;
        case 0x182de8u: goto label_182de8;
        case 0x182decu: goto label_182dec;
        case 0x182df0u: goto label_182df0;
        case 0x182df4u: goto label_182df4;
        case 0x182df8u: goto label_182df8;
        case 0x182dfcu: goto label_182dfc;
        case 0x182e00u: goto label_182e00;
        case 0x182e04u: goto label_182e04;
        case 0x182e08u: goto label_182e08;
        case 0x182e0cu: goto label_182e0c;
        case 0x182e10u: goto label_182e10;
        case 0x182e14u: goto label_182e14;
        case 0x182e18u: goto label_182e18;
        case 0x182e1cu: goto label_182e1c;
        case 0x182e20u: goto label_182e20;
        case 0x182e24u: goto label_182e24;
        case 0x182e28u: goto label_182e28;
        case 0x182e2cu: goto label_182e2c;
        case 0x182e30u: goto label_182e30;
        case 0x182e34u: goto label_182e34;
        case 0x182e38u: goto label_182e38;
        case 0x182e3cu: goto label_182e3c;
        case 0x182e40u: goto label_182e40;
        case 0x182e44u: goto label_182e44;
        case 0x182e48u: goto label_182e48;
        case 0x182e4cu: goto label_182e4c;
        case 0x182e50u: goto label_182e50;
        case 0x182e54u: goto label_182e54;
        case 0x182e58u: goto label_182e58;
        case 0x182e5cu: goto label_182e5c;
        case 0x182e60u: goto label_182e60;
        case 0x182e64u: goto label_182e64;
        case 0x182e68u: goto label_182e68;
        case 0x182e6cu: goto label_182e6c;
        case 0x182e70u: goto label_182e70;
        case 0x182e74u: goto label_182e74;
        case 0x182e78u: goto label_182e78;
        case 0x182e7cu: goto label_182e7c;
        case 0x182e80u: goto label_182e80;
        case 0x182e84u: goto label_182e84;
        case 0x182e88u: goto label_182e88;
        case 0x182e8cu: goto label_182e8c;
        case 0x182e90u: goto label_182e90;
        case 0x182e94u: goto label_182e94;
        case 0x182e98u: goto label_182e98;
        case 0x182e9cu: goto label_182e9c;
        case 0x182ea0u: goto label_182ea0;
        case 0x182ea4u: goto label_182ea4;
        case 0x182ea8u: goto label_182ea8;
        case 0x182eacu: goto label_182eac;
        case 0x182eb0u: goto label_182eb0;
        case 0x182eb4u: goto label_182eb4;
        case 0x182eb8u: goto label_182eb8;
        case 0x182ebcu: goto label_182ebc;
        case 0x182ec0u: goto label_182ec0;
        case 0x182ec4u: goto label_182ec4;
        case 0x182ec8u: goto label_182ec8;
        case 0x182eccu: goto label_182ecc;
        case 0x182ed0u: goto label_182ed0;
        case 0x182ed4u: goto label_182ed4;
        case 0x182ed8u: goto label_182ed8;
        case 0x182edcu: goto label_182edc;
        case 0x182ee0u: goto label_182ee0;
        case 0x182ee4u: goto label_182ee4;
        case 0x182ee8u: goto label_182ee8;
        case 0x182eecu: goto label_182eec;
        case 0x182ef0u: goto label_182ef0;
        case 0x182ef4u: goto label_182ef4;
        case 0x182ef8u: goto label_182ef8;
        case 0x182efcu: goto label_182efc;
        case 0x182f00u: goto label_182f00;
        case 0x182f04u: goto label_182f04;
        case 0x182f08u: goto label_182f08;
        case 0x182f0cu: goto label_182f0c;
        case 0x182f10u: goto label_182f10;
        case 0x182f14u: goto label_182f14;
        case 0x182f18u: goto label_182f18;
        case 0x182f1cu: goto label_182f1c;
        case 0x182f20u: goto label_182f20;
        case 0x182f24u: goto label_182f24;
        case 0x182f28u: goto label_182f28;
        case 0x182f2cu: goto label_182f2c;
        case 0x182f30u: goto label_182f30;
        case 0x182f34u: goto label_182f34;
        case 0x182f38u: goto label_182f38;
        case 0x182f3cu: goto label_182f3c;
        case 0x182f40u: goto label_182f40;
        case 0x182f44u: goto label_182f44;
        case 0x182f48u: goto label_182f48;
        case 0x182f4cu: goto label_182f4c;
        case 0x182f50u: goto label_182f50;
        case 0x182f54u: goto label_182f54;
        case 0x182f58u: goto label_182f58;
        case 0x182f5cu: goto label_182f5c;
        case 0x182f60u: goto label_182f60;
        case 0x182f64u: goto label_182f64;
        case 0x182f68u: goto label_182f68;
        case 0x182f6cu: goto label_182f6c;
        case 0x182f70u: goto label_182f70;
        case 0x182f74u: goto label_182f74;
        case 0x182f78u: goto label_182f78;
        case 0x182f7cu: goto label_182f7c;
        case 0x182f80u: goto label_182f80;
        case 0x182f84u: goto label_182f84;
        case 0x182f88u: goto label_182f88;
        case 0x182f8cu: goto label_182f8c;
        case 0x182f90u: goto label_182f90;
        case 0x182f94u: goto label_182f94;
        case 0x182f98u: goto label_182f98;
        case 0x182f9cu: goto label_182f9c;
        case 0x182fa0u: goto label_182fa0;
        case 0x182fa4u: goto label_182fa4;
        case 0x182fa8u: goto label_182fa8;
        case 0x182facu: goto label_182fac;
        case 0x182fb0u: goto label_182fb0;
        case 0x182fb4u: goto label_182fb4;
        case 0x182fb8u: goto label_182fb8;
        case 0x182fbcu: goto label_182fbc;
        case 0x182fc0u: goto label_182fc0;
        case 0x182fc4u: goto label_182fc4;
        case 0x182fc8u: goto label_182fc8;
        case 0x182fccu: goto label_182fcc;
        case 0x182fd0u: goto label_182fd0;
        case 0x182fd4u: goto label_182fd4;
        case 0x182fd8u: goto label_182fd8;
        case 0x182fdcu: goto label_182fdc;
        case 0x182fe0u: goto label_182fe0;
        case 0x182fe4u: goto label_182fe4;
        case 0x182fe8u: goto label_182fe8;
        case 0x182fecu: goto label_182fec;
        case 0x182ff0u: goto label_182ff0;
        case 0x182ff4u: goto label_182ff4;
        case 0x182ff8u: goto label_182ff8;
        case 0x182ffcu: goto label_182ffc;
        case 0x183000u: goto label_183000;
        case 0x183004u: goto label_183004;
        case 0x183008u: goto label_183008;
        case 0x18300cu: goto label_18300c;
        case 0x183010u: goto label_183010;
        case 0x183014u: goto label_183014;
        case 0x183018u: goto label_183018;
        case 0x18301cu: goto label_18301c;
        case 0x183020u: goto label_183020;
        case 0x183024u: goto label_183024;
        case 0x183028u: goto label_183028;
        case 0x18302cu: goto label_18302c;
        case 0x183030u: goto label_183030;
        case 0x183034u: goto label_183034;
        case 0x183038u: goto label_183038;
        case 0x18303cu: goto label_18303c;
        case 0x183040u: goto label_183040;
        case 0x183044u: goto label_183044;
        case 0x183048u: goto label_183048;
        case 0x18304cu: goto label_18304c;
        case 0x183050u: goto label_183050;
        case 0x183054u: goto label_183054;
        case 0x183058u: goto label_183058;
        case 0x18305cu: goto label_18305c;
        case 0x183060u: goto label_183060;
        case 0x183064u: goto label_183064;
        case 0x183068u: goto label_183068;
        case 0x18306cu: goto label_18306c;
        case 0x183070u: goto label_183070;
        case 0x183074u: goto label_183074;
        case 0x183078u: goto label_183078;
        case 0x18307cu: goto label_18307c;
        case 0x183080u: goto label_183080;
        case 0x183084u: goto label_183084;
        case 0x183088u: goto label_183088;
        case 0x18308cu: goto label_18308c;
        case 0x183090u: goto label_183090;
        case 0x183094u: goto label_183094;
        case 0x183098u: goto label_183098;
        case 0x18309cu: goto label_18309c;
        case 0x1830a0u: goto label_1830a0;
        case 0x1830a4u: goto label_1830a4;
        case 0x1830a8u: goto label_1830a8;
        case 0x1830acu: goto label_1830ac;
        case 0x1830b0u: goto label_1830b0;
        case 0x1830b4u: goto label_1830b4;
        case 0x1830b8u: goto label_1830b8;
        case 0x1830bcu: goto label_1830bc;
        case 0x1830c0u: goto label_1830c0;
        case 0x1830c4u: goto label_1830c4;
        case 0x1830c8u: goto label_1830c8;
        case 0x1830ccu: goto label_1830cc;
        case 0x1830d0u: goto label_1830d0;
        case 0x1830d4u: goto label_1830d4;
        case 0x1830d8u: goto label_1830d8;
        case 0x1830dcu: goto label_1830dc;
        case 0x1830e0u: goto label_1830e0;
        case 0x1830e4u: goto label_1830e4;
        case 0x1830e8u: goto label_1830e8;
        case 0x1830ecu: goto label_1830ec;
        case 0x1830f0u: goto label_1830f0;
        case 0x1830f4u: goto label_1830f4;
        case 0x1830f8u: goto label_1830f8;
        case 0x1830fcu: goto label_1830fc;
        case 0x183100u: goto label_183100;
        case 0x183104u: goto label_183104;
        case 0x183108u: goto label_183108;
        case 0x18310cu: goto label_18310c;
        case 0x183110u: goto label_183110;
        case 0x183114u: goto label_183114;
        case 0x183118u: goto label_183118;
        case 0x18311cu: goto label_18311c;
        case 0x183120u: goto label_183120;
        case 0x183124u: goto label_183124;
        case 0x183128u: goto label_183128;
        case 0x18312cu: goto label_18312c;
        case 0x183130u: goto label_183130;
        case 0x183134u: goto label_183134;
        case 0x183138u: goto label_183138;
        case 0x18313cu: goto label_18313c;
        case 0x183140u: goto label_183140;
        case 0x183144u: goto label_183144;
        case 0x183148u: goto label_183148;
        case 0x18314cu: goto label_18314c;
        case 0x183150u: goto label_183150;
        case 0x183154u: goto label_183154;
        case 0x183158u: goto label_183158;
        case 0x18315cu: goto label_18315c;
        case 0x183160u: goto label_183160;
        case 0x183164u: goto label_183164;
        case 0x183168u: goto label_183168;
        case 0x18316cu: goto label_18316c;
        case 0x183170u: goto label_183170;
        case 0x183174u: goto label_183174;
        case 0x183178u: goto label_183178;
        case 0x18317cu: goto label_18317c;
        case 0x183180u: goto label_183180;
        case 0x183184u: goto label_183184;
        case 0x183188u: goto label_183188;
        case 0x18318cu: goto label_18318c;
        case 0x183190u: goto label_183190;
        case 0x183194u: goto label_183194;
        case 0x183198u: goto label_183198;
        case 0x18319cu: goto label_18319c;
        case 0x1831a0u: goto label_1831a0;
        case 0x1831a4u: goto label_1831a4;
        case 0x1831a8u: goto label_1831a8;
        case 0x1831acu: goto label_1831ac;
        case 0x1831b0u: goto label_1831b0;
        case 0x1831b4u: goto label_1831b4;
        case 0x1831b8u: goto label_1831b8;
        case 0x1831bcu: goto label_1831bc;
        case 0x1831c0u: goto label_1831c0;
        case 0x1831c4u: goto label_1831c4;
        case 0x1831c8u: goto label_1831c8;
        case 0x1831ccu: goto label_1831cc;
        default: return;
    }

label_182a00:
    // 0x182a00: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_182a04:
    // 0x182a04: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_182a08:
    if (ctx->pc == 0x182A08u) {
        ctx->pc = 0x182A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A04u;
        // 0x182a08: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A0Cu;
        goto label_182a0c;
    }
    ctx->pc = 0x182A04u;
    {
        const bool branch_taken_0x182a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A04u;
        // 0x182a08: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a04) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A0Cu;
label_182a0c:
    // 0x182a0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x182a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_182a10:
    // 0x182a10: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_182a14:
    // 0x182a14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_182a18:
    // 0x182a18: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182a1c:
    // 0x182a1c: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x182a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_182a20:
    // 0x182a20: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_182a24:
    // 0x182a24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182a28:
    // 0x182a28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182a2c:
    // 0x182a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x182a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182a30:
    // 0x182a30: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
label_182a34:
    if (ctx->pc == 0x182A34u) {
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A38u;
        goto label_182a38;
    }
    ctx->pc = 0x182A30u;
    {
        const bool branch_taken_0x182a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A30u;
        // 0x182a34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a30) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A38u;
label_182a38:
    // 0x182a38: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x182a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_182a3c:
    // 0x182a3c: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_182a40:
    if (ctx->pc == 0x182A40u) {
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24860150  addiu       $a2, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A44u;
        goto label_182a44;
    }
    ctx->pc = 0x182A3Cu;
    {
        const bool branch_taken_0x182a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24860150  addiu       $a2, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a3c) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A44u;
label_182a44:
    // 0x182a44: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_182a48:
    // 0x182a48: 0x26440264  addiu       $a0, $s2, 0x264
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_182a4c:
    // 0x182a4c: 0xc0439e8  jal         func_10E7A0
label_182a50:
    if (ctx->pc == 0x182A50u) {
        ctx->pc = 0x182A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A4Cu;
        // 0x182a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A54u;
        goto label_182a54;
    }
    ctx->pc = 0x182A4Cu;
    SET_GPR_U32(ctx, 31, 0x182A54u);
    ctx->pc = 0x182A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A4Cu;
    // 0x182a50: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x182A4Cu, 0x182A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A54u;
label_182a54:
    // 0x182a54: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_182a58:
    if (ctx->pc == 0x182A58u) {
        ctx->pc = 0x182A5Cu;
        goto label_182a5c;
    }
    ctx->pc = 0x182A54u;
    {
        const bool branch_taken_0x182a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182a54) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182A5Cu;
label_182a5c:
    // 0x182a5c: 0xc6430264  lwc1        $f3, 0x264($s2)
    ctx->pc = 0x182a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_182a60:
    // 0x182a60: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_182a64:
    // 0x182a64: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x182a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_182a68:
    // 0x182a68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a6c:
    // 0x182a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182a70:
    // 0x182a70: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x182a70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_182a74:
    // 0x182a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182a78:
    // 0x182a78: 0x0  nop
    ctx->pc = 0x182a78u;
    // NOP
label_182a7c:
    // 0x182a7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182a80:
    if (ctx->pc == 0x182A80u) {
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A84u;
        goto label_182a84;
    }
    ctx->pc = 0x182A7Cu;
    {
        const bool branch_taken_0x182a7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a7c) {
            ctx->pc = 0x182A98u;
            goto label_182a98;
        }
    }
    ctx->pc = 0x182A84u;
label_182a84:
    // 0x182a84: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182a88:
    // 0x182a88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a8c:
    // 0x182a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182a90:
    // 0x182a90: 0x1000000d  b           . + 4 + (0xD << 2)
label_182a94:
    if (ctx->pc == 0x182A94u) {
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182A98u;
        goto label_182a98;
    }
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182A98u;
label_182a98:
    // 0x182a98: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182a9c:
    // 0x182a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182aa0:
    // 0x182aa0: 0x0  nop
    ctx->pc = 0x182aa0u;
    // NOP
label_182aa4:
    // 0x182aa4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182aa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182aa8:
    // 0x182aa8: 0x0  nop
    ctx->pc = 0x182aa8u;
    // NOP
label_182aac:
    // 0x182aac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182ab0:
    if (ctx->pc == 0x182AB0u) {
        ctx->pc = 0x182AB4u;
        goto label_182ab4;
    }
    ctx->pc = 0x182AACu;
    {
        const bool branch_taken_0x182aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182aac) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182AB4u;
label_182ab4:
    // 0x182ab4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182ab8:
    // 0x182ab8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182abc:
    // 0x182abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ac0:
    // 0x182ac0: 0x10000001  b           . + 4 + (0x1 << 2)
label_182ac4:
    if (ctx->pc == 0x182AC4u) {
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AC8u;
        goto label_182ac8;
    }
    ctx->pc = 0x182AC0u;
    {
        const bool branch_taken_0x182ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ac0) {
            ctx->pc = 0x182AC8u;
            goto label_182ac8;
        }
    }
    ctx->pc = 0x182AC8u;
label_182ac8:
    // 0x182ac8: 0x3c03be32  lui         $v1, 0xBE32
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48690 << 16));
label_182acc:
    // 0x182acc: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182ad0:
    // 0x182ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ad4:
    // 0x182ad4: 0x0  nop
    ctx->pc = 0x182ad4u;
    // NOP
label_182ad8:
    // 0x182ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182adc:
    // 0x182adc: 0x0  nop
    ctx->pc = 0x182adcu;
    // NOP
label_182ae0:
    // 0x182ae0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_182ae4:
    if (ctx->pc == 0x182AE4u) {
        ctx->pc = 0x182AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AE0u;
        // 0x182ae4: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182AE8u;
        goto label_182ae8;
    }
    ctx->pc = 0x182AE0u;
    {
        const bool branch_taken_0x182ae0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x182AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AE0u;
        // 0x182ae4: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ae0) {
            ctx->pc = 0x182B04u;
            goto label_182b04;
        }
    }
    ctx->pc = 0x182AE8u;
label_182ae8:
    // 0x182ae8: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_182aec:
    // 0x182aec: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182af0:
    // 0x182af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182af4:
    // 0x182af4: 0x0  nop
    ctx->pc = 0x182af4u;
    // NOP
label_182af8:
    // 0x182af8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x182af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_182afc:
    // 0x182afc: 0x1000000c  b           . + 4 + (0xC << 2)
label_182b00:
    if (ctx->pc == 0x182B00u) {
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B04u;
        goto label_182b04;
    }
    ctx->pc = 0x182AFCu;
    {
        const bool branch_taken_0x182afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AFCu;
        // 0x182b00: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182afc) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B04u;
label_182b04:
    // 0x182b04: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x182b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_182b08:
    // 0x182b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b0c:
    // 0x182b0c: 0x0  nop
    ctx->pc = 0x182b0cu;
    // NOP
label_182b10:
    // 0x182b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b14:
    // 0x182b14: 0x0  nop
    ctx->pc = 0x182b14u;
    // NOP
label_182b18:
    // 0x182b18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_182b1c:
    if (ctx->pc == 0x182B1Cu) {
        ctx->pc = 0x182B20u;
        goto label_182b20;
    }
    ctx->pc = 0x182B18u;
    {
        const bool branch_taken_0x182b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b18) {
            ctx->pc = 0x182B2Cu;
            goto label_182b2c;
        }
    }
    ctx->pc = 0x182B20u;
label_182b20:
    // 0x182b20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x182b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_182b24:
    // 0x182b24: 0x10000002  b           . + 4 + (0x2 << 2)
label_182b28:
    if (ctx->pc == 0x182B28u) {
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B24u;
        // 0x182b28: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B2Cu;
        goto label_182b2c;
    }
    ctx->pc = 0x182B24u;
    {
        const bool branch_taken_0x182b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B24u;
        // 0x182b28: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b24) {
            ctx->pc = 0x182B30u;
            goto label_182b30;
        }
    }
    ctx->pc = 0x182B2Cu;
label_182b2c:
    // 0x182b2c: 0xe6430044  swc1        $f3, 0x44($s2)
    ctx->pc = 0x182b2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_182b30:
    // 0x182b30: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x182b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182b34:
    // 0x182b34: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_182b38:
    // 0x182b38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b3c:
    // 0x182b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b40:
    // 0x182b40: 0x0  nop
    ctx->pc = 0x182b40u;
    // NOP
label_182b44:
    // 0x182b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b48:
    // 0x182b48: 0x0  nop
    ctx->pc = 0x182b48u;
    // NOP
label_182b4c:
    // 0x182b4c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182b50:
    if (ctx->pc == 0x182B50u) {
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B4Cu;
        // 0x182b50: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B54u;
        goto label_182b54;
    }
    ctx->pc = 0x182B4Cu;
    {
        const bool branch_taken_0x182b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B4Cu;
        // 0x182b50: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b4c) {
            ctx->pc = 0x182B68u;
            goto label_182b68;
        }
    }
    ctx->pc = 0x182B54u;
label_182b54:
    // 0x182b54: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182b58:
    // 0x182b58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b5c:
    // 0x182b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b60:
    // 0x182b60: 0x1000000d  b           . + 4 + (0xD << 2)
label_182b64:
    if (ctx->pc == 0x182B64u) {
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B60u;
        // 0x182b64: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B68u;
        goto label_182b68;
    }
    ctx->pc = 0x182B60u;
    {
        const bool branch_taken_0x182b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B60u;
        // 0x182b64: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b60) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B68u;
label_182b68:
    // 0x182b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b6c:
    // 0x182b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b70:
    // 0x182b70: 0x0  nop
    ctx->pc = 0x182b70u;
    // NOP
label_182b74:
    // 0x182b74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182b78:
    // 0x182b78: 0x0  nop
    ctx->pc = 0x182b78u;
    // NOP
label_182b7c:
    // 0x182b7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182b80:
    if (ctx->pc == 0x182B80u) {
        ctx->pc = 0x182B84u;
        goto label_182b84;
    }
    ctx->pc = 0x182B7Cu;
    {
        const bool branch_taken_0x182b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182b7c) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B84u;
label_182b84:
    // 0x182b84: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_182b88:
    // 0x182b88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x182b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182b8c:
    // 0x182b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182b90:
    // 0x182b90: 0x10000001  b           . + 4 + (0x1 << 2)
label_182b94:
    if (ctx->pc == 0x182B94u) {
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182B98u;
        goto label_182b98;
    }
    ctx->pc = 0x182B90u;
    {
        const bool branch_taken_0x182b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B90u;
        // 0x182b94: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b90) {
            ctx->pc = 0x182B98u;
            goto label_182b98;
        }
    }
    ctx->pc = 0x182B98u;
label_182b98:
    // 0x182b98: 0x10000001  b           . + 4 + (0x1 << 2)
label_182b9c:
    if (ctx->pc == 0x182B9Cu) {
        ctx->pc = 0x182B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B98u;
        // 0x182b9c: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182BA0u;
        goto label_182ba0;
    }
    ctx->pc = 0x182B98u;
    {
        const bool branch_taken_0x182b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B98u;
        // 0x182b9c: 0xe6410044  swc1        $f1, 0x44($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b98) {
            ctx->pc = 0x182BA0u;
            goto label_182ba0;
        }
    }
    ctx->pc = 0x182BA0u;
label_182ba0:
    // 0x182ba0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_182ba4:
    if (ctx->pc == 0x182BA4u) {
        ctx->pc = 0x182BA8u;
        goto label_182ba8;
    }
    ctx->pc = 0x182BA0u;
    {
        const bool branch_taken_0x182ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x182ba0) {
            ctx->pc = 0x182BB4u;
            goto label_182bb4;
        }
    }
    ctx->pc = 0x182BA8u;
label_182ba8:
    // 0x182ba8: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x182ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_182bac:
    // 0x182bac: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_182bb0:
    // 0x182bb0: 0xa243023d  sb          $v1, 0x23D($s2)
    ctx->pc = 0x182bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
label_182bb4:
    // 0x182bb4: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x182bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_182bb8:
    // 0x182bb8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x182bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_182bbc:
    // 0x182bbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182bc0:
    // 0x182bc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_182bc4:
    // 0x182bc4: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_182bc8:
    if (ctx->pc == 0x182BC8u) {
        ctx->pc = 0x182BCCu;
        goto label_182bcc;
    }
    ctx->pc = 0x182BC4u;
    {
        const bool branch_taken_0x182bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182bc4) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182BCCu;
label_182bcc:
    // 0x182bcc: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x182bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_182bd0:
    // 0x182bd0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_182bd4:
    if (ctx->pc == 0x182BD4u) {
        ctx->pc = 0x182BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BD0u;
        // 0x182bd4: 0x2483fffe  addiu       $v1, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182BD8u;
        goto label_182bd8;
    }
    ctx->pc = 0x182BD0u;
    {
        const bool branch_taken_0x182bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BD0u;
        // 0x182bd4: 0x2483fffe  addiu       $v1, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bd0) {
            ctx->pc = 0x182BF0u;
            goto label_182bf0;
        }
    }
    ctx->pc = 0x182BD8u;
label_182bd8:
    // 0x182bd8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_182bdc:
    // 0x182bdc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_182be0:
    if (ctx->pc == 0x182BE0u) {
        ctx->pc = 0x182BE4u;
        goto label_182be4;
    }
    ctx->pc = 0x182BDCu;
    {
        const bool branch_taken_0x182bdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bdc) {
            ctx->pc = 0x182BF0u;
            goto label_182bf0;
        }
    }
    ctx->pc = 0x182BE4u;
label_182be4:
    // 0x182be4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x182be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_182be8:
    // 0x182be8: 0x14830046  bne         $a0, $v1, . + 4 + (0x46 << 2)
label_182bec:
    if (ctx->pc == 0x182BECu) {
        ctx->pc = 0x182BF0u;
        goto label_182bf0;
    }
    ctx->pc = 0x182BE8u;
    {
        const bool branch_taken_0x182be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182be8) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182BF0u;
label_182bf0:
    // 0x182bf0: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x182bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_182bf4:
    // 0x182bf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_182bf8:
    if (ctx->pc == 0x182BF8u) {
        ctx->pc = 0x182BFCu;
        goto label_182bfc;
    }
    ctx->pc = 0x182BF4u;
    {
        const bool branch_taken_0x182bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bf4) {
            ctx->pc = 0x182C10u;
            goto label_182c10;
        }
    }
    ctx->pc = 0x182BFCu;
label_182bfc:
    // 0x182bfc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x182bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c00:
    // 0x182c00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_182c04:
    // 0x182c04: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x182c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c08:
    // 0x182c08: 0x10000005  b           . + 4 + (0x5 << 2)
label_182c0c:
    if (ctx->pc == 0x182C0Cu) {
        ctx->pc = 0x182C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C08u;
        // 0x182c0c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C10u;
        goto label_182c10;
    }
    ctx->pc = 0x182C08u;
    {
        const bool branch_taken_0x182c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C08u;
        // 0x182c0c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c08) {
            ctx->pc = 0x182C20u;
            goto label_182c20;
        }
    }
    ctx->pc = 0x182C10u;
label_182c10:
    // 0x182c10: 0xc6400210  lwc1        $f0, 0x210($s2)
    ctx->pc = 0x182c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c14:
    // 0x182c14: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_182c18:
    // 0x182c18: 0xc6400214  lwc1        $f0, 0x214($s2)
    ctx->pc = 0x182c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182c1c:
    // 0x182c1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x182c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_182c20:
    // 0x182c20: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x182c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_182c24:
    // 0x182c24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_182c28:
    if (ctx->pc == 0x182C28u) {
        ctx->pc = 0x182C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C24u;
        // 0x182c28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C2Cu;
        goto label_182c2c;
    }
    ctx->pc = 0x182C24u;
    {
        const bool branch_taken_0x182c24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x182C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C24u;
        // 0x182c28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c24) {
            ctx->pc = 0x182C38u;
            goto label_182c38;
        }
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c30:
    // 0x182c30: 0x10000007  b           . + 4 + (0x7 << 2)
label_182c34:
    if (ctx->pc == 0x182C34u) {
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C30u;
        // 0x182c34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C38u;
        goto label_182c38;
    }
    ctx->pc = 0x182C30u;
    {
        const bool branch_taken_0x182c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C30u;
        // 0x182c34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c30) {
            ctx->pc = 0x182C50u;
            goto label_182c50;
        }
    }
    ctx->pc = 0x182C38u;
label_182c38:
    // 0x182c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x182c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_182c3c:
    // 0x182c3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x182c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_182c40:
    // 0x182c40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c44:
    // 0x182c44: 0x0  nop
    ctx->pc = 0x182c44u;
    // NOP
label_182c48:
    // 0x182c48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x182c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_182c4c:
    // 0x182c4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x182c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_182c50:
    // 0x182c50: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_182c54:
    // 0x182c54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x182c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_182c58:
    // 0x182c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c5c:
    // 0x182c5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182c60:
    // 0x182c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x182c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_182c64:
    // 0x182c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x182c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_182c68:
    // 0x182c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182c6c:
    // 0x182c6c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_182c70:
    // 0x182c70: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x182c70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_182c74:
    // 0x182c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182c78:
    // 0x182c78: 0x0  nop
    ctx->pc = 0x182c78u;
    // NOP
label_182c7c:
    // 0x182c7c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x182c7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_182c80:
    // 0x182c80: 0x0  nop
    ctx->pc = 0x182c80u;
    // NOP
label_182c84:
    // 0x182c84: 0x0  nop
    ctx->pc = 0x182c84u;
    // NOP
label_182c88:
    // 0x182c88: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x182c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182c8c:
    // 0x182c8c: 0x0  nop
    ctx->pc = 0x182c8cu;
    // NOP
label_182c90:
    // 0x182c90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_182c94:
    if (ctx->pc == 0x182C94u) {
        ctx->pc = 0x182C98u;
        goto label_182c98;
    }
    ctx->pc = 0x182C90u;
    {
        const bool branch_taken_0x182c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182c90) {
            ctx->pc = 0x182C9Cu;
            goto label_182c9c;
        }
    }
    ctx->pc = 0x182C98u;
label_182c98:
    // 0x182c98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x182c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c9c:
    // 0x182c9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_182ca0:
    if (ctx->pc == 0x182CA0u) {
        ctx->pc = 0x182CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C9Cu;
        // 0x182ca0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CA4u;
        goto label_182ca4;
    }
    ctx->pc = 0x182C9Cu;
    {
        const bool branch_taken_0x182c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C9Cu;
        // 0x182ca0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c9c) {
            ctx->pc = 0x182CB8u;
            goto label_182cb8;
        }
    }
    ctx->pc = 0x182CA4u;
label_182ca4:
    // 0x182ca4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x182ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182ca8:
    // 0x182ca8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cac:
    // 0x182cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182cb0:
    // 0x182cb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_182cb4:
    if (ctx->pc == 0x182CB4u) {
        ctx->pc = 0x182CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB0u;
        // 0x182cb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CB8u;
        goto label_182cb8;
    }
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB0u;
        // 0x182cb4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CB8u;
label_182cb8:
    // 0x182cb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cbc:
    // 0x182cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182cc0:
    // 0x182cc0: 0x0  nop
    ctx->pc = 0x182cc0u;
    // NOP
label_182cc4:
    // 0x182cc4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x182cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182cc8:
    // 0x182cc8: 0x0  nop
    ctx->pc = 0x182cc8u;
    // NOP
label_182ccc:
    // 0x182ccc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182cd0:
    if (ctx->pc == 0x182CD0u) {
        ctx->pc = 0x182CD4u;
        goto label_182cd4;
    }
    ctx->pc = 0x182CCCu;
    {
        const bool branch_taken_0x182ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ccc) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CD4u;
label_182cd4:
    // 0x182cd4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x182cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182cd8:
    // 0x182cd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182cdc:
    // 0x182cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182ce0:
    // 0x182ce0: 0x10000001  b           . + 4 + (0x1 << 2)
label_182ce4:
    if (ctx->pc == 0x182CE4u) {
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE0u;
        // 0x182ce4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CE8u;
        goto label_182ce8;
    }
    ctx->pc = 0x182CE0u;
    {
        const bool branch_taken_0x182ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE0u;
        // 0x182ce4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ce0) {
            ctx->pc = 0x182CE8u;
            goto label_182ce8;
        }
    }
    ctx->pc = 0x182CE8u;
label_182ce8:
    // 0x182ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x182ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182cec:
    // 0x182cec: 0xc0625b8  jal         func_1896E0
label_182cf0:
    if (ctx->pc == 0x182CF0u) {
        ctx->pc = 0x182CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CECu;
        // 0x182cf0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CF4u;
        goto label_182cf4;
    }
    ctx->pc = 0x182CECu;
    SET_GPR_U32(ctx, 31, 0x182CF4u);
    ctx->pc = 0x182CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182CECu;
    // 0x182cf0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896E0u;
    { ctx->pc = 0x1896e0; return; }
    ctx->pc = 0x182CF4u;
label_182cf4:
    // 0x182cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_182cf8:
    if (ctx->pc == 0x182CF8u) {
        ctx->pc = 0x182CFCu;
        goto label_182cfc;
    }
    ctx->pc = 0x182CF4u;
    {
        const bool branch_taken_0x182cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cf4) {
            ctx->pc = 0x182D04u;
            goto label_182d04;
        }
    }
    ctx->pc = 0x182CFCu;
label_182cfc:
    // 0x182cfc: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x182cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_182d00:
    // 0x182d00: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x182d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_182d04:
    // 0x182d04: 0x8e450194  lw          $a1, 0x194($s2)
    ctx->pc = 0x182d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182d08:
    // 0x182d08: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_182d0c:
    // 0x182d0c: 0x34646050  ori         $a0, $v1, 0x6050
    ctx->pc = 0x182d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24656);
label_182d10:
    // 0x182d10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x182d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_182d14:
    // 0x182d14: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x182d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_182d18:
    // 0x182d18: 0xae440194  sw          $a0, 0x194($s2)
    ctx->pc = 0x182d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 4));
label_182d1c:
    // 0x182d1c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x182d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_182d20:
    // 0x182d20: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_182d24:
    if (ctx->pc == 0x182D24u) {
        ctx->pc = 0x182D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D20u;
        // 0x182d24: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D28u;
        goto label_182d28;
    }
    ctx->pc = 0x182D20u;
    {
        const bool branch_taken_0x182d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D20u;
        // 0x182d24: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d20) {
            ctx->pc = 0x182D4Cu;
            goto label_182d4c;
        }
    }
    ctx->pc = 0x182D28u;
label_182d28:
    // 0x182d28: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_182d2c:
    if (ctx->pc == 0x182D2Cu) {
        ctx->pc = 0x182D30u;
        goto label_182d30;
    }
    ctx->pc = 0x182D28u;
    {
        const bool branch_taken_0x182d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182d28) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D30u;
label_182d30:
    // 0x182d30: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x182d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182d34:
    // 0x182d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182d38:
    // 0x182d38: 0x0  nop
    ctx->pc = 0x182d38u;
    // NOP
label_182d3c:
    // 0x182d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x182d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182d40:
    // 0x182d40: 0x0  nop
    ctx->pc = 0x182d40u;
    // NOP
label_182d44:
    // 0x182d44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_182d48:
    if (ctx->pc == 0x182D48u) {
        ctx->pc = 0x182D4Cu;
        goto label_182d4c;
    }
    ctx->pc = 0x182D44u;
    {
        const bool branch_taken_0x182d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182d44) {
            ctx->pc = 0x182D58u;
            goto label_182d58;
        }
    }
    ctx->pc = 0x182D4Cu;
label_182d4c:
    // 0x182d4c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182d50:
    // 0x182d50: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x182d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_182d54:
    // 0x182d54: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x182d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_182d58:
    // 0x182d58: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x182d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_182d5c:
    // 0x182d5c: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_182d60:
    // 0x182d60: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_182d64:
    if (ctx->pc == 0x182D64u) {
        ctx->pc = 0x182D68u;
        goto label_182d68;
    }
    ctx->pc = 0x182D60u;
    {
        const bool branch_taken_0x182d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d60) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182D68u;
label_182d68:
    // 0x182d68: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x182d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_182d6c:
    // 0x182d6c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x182d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_182d70:
    // 0x182d70: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_182d74:
    if (ctx->pc == 0x182D74u) {
        ctx->pc = 0x182D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D70u;
        // 0x182d74: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D78u;
        goto label_182d78;
    }
    ctx->pc = 0x182D70u;
    {
        const bool branch_taken_0x182d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D70u;
        // 0x182d74: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d70) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182D78u;
label_182d78:
    // 0x182d78: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x182d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_182d7c:
    // 0x182d7c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_182d80:
    // 0x182d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_182d84:
    // 0x182d84: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x182d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182d88:
    // 0x182d88: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x182d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_182d8c:
    // 0x182d8c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x182d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_182d90:
    // 0x182d90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182d94:
    // 0x182d94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182d98:
    // 0x182d98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x182d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182d9c:
    // 0x182d9c: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_182da0:
    if (ctx->pc == 0x182DA0u) {
        ctx->pc = 0x182DA4u;
        goto label_182da4;
    }
    ctx->pc = 0x182D9Cu;
    {
        const bool branch_taken_0x182d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d9c) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182DA4u;
label_182da4:
    // 0x182da4: 0x9083022f  lbu         $v1, 0x22F($a0)
    ctx->pc = 0x182da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 559)));
label_182da8:
    // 0x182da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_182dac:
    // 0x182dac: 0x10000039  b           . + 4 + (0x39 << 2)
label_182db0:
    if (ctx->pc == 0x182DB0u) {
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DACu;
        // 0x182db0: 0xa083022f  sb          $v1, 0x22F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182DB4u;
        goto label_182db4;
    }
    ctx->pc = 0x182DACu;
    {
        const bool branch_taken_0x182dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182DACu;
        // 0x182db0: 0xa083022f  sb          $v1, 0x22F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 559), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dac) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182DB4u;
label_182db4:
    // 0x182db4: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182db8:
    // 0x182db8: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x182db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_182dbc:
    // 0x182dbc: 0x34678bad  ori         $a3, $v1, 0x8BAD
    ctx->pc = 0x182dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_182dc0:
    // 0x182dc0: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_182dc4:
    // 0x182dc4: 0x34664dd3  ori         $a2, $v1, 0x4DD3
    ctx->pc = 0x182dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_182dc8:
    // 0x182dc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182dc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182dcc:
    // 0x182dcc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182dccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182dd0:
    // 0x182dd0: 0x0  nop
    ctx->pc = 0x182dd0u;
    // NOP
label_182dd4:
    // 0x182dd4: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182dd8:
    // 0x182dd8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182ddc:
    // 0x182ddc: 0x0  nop
    ctx->pc = 0x182ddcu;
    // NOP
label_182de0:
    // 0x182de0: 0x1810  mfhi        $v1
    ctx->pc = 0x182de0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182de4:
    // 0x182de4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182de8:
    // 0x182de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182dec:
    // 0x182dec: 0xa2430218  sb          $v1, 0x218($s2)
    ctx->pc = 0x182decu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 536), (uint8_t)GPR_U32(ctx, 3));
label_182df0:
    // 0x182df0: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182df4:
    // 0x182df4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182df4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182df8:
    // 0x182df8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182df8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182dfc:
    // 0x182dfc: 0x0  nop
    ctx->pc = 0x182dfcu;
    // NOP
label_182e00:
    // 0x182e00: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e04:
    // 0x182e04: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e08:
    // 0x182e08: 0x0  nop
    ctx->pc = 0x182e08u;
    // NOP
label_182e0c:
    // 0x182e0c: 0x1810  mfhi        $v1
    ctx->pc = 0x182e0cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e10:
    // 0x182e10: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182e14:
    // 0x182e14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e18:
    // 0x182e18: 0xa2430219  sb          $v1, 0x219($s2)
    ctx->pc = 0x182e18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 537), (uint8_t)GPR_U32(ctx, 3));
label_182e1c:
    // 0x182e1c: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182e20:
    // 0x182e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182e24:
    // 0x182e24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182e28:
    // 0x182e28: 0x0  nop
    ctx->pc = 0x182e28u;
    // NOP
label_182e2c:
    // 0x182e2c: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x182e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e30:
    // 0x182e30: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e34:
    // 0x182e34: 0x0  nop
    ctx->pc = 0x182e34u;
    // NOP
label_182e38:
    // 0x182e38: 0x1810  mfhi        $v1
    ctx->pc = 0x182e38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e3c:
    // 0x182e3c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_182e40:
    // 0x182e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e44:
    // 0x182e44: 0xa243021a  sb          $v1, 0x21A($s2)
    ctx->pc = 0x182e44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 538), (uint8_t)GPR_U32(ctx, 3));
label_182e48:
    // 0x182e48: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182e4c:
    // 0x182e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182e50:
    // 0x182e50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182e54:
    // 0x182e54: 0x0  nop
    ctx->pc = 0x182e54u;
    // NOP
label_182e58:
    // 0x182e58: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x182e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182e5c:
    // 0x182e5c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182e60:
    // 0x182e60: 0x0  nop
    ctx->pc = 0x182e60u;
    // NOP
label_182e64:
    // 0x182e64: 0x1810  mfhi        $v1
    ctx->pc = 0x182e64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182e68:
    // 0x182e68: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_182e6c:
    // 0x182e6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_182e70:
    // 0x182e70: 0xa243021b  sb          $v1, 0x21B($s2)
    ctx->pc = 0x182e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 539), (uint8_t)GPR_U32(ctx, 3));
label_182e74:
    // 0x182e74: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x182e74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_182e78:
    // 0x182e78: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x182e78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_182e7c:
    // 0x182e7c: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x182e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_182e80:
    // 0x182e80: 0x9243023b  lbu         $v1, 0x23B($s2)
    ctx->pc = 0x182e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 571)));
label_182e84:
    // 0x182e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_182e88:
    if (ctx->pc == 0x182E88u) {
        ctx->pc = 0x182E8Cu;
        goto label_182e8c;
    }
    ctx->pc = 0x182E84u;
    {
        const bool branch_taken_0x182e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e84) {
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182E8Cu;
label_182e8c:
    // 0x182e8c: 0xc045a10  jal         func_116840
label_182e90:
    if (ctx->pc == 0x182E90u) {
        ctx->pc = 0x182E94u;
        goto label_182e94;
    }
    ctx->pc = 0x182E8Cu;
    SET_GPR_U32(ctx, 31, 0x182E94u);
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x182E8Cu, 0x182E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182E94u;
label_182e94:
    // 0x182e94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182e98:
    // 0x182e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182e9c:
    // 0x182e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182ea0:
    // 0x182ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182ea4:
    // 0x182ea4: 0x3e00008  jr          $ra
label_182ea8:
    if (ctx->pc == 0x182EA8u) {
        ctx->pc = 0x182EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EA4u;
        // 0x182ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182EACu;
        goto label_182eac;
    }
    ctx->pc = 0x182EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182EA4u;
        // 0x182ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182EACu;
label_182eac:
    // 0x182eac: 0x0  nop
    ctx->pc = 0x182eacu;
    // NOP
label_182eb0:
    // 0x182eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_182eb4:
    // 0x182eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_182eb8:
    // 0x182eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_182ebc:
    // 0x182ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182ec0:
    // 0x182ec0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x182ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_182ec4:
    // 0x182ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182ec8:
    // 0x182ec8: 0x90830219  lbu         $v1, 0x219($a0)
    ctx->pc = 0x182ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_182ecc:
    // 0x182ecc: 0x90850218  lbu         $a1, 0x218($a0)
    ctx->pc = 0x182eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_182ed0:
    // 0x182ed0: 0x90c70218  lbu         $a3, 0x218($a2)
    ctx->pc = 0x182ed0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182ed4:
    // 0x182ed4: 0x90c40219  lbu         $a0, 0x219($a2)
    ctx->pc = 0x182ed4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182ed8:
    // 0x182ed8: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_182edc:
    // 0x182edc: 0x833823  subu        $a3, $a0, $v1
    ctx->pc = 0x182edcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_182ee0:
    // 0x182ee0: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_182ee4:
    // 0x182ee4: 0x51822  neg         $v1, $a1
    ctx->pc = 0x182ee4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_182ee8:
    // 0x182ee8: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x182ee8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_182eec:
    // 0x182eec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x182eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_182ef0:
    // 0x182ef0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_182ef4:
    if (ctx->pc == 0x182EF4u) {
        ctx->pc = 0x182EF8u;
        goto label_182ef8;
    }
    ctx->pc = 0x182EF0u;
    {
        const bool branch_taken_0x182ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ef0) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182EF8u;
label_182ef8:
    // 0x182ef8: 0xe0202a  slt         $a0, $a3, $zero
    ctx->pc = 0x182ef8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_182efc:
    // 0x182efc: 0x71822  neg         $v1, $a3
    ctx->pc = 0x182efcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_182f00:
    // 0x182f00: 0xe4180a  movz        $v1, $a3, $a0
    ctx->pc = 0x182f00u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_182f04:
    // 0x182f04: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x182f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_182f08:
    // 0x182f08: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
label_182f0c:
    if (ctx->pc == 0x182F0Cu) {
        ctx->pc = 0x182F10u;
        goto label_182f10;
    }
    ctx->pc = 0x182F08u;
    {
        const bool branch_taken_0x182f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x182f08) {
            ctx->pc = 0x183000u;
            goto label_183000;
        }
    }
    ctx->pc = 0x182F10u;
label_182f10:
    // 0x182f10: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_182f14:
    if (ctx->pc == 0x182F14u) {
        ctx->pc = 0x182F18u;
        goto label_182f18;
    }
    ctx->pc = 0x182F10u;
    {
        const bool branch_taken_0x182f10 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x182f10) {
            ctx->pc = 0x182F24u;
            goto label_182f24;
        }
    }
    ctx->pc = 0x182F18u;
label_182f18:
    // 0x182f18: 0x90c20218  lbu         $v0, 0x218($a2)
    ctx->pc = 0x182f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f1c:
    // 0x182f1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_182f20:
    if (ctx->pc == 0x182F20u) {
        ctx->pc = 0x182F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F1Cu;
        // 0x182f20: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F24u;
        goto label_182f24;
    }
    ctx->pc = 0x182F1Cu;
    {
        const bool branch_taken_0x182f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F1Cu;
        // 0x182f20: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f1c) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F24u;
label_182f24:
    // 0x182f24: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
label_182f28:
    if (ctx->pc == 0x182F28u) {
        ctx->pc = 0x182F2Cu;
        goto label_182f2c;
    }
    ctx->pc = 0x182F24u;
    {
        const bool branch_taken_0x182f24 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x182f24) {
            ctx->pc = 0x182F38u;
            goto label_182f38;
        }
    }
    ctx->pc = 0x182F2Cu;
label_182f2c:
    // 0x182f2c: 0x90c20218  lbu         $v0, 0x218($a2)
    ctx->pc = 0x182f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f30:
    // 0x182f30: 0x10000003  b           . + 4 + (0x3 << 2)
label_182f34:
    if (ctx->pc == 0x182F34u) {
        ctx->pc = 0x182F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F30u;
        // 0x182f34: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F38u;
        goto label_182f38;
    }
    ctx->pc = 0x182F30u;
    {
        const bool branch_taken_0x182f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F30u;
        // 0x182f34: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f30) {
            ctx->pc = 0x182F40u;
            goto label_182f40;
        }
    }
    ctx->pc = 0x182F38u;
label_182f38:
    // 0x182f38: 0x90c30218  lbu         $v1, 0x218($a2)
    ctx->pc = 0x182f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 536)));
label_182f3c:
    // 0x182f3c: 0x0  nop
    ctx->pc = 0x182f3cu;
    // NOP
label_182f40:
    // 0x182f40: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
label_182f44:
    if (ctx->pc == 0x182F44u) {
        ctx->pc = 0x182F48u;
        goto label_182f48;
    }
    ctx->pc = 0x182F40u;
    {
        const bool branch_taken_0x182f40 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x182f40) {
            ctx->pc = 0x182F54u;
            goto label_182f54;
        }
    }
    ctx->pc = 0x182F48u;
label_182f48:
    // 0x182f48: 0x90c20219  lbu         $v0, 0x219($a2)
    ctx->pc = 0x182f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f4c:
    // 0x182f4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_182f50:
    if (ctx->pc == 0x182F50u) {
        ctx->pc = 0x182F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F4Cu;
        // 0x182f50: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F54u;
        goto label_182f54;
    }
    ctx->pc = 0x182F4Cu;
    {
        const bool branch_taken_0x182f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F4Cu;
        // 0x182f50: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f4c) {
            ctx->pc = 0x182F70u;
            goto label_182f70;
        }
    }
    ctx->pc = 0x182F54u;
label_182f54:
    // 0x182f54: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_182f58:
    if (ctx->pc == 0x182F58u) {
        ctx->pc = 0x182F5Cu;
        goto label_182f5c;
    }
    ctx->pc = 0x182F54u;
    {
        const bool branch_taken_0x182f54 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x182f54) {
            ctx->pc = 0x182F68u;
            goto label_182f68;
        }
    }
    ctx->pc = 0x182F5Cu;
label_182f5c:
    // 0x182f5c: 0x90c20219  lbu         $v0, 0x219($a2)
    ctx->pc = 0x182f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f60:
    // 0x182f60: 0x10000003  b           . + 4 + (0x3 << 2)
label_182f64:
    if (ctx->pc == 0x182F64u) {
        ctx->pc = 0x182F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F60u;
        // 0x182f64: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182F68u;
        goto label_182f68;
    }
    ctx->pc = 0x182F60u;
    {
        const bool branch_taken_0x182f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182F60u;
        // 0x182f64: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f60) {
            ctx->pc = 0x182F70u;
            goto label_182f70;
        }
    }
    ctx->pc = 0x182F68u;
label_182f68:
    // 0x182f68: 0x90c70219  lbu         $a3, 0x219($a2)
    ctx->pc = 0x182f68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 537)));
label_182f6c:
    // 0x182f6c: 0x0  nop
    ctx->pc = 0x182f6cu;
    // NOP
label_182f70:
    // 0x182f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x182f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182f74:
    // 0x182f74: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_182f78:
    // 0x182f78: 0x27b1003c  addiu       $s1, $sp, 0x3C
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_182f7c:
    // 0x182f7c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_182f80:
    // 0x182f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x182f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_182f84:
    // 0x182f84: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x182f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_182f88:
    // 0x182f88: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_182f8c:
    // 0x182f8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182f90:
    // 0x182f90: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x182f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_182f94:
    // 0x182f94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x182f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_182f98:
    // 0x182f98: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x182f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_182f9c:
    // 0x182f9c: 0x0  nop
    ctx->pc = 0x182f9cu;
    // NOP
label_182fa0:
    // 0x182fa0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x182fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_182fa4:
    // 0x182fa4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x182fa4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182fa8:
    // 0x182fa8: 0x0  nop
    ctx->pc = 0x182fa8u;
    // NOP
label_182fac:
    // 0x182fac: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x182facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_182fb0:
    // 0x182fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x182fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_182fb4:
    // 0x182fb4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x182fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_182fb8:
    // 0x182fb8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x182fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_182fbc:
    // 0x182fbc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x182fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_182fc0:
    // 0x182fc0: 0xc060c08  jal         func_183020
label_182fc4:
    if (ctx->pc == 0x182FC4u) {
        ctx->pc = 0x182FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FC0u;
        // 0x182fc4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182FC8u;
        goto label_182fc8;
    }
    ctx->pc = 0x182FC0u;
    SET_GPR_U32(ctx, 31, 0x182FC8u);
    ctx->pc = 0x182FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FC0u;
    // 0x182fc4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x183020u;
    goto label_183020;
    ctx->pc = 0x182FC8u;
label_182fc8:
    // 0x182fc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_182fcc:
    if (ctx->pc == 0x182FCCu) {
        ctx->pc = 0x182FD0u;
        goto label_182fd0;
    }
    ctx->pc = 0x182FC8u;
    {
        const bool branch_taken_0x182fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182fc8) {
            ctx->pc = 0x183000u;
            goto label_183000;
        }
    }
    ctx->pc = 0x182FD0u;
label_182fd0:
    // 0x182fd0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x182fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182fd4:
    // 0x182fd4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x182fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_182fd8:
    // 0x182fd8: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_182fdc:
    // 0x182fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182fe0:
    // 0x182fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182fe4:
    // 0x182fe4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x182fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_182fe8:
    // 0x182fe8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x182fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182fec:
    // 0x182fec: 0xc05f3d0  jal         func_17CF40
label_182ff0:
    if (ctx->pc == 0x182FF0u) {
        ctx->pc = 0x182FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FECu;
        // 0x182ff0: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182FF4u;
        goto label_182ff4;
    }
    ctx->pc = 0x182FECu;
    SET_GPR_U32(ctx, 31, 0x182FF4u);
    ctx->pc = 0x182FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FECu;
    // 0x182ff0: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x182FECu, 0x182FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182FF4u;
label_182ff4:
    // 0x182ff4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x182ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_182ff8:
    // 0x182ff8: 0xc06ea84  jal         func_1BAA10
label_182ffc:
    if (ctx->pc == 0x182FFCu) {
        ctx->pc = 0x182FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182FF8u;
        // 0x182ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183000u;
        goto label_183000;
    }
    ctx->pc = 0x182FF8u;
    SET_GPR_U32(ctx, 31, 0x183000u);
    ctx->pc = 0x182FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182FF8u;
    // 0x182ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA10u;
    { ctx->pc = 0x1baa10; return; }
    ctx->pc = 0x183000u;
label_183000:
    // 0x183000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183004:
    // 0x183004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183008:
    // 0x183008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18300c:
    // 0x18300c: 0x3e00008  jr          $ra
label_183010:
    if (ctx->pc == 0x183010u) {
        ctx->pc = 0x183010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18300Cu;
        // 0x183010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183014u;
        goto label_183014;
    }
    ctx->pc = 0x18300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18300Cu;
        // 0x183010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183014u;
label_183014:
    // 0x183014: 0x0  nop
    ctx->pc = 0x183014u;
    // NOP
label_183018:
    // 0x183018: 0x0  nop
    ctx->pc = 0x183018u;
    // NOP
label_18301c:
    // 0x18301c: 0x0  nop
    ctx->pc = 0x18301cu;
    // NOP
label_183020:
    // 0x183020: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_183024:
    // 0x183024: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_183028:
    // 0x183028: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x183028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18302c:
    // 0x18302c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_183030:
    // 0x183030: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x183030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_183034:
    // 0x183034: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_183038:
    // 0x183038: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x183038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18303c:
    // 0x18303c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x18303cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_183040:
    // 0x183040: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_183044:
    // 0x183044: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x183044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_183048:
    // 0x183048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18304c:
    // 0x18304c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x18304cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_183050:
    // 0x183050: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_183054:
    // 0x183054: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x183054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183058:
    // 0x183058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18305c:
    // 0x18305c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18305cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183060:
    // 0x183060: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_183064:
    // 0x183064: 0x34466667  ori         $a2, $v0, 0x6667
    ctx->pc = 0x183064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_183068:
    // 0x183068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18306c:
    // 0x18306c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18306cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183070:
    // 0x183070: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x183070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_183074:
    // 0x183074: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x183074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_183078:
    // 0x183078: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x183078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18307c:
    // 0x18307c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18307cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_183080:
    // 0x183080: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x183080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_183084:
    // 0x183084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_183088:
    // 0x183088: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x183088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_18308c:
    // 0x18308c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x18308cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_183090:
    // 0x183090: 0x0  nop
    ctx->pc = 0x183090u;
    // NOP
label_183094:
    // 0x183094: 0x1810  mfhi        $v1
    ctx->pc = 0x183094u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183098:
    // 0x183098: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x183098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18309c:
    // 0x18309c: 0x0  nop
    ctx->pc = 0x18309cu;
    // NOP
label_1830a0:
    // 0x1830a0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1830a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1830a4:
    // 0x1830a4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_1830a8:
    // 0x1830a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1830a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1830ac:
    // 0x1830ac: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1830acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1830b0:
    // 0x1830b0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1830b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1830b4:
    // 0x1830b4: 0x1810  mfhi        $v1
    ctx->pc = 0x1830b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1830b8:
    // 0x1830b8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1830b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1830bc:
    // 0x1830bc: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1830bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1830c0:
    // 0x1830c0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1830c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_1830c4:
    // 0x1830c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1830c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1830c8:
    // 0x1830c8: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1830c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1830cc:
    // 0x1830cc: 0x827c2  srl         $a0, $t0, 31
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1830d0:
    // 0x1830d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1830d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1830d4:
    // 0x1830d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1830d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1830d8:
    // 0x1830d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1830dc:
    // 0x1830dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1830dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1830e0:
    // 0x1830e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1830e4:
    // 0x1830e4: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x1830e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1830e8:
    // 0x1830e8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1830e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1830ec:
    // 0x1830ec: 0x0  nop
    ctx->pc = 0x1830ecu;
    // NOP
label_1830f0:
    // 0x1830f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1830f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1830f4:
    // 0x1830f4: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x1830f4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1830f8:
    // 0x1830f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1830f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1830fc:
    // 0x1830fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183100:
    // 0x183100: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_183104:
    // 0x183104: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x183104u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183108:
    // 0x183108: 0x2010  mfhi        $a0
    ctx->pc = 0x183108u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_18310c:
    // 0x18310c: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x18310cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_183110:
    // 0x183110: 0x0  nop
    ctx->pc = 0x183110u;
    // NOP
label_183114:
    // 0x183114: 0x0  nop
    ctx->pc = 0x183114u;
    // NOP
label_183118:
    // 0x183118: 0x1810  mfhi        $v1
    ctx->pc = 0x183118u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_18311c:
    // 0x18311c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_183120:
    // 0x183120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_183124:
    // 0x183124: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_183128:
    // 0x183128: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_18312c:
    // 0x18312c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_183130:
    // 0x183130: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x183130u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_183134:
    // 0x183134: 0x32f200ff  andi        $s2, $s7, 0xFF
    ctx->pc = 0x183134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_183138:
    // 0x183138: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18313c:
    // 0x18313c: 0xa810  mfhi        $s5
    ctx->pc = 0x18313cu;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_183140:
    // 0x183140: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x183140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_183144:
    // 0x183144: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_183148:
    // 0x183148: 0x36430001  ori         $v1, $s2, 0x1
    ctx->pc = 0x183148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_18314c:
    // 0x18314c: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x18314cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183150:
    // 0x183150: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_183154:
    // 0x183154: 0x0  nop
    ctx->pc = 0x183154u;
    // NOP
label_183158:
    // 0x183158: 0x1010  mfhi        $v0
    ctx->pc = 0x183158u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18315c:
    // 0x18315c: 0x2a5001a  div         $zero, $s5, $a1
    ctx->pc = 0x18315cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_183160:
    // 0x183160: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_183164:
    // 0x183164: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183168:
    // 0x183168: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_18316c:
    // 0x18316c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183170:
    // 0x183170: 0x1010  mfhi        $v0
    ctx->pc = 0x183170u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_183174:
    // 0x183174: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_183178:
    if (ctx->pc == 0x183178u) {
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183174u;
        // 0x183178: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18317Cu;
        goto label_18317c;
    }
    ctx->pc = 0x183174u;
    {
        const bool branch_taken_0x183174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183174u;
        // 0x183178: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183174) {
            ctx->pc = 0x183194u;
            goto label_183194;
        }
    }
    ctx->pc = 0x18317Cu;
label_18317c:
    // 0x18317c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183180:
    // 0x183180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183184:
    // 0x183184: 0xc0449b8  jal         func_1126E0
label_183188:
    if (ctx->pc == 0x183188u) {
        ctx->pc = 0x183188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183184u;
        // 0x183188: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18318Cu;
        goto label_18318c;
    }
    ctx->pc = 0x183184u;
    SET_GPR_U32(ctx, 31, 0x18318Cu);
    ctx->pc = 0x183188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183184u;
    // 0x183188: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x183184u, 0x18318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18318Cu;
label_18318c:
    // 0x18318c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_183190:
    if (ctx->pc == 0x183190u) {
        ctx->pc = 0x183194u;
        goto label_183194;
    }
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18318c) {
            ctx->pc = 0x18323Cu;
            { ctx->pc = 0x18323c; return; }
        }
    }
    ctx->pc = 0x183194u;
label_183194:
    // 0x183194: 0x0  nop
    ctx->pc = 0x183194u;
    // NOP
label_183198:
    // 0x183198: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_18319c:
    // 0x18319c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1831a0:
    if (ctx->pc == 0x1831A0u) {
        ctx->pc = 0x1831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18319Cu;
        // 0x1831a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831A4u;
        goto label_1831a4;
    }
    ctx->pc = 0x18319Cu;
    {
        const bool branch_taken_0x18319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18319Cu;
        // 0x1831a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18319c) {
            ctx->pc = 0x1831B8u;
            goto label_1831b8;
        }
    }
    ctx->pc = 0x1831A4u;
label_1831a4:
    // 0x1831a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1831a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1831a8:
    // 0x1831a8: 0xc0449b8  jal         func_1126E0
label_1831ac:
    if (ctx->pc == 0x1831ACu) {
        ctx->pc = 0x1831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A8u;
        // 0x1831ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831B0u;
        goto label_1831b0;
    }
    ctx->pc = 0x1831A8u;
    SET_GPR_U32(ctx, 31, 0x1831B0u);
    ctx->pc = 0x1831ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1831A8u;
    // 0x1831ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1831A8u, 0x1831B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831B0u;
label_1831b0:
    // 0x1831b0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1831b4:
    if (ctx->pc == 0x1831B4u) {
        ctx->pc = 0x1831B8u;
        goto label_1831b8;
    }
    ctx->pc = 0x1831B0u;
    {
        const bool branch_taken_0x1831b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1831b0) {
            ctx->pc = 0x18323Cu;
            { ctx->pc = 0x18323c; return; }
        }
    }
    ctx->pc = 0x1831B8u;
label_1831b8:
    // 0x1831b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1831bc:
    // 0x1831bc: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x1831bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1831c0:
    // 0x1831c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1831c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1831c4:
    // 0x1831c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1831c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1831c8:
    // 0x1831c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1831cc:
    // 0x1831cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1831ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    ctx->pc = 0x1831d0u;
    return;
}
