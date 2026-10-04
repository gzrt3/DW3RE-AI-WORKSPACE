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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part456(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x279b80u: goto label_279b80;
        case 0x279b84u: goto label_279b84;
        case 0x279b88u: goto label_279b88;
        case 0x279b8cu: goto label_279b8c;
        case 0x279b90u: goto label_279b90;
        case 0x279b94u: goto label_279b94;
        case 0x279b98u: goto label_279b98;
        case 0x279b9cu: goto label_279b9c;
        case 0x279ba0u: goto label_279ba0;
        case 0x279ba4u: goto label_279ba4;
        case 0x279ba8u: goto label_279ba8;
        case 0x279bacu: goto label_279bac;
        case 0x279bb0u: goto label_279bb0;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bb8u: goto label_279bb8;
        case 0x279bbcu: goto label_279bbc;
        case 0x279bc0u: goto label_279bc0;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bc8u: goto label_279bc8;
        case 0x279bccu: goto label_279bcc;
        case 0x279bd0u: goto label_279bd0;
        case 0x279bd4u: goto label_279bd4;
        case 0x279bd8u: goto label_279bd8;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be0u: goto label_279be0;
        case 0x279be4u: goto label_279be4;
        case 0x279be8u: goto label_279be8;
        case 0x279becu: goto label_279bec;
        case 0x279bf0u: goto label_279bf0;
        case 0x279bf4u: goto label_279bf4;
        case 0x279bf8u: goto label_279bf8;
        case 0x279bfcu: goto label_279bfc;
        case 0x279c00u: goto label_279c00;
        case 0x279c04u: goto label_279c04;
        case 0x279c08u: goto label_279c08;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c10u: goto label_279c10;
        case 0x279c14u: goto label_279c14;
        case 0x279c18u: goto label_279c18;
        case 0x279c1cu: goto label_279c1c;
        case 0x279c20u: goto label_279c20;
        case 0x279c24u: goto label_279c24;
        case 0x279c28u: goto label_279c28;
        case 0x279c2cu: goto label_279c2c;
        case 0x279c30u: goto label_279c30;
        case 0x279c34u: goto label_279c34;
        case 0x279c38u: goto label_279c38;
        case 0x279c3cu: goto label_279c3c;
        case 0x279c40u: goto label_279c40;
        case 0x279c44u: goto label_279c44;
        case 0x279c48u: goto label_279c48;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c50u: goto label_279c50;
        case 0x279c54u: goto label_279c54;
        case 0x279c58u: goto label_279c58;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c60u: goto label_279c60;
        case 0x279c64u: goto label_279c64;
        case 0x279c68u: goto label_279c68;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c70u: goto label_279c70;
        case 0x279c74u: goto label_279c74;
        case 0x279c78u: goto label_279c78;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c80u: goto label_279c80;
        case 0x279c84u: goto label_279c84;
        case 0x279c88u: goto label_279c88;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c90u: goto label_279c90;
        case 0x279c94u: goto label_279c94;
        case 0x279c98u: goto label_279c98;
        case 0x279c9cu: goto label_279c9c;
        case 0x279ca0u: goto label_279ca0;
        case 0x279ca4u: goto label_279ca4;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cacu: goto label_279cac;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cb4u: goto label_279cb4;
        case 0x279cb8u: goto label_279cb8;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cc0u: goto label_279cc0;
        case 0x279cc4u: goto label_279cc4;
        case 0x279cc8u: goto label_279cc8;
        case 0x279cccu: goto label_279ccc;
        case 0x279cd0u: goto label_279cd0;
        case 0x279cd4u: goto label_279cd4;
        case 0x279cd8u: goto label_279cd8;
        case 0x279cdcu: goto label_279cdc;
        case 0x279ce0u: goto label_279ce0;
        case 0x279ce4u: goto label_279ce4;
        case 0x279ce8u: goto label_279ce8;
        case 0x279cecu: goto label_279cec;
        case 0x279cf0u: goto label_279cf0;
        case 0x279cf4u: goto label_279cf4;
        case 0x279cf8u: goto label_279cf8;
        case 0x279cfcu: goto label_279cfc;
        case 0x279d00u: goto label_279d00;
        case 0x279d04u: goto label_279d04;
        case 0x279d08u: goto label_279d08;
        case 0x279d0cu: goto label_279d0c;
        case 0x279d10u: goto label_279d10;
        case 0x279d14u: goto label_279d14;
        case 0x279d18u: goto label_279d18;
        case 0x279d1cu: goto label_279d1c;
        case 0x279d20u: goto label_279d20;
        case 0x279d24u: goto label_279d24;
        case 0x279d28u: goto label_279d28;
        case 0x279d2cu: goto label_279d2c;
        case 0x279d30u: goto label_279d30;
        case 0x279d34u: goto label_279d34;
        case 0x279d38u: goto label_279d38;
        case 0x279d3cu: goto label_279d3c;
        case 0x279d40u: goto label_279d40;
        case 0x279d44u: goto label_279d44;
        case 0x279d48u: goto label_279d48;
        case 0x279d4cu: goto label_279d4c;
        case 0x279d50u: goto label_279d50;
        case 0x279d54u: goto label_279d54;
        case 0x279d58u: goto label_279d58;
        case 0x279d5cu: goto label_279d5c;
        case 0x279d60u: goto label_279d60;
        case 0x279d64u: goto label_279d64;
        case 0x279d68u: goto label_279d68;
        case 0x279d6cu: goto label_279d6c;
        case 0x279d70u: goto label_279d70;
        case 0x279d74u: goto label_279d74;
        case 0x279d78u: goto label_279d78;
        case 0x279d7cu: goto label_279d7c;
        case 0x279d80u: goto label_279d80;
        case 0x279d84u: goto label_279d84;
        case 0x279d88u: goto label_279d88;
        case 0x279d8cu: goto label_279d8c;
        case 0x279d90u: goto label_279d90;
        case 0x279d94u: goto label_279d94;
        case 0x279d98u: goto label_279d98;
        case 0x279d9cu: goto label_279d9c;
        case 0x279da0u: goto label_279da0;
        case 0x279da4u: goto label_279da4;
        case 0x279da8u: goto label_279da8;
        case 0x279dacu: goto label_279dac;
        case 0x279db0u: goto label_279db0;
        case 0x279db4u: goto label_279db4;
        case 0x279db8u: goto label_279db8;
        case 0x279dbcu: goto label_279dbc;
        case 0x279dc0u: goto label_279dc0;
        case 0x279dc4u: goto label_279dc4;
        case 0x279dc8u: goto label_279dc8;
        case 0x279dccu: goto label_279dcc;
        case 0x279dd0u: goto label_279dd0;
        case 0x279dd4u: goto label_279dd4;
        case 0x279dd8u: goto label_279dd8;
        case 0x279ddcu: goto label_279ddc;
        case 0x279de0u: goto label_279de0;
        case 0x279de4u: goto label_279de4;
        case 0x279de8u: goto label_279de8;
        case 0x279decu: goto label_279dec;
        case 0x279df0u: goto label_279df0;
        case 0x279df4u: goto label_279df4;
        case 0x279df8u: goto label_279df8;
        case 0x279dfcu: goto label_279dfc;
        case 0x279e00u: goto label_279e00;
        case 0x279e04u: goto label_279e04;
        case 0x279e08u: goto label_279e08;
        case 0x279e0cu: goto label_279e0c;
        case 0x279e10u: goto label_279e10;
        case 0x279e14u: goto label_279e14;
        case 0x279e18u: goto label_279e18;
        case 0x279e1cu: goto label_279e1c;
        case 0x279e20u: goto label_279e20;
        case 0x279e24u: goto label_279e24;
        case 0x279e28u: goto label_279e28;
        case 0x279e2cu: goto label_279e2c;
        case 0x279e30u: goto label_279e30;
        case 0x279e34u: goto label_279e34;
        case 0x279e38u: goto label_279e38;
        case 0x279e3cu: goto label_279e3c;
        case 0x279e40u: goto label_279e40;
        case 0x279e44u: goto label_279e44;
        case 0x279e48u: goto label_279e48;
        case 0x279e4cu: goto label_279e4c;
        case 0x279e50u: goto label_279e50;
        case 0x279e54u: goto label_279e54;
        case 0x279e58u: goto label_279e58;
        case 0x279e5cu: goto label_279e5c;
        case 0x279e60u: goto label_279e60;
        case 0x279e64u: goto label_279e64;
        case 0x279e68u: goto label_279e68;
        case 0x279e6cu: goto label_279e6c;
        case 0x279e70u: goto label_279e70;
        case 0x279e74u: goto label_279e74;
        case 0x279e78u: goto label_279e78;
        case 0x279e7cu: goto label_279e7c;
        case 0x279e80u: goto label_279e80;
        case 0x279e84u: goto label_279e84;
        case 0x279e88u: goto label_279e88;
        case 0x279e8cu: goto label_279e8c;
        case 0x279e90u: goto label_279e90;
        case 0x279e94u: goto label_279e94;
        case 0x279e98u: goto label_279e98;
        case 0x279e9cu: goto label_279e9c;
        case 0x279ea0u: goto label_279ea0;
        case 0x279ea4u: goto label_279ea4;
        case 0x279ea8u: goto label_279ea8;
        case 0x279eacu: goto label_279eac;
        case 0x279eb0u: goto label_279eb0;
        case 0x279eb4u: goto label_279eb4;
        case 0x279eb8u: goto label_279eb8;
        case 0x279ebcu: goto label_279ebc;
        case 0x279ec0u: goto label_279ec0;
        case 0x279ec4u: goto label_279ec4;
        case 0x279ec8u: goto label_279ec8;
        case 0x279eccu: goto label_279ecc;
        case 0x279ed0u: goto label_279ed0;
        case 0x279ed4u: goto label_279ed4;
        case 0x279ed8u: goto label_279ed8;
        case 0x279edcu: goto label_279edc;
        case 0x279ee0u: goto label_279ee0;
        case 0x279ee4u: goto label_279ee4;
        case 0x279ee8u: goto label_279ee8;
        case 0x279eecu: goto label_279eec;
        case 0x279ef0u: goto label_279ef0;
        case 0x279ef4u: goto label_279ef4;
        case 0x279ef8u: goto label_279ef8;
        case 0x279efcu: goto label_279efc;
        case 0x279f00u: goto label_279f00;
        case 0x279f04u: goto label_279f04;
        case 0x279f08u: goto label_279f08;
        case 0x279f0cu: goto label_279f0c;
        case 0x279f10u: goto label_279f10;
        case 0x279f14u: goto label_279f14;
        case 0x279f18u: goto label_279f18;
        case 0x279f1cu: goto label_279f1c;
        case 0x279f20u: goto label_279f20;
        case 0x279f24u: goto label_279f24;
        case 0x279f28u: goto label_279f28;
        case 0x279f2cu: goto label_279f2c;
        case 0x279f30u: goto label_279f30;
        case 0x279f34u: goto label_279f34;
        case 0x279f38u: goto label_279f38;
        case 0x279f3cu: goto label_279f3c;
        case 0x279f40u: goto label_279f40;
        case 0x279f44u: goto label_279f44;
        case 0x279f48u: goto label_279f48;
        case 0x279f4cu: goto label_279f4c;
        case 0x279f50u: goto label_279f50;
        case 0x279f54u: goto label_279f54;
        case 0x279f58u: goto label_279f58;
        case 0x279f5cu: goto label_279f5c;
        case 0x279f60u: goto label_279f60;
        case 0x279f64u: goto label_279f64;
        case 0x279f68u: goto label_279f68;
        case 0x279f6cu: goto label_279f6c;
        case 0x279f70u: goto label_279f70;
        case 0x279f74u: goto label_279f74;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279f80u: goto label_279f80;
        case 0x279f84u: goto label_279f84;
        case 0x279f88u: goto label_279f88;
        case 0x279f8cu: goto label_279f8c;
        case 0x279f90u: goto label_279f90;
        case 0x279f94u: goto label_279f94;
        case 0x279f98u: goto label_279f98;
        case 0x279f9cu: goto label_279f9c;
        case 0x279fa0u: goto label_279fa0;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fa8u: goto label_279fa8;
        case 0x279facu: goto label_279fac;
        case 0x279fb0u: goto label_279fb0;
        case 0x279fb4u: goto label_279fb4;
        case 0x279fb8u: goto label_279fb8;
        case 0x279fbcu: goto label_279fbc;
        case 0x279fc0u: goto label_279fc0;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fc8u: goto label_279fc8;
        case 0x279fccu: goto label_279fcc;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fd4u: goto label_279fd4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fdcu: goto label_279fdc;
        case 0x279fe0u: goto label_279fe0;
        case 0x279fe4u: goto label_279fe4;
        case 0x279fe8u: goto label_279fe8;
        case 0x279fecu: goto label_279fec;
        case 0x279ff0u: goto label_279ff0;
        case 0x279ff4u: goto label_279ff4;
        case 0x279ff8u: goto label_279ff8;
        case 0x279ffcu: goto label_279ffc;
        case 0x27a000u: goto label_27a000;
        case 0x27a004u: goto label_27a004;
        case 0x27a008u: goto label_27a008;
        case 0x27a00cu: goto label_27a00c;
        case 0x27a010u: goto label_27a010;
        case 0x27a014u: goto label_27a014;
        case 0x27a018u: goto label_27a018;
        case 0x27a01cu: goto label_27a01c;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a028u: goto label_27a028;
        case 0x27a02cu: goto label_27a02c;
        case 0x27a030u: goto label_27a030;
        case 0x27a034u: goto label_27a034;
        case 0x27a038u: goto label_27a038;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a040u: goto label_27a040;
        case 0x27a044u: goto label_27a044;
        case 0x27a048u: goto label_27a048;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a050u: goto label_27a050;
        case 0x27a054u: goto label_27a054;
        case 0x27a058u: goto label_27a058;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a060u: goto label_27a060;
        case 0x27a064u: goto label_27a064;
        case 0x27a068u: goto label_27a068;
        case 0x27a06cu: goto label_27a06c;
        case 0x27a070u: goto label_27a070;
        case 0x27a074u: goto label_27a074;
        case 0x27a078u: goto label_27a078;
        case 0x27a07cu: goto label_27a07c;
        case 0x27a080u: goto label_27a080;
        case 0x27a084u: goto label_27a084;
        case 0x27a088u: goto label_27a088;
        case 0x27a08cu: goto label_27a08c;
        case 0x27a090u: goto label_27a090;
        case 0x27a094u: goto label_27a094;
        case 0x27a098u: goto label_27a098;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0a0u: goto label_27a0a0;
        case 0x27a0a4u: goto label_27a0a4;
        case 0x27a0a8u: goto label_27a0a8;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0b0u: goto label_27a0b0;
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0b8u: goto label_27a0b8;
        case 0x27a0bcu: goto label_27a0bc;
        case 0x27a0c0u: goto label_27a0c0;
        case 0x27a0c4u: goto label_27a0c4;
        case 0x27a0c8u: goto label_27a0c8;
        case 0x27a0ccu: goto label_27a0cc;
        case 0x27a0d0u: goto label_27a0d0;
        case 0x27a0d4u: goto label_27a0d4;
        case 0x27a0d8u: goto label_27a0d8;
        case 0x27a0dcu: goto label_27a0dc;
        case 0x27a0e0u: goto label_27a0e0;
        case 0x27a0e4u: goto label_27a0e4;
        case 0x27a0e8u: goto label_27a0e8;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a0f0u: goto label_27a0f0;
        case 0x27a0f4u: goto label_27a0f4;
        case 0x27a0f8u: goto label_27a0f8;
        case 0x27a0fcu: goto label_27a0fc;
        case 0x27a100u: goto label_27a100;
        case 0x27a104u: goto label_27a104;
        case 0x27a108u: goto label_27a108;
        case 0x27a10cu: goto label_27a10c;
        case 0x27a110u: goto label_27a110;
        case 0x27a114u: goto label_27a114;
        case 0x27a118u: goto label_27a118;
        case 0x27a11cu: goto label_27a11c;
        case 0x27a120u: goto label_27a120;
        case 0x27a124u: goto label_27a124;
        case 0x27a128u: goto label_27a128;
        case 0x27a12cu: goto label_27a12c;
        case 0x27a130u: goto label_27a130;
        case 0x27a134u: goto label_27a134;
        case 0x27a138u: goto label_27a138;
        case 0x27a13cu: goto label_27a13c;
        case 0x27a140u: goto label_27a140;
        case 0x27a144u: goto label_27a144;
        case 0x27a148u: goto label_27a148;
        case 0x27a14cu: goto label_27a14c;
        case 0x27a150u: goto label_27a150;
        case 0x27a154u: goto label_27a154;
        case 0x27a158u: goto label_27a158;
        case 0x27a15cu: goto label_27a15c;
        case 0x27a160u: goto label_27a160;
        case 0x27a164u: goto label_27a164;
        case 0x27a168u: goto label_27a168;
        case 0x27a16cu: goto label_27a16c;
        case 0x27a170u: goto label_27a170;
        case 0x27a174u: goto label_27a174;
        case 0x27a178u: goto label_27a178;
        case 0x27a17cu: goto label_27a17c;
        case 0x27a180u: goto label_27a180;
        case 0x27a184u: goto label_27a184;
        case 0x27a188u: goto label_27a188;
        case 0x27a18cu: goto label_27a18c;
        case 0x27a190u: goto label_27a190;
        case 0x27a194u: goto label_27a194;
        case 0x27a198u: goto label_27a198;
        case 0x27a19cu: goto label_27a19c;
        case 0x27a1a0u: goto label_27a1a0;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a1acu: goto label_27a1ac;
        case 0x27a1b0u: goto label_27a1b0;
        case 0x27a1b4u: goto label_27a1b4;
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a1bcu: goto label_27a1bc;
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1c4u: goto label_27a1c4;
        case 0x27a1c8u: goto label_27a1c8;
        case 0x27a1ccu: goto label_27a1cc;
        case 0x27a1d0u: goto label_27a1d0;
        case 0x27a1d4u: goto label_27a1d4;
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a1dcu: goto label_27a1dc;
        case 0x27a1e0u: goto label_27a1e0;
        case 0x27a1e4u: goto label_27a1e4;
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1ecu: goto label_27a1ec;
        case 0x27a1f0u: goto label_27a1f0;
        case 0x27a1f4u: goto label_27a1f4;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a1fcu: goto label_27a1fc;
        case 0x27a200u: goto label_27a200;
        case 0x27a204u: goto label_27a204;
        case 0x27a208u: goto label_27a208;
        case 0x27a20cu: goto label_27a20c;
        case 0x27a210u: goto label_27a210;
        case 0x27a214u: goto label_27a214;
        case 0x27a218u: goto label_27a218;
        case 0x27a21cu: goto label_27a21c;
        case 0x27a220u: goto label_27a220;
        case 0x27a224u: goto label_27a224;
        case 0x27a228u: goto label_27a228;
        case 0x27a22cu: goto label_27a22c;
        case 0x27a230u: goto label_27a230;
        case 0x27a234u: goto label_27a234;
        case 0x27a238u: goto label_27a238;
        case 0x27a23cu: goto label_27a23c;
        case 0x27a240u: goto label_27a240;
        case 0x27a244u: goto label_27a244;
        case 0x27a248u: goto label_27a248;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a250u: goto label_27a250;
        case 0x27a254u: goto label_27a254;
        case 0x27a258u: goto label_27a258;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a260u: goto label_27a260;
        case 0x27a264u: goto label_27a264;
        case 0x27a268u: goto label_27a268;
        case 0x27a26cu: goto label_27a26c;
        case 0x27a270u: goto label_27a270;
        case 0x27a274u: goto label_27a274;
        case 0x27a278u: goto label_27a278;
        case 0x27a27cu: goto label_27a27c;
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        case 0x27a2f8u: goto label_27a2f8;
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a300u: goto label_27a300;
        case 0x27a304u: goto label_27a304;
        case 0x27a308u: goto label_27a308;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a310u: goto label_27a310;
        case 0x27a314u: goto label_27a314;
        case 0x27a318u: goto label_27a318;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        default: return;
    }

label_279b80:
    // 0x279b80: 0x10be3  .word       0x00010BE3                   # negu        $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279b80u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_279b84:
    // 0x279b84: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x279b84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_279b88:
    // 0x279b88: 0x0  nop
    ctx->pc = 0x279b88u;
    // NOP
label_279b8c:
    // 0x279b8c: 0x0  nop
    ctx->pc = 0x279b8cu;
    // NOP
label_279b90:
    // 0x279b90: 0x10bee  .word       0x00010BEE                   # dsub        $at, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279b90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_279b94:
    // 0x279b94: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_279b98:
    // 0x279b98: 0x0  nop
    ctx->pc = 0x279b98u;
    // NOP
label_279b9c:
    // 0x279b9c: 0x0  nop
    ctx->pc = 0x279b9cu;
    // NOP
label_279ba0:
    // 0x279ba0: 0x10bf7  .word       0x00010BF7                   # INVALID     $zero, $at, 0xBF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x279BA0 raw=0x00010BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279ba4:
    // 0x279ba4: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_279ba8:
    // 0x279ba8: 0x0  nop
    ctx->pc = 0x279ba8u;
    // NOP
label_279bac:
    // 0x279bac: 0x0  nop
    ctx->pc = 0x279bacu;
    // NOP
label_279bb0:
    // 0x279bb0: 0x10c01  .word       0x00010C01                   # INVALID     $zero, $at, 0xC01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x279BB0 raw=0x00010C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279bb4:
    // 0x279bb4: 0x5250  .word       0x00005250                   # mfhi        $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bb4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279bb8:
    // 0x279bb8: 0x0  nop
    ctx->pc = 0x279bb8u;
    // NOP
label_279bbc:
    // 0x279bbc: 0x0  nop
    ctx->pc = 0x279bbcu;
    // NOP
label_279bc0:
    // 0x279bc0: 0x10c0c  .word       0x00010C0C                   # syscall     48 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bc0u;
    ctx->pc = 0x279BC4u;
runtime->handleSyscall(rdram, ctx, 0x430u);
label_279bc4:
    // 0x279bc4: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bc4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_279bc8:
    // 0x279bc8: 0x0  nop
    ctx->pc = 0x279bc8u;
    // NOP
label_279bcc:
    // 0x279bcc: 0x0  nop
    ctx->pc = 0x279bccu;
    // NOP
label_279bd0:
    // 0x279bd0: 0x10c16  .word       0x00010C16                   # dsrlv       $at, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279bd4:
    // 0x279bd4: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bd4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_279bd8:
    // 0x279bd8: 0x0  nop
    ctx->pc = 0x279bd8u;
    // NOP
label_279bdc:
    // 0x279bdc: 0x0  nop
    ctx->pc = 0x279bdcu;
    // NOP
label_279be0:
    // 0x279be0: 0x10c20  .word       0x00010C20                   # add         $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279be0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_279be4:
    // 0x279be4: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279be4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_279be8:
    // 0x279be8: 0x0  nop
    ctx->pc = 0x279be8u;
    // NOP
label_279bec:
    // 0x279bec: 0x0  nop
    ctx->pc = 0x279becu;
    // NOP
label_279bf0:
    // 0x279bf0: 0x10c27  .word       0x00010C27                   # nor         $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279bf0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279bf4:
    // 0x279bf4: 0x3a80  sll         $a3, $zero, 10
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_279bf8:
    // 0x279bf8: 0x0  nop
    ctx->pc = 0x279bf8u;
    // NOP
label_279bfc:
    // 0x279bfc: 0x0  nop
    ctx->pc = 0x279bfcu;
    // NOP
label_279c00:
    // 0x279c00: 0x10c2f  .word       0x00010C2F                   # dsubu       $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_279c04:
    // 0x279c04: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_279c08:
    // 0x279c08: 0x0  nop
    ctx->pc = 0x279c08u;
    // NOP
label_279c0c:
    // 0x279c0c: 0x0  nop
    ctx->pc = 0x279c0cu;
    // NOP
label_279c10:
    // 0x279c10: 0x10c3b  dsra        $at, $at, 16
    ctx->pc = 0x279c10u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 16);
label_279c14:
    // 0x279c14: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x279c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279c18:
    // 0x279c18: 0x0  nop
    ctx->pc = 0x279c18u;
    // NOP
label_279c1c:
    // 0x279c1c: 0x0  nop
    ctx->pc = 0x279c1cu;
    // NOP
label_279c20:
    // 0x279c20: 0x10c4a  .word       0x00010C4A                   # movz        $at, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_279c24:
    // 0x279c24: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x279c24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_279c28:
    // 0x279c28: 0x0  nop
    ctx->pc = 0x279c28u;
    // NOP
label_279c2c:
    // 0x279c2c: 0x0  nop
    ctx->pc = 0x279c2cu;
    // NOP
label_279c30:
    // 0x279c30: 0x10c56  .word       0x00010C56                   # dsrlv       $at, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279c34:
    // 0x279c34: 0xa6b0  tge         $zero, $zero, 666
    ctx->pc = 0x279c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279c38:
    // 0x279c38: 0x0  nop
    ctx->pc = 0x279c38u;
    // NOP
label_279c3c:
    // 0x279c3c: 0x0  nop
    ctx->pc = 0x279c3cu;
    // NOP
label_279c40:
    // 0x279c40: 0x10c6b  .word       0x00010C6B                   # sltu        $at, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_279c44:
    // 0x279c44: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_279c48:
    // 0x279c48: 0x0  nop
    ctx->pc = 0x279c48u;
    // NOP
label_279c4c:
    // 0x279c4c: 0x0  nop
    ctx->pc = 0x279c4cu;
    // NOP
label_279c50:
    // 0x279c50: 0x10c7f  dsra32      $at, $at, 17
    ctx->pc = 0x279c50u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (32 + 17));
label_279c54:
    // 0x279c54: 0x95d0  .word       0x000095D0                   # mfhi        $s2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c54u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_279c58:
    // 0x279c58: 0x0  nop
    ctx->pc = 0x279c58u;
    // NOP
label_279c5c:
    // 0x279c5c: 0x0  nop
    ctx->pc = 0x279c5cu;
    // NOP
label_279c60:
    // 0x279c60: 0x10c92  .word       0x00010C92                   # mflo        $at # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c60u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_279c64:
    // 0x279c64: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x279c64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_279c68:
    // 0x279c68: 0x0  nop
    ctx->pc = 0x279c68u;
    // NOP
label_279c6c:
    // 0x279c6c: 0x0  nop
    ctx->pc = 0x279c6cu;
    // NOP
label_279c70:
    // 0x279c70: 0x10ca0  .word       0x00010CA0                   # add         $at, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_279c74:
    // 0x279c74: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c74u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_279c78:
    // 0x279c78: 0x0  nop
    ctx->pc = 0x279c78u;
    // NOP
label_279c7c:
    // 0x279c7c: 0x0  nop
    ctx->pc = 0x279c7cu;
    // NOP
label_279c80:
    // 0x279c80: 0x10caf  .word       0x00010CAF                   # dsubu       $at, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_279c84:
    // 0x279c84: 0x8040  sll         $s0, $zero, 1
    ctx->pc = 0x279c84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_279c88:
    // 0x279c88: 0x0  nop
    ctx->pc = 0x279c88u;
    // NOP
label_279c8c:
    // 0x279c8c: 0x0  nop
    ctx->pc = 0x279c8cu;
    // NOP
label_279c90:
    // 0x279c90: 0x10cc0  sll         $at, $at, 19
    ctx->pc = 0x279c90u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_279c94:
    // 0x279c94: 0x2f30  tge         $zero, $zero, 188
    ctx->pc = 0x279c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279c98:
    // 0x279c98: 0x0  nop
    ctx->pc = 0x279c98u;
    // NOP
label_279c9c:
    // 0x279c9c: 0x0  nop
    ctx->pc = 0x279c9cu;
    // NOP
label_279ca0:
    // 0x279ca0: 0x10cc6  .word       0x00010CC6                   # srlv        $at, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279ca4:
    // 0x279ca4: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ca4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_279ca8:
    // 0x279ca8: 0x0  nop
    ctx->pc = 0x279ca8u;
    // NOP
label_279cac:
    // 0x279cac: 0x0  nop
    ctx->pc = 0x279cacu;
    // NOP
label_279cb0:
    // 0x279cb0: 0x10cce  .word       0x00010CCE                   # INVALID     $zero, $at, 0xCCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x279CB0 raw=0x00010CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279cb4:
    // 0x279cb4: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x279cb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279cb8:
    // 0x279cb8: 0x0  nop
    ctx->pc = 0x279cb8u;
    // NOP
label_279cbc:
    // 0x279cbc: 0x0  nop
    ctx->pc = 0x279cbcu;
    // NOP
label_279cc0:
    // 0x279cc0: 0x10cdf  .word       0x00010CDF                   # ddivu       $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x279CC0 raw=0x00010CDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279cc4:
    // 0x279cc4: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x279cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279cc8:
    // 0x279cc8: 0x0  nop
    ctx->pc = 0x279cc8u;
    // NOP
label_279ccc:
    // 0x279ccc: 0x0  nop
    ctx->pc = 0x279cccu;
    // NOP
label_279cd0:
    // 0x279cd0: 0x10cee  .word       0x00010CEE                   # dsub        $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279cd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_279cd4:
    // 0x279cd4: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_279cd8:
    // 0x279cd8: 0x0  nop
    ctx->pc = 0x279cd8u;
    // NOP
label_279cdc:
    // 0x279cdc: 0x0  nop
    ctx->pc = 0x279cdcu;
    // NOP
label_279ce0:
    // 0x279ce0: 0x10cf9  .word       0x00010CF9                   # INVALID     $zero, $at, 0xCF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x279CE0 raw=0x00010CF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279ce4:
    // 0x279ce4: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x279ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279ce8:
    // 0x279ce8: 0x0  nop
    ctx->pc = 0x279ce8u;
    // NOP
label_279cec:
    // 0x279cec: 0x0  nop
    ctx->pc = 0x279cecu;
    // NOP
label_279cf0:
    // 0x279cf0: 0x10d06  .word       0x00010D06                   # srlv        $at, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279cf4:
    // 0x279cf4: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x279cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279cf8:
    // 0x279cf8: 0x0  nop
    ctx->pc = 0x279cf8u;
    // NOP
label_279cfc:
    // 0x279cfc: 0x0  nop
    ctx->pc = 0x279cfcu;
    // NOP
label_279d00:
    // 0x279d00: 0x10d10  .word       0x00010D10                   # mfhi        $at # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d00u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_279d04:
    // 0x279d04: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_279d08:
    // 0x279d08: 0x0  nop
    ctx->pc = 0x279d08u;
    // NOP
label_279d0c:
    // 0x279d0c: 0x0  nop
    ctx->pc = 0x279d0cu;
    // NOP
label_279d10:
    // 0x279d10: 0x10d1f  .word       0x00010D1F                   # ddivu       $at, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x279D10 raw=0x00010D1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279d14:
    // 0x279d14: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x279d14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_279d18:
    // 0x279d18: 0x0  nop
    ctx->pc = 0x279d18u;
    // NOP
label_279d1c:
    // 0x279d1c: 0x0  nop
    ctx->pc = 0x279d1cu;
    // NOP
label_279d20:
    // 0x279d20: 0x10d28  .word       0x00010D28                   # mfsa        $at # 00010500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279d20u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_279d24:
    // 0x279d24: 0x4270  tge         $zero, $zero, 265
    ctx->pc = 0x279d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279d28:
    // 0x279d28: 0x0  nop
    ctx->pc = 0x279d28u;
    // NOP
label_279d2c:
    // 0x279d2c: 0x0  nop
    ctx->pc = 0x279d2cu;
    // NOP
label_279d30:
    // 0x279d30: 0x10d31  tgeu        $zero, $at, 52
    ctx->pc = 0x279d30u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279d34:
    // 0x279d34: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x279d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279d38:
    // 0x279d38: 0x0  nop
    ctx->pc = 0x279d38u;
    // NOP
label_279d3c:
    // 0x279d3c: 0x0  nop
    ctx->pc = 0x279d3cu;
    // NOP
label_279d40:
    // 0x279d40: 0x10d3d  .word       0x00010D3D                   # INVALID     $zero, $at, 0xD3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x279D40 raw=0x00010D3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279d44:
    // 0x279d44: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_279d48:
    // 0x279d48: 0x0  nop
    ctx->pc = 0x279d48u;
    // NOP
label_279d4c:
    // 0x279d4c: 0x0  nop
    ctx->pc = 0x279d4cu;
    // NOP
label_279d50:
    // 0x279d50: 0x10d49  .word       0x00010D49                   # jalr        $at, $zero # 00010540 <InstrIdType: CPU_SPECIAL>
label_279d54:
    if (ctx->pc == 0x279D54u) {
        ctx->pc = 0x279D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D50u;
        // 0x279d54: 0x5b00  sll         $t3, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D58u;
        goto label_279d58;
    }
    ctx->pc = 0x279D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x279D58u);
        ctx->pc = 0x279D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D50u;
        // 0x279d54: 0x5b00  sll         $t3, $zero, 12 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D50u, 0x279D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279D58u;
label_279d58:
    // 0x279d58: 0x0  nop
    ctx->pc = 0x279d58u;
    // NOP
label_279d5c:
    // 0x279d5c: 0x0  nop
    ctx->pc = 0x279d5cu;
    // NOP
label_279d60:
    // 0x279d60: 0x10d55  .word       0x00010D55                   # INVALID     $zero, $at, 0xD55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279D60 raw=0x00010D55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279d64:
    // 0x279d64: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_279d68:
    // 0x279d68: 0x0  nop
    ctx->pc = 0x279d68u;
    // NOP
label_279d6c:
    // 0x279d6c: 0x0  nop
    ctx->pc = 0x279d6cu;
    // NOP
label_279d70:
    // 0x279d70: 0x10d66  .word       0x00010D66                   # xor         $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_279d74:
    // 0x279d74: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_279d78:
    // 0x279d78: 0x0  nop
    ctx->pc = 0x279d78u;
    // NOP
label_279d7c:
    // 0x279d7c: 0x0  nop
    ctx->pc = 0x279d7cu;
    // NOP
label_279d80:
    // 0x279d80: 0x10d71  tgeu        $zero, $at, 53
    ctx->pc = 0x279d80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279d84:
    // 0x279d84: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_279d88:
    // 0x279d88: 0x0  nop
    ctx->pc = 0x279d88u;
    // NOP
label_279d8c:
    // 0x279d8c: 0x0  nop
    ctx->pc = 0x279d8cu;
    // NOP
label_279d90:
    // 0x279d90: 0x10d80  sll         $at, $at, 22
    ctx->pc = 0x279d90u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_279d94:
    // 0x279d94: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279d94u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279d98:
    // 0x279d98: 0x0  nop
    ctx->pc = 0x279d98u;
    // NOP
label_279d9c:
    // 0x279d9c: 0x0  nop
    ctx->pc = 0x279d9cu;
    // NOP
label_279da0:
    // 0x279da0: 0x10d8b  .word       0x00010D8B                   # movn        $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279da0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_279da4:
    // 0x279da4: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279da4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_279da8:
    // 0x279da8: 0x0  nop
    ctx->pc = 0x279da8u;
    // NOP
label_279dac:
    // 0x279dac: 0x0  nop
    ctx->pc = 0x279dacu;
    // NOP
label_279db0:
    // 0x279db0: 0x10d99  .word       0x00010D99                   # multu       $zero, $at # 00000D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279db0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_279db4:
    // 0x279db4: 0x6da0  .word       0x00006DA0                   # add         $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_279db8:
    // 0x279db8: 0x0  nop
    ctx->pc = 0x279db8u;
    // NOP
label_279dbc:
    // 0x279dbc: 0x0  nop
    ctx->pc = 0x279dbcu;
    // NOP
label_279dc0:
    // 0x279dc0: 0x10da7  .word       0x00010DA7                   # nor         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279dc0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279dc4:
    // 0x279dc4: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x279dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_279dc8:
    // 0x279dc8: 0x0  nop
    ctx->pc = 0x279dc8u;
    // NOP
label_279dcc:
    // 0x279dcc: 0x0  nop
    ctx->pc = 0x279dccu;
    // NOP
label_279dd0:
    // 0x279dd0: 0x10db4  teq         $zero, $at, 54
    ctx->pc = 0x279dd0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279dd4:
    // 0x279dd4: 0x3ea0  .word       0x00003EA0                   # add         $a3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_279dd8:
    // 0x279dd8: 0x0  nop
    ctx->pc = 0x279dd8u;
    // NOP
label_279ddc:
    // 0x279ddc: 0x0  nop
    ctx->pc = 0x279ddcu;
    // NOP
label_279de0:
    // 0x279de0: 0x10dbc  dsll32      $at, $at, 22
    ctx->pc = 0x279de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 22));
label_279de4:
    // 0x279de4: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_279de8:
    // 0x279de8: 0x0  nop
    ctx->pc = 0x279de8u;
    // NOP
label_279dec:
    // 0x279dec: 0x0  nop
    ctx->pc = 0x279decu;
    // NOP
label_279df0:
    // 0x279df0: 0x10dce  .word       0x00010DCE                   # INVALID     $zero, $at, 0xDCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x279DF0 raw=0x00010DCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279df4:
    // 0x279df4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_279df8:
    // 0x279df8: 0x0  nop
    ctx->pc = 0x279df8u;
    // NOP
label_279dfc:
    // 0x279dfc: 0x0  nop
    ctx->pc = 0x279dfcu;
    // NOP
label_279e00:
    // 0x279e00: 0x10de4  .word       0x00010DE4                   # and         $at, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_279e04:
    // 0x279e04: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_279e08:
    // 0x279e08: 0x0  nop
    ctx->pc = 0x279e08u;
    // NOP
label_279e0c:
    // 0x279e0c: 0x0  nop
    ctx->pc = 0x279e0cu;
    // NOP
label_279e10:
    // 0x279e10: 0x10df7  .word       0x00010DF7                   # INVALID     $zero, $at, 0xDF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x279E10 raw=0x00010DF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279e14:
    // 0x279e14: 0x5760  .word       0x00005760                   # add         $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_279e18:
    // 0x279e18: 0x0  nop
    ctx->pc = 0x279e18u;
    // NOP
label_279e1c:
    // 0x279e1c: 0x0  nop
    ctx->pc = 0x279e1cu;
    // NOP
label_279e20:
    // 0x279e20: 0x10e02  srl         $at, $at, 24
    ctx->pc = 0x279e20u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_279e24:
    // 0x279e24: 0x3350  .word       0x00003350                   # mfhi        $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_279e28:
    // 0x279e28: 0x0  nop
    ctx->pc = 0x279e28u;
    // NOP
label_279e2c:
    // 0x279e2c: 0x0  nop
    ctx->pc = 0x279e2cu;
    // NOP
label_279e30:
    // 0x279e30: 0x10e09  .word       0x00010E09                   # jalr        $at, $zero # 00010600 <InstrIdType: CPU_SPECIAL>
label_279e34:
    if (ctx->pc == 0x279E34u) {
        ctx->pc = 0x279E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E30u;
        // 0x279e34: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279E38u;
        goto label_279e38;
    }
    ctx->pc = 0x279E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x279E38u);
        ctx->pc = 0x279E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E30u;
        // 0x279e34: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E30u, 0x279E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279E38u;
label_279e38:
    // 0x279e38: 0x0  nop
    ctx->pc = 0x279e38u;
    // NOP
label_279e3c:
    // 0x279e3c: 0x0  nop
    ctx->pc = 0x279e3cu;
    // NOP
label_279e40:
    // 0x279e40: 0x10e18  .word       0x00010E18                   # mult        $at, $zero, $at # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_279e44:
    // 0x279e44: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_279e48:
    // 0x279e48: 0x0  nop
    ctx->pc = 0x279e48u;
    // NOP
label_279e4c:
    // 0x279e4c: 0x0  nop
    ctx->pc = 0x279e4cu;
    // NOP
label_279e50:
    // 0x279e50: 0x10e24  .word       0x00010E24                   # and         $at, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_279e54:
    // 0x279e54: 0x4710  .word       0x00004710                   # mfhi        $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_279e58:
    // 0x279e58: 0x0  nop
    ctx->pc = 0x279e58u;
    // NOP
label_279e5c:
    // 0x279e5c: 0x0  nop
    ctx->pc = 0x279e5cu;
    // NOP
label_279e60:
    // 0x279e60: 0x10e2d  .word       0x00010E2D                   # daddu       $at, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e60u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_279e64:
    // 0x279e64: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x279e64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_279e68:
    // 0x279e68: 0x0  nop
    ctx->pc = 0x279e68u;
    // NOP
label_279e6c:
    // 0x279e6c: 0x0  nop
    ctx->pc = 0x279e6cu;
    // NOP
label_279e70:
    // 0x279e70: 0x10e40  sll         $at, $at, 25
    ctx->pc = 0x279e70u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_279e74:
    // 0x279e74: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x279e74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_279e78:
    // 0x279e78: 0x0  nop
    ctx->pc = 0x279e78u;
    // NOP
label_279e7c:
    // 0x279e7c: 0x0  nop
    ctx->pc = 0x279e7cu;
    // NOP
label_279e80:
    // 0x279e80: 0x10e4b  .word       0x00010E4B                   # movn        $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e80u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_279e84:
    // 0x279e84: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e84u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_279e88:
    // 0x279e88: 0x0  nop
    ctx->pc = 0x279e88u;
    // NOP
label_279e8c:
    // 0x279e8c: 0x0  nop
    ctx->pc = 0x279e8cu;
    // NOP
label_279e90:
    // 0x279e90: 0x10e55  .word       0x00010E55                   # INVALID     $zero, $at, 0xE55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279E90 raw=0x00010E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279e94:
    // 0x279e94: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279e94u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_279e98:
    // 0x279e98: 0x0  nop
    ctx->pc = 0x279e98u;
    // NOP
label_279e9c:
    // 0x279e9c: 0x0  nop
    ctx->pc = 0x279e9cu;
    // NOP
label_279ea0:
    // 0x279ea0: 0x10e62  .word       0x00010E62                   # neg         $at, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ea0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_279ea4:
    // 0x279ea4: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ea4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279ea8:
    // 0x279ea8: 0x0  nop
    ctx->pc = 0x279ea8u;
    // NOP
label_279eac:
    // 0x279eac: 0x0  nop
    ctx->pc = 0x279eacu;
    // NOP
label_279eb0:
    // 0x279eb0: 0x10e6d  .word       0x00010E6D                   # daddu       $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279eb0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_279eb4:
    // 0x279eb4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_279eb8:
    // 0x279eb8: 0x0  nop
    ctx->pc = 0x279eb8u;
    // NOP
label_279ebc:
    // 0x279ebc: 0x0  nop
    ctx->pc = 0x279ebcu;
    // NOP
label_279ec0:
    // 0x279ec0: 0x10e7a  dsrl        $at, $at, 25
    ctx->pc = 0x279ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 25);
label_279ec4:
    // 0x279ec4: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_279ec8:
    // 0x279ec8: 0x0  nop
    ctx->pc = 0x279ec8u;
    // NOP
label_279ecc:
    // 0x279ecc: 0x0  nop
    ctx->pc = 0x279eccu;
    // NOP
label_279ed0:
    // 0x279ed0: 0x10e86  .word       0x00010E86                   # srlv        $at, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279ed4:
    // 0x279ed4: 0xc230  tge         $zero, $zero, 776
    ctx->pc = 0x279ed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279ed8:
    // 0x279ed8: 0x0  nop
    ctx->pc = 0x279ed8u;
    // NOP
label_279edc:
    // 0x279edc: 0x0  nop
    ctx->pc = 0x279edcu;
    // NOP
label_279ee0:
    // 0x279ee0: 0x10e9f  .word       0x00010E9F                   # ddivu       $at, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x279EE0 raw=0x00010E9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279ee4:
    // 0x279ee4: 0x8990  .word       0x00008990                   # mfhi        $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ee4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_279ee8:
    // 0x279ee8: 0x0  nop
    ctx->pc = 0x279ee8u;
    // NOP
label_279eec:
    // 0x279eec: 0x0  nop
    ctx->pc = 0x279eecu;
    // NOP
label_279ef0:
    // 0x279ef0: 0x10eb1  tgeu        $zero, $at, 58
    ctx->pc = 0x279ef0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279ef4:
    // 0x279ef4: 0x2fc0  sll         $a1, $zero, 31
    ctx->pc = 0x279ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_279ef8:
    // 0x279ef8: 0x0  nop
    ctx->pc = 0x279ef8u;
    // NOP
label_279efc:
    // 0x279efc: 0x0  nop
    ctx->pc = 0x279efcu;
    // NOP
label_279f00:
    // 0x279f00: 0x10eb7  .word       0x00010EB7                   # INVALID     $zero, $at, 0xEB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x279F00 raw=0x00010EB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279f04:
    // 0x279f04: 0x3060  .word       0x00003060                   # add         $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_279f08:
    // 0x279f08: 0x0  nop
    ctx->pc = 0x279f08u;
    // NOP
label_279f0c:
    // 0x279f0c: 0x0  nop
    ctx->pc = 0x279f0cu;
    // NOP
label_279f10:
    // 0x279f10: 0x10ebe  dsrl32      $at, $at, 26
    ctx->pc = 0x279f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (32 + 26));
label_279f14:
    // 0x279f14: 0x6830  tge         $zero, $zero, 416
    ctx->pc = 0x279f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279f18:
    // 0x279f18: 0x0  nop
    ctx->pc = 0x279f18u;
    // NOP
label_279f1c:
    // 0x279f1c: 0x0  nop
    ctx->pc = 0x279f1cu;
    // NOP
label_279f20:
    // 0x279f20: 0x10ecc  .word       0x00010ECC                   # syscall     59 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f20u;
    ctx->pc = 0x279F24u;
runtime->handleSyscall(rdram, ctx, 0x43Bu);
label_279f24:
    // 0x279f24: 0x73f0  tge         $zero, $zero, 463
    ctx->pc = 0x279f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279f28:
    // 0x279f28: 0x0  nop
    ctx->pc = 0x279f28u;
    // NOP
label_279f2c:
    // 0x279f2c: 0x0  nop
    ctx->pc = 0x279f2cu;
    // NOP
label_279f30:
    // 0x279f30: 0x10edb  .word       0x00010EDB                   # divu        $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f30u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_279f34:
    // 0x279f34: 0x5db0  tge         $zero, $zero, 374
    ctx->pc = 0x279f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279f38:
    // 0x279f38: 0x0  nop
    ctx->pc = 0x279f38u;
    // NOP
label_279f3c:
    // 0x279f3c: 0x0  nop
    ctx->pc = 0x279f3cu;
    // NOP
label_279f40:
    // 0x279f40: 0x10ee7  .word       0x00010EE7                   # nor         $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f40u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279f44:
    // 0x279f44: 0x4e00  sll         $t1, $zero, 24
    ctx->pc = 0x279f44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_279f48:
    // 0x279f48: 0x0  nop
    ctx->pc = 0x279f48u;
    // NOP
label_279f4c:
    // 0x279f4c: 0x0  nop
    ctx->pc = 0x279f4cu;
    // NOP
label_279f50:
    // 0x279f50: 0x10ef1  tgeu        $zero, $at, 59
    ctx->pc = 0x279f50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279f54:
    // 0x279f54: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f54u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_279f58:
    // 0x279f58: 0x0  nop
    ctx->pc = 0x279f58u;
    // NOP
label_279f5c:
    // 0x279f5c: 0x0  nop
    ctx->pc = 0x279f5cu;
    // NOP
label_279f60:
    // 0x279f60: 0x10efd  .word       0x00010EFD                   # INVALID     $zero, $at, 0xEFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x279F60 raw=0x00010EFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279f64:
    // 0x279f64: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x279f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279f68:
    // 0x279f68: 0x0  nop
    ctx->pc = 0x279f68u;
    // NOP
label_279f6c:
    // 0x279f6c: 0x0  nop
    ctx->pc = 0x279f6cu;
    // NOP
label_279f70:
    // 0x279f70: 0x10f0c  .word       0x00010F0C                   # syscall     60 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f70u;
    ctx->pc = 0x279F74u;
runtime->handleSyscall(rdram, ctx, 0x43Cu);
label_279f74:
    // 0x279f74: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_279f78:
    // 0x279f78: 0x0  nop
    ctx->pc = 0x279f78u;
    // NOP
label_279f7c:
    // 0x279f7c: 0x0  nop
    ctx->pc = 0x279f7cu;
    // NOP
label_279f80:
    // 0x279f80: 0x10f16  .word       0x00010F16                   # dsrlv       $at, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279f84:
    // 0x279f84: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x279f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279f88:
    // 0x279f88: 0x0  nop
    ctx->pc = 0x279f88u;
    // NOP
label_279f8c:
    // 0x279f8c: 0x0  nop
    ctx->pc = 0x279f8cu;
    // NOP
label_279f90:
    // 0x279f90: 0x10f1d  .word       0x00010F1D                   # dmultu      $zero, $at # 00000F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x279F90 raw=0x00010F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279f94:
    // 0x279f94: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_279f98:
    // 0x279f98: 0x0  nop
    ctx->pc = 0x279f98u;
    // NOP
label_279f9c:
    // 0x279f9c: 0x0  nop
    ctx->pc = 0x279f9cu;
    // NOP
label_279fa0:
    // 0x279fa0: 0x10f27  .word       0x00010F27                   # nor         $at, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279fa0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_279fa4:
    // 0x279fa4: 0x5830  tge         $zero, $zero, 352
    ctx->pc = 0x279fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279fa8:
    // 0x279fa8: 0x0  nop
    ctx->pc = 0x279fa8u;
    // NOP
label_279fac:
    // 0x279fac: 0x0  nop
    ctx->pc = 0x279facu;
    // NOP
label_279fb0:
    // 0x279fb0: 0x10f33  tltu        $zero, $at, 60
    ctx->pc = 0x279fb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279fb4:
    // 0x279fb4: 0x3a60  .word       0x00003A60                   # add         $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_279fb8:
    // 0x279fb8: 0x0  nop
    ctx->pc = 0x279fb8u;
    // NOP
label_279fbc:
    // 0x279fbc: 0x0  nop
    ctx->pc = 0x279fbcu;
    // NOP
label_279fc0:
    // 0x279fc0: 0x10f3b  dsra        $at, $at, 28
    ctx->pc = 0x279fc0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 28);
label_279fc4:
    // 0x279fc4: 0x3410  .word       0x00003410                   # mfhi        $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279fc4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_279fc8:
    // 0x279fc8: 0x0  nop
    ctx->pc = 0x279fc8u;
    // NOP
label_279fcc:
    // 0x279fcc: 0x0  nop
    ctx->pc = 0x279fccu;
    // NOP
label_279fd0:
    // 0x279fd0: 0x10f42  srl         $at, $at, 29
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_279fd4:
    // 0x279fd4: 0x2320  .word       0x00002320                   # add         $a0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_279fd8:
    // 0x279fd8: 0x0  nop
    ctx->pc = 0x279fd8u;
    // NOP
label_279fdc:
    // 0x279fdc: 0x0  nop
    ctx->pc = 0x279fdcu;
    // NOP
label_279fe0:
    // 0x279fe0: 0x10f47  .word       0x00010F47                   # srav        $at, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279fe0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279fe4:
    // 0x279fe4: 0x3e70  tge         $zero, $zero, 249
    ctx->pc = 0x279fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279fe8:
    // 0x279fe8: 0x0  nop
    ctx->pc = 0x279fe8u;
    // NOP
label_279fec:
    // 0x279fec: 0x0  nop
    ctx->pc = 0x279fecu;
    // NOP
label_279ff0:
    // 0x279ff0: 0x10f4f  .word       0x00010F4F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_279ff4:
    // 0x279ff4: 0x3830  tge         $zero, $zero, 224
    ctx->pc = 0x279ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279ff8:
    // 0x279ff8: 0x0  nop
    ctx->pc = 0x279ff8u;
    // NOP
label_279ffc:
    // 0x279ffc: 0x0  nop
    ctx->pc = 0x279ffcu;
    // NOP
label_27a000:
    // 0x27a000: 0x10f57  .word       0x00010F57                   # dsrav       $at, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a000u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a004:
    // 0x27a004: 0x6100  sll         $t4, $zero, 4
    ctx->pc = 0x27a004u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27a008:
    // 0x27a008: 0x0  nop
    ctx->pc = 0x27a008u;
    // NOP
label_27a00c:
    // 0x27a00c: 0x0  nop
    ctx->pc = 0x27a00cu;
    // NOP
label_27a010:
    // 0x27a010: 0x10f64  .word       0x00010F64                   # and         $at, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27a014:
    // 0x27a014: 0x5580  sll         $t2, $zero, 22
    ctx->pc = 0x27a014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27a018:
    // 0x27a018: 0x0  nop
    ctx->pc = 0x27a018u;
    // NOP
label_27a01c:
    // 0x27a01c: 0x0  nop
    ctx->pc = 0x27a01cu;
    // NOP
label_27a020:
    // 0x27a020: 0x10f6f  .word       0x00010F6F                   # dsubu       $at, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27a024:
    // 0x27a024: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x27a024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27a028:
    // 0x27a028: 0x0  nop
    ctx->pc = 0x27a028u;
    // NOP
label_27a02c:
    // 0x27a02c: 0x0  nop
    ctx->pc = 0x27a02cu;
    // NOP
label_27a030:
    // 0x27a030: 0x10f76  tne         $zero, $at, 61
    ctx->pc = 0x27a030u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a034:
    // 0x27a034: 0x36b0  tge         $zero, $zero, 218
    ctx->pc = 0x27a034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a038:
    // 0x27a038: 0x0  nop
    ctx->pc = 0x27a038u;
    // NOP
label_27a03c:
    // 0x27a03c: 0x0  nop
    ctx->pc = 0x27a03cu;
    // NOP
label_27a040:
    // 0x27a040: 0x10f7d  .word       0x00010F7D                   # INVALID     $zero, $at, 0xF7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27A040 raw=0x00010F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a044:
    // 0x27a044: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x27a044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a048:
    // 0x27a048: 0x0  nop
    ctx->pc = 0x27a048u;
    // NOP
label_27a04c:
    // 0x27a04c: 0x0  nop
    ctx->pc = 0x27a04cu;
    // NOP
label_27a050:
    // 0x27a050: 0x10f88  .word       0x00010F88                   # jr          $zero # 00010F80 <InstrIdType: CPU_SPECIAL>
label_27a054:
    if (ctx->pc == 0x27A054u) {
        ctx->pc = 0x27A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A050u;
        // 0x27a054: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A058u;
        goto label_27a058;
    }
    ctx->pc = 0x27A050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A050u;
        // 0x27a054: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27A058u;
label_27a058:
    // 0x27a058: 0x0  nop
    ctx->pc = 0x27a058u;
    // NOP
label_27a05c:
    // 0x27a05c: 0x0  nop
    ctx->pc = 0x27a05cu;
    // NOP
label_27a060:
    // 0x27a060: 0x10f96  .word       0x00010F96                   # dsrlv       $at, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a064:
    // 0x27a064: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x27a064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a068:
    // 0x27a068: 0x0  nop
    ctx->pc = 0x27a068u;
    // NOP
label_27a06c:
    // 0x27a06c: 0x0  nop
    ctx->pc = 0x27a06cu;
    // NOP
label_27a070:
    // 0x27a070: 0x10fa4  .word       0x00010FA4                   # and         $at, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27a074:
    // 0x27a074: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x27a074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a078:
    // 0x27a078: 0x0  nop
    ctx->pc = 0x27a078u;
    // NOP
label_27a07c:
    // 0x27a07c: 0x0  nop
    ctx->pc = 0x27a07cu;
    // NOP
label_27a080:
    // 0x27a080: 0x10fb1  tgeu        $zero, $at, 62
    ctx->pc = 0x27a080u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a084:
    // 0x27a084: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x27a084u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27a088:
    // 0x27a088: 0x0  nop
    ctx->pc = 0x27a088u;
    // NOP
label_27a08c:
    // 0x27a08c: 0x0  nop
    ctx->pc = 0x27a08cu;
    // NOP
label_27a090:
    // 0x27a090: 0x10fbc  dsll32      $at, $at, 30
    ctx->pc = 0x27a090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 30));
label_27a094:
    // 0x27a094: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a098:
    // 0x27a098: 0x0  nop
    ctx->pc = 0x27a098u;
    // NOP
label_27a09c:
    // 0x27a09c: 0x0  nop
    ctx->pc = 0x27a09cu;
    // NOP
label_27a0a0:
    // 0x27a0a0: 0x10fc9  .word       0x00010FC9                   # jalr        $at, $zero # 000107C0 <InstrIdType: CPU_SPECIAL>
label_27a0a4:
    if (ctx->pc == 0x27A0A4u) {
        ctx->pc = 0x27A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A0u;
        // 0x27a0a4: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0A8u;
        goto label_27a0a8;
    }
    ctx->pc = 0x27A0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x27A0A8u);
        ctx->pc = 0x27A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A0u;
        // 0x27a0a4: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0A0u, 0x27A0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A0A8u;
label_27a0a8:
    // 0x27a0a8: 0x0  nop
    ctx->pc = 0x27a0a8u;
    // NOP
label_27a0ac:
    // 0x27a0ac: 0x0  nop
    ctx->pc = 0x27a0acu;
    // NOP
label_27a0b0:
    // 0x27a0b0: 0x10fd1  .word       0x00010FD1                   # mthi        $zero # 00010FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a0b4:
    // 0x27a0b4: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a0b8:
    // 0x27a0b8: 0x0  nop
    ctx->pc = 0x27a0b8u;
    // NOP
label_27a0bc:
    // 0x27a0bc: 0x0  nop
    ctx->pc = 0x27a0bcu;
    // NOP
label_27a0c0:
    // 0x27a0c0: 0x10fd9  .word       0x00010FD9                   # multu       $zero, $at # 00000FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_27a0c4:
    // 0x27a0c4: 0x8130  tge         $zero, $zero, 516
    ctx->pc = 0x27a0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a0c8:
    // 0x27a0c8: 0x0  nop
    ctx->pc = 0x27a0c8u;
    // NOP
label_27a0cc:
    // 0x27a0cc: 0x0  nop
    ctx->pc = 0x27a0ccu;
    // NOP
label_27a0d0:
    // 0x27a0d0: 0x10fea  .word       0x00010FEA                   # slt         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27a0d4:
    // 0x27a0d4: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x27a0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27a0d8:
    // 0x27a0d8: 0x0  nop
    ctx->pc = 0x27a0d8u;
    // NOP
label_27a0dc:
    // 0x27a0dc: 0x0  nop
    ctx->pc = 0x27a0dcu;
    // NOP
label_27a0e0:
    // 0x27a0e0: 0x10ff5  .word       0x00010FF5                   # INVALID     $zero, $at, 0xFF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A0E0 raw=0x00010FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a0e4:
    // 0x27a0e4: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x27a0e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a0e8:
    // 0x27a0e8: 0x0  nop
    ctx->pc = 0x27a0e8u;
    // NOP
label_27a0ec:
    // 0x27a0ec: 0x0  nop
    ctx->pc = 0x27a0ecu;
    // NOP
label_27a0f0:
    // 0x27a0f0: 0x11000  sll         $v0, $at, 0
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_27a0f4:
    // 0x27a0f4: 0x3340  sll         $a2, $zero, 13
    ctx->pc = 0x27a0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27a0f8:
    // 0x27a0f8: 0x0  nop
    ctx->pc = 0x27a0f8u;
    // NOP
label_27a0fc:
    // 0x27a0fc: 0x0  nop
    ctx->pc = 0x27a0fcu;
    // NOP
label_27a100:
    // 0x27a100: 0x11007  srav        $v0, $at, $zero
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a104:
    // 0x27a104: 0x2fb0  tge         $zero, $zero, 190
    ctx->pc = 0x27a104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a108:
    // 0x27a108: 0x0  nop
    ctx->pc = 0x27a108u;
    // NOP
label_27a10c:
    // 0x27a10c: 0x0  nop
    ctx->pc = 0x27a10cu;
    // NOP
label_27a110:
    // 0x27a110: 0x1100d  break       1, 64
    ctx->pc = 0x27a110u;
    runtime->handleBreak(rdram, ctx);
label_27a114:
    // 0x27a114: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27a118:
    // 0x27a118: 0x0  nop
    ctx->pc = 0x27a118u;
    // NOP
label_27a11c:
    // 0x27a11c: 0x0  nop
    ctx->pc = 0x27a11cu;
    // NOP
label_27a120:
    // 0x27a120: 0x11014  dsllv       $v0, $at, $zero
    ctx->pc = 0x27a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27a124:
    // 0x27a124: 0x43e0  .word       0x000043E0                   # add         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a128:
    // 0x27a128: 0x0  nop
    ctx->pc = 0x27a128u;
    // NOP
label_27a12c:
    // 0x27a12c: 0x0  nop
    ctx->pc = 0x27a12cu;
    // NOP
label_27a130:
    // 0x27a130: 0x1101d  .word       0x0001101D                   # dmultu      $zero, $at # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27A130 raw=0x0001101D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a134:
    // 0x27a134: 0x3b10  .word       0x00003B10                   # mfhi        $a3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a134u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27a138:
    // 0x27a138: 0x0  nop
    ctx->pc = 0x27a138u;
    // NOP
label_27a13c:
    // 0x27a13c: 0x0  nop
    ctx->pc = 0x27a13cu;
    // NOP
label_27a140:
    // 0x27a140: 0x11025  or          $v0, $zero, $at
    ctx->pc = 0x27a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27a144:
    // 0x27a144: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a148:
    // 0x27a148: 0x0  nop
    ctx->pc = 0x27a148u;
    // NOP
label_27a14c:
    // 0x27a14c: 0x0  nop
    ctx->pc = 0x27a14cu;
    // NOP
label_27a150:
    // 0x27a150: 0x11032  tlt         $zero, $at, 64
    ctx->pc = 0x27a150u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a154:
    // 0x27a154: 0x2400  sll         $a0, $zero, 16
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27a158:
    // 0x27a158: 0x0  nop
    ctx->pc = 0x27a158u;
    // NOP
label_27a15c:
    // 0x27a15c: 0x0  nop
    ctx->pc = 0x27a15cu;
    // NOP
label_27a160:
    // 0x27a160: 0x11037  .word       0x00011037                   # INVALID     $zero, $at, 0x1037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27A160 raw=0x00011037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a164:
    // 0x27a164: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x27a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a168:
    // 0x27a168: 0x0  nop
    ctx->pc = 0x27a168u;
    // NOP
label_27a16c:
    // 0x27a16c: 0x0  nop
    ctx->pc = 0x27a16cu;
    // NOP
label_27a170:
    // 0x27a170: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x27a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
label_27a174:
    // 0x27a174: 0x8a70  tge         $zero, $zero, 553
    ctx->pc = 0x27a174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a178:
    // 0x27a178: 0x0  nop
    ctx->pc = 0x27a178u;
    // NOP
label_27a17c:
    // 0x27a17c: 0x0  nop
    ctx->pc = 0x27a17cu;
    // NOP
label_27a180:
    // 0x27a180: 0x11050  .word       0x00011050                   # mfhi        $v0 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a180u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a184:
    // 0x27a184: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x27a184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27a188:
    // 0x27a188: 0x0  nop
    ctx->pc = 0x27a188u;
    // NOP
label_27a18c:
    // 0x27a18c: 0x0  nop
    ctx->pc = 0x27a18cu;
    // NOP
label_27a190:
    // 0x27a190: 0x1105c  .word       0x0001105C                   # dmult       $zero, $at # 00001040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27A190 raw=0x0001105C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a194:
    // 0x27a194: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a194u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a198:
    // 0x27a198: 0x0  nop
    ctx->pc = 0x27a198u;
    // NOP
label_27a19c:
    // 0x27a19c: 0x0  nop
    ctx->pc = 0x27a19cu;
    // NOP
label_27a1a0:
    // 0x27a1a0: 0x1106b  .word       0x0001106B                   # sltu        $v0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27a1a4:
    // 0x27a1a4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27a1a8:
    // 0x27a1a8: 0x0  nop
    ctx->pc = 0x27a1a8u;
    // NOP
label_27a1ac:
    // 0x27a1ac: 0x0  nop
    ctx->pc = 0x27a1acu;
    // NOP
label_27a1b0:
    // 0x27a1b0: 0x11075  .word       0x00011075                   # INVALID     $zero, $at, 0x1075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A1B0 raw=0x00011075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a1b4:
    // 0x27a1b4: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27a1b8:
    // 0x27a1b8: 0x0  nop
    ctx->pc = 0x27a1b8u;
    // NOP
label_27a1bc:
    // 0x27a1bc: 0x0  nop
    ctx->pc = 0x27a1bcu;
    // NOP
label_27a1c0:
    // 0x27a1c0: 0x11080  sll         $v0, $at, 2
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_27a1c4:
    // 0x27a1c4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x27a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27a1c8:
    // 0x27a1c8: 0x0  nop
    ctx->pc = 0x27a1c8u;
    // NOP
label_27a1cc:
    // 0x27a1cc: 0x0  nop
    ctx->pc = 0x27a1ccu;
    // NOP
label_27a1d0:
    // 0x27a1d0: 0x11091  .word       0x00011091                   # mthi        $zero # 00011080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a1d4:
    // 0x27a1d4: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a1d8:
    // 0x27a1d8: 0x0  nop
    ctx->pc = 0x27a1d8u;
    // NOP
label_27a1dc:
    // 0x27a1dc: 0x0  nop
    ctx->pc = 0x27a1dcu;
    // NOP
label_27a1e0:
    // 0x27a1e0: 0x1109e  .word       0x0001109E                   # ddiv        $v0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27A1E0 raw=0x0001109E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a1e4:
    // 0x27a1e4: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a1e8:
    // 0x27a1e8: 0x0  nop
    ctx->pc = 0x27a1e8u;
    // NOP
label_27a1ec:
    // 0x27a1ec: 0x0  nop
    ctx->pc = 0x27a1ecu;
    // NOP
label_27a1f0:
    // 0x27a1f0: 0x110a6  .word       0x000110A6                   # xor         $v0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a1f4:
    // 0x27a1f4: 0x6860  .word       0x00006860                   # add         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27a1f8:
    // 0x27a1f8: 0x0  nop
    ctx->pc = 0x27a1f8u;
    // NOP
label_27a1fc:
    // 0x27a1fc: 0x0  nop
    ctx->pc = 0x27a1fcu;
    // NOP
label_27a200:
    // 0x27a200: 0x110b4  teq         $zero, $at, 66
    ctx->pc = 0x27a200u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a204:
    // 0x27a204: 0x5040  sll         $t2, $zero, 1
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27a208:
    // 0x27a208: 0x0  nop
    ctx->pc = 0x27a208u;
    // NOP
label_27a20c:
    // 0x27a20c: 0x0  nop
    ctx->pc = 0x27a20cu;
    // NOP
label_27a210:
    // 0x27a210: 0x110bf  dsra32      $v0, $at, 2
    ctx->pc = 0x27a210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 2));
label_27a214:
    // 0x27a214: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a214u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27a218:
    // 0x27a218: 0x0  nop
    ctx->pc = 0x27a218u;
    // NOP
label_27a21c:
    // 0x27a21c: 0x0  nop
    ctx->pc = 0x27a21cu;
    // NOP
label_27a220:
    // 0x27a220: 0x110c9  .word       0x000110C9                   # jalr        $v0, $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_27a224:
    if (ctx->pc == 0x27A224u) {
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A228u;
        goto label_27a228;
    }
    ctx->pc = 0x27A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27A228u);
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A220u, 0x27A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A228u;
label_27a228:
    // 0x27a228: 0x0  nop
    ctx->pc = 0x27a228u;
    // NOP
label_27a22c:
    // 0x27a22c: 0x0  nop
    ctx->pc = 0x27a22cu;
    // NOP
label_27a230:
    // 0x27a230: 0x110d5  .word       0x000110D5                   # INVALID     $zero, $at, 0x10D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27A230 raw=0x000110D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a234:
    // 0x27a234: 0x6f70  tge         $zero, $zero, 445
    ctx->pc = 0x27a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a238:
    // 0x27a238: 0x0  nop
    ctx->pc = 0x27a238u;
    // NOP
label_27a23c:
    // 0x27a23c: 0x0  nop
    ctx->pc = 0x27a23cu;
    // NOP
label_27a240:
    // 0x27a240: 0x110e3  .word       0x000110E3                   # negu        $v0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a244:
    // 0x27a244: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x27a244u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27a248:
    // 0x27a248: 0x0  nop
    ctx->pc = 0x27a248u;
    // NOP
label_27a24c:
    // 0x27a24c: 0x0  nop
    ctx->pc = 0x27a24cu;
    // NOP
label_27a250:
    // 0x27a250: 0x110ec  .word       0x000110EC                   # dadd        $v0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a254:
    // 0x27a254: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a254u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27a258:
    // 0x27a258: 0x0  nop
    ctx->pc = 0x27a258u;
    // NOP
label_27a25c:
    // 0x27a25c: 0x0  nop
    ctx->pc = 0x27a25cu;
    // NOP
label_27a260:
    // 0x27a260: 0x110f8  dsll        $v0, $at, 3
    ctx->pc = 0x27a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 3);
label_27a264:
    // 0x27a264: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27a268:
    // 0x27a268: 0x0  nop
    ctx->pc = 0x27a268u;
    // NOP
label_27a26c:
    // 0x27a26c: 0x0  nop
    ctx->pc = 0x27a26cu;
    // NOP
label_27a270:
    // 0x27a270: 0x11106  .word       0x00011106                   # srlv        $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a274:
    // 0x27a274: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x27a274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a278:
    // 0x27a278: 0x0  nop
    ctx->pc = 0x27a278u;
    // NOP
label_27a27c:
    // 0x27a27c: 0x0  nop
    ctx->pc = 0x27a27cu;
    // NOP
label_27a280:
    // 0x27a280: 0x11116  .word       0x00011116                   # dsrlv       $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a284:
    // 0x27a284: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27a288:
    // 0x27a288: 0x0  nop
    ctx->pc = 0x27a288u;
    // NOP
label_27a28c:
    // 0x27a28c: 0x0  nop
    ctx->pc = 0x27a28cu;
    // NOP
label_27a290:
    // 0x27a290: 0x11126  .word       0x00011126                   # xor         $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a294:
    // 0x27a294: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x27a294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a298:
    // 0x27a298: 0x0  nop
    ctx->pc = 0x27a298u;
    // NOP
label_27a29c:
    // 0x27a29c: 0x0  nop
    ctx->pc = 0x27a29cu;
    // NOP
label_27a2a0:
    // 0x27a2a0: 0x1113c  dsll32      $v0, $at, 4
    ctx->pc = 0x27a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 4));
label_27a2a4:
    // 0x27a2a4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a2a8:
    // 0x27a2a8: 0x0  nop
    ctx->pc = 0x27a2a8u;
    // NOP
label_27a2ac:
    // 0x27a2ac: 0x0  nop
    ctx->pc = 0x27a2acu;
    // NOP
label_27a2b0:
    // 0x27a2b0: 0x1114b  .word       0x0001114B                   # movn        $v0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a2b4:
    // 0x27a2b4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x27a2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27a2b8:
    // 0x27a2b8: 0x0  nop
    ctx->pc = 0x27a2b8u;
    // NOP
label_27a2bc:
    // 0x27a2bc: 0x0  nop
    ctx->pc = 0x27a2bcu;
    // NOP
label_27a2c0:
    // 0x27a2c0: 0x11158  .word       0x00011158                   # mult        $v0, $zero, $at # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a2c4:
    // 0x27a2c4: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x27a2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27a2c8:
    // 0x27a2c8: 0x0  nop
    ctx->pc = 0x27a2c8u;
    // NOP
label_27a2cc:
    // 0x27a2cc: 0x0  nop
    ctx->pc = 0x27a2ccu;
    // NOP
label_27a2d0:
    // 0x27a2d0: 0x11169  .word       0x00011169                   # mtsa        $zero # 00011140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a2d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27a2d4:
    // 0x27a2d4: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27a2d8:
    // 0x27a2d8: 0x0  nop
    ctx->pc = 0x27a2d8u;
    // NOP
label_27a2dc:
    // 0x27a2dc: 0x0  nop
    ctx->pc = 0x27a2dcu;
    // NOP
label_27a2e0:
    // 0x27a2e0: 0x11175  .word       0x00011175                   # INVALID     $zero, $at, 0x1175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A2E0 raw=0x00011175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a2e4:
    // 0x27a2e4: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27a2e8:
    // 0x27a2e8: 0x0  nop
    ctx->pc = 0x27a2e8u;
    // NOP
label_27a2ec:
    // 0x27a2ec: 0x0  nop
    ctx->pc = 0x27a2ecu;
    // NOP
label_27a2f0:
    // 0x27a2f0: 0x1117c  dsll32      $v0, $at, 5
    ctx->pc = 0x27a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 5));
label_27a2f4:
    // 0x27a2f4: 0x40b0  tge         $zero, $zero, 258
    ctx->pc = 0x27a2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a2f8:
    // 0x27a2f8: 0x0  nop
    ctx->pc = 0x27a2f8u;
    // NOP
label_27a2fc:
    // 0x27a2fc: 0x0  nop
    ctx->pc = 0x27a2fcu;
    // NOP
label_27a300:
    // 0x27a300: 0x11185  .word       0x00011185                   # INVALID     $zero, $at, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27A300 raw=0x00011185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a304:
    // 0x27a304: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x27a304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a308:
    // 0x27a308: 0x0  nop
    ctx->pc = 0x27a308u;
    // NOP
label_27a30c:
    // 0x27a30c: 0x0  nop
    ctx->pc = 0x27a30cu;
    // NOP
label_27a310:
    // 0x27a310: 0x11196  .word       0x00011196                   # dsrlv       $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a314:
    // 0x27a314: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27a318:
    // 0x27a318: 0x0  nop
    ctx->pc = 0x27a318u;
    // NOP
label_27a31c:
    // 0x27a31c: 0x0  nop
    ctx->pc = 0x27a31cu;
    // NOP
label_27a320:
    // 0x27a320: 0x111a6  .word       0x000111A6                   # xor         $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a324:
    // 0x27a324: 0x4790  .word       0x00004790                   # mfhi        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a324u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27a328:
    // 0x27a328: 0x0  nop
    ctx->pc = 0x27a328u;
    // NOP
label_27a32c:
    // 0x27a32c: 0x0  nop
    ctx->pc = 0x27a32cu;
    // NOP
label_27a330:
    // 0x27a330: 0x111af  .word       0x000111AF                   # dsubu       $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27a334:
    // 0x27a334: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x27a334u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27a338:
    // 0x27a338: 0x0  nop
    ctx->pc = 0x27a338u;
    // NOP
label_27a33c:
    // 0x27a33c: 0x0  nop
    ctx->pc = 0x27a33cu;
    // NOP
label_27a340:
    // 0x27a340: 0x111ba  dsrl        $v0, $at, 6
    ctx->pc = 0x27a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 6);
label_27a344:
    // 0x27a344: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a348:
    // 0x27a348: 0x0  nop
    ctx->pc = 0x27a348u;
    // NOP
label_27a34c:
    // 0x27a34c: 0x0  nop
    ctx->pc = 0x27a34cu;
    // NOP
    ctx->pc = 0x27a350u;
    return;
}
