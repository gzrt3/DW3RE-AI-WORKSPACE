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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part431(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x251a00u: goto label_251a00;
        case 0x251a04u: goto label_251a04;
        case 0x251a08u: goto label_251a08;
        case 0x251a0cu: goto label_251a0c;
        case 0x251a10u: goto label_251a10;
        case 0x251a14u: goto label_251a14;
        case 0x251a18u: goto label_251a18;
        case 0x251a1cu: goto label_251a1c;
        case 0x251a20u: goto label_251a20;
        case 0x251a24u: goto label_251a24;
        case 0x251a28u: goto label_251a28;
        case 0x251a2cu: goto label_251a2c;
        case 0x251a30u: goto label_251a30;
        case 0x251a34u: goto label_251a34;
        case 0x251a38u: goto label_251a38;
        case 0x251a3cu: goto label_251a3c;
        case 0x251a40u: goto label_251a40;
        case 0x251a44u: goto label_251a44;
        case 0x251a48u: goto label_251a48;
        case 0x251a4cu: goto label_251a4c;
        case 0x251a50u: goto label_251a50;
        case 0x251a54u: goto label_251a54;
        case 0x251a58u: goto label_251a58;
        case 0x251a5cu: goto label_251a5c;
        case 0x251a60u: goto label_251a60;
        case 0x251a64u: goto label_251a64;
        case 0x251a68u: goto label_251a68;
        case 0x251a6cu: goto label_251a6c;
        case 0x251a70u: goto label_251a70;
        case 0x251a74u: goto label_251a74;
        case 0x251a78u: goto label_251a78;
        case 0x251a7cu: goto label_251a7c;
        case 0x251a80u: goto label_251a80;
        case 0x251a84u: goto label_251a84;
        case 0x251a88u: goto label_251a88;
        case 0x251a8cu: goto label_251a8c;
        case 0x251a90u: goto label_251a90;
        case 0x251a94u: goto label_251a94;
        case 0x251a98u: goto label_251a98;
        case 0x251a9cu: goto label_251a9c;
        case 0x251aa0u: goto label_251aa0;
        case 0x251aa4u: goto label_251aa4;
        case 0x251aa8u: goto label_251aa8;
        case 0x251aacu: goto label_251aac;
        case 0x251ab0u: goto label_251ab0;
        case 0x251ab4u: goto label_251ab4;
        case 0x251ab8u: goto label_251ab8;
        case 0x251abcu: goto label_251abc;
        case 0x251ac0u: goto label_251ac0;
        case 0x251ac4u: goto label_251ac4;
        case 0x251ac8u: goto label_251ac8;
        case 0x251accu: goto label_251acc;
        case 0x251ad0u: goto label_251ad0;
        case 0x251ad4u: goto label_251ad4;
        case 0x251ad8u: goto label_251ad8;
        case 0x251adcu: goto label_251adc;
        case 0x251ae0u: goto label_251ae0;
        case 0x251ae4u: goto label_251ae4;
        case 0x251ae8u: goto label_251ae8;
        case 0x251aecu: goto label_251aec;
        case 0x251af0u: goto label_251af0;
        case 0x251af4u: goto label_251af4;
        case 0x251af8u: goto label_251af8;
        case 0x251afcu: goto label_251afc;
        case 0x251b00u: goto label_251b00;
        case 0x251b04u: goto label_251b04;
        case 0x251b08u: goto label_251b08;
        case 0x251b0cu: goto label_251b0c;
        case 0x251b10u: goto label_251b10;
        case 0x251b14u: goto label_251b14;
        case 0x251b18u: goto label_251b18;
        case 0x251b1cu: goto label_251b1c;
        case 0x251b20u: goto label_251b20;
        case 0x251b24u: goto label_251b24;
        case 0x251b28u: goto label_251b28;
        case 0x251b2cu: goto label_251b2c;
        case 0x251b30u: goto label_251b30;
        case 0x251b34u: goto label_251b34;
        case 0x251b38u: goto label_251b38;
        case 0x251b3cu: goto label_251b3c;
        case 0x251b40u: goto label_251b40;
        case 0x251b44u: goto label_251b44;
        case 0x251b48u: goto label_251b48;
        case 0x251b4cu: goto label_251b4c;
        case 0x251b50u: goto label_251b50;
        case 0x251b54u: goto label_251b54;
        case 0x251b58u: goto label_251b58;
        case 0x251b5cu: goto label_251b5c;
        case 0x251b60u: goto label_251b60;
        case 0x251b64u: goto label_251b64;
        case 0x251b68u: goto label_251b68;
        case 0x251b6cu: goto label_251b6c;
        case 0x251b70u: goto label_251b70;
        case 0x251b74u: goto label_251b74;
        case 0x251b78u: goto label_251b78;
        case 0x251b7cu: goto label_251b7c;
        case 0x251b80u: goto label_251b80;
        case 0x251b84u: goto label_251b84;
        case 0x251b88u: goto label_251b88;
        case 0x251b8cu: goto label_251b8c;
        case 0x251b90u: goto label_251b90;
        case 0x251b94u: goto label_251b94;
        case 0x251b98u: goto label_251b98;
        case 0x251b9cu: goto label_251b9c;
        case 0x251ba0u: goto label_251ba0;
        case 0x251ba4u: goto label_251ba4;
        case 0x251ba8u: goto label_251ba8;
        case 0x251bacu: goto label_251bac;
        case 0x251bb0u: goto label_251bb0;
        case 0x251bb4u: goto label_251bb4;
        case 0x251bb8u: goto label_251bb8;
        case 0x251bbcu: goto label_251bbc;
        case 0x251bc0u: goto label_251bc0;
        case 0x251bc4u: goto label_251bc4;
        case 0x251bc8u: goto label_251bc8;
        case 0x251bccu: goto label_251bcc;
        case 0x251bd0u: goto label_251bd0;
        case 0x251bd4u: goto label_251bd4;
        case 0x251bd8u: goto label_251bd8;
        case 0x251bdcu: goto label_251bdc;
        case 0x251be0u: goto label_251be0;
        case 0x251be4u: goto label_251be4;
        case 0x251be8u: goto label_251be8;
        case 0x251becu: goto label_251bec;
        case 0x251bf0u: goto label_251bf0;
        case 0x251bf4u: goto label_251bf4;
        case 0x251bf8u: goto label_251bf8;
        case 0x251bfcu: goto label_251bfc;
        case 0x251c00u: goto label_251c00;
        case 0x251c04u: goto label_251c04;
        case 0x251c08u: goto label_251c08;
        case 0x251c0cu: goto label_251c0c;
        case 0x251c10u: goto label_251c10;
        case 0x251c14u: goto label_251c14;
        case 0x251c18u: goto label_251c18;
        case 0x251c1cu: goto label_251c1c;
        case 0x251c20u: goto label_251c20;
        case 0x251c24u: goto label_251c24;
        case 0x251c28u: goto label_251c28;
        case 0x251c2cu: goto label_251c2c;
        case 0x251c30u: goto label_251c30;
        case 0x251c34u: goto label_251c34;
        case 0x251c38u: goto label_251c38;
        case 0x251c3cu: goto label_251c3c;
        case 0x251c40u: goto label_251c40;
        case 0x251c44u: goto label_251c44;
        case 0x251c48u: goto label_251c48;
        case 0x251c4cu: goto label_251c4c;
        case 0x251c50u: goto label_251c50;
        case 0x251c54u: goto label_251c54;
        case 0x251c58u: goto label_251c58;
        case 0x251c5cu: goto label_251c5c;
        case 0x251c60u: goto label_251c60;
        case 0x251c64u: goto label_251c64;
        case 0x251c68u: goto label_251c68;
        case 0x251c6cu: goto label_251c6c;
        case 0x251c70u: goto label_251c70;
        case 0x251c74u: goto label_251c74;
        case 0x251c78u: goto label_251c78;
        case 0x251c7cu: goto label_251c7c;
        case 0x251c80u: goto label_251c80;
        case 0x251c84u: goto label_251c84;
        case 0x251c88u: goto label_251c88;
        case 0x251c8cu: goto label_251c8c;
        case 0x251c90u: goto label_251c90;
        case 0x251c94u: goto label_251c94;
        case 0x251c98u: goto label_251c98;
        case 0x251c9cu: goto label_251c9c;
        case 0x251ca0u: goto label_251ca0;
        case 0x251ca4u: goto label_251ca4;
        case 0x251ca8u: goto label_251ca8;
        case 0x251cacu: goto label_251cac;
        case 0x251cb0u: goto label_251cb0;
        case 0x251cb4u: goto label_251cb4;
        case 0x251cb8u: goto label_251cb8;
        case 0x251cbcu: goto label_251cbc;
        case 0x251cc0u: goto label_251cc0;
        case 0x251cc4u: goto label_251cc4;
        case 0x251cc8u: goto label_251cc8;
        case 0x251cccu: goto label_251ccc;
        case 0x251cd0u: goto label_251cd0;
        case 0x251cd4u: goto label_251cd4;
        case 0x251cd8u: goto label_251cd8;
        case 0x251cdcu: goto label_251cdc;
        case 0x251ce0u: goto label_251ce0;
        case 0x251ce4u: goto label_251ce4;
        case 0x251ce8u: goto label_251ce8;
        case 0x251cecu: goto label_251cec;
        case 0x251cf0u: goto label_251cf0;
        case 0x251cf4u: goto label_251cf4;
        case 0x251cf8u: goto label_251cf8;
        case 0x251cfcu: goto label_251cfc;
        case 0x251d00u: goto label_251d00;
        case 0x251d04u: goto label_251d04;
        case 0x251d08u: goto label_251d08;
        case 0x251d0cu: goto label_251d0c;
        case 0x251d10u: goto label_251d10;
        case 0x251d14u: goto label_251d14;
        case 0x251d18u: goto label_251d18;
        case 0x251d1cu: goto label_251d1c;
        case 0x251d20u: goto label_251d20;
        case 0x251d24u: goto label_251d24;
        case 0x251d28u: goto label_251d28;
        case 0x251d2cu: goto label_251d2c;
        case 0x251d30u: goto label_251d30;
        case 0x251d34u: goto label_251d34;
        case 0x251d38u: goto label_251d38;
        case 0x251d3cu: goto label_251d3c;
        case 0x251d40u: goto label_251d40;
        case 0x251d44u: goto label_251d44;
        case 0x251d48u: goto label_251d48;
        case 0x251d4cu: goto label_251d4c;
        case 0x251d50u: goto label_251d50;
        case 0x251d54u: goto label_251d54;
        case 0x251d58u: goto label_251d58;
        case 0x251d5cu: goto label_251d5c;
        case 0x251d60u: goto label_251d60;
        case 0x251d64u: goto label_251d64;
        case 0x251d68u: goto label_251d68;
        case 0x251d6cu: goto label_251d6c;
        case 0x251d70u: goto label_251d70;
        case 0x251d74u: goto label_251d74;
        case 0x251d78u: goto label_251d78;
        case 0x251d7cu: goto label_251d7c;
        case 0x251d80u: goto label_251d80;
        case 0x251d84u: goto label_251d84;
        case 0x251d88u: goto label_251d88;
        case 0x251d8cu: goto label_251d8c;
        case 0x251d90u: goto label_251d90;
        case 0x251d94u: goto label_251d94;
        case 0x251d98u: goto label_251d98;
        case 0x251d9cu: goto label_251d9c;
        case 0x251da0u: goto label_251da0;
        case 0x251da4u: goto label_251da4;
        case 0x251da8u: goto label_251da8;
        case 0x251dacu: goto label_251dac;
        case 0x251db0u: goto label_251db0;
        case 0x251db4u: goto label_251db4;
        case 0x251db8u: goto label_251db8;
        case 0x251dbcu: goto label_251dbc;
        case 0x251dc0u: goto label_251dc0;
        case 0x251dc4u: goto label_251dc4;
        case 0x251dc8u: goto label_251dc8;
        case 0x251dccu: goto label_251dcc;
        case 0x251dd0u: goto label_251dd0;
        case 0x251dd4u: goto label_251dd4;
        case 0x251dd8u: goto label_251dd8;
        case 0x251ddcu: goto label_251ddc;
        case 0x251de0u: goto label_251de0;
        case 0x251de4u: goto label_251de4;
        case 0x251de8u: goto label_251de8;
        case 0x251decu: goto label_251dec;
        case 0x251df0u: goto label_251df0;
        case 0x251df4u: goto label_251df4;
        case 0x251df8u: goto label_251df8;
        case 0x251dfcu: goto label_251dfc;
        case 0x251e00u: goto label_251e00;
        case 0x251e04u: goto label_251e04;
        case 0x251e08u: goto label_251e08;
        case 0x251e0cu: goto label_251e0c;
        case 0x251e10u: goto label_251e10;
        case 0x251e14u: goto label_251e14;
        case 0x251e18u: goto label_251e18;
        case 0x251e1cu: goto label_251e1c;
        case 0x251e20u: goto label_251e20;
        case 0x251e24u: goto label_251e24;
        case 0x251e28u: goto label_251e28;
        case 0x251e2cu: goto label_251e2c;
        case 0x251e30u: goto label_251e30;
        case 0x251e34u: goto label_251e34;
        case 0x251e38u: goto label_251e38;
        case 0x251e3cu: goto label_251e3c;
        case 0x251e40u: goto label_251e40;
        case 0x251e44u: goto label_251e44;
        case 0x251e48u: goto label_251e48;
        case 0x251e4cu: goto label_251e4c;
        case 0x251e50u: goto label_251e50;
        case 0x251e54u: goto label_251e54;
        case 0x251e58u: goto label_251e58;
        case 0x251e5cu: goto label_251e5c;
        case 0x251e60u: goto label_251e60;
        case 0x251e64u: goto label_251e64;
        case 0x251e68u: goto label_251e68;
        case 0x251e6cu: goto label_251e6c;
        case 0x251e70u: goto label_251e70;
        case 0x251e74u: goto label_251e74;
        case 0x251e78u: goto label_251e78;
        case 0x251e7cu: goto label_251e7c;
        case 0x251e80u: goto label_251e80;
        case 0x251e84u: goto label_251e84;
        case 0x251e88u: goto label_251e88;
        case 0x251e8cu: goto label_251e8c;
        case 0x251e90u: goto label_251e90;
        case 0x251e94u: goto label_251e94;
        case 0x251e98u: goto label_251e98;
        case 0x251e9cu: goto label_251e9c;
        case 0x251ea0u: goto label_251ea0;
        case 0x251ea4u: goto label_251ea4;
        case 0x251ea8u: goto label_251ea8;
        case 0x251eacu: goto label_251eac;
        case 0x251eb0u: goto label_251eb0;
        case 0x251eb4u: goto label_251eb4;
        case 0x251eb8u: goto label_251eb8;
        case 0x251ebcu: goto label_251ebc;
        case 0x251ec0u: goto label_251ec0;
        case 0x251ec4u: goto label_251ec4;
        case 0x251ec8u: goto label_251ec8;
        case 0x251eccu: goto label_251ecc;
        case 0x251ed0u: goto label_251ed0;
        case 0x251ed4u: goto label_251ed4;
        case 0x251ed8u: goto label_251ed8;
        case 0x251edcu: goto label_251edc;
        case 0x251ee0u: goto label_251ee0;
        case 0x251ee4u: goto label_251ee4;
        case 0x251ee8u: goto label_251ee8;
        case 0x251eecu: goto label_251eec;
        case 0x251ef0u: goto label_251ef0;
        case 0x251ef4u: goto label_251ef4;
        case 0x251ef8u: goto label_251ef8;
        case 0x251efcu: goto label_251efc;
        case 0x251f00u: goto label_251f00;
        case 0x251f04u: goto label_251f04;
        case 0x251f08u: goto label_251f08;
        case 0x251f0cu: goto label_251f0c;
        case 0x251f10u: goto label_251f10;
        case 0x251f14u: goto label_251f14;
        case 0x251f18u: goto label_251f18;
        case 0x251f1cu: goto label_251f1c;
        case 0x251f20u: goto label_251f20;
        case 0x251f24u: goto label_251f24;
        case 0x251f28u: goto label_251f28;
        case 0x251f2cu: goto label_251f2c;
        case 0x251f30u: goto label_251f30;
        case 0x251f34u: goto label_251f34;
        case 0x251f38u: goto label_251f38;
        case 0x251f3cu: goto label_251f3c;
        case 0x251f40u: goto label_251f40;
        case 0x251f44u: goto label_251f44;
        case 0x251f48u: goto label_251f48;
        case 0x251f4cu: goto label_251f4c;
        case 0x251f50u: goto label_251f50;
        case 0x251f54u: goto label_251f54;
        case 0x251f58u: goto label_251f58;
        case 0x251f5cu: goto label_251f5c;
        case 0x251f60u: goto label_251f60;
        case 0x251f64u: goto label_251f64;
        case 0x251f68u: goto label_251f68;
        case 0x251f6cu: goto label_251f6c;
        case 0x251f70u: goto label_251f70;
        case 0x251f74u: goto label_251f74;
        case 0x251f78u: goto label_251f78;
        case 0x251f7cu: goto label_251f7c;
        case 0x251f80u: goto label_251f80;
        case 0x251f84u: goto label_251f84;
        case 0x251f88u: goto label_251f88;
        case 0x251f8cu: goto label_251f8c;
        case 0x251f90u: goto label_251f90;
        case 0x251f94u: goto label_251f94;
        case 0x251f98u: goto label_251f98;
        case 0x251f9cu: goto label_251f9c;
        case 0x251fa0u: goto label_251fa0;
        case 0x251fa4u: goto label_251fa4;
        case 0x251fa8u: goto label_251fa8;
        case 0x251facu: goto label_251fac;
        case 0x251fb0u: goto label_251fb0;
        case 0x251fb4u: goto label_251fb4;
        case 0x251fb8u: goto label_251fb8;
        case 0x251fbcu: goto label_251fbc;
        case 0x251fc0u: goto label_251fc0;
        case 0x251fc4u: goto label_251fc4;
        case 0x251fc8u: goto label_251fc8;
        case 0x251fccu: goto label_251fcc;
        case 0x251fd0u: goto label_251fd0;
        case 0x251fd4u: goto label_251fd4;
        case 0x251fd8u: goto label_251fd8;
        case 0x251fdcu: goto label_251fdc;
        case 0x251fe0u: goto label_251fe0;
        case 0x251fe4u: goto label_251fe4;
        case 0x251fe8u: goto label_251fe8;
        case 0x251fecu: goto label_251fec;
        case 0x251ff0u: goto label_251ff0;
        case 0x251ff4u: goto label_251ff4;
        case 0x251ff8u: goto label_251ff8;
        case 0x251ffcu: goto label_251ffc;
        case 0x252000u: goto label_252000;
        case 0x252004u: goto label_252004;
        case 0x252008u: goto label_252008;
        case 0x25200cu: goto label_25200c;
        case 0x252010u: goto label_252010;
        case 0x252014u: goto label_252014;
        case 0x252018u: goto label_252018;
        case 0x25201cu: goto label_25201c;
        case 0x252020u: goto label_252020;
        case 0x252024u: goto label_252024;
        case 0x252028u: goto label_252028;
        case 0x25202cu: goto label_25202c;
        case 0x252030u: goto label_252030;
        case 0x252034u: goto label_252034;
        case 0x252038u: goto label_252038;
        case 0x25203cu: goto label_25203c;
        case 0x252040u: goto label_252040;
        case 0x252044u: goto label_252044;
        case 0x252048u: goto label_252048;
        case 0x25204cu: goto label_25204c;
        case 0x252050u: goto label_252050;
        case 0x252054u: goto label_252054;
        case 0x252058u: goto label_252058;
        case 0x25205cu: goto label_25205c;
        case 0x252060u: goto label_252060;
        case 0x252064u: goto label_252064;
        case 0x252068u: goto label_252068;
        case 0x25206cu: goto label_25206c;
        case 0x252070u: goto label_252070;
        case 0x252074u: goto label_252074;
        case 0x252078u: goto label_252078;
        case 0x25207cu: goto label_25207c;
        case 0x252080u: goto label_252080;
        case 0x252084u: goto label_252084;
        case 0x252088u: goto label_252088;
        case 0x25208cu: goto label_25208c;
        case 0x252090u: goto label_252090;
        case 0x252094u: goto label_252094;
        case 0x252098u: goto label_252098;
        case 0x25209cu: goto label_25209c;
        case 0x2520a0u: goto label_2520a0;
        case 0x2520a4u: goto label_2520a4;
        case 0x2520a8u: goto label_2520a8;
        case 0x2520acu: goto label_2520ac;
        case 0x2520b0u: goto label_2520b0;
        case 0x2520b4u: goto label_2520b4;
        case 0x2520b8u: goto label_2520b8;
        case 0x2520bcu: goto label_2520bc;
        case 0x2520c0u: goto label_2520c0;
        case 0x2520c4u: goto label_2520c4;
        case 0x2520c8u: goto label_2520c8;
        case 0x2520ccu: goto label_2520cc;
        case 0x2520d0u: goto label_2520d0;
        case 0x2520d4u: goto label_2520d4;
        case 0x2520d8u: goto label_2520d8;
        case 0x2520dcu: goto label_2520dc;
        case 0x2520e0u: goto label_2520e0;
        case 0x2520e4u: goto label_2520e4;
        case 0x2520e8u: goto label_2520e8;
        case 0x2520ecu: goto label_2520ec;
        case 0x2520f0u: goto label_2520f0;
        case 0x2520f4u: goto label_2520f4;
        case 0x2520f8u: goto label_2520f8;
        case 0x2520fcu: goto label_2520fc;
        case 0x252100u: goto label_252100;
        case 0x252104u: goto label_252104;
        case 0x252108u: goto label_252108;
        case 0x25210cu: goto label_25210c;
        case 0x252110u: goto label_252110;
        case 0x252114u: goto label_252114;
        case 0x252118u: goto label_252118;
        case 0x25211cu: goto label_25211c;
        case 0x252120u: goto label_252120;
        case 0x252124u: goto label_252124;
        case 0x252128u: goto label_252128;
        case 0x25212cu: goto label_25212c;
        case 0x252130u: goto label_252130;
        case 0x252134u: goto label_252134;
        case 0x252138u: goto label_252138;
        case 0x25213cu: goto label_25213c;
        case 0x252140u: goto label_252140;
        case 0x252144u: goto label_252144;
        case 0x252148u: goto label_252148;
        case 0x25214cu: goto label_25214c;
        case 0x252150u: goto label_252150;
        case 0x252154u: goto label_252154;
        case 0x252158u: goto label_252158;
        case 0x25215cu: goto label_25215c;
        case 0x252160u: goto label_252160;
        case 0x252164u: goto label_252164;
        case 0x252168u: goto label_252168;
        case 0x25216cu: goto label_25216c;
        case 0x252170u: goto label_252170;
        case 0x252174u: goto label_252174;
        case 0x252178u: goto label_252178;
        case 0x25217cu: goto label_25217c;
        case 0x252180u: goto label_252180;
        case 0x252184u: goto label_252184;
        case 0x252188u: goto label_252188;
        case 0x25218cu: goto label_25218c;
        case 0x252190u: goto label_252190;
        case 0x252194u: goto label_252194;
        case 0x252198u: goto label_252198;
        case 0x25219cu: goto label_25219c;
        case 0x2521a0u: goto label_2521a0;
        case 0x2521a4u: goto label_2521a4;
        case 0x2521a8u: goto label_2521a8;
        case 0x2521acu: goto label_2521ac;
        case 0x2521b0u: goto label_2521b0;
        case 0x2521b4u: goto label_2521b4;
        case 0x2521b8u: goto label_2521b8;
        case 0x2521bcu: goto label_2521bc;
        case 0x2521c0u: goto label_2521c0;
        case 0x2521c4u: goto label_2521c4;
        case 0x2521c8u: goto label_2521c8;
        case 0x2521ccu: goto label_2521cc;
        default: return;
    }

label_251a00:
    // 0x251a00: 0x0  nop
    ctx->pc = 0x251a00u;
    // NOP
label_251a04:
    // 0x251a04: 0x0  nop
    ctx->pc = 0x251a04u;
    // NOP
label_251a08:
    // 0x251a08: 0x0  nop
    ctx->pc = 0x251a08u;
    // NOP
label_251a0c:
    // 0x251a0c: 0x0  nop
    ctx->pc = 0x251a0cu;
    // NOP
label_251a10:
    // 0x251a10: 0x0  nop
    ctx->pc = 0x251a10u;
    // NOP
label_251a14:
    // 0x251a14: 0x0  nop
    ctx->pc = 0x251a14u;
    // NOP
label_251a18:
    // 0x251a18: 0x0  nop
    ctx->pc = 0x251a18u;
    // NOP
label_251a1c:
    // 0x251a1c: 0x0  nop
    ctx->pc = 0x251a1cu;
    // NOP
label_251a20:
    // 0x251a20: 0x0  nop
    ctx->pc = 0x251a20u;
    // NOP
label_251a24:
    // 0x251a24: 0x0  nop
    ctx->pc = 0x251a24u;
    // NOP
label_251a28:
    // 0x251a28: 0x5b4  teq         $zero, $zero, 22
    ctx->pc = 0x251a28u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251a2c:
    // 0x251a2c: 0x8  jr          $zero
label_251a30:
    if (ctx->pc == 0x251A30u) {
        ctx->pc = 0x251A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A2Cu;
        // 0x251a30: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A34u;
        goto label_251a34;
    }
    ctx->pc = 0x251A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A2Cu;
        // 0x251a30: 0x152f90  .word       0x00152F90                   # mfhi        $a1 # 00150780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251A34u;
label_251a34:
    // 0x251a34: 0x0  nop
    ctx->pc = 0x251a34u;
    // NOP
label_251a38:
    // 0x251a38: 0x0  nop
    ctx->pc = 0x251a38u;
    // NOP
label_251a3c:
    // 0x251a3c: 0x0  nop
    ctx->pc = 0x251a3cu;
    // NOP
label_251a40:
    // 0x251a40: 0x0  nop
    ctx->pc = 0x251a40u;
    // NOP
label_251a44:
    // 0x251a44: 0x0  nop
    ctx->pc = 0x251a44u;
    // NOP
label_251a48:
    // 0x251a48: 0x0  nop
    ctx->pc = 0x251a48u;
    // NOP
label_251a4c:
    // 0x251a4c: 0x0  nop
    ctx->pc = 0x251a4cu;
    // NOP
label_251a50:
    // 0x251a50: 0x0  nop
    ctx->pc = 0x251a50u;
    // NOP
label_251a54:
    // 0x251a54: 0x0  nop
    ctx->pc = 0x251a54u;
    // NOP
label_251a58:
    // 0x251a58: 0x0  nop
    ctx->pc = 0x251a58u;
    // NOP
label_251a5c:
    // 0x251a5c: 0x0  nop
    ctx->pc = 0x251a5cu;
    // NOP
label_251a60:
    // 0x251a60: 0x0  nop
    ctx->pc = 0x251a60u;
    // NOP
label_251a64:
    // 0x251a64: 0x0  nop
    ctx->pc = 0x251a64u;
    // NOP
label_251a68:
    // 0x251a68: 0x0  nop
    ctx->pc = 0x251a68u;
    // NOP
label_251a6c:
    // 0x251a6c: 0x0  nop
    ctx->pc = 0x251a6cu;
    // NOP
label_251a70:
    // 0x251a70: 0x0  nop
    ctx->pc = 0x251a70u;
    // NOP
label_251a74:
    // 0x251a74: 0x0  nop
    ctx->pc = 0x251a74u;
    // NOP
label_251a78:
    // 0x251a78: 0x0  nop
    ctx->pc = 0x251a78u;
    // NOP
label_251a7c:
    // 0x251a7c: 0x0  nop
    ctx->pc = 0x251a7cu;
    // NOP
label_251a80:
    // 0x251a80: 0x0  nop
    ctx->pc = 0x251a80u;
    // NOP
label_251a84:
    // 0x251a84: 0x0  nop
    ctx->pc = 0x251a84u;
    // NOP
label_251a88:
    // 0x251a88: 0x0  nop
    ctx->pc = 0x251a88u;
    // NOP
label_251a8c:
    // 0x251a8c: 0x0  nop
    ctx->pc = 0x251a8cu;
    // NOP
label_251a90:
    // 0x251a90: 0x0  nop
    ctx->pc = 0x251a90u;
    // NOP
label_251a94:
    // 0x251a94: 0x0  nop
    ctx->pc = 0x251a94u;
    // NOP
label_251a98:
    // 0x251a98: 0x0  nop
    ctx->pc = 0x251a98u;
    // NOP
label_251a9c:
    // 0x251a9c: 0x0  nop
    ctx->pc = 0x251a9cu;
    // NOP
label_251aa0:
    // 0x251aa0: 0x0  nop
    ctx->pc = 0x251aa0u;
    // NOP
label_251aa4:
    // 0x251aa4: 0x0  nop
    ctx->pc = 0x251aa4u;
    // NOP
label_251aa8:
    // 0x251aa8: 0x0  nop
    ctx->pc = 0x251aa8u;
    // NOP
label_251aac:
    // 0x251aac: 0x0  nop
    ctx->pc = 0x251aacu;
    // NOP
label_251ab0:
    // 0x251ab0: 0x0  nop
    ctx->pc = 0x251ab0u;
    // NOP
label_251ab4:
    // 0x251ab4: 0x0  nop
    ctx->pc = 0x251ab4u;
    // NOP
label_251ab8:
    // 0x251ab8: 0x0  nop
    ctx->pc = 0x251ab8u;
    // NOP
label_251abc:
    // 0x251abc: 0x0  nop
    ctx->pc = 0x251abcu;
    // NOP
label_251ac0:
    // 0x251ac0: 0x0  nop
    ctx->pc = 0x251ac0u;
    // NOP
label_251ac4:
    // 0x251ac4: 0x0  nop
    ctx->pc = 0x251ac4u;
    // NOP
label_251ac8:
    // 0x251ac8: 0x0  nop
    ctx->pc = 0x251ac8u;
    // NOP
label_251acc:
    // 0x251acc: 0x0  nop
    ctx->pc = 0x251accu;
    // NOP
label_251ad0:
    // 0x251ad0: 0x0  nop
    ctx->pc = 0x251ad0u;
    // NOP
label_251ad4:
    // 0x251ad4: 0x0  nop
    ctx->pc = 0x251ad4u;
    // NOP
label_251ad8:
    // 0x251ad8: 0x0  nop
    ctx->pc = 0x251ad8u;
    // NOP
label_251adc:
    // 0x251adc: 0x0  nop
    ctx->pc = 0x251adcu;
    // NOP
label_251ae0:
    // 0x251ae0: 0x0  nop
    ctx->pc = 0x251ae0u;
    // NOP
label_251ae4:
    // 0x251ae4: 0x0  nop
    ctx->pc = 0x251ae4u;
    // NOP
label_251ae8:
    // 0x251ae8: 0x0  nop
    ctx->pc = 0x251ae8u;
    // NOP
label_251aec:
    // 0x251aec: 0x0  nop
    ctx->pc = 0x251aecu;
    // NOP
label_251af0:
    // 0x251af0: 0x0  nop
    ctx->pc = 0x251af0u;
    // NOP
label_251af4:
    // 0x251af4: 0x0  nop
    ctx->pc = 0x251af4u;
    // NOP
label_251af8:
    // 0x251af8: 0x0  nop
    ctx->pc = 0x251af8u;
    // NOP
label_251afc:
    // 0x251afc: 0x0  nop
    ctx->pc = 0x251afcu;
    // NOP
label_251b00:
    // 0x251b00: 0x5b5  .word       0x000005B5                   # INVALID     $zero, $zero, 0x5B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x251B00 raw=0x000005B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251b04:
    // 0x251b04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251b04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x251B04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251b08:
    // 0x251b08: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251b0c:
    // 0x251b0c: 0x0  nop
    ctx->pc = 0x251b0cu;
    // NOP
label_251b10:
    // 0x251b10: 0x0  nop
    ctx->pc = 0x251b10u;
    // NOP
label_251b14:
    // 0x251b14: 0x0  nop
    ctx->pc = 0x251b14u;
    // NOP
label_251b18:
    // 0x251b18: 0x0  nop
    ctx->pc = 0x251b18u;
    // NOP
label_251b1c:
    // 0x251b1c: 0x0  nop
    ctx->pc = 0x251b1cu;
    // NOP
label_251b20:
    // 0x251b20: 0x0  nop
    ctx->pc = 0x251b20u;
    // NOP
label_251b24:
    // 0x251b24: 0x0  nop
    ctx->pc = 0x251b24u;
    // NOP
label_251b28:
    // 0x251b28: 0x0  nop
    ctx->pc = 0x251b28u;
    // NOP
label_251b2c:
    // 0x251b2c: 0x0  nop
    ctx->pc = 0x251b2cu;
    // NOP
label_251b30:
    // 0x251b30: 0x0  nop
    ctx->pc = 0x251b30u;
    // NOP
label_251b34:
    // 0x251b34: 0x0  nop
    ctx->pc = 0x251b34u;
    // NOP
label_251b38:
    // 0x251b38: 0x0  nop
    ctx->pc = 0x251b38u;
    // NOP
label_251b3c:
    // 0x251b3c: 0x0  nop
    ctx->pc = 0x251b3cu;
    // NOP
label_251b40:
    // 0x251b40: 0x0  nop
    ctx->pc = 0x251b40u;
    // NOP
label_251b44:
    // 0x251b44: 0x0  nop
    ctx->pc = 0x251b44u;
    // NOP
label_251b48:
    // 0x251b48: 0x0  nop
    ctx->pc = 0x251b48u;
    // NOP
label_251b4c:
    // 0x251b4c: 0x0  nop
    ctx->pc = 0x251b4cu;
    // NOP
label_251b50:
    // 0x251b50: 0x0  nop
    ctx->pc = 0x251b50u;
    // NOP
label_251b54:
    // 0x251b54: 0x0  nop
    ctx->pc = 0x251b54u;
    // NOP
label_251b58:
    // 0x251b58: 0x0  nop
    ctx->pc = 0x251b58u;
    // NOP
label_251b5c:
    // 0x251b5c: 0x0  nop
    ctx->pc = 0x251b5cu;
    // NOP
label_251b60:
    // 0x251b60: 0x0  nop
    ctx->pc = 0x251b60u;
    // NOP
label_251b64:
    // 0x251b64: 0x0  nop
    ctx->pc = 0x251b64u;
    // NOP
label_251b68:
    // 0x251b68: 0x0  nop
    ctx->pc = 0x251b68u;
    // NOP
label_251b6c:
    // 0x251b6c: 0x0  nop
    ctx->pc = 0x251b6cu;
    // NOP
label_251b70:
    // 0x251b70: 0x0  nop
    ctx->pc = 0x251b70u;
    // NOP
label_251b74:
    // 0x251b74: 0x0  nop
    ctx->pc = 0x251b74u;
    // NOP
label_251b78:
    // 0x251b78: 0x0  nop
    ctx->pc = 0x251b78u;
    // NOP
label_251b7c:
    // 0x251b7c: 0x0  nop
    ctx->pc = 0x251b7cu;
    // NOP
label_251b80:
    // 0x251b80: 0x0  nop
    ctx->pc = 0x251b80u;
    // NOP
label_251b84:
    // 0x251b84: 0x0  nop
    ctx->pc = 0x251b84u;
    // NOP
label_251b88:
    // 0x251b88: 0x0  nop
    ctx->pc = 0x251b88u;
    // NOP
label_251b8c:
    // 0x251b8c: 0x0  nop
    ctx->pc = 0x251b8cu;
    // NOP
label_251b90:
    // 0x251b90: 0x0  nop
    ctx->pc = 0x251b90u;
    // NOP
label_251b94:
    // 0x251b94: 0x0  nop
    ctx->pc = 0x251b94u;
    // NOP
label_251b98:
    // 0x251b98: 0x0  nop
    ctx->pc = 0x251b98u;
    // NOP
label_251b9c:
    // 0x251b9c: 0x0  nop
    ctx->pc = 0x251b9cu;
    // NOP
label_251ba0:
    // 0x251ba0: 0x0  nop
    ctx->pc = 0x251ba0u;
    // NOP
label_251ba4:
    // 0x251ba4: 0x0  nop
    ctx->pc = 0x251ba4u;
    // NOP
label_251ba8:
    // 0x251ba8: 0x0  nop
    ctx->pc = 0x251ba8u;
    // NOP
label_251bac:
    // 0x251bac: 0x0  nop
    ctx->pc = 0x251bacu;
    // NOP
label_251bb0:
    // 0x251bb0: 0x0  nop
    ctx->pc = 0x251bb0u;
    // NOP
label_251bb4:
    // 0x251bb4: 0x0  nop
    ctx->pc = 0x251bb4u;
    // NOP
label_251bb8:
    // 0x251bb8: 0x0  nop
    ctx->pc = 0x251bb8u;
    // NOP
label_251bbc:
    // 0x251bbc: 0x0  nop
    ctx->pc = 0x251bbcu;
    // NOP
label_251bc0:
    // 0x251bc0: 0x0  nop
    ctx->pc = 0x251bc0u;
    // NOP
label_251bc4:
    // 0x251bc4: 0x0  nop
    ctx->pc = 0x251bc4u;
    // NOP
label_251bc8:
    // 0x251bc8: 0x0  nop
    ctx->pc = 0x251bc8u;
    // NOP
label_251bcc:
    // 0x251bcc: 0x0  nop
    ctx->pc = 0x251bccu;
    // NOP
label_251bd0:
    // 0x251bd0: 0x0  nop
    ctx->pc = 0x251bd0u;
    // NOP
label_251bd4:
    // 0x251bd4: 0x0  nop
    ctx->pc = 0x251bd4u;
    // NOP
label_251bd8:
    // 0x251bd8: 0x5b6  tne         $zero, $zero, 22
    ctx->pc = 0x251bd8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_251bdc:
    // 0x251bdc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x251bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_251be0:
    // 0x251be0: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251be4:
    // 0x251be4: 0x0  nop
    ctx->pc = 0x251be4u;
    // NOP
label_251be8:
    // 0x251be8: 0x0  nop
    ctx->pc = 0x251be8u;
    // NOP
label_251bec:
    // 0x251bec: 0x0  nop
    ctx->pc = 0x251becu;
    // NOP
label_251bf0:
    // 0x251bf0: 0x0  nop
    ctx->pc = 0x251bf0u;
    // NOP
label_251bf4:
    // 0x251bf4: 0x0  nop
    ctx->pc = 0x251bf4u;
    // NOP
label_251bf8:
    // 0x251bf8: 0x0  nop
    ctx->pc = 0x251bf8u;
    // NOP
label_251bfc:
    // 0x251bfc: 0x0  nop
    ctx->pc = 0x251bfcu;
    // NOP
label_251c00:
    // 0x251c00: 0x0  nop
    ctx->pc = 0x251c00u;
    // NOP
label_251c04:
    // 0x251c04: 0x0  nop
    ctx->pc = 0x251c04u;
    // NOP
label_251c08:
    // 0x251c08: 0x0  nop
    ctx->pc = 0x251c08u;
    // NOP
label_251c0c:
    // 0x251c0c: 0x0  nop
    ctx->pc = 0x251c0cu;
    // NOP
label_251c10:
    // 0x251c10: 0x0  nop
    ctx->pc = 0x251c10u;
    // NOP
label_251c14:
    // 0x251c14: 0x0  nop
    ctx->pc = 0x251c14u;
    // NOP
label_251c18:
    // 0x251c18: 0x0  nop
    ctx->pc = 0x251c18u;
    // NOP
label_251c1c:
    // 0x251c1c: 0x0  nop
    ctx->pc = 0x251c1cu;
    // NOP
label_251c20:
    // 0x251c20: 0x0  nop
    ctx->pc = 0x251c20u;
    // NOP
label_251c24:
    // 0x251c24: 0x0  nop
    ctx->pc = 0x251c24u;
    // NOP
label_251c28:
    // 0x251c28: 0x0  nop
    ctx->pc = 0x251c28u;
    // NOP
label_251c2c:
    // 0x251c2c: 0x0  nop
    ctx->pc = 0x251c2cu;
    // NOP
label_251c30:
    // 0x251c30: 0x0  nop
    ctx->pc = 0x251c30u;
    // NOP
label_251c34:
    // 0x251c34: 0x0  nop
    ctx->pc = 0x251c34u;
    // NOP
label_251c38:
    // 0x251c38: 0x0  nop
    ctx->pc = 0x251c38u;
    // NOP
label_251c3c:
    // 0x251c3c: 0x0  nop
    ctx->pc = 0x251c3cu;
    // NOP
label_251c40:
    // 0x251c40: 0x0  nop
    ctx->pc = 0x251c40u;
    // NOP
label_251c44:
    // 0x251c44: 0x0  nop
    ctx->pc = 0x251c44u;
    // NOP
label_251c48:
    // 0x251c48: 0x0  nop
    ctx->pc = 0x251c48u;
    // NOP
label_251c4c:
    // 0x251c4c: 0x0  nop
    ctx->pc = 0x251c4cu;
    // NOP
label_251c50:
    // 0x251c50: 0x0  nop
    ctx->pc = 0x251c50u;
    // NOP
label_251c54:
    // 0x251c54: 0x0  nop
    ctx->pc = 0x251c54u;
    // NOP
label_251c58:
    // 0x251c58: 0x0  nop
    ctx->pc = 0x251c58u;
    // NOP
label_251c5c:
    // 0x251c5c: 0x0  nop
    ctx->pc = 0x251c5cu;
    // NOP
label_251c60:
    // 0x251c60: 0x0  nop
    ctx->pc = 0x251c60u;
    // NOP
label_251c64:
    // 0x251c64: 0x0  nop
    ctx->pc = 0x251c64u;
    // NOP
label_251c68:
    // 0x251c68: 0x0  nop
    ctx->pc = 0x251c68u;
    // NOP
label_251c6c:
    // 0x251c6c: 0x0  nop
    ctx->pc = 0x251c6cu;
    // NOP
label_251c70:
    // 0x251c70: 0x0  nop
    ctx->pc = 0x251c70u;
    // NOP
label_251c74:
    // 0x251c74: 0x0  nop
    ctx->pc = 0x251c74u;
    // NOP
label_251c78:
    // 0x251c78: 0x0  nop
    ctx->pc = 0x251c78u;
    // NOP
label_251c7c:
    // 0x251c7c: 0x0  nop
    ctx->pc = 0x251c7cu;
    // NOP
label_251c80:
    // 0x251c80: 0x0  nop
    ctx->pc = 0x251c80u;
    // NOP
label_251c84:
    // 0x251c84: 0x0  nop
    ctx->pc = 0x251c84u;
    // NOP
label_251c88:
    // 0x251c88: 0x0  nop
    ctx->pc = 0x251c88u;
    // NOP
label_251c8c:
    // 0x251c8c: 0x0  nop
    ctx->pc = 0x251c8cu;
    // NOP
label_251c90:
    // 0x251c90: 0x0  nop
    ctx->pc = 0x251c90u;
    // NOP
label_251c94:
    // 0x251c94: 0x0  nop
    ctx->pc = 0x251c94u;
    // NOP
label_251c98:
    // 0x251c98: 0x0  nop
    ctx->pc = 0x251c98u;
    // NOP
label_251c9c:
    // 0x251c9c: 0x0  nop
    ctx->pc = 0x251c9cu;
    // NOP
label_251ca0:
    // 0x251ca0: 0x0  nop
    ctx->pc = 0x251ca0u;
    // NOP
label_251ca4:
    // 0x251ca4: 0x0  nop
    ctx->pc = 0x251ca4u;
    // NOP
label_251ca8:
    // 0x251ca8: 0x0  nop
    ctx->pc = 0x251ca8u;
    // NOP
label_251cac:
    // 0x251cac: 0x0  nop
    ctx->pc = 0x251cacu;
    // NOP
label_251cb0:
    // 0x251cb0: 0x5b7  .word       0x000005B7                   # INVALID     $zero, $zero, 0x5B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x251CB0 raw=0x000005B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251cb4:
    // 0x251cb4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x251cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_251cb8:
    // 0x251cb8: 0x152f30  tge         $zero, $s5, 188
    ctx->pc = 0x251cb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_251cbc:
    // 0x251cbc: 0x0  nop
    ctx->pc = 0x251cbcu;
    // NOP
label_251cc0:
    // 0x251cc0: 0x0  nop
    ctx->pc = 0x251cc0u;
    // NOP
label_251cc4:
    // 0x251cc4: 0x0  nop
    ctx->pc = 0x251cc4u;
    // NOP
label_251cc8:
    // 0x251cc8: 0x0  nop
    ctx->pc = 0x251cc8u;
    // NOP
label_251ccc:
    // 0x251ccc: 0x0  nop
    ctx->pc = 0x251cccu;
    // NOP
label_251cd0:
    // 0x251cd0: 0x0  nop
    ctx->pc = 0x251cd0u;
    // NOP
label_251cd4:
    // 0x251cd4: 0x0  nop
    ctx->pc = 0x251cd4u;
    // NOP
label_251cd8:
    // 0x251cd8: 0x0  nop
    ctx->pc = 0x251cd8u;
    // NOP
label_251cdc:
    // 0x251cdc: 0x0  nop
    ctx->pc = 0x251cdcu;
    // NOP
label_251ce0:
    // 0x251ce0: 0x0  nop
    ctx->pc = 0x251ce0u;
    // NOP
label_251ce4:
    // 0x251ce4: 0x0  nop
    ctx->pc = 0x251ce4u;
    // NOP
label_251ce8:
    // 0x251ce8: 0x0  nop
    ctx->pc = 0x251ce8u;
    // NOP
label_251cec:
    // 0x251cec: 0x0  nop
    ctx->pc = 0x251cecu;
    // NOP
label_251cf0:
    // 0x251cf0: 0x0  nop
    ctx->pc = 0x251cf0u;
    // NOP
label_251cf4:
    // 0x251cf4: 0x0  nop
    ctx->pc = 0x251cf4u;
    // NOP
label_251cf8:
    // 0x251cf8: 0x0  nop
    ctx->pc = 0x251cf8u;
    // NOP
label_251cfc:
    // 0x251cfc: 0x0  nop
    ctx->pc = 0x251cfcu;
    // NOP
label_251d00:
    // 0x251d00: 0x0  nop
    ctx->pc = 0x251d00u;
    // NOP
label_251d04:
    // 0x251d04: 0x0  nop
    ctx->pc = 0x251d04u;
    // NOP
label_251d08:
    // 0x251d08: 0x0  nop
    ctx->pc = 0x251d08u;
    // NOP
label_251d0c:
    // 0x251d0c: 0x0  nop
    ctx->pc = 0x251d0cu;
    // NOP
label_251d10:
    // 0x251d10: 0x0  nop
    ctx->pc = 0x251d10u;
    // NOP
label_251d14:
    // 0x251d14: 0x0  nop
    ctx->pc = 0x251d14u;
    // NOP
label_251d18:
    // 0x251d18: 0x0  nop
    ctx->pc = 0x251d18u;
    // NOP
label_251d1c:
    // 0x251d1c: 0x0  nop
    ctx->pc = 0x251d1cu;
    // NOP
label_251d20:
    // 0x251d20: 0x0  nop
    ctx->pc = 0x251d20u;
    // NOP
label_251d24:
    // 0x251d24: 0x0  nop
    ctx->pc = 0x251d24u;
    // NOP
label_251d28:
    // 0x251d28: 0x0  nop
    ctx->pc = 0x251d28u;
    // NOP
label_251d2c:
    // 0x251d2c: 0x0  nop
    ctx->pc = 0x251d2cu;
    // NOP
label_251d30:
    // 0x251d30: 0x0  nop
    ctx->pc = 0x251d30u;
    // NOP
label_251d34:
    // 0x251d34: 0x0  nop
    ctx->pc = 0x251d34u;
    // NOP
label_251d38:
    // 0x251d38: 0x0  nop
    ctx->pc = 0x251d38u;
    // NOP
label_251d3c:
    // 0x251d3c: 0x0  nop
    ctx->pc = 0x251d3cu;
    // NOP
label_251d40:
    // 0x251d40: 0x0  nop
    ctx->pc = 0x251d40u;
    // NOP
label_251d44:
    // 0x251d44: 0x0  nop
    ctx->pc = 0x251d44u;
    // NOP
label_251d48:
    // 0x251d48: 0x0  nop
    ctx->pc = 0x251d48u;
    // NOP
label_251d4c:
    // 0x251d4c: 0x0  nop
    ctx->pc = 0x251d4cu;
    // NOP
label_251d50:
    // 0x251d50: 0x0  nop
    ctx->pc = 0x251d50u;
    // NOP
label_251d54:
    // 0x251d54: 0x0  nop
    ctx->pc = 0x251d54u;
    // NOP
label_251d58:
    // 0x251d58: 0x0  nop
    ctx->pc = 0x251d58u;
    // NOP
label_251d5c:
    // 0x251d5c: 0x0  nop
    ctx->pc = 0x251d5cu;
    // NOP
label_251d60:
    // 0x251d60: 0x0  nop
    ctx->pc = 0x251d60u;
    // NOP
label_251d64:
    // 0x251d64: 0x0  nop
    ctx->pc = 0x251d64u;
    // NOP
label_251d68:
    // 0x251d68: 0x0  nop
    ctx->pc = 0x251d68u;
    // NOP
label_251d6c:
    // 0x251d6c: 0x0  nop
    ctx->pc = 0x251d6cu;
    // NOP
label_251d70:
    // 0x251d70: 0x0  nop
    ctx->pc = 0x251d70u;
    // NOP
label_251d74:
    // 0x251d74: 0x0  nop
    ctx->pc = 0x251d74u;
    // NOP
label_251d78:
    // 0x251d78: 0x0  nop
    ctx->pc = 0x251d78u;
    // NOP
label_251d7c:
    // 0x251d7c: 0x0  nop
    ctx->pc = 0x251d7cu;
    // NOP
label_251d80:
    // 0x251d80: 0x0  nop
    ctx->pc = 0x251d80u;
    // NOP
label_251d84:
    // 0x251d84: 0x0  nop
    ctx->pc = 0x251d84u;
    // NOP
label_251d88:
    // 0x251d88: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x251d88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_251d8c:
    // 0x251d8c: 0x8  jr          $zero
label_251d90:
    if (ctx->pc == 0x251D90u) {
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x152f30  tge         $zero, $s5, 188 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x251D94u;
        goto label_251d94;
    }
    ctx->pc = 0x251D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x251D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D8Cu;
        // 0x251d90: 0x152f30  tge         $zero, $s5, 188 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x251D94u;
label_251d94:
    // 0x251d94: 0x0  nop
    ctx->pc = 0x251d94u;
    // NOP
label_251d98:
    // 0x251d98: 0x0  nop
    ctx->pc = 0x251d98u;
    // NOP
label_251d9c:
    // 0x251d9c: 0x0  nop
    ctx->pc = 0x251d9cu;
    // NOP
label_251da0:
    // 0x251da0: 0x0  nop
    ctx->pc = 0x251da0u;
    // NOP
label_251da4:
    // 0x251da4: 0x0  nop
    ctx->pc = 0x251da4u;
    // NOP
label_251da8:
    // 0x251da8: 0x0  nop
    ctx->pc = 0x251da8u;
    // NOP
label_251dac:
    // 0x251dac: 0x0  nop
    ctx->pc = 0x251dacu;
    // NOP
label_251db0:
    // 0x251db0: 0x0  nop
    ctx->pc = 0x251db0u;
    // NOP
label_251db4:
    // 0x251db4: 0x0  nop
    ctx->pc = 0x251db4u;
    // NOP
label_251db8:
    // 0x251db8: 0x0  nop
    ctx->pc = 0x251db8u;
    // NOP
label_251dbc:
    // 0x251dbc: 0x0  nop
    ctx->pc = 0x251dbcu;
    // NOP
label_251dc0:
    // 0x251dc0: 0x0  nop
    ctx->pc = 0x251dc0u;
    // NOP
label_251dc4:
    // 0x251dc4: 0x0  nop
    ctx->pc = 0x251dc4u;
    // NOP
label_251dc8:
    // 0x251dc8: 0x0  nop
    ctx->pc = 0x251dc8u;
    // NOP
label_251dcc:
    // 0x251dcc: 0x0  nop
    ctx->pc = 0x251dccu;
    // NOP
label_251dd0:
    // 0x251dd0: 0x0  nop
    ctx->pc = 0x251dd0u;
    // NOP
label_251dd4:
    // 0x251dd4: 0x0  nop
    ctx->pc = 0x251dd4u;
    // NOP
label_251dd8:
    // 0x251dd8: 0x0  nop
    ctx->pc = 0x251dd8u;
    // NOP
label_251ddc:
    // 0x251ddc: 0x0  nop
    ctx->pc = 0x251ddcu;
    // NOP
label_251de0:
    // 0x251de0: 0x0  nop
    ctx->pc = 0x251de0u;
    // NOP
label_251de4:
    // 0x251de4: 0x0  nop
    ctx->pc = 0x251de4u;
    // NOP
label_251de8:
    // 0x251de8: 0x0  nop
    ctx->pc = 0x251de8u;
    // NOP
label_251dec:
    // 0x251dec: 0x0  nop
    ctx->pc = 0x251decu;
    // NOP
label_251df0:
    // 0x251df0: 0x0  nop
    ctx->pc = 0x251df0u;
    // NOP
label_251df4:
    // 0x251df4: 0x0  nop
    ctx->pc = 0x251df4u;
    // NOP
label_251df8:
    // 0x251df8: 0x0  nop
    ctx->pc = 0x251df8u;
    // NOP
label_251dfc:
    // 0x251dfc: 0x0  nop
    ctx->pc = 0x251dfcu;
    // NOP
label_251e00:
    // 0x251e00: 0x0  nop
    ctx->pc = 0x251e00u;
    // NOP
label_251e04:
    // 0x251e04: 0x0  nop
    ctx->pc = 0x251e04u;
    // NOP
label_251e08:
    // 0x251e08: 0x0  nop
    ctx->pc = 0x251e08u;
    // NOP
label_251e0c:
    // 0x251e0c: 0x0  nop
    ctx->pc = 0x251e0cu;
    // NOP
label_251e10:
    // 0x251e10: 0x0  nop
    ctx->pc = 0x251e10u;
    // NOP
label_251e14:
    // 0x251e14: 0x0  nop
    ctx->pc = 0x251e14u;
    // NOP
label_251e18:
    // 0x251e18: 0x0  nop
    ctx->pc = 0x251e18u;
    // NOP
label_251e1c:
    // 0x251e1c: 0x0  nop
    ctx->pc = 0x251e1cu;
    // NOP
label_251e20:
    // 0x251e20: 0x0  nop
    ctx->pc = 0x251e20u;
    // NOP
label_251e24:
    // 0x251e24: 0x0  nop
    ctx->pc = 0x251e24u;
    // NOP
label_251e28:
    // 0x251e28: 0x0  nop
    ctx->pc = 0x251e28u;
    // NOP
label_251e2c:
    // 0x251e2c: 0x0  nop
    ctx->pc = 0x251e2cu;
    // NOP
label_251e30:
    // 0x251e30: 0x0  nop
    ctx->pc = 0x251e30u;
    // NOP
label_251e34:
    // 0x251e34: 0x0  nop
    ctx->pc = 0x251e34u;
    // NOP
label_251e38:
    // 0x251e38: 0x0  nop
    ctx->pc = 0x251e38u;
    // NOP
label_251e3c:
    // 0x251e3c: 0x0  nop
    ctx->pc = 0x251e3cu;
    // NOP
label_251e40:
    // 0x251e40: 0x0  nop
    ctx->pc = 0x251e40u;
    // NOP
label_251e44:
    // 0x251e44: 0x0  nop
    ctx->pc = 0x251e44u;
    // NOP
label_251e48:
    // 0x251e48: 0x0  nop
    ctx->pc = 0x251e48u;
    // NOP
label_251e4c:
    // 0x251e4c: 0x0  nop
    ctx->pc = 0x251e4cu;
    // NOP
label_251e50:
    // 0x251e50: 0x0  nop
    ctx->pc = 0x251e50u;
    // NOP
label_251e54:
    // 0x251e54: 0x0  nop
    ctx->pc = 0x251e54u;
    // NOP
label_251e58:
    // 0x251e58: 0x0  nop
    ctx->pc = 0x251e58u;
    // NOP
label_251e5c:
    // 0x251e5c: 0x0  nop
    ctx->pc = 0x251e5cu;
    // NOP
label_251e60:
    // 0x251e60: 0x5b9  .word       0x000005B9                   # INVALID     $zero, $zero, 0x5B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x251E60 raw=0x000005B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_251e64:
    // 0x251e64: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x251e64u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_251e68:
    // 0x251e68: 0x152ed0  .word       0x00152ED0                   # mfhi        $a1 # 001506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251e68u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_251e6c:
    // 0x251e6c: 0x0  nop
    ctx->pc = 0x251e6cu;
    // NOP
label_251e70:
    // 0x251e70: 0x0  nop
    ctx->pc = 0x251e70u;
    // NOP
label_251e74:
    // 0x251e74: 0x0  nop
    ctx->pc = 0x251e74u;
    // NOP
label_251e78:
    // 0x251e78: 0x0  nop
    ctx->pc = 0x251e78u;
    // NOP
label_251e7c:
    // 0x251e7c: 0x0  nop
    ctx->pc = 0x251e7cu;
    // NOP
label_251e80:
    // 0x251e80: 0x0  nop
    ctx->pc = 0x251e80u;
    // NOP
label_251e84:
    // 0x251e84: 0x0  nop
    ctx->pc = 0x251e84u;
    // NOP
label_251e88:
    // 0x251e88: 0x0  nop
    ctx->pc = 0x251e88u;
    // NOP
label_251e8c:
    // 0x251e8c: 0x0  nop
    ctx->pc = 0x251e8cu;
    // NOP
label_251e90:
    // 0x251e90: 0x0  nop
    ctx->pc = 0x251e90u;
    // NOP
label_251e94:
    // 0x251e94: 0x0  nop
    ctx->pc = 0x251e94u;
    // NOP
label_251e98:
    // 0x251e98: 0x0  nop
    ctx->pc = 0x251e98u;
    // NOP
label_251e9c:
    // 0x251e9c: 0x0  nop
    ctx->pc = 0x251e9cu;
    // NOP
label_251ea0:
    // 0x251ea0: 0x0  nop
    ctx->pc = 0x251ea0u;
    // NOP
label_251ea4:
    // 0x251ea4: 0x0  nop
    ctx->pc = 0x251ea4u;
    // NOP
label_251ea8:
    // 0x251ea8: 0x0  nop
    ctx->pc = 0x251ea8u;
    // NOP
label_251eac:
    // 0x251eac: 0x0  nop
    ctx->pc = 0x251eacu;
    // NOP
label_251eb0:
    // 0x251eb0: 0x0  nop
    ctx->pc = 0x251eb0u;
    // NOP
label_251eb4:
    // 0x251eb4: 0x0  nop
    ctx->pc = 0x251eb4u;
    // NOP
label_251eb8:
    // 0x251eb8: 0x0  nop
    ctx->pc = 0x251eb8u;
    // NOP
label_251ebc:
    // 0x251ebc: 0x0  nop
    ctx->pc = 0x251ebcu;
    // NOP
label_251ec0:
    // 0x251ec0: 0x0  nop
    ctx->pc = 0x251ec0u;
    // NOP
label_251ec4:
    // 0x251ec4: 0x0  nop
    ctx->pc = 0x251ec4u;
    // NOP
label_251ec8:
    // 0x251ec8: 0x0  nop
    ctx->pc = 0x251ec8u;
    // NOP
label_251ecc:
    // 0x251ecc: 0x0  nop
    ctx->pc = 0x251eccu;
    // NOP
label_251ed0:
    // 0x251ed0: 0x0  nop
    ctx->pc = 0x251ed0u;
    // NOP
label_251ed4:
    // 0x251ed4: 0x0  nop
    ctx->pc = 0x251ed4u;
    // NOP
label_251ed8:
    // 0x251ed8: 0x0  nop
    ctx->pc = 0x251ed8u;
    // NOP
label_251edc:
    // 0x251edc: 0x0  nop
    ctx->pc = 0x251edcu;
    // NOP
label_251ee0:
    // 0x251ee0: 0x0  nop
    ctx->pc = 0x251ee0u;
    // NOP
label_251ee4:
    // 0x251ee4: 0x0  nop
    ctx->pc = 0x251ee4u;
    // NOP
label_251ee8:
    // 0x251ee8: 0x0  nop
    ctx->pc = 0x251ee8u;
    // NOP
label_251eec:
    // 0x251eec: 0x0  nop
    ctx->pc = 0x251eecu;
    // NOP
label_251ef0:
    // 0x251ef0: 0x0  nop
    ctx->pc = 0x251ef0u;
    // NOP
label_251ef4:
    // 0x251ef4: 0x0  nop
    ctx->pc = 0x251ef4u;
    // NOP
label_251ef8:
    // 0x251ef8: 0x0  nop
    ctx->pc = 0x251ef8u;
    // NOP
label_251efc:
    // 0x251efc: 0x0  nop
    ctx->pc = 0x251efcu;
    // NOP
label_251f00:
    // 0x251f00: 0x0  nop
    ctx->pc = 0x251f00u;
    // NOP
label_251f04:
    // 0x251f04: 0x0  nop
    ctx->pc = 0x251f04u;
    // NOP
label_251f08:
    // 0x251f08: 0x0  nop
    ctx->pc = 0x251f08u;
    // NOP
label_251f0c:
    // 0x251f0c: 0x0  nop
    ctx->pc = 0x251f0cu;
    // NOP
label_251f10:
    // 0x251f10: 0x0  nop
    ctx->pc = 0x251f10u;
    // NOP
label_251f14:
    // 0x251f14: 0x0  nop
    ctx->pc = 0x251f14u;
    // NOP
label_251f18:
    // 0x251f18: 0x0  nop
    ctx->pc = 0x251f18u;
    // NOP
label_251f1c:
    // 0x251f1c: 0x0  nop
    ctx->pc = 0x251f1cu;
    // NOP
label_251f20:
    // 0x251f20: 0x0  nop
    ctx->pc = 0x251f20u;
    // NOP
label_251f24:
    // 0x251f24: 0x0  nop
    ctx->pc = 0x251f24u;
    // NOP
label_251f28:
    // 0x251f28: 0x0  nop
    ctx->pc = 0x251f28u;
    // NOP
label_251f2c:
    // 0x251f2c: 0x0  nop
    ctx->pc = 0x251f2cu;
    // NOP
label_251f30:
    // 0x251f30: 0x0  nop
    ctx->pc = 0x251f30u;
    // NOP
label_251f34:
    // 0x251f34: 0x0  nop
    ctx->pc = 0x251f34u;
    // NOP
label_251f38:
    // 0x251f38: 0x5ba  dsrl        $zero, $zero, 22
    ctx->pc = 0x251f38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 22);
label_251f3c:
    // 0x251f3c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251f3cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_251f40:
    // 0x251f40: 0x152dd0  .word       0x00152DD0                   # mfhi        $a1 # 001505C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x251f40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_251f44:
    // 0x251f44: 0x0  nop
    ctx->pc = 0x251f44u;
    // NOP
label_251f48:
    // 0x251f48: 0x0  nop
    ctx->pc = 0x251f48u;
    // NOP
label_251f4c:
    // 0x251f4c: 0x0  nop
    ctx->pc = 0x251f4cu;
    // NOP
label_251f50:
    // 0x251f50: 0x0  nop
    ctx->pc = 0x251f50u;
    // NOP
label_251f54:
    // 0x251f54: 0x0  nop
    ctx->pc = 0x251f54u;
    // NOP
label_251f58:
    // 0x251f58: 0x0  nop
    ctx->pc = 0x251f58u;
    // NOP
label_251f5c:
    // 0x251f5c: 0x0  nop
    ctx->pc = 0x251f5cu;
    // NOP
label_251f60:
    // 0x251f60: 0x0  nop
    ctx->pc = 0x251f60u;
    // NOP
label_251f64:
    // 0x251f64: 0x0  nop
    ctx->pc = 0x251f64u;
    // NOP
label_251f68:
    // 0x251f68: 0x0  nop
    ctx->pc = 0x251f68u;
    // NOP
label_251f6c:
    // 0x251f6c: 0x0  nop
    ctx->pc = 0x251f6cu;
    // NOP
label_251f70:
    // 0x251f70: 0x0  nop
    ctx->pc = 0x251f70u;
    // NOP
label_251f74:
    // 0x251f74: 0x0  nop
    ctx->pc = 0x251f74u;
    // NOP
label_251f78:
    // 0x251f78: 0x0  nop
    ctx->pc = 0x251f78u;
    // NOP
label_251f7c:
    // 0x251f7c: 0x0  nop
    ctx->pc = 0x251f7cu;
    // NOP
label_251f80:
    // 0x251f80: 0x0  nop
    ctx->pc = 0x251f80u;
    // NOP
label_251f84:
    // 0x251f84: 0x0  nop
    ctx->pc = 0x251f84u;
    // NOP
label_251f88:
    // 0x251f88: 0x0  nop
    ctx->pc = 0x251f88u;
    // NOP
label_251f8c:
    // 0x251f8c: 0x0  nop
    ctx->pc = 0x251f8cu;
    // NOP
label_251f90:
    // 0x251f90: 0x0  nop
    ctx->pc = 0x251f90u;
    // NOP
label_251f94:
    // 0x251f94: 0x0  nop
    ctx->pc = 0x251f94u;
    // NOP
label_251f98:
    // 0x251f98: 0x0  nop
    ctx->pc = 0x251f98u;
    // NOP
label_251f9c:
    // 0x251f9c: 0x0  nop
    ctx->pc = 0x251f9cu;
    // NOP
label_251fa0:
    // 0x251fa0: 0x0  nop
    ctx->pc = 0x251fa0u;
    // NOP
label_251fa4:
    // 0x251fa4: 0x0  nop
    ctx->pc = 0x251fa4u;
    // NOP
label_251fa8:
    // 0x251fa8: 0x0  nop
    ctx->pc = 0x251fa8u;
    // NOP
label_251fac:
    // 0x251fac: 0x0  nop
    ctx->pc = 0x251facu;
    // NOP
label_251fb0:
    // 0x251fb0: 0x0  nop
    ctx->pc = 0x251fb0u;
    // NOP
label_251fb4:
    // 0x251fb4: 0x0  nop
    ctx->pc = 0x251fb4u;
    // NOP
label_251fb8:
    // 0x251fb8: 0x0  nop
    ctx->pc = 0x251fb8u;
    // NOP
label_251fbc:
    // 0x251fbc: 0x0  nop
    ctx->pc = 0x251fbcu;
    // NOP
label_251fc0:
    // 0x251fc0: 0x0  nop
    ctx->pc = 0x251fc0u;
    // NOP
label_251fc4:
    // 0x251fc4: 0x0  nop
    ctx->pc = 0x251fc4u;
    // NOP
label_251fc8:
    // 0x251fc8: 0x0  nop
    ctx->pc = 0x251fc8u;
    // NOP
label_251fcc:
    // 0x251fcc: 0x0  nop
    ctx->pc = 0x251fccu;
    // NOP
label_251fd0:
    // 0x251fd0: 0x0  nop
    ctx->pc = 0x251fd0u;
    // NOP
label_251fd4:
    // 0x251fd4: 0x0  nop
    ctx->pc = 0x251fd4u;
    // NOP
label_251fd8:
    // 0x251fd8: 0x0  nop
    ctx->pc = 0x251fd8u;
    // NOP
label_251fdc:
    // 0x251fdc: 0x0  nop
    ctx->pc = 0x251fdcu;
    // NOP
label_251fe0:
    // 0x251fe0: 0x0  nop
    ctx->pc = 0x251fe0u;
    // NOP
label_251fe4:
    // 0x251fe4: 0x0  nop
    ctx->pc = 0x251fe4u;
    // NOP
label_251fe8:
    // 0x251fe8: 0x0  nop
    ctx->pc = 0x251fe8u;
    // NOP
label_251fec:
    // 0x251fec: 0x0  nop
    ctx->pc = 0x251fecu;
    // NOP
label_251ff0:
    // 0x251ff0: 0x0  nop
    ctx->pc = 0x251ff0u;
    // NOP
label_251ff4:
    // 0x251ff4: 0x0  nop
    ctx->pc = 0x251ff4u;
    // NOP
label_251ff8:
    // 0x251ff8: 0x0  nop
    ctx->pc = 0x251ff8u;
    // NOP
label_251ffc:
    // 0x251ffc: 0x0  nop
    ctx->pc = 0x251ffcu;
    // NOP
label_252000:
    // 0x252000: 0x0  nop
    ctx->pc = 0x252000u;
    // NOP
label_252004:
    // 0x252004: 0x0  nop
    ctx->pc = 0x252004u;
    // NOP
label_252008:
    // 0x252008: 0x0  nop
    ctx->pc = 0x252008u;
    // NOP
label_25200c:
    // 0x25200c: 0x0  nop
    ctx->pc = 0x25200cu;
    // NOP
label_252010:
    // 0x252010: 0x5bb  dsra        $zero, $zero, 22
    ctx->pc = 0x252010u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 22);
label_252014:
    // 0x252014: 0x0  nop
    ctx->pc = 0x252014u;
    // NOP
label_252018:
    // 0x252018: 0x152d70  tge         $zero, $s5, 181
    ctx->pc = 0x252018u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25201c:
    // 0x25201c: 0x0  nop
    ctx->pc = 0x25201cu;
    // NOP
label_252020:
    // 0x252020: 0x0  nop
    ctx->pc = 0x252020u;
    // NOP
label_252024:
    // 0x252024: 0x0  nop
    ctx->pc = 0x252024u;
    // NOP
label_252028:
    // 0x252028: 0x0  nop
    ctx->pc = 0x252028u;
    // NOP
label_25202c:
    // 0x25202c: 0x0  nop
    ctx->pc = 0x25202cu;
    // NOP
label_252030:
    // 0x252030: 0x0  nop
    ctx->pc = 0x252030u;
    // NOP
label_252034:
    // 0x252034: 0x0  nop
    ctx->pc = 0x252034u;
    // NOP
label_252038:
    // 0x252038: 0x0  nop
    ctx->pc = 0x252038u;
    // NOP
label_25203c:
    // 0x25203c: 0x0  nop
    ctx->pc = 0x25203cu;
    // NOP
label_252040:
    // 0x252040: 0x0  nop
    ctx->pc = 0x252040u;
    // NOP
label_252044:
    // 0x252044: 0x0  nop
    ctx->pc = 0x252044u;
    // NOP
label_252048:
    // 0x252048: 0x0  nop
    ctx->pc = 0x252048u;
    // NOP
label_25204c:
    // 0x25204c: 0x0  nop
    ctx->pc = 0x25204cu;
    // NOP
label_252050:
    // 0x252050: 0x0  nop
    ctx->pc = 0x252050u;
    // NOP
label_252054:
    // 0x252054: 0x0  nop
    ctx->pc = 0x252054u;
    // NOP
label_252058:
    // 0x252058: 0x0  nop
    ctx->pc = 0x252058u;
    // NOP
label_25205c:
    // 0x25205c: 0x0  nop
    ctx->pc = 0x25205cu;
    // NOP
label_252060:
    // 0x252060: 0x0  nop
    ctx->pc = 0x252060u;
    // NOP
label_252064:
    // 0x252064: 0x0  nop
    ctx->pc = 0x252064u;
    // NOP
label_252068:
    // 0x252068: 0x0  nop
    ctx->pc = 0x252068u;
    // NOP
label_25206c:
    // 0x25206c: 0x0  nop
    ctx->pc = 0x25206cu;
    // NOP
label_252070:
    // 0x252070: 0x0  nop
    ctx->pc = 0x252070u;
    // NOP
label_252074:
    // 0x252074: 0x0  nop
    ctx->pc = 0x252074u;
    // NOP
label_252078:
    // 0x252078: 0x0  nop
    ctx->pc = 0x252078u;
    // NOP
label_25207c:
    // 0x25207c: 0x0  nop
    ctx->pc = 0x25207cu;
    // NOP
label_252080:
    // 0x252080: 0x0  nop
    ctx->pc = 0x252080u;
    // NOP
label_252084:
    // 0x252084: 0x0  nop
    ctx->pc = 0x252084u;
    // NOP
label_252088:
    // 0x252088: 0x0  nop
    ctx->pc = 0x252088u;
    // NOP
label_25208c:
    // 0x25208c: 0x0  nop
    ctx->pc = 0x25208cu;
    // NOP
label_252090:
    // 0x252090: 0x0  nop
    ctx->pc = 0x252090u;
    // NOP
label_252094:
    // 0x252094: 0x0  nop
    ctx->pc = 0x252094u;
    // NOP
label_252098:
    // 0x252098: 0x0  nop
    ctx->pc = 0x252098u;
    // NOP
label_25209c:
    // 0x25209c: 0x0  nop
    ctx->pc = 0x25209cu;
    // NOP
label_2520a0:
    // 0x2520a0: 0x0  nop
    ctx->pc = 0x2520a0u;
    // NOP
label_2520a4:
    // 0x2520a4: 0x0  nop
    ctx->pc = 0x2520a4u;
    // NOP
label_2520a8:
    // 0x2520a8: 0x0  nop
    ctx->pc = 0x2520a8u;
    // NOP
label_2520ac:
    // 0x2520ac: 0x0  nop
    ctx->pc = 0x2520acu;
    // NOP
label_2520b0:
    // 0x2520b0: 0x0  nop
    ctx->pc = 0x2520b0u;
    // NOP
label_2520b4:
    // 0x2520b4: 0x0  nop
    ctx->pc = 0x2520b4u;
    // NOP
label_2520b8:
    // 0x2520b8: 0x0  nop
    ctx->pc = 0x2520b8u;
    // NOP
label_2520bc:
    // 0x2520bc: 0x0  nop
    ctx->pc = 0x2520bcu;
    // NOP
label_2520c0:
    // 0x2520c0: 0x0  nop
    ctx->pc = 0x2520c0u;
    // NOP
label_2520c4:
    // 0x2520c4: 0x0  nop
    ctx->pc = 0x2520c4u;
    // NOP
label_2520c8:
    // 0x2520c8: 0x0  nop
    ctx->pc = 0x2520c8u;
    // NOP
label_2520cc:
    // 0x2520cc: 0x0  nop
    ctx->pc = 0x2520ccu;
    // NOP
label_2520d0:
    // 0x2520d0: 0x0  nop
    ctx->pc = 0x2520d0u;
    // NOP
label_2520d4:
    // 0x2520d4: 0x0  nop
    ctx->pc = 0x2520d4u;
    // NOP
label_2520d8:
    // 0x2520d8: 0x0  nop
    ctx->pc = 0x2520d8u;
    // NOP
label_2520dc:
    // 0x2520dc: 0x0  nop
    ctx->pc = 0x2520dcu;
    // NOP
label_2520e0:
    // 0x2520e0: 0x0  nop
    ctx->pc = 0x2520e0u;
    // NOP
label_2520e4:
    // 0x2520e4: 0x0  nop
    ctx->pc = 0x2520e4u;
    // NOP
label_2520e8:
    // 0x2520e8: 0x5bc  dsll32      $zero, $zero, 22
    ctx->pc = 0x2520e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 22));
label_2520ec:
    // 0x2520ec: 0x0  nop
    ctx->pc = 0x2520ecu;
    // NOP
label_2520f0:
    // 0x2520f0: 0x152c70  tge         $zero, $s5, 177
    ctx->pc = 0x2520f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2520f4:
    // 0x2520f4: 0x0  nop
    ctx->pc = 0x2520f4u;
    // NOP
label_2520f8:
    // 0x2520f8: 0x0  nop
    ctx->pc = 0x2520f8u;
    // NOP
label_2520fc:
    // 0x2520fc: 0x0  nop
    ctx->pc = 0x2520fcu;
    // NOP
label_252100:
    // 0x252100: 0x0  nop
    ctx->pc = 0x252100u;
    // NOP
label_252104:
    // 0x252104: 0x0  nop
    ctx->pc = 0x252104u;
    // NOP
label_252108:
    // 0x252108: 0x0  nop
    ctx->pc = 0x252108u;
    // NOP
label_25210c:
    // 0x25210c: 0x0  nop
    ctx->pc = 0x25210cu;
    // NOP
label_252110:
    // 0x252110: 0x0  nop
    ctx->pc = 0x252110u;
    // NOP
label_252114:
    // 0x252114: 0x0  nop
    ctx->pc = 0x252114u;
    // NOP
label_252118:
    // 0x252118: 0x0  nop
    ctx->pc = 0x252118u;
    // NOP
label_25211c:
    // 0x25211c: 0x0  nop
    ctx->pc = 0x25211cu;
    // NOP
label_252120:
    // 0x252120: 0x0  nop
    ctx->pc = 0x252120u;
    // NOP
label_252124:
    // 0x252124: 0x0  nop
    ctx->pc = 0x252124u;
    // NOP
label_252128:
    // 0x252128: 0x0  nop
    ctx->pc = 0x252128u;
    // NOP
label_25212c:
    // 0x25212c: 0x0  nop
    ctx->pc = 0x25212cu;
    // NOP
label_252130:
    // 0x252130: 0x0  nop
    ctx->pc = 0x252130u;
    // NOP
label_252134:
    // 0x252134: 0x0  nop
    ctx->pc = 0x252134u;
    // NOP
label_252138:
    // 0x252138: 0x0  nop
    ctx->pc = 0x252138u;
    // NOP
label_25213c:
    // 0x25213c: 0x0  nop
    ctx->pc = 0x25213cu;
    // NOP
label_252140:
    // 0x252140: 0x0  nop
    ctx->pc = 0x252140u;
    // NOP
label_252144:
    // 0x252144: 0x0  nop
    ctx->pc = 0x252144u;
    // NOP
label_252148:
    // 0x252148: 0x0  nop
    ctx->pc = 0x252148u;
    // NOP
label_25214c:
    // 0x25214c: 0x0  nop
    ctx->pc = 0x25214cu;
    // NOP
label_252150:
    // 0x252150: 0x0  nop
    ctx->pc = 0x252150u;
    // NOP
label_252154:
    // 0x252154: 0x0  nop
    ctx->pc = 0x252154u;
    // NOP
label_252158:
    // 0x252158: 0x0  nop
    ctx->pc = 0x252158u;
    // NOP
label_25215c:
    // 0x25215c: 0x0  nop
    ctx->pc = 0x25215cu;
    // NOP
label_252160:
    // 0x252160: 0x0  nop
    ctx->pc = 0x252160u;
    // NOP
label_252164:
    // 0x252164: 0x0  nop
    ctx->pc = 0x252164u;
    // NOP
label_252168:
    // 0x252168: 0x0  nop
    ctx->pc = 0x252168u;
    // NOP
label_25216c:
    // 0x25216c: 0x0  nop
    ctx->pc = 0x25216cu;
    // NOP
label_252170:
    // 0x252170: 0x0  nop
    ctx->pc = 0x252170u;
    // NOP
label_252174:
    // 0x252174: 0x0  nop
    ctx->pc = 0x252174u;
    // NOP
label_252178:
    // 0x252178: 0x0  nop
    ctx->pc = 0x252178u;
    // NOP
label_25217c:
    // 0x25217c: 0x0  nop
    ctx->pc = 0x25217cu;
    // NOP
label_252180:
    // 0x252180: 0x0  nop
    ctx->pc = 0x252180u;
    // NOP
label_252184:
    // 0x252184: 0x0  nop
    ctx->pc = 0x252184u;
    // NOP
label_252188:
    // 0x252188: 0x0  nop
    ctx->pc = 0x252188u;
    // NOP
label_25218c:
    // 0x25218c: 0x0  nop
    ctx->pc = 0x25218cu;
    // NOP
label_252190:
    // 0x252190: 0x0  nop
    ctx->pc = 0x252190u;
    // NOP
label_252194:
    // 0x252194: 0x0  nop
    ctx->pc = 0x252194u;
    // NOP
label_252198:
    // 0x252198: 0x0  nop
    ctx->pc = 0x252198u;
    // NOP
label_25219c:
    // 0x25219c: 0x0  nop
    ctx->pc = 0x25219cu;
    // NOP
label_2521a0:
    // 0x2521a0: 0x0  nop
    ctx->pc = 0x2521a0u;
    // NOP
label_2521a4:
    // 0x2521a4: 0x0  nop
    ctx->pc = 0x2521a4u;
    // NOP
label_2521a8:
    // 0x2521a8: 0x0  nop
    ctx->pc = 0x2521a8u;
    // NOP
label_2521ac:
    // 0x2521ac: 0x0  nop
    ctx->pc = 0x2521acu;
    // NOP
label_2521b0:
    // 0x2521b0: 0x0  nop
    ctx->pc = 0x2521b0u;
    // NOP
label_2521b4:
    // 0x2521b4: 0x0  nop
    ctx->pc = 0x2521b4u;
    // NOP
label_2521b8:
    // 0x2521b8: 0x0  nop
    ctx->pc = 0x2521b8u;
    // NOP
label_2521bc:
    // 0x2521bc: 0x0  nop
    ctx->pc = 0x2521bcu;
    // NOP
label_2521c0:
    // 0x2521c0: 0x5bd  .word       0x000005BD                   # INVALID     $zero, $zero, 0x5BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2521c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2521C0 raw=0x000005BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2521c4:
    // 0x2521c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2521c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2521C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2521c8:
    // 0x2521c8: 0x152c70  tge         $zero, $s5, 177
    ctx->pc = 0x2521c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2521cc:
    // 0x2521cc: 0x0  nop
    ctx->pc = 0x2521ccu;
    // NOP
    ctx->pc = 0x2521d0u;
    return;
}
