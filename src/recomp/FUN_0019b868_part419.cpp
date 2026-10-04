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


void FUN_0019b868_part419(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        case 0x267a10u: goto label_267a10;
        case 0x267a14u: goto label_267a14;
        case 0x267a18u: goto label_267a18;
        case 0x267a1cu: goto label_267a1c;
        case 0x267a20u: goto label_267a20;
        case 0x267a24u: goto label_267a24;
        case 0x267a28u: goto label_267a28;
        case 0x267a2cu: goto label_267a2c;
        case 0x267a30u: goto label_267a30;
        case 0x267a34u: goto label_267a34;
        case 0x267a38u: goto label_267a38;
        case 0x267a3cu: goto label_267a3c;
        case 0x267a40u: goto label_267a40;
        case 0x267a44u: goto label_267a44;
        case 0x267a48u: goto label_267a48;
        case 0x267a4cu: goto label_267a4c;
        case 0x267a50u: goto label_267a50;
        case 0x267a54u: goto label_267a54;
        case 0x267a58u: goto label_267a58;
        case 0x267a5cu: goto label_267a5c;
        case 0x267a60u: goto label_267a60;
        case 0x267a64u: goto label_267a64;
        case 0x267a68u: goto label_267a68;
        case 0x267a6cu: goto label_267a6c;
        case 0x267a70u: goto label_267a70;
        case 0x267a74u: goto label_267a74;
        case 0x267a78u: goto label_267a78;
        case 0x267a7cu: goto label_267a7c;
        case 0x267a80u: goto label_267a80;
        case 0x267a84u: goto label_267a84;
        case 0x267a88u: goto label_267a88;
        case 0x267a8cu: goto label_267a8c;
        case 0x267a90u: goto label_267a90;
        case 0x267a94u: goto label_267a94;
        case 0x267a98u: goto label_267a98;
        case 0x267a9cu: goto label_267a9c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267aa4u: goto label_267aa4;
        case 0x267aa8u: goto label_267aa8;
        case 0x267aacu: goto label_267aac;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ab4u: goto label_267ab4;
        case 0x267ab8u: goto label_267ab8;
        case 0x267abcu: goto label_267abc;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ac8u: goto label_267ac8;
        case 0x267accu: goto label_267acc;
        case 0x267ad0u: goto label_267ad0;
        case 0x267ad4u: goto label_267ad4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267adcu: goto label_267adc;
        case 0x267ae0u: goto label_267ae0;
        case 0x267ae4u: goto label_267ae4;
        case 0x267ae8u: goto label_267ae8;
        case 0x267aecu: goto label_267aec;
        case 0x267af0u: goto label_267af0;
        case 0x267af4u: goto label_267af4;
        case 0x267af8u: goto label_267af8;
        case 0x267afcu: goto label_267afc;
        case 0x267b00u: goto label_267b00;
        case 0x267b04u: goto label_267b04;
        case 0x267b08u: goto label_267b08;
        case 0x267b0cu: goto label_267b0c;
        case 0x267b10u: goto label_267b10;
        case 0x267b14u: goto label_267b14;
        case 0x267b18u: goto label_267b18;
        case 0x267b1cu: goto label_267b1c;
        case 0x267b20u: goto label_267b20;
        case 0x267b24u: goto label_267b24;
        case 0x267b28u: goto label_267b28;
        case 0x267b2cu: goto label_267b2c;
        case 0x267b30u: goto label_267b30;
        case 0x267b34u: goto label_267b34;
        case 0x267b38u: goto label_267b38;
        case 0x267b3cu: goto label_267b3c;
        case 0x267b40u: goto label_267b40;
        case 0x267b44u: goto label_267b44;
        case 0x267b48u: goto label_267b48;
        case 0x267b4cu: goto label_267b4c;
        case 0x267b50u: goto label_267b50;
        case 0x267b54u: goto label_267b54;
        case 0x267b58u: goto label_267b58;
        case 0x267b5cu: goto label_267b5c;
        case 0x267b60u: goto label_267b60;
        case 0x267b64u: goto label_267b64;
        case 0x267b68u: goto label_267b68;
        case 0x267b6cu: goto label_267b6c;
        case 0x267b70u: goto label_267b70;
        case 0x267b74u: goto label_267b74;
        case 0x267b78u: goto label_267b78;
        case 0x267b7cu: goto label_267b7c;
        case 0x267b80u: goto label_267b80;
        case 0x267b84u: goto label_267b84;
        case 0x267b88u: goto label_267b88;
        case 0x267b8cu: goto label_267b8c;
        case 0x267b90u: goto label_267b90;
        case 0x267b94u: goto label_267b94;
        case 0x267b98u: goto label_267b98;
        case 0x267b9cu: goto label_267b9c;
        case 0x267ba0u: goto label_267ba0;
        case 0x267ba4u: goto label_267ba4;
        case 0x267ba8u: goto label_267ba8;
        case 0x267bacu: goto label_267bac;
        case 0x267bb0u: goto label_267bb0;
        case 0x267bb4u: goto label_267bb4;
        case 0x267bb8u: goto label_267bb8;
        case 0x267bbcu: goto label_267bbc;
        case 0x267bc0u: goto label_267bc0;
        case 0x267bc4u: goto label_267bc4;
        case 0x267bc8u: goto label_267bc8;
        case 0x267bccu: goto label_267bcc;
        case 0x267bd0u: goto label_267bd0;
        case 0x267bd4u: goto label_267bd4;
        case 0x267bd8u: goto label_267bd8;
        case 0x267bdcu: goto label_267bdc;
        case 0x267be0u: goto label_267be0;
        case 0x267be4u: goto label_267be4;
        case 0x267be8u: goto label_267be8;
        case 0x267becu: goto label_267bec;
        case 0x267bf0u: goto label_267bf0;
        case 0x267bf4u: goto label_267bf4;
        case 0x267bf8u: goto label_267bf8;
        case 0x267bfcu: goto label_267bfc;
        case 0x267c00u: goto label_267c00;
        case 0x267c04u: goto label_267c04;
        case 0x267c08u: goto label_267c08;
        case 0x267c0cu: goto label_267c0c;
        case 0x267c10u: goto label_267c10;
        case 0x267c14u: goto label_267c14;
        case 0x267c18u: goto label_267c18;
        case 0x267c1cu: goto label_267c1c;
        case 0x267c20u: goto label_267c20;
        case 0x267c24u: goto label_267c24;
        case 0x267c28u: goto label_267c28;
        case 0x267c2cu: goto label_267c2c;
        case 0x267c30u: goto label_267c30;
        case 0x267c34u: goto label_267c34;
        case 0x267c38u: goto label_267c38;
        case 0x267c3cu: goto label_267c3c;
        case 0x267c40u: goto label_267c40;
        case 0x267c44u: goto label_267c44;
        case 0x267c48u: goto label_267c48;
        case 0x267c4cu: goto label_267c4c;
        case 0x267c50u: goto label_267c50;
        case 0x267c54u: goto label_267c54;
        case 0x267c58u: goto label_267c58;
        case 0x267c5cu: goto label_267c5c;
        case 0x267c60u: goto label_267c60;
        case 0x267c64u: goto label_267c64;
        case 0x267c68u: goto label_267c68;
        case 0x267c6cu: goto label_267c6c;
        case 0x267c70u: goto label_267c70;
        case 0x267c74u: goto label_267c74;
        case 0x267c78u: goto label_267c78;
        case 0x267c7cu: goto label_267c7c;
        case 0x267c80u: goto label_267c80;
        case 0x267c84u: goto label_267c84;
        case 0x267c88u: goto label_267c88;
        case 0x267c8cu: goto label_267c8c;
        case 0x267c90u: goto label_267c90;
        case 0x267c94u: goto label_267c94;
        case 0x267c98u: goto label_267c98;
        case 0x267c9cu: goto label_267c9c;
        case 0x267ca0u: goto label_267ca0;
        case 0x267ca4u: goto label_267ca4;
        case 0x267ca8u: goto label_267ca8;
        case 0x267cacu: goto label_267cac;
        case 0x267cb0u: goto label_267cb0;
        case 0x267cb4u: goto label_267cb4;
        case 0x267cb8u: goto label_267cb8;
        case 0x267cbcu: goto label_267cbc;
        case 0x267cc0u: goto label_267cc0;
        case 0x267cc4u: goto label_267cc4;
        case 0x267cc8u: goto label_267cc8;
        case 0x267cccu: goto label_267ccc;
        case 0x267cd0u: goto label_267cd0;
        case 0x267cd4u: goto label_267cd4;
        case 0x267cd8u: goto label_267cd8;
        case 0x267cdcu: goto label_267cdc;
        case 0x267ce0u: goto label_267ce0;
        case 0x267ce4u: goto label_267ce4;
        case 0x267ce8u: goto label_267ce8;
        case 0x267cecu: goto label_267cec;
        case 0x267cf0u: goto label_267cf0;
        case 0x267cf4u: goto label_267cf4;
        case 0x267cf8u: goto label_267cf8;
        case 0x267cfcu: goto label_267cfc;
        case 0x267d00u: goto label_267d00;
        case 0x267d04u: goto label_267d04;
        case 0x267d08u: goto label_267d08;
        case 0x267d0cu: goto label_267d0c;
        case 0x267d10u: goto label_267d10;
        case 0x267d14u: goto label_267d14;
        case 0x267d18u: goto label_267d18;
        case 0x267d1cu: goto label_267d1c;
        case 0x267d20u: goto label_267d20;
        case 0x267d24u: goto label_267d24;
        case 0x267d28u: goto label_267d28;
        case 0x267d2cu: goto label_267d2c;
        case 0x267d30u: goto label_267d30;
        case 0x267d34u: goto label_267d34;
        case 0x267d38u: goto label_267d38;
        case 0x267d3cu: goto label_267d3c;
        case 0x267d40u: goto label_267d40;
        case 0x267d44u: goto label_267d44;
        case 0x267d48u: goto label_267d48;
        case 0x267d4cu: goto label_267d4c;
        case 0x267d50u: goto label_267d50;
        case 0x267d54u: goto label_267d54;
        case 0x267d58u: goto label_267d58;
        case 0x267d5cu: goto label_267d5c;
        case 0x267d60u: goto label_267d60;
        case 0x267d64u: goto label_267d64;
        case 0x267d68u: goto label_267d68;
        case 0x267d6cu: goto label_267d6c;
        case 0x267d70u: goto label_267d70;
        case 0x267d74u: goto label_267d74;
        case 0x267d78u: goto label_267d78;
        case 0x267d7cu: goto label_267d7c;
        case 0x267d80u: goto label_267d80;
        case 0x267d84u: goto label_267d84;
        case 0x267d88u: goto label_267d88;
        case 0x267d8cu: goto label_267d8c;
        case 0x267d90u: goto label_267d90;
        case 0x267d94u: goto label_267d94;
        case 0x267d98u: goto label_267d98;
        case 0x267d9cu: goto label_267d9c;
        case 0x267da0u: goto label_267da0;
        case 0x267da4u: goto label_267da4;
        case 0x267da8u: goto label_267da8;
        case 0x267dacu: goto label_267dac;
        case 0x267db0u: goto label_267db0;
        case 0x267db4u: goto label_267db4;
        case 0x267db8u: goto label_267db8;
        case 0x267dbcu: goto label_267dbc;
        case 0x267dc0u: goto label_267dc0;
        case 0x267dc4u: goto label_267dc4;
        case 0x267dc8u: goto label_267dc8;
        case 0x267dccu: goto label_267dcc;
        case 0x267dd0u: goto label_267dd0;
        case 0x267dd4u: goto label_267dd4;
        case 0x267dd8u: goto label_267dd8;
        case 0x267ddcu: goto label_267ddc;
        case 0x267de0u: goto label_267de0;
        case 0x267de4u: goto label_267de4;
        case 0x267de8u: goto label_267de8;
        case 0x267decu: goto label_267dec;
        case 0x267df0u: goto label_267df0;
        case 0x267df4u: goto label_267df4;
        case 0x267df8u: goto label_267df8;
        case 0x267dfcu: goto label_267dfc;
        case 0x267e00u: goto label_267e00;
        case 0x267e04u: goto label_267e04;
        case 0x267e08u: goto label_267e08;
        case 0x267e0cu: goto label_267e0c;
        case 0x267e10u: goto label_267e10;
        case 0x267e14u: goto label_267e14;
        case 0x267e18u: goto label_267e18;
        case 0x267e1cu: goto label_267e1c;
        case 0x267e20u: goto label_267e20;
        case 0x267e24u: goto label_267e24;
        case 0x267e28u: goto label_267e28;
        case 0x267e2cu: goto label_267e2c;
        case 0x267e30u: goto label_267e30;
        case 0x267e34u: goto label_267e34;
        case 0x267e38u: goto label_267e38;
        case 0x267e3cu: goto label_267e3c;
        case 0x267e40u: goto label_267e40;
        case 0x267e44u: goto label_267e44;
        case 0x267e48u: goto label_267e48;
        case 0x267e4cu: goto label_267e4c;
        case 0x267e50u: goto label_267e50;
        case 0x267e54u: goto label_267e54;
        case 0x267e58u: goto label_267e58;
        case 0x267e5cu: goto label_267e5c;
        case 0x267e60u: goto label_267e60;
        case 0x267e64u: goto label_267e64;
        case 0x267e68u: goto label_267e68;
        case 0x267e6cu: goto label_267e6c;
        case 0x267e70u: goto label_267e70;
        case 0x267e74u: goto label_267e74;
        case 0x267e78u: goto label_267e78;
        case 0x267e7cu: goto label_267e7c;
        case 0x267e80u: goto label_267e80;
        case 0x267e84u: goto label_267e84;
        case 0x267e88u: goto label_267e88;
        case 0x267e8cu: goto label_267e8c;
        case 0x267e90u: goto label_267e90;
        case 0x267e94u: goto label_267e94;
        case 0x267e98u: goto label_267e98;
        case 0x267e9cu: goto label_267e9c;
        case 0x267ea0u: goto label_267ea0;
        case 0x267ea4u: goto label_267ea4;
        case 0x267ea8u: goto label_267ea8;
        case 0x267eacu: goto label_267eac;
        case 0x267eb0u: goto label_267eb0;
        case 0x267eb4u: goto label_267eb4;
        case 0x267eb8u: goto label_267eb8;
        case 0x267ebcu: goto label_267ebc;
        case 0x267ec0u: goto label_267ec0;
        case 0x267ec4u: goto label_267ec4;
        case 0x267ec8u: goto label_267ec8;
        case 0x267eccu: goto label_267ecc;
        case 0x267ed0u: goto label_267ed0;
        case 0x267ed4u: goto label_267ed4;
        case 0x267ed8u: goto label_267ed8;
        case 0x267edcu: goto label_267edc;
        case 0x267ee0u: goto label_267ee0;
        case 0x267ee4u: goto label_267ee4;
        case 0x267ee8u: goto label_267ee8;
        case 0x267eecu: goto label_267eec;
        case 0x267ef0u: goto label_267ef0;
        case 0x267ef4u: goto label_267ef4;
        case 0x267ef8u: goto label_267ef8;
        case 0x267efcu: goto label_267efc;
        case 0x267f00u: goto label_267f00;
        case 0x267f04u: goto label_267f04;
        case 0x267f08u: goto label_267f08;
        case 0x267f0cu: goto label_267f0c;
        case 0x267f10u: goto label_267f10;
        case 0x267f14u: goto label_267f14;
        case 0x267f18u: goto label_267f18;
        case 0x267f1cu: goto label_267f1c;
        case 0x267f20u: goto label_267f20;
        case 0x267f24u: goto label_267f24;
        case 0x267f28u: goto label_267f28;
        case 0x267f2cu: goto label_267f2c;
        case 0x267f30u: goto label_267f30;
        case 0x267f34u: goto label_267f34;
        case 0x267f38u: goto label_267f38;
        case 0x267f3cu: goto label_267f3c;
        case 0x267f40u: goto label_267f40;
        case 0x267f44u: goto label_267f44;
        case 0x267f48u: goto label_267f48;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f50u: goto label_267f50;
        case 0x267f54u: goto label_267f54;
        case 0x267f58u: goto label_267f58;
        case 0x267f5cu: goto label_267f5c;
        case 0x267f60u: goto label_267f60;
        case 0x267f64u: goto label_267f64;
        case 0x267f68u: goto label_267f68;
        case 0x267f6cu: goto label_267f6c;
        case 0x267f70u: goto label_267f70;
        case 0x267f74u: goto label_267f74;
        case 0x267f78u: goto label_267f78;
        case 0x267f7cu: goto label_267f7c;
        case 0x267f80u: goto label_267f80;
        case 0x267f84u: goto label_267f84;
        case 0x267f88u: goto label_267f88;
        case 0x267f8cu: goto label_267f8c;
        case 0x267f90u: goto label_267f90;
        case 0x267f94u: goto label_267f94;
        case 0x267f98u: goto label_267f98;
        case 0x267f9cu: goto label_267f9c;
        case 0x267fa0u: goto label_267fa0;
        case 0x267fa4u: goto label_267fa4;
        case 0x267fa8u: goto label_267fa8;
        case 0x267facu: goto label_267fac;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fb4u: goto label_267fb4;
        case 0x267fb8u: goto label_267fb8;
        case 0x267fbcu: goto label_267fbc;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fc8u: goto label_267fc8;
        case 0x267fccu: goto label_267fcc;
        case 0x267fd0u: goto label_267fd0;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fd8u: goto label_267fd8;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fe0u: goto label_267fe0;
        case 0x267fe4u: goto label_267fe4;
        case 0x267fe8u: goto label_267fe8;
        case 0x267fecu: goto label_267fec;
        case 0x267ff0u: goto label_267ff0;
        case 0x267ff4u: goto label_267ff4;
        case 0x267ff8u: goto label_267ff8;
        case 0x267ffcu: goto label_267ffc;
        case 0x268000u: goto label_268000;
        case 0x268004u: goto label_268004;
        case 0x268008u: goto label_268008;
        case 0x26800cu: goto label_26800c;
        case 0x268010u: goto label_268010;
        case 0x268014u: goto label_268014;
        case 0x268018u: goto label_268018;
        case 0x26801cu: goto label_26801c;
        case 0x268020u: goto label_268020;
        case 0x268024u: goto label_268024;
        case 0x268028u: goto label_268028;
        case 0x26802cu: goto label_26802c;
        case 0x268030u: goto label_268030;
        case 0x268034u: goto label_268034;
        case 0x268038u: goto label_268038;
        case 0x26803cu: goto label_26803c;
        case 0x268040u: goto label_268040;
        case 0x268044u: goto label_268044;
        case 0x268048u: goto label_268048;
        case 0x26804cu: goto label_26804c;
        case 0x268050u: goto label_268050;
        case 0x268054u: goto label_268054;
        case 0x268058u: goto label_268058;
        case 0x26805cu: goto label_26805c;
        case 0x268060u: goto label_268060;
        case 0x268064u: goto label_268064;
        case 0x268068u: goto label_268068;
        case 0x26806cu: goto label_26806c;
        case 0x268070u: goto label_268070;
        case 0x268074u: goto label_268074;
        case 0x268078u: goto label_268078;
        case 0x26807cu: goto label_26807c;
        case 0x268080u: goto label_268080;
        case 0x268084u: goto label_268084;
        case 0x268088u: goto label_268088;
        case 0x26808cu: goto label_26808c;
        case 0x268090u: goto label_268090;
        case 0x268094u: goto label_268094;
        case 0x268098u: goto label_268098;
        case 0x26809cu: goto label_26809c;
        case 0x2680a0u: goto label_2680a0;
        case 0x2680a4u: goto label_2680a4;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680acu: goto label_2680ac;
        case 0x2680b0u: goto label_2680b0;
        case 0x2680b4u: goto label_2680b4;
        case 0x2680b8u: goto label_2680b8;
        case 0x2680bcu: goto label_2680bc;
        case 0x2680c0u: goto label_2680c0;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680c8u: goto label_2680c8;
        case 0x2680ccu: goto label_2680cc;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680d4u: goto label_2680d4;
        case 0x2680d8u: goto label_2680d8;
        case 0x2680dcu: goto label_2680dc;
        case 0x2680e0u: goto label_2680e0;
        case 0x2680e4u: goto label_2680e4;
        case 0x2680e8u: goto label_2680e8;
        case 0x2680ecu: goto label_2680ec;
        case 0x2680f0u: goto label_2680f0;
        case 0x2680f4u: goto label_2680f4;
        case 0x2680f8u: goto label_2680f8;
        case 0x2680fcu: goto label_2680fc;
        case 0x268100u: goto label_268100;
        case 0x268104u: goto label_268104;
        case 0x268108u: goto label_268108;
        case 0x26810cu: goto label_26810c;
        case 0x268110u: goto label_268110;
        case 0x268114u: goto label_268114;
        case 0x268118u: goto label_268118;
        case 0x26811cu: goto label_26811c;
        case 0x268120u: goto label_268120;
        case 0x268124u: goto label_268124;
        case 0x268128u: goto label_268128;
        case 0x26812cu: goto label_26812c;
        case 0x268130u: goto label_268130;
        case 0x268134u: goto label_268134;
        case 0x268138u: goto label_268138;
        case 0x26813cu: goto label_26813c;
        case 0x268140u: goto label_268140;
        case 0x268144u: goto label_268144;
        case 0x268148u: goto label_268148;
        case 0x26814cu: goto label_26814c;
        case 0x268150u: goto label_268150;
        case 0x268154u: goto label_268154;
        case 0x268158u: goto label_268158;
        case 0x26815cu: goto label_26815c;
        case 0x268160u: goto label_268160;
        case 0x268164u: goto label_268164;
        case 0x268168u: goto label_268168;
        case 0x26816cu: goto label_26816c;
        case 0x268170u: goto label_268170;
        case 0x268174u: goto label_268174;
        case 0x268178u: goto label_268178;
        case 0x26817cu: goto label_26817c;
        case 0x268180u: goto label_268180;
        case 0x268184u: goto label_268184;
        case 0x268188u: goto label_268188;
        case 0x26818cu: goto label_26818c;
        case 0x268190u: goto label_268190;
        case 0x268194u: goto label_268194;
        case 0x268198u: goto label_268198;
        case 0x26819cu: goto label_26819c;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681a4u: goto label_2681a4;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681acu: goto label_2681ac;
        case 0x2681b0u: goto label_2681b0;
        case 0x2681b4u: goto label_2681b4;
        case 0x2681b8u: goto label_2681b8;
        case 0x2681bcu: goto label_2681bc;
        case 0x2681c0u: goto label_2681c0;
        case 0x2681c4u: goto label_2681c4;
        case 0x2681c8u: goto label_2681c8;
        case 0x2681ccu: goto label_2681cc;
        case 0x2681d0u: goto label_2681d0;
        case 0x2681d4u: goto label_2681d4;
        default: return;
    }

label_267a08:
    // 0x267a08: 0x0  nop
    ctx->pc = 0x267a08u;
    // NOP
label_267a0c:
    // 0x267a0c: 0x0  nop
    ctx->pc = 0x267a0cu;
    // NOP
label_267a10:
    // 0x267a10: 0x11b49  .word       0x00011B49                   # jalr        $v1, $zero # 00010340 <InstrIdType: CPU_SPECIAL>
label_267a14:
    if (ctx->pc == 0x267A14u) {
        ctx->pc = 0x267A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A10u;
        // 0x267a14: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A18u;
        goto label_267a18;
    }
    ctx->pc = 0x267A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267A18u);
        ctx->pc = 0x267A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A10u;
        // 0x267a14: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A10u, 0x267A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267A18u;
label_267a18:
    // 0x267a18: 0x0  nop
    ctx->pc = 0x267a18u;
    // NOP
label_267a1c:
    // 0x267a1c: 0x0  nop
    ctx->pc = 0x267a1cu;
    // NOP
label_267a20:
    // 0x267a20: 0x11b5b  .word       0x00011B5B                   # divu        $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_267a24:
    // 0x267a24: 0x9cd0  .word       0x00009CD0                   # mfhi        $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a24u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_267a28:
    // 0x267a28: 0x0  nop
    ctx->pc = 0x267a28u;
    // NOP
label_267a2c:
    // 0x267a2c: 0x0  nop
    ctx->pc = 0x267a2cu;
    // NOP
label_267a30:
    // 0x267a30: 0x11b6f  .word       0x00011B6F                   # dsubu       $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_267a34:
    // 0x267a34: 0x83d0  .word       0x000083D0                   # mfhi        $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a34u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267a38:
    // 0x267a38: 0x0  nop
    ctx->pc = 0x267a38u;
    // NOP
label_267a3c:
    // 0x267a3c: 0x0  nop
    ctx->pc = 0x267a3cu;
    // NOP
label_267a40:
    // 0x267a40: 0x11b80  sll         $v1, $at, 14
    ctx->pc = 0x267a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_267a44:
    // 0x267a44: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267a48:
    // 0x267a48: 0x0  nop
    ctx->pc = 0x267a48u;
    // NOP
label_267a4c:
    // 0x267a4c: 0x0  nop
    ctx->pc = 0x267a4cu;
    // NOP
label_267a50:
    // 0x267a50: 0x11b92  .word       0x00011B92                   # mflo        $v1 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a50u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267a54:
    // 0x267a54: 0x5200  sll         $t2, $zero, 8
    ctx->pc = 0x267a54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_267a58:
    // 0x267a58: 0x0  nop
    ctx->pc = 0x267a58u;
    // NOP
label_267a5c:
    // 0x267a5c: 0x0  nop
    ctx->pc = 0x267a5cu;
    // NOP
label_267a60:
    // 0x267a60: 0x11b9d  .word       0x00011B9D                   # dmultu      $zero, $at # 00001B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267A60 raw=0x00011B9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267a64:
    // 0x267a64: 0xb390  .word       0x0000B390                   # mfhi        $s6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a64u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_267a68:
    // 0x267a68: 0x0  nop
    ctx->pc = 0x267a68u;
    // NOP
label_267a6c:
    // 0x267a6c: 0x0  nop
    ctx->pc = 0x267a6cu;
    // NOP
label_267a70:
    // 0x267a70: 0x11bb4  teq         $zero, $at, 110
    ctx->pc = 0x267a70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267a74:
    // 0x267a74: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267a78:
    // 0x267a78: 0x0  nop
    ctx->pc = 0x267a78u;
    // NOP
label_267a7c:
    // 0x267a7c: 0x0  nop
    ctx->pc = 0x267a7cu;
    // NOP
label_267a80:
    // 0x267a80: 0x11bbd  .word       0x00011BBD                   # INVALID     $zero, $at, 0x1BBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267A80 raw=0x00011BBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267a84:
    // 0x267a84: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x267a84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267a88:
    // 0x267a88: 0x0  nop
    ctx->pc = 0x267a88u;
    // NOP
label_267a8c:
    // 0x267a8c: 0x0  nop
    ctx->pc = 0x267a8cu;
    // NOP
label_267a90:
    // 0x267a90: 0x11bcc  .word       0x00011BCC                   # syscall     111 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a90u;
    ctx->pc = 0x267A94u;
runtime->handleSyscall(rdram, ctx, 0x46Fu);
label_267a94:
    // 0x267a94: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x267a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267a98:
    // 0x267a98: 0x0  nop
    ctx->pc = 0x267a98u;
    // NOP
label_267a9c:
    // 0x267a9c: 0x0  nop
    ctx->pc = 0x267a9cu;
    // NOP
label_267aa0:
    // 0x267aa0: 0x11be2  .word       0x00011BE2                   # neg         $v1, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267aa4:
    // 0x267aa4: 0x7410  .word       0x00007410                   # mfhi        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267aa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267aa8:
    // 0x267aa8: 0x0  nop
    ctx->pc = 0x267aa8u;
    // NOP
label_267aac:
    // 0x267aac: 0x0  nop
    ctx->pc = 0x267aacu;
    // NOP
label_267ab0:
    // 0x267ab0: 0x11bf1  tgeu        $zero, $at, 111
    ctx->pc = 0x267ab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267ab4:
    // 0x267ab4: 0x99e0  .word       0x000099E0                   # add         $s3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267ab8:
    // 0x267ab8: 0x0  nop
    ctx->pc = 0x267ab8u;
    // NOP
label_267abc:
    // 0x267abc: 0x0  nop
    ctx->pc = 0x267abcu;
    // NOP
label_267ac0:
    // 0x267ac0: 0x11c05  .word       0x00011C05                   # INVALID     $zero, $at, 0x1C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267AC0 raw=0x00011C05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ac4:
    // 0x267ac4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x267ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_267ac8:
    // 0x267ac8: 0x0  nop
    ctx->pc = 0x267ac8u;
    // NOP
label_267acc:
    // 0x267acc: 0x0  nop
    ctx->pc = 0x267accu;
    // NOP
label_267ad0:
    // 0x267ad0: 0x11c13  .word       0x00011C13                   # mtlo        $zero # 00011C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ad0u;
    ctx->lo = GPR_U64(ctx, 0);
label_267ad4:
    // 0x267ad4: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x267ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267ad8:
    // 0x267ad8: 0x0  nop
    ctx->pc = 0x267ad8u;
    // NOP
label_267adc:
    // 0x267adc: 0x0  nop
    ctx->pc = 0x267adcu;
    // NOP
label_267ae0:
    // 0x267ae0: 0x11c28  .word       0x00011C28                   # mfsa        $v1 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267ae0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_267ae4:
    // 0x267ae4: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x267ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267ae8:
    // 0x267ae8: 0x0  nop
    ctx->pc = 0x267ae8u;
    // NOP
label_267aec:
    // 0x267aec: 0x0  nop
    ctx->pc = 0x267aecu;
    // NOP
label_267af0:
    // 0x267af0: 0x11c33  tltu        $zero, $at, 112
    ctx->pc = 0x267af0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267af4:
    // 0x267af4: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267af4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267af8:
    // 0x267af8: 0x0  nop
    ctx->pc = 0x267af8u;
    // NOP
label_267afc:
    // 0x267afc: 0x0  nop
    ctx->pc = 0x267afcu;
    // NOP
label_267b00:
    // 0x267b00: 0x11c3b  dsra        $v1, $at, 16
    ctx->pc = 0x267b00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> 16);
label_267b04:
    // 0x267b04: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x267b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_267b08:
    // 0x267b08: 0x0  nop
    ctx->pc = 0x267b08u;
    // NOP
label_267b0c:
    // 0x267b0c: 0x0  nop
    ctx->pc = 0x267b0cu;
    // NOP
label_267b10:
    // 0x267b10: 0x11c48  .word       0x00011C48                   # jr          $zero # 00011C40 <InstrIdType: CPU_SPECIAL>
label_267b14:
    if (ctx->pc == 0x267B14u) {
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B10u;
        // 0x267b14: 0x6700  sll         $t4, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267B18u;
        goto label_267b18;
    }
    ctx->pc = 0x267B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x267B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267B10u;
        // 0x267b14: 0x6700  sll         $t4, $zero, 28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267B18u;
label_267b18:
    // 0x267b18: 0x0  nop
    ctx->pc = 0x267b18u;
    // NOP
label_267b1c:
    // 0x267b1c: 0x0  nop
    ctx->pc = 0x267b1cu;
    // NOP
label_267b20:
    // 0x267b20: 0x11c55  .word       0x00011C55                   # INVALID     $zero, $at, 0x1C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267B20 raw=0x00011C55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267b24:
    // 0x267b24: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x267b24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_267b28:
    // 0x267b28: 0x0  nop
    ctx->pc = 0x267b28u;
    // NOP
label_267b2c:
    // 0x267b2c: 0x0  nop
    ctx->pc = 0x267b2cu;
    // NOP
label_267b30:
    // 0x267b30: 0x11c62  .word       0x00011C62                   # neg         $v1, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267b34:
    // 0x267b34: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_267b38:
    // 0x267b38: 0x0  nop
    ctx->pc = 0x267b38u;
    // NOP
label_267b3c:
    // 0x267b3c: 0x0  nop
    ctx->pc = 0x267b3cu;
    // NOP
label_267b40:
    // 0x267b40: 0x11c6d  .word       0x00011C6D                   # daddu       $v1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267b44:
    // 0x267b44: 0xb0f0  tge         $zero, $zero, 707
    ctx->pc = 0x267b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267b48:
    // 0x267b48: 0x0  nop
    ctx->pc = 0x267b48u;
    // NOP
label_267b4c:
    // 0x267b4c: 0x0  nop
    ctx->pc = 0x267b4cu;
    // NOP
label_267b50:
    // 0x267b50: 0x11c84  .word       0x00011C84                   # sllv        $v1, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267b54:
    // 0x267b54: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267b58:
    // 0x267b58: 0x0  nop
    ctx->pc = 0x267b58u;
    // NOP
label_267b5c:
    // 0x267b5c: 0x0  nop
    ctx->pc = 0x267b5cu;
    // NOP
label_267b60:
    // 0x267b60: 0x11c93  .word       0x00011C93                   # mtlo        $zero # 00011C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b60u;
    ctx->lo = GPR_U64(ctx, 0);
label_267b64:
    // 0x267b64: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x267b64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267b68:
    // 0x267b68: 0x0  nop
    ctx->pc = 0x267b68u;
    // NOP
label_267b6c:
    // 0x267b6c: 0x0  nop
    ctx->pc = 0x267b6cu;
    // NOP
label_267b70:
    // 0x267b70: 0x11ca2  .word       0x00011CA2                   # neg         $v1, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_267b74:
    // 0x267b74: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x267b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_267b78:
    // 0x267b78: 0x0  nop
    ctx->pc = 0x267b78u;
    // NOP
label_267b7c:
    // 0x267b7c: 0x0  nop
    ctx->pc = 0x267b7cu;
    // NOP
label_267b80:
    // 0x267b80: 0x11cb2  tlt         $zero, $at, 114
    ctx->pc = 0x267b80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267b84:
    // 0x267b84: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x267b84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267b88:
    // 0x267b88: 0x0  nop
    ctx->pc = 0x267b88u;
    // NOP
label_267b8c:
    // 0x267b8c: 0x0  nop
    ctx->pc = 0x267b8cu;
    // NOP
label_267b90:
    // 0x267b90: 0x11cc2  srl         $v1, $at, 19
    ctx->pc = 0x267b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 19));
label_267b94:
    // 0x267b94: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_267b98:
    // 0x267b98: 0x0  nop
    ctx->pc = 0x267b98u;
    // NOP
label_267b9c:
    // 0x267b9c: 0x0  nop
    ctx->pc = 0x267b9cu;
    // NOP
label_267ba0:
    // 0x267ba0: 0x11ccd  break       1, 115
    ctx->pc = 0x267ba0u;
    runtime->handleBreak(rdram, ctx);
label_267ba4:
    // 0x267ba4: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267ba8:
    // 0x267ba8: 0x0  nop
    ctx->pc = 0x267ba8u;
    // NOP
label_267bac:
    // 0x267bac: 0x0  nop
    ctx->pc = 0x267bacu;
    // NOP
label_267bb0:
    // 0x267bb0: 0x11cd5  .word       0x00011CD5                   # INVALID     $zero, $at, 0x1CD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267BB0 raw=0x00011CD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267bb4:
    // 0x267bb4: 0x4310  .word       0x00004310                   # mfhi        $t0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267bb8:
    // 0x267bb8: 0x0  nop
    ctx->pc = 0x267bb8u;
    // NOP
label_267bbc:
    // 0x267bbc: 0x0  nop
    ctx->pc = 0x267bbcu;
    // NOP
label_267bc0:
    // 0x267bc0: 0x11cde  .word       0x00011CDE                   # ddiv        $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267BC0 raw=0x00011CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267bc4:
    // 0x267bc4: 0x5da0  .word       0x00005DA0                   # add         $t3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267bc8:
    // 0x267bc8: 0x0  nop
    ctx->pc = 0x267bc8u;
    // NOP
label_267bcc:
    // 0x267bcc: 0x0  nop
    ctx->pc = 0x267bccu;
    // NOP
label_267bd0:
    // 0x267bd0: 0x11cea  .word       0x00011CEA                   # slt         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267bd4:
    // 0x267bd4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x267bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267bd8:
    // 0x267bd8: 0x0  nop
    ctx->pc = 0x267bd8u;
    // NOP
label_267bdc:
    // 0x267bdc: 0x0  nop
    ctx->pc = 0x267bdcu;
    // NOP
label_267be0:
    // 0x267be0: 0x11cff  dsra32      $v1, $at, 19
    ctx->pc = 0x267be0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 19));
label_267be4:
    // 0x267be4: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x267be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267be8:
    // 0x267be8: 0x0  nop
    ctx->pc = 0x267be8u;
    // NOP
label_267bec:
    // 0x267bec: 0x0  nop
    ctx->pc = 0x267becu;
    // NOP
label_267bf0:
    // 0x267bf0: 0x11d07  .word       0x00011D07                   # srav        $v1, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267bf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267bf4:
    // 0x267bf4: 0x2ac0  sll         $a1, $zero, 11
    ctx->pc = 0x267bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_267bf8:
    // 0x267bf8: 0x0  nop
    ctx->pc = 0x267bf8u;
    // NOP
label_267bfc:
    // 0x267bfc: 0x0  nop
    ctx->pc = 0x267bfcu;
    // NOP
label_267c00:
    // 0x267c00: 0x11d0d  break       1, 116
    ctx->pc = 0x267c00u;
    runtime->handleBreak(rdram, ctx);
label_267c04:
    // 0x267c04: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267c08:
    // 0x267c08: 0x0  nop
    ctx->pc = 0x267c08u;
    // NOP
label_267c0c:
    // 0x267c0c: 0x0  nop
    ctx->pc = 0x267c0cu;
    // NOP
label_267c10:
    // 0x267c10: 0x11d19  .word       0x00011D19                   # multu       $zero, $at # 00001D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_267c14:
    // 0x267c14: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_267c18:
    // 0x267c18: 0x0  nop
    ctx->pc = 0x267c18u;
    // NOP
label_267c1c:
    // 0x267c1c: 0x0  nop
    ctx->pc = 0x267c1cu;
    // NOP
label_267c20:
    // 0x267c20: 0x11d27  .word       0x00011D27                   # nor         $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267c24:
    // 0x267c24: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267c28:
    // 0x267c28: 0x0  nop
    ctx->pc = 0x267c28u;
    // NOP
label_267c2c:
    // 0x267c2c: 0x0  nop
    ctx->pc = 0x267c2cu;
    // NOP
label_267c30:
    // 0x267c30: 0x11d34  teq         $zero, $at, 116
    ctx->pc = 0x267c30u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267c34:
    // 0x267c34: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x267c34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267c38:
    // 0x267c38: 0x0  nop
    ctx->pc = 0x267c38u;
    // NOP
label_267c3c:
    // 0x267c3c: 0x0  nop
    ctx->pc = 0x267c3cu;
    // NOP
label_267c40:
    // 0x267c40: 0x11d3f  dsra32      $v1, $at, 20
    ctx->pc = 0x267c40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 20));
label_267c44:
    // 0x267c44: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_267c48:
    // 0x267c48: 0x0  nop
    ctx->pc = 0x267c48u;
    // NOP
label_267c4c:
    // 0x267c4c: 0x0  nop
    ctx->pc = 0x267c4cu;
    // NOP
label_267c50:
    // 0x267c50: 0x11d49  .word       0x00011D49                   # jalr        $v1, $zero # 00010540 <InstrIdType: CPU_SPECIAL>
label_267c54:
    if (ctx->pc == 0x267C54u) {
        ctx->pc = 0x267C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C50u;
        // 0x267c54: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x267C58u;
        goto label_267c58;
    }
    ctx->pc = 0x267C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267C58u);
        ctx->pc = 0x267C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267C50u;
        // 0x267c54: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267C50u, 0x267C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267C58u;
label_267c58:
    // 0x267c58: 0x0  nop
    ctx->pc = 0x267c58u;
    // NOP
label_267c5c:
    // 0x267c5c: 0x0  nop
    ctx->pc = 0x267c5cu;
    // NOP
label_267c60:
    // 0x267c60: 0x11d52  .word       0x00011D52                   # mflo        $v1 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c60u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267c64:
    // 0x267c64: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x267c64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267c68:
    // 0x267c68: 0x0  nop
    ctx->pc = 0x267c68u;
    // NOP
label_267c6c:
    // 0x267c6c: 0x0  nop
    ctx->pc = 0x267c6cu;
    // NOP
label_267c70:
    // 0x267c70: 0x11d5c  .word       0x00011D5C                   # dmult       $zero, $at # 00001D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267C70 raw=0x00011D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267c74:
    // 0x267c74: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267c78:
    // 0x267c78: 0x0  nop
    ctx->pc = 0x267c78u;
    // NOP
label_267c7c:
    // 0x267c7c: 0x0  nop
    ctx->pc = 0x267c7cu;
    // NOP
label_267c80:
    // 0x267c80: 0x11d66  .word       0x00011D66                   # xor         $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267c84:
    // 0x267c84: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x267c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267c88:
    // 0x267c88: 0x0  nop
    ctx->pc = 0x267c88u;
    // NOP
label_267c8c:
    // 0x267c8c: 0x0  nop
    ctx->pc = 0x267c8cu;
    // NOP
label_267c90:
    // 0x267c90: 0x11d72  tlt         $zero, $at, 117
    ctx->pc = 0x267c90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267c94:
    // 0x267c94: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267c94u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_267c98:
    // 0x267c98: 0x0  nop
    ctx->pc = 0x267c98u;
    // NOP
label_267c9c:
    // 0x267c9c: 0x0  nop
    ctx->pc = 0x267c9cu;
    // NOP
label_267ca0:
    // 0x267ca0: 0x11d80  sll         $v1, $at, 22
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_267ca4:
    // 0x267ca4: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267ca8:
    // 0x267ca8: 0x0  nop
    ctx->pc = 0x267ca8u;
    // NOP
label_267cac:
    // 0x267cac: 0x0  nop
    ctx->pc = 0x267cacu;
    // NOP
label_267cb0:
    // 0x267cb0: 0x11d93  .word       0x00011D93                   # mtlo        $zero # 00011D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_267cb4:
    // 0x267cb4: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cb4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_267cb8:
    // 0x267cb8: 0x0  nop
    ctx->pc = 0x267cb8u;
    // NOP
label_267cbc:
    // 0x267cbc: 0x0  nop
    ctx->pc = 0x267cbcu;
    // NOP
label_267cc0:
    // 0x267cc0: 0x11dac  .word       0x00011DAC                   # dadd        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267cc4:
    // 0x267cc4: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267cc4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267cc8:
    // 0x267cc8: 0x0  nop
    ctx->pc = 0x267cc8u;
    // NOP
label_267ccc:
    // 0x267ccc: 0x0  nop
    ctx->pc = 0x267cccu;
    // NOP
label_267cd0:
    // 0x267cd0: 0x11db6  tne         $zero, $at, 118
    ctx->pc = 0x267cd0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267cd4:
    // 0x267cd4: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x267cd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_267cd8:
    // 0x267cd8: 0x0  nop
    ctx->pc = 0x267cd8u;
    // NOP
label_267cdc:
    // 0x267cdc: 0x0  nop
    ctx->pc = 0x267cdcu;
    // NOP
label_267ce0:
    // 0x267ce0: 0x11dc4  .word       0x00011DC4                   # sllv        $v1, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267ce4:
    // 0x267ce4: 0x9b70  tge         $zero, $zero, 621
    ctx->pc = 0x267ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267ce8:
    // 0x267ce8: 0x0  nop
    ctx->pc = 0x267ce8u;
    // NOP
label_267cec:
    // 0x267cec: 0x0  nop
    ctx->pc = 0x267cecu;
    // NOP
label_267cf0:
    // 0x267cf0: 0x11dd8  .word       0x00011DD8                   # mult        $v1, $zero, $at # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_267cf4:
    // 0x267cf4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x267cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267cf8:
    // 0x267cf8: 0x0  nop
    ctx->pc = 0x267cf8u;
    // NOP
label_267cfc:
    // 0x267cfc: 0x0  nop
    ctx->pc = 0x267cfcu;
    // NOP
label_267d00:
    // 0x267d00: 0x11de7  .word       0x00011DE7                   # nor         $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d00u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267d04:
    // 0x267d04: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x267d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d08:
    // 0x267d08: 0x0  nop
    ctx->pc = 0x267d08u;
    // NOP
label_267d0c:
    // 0x267d0c: 0x0  nop
    ctx->pc = 0x267d0cu;
    // NOP
label_267d10:
    // 0x267d10: 0x11dff  dsra32      $v1, $at, 23
    ctx->pc = 0x267d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 23));
label_267d14:
    // 0x267d14: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_267d18:
    // 0x267d18: 0x0  nop
    ctx->pc = 0x267d18u;
    // NOP
label_267d1c:
    // 0x267d1c: 0x0  nop
    ctx->pc = 0x267d1cu;
    // NOP
label_267d20:
    // 0x267d20: 0x11e0d  break       1, 120
    ctx->pc = 0x267d20u;
    runtime->handleBreak(rdram, ctx);
label_267d24:
    // 0x267d24: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x267d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d28:
    // 0x267d28: 0x0  nop
    ctx->pc = 0x267d28u;
    // NOP
label_267d2c:
    // 0x267d2c: 0x0  nop
    ctx->pc = 0x267d2cu;
    // NOP
label_267d30:
    // 0x267d30: 0x11e16  .word       0x00011E16                   # dsrlv       $v1, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267d34:
    // 0x267d34: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267d38:
    // 0x267d38: 0x0  nop
    ctx->pc = 0x267d38u;
    // NOP
label_267d3c:
    // 0x267d3c: 0x0  nop
    ctx->pc = 0x267d3cu;
    // NOP
label_267d40:
    // 0x267d40: 0x11e20  .word       0x00011E20                   # add         $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_267d44:
    // 0x267d44: 0xe060  .word       0x0000E060                   # add         $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_267d48:
    // 0x267d48: 0x0  nop
    ctx->pc = 0x267d48u;
    // NOP
label_267d4c:
    // 0x267d4c: 0x0  nop
    ctx->pc = 0x267d4cu;
    // NOP
label_267d50:
    // 0x267d50: 0x11e3d  .word       0x00011E3D                   # INVALID     $zero, $at, 0x1E3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267D50 raw=0x00011E3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267d54:
    // 0x267d54: 0x5830  tge         $zero, $zero, 352
    ctx->pc = 0x267d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d58:
    // 0x267d58: 0x0  nop
    ctx->pc = 0x267d58u;
    // NOP
label_267d5c:
    // 0x267d5c: 0x0  nop
    ctx->pc = 0x267d5cu;
    // NOP
label_267d60:
    // 0x267d60: 0x11e49  .word       0x00011E49                   # jalr        $v1, $zero # 00010640 <InstrIdType: CPU_SPECIAL>
label_267d64:
    if (ctx->pc == 0x267D64u) {
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D60u;
        // 0x267d64: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x267D68u;
        goto label_267d68;
    }
    ctx->pc = 0x267D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x267D68u);
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D60u;
        // 0x267d64: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267D60u, 0x267D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267D68u;
label_267d68:
    // 0x267d68: 0x0  nop
    ctx->pc = 0x267d68u;
    // NOP
label_267d6c:
    // 0x267d6c: 0x0  nop
    ctx->pc = 0x267d6cu;
    // NOP
label_267d70:
    // 0x267d70: 0x11e57  .word       0x00011E57                   # dsrav       $v1, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267d74:
    // 0x267d74: 0xa1b0  tge         $zero, $zero, 646
    ctx->pc = 0x267d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267d78:
    // 0x267d78: 0x0  nop
    ctx->pc = 0x267d78u;
    // NOP
label_267d7c:
    // 0x267d7c: 0x0  nop
    ctx->pc = 0x267d7cu;
    // NOP
label_267d80:
    // 0x267d80: 0x11e6c  .word       0x00011E6C                   # dadd        $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267d84:
    // 0x267d84: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267d88:
    // 0x267d88: 0x0  nop
    ctx->pc = 0x267d88u;
    // NOP
label_267d8c:
    // 0x267d8c: 0x0  nop
    ctx->pc = 0x267d8cu;
    // NOP
label_267d90:
    // 0x267d90: 0x11e77  .word       0x00011E77                   # INVALID     $zero, $at, 0x1E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267D90 raw=0x00011E77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267d94:
    // 0x267d94: 0x9e20  .word       0x00009E20                   # add         $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267d98:
    // 0x267d98: 0x0  nop
    ctx->pc = 0x267d98u;
    // NOP
label_267d9c:
    // 0x267d9c: 0x0  nop
    ctx->pc = 0x267d9cu;
    // NOP
label_267da0:
    // 0x267da0: 0x11e8b  .word       0x00011E8B                   # movn        $v1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267da0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267da4:
    // 0x267da4: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267da4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267da8:
    // 0x267da8: 0x0  nop
    ctx->pc = 0x267da8u;
    // NOP
label_267dac:
    // 0x267dac: 0x0  nop
    ctx->pc = 0x267dacu;
    // NOP
label_267db0:
    // 0x267db0: 0x11e9c  .word       0x00011E9C                   # dmult       $zero, $at # 00001E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267DB0 raw=0x00011E9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267db4:
    // 0x267db4: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x267db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267db8:
    // 0x267db8: 0x0  nop
    ctx->pc = 0x267db8u;
    // NOP
label_267dbc:
    // 0x267dbc: 0x0  nop
    ctx->pc = 0x267dbcu;
    // NOP
label_267dc0:
    // 0x267dc0: 0x11eb0  tge         $zero, $at, 122
    ctx->pc = 0x267dc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267dc4:
    // 0x267dc4: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x267dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267dc8:
    // 0x267dc8: 0x0  nop
    ctx->pc = 0x267dc8u;
    // NOP
label_267dcc:
    // 0x267dcc: 0x0  nop
    ctx->pc = 0x267dccu;
    // NOP
label_267dd0:
    // 0x267dd0: 0x11ebc  dsll32      $v1, $at, 26
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 26));
label_267dd4:
    // 0x267dd4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267dd8:
    // 0x267dd8: 0x0  nop
    ctx->pc = 0x267dd8u;
    // NOP
label_267ddc:
    // 0x267ddc: 0x0  nop
    ctx->pc = 0x267ddcu;
    // NOP
label_267de0:
    // 0x267de0: 0x11ecd  break       1, 123
    ctx->pc = 0x267de0u;
    runtime->handleBreak(rdram, ctx);
label_267de4:
    // 0x267de4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267de8:
    // 0x267de8: 0x0  nop
    ctx->pc = 0x267de8u;
    // NOP
label_267dec:
    // 0x267dec: 0x0  nop
    ctx->pc = 0x267decu;
    // NOP
label_267df0:
    // 0x267df0: 0x11eda  .word       0x00011EDA                   # div         $v1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267df0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267df4:
    // 0x267df4: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x267df4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267df8:
    // 0x267df8: 0x0  nop
    ctx->pc = 0x267df8u;
    // NOP
label_267dfc:
    // 0x267dfc: 0x0  nop
    ctx->pc = 0x267dfcu;
    // NOP
label_267e00:
    // 0x267e00: 0x11eea  .word       0x00011EEA                   # slt         $v1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267e04:
    // 0x267e04: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267e08:
    // 0x267e08: 0x0  nop
    ctx->pc = 0x267e08u;
    // NOP
label_267e0c:
    // 0x267e0c: 0x0  nop
    ctx->pc = 0x267e0cu;
    // NOP
label_267e10:
    // 0x267e10: 0x11efc  dsll32      $v1, $at, 27
    ctx->pc = 0x267e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 27));
label_267e14:
    // 0x267e14: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x267e14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267e18:
    // 0x267e18: 0x0  nop
    ctx->pc = 0x267e18u;
    // NOP
label_267e1c:
    // 0x267e1c: 0x0  nop
    ctx->pc = 0x267e1cu;
    // NOP
label_267e20:
    // 0x267e20: 0x11f07  .word       0x00011F07                   # srav        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267e24:
    // 0x267e24: 0x77c0  sll         $t6, $zero, 31
    ctx->pc = 0x267e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_267e28:
    // 0x267e28: 0x0  nop
    ctx->pc = 0x267e28u;
    // NOP
label_267e2c:
    // 0x267e2c: 0x0  nop
    ctx->pc = 0x267e2cu;
    // NOP
label_267e30:
    // 0x267e30: 0x11f16  .word       0x00011F16                   # dsrlv       $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267e34:
    // 0x267e34: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267e38:
    // 0x267e38: 0x0  nop
    ctx->pc = 0x267e38u;
    // NOP
label_267e3c:
    // 0x267e3c: 0x0  nop
    ctx->pc = 0x267e3cu;
    // NOP
label_267e40:
    // 0x267e40: 0x11f25  .word       0x00011F25                   # or          $v1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_267e44:
    // 0x267e44: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x267e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267e48:
    // 0x267e48: 0x0  nop
    ctx->pc = 0x267e48u;
    // NOP
label_267e4c:
    // 0x267e4c: 0x0  nop
    ctx->pc = 0x267e4cu;
    // NOP
label_267e50:
    // 0x267e50: 0x11f36  tne         $zero, $at, 124
    ctx->pc = 0x267e50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267e54:
    // 0x267e54: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_267e58:
    // 0x267e58: 0x0  nop
    ctx->pc = 0x267e58u;
    // NOP
label_267e5c:
    // 0x267e5c: 0x0  nop
    ctx->pc = 0x267e5cu;
    // NOP
label_267e60:
    // 0x267e60: 0x11f4f  .word       0x00011F4F                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267e64:
    // 0x267e64: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267e68:
    // 0x267e68: 0x0  nop
    ctx->pc = 0x267e68u;
    // NOP
label_267e6c:
    // 0x267e6c: 0x0  nop
    ctx->pc = 0x267e6cu;
    // NOP
label_267e70:
    // 0x267e70: 0x11f5c  .word       0x00011F5C                   # dmult       $zero, $at # 00001F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267E70 raw=0x00011F5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267e74:
    // 0x267e74: 0x70f0  tge         $zero, $zero, 451
    ctx->pc = 0x267e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267e78:
    // 0x267e78: 0x0  nop
    ctx->pc = 0x267e78u;
    // NOP
label_267e7c:
    // 0x267e7c: 0x0  nop
    ctx->pc = 0x267e7cu;
    // NOP
label_267e80:
    // 0x267e80: 0x11f6b  .word       0x00011F6B                   # sltu        $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267e84:
    // 0x267e84: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267e88:
    // 0x267e88: 0x0  nop
    ctx->pc = 0x267e88u;
    // NOP
label_267e8c:
    // 0x267e8c: 0x0  nop
    ctx->pc = 0x267e8cu;
    // NOP
label_267e90:
    // 0x267e90: 0x11f77  .word       0x00011F77                   # INVALID     $zero, $at, 0x1F77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267E90 raw=0x00011F77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267e94:
    // 0x267e94: 0x7800  sll         $t7, $zero, 0
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267e98:
    // 0x267e98: 0x0  nop
    ctx->pc = 0x267e98u;
    // NOP
label_267e9c:
    // 0x267e9c: 0x0  nop
    ctx->pc = 0x267e9cu;
    // NOP
label_267ea0:
    // 0x267ea0: 0x11f86  .word       0x00011F86                   # srlv        $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267ea4:
    // 0x267ea4: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x267ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267ea8:
    // 0x267ea8: 0x0  nop
    ctx->pc = 0x267ea8u;
    // NOP
label_267eac:
    // 0x267eac: 0x0  nop
    ctx->pc = 0x267eacu;
    // NOP
label_267eb0:
    // 0x267eb0: 0x11f94  .word       0x00011F94                   # dsllv       $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267eb4:
    // 0x267eb4: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_267eb8:
    // 0x267eb8: 0x0  nop
    ctx->pc = 0x267eb8u;
    // NOP
label_267ebc:
    // 0x267ebc: 0x0  nop
    ctx->pc = 0x267ebcu;
    // NOP
label_267ec0:
    // 0x267ec0: 0x11fac  .word       0x00011FAC                   # dadd        $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ec0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267ec4:
    // 0x267ec4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x267ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267ec8:
    // 0x267ec8: 0x0  nop
    ctx->pc = 0x267ec8u;
    // NOP
label_267ecc:
    // 0x267ecc: 0x0  nop
    ctx->pc = 0x267eccu;
    // NOP
label_267ed0:
    // 0x267ed0: 0x11fc0  sll         $v1, $at, 31
    ctx->pc = 0x267ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_267ed4:
    // 0x267ed4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x267ed4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_267ed8:
    // 0x267ed8: 0x0  nop
    ctx->pc = 0x267ed8u;
    // NOP
label_267edc:
    // 0x267edc: 0x0  nop
    ctx->pc = 0x267edcu;
    // NOP
label_267ee0:
    // 0x267ee0: 0x11fce  .word       0x00011FCE                   # INVALID     $zero, $at, 0x1FCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x267EE0 raw=0x00011FCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ee4:
    // 0x267ee4: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x267ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_267ee8:
    // 0x267ee8: 0x0  nop
    ctx->pc = 0x267ee8u;
    // NOP
label_267eec:
    // 0x267eec: 0x0  nop
    ctx->pc = 0x267eecu;
    // NOP
label_267ef0:
    // 0x267ef0: 0x11fdc  .word       0x00011FDC                   # dmult       $zero, $at # 00001FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267EF0 raw=0x00011FDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267ef4:
    // 0x267ef4: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_267ef8:
    // 0x267ef8: 0x0  nop
    ctx->pc = 0x267ef8u;
    // NOP
label_267efc:
    // 0x267efc: 0x0  nop
    ctx->pc = 0x267efcu;
    // NOP
label_267f00:
    // 0x267f00: 0x11fe6  .word       0x00011FE6                   # xor         $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267f04:
    // 0x267f04: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x267f04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f08:
    // 0x267f08: 0x0  nop
    ctx->pc = 0x267f08u;
    // NOP
label_267f0c:
    // 0x267f0c: 0x0  nop
    ctx->pc = 0x267f0cu;
    // NOP
label_267f10:
    // 0x267f10: 0x11ff6  tne         $zero, $at, 127
    ctx->pc = 0x267f10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267f14:
    // 0x267f14: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x267f14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267f18:
    // 0x267f18: 0x0  nop
    ctx->pc = 0x267f18u;
    // NOP
label_267f1c:
    // 0x267f1c: 0x0  nop
    ctx->pc = 0x267f1cu;
    // NOP
label_267f20:
    // 0x267f20: 0x12006  srlv        $a0, $at, $zero
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267f24:
    // 0x267f24: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x267f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f28:
    // 0x267f28: 0x0  nop
    ctx->pc = 0x267f28u;
    // NOP
label_267f2c:
    // 0x267f2c: 0x0  nop
    ctx->pc = 0x267f2cu;
    // NOP
label_267f30:
    // 0x267f30: 0x12014  dsllv       $a0, $at, $zero
    ctx->pc = 0x267f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267f34:
    // 0x267f34: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267f38:
    // 0x267f38: 0x0  nop
    ctx->pc = 0x267f38u;
    // NOP
label_267f3c:
    // 0x267f3c: 0x0  nop
    ctx->pc = 0x267f3cu;
    // NOP
label_267f40:
    // 0x267f40: 0x1201d  .word       0x0001201D                   # dmultu      $zero, $at # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267F40 raw=0x0001201D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267f44:
    // 0x267f44: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f44u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267f48:
    // 0x267f48: 0x0  nop
    ctx->pc = 0x267f48u;
    // NOP
label_267f4c:
    // 0x267f4c: 0x0  nop
    ctx->pc = 0x267f4cu;
    // NOP
label_267f50:
    // 0x267f50: 0x12030  tge         $zero, $at, 128
    ctx->pc = 0x267f50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267f54:
    // 0x267f54: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_267f58:
    // 0x267f58: 0x0  nop
    ctx->pc = 0x267f58u;
    // NOP
label_267f5c:
    // 0x267f5c: 0x0  nop
    ctx->pc = 0x267f5cu;
    // NOP
label_267f60:
    // 0x267f60: 0x1203d  .word       0x0001203D                   # INVALID     $zero, $at, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267F60 raw=0x0001203D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267f64:
    // 0x267f64: 0x7780  sll         $t6, $zero, 30
    ctx->pc = 0x267f64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_267f68:
    // 0x267f68: 0x0  nop
    ctx->pc = 0x267f68u;
    // NOP
label_267f6c:
    // 0x267f6c: 0x0  nop
    ctx->pc = 0x267f6cu;
    // NOP
label_267f70:
    // 0x267f70: 0x1204c  .word       0x0001204C                   # syscall     129 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f70u;
    ctx->pc = 0x267F74u;
runtime->handleSyscall(rdram, ctx, 0x481u);
label_267f74:
    // 0x267f74: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x267f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267f78:
    // 0x267f78: 0x0  nop
    ctx->pc = 0x267f78u;
    // NOP
label_267f7c:
    // 0x267f7c: 0x0  nop
    ctx->pc = 0x267f7cu;
    // NOP
label_267f80:
    // 0x267f80: 0x12061  .word       0x00012061                   # addu        $a0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267f84:
    // 0x267f84: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x267f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_267f88:
    // 0x267f88: 0x0  nop
    ctx->pc = 0x267f88u;
    // NOP
label_267f8c:
    // 0x267f8c: 0x0  nop
    ctx->pc = 0x267f8cu;
    // NOP
label_267f90:
    // 0x267f90: 0x1207a  dsrl        $a0, $at, 1
    ctx->pc = 0x267f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 1);
label_267f94:
    // 0x267f94: 0xa000  sll         $s4, $zero, 0
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267f98:
    // 0x267f98: 0x0  nop
    ctx->pc = 0x267f98u;
    // NOP
label_267f9c:
    // 0x267f9c: 0x0  nop
    ctx->pc = 0x267f9cu;
    // NOP
label_267fa0:
    // 0x267fa0: 0x1208e  .word       0x0001208E                   # INVALID     $zero, $at, 0x208E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x267FA0 raw=0x0001208E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267fa4:
    // 0x267fa4: 0xb2b0  tge         $zero, $zero, 714
    ctx->pc = 0x267fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267fa8:
    // 0x267fa8: 0x0  nop
    ctx->pc = 0x267fa8u;
    // NOP
label_267fac:
    // 0x267fac: 0x0  nop
    ctx->pc = 0x267facu;
    // NOP
label_267fb0:
    // 0x267fb0: 0x120a5  .word       0x000120A5                   # or          $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_267fb4:
    // 0x267fb4: 0x3f60  .word       0x00003F60                   # add         $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_267fb8:
    // 0x267fb8: 0x0  nop
    ctx->pc = 0x267fb8u;
    // NOP
label_267fbc:
    // 0x267fbc: 0x0  nop
    ctx->pc = 0x267fbcu;
    // NOP
label_267fc0:
    // 0x267fc0: 0x120ad  .word       0x000120AD                   # daddu       $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267fc4:
    // 0x267fc4: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fc4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267fc8:
    // 0x267fc8: 0x0  nop
    ctx->pc = 0x267fc8u;
    // NOP
label_267fcc:
    // 0x267fcc: 0x0  nop
    ctx->pc = 0x267fccu;
    // NOP
label_267fd0:
    // 0x267fd0: 0x120be  dsrl32      $a0, $at, 2
    ctx->pc = 0x267fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (32 + 2));
label_267fd4:
    // 0x267fd4: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x267fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267fd8:
    // 0x267fd8: 0x0  nop
    ctx->pc = 0x267fd8u;
    // NOP
label_267fdc:
    // 0x267fdc: 0x0  nop
    ctx->pc = 0x267fdcu;
    // NOP
label_267fe0:
    // 0x267fe0: 0x120c7  .word       0x000120C7                   # srav        $a0, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fe0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267fe4:
    // 0x267fe4: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267fe4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_267fe8:
    // 0x267fe8: 0x0  nop
    ctx->pc = 0x267fe8u;
    // NOP
label_267fec:
    // 0x267fec: 0x0  nop
    ctx->pc = 0x267fecu;
    // NOP
label_267ff0:
    // 0x267ff0: 0x120e2  .word       0x000120E2                   # neg         $a0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ff0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_267ff4:
    // 0x267ff4: 0x8920  .word       0x00008920                   # add         $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_267ff8:
    // 0x267ff8: 0x0  nop
    ctx->pc = 0x267ff8u;
    // NOP
label_267ffc:
    // 0x267ffc: 0x0  nop
    ctx->pc = 0x267ffcu;
    // NOP
label_268000:
    // 0x268000: 0x120f4  teq         $zero, $at, 131
    ctx->pc = 0x268000u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268004:
    // 0x268004: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268008:
    // 0x268008: 0x0  nop
    ctx->pc = 0x268008u;
    // NOP
label_26800c:
    // 0x26800c: 0x0  nop
    ctx->pc = 0x26800cu;
    // NOP
label_268010:
    // 0x268010: 0x12103  sra         $a0, $at, 4
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 4));
label_268014:
    // 0x268014: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_268018:
    // 0x268018: 0x0  nop
    ctx->pc = 0x268018u;
    // NOP
label_26801c:
    // 0x26801c: 0x0  nop
    ctx->pc = 0x26801cu;
    // NOP
label_268020:
    // 0x268020: 0x12111  .word       0x00012111                   # mthi        $zero # 00012100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268020u;
    ctx->hi = GPR_U64(ctx, 0);
label_268024:
    // 0x268024: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x268024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268028:
    // 0x268028: 0x0  nop
    ctx->pc = 0x268028u;
    // NOP
label_26802c:
    // 0x26802c: 0x0  nop
    ctx->pc = 0x26802cu;
    // NOP
label_268030:
    // 0x268030: 0x12125  .word       0x00012125                   # or          $a0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_268034:
    // 0x268034: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268034u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_268038:
    // 0x268038: 0x0  nop
    ctx->pc = 0x268038u;
    // NOP
label_26803c:
    // 0x26803c: 0x0  nop
    ctx->pc = 0x26803cu;
    // NOP
label_268040:
    // 0x268040: 0x12133  tltu        $zero, $at, 132
    ctx->pc = 0x268040u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_268044:
    // 0x268044: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_268048:
    // 0x268048: 0x0  nop
    ctx->pc = 0x268048u;
    // NOP
label_26804c:
    // 0x26804c: 0x0  nop
    ctx->pc = 0x26804cu;
    // NOP
label_268050:
    // 0x268050: 0x12144  .word       0x00012144                   # sllv        $a0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_268054:
    // 0x268054: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x268054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268058:
    // 0x268058: 0x0  nop
    ctx->pc = 0x268058u;
    // NOP
label_26805c:
    // 0x26805c: 0x0  nop
    ctx->pc = 0x26805cu;
    // NOP
label_268060:
    // 0x268060: 0x12155  .word       0x00012155                   # INVALID     $zero, $at, 0x2155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x268060 raw=0x00012155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268064:
    // 0x268064: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x268064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268068:
    // 0x268068: 0x0  nop
    ctx->pc = 0x268068u;
    // NOP
label_26806c:
    // 0x26806c: 0x0  nop
    ctx->pc = 0x26806cu;
    // NOP
label_268070:
    // 0x268070: 0x12164  .word       0x00012164                   # and         $a0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_268074:
    // 0x268074: 0xda90  .word       0x0000DA90                   # mfhi        $k1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268074u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_268078:
    // 0x268078: 0x0  nop
    ctx->pc = 0x268078u;
    // NOP
label_26807c:
    // 0x26807c: 0x0  nop
    ctx->pc = 0x26807cu;
    // NOP
label_268080:
    // 0x268080: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x268080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_268084:
    // 0x268084: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_268088:
    // 0x268088: 0x0  nop
    ctx->pc = 0x268088u;
    // NOP
label_26808c:
    // 0x26808c: 0x0  nop
    ctx->pc = 0x26808cu;
    // NOP
label_268090:
    // 0x268090: 0x12194  .word       0x00012194                   # dsllv       $a0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_268094:
    // 0x268094: 0x6e90  .word       0x00006E90                   # mfhi        $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_268098:
    // 0x268098: 0x0  nop
    ctx->pc = 0x268098u;
    // NOP
label_26809c:
    // 0x26809c: 0x0  nop
    ctx->pc = 0x26809cu;
    // NOP
label_2680a0:
    // 0x2680a0: 0x121a2  .word       0x000121A2                   # neg         $a0, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2680a4:
    // 0x2680a4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2680a8:
    // 0x2680a8: 0x0  nop
    ctx->pc = 0x2680a8u;
    // NOP
label_2680ac:
    // 0x2680ac: 0x0  nop
    ctx->pc = 0x2680acu;
    // NOP
label_2680b0:
    // 0x2680b0: 0x121ac  .word       0x000121AC                   # dadd        $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2680b4:
    // 0x2680b4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2680b8:
    // 0x2680b8: 0x0  nop
    ctx->pc = 0x2680b8u;
    // NOP
label_2680bc:
    // 0x2680bc: 0x0  nop
    ctx->pc = 0x2680bcu;
    // NOP
label_2680c0:
    // 0x2680c0: 0x121b6  tne         $zero, $at, 134
    ctx->pc = 0x2680c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2680c4:
    // 0x2680c4: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2680c8:
    // 0x2680c8: 0x0  nop
    ctx->pc = 0x2680c8u;
    // NOP
label_2680cc:
    // 0x2680cc: 0x0  nop
    ctx->pc = 0x2680ccu;
    // NOP
label_2680d0:
    // 0x2680d0: 0x121c5  .word       0x000121C5                   # INVALID     $zero, $at, 0x21C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2680D0 raw=0x000121C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2680d4:
    // 0x2680d4: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2680d8:
    // 0x2680d8: 0x0  nop
    ctx->pc = 0x2680d8u;
    // NOP
label_2680dc:
    // 0x2680dc: 0x0  nop
    ctx->pc = 0x2680dcu;
    // NOP
label_2680e0:
    // 0x2680e0: 0x121d7  .word       0x000121D7                   # dsrav       $a0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2680e4:
    // 0x2680e4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x2680e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2680e8:
    // 0x2680e8: 0x0  nop
    ctx->pc = 0x2680e8u;
    // NOP
label_2680ec:
    // 0x2680ec: 0x0  nop
    ctx->pc = 0x2680ecu;
    // NOP
label_2680f0:
    // 0x2680f0: 0x121e6  .word       0x000121E6                   # xor         $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2680f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2680f4:
    // 0x2680f4: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2680f8:
    // 0x2680f8: 0x0  nop
    ctx->pc = 0x2680f8u;
    // NOP
label_2680fc:
    // 0x2680fc: 0x0  nop
    ctx->pc = 0x2680fcu;
    // NOP
label_268100:
    // 0x268100: 0x121ef  .word       0x000121EF                   # dsubu       $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268104:
    // 0x268104: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x268104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268108:
    // 0x268108: 0x0  nop
    ctx->pc = 0x268108u;
    // NOP
label_26810c:
    // 0x26810c: 0x0  nop
    ctx->pc = 0x26810cu;
    // NOP
label_268110:
    // 0x268110: 0x12203  sra         $a0, $at, 8
    ctx->pc = 0x268110u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 8));
label_268114:
    // 0x268114: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268114u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_268118:
    // 0x268118: 0x0  nop
    ctx->pc = 0x268118u;
    // NOP
label_26811c:
    // 0x26811c: 0x0  nop
    ctx->pc = 0x26811cu;
    // NOP
label_268120:
    // 0x268120: 0x1221b  .word       0x0001221B                   # divu        $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268120u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_268124:
    // 0x268124: 0xce30  tge         $zero, $zero, 824
    ctx->pc = 0x268124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_268128:
    // 0x268128: 0x0  nop
    ctx->pc = 0x268128u;
    // NOP
label_26812c:
    // 0x26812c: 0x0  nop
    ctx->pc = 0x26812cu;
    // NOP
label_268130:
    // 0x268130: 0x12235  .word       0x00012235                   # INVALID     $zero, $at, 0x2235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x268130 raw=0x00012235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268134:
    // 0x268134: 0xc9e0  .word       0x0000C9E0                   # add         $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_268138:
    // 0x268138: 0x0  nop
    ctx->pc = 0x268138u;
    // NOP
label_26813c:
    // 0x26813c: 0x0  nop
    ctx->pc = 0x26813cu;
    // NOP
label_268140:
    // 0x268140: 0x1224f  .word       0x0001224F                   # sync # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268140u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_268144:
    // 0x268144: 0x4990  .word       0x00004990                   # mfhi        $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268144u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_268148:
    // 0x268148: 0x0  nop
    ctx->pc = 0x268148u;
    // NOP
label_26814c:
    // 0x26814c: 0x0  nop
    ctx->pc = 0x26814cu;
    // NOP
label_268150:
    // 0x268150: 0x12259  .word       0x00012259                   # multu       $zero, $at # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268150u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_268154:
    // 0x268154: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_268158:
    // 0x268158: 0x0  nop
    ctx->pc = 0x268158u;
    // NOP
label_26815c:
    // 0x26815c: 0x0  nop
    ctx->pc = 0x26815cu;
    // NOP
label_268160:
    // 0x268160: 0x12268  .word       0x00012268                   # mfsa        $a0 # 00010240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x268160u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_268164:
    // 0x268164: 0x3350  .word       0x00003350                   # mfhi        $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268164u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_268168:
    // 0x268168: 0x0  nop
    ctx->pc = 0x268168u;
    // NOP
label_26816c:
    // 0x26816c: 0x0  nop
    ctx->pc = 0x26816cu;
    // NOP
label_268170:
    // 0x268170: 0x1226f  .word       0x0001226F                   # dsubu       $a0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_268174:
    // 0x268174: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268174u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_268178:
    // 0x268178: 0x0  nop
    ctx->pc = 0x268178u;
    // NOP
label_26817c:
    // 0x26817c: 0x0  nop
    ctx->pc = 0x26817cu;
    // NOP
label_268180:
    // 0x268180: 0x12279  .word       0x00012279                   # INVALID     $zero, $at, 0x2279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x268180 raw=0x00012279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_268184:
    // 0x268184: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x268184u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_268188:
    // 0x268188: 0x0  nop
    ctx->pc = 0x268188u;
    // NOP
label_26818c:
    // 0x26818c: 0x0  nop
    ctx->pc = 0x26818cu;
    // NOP
label_268190:
    // 0x268190: 0x1228d  break       1, 138
    ctx->pc = 0x268190u;
    runtime->handleBreak(rdram, ctx);
label_268194:
    // 0x268194: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x268194u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_268198:
    // 0x268198: 0x0  nop
    ctx->pc = 0x268198u;
    // NOP
label_26819c:
    // 0x26819c: 0x0  nop
    ctx->pc = 0x26819cu;
    // NOP
label_2681a0:
    // 0x2681a0: 0x1229a  .word       0x0001229A                   # div         $a0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681a0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2681a4:
    // 0x2681a4: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2681a8:
    // 0x2681a8: 0x0  nop
    ctx->pc = 0x2681a8u;
    // NOP
label_2681ac:
    // 0x2681ac: 0x0  nop
    ctx->pc = 0x2681acu;
    // NOP
label_2681b0:
    // 0x2681b0: 0x122a9  .word       0x000122A9                   # mtsa        $zero # 00012280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2681b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2681b4:
    // 0x2681b4: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2681b8:
    // 0x2681b8: 0x0  nop
    ctx->pc = 0x2681b8u;
    // NOP
label_2681bc:
    // 0x2681bc: 0x0  nop
    ctx->pc = 0x2681bcu;
    // NOP
label_2681c0:
    // 0x2681c0: 0x122b6  tne         $zero, $at, 138
    ctx->pc = 0x2681c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2681c4:
    // 0x2681c4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681c4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2681c8:
    // 0x2681c8: 0x0  nop
    ctx->pc = 0x2681c8u;
    // NOP
label_2681cc:
    // 0x2681cc: 0x0  nop
    ctx->pc = 0x2681ccu;
    // NOP
label_2681d0:
    // 0x2681d0: 0x122d3  .word       0x000122D3                   # mtlo        $zero # 000122C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2681d4:
    // 0x2681d4: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2681d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
    ctx->pc = 0x2681d8u;
    return;
}
