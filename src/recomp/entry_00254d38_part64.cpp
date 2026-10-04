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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739d8u: goto label_2739d8;
        case 0x2739dcu: goto label_2739dc;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739e4u: goto label_2739e4;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739ecu: goto label_2739ec;
        case 0x2739f0u: goto label_2739f0;
        case 0x2739f4u: goto label_2739f4;
        case 0x2739f8u: goto label_2739f8;
        case 0x2739fcu: goto label_2739fc;
        case 0x273a00u: goto label_273a00;
        case 0x273a04u: goto label_273a04;
        case 0x273a08u: goto label_273a08;
        case 0x273a0cu: goto label_273a0c;
        case 0x273a10u: goto label_273a10;
        case 0x273a14u: goto label_273a14;
        case 0x273a18u: goto label_273a18;
        case 0x273a1cu: goto label_273a1c;
        case 0x273a20u: goto label_273a20;
        case 0x273a24u: goto label_273a24;
        case 0x273a28u: goto label_273a28;
        case 0x273a2cu: goto label_273a2c;
        case 0x273a30u: goto label_273a30;
        case 0x273a34u: goto label_273a34;
        case 0x273a38u: goto label_273a38;
        case 0x273a3cu: goto label_273a3c;
        case 0x273a40u: goto label_273a40;
        case 0x273a44u: goto label_273a44;
        case 0x273a48u: goto label_273a48;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a50u: goto label_273a50;
        case 0x273a54u: goto label_273a54;
        case 0x273a58u: goto label_273a58;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a60u: goto label_273a60;
        case 0x273a64u: goto label_273a64;
        case 0x273a68u: goto label_273a68;
        case 0x273a6cu: goto label_273a6c;
        case 0x273a70u: goto label_273a70;
        case 0x273a74u: goto label_273a74;
        case 0x273a78u: goto label_273a78;
        case 0x273a7cu: goto label_273a7c;
        case 0x273a80u: goto label_273a80;
        case 0x273a84u: goto label_273a84;
        case 0x273a88u: goto label_273a88;
        case 0x273a8cu: goto label_273a8c;
        case 0x273a90u: goto label_273a90;
        case 0x273a94u: goto label_273a94;
        case 0x273a98u: goto label_273a98;
        case 0x273a9cu: goto label_273a9c;
        case 0x273aa0u: goto label_273aa0;
        case 0x273aa4u: goto label_273aa4;
        case 0x273aa8u: goto label_273aa8;
        case 0x273aacu: goto label_273aac;
        case 0x273ab0u: goto label_273ab0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273ab8u: goto label_273ab8;
        case 0x273abcu: goto label_273abc;
        case 0x273ac0u: goto label_273ac0;
        case 0x273ac4u: goto label_273ac4;
        case 0x273ac8u: goto label_273ac8;
        case 0x273accu: goto label_273acc;
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b40u: goto label_273b40;
        case 0x273b44u: goto label_273b44;
        case 0x273b48u: goto label_273b48;
        case 0x273b4cu: goto label_273b4c;
        case 0x273b50u: goto label_273b50;
        case 0x273b54u: goto label_273b54;
        case 0x273b58u: goto label_273b58;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b60u: goto label_273b60;
        case 0x273b64u: goto label_273b64;
        case 0x273b68u: goto label_273b68;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b70u: goto label_273b70;
        case 0x273b74u: goto label_273b74;
        case 0x273b78u: goto label_273b78;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b80u: goto label_273b80;
        case 0x273b84u: goto label_273b84;
        case 0x273b88u: goto label_273b88;
        case 0x273b8cu: goto label_273b8c;
        case 0x273b90u: goto label_273b90;
        case 0x273b94u: goto label_273b94;
        case 0x273b98u: goto label_273b98;
        case 0x273b9cu: goto label_273b9c;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba4u: goto label_273ba4;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bacu: goto label_273bac;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bb4u: goto label_273bb4;
        case 0x273bb8u: goto label_273bb8;
        case 0x273bbcu: goto label_273bbc;
        case 0x273bc0u: goto label_273bc0;
        case 0x273bc4u: goto label_273bc4;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bccu: goto label_273bcc;
        case 0x273bd0u: goto label_273bd0;
        case 0x273bd4u: goto label_273bd4;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bdcu: goto label_273bdc;
        case 0x273be0u: goto label_273be0;
        case 0x273be4u: goto label_273be4;
        case 0x273be8u: goto label_273be8;
        case 0x273becu: goto label_273bec;
        case 0x273bf0u: goto label_273bf0;
        case 0x273bf4u: goto label_273bf4;
        case 0x273bf8u: goto label_273bf8;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c00u: goto label_273c00;
        case 0x273c04u: goto label_273c04;
        case 0x273c08u: goto label_273c08;
        case 0x273c0cu: goto label_273c0c;
        case 0x273c10u: goto label_273c10;
        case 0x273c14u: goto label_273c14;
        case 0x273c18u: goto label_273c18;
        case 0x273c1cu: goto label_273c1c;
        case 0x273c20u: goto label_273c20;
        case 0x273c24u: goto label_273c24;
        case 0x273c28u: goto label_273c28;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c30u: goto label_273c30;
        case 0x273c34u: goto label_273c34;
        case 0x273c38u: goto label_273c38;
        case 0x273c3cu: goto label_273c3c;
        case 0x273c40u: goto label_273c40;
        case 0x273c44u: goto label_273c44;
        case 0x273c48u: goto label_273c48;
        case 0x273c4cu: goto label_273c4c;
        case 0x273c50u: goto label_273c50;
        case 0x273c54u: goto label_273c54;
        case 0x273c58u: goto label_273c58;
        case 0x273c5cu: goto label_273c5c;
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        case 0x273fa0u: goto label_273fa0;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fa8u: goto label_273fa8;
        case 0x273facu: goto label_273fac;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fb4u: goto label_273fb4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fbcu: goto label_273fbc;
        case 0x273fc0u: goto label_273fc0;
        case 0x273fc4u: goto label_273fc4;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fccu: goto label_273fcc;
        case 0x273fd0u: goto label_273fd0;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fd8u: goto label_273fd8;
        case 0x273fdcu: goto label_273fdc;
        case 0x273fe0u: goto label_273fe0;
        case 0x273fe4u: goto label_273fe4;
        case 0x273fe8u: goto label_273fe8;
        case 0x273fecu: goto label_273fec;
        case 0x273ff0u: goto label_273ff0;
        case 0x273ff4u: goto label_273ff4;
        case 0x273ff8u: goto label_273ff8;
        case 0x273ffcu: goto label_273ffc;
        case 0x274000u: goto label_274000;
        case 0x274004u: goto label_274004;
        case 0x274008u: goto label_274008;
        case 0x27400cu: goto label_27400c;
        case 0x274010u: goto label_274010;
        case 0x274014u: goto label_274014;
        case 0x274018u: goto label_274018;
        case 0x27401cu: goto label_27401c;
        case 0x274020u: goto label_274020;
        case 0x274024u: goto label_274024;
        case 0x274028u: goto label_274028;
        case 0x27402cu: goto label_27402c;
        case 0x274030u: goto label_274030;
        case 0x274034u: goto label_274034;
        case 0x274038u: goto label_274038;
        case 0x27403cu: goto label_27403c;
        case 0x274040u: goto label_274040;
        case 0x274044u: goto label_274044;
        case 0x274048u: goto label_274048;
        case 0x27404cu: goto label_27404c;
        case 0x274050u: goto label_274050;
        case 0x274054u: goto label_274054;
        case 0x274058u: goto label_274058;
        case 0x27405cu: goto label_27405c;
        case 0x274060u: goto label_274060;
        case 0x274064u: goto label_274064;
        case 0x274068u: goto label_274068;
        case 0x27406cu: goto label_27406c;
        case 0x274070u: goto label_274070;
        case 0x274074u: goto label_274074;
        case 0x274078u: goto label_274078;
        case 0x27407cu: goto label_27407c;
        case 0x274080u: goto label_274080;
        case 0x274084u: goto label_274084;
        case 0x274088u: goto label_274088;
        case 0x27408cu: goto label_27408c;
        case 0x274090u: goto label_274090;
        case 0x274094u: goto label_274094;
        case 0x274098u: goto label_274098;
        case 0x27409cu: goto label_27409c;
        case 0x2740a0u: goto label_2740a0;
        case 0x2740a4u: goto label_2740a4;
        case 0x2740a8u: goto label_2740a8;
        case 0x2740acu: goto label_2740ac;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740b4u: goto label_2740b4;
        case 0x2740b8u: goto label_2740b8;
        case 0x2740bcu: goto label_2740bc;
        case 0x2740c0u: goto label_2740c0;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740c8u: goto label_2740c8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740d4u: goto label_2740d4;
        case 0x2740d8u: goto label_2740d8;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740e0u: goto label_2740e0;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740e8u: goto label_2740e8;
        case 0x2740ecu: goto label_2740ec;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740f4u: goto label_2740f4;
        case 0x2740f8u: goto label_2740f8;
        case 0x2740fcu: goto label_2740fc;
        case 0x274100u: goto label_274100;
        case 0x274104u: goto label_274104;
        case 0x274108u: goto label_274108;
        case 0x27410cu: goto label_27410c;
        case 0x274110u: goto label_274110;
        case 0x274114u: goto label_274114;
        case 0x274118u: goto label_274118;
        case 0x27411cu: goto label_27411c;
        case 0x274120u: goto label_274120;
        case 0x274124u: goto label_274124;
        case 0x274128u: goto label_274128;
        case 0x27412cu: goto label_27412c;
        case 0x274130u: goto label_274130;
        case 0x274134u: goto label_274134;
        default: return;
    }

label_273968:
    // 0x273968: 0x0  nop
    ctx->pc = 0x273968u;
    // NOP
label_27396c:
    // 0x27396c: 0x0  nop
    ctx->pc = 0x27396cu;
    // NOP
label_273970:
    // 0x273970: 0xa4e0  .word       0x0000A4E0                   # add         $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273974:
    // 0x273974: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273974u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273978:
    // 0x273978: 0x0  nop
    ctx->pc = 0x273978u;
    // NOP
label_27397c:
    // 0x27397c: 0x0  nop
    ctx->pc = 0x27397cu;
    // NOP
label_273980:
    // 0x273980: 0xa4e8  .word       0x0000A4E8                   # mfsa        $s4 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273980u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_273984:
    // 0x273984: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x273984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273988:
    // 0x273988: 0x0  nop
    ctx->pc = 0x273988u;
    // NOP
label_27398c:
    // 0x27398c: 0x0  nop
    ctx->pc = 0x27398cu;
    // NOP
label_273990:
    // 0x273990: 0xa4f1  tgeu        $zero, $zero, 659
    ctx->pc = 0x273990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273994:
    // 0x273994: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x273994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273998:
    // 0x273998: 0x0  nop
    ctx->pc = 0x273998u;
    // NOP
label_27399c:
    // 0x27399c: 0x0  nop
    ctx->pc = 0x27399cu;
    // NOP
label_2739a0:
    // 0x2739a0: 0xa4fc  dsll32      $s4, $zero, 19
    ctx->pc = 0x2739a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 19));
label_2739a4:
    // 0x2739a4: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2739a8:
    // 0x2739a8: 0x0  nop
    ctx->pc = 0x2739a8u;
    // NOP
label_2739ac:
    // 0x2739ac: 0x0  nop
    ctx->pc = 0x2739acu;
    // NOP
label_2739b0:
    // 0x2739b0: 0xa506  .word       0x0000A506                   # srlv        $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2739b4:
    // 0x2739b4: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2739b8:
    // 0x2739b8: 0x0  nop
    ctx->pc = 0x2739b8u;
    // NOP
label_2739bc:
    // 0x2739bc: 0x0  nop
    ctx->pc = 0x2739bcu;
    // NOP
label_2739c0:
    // 0x2739c0: 0xa512  .word       0x0000A512                   # mflo        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2739c4:
    // 0x2739c4: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x2739c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2739c8:
    // 0x2739c8: 0x0  nop
    ctx->pc = 0x2739c8u;
    // NOP
label_2739cc:
    // 0x2739cc: 0x0  nop
    ctx->pc = 0x2739ccu;
    // NOP
label_2739d0:
    // 0x2739d0: 0xa51a  .word       0x0000A51A                   # div         $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2739d4:
    // 0x2739d4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2739d8:
    // 0x2739d8: 0x0  nop
    ctx->pc = 0x2739d8u;
    // NOP
label_2739dc:
    // 0x2739dc: 0x0  nop
    ctx->pc = 0x2739dcu;
    // NOP
label_2739e0:
    // 0x2739e0: 0xa523  .word       0x0000A523                   # negu        $s4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2739e4:
    // 0x2739e4: 0x8140  sll         $s0, $zero, 5
    ctx->pc = 0x2739e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2739e8:
    // 0x2739e8: 0x0  nop
    ctx->pc = 0x2739e8u;
    // NOP
label_2739ec:
    // 0x2739ec: 0x0  nop
    ctx->pc = 0x2739ecu;
    // NOP
label_2739f0:
    // 0x2739f0: 0xa534  teq         $zero, $zero, 660
    ctx->pc = 0x2739f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f4:
    // 0x2739f4: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x2739f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f8:
    // 0x2739f8: 0x0  nop
    ctx->pc = 0x2739f8u;
    // NOP
label_2739fc:
    // 0x2739fc: 0x0  nop
    ctx->pc = 0x2739fcu;
    // NOP
label_273a00:
    // 0x273a00: 0xa53d  .word       0x0000A53D                   # INVALID     $zero, $zero, -0x5AC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273A00 raw=0x0000A53D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a04:
    // 0x273a04: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x273a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a08:
    // 0x273a08: 0x0  nop
    ctx->pc = 0x273a08u;
    // NOP
label_273a0c:
    // 0x273a0c: 0x0  nop
    ctx->pc = 0x273a0cu;
    // NOP
label_273a10:
    // 0x273a10: 0xa551  .word       0x0000A551                   # mthi        $zero # 0000A540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_273a14:
    // 0x273a14: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x273a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a18:
    // 0x273a18: 0x0  nop
    ctx->pc = 0x273a18u;
    // NOP
label_273a1c:
    // 0x273a1c: 0x0  nop
    ctx->pc = 0x273a1cu;
    // NOP
label_273a20:
    // 0x273a20: 0xa566  .word       0x0000A566                   # xor         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273a24:
    // 0x273a24: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x273a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a28:
    // 0x273a28: 0x0  nop
    ctx->pc = 0x273a28u;
    // NOP
label_273a2c:
    // 0x273a2c: 0x0  nop
    ctx->pc = 0x273a2cu;
    // NOP
label_273a30:
    // 0x273a30: 0xa575  .word       0x0000A575                   # INVALID     $zero, $zero, -0x5A8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273A30 raw=0x0000A575"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a34:
    // 0x273a34: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_273a38:
    // 0x273a38: 0x0  nop
    ctx->pc = 0x273a38u;
    // NOP
label_273a3c:
    // 0x273a3c: 0x0  nop
    ctx->pc = 0x273a3cu;
    // NOP
label_273a40:
    // 0x273a40: 0xa57f  dsra32      $s4, $zero, 21
    ctx->pc = 0x273a40u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 21));
label_273a44:
    // 0x273a44: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x273a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a48:
    // 0x273a48: 0x0  nop
    ctx->pc = 0x273a48u;
    // NOP
label_273a4c:
    // 0x273a4c: 0x0  nop
    ctx->pc = 0x273a4cu;
    // NOP
label_273a50:
    // 0x273a50: 0xa58d  break       0, 662
    ctx->pc = 0x273a50u;
    runtime->handleBreak(rdram, ctx);
label_273a54:
    // 0x273a54: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x273a54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273a58:
    // 0x273a58: 0x0  nop
    ctx->pc = 0x273a58u;
    // NOP
label_273a5c:
    // 0x273a5c: 0x0  nop
    ctx->pc = 0x273a5cu;
    // NOP
label_273a60:
    // 0x273a60: 0xa594  .word       0x0000A594                   # dsllv       $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273a64:
    // 0x273a64: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x273a64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273a68:
    // 0x273a68: 0x0  nop
    ctx->pc = 0x273a68u;
    // NOP
label_273a6c:
    // 0x273a6c: 0x0  nop
    ctx->pc = 0x273a6cu;
    // NOP
label_273a70:
    // 0x273a70: 0xa59c  .word       0x0000A59C                   # dmult       $zero, $zero # 0000A580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x273A70 raw=0x0000A59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a74:
    // 0x273a74: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x273a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a78:
    // 0x273a78: 0x0  nop
    ctx->pc = 0x273a78u;
    // NOP
label_273a7c:
    // 0x273a7c: 0x0  nop
    ctx->pc = 0x273a7cu;
    // NOP
label_273a80:
    // 0x273a80: 0xa5a4  .word       0x0000A5A4                   # and         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273a84:
    // 0x273a84: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273a88:
    // 0x273a88: 0x0  nop
    ctx->pc = 0x273a88u;
    // NOP
label_273a8c:
    // 0x273a8c: 0x0  nop
    ctx->pc = 0x273a8cu;
    // NOP
label_273a90:
    // 0x273a90: 0xa5b4  teq         $zero, $zero, 662
    ctx->pc = 0x273a90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a94:
    // 0x273a94: 0x6af0  tge         $zero, $zero, 427
    ctx->pc = 0x273a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a98:
    // 0x273a98: 0x0  nop
    ctx->pc = 0x273a98u;
    // NOP
label_273a9c:
    // 0x273a9c: 0x0  nop
    ctx->pc = 0x273a9cu;
    // NOP
label_273aa0:
    // 0x273aa0: 0xa5c2  srl         $s4, $zero, 23
    ctx->pc = 0x273aa0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_273aa4:
    // 0x273aa4: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_273aa8:
    // 0x273aa8: 0x0  nop
    ctx->pc = 0x273aa8u;
    // NOP
label_273aac:
    // 0x273aac: 0x0  nop
    ctx->pc = 0x273aacu;
    // NOP
label_273ab0:
    // 0x273ab0: 0xa5ca  .word       0x0000A5CA                   # movz        $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ab0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273ab4:
    // 0x273ab4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x273ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ab8:
    // 0x273ab8: 0x0  nop
    ctx->pc = 0x273ab8u;
    // NOP
label_273abc:
    // 0x273abc: 0x0  nop
    ctx->pc = 0x273abcu;
    // NOP
label_273ac0:
    // 0x273ac0: 0xa5d6  .word       0x0000A5D6                   # dsrlv       $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273ac4:
    // 0x273ac4: 0x86a0  .word       0x000086A0                   # add         $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273ac8:
    // 0x273ac8: 0x0  nop
    ctx->pc = 0x273ac8u;
    // NOP
label_273acc:
    // 0x273acc: 0x0  nop
    ctx->pc = 0x273accu;
    // NOP
label_273ad0:
    // 0x273ad0: 0xa5e7  .word       0x0000A5E7                   # not         $s4, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ad0u;
    SET_GPR_U64(ctx, 20, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273ad4:
    // 0x273ad4: 0x4900  sll         $t1, $zero, 4
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ad8:
    // 0x273ad8: 0x0  nop
    ctx->pc = 0x273ad8u;
    // NOP
label_273adc:
    // 0x273adc: 0x0  nop
    ctx->pc = 0x273adcu;
    // NOP
label_273ae0:
    // 0x273ae0: 0xa5f1  tgeu        $zero, $zero, 663
    ctx->pc = 0x273ae0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ae4:
    // 0x273ae4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273ae8:
    // 0x273ae8: 0x0  nop
    ctx->pc = 0x273ae8u;
    // NOP
label_273aec:
    // 0x273aec: 0x0  nop
    ctx->pc = 0x273aecu;
    // NOP
label_273af0:
    // 0x273af0: 0xa5fd  .word       0x0000A5FD                   # INVALID     $zero, $zero, -0x5A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273AF0 raw=0x0000A5FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273af4:
    // 0x273af4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273af8:
    // 0x273af8: 0x0  nop
    ctx->pc = 0x273af8u;
    // NOP
label_273afc:
    // 0x273afc: 0x0  nop
    ctx->pc = 0x273afcu;
    // NOP
label_273b00:
    // 0x273b00: 0xa609  .word       0x0000A609                   # jalr        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_273b04:
    if (ctx->pc == 0x273B04u) {
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B08u;
        goto label_273b08;
    }
    ctx->pc = 0x273B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x273B08u);
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B00u, 0x273B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273B08u;
label_273b08:
    // 0x273b08: 0x0  nop
    ctx->pc = 0x273b08u;
    // NOP
label_273b0c:
    // 0x273b0c: 0x0  nop
    ctx->pc = 0x273b0cu;
    // NOP
label_273b10:
    // 0x273b10: 0xa615  .word       0x0000A615                   # INVALID     $zero, $zero, -0x59EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273B10 raw=0x0000A615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b14:
    // 0x273b14: 0x7f00  sll         $t7, $zero, 28
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273b18:
    // 0x273b18: 0x0  nop
    ctx->pc = 0x273b18u;
    // NOP
label_273b1c:
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0xa625  .word       0x0000A625                   # move        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273b24:
    // 0x273b24: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x273b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b28:
    // 0x273b28: 0x0  nop
    ctx->pc = 0x273b28u;
    // NOP
label_273b2c:
    // 0x273b2c: 0x0  nop
    ctx->pc = 0x273b2cu;
    // NOP
label_273b30:
    // 0x273b30: 0xa633  tltu        $zero, $zero, 664
    ctx->pc = 0x273b30u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b34:
    // 0x273b34: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x273b34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273b38:
    // 0x273b38: 0x0  nop
    ctx->pc = 0x273b38u;
    // NOP
label_273b3c:
    // 0x273b3c: 0x0  nop
    ctx->pc = 0x273b3cu;
    // NOP
label_273b40:
    // 0x273b40: 0xa63d  .word       0x0000A63D                   # INVALID     $zero, $zero, -0x59C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273B40 raw=0x0000A63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b44:
    // 0x273b44: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273b48:
    // 0x273b48: 0x0  nop
    ctx->pc = 0x273b48u;
    // NOP
label_273b4c:
    // 0x273b4c: 0x0  nop
    ctx->pc = 0x273b4cu;
    // NOP
label_273b50:
    // 0x273b50: 0xa645  .word       0x0000A645                   # INVALID     $zero, $zero, -0x59BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273B50 raw=0x0000A645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b54:
    // 0x273b54: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x273b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b58:
    // 0x273b58: 0x0  nop
    ctx->pc = 0x273b58u;
    // NOP
label_273b5c:
    // 0x273b5c: 0x0  nop
    ctx->pc = 0x273b5cu;
    // NOP
label_273b60:
    // 0x273b60: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b60u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273b64:
    // 0x273b64: 0xaf60  .word       0x0000AF60                   # add         $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273b68:
    // 0x273b68: 0x0  nop
    ctx->pc = 0x273b68u;
    // NOP
label_273b6c:
    // 0x273b6c: 0x0  nop
    ctx->pc = 0x273b6cu;
    // NOP
label_273b70:
    // 0x273b70: 0xa666  .word       0x0000A666                   # xor         $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273b74:
    // 0x273b74: 0x30e0  .word       0x000030E0                   # add         $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_273b78:
    // 0x273b78: 0x0  nop
    ctx->pc = 0x273b78u;
    // NOP
label_273b7c:
    // 0x273b7c: 0x0  nop
    ctx->pc = 0x273b7cu;
    // NOP
label_273b80:
    // 0x273b80: 0xa66d  .word       0x0000A66D                   # daddu       $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b84:
    // 0x273b84: 0x3430  tge         $zero, $zero, 208
    ctx->pc = 0x273b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b88:
    // 0x273b88: 0x0  nop
    ctx->pc = 0x273b88u;
    // NOP
label_273b8c:
    // 0x273b8c: 0x0  nop
    ctx->pc = 0x273b8cu;
    // NOP
label_273b90:
    // 0x273b90: 0xa674  teq         $zero, $zero, 665
    ctx->pc = 0x273b90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b94:
    // 0x273b94: 0xd890  .word       0x0000D890                   # mfhi        $k1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273b98:
    // 0x273b98: 0x0  nop
    ctx->pc = 0x273b98u;
    // NOP
label_273b9c:
    // 0x273b9c: 0x0  nop
    ctx->pc = 0x273b9cu;
    // NOP
label_273ba0:
    // 0x273ba0: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273ba4:
    // 0x273ba4: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273ba8:
    // 0x273ba8: 0x0  nop
    ctx->pc = 0x273ba8u;
    // NOP
label_273bac:
    // 0x273bac: 0x0  nop
    ctx->pc = 0x273bacu;
    // NOP
label_273bb0:
    // 0x273bb0: 0xa6ab  .word       0x0000A6AB                   # sltu        $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_273bb4:
    // 0x273bb4: 0xb7d0  .word       0x0000B7D0                   # mfhi        $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273bb8:
    // 0x273bb8: 0x0  nop
    ctx->pc = 0x273bb8u;
    // NOP
label_273bbc:
    // 0x273bbc: 0x0  nop
    ctx->pc = 0x273bbcu;
    // NOP
label_273bc0:
    // 0x273bc0: 0xa6c2  srl         $s4, $zero, 27
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_273bc4:
    // 0x273bc4: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x273bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273bc8:
    // 0x273bc8: 0x0  nop
    ctx->pc = 0x273bc8u;
    // NOP
label_273bcc:
    // 0x273bcc: 0x0  nop
    ctx->pc = 0x273bccu;
    // NOP
label_273bd0:
    // 0x273bd0: 0xa6d5  .word       0x0000A6D5                   # INVALID     $zero, $zero, -0x592B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273BD0 raw=0x0000A6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273bd4:
    // 0x273bd4: 0xd7a0  .word       0x0000D7A0                   # add         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273bd8:
    // 0x273bd8: 0x0  nop
    ctx->pc = 0x273bd8u;
    // NOP
label_273bdc:
    // 0x273bdc: 0x0  nop
    ctx->pc = 0x273bdcu;
    // NOP
label_273be0:
    // 0x273be0: 0xa6f0  tge         $zero, $zero, 667
    ctx->pc = 0x273be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273be4:
    // 0x273be4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273be8:
    // 0x273be8: 0x0  nop
    ctx->pc = 0x273be8u;
    // NOP
label_273bec:
    // 0x273bec: 0x0  nop
    ctx->pc = 0x273becu;
    // NOP
label_273bf0:
    // 0x273bf0: 0xa70d  break       0, 668
    ctx->pc = 0x273bf0u;
    runtime->handleBreak(rdram, ctx);
label_273bf4:
    // 0x273bf4: 0x13c30  tge         $zero, $at, 240
    ctx->pc = 0x273bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273bf8:
    // 0x273bf8: 0x0  nop
    ctx->pc = 0x273bf8u;
    // NOP
label_273bfc:
    // 0x273bfc: 0x0  nop
    ctx->pc = 0x273bfcu;
    // NOP
label_273c00:
    // 0x273c00: 0xa735  .word       0x0000A735                   # INVALID     $zero, $zero, -0x58CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273C00 raw=0x0000A735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273c04:
    // 0x273c04: 0x10c50  .word       0x00010C50                   # mfhi        $at # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c04u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_273c08:
    // 0x273c08: 0x0  nop
    ctx->pc = 0x273c08u;
    // NOP
label_273c0c:
    // 0x273c0c: 0x0  nop
    ctx->pc = 0x273c0cu;
    // NOP
label_273c10:
    // 0x273c10: 0xa757  .word       0x0000A757                   # dsrav       $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c10u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273c14:
    // 0x273c14: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_273c18:
    // 0x273c18: 0x0  nop
    ctx->pc = 0x273c18u;
    // NOP
label_273c1c:
    // 0x273c1c: 0x0  nop
    ctx->pc = 0x273c1cu;
    // NOP
label_273c20:
    // 0x273c20: 0xa765  .word       0x0000A765                   # move        $s4, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273c24:
    // 0x273c24: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273c28:
    // 0x273c28: 0x0  nop
    ctx->pc = 0x273c28u;
    // NOP
label_273c2c:
    // 0x273c2c: 0x0  nop
    ctx->pc = 0x273c2cu;
    // NOP
label_273c30:
    // 0x273c30: 0xa77c  dsll32      $s4, $zero, 29
    ctx->pc = 0x273c30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 29));
label_273c34:
    // 0x273c34: 0x161e0  .word       0x000161E0                   # add         $t4, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_273c38:
    // 0x273c38: 0x0  nop
    ctx->pc = 0x273c38u;
    // NOP
label_273c3c:
    // 0x273c3c: 0x0  nop
    ctx->pc = 0x273c3cu;
    // NOP
label_273c40:
    // 0x273c40: 0xa7a9  .word       0x0000A7A9                   # mtsa        $zero # 0000A780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c44:
    // 0x273c44: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273c48:
    // 0x273c48: 0x0  nop
    ctx->pc = 0x273c48u;
    // NOP
label_273c4c:
    // 0x273c4c: 0x0  nop
    ctx->pc = 0x273c4cu;
    // NOP
label_273c50:
    // 0x273c50: 0xa7bf  dsra32      $s4, $zero, 30
    ctx->pc = 0x273c50u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 30));
label_273c54:
    // 0x273c54: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x273c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c58:
    // 0x273c58: 0x0  nop
    ctx->pc = 0x273c58u;
    // NOP
label_273c5c:
    // 0x273c5c: 0x0  nop
    ctx->pc = 0x273c5cu;
    // NOP
label_273c60:
    // 0x273c60: 0xa7da  .word       0x0000A7DA                   # div         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273c64:
    // 0x273c64: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_273c68:
    // 0x273c68: 0x0  nop
    ctx->pc = 0x273c68u;
    // NOP
label_273c6c:
    // 0x273c6c: 0x0  nop
    ctx->pc = 0x273c6cu;
    // NOP
label_273c70:
    // 0x273c70: 0xa7f4  teq         $zero, $zero, 671
    ctx->pc = 0x273c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c74:
    // 0x273c74: 0xa8f0  tge         $zero, $zero, 675
    ctx->pc = 0x273c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c78:
    // 0x273c78: 0x0  nop
    ctx->pc = 0x273c78u;
    // NOP
label_273c7c:
    // 0x273c7c: 0x0  nop
    ctx->pc = 0x273c7cu;
    // NOP
label_273c80:
    // 0x273c80: 0xa80a  movz        $s5, $zero, $zero
    ctx->pc = 0x273c80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273c84:
    // 0x273c84: 0xf550  .word       0x0000F550                   # mfhi        $fp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c84u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_273c88:
    // 0x273c88: 0x0  nop
    ctx->pc = 0x273c88u;
    // NOP
label_273c8c:
    // 0x273c8c: 0x0  nop
    ctx->pc = 0x273c8cu;
    // NOP
label_273c90:
    // 0x273c90: 0xa829  .word       0x0000A829                   # mtsa        $zero # 0000A800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c94:
    // 0x273c94: 0xe0c0  sll         $gp, $zero, 3
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273c98:
    // 0x273c98: 0x0  nop
    ctx->pc = 0x273c98u;
    // NOP
label_273c9c:
    // 0x273c9c: 0x0  nop
    ctx->pc = 0x273c9cu;
    // NOP
label_273ca0:
    // 0x273ca0: 0xa846  .word       0x0000A846                   # srlv        $s5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273ca4:
    // 0x273ca4: 0xe3c0  sll         $gp, $zero, 15
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_273ca8:
    // 0x273ca8: 0x0  nop
    ctx->pc = 0x273ca8u;
    // NOP
label_273cac:
    // 0x273cac: 0x0  nop
    ctx->pc = 0x273cacu;
    // NOP
label_273cb0:
    // 0x273cb0: 0xa863  .word       0x0000A863                   # negu        $s5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cb4:
    // 0x273cb4: 0x111c0  sll         $v0, $at, 7
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_273cb8:
    // 0x273cb8: 0x0  nop
    ctx->pc = 0x273cb8u;
    // NOP
label_273cbc:
    // 0x273cbc: 0x0  nop
    ctx->pc = 0x273cbcu;
    // NOP
label_273cc0:
    // 0x273cc0: 0xa886  .word       0x0000A886                   # srlv        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273cc4:
    // 0x273cc4: 0xd020  add         $k0, $zero, $zero
    ctx->pc = 0x273cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273cc8:
    // 0x273cc8: 0x0  nop
    ctx->pc = 0x273cc8u;
    // NOP
label_273ccc:
    // 0x273ccc: 0x0  nop
    ctx->pc = 0x273cccu;
    // NOP
label_273cd0:
    // 0x273cd0: 0xa8a1  .word       0x0000A8A1                   # addu        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cd4:
    // 0x273cd4: 0x144c0  sll         $t0, $at, 19
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_273cd8:
    // 0x273cd8: 0x0  nop
    ctx->pc = 0x273cd8u;
    // NOP
label_273cdc:
    // 0x273cdc: 0x0  nop
    ctx->pc = 0x273cdcu;
    // NOP
label_273ce0:
    // 0x273ce0: 0xa8ca  .word       0x0000A8CA                   # movz        $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273ce4:
    // 0x273ce4: 0x9380  sll         $s2, $zero, 14
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_273ce8:
    // 0x273ce8: 0x0  nop
    ctx->pc = 0x273ce8u;
    // NOP
label_273cec:
    // 0x273cec: 0x0  nop
    ctx->pc = 0x273cecu;
    // NOP
label_273cf0:
    // 0x273cf0: 0xa8dd  .word       0x0000A8DD                   # dmultu      $zero, $zero # 0000A8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273CF0 raw=0x0000A8DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273cf4:
    // 0x273cf4: 0xe7f0  tge         $zero, $zero, 927
    ctx->pc = 0x273cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273cf8:
    // 0x273cf8: 0x0  nop
    ctx->pc = 0x273cf8u;
    // NOP
label_273cfc:
    // 0x273cfc: 0x0  nop
    ctx->pc = 0x273cfcu;
    // NOP
label_273d00:
    // 0x273d00: 0xa8fa  dsrl        $s5, $zero, 3
    ctx->pc = 0x273d00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> 3);
label_273d04:
    // 0x273d04: 0x16450  .word       0x00016450                   # mfhi        $t4 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273d08:
    // 0x273d08: 0x0  nop
    ctx->pc = 0x273d08u;
    // NOP
label_273d0c:
    // 0x273d0c: 0x0  nop
    ctx->pc = 0x273d0cu;
    // NOP
label_273d10:
    // 0x273d10: 0xa927  .word       0x0000A927                   # not         $s5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d10u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d14:
    // 0x273d14: 0x118d0  .word       0x000118D0                   # mfhi        $v1 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_273d18:
    // 0x273d18: 0x0  nop
    ctx->pc = 0x273d18u;
    // NOP
label_273d1c:
    // 0x273d1c: 0x0  nop
    ctx->pc = 0x273d1cu;
    // NOP
label_273d20:
    // 0x273d20: 0xa94b  .word       0x0000A94B                   # movn        $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d24:
    // 0x273d24: 0xdd10  .word       0x0000DD10                   # mfhi        $k1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d24u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273d28:
    // 0x273d28: 0x0  nop
    ctx->pc = 0x273d28u;
    // NOP
label_273d2c:
    // 0x273d2c: 0x0  nop
    ctx->pc = 0x273d2cu;
    // NOP
label_273d30:
    // 0x273d30: 0xa967  .word       0x0000A967                   # not         $s5, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d30u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d34:
    // 0x273d34: 0x11470  tge         $zero, $at, 81
    ctx->pc = 0x273d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273d38:
    // 0x273d38: 0x0  nop
    ctx->pc = 0x273d38u;
    // NOP
label_273d3c:
    // 0x273d3c: 0x0  nop
    ctx->pc = 0x273d3cu;
    // NOP
label_273d40:
    // 0x273d40: 0xa98a  .word       0x0000A98A                   # movz        $s5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d44:
    // 0x273d44: 0x16080  sll         $t4, $at, 2
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_273d48:
    // 0x273d48: 0x0  nop
    ctx->pc = 0x273d48u;
    // NOP
label_273d4c:
    // 0x273d4c: 0x0  nop
    ctx->pc = 0x273d4cu;
    // NOP
label_273d50:
    // 0x273d50: 0xa9b7  .word       0x0000A9B7                   # INVALID     $zero, $zero, -0x5649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273D50 raw=0x0000A9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d54:
    // 0x273d54: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x273d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d58:
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
label_273d5c:
    // 0x273d5c: 0x0  nop
    ctx->pc = 0x273d5cu;
    // NOP
label_273d60:
    // 0x273d60: 0xa9d7  .word       0x0000A9D7                   # dsrav       $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d60u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273d64:
    // 0x273d64: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273d68:
    // 0x273d68: 0x0  nop
    ctx->pc = 0x273d68u;
    // NOP
label_273d6c:
    // 0x273d6c: 0x0  nop
    ctx->pc = 0x273d6cu;
    // NOP
label_273d70:
    // 0x273d70: 0xa9f0  tge         $zero, $zero, 679
    ctx->pc = 0x273d70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d74:
    // 0x273d74: 0xee60  .word       0x0000EE60                   # add         $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273d78:
    // 0x273d78: 0x0  nop
    ctx->pc = 0x273d78u;
    // NOP
label_273d7c:
    // 0x273d7c: 0x0  nop
    ctx->pc = 0x273d7cu;
    // NOP
label_273d80:
    // 0x273d80: 0xaa0e  .word       0x0000AA0E                   # INVALID     $zero, $zero, -0x55F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x273D80 raw=0x0000AA0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d84:
    // 0x273d84: 0xab90  .word       0x0000AB90                   # mfhi        $s5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273d88:
    // 0x273d88: 0x0  nop
    ctx->pc = 0x273d88u;
    // NOP
label_273d8c:
    // 0x273d8c: 0x0  nop
    ctx->pc = 0x273d8cu;
    // NOP
label_273d90:
    // 0x273d90: 0xaa24  .word       0x0000AA24                   # and         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273d94:
    // 0x273d94: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273d98:
    // 0x273d98: 0x0  nop
    ctx->pc = 0x273d98u;
    // NOP
label_273d9c:
    // 0x273d9c: 0x0  nop
    ctx->pc = 0x273d9cu;
    // NOP
label_273da0:
    // 0x273da0: 0xaa3b  dsra        $s5, $zero, 8
    ctx->pc = 0x273da0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> 8);
label_273da4:
    // 0x273da4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273da4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273da8:
    // 0x273da8: 0x0  nop
    ctx->pc = 0x273da8u;
    // NOP
label_273dac:
    // 0x273dac: 0x0  nop
    ctx->pc = 0x273dacu;
    // NOP
label_273db0:
    // 0x273db0: 0xaa48  .word       0x0000AA48                   # jr          $zero # 0000AA40 <InstrIdType: CPU_SPECIAL>
label_273db4:
    if (ctx->pc == 0x273DB4u) {
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DB8u;
        goto label_273db8;
    }
    ctx->pc = 0x273DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0x0  nop
    ctx->pc = 0x273db8u;
    // NOP
label_273dbc:
    // 0x273dbc: 0x0  nop
    ctx->pc = 0x273dbcu;
    // NOP
label_273dc0:
    // 0x273dc0: 0xaa64  .word       0x0000AA64                   # and         $s5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273dc4:
    // 0x273dc4: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273dc8:
    // 0x273dc8: 0x0  nop
    ctx->pc = 0x273dc8u;
    // NOP
label_273dcc:
    // 0x273dcc: 0x0  nop
    ctx->pc = 0x273dccu;
    // NOP
label_273dd0:
    // 0x273dd0: 0xaa7c  dsll32      $s5, $zero, 9
    ctx->pc = 0x273dd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 9));
label_273dd4:
    // 0x273dd4: 0xe6e0  .word       0x0000E6E0                   # add         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_273dd8:
    // 0x273dd8: 0x0  nop
    ctx->pc = 0x273dd8u;
    // NOP
label_273ddc:
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
label_273de0:
    // 0x273de0: 0xaa99  .word       0x0000AA99                   # multu       $zero, $zero # 0000AA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_273de4:
    // 0x273de4: 0xe610  .word       0x0000E610                   # mfhi        $gp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273de8:
    // 0x273de8: 0x0  nop
    ctx->pc = 0x273de8u;
    // NOP
label_273dec:
    // 0x273dec: 0x0  nop
    ctx->pc = 0x273decu;
    // NOP
label_273df0:
    // 0x273df0: 0xaab6  tne         $zero, $zero, 682
    ctx->pc = 0x273df0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df4:
    // 0x273df4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x273df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df8:
    // 0x273df8: 0x0  nop
    ctx->pc = 0x273df8u;
    // NOP
label_273dfc:
    // 0x273dfc: 0x0  nop
    ctx->pc = 0x273dfcu;
    // NOP
label_273e00:
    // 0x273e00: 0xaac6  .word       0x0000AAC6                   # srlv        $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e04:
    // 0x273e04: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273e08:
    // 0x273e08: 0x0  nop
    ctx->pc = 0x273e08u;
    // NOP
label_273e0c:
    // 0x273e0c: 0x0  nop
    ctx->pc = 0x273e0cu;
    // NOP
label_273e10:
    // 0x273e10: 0xaae4  .word       0x0000AAE4                   # and         $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273e14:
    // 0x273e14: 0xfbe0  .word       0x0000FBE0                   # add         $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_273e18:
    // 0x273e18: 0x0  nop
    ctx->pc = 0x273e18u;
    // NOP
label_273e1c:
    // 0x273e1c: 0x0  nop
    ctx->pc = 0x273e1cu;
    // NOP
label_273e20:
    // 0x273e20: 0xab04  .word       0x0000AB04                   # sllv        $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273e24:
    // 0x273e24: 0xf470  tge         $zero, $zero, 977
    ctx->pc = 0x273e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e28:
    // 0x273e28: 0x0  nop
    ctx->pc = 0x273e28u;
    // NOP
label_273e2c:
    // 0x273e2c: 0x0  nop
    ctx->pc = 0x273e2cu;
    // NOP
label_273e30:
    // 0x273e30: 0xab23  .word       0x0000AB23                   # negu        $s5, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273e34:
    // 0x273e34: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273e38:
    // 0x273e38: 0x0  nop
    ctx->pc = 0x273e38u;
    // NOP
label_273e3c:
    // 0x273e3c: 0x0  nop
    ctx->pc = 0x273e3cu;
    // NOP
label_273e40:
    // 0x273e40: 0xab39  .word       0x0000AB39                   # INVALID     $zero, $zero, -0x54C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273E40 raw=0x0000AB39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e44:
    // 0x273e44: 0x86f0  tge         $zero, $zero, 539
    ctx->pc = 0x273e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273e48:
    // 0x273e48: 0x0  nop
    ctx->pc = 0x273e48u;
    // NOP
label_273e4c:
    // 0x273e4c: 0x0  nop
    ctx->pc = 0x273e4cu;
    // NOP
label_273e50:
    // 0x273e50: 0xab4a  .word       0x0000AB4A                   # movz        $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e54:
    // 0x273e54: 0xaba0  .word       0x0000ABA0                   # add         $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e58:
    // 0x273e58: 0x0  nop
    ctx->pc = 0x273e58u;
    // NOP
label_273e5c:
    // 0x273e5c: 0x0  nop
    ctx->pc = 0x273e5cu;
    // NOP
label_273e60:
    // 0x273e60: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e64:
    // 0x273e64: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273e68:
    // 0x273e68: 0x0  nop
    ctx->pc = 0x273e68u;
    // NOP
label_273e6c:
    // 0x273e6c: 0x0  nop
    ctx->pc = 0x273e6cu;
    // NOP
label_273e70:
    // 0x273e70: 0xab75  .word       0x0000AB75                   # INVALID     $zero, $zero, -0x548B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273E70 raw=0x0000AB75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273e74:
    // 0x273e74: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273e78:
    // 0x273e78: 0x0  nop
    ctx->pc = 0x273e78u;
    // NOP
label_273e7c:
    // 0x273e7c: 0x0  nop
    ctx->pc = 0x273e7cu;
    // NOP
label_273e80:
    // 0x273e80: 0xab8b  .word       0x0000AB8B                   # movn        $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e80u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273e84:
    // 0x273e84: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273e88:
    // 0x273e88: 0x0  nop
    ctx->pc = 0x273e88u;
    // NOP
label_273e8c:
    // 0x273e8c: 0x0  nop
    ctx->pc = 0x273e8cu;
    // NOP
label_273e90:
    // 0x273e90: 0xaba5  .word       0x0000ABA5                   # move        $s5, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273e94:
    // 0x273e94: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_273e98:
    // 0x273e98: 0x0  nop
    ctx->pc = 0x273e98u;
    // NOP
label_273e9c:
    // 0x273e9c: 0x0  nop
    ctx->pc = 0x273e9cu;
    // NOP
label_273ea0:
    // 0x273ea0: 0xabbd  .word       0x0000ABBD                   # INVALID     $zero, $zero, -0x5443 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273EA0 raw=0x0000ABBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ea4:
    // 0x273ea4: 0x9ed0  .word       0x00009ED0                   # mfhi        $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ea4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273ea8:
    // 0x273ea8: 0x0  nop
    ctx->pc = 0x273ea8u;
    // NOP
label_273eac:
    // 0x273eac: 0x0  nop
    ctx->pc = 0x273eacu;
    // NOP
label_273eb0:
    // 0x273eb0: 0xabd1  .word       0x0000ABD1                   # mthi        $zero # 0000ABC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_273eb4:
    // 0x273eb4: 0xe4d0  .word       0x0000E4D0                   # mfhi        $gp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273eb4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273eb8:
    // 0x273eb8: 0x0  nop
    ctx->pc = 0x273eb8u;
    // NOP
label_273ebc:
    // 0x273ebc: 0x0  nop
    ctx->pc = 0x273ebcu;
    // NOP
label_273ec0:
    // 0x273ec0: 0xabee  .word       0x0000ABEE                   # dsub        $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273ec4:
    // 0x273ec4: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273ec8:
    // 0x273ec8: 0x0  nop
    ctx->pc = 0x273ec8u;
    // NOP
label_273ecc:
    // 0x273ecc: 0x0  nop
    ctx->pc = 0x273eccu;
    // NOP
label_273ed0:
    // 0x273ed0: 0xac08  .word       0x0000AC08                   # jr          $zero # 0000AC00 <InstrIdType: CPU_SPECIAL>
label_273ed4:
    if (ctx->pc == 0x273ED4u) {
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED8u;
        goto label_273ed8;
    }
    ctx->pc = 0x273ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0xba30  tge         $zero, $zero, 744 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273ED8u;
label_273ed8:
    // 0x273ed8: 0x0  nop
    ctx->pc = 0x273ed8u;
    // NOP
label_273edc:
    // 0x273edc: 0x0  nop
    ctx->pc = 0x273edcu;
    // NOP
label_273ee0:
    // 0x273ee0: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273ee4:
    // 0x273ee4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x273ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273ee8:
    // 0x273ee8: 0x0  nop
    ctx->pc = 0x273ee8u;
    // NOP
label_273eec:
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
label_273ef0:
    // 0x273ef0: 0xac33  tltu        $zero, $zero, 688
    ctx->pc = 0x273ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef4:
    // 0x273ef4: 0xb7b0  tge         $zero, $zero, 734
    ctx->pc = 0x273ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ef8:
    // 0x273ef8: 0x0  nop
    ctx->pc = 0x273ef8u;
    // NOP
label_273efc:
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
label_273f00:
    // 0x273f00: 0xac4a  .word       0x0000AC4A                   # movz        $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273f04:
    // 0x273f04: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f08:
    // 0x273f08: 0x0  nop
    ctx->pc = 0x273f08u;
    // NOP
label_273f0c:
    // 0x273f0c: 0x0  nop
    ctx->pc = 0x273f0cu;
    // NOP
label_273f10:
    // 0x273f10: 0xac65  .word       0x0000AC65                   # move        $s5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273f14:
    // 0x273f14: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x273f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f18:
    // 0x273f18: 0x0  nop
    ctx->pc = 0x273f18u;
    // NOP
label_273f1c:
    // 0x273f1c: 0x0  nop
    ctx->pc = 0x273f1cu;
    // NOP
label_273f20:
    // 0x273f20: 0xac78  dsll        $s5, $zero, 17
    ctx->pc = 0x273f20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 17);
label_273f24:
    // 0x273f24: 0xd6a0  .word       0x0000D6A0                   # add         $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273f28:
    // 0x273f28: 0x0  nop
    ctx->pc = 0x273f28u;
    // NOP
label_273f2c:
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
label_273f30:
    // 0x273f30: 0xac93  .word       0x0000AC93                   # mtlo        $zero # 0000AC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f30u;
    ctx->lo = GPR_U64(ctx, 0);
label_273f34:
    // 0x273f34: 0x15350  .word       0x00015350                   # mfhi        $t2 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_273f38:
    // 0x273f38: 0x0  nop
    ctx->pc = 0x273f38u;
    // NOP
label_273f3c:
    // 0x273f3c: 0x0  nop
    ctx->pc = 0x273f3cu;
    // NOP
label_273f40:
    // 0x273f40: 0xacbe  dsrl32      $s5, $zero, 18
    ctx->pc = 0x273f40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 18));
label_273f44:
    // 0x273f44: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_273f48:
    // 0x273f48: 0x0  nop
    ctx->pc = 0x273f48u;
    // NOP
label_273f4c:
    // 0x273f4c: 0x0  nop
    ctx->pc = 0x273f4cu;
    // NOP
label_273f50:
    // 0x273f50: 0xacda  .word       0x0000ACDA                   # div         $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273f54:
    // 0x273f54: 0xee20  .word       0x0000EE20                   # add         $sp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273f58:
    // 0x273f58: 0x0  nop
    ctx->pc = 0x273f58u;
    // NOP
label_273f5c:
    // 0x273f5c: 0x0  nop
    ctx->pc = 0x273f5cu;
    // NOP
label_273f60:
    // 0x273f60: 0xacf8  dsll        $s5, $zero, 19
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 19);
label_273f64:
    // 0x273f64: 0x13f70  tge         $zero, $at, 253
    ctx->pc = 0x273f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273f68:
    // 0x273f68: 0x0  nop
    ctx->pc = 0x273f68u;
    // NOP
label_273f6c:
    // 0x273f6c: 0x0  nop
    ctx->pc = 0x273f6cu;
    // NOP
label_273f70:
    // 0x273f70: 0xad20  .word       0x0000AD20                   # add         $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273f74:
    // 0x273f74: 0xa430  tge         $zero, $zero, 656
    ctx->pc = 0x273f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273f78:
    // 0x273f78: 0x0  nop
    ctx->pc = 0x273f78u;
    // NOP
label_273f7c:
    // 0x273f7c: 0x0  nop
    ctx->pc = 0x273f7cu;
    // NOP
label_273f80:
    // 0x273f80: 0xad35  .word       0x0000AD35                   # INVALID     $zero, $zero, -0x52CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273F80 raw=0x0000AD35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273f84:
    // 0x273f84: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_273f88:
    // 0x273f88: 0x0  nop
    ctx->pc = 0x273f88u;
    // NOP
label_273f8c:
    // 0x273f8c: 0x0  nop
    ctx->pc = 0x273f8cu;
    // NOP
label_273f90:
    // 0x273f90: 0xad48  .word       0x0000AD48                   # jr          $zero # 0000AD40 <InstrIdType: CPU_SPECIAL>
label_273f94:
    if (ctx->pc == 0x273F94u) {
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F98u;
        goto label_273f98;
    }
    ctx->pc = 0x273F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273F98u;
label_273f98:
    // 0x273f98: 0x0  nop
    ctx->pc = 0x273f98u;
    // NOP
label_273f9c:
    // 0x273f9c: 0x0  nop
    ctx->pc = 0x273f9cu;
    // NOP
label_273fa0:
    // 0x273fa0: 0xad57  .word       0x0000AD57                   # dsrav       $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fa0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273fa4:
    // 0x273fa4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x273fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fa8:
    // 0x273fa8: 0x0  nop
    ctx->pc = 0x273fa8u;
    // NOP
label_273fac:
    // 0x273fac: 0x0  nop
    ctx->pc = 0x273facu;
    // NOP
label_273fb0:
    // 0x273fb0: 0xad6e  .word       0x0000AD6E                   # dsub        $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fb4:
    // 0x273fb4: 0x126c0  sll         $a0, $at, 27
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_273fb8:
    // 0x273fb8: 0x0  nop
    ctx->pc = 0x273fb8u;
    // NOP
label_273fbc:
    // 0x273fbc: 0x0  nop
    ctx->pc = 0x273fbcu;
    // NOP
label_273fc0:
    // 0x273fc0: 0xad93  .word       0x0000AD93                   # mtlo        $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fc0u;
    ctx->lo = GPR_U64(ctx, 0);
label_273fc4:
    // 0x273fc4: 0xd170  tge         $zero, $zero, 837
    ctx->pc = 0x273fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273fc8:
    // 0x273fc8: 0x0  nop
    ctx->pc = 0x273fc8u;
    // NOP
label_273fcc:
    // 0x273fcc: 0x0  nop
    ctx->pc = 0x273fccu;
    // NOP
label_273fd0:
    // 0x273fd0: 0xadae  .word       0x0000ADAE                   # dsub        $s5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_273fd4:
    // 0x273fd4: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x273fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_273fd8:
    // 0x273fd8: 0x0  nop
    ctx->pc = 0x273fd8u;
    // NOP
label_273fdc:
    // 0x273fdc: 0x0  nop
    ctx->pc = 0x273fdcu;
    // NOP
label_273fe0:
    // 0x273fe0: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_273fe4:
    // 0x273fe4: 0xecd0  .word       0x0000ECD0                   # mfhi        $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273fe4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_273fe8:
    // 0x273fe8: 0x0  nop
    ctx->pc = 0x273fe8u;
    // NOP
label_273fec:
    // 0x273fec: 0x0  nop
    ctx->pc = 0x273fecu;
    // NOP
label_273ff0:
    // 0x273ff0: 0xadde  .word       0x0000ADDE                   # ddiv        $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x273FF0 raw=0x0000ADDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273ff4:
    // 0x273ff4: 0x9100  sll         $s2, $zero, 4
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ff8:
    // 0x273ff8: 0x0  nop
    ctx->pc = 0x273ff8u;
    // NOP
label_273ffc:
    // 0x273ffc: 0x0  nop
    ctx->pc = 0x273ffcu;
    // NOP
label_274000:
    // 0x274000: 0xadf1  tgeu        $zero, $zero, 695
    ctx->pc = 0x274000u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274004:
    // 0x274004: 0xc170  tge         $zero, $zero, 773
    ctx->pc = 0x274004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274008:
    // 0x274008: 0x0  nop
    ctx->pc = 0x274008u;
    // NOP
label_27400c:
    // 0x27400c: 0x0  nop
    ctx->pc = 0x27400cu;
    // NOP
label_274010:
    // 0x274010: 0xae0a  .word       0x0000AE0A                   # movz        $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274010u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274014:
    // 0x274014: 0xbb50  .word       0x0000BB50                   # mfhi        $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274014u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274018:
    // 0x274018: 0x0  nop
    ctx->pc = 0x274018u;
    // NOP
label_27401c:
    // 0x27401c: 0x0  nop
    ctx->pc = 0x27401cu;
    // NOP
label_274020:
    // 0x274020: 0xae22  .word       0x0000AE22                   # neg         $s5, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_274024:
    // 0x274024: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_274028:
    // 0x274028: 0x0  nop
    ctx->pc = 0x274028u;
    // NOP
label_27402c:
    // 0x27402c: 0x0  nop
    ctx->pc = 0x27402cu;
    // NOP
label_274030:
    // 0x274030: 0xae40  sll         $s5, $zero, 25
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274034:
    // 0x274034: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274038:
    // 0x274038: 0x0  nop
    ctx->pc = 0x274038u;
    // NOP
label_27403c:
    // 0x27403c: 0x0  nop
    ctx->pc = 0x27403cu;
    // NOP
label_274040:
    // 0x274040: 0xae4a  .word       0x0000AE4A                   # movz        $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274040u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_274044:
    // 0x274044: 0x168d0  .word       0x000168D0                   # mfhi        $t5 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274044u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_274048:
    // 0x274048: 0x0  nop
    ctx->pc = 0x274048u;
    // NOP
label_27404c:
    // 0x27404c: 0x0  nop
    ctx->pc = 0x27404cu;
    // NOP
label_274050:
    // 0x274050: 0xae78  dsll        $s5, $zero, 25
    ctx->pc = 0x274050u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 25);
label_274054:
    // 0x274054: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274054u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_274058:
    // 0x274058: 0x0  nop
    ctx->pc = 0x274058u;
    // NOP
label_27405c:
    // 0x27405c: 0x0  nop
    ctx->pc = 0x27405cu;
    // NOP
label_274060:
    // 0x274060: 0xae8d  break       0, 698
    ctx->pc = 0x274060u;
    runtime->handleBreak(rdram, ctx);
label_274064:
    // 0x274064: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274068:
    // 0x274068: 0x0  nop
    ctx->pc = 0x274068u;
    // NOP
label_27406c:
    // 0x27406c: 0x0  nop
    ctx->pc = 0x27406cu;
    // NOP
label_274070:
    // 0x274070: 0xae98  .word       0x0000AE98                   # mult        $s5, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x274070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_274074:
    // 0x274074: 0x71f0  tge         $zero, $zero, 455
    ctx->pc = 0x274074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274078:
    // 0x274078: 0x0  nop
    ctx->pc = 0x274078u;
    // NOP
label_27407c:
    // 0x27407c: 0x0  nop
    ctx->pc = 0x27407cu;
    // NOP
label_274080:
    // 0x274080: 0xaea7  .word       0x0000AEA7                   # not         $s5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274080u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_274084:
    // 0x274084: 0xbcd0  .word       0x0000BCD0                   # mfhi        $s7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274084u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_274088:
    // 0x274088: 0x0  nop
    ctx->pc = 0x274088u;
    // NOP
label_27408c:
    // 0x27408c: 0x0  nop
    ctx->pc = 0x27408cu;
    // NOP
label_274090:
    // 0x274090: 0xaebf  dsra32      $s5, $zero, 26
    ctx->pc = 0x274090u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (32 + 26));
label_274094:
    // 0x274094: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274098:
    // 0x274098: 0x0  nop
    ctx->pc = 0x274098u;
    // NOP
label_27409c:
    // 0x27409c: 0x0  nop
    ctx->pc = 0x27409cu;
    // NOP
label_2740a0:
    // 0x2740a0: 0xaedc  .word       0x0000AEDC                   # dmult       $zero, $zero # 0000AEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2740A0 raw=0x0000AEDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740a4:
    // 0x2740a4: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2740a8:
    // 0x2740a8: 0x0  nop
    ctx->pc = 0x2740a8u;
    // NOP
label_2740ac:
    // 0x2740ac: 0x0  nop
    ctx->pc = 0x2740acu;
    // NOP
label_2740b0:
    // 0x2740b0: 0xaef9  .word       0x0000AEF9                   # INVALID     $zero, $zero, -0x5107 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2740B0 raw=0x0000AEF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2740b4:
    // 0x2740b4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2740b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740b8:
    // 0x2740b8: 0x0  nop
    ctx->pc = 0x2740b8u;
    // NOP
label_2740bc:
    // 0x2740bc: 0x0  nop
    ctx->pc = 0x2740bcu;
    // NOP
label_2740c0:
    // 0x2740c0: 0xaf04  .word       0x0000AF04                   # sllv        $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2740c4:
    // 0x2740c4: 0xaff0  tge         $zero, $zero, 703
    ctx->pc = 0x2740c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740c8:
    // 0x2740c8: 0x0  nop
    ctx->pc = 0x2740c8u;
    // NOP
label_2740cc:
    // 0x2740cc: 0x0  nop
    ctx->pc = 0x2740ccu;
    // NOP
label_2740d0:
    // 0x2740d0: 0xaf1a  .word       0x0000AF1A                   # div         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2740d4:
    // 0x2740d4: 0xa3f0  tge         $zero, $zero, 655
    ctx->pc = 0x2740d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740d8:
    // 0x2740d8: 0x0  nop
    ctx->pc = 0x2740d8u;
    // NOP
label_2740dc:
    // 0x2740dc: 0x0  nop
    ctx->pc = 0x2740dcu;
    // NOP
label_2740e0:
    // 0x2740e0: 0xaf2f  .word       0x0000AF2F                   # dsubu       $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2740e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2740e4:
    // 0x2740e4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2740e8:
    // 0x2740e8: 0x0  nop
    ctx->pc = 0x2740e8u;
    // NOP
label_2740ec:
    // 0x2740ec: 0x0  nop
    ctx->pc = 0x2740ecu;
    // NOP
label_2740f0:
    // 0x2740f0: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2740f4:
    // 0x2740f4: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x2740f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2740f8:
    // 0x2740f8: 0x0  nop
    ctx->pc = 0x2740f8u;
    // NOP
label_2740fc:
    // 0x2740fc: 0x0  nop
    ctx->pc = 0x2740fcu;
    // NOP
label_274100:
    // 0x274100: 0xaf51  .word       0x0000AF51                   # mthi        $zero # 0000AF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274100u;
    ctx->hi = GPR_U64(ctx, 0);
label_274104:
    // 0x274104: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274108:
    // 0x274108: 0x0  nop
    ctx->pc = 0x274108u;
    // NOP
label_27410c:
    // 0x27410c: 0x0  nop
    ctx->pc = 0x27410cu;
    // NOP
label_274110:
    // 0x274110: 0xaf71  tgeu        $zero, $zero, 701
    ctx->pc = 0x274110u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274114:
    // 0x274114: 0x10a10  .word       0x00010A10                   # mfhi        $at # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274114u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_274118:
    // 0x274118: 0x0  nop
    ctx->pc = 0x274118u;
    // NOP
label_27411c:
    // 0x27411c: 0x0  nop
    ctx->pc = 0x27411cu;
    // NOP
label_274120:
    // 0x274120: 0xaf93  .word       0x0000AF93                   # mtlo        $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274120u;
    ctx->lo = GPR_U64(ctx, 0);
label_274124:
    // 0x274124: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x274124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274128:
    // 0x274128: 0x0  nop
    ctx->pc = 0x274128u;
    // NOP
label_27412c:
    // 0x27412c: 0x0  nop
    ctx->pc = 0x27412cu;
    // NOP
label_274130:
    // 0x274130: 0xaf9d  .word       0x0000AF9D                   # dmultu      $zero, $zero # 0000AF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274130 raw=0x0000AF9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274134:
    // 0x274134: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    ctx->pc = 0x274138u;
    return;
}
