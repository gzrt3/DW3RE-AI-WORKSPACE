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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part376(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x252a18u: goto label_252a18;
        case 0x252a1cu: goto label_252a1c;
        case 0x252a20u: goto label_252a20;
        case 0x252a24u: goto label_252a24;
        case 0x252a28u: goto label_252a28;
        case 0x252a2cu: goto label_252a2c;
        case 0x252a30u: goto label_252a30;
        case 0x252a34u: goto label_252a34;
        case 0x252a38u: goto label_252a38;
        case 0x252a3cu: goto label_252a3c;
        case 0x252a40u: goto label_252a40;
        case 0x252a44u: goto label_252a44;
        case 0x252a48u: goto label_252a48;
        case 0x252a4cu: goto label_252a4c;
        case 0x252a50u: goto label_252a50;
        case 0x252a54u: goto label_252a54;
        case 0x252a58u: goto label_252a58;
        case 0x252a5cu: goto label_252a5c;
        case 0x252a60u: goto label_252a60;
        case 0x252a64u: goto label_252a64;
        case 0x252a68u: goto label_252a68;
        case 0x252a6cu: goto label_252a6c;
        case 0x252a70u: goto label_252a70;
        case 0x252a74u: goto label_252a74;
        case 0x252a78u: goto label_252a78;
        case 0x252a7cu: goto label_252a7c;
        case 0x252a80u: goto label_252a80;
        case 0x252a84u: goto label_252a84;
        case 0x252a88u: goto label_252a88;
        case 0x252a8cu: goto label_252a8c;
        case 0x252a90u: goto label_252a90;
        case 0x252a94u: goto label_252a94;
        case 0x252a98u: goto label_252a98;
        case 0x252a9cu: goto label_252a9c;
        case 0x252aa0u: goto label_252aa0;
        case 0x252aa4u: goto label_252aa4;
        case 0x252aa8u: goto label_252aa8;
        case 0x252aacu: goto label_252aac;
        case 0x252ab0u: goto label_252ab0;
        case 0x252ab4u: goto label_252ab4;
        case 0x252ab8u: goto label_252ab8;
        case 0x252abcu: goto label_252abc;
        case 0x252ac0u: goto label_252ac0;
        case 0x252ac4u: goto label_252ac4;
        case 0x252ac8u: goto label_252ac8;
        case 0x252accu: goto label_252acc;
        case 0x252ad0u: goto label_252ad0;
        case 0x252ad4u: goto label_252ad4;
        case 0x252ad8u: goto label_252ad8;
        case 0x252adcu: goto label_252adc;
        case 0x252ae0u: goto label_252ae0;
        case 0x252ae4u: goto label_252ae4;
        case 0x252ae8u: goto label_252ae8;
        case 0x252aecu: goto label_252aec;
        case 0x252af0u: goto label_252af0;
        case 0x252af4u: goto label_252af4;
        case 0x252af8u: goto label_252af8;
        case 0x252afcu: goto label_252afc;
        case 0x252b00u: goto label_252b00;
        case 0x252b04u: goto label_252b04;
        case 0x252b08u: goto label_252b08;
        case 0x252b0cu: goto label_252b0c;
        case 0x252b10u: goto label_252b10;
        case 0x252b14u: goto label_252b14;
        case 0x252b18u: goto label_252b18;
        case 0x252b1cu: goto label_252b1c;
        case 0x252b20u: goto label_252b20;
        case 0x252b24u: goto label_252b24;
        case 0x252b28u: goto label_252b28;
        case 0x252b2cu: goto label_252b2c;
        case 0x252b30u: goto label_252b30;
        case 0x252b34u: goto label_252b34;
        case 0x252b38u: goto label_252b38;
        case 0x252b3cu: goto label_252b3c;
        case 0x252b40u: goto label_252b40;
        case 0x252b44u: goto label_252b44;
        case 0x252b48u: goto label_252b48;
        case 0x252b4cu: goto label_252b4c;
        case 0x252b50u: goto label_252b50;
        case 0x252b54u: goto label_252b54;
        case 0x252b58u: goto label_252b58;
        case 0x252b5cu: goto label_252b5c;
        case 0x252b60u: goto label_252b60;
        case 0x252b64u: goto label_252b64;
        case 0x252b68u: goto label_252b68;
        case 0x252b6cu: goto label_252b6c;
        case 0x252b70u: goto label_252b70;
        case 0x252b74u: goto label_252b74;
        case 0x252b78u: goto label_252b78;
        case 0x252b7cu: goto label_252b7c;
        case 0x252b80u: goto label_252b80;
        case 0x252b84u: goto label_252b84;
        case 0x252b88u: goto label_252b88;
        case 0x252b8cu: goto label_252b8c;
        case 0x252b90u: goto label_252b90;
        case 0x252b94u: goto label_252b94;
        case 0x252b98u: goto label_252b98;
        case 0x252b9cu: goto label_252b9c;
        case 0x252ba0u: goto label_252ba0;
        case 0x252ba4u: goto label_252ba4;
        case 0x252ba8u: goto label_252ba8;
        case 0x252bacu: goto label_252bac;
        case 0x252bb0u: goto label_252bb0;
        case 0x252bb4u: goto label_252bb4;
        case 0x252bb8u: goto label_252bb8;
        case 0x252bbcu: goto label_252bbc;
        case 0x252bc0u: goto label_252bc0;
        case 0x252bc4u: goto label_252bc4;
        case 0x252bc8u: goto label_252bc8;
        case 0x252bccu: goto label_252bcc;
        case 0x252bd0u: goto label_252bd0;
        case 0x252bd4u: goto label_252bd4;
        case 0x252bd8u: goto label_252bd8;
        case 0x252bdcu: goto label_252bdc;
        case 0x252be0u: goto label_252be0;
        case 0x252be4u: goto label_252be4;
        case 0x252be8u: goto label_252be8;
        case 0x252becu: goto label_252bec;
        case 0x252bf0u: goto label_252bf0;
        case 0x252bf4u: goto label_252bf4;
        case 0x252bf8u: goto label_252bf8;
        case 0x252bfcu: goto label_252bfc;
        case 0x252c00u: goto label_252c00;
        case 0x252c04u: goto label_252c04;
        case 0x252c08u: goto label_252c08;
        case 0x252c0cu: goto label_252c0c;
        case 0x252c10u: goto label_252c10;
        case 0x252c14u: goto label_252c14;
        case 0x252c18u: goto label_252c18;
        case 0x252c1cu: goto label_252c1c;
        case 0x252c20u: goto label_252c20;
        case 0x252c24u: goto label_252c24;
        case 0x252c28u: goto label_252c28;
        case 0x252c2cu: goto label_252c2c;
        case 0x252c30u: goto label_252c30;
        case 0x252c34u: goto label_252c34;
        case 0x252c38u: goto label_252c38;
        case 0x252c3cu: goto label_252c3c;
        case 0x252c40u: goto label_252c40;
        case 0x252c44u: goto label_252c44;
        case 0x252c48u: goto label_252c48;
        case 0x252c4cu: goto label_252c4c;
        case 0x252c50u: goto label_252c50;
        case 0x252c54u: goto label_252c54;
        case 0x252c58u: goto label_252c58;
        case 0x252c5cu: goto label_252c5c;
        case 0x252c60u: goto label_252c60;
        case 0x252c64u: goto label_252c64;
        case 0x252c68u: goto label_252c68;
        case 0x252c6cu: goto label_252c6c;
        case 0x252c70u: goto label_252c70;
        case 0x252c74u: goto label_252c74;
        case 0x252c78u: goto label_252c78;
        case 0x252c7cu: goto label_252c7c;
        case 0x252c80u: goto label_252c80;
        case 0x252c84u: goto label_252c84;
        case 0x252c88u: goto label_252c88;
        case 0x252c8cu: goto label_252c8c;
        case 0x252c90u: goto label_252c90;
        case 0x252c94u: goto label_252c94;
        case 0x252c98u: goto label_252c98;
        case 0x252c9cu: goto label_252c9c;
        case 0x252ca0u: goto label_252ca0;
        case 0x252ca4u: goto label_252ca4;
        case 0x252ca8u: goto label_252ca8;
        case 0x252cacu: goto label_252cac;
        case 0x252cb0u: goto label_252cb0;
        case 0x252cb4u: goto label_252cb4;
        case 0x252cb8u: goto label_252cb8;
        case 0x252cbcu: goto label_252cbc;
        case 0x252cc0u: goto label_252cc0;
        case 0x252cc4u: goto label_252cc4;
        case 0x252cc8u: goto label_252cc8;
        case 0x252cccu: goto label_252ccc;
        case 0x252cd0u: goto label_252cd0;
        case 0x252cd4u: goto label_252cd4;
        case 0x252cd8u: goto label_252cd8;
        case 0x252cdcu: goto label_252cdc;
        case 0x252ce0u: goto label_252ce0;
        case 0x252ce4u: goto label_252ce4;
        case 0x252ce8u: goto label_252ce8;
        case 0x252cecu: goto label_252cec;
        case 0x252cf0u: goto label_252cf0;
        case 0x252cf4u: goto label_252cf4;
        case 0x252cf8u: goto label_252cf8;
        case 0x252cfcu: goto label_252cfc;
        case 0x252d00u: goto label_252d00;
        case 0x252d04u: goto label_252d04;
        case 0x252d08u: goto label_252d08;
        case 0x252d0cu: goto label_252d0c;
        case 0x252d10u: goto label_252d10;
        case 0x252d14u: goto label_252d14;
        case 0x252d18u: goto label_252d18;
        case 0x252d1cu: goto label_252d1c;
        case 0x252d20u: goto label_252d20;
        case 0x252d24u: goto label_252d24;
        case 0x252d28u: goto label_252d28;
        case 0x252d2cu: goto label_252d2c;
        case 0x252d30u: goto label_252d30;
        case 0x252d34u: goto label_252d34;
        case 0x252d38u: goto label_252d38;
        case 0x252d3cu: goto label_252d3c;
        case 0x252d40u: goto label_252d40;
        case 0x252d44u: goto label_252d44;
        case 0x252d48u: goto label_252d48;
        case 0x252d4cu: goto label_252d4c;
        case 0x252d50u: goto label_252d50;
        case 0x252d54u: goto label_252d54;
        case 0x252d58u: goto label_252d58;
        case 0x252d5cu: goto label_252d5c;
        case 0x252d60u: goto label_252d60;
        case 0x252d64u: goto label_252d64;
        case 0x252d68u: goto label_252d68;
        case 0x252d6cu: goto label_252d6c;
        case 0x252d70u: goto label_252d70;
        case 0x252d74u: goto label_252d74;
        case 0x252d78u: goto label_252d78;
        case 0x252d7cu: goto label_252d7c;
        case 0x252d80u: goto label_252d80;
        case 0x252d84u: goto label_252d84;
        case 0x252d88u: goto label_252d88;
        case 0x252d8cu: goto label_252d8c;
        case 0x252d90u: goto label_252d90;
        case 0x252d94u: goto label_252d94;
        case 0x252d98u: goto label_252d98;
        case 0x252d9cu: goto label_252d9c;
        case 0x252da0u: goto label_252da0;
        case 0x252da4u: goto label_252da4;
        case 0x252da8u: goto label_252da8;
        case 0x252dacu: goto label_252dac;
        case 0x252db0u: goto label_252db0;
        case 0x252db4u: goto label_252db4;
        case 0x252db8u: goto label_252db8;
        case 0x252dbcu: goto label_252dbc;
        case 0x252dc0u: goto label_252dc0;
        case 0x252dc4u: goto label_252dc4;
        case 0x252dc8u: goto label_252dc8;
        case 0x252dccu: goto label_252dcc;
        case 0x252dd0u: goto label_252dd0;
        case 0x252dd4u: goto label_252dd4;
        case 0x252dd8u: goto label_252dd8;
        case 0x252ddcu: goto label_252ddc;
        case 0x252de0u: goto label_252de0;
        case 0x252de4u: goto label_252de4;
        case 0x252de8u: goto label_252de8;
        case 0x252decu: goto label_252dec;
        case 0x252df0u: goto label_252df0;
        case 0x252df4u: goto label_252df4;
        case 0x252df8u: goto label_252df8;
        case 0x252dfcu: goto label_252dfc;
        case 0x252e00u: goto label_252e00;
        case 0x252e04u: goto label_252e04;
        case 0x252e08u: goto label_252e08;
        case 0x252e0cu: goto label_252e0c;
        case 0x252e10u: goto label_252e10;
        case 0x252e14u: goto label_252e14;
        case 0x252e18u: goto label_252e18;
        case 0x252e1cu: goto label_252e1c;
        case 0x252e20u: goto label_252e20;
        case 0x252e24u: goto label_252e24;
        case 0x252e28u: goto label_252e28;
        case 0x252e2cu: goto label_252e2c;
        case 0x252e30u: goto label_252e30;
        case 0x252e34u: goto label_252e34;
        case 0x252e38u: goto label_252e38;
        case 0x252e3cu: goto label_252e3c;
        case 0x252e40u: goto label_252e40;
        case 0x252e44u: goto label_252e44;
        case 0x252e48u: goto label_252e48;
        case 0x252e4cu: goto label_252e4c;
        case 0x252e50u: goto label_252e50;
        case 0x252e54u: goto label_252e54;
        case 0x252e58u: goto label_252e58;
        case 0x252e5cu: goto label_252e5c;
        case 0x252e60u: goto label_252e60;
        case 0x252e64u: goto label_252e64;
        case 0x252e68u: goto label_252e68;
        case 0x252e6cu: goto label_252e6c;
        case 0x252e70u: goto label_252e70;
        case 0x252e74u: goto label_252e74;
        case 0x252e78u: goto label_252e78;
        case 0x252e7cu: goto label_252e7c;
        case 0x252e80u: goto label_252e80;
        case 0x252e84u: goto label_252e84;
        case 0x252e88u: goto label_252e88;
        case 0x252e8cu: goto label_252e8c;
        case 0x252e90u: goto label_252e90;
        case 0x252e94u: goto label_252e94;
        case 0x252e98u: goto label_252e98;
        case 0x252e9cu: goto label_252e9c;
        case 0x252ea0u: goto label_252ea0;
        case 0x252ea4u: goto label_252ea4;
        case 0x252ea8u: goto label_252ea8;
        case 0x252eacu: goto label_252eac;
        case 0x252eb0u: goto label_252eb0;
        case 0x252eb4u: goto label_252eb4;
        case 0x252eb8u: goto label_252eb8;
        case 0x252ebcu: goto label_252ebc;
        case 0x252ec0u: goto label_252ec0;
        case 0x252ec4u: goto label_252ec4;
        case 0x252ec8u: goto label_252ec8;
        case 0x252eccu: goto label_252ecc;
        case 0x252ed0u: goto label_252ed0;
        case 0x252ed4u: goto label_252ed4;
        case 0x252ed8u: goto label_252ed8;
        case 0x252edcu: goto label_252edc;
        case 0x252ee0u: goto label_252ee0;
        case 0x252ee4u: goto label_252ee4;
        case 0x252ee8u: goto label_252ee8;
        case 0x252eecu: goto label_252eec;
        case 0x252ef0u: goto label_252ef0;
        case 0x252ef4u: goto label_252ef4;
        case 0x252ef8u: goto label_252ef8;
        case 0x252efcu: goto label_252efc;
        case 0x252f00u: goto label_252f00;
        case 0x252f04u: goto label_252f04;
        case 0x252f08u: goto label_252f08;
        case 0x252f0cu: goto label_252f0c;
        case 0x252f10u: goto label_252f10;
        case 0x252f14u: goto label_252f14;
        case 0x252f18u: goto label_252f18;
        case 0x252f1cu: goto label_252f1c;
        case 0x252f20u: goto label_252f20;
        case 0x252f24u: goto label_252f24;
        case 0x252f28u: goto label_252f28;
        case 0x252f2cu: goto label_252f2c;
        case 0x252f30u: goto label_252f30;
        case 0x252f34u: goto label_252f34;
        case 0x252f38u: goto label_252f38;
        case 0x252f3cu: goto label_252f3c;
        case 0x252f40u: goto label_252f40;
        case 0x252f44u: goto label_252f44;
        case 0x252f48u: goto label_252f48;
        case 0x252f4cu: goto label_252f4c;
        case 0x252f50u: goto label_252f50;
        case 0x252f54u: goto label_252f54;
        case 0x252f58u: goto label_252f58;
        case 0x252f5cu: goto label_252f5c;
        case 0x252f60u: goto label_252f60;
        case 0x252f64u: goto label_252f64;
        case 0x252f68u: goto label_252f68;
        case 0x252f6cu: goto label_252f6c;
        case 0x252f70u: goto label_252f70;
        case 0x252f74u: goto label_252f74;
        case 0x252f78u: goto label_252f78;
        case 0x252f7cu: goto label_252f7c;
        case 0x252f80u: goto label_252f80;
        case 0x252f84u: goto label_252f84;
        case 0x252f88u: goto label_252f88;
        case 0x252f8cu: goto label_252f8c;
        case 0x252f90u: goto label_252f90;
        case 0x252f94u: goto label_252f94;
        case 0x252f98u: goto label_252f98;
        case 0x252f9cu: goto label_252f9c;
        case 0x252fa0u: goto label_252fa0;
        case 0x252fa4u: goto label_252fa4;
        case 0x252fa8u: goto label_252fa8;
        case 0x252facu: goto label_252fac;
        case 0x252fb0u: goto label_252fb0;
        case 0x252fb4u: goto label_252fb4;
        case 0x252fb8u: goto label_252fb8;
        case 0x252fbcu: goto label_252fbc;
        case 0x252fc0u: goto label_252fc0;
        case 0x252fc4u: goto label_252fc4;
        case 0x252fc8u: goto label_252fc8;
        case 0x252fccu: goto label_252fcc;
        case 0x252fd0u: goto label_252fd0;
        case 0x252fd4u: goto label_252fd4;
        case 0x252fd8u: goto label_252fd8;
        case 0x252fdcu: goto label_252fdc;
        case 0x252fe0u: goto label_252fe0;
        case 0x252fe4u: goto label_252fe4;
        case 0x252fe8u: goto label_252fe8;
        case 0x252fecu: goto label_252fec;
        case 0x252ff0u: goto label_252ff0;
        case 0x252ff4u: goto label_252ff4;
        case 0x252ff8u: goto label_252ff8;
        case 0x252ffcu: goto label_252ffc;
        case 0x253000u: goto label_253000;
        case 0x253004u: goto label_253004;
        case 0x253008u: goto label_253008;
        case 0x25300cu: goto label_25300c;
        case 0x253010u: goto label_253010;
        case 0x253014u: goto label_253014;
        case 0x253018u: goto label_253018;
        case 0x25301cu: goto label_25301c;
        case 0x253020u: goto label_253020;
        case 0x253024u: goto label_253024;
        case 0x253028u: goto label_253028;
        case 0x25302cu: goto label_25302c;
        case 0x253030u: goto label_253030;
        case 0x253034u: goto label_253034;
        case 0x253038u: goto label_253038;
        case 0x25303cu: goto label_25303c;
        case 0x253040u: goto label_253040;
        case 0x253044u: goto label_253044;
        case 0x253048u: goto label_253048;
        case 0x25304cu: goto label_25304c;
        case 0x253050u: goto label_253050;
        case 0x253054u: goto label_253054;
        case 0x253058u: goto label_253058;
        case 0x25305cu: goto label_25305c;
        case 0x253060u: goto label_253060;
        case 0x253064u: goto label_253064;
        case 0x253068u: goto label_253068;
        case 0x25306cu: goto label_25306c;
        case 0x253070u: goto label_253070;
        case 0x253074u: goto label_253074;
        case 0x253078u: goto label_253078;
        case 0x25307cu: goto label_25307c;
        case 0x253080u: goto label_253080;
        case 0x253084u: goto label_253084;
        case 0x253088u: goto label_253088;
        case 0x25308cu: goto label_25308c;
        case 0x253090u: goto label_253090;
        case 0x253094u: goto label_253094;
        case 0x253098u: goto label_253098;
        case 0x25309cu: goto label_25309c;
        case 0x2530a0u: goto label_2530a0;
        case 0x2530a4u: goto label_2530a4;
        case 0x2530a8u: goto label_2530a8;
        case 0x2530acu: goto label_2530ac;
        case 0x2530b0u: goto label_2530b0;
        case 0x2530b4u: goto label_2530b4;
        case 0x2530b8u: goto label_2530b8;
        case 0x2530bcu: goto label_2530bc;
        case 0x2530c0u: goto label_2530c0;
        case 0x2530c4u: goto label_2530c4;
        case 0x2530c8u: goto label_2530c8;
        case 0x2530ccu: goto label_2530cc;
        case 0x2530d0u: goto label_2530d0;
        case 0x2530d4u: goto label_2530d4;
        case 0x2530d8u: goto label_2530d8;
        case 0x2530dcu: goto label_2530dc;
        case 0x2530e0u: goto label_2530e0;
        case 0x2530e4u: goto label_2530e4;
        case 0x2530e8u: goto label_2530e8;
        case 0x2530ecu: goto label_2530ec;
        case 0x2530f0u: goto label_2530f0;
        case 0x2530f4u: goto label_2530f4;
        case 0x2530f8u: goto label_2530f8;
        case 0x2530fcu: goto label_2530fc;
        case 0x253100u: goto label_253100;
        case 0x253104u: goto label_253104;
        case 0x253108u: goto label_253108;
        case 0x25310cu: goto label_25310c;
        case 0x253110u: goto label_253110;
        case 0x253114u: goto label_253114;
        case 0x253118u: goto label_253118;
        case 0x25311cu: goto label_25311c;
        case 0x253120u: goto label_253120;
        case 0x253124u: goto label_253124;
        case 0x253128u: goto label_253128;
        case 0x25312cu: goto label_25312c;
        case 0x253130u: goto label_253130;
        case 0x253134u: goto label_253134;
        case 0x253138u: goto label_253138;
        case 0x25313cu: goto label_25313c;
        case 0x253140u: goto label_253140;
        case 0x253144u: goto label_253144;
        case 0x253148u: goto label_253148;
        case 0x25314cu: goto label_25314c;
        case 0x253150u: goto label_253150;
        case 0x253154u: goto label_253154;
        case 0x253158u: goto label_253158;
        case 0x25315cu: goto label_25315c;
        case 0x253160u: goto label_253160;
        case 0x253164u: goto label_253164;
        case 0x253168u: goto label_253168;
        case 0x25316cu: goto label_25316c;
        case 0x253170u: goto label_253170;
        case 0x253174u: goto label_253174;
        case 0x253178u: goto label_253178;
        case 0x25317cu: goto label_25317c;
        case 0x253180u: goto label_253180;
        case 0x253184u: goto label_253184;
        case 0x253188u: goto label_253188;
        case 0x25318cu: goto label_25318c;
        case 0x253190u: goto label_253190;
        case 0x253194u: goto label_253194;
        case 0x253198u: goto label_253198;
        case 0x25319cu: goto label_25319c;
        case 0x2531a0u: goto label_2531a0;
        case 0x2531a4u: goto label_2531a4;
        case 0x2531a8u: goto label_2531a8;
        case 0x2531acu: goto label_2531ac;
        case 0x2531b0u: goto label_2531b0;
        case 0x2531b4u: goto label_2531b4;
        case 0x2531b8u: goto label_2531b8;
        case 0x2531bcu: goto label_2531bc;
        case 0x2531c0u: goto label_2531c0;
        case 0x2531c4u: goto label_2531c4;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531ccu: goto label_2531cc;
        case 0x2531d0u: goto label_2531d0;
        case 0x2531d4u: goto label_2531d4;
        case 0x2531d8u: goto label_2531d8;
        case 0x2531dcu: goto label_2531dc;
        case 0x2531e0u: goto label_2531e0;
        case 0x2531e4u: goto label_2531e4;
        default: return;
    }

label_252a18:
    // 0x252a18: 0x2c6240  .word       0x002C6240                   # sll         $t4, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252a1c:
    // 0x252a1c: 0x2c6250  .word       0x002C6250                   # mfhi        $t4 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a20:
    // 0x252a20: 0x2c6258  .word       0x002C6258                   # mult        $t4, $at, $t4 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a24:
    // 0x252a24: 0x2c6268  .word       0x002C6268                   # mfsa        $t4 # 002C0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a24u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a28:
    // 0x252a28: 0x2c6270  tge         $at, $t4, 393
    ctx->pc = 0x252a28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a2c:
    // 0x252a2c: 0x2c6278  .word       0x002C6278                   # dsll        $t4, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 9);
label_252a30:
    // 0x252a30: 0x2c6280  .word       0x002C6280                   # sll         $t4, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252a34:
    // 0x252a34: 0x2c6288  .word       0x002C6288                   # jr          $at # 000C6280 <InstrIdType: CPU_SPECIAL>
label_252a38:
    if (ctx->pc == 0x252A38u) {
        ctx->pc = 0x252A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A34u;
        // 0x252a38: 0x2c6290  .word       0x002C6290                   # mfhi        $t4 # 002C0280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A3Cu;
        goto label_252a3c;
    }
    ctx->pc = 0x252A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A34u;
        // 0x252a38: 0x2c6290  .word       0x002C6290                   # mfhi        $t4 # 002C0280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A3Cu;
label_252a3c:
    // 0x252a3c: 0x2c6298  .word       0x002C6298                   # mult        $t4, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a40:
    // 0x252a40: 0x2c62a8  .word       0x002C62A8                   # mfsa        $t4 # 002C0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a40u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a44:
    // 0x252a44: 0x2c62b0  tge         $at, $t4, 394
    ctx->pc = 0x252a44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a48:
    // 0x252a48: 0x2c62b8  .word       0x002C62B8                   # dsll        $t4, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 10);
label_252a4c:
    // 0x252a4c: 0x2c62c8  .word       0x002C62C8                   # jr          $at # 000C62C0 <InstrIdType: CPU_SPECIAL>
label_252a50:
    if (ctx->pc == 0x252A50u) {
        ctx->pc = 0x252A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A4Cu;
        // 0x252a50: 0x2c62d8  .word       0x002C62D8                   # mult        $t4, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A54u;
        goto label_252a54;
    }
    ctx->pc = 0x252A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A4Cu;
        // 0x252a50: 0x2c62d8  .word       0x002C62D8                   # mult        $t4, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A54u;
label_252a54:
    // 0x252a54: 0x2c62e0  .word       0x002C62E0                   # add         $t4, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a54u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a58:
    // 0x252a58: 0x2c62f0  tge         $at, $t4, 395
    ctx->pc = 0x252a58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a5c:
    // 0x252a5c: 0x2c6300  .word       0x002C6300                   # sll         $t4, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252a60:
    // 0x252a60: 0x2c6310  .word       0x002C6310                   # mfhi        $t4 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a60u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a64:
    // 0x252a64: 0x2c6320  .word       0x002C6320                   # add         $t4, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a64u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a68:
    // 0x252a68: 0x2c6328  .word       0x002C6328                   # mfsa        $t4 # 002C0300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a68u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a6c:
    // 0x252a6c: 0x2c6338  .word       0x002C6338                   # dsll        $t4, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 12);
label_252a70:
    // 0x252a70: 0x2c61b8  .word       0x002C61B8                   # dsll        $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 6);
label_252a74:
    // 0x252a74: 0x2c6348  .word       0x002C6348                   # jr          $at # 000C6340 <InstrIdType: CPU_SPECIAL>
label_252a78:
    if (ctx->pc == 0x252A78u) {
        ctx->pc = 0x252A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A74u;
        // 0x252a78: 0x2c6350  .word       0x002C6350                   # mfhi        $t4 # 002C0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A7Cu;
        goto label_252a7c;
    }
    ctx->pc = 0x252A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A74u;
        // 0x252a78: 0x2c6350  .word       0x002C6350                   # mfhi        $t4 # 002C0340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A7Cu;
label_252a7c:
    // 0x252a7c: 0x2c6358  .word       0x002C6358                   # mult        $t4, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252a80:
    // 0x252a80: 0x2c6360  .word       0x002C6360                   # add         $t4, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a80u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a84:
    // 0x252a84: 0x2c6370  tge         $at, $t4, 397
    ctx->pc = 0x252a84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a88:
    // 0x252a88: 0x2c6380  .word       0x002C6380                   # sll         $t4, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252a8c:
    // 0x252a8c: 0x2c6388  .word       0x002C6388                   # jr          $at # 000C6380 <InstrIdType: CPU_SPECIAL>
label_252a90:
    if (ctx->pc == 0x252A90u) {
        ctx->pc = 0x252A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A8Cu;
        // 0x252a90: 0x2c6398  .word       0x002C6398                   # mult        $t4, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A94u;
        goto label_252a94;
    }
    ctx->pc = 0x252A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A8Cu;
        // 0x252a90: 0x2c6398  .word       0x002C6398                   # mult        $t4, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252A8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A94u;
label_252a94:
    // 0x252a94: 0x2c63a0  .word       0x002C63A0                   # add         $t4, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a98:
    // 0x252a98: 0x2c63a8  .word       0x002C63A8                   # mfsa        $t4 # 002C0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252a98u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252a9c:
    // 0x252a9c: 0x2c63b8  .word       0x002C63B8                   # dsll        $t4, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
label_252aa0:
    // 0x252aa0: 0x2c63c0  .word       0x002C63C0                   # sll         $t4, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252aa4:
    // 0x252aa4: 0x2c63d0  .word       0x002C63D0                   # mfhi        $t4 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252aa8:
    // 0x252aa8: 0x2c63e0  .word       0x002C63E0                   # add         $t4, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252aac:
    // 0x252aac: 0x2c63e8  .word       0x002C63E8                   # mfsa        $t4 # 002C03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252aacu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ab0:
    // 0x252ab0: 0x2c63f0  tge         $at, $t4, 399
    ctx->pc = 0x252ab0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ab4:
    // 0x252ab4: 0x2c63f8  .word       0x002C63F8                   # dsll        $t4, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ab4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 15);
label_252ab8:
    // 0x252ab8: 0x2c6400  .word       0x002C6400                   # sll         $t4, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_252abc:
    // 0x252abc: 0x2c6410  .word       0x002C6410                   # mfhi        $t4 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252abcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252ac0:
    // 0x252ac0: 0x2c6420  .word       0x002C6420                   # add         $t4, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ac0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252ac4:
    // 0x252ac4: 0x2c6428  .word       0x002C6428                   # mfsa        $t4 # 002C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ac4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ac8:
    // 0x252ac8: 0x2c6438  .word       0x002C6438                   # dsll        $t4, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ac8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
label_252acc:
    // 0x252acc: 0x2c6448  .word       0x002C6448                   # jr          $at # 000C6440 <InstrIdType: CPU_SPECIAL>
label_252ad0:
    if (ctx->pc == 0x252AD0u) {
        ctx->pc = 0x252AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ACCu;
        // 0x252ad0: 0x2c6458  .word       0x002C6458                   # mult        $t4, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AD4u;
        goto label_252ad4;
    }
    ctx->pc = 0x252ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252ACCu;
        // 0x252ad0: 0x2c6458  .word       0x002C6458                   # mult        $t4, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252ACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252AD4u;
label_252ad4:
    // 0x252ad4: 0x2c6468  .word       0x002C6468                   # mfsa        $t4 # 002C0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ad4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252ad8:
    // 0x252ad8: 0x2c6478  .word       0x002C6478                   # dsll        $t4, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ad8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 17);
label_252adc:
    // 0x252adc: 0x2c6480  .word       0x002C6480                   # sll         $t4, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_252ae0:
    // 0x252ae0: 0x2c6490  .word       0x002C6490                   # mfhi        $t4 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252ae4:
    // 0x252ae4: 0x2c6420  .word       0x002C6420                   # add         $t4, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252ae8:
    // 0x252ae8: 0x2c64a0  .word       0x002C64A0                   # add         $t4, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252aec:
    // 0x252aec: 0x2c64b0  tge         $at, $t4, 402
    ctx->pc = 0x252aecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252af0:
    // 0x252af0: 0x2c64b8  .word       0x002C64B8                   # dsll        $t4, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252af0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 18);
label_252af4:
    // 0x252af4: 0x2c64c8  .word       0x002C64C8                   # jr          $at # 000C64C0 <InstrIdType: CPU_SPECIAL>
label_252af8:
    if (ctx->pc == 0x252AF8u) {
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0x2c64d8  .word       0x002C64D8                   # mult        $t4, $at, $t4 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252AFCu;
        goto label_252afc;
    }
    ctx->pc = 0x252AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AF4u;
        // 0x252af8: 0x2c64d8  .word       0x002C64D8                   # mult        $t4, $at, $t4 # 000004C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252AF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252AFCu;
label_252afc:
    // 0x252afc: 0x2c64e8  .word       0x002C64E8                   # mfsa        $t4 # 002C04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252afcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b00:
    // 0x252b00: 0x2c64f8  .word       0x002C64F8                   # dsll        $t4, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
label_252b04:
    // 0x252b04: 0x2c6500  .word       0x002C6500                   # sll         $t4, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252b08:
    // 0x252b08: 0x2c6510  .word       0x002C6510                   # mfhi        $t4 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b08u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b0c:
    // 0x252b0c: 0x2c6520  .word       0x002C6520                   # add         $t4, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b10:
    // 0x252b10: 0x2c6530  tge         $at, $t4, 404
    ctx->pc = 0x252b10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b14:
    // 0x252b14: 0x2c6538  .word       0x002C6538                   # dsll        $t4, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 20);
label_252b18:
    // 0x252b18: 0x2c6540  .word       0x002C6540                   # sll         $t4, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252b1c:
    // 0x252b1c: 0x2c6550  .word       0x002C6550                   # mfhi        $t4 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b20:
    // 0x252b20: 0x2c6560  .word       0x002C6560                   # add         $t4, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b24:
    // 0x252b24: 0x2c6568  .word       0x002C6568                   # mfsa        $t4 # 002C0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b24u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b28:
    // 0x252b28: 0x2c6570  tge         $at, $t4, 405
    ctx->pc = 0x252b28u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b2c:
    // 0x252b2c: 0x2c6580  .word       0x002C6580                   # sll         $t4, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_252b30:
    // 0x252b30: 0x2c6590  .word       0x002C6590                   # mfhi        $t4 # 002C0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b30u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b34:
    // 0x252b34: 0x2c6598  .word       0x002C6598                   # mult        $t4, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252b38:
    // 0x252b38: 0x2c65a8  .word       0x002C65A8                   # mfsa        $t4 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b38u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252b3c:
    // 0x252b3c: 0x2c65b0  tge         $at, $t4, 406
    ctx->pc = 0x252b3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b40:
    // 0x252b40: 0x2c65c0  .word       0x002C65C0                   # sll         $t4, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_252b44:
    // 0x252b44: 0x2c65c8  .word       0x002C65C8                   # jr          $at # 000C65C0 <InstrIdType: CPU_SPECIAL>
label_252b48:
    if (ctx->pc == 0x252B48u) {
        ctx->pc = 0x252B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B44u;
        // 0x252b48: 0x2c65d0  .word       0x002C65D0                   # mfhi        $t4 # 002C05C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B4Cu;
        goto label_252b4c;
    }
    ctx->pc = 0x252B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B44u;
        // 0x252b48: 0x2c65d0  .word       0x002C65D0                   # mfhi        $t4 # 002C05C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252B4Cu;
label_252b4c:
    // 0x252b4c: 0x2c65e0  .word       0x002C65E0                   # add         $t4, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b4cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b50:
    // 0x252b50: 0x2c65f0  tge         $at, $t4, 407
    ctx->pc = 0x252b50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b54:
    // 0x252b54: 0x2c65f8  .word       0x002C65F8                   # dsll        $t4, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 23);
label_252b58:
    // 0x252b58: 0x2c6608  .word       0x002C6608                   # jr          $at # 000C6600 <InstrIdType: CPU_SPECIAL>
label_252b5c:
    if (ctx->pc == 0x252B5Cu) {
        ctx->pc = 0x252B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B58u;
        // 0x252b5c: 0x2c6610  .word       0x002C6610                   # mfhi        $t4 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252B60u;
        goto label_252b60;
    }
    ctx->pc = 0x252B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B58u;
        // 0x252b5c: 0x2c6610  .word       0x002C6610                   # mfhi        $t4 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252B58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252B60u;
label_252b60:
    // 0x252b60: 0x2c6620  .word       0x002C6620                   # add         $t4, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b64:
    // 0x252b64: 0x2c6630  tge         $at, $t4, 408
    ctx->pc = 0x252b64u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b68:
    // 0x252b68: 0x2c6640  .word       0x002C6640                   # sll         $t4, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252b6c:
    // 0x252b6c: 0x2c6650  .word       0x002C6650                   # mfhi        $t4 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b6cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b70:
    // 0x252b70: 0x2c6658  .word       0x002C6658                   # mult        $t4, $at, $t4 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_252b74:
    // 0x252b74: 0x2c6660  .word       0x002C6660                   # add         $t4, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b74u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b78:
    // 0x252b78: 0x2c6670  tge         $at, $t4, 409
    ctx->pc = 0x252b78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b7c:
    // 0x252b7c: 0x2c6680  .word       0x002C6680                   # sll         $t4, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252b80:
    // 0x252b80: 0x2c6690  .word       0x002C6690                   # mfhi        $t4 # 002C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b80u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b84:
    // 0x252b84: 0x2c66a0  .word       0x002C66A0                   # add         $t4, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b84u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b88:
    // 0x252b88: 0x2c66b0  tge         $at, $t4, 410
    ctx->pc = 0x252b88u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b8c:
    // 0x252b8c: 0x2c66c0  .word       0x002C66C0                   # sll         $t4, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252b90:
    // 0x252b90: 0x2c66d0  .word       0x002C66D0                   # mfhi        $t4 # 002C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b90u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252b94:
    // 0x252b94: 0x2c66e0  .word       0x002C66E0                   # add         $t4, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b94u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252b98:
    // 0x252b98: 0x2c66f0  tge         $at, $t4, 411
    ctx->pc = 0x252b98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252b9c:
    // 0x252b9c: 0x2c6700  .word       0x002C6700                   # sll         $t4, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252b9cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_252ba0:
    // 0x252ba0: 0x2c6708  .word       0x002C6708                   # jr          $at # 000C6700 <InstrIdType: CPU_SPECIAL>
label_252ba4:
    if (ctx->pc == 0x252BA4u) {
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA0u;
        // 0x252ba4: 0x2c6718  .word       0x002C6718                   # mult        $t4, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BA8u;
        goto label_252ba8;
    }
    ctx->pc = 0x252BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BA0u;
        // 0x252ba4: 0x2c6718  .word       0x002C6718                   # mult        $t4, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BA8u;
label_252ba8:
    // 0x252ba8: 0x2c6728  .word       0x002C6728                   # mfsa        $t4 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252ba8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bac:
    // 0x252bac: 0x2c6738  .word       0x002C6738                   # dsll        $t4, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 28);
label_252bb0:
    // 0x252bb0: 0x2c6748  .word       0x002C6748                   # jr          $at # 000C6740 <InstrIdType: CPU_SPECIAL>
label_252bb4:
    if (ctx->pc == 0x252BB4u) {
        ctx->pc = 0x252BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BB0u;
        // 0x252bb4: 0x2c6758  .word       0x002C6758                   # mult        $t4, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BB8u;
        goto label_252bb8;
    }
    ctx->pc = 0x252BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BB0u;
        // 0x252bb4: 0x2c6758  .word       0x002C6758                   # mult        $t4, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BB8u;
label_252bb8:
    // 0x252bb8: 0x2c6760  .word       0x002C6760                   # add         $t4, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252bbc:
    // 0x252bbc: 0x2c6768  .word       0x002C6768                   # mfsa        $t4 # 002C0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bbcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bc0:
    // 0x252bc0: 0x2c6770  tge         $at, $t4, 413
    ctx->pc = 0x252bc0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252bc4:
    // 0x252bc4: 0x2c6778  .word       0x002C6778                   # dsll        $t4, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bc4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 29);
label_252bc8:
    // 0x252bc8: 0x2c6780  .word       0x002C6780                   # sll         $t4, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252bcc:
    // 0x252bcc: 0x2c6788  .word       0x002C6788                   # jr          $at # 000C6780 <InstrIdType: CPU_SPECIAL>
label_252bd0:
    if (ctx->pc == 0x252BD0u) {
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0x2c6798  .word       0x002C6798                   # mult        $t4, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BD4u;
        goto label_252bd4;
    }
    ctx->pc = 0x252BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BCCu;
        // 0x252bd0: 0x2c6798  .word       0x002C6798                   # mult        $t4, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x2c67a8  .word       0x002C67A8                   # mfsa        $t4 # 002C0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bd4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bd8:
    // 0x252bd8: 0x2c67b8  .word       0x002C67B8                   # dsll        $t4, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 30);
label_252bdc:
    // 0x252bdc: 0x2c67c0  .word       0x002C67C0                   # sll         $t4, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252be0:
    // 0x252be0: 0x2c67d0  .word       0x002C67D0                   # mfhi        $t4 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252be0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252be4:
    // 0x252be4: 0x2c67e0  .word       0x002C67E0                   # add         $t4, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252be4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252be8:
    // 0x252be8: 0x2c67e8  .word       0x002C67E8                   # mfsa        $t4 # 002C07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252be8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252bec:
    // 0x252bec: 0x2c67f8  .word       0x002C67F8                   # dsll        $t4, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 31);
label_252bf0:
    // 0x252bf0: 0x2c6808  .word       0x002C6808                   # jr          $at # 000C6800 <InstrIdType: CPU_SPECIAL>
label_252bf4:
    if (ctx->pc == 0x252BF4u) {
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF0u;
        // 0x252bf4: 0x2c6810  .word       0x002C6810                   # mfhi        $t5 # 002C0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252BF8u;
        goto label_252bf8;
    }
    ctx->pc = 0x252BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BF0u;
        // 0x252bf4: 0x2c6810  .word       0x002C6810                   # mfhi        $t5 # 002C0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252BF8u;
label_252bf8:
    // 0x252bf8: 0x2c6820  add         $t5, $at, $t4
    ctx->pc = 0x252bf8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252bfc:
    // 0x252bfc: 0x2c6828  .word       0x002C6828                   # mfsa        $t5 # 002C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252bfcu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c00:
    // 0x252c00: 0x2c6830  tge         $at, $t4, 416
    ctx->pc = 0x252c00u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c04:
    // 0x252c04: 0x2c6840  .word       0x002C6840                   # sll         $t5, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c04u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_252c08:
    // 0x252c08: 0x2c6850  .word       0x002C6850                   # mfhi        $t5 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c08u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c0c:
    // 0x252c0c: 0x2c6858  .word       0x002C6858                   # mult        $t5, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252c10:
    // 0x252c10: 0x2c6868  .word       0x002C6868                   # mfsa        $t5 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c10u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c14:
    // 0x252c14: 0x2c6878  .word       0x002C6878                   # dsll        $t5, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 1);
label_252c18:
    // 0x252c18: 0x2c6880  .word       0x002C6880                   # sll         $t5, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_252c1c:
    // 0x252c1c: 0x2c6890  .word       0x002C6890                   # mfhi        $t5 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c1cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c20:
    // 0x252c20: 0x2c68a0  .word       0x002C68A0                   # add         $t5, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c20u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c24:
    // 0x252c24: 0x2c68b0  tge         $at, $t4, 418
    ctx->pc = 0x252c24u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c28:
    // 0x252c28: 0x2c68b8  .word       0x002C68B8                   # dsll        $t5, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 2);
label_252c2c:
    // 0x252c2c: 0x2c68c0  .word       0x002C68C0                   # sll         $t5, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252c30:
    // 0x252c30: 0x2c68d0  .word       0x002C68D0                   # mfhi        $t5 # 002C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c30u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c34:
    // 0x252c34: 0x2c68e0  .word       0x002C68E0                   # add         $t5, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c34u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c38:
    // 0x252c38: 0x2c68e8  .word       0x002C68E8                   # mfsa        $t5 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c38u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c3c:
    // 0x252c3c: 0x2c68f0  tge         $at, $t4, 419
    ctx->pc = 0x252c3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c40:
    // 0x252c40: 0x2c6900  .word       0x002C6900                   # sll         $t5, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_252c44:
    // 0x252c44: 0x2c6910  .word       0x002C6910                   # mfhi        $t5 # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c48:
    // 0x252c48: 0x2c6920  .word       0x002C6920                   # add         $t5, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c4c:
    // 0x252c4c: 0x2c6930  tge         $at, $t4, 420
    ctx->pc = 0x252c4cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c50:
    // 0x252c50: 0x2c6940  .word       0x002C6940                   # sll         $t5, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c50u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_252c54:
    // 0x252c54: 0x2c6950  .word       0x002C6950                   # mfhi        $t5 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252c58:
    // 0x252c58: 0x2c6960  .word       0x002C6960                   # add         $t5, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c58u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c5c:
    // 0x252c5c: 0x2c6970  tge         $at, $t4, 421
    ctx->pc = 0x252c5cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c60:
    // 0x252c60: 0x2c6980  .word       0x002C6980                   # sll         $t5, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_252c64:
    // 0x252c64: 0x2c6988  .word       0x002C6988                   # jr          $at # 000C6980 <InstrIdType: CPU_SPECIAL>
label_252c68:
    if (ctx->pc == 0x252C68u) {
        ctx->pc = 0x252C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C64u;
        // 0x252c68: 0x2c6998  .word       0x002C6998                   # mult        $t5, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C6Cu;
        goto label_252c6c;
    }
    ctx->pc = 0x252C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C64u;
        // 0x252c68: 0x2c6998  .word       0x002C6998                   # mult        $t5, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C6Cu;
label_252c6c:
    // 0x252c6c: 0x2c69a8  .word       0x002C69A8                   # mfsa        $t5 # 002C0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252c6cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252c70:
    // 0x252c70: 0x2c69b8  .word       0x002C69B8                   # dsll        $t5, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 6);
label_252c74:
    // 0x252c74: 0x2c69c8  .word       0x002C69C8                   # jr          $at # 000C69C0 <InstrIdType: CPU_SPECIAL>
label_252c78:
    if (ctx->pc == 0x252C78u) {
        ctx->pc = 0x252C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C74u;
        // 0x252c78: 0x2c69d8  .word       0x002C69D8                   # mult        $t5, $at, $t4 # 000001C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C7Cu;
        goto label_252c7c;
    }
    ctx->pc = 0x252C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C74u;
        // 0x252c78: 0x2c69d8  .word       0x002C69D8                   # mult        $t5, $at, $t4 # 000001C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C7Cu;
label_252c7c:
    // 0x252c7c: 0x2c69e0  .word       0x002C69E0                   # add         $t5, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c7cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252c80:
    // 0x252c80: 0x2c69f0  tge         $at, $t4, 423
    ctx->pc = 0x252c80u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c84:
    // 0x252c84: 0x2c6a00  .word       0x002C6A00                   # sll         $t5, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252c88:
    // 0x252c88: 0x2c60c0  .word       0x002C60C0                   # sll         $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252c8c:
    // 0x252c8c: 0x2c6a08  .word       0x002C6A08                   # jr          $at # 000C6A00 <InstrIdType: CPU_SPECIAL>
label_252c90:
    if (ctx->pc == 0x252C90u) {
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C8Cu;
        // 0x252c90: 0x2c6a18  .word       0x002C6A18                   # mult        $t5, $at, $t4 # 00000200 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252C94u;
        goto label_252c94;
    }
    ctx->pc = 0x252C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C8Cu;
        // 0x252c90: 0x2c6a18  .word       0x002C6A18                   # mult        $t5, $at, $t4 # 00000200 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252C94u;
label_252c94:
    // 0x252c94: 0x2c6a30  tge         $at, $t4, 424
    ctx->pc = 0x252c94u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252c98:
    // 0x252c98: 0x2c6a40  .word       0x002C6A40                   # sll         $t5, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252c9c:
    // 0x252c9c: 0x2c6a50  .word       0x002C6A50                   # mfhi        $t5 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252c9cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252ca0:
    // 0x252ca0: 0x2c6a60  .word       0x002C6A60                   # add         $t5, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ca0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ca4:
    // 0x252ca4: 0x2c6a70  tge         $at, $t4, 425
    ctx->pc = 0x252ca4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ca8:
    // 0x252ca8: 0x2c6a80  .word       0x002C6A80                   # sll         $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252cac:
    // 0x252cac: 0x2c6a88  .word       0x002C6A88                   # jr          $at # 000C6A80 <InstrIdType: CPU_SPECIAL>
label_252cb0:
    if (ctx->pc == 0x252CB0u) {
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0x2c6a98  .word       0x002C6A98                   # mult        $t5, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CB4u;
        goto label_252cb4;
    }
    ctx->pc = 0x252CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0x2c6a98  .word       0x002C6A98                   # mult        $t5, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CB4u;
label_252cb4:
    // 0x252cb4: 0x2c6aa0  .word       0x002C6AA0                   # add         $t5, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252cb8:
    // 0x252cb8: 0x2c6aa8  .word       0x002C6AA8                   # mfsa        $t5 # 002C0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252cb8u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252cbc:
    // 0x252cbc: 0x2c6ab0  tge         $at, $t4, 426
    ctx->pc = 0x252cbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252cc0:
    // 0x252cc0: 0x2c6ab8  .word       0x002C6AB8                   # dsll        $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 10);
label_252cc4:
    // 0x252cc4: 0x2c6ac8  .word       0x002C6AC8                   # jr          $at # 000C6AC0 <InstrIdType: CPU_SPECIAL>
label_252cc8:
    if (ctx->pc == 0x252CC8u) {
        ctx->pc = 0x252CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CC4u;
        // 0x252cc8: 0x2c6ad0  .word       0x002C6AD0                   # mfhi        $t5 # 002C02C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CCCu;
        goto label_252ccc;
    }
    ctx->pc = 0x252CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CC4u;
        // 0x252cc8: 0x2c6ad0  .word       0x002C6AD0                   # mfhi        $t5 # 002C02C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CCCu;
label_252ccc:
    // 0x252ccc: 0x2c6ae0  .word       0x002C6AE0                   # add         $t5, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252cd0:
    // 0x252cd0: 0x2c6af0  tge         $at, $t4, 427
    ctx->pc = 0x252cd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252cd4:
    // 0x252cd4: 0x2c6af8  .word       0x002C6AF8                   # dsll        $t5, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 11);
label_252cd8:
    // 0x252cd8: 0x2c6b00  .word       0x002C6B00                   # sll         $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252cdc:
    // 0x252cdc: 0x2c6b10  .word       0x002C6B10                   # mfhi        $t5 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cdcu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252ce0:
    // 0x252ce0: 0x2c6b20  .word       0x002C6B20                   # add         $t5, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ce0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ce4:
    // 0x252ce4: 0x2c6b30  tge         $at, $t4, 428
    ctx->pc = 0x252ce4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ce8:
    // 0x252ce8: 0x2c6b38  .word       0x002C6B38                   # dsll        $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ce8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 12);
label_252cec:
    // 0x252cec: 0x2c6b48  .word       0x002C6B48                   # jr          $at # 000C6B40 <InstrIdType: CPU_SPECIAL>
label_252cf0:
    if (ctx->pc == 0x252CF0u) {
        ctx->pc = 0x252CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CECu;
        // 0x252cf0: 0x2c6b58  .word       0x002C6B58                   # mult        $t5, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252CF4u;
        goto label_252cf4;
    }
    ctx->pc = 0x252CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CECu;
        // 0x252cf0: 0x2c6b58  .word       0x002C6B58                   # mult        $t5, $at, $t4 # 00000340 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252CECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252CF4u;
label_252cf4:
    // 0x252cf4: 0x2c6b68  .word       0x002C6B68                   # mfsa        $t5 # 002C0340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252cf4u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252cf8:
    // 0x252cf8: 0x2c6b78  .word       0x002C6B78                   # dsll        $t5, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 13);
label_252cfc:
    // 0x252cfc: 0x2c6a80  .word       0x002C6A80                   # sll         $t5, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252cfcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252d00:
    // 0x252d00: 0x2c6b80  .word       0x002C6B80                   # sll         $t5, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252d04:
    // 0x252d04: 0x2c6b30  tge         $at, $t4, 428
    ctx->pc = 0x252d04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252d08:
    // 0x252d08: 0x2c6b88  .word       0x002C6B88                   # jr          $at # 000C6B80 <InstrIdType: CPU_SPECIAL>
label_252d0c:
    if (ctx->pc == 0x252D0Cu) {
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x2c6b98  .word       0x002C6B98                   # mult        $t5, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D10u;
        goto label_252d10;
    }
    ctx->pc = 0x252D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D08u;
        // 0x252d0c: 0x2c6b98  .word       0x002C6B98                   # mult        $t5, $at, $t4 # 00000380 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252D10u;
label_252d10:
    // 0x252d10: 0x2c6ba8  .word       0x002C6BA8                   # mfsa        $t5 # 002C0380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d10u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252d14:
    // 0x252d14: 0x2c6bb8  .word       0x002C6BB8                   # dsll        $t5, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 14);
label_252d18:
    // 0x252d18: 0x2c6bc0  .word       0x002C6BC0                   # sll         $t5, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252d1c:
    // 0x252d1c: 0x2c6bc8  .word       0x002C6BC8                   # jr          $at # 000C6BC0 <InstrIdType: CPU_SPECIAL>
label_252d20:
    if (ctx->pc == 0x252D20u) {
        ctx->pc = 0x252D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D1Cu;
        // 0x252d20: 0x2c6b30  tge         $at, $t4, 428 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D24u;
        goto label_252d24;
    }
    ctx->pc = 0x252D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D1Cu;
        // 0x252d20: 0x2c6b30  tge         $at, $t4, 428 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252D24u;
label_252d24:
    // 0x252d24: 0x2c6b38  .word       0x002C6B38                   # dsll        $t5, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 12);
label_252d28:
    // 0x252d28: 0x2c6bd8  .word       0x002C6BD8                   # mult        $t5, $at, $t4 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252d2c:
    // 0x252d2c: 0x2c6bd8  .word       0x002C6BD8                   # mult        $t5, $at, $t4 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252d30:
    // 0x252d30: 0x2b1539  .word       0x002B1539                   # INVALID     $at, $t3, 0x1539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x252D30 raw=0x002B1539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d34:
    // 0x252d34: 0x2b154a  .word       0x002B154A                   # movz        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d34u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 1));
label_252d38:
    // 0x252d38: 0x2b155b  .word       0x002B155B                   # divu        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d38u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
label_252d3c:
    // 0x252d3c: 0x2b156c  .word       0x002B156C                   # dadd        $v0, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_252d40:
    // 0x252d40: 0x2b157d  .word       0x002B157D                   # INVALID     $at, $t3, 0x157D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x252D40 raw=0x002B157D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d44:
    // 0x252d44: 0x2b158e  .word       0x002B158E                   # INVALID     $at, $t3, 0x158E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x252D44 raw=0x002B158E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d48:
    // 0x252d48: 0x2b159f  .word       0x002B159F                   # ddivu       $v0, $at, $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x252D48 raw=0x002B159F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d4c:
    // 0x252d4c: 0x2b15b0  tge         $at, $t3, 86
    ctx->pc = 0x252d4cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_252d50:
    // 0x252d50: 0x2b15e9  .word       0x002B15E9                   # mtsa        $at # 000B15C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252d50u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_252d54:
    // 0x252d54: 0x2b15fa  .word       0x002B15FA                   # dsrl        $v0, $t3, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 23);
label_252d58:
    // 0x252d58: 0x2b160b  .word       0x002B160B                   # movn        $v0, $at, $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d58u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 1));
label_252d5c:
    // 0x252d5c: 0x2b161c  .word       0x002B161C                   # dmult       $at, $t3 # 00001600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x252D5C raw=0x002B161C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d60:
    // 0x252d60: 0x2b162d  .word       0x002B162D                   # daddu       $v0, $at, $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 11));
label_252d64:
    // 0x252d64: 0x2b163e  .word       0x002B163E                   # dsrl32      $v0, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> (32 + 24));
label_252d68:
    // 0x252d68: 0x2b164f  .word       0x002B164F                   # sync.p # 002B1000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_252d6c:
    // 0x252d6c: 0x2b1660  .word       0x002B1660                   # add         $v0, $at, $t3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_252d70:
    // 0x252d70: 0x2b1699  .word       0x002B1699                   # multu       $at, $t3 # 00001680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_252d74:
    // 0x252d74: 0x2b16aa  .word       0x002B16AA                   # slt         $v0, $at, $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_252d78:
    // 0x252d78: 0x2b16bb  .word       0x002B16BB                   # dsra        $v0, $t3, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 11) >> 26);
label_252d7c:
    // 0x252d7c: 0x2b16cc  .word       0x002B16CC                   # syscall     91 # 002B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d7cu;
    ctx->pc = 0x252D80u;
runtime->handleSyscall(rdram, ctx, 0xAC5Bu);
label_252d80:
    // 0x252d80: 0x2b16dd  .word       0x002B16DD                   # dmultu      $at, $t3 # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x252D80 raw=0x002B16DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252d84:
    // 0x252d84: 0x2b16ee  .word       0x002B16EE                   # dsub        $v0, $at, $t3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_252d88:
    // 0x252d88: 0x2b16ff  .word       0x002B16FF                   # dsra32      $v0, $t3, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 11) >> (32 + 27));
label_252d8c:
    // 0x252d8c: 0x2b1710  .word       0x002B1710                   # mfhi        $v0 # 002B0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_252d90:
    // 0x252d90: 0x2b1749  .word       0x002B1749                   # jalr        $v0, $at # 000B0740 <InstrIdType: CPU_SPECIAL>
label_252d94:
    if (ctx->pc == 0x252D94u) {
        ctx->pc = 0x252D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D90u;
        // 0x252d94: 0x2b175a  .word       0x002B175A                   # div         $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 1);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252D98u;
        goto label_252d98;
    }
    ctx->pc = 0x252D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 2, 0x252D98u);
        ctx->pc = 0x252D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D90u;
        // 0x252d94: 0x2b175a  .word       0x002B175A                   # div         $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 1);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D90u, 0x252D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252D98u;
label_252d98:
    // 0x252d98: 0x2b176b  .word       0x002B176B                   # sltu        $v0, $at, $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_252d9c:
    // 0x252d9c: 0x2b177c  .word       0x002B177C                   # dsll32      $v0, $t3, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 29));
label_252da0:
    // 0x252da0: 0x2b178d  break       43, 94
    ctx->pc = 0x252da0u;
    runtime->handleBreak(rdram, ctx);
label_252da4:
    // 0x252da4: 0x2b179e  .word       0x002B179E                   # ddiv        $v0, $at, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252da4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x252DA4 raw=0x002B179E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252da8:
    // 0x252da8: 0x2b17af  .word       0x002B17AF                   # dsubu       $v0, $at, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) - GPR_U64(ctx, 11));
label_252dac:
    // 0x252dac: 0x2b17c0  .word       0x002B17C0                   # sll         $v0, $t3, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 31));
label_252db0:
    // 0x252db0: 0x2c6be8  .word       0x002C6BE8                   # mfsa        $t5 # 002C03C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252db0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252db4:
    // 0x252db4: 0x2c6bf8  .word       0x002C6BF8                   # dsll        $t5, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252db4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 15);
label_252db8:
    // 0x252db8: 0x2c6c08  .word       0x002C6C08                   # jr          $at # 000C6C00 <InstrIdType: CPU_SPECIAL>
label_252dbc:
    if (ctx->pc == 0x252DBCu) {
        ctx->pc = 0x252DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB8u;
        // 0x252dbc: 0x2c6c18  .word       0x002C6C18                   # mult        $t5, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DC0u;
        goto label_252dc0;
    }
    ctx->pc = 0x252DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB8u;
        // 0x252dbc: 0x2c6c18  .word       0x002C6C18                   # mult        $t5, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0x2c6c28  .word       0x002C6C28                   # mfsa        $t5 # 002C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252dc0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252dc4:
    // 0x252dc4: 0x2c5d40  .word       0x002C5D40                   # sll         $t3, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252dc8:
    // 0x252dc8: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
label_252dcc:
    // 0x252dcc: 0x2c6c50  .word       0x002C6C50                   # mfhi        $t5 # 002C0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dccu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252dd0:
    // 0x252dd0: 0x2c6c70  tge         $at, $t4, 433
    ctx->pc = 0x252dd0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252dd4:
    // 0x252dd4: 0x2c6c90  .word       0x002C6C90                   # mfhi        $t5 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dd4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252dd8:
    // 0x252dd8: 0x2c6ca0  .word       0x002C6CA0                   # add         $t5, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252ddc:
    // 0x252ddc: 0x2c6cc0  .word       0x002C6CC0                   # sll         $t5, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252de0:
    // 0x252de0: 0x2c6ce0  .word       0x002C6CE0                   # add         $t5, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252de4:
    // 0x252de4: 0x2c6d00  .word       0x002C6D00                   # sll         $t5, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252de8:
    // 0x252de8: 0x2c6d20  .word       0x002C6D20                   # add         $t5, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252de8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252dec:
    // 0x252dec: 0x2c6d40  .word       0x002C6D40                   # sll         $t5, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252decu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_252df0:
    // 0x252df0: 0x2c6d60  .word       0x002C6D60                   # add         $t5, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252df0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252df4:
    // 0x252df4: 0x2c6d80  .word       0x002C6D80                   # sll         $t5, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252df4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_252df8:
    // 0x252df8: 0x2c6d98  .word       0x002C6D98                   # mult        $t5, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252dfc:
    // 0x252dfc: 0x2c6da0  .word       0x002C6DA0                   # add         $t5, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252dfcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e00:
    // 0x252e00: 0x2c6da8  .word       0x002C6DA8                   # mfsa        $t5 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e00u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252e04:
    // 0x252e04: 0x2c6db0  tge         $at, $t4, 438
    ctx->pc = 0x252e04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252e08:
    // 0x252e08: 0x2c6dc8  .word       0x002C6DC8                   # jr          $at # 000C6DC0 <InstrIdType: CPU_SPECIAL>
label_252e0c:
    if (ctx->pc == 0x252E0Cu) {
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E10u;
        goto label_252e10;
    }
    ctx->pc = 0x252E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252E10u;
label_252e10:
    // 0x252e10: 0x2c6c38  .word       0x002C6C38                   # dsll        $t5, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
label_252e14:
    // 0x252e14: 0x0  nop
    ctx->pc = 0x252e14u;
    // NOP
label_252e18:
    // 0x252e18: 0x0  nop
    ctx->pc = 0x252e18u;
    // NOP
label_252e1c:
    // 0x252e1c: 0x0  nop
    ctx->pc = 0x252e1cu;
    // NOP
label_252e20:
    // 0x252e20: 0x2c6dd8  .word       0x002C6DD8                   # mult        $t5, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_252e24:
    // 0x252e24: 0x2c6de8  .word       0x002C6DE8                   # mfsa        $t5 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e24u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_252e28:
    // 0x252e28: 0x2c6df8  .word       0x002C6DF8                   # dsll        $t5, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 23);
label_252e2c:
    // 0x252e2c: 0x2c6e10  .word       0x002C6E10                   # mfhi        $t5 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e2cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_252e30:
    // 0x252e30: 0x2c6e20  .word       0x002C6E20                   # add         $t5, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e30u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e34:
    // 0x252e34: 0x2c6e40  .word       0x002C6E40                   # sll         $t5, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252e38:
    // 0x252e38: 0x2c6e60  .word       0x002C6E60                   # add         $t5, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e38u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e3c:
    // 0x252e3c: 0x2c6e80  .word       0x002C6E80                   # sll         $t5, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252e40:
    // 0x252e40: 0x2c6ea0  .word       0x002C6EA0                   # add         $t5, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e40u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e44:
    // 0x252e44: 0x2c6ec0  .word       0x002C6EC0                   # sll         $t5, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252e48:
    // 0x252e48: 0x2c6ee0  .word       0x002C6EE0                   # add         $t5, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e48u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e4c:
    // 0x252e4c: 0x2c6f00  .word       0x002C6F00                   # sll         $t5, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_252e50:
    // 0x252e50: 0x2c6f20  .word       0x002C6F20                   # add         $t5, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e54:
    // 0x252e54: 0x2c6f40  .word       0x002C6F40                   # sll         $t5, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_252e58:
    // 0x252e58: 0x2c6f60  .word       0x002C6F60                   # add         $t5, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e58u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e5c:
    // 0x252e5c: 0x2c6f80  .word       0x002C6F80                   # sll         $t5, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252e60:
    // 0x252e60: 0x2c6fa0  .word       0x002C6FA0                   # add         $t5, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e64:
    // 0x252e64: 0x2c6fc0  .word       0x002C6FC0                   # sll         $t5, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252e68:
    // 0x252e68: 0x2c6fe0  .word       0x002C6FE0                   # add         $t5, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_252e6c:
    // 0x252e6c: 0x2c7000  .word       0x002C7000                   # sll         $t6, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_252e70:
    // 0x252e70: 0x2c7020  add         $t6, $at, $t4
    ctx->pc = 0x252e70u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e74:
    // 0x252e74: 0x2c7038  .word       0x002C7038                   # dsll        $t6, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 0);
label_252e78:
    // 0x252e78: 0x2c7048  .word       0x002C7048                   # jr          $at # 000C7040 <InstrIdType: CPU_SPECIAL>
label_252e7c:
    if (ctx->pc == 0x252E7Cu) {
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E78u;
        // 0x252e7c: 0x2c7058  .word       0x002C7058                   # mult        $t6, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E80u;
        goto label_252e80;
    }
    ctx->pc = 0x252E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E78u;
        // 0x252e7c: 0x2c7058  .word       0x002C7058                   # mult        $t6, $at, $t4 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252E80u;
label_252e80:
    // 0x252e80: 0x2c7068  .word       0x002C7068                   # mfsa        $t6 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252e80u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252e84:
    // 0x252e84: 0x2c7080  .word       0x002C7080                   # sll         $t6, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_252e88:
    // 0x252e88: 0x2c70a0  .word       0x002C70A0                   # add         $t6, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e88u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e8c:
    // 0x252e8c: 0x2c70c0  .word       0x002C70C0                   # sll         $t6, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_252e90:
    // 0x252e90: 0x2c70e0  .word       0x002C70E0                   # add         $t6, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e90u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e94:
    // 0x252e94: 0x2c7100  .word       0x002C7100                   # sll         $t6, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_252e98:
    // 0x252e98: 0x2c7120  .word       0x002C7120                   # add         $t6, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252e9c:
    // 0x252e9c: 0x2c7140  .word       0x002C7140                   # sll         $t6, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_252ea0:
    // 0x252ea0: 0x2c7160  .word       0x002C7160                   # add         $t6, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ea4:
    // 0x252ea4: 0x2c7180  .word       0x002C7180                   # sll         $t6, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_252ea8:
    // 0x252ea8: 0x2c71a0  .word       0x002C71A0                   # add         $t6, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252eac:
    // 0x252eac: 0x2c71c0  .word       0x002C71C0                   # sll         $t6, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_252eb0:
    // 0x252eb0: 0x2c71e0  .word       0x002C71E0                   # add         $t6, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252eb4:
    // 0x252eb4: 0x2c7200  .word       0x002C7200                   # sll         $t6, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252eb8:
    // 0x252eb8: 0x2c7220  .word       0x002C7220                   # add         $t6, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ebc:
    // 0x252ebc: 0x2c7240  .word       0x002C7240                   # sll         $t6, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252ec0:
    // 0x252ec0: 0x2c7260  .word       0x002C7260                   # add         $t6, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ec4:
    // 0x252ec4: 0x2c7280  .word       0x002C7280                   # sll         $t6, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252ec8:
    // 0x252ec8: 0x2c72a0  .word       0x002C72A0                   # add         $t6, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ec8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ecc:
    // 0x252ecc: 0x2c72c0  .word       0x002C72C0                   # sll         $t6, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_252ed0:
    // 0x252ed0: 0x2c72e0  .word       0x002C72E0                   # add         $t6, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ed0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ed4:
    // 0x252ed4: 0x2c72f8  .word       0x002C72F8                   # dsll        $t6, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ed4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 11);
label_252ed8:
    // 0x252ed8: 0x2c7308  .word       0x002C7308                   # jr          $at # 000C7300 <InstrIdType: CPU_SPECIAL>
label_252edc:
    if (ctx->pc == 0x252EDCu) {
        ctx->pc = 0x252EE0u;
        goto label_252ee0;
    }
    ctx->pc = 0x252ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252EE0u;
label_252ee0:
    // 0x252ee0: 0x2c7310  .word       0x002C7310                   # mfhi        $t6 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ee0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252ee4:
    // 0x252ee4: 0x2c7320  .word       0x002C7320                   # add         $t6, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ee8:
    // 0x252ee8: 0x2c7330  tge         $at, $t4, 460
    ctx->pc = 0x252ee8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252eec:
    // 0x252eec: 0x2c7340  .word       0x002C7340                   # sll         $t6, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252eecu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_252ef0:
    // 0x252ef0: 0x2c7350  .word       0x002C7350                   # mfhi        $t6 # 002C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ef0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252ef4:
    // 0x252ef4: 0x2c7360  .word       0x002C7360                   # add         $t6, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252ef8:
    // 0x252ef8: 0x2c7370  tge         $at, $t4, 461
    ctx->pc = 0x252ef8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252efc:
    // 0x252efc: 0x2c7380  .word       0x002C7380                   # sll         $t6, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252efcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252f00:
    // 0x252f00: 0x2c7390  .word       0x002C7390                   # mfhi        $t6 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f00u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f04:
    // 0x252f04: 0x2c73a0  .word       0x002C73A0                   # add         $t6, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f04u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f08:
    // 0x252f08: 0x2c73b0  tge         $at, $t4, 462
    ctx->pc = 0x252f08u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f0c:
    // 0x252f0c: 0x2c73c0  .word       0x002C73C0                   # sll         $t6, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252f10:
    // 0x252f10: 0x2c73d0  .word       0x002C73D0                   # mfhi        $t6 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f10u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f14:
    // 0x252f14: 0x2c73e0  .word       0x002C73E0                   # add         $t6, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f14u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f18:
    // 0x252f18: 0x2c73f0  tge         $at, $t4, 463
    ctx->pc = 0x252f18u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f1c:
    // 0x252f1c: 0x2c7400  .word       0x002C7400                   # sll         $t6, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_252f20:
    // 0x252f20: 0x2c7410  .word       0x002C7410                   # mfhi        $t6 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f20u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f24:
    // 0x252f24: 0x2c7420  .word       0x002C7420                   # add         $t6, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f24u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f28:
    // 0x252f28: 0x2c7440  .word       0x002C7440                   # sll         $t6, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_252f2c:
    // 0x252f2c: 0x2c7458  .word       0x002C7458                   # mult        $t6, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f30:
    // 0x252f30: 0x2c7468  .word       0x002C7468                   # mfsa        $t6 # 002C0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f30u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252f34:
    // 0x252f34: 0x2c7478  .word       0x002C7478                   # dsll        $t6, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 17);
label_252f38:
    // 0x252f38: 0x2c7488  .word       0x002C7488                   # jr          $at # 000C7480 <InstrIdType: CPU_SPECIAL>
label_252f3c:
    if (ctx->pc == 0x252F3Cu) {
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x2c7490  .word       0x002C7490                   # mfhi        $t6 # 002C0480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F40u;
        goto label_252f40;
    }
    ctx->pc = 0x252F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F38u;
        // 0x252f3c: 0x2c7490  .word       0x002C7490                   # mfhi        $t6 # 002C0480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F40u;
label_252f40:
    // 0x252f40: 0x2c74a0  .word       0x002C74A0                   # add         $t6, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f40u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f44:
    // 0x252f44: 0x2c74b0  tge         $at, $t4, 466
    ctx->pc = 0x252f44u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f48:
    // 0x252f48: 0x2c74c0  .word       0x002C74C0                   # sll         $t6, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f48u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252f4c:
    // 0x252f4c: 0x2c74d0  .word       0x002C74D0                   # mfhi        $t6 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f4cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f50:
    // 0x252f50: 0x2c74e0  .word       0x002C74E0                   # add         $t6, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f50u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f54:
    // 0x252f54: 0x2c74f0  tge         $at, $t4, 467
    ctx->pc = 0x252f54u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f58:
    // 0x252f58: 0x2c7510  .word       0x002C7510                   # mfhi        $t6 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f58u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252f5c:
    // 0x252f5c: 0x2c7530  tge         $at, $t4, 468
    ctx->pc = 0x252f5cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f60:
    // 0x252f60: 0x2c7548  .word       0x002C7548                   # jr          $at # 000C7540 <InstrIdType: CPU_SPECIAL>
label_252f64:
    if (ctx->pc == 0x252F64u) {
        ctx->pc = 0x252F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F60u;
        // 0x252f64: 0x2c7560  .word       0x002C7560                   # add         $t6, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F68u;
        goto label_252f68;
    }
    ctx->pc = 0x252F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F60u;
        // 0x252f64: 0x2c7560  .word       0x002C7560                   # add         $t6, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F68u;
label_252f68:
    // 0x252f68: 0x2c7578  .word       0x002C7578                   # dsll        $t6, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 21);
label_252f6c:
    // 0x252f6c: 0x2c7588  .word       0x002C7588                   # jr          $at # 000C7580 <InstrIdType: CPU_SPECIAL>
label_252f70:
    if (ctx->pc == 0x252F70u) {
        ctx->pc = 0x252F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F6Cu;
        // 0x252f70: 0x2c75a0  .word       0x002C75A0                   # add         $t6, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F74u;
        goto label_252f74;
    }
    ctx->pc = 0x252F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F6Cu;
        // 0x252f70: 0x2c75a0  .word       0x002C75A0                   # add         $t6, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F74u;
label_252f74:
    // 0x252f74: 0x2c75b0  tge         $at, $t4, 470
    ctx->pc = 0x252f74u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f78:
    // 0x252f78: 0x2c75c0  .word       0x002C75C0                   # sll         $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f78u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_252f7c:
    // 0x252f7c: 0x2c75d8  .word       0x002C75D8                   # mult        $t6, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f80:
    // 0x252f80: 0x2c75e8  .word       0x002C75E8                   # mfsa        $t6 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f80u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252f84:
    // 0x252f84: 0x2c75f0  tge         $at, $t4, 471
    ctx->pc = 0x252f84u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252f88:
    // 0x252f88: 0x2c75f8  .word       0x002C75F8                   # dsll        $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 23);
label_252f8c:
    // 0x252f8c: 0x2c7608  .word       0x002C7608                   # jr          $at # 000C7600 <InstrIdType: CPU_SPECIAL>
label_252f90:
    if (ctx->pc == 0x252F90u) {
        ctx->pc = 0x252F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F8Cu;
        // 0x252f90: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252F94u;
        goto label_252f94;
    }
    ctx->pc = 0x252F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252F8Cu;
        // 0x252f90: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252F8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252F94u;
label_252f94:
    // 0x252f94: 0x2c7618  .word       0x002C7618                   # mult        $t6, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_252f98:
    // 0x252f98: 0x2c7620  .word       0x002C7620                   # add         $t6, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252f98u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252f9c:
    // 0x252f9c: 0x2c7630  tge         $at, $t4, 472
    ctx->pc = 0x252f9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fa0:
    // 0x252fa0: 0x2c7640  .word       0x002C7640                   # sll         $t6, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252fa4:
    // 0x252fa4: 0x2c7650  .word       0x002C7650                   # mfhi        $t6 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fa8:
    // 0x252fa8: 0x2c7660  .word       0x002C7660                   # add         $t6, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fac:
    // 0x252fac: 0x2c7668  .word       0x002C7668                   # mfsa        $t6 # 002C0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252facu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_252fb0:
    // 0x252fb0: 0x2c7670  tge         $at, $t4, 473
    ctx->pc = 0x252fb0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fb4:
    // 0x252fb4: 0x2c7680  .word       0x002C7680                   # sll         $t6, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_252fb8:
    // 0x252fb8: 0x2c76a0  .word       0x002C76A0                   # add         $t6, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fb8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fbc:
    // 0x252fbc: 0x2c76c0  .word       0x002C76C0                   # sll         $t6, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_252fc0:
    // 0x252fc0: 0x2c76e0  .word       0x002C76E0                   # add         $t6, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fc4:
    // 0x252fc4: 0x2c7720  .word       0x002C7720                   # add         $t6, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_252fc8:
    // 0x252fc8: 0x2c7740  .word       0x002C7740                   # sll         $t6, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_252fcc:
    // 0x252fcc: 0x2c7770  tge         $at, $t4, 477
    ctx->pc = 0x252fccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fd0:
    // 0x252fd0: 0x2c7790  .word       0x002C7790                   # mfhi        $t6 # 002C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fd0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fd4:
    // 0x252fd4: 0x2c77b0  tge         $at, $t4, 478
    ctx->pc = 0x252fd4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252fd8:
    // 0x252fd8: 0x2c77d0  .word       0x002C77D0                   # mfhi        $t6 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fd8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_252fdc:
    // 0x252fdc: 0x2c7800  .word       0x002C7800                   # sll         $t7, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_252fe0:
    // 0x252fe0: 0x2c7820  add         $t7, $at, $t4
    ctx->pc = 0x252fe0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252fe4:
    // 0x252fe4: 0x2c7848  .word       0x002C7848                   # jr          $at # 000C7840 <InstrIdType: CPU_SPECIAL>
label_252fe8:
    if (ctx->pc == 0x252FE8u) {
        ctx->pc = 0x252FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE4u;
        // 0x252fe8: 0x2c7850  .word       0x002C7850                   # mfhi        $t7 # 002C0040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252FECu;
        goto label_252fec;
    }
    ctx->pc = 0x252FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE4u;
        // 0x252fe8: 0x2c7850  .word       0x002C7850                   # mfhi        $t7 # 002C0040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252FE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252FECu;
label_252fec:
    // 0x252fec: 0x2c7868  .word       0x002C7868                   # mfsa        $t7 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252fecu;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_252ff0:
    // 0x252ff0: 0x2c7870  tge         $at, $t4, 481
    ctx->pc = 0x252ff0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252ff4:
    // 0x252ff4: 0x2c78a0  .word       0x002C78A0                   # add         $t7, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252ff8:
    // 0x252ff8: 0x2c78e0  .word       0x002C78E0                   # add         $t7, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ff8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_252ffc:
    // 0x252ffc: 0x2c7910  .word       0x002C7910                   # mfhi        $t7 # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252ffcu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253000:
    // 0x253000: 0x2c7950  .word       0x002C7950                   # mfhi        $t7 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253000u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253004:
    // 0x253004: 0x2c7970  tge         $at, $t4, 485
    ctx->pc = 0x253004u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253008:
    // 0x253008: 0x2c79a0  .word       0x002C79A0                   # add         $t7, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253008u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25300c:
    // 0x25300c: 0x2c79d0  .word       0x002C79D0                   # mfhi        $t7 # 002C01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25300cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253010:
    // 0x253010: 0x2c7a10  .word       0x002C7A10                   # mfhi        $t7 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253010u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253014:
    // 0x253014: 0x2c7a50  .word       0x002C7A50                   # mfhi        $t7 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253018:
    // 0x253018: 0x2c7a80  .word       0x002C7A80                   # sll         $t7, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_25301c:
    // 0x25301c: 0x2c7ac0  .word       0x002C7AC0                   # sll         $t7, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25301cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_253020:
    // 0x253020: 0x2c7af8  .word       0x002C7AF8                   # dsll        $t7, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253020u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 11);
label_253024:
    // 0x253024: 0x2c7b10  .word       0x002C7B10                   # mfhi        $t7 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253024u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253028:
    // 0x253028: 0x2c7b30  tge         $at, $t4, 492
    ctx->pc = 0x253028u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25302c:
    // 0x25302c: 0x2c7b40  .word       0x002C7B40                   # sll         $t7, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_253030:
    // 0x253030: 0x2c7b60  .word       0x002C7B60                   # add         $t7, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253030u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253034:
    // 0x253034: 0x2c7b78  .word       0x002C7B78                   # dsll        $t7, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253034u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 13);
label_253038:
    // 0x253038: 0x2c7b90  .word       0x002C7B90                   # mfhi        $t7 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253038u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25303c:
    // 0x25303c: 0x2c7ba0  .word       0x002C7BA0                   # add         $t7, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25303cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253040:
    // 0x253040: 0x2c7bb0  tge         $at, $t4, 494
    ctx->pc = 0x253040u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253044:
    // 0x253044: 0x2c7bc0  .word       0x002C7BC0                   # sll         $t7, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253044u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_253048:
    // 0x253048: 0x0  nop
    ctx->pc = 0x253048u;
    // NOP
label_25304c:
    // 0x25304c: 0x0  nop
    ctx->pc = 0x25304cu;
    // NOP
label_253050:
    // 0x253050: 0x2c7608  .word       0x002C7608                   # jr          $at # 000C7600 <InstrIdType: CPU_SPECIAL>
label_253054:
    if (ctx->pc == 0x253054u) {
        ctx->pc = 0x253054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253050u;
        // 0x253054: 0x2c75f8  .word       0x002C75F8                   # dsll        $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253058u;
        goto label_253058;
    }
    ctx->pc = 0x253050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253050u;
        // 0x253054: 0x2c75f8  .word       0x002C75F8                   # dsll        $t6, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 23);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253058u;
label_253058:
    // 0x253058: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253058u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25305c:
    // 0x25305c: 0x2c7618  .word       0x002C7618                   # mult        $t6, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25305cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_253060:
    // 0x253060: 0x2c7620  .word       0x002C7620                   # add         $t6, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253060u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_253064:
    // 0x253064: 0x2c7630  tge         $at, $t4, 472
    ctx->pc = 0x253064u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253068:
    // 0x253068: 0x2c75e8  .word       0x002C75E8                   # mfsa        $t6 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253068u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_25306c:
    // 0x25306c: 0x2c7668  .word       0x002C7668                   # mfsa        $t6 # 002C0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25306cu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_253070:
    // 0x253070: 0x2c7be0  .word       0x002C7BE0                   # add         $t7, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253070u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253074:
    // 0x253074: 0x2c7bf0  tge         $at, $t4, 495
    ctx->pc = 0x253074u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253078:
    // 0x253078: 0x0  nop
    ctx->pc = 0x253078u;
    // NOP
label_25307c:
    // 0x25307c: 0x0  nop
    ctx->pc = 0x25307cu;
    // NOP
label_253080:
    // 0x253080: 0x2c7c18  .word       0x002C7C18                   # mult        $t7, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_253084:
    // 0x253084: 0x2c7c28  .word       0x002C7C28                   # mfsa        $t7 # 002C0400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253084u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_253088:
    // 0x253088: 0x2c7c38  .word       0x002C7C38                   # dsll        $t7, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253088u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 16);
label_25308c:
    // 0x25308c: 0x2c7c48  .word       0x002C7C48                   # jr          $at # 000C7C40 <InstrIdType: CPU_SPECIAL>
label_253090:
    if (ctx->pc == 0x253090u) {
        ctx->pc = 0x253090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25308Cu;
        // 0x253090: 0x2c7c58  .word       0x002C7C58                   # mult        $t7, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253094u;
        goto label_253094;
    }
    ctx->pc = 0x25308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25308Cu;
        // 0x253090: 0x2c7c58  .word       0x002C7C58                   # mult        $t7, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25308Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253094u;
label_253094:
    // 0x253094: 0x2c7c68  .word       0x002C7C68                   # mfsa        $t7 # 002C0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253094u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_253098:
    // 0x253098: 0x2c7c78  .word       0x002C7C78                   # dsll        $t7, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253098u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 17);
label_25309c:
    // 0x25309c: 0x2c7c80  .word       0x002C7C80                   # sll         $t7, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25309cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_2530a0:
    // 0x2530a0: 0x2c7c90  .word       0x002C7C90                   # mfhi        $t7 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530a0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2530a4:
    // 0x2530a4: 0x2c7c98  .word       0x002C7C98                   # mult        $t7, $at, $t4 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2530a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2530a8:
    // 0x2530a8: 0x2c7ca8  .word       0x002C7CA8                   # mfsa        $t7 # 002C0480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2530a8u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_2530ac:
    // 0x2530ac: 0x2c7cb8  .word       0x002C7CB8                   # dsll        $t7, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 18);
label_2530b0:
    // 0x2530b0: 0x2c7cc8  .word       0x002C7CC8                   # jr          $at # 000C7CC0 <InstrIdType: CPU_SPECIAL>
label_2530b4:
    if (ctx->pc == 0x2530B4u) {
        ctx->pc = 0x2530B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530B0u;
        // 0x2530b4: 0x2c7cd0  .word       0x002C7CD0                   # mfhi        $t7 # 002C04C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530B8u;
        goto label_2530b8;
    }
    ctx->pc = 0x2530B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2530B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530B0u;
        // 0x2530b4: 0x2c7cd0  .word       0x002C7CD0                   # mfhi        $t7 # 002C04C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2530B8u;
label_2530b8:
    // 0x2530b8: 0x2c7ce0  .word       0x002C7CE0                   # add         $t7, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2530bc:
    // 0x2530bc: 0x2c7cf0  tge         $at, $t4, 499
    ctx->pc = 0x2530bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2530c0:
    // 0x2530c0: 0x2c7d00  .word       0x002C7D00                   # sll         $t7, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2530c4:
    // 0x2530c4: 0x2c7d10  .word       0x002C7D10                   # mfhi        $t7 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2530c8:
    // 0x2530c8: 0x2c7d20  .word       0x002C7D20                   # add         $t7, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2530cc:
    // 0x2530cc: 0x2c7d28  .word       0x002C7D28                   # mfsa        $t7 # 002C0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2530ccu;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_2530d0:
    // 0x2530d0: 0x2c7d38  .word       0x002C7D38                   # dsll        $t7, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 20);
label_2530d4:
    // 0x2530d4: 0x2c7d40  .word       0x002C7D40                   # sll         $t7, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_2530d8:
    // 0x2530d8: 0x2c7d50  .word       0x002C7D50                   # mfhi        $t7 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530d8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2530dc:
    // 0x2530dc: 0x2c7d60  .word       0x002C7D60                   # add         $t7, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2530e0:
    // 0x2530e0: 0x2c7d78  .word       0x002C7D78                   # dsll        $t7, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 21);
label_2530e4:
    // 0x2530e4: 0x2c7d88  .word       0x002C7D88                   # jr          $at # 000C7D80 <InstrIdType: CPU_SPECIAL>
label_2530e8:
    if (ctx->pc == 0x2530E8u) {
        ctx->pc = 0x2530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E4u;
        // 0x2530e8: 0x2c7d90  .word       0x002C7D90                   # mfhi        $t7 # 002C0580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530ECu;
        goto label_2530ec;
    }
    ctx->pc = 0x2530E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2530E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E4u;
        // 0x2530e8: 0x2c7d90  .word       0x002C7D90                   # mfhi        $t7 # 002C0580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2530ECu;
label_2530ec:
    // 0x2530ec: 0x2c7da0  .word       0x002C7DA0                   # add         $t7, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2530f0:
    // 0x2530f0: 0x2c7db0  tge         $at, $t4, 502
    ctx->pc = 0x2530f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2530f4:
    // 0x2530f4: 0x2c7dc0  .word       0x002C7DC0                   # sll         $t7, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_2530f8:
    // 0x2530f8: 0x2c7dd0  .word       0x002C7DD0                   # mfhi        $t7 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530f8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2530fc:
    // 0x2530fc: 0x2c7de0  .word       0x002C7DE0                   # add         $t7, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2530fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253100:
    // 0x253100: 0x2c7df0  tge         $at, $t4, 503
    ctx->pc = 0x253100u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253104:
    // 0x253104: 0x2c7df8  .word       0x002C7DF8                   # dsll        $t7, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253104u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 23);
label_253108:
    // 0x253108: 0x2c7e08  .word       0x002C7E08                   # jr          $at # 000C7E00 <InstrIdType: CPU_SPECIAL>
label_25310c:
    if (ctx->pc == 0x25310Cu) {
        ctx->pc = 0x25310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253108u;
        // 0x25310c: 0x2c7e18  .word       0x002C7E18                   # mult        $t7, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253110u;
        goto label_253110;
    }
    ctx->pc = 0x253108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x25310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253108u;
        // 0x25310c: 0x2c7e18  .word       0x002C7E18                   # mult        $t7, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253110u;
label_253110:
    // 0x253110: 0x2c7e28  .word       0x002C7E28                   # mfsa        $t7 # 002C0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253110u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_253114:
    // 0x253114: 0x2c7e30  tge         $at, $t4, 504
    ctx->pc = 0x253114u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253118:
    // 0x253118: 0x2c7e40  .word       0x002C7E40                   # sll         $t7, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_25311c:
    // 0x25311c: 0x2c7e50  .word       0x002C7E50                   # mfhi        $t7 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25311cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253120:
    // 0x253120: 0x2c7e60  .word       0x002C7E60                   # add         $t7, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253120u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253124:
    // 0x253124: 0x2c7e70  tge         $at, $t4, 505
    ctx->pc = 0x253124u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253128:
    // 0x253128: 0x2c7e80  .word       0x002C7E80                   # sll         $t7, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253128u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_25312c:
    // 0x25312c: 0x2c7e90  .word       0x002C7E90                   # mfhi        $t7 # 002C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25312cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253130:
    // 0x253130: 0x2c7ea0  .word       0x002C7EA0                   # add         $t7, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253130u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253134:
    // 0x253134: 0x2c7eb0  tge         $at, $t4, 506
    ctx->pc = 0x253134u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253138:
    // 0x253138: 0x2c7ec0  .word       0x002C7EC0                   # sll         $t7, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253138u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_25313c:
    // 0x25313c: 0x2c7ec8  .word       0x002C7EC8                   # jr          $at # 000C7EC0 <InstrIdType: CPU_SPECIAL>
label_253140:
    if (ctx->pc == 0x253140u) {
        ctx->pc = 0x253140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25313Cu;
        // 0x253140: 0x2c7ed8  .word       0x002C7ED8                   # mult        $t7, $at, $t4 # 000006C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253144u;
        goto label_253144;
    }
    ctx->pc = 0x25313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25313Cu;
        // 0x253140: 0x2c7ed8  .word       0x002C7ED8                   # mult        $t7, $at, $t4 # 000006C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25313Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253144u;
label_253144:
    // 0x253144: 0x2c7ee8  .word       0x002C7EE8                   # mfsa        $t7 # 002C06C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253144u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_253148:
    // 0x253148: 0x2c7ef8  .word       0x002C7EF8                   # dsll        $t7, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253148u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 27);
label_25314c:
    // 0x25314c: 0x2c7f08  .word       0x002C7F08                   # jr          $at # 000C7F00 <InstrIdType: CPU_SPECIAL>
label_253150:
    if (ctx->pc == 0x253150u) {
        ctx->pc = 0x253150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25314Cu;
        // 0x253150: 0x2c7f18  .word       0x002C7F18                   # mult        $t7, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253154u;
        goto label_253154;
    }
    ctx->pc = 0x25314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25314Cu;
        // 0x253150: 0x2c7f18  .word       0x002C7F18                   # mult        $t7, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25314Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253154u;
label_253154:
    // 0x253154: 0x2c7f20  .word       0x002C7F20                   # add         $t7, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253154u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253158:
    // 0x253158: 0x2c7f30  tge         $at, $t4, 508
    ctx->pc = 0x253158u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25315c:
    // 0x25315c: 0x2c7f40  .word       0x002C7F40                   # sll         $t7, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25315cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_253160:
    // 0x253160: 0x2c7f48  .word       0x002C7F48                   # jr          $at # 000C7F40 <InstrIdType: CPU_SPECIAL>
label_253164:
    if (ctx->pc == 0x253164u) {
        ctx->pc = 0x253164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253160u;
        // 0x253164: 0x2c7f58  .word       0x002C7F58                   # mult        $t7, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253168u;
        goto label_253168;
    }
    ctx->pc = 0x253160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253160u;
        // 0x253164: 0x2c7f58  .word       0x002C7F58                   # mult        $t7, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253168u;
label_253168:
    // 0x253168: 0x2c7f68  .word       0x002C7F68                   # mfsa        $t7 # 002C0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253168u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25316c:
    // 0x25316c: 0x2c7f80  .word       0x002C7F80                   # sll         $t7, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25316cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_253170:
    // 0x253170: 0x2c7f90  .word       0x002C7F90                   # mfhi        $t7 # 002C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253170u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253174:
    // 0x253174: 0x2c7fa0  .word       0x002C7FA0                   # add         $t7, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253174u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253178:
    // 0x253178: 0x2c7fb0  tge         $at, $t4, 510
    ctx->pc = 0x253178u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25317c:
    // 0x25317c: 0x2c7fc0  .word       0x002C7FC0                   # sll         $t7, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25317cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_253180:
    // 0x253180: 0x2c7fd0  .word       0x002C7FD0                   # mfhi        $t7 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253180u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253184:
    // 0x253184: 0x2c7fe0  .word       0x002C7FE0                   # add         $t7, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253184u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253188:
    // 0x253188: 0x2c7ff0  tge         $at, $t4, 511
    ctx->pc = 0x253188u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25318c:
    // 0x25318c: 0x2c8000  .word       0x002C8000                   # sll         $s0, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25318cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_253190:
    // 0x253190: 0x2c8010  .word       0x002C8010                   # mfhi        $s0 # 002C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253190u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253194:
    // 0x253194: 0x2c8020  add         $s0, $at, $t4
    ctx->pc = 0x253194u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253198:
    // 0x253198: 0x2c8030  tge         $at, $t4, 512
    ctx->pc = 0x253198u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25319c:
    // 0x25319c: 0x2c8040  .word       0x002C8040                   # sll         $s0, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25319cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_2531a0:
    // 0x2531a0: 0x2c8050  .word       0x002C8050                   # mfhi        $s0 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531a0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2531a4:
    // 0x2531a4: 0x2c8060  .word       0x002C8060                   # add         $s0, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2531a8:
    // 0x2531a8: 0x2c8070  tge         $at, $t4, 513
    ctx->pc = 0x2531a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2531ac:
    // 0x2531ac: 0x2c8078  .word       0x002C8078                   # dsll        $s0, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 1);
label_2531b0:
    // 0x2531b0: 0x2c8088  .word       0x002C8088                   # jr          $at # 000C8080 <InstrIdType: CPU_SPECIAL>
label_2531b4:
    if (ctx->pc == 0x2531B4u) {
        ctx->pc = 0x2531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B0u;
        // 0x2531b4: 0x2c8098  .word       0x002C8098                   # mult        $s0, $at, $t4 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531B8u;
        goto label_2531b8;
    }
    ctx->pc = 0x2531B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B0u;
        // 0x2531b4: 0x2c8098  .word       0x002C8098                   # mult        $s0, $at, $t4 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531B8u;
label_2531b8:
    // 0x2531b8: 0x2c80a8  .word       0x002C80A8                   # mfsa        $s0 # 002C0080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531b8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531bc:
    // 0x2531bc: 0x2c80b8  .word       0x002C80B8                   # dsll        $s0, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 2);
label_2531c0:
    // 0x2531c0: 0x2c80c8  .word       0x002C80C8                   # jr          $at # 000C80C0 <InstrIdType: CPU_SPECIAL>
label_2531c4:
    if (ctx->pc == 0x2531C4u) {
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x2c80d8  .word       0x002C80D8                   # mult        $s0, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531C8u;
        goto label_2531c8;
    }
    ctx->pc = 0x2531C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x2c80d8  .word       0x002C80D8                   # mult        $s0, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x2c80e8  .word       0x002C80E8                   # mfsa        $s0 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531c8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531cc:
    // 0x2531cc: 0x2c80f8  .word       0x002C80F8                   # dsll        $s0, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 3);
label_2531d0:
    // 0x2531d0: 0x2c8108  .word       0x002C8108                   # jr          $at # 000C8100 <InstrIdType: CPU_SPECIAL>
label_2531d4:
    if (ctx->pc == 0x2531D4u) {
        ctx->pc = 0x2531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D0u;
        // 0x2531d4: 0x2c8118  .word       0x002C8118                   # mult        $s0, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531D8u;
        goto label_2531d8;
    }
    ctx->pc = 0x2531D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D0u;
        // 0x2531d4: 0x2c8118  .word       0x002C8118                   # mult        $s0, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531D8u;
label_2531d8:
    // 0x2531d8: 0x2c8120  .word       0x002C8120                   # add         $s0, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2531dc:
    // 0x2531dc: 0x2c8128  .word       0x002C8128                   # mfsa        $s0 # 002C0100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531dcu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531e0:
    // 0x2531e0: 0x2c8140  .word       0x002C8140                   # sll         $s0, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_2531e4:
    // 0x2531e4: 0x2c8150  .word       0x002C8150                   # mfhi        $s0 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    ctx->pc = 0x2531e8u;
    return;
}
