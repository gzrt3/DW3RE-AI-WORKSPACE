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


void FUN_0017d410_part387(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x239bb0u: goto label_239bb0;
        case 0x239bb4u: goto label_239bb4;
        case 0x239bb8u: goto label_239bb8;
        case 0x239bbcu: goto label_239bbc;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc4u: goto label_239bc4;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bccu: goto label_239bcc;
        case 0x239bd0u: goto label_239bd0;
        case 0x239bd4u: goto label_239bd4;
        case 0x239bd8u: goto label_239bd8;
        case 0x239bdcu: goto label_239bdc;
        case 0x239be0u: goto label_239be0;
        case 0x239be4u: goto label_239be4;
        case 0x239be8u: goto label_239be8;
        case 0x239becu: goto label_239bec;
        case 0x239bf0u: goto label_239bf0;
        case 0x239bf4u: goto label_239bf4;
        case 0x239bf8u: goto label_239bf8;
        case 0x239bfcu: goto label_239bfc;
        case 0x239c00u: goto label_239c00;
        case 0x239c04u: goto label_239c04;
        case 0x239c08u: goto label_239c08;
        case 0x239c0cu: goto label_239c0c;
        case 0x239c10u: goto label_239c10;
        case 0x239c14u: goto label_239c14;
        case 0x239c18u: goto label_239c18;
        case 0x239c1cu: goto label_239c1c;
        case 0x239c20u: goto label_239c20;
        case 0x239c24u: goto label_239c24;
        case 0x239c28u: goto label_239c28;
        case 0x239c2cu: goto label_239c2c;
        case 0x239c30u: goto label_239c30;
        case 0x239c34u: goto label_239c34;
        case 0x239c38u: goto label_239c38;
        case 0x239c3cu: goto label_239c3c;
        case 0x239c40u: goto label_239c40;
        case 0x239c44u: goto label_239c44;
        case 0x239c48u: goto label_239c48;
        case 0x239c4cu: goto label_239c4c;
        case 0x239c50u: goto label_239c50;
        case 0x239c54u: goto label_239c54;
        case 0x239c58u: goto label_239c58;
        case 0x239c5cu: goto label_239c5c;
        case 0x239c60u: goto label_239c60;
        case 0x239c64u: goto label_239c64;
        case 0x239c68u: goto label_239c68;
        case 0x239c6cu: goto label_239c6c;
        case 0x239c70u: goto label_239c70;
        case 0x239c74u: goto label_239c74;
        case 0x239c78u: goto label_239c78;
        case 0x239c7cu: goto label_239c7c;
        case 0x239c80u: goto label_239c80;
        case 0x239c84u: goto label_239c84;
        case 0x239c88u: goto label_239c88;
        case 0x239c8cu: goto label_239c8c;
        case 0x239c90u: goto label_239c90;
        case 0x239c94u: goto label_239c94;
        case 0x239c98u: goto label_239c98;
        case 0x239c9cu: goto label_239c9c;
        case 0x239ca0u: goto label_239ca0;
        case 0x239ca4u: goto label_239ca4;
        case 0x239ca8u: goto label_239ca8;
        case 0x239cacu: goto label_239cac;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cb4u: goto label_239cb4;
        case 0x239cb8u: goto label_239cb8;
        case 0x239cbcu: goto label_239cbc;
        case 0x239cc0u: goto label_239cc0;
        case 0x239cc4u: goto label_239cc4;
        case 0x239cc8u: goto label_239cc8;
        case 0x239cccu: goto label_239ccc;
        case 0x239cd0u: goto label_239cd0;
        case 0x239cd4u: goto label_239cd4;
        case 0x239cd8u: goto label_239cd8;
        case 0x239cdcu: goto label_239cdc;
        case 0x239ce0u: goto label_239ce0;
        case 0x239ce4u: goto label_239ce4;
        case 0x239ce8u: goto label_239ce8;
        case 0x239cecu: goto label_239cec;
        case 0x239cf0u: goto label_239cf0;
        case 0x239cf4u: goto label_239cf4;
        case 0x239cf8u: goto label_239cf8;
        case 0x239cfcu: goto label_239cfc;
        case 0x239d00u: goto label_239d00;
        case 0x239d04u: goto label_239d04;
        case 0x239d08u: goto label_239d08;
        case 0x239d0cu: goto label_239d0c;
        case 0x239d10u: goto label_239d10;
        case 0x239d14u: goto label_239d14;
        case 0x239d18u: goto label_239d18;
        case 0x239d1cu: goto label_239d1c;
        case 0x239d20u: goto label_239d20;
        case 0x239d24u: goto label_239d24;
        case 0x239d28u: goto label_239d28;
        case 0x239d2cu: goto label_239d2c;
        case 0x239d30u: goto label_239d30;
        case 0x239d34u: goto label_239d34;
        case 0x239d38u: goto label_239d38;
        case 0x239d3cu: goto label_239d3c;
        case 0x239d40u: goto label_239d40;
        case 0x239d44u: goto label_239d44;
        case 0x239d48u: goto label_239d48;
        case 0x239d4cu: goto label_239d4c;
        case 0x239d50u: goto label_239d50;
        case 0x239d54u: goto label_239d54;
        case 0x239d58u: goto label_239d58;
        case 0x239d5cu: goto label_239d5c;
        case 0x239d60u: goto label_239d60;
        case 0x239d64u: goto label_239d64;
        case 0x239d68u: goto label_239d68;
        case 0x239d6cu: goto label_239d6c;
        case 0x239d70u: goto label_239d70;
        case 0x239d74u: goto label_239d74;
        case 0x239d78u: goto label_239d78;
        case 0x239d7cu: goto label_239d7c;
        case 0x239d80u: goto label_239d80;
        case 0x239d84u: goto label_239d84;
        case 0x239d88u: goto label_239d88;
        case 0x239d8cu: goto label_239d8c;
        case 0x239d90u: goto label_239d90;
        case 0x239d94u: goto label_239d94;
        case 0x239d98u: goto label_239d98;
        case 0x239d9cu: goto label_239d9c;
        case 0x239da0u: goto label_239da0;
        case 0x239da4u: goto label_239da4;
        case 0x239da8u: goto label_239da8;
        case 0x239dacu: goto label_239dac;
        case 0x239db0u: goto label_239db0;
        case 0x239db4u: goto label_239db4;
        case 0x239db8u: goto label_239db8;
        case 0x239dbcu: goto label_239dbc;
        case 0x239dc0u: goto label_239dc0;
        case 0x239dc4u: goto label_239dc4;
        case 0x239dc8u: goto label_239dc8;
        case 0x239dccu: goto label_239dcc;
        case 0x239dd0u: goto label_239dd0;
        case 0x239dd4u: goto label_239dd4;
        case 0x239dd8u: goto label_239dd8;
        case 0x239ddcu: goto label_239ddc;
        case 0x239de0u: goto label_239de0;
        case 0x239de4u: goto label_239de4;
        case 0x239de8u: goto label_239de8;
        case 0x239decu: goto label_239dec;
        case 0x239df0u: goto label_239df0;
        case 0x239df4u: goto label_239df4;
        case 0x239df8u: goto label_239df8;
        case 0x239dfcu: goto label_239dfc;
        case 0x239e00u: goto label_239e00;
        case 0x239e04u: goto label_239e04;
        case 0x239e08u: goto label_239e08;
        case 0x239e0cu: goto label_239e0c;
        case 0x239e10u: goto label_239e10;
        case 0x239e14u: goto label_239e14;
        case 0x239e18u: goto label_239e18;
        case 0x239e1cu: goto label_239e1c;
        case 0x239e20u: goto label_239e20;
        case 0x239e24u: goto label_239e24;
        case 0x239e28u: goto label_239e28;
        case 0x239e2cu: goto label_239e2c;
        case 0x239e30u: goto label_239e30;
        case 0x239e34u: goto label_239e34;
        case 0x239e38u: goto label_239e38;
        case 0x239e3cu: goto label_239e3c;
        case 0x239e40u: goto label_239e40;
        case 0x239e44u: goto label_239e44;
        case 0x239e48u: goto label_239e48;
        case 0x239e4cu: goto label_239e4c;
        case 0x239e50u: goto label_239e50;
        case 0x239e54u: goto label_239e54;
        case 0x239e58u: goto label_239e58;
        case 0x239e5cu: goto label_239e5c;
        case 0x239e60u: goto label_239e60;
        case 0x239e64u: goto label_239e64;
        case 0x239e68u: goto label_239e68;
        case 0x239e6cu: goto label_239e6c;
        case 0x239e70u: goto label_239e70;
        case 0x239e74u: goto label_239e74;
        case 0x239e78u: goto label_239e78;
        case 0x239e7cu: goto label_239e7c;
        case 0x239e80u: goto label_239e80;
        case 0x239e84u: goto label_239e84;
        case 0x239e88u: goto label_239e88;
        case 0x239e8cu: goto label_239e8c;
        case 0x239e90u: goto label_239e90;
        case 0x239e94u: goto label_239e94;
        case 0x239e98u: goto label_239e98;
        case 0x239e9cu: goto label_239e9c;
        case 0x239ea0u: goto label_239ea0;
        case 0x239ea4u: goto label_239ea4;
        case 0x239ea8u: goto label_239ea8;
        case 0x239eacu: goto label_239eac;
        case 0x239eb0u: goto label_239eb0;
        case 0x239eb4u: goto label_239eb4;
        case 0x239eb8u: goto label_239eb8;
        case 0x239ebcu: goto label_239ebc;
        case 0x239ec0u: goto label_239ec0;
        case 0x239ec4u: goto label_239ec4;
        case 0x239ec8u: goto label_239ec8;
        case 0x239eccu: goto label_239ecc;
        case 0x239ed0u: goto label_239ed0;
        case 0x239ed4u: goto label_239ed4;
        case 0x239ed8u: goto label_239ed8;
        case 0x239edcu: goto label_239edc;
        case 0x239ee0u: goto label_239ee0;
        case 0x239ee4u: goto label_239ee4;
        case 0x239ee8u: goto label_239ee8;
        case 0x239eecu: goto label_239eec;
        case 0x239ef0u: goto label_239ef0;
        case 0x239ef4u: goto label_239ef4;
        case 0x239ef8u: goto label_239ef8;
        case 0x239efcu: goto label_239efc;
        case 0x239f00u: goto label_239f00;
        case 0x239f04u: goto label_239f04;
        case 0x239f08u: goto label_239f08;
        case 0x239f0cu: goto label_239f0c;
        case 0x239f10u: goto label_239f10;
        case 0x239f14u: goto label_239f14;
        case 0x239f18u: goto label_239f18;
        case 0x239f1cu: goto label_239f1c;
        case 0x239f20u: goto label_239f20;
        case 0x239f24u: goto label_239f24;
        case 0x239f28u: goto label_239f28;
        case 0x239f2cu: goto label_239f2c;
        case 0x239f30u: goto label_239f30;
        case 0x239f34u: goto label_239f34;
        case 0x239f38u: goto label_239f38;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f40u: goto label_239f40;
        case 0x239f44u: goto label_239f44;
        case 0x239f48u: goto label_239f48;
        case 0x239f4cu: goto label_239f4c;
        case 0x239f50u: goto label_239f50;
        case 0x239f54u: goto label_239f54;
        case 0x239f58u: goto label_239f58;
        case 0x239f5cu: goto label_239f5c;
        case 0x239f60u: goto label_239f60;
        case 0x239f64u: goto label_239f64;
        case 0x239f68u: goto label_239f68;
        case 0x239f6cu: goto label_239f6c;
        case 0x239f70u: goto label_239f70;
        case 0x239f74u: goto label_239f74;
        case 0x239f78u: goto label_239f78;
        case 0x239f7cu: goto label_239f7c;
        case 0x239f80u: goto label_239f80;
        case 0x239f84u: goto label_239f84;
        case 0x239f88u: goto label_239f88;
        case 0x239f8cu: goto label_239f8c;
        case 0x239f90u: goto label_239f90;
        case 0x239f94u: goto label_239f94;
        case 0x239f98u: goto label_239f98;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fa4u: goto label_239fa4;
        case 0x239fa8u: goto label_239fa8;
        case 0x239facu: goto label_239fac;
        case 0x239fb0u: goto label_239fb0;
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fc4u: goto label_239fc4;
        case 0x239fc8u: goto label_239fc8;
        case 0x239fccu: goto label_239fcc;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fd4u: goto label_239fd4;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fdcu: goto label_239fdc;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe4u: goto label_239fe4;
        case 0x239fe8u: goto label_239fe8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff4u: goto label_239ff4;
        case 0x239ff8u: goto label_239ff8;
        case 0x239ffcu: goto label_239ffc;
        case 0x23a000u: goto label_23a000;
        case 0x23a004u: goto label_23a004;
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        case 0x23a058u: goto label_23a058;
        case 0x23a05cu: goto label_23a05c;
        case 0x23a060u: goto label_23a060;
        case 0x23a064u: goto label_23a064;
        case 0x23a068u: goto label_23a068;
        case 0x23a06cu: goto label_23a06c;
        case 0x23a070u: goto label_23a070;
        case 0x23a074u: goto label_23a074;
        case 0x23a078u: goto label_23a078;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a080u: goto label_23a080;
        case 0x23a084u: goto label_23a084;
        case 0x23a088u: goto label_23a088;
        case 0x23a08cu: goto label_23a08c;
        case 0x23a090u: goto label_23a090;
        case 0x23a094u: goto label_23a094;
        case 0x23a098u: goto label_23a098;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0a0u: goto label_23a0a0;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0b0u: goto label_23a0b0;
        case 0x23a0b4u: goto label_23a0b4;
        case 0x23a0b8u: goto label_23a0b8;
        case 0x23a0bcu: goto label_23a0bc;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0c4u: goto label_23a0c4;
        case 0x23a0c8u: goto label_23a0c8;
        case 0x23a0ccu: goto label_23a0cc;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0d4u: goto label_23a0d4;
        case 0x23a0d8u: goto label_23a0d8;
        case 0x23a0dcu: goto label_23a0dc;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a0e8u: goto label_23a0e8;
        case 0x23a0ecu: goto label_23a0ec;
        case 0x23a0f0u: goto label_23a0f0;
        case 0x23a0f4u: goto label_23a0f4;
        case 0x23a0f8u: goto label_23a0f8;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a100u: goto label_23a100;
        case 0x23a104u: goto label_23a104;
        case 0x23a108u: goto label_23a108;
        case 0x23a10cu: goto label_23a10c;
        case 0x23a110u: goto label_23a110;
        case 0x23a114u: goto label_23a114;
        case 0x23a118u: goto label_23a118;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a120u: goto label_23a120;
        case 0x23a124u: goto label_23a124;
        case 0x23a128u: goto label_23a128;
        case 0x23a12cu: goto label_23a12c;
        case 0x23a130u: goto label_23a130;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a13cu: goto label_23a13c;
        case 0x23a140u: goto label_23a140;
        case 0x23a144u: goto label_23a144;
        case 0x23a148u: goto label_23a148;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a150u: goto label_23a150;
        case 0x23a154u: goto label_23a154;
        case 0x23a158u: goto label_23a158;
        case 0x23a15cu: goto label_23a15c;
        case 0x23a160u: goto label_23a160;
        case 0x23a164u: goto label_23a164;
        case 0x23a168u: goto label_23a168;
        case 0x23a16cu: goto label_23a16c;
        case 0x23a170u: goto label_23a170;
        case 0x23a174u: goto label_23a174;
        case 0x23a178u: goto label_23a178;
        case 0x23a17cu: goto label_23a17c;
        case 0x23a180u: goto label_23a180;
        case 0x23a184u: goto label_23a184;
        case 0x23a188u: goto label_23a188;
        case 0x23a18cu: goto label_23a18c;
        case 0x23a190u: goto label_23a190;
        case 0x23a194u: goto label_23a194;
        case 0x23a198u: goto label_23a198;
        case 0x23a19cu: goto label_23a19c;
        case 0x23a1a0u: goto label_23a1a0;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1a8u: goto label_23a1a8;
        case 0x23a1acu: goto label_23a1ac;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1b4u: goto label_23a1b4;
        case 0x23a1b8u: goto label_23a1b8;
        case 0x23a1bcu: goto label_23a1bc;
        case 0x23a1c0u: goto label_23a1c0;
        case 0x23a1c4u: goto label_23a1c4;
        case 0x23a1c8u: goto label_23a1c8;
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a1dcu: goto label_23a1dc;
        case 0x23a1e0u: goto label_23a1e0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1e8u: goto label_23a1e8;
        case 0x23a1ecu: goto label_23a1ec;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a1f4u: goto label_23a1f4;
        case 0x23a1f8u: goto label_23a1f8;
        case 0x23a1fcu: goto label_23a1fc;
        case 0x23a200u: goto label_23a200;
        case 0x23a204u: goto label_23a204;
        case 0x23a208u: goto label_23a208;
        case 0x23a20cu: goto label_23a20c;
        case 0x23a210u: goto label_23a210;
        case 0x23a214u: goto label_23a214;
        case 0x23a218u: goto label_23a218;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a220u: goto label_23a220;
        case 0x23a224u: goto label_23a224;
        case 0x23a228u: goto label_23a228;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a234u: goto label_23a234;
        case 0x23a238u: goto label_23a238;
        case 0x23a23cu: goto label_23a23c;
        case 0x23a240u: goto label_23a240;
        case 0x23a244u: goto label_23a244;
        case 0x23a248u: goto label_23a248;
        case 0x23a24cu: goto label_23a24c;
        case 0x23a250u: goto label_23a250;
        case 0x23a254u: goto label_23a254;
        case 0x23a258u: goto label_23a258;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a260u: goto label_23a260;
        case 0x23a264u: goto label_23a264;
        case 0x23a268u: goto label_23a268;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a270u: goto label_23a270;
        case 0x23a274u: goto label_23a274;
        case 0x23a278u: goto label_23a278;
        case 0x23a27cu: goto label_23a27c;
        case 0x23a280u: goto label_23a280;
        case 0x23a284u: goto label_23a284;
        case 0x23a288u: goto label_23a288;
        case 0x23a28cu: goto label_23a28c;
        case 0x23a290u: goto label_23a290;
        case 0x23a294u: goto label_23a294;
        case 0x23a298u: goto label_23a298;
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2acu: goto label_23a2ac;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2b8u: goto label_23a2b8;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c0u: goto label_23a2c0;
        case 0x23a2c4u: goto label_23a2c4;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a2d8u: goto label_23a2d8;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e4u: goto label_23a2e4;
        case 0x23a2e8u: goto label_23a2e8;
        case 0x23a2ecu: goto label_23a2ec;
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a2f4u: goto label_23a2f4;
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a2fcu: goto label_23a2fc;
        case 0x23a300u: goto label_23a300;
        case 0x23a304u: goto label_23a304;
        case 0x23a308u: goto label_23a308;
        case 0x23a30cu: goto label_23a30c;
        case 0x23a310u: goto label_23a310;
        case 0x23a314u: goto label_23a314;
        case 0x23a318u: goto label_23a318;
        case 0x23a31cu: goto label_23a31c;
        case 0x23a320u: goto label_23a320;
        case 0x23a324u: goto label_23a324;
        case 0x23a328u: goto label_23a328;
        case 0x23a32cu: goto label_23a32c;
        case 0x23a330u: goto label_23a330;
        case 0x23a334u: goto label_23a334;
        case 0x23a338u: goto label_23a338;
        case 0x23a33cu: goto label_23a33c;
        case 0x23a340u: goto label_23a340;
        case 0x23a344u: goto label_23a344;
        case 0x23a348u: goto label_23a348;
        case 0x23a34cu: goto label_23a34c;
        case 0x23a350u: goto label_23a350;
        case 0x23a354u: goto label_23a354;
        case 0x23a358u: goto label_23a358;
        case 0x23a35cu: goto label_23a35c;
        case 0x23a360u: goto label_23a360;
        case 0x23a364u: goto label_23a364;
        case 0x23a368u: goto label_23a368;
        case 0x23a36cu: goto label_23a36c;
        case 0x23a370u: goto label_23a370;
        case 0x23a374u: goto label_23a374;
        case 0x23a378u: goto label_23a378;
        case 0x23a37cu: goto label_23a37c;
        default: return;
    }

label_239bb0:
    // 0x239bb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_239bb4:
    // 0x239bb4: 0xc08e2c0  jal         func_238B00
label_239bb8:
    if (ctx->pc == 0x239BB8u) {
        ctx->pc = 0x239BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BB4u;
        // 0x239bb8: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239BBCu;
        goto label_239bbc;
    }
    ctx->pc = 0x239BB4u;
    SET_GPR_U32(ctx, 31, 0x239BBCu);
    ctx->pc = 0x239BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BB4u;
    // 0x239bb8: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    { ctx->pc = 0x238b00; return; }
    ctx->pc = 0x239BBCu;
label_239bbc:
    // 0x239bbc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_239bc0:
    // 0x239bc0: 0x8fc50c58  lw          $a1, 0xC58($fp)
    ctx->pc = 0x239bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3160)));
label_239bc4:
    // 0x239bc4: 0x24630c48  addiu       $v1, $v1, 0xC48
    ctx->pc = 0x239bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3144));
label_239bc8:
    // 0x239bc8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239bc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_239bcc:
    // 0x239bcc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_239bd0:
    // 0x239bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_239bd4:
    if (ctx->pc == 0x239BD4u) {
        ctx->pc = 0x239BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BD0u;
        // 0x239bd4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239BD8u;
        goto label_239bd8;
    }
    ctx->pc = 0x239BD0u;
    {
        const bool branch_taken_0x239bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239bd0) {
            ctx->pc = 0x239BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BD0u;
            // 0x239bd4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BD8u;
            goto label_239bd8;
        }
    }
    ctx->pc = 0x239BD8u;
label_239bd8:
    // 0x239bd8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_239bdc:
    // 0x239bdc: 0x24630c50  addiu       $v1, $v1, 0xC50
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
label_239be0:
    // 0x239be0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_239be4:
    // 0x239be4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_239be8:
    // 0x239be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_239bec:
    if (ctx->pc == 0x239BECu) {
        ctx->pc = 0x239BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BE8u;
        // 0x239bec: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239BF0u;
        goto label_239bf0;
    }
    ctx->pc = 0x239BE8u;
    {
        const bool branch_taken_0x239be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239be8) {
            ctx->pc = 0x239BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BE8u;
            // 0x239bec: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239BF0u;
label_239bf0:
    // 0x239bf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x239bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239bf4:
    // 0x239bf4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x239bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_239bf8:
    // 0x239bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239bfc:
    // 0x239bfc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x239bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239c00:
    // 0x239c00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x239c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239c04:
    // 0x239c04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x239c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_239c08:
    // 0x239c08: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x239c08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239c0c:
    // 0x239c0c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x239c0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_239c10:
    // 0x239c10: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x239c10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_239c14:
    // 0x239c14: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x239c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_239c18:
    // 0x239c18: 0x3e00008  jr          $ra
label_239c1c:
    if (ctx->pc == 0x239C1Cu) {
        ctx->pc = 0x239C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C18u;
        // 0x239c1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C20u;
        goto label_239c20;
    }
    ctx->pc = 0x239C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C18u;
        // 0x239c1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239C20u;
label_239c20:
    // 0x239c20: 0x24a30013  addiu       $v1, $a1, 0x13
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
label_239c24:
    // 0x239c24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_239c28:
    // 0x239c28: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x239c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_239c2c:
    // 0x239c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_239c30:
    // 0x239c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239c34:
    // 0x239c34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x239c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239c38:
    // 0x239c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239c3c:
    // 0x239c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239c40:
    // 0x239c40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_239c44:
    // 0x239c44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_239c48:
    if (ctx->pc == 0x239C48u) {
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C4Cu;
        goto label_239c4c;
    }
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239C4Cu;
label_239c4c:
    // 0x239c4c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_239c50:
    // 0x239c50: 0x10000002  b           . + 4 + (0x2 << 2)
label_239c54:
    if (ctx->pc == 0x239C54u) {
        ctx->pc = 0x239C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C50u;
        // 0x239c54: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C58u;
        goto label_239c58;
    }
    ctx->pc = 0x239C50u;
    {
        const bool branch_taken_0x239c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C50u;
        // 0x239c54: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c50) {
            ctx->pc = 0x239C5Cu;
            goto label_239c5c;
        }
    }
    ctx->pc = 0x239C58u;
label_239c58:
    // 0x239c58: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_239c5c:
    // 0x239c5c: 0xc08e9dc  jal         func_23A770
label_239c60:
    if (ctx->pc == 0x239C60u) {
        ctx->pc = 0x239C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C5Cu;
        // 0x239c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C64u;
        goto label_239c64;
    }
    ctx->pc = 0x239C5Cu;
    SET_GPR_U32(ctx, 31, 0x239C64u);
    ctx->pc = 0x239C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C5Cu;
    // 0x239c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x239C64u;
label_239c64:
    // 0x239c64: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
label_239c68:
    // 0x239c68: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_239c6c:
    if (ctx->pc == 0x239C6Cu) {
        ctx->pc = 0x239C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C68u;
        // 0x239c6c: 0x111a42  srl         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C70u;
        goto label_239c70;
    }
    ctx->pc = 0x239C68u;
    {
        const bool branch_taken_0x239c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C68u;
        // 0x239c6c: 0x111a42  srl         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c68) {
            ctx->pc = 0x239CC8u;
            goto label_239cc8;
        }
    }
    ctx->pc = 0x239C70u;
label_239c70:
    // 0x239c70: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
label_239c74:
    // 0x239c74: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_239c78:
    // 0x239c78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_239c7c:
    // 0x239c7c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_239c80:
    // 0x239c80: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_239c84:
    // 0x239c84: 0x1204000e  beq         $s0, $a0, . + 4 + (0xE << 2)
label_239c88:
    if (ctx->pc == 0x239C88u) {
        ctx->pc = 0x239C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C84u;
        // 0x239c88: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239C8Cu;
        goto label_239c8c;
    }
    ctx->pc = 0x239C84u;
    {
        const bool branch_taken_0x239c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x239C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C84u;
        // 0x239c88: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c84) {
            ctx->pc = 0x239CC0u;
            goto label_239cc0;
        }
    }
    ctx->pc = 0x239C8Cu;
label_239c8c:
    // 0x239c8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239c90:
    // 0x239c90: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_239c94:
    // 0x239c94: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x239c94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239c98:
    // 0x239c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239c9c:
    // 0x239c9c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x239c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_239ca0:
    // 0x239ca0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_239ca4:
    // 0x239ca4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_239ca8:
    // 0x239ca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_239cac:
    // 0x239cac: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x239cacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_239cb0:
    // 0x239cb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_239cb4:
    // 0x239cb4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x239cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
label_239cb8:
    // 0x239cb8: 0x10000198  b           . + 4 + (0x198 << 2)
label_239cbc:
    if (ctx->pc == 0x239CBCu) {
        ctx->pc = 0x239CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB8u;
        // 0x239cbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CC0u;
        goto label_239cc0;
    }
    ctx->pc = 0x239CB8u;
    {
        const bool branch_taken_0x239cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB8u;
        // 0x239cbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cb8) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239CC0u;
label_239cc0:
    // 0x239cc0: 0x10000038  b           . + 4 + (0x38 << 2)
label_239cc4:
    if (ctx->pc == 0x239CC4u) {
        ctx->pc = 0x239CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC0u;
        // 0x239cc4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CC8u;
        goto label_239cc8;
    }
    ctx->pc = 0x239CC0u;
    {
        const bool branch_taken_0x239cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC0u;
        // 0x239cc4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc0) {
            ctx->pc = 0x239DA4u;
            goto label_239da4;
        }
    }
    ctx->pc = 0x239CC8u;
label_239cc8:
    // 0x239cc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_239ccc:
    if (ctx->pc == 0x239CCCu) {
        ctx->pc = 0x239CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC8u;
        // 0x239ccc: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CD0u;
        goto label_239cd0;
    }
    ctx->pc = 0x239CC8u;
    {
        const bool branch_taken_0x239cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC8u;
        // 0x239ccc: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc8) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CD0u;
label_239cd0:
    // 0x239cd0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_239cd4:
    // 0x239cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239cd8:
    if (ctx->pc == 0x239CD8u) {
        ctx->pc = 0x239CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CD4u;
        // 0x239cd8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CDCu;
        goto label_239cdc;
    }
    ctx->pc = 0x239CD4u;
    {
        const bool branch_taken_0x239cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CD4u;
        // 0x239cd8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cd4) {
            ctx->pc = 0x239CE8u;
            goto label_239ce8;
        }
    }
    ctx->pc = 0x239CDCu;
label_239cdc:
    // 0x239cdc: 0x111182  srl         $v0, $s1, 6
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
label_239ce0:
    // 0x239ce0: 0x10000013  b           . + 4 + (0x13 << 2)
label_239ce4:
    if (ctx->pc == 0x239CE4u) {
        ctx->pc = 0x239CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE0u;
        // 0x239ce4: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CE8u;
        goto label_239ce8;
    }
    ctx->pc = 0x239CE0u;
    {
        const bool branch_taken_0x239ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE0u;
        // 0x239ce4: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce0) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CE8u;
label_239ce8:
    // 0x239ce8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_239cec:
    if (ctx->pc == 0x239CECu) {
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE8u;
        // 0x239cec: 0x246a005b  addiu       $t2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CF0u;
        goto label_239cf0;
    }
    ctx->pc = 0x239CE8u;
    {
        const bool branch_taken_0x239ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE8u;
        // 0x239cec: 0x246a005b  addiu       $t2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce8) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CF0u;
label_239cf0:
    // 0x239cf0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
label_239cf4:
    // 0x239cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239cf8:
    if (ctx->pc == 0x239CF8u) {
        ctx->pc = 0x239CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CF4u;
        // 0x239cf8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239CFCu;
        goto label_239cfc;
    }
    ctx->pc = 0x239CF4u;
    {
        const bool branch_taken_0x239cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CF4u;
        // 0x239cf8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cf4) {
            ctx->pc = 0x239D08u;
            goto label_239d08;
        }
    }
    ctx->pc = 0x239CFCu;
label_239cfc:
    // 0x239cfc: 0x111302  srl         $v0, $s1, 12
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
label_239d00:
    // 0x239d00: 0x1000000b  b           . + 4 + (0xB << 2)
label_239d04:
    if (ctx->pc == 0x239D04u) {
        ctx->pc = 0x239D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D00u;
        // 0x239d04: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D08u;
        goto label_239d08;
    }
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D00u;
        // 0x239d04: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D08u;
label_239d08:
    // 0x239d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239d0c:
    if (ctx->pc == 0x239D0Cu) {
        ctx->pc = 0x239D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D08u;
        // 0x239d0c: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D10u;
        goto label_239d10;
    }
    ctx->pc = 0x239D08u;
    {
        const bool branch_taken_0x239d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D08u;
        // 0x239d0c: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d08) {
            ctx->pc = 0x239D20u;
            goto label_239d20;
        }
    }
    ctx->pc = 0x239D10u;
label_239d10:
    // 0x239d10: 0x1113c2  srl         $v0, $s1, 15
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
label_239d14:
    // 0x239d14: 0x10000006  b           . + 4 + (0x6 << 2)
label_239d18:
    if (ctx->pc == 0x239D18u) {
        ctx->pc = 0x239D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D14u;
        // 0x239d18: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D1Cu;
        goto label_239d1c;
    }
    ctx->pc = 0x239D14u;
    {
        const bool branch_taken_0x239d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D14u;
        // 0x239d18: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d14) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D1Cu;
label_239d1c:
    // 0x239d1c: 0x0  nop
    ctx->pc = 0x239d1cu;
    // NOP
label_239d20:
    // 0x239d20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_239d24:
    if (ctx->pc == 0x239D24u) {
        ctx->pc = 0x239D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D20u;
        // 0x239d24: 0x240a007e  addiu       $t2, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D28u;
        goto label_239d28;
    }
    ctx->pc = 0x239D20u;
    {
        const bool branch_taken_0x239d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d20) {
            ctx->pc = 0x239D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D20u;
            // 0x239d24: 0x240a007e  addiu       $t2, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D28u;
label_239d28:
    // 0x239d28: 0x111482  srl         $v0, $s1, 18
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
label_239d2c:
    // 0x239d2c: 0x244a007c  addiu       $t2, $v0, 0x7C
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_239d30:
    // 0x239d30: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
label_239d34:
    // 0x239d34: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x239d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_239d38:
    // 0x239d38: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_239d3c:
    // 0x239d3c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_239d40:
    // 0x239d40: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_239d44:
    // 0x239d44: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x239d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239d48:
    // 0x239d48: 0x10000004  b           . + 4 + (0x4 << 2)
label_239d4c:
    if (ctx->pc == 0x239D4Cu) {
        ctx->pc = 0x239D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D48u;
        // 0x239d4c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D50u;
        goto label_239d50;
    }
    ctx->pc = 0x239D48u;
    {
        const bool branch_taken_0x239d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D48u;
        // 0x239d4c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d48) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239D50u;
label_239d50:
    // 0x239d50: 0x501013d  bgez        $t0, . + 4 + (0x13D << 2)
label_239d54:
    if (ctx->pc == 0x239D54u) {
        ctx->pc = 0x239D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D50u;
        // 0x239d54: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D58u;
        goto label_239d58;
    }
    ctx->pc = 0x239D50u;
    {
        const bool branch_taken_0x239d50 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D50u;
        // 0x239d54: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d50) {
            ctx->pc = 0x23A248u;
            goto label_23a248;
        }
    }
    ctx->pc = 0x239D58u;
label_239d58:
    // 0x239d58: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239d5c:
    // 0x239d5c: 0x52050011  beql        $s0, $a1, . + 4 + (0x11 << 2)
label_239d60:
    if (ctx->pc == 0x239D60u) {
        ctx->pc = 0x239D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D5Cu;
        // 0x239d60: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D64u;
        goto label_239d64;
    }
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239DA4u;
            goto label_239da4;
        }
    }
    ctx->pc = 0x239D64u;
label_239d64:
    // 0x239d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239d68:
    // 0x239d68: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x239d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_239d6c:
    // 0x239d6c: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_239d70:
    // 0x239d70: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_239d74:
    // 0x239d74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_239d78:
    // 0x239d78: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x239d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_239d7c:
    // 0x239d7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x239d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_239d80:
    // 0x239d80: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x239d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_239d84:
    // 0x239d84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_239d88:
    if (ctx->pc == 0x239D88u) {
        ctx->pc = 0x239D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D84u;
        // 0x239d88: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239D8Cu;
        goto label_239d8c;
    }
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D84u;
        // 0x239d88: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239D90u;
            goto label_239d90;
        }
    }
    ctx->pc = 0x239D8Cu;
label_239d8c:
    // 0x239d8c: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x239d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_239d90:
    // 0x239d90: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_239d94:
    // 0x239d94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_239d98:
    if (ctx->pc == 0x239D98u) {
        ctx->pc = 0x239D9Cu;
        goto label_239d9c;
    }
    ctx->pc = 0x239D94u;
    {
        const bool branch_taken_0x239d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d94) {
            ctx->pc = 0x239D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239d50;
        }
    }
    ctx->pc = 0x239D9Cu;
label_239d9c:
    // 0x239d9c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_239da0:
    // 0x239da0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_239da4:
    // 0x239da4: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_239da8:
    // 0x239da8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x239da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_239dac:
    // 0x239dac: 0x12020080  beq         $s0, $v0, . + 4 + (0x80 << 2)
label_239db0:
    if (ctx->pc == 0x239DB0u) {
        ctx->pc = 0x239DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DACu;
        // 0x239db0: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239DB4u;
        goto label_239db4;
    }
    ctx->pc = 0x239DACu;
    {
        const bool branch_taken_0x239dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DACu;
        // 0x239db0: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dac) {
            ctx->pc = 0x239FB0u;
            goto label_239fb0;
        }
    }
    ctx->pc = 0x239DB4u;
label_239db4:
    // 0x239db4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239db8:
    // 0x239db8: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x239db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239dbc:
    // 0x239dbc: 0xd1202b  sltu        $a0, $a2, $s1
    ctx->pc = 0x239dbcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_239dc0:
    // 0x239dc0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_239dc4:
    if (ctx->pc == 0x239DC4u) {
        ctx->pc = 0x239DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC0u;
        // 0x239dc4: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239DC8u;
        goto label_239dc8;
    }
    ctx->pc = 0x239DC0u;
    {
        const bool branch_taken_0x239dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC0u;
        // 0x239dc4: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dc0) {
            ctx->pc = 0x239DE0u;
            goto label_239de0;
        }
    }
    ctx->pc = 0x239DC8u;
label_239dc8:
    // 0x239dc8: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_239dcc:
    // 0x239dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239dd0:
    // 0x239dd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_239dd4:
    // 0x239dd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_239dd8:
    if (ctx->pc == 0x239DD8u) {
        ctx->pc = 0x239DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD4u;
        // 0x239dd8: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239DDCu;
        goto label_239ddc;
    }
    ctx->pc = 0x239DD4u;
    {
        const bool branch_taken_0x239dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD4u;
        // 0x239dd8: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dd4) {
            ctx->pc = 0x239DE8u;
            goto label_239de8;
        }
    }
    ctx->pc = 0x239DDCu;
label_239ddc:
    // 0x239ddc: 0x0  nop
    ctx->pc = 0x239ddcu;
    // NOP
label_239de0:
    // 0x239de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239de4:
    // 0x239de4: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x239de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_239de8:
    // 0x239de8: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_239dec:
    // 0x239dec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_239df0:
    if (ctx->pc == 0x239DF0u) {
        ctx->pc = 0x239DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DECu;
        // 0x239df0: 0x25e40830  addiu       $a0, $t7, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239DF4u;
        goto label_239df4;
    }
    ctx->pc = 0x239DECu;
    {
        const bool branch_taken_0x239dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239dec) {
            ctx->pc = 0x239DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239DECu;
            // 0x239df0: 0x25e40830  addiu       $a0, $t7, 0x830 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E40u;
            goto label_239e40;
        }
    }
    ctx->pc = 0x239DF4u;
label_239df4:
    // 0x239df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239df8:
    // 0x239df8: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_239dfc:
    // 0x239dfc: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x239dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
label_239e00:
    // 0x239e00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x239e00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_239e04:
    // 0x239e04: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x239e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_239e08:
    // 0x239e08: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_239e0c:
    // 0x239e0c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x239e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_239e10:
    // 0x239e10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_239e14:
    // 0x239e14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x239e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_239e18:
    // 0x239e18: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_239e1c:
    // 0x239e1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x239e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_239e20:
    // 0x239e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239e24:
    // 0x239e24: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x239e24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_239e28:
    // 0x239e28: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x239e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_239e2c:
    // 0x239e2c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x239e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_239e30:
    // 0x239e30: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x239e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_239e34:
    // 0x239e34: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x239e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_239e38:
    // 0x239e38: 0x10000138  b           . + 4 + (0x138 << 2)
label_239e3c:
    if (ctx->pc == 0x239E3Cu) {
        ctx->pc = 0x239E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E38u;
        // 0x239e3c: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239E40u;
        goto label_239e40;
    }
    ctx->pc = 0x239E38u;
    {
        const bool branch_taken_0x239e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E38u;
        // 0x239e3c: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e38) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239E40u;
label_239e40:
    // 0x239e40: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x239e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_239e44:
    // 0x239e44: 0x5000008  bltz        $t0, . + 4 + (0x8 << 2)
label_239e48:
    if (ctx->pc == 0x239E48u) {
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239E4Cu;
        goto label_239e4c;
    }
    ctx->pc = 0x239E44u;
    {
        const bool branch_taken_0x239e44 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e44) {
            ctx->pc = 0x239E68u;
            goto label_239e68;
        }
    }
    ctx->pc = 0x239E4Cu;
label_239e4c:
    // 0x239e4c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_239e50:
    // 0x239e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239e54:
    // 0x239e54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_239e58:
    // 0x239e58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_239e5c:
    // 0x239e5c: 0x1000012f  b           . + 4 + (0x12F << 2)
label_239e60:
    if (ctx->pc == 0x239E60u) {
        ctx->pc = 0x239E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E5Cu;
        // 0x239e60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239E64u;
        goto label_239e64;
    }
    ctx->pc = 0x239E5Cu;
    {
        const bool branch_taken_0x239e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E5Cu;
        // 0x239e60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e5c) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239E64u;
label_239e64:
    // 0x239e64: 0x0  nop
    ctx->pc = 0x239e64u;
    // NOP
label_239e68:
    // 0x239e68: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x239e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
label_239e6c:
    // 0x239e6c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_239e70:
    if (ctx->pc == 0x239E70u) {
        ctx->pc = 0x239E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E6Cu;
        // 0x239e70: 0x61a42  srl         $v1, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239E74u;
        goto label_239e74;
    }
    ctx->pc = 0x239E6Cu;
    {
        const bool branch_taken_0x239e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E6Cu;
        // 0x239e70: 0x61a42  srl         $v1, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e6c) {
            ctx->pc = 0x239EB8u;
            goto label_239eb8;
        }
    }
    ctx->pc = 0x239E74u;
label_239e74:
    // 0x239e74: 0x628c2  srl         $a1, $a2, 3
    ctx->pc = 0x239e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_239e78:
    // 0x239e78: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_239e7c:
    // 0x239e7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_239e80:
    // 0x239e80: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_239e84:
    // 0x239e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239e88:
    // 0x239e88: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_239e8c:
    // 0x239e8c: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_239e90:
    // 0x239e90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239e94:
    // 0x239e94: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_239e98:
    // 0x239e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239e9c:
    // 0x239e9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_239ea0:
    // 0x239ea0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_239ea4:
    // 0x239ea4: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
label_239ea8:
    // 0x239ea8: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_239eac:
    // 0x239eac: 0x1000003e  b           . + 4 + (0x3E << 2)
label_239eb0:
    if (ctx->pc == 0x239EB0u) {
        ctx->pc = 0x239EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EACu;
        // 0x239eb0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EB4u;
        goto label_239eb4;
    }
    ctx->pc = 0x239EACu;
    {
        const bool branch_taken_0x239eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EACu;
        // 0x239eb0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eac) {
            ctx->pc = 0x239FA8u;
            goto label_239fa8;
        }
    }
    ctx->pc = 0x239EB4u;
label_239eb4:
    // 0x239eb4: 0x0  nop
    ctx->pc = 0x239eb4u;
    // NOP
label_239eb8:
    // 0x239eb8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_239ebc:
    if (ctx->pc == 0x239EBCu) {
        ctx->pc = 0x239EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EB8u;
        // 0x239ebc: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EC0u;
        goto label_239ec0;
    }
    ctx->pc = 0x239EB8u;
    {
        const bool branch_taken_0x239eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EB8u;
        // 0x239ebc: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eb8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EC0u;
label_239ec0:
    // 0x239ec0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_239ec4:
    // 0x239ec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239ec8:
    if (ctx->pc == 0x239EC8u) {
        ctx->pc = 0x239EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC4u;
        // 0x239ec8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239ECCu;
        goto label_239ecc;
    }
    ctx->pc = 0x239EC4u;
    {
        const bool branch_taken_0x239ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC4u;
        // 0x239ec8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ec4) {
            ctx->pc = 0x239ED8u;
            goto label_239ed8;
        }
    }
    ctx->pc = 0x239ECCu;
label_239ecc:
    // 0x239ecc: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
label_239ed0:
    // 0x239ed0: 0x10000013  b           . + 4 + (0x13 << 2)
label_239ed4:
    if (ctx->pc == 0x239ED4u) {
        ctx->pc = 0x239ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED0u;
        // 0x239ed4: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239ED8u;
        goto label_239ed8;
    }
    ctx->pc = 0x239ED0u;
    {
        const bool branch_taken_0x239ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED0u;
        // 0x239ed4: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239ED8u;
label_239ed8:
    // 0x239ed8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_239edc:
    if (ctx->pc == 0x239EDCu) {
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EE0u;
        goto label_239ee0;
    }
    ctx->pc = 0x239ED8u;
    {
        const bool branch_taken_0x239ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EE0u;
label_239ee0:
    // 0x239ee0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
label_239ee4:
    // 0x239ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239ee8:
    if (ctx->pc == 0x239EE8u) {
        ctx->pc = 0x239EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EE4u;
        // 0x239ee8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EECu;
        goto label_239eec;
    }
    ctx->pc = 0x239EE4u;
    {
        const bool branch_taken_0x239ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EE4u;
        // 0x239ee8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ee4) {
            ctx->pc = 0x239EF8u;
            goto label_239ef8;
        }
    }
    ctx->pc = 0x239EECu;
label_239eec:
    // 0x239eec: 0x61302  srl         $v0, $a2, 12
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
label_239ef0:
    // 0x239ef0: 0x1000000b  b           . + 4 + (0xB << 2)
label_239ef4:
    if (ctx->pc == 0x239EF4u) {
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF0u;
        // 0x239ef4: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EF8u;
        goto label_239ef8;
    }
    ctx->pc = 0x239EF0u;
    {
        const bool branch_taken_0x239ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF0u;
        // 0x239ef4: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EF8u;
label_239ef8:
    // 0x239ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239efc:
    if (ctx->pc == 0x239EFCu) {
        ctx->pc = 0x239EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF8u;
        // 0x239efc: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F00u;
        goto label_239f00;
    }
    ctx->pc = 0x239EF8u;
    {
        const bool branch_taken_0x239ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF8u;
        // 0x239efc: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef8) {
            ctx->pc = 0x239F10u;
            goto label_239f10;
        }
    }
    ctx->pc = 0x239F00u;
label_239f00:
    // 0x239f00: 0x613c2  srl         $v0, $a2, 15
    ctx->pc = 0x239f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
label_239f04:
    // 0x239f04: 0x10000006  b           . + 4 + (0x6 << 2)
label_239f08:
    if (ctx->pc == 0x239F08u) {
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F04u;
        // 0x239f08: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F0Cu;
        goto label_239f0c;
    }
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F04u;
        // 0x239f08: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F0Cu;
label_239f0c:
    // 0x239f0c: 0x0  nop
    ctx->pc = 0x239f0cu;
    // NOP
label_239f10:
    // 0x239f10: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_239f14:
    if (ctx->pc == 0x239F14u) {
        ctx->pc = 0x239F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F10u;
        // 0x239f14: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F18u;
        goto label_239f18;
    }
    ctx->pc = 0x239F10u;
    {
        const bool branch_taken_0x239f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f10) {
            ctx->pc = 0x239F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F10u;
            // 0x239f14: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F18u;
label_239f18:
    // 0x239f18: 0x61482  srl         $v0, $a2, 18
    ctx->pc = 0x239f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
label_239f1c:
    // 0x239f1c: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_239f20:
    // 0x239f20: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_239f24:
    // 0x239f24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_239f28:
    // 0x239f28: 0x2447fff8  addiu       $a3, $v0, -0x8
    ctx->pc = 0x239f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_239f2c:
    // 0x239f2c: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_239f30:
    // 0x239f30: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_239f34:
    // 0x239f34: 0x550b000e  bnel        $t0, $t3, . + 4 + (0xE << 2)
label_239f38:
    if (ctx->pc == 0x239F38u) {
        ctx->pc = 0x239F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F34u;
        // 0x239f38: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F3Cu;
        goto label_239f3c;
    }
    ctx->pc = 0x239F34u;
    {
        const bool branch_taken_0x239f34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x239f34) {
            ctx->pc = 0x239F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F34u;
            // 0x239f38: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F70u;
            goto label_239f70;
        }
    }
    ctx->pc = 0x239F3Cu;
label_239f3c:
    // 0x239f3c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_239f40:
    // 0x239f40: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x239f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_239f44:
    // 0x239f44: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x239f44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_239f48:
    // 0x239f48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_239f4c:
    // 0x239f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239f50:
    // 0x239f50: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
label_239f54:
    // 0x239f54: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_239f58:
    // 0x239f58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239f5c:
    // 0x239f5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_239f60:
    // 0x239f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_239f64:
    // 0x239f64: 0x1000000e  b           . + 4 + (0xE << 2)
label_239f68:
    if (ctx->pc == 0x239F68u) {
        ctx->pc = 0x239F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F64u;
        // 0x239f68: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F6Cu;
        goto label_239f6c;
    }
    ctx->pc = 0x239F64u;
    {
        const bool branch_taken_0x239f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F64u;
        // 0x239f68: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f64) {
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F6Cu;
label_239f6c:
    // 0x239f6c: 0x0  nop
    ctx->pc = 0x239f6cu;
    // NOP
label_239f70:
    // 0x239f70: 0x10000004  b           . + 4 + (0x4 << 2)
label_239f74:
    if (ctx->pc == 0x239F74u) {
        ctx->pc = 0x239F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F70u;
        // 0x239f74: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F78u;
        goto label_239f78;
    }
    ctx->pc = 0x239F70u;
    {
        const bool branch_taken_0x239f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F70u;
        // 0x239f74: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f70) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x510b0009  beql        $t0, $t3, . + 4 + (0x9 << 2)
label_239f7c:
    if (ctx->pc == 0x239F7Cu) {
        ctx->pc = 0x239F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F78u;
        // 0x239f7c: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F80u;
        goto label_239f80;
    }
    ctx->pc = 0x239F78u;
    {
        const bool branch_taken_0x239f78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x239f78) {
            ctx->pc = 0x239F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F78u;
            // 0x239f7c: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F80u;
label_239f80:
    // 0x239f80: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x239f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_239f84:
    // 0x239f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239f88:
    // 0x239f88: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x239f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_239f8c:
    // 0x239f8c: 0x0  nop
    ctx->pc = 0x239f8cu;
    // NOP
label_239f90:
    // 0x239f90: 0x0  nop
    ctx->pc = 0x239f90u;
    // NOP
label_239f94:
    // 0x239f94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_239f98:
    if (ctx->pc == 0x239F98u) {
        ctx->pc = 0x239F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F94u;
        // 0x239f98: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F9Cu;
        goto label_239f9c;
    }
    ctx->pc = 0x239F94u;
    {
        const bool branch_taken_0x239f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f94) {
            ctx->pc = 0x239F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F94u;
            // 0x239f98: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f78;
        }
    }
    ctx->pc = 0x239F9Cu;
label_239f9c:
    // 0x239f9c: 0x8d0b000c  lw          $t3, 0xC($t0)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_239fa0:
    // 0x239fa0: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
label_239fa4:
    // 0x239fa4: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_239fa8:
    // 0x239fa8: 0xad700008  sw          $s0, 0x8($t3)
    ctx->pc = 0x239fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 16));
label_239fac:
    // 0x239fac: 0xad10000c  sw          $s0, 0xC($t0)
    ctx->pc = 0x239facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 16));
label_239fb0:
    // 0x239fb0: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
label_239fb4:
    // 0x239fb4: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_239fb8:
    // 0x239fb8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x239fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_239fbc:
    // 0x239fbc: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x239fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
label_239fc0:
    // 0x239fc0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x239fc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_239fc4:
    // 0x239fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239fc8:
    // 0x239fc8: 0x26830828  addiu       $v1, $s4, 0x828
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_239fcc:
    // 0x239fcc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x239fccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_239fd0:
    // 0x239fd0: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x239fd0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_239fd4:
    // 0x239fd4: 0x824814  dsllv       $t1, $v0, $a0
    ctx->pc = 0x239fd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_239fd8:
    // 0x239fd8: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x239fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_239fdc:
    // 0x239fdc: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
label_239fe0:
    if (ctx->pc == 0x239FE0u) {
        ctx->pc = 0x239FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FDCu;
        // 0x239fe0: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FE4u;
        goto label_239fe4;
    }
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x239FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239FDCu;
            // 0x239fe0: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x239FE4u;
label_239fe4:
    // 0x239fe4: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_239fe8:
    // 0x239fe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_239fec:
    if (ctx->pc == 0x239FECu) {
        ctx->pc = 0x239FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE8u;
        // 0x239fec: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FF0u;
        goto label_239ff0;
    }
    ctx->pc = 0x239FE8u;
    {
        const bool branch_taken_0x239fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE8u;
        // 0x239fec: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe8) {
            ctx->pc = 0x23A030u;
            goto label_23a030;
        }
    }
    ctx->pc = 0x239FF0u;
label_239ff0:
    // 0x239ff0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_239ff4:
    // 0x239ff4: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x239ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_239ff8:
    // 0x239ff8: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_239ffc:
    // 0x239ffc: 0x1261824  and         $v1, $t1, $a2
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_23a000:
    // 0x23a000: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23a004:
    if (ctx->pc == 0x23A004u) {
        ctx->pc = 0x23A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A000u;
        // 0x23a004: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A008u;
        goto label_23a008;
    }
    ctx->pc = 0x23A000u;
    {
        const bool branch_taken_0x23a000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A000u;
        // 0x23a004: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a000) {
            ctx->pc = 0x23A02Cu;
            goto label_23a02c;
        }
    }
    ctx->pc = 0x23A008u;
label_23a008:
    // 0x23a008: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23a008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23a00c:
    // 0x23a00c: 0x0  nop
    ctx->pc = 0x23a00cu;
    // NOP
label_23a010:
    // 0x23a010: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_23a014:
    // 0x23a014: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_23a018:
    // 0x23a018: 0x0  nop
    ctx->pc = 0x23a018u;
    // NOP
label_23a01c:
    // 0x23a01c: 0x0  nop
    ctx->pc = 0x23a01cu;
    // NOP
label_23a020:
    // 0x23a020: 0x0  nop
    ctx->pc = 0x23a020u;
    // NOP
label_23a024:
    // 0x23a024: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a028:
    if (ctx->pc == 0x23A028u) {
        ctx->pc = 0x23A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A024u;
        // 0x23a028: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A02Cu;
        goto label_23a02c;
    }
    ctx->pc = 0x23A024u;
    {
        const bool branch_taken_0x23a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A024u;
        // 0x23a028: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a024) {
            ctx->pc = 0x23A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a010;
        }
    }
    ctx->pc = 0x23A02Cu;
label_23a02c:
    // 0x23a02c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23a030:
    // 0x23a030: 0x244d0828  addiu       $t5, $v0, 0x828
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
label_23a034:
    // 0x23a034: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x23a034u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a038:
    // 0x23a038: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_23a03c:
    // 0x23a03c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_23a040:
    // 0x23a040: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23a044:
    // 0x23a044: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_23a048:
    // 0x23a048: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a04c:
    // 0x23a04c: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_23a050:
    // 0x23a050: 0x12050016  beq         $s0, $a1, . + 4 + (0x16 << 2)
label_23a054:
    if (ctx->pc == 0x23A054u) {
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A058u;
        goto label_23a058;
    }
    ctx->pc = 0x23A050u;
    {
        const bool branch_taken_0x23a050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a050) {
            ctx->pc = 0x23A0ACu;
            goto label_23a0ac;
        }
    }
    ctx->pc = 0x23A058u;
label_23a058:
    // 0x23a058: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a05c:
    // 0x23a05c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a060:
    // 0x23a060: 0x4c3024  and         $a2, $v0, $t4
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_23a064:
    // 0x23a064: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x23a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_23a068:
    // 0x23a068: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x23a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_23a06c:
    // 0x23a06c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23a070:
    // 0x23a070: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23a070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_23a074:
    // 0x23a074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23a078:
    // 0x23a078: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a07c:
    // 0x23a07c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23a080:
    if (ctx->pc == 0x23A080u) {
        ctx->pc = 0x23A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A07Cu;
        // 0x23a080: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A084u;
        goto label_23a084;
    }
    ctx->pc = 0x23A07Cu;
    {
        const bool branch_taken_0x23a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A07Cu;
        // 0x23a080: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a07c) {
            ctx->pc = 0x23A088u;
            goto label_23a088;
        }
    }
    ctx->pc = 0x23A084u;
label_23a084:
    // 0x23a084: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x23a084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_23a088:
    // 0x23a088: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_23a08c:
    // 0x23a08c: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
label_23a090:
    if (ctx->pc == 0x23A090u) {
        ctx->pc = 0x23A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A08Cu;
        // 0x23a090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A094u;
        goto label_23a094;
    }
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23A090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A08Cu;
            // 0x23a090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A270u;
            goto label_23a270;
        }
    }
    ctx->pc = 0x23A094u;
label_23a094:
    // 0x23a094: 0x503008c  bgezl       $t0, . + 4 + (0x8C << 2)
label_23a098:
    if (ctx->pc == 0x23A098u) {
        ctx->pc = 0x23A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A094u;
        // 0x23a098: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A09Cu;
        goto label_23a09c;
    }
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A094u;
            // 0x23a098: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A09Cu;
label_23a09c:
    // 0x23a09c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x23a09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a0a0:
    // 0x23a0a0: 0x5605ffef  bnel        $s0, $a1, . + 4 + (-0x11 << 2)
label_23a0a4:
    if (ctx->pc == 0x23A0A4u) {
        ctx->pc = 0x23A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0A0u;
        // 0x23a0a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A0A8u;
        goto label_23a0a8;
    }
    ctx->pc = 0x23A0A0u;
    {
        const bool branch_taken_0x23a0a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x23a0a0) {
            ctx->pc = 0x23A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0A0u;
            // 0x23a0a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a060;
        }
    }
    ctx->pc = 0x23A0A8u;
label_23a0a8:
    // 0x23a0a8: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_23a0ac:
    // 0x23a0ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23a0b0:
    if (ctx->pc == 0x23A0B0u) {
        ctx->pc = 0x23A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ACu;
        // 0x23a0b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A0B4u;
        goto label_23a0b4;
    }
    ctx->pc = 0x23A0ACu;
    {
        const bool branch_taken_0x23a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ACu;
        // 0x23a0b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ac) {
            ctx->pc = 0x23A0BCu;
            goto label_23a0bc;
        }
    }
    ctx->pc = 0x23A0B4u;
label_23a0b4:
    // 0x23a0b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a0b8:
    // 0x23a0b8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_23a0bc:
    // 0x23a0bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_23a0c0:
    // 0x23a0c0: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x23a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_23a0c4:
    // 0x23a0c4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_23a0c8:
    if (ctx->pc == 0x23A0C8u) {
        ctx->pc = 0x23A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0C4u;
        // 0x23a0c8: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A0CCu;
        goto label_23a0cc;
    }
    ctx->pc = 0x23A0C4u;
    {
        const bool branch_taken_0x23a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c4) {
            ctx->pc = 0x23A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0C4u;
            // 0x23a0c8: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a050;
        }
    }
    ctx->pc = 0x23A0CCu;
label_23a0cc:
    // 0x23a0cc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x23a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_23a0d0:
    // 0x23a0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23a0d4:
    // 0x23a0d4: 0x25c50828  addiu       $a1, $t6, 0x828
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2088));
label_23a0d8:
    // 0x23a0d8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23a0d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23a0dc:
    // 0x23a0dc: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x23a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_23a0e0:
    // 0x23a0e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23a0e4:
    if (ctx->pc == 0x23A0E4u) {
        ctx->pc = 0x23A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E0u;
        // 0x23a0e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A0E8u;
        goto label_23a0e8;
    }
    ctx->pc = 0x23A0E0u;
    {
        const bool branch_taken_0x23a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E0u;
        // 0x23a0e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0e0) {
            ctx->pc = 0x23A0F8u;
            goto label_23a0f8;
        }
    }
    ctx->pc = 0x23A0E8u;
label_23a0e8:
    // 0x23a0e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23a0ec:
    // 0x23a0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23a0f0:
    // 0x23a0f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_23a0f4:
    if (ctx->pc == 0x23A0F4u) {
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F0u;
        // 0x23a0f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A0F8u;
        goto label_23a0f8;
    }
    ctx->pc = 0x23A0F0u;
    {
        const bool branch_taken_0x23a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F0u;
        // 0x23a0f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f0) {
            ctx->pc = 0x23A10Cu;
            goto label_23a10c;
        }
    }
    ctx->pc = 0x23A0F8u;
label_23a0f8:
    // 0x23a0f8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_23a0fc:
    // 0x23a0fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a100:
    // 0x23a100: 0x0  nop
    ctx->pc = 0x23a100u;
    // NOP
label_23a104:
    // 0x23a104: 0x1044fff6  beq         $v0, $a0, . + 4 + (-0xA << 2)
label_23a108:
    if (ctx->pc == 0x23A108u) {
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A10Cu;
        goto label_23a10c;
    }
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0e0;
        }
    }
    ctx->pc = 0x23A10Cu;
label_23a10c:
    // 0x23a10c: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x23a10cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_23a110:
    // 0x23a110: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_23a114:
    // 0x23a114: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_23a118:
    // 0x23a118: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_23a11c:
    if (ctx->pc == 0x23A11Cu) {
        ctx->pc = 0x23A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A118u;
        // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A120u;
        goto label_23a120;
    }
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A118u;
            // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x23A120u;
label_23a120:
    // 0x23a120: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_23a124:
    if (ctx->pc == 0x23A124u) {
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A128u;
        goto label_23a128;
    }
    ctx->pc = 0x23A120u;
    {
        const bool branch_taken_0x23a120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a120) {
            ctx->pc = 0x23A160u;
            goto label_23a160;
        }
    }
    ctx->pc = 0x23A128u;
label_23a128:
    // 0x23a128: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_23a12c:
    if (ctx->pc == 0x23A12Cu) {
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A130u;
        goto label_23a130;
    }
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A130u;
label_23a130:
    // 0x23a130: 0x9e430004  lwu         $v1, 0x4($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23a134:
    // 0x23a134: 0x0  nop
    ctx->pc = 0x23a134u;
    // NOP
label_23a138:
    // 0x23a138: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_23a13c:
    // 0x23a13c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_23a140:
    // 0x23a140: 0x0  nop
    ctx->pc = 0x23a140u;
    // NOP
label_23a144:
    // 0x23a144: 0x0  nop
    ctx->pc = 0x23a144u;
    // NOP
label_23a148:
    // 0x23a148: 0x0  nop
    ctx->pc = 0x23a148u;
    // NOP
label_23a14c:
    // 0x23a14c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a150:
    if (ctx->pc == 0x23A150u) {
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A154u;
        goto label_23a154;
    }
    ctx->pc = 0x23A14Cu;
    {
        const bool branch_taken_0x23a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a14c) {
            ctx->pc = 0x23A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a138;
        }
    }
    ctx->pc = 0x23A154u;
label_23a154:
    // 0x23a154: 0x1000ffba  b           . + 4 + (-0x46 << 2)
label_23a158:
    if (ctx->pc == 0x23A158u) {
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A15Cu;
        goto label_23a15c;
    }
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A15Cu;
label_23a15c:
    // 0x23a15c: 0x0  nop
    ctx->pc = 0x23a15cu;
    // NOP
label_23a160:
    // 0x23a160: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a164:
    // 0x23a164: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a168:
    // 0x23a168: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a16c:
    // 0x23a16c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23a170:
    // 0x23a170: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_23a174:
    // 0x23a174: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a178:
    // 0x23a178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23a17c:
    if (ctx->pc == 0x23A17Cu) {
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A180u;
        goto label_23a180;
    }
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A198u;
            goto label_23a198;
        }
    }
    ctx->pc = 0x23A180u;
label_23a180:
    // 0x23a180: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23a184:
    // 0x23a184: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a188:
    // 0x23a188: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23a18c:
    // 0x23a18c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23a190:
    if (ctx->pc == 0x23A190u) {
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A194u;
        goto label_23a194;
    }
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1A0u;
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A194u;
label_23a194:
    // 0x23a194: 0x0  nop
    ctx->pc = 0x23a194u;
    // NOP
label_23a198:
    // 0x23a198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a19c:
    // 0x23a19c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1a0:
    // 0x23a1a0: 0x26900828  addiu       $s0, $s4, 0x828
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a1a4:
    // 0x23a1a4: 0x2412fffc  addiu       $s2, $zero, -0x4
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a1a8:
    // 0x23a1a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a1ac:
    // 0x23a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a1b0:
    // 0x23a1b0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x23a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_23a1b4:
    // 0x23a1b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a1b8:
    // 0x23a1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23a1bc:
    if (ctx->pc == 0x23A1BCu) {
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1C0u;
        goto label_23a1c0;
    }
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A1D0u;
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1C0u;
label_23a1c0:
    // 0x23a1c0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_23a1c4:
    // 0x23a1c4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_23a1c8:
    if (ctx->pc == 0x23A1C8u) {
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1CCu;
        goto label_23a1cc;
    }
    ctx->pc = 0x23A1C4u;
    {
        const bool branch_taken_0x23a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1c4) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A1CCu;
label_23a1cc:
    // 0x23a1cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a1d0:
    // 0x23a1d0: 0xc08e672  jal         func_2399C8
label_23a1d4:
    if (ctx->pc == 0x23A1D4u) {
        ctx->pc = 0x23A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1D0u;
        // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1D8u;
        goto label_23a1d8;
    }
    ctx->pc = 0x23A1D0u;
    SET_GPR_U32(ctx, 31, 0x23A1D8u);
    ctx->pc = 0x23A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1D0u;
    // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2399C8u;
    { ctx->pc = 0x2399c8; return; }
    ctx->pc = 0x23A1D8u;
label_23a1d8:
    // 0x23a1d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a1dc:
    // 0x23a1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23a1e0:
    // 0x23a1e0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x23a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_23a1e4:
    // 0x23a1e4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a1e8:
    // 0x23a1e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23a1ec:
    if (ctx->pc == 0x23A1ECu) {
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1F0u;
        goto label_23a1f0;
    }
    ctx->pc = 0x23A1E8u;
    {
        const bool branch_taken_0x23a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1e8) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1F0u;
label_23a1f0:
    // 0x23a1f0: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23a1f4:
    // 0x23a1f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a1f8:
    // 0x23a1f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1fc:
    // 0x23a1fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_23a200:
    if (ctx->pc == 0x23A200u) {
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A204u;
        goto label_23a204;
    }
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x0  nop
    ctx->pc = 0x23a204u;
    // NOP
label_23a208:
    // 0x23a208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a20c:
    // 0x23a20c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a210:
    // 0x23a210: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a214:
    // 0x23a214: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a218:
    // 0x23a218: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a21c:
    // 0x23a21c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a220:
    // 0x23a220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_23a224:
    // 0x23a224: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a228:
    // 0x23a228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23a22c:
    if (ctx->pc == 0x23A22Cu) {
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A230u;
        goto label_23a230;
    }
    ctx->pc = 0x23A228u;
    {
        const bool branch_taken_0x23a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a228) {
            ctx->pc = 0x23A238u;
            goto label_23a238;
        }
    }
    ctx->pc = 0x23A230u;
label_23a230:
    // 0x23a230: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_23a234:
    if (ctx->pc == 0x23A234u) {
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A238u;
        goto label_23a238;
    }
    ctx->pc = 0x23A230u;
    {
        const bool branch_taken_0x23a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a230) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A238u;
label_23a238:
    // 0x23a238: 0xc08e9fc  jal         func_23A7F0
label_23a23c:
    if (ctx->pc == 0x23A23Cu) {
        ctx->pc = 0x23A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A238u;
        // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A240u;
        goto label_23a240;
    }
    ctx->pc = 0x23A238u;
    SET_GPR_U32(ctx, 31, 0x23A240u);
    ctx->pc = 0x23A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A238u;
    // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x23A240u;
label_23a240:
    // 0x23a240: 0x10000039  b           . + 4 + (0x39 << 2)
label_23a244:
    if (ctx->pc == 0x23A244u) {
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A248u;
        goto label_23a248;
    }
    ctx->pc = 0x23A240u;
    {
        const bool branch_taken_0x23a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a240) {
            ctx->pc = 0x23A328u;
            goto label_23a328;
        }
    }
    ctx->pc = 0x23A248u;
label_23a248:
    // 0x23a248: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a24c:
    // 0x23a24c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a250:
    // 0x23a250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a254:
    // 0x23a254: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a258:
    // 0x23a258: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23a25c:
    // 0x23a25c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23a260:
    // 0x23a260: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a264:
    // 0x23a264: 0x1000002d  b           . + 4 + (0x2D << 2)
label_23a268:
    if (ctx->pc == 0x23A268u) {
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A26Cu;
        goto label_23a26c;
    }
    ctx->pc = 0x23A264u;
    {
        const bool branch_taken_0x23a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a264) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A26Cu;
label_23a26c:
    // 0x23a26c: 0x0  nop
    ctx->pc = 0x23a26cu;
    // NOP
label_23a270:
    // 0x23a270: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a274:
    // 0x23a274: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23a278:
    // 0x23a278: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x23a278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
label_23a27c:
    // 0x23a27c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x23a27cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_23a280:
    // 0x23a280: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_23a284:
    // 0x23a284: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a288:
    // 0x23a288: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_23a28c:
    // 0x23a28c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x23a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_23a290:
    // 0x23a290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23a294:
    // 0x23a294: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a294u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_23a298:
    // 0x23a298: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_23a29c:
    // 0x23a29c: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a2a0:
    // 0x23a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a2a4:
    // 0x23a2a4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x23a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
label_23a2a8:
    // 0x23a2a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23a2ac:
    // 0x23a2ac: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x23a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_23a2b0:
    // 0x23a2b0: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x23a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_23a2b4:
    // 0x23a2b4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x23a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_23a2b8:
    // 0x23a2b8: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x23a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_23a2bc:
    // 0x23a2bc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x23a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_23a2c0:
    // 0x23a2c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_23a2c4:
    if (ctx->pc == 0x23A2C4u) {
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A2C8u;
        goto label_23a2c8;
    }
    ctx->pc = 0x23A2C0u;
    {
        const bool branch_taken_0x23a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2c0) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2C8u;
label_23a2c8:
    // 0x23a2c8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a2cc:
    // 0x23a2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a2d0:
    // 0x23a2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a2d4:
    // 0x23a2d4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a2d8:
    // 0x23a2d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23a2dc:
    // 0x23a2dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23a2e0:
    // 0x23a2e0: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a2e4:
    // 0x23a2e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_23a2e8:
    if (ctx->pc == 0x23A2E8u) {
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A2ECu;
        goto label_23a2ec;
    }
    ctx->pc = 0x23A2E4u;
    {
        const bool branch_taken_0x23a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2e4) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2ECu;
label_23a2ec:
    // 0x23a2ec: 0x0  nop
    ctx->pc = 0x23a2ecu;
    // NOP
label_23a2f0:
    // 0x23a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a2f4:
    // 0x23a2f4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23a2f8:
    // 0x23a2f8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_23a2fc:
    // 0x23a2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a300:
    // 0x23a300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23a304:
    // 0x23a304: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_23a308:
    // 0x23a308: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23a30c:
    // 0x23a30c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_23a310:
    // 0x23a310: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x23a310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_23a314:
    // 0x23a314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a318:
    // 0x23a318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a31c:
    // 0x23a31c: 0xc08e9fc  jal         func_23A7F0
label_23a320:
    if (ctx->pc == 0x23A320u) {
        ctx->pc = 0x23A324u;
        goto label_23a324;
    }
    ctx->pc = 0x23A31Cu;
    SET_GPR_U32(ctx, 31, 0x23A324u);
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x23A324u;
label_23a324:
    // 0x23a324: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x23a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23a328:
    // 0x23a328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a32c:
    // 0x23a32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23a330:
    // 0x23a330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a334:
    // 0x23a334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23a338:
    // 0x23a338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23a338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23a33c:
    // 0x23a33c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23a340:
    // 0x23a340: 0x3e00008  jr          $ra
label_23a344:
    if (ctx->pc == 0x23A344u) {
        ctx->pc = 0x23A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A340u;
        // 0x23a344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A348u;
        goto label_23a348;
    }
    ctx->pc = 0x23A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A340u;
        // 0x23a344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A348u;
label_23a348:
    // 0x23a348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23a34c:
    // 0x23a34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a350:
    // 0x23a350: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x23a350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23a354:
    // 0x23a354: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_23a358:
    if (ctx->pc == 0x23A358u) {
        ctx->pc = 0x23A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A354u;
        // 0x23a358: 0xa5180b  movn        $v1, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A35Cu;
        goto label_23a35c;
    }
    ctx->pc = 0x23A354u;
    {
        const bool branch_taken_0x23a354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A354u;
        // 0x23a358: 0xa5180b  movn        $v1, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a354) {
            ctx->pc = 0x23A374u;
            goto label_23a374;
        }
    }
    ctx->pc = 0x23A35Cu;
label_23a35c:
    // 0x23a35c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_23a360:
    if (ctx->pc == 0x23A360u) {
        ctx->pc = 0x23A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A35Cu;
        // 0x23a360: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A364u;
        goto label_23a364;
    }
    ctx->pc = 0x23A35Cu;
    {
        const bool branch_taken_0x23a35c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A35Cu;
        // 0x23a360: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a35c) {
            ctx->pc = 0x23A374u;
            goto label_23a374;
        }
    }
    ctx->pc = 0x23A364u;
label_23a364:
    // 0x23a364: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23a364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23a368:
    // 0x23a368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23a368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23a36c:
    // 0x23a36c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23a36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23a370:
    // 0x23a370: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23a370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23a374:
    // 0x23a374: 0x3e00008  jr          $ra
label_23a378:
    if (ctx->pc == 0x23A378u) {
        ctx->pc = 0x23A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A374u;
        // 0x23a378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A37Cu;
        goto label_23a37c;
    }
    ctx->pc = 0x23A374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A374u;
        // 0x23a378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A37Cu;
label_23a37c:
    // 0x23a37c: 0x0  nop
    ctx->pc = 0x23a37cu;
    // NOP
    ctx->pc = 0x23a380u;
    return;
}
