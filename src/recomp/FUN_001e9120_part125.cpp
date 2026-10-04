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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part125(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2259e0u: goto label_2259e0;
        case 0x2259e4u: goto label_2259e4;
        case 0x2259e8u: goto label_2259e8;
        case 0x2259ecu: goto label_2259ec;
        case 0x2259f0u: goto label_2259f0;
        case 0x2259f4u: goto label_2259f4;
        case 0x2259f8u: goto label_2259f8;
        case 0x2259fcu: goto label_2259fc;
        case 0x225a00u: goto label_225a00;
        case 0x225a04u: goto label_225a04;
        case 0x225a08u: goto label_225a08;
        case 0x225a0cu: goto label_225a0c;
        case 0x225a10u: goto label_225a10;
        case 0x225a14u: goto label_225a14;
        case 0x225a18u: goto label_225a18;
        case 0x225a1cu: goto label_225a1c;
        case 0x225a20u: goto label_225a20;
        case 0x225a24u: goto label_225a24;
        case 0x225a28u: goto label_225a28;
        case 0x225a2cu: goto label_225a2c;
        case 0x225a30u: goto label_225a30;
        case 0x225a34u: goto label_225a34;
        case 0x225a38u: goto label_225a38;
        case 0x225a3cu: goto label_225a3c;
        case 0x225a40u: goto label_225a40;
        case 0x225a44u: goto label_225a44;
        case 0x225a48u: goto label_225a48;
        case 0x225a4cu: goto label_225a4c;
        case 0x225a50u: goto label_225a50;
        case 0x225a54u: goto label_225a54;
        case 0x225a58u: goto label_225a58;
        case 0x225a5cu: goto label_225a5c;
        case 0x225a60u: goto label_225a60;
        case 0x225a64u: goto label_225a64;
        case 0x225a68u: goto label_225a68;
        case 0x225a6cu: goto label_225a6c;
        case 0x225a70u: goto label_225a70;
        case 0x225a74u: goto label_225a74;
        case 0x225a78u: goto label_225a78;
        case 0x225a7cu: goto label_225a7c;
        case 0x225a80u: goto label_225a80;
        case 0x225a84u: goto label_225a84;
        case 0x225a88u: goto label_225a88;
        case 0x225a8cu: goto label_225a8c;
        case 0x225a90u: goto label_225a90;
        case 0x225a94u: goto label_225a94;
        case 0x225a98u: goto label_225a98;
        case 0x225a9cu: goto label_225a9c;
        case 0x225aa0u: goto label_225aa0;
        case 0x225aa4u: goto label_225aa4;
        case 0x225aa8u: goto label_225aa8;
        case 0x225aacu: goto label_225aac;
        case 0x225ab0u: goto label_225ab0;
        case 0x225ab4u: goto label_225ab4;
        case 0x225ab8u: goto label_225ab8;
        case 0x225abcu: goto label_225abc;
        case 0x225ac0u: goto label_225ac0;
        case 0x225ac4u: goto label_225ac4;
        case 0x225ac8u: goto label_225ac8;
        case 0x225accu: goto label_225acc;
        case 0x225ad0u: goto label_225ad0;
        case 0x225ad4u: goto label_225ad4;
        case 0x225ad8u: goto label_225ad8;
        case 0x225adcu: goto label_225adc;
        case 0x225ae0u: goto label_225ae0;
        case 0x225ae4u: goto label_225ae4;
        case 0x225ae8u: goto label_225ae8;
        case 0x225aecu: goto label_225aec;
        case 0x225af0u: goto label_225af0;
        case 0x225af4u: goto label_225af4;
        case 0x225af8u: goto label_225af8;
        case 0x225afcu: goto label_225afc;
        case 0x225b00u: goto label_225b00;
        case 0x225b04u: goto label_225b04;
        case 0x225b08u: goto label_225b08;
        case 0x225b0cu: goto label_225b0c;
        case 0x225b10u: goto label_225b10;
        case 0x225b14u: goto label_225b14;
        case 0x225b18u: goto label_225b18;
        case 0x225b1cu: goto label_225b1c;
        case 0x225b20u: goto label_225b20;
        case 0x225b24u: goto label_225b24;
        case 0x225b28u: goto label_225b28;
        case 0x225b2cu: goto label_225b2c;
        case 0x225b30u: goto label_225b30;
        case 0x225b34u: goto label_225b34;
        case 0x225b38u: goto label_225b38;
        case 0x225b3cu: goto label_225b3c;
        case 0x225b40u: goto label_225b40;
        case 0x225b44u: goto label_225b44;
        case 0x225b48u: goto label_225b48;
        case 0x225b4cu: goto label_225b4c;
        case 0x225b50u: goto label_225b50;
        case 0x225b54u: goto label_225b54;
        case 0x225b58u: goto label_225b58;
        case 0x225b5cu: goto label_225b5c;
        case 0x225b60u: goto label_225b60;
        case 0x225b64u: goto label_225b64;
        case 0x225b68u: goto label_225b68;
        case 0x225b6cu: goto label_225b6c;
        case 0x225b70u: goto label_225b70;
        case 0x225b74u: goto label_225b74;
        case 0x225b78u: goto label_225b78;
        case 0x225b7cu: goto label_225b7c;
        case 0x225b80u: goto label_225b80;
        case 0x225b84u: goto label_225b84;
        case 0x225b88u: goto label_225b88;
        case 0x225b8cu: goto label_225b8c;
        case 0x225b90u: goto label_225b90;
        case 0x225b94u: goto label_225b94;
        case 0x225b98u: goto label_225b98;
        case 0x225b9cu: goto label_225b9c;
        case 0x225ba0u: goto label_225ba0;
        case 0x225ba4u: goto label_225ba4;
        case 0x225ba8u: goto label_225ba8;
        case 0x225bacu: goto label_225bac;
        case 0x225bb0u: goto label_225bb0;
        case 0x225bb4u: goto label_225bb4;
        case 0x225bb8u: goto label_225bb8;
        case 0x225bbcu: goto label_225bbc;
        case 0x225bc0u: goto label_225bc0;
        case 0x225bc4u: goto label_225bc4;
        case 0x225bc8u: goto label_225bc8;
        case 0x225bccu: goto label_225bcc;
        case 0x225bd0u: goto label_225bd0;
        case 0x225bd4u: goto label_225bd4;
        case 0x225bd8u: goto label_225bd8;
        case 0x225bdcu: goto label_225bdc;
        case 0x225be0u: goto label_225be0;
        case 0x225be4u: goto label_225be4;
        case 0x225be8u: goto label_225be8;
        case 0x225becu: goto label_225bec;
        case 0x225bf0u: goto label_225bf0;
        case 0x225bf4u: goto label_225bf4;
        case 0x225bf8u: goto label_225bf8;
        case 0x225bfcu: goto label_225bfc;
        case 0x225c00u: goto label_225c00;
        case 0x225c04u: goto label_225c04;
        case 0x225c08u: goto label_225c08;
        case 0x225c0cu: goto label_225c0c;
        case 0x225c10u: goto label_225c10;
        case 0x225c14u: goto label_225c14;
        case 0x225c18u: goto label_225c18;
        case 0x225c1cu: goto label_225c1c;
        case 0x225c20u: goto label_225c20;
        case 0x225c24u: goto label_225c24;
        case 0x225c28u: goto label_225c28;
        case 0x225c2cu: goto label_225c2c;
        case 0x225c30u: goto label_225c30;
        case 0x225c34u: goto label_225c34;
        case 0x225c38u: goto label_225c38;
        case 0x225c3cu: goto label_225c3c;
        case 0x225c40u: goto label_225c40;
        case 0x225c44u: goto label_225c44;
        case 0x225c48u: goto label_225c48;
        case 0x225c4cu: goto label_225c4c;
        case 0x225c50u: goto label_225c50;
        case 0x225c54u: goto label_225c54;
        case 0x225c58u: goto label_225c58;
        case 0x225c5cu: goto label_225c5c;
        case 0x225c60u: goto label_225c60;
        case 0x225c64u: goto label_225c64;
        case 0x225c68u: goto label_225c68;
        case 0x225c6cu: goto label_225c6c;
        case 0x225c70u: goto label_225c70;
        case 0x225c74u: goto label_225c74;
        case 0x225c78u: goto label_225c78;
        case 0x225c7cu: goto label_225c7c;
        case 0x225c80u: goto label_225c80;
        case 0x225c84u: goto label_225c84;
        case 0x225c88u: goto label_225c88;
        case 0x225c8cu: goto label_225c8c;
        case 0x225c90u: goto label_225c90;
        case 0x225c94u: goto label_225c94;
        case 0x225c98u: goto label_225c98;
        case 0x225c9cu: goto label_225c9c;
        case 0x225ca0u: goto label_225ca0;
        case 0x225ca4u: goto label_225ca4;
        case 0x225ca8u: goto label_225ca8;
        case 0x225cacu: goto label_225cac;
        case 0x225cb0u: goto label_225cb0;
        case 0x225cb4u: goto label_225cb4;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cbcu: goto label_225cbc;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cc4u: goto label_225cc4;
        case 0x225cc8u: goto label_225cc8;
        case 0x225cccu: goto label_225ccc;
        case 0x225cd0u: goto label_225cd0;
        case 0x225cd4u: goto label_225cd4;
        case 0x225cd8u: goto label_225cd8;
        case 0x225cdcu: goto label_225cdc;
        case 0x225ce0u: goto label_225ce0;
        case 0x225ce4u: goto label_225ce4;
        case 0x225ce8u: goto label_225ce8;
        case 0x225cecu: goto label_225cec;
        case 0x225cf0u: goto label_225cf0;
        case 0x225cf4u: goto label_225cf4;
        case 0x225cf8u: goto label_225cf8;
        case 0x225cfcu: goto label_225cfc;
        case 0x225d00u: goto label_225d00;
        case 0x225d04u: goto label_225d04;
        case 0x225d08u: goto label_225d08;
        case 0x225d0cu: goto label_225d0c;
        case 0x225d10u: goto label_225d10;
        case 0x225d14u: goto label_225d14;
        case 0x225d18u: goto label_225d18;
        case 0x225d1cu: goto label_225d1c;
        case 0x225d20u: goto label_225d20;
        case 0x225d24u: goto label_225d24;
        case 0x225d28u: goto label_225d28;
        case 0x225d2cu: goto label_225d2c;
        case 0x225d30u: goto label_225d30;
        case 0x225d34u: goto label_225d34;
        case 0x225d38u: goto label_225d38;
        case 0x225d3cu: goto label_225d3c;
        case 0x225d40u: goto label_225d40;
        case 0x225d44u: goto label_225d44;
        case 0x225d48u: goto label_225d48;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d50u: goto label_225d50;
        case 0x225d54u: goto label_225d54;
        case 0x225d58u: goto label_225d58;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d60u: goto label_225d60;
        case 0x225d64u: goto label_225d64;
        case 0x225d68u: goto label_225d68;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d70u: goto label_225d70;
        case 0x225d74u: goto label_225d74;
        case 0x225d78u: goto label_225d78;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d80u: goto label_225d80;
        case 0x225d84u: goto label_225d84;
        case 0x225d88u: goto label_225d88;
        case 0x225d8cu: goto label_225d8c;
        case 0x225d90u: goto label_225d90;
        case 0x225d94u: goto label_225d94;
        case 0x225d98u: goto label_225d98;
        case 0x225d9cu: goto label_225d9c;
        case 0x225da0u: goto label_225da0;
        case 0x225da4u: goto label_225da4;
        case 0x225da8u: goto label_225da8;
        case 0x225dacu: goto label_225dac;
        case 0x225db0u: goto label_225db0;
        case 0x225db4u: goto label_225db4;
        case 0x225db8u: goto label_225db8;
        case 0x225dbcu: goto label_225dbc;
        case 0x225dc0u: goto label_225dc0;
        case 0x225dc4u: goto label_225dc4;
        case 0x225dc8u: goto label_225dc8;
        case 0x225dccu: goto label_225dcc;
        case 0x225dd0u: goto label_225dd0;
        case 0x225dd4u: goto label_225dd4;
        case 0x225dd8u: goto label_225dd8;
        case 0x225ddcu: goto label_225ddc;
        case 0x225de0u: goto label_225de0;
        case 0x225de4u: goto label_225de4;
        case 0x225de8u: goto label_225de8;
        case 0x225decu: goto label_225dec;
        case 0x225df0u: goto label_225df0;
        case 0x225df4u: goto label_225df4;
        case 0x225df8u: goto label_225df8;
        case 0x225dfcu: goto label_225dfc;
        case 0x225e00u: goto label_225e00;
        case 0x225e04u: goto label_225e04;
        case 0x225e08u: goto label_225e08;
        case 0x225e0cu: goto label_225e0c;
        case 0x225e10u: goto label_225e10;
        case 0x225e14u: goto label_225e14;
        case 0x225e18u: goto label_225e18;
        case 0x225e1cu: goto label_225e1c;
        case 0x225e20u: goto label_225e20;
        case 0x225e24u: goto label_225e24;
        case 0x225e28u: goto label_225e28;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e30u: goto label_225e30;
        case 0x225e34u: goto label_225e34;
        case 0x225e38u: goto label_225e38;
        case 0x225e3cu: goto label_225e3c;
        case 0x225e40u: goto label_225e40;
        case 0x225e44u: goto label_225e44;
        case 0x225e48u: goto label_225e48;
        case 0x225e4cu: goto label_225e4c;
        case 0x225e50u: goto label_225e50;
        case 0x225e54u: goto label_225e54;
        case 0x225e58u: goto label_225e58;
        case 0x225e5cu: goto label_225e5c;
        case 0x225e60u: goto label_225e60;
        case 0x225e64u: goto label_225e64;
        case 0x225e68u: goto label_225e68;
        case 0x225e6cu: goto label_225e6c;
        case 0x225e70u: goto label_225e70;
        case 0x225e74u: goto label_225e74;
        case 0x225e78u: goto label_225e78;
        case 0x225e7cu: goto label_225e7c;
        case 0x225e80u: goto label_225e80;
        case 0x225e84u: goto label_225e84;
        case 0x225e88u: goto label_225e88;
        case 0x225e8cu: goto label_225e8c;
        case 0x225e90u: goto label_225e90;
        case 0x225e94u: goto label_225e94;
        case 0x225e98u: goto label_225e98;
        case 0x225e9cu: goto label_225e9c;
        case 0x225ea0u: goto label_225ea0;
        case 0x225ea4u: goto label_225ea4;
        case 0x225ea8u: goto label_225ea8;
        case 0x225eacu: goto label_225eac;
        case 0x225eb0u: goto label_225eb0;
        case 0x225eb4u: goto label_225eb4;
        case 0x225eb8u: goto label_225eb8;
        case 0x225ebcu: goto label_225ebc;
        case 0x225ec0u: goto label_225ec0;
        case 0x225ec4u: goto label_225ec4;
        case 0x225ec8u: goto label_225ec8;
        case 0x225eccu: goto label_225ecc;
        case 0x225ed0u: goto label_225ed0;
        case 0x225ed4u: goto label_225ed4;
        case 0x225ed8u: goto label_225ed8;
        case 0x225edcu: goto label_225edc;
        case 0x225ee0u: goto label_225ee0;
        case 0x225ee4u: goto label_225ee4;
        case 0x225ee8u: goto label_225ee8;
        case 0x225eecu: goto label_225eec;
        case 0x225ef0u: goto label_225ef0;
        case 0x225ef4u: goto label_225ef4;
        case 0x225ef8u: goto label_225ef8;
        case 0x225efcu: goto label_225efc;
        case 0x225f00u: goto label_225f00;
        case 0x225f04u: goto label_225f04;
        case 0x225f08u: goto label_225f08;
        case 0x225f0cu: goto label_225f0c;
        case 0x225f10u: goto label_225f10;
        case 0x225f14u: goto label_225f14;
        case 0x225f18u: goto label_225f18;
        case 0x225f1cu: goto label_225f1c;
        case 0x225f20u: goto label_225f20;
        case 0x225f24u: goto label_225f24;
        case 0x225f28u: goto label_225f28;
        case 0x225f2cu: goto label_225f2c;
        case 0x225f30u: goto label_225f30;
        case 0x225f34u: goto label_225f34;
        case 0x225f38u: goto label_225f38;
        case 0x225f3cu: goto label_225f3c;
        case 0x225f40u: goto label_225f40;
        case 0x225f44u: goto label_225f44;
        case 0x225f48u: goto label_225f48;
        case 0x225f4cu: goto label_225f4c;
        case 0x225f50u: goto label_225f50;
        case 0x225f54u: goto label_225f54;
        case 0x225f58u: goto label_225f58;
        case 0x225f5cu: goto label_225f5c;
        case 0x225f60u: goto label_225f60;
        case 0x225f64u: goto label_225f64;
        case 0x225f68u: goto label_225f68;
        case 0x225f6cu: goto label_225f6c;
        case 0x225f70u: goto label_225f70;
        case 0x225f74u: goto label_225f74;
        case 0x225f78u: goto label_225f78;
        case 0x225f7cu: goto label_225f7c;
        case 0x225f80u: goto label_225f80;
        case 0x225f84u: goto label_225f84;
        case 0x225f88u: goto label_225f88;
        case 0x225f8cu: goto label_225f8c;
        case 0x225f90u: goto label_225f90;
        case 0x225f94u: goto label_225f94;
        case 0x225f98u: goto label_225f98;
        case 0x225f9cu: goto label_225f9c;
        case 0x225fa0u: goto label_225fa0;
        case 0x225fa4u: goto label_225fa4;
        case 0x225fa8u: goto label_225fa8;
        case 0x225facu: goto label_225fac;
        case 0x225fb0u: goto label_225fb0;
        case 0x225fb4u: goto label_225fb4;
        case 0x225fb8u: goto label_225fb8;
        case 0x225fbcu: goto label_225fbc;
        case 0x225fc0u: goto label_225fc0;
        case 0x225fc4u: goto label_225fc4;
        case 0x225fc8u: goto label_225fc8;
        case 0x225fccu: goto label_225fcc;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fd4u: goto label_225fd4;
        case 0x225fd8u: goto label_225fd8;
        case 0x225fdcu: goto label_225fdc;
        case 0x225fe0u: goto label_225fe0;
        case 0x225fe4u: goto label_225fe4;
        case 0x225fe8u: goto label_225fe8;
        case 0x225fecu: goto label_225fec;
        case 0x225ff0u: goto label_225ff0;
        case 0x225ff4u: goto label_225ff4;
        case 0x225ff8u: goto label_225ff8;
        case 0x225ffcu: goto label_225ffc;
        case 0x226000u: goto label_226000;
        case 0x226004u: goto label_226004;
        case 0x226008u: goto label_226008;
        case 0x22600cu: goto label_22600c;
        case 0x226010u: goto label_226010;
        case 0x226014u: goto label_226014;
        case 0x226018u: goto label_226018;
        case 0x22601cu: goto label_22601c;
        case 0x226020u: goto label_226020;
        case 0x226024u: goto label_226024;
        case 0x226028u: goto label_226028;
        case 0x22602cu: goto label_22602c;
        case 0x226030u: goto label_226030;
        case 0x226034u: goto label_226034;
        case 0x226038u: goto label_226038;
        case 0x22603cu: goto label_22603c;
        case 0x226040u: goto label_226040;
        case 0x226044u: goto label_226044;
        case 0x226048u: goto label_226048;
        case 0x22604cu: goto label_22604c;
        case 0x226050u: goto label_226050;
        case 0x226054u: goto label_226054;
        case 0x226058u: goto label_226058;
        case 0x22605cu: goto label_22605c;
        case 0x226060u: goto label_226060;
        case 0x226064u: goto label_226064;
        case 0x226068u: goto label_226068;
        case 0x22606cu: goto label_22606c;
        case 0x226070u: goto label_226070;
        case 0x226074u: goto label_226074;
        case 0x226078u: goto label_226078;
        case 0x22607cu: goto label_22607c;
        case 0x226080u: goto label_226080;
        case 0x226084u: goto label_226084;
        case 0x226088u: goto label_226088;
        case 0x22608cu: goto label_22608c;
        case 0x226090u: goto label_226090;
        case 0x226094u: goto label_226094;
        case 0x226098u: goto label_226098;
        case 0x22609cu: goto label_22609c;
        case 0x2260a0u: goto label_2260a0;
        case 0x2260a4u: goto label_2260a4;
        case 0x2260a8u: goto label_2260a8;
        case 0x2260acu: goto label_2260ac;
        case 0x2260b0u: goto label_2260b0;
        case 0x2260b4u: goto label_2260b4;
        case 0x2260b8u: goto label_2260b8;
        case 0x2260bcu: goto label_2260bc;
        case 0x2260c0u: goto label_2260c0;
        case 0x2260c4u: goto label_2260c4;
        case 0x2260c8u: goto label_2260c8;
        case 0x2260ccu: goto label_2260cc;
        case 0x2260d0u: goto label_2260d0;
        case 0x2260d4u: goto label_2260d4;
        case 0x2260d8u: goto label_2260d8;
        case 0x2260dcu: goto label_2260dc;
        case 0x2260e0u: goto label_2260e0;
        case 0x2260e4u: goto label_2260e4;
        case 0x2260e8u: goto label_2260e8;
        case 0x2260ecu: goto label_2260ec;
        case 0x2260f0u: goto label_2260f0;
        case 0x2260f4u: goto label_2260f4;
        case 0x2260f8u: goto label_2260f8;
        case 0x2260fcu: goto label_2260fc;
        case 0x226100u: goto label_226100;
        case 0x226104u: goto label_226104;
        case 0x226108u: goto label_226108;
        case 0x22610cu: goto label_22610c;
        case 0x226110u: goto label_226110;
        case 0x226114u: goto label_226114;
        case 0x226118u: goto label_226118;
        case 0x22611cu: goto label_22611c;
        case 0x226120u: goto label_226120;
        case 0x226124u: goto label_226124;
        case 0x226128u: goto label_226128;
        case 0x22612cu: goto label_22612c;
        case 0x226130u: goto label_226130;
        case 0x226134u: goto label_226134;
        case 0x226138u: goto label_226138;
        case 0x22613cu: goto label_22613c;
        case 0x226140u: goto label_226140;
        case 0x226144u: goto label_226144;
        case 0x226148u: goto label_226148;
        case 0x22614cu: goto label_22614c;
        case 0x226150u: goto label_226150;
        case 0x226154u: goto label_226154;
        case 0x226158u: goto label_226158;
        case 0x22615cu: goto label_22615c;
        case 0x226160u: goto label_226160;
        case 0x226164u: goto label_226164;
        case 0x226168u: goto label_226168;
        case 0x22616cu: goto label_22616c;
        case 0x226170u: goto label_226170;
        case 0x226174u: goto label_226174;
        case 0x226178u: goto label_226178;
        case 0x22617cu: goto label_22617c;
        case 0x226180u: goto label_226180;
        case 0x226184u: goto label_226184;
        case 0x226188u: goto label_226188;
        case 0x22618cu: goto label_22618c;
        case 0x226190u: goto label_226190;
        case 0x226194u: goto label_226194;
        case 0x226198u: goto label_226198;
        case 0x22619cu: goto label_22619c;
        case 0x2261a0u: goto label_2261a0;
        case 0x2261a4u: goto label_2261a4;
        case 0x2261a8u: goto label_2261a8;
        case 0x2261acu: goto label_2261ac;
        default: return;
    }

label_2259e0:
    // 0x2259e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2259e4:
    // 0x2259e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2259e8:
    // 0x2259e8: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x2259e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_2259ec:
    // 0x2259ec: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_2259f0:
    if (ctx->pc == 0x2259F0u) {
        ctx->pc = 0x2259F4u;
        goto label_2259f4;
    }
    ctx->pc = 0x2259ECu;
    {
        const bool branch_taken_0x2259ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2259ec) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x2259F4u;
label_2259f4:
    // 0x2259f4: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x2259f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
label_2259f8:
    // 0x2259f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2259fc:
    if (ctx->pc == 0x2259FCu) {
        ctx->pc = 0x225A00u;
        goto label_225a00;
    }
    ctx->pc = 0x2259F8u;
    {
        const bool branch_taken_0x2259f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2259f8) {
            ctx->pc = 0x225A0Cu;
            goto label_225a0c;
        }
    }
    ctx->pc = 0x225A00u;
label_225a00:
    // 0x225a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a04:
    // 0x225a04: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
label_225a08:
    if (ctx->pc == 0x225A08u) {
        ctx->pc = 0x225A0Cu;
        goto label_225a0c;
    }
    ctx->pc = 0x225A04u;
    {
        const bool branch_taken_0x225a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a04) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A0Cu;
label_225a0c:
    // 0x225a0c: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225a10:
    // 0x225a10: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_225a14:
    // 0x225a14: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225a14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_225a18:
    // 0x225a18: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
label_225a1c:
    // 0x225a1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225a20:
    // 0x225a20: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_225a24:
    if (ctx->pc == 0x225A24u) {
        ctx->pc = 0x225A28u;
        goto label_225a28;
    }
    ctx->pc = 0x225A20u;
    {
        const bool branch_taken_0x225a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a20) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A28u;
label_225a28:
    // 0x225a28: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
label_225a2c:
    // 0x225a2c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225a2cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_225a30:
    // 0x225a30: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225a30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
label_225a34:
    // 0x225a34: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225a38:
    // 0x225a38: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_225a3c:
    if (ctx->pc == 0x225A3Cu) {
        ctx->pc = 0x225A40u;
        goto label_225a40;
    }
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A40u;
label_225a40:
    // 0x225a40: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225a40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225a44:
    // 0x225a44: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_225a48:
    // 0x225a48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225a4c:
    // 0x225a4c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_225a50:
    if (ctx->pc == 0x225A50u) {
        ctx->pc = 0x225A54u;
        goto label_225a54;
    }
    ctx->pc = 0x225A4Cu;
    {
        const bool branch_taken_0x225a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a4c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A54u;
label_225a54:
    // 0x225a54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_225a58:
    // 0x225a58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225a5c:
    // 0x225a5c: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_225a60:
    if (ctx->pc == 0x225A60u) {
        ctx->pc = 0x225A64u;
        goto label_225a64;
    }
    ctx->pc = 0x225A5Cu;
    {
        const bool branch_taken_0x225a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a5c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A64u;
label_225a64:
    // 0x225a64: 0x1000005f  b           . + 4 + (0x5F << 2)
label_225a68:
    if (ctx->pc == 0x225A68u) {
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225A6Cu;
        goto label_225a6c;
    }
    ctx->pc = 0x225A64u;
    {
        const bool branch_taken_0x225a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A64u;
        // 0x225a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a64) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225A6Cu;
label_225a6c:
    // 0x225a6c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x225a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_225a70:
    // 0x225a70: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_225a74:
    if (ctx->pc == 0x225A74u) {
        ctx->pc = 0x225A78u;
        goto label_225a78;
    }
    ctx->pc = 0x225A70u;
    {
        const bool branch_taken_0x225a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a70) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A78u;
label_225a78:
    // 0x225a78: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225a7c:
    // 0x225a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_225a80:
    // 0x225a80: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x225a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_225a84:
    // 0x225a84: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_225a88:
    if (ctx->pc == 0x225A88u) {
        ctx->pc = 0x225A8Cu;
        goto label_225a8c;
    }
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225A8Cu;
label_225a8c:
    // 0x225a8c: 0x90e30015  lbu         $v1, 0x15($a3)
    ctx->pc = 0x225a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
label_225a90:
    // 0x225a90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_225a94:
    if (ctx->pc == 0x225A94u) {
        ctx->pc = 0x225A98u;
        goto label_225a98;
    }
    ctx->pc = 0x225A90u;
    {
        const bool branch_taken_0x225a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225a90) {
            ctx->pc = 0x225AA4u;
            goto label_225aa4;
        }
    }
    ctx->pc = 0x225A98u;
label_225a98:
    // 0x225a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a9c:
    // 0x225a9c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_225aa0:
    if (ctx->pc == 0x225AA0u) {
        ctx->pc = 0x225AA4u;
        goto label_225aa4;
    }
    ctx->pc = 0x225A9Cu;
    {
        const bool branch_taken_0x225a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a9c) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AA4u;
label_225aa4:
    // 0x225aa4: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225aa8:
    // 0x225aa8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_225aac:
    // 0x225aac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x225aacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_225ab0:
    // 0x225ab0: 0x71103  sra         $v0, $a3, 4
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
label_225ab4:
    // 0x225ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225ab8:
    // 0x225ab8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_225abc:
    if (ctx->pc == 0x225ABCu) {
        ctx->pc = 0x225AC0u;
        goto label_225ac0;
    }
    ctx->pc = 0x225AB8u;
    {
        const bool branch_taken_0x225ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ab8) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AC0u;
label_225ac0:
    // 0x225ac0: 0x6443c  dsll32      $t0, $a2, 16
    ctx->pc = 0x225ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 16));
label_225ac4:
    // 0x225ac4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x225ac4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_225ac8:
    // 0x225ac8: 0x81103  sra         $v0, $t0, 4
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 4));
label_225acc:
    // 0x225acc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225accu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225ad0:
    // 0x225ad0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_225ad4:
    if (ctx->pc == 0x225AD4u) {
        ctx->pc = 0x225AD8u;
        goto label_225ad8;
    }
    ctx->pc = 0x225AD0u;
    {
        const bool branch_taken_0x225ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ad0) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AD8u;
label_225ad8:
    // 0x225ad8: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x225ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225adc:
    // 0x225adc: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x225adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_225ae0:
    // 0x225ae0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225ae4:
    // 0x225ae4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_225ae8:
    if (ctx->pc == 0x225AE8u) {
        ctx->pc = 0x225AECu;
        goto label_225aec;
    }
    ctx->pc = 0x225AE4u;
    {
        const bool branch_taken_0x225ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ae4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AECu;
label_225aec:
    // 0x225aec: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x225aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_225af0:
    // 0x225af0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225af4:
    // 0x225af4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_225af8:
    if (ctx->pc == 0x225AF8u) {
        ctx->pc = 0x225AFCu;
        goto label_225afc;
    }
    ctx->pc = 0x225AF4u;
    {
        const bool branch_taken_0x225af4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225af4) {
            ctx->pc = 0x225B04u;
            goto label_225b04;
        }
    }
    ctx->pc = 0x225AFCu;
label_225afc:
    // 0x225afc: 0x10000039  b           . + 4 + (0x39 << 2)
label_225b00:
    if (ctx->pc == 0x225B00u) {
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B04u;
        goto label_225b04;
    }
    ctx->pc = 0x225AFCu;
    {
        const bool branch_taken_0x225afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AFCu;
        // 0x225b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225afc) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B04u;
label_225b04:
    // 0x225b04: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x225b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_225b08:
    // 0x225b08: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_225b0c:
    if (ctx->pc == 0x225B0Cu) {
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B10u;
        goto label_225b10;
    }
    ctx->pc = 0x225B08u;
    {
        const bool branch_taken_0x225b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b08) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B10u;
label_225b10:
    // 0x225b10: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x225b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_225b14:
    // 0x225b14: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_225b18:
    // 0x225b18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_225b1c:
    if (ctx->pc == 0x225B1Cu) {
        ctx->pc = 0x225B20u;
        goto label_225b20;
    }
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b18) {
            ctx->pc = 0x225B84u;
            goto label_225b84;
        }
    }
    ctx->pc = 0x225B20u;
label_225b20:
    // 0x225b20: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225b24:
    // 0x225b24: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_225b28:
    // 0x225b28: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_225b2c:
    // 0x225b2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_225b30:
    // 0x225b30: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
label_225b34:
    // 0x225b34: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225b38:
    // 0x225b38: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_225b3c:
    if (ctx->pc == 0x225B3Cu) {
        ctx->pc = 0x225B40u;
        goto label_225b40;
    }
    ctx->pc = 0x225B38u;
    {
        const bool branch_taken_0x225b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b38) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B40u;
label_225b40:
    // 0x225b40: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
label_225b44:
    // 0x225b44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225b44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_225b48:
    // 0x225b48: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_225b4c:
    // 0x225b4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225b50:
    // 0x225b50: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_225b54:
    if (ctx->pc == 0x225B54u) {
        ctx->pc = 0x225B58u;
        goto label_225b58;
    }
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B58u;
label_225b58:
    // 0x225b58: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_225b5c:
    // 0x225b5c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_225b60:
    // 0x225b60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225b64:
    // 0x225b64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_225b68:
    if (ctx->pc == 0x225B68u) {
        ctx->pc = 0x225B6Cu;
        goto label_225b6c;
    }
    ctx->pc = 0x225B64u;
    {
        const bool branch_taken_0x225b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b64) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B6Cu;
label_225b6c:
    // 0x225b6c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_225b70:
    // 0x225b70: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225b74:
    // 0x225b74: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_225b78:
    if (ctx->pc == 0x225B78u) {
        ctx->pc = 0x225B7Cu;
        goto label_225b7c;
    }
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225B7Cu;
label_225b7c:
    // 0x225b7c: 0x10000019  b           . + 4 + (0x19 << 2)
label_225b80:
    if (ctx->pc == 0x225B80u) {
        ctx->pc = 0x225B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B7Cu;
        // 0x225b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225B84u;
        goto label_225b84;
    }
    ctx->pc = 0x225B7Cu;
    {
        const bool branch_taken_0x225b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B7Cu;
        // 0x225b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b7c) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225B84u;
label_225b84:
    // 0x225b84: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_225b88:
    // 0x225b88: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
label_225b8c:
    // 0x225b8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_225b90:
    // 0x225b90: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
label_225b94:
    // 0x225b94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225b98:
    // 0x225b98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_225b9c:
    if (ctx->pc == 0x225B9Cu) {
        ctx->pc = 0x225BA0u;
        goto label_225ba0;
    }
    ctx->pc = 0x225B98u;
    {
        const bool branch_taken_0x225b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b98) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BA0u;
label_225ba0:
    // 0x225ba0: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
label_225ba4:
    // 0x225ba4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225ba4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_225ba8:
    // 0x225ba8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225ba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_225bac:
    // 0x225bac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225bb0:
    // 0x225bb0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_225bb4:
    if (ctx->pc == 0x225BB4u) {
        ctx->pc = 0x225BB8u;
        goto label_225bb8;
    }
    ctx->pc = 0x225BB0u;
    {
        const bool branch_taken_0x225bb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bb0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BB8u;
label_225bb8:
    // 0x225bb8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_225bbc:
    // 0x225bbc: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x225bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_225bc0:
    // 0x225bc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_225bc4:
    if (ctx->pc == 0x225BC4u) {
        ctx->pc = 0x225BC8u;
        goto label_225bc8;
    }
    ctx->pc = 0x225BC0u;
    {
        const bool branch_taken_0x225bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bc0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BC8u;
label_225bc8:
    // 0x225bc8: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_225bcc:
    // 0x225bcc: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x225bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_225bd0:
    // 0x225bd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_225bd4:
    if (ctx->pc == 0x225BD4u) {
        ctx->pc = 0x225BD8u;
        goto label_225bd8;
    }
    ctx->pc = 0x225BD0u;
    {
        const bool branch_taken_0x225bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225bd0) {
            ctx->pc = 0x225BE0u;
            goto label_225be0;
        }
    }
    ctx->pc = 0x225BD8u;
label_225bd8:
    // 0x225bd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_225bdc:
    if (ctx->pc == 0x225BDCu) {
        ctx->pc = 0x225BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD8u;
        // 0x225bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225BE0u;
        goto label_225be0;
    }
    ctx->pc = 0x225BD8u;
    {
        const bool branch_taken_0x225bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BD8u;
        // 0x225bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bd8) {
            ctx->pc = 0x225BE4u;
            goto label_225be4;
        }
    }
    ctx->pc = 0x225BE0u;
label_225be0:
    // 0x225be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225be4:
    // 0x225be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225be8:
    // 0x225be8: 0x3e00008  jr          $ra
label_225bec:
    if (ctx->pc == 0x225BECu) {
        ctx->pc = 0x225BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BE8u;
        // 0x225bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225BF0u;
        goto label_225bf0;
    }
    ctx->pc = 0x225BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BE8u;
        // 0x225bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225BF0u;
label_225bf0:
    // 0x225bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225bf4:
    // 0x225bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225bf8:
    // 0x225bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225bfc:
    // 0x225bfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225c00:
    // 0x225c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225c04:
    // 0x225c04: 0xaf8092e4  sw          $zero, -0x6D1C($gp)
    ctx->pc = 0x225c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 0));
label_225c08:
    // 0x225c08: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x225c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_225c0c:
    // 0x225c0c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x225c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_225c10:
    // 0x225c10: 0x246391b0  addiu       $v1, $v1, -0x6E50
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939056));
label_225c14:
    // 0x225c14: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x225c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_225c18:
    // 0x225c18: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x225c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_225c1c:
    // 0x225c1c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x225c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_225c20:
    // 0x225c20: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x225c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_225c24:
    // 0x225c24: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x225c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
label_225c28:
    // 0x225c28: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x225c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_225c2c:
    // 0x225c2c: 0xad050020  sw          $a1, 0x20($t0)
    ctx->pc = 0x225c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 5));
label_225c30:
    // 0x225c30: 0xad050030  sw          $a1, 0x30($t0)
    ctx->pc = 0x225c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 5));
label_225c34:
    // 0x225c34: 0xad050040  sw          $a1, 0x40($t0)
    ctx->pc = 0x225c34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 5));
label_225c38:
    // 0x225c38: 0xad050050  sw          $a1, 0x50($t0)
    ctx->pc = 0x225c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 5));
label_225c3c:
    // 0x225c3c: 0xad050060  sw          $a1, 0x60($t0)
    ctx->pc = 0x225c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 5));
label_225c40:
    // 0x225c40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_225c44:
    if (ctx->pc == 0x225C44u) {
        ctx->pc = 0x225C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C40u;
        // 0x225c44: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C48u;
        goto label_225c48;
    }
    ctx->pc = 0x225C40u;
    {
        const bool branch_taken_0x225c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C40u;
        // 0x225c44: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225c40) {
            ctx->pc = 0x225C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225c14;
        }
    }
    ctx->pc = 0x225C48u;
label_225c48:
    // 0x225c48: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x225c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_225c4c:
    // 0x225c4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x225c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_225c50:
    // 0x225c50: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x225c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_225c54:
    // 0x225c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225c58:
    // 0x225c58: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225c5c:
    // 0x225c5c: 0xc041738  jal         func_105CE0
label_225c60:
    if (ctx->pc == 0x225C60u) {
        ctx->pc = 0x225C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C5Cu;
        // 0x225c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C64u;
        goto label_225c64;
    }
    ctx->pc = 0x225C5Cu;
    SET_GPR_U32(ctx, 31, 0x225C64u);
    ctx->pc = 0x225C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C5Cu;
    // 0x225c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x225C5Cu, 0x225C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C64u;
label_225c64:
    // 0x225c64: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x225c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_225c68:
    // 0x225c68: 0xc070080  jal         func_1C0200
label_225c6c:
    if (ctx->pc == 0x225C6Cu) {
        ctx->pc = 0x225C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C68u;
        // 0x225c6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C70u;
        goto label_225c70;
    }
    ctx->pc = 0x225C68u;
    SET_GPR_U32(ctx, 31, 0x225C70u);
    ctx->pc = 0x225C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C68u;
    // 0x225c6c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x225C68u, 0x225C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C70u;
label_225c70:
    // 0x225c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225c74:
    // 0x225c74: 0xc0416e4  jal         func_105B90
label_225c78:
    if (ctx->pc == 0x225C78u) {
        ctx->pc = 0x225C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C74u;
        // 0x225c78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C7Cu;
        goto label_225c7c;
    }
    ctx->pc = 0x225C74u;
    SET_GPR_U32(ctx, 31, 0x225C7Cu);
    ctx->pc = 0x225C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C74u;
    // 0x225c78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x225C74u, 0x225C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C7Cu;
label_225c7c:
    // 0x225c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225c80:
    // 0x225c80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x225c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_225c84:
    // 0x225c84: 0x248491b0  addiu       $a0, $a0, -0x6E50
    ctx->pc = 0x225c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939056));
label_225c88:
    // 0x225c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225c8c:
    // 0x225c8c: 0xc08e93e  jal         func_23A4F8
label_225c90:
    if (ctx->pc == 0x225C90u) {
        ctx->pc = 0x225C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C8Cu;
        // 0x225c90: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C94u;
        goto label_225c94;
    }
    ctx->pc = 0x225C8Cu;
    SET_GPR_U32(ctx, 31, 0x225C94u);
    ctx->pc = 0x225C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C8Cu;
    // 0x225c90: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x225C8Cu, 0x225C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C94u;
label_225c94:
    // 0x225c94: 0xc070038  jal         func_1C00E0
label_225c98:
    if (ctx->pc == 0x225C98u) {
        ctx->pc = 0x225C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225C94u;
        // 0x225c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225C9Cu;
        goto label_225c9c;
    }
    ctx->pc = 0x225C94u;
    SET_GPR_U32(ctx, 31, 0x225C9Cu);
    ctx->pc = 0x225C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C94u;
    // 0x225c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x225C94u, 0x225C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C9Cu;
label_225c9c:
    // 0x225c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225ca0:
    // 0x225ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225ca4:
    // 0x225ca4: 0x3e00008  jr          $ra
label_225ca8:
    if (ctx->pc == 0x225CA8u) {
        ctx->pc = 0x225CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CA4u;
        // 0x225ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CACu;
        goto label_225cac;
    }
    ctx->pc = 0x225CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CA4u;
        // 0x225ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CACu;
label_225cac:
    // 0x225cac: 0x0  nop
    ctx->pc = 0x225cacu;
    // NOP
label_225cb0:
    // 0x225cb0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x225cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_225cb4:
    // 0x225cb4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x225cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_225cb8:
    // 0x225cb8: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x225cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_225cbc:
    // 0x225cbc: 0x3e00008  jr          $ra
label_225cc0:
    if (ctx->pc == 0x225CC0u) {
        ctx->pc = 0x225CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CBCu;
        // 0x225cc0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CC4u;
        goto label_225cc4;
    }
    ctx->pc = 0x225CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CBCu;
        // 0x225cc0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CC4u;
label_225cc4:
    // 0x225cc4: 0x0  nop
    ctx->pc = 0x225cc4u;
    // NOP
label_225cc8:
    // 0x225cc8: 0x0  nop
    ctx->pc = 0x225cc8u;
    // NOP
label_225ccc:
    // 0x225ccc: 0x0  nop
    ctx->pc = 0x225cccu;
    // NOP
label_225cd0:
    // 0x225cd0: 0x3e00008  jr          $ra
label_225cd4:
    if (ctx->pc == 0x225CD4u) {
        ctx->pc = 0x225CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CD0u;
        // 0x225cd4: 0x8f8292e4  lw          $v0, -0x6D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CD8u;
        goto label_225cd8;
    }
    ctx->pc = 0x225CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CD0u;
        // 0x225cd4: 0x8f8292e4  lw          $v0, -0x6D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939364)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CD8u;
label_225cd8:
    // 0x225cd8: 0x0  nop
    ctx->pc = 0x225cd8u;
    // NOP
label_225cdc:
    // 0x225cdc: 0x0  nop
    ctx->pc = 0x225cdcu;
    // NOP
label_225ce0:
    // 0x225ce0: 0x3e00008  jr          $ra
label_225ce4:
    if (ctx->pc == 0x225CE4u) {
        ctx->pc = 0x225CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE0u;
        // 0x225ce4: 0xaf8492e4  sw          $a0, -0x6D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CE8u;
        goto label_225ce8;
    }
    ctx->pc = 0x225CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CE0u;
        // 0x225ce4: 0xaf8492e4  sw          $a0, -0x6D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CE8u;
label_225ce8:
    // 0x225ce8: 0x0  nop
    ctx->pc = 0x225ce8u;
    // NOP
label_225cec:
    // 0x225cec: 0x0  nop
    ctx->pc = 0x225cecu;
    // NOP
label_225cf0:
    // 0x225cf0: 0x3e00008  jr          $ra
label_225cf4:
    if (ctx->pc == 0x225CF4u) {
        ctx->pc = 0x225CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CF0u;
        // 0x225cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225CF8u;
        goto label_225cf8;
    }
    ctx->pc = 0x225CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225CF0u;
        // 0x225cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225CF8u;
label_225cf8:
    // 0x225cf8: 0x0  nop
    ctx->pc = 0x225cf8u;
    // NOP
label_225cfc:
    // 0x225cfc: 0x0  nop
    ctx->pc = 0x225cfcu;
    // NOP
label_225d00:
    // 0x225d00: 0x3e00008  jr          $ra
label_225d04:
    if (ctx->pc == 0x225D04u) {
        ctx->pc = 0x225D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D00u;
        // 0x225d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D08u;
        goto label_225d08;
    }
    ctx->pc = 0x225D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D00u;
        // 0x225d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225D08u;
label_225d08:
    // 0x225d08: 0x0  nop
    ctx->pc = 0x225d08u;
    // NOP
label_225d0c:
    // 0x225d0c: 0x0  nop
    ctx->pc = 0x225d0cu;
    // NOP
label_225d10:
    // 0x225d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225d14:
    // 0x225d14: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x225d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_225d18:
    // 0x225d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225d1c:
    // 0x225d1c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_225d20:
    // 0x225d20: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225d24:
    // 0x225d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225d28:
    // 0x225d28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225d2c:
    // 0x225d2c: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x225d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_225d30:
    // 0x225d30: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x225d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_225d34:
    // 0x225d34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x225d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225d38:
    // 0x225d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225d3c:
    // 0x225d3c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_225d40:
    // 0x225d40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_225d44:
    // 0x225d44: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_225d48:
    // 0x225d48: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_225d4c:
    // 0x225d4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_225d50:
    // 0x225d50: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_225d54:
    // 0x225d54: 0xc06eb08  jal         func_1BAC20
label_225d58:
    if (ctx->pc == 0x225D58u) {
        ctx->pc = 0x225D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D54u;
        // 0x225d58: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D5Cu;
        goto label_225d5c;
    }
    ctx->pc = 0x225D54u;
    SET_GPR_U32(ctx, 31, 0x225D5Cu);
    ctx->pc = 0x225D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D54u;
    // 0x225d58: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x225D54u, 0x225D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D5Cu;
label_225d5c:
    // 0x225d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225d60:
    // 0x225d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225d64:
    // 0x225d64: 0x3e00008  jr          $ra
label_225d68:
    if (ctx->pc == 0x225D68u) {
        ctx->pc = 0x225D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D64u;
        // 0x225d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225D6Cu;
        goto label_225d6c;
    }
    ctx->pc = 0x225D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D64u;
        // 0x225d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225D6Cu;
label_225d6c:
    // 0x225d6c: 0x0  nop
    ctx->pc = 0x225d6cu;
    // NOP
label_225d70:
    // 0x225d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225d74:
    // 0x225d74: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x225d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_225d78:
    // 0x225d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225d7c:
    // 0x225d7c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225d80:
    // 0x225d80: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x225d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_225d84:
    // 0x225d84: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x225d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_225d88:
    // 0x225d88: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x225d88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_225d8c:
    // 0x225d8c: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x225d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_225d90:
    // 0x225d90: 0x24425092  addiu       $v0, $v0, 0x5092
    ctx->pc = 0x225d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20626));
label_225d94:
    // 0x225d94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_225d98:
    // 0x225d98: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225d9c:
    // 0x225d9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x225d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_225da0:
    // 0x225da0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x225da0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_225da4:
    // 0x225da4: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x225da4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_225da8:
    // 0x225da8: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x225da8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_225dac:
    // 0x225dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_225db0:
    // 0x225db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225db4:
    // 0x225db4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225db8:
    // 0x225db8: 0xc05d970  jal         func_1765C0
label_225dbc:
    if (ctx->pc == 0x225DBCu) {
        ctx->pc = 0x225DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DB8u;
        // 0x225dbc: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225DC0u;
        goto label_225dc0;
    }
    ctx->pc = 0x225DB8u;
    SET_GPR_U32(ctx, 31, 0x225DC0u);
    ctx->pc = 0x225DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DB8u;
    // 0x225dbc: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x225DB8u, 0x225DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DC0u;
label_225dc0:
    // 0x225dc0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225dc4:
    // 0x225dc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225dc8:
    // 0x225dc8: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x225dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 0));
label_225dcc:
    // 0x225dcc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225dd0:
    // 0x225dd0: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x225dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20626), (uint16_t)GPR_U32(ctx, 0));
label_225dd4:
    // 0x225dd4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225dd8:
    // 0x225dd8: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x225dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20624), (uint16_t)GPR_U32(ctx, 0));
label_225ddc:
    // 0x225ddc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225de0:
    // 0x225de0: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x225de0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_225de4:
    // 0x225de4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225de8:
    // 0x225de8: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x225de8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 0));
label_225dec:
    // 0x225dec: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225df0:
    // 0x225df0: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x225df0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20634), (uint16_t)GPR_U32(ctx, 0));
label_225df4:
    // 0x225df4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225df8:
    // 0x225df8: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x225df8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20632), (uint16_t)GPR_U32(ctx, 0));
label_225dfc:
    // 0x225dfc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e00:
    // 0x225e00: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x225e00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20638), (uint16_t)GPR_U32(ctx, 0));
label_225e04:
    // 0x225e04: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e08:
    // 0x225e08: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x225e08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20636), (uint16_t)GPR_U32(ctx, 0));
label_225e0c:
    // 0x225e0c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e10:
    // 0x225e10: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x225e10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20642), (uint16_t)GPR_U32(ctx, 0));
label_225e14:
    // 0x225e14: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e18:
    // 0x225e18: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x225e18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20640), (uint16_t)GPR_U32(ctx, 0));
label_225e1c:
    // 0x225e1c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e20:
    // 0x225e20: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x225e20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20646), (uint16_t)GPR_U32(ctx, 0));
label_225e24:
    // 0x225e24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e28:
    // 0x225e28: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x225e28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20644), (uint16_t)GPR_U32(ctx, 0));
label_225e2c:
    // 0x225e2c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e30:
    // 0x225e30: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x225e30u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20650), (uint16_t)GPR_U32(ctx, 0));
label_225e34:
    // 0x225e34: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e38:
    // 0x225e38: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x225e38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20648), (uint16_t)GPR_U32(ctx, 0));
label_225e3c:
    // 0x225e3c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e40:
    // 0x225e40: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x225e40u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20654), (uint16_t)GPR_U32(ctx, 0));
label_225e44:
    // 0x225e44: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x225e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_225e48:
    // 0x225e48: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x225e48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20652), (uint16_t)GPR_U32(ctx, 0));
label_225e4c:
    // 0x225e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225e50:
    // 0x225e50: 0x3e00008  jr          $ra
label_225e54:
    if (ctx->pc == 0x225E54u) {
        ctx->pc = 0x225E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E50u;
        // 0x225e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225E58u;
        goto label_225e58;
    }
    ctx->pc = 0x225E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E50u;
        // 0x225e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E58u;
label_225e58:
    // 0x225e58: 0x0  nop
    ctx->pc = 0x225e58u;
    // NOP
label_225e5c:
    // 0x225e5c: 0x0  nop
    ctx->pc = 0x225e5cu;
    // NOP
label_225e60:
    // 0x225e60: 0x90890004  lbu         $t1, 0x4($a0)
    ctx->pc = 0x225e60u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_225e64:
    // 0x225e64: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x225e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_225e68:
    // 0x225e68: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x225e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_225e6c:
    // 0x225e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225e70:
    // 0x225e70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225e74:
    // 0x225e74: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x225e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_225e78:
    // 0x225e78: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225e7c:
    // 0x225e7c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_225e80:
    // 0x225e80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_225e84:
    // 0x225e84: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225e88:
    // 0x225e88: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x225e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225e8c:
    // 0x225e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225e90:
    // 0x225e90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x225e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_225e94:
    // 0x225e94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x225e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_225e98:
    // 0x225e98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x225e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_225e9c:
    // 0x225e9c: 0x0  nop
    ctx->pc = 0x225e9cu;
    // NOP
label_225ea0:
    // 0x225ea0: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_225ea4:
    // 0x225ea4: 0x91420010  lbu         $v0, 0x10($t2)
    ctx->pc = 0x225ea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
label_225ea8:
    // 0x225ea8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_225eac:
    if (ctx->pc == 0x225EACu) {
        ctx->pc = 0x225EB0u;
        goto label_225eb0;
    }
    ctx->pc = 0x225EA8u;
    {
        const bool branch_taken_0x225ea8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x225ea8) {
            ctx->pc = 0x225EE0u;
            goto label_225ee0;
        }
    }
    ctx->pc = 0x225EB0u;
label_225eb0:
    // 0x225eb0: 0x91420014  lbu         $v0, 0x14($t2)
    ctx->pc = 0x225eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
label_225eb4:
    // 0x225eb4: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_225eb8:
    if (ctx->pc == 0x225EB8u) {
        ctx->pc = 0x225EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EB4u;
        // 0x225eb8: 0x254b0014  addiu       $t3, $t2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225EBCu;
        goto label_225ebc;
    }
    ctx->pc = 0x225EB4u;
    {
        const bool branch_taken_0x225eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x225EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EB4u;
        // 0x225eb8: 0x254b0014  addiu       $t3, $t2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225eb4) {
            ctx->pc = 0x225EE0u;
            goto label_225ee0;
        }
    }
    ctx->pc = 0x225EBCu;
label_225ebc:
    // 0x225ebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_225ec0:
    if (ctx->pc == 0x225EC0u) {
        ctx->pc = 0x225EC4u;
        goto label_225ec4;
    }
    ctx->pc = 0x225EBCu;
    {
        const bool branch_taken_0x225ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ebc) {
            ctx->pc = 0x225EE0u;
            goto label_225ee0;
        }
    }
    ctx->pc = 0x225EC4u;
label_225ec4:
    // 0x225ec4: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_225ec8:
    if (ctx->pc == 0x225EC8u) {
        ctx->pc = 0x225ECCu;
        goto label_225ecc;
    }
    ctx->pc = 0x225EC4u;
    {
        const bool branch_taken_0x225ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x225ec4) {
            ctx->pc = 0x225EE0u;
            goto label_225ee0;
        }
    }
    ctx->pc = 0x225ECCu;
label_225ecc:
    // 0x225ecc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_225ed0:
    if (ctx->pc == 0x225ED0u) {
        ctx->pc = 0x225ED4u;
        goto label_225ed4;
    }
    ctx->pc = 0x225ECCu;
    {
        const bool branch_taken_0x225ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x225ecc) {
            ctx->pc = 0x225EE0u;
            goto label_225ee0;
        }
    }
    ctx->pc = 0x225ED4u;
label_225ed4:
    // 0x225ed4: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x225ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
label_225ed8:
    // 0x225ed8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_225edc:
    // 0x225edc: 0xa0490016  sb          $t1, 0x16($v0)
    ctx->pc = 0x225edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 9));
label_225ee0:
    // 0x225ee0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x225ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_225ee4:
    // 0x225ee4: 0x290200ff  slti        $v0, $t0, 0xFF
    ctx->pc = 0x225ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)255) ? 1 : 0);
label_225ee8:
    // 0x225ee8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_225eec:
    if (ctx->pc == 0x225EECu) {
        ctx->pc = 0x225EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EE8u;
        // 0x225eec: 0x24e70048  addiu       $a3, $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225EF0u;
        goto label_225ef0;
    }
    ctx->pc = 0x225EE8u;
    {
        const bool branch_taken_0x225ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EE8u;
        // 0x225eec: 0x24e70048  addiu       $a3, $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ee8) {
            ctx->pc = 0x225E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225e9c;
        }
    }
    ctx->pc = 0x225EF0u;
label_225ef0:
    // 0x225ef0: 0x3e00008  jr          $ra
label_225ef4:
    if (ctx->pc == 0x225EF4u) {
        ctx->pc = 0x225EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EF0u;
        // 0x225ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225EF8u;
        goto label_225ef8;
    }
    ctx->pc = 0x225EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EF0u;
        // 0x225ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225EF8u;
label_225ef8:
    // 0x225ef8: 0x0  nop
    ctx->pc = 0x225ef8u;
    // NOP
label_225efc:
    // 0x225efc: 0x0  nop
    ctx->pc = 0x225efcu;
    // NOP
label_225f00:
    // 0x225f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225f04:
    // 0x225f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225f08:
    // 0x225f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225f0c:
    // 0x225f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225f10:
    // 0x225f10: 0xc059eb8  jal         func_167AE0
label_225f14:
    if (ctx->pc == 0x225F14u) {
        ctx->pc = 0x225F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F10u;
        // 0x225f14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F18u;
        goto label_225f18;
    }
    ctx->pc = 0x225F10u;
    SET_GPR_U32(ctx, 31, 0x225F18u);
    ctx->pc = 0x225F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F10u;
    // 0x225f14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x225F10u, 0x225F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F18u;
label_225f18:
    // 0x225f18: 0xc059eb8  jal         func_167AE0
label_225f1c:
    if (ctx->pc == 0x225F1Cu) {
        ctx->pc = 0x225F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F18u;
        // 0x225f1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F20u;
        goto label_225f20;
    }
    ctx->pc = 0x225F18u;
    SET_GPR_U32(ctx, 31, 0x225F20u);
    ctx->pc = 0x225F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F18u;
    // 0x225f1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x225F18u, 0x225F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F20u;
label_225f20:
    // 0x225f20: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_225f24:
    // 0x225f24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_225f28:
    // 0x225f28: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_225f2c:
    if (ctx->pc == 0x225F2Cu) {
        ctx->pc = 0x225F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F28u;
        // 0x225f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F30u;
        goto label_225f30;
    }
    ctx->pc = 0x225F28u;
    {
        const bool branch_taken_0x225f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F28u;
        // 0x225f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f28) {
            ctx->pc = 0x225F5Cu;
            goto label_225f5c;
        }
    }
    ctx->pc = 0x225F30u;
label_225f30:
    // 0x225f30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x225f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_225f34:
    // 0x225f34: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_225f38:
    if (ctx->pc == 0x225F38u) {
        ctx->pc = 0x225F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F34u;
        // 0x225f38: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F3Cu;
        goto label_225f3c;
    }
    ctx->pc = 0x225F34u;
    {
        const bool branch_taken_0x225f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F34u;
        // 0x225f38: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f34) {
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F3Cu;
label_225f3c:
    // 0x225f3c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_225f40:
    if (ctx->pc == 0x225F40u) {
        ctx->pc = 0x225F44u;
        goto label_225f44;
    }
    ctx->pc = 0x225F3Cu;
    {
        const bool branch_taken_0x225f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225f3c) {
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F44u;
label_225f44:
    // 0x225f44: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x225f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_225f48:
    // 0x225f48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_225f4c:
    if (ctx->pc == 0x225F4Cu) {
        ctx->pc = 0x225F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F48u;
        // 0x225f4c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F50u;
        goto label_225f50;
    }
    ctx->pc = 0x225F48u;
    {
        const bool branch_taken_0x225f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F48u;
        // 0x225f4c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f48) {
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F50u;
label_225f50:
    // 0x225f50: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_225f54:
    if (ctx->pc == 0x225F54u) {
        ctx->pc = 0x225F58u;
        goto label_225f58;
    }
    ctx->pc = 0x225F50u;
    {
        const bool branch_taken_0x225f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225f50) {
            ctx->pc = 0x225F64u;
            goto label_225f64;
        }
    }
    ctx->pc = 0x225F58u;
label_225f58:
    // 0x225f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225f5c:
    // 0x225f5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_225f60:
    if (ctx->pc == 0x225F60u) {
        ctx->pc = 0x225F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F5Cu;
        // 0x225f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F64u;
        goto label_225f64;
    }
    ctx->pc = 0x225F5Cu;
    {
        const bool branch_taken_0x225f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F5Cu;
        // 0x225f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f5c) {
            ctx->pc = 0x225F6Cu;
            goto label_225f6c;
        }
    }
    ctx->pc = 0x225F64u;
label_225f64:
    // 0x225f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225f68:
    // 0x225f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225f6c:
    // 0x225f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225f70:
    // 0x225f70: 0x3e00008  jr          $ra
label_225f74:
    if (ctx->pc == 0x225F74u) {
        ctx->pc = 0x225F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F70u;
        // 0x225f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F78u;
        goto label_225f78;
    }
    ctx->pc = 0x225F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F70u;
        // 0x225f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F78u;
label_225f78:
    // 0x225f78: 0x0  nop
    ctx->pc = 0x225f78u;
    // NOP
label_225f7c:
    // 0x225f7c: 0x0  nop
    ctx->pc = 0x225f7cu;
    // NOP
label_225f80:
    // 0x225f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_225f84:
    // 0x225f84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_225f88:
    // 0x225f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225f8c:
    // 0x225f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225f90:
    // 0x225f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225f94:
    // 0x225f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225f98:
    // 0x225f98: 0xa0244913  sb          $a0, 0x4913($at)
    ctx->pc = 0x225f98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18707), (uint8_t)GPR_U32(ctx, 4));
label_225f9c:
    // 0x225f9c: 0xc084b84  jal         func_212E10
label_225fa0:
    if (ctx->pc == 0x225FA0u) {
        ctx->pc = 0x225FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F9Cu;
        // 0x225fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FA4u;
        goto label_225fa4;
    }
    ctx->pc = 0x225F9Cu;
    SET_GPR_U32(ctx, 31, 0x225FA4u);
    ctx->pc = 0x225FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F9Cu;
    // 0x225fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212E10u;
    { ctx->pc = 0x212e10; return; }
    ctx->pc = 0x225FA4u;
label_225fa4:
    // 0x225fa4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_225fa8:
    // 0x225fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225fac:
    // 0x225fac: 0xc06eb08  jal         func_1BAC20
label_225fb0:
    if (ctx->pc == 0x225FB0u) {
        ctx->pc = 0x225FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FACu;
        // 0x225fb0: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FB4u;
        goto label_225fb4;
    }
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x225FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FACu;
    // 0x225fb0: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAC20u, 0x225FACu, 0x225FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x225fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_225fb8:
    // 0x225fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_225fbc:
    // 0x225fbc: 0x8c222570  lw          $v0, 0x2570($at)
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
label_225fc0:
    // 0x225fc0: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x225fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
label_225fc4:
    // 0x225fc4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x225fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_225fc8:
    // 0x225fc8: 0x8c2225b8  lw          $v0, 0x25B8($at)
    ctx->pc = 0x225fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_225fcc:
    // 0x225fcc: 0x24430012  addiu       $v1, $v0, 0x12
    ctx->pc = 0x225fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_225fd0:
    // 0x225fd0: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x225fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_225fd4:
    // 0x225fd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_225fd8:
    if (ctx->pc == 0x225FD8u) {
        ctx->pc = 0x225FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FD4u;
        // 0x225fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FDCu;
        goto label_225fdc;
    }
    ctx->pc = 0x225FD4u;
    {
        const bool branch_taken_0x225fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FD4u;
        // 0x225fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fd4) {
            ctx->pc = 0x225FE4u;
            goto label_225fe4;
        }
    }
    ctx->pc = 0x225FDCu;
label_225fdc:
    // 0x225fdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_225fe0:
    // 0x225fe0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x225fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_225fe4:
    // 0x225fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225fe8:
    // 0x225fe8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x225fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_225fec:
    // 0x225fec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x225fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_225ff0:
    // 0x225ff0: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_225ff4:
    // 0x225ff4: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_225ff8:
    // 0x225ff8: 0x24453620  addiu       $a1, $v0, 0x3620
    ctx->pc = 0x225ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_225ffc:
    // 0x225ffc: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x225ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_226000:
    // 0x226000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_226004:
    if (ctx->pc == 0x226004u) {
        ctx->pc = 0x226008u;
        goto label_226008;
    }
    ctx->pc = 0x226000u;
    {
        const bool branch_taken_0x226000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226000) {
            ctx->pc = 0x226014u;
            goto label_226014;
        }
    }
    ctx->pc = 0x226008u;
label_226008:
    // 0x226008: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x226008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_22600c:
    // 0x22600c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_226010:
    if (ctx->pc == 0x226010u) {
        ctx->pc = 0x226014u;
        goto label_226014;
    }
    ctx->pc = 0x22600Cu;
    {
        const bool branch_taken_0x22600c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22600c) {
            ctx->pc = 0x226028u;
            goto label_226028;
        }
    }
    ctx->pc = 0x226014u;
label_226014:
    // 0x226014: 0x0  nop
    ctx->pc = 0x226014u;
    // NOP
label_226018:
    // 0x226018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22601c:
    // 0x22601c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_226020:
    // 0x226020: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_226024:
    if (ctx->pc == 0x226024u) {
        ctx->pc = 0x226024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226020u;
        // 0x226024: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226028u;
        goto label_226028;
    }
    ctx->pc = 0x226020u;
    {
        const bool branch_taken_0x226020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226020u;
        // 0x226024: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226020) {
            ctx->pc = 0x225FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225ff4;
        }
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22602c:
    // 0x22602c: 0x10c2002e  beq         $a2, $v0, . + 4 + (0x2E << 2)
label_226030:
    if (ctx->pc == 0x226030u) {
        ctx->pc = 0x226034u;
        goto label_226034;
    }
    ctx->pc = 0x22602Cu;
    {
        const bool branch_taken_0x22602c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x22602c) {
            ctx->pc = 0x2260E8u;
            goto label_2260e8;
        }
    }
    ctx->pc = 0x226034u;
label_226034:
    // 0x226034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226038:
    // 0x226038: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
label_22603c:
    if (ctx->pc == 0x22603Cu) {
        ctx->pc = 0x226040u;
        goto label_226040;
    }
    ctx->pc = 0x226038u;
    {
        const bool branch_taken_0x226038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x226038) {
            ctx->pc = 0x2260E8u;
            goto label_2260e8;
        }
    }
    ctx->pc = 0x226040u;
label_226040:
    // 0x226040: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_226044:
    if (ctx->pc == 0x226044u) {
        ctx->pc = 0x226044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226040u;
        // 0x226044: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226048u;
        goto label_226048;
    }
    ctx->pc = 0x226040u;
    {
        const bool branch_taken_0x226040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x226044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226040u;
        // 0x226044: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226040) {
            ctx->pc = 0x226050u;
            goto label_226050;
        }
    }
    ctx->pc = 0x226048u;
label_226048:
    // 0x226048: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22604c:
    if (ctx->pc == 0x22604Cu) {
        ctx->pc = 0x22604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226048u;
        // 0x22604c: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226050u;
        goto label_226050;
    }
    ctx->pc = 0x226048u;
    {
        const bool branch_taken_0x226048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226048u;
        // 0x22604c: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226048) {
            ctx->pc = 0x226138u;
            goto label_226138;
        }
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x246349b0  addiu       $v1, $v1, 0x49B0
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18864));
label_226054:
    // 0x226054: 0x9062005c  lbu         $v0, 0x5C($v1)
    ctx->pc = 0x226054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
label_226058:
    // 0x226058: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_22605c:
    if (ctx->pc == 0x22605Cu) {
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226060u;
        goto label_226060;
    }
    ctx->pc = 0x226058u;
    {
        const bool branch_taken_0x226058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226058) {
            ctx->pc = 0x2260ACu;
            goto label_2260ac;
        }
    }
    ctx->pc = 0x226060u;
label_226060:
    // 0x226060: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_226064:
    // 0x226064: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x226064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_226068:
    // 0x226068: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_22606c:
    // 0x22606c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x22606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_226070:
    // 0x226070: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_226074:
    // 0x226074: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_226078:
    // 0x226078: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226078u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22607c:
    // 0x22607c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226080:
    // 0x226080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226084:
    // 0x226084: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226088:
    // 0x226088: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_22608c:
    // 0x22608c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22608cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226090:
    // 0x226090: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226094:
    // 0x226094: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_226098:
    // 0x226098: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22609c:
    // 0x22609c: 0xc05da58  jal         func_176960
label_2260a0:
    if (ctx->pc == 0x2260A0u) {
        ctx->pc = 0x2260A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22609Cu;
        // 0x2260a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260A4u;
        goto label_2260a4;
    }
    ctx->pc = 0x22609Cu;
    SET_GPR_U32(ctx, 31, 0x2260A4u);
    ctx->pc = 0x2260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22609Cu;
    // 0x2260a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22609Cu, 0x2260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A4u;
label_2260a4:
    // 0x2260a4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2260a8:
    if (ctx->pc == 0x2260A8u) {
        ctx->pc = 0x2260ACu;
        goto label_2260ac;
    }
    ctx->pc = 0x2260A4u;
    {
        const bool branch_taken_0x2260a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260a4) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260ACu;
label_2260ac:
    // 0x2260ac: 0xc044894  jal         func_112250
label_2260b0:
    if (ctx->pc == 0x2260B0u) {
        ctx->pc = 0x2260B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260ACu;
        // 0x2260b0: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260B4u;
        goto label_2260b4;
    }
    ctx->pc = 0x2260ACu;
    SET_GPR_U32(ctx, 31, 0x2260B4u);
    ctx->pc = 0x2260B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260ACu;
    // 0x2260b0: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2260ACu, 0x2260B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260B4u;
label_2260b4:
    // 0x2260b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2260b8:
    if (ctx->pc == 0x2260B8u) {
        ctx->pc = 0x2260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B4u;
        // 0x2260b8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260BCu;
        goto label_2260bc;
    }
    ctx->pc = 0x2260B4u;
    {
        const bool branch_taken_0x2260b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B4u;
        // 0x2260b8: 0x3c05002f  lui         $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260b4) {
            ctx->pc = 0x2260D4u;
            goto label_2260d4;
        }
    }
    ctx->pc = 0x2260BCu;
label_2260bc:
    // 0x2260bc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2260c0:
    // 0x2260c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2260c4:
    // 0x2260c4: 0xc05da58  jal         func_176960
label_2260c8:
    if (ctx->pc == 0x2260C8u) {
        ctx->pc = 0x2260C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260C4u;
        // 0x2260c8: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260CCu;
        goto label_2260cc;
    }
    ctx->pc = 0x2260C4u;
    SET_GPR_U32(ctx, 31, 0x2260CCu);
    ctx->pc = 0x2260C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260C4u;
    // 0x2260c8: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x2260C4u, 0x2260CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260CCu;
label_2260cc:
    // 0x2260cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_2260d0:
    if (ctx->pc == 0x2260D0u) {
        ctx->pc = 0x2260D4u;
        goto label_2260d4;
    }
    ctx->pc = 0x2260CCu;
    {
        const bool branch_taken_0x2260cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260cc) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260D4u;
label_2260d4:
    // 0x2260d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2260d8:
    // 0x2260d8: 0xc05da58  jal         func_176960
label_2260dc:
    if (ctx->pc == 0x2260DCu) {
        ctx->pc = 0x2260DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260D8u;
        // 0x2260dc: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260E0u;
        goto label_2260e0;
    }
    ctx->pc = 0x2260D8u;
    SET_GPR_U32(ctx, 31, 0x2260E0u);
    ctx->pc = 0x2260DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D8u;
    // 0x2260dc: 0x24a52648  addiu       $a1, $a1, 0x2648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x2260D8u, 0x2260E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0x10000014  b           . + 4 + (0x14 << 2)
label_2260e4:
    if (ctx->pc == 0x2260E4u) {
        ctx->pc = 0x2260E8u;
        goto label_2260e8;
    }
    ctx->pc = 0x2260E0u;
    {
        const bool branch_taken_0x2260e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260e0) {
            ctx->pc = 0x226134u;
            goto label_226134;
        }
    }
    ctx->pc = 0x2260E8u;
label_2260e8:
    // 0x2260e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2260ec:
    // 0x2260ec: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2260f0:
    // 0x2260f0: 0x24424920  addiu       $v0, $v0, 0x4920
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18720));
label_2260f4:
    // 0x2260f4: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x2260f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_2260f8:
    // 0x2260f8: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2260fc:
    // 0x2260fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_226100:
    // 0x226100: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_226104:
    // 0x226104: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_226108:
    // 0x226108: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_22610c:
    // 0x22610c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226110:
    // 0x226110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226114:
    // 0x226114: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226118:
    // 0x226118: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x226118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_22611c:
    // 0x22611c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226120:
    // 0x226120: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226124:
    // 0x226124: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_226128:
    // 0x226128: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22612c:
    // 0x22612c: 0xc05da58  jal         func_176960
label_226130:
    if (ctx->pc == 0x226130u) {
        ctx->pc = 0x226130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22612Cu;
        // 0x226130: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226134u;
        goto label_226134;
    }
    ctx->pc = 0x22612Cu;
    SET_GPR_U32(ctx, 31, 0x226134u);
    ctx->pc = 0x226130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22612Cu;
    // 0x226130: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x22612Cu, 0x226134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226134u;
label_226134:
    // 0x226134: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_226138:
    // 0x226138: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22613c:
    // 0x22613c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_226140:
    if (ctx->pc == 0x226140u) {
        ctx->pc = 0x226140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22613Cu;
        // 0x226140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226144u;
        goto label_226144;
    }
    ctx->pc = 0x22613Cu;
    {
        const bool branch_taken_0x22613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22613Cu;
        // 0x226140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22613c) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x226144u;
label_226144:
    // 0x226144: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x226144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_226148:
    // 0x226148: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_22614c:
    if (ctx->pc == 0x22614Cu) {
        ctx->pc = 0x22614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226148u;
        // 0x22614c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226150u;
        goto label_226150;
    }
    ctx->pc = 0x226148u;
    {
        const bool branch_taken_0x226148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226148u;
        // 0x22614c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226148) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226150u;
label_226150:
    // 0x226150: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_226154:
    if (ctx->pc == 0x226154u) {
        ctx->pc = 0x226158u;
        goto label_226158;
    }
    ctx->pc = 0x226150u;
    {
        const bool branch_taken_0x226150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x226150) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226158u;
label_226158:
    // 0x226158: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x226158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_22615c:
    // 0x22615c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_226160:
    if (ctx->pc == 0x226160u) {
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22615Cu;
        // 0x226160: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226164u;
        goto label_226164;
    }
    ctx->pc = 0x22615Cu;
    {
        const bool branch_taken_0x22615c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22615Cu;
        // 0x226160: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22615c) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226164u;
label_226164:
    // 0x226164: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_226168:
    if (ctx->pc == 0x226168u) {
        ctx->pc = 0x22616Cu;
        goto label_22616c;
    }
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226164) {
            ctx->pc = 0x226178u;
            goto label_226178;
        }
    }
    ctx->pc = 0x22616Cu;
label_22616c:
    // 0x22616c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226170:
    // 0x226170: 0x10000003  b           . + 4 + (0x3 << 2)
label_226174:
    if (ctx->pc == 0x226174u) {
        ctx->pc = 0x226174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226170u;
        // 0x226174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226178u;
        goto label_226178;
    }
    ctx->pc = 0x226170u;
    {
        const bool branch_taken_0x226170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226170u;
        // 0x226174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226170) {
            ctx->pc = 0x226180u;
            goto label_226180;
        }
    }
    ctx->pc = 0x226178u;
label_226178:
    // 0x226178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22617c:
    // 0x22617c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226180:
    // 0x226180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226184:
    // 0x226184: 0x3e00008  jr          $ra
label_226188:
    if (ctx->pc == 0x226188u) {
        ctx->pc = 0x226188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226184u;
        // 0x226188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22618Cu;
        goto label_22618c;
    }
    ctx->pc = 0x226184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226184u;
        // 0x226188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22618Cu;
label_22618c:
    // 0x22618c: 0x0  nop
    ctx->pc = 0x22618cu;
    // NOP
label_226190:
    // 0x226190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_226194:
    // 0x226194: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_226198:
    // 0x226198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22619c:
    // 0x22619c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2261a0:
    // 0x2261a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2261a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2261a4:
    // 0x2261a4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2261a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2261a8:
    // 0x2261a8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2261ac:
    if (ctx->pc == 0x2261ACu) {
        ctx->pc = 0x2261B0u;
        { ctx->pc = 0x2261b0; return; }
    }
    ctx->pc = 0x2261A8u;
    {
        const bool branch_taken_0x2261a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2261a8) {
            ctx->pc = 0x2261F4u;
            { ctx->pc = 0x2261f4; return; }
        }
    }
    ctx->pc = 0x2261B0u;
    ctx->pc = 0x2261b0u;
    return;
}
