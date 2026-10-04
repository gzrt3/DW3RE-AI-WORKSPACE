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


void FUN_0017faa0_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x180a40u: goto label_180a40;
        case 0x180a44u: goto label_180a44;
        case 0x180a48u: goto label_180a48;
        case 0x180a4cu: goto label_180a4c;
        case 0x180a50u: goto label_180a50;
        case 0x180a54u: goto label_180a54;
        case 0x180a58u: goto label_180a58;
        case 0x180a5cu: goto label_180a5c;
        case 0x180a60u: goto label_180a60;
        case 0x180a64u: goto label_180a64;
        case 0x180a68u: goto label_180a68;
        case 0x180a6cu: goto label_180a6c;
        case 0x180a70u: goto label_180a70;
        case 0x180a74u: goto label_180a74;
        case 0x180a78u: goto label_180a78;
        case 0x180a7cu: goto label_180a7c;
        case 0x180a80u: goto label_180a80;
        case 0x180a84u: goto label_180a84;
        case 0x180a88u: goto label_180a88;
        case 0x180a8cu: goto label_180a8c;
        case 0x180a90u: goto label_180a90;
        case 0x180a94u: goto label_180a94;
        case 0x180a98u: goto label_180a98;
        case 0x180a9cu: goto label_180a9c;
        case 0x180aa0u: goto label_180aa0;
        case 0x180aa4u: goto label_180aa4;
        case 0x180aa8u: goto label_180aa8;
        case 0x180aacu: goto label_180aac;
        case 0x180ab0u: goto label_180ab0;
        case 0x180ab4u: goto label_180ab4;
        case 0x180ab8u: goto label_180ab8;
        case 0x180abcu: goto label_180abc;
        case 0x180ac0u: goto label_180ac0;
        case 0x180ac4u: goto label_180ac4;
        case 0x180ac8u: goto label_180ac8;
        case 0x180accu: goto label_180acc;
        case 0x180ad0u: goto label_180ad0;
        case 0x180ad4u: goto label_180ad4;
        case 0x180ad8u: goto label_180ad8;
        case 0x180adcu: goto label_180adc;
        case 0x180ae0u: goto label_180ae0;
        case 0x180ae4u: goto label_180ae4;
        case 0x180ae8u: goto label_180ae8;
        case 0x180aecu: goto label_180aec;
        case 0x180af0u: goto label_180af0;
        case 0x180af4u: goto label_180af4;
        case 0x180af8u: goto label_180af8;
        case 0x180afcu: goto label_180afc;
        case 0x180b00u: goto label_180b00;
        case 0x180b04u: goto label_180b04;
        case 0x180b08u: goto label_180b08;
        case 0x180b0cu: goto label_180b0c;
        case 0x180b10u: goto label_180b10;
        case 0x180b14u: goto label_180b14;
        case 0x180b18u: goto label_180b18;
        case 0x180b1cu: goto label_180b1c;
        case 0x180b20u: goto label_180b20;
        case 0x180b24u: goto label_180b24;
        case 0x180b28u: goto label_180b28;
        case 0x180b2cu: goto label_180b2c;
        case 0x180b30u: goto label_180b30;
        case 0x180b34u: goto label_180b34;
        case 0x180b38u: goto label_180b38;
        case 0x180b3cu: goto label_180b3c;
        case 0x180b40u: goto label_180b40;
        case 0x180b44u: goto label_180b44;
        case 0x180b48u: goto label_180b48;
        case 0x180b4cu: goto label_180b4c;
        case 0x180b50u: goto label_180b50;
        case 0x180b54u: goto label_180b54;
        case 0x180b58u: goto label_180b58;
        case 0x180b5cu: goto label_180b5c;
        case 0x180b60u: goto label_180b60;
        case 0x180b64u: goto label_180b64;
        case 0x180b68u: goto label_180b68;
        case 0x180b6cu: goto label_180b6c;
        case 0x180b70u: goto label_180b70;
        case 0x180b74u: goto label_180b74;
        case 0x180b78u: goto label_180b78;
        case 0x180b7cu: goto label_180b7c;
        case 0x180b80u: goto label_180b80;
        case 0x180b84u: goto label_180b84;
        case 0x180b88u: goto label_180b88;
        case 0x180b8cu: goto label_180b8c;
        case 0x180b90u: goto label_180b90;
        case 0x180b94u: goto label_180b94;
        case 0x180b98u: goto label_180b98;
        case 0x180b9cu: goto label_180b9c;
        case 0x180ba0u: goto label_180ba0;
        case 0x180ba4u: goto label_180ba4;
        case 0x180ba8u: goto label_180ba8;
        case 0x180bacu: goto label_180bac;
        case 0x180bb0u: goto label_180bb0;
        case 0x180bb4u: goto label_180bb4;
        case 0x180bb8u: goto label_180bb8;
        case 0x180bbcu: goto label_180bbc;
        case 0x180bc0u: goto label_180bc0;
        case 0x180bc4u: goto label_180bc4;
        case 0x180bc8u: goto label_180bc8;
        case 0x180bccu: goto label_180bcc;
        case 0x180bd0u: goto label_180bd0;
        case 0x180bd4u: goto label_180bd4;
        case 0x180bd8u: goto label_180bd8;
        case 0x180bdcu: goto label_180bdc;
        case 0x180be0u: goto label_180be0;
        case 0x180be4u: goto label_180be4;
        case 0x180be8u: goto label_180be8;
        case 0x180becu: goto label_180bec;
        case 0x180bf0u: goto label_180bf0;
        case 0x180bf4u: goto label_180bf4;
        case 0x180bf8u: goto label_180bf8;
        case 0x180bfcu: goto label_180bfc;
        case 0x180c00u: goto label_180c00;
        case 0x180c04u: goto label_180c04;
        case 0x180c08u: goto label_180c08;
        case 0x180c0cu: goto label_180c0c;
        case 0x180c10u: goto label_180c10;
        case 0x180c14u: goto label_180c14;
        case 0x180c18u: goto label_180c18;
        case 0x180c1cu: goto label_180c1c;
        case 0x180c20u: goto label_180c20;
        case 0x180c24u: goto label_180c24;
        case 0x180c28u: goto label_180c28;
        case 0x180c2cu: goto label_180c2c;
        case 0x180c30u: goto label_180c30;
        case 0x180c34u: goto label_180c34;
        case 0x180c38u: goto label_180c38;
        case 0x180c3cu: goto label_180c3c;
        case 0x180c40u: goto label_180c40;
        case 0x180c44u: goto label_180c44;
        case 0x180c48u: goto label_180c48;
        case 0x180c4cu: goto label_180c4c;
        case 0x180c50u: goto label_180c50;
        case 0x180c54u: goto label_180c54;
        case 0x180c58u: goto label_180c58;
        case 0x180c5cu: goto label_180c5c;
        case 0x180c60u: goto label_180c60;
        case 0x180c64u: goto label_180c64;
        case 0x180c68u: goto label_180c68;
        case 0x180c6cu: goto label_180c6c;
        case 0x180c70u: goto label_180c70;
        case 0x180c74u: goto label_180c74;
        case 0x180c78u: goto label_180c78;
        case 0x180c7cu: goto label_180c7c;
        case 0x180c80u: goto label_180c80;
        case 0x180c84u: goto label_180c84;
        case 0x180c88u: goto label_180c88;
        case 0x180c8cu: goto label_180c8c;
        case 0x180c90u: goto label_180c90;
        case 0x180c94u: goto label_180c94;
        case 0x180c98u: goto label_180c98;
        case 0x180c9cu: goto label_180c9c;
        case 0x180ca0u: goto label_180ca0;
        case 0x180ca4u: goto label_180ca4;
        case 0x180ca8u: goto label_180ca8;
        case 0x180cacu: goto label_180cac;
        case 0x180cb0u: goto label_180cb0;
        case 0x180cb4u: goto label_180cb4;
        case 0x180cb8u: goto label_180cb8;
        case 0x180cbcu: goto label_180cbc;
        case 0x180cc0u: goto label_180cc0;
        case 0x180cc4u: goto label_180cc4;
        case 0x180cc8u: goto label_180cc8;
        case 0x180cccu: goto label_180ccc;
        case 0x180cd0u: goto label_180cd0;
        case 0x180cd4u: goto label_180cd4;
        case 0x180cd8u: goto label_180cd8;
        case 0x180cdcu: goto label_180cdc;
        case 0x180ce0u: goto label_180ce0;
        case 0x180ce4u: goto label_180ce4;
        case 0x180ce8u: goto label_180ce8;
        case 0x180cecu: goto label_180cec;
        case 0x180cf0u: goto label_180cf0;
        case 0x180cf4u: goto label_180cf4;
        case 0x180cf8u: goto label_180cf8;
        case 0x180cfcu: goto label_180cfc;
        case 0x180d00u: goto label_180d00;
        case 0x180d04u: goto label_180d04;
        case 0x180d08u: goto label_180d08;
        case 0x180d0cu: goto label_180d0c;
        case 0x180d10u: goto label_180d10;
        case 0x180d14u: goto label_180d14;
        case 0x180d18u: goto label_180d18;
        case 0x180d1cu: goto label_180d1c;
        case 0x180d20u: goto label_180d20;
        case 0x180d24u: goto label_180d24;
        case 0x180d28u: goto label_180d28;
        case 0x180d2cu: goto label_180d2c;
        case 0x180d30u: goto label_180d30;
        case 0x180d34u: goto label_180d34;
        case 0x180d38u: goto label_180d38;
        case 0x180d3cu: goto label_180d3c;
        case 0x180d40u: goto label_180d40;
        case 0x180d44u: goto label_180d44;
        case 0x180d48u: goto label_180d48;
        case 0x180d4cu: goto label_180d4c;
        case 0x180d50u: goto label_180d50;
        case 0x180d54u: goto label_180d54;
        case 0x180d58u: goto label_180d58;
        case 0x180d5cu: goto label_180d5c;
        case 0x180d60u: goto label_180d60;
        case 0x180d64u: goto label_180d64;
        case 0x180d68u: goto label_180d68;
        case 0x180d6cu: goto label_180d6c;
        case 0x180d70u: goto label_180d70;
        case 0x180d74u: goto label_180d74;
        case 0x180d78u: goto label_180d78;
        case 0x180d7cu: goto label_180d7c;
        case 0x180d80u: goto label_180d80;
        case 0x180d84u: goto label_180d84;
        case 0x180d88u: goto label_180d88;
        case 0x180d8cu: goto label_180d8c;
        case 0x180d90u: goto label_180d90;
        case 0x180d94u: goto label_180d94;
        case 0x180d98u: goto label_180d98;
        case 0x180d9cu: goto label_180d9c;
        case 0x180da0u: goto label_180da0;
        case 0x180da4u: goto label_180da4;
        case 0x180da8u: goto label_180da8;
        case 0x180dacu: goto label_180dac;
        case 0x180db0u: goto label_180db0;
        case 0x180db4u: goto label_180db4;
        case 0x180db8u: goto label_180db8;
        case 0x180dbcu: goto label_180dbc;
        case 0x180dc0u: goto label_180dc0;
        case 0x180dc4u: goto label_180dc4;
        case 0x180dc8u: goto label_180dc8;
        case 0x180dccu: goto label_180dcc;
        case 0x180dd0u: goto label_180dd0;
        case 0x180dd4u: goto label_180dd4;
        case 0x180dd8u: goto label_180dd8;
        case 0x180ddcu: goto label_180ddc;
        case 0x180de0u: goto label_180de0;
        case 0x180de4u: goto label_180de4;
        case 0x180de8u: goto label_180de8;
        case 0x180decu: goto label_180dec;
        case 0x180df0u: goto label_180df0;
        case 0x180df4u: goto label_180df4;
        case 0x180df8u: goto label_180df8;
        case 0x180dfcu: goto label_180dfc;
        case 0x180e00u: goto label_180e00;
        case 0x180e04u: goto label_180e04;
        case 0x180e08u: goto label_180e08;
        case 0x180e0cu: goto label_180e0c;
        case 0x180e10u: goto label_180e10;
        case 0x180e14u: goto label_180e14;
        case 0x180e18u: goto label_180e18;
        case 0x180e1cu: goto label_180e1c;
        case 0x180e20u: goto label_180e20;
        case 0x180e24u: goto label_180e24;
        case 0x180e28u: goto label_180e28;
        case 0x180e2cu: goto label_180e2c;
        case 0x180e30u: goto label_180e30;
        case 0x180e34u: goto label_180e34;
        case 0x180e38u: goto label_180e38;
        case 0x180e3cu: goto label_180e3c;
        case 0x180e40u: goto label_180e40;
        case 0x180e44u: goto label_180e44;
        case 0x180e48u: goto label_180e48;
        case 0x180e4cu: goto label_180e4c;
        case 0x180e50u: goto label_180e50;
        case 0x180e54u: goto label_180e54;
        case 0x180e58u: goto label_180e58;
        case 0x180e5cu: goto label_180e5c;
        case 0x180e60u: goto label_180e60;
        case 0x180e64u: goto label_180e64;
        case 0x180e68u: goto label_180e68;
        case 0x180e6cu: goto label_180e6c;
        case 0x180e70u: goto label_180e70;
        case 0x180e74u: goto label_180e74;
        case 0x180e78u: goto label_180e78;
        case 0x180e7cu: goto label_180e7c;
        case 0x180e80u: goto label_180e80;
        case 0x180e84u: goto label_180e84;
        case 0x180e88u: goto label_180e88;
        case 0x180e8cu: goto label_180e8c;
        case 0x180e90u: goto label_180e90;
        case 0x180e94u: goto label_180e94;
        case 0x180e98u: goto label_180e98;
        case 0x180e9cu: goto label_180e9c;
        case 0x180ea0u: goto label_180ea0;
        case 0x180ea4u: goto label_180ea4;
        case 0x180ea8u: goto label_180ea8;
        case 0x180eacu: goto label_180eac;
        case 0x180eb0u: goto label_180eb0;
        case 0x180eb4u: goto label_180eb4;
        case 0x180eb8u: goto label_180eb8;
        case 0x180ebcu: goto label_180ebc;
        case 0x180ec0u: goto label_180ec0;
        case 0x180ec4u: goto label_180ec4;
        case 0x180ec8u: goto label_180ec8;
        case 0x180eccu: goto label_180ecc;
        case 0x180ed0u: goto label_180ed0;
        case 0x180ed4u: goto label_180ed4;
        case 0x180ed8u: goto label_180ed8;
        case 0x180edcu: goto label_180edc;
        case 0x180ee0u: goto label_180ee0;
        case 0x180ee4u: goto label_180ee4;
        case 0x180ee8u: goto label_180ee8;
        case 0x180eecu: goto label_180eec;
        case 0x180ef0u: goto label_180ef0;
        case 0x180ef4u: goto label_180ef4;
        case 0x180ef8u: goto label_180ef8;
        case 0x180efcu: goto label_180efc;
        case 0x180f00u: goto label_180f00;
        case 0x180f04u: goto label_180f04;
        case 0x180f08u: goto label_180f08;
        case 0x180f0cu: goto label_180f0c;
        case 0x180f10u: goto label_180f10;
        case 0x180f14u: goto label_180f14;
        case 0x180f18u: goto label_180f18;
        case 0x180f1cu: goto label_180f1c;
        case 0x180f20u: goto label_180f20;
        case 0x180f24u: goto label_180f24;
        case 0x180f28u: goto label_180f28;
        case 0x180f2cu: goto label_180f2c;
        case 0x180f30u: goto label_180f30;
        case 0x180f34u: goto label_180f34;
        case 0x180f38u: goto label_180f38;
        case 0x180f3cu: goto label_180f3c;
        case 0x180f40u: goto label_180f40;
        case 0x180f44u: goto label_180f44;
        case 0x180f48u: goto label_180f48;
        case 0x180f4cu: goto label_180f4c;
        case 0x180f50u: goto label_180f50;
        case 0x180f54u: goto label_180f54;
        case 0x180f58u: goto label_180f58;
        case 0x180f5cu: goto label_180f5c;
        case 0x180f60u: goto label_180f60;
        case 0x180f64u: goto label_180f64;
        case 0x180f68u: goto label_180f68;
        case 0x180f6cu: goto label_180f6c;
        case 0x180f70u: goto label_180f70;
        case 0x180f74u: goto label_180f74;
        case 0x180f78u: goto label_180f78;
        case 0x180f7cu: goto label_180f7c;
        case 0x180f80u: goto label_180f80;
        case 0x180f84u: goto label_180f84;
        case 0x180f88u: goto label_180f88;
        case 0x180f8cu: goto label_180f8c;
        case 0x180f90u: goto label_180f90;
        case 0x180f94u: goto label_180f94;
        case 0x180f98u: goto label_180f98;
        case 0x180f9cu: goto label_180f9c;
        case 0x180fa0u: goto label_180fa0;
        case 0x180fa4u: goto label_180fa4;
        case 0x180fa8u: goto label_180fa8;
        case 0x180facu: goto label_180fac;
        case 0x180fb0u: goto label_180fb0;
        case 0x180fb4u: goto label_180fb4;
        case 0x180fb8u: goto label_180fb8;
        case 0x180fbcu: goto label_180fbc;
        case 0x180fc0u: goto label_180fc0;
        case 0x180fc4u: goto label_180fc4;
        case 0x180fc8u: goto label_180fc8;
        case 0x180fccu: goto label_180fcc;
        case 0x180fd0u: goto label_180fd0;
        case 0x180fd4u: goto label_180fd4;
        case 0x180fd8u: goto label_180fd8;
        case 0x180fdcu: goto label_180fdc;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fe4u: goto label_180fe4;
        case 0x180fe8u: goto label_180fe8;
        case 0x180fecu: goto label_180fec;
        case 0x180ff0u: goto label_180ff0;
        case 0x180ff4u: goto label_180ff4;
        case 0x180ff8u: goto label_180ff8;
        case 0x180ffcu: goto label_180ffc;
        case 0x181000u: goto label_181000;
        case 0x181004u: goto label_181004;
        case 0x181008u: goto label_181008;
        case 0x18100cu: goto label_18100c;
        case 0x181010u: goto label_181010;
        case 0x181014u: goto label_181014;
        case 0x181018u: goto label_181018;
        case 0x18101cu: goto label_18101c;
        case 0x181020u: goto label_181020;
        case 0x181024u: goto label_181024;
        case 0x181028u: goto label_181028;
        case 0x18102cu: goto label_18102c;
        case 0x181030u: goto label_181030;
        case 0x181034u: goto label_181034;
        case 0x181038u: goto label_181038;
        case 0x18103cu: goto label_18103c;
        case 0x181040u: goto label_181040;
        case 0x181044u: goto label_181044;
        case 0x181048u: goto label_181048;
        case 0x18104cu: goto label_18104c;
        case 0x181050u: goto label_181050;
        case 0x181054u: goto label_181054;
        case 0x181058u: goto label_181058;
        case 0x18105cu: goto label_18105c;
        case 0x181060u: goto label_181060;
        case 0x181064u: goto label_181064;
        case 0x181068u: goto label_181068;
        case 0x18106cu: goto label_18106c;
        case 0x181070u: goto label_181070;
        case 0x181074u: goto label_181074;
        case 0x181078u: goto label_181078;
        case 0x18107cu: goto label_18107c;
        case 0x181080u: goto label_181080;
        case 0x181084u: goto label_181084;
        case 0x181088u: goto label_181088;
        case 0x18108cu: goto label_18108c;
        case 0x181090u: goto label_181090;
        case 0x181094u: goto label_181094;
        case 0x181098u: goto label_181098;
        case 0x18109cu: goto label_18109c;
        case 0x1810a0u: goto label_1810a0;
        case 0x1810a4u: goto label_1810a4;
        case 0x1810a8u: goto label_1810a8;
        case 0x1810acu: goto label_1810ac;
        case 0x1810b0u: goto label_1810b0;
        case 0x1810b4u: goto label_1810b4;
        case 0x1810b8u: goto label_1810b8;
        case 0x1810bcu: goto label_1810bc;
        case 0x1810c0u: goto label_1810c0;
        case 0x1810c4u: goto label_1810c4;
        case 0x1810c8u: goto label_1810c8;
        case 0x1810ccu: goto label_1810cc;
        case 0x1810d0u: goto label_1810d0;
        case 0x1810d4u: goto label_1810d4;
        case 0x1810d8u: goto label_1810d8;
        case 0x1810dcu: goto label_1810dc;
        case 0x1810e0u: goto label_1810e0;
        case 0x1810e4u: goto label_1810e4;
        case 0x1810e8u: goto label_1810e8;
        case 0x1810ecu: goto label_1810ec;
        case 0x1810f0u: goto label_1810f0;
        case 0x1810f4u: goto label_1810f4;
        case 0x1810f8u: goto label_1810f8;
        case 0x1810fcu: goto label_1810fc;
        case 0x181100u: goto label_181100;
        case 0x181104u: goto label_181104;
        case 0x181108u: goto label_181108;
        case 0x18110cu: goto label_18110c;
        case 0x181110u: goto label_181110;
        case 0x181114u: goto label_181114;
        case 0x181118u: goto label_181118;
        case 0x18111cu: goto label_18111c;
        case 0x181120u: goto label_181120;
        case 0x181124u: goto label_181124;
        case 0x181128u: goto label_181128;
        case 0x18112cu: goto label_18112c;
        case 0x181130u: goto label_181130;
        case 0x181134u: goto label_181134;
        case 0x181138u: goto label_181138;
        case 0x18113cu: goto label_18113c;
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        case 0x181168u: goto label_181168;
        case 0x18116cu: goto label_18116c;
        case 0x181170u: goto label_181170;
        case 0x181174u: goto label_181174;
        case 0x181178u: goto label_181178;
        case 0x18117cu: goto label_18117c;
        case 0x181180u: goto label_181180;
        case 0x181184u: goto label_181184;
        case 0x181188u: goto label_181188;
        case 0x18118cu: goto label_18118c;
        case 0x181190u: goto label_181190;
        case 0x181194u: goto label_181194;
        case 0x181198u: goto label_181198;
        case 0x18119cu: goto label_18119c;
        case 0x1811a0u: goto label_1811a0;
        case 0x1811a4u: goto label_1811a4;
        case 0x1811a8u: goto label_1811a8;
        case 0x1811acu: goto label_1811ac;
        case 0x1811b0u: goto label_1811b0;
        case 0x1811b4u: goto label_1811b4;
        case 0x1811b8u: goto label_1811b8;
        case 0x1811bcu: goto label_1811bc;
        case 0x1811c0u: goto label_1811c0;
        case 0x1811c4u: goto label_1811c4;
        case 0x1811c8u: goto label_1811c8;
        case 0x1811ccu: goto label_1811cc;
        case 0x1811d0u: goto label_1811d0;
        case 0x1811d4u: goto label_1811d4;
        case 0x1811d8u: goto label_1811d8;
        case 0x1811dcu: goto label_1811dc;
        case 0x1811e0u: goto label_1811e0;
        case 0x1811e4u: goto label_1811e4;
        case 0x1811e8u: goto label_1811e8;
        case 0x1811ecu: goto label_1811ec;
        case 0x1811f0u: goto label_1811f0;
        case 0x1811f4u: goto label_1811f4;
        case 0x1811f8u: goto label_1811f8;
        case 0x1811fcu: goto label_1811fc;
        case 0x181200u: goto label_181200;
        case 0x181204u: goto label_181204;
        case 0x181208u: goto label_181208;
        case 0x18120cu: goto label_18120c;
        default: return;
    }

label_180a40:
    // 0x180a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_180a44:
    // 0x180a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180a48:
    // 0x180a48: 0xc069218  jal         func_1A4860
label_180a4c:
    if (ctx->pc == 0x180A4Cu) {
        ctx->pc = 0x180A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A48u;
        // 0x180a4c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A50u;
        goto label_180a50;
    }
    ctx->pc = 0x180A48u;
    SET_GPR_U32(ctx, 31, 0x180A50u);
    ctx->pc = 0x180A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A48u;
    // 0x180a4c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x180A50u;
label_180a50:
    // 0x180a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180a54:
    // 0x180a54: 0x3e00008  jr          $ra
label_180a58:
    if (ctx->pc == 0x180A58u) {
        ctx->pc = 0x180A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A54u;
        // 0x180a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A5Cu;
        goto label_180a5c;
    }
    ctx->pc = 0x180A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A54u;
        // 0x180a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A5Cu;
label_180a5c:
    // 0x180a5c: 0x0  nop
    ctx->pc = 0x180a5cu;
    // NOP
label_180a60:
    // 0x180a60: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_180a64:
    // 0x180a64: 0x3e00008  jr          $ra
label_180a68:
    if (ctx->pc == 0x180A68u) {
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A64u;
        // 0x180a68: 0xaf838808  sw          $v1, -0x77F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A6Cu;
        goto label_180a6c;
    }
    ctx->pc = 0x180A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A64u;
        // 0x180a68: 0xaf838808  sw          $v1, -0x77F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A6Cu;
label_180a6c:
    // 0x180a6c: 0x0  nop
    ctx->pc = 0x180a6cu;
    // NOP
label_180a70:
    // 0x180a70: 0x3e00008  jr          $ra
label_180a74:
    if (ctx->pc == 0x180A74u) {
        ctx->pc = 0x180A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A70u;
        // 0x180a74: 0xaf8487e4  sw          $a0, -0x781C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A78u;
        goto label_180a78;
    }
    ctx->pc = 0x180A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A70u;
        // 0x180a74: 0xaf8487e4  sw          $a0, -0x781C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A78u;
label_180a78:
    // 0x180a78: 0x0  nop
    ctx->pc = 0x180a78u;
    // NOP
label_180a7c:
    // 0x180a7c: 0x0  nop
    ctx->pc = 0x180a7cu;
    // NOP
label_180a80:
    // 0x180a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_180a84:
    // 0x180a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180a88:
    // 0x180a88: 0xc06c236  jal         func_1B08D8
label_180a8c:
    if (ctx->pc == 0x180A8Cu) {
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A88u;
        // 0x180a8c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A90u;
        goto label_180a90;
    }
    ctx->pc = 0x180A88u;
    SET_GPR_U32(ctx, 31, 0x180A90u);
    ctx->pc = 0x180A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A88u;
    // 0x180a8c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B08D8u;
    { ctx->pc = 0x1b08d8; return; }
    ctx->pc = 0x180A90u;
label_180a90:
    // 0x180a90: 0x93a3001b  lbu         $v1, 0x1B($sp)
    ctx->pc = 0x180a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
label_180a94:
    // 0x180a94: 0x93a5001a  lbu         $a1, 0x1A($sp)
    ctx->pc = 0x180a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
label_180a98:
    // 0x180a98: 0x93a20019  lbu         $v0, 0x19($sp)
    ctx->pc = 0x180a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
label_180a9c:
    // 0x180a9c: 0x34903  sra         $t1, $v1, 4
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 4));
label_180aa0:
    // 0x180aa0: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_180aa4:
    // 0x180aa4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_180aa8:
    // 0x180aa8: 0x53103  sra         $a2, $a1, 4
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 4));
label_180aac:
    // 0x180aac: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_180ab0:
    // 0x180ab0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_180ab4:
    // 0x180ab4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_180ab8:
    // 0x180ab8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_180abc:
    // 0x180abc: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_180ac0:
    // 0x180ac0: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_180ac4:
    // 0x180ac4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x180ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_180ac8:
    // 0x180ac8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_180acc:
    // 0x180acc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_180ad0:
    // 0x180ad0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x180ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_180ad4:
    // 0x180ad4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x180ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_180ad8:
    // 0x180ad8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_180adc:
    // 0x180adc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_180ae0:
    // 0x180ae0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_180ae4:
    // 0x180ae4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_180ae8:
    // 0x180ae8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_180aec:
    // 0x180aec: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_180af0:
    // 0x180af0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_180af4:
    // 0x180af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_180af8:
    // 0x180af8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_180afc:
    // 0x180afc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_180b00:
    // 0x180b00: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_180b04:
    // 0x180b04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_180b08:
    // 0x180b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_180b0c:
    // 0x180b0c: 0xc08f0c6  jal         func_23C318
label_180b10:
    if (ctx->pc == 0x180B10u) {
        ctx->pc = 0x180B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B0Cu;
        // 0x180b10: 0x34440001  ori         $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B14u;
        goto label_180b14;
    }
    ctx->pc = 0x180B0Cu;
    SET_GPR_U32(ctx, 31, 0x180B14u);
    ctx->pc = 0x180B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B0Cu;
    // 0x180b10: 0x34440001  ori         $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C318u;
    { ctx->pc = 0x23c318; return; }
    ctx->pc = 0x180B14u;
label_180b14:
    // 0x180b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180b18:
    // 0x180b18: 0x3e00008  jr          $ra
label_180b1c:
    if (ctx->pc == 0x180B1Cu) {
        ctx->pc = 0x180B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B18u;
        // 0x180b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B20u;
        goto label_180b20;
    }
    ctx->pc = 0x180B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B18u;
        // 0x180b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180B20u;
label_180b20:
    // 0x180b20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x180b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_180b24:
    // 0x180b24: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x180b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_180b28:
    // 0x180b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180b2c:
    // 0x180b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180b30:
    // 0x180b30: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_180b34:
    // 0x180b34: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_180b38:
    // 0x180b38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_180b3c:
    // 0x180b3c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_180b40:
    if (ctx->pc == 0x180B40u) {
        ctx->pc = 0x180B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B3Cu;
        // 0x180b40: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B44u;
        goto label_180b44;
    }
    ctx->pc = 0x180B3Cu;
    {
        const bool branch_taken_0x180b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B3Cu;
        // 0x180b40: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b3c) {
            ctx->pc = 0x180BF4u;
            goto label_180bf4;
        }
    }
    ctx->pc = 0x180B44u;
label_180b44:
    // 0x180b44: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x180b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_180b48:
    // 0x180b48: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
label_180b4c:
    if (ctx->pc == 0x180B4Cu) {
        ctx->pc = 0x180B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B48u;
        // 0x180b4c: 0x24a8fff8  addiu       $t0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180B50u;
        goto label_180b50;
    }
    ctx->pc = 0x180B48u;
    {
        const bool branch_taken_0x180b48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B48u;
        // 0x180b4c: 0x24a8fff8  addiu       $t0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b48) {
            ctx->pc = 0x180BC8u;
            goto label_180bc8;
        }
    }
    ctx->pc = 0x180B50u;
label_180b50:
    // 0x180b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180b54:
    // 0x180b54: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_180b58:
    // 0x180b58: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_180b5c:
    // 0x180b5c: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_180b60:
    // 0x180b60: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x180b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_180b64:
    // 0x180b64: 0x8d580008  lw          $t8, 0x8($t2)
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_180b68:
    // 0x180b68: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_180b6c:
    // 0x180b6c: 0x8d4f000c  lw          $t7, 0xC($t2)
    ctx->pc = 0x180b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_180b70:
    // 0x180b70: 0x8d4e0010  lw          $t6, 0x10($t2)
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_180b74:
    // 0x180b74: 0x8d4d0014  lw          $t5, 0x14($t2)
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_180b78:
    // 0x180b78: 0x8d4c0018  lw          $t4, 0x18($t2)
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_180b7c:
    // 0x180b7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_180b80:
    // 0x180b80: 0x8d4b001c  lw          $t3, 0x1C($t2)
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_180b84:
    // 0x180b84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180b88:
    // 0x180b88: 0x183100  sll         $a2, $t8, 4
    ctx->pc = 0x180b88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_180b8c:
    // 0x180b8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180b90:
    // 0x180b90: 0xf3100  sll         $a2, $t7, 4
    ctx->pc = 0x180b90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_180b94:
    // 0x180b94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180b98:
    // 0x180b98: 0xe3100  sll         $a2, $t6, 4
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_180b9c:
    // 0x180b9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180ba0:
    // 0x180ba0: 0xd3100  sll         $a2, $t5, 4
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_180ba4:
    // 0x180ba4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180ba8:
    // 0x180ba8: 0xc3100  sll         $a2, $t4, 4
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_180bac:
    // 0x180bac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180bb0:
    // 0x180bb0: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_180bb4:
    // 0x180bb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x180bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_180bb8:
    // 0x180bb8: 0x8d460020  lw          $a2, 0x20($t2)
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_180bbc:
    // 0x180bbc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_180bc0:
    // 0x180bc0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_180bc4:
    if (ctx->pc == 0x180BC4u) {
        ctx->pc = 0x180BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BC0u;
        // 0x180bc4: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BC8u;
        goto label_180bc8;
    }
    ctx->pc = 0x180BC0u;
    {
        const bool branch_taken_0x180bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BC0u;
        // 0x180bc4: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bc0) {
            ctx->pc = 0x180B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180b54;
        }
    }
    ctx->pc = 0x180BC8u;
label_180bc8:
    // 0x180bc8: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x180bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_180bcc:
    // 0x180bcc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_180bd0:
    if (ctx->pc == 0x180BD0u) {
        ctx->pc = 0x180BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BCCu;
        // 0x180bd0: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BD4u;
        goto label_180bd4;
    }
    ctx->pc = 0x180BCCu;
    {
        const bool branch_taken_0x180bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BCCu;
        // 0x180bd0: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bcc) {
            ctx->pc = 0x180BF4u;
            goto label_180bf4;
        }
    }
    ctx->pc = 0x180BD4u;
label_180bd4:
    // 0x180bd4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_180bd8:
    // 0x180bd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_180bdc:
    // 0x180bdc: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180be0:
    // 0x180be0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_180be4:
    // 0x180be4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x180be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_180be8:
    // 0x180be8: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_180bec:
    // 0x180bec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_180bf0:
    if (ctx->pc == 0x180BF0u) {
        ctx->pc = 0x180BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BECu;
        // 0x180bf0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180BF4u;
        goto label_180bf4;
    }
    ctx->pc = 0x180BECu;
    {
        const bool branch_taken_0x180bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BECu;
        // 0x180bf0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bec) {
            ctx->pc = 0x180BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180BF4u;
label_180bf4:
    // 0x180bf4: 0x0  nop
    ctx->pc = 0x180bf4u;
    // NOP
label_180bf8:
    // 0x180bf8: 0x3e00008  jr          $ra
label_180bfc:
    if (ctx->pc == 0x180BFCu) {
        ctx->pc = 0x180C00u;
        goto label_180c00;
    }
    ctx->pc = 0x180BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180C00u;
label_180c00:
    // 0x180c00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_180c04:
    // 0x180c04: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x180c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_180c08:
    // 0x180c08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x180c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_180c0c:
    // 0x180c0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180c0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_180c10:
    // 0x180c10: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x180c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_180c14:
    // 0x180c14: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x180c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_180c18:
    // 0x180c18: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x180c18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_180c1c:
    // 0x180c1c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x180c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_180c20:
    // 0x180c20: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_180c24:
    // 0x180c24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_180c28:
    // 0x180c28: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x180c28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180c2c:
    // 0x180c2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_180c30:
    // 0x180c30: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x180c30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180c34:
    // 0x180c34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180c38:
    // 0x180c38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x180c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_180c3c:
    // 0x180c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_180c40:
    // 0x180c40: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x180c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180c44:
    // 0x180c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180c48:
    // 0x180c48: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x180c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_180c4c:
    // 0x180c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180c50:
    // 0x180c50: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x180c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_180c54:
    // 0x180c54: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_180c58:
    if (ctx->pc == 0x180C58u) {
        ctx->pc = 0x180C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C54u;
        // 0x180c58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C5Cu;
        goto label_180c5c;
    }
    ctx->pc = 0x180C54u;
    {
        const bool branch_taken_0x180c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C54u;
        // 0x180c58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c54) {
            ctx->pc = 0x180C80u;
            goto label_180c80;
        }
    }
    ctx->pc = 0x180C5Cu;
label_180c5c:
    // 0x180c5c: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x180c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_180c60:
    // 0x180c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_180c64:
    // 0x180c64: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180c68:
    // 0x180c68: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
label_180c6c:
    if (ctx->pc == 0x180C6Cu) {
        ctx->pc = 0x180C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C68u;
        // 0x180c6c: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C70u;
        goto label_180c70;
    }
    ctx->pc = 0x180C68u;
    {
        const bool branch_taken_0x180c68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C68u;
        // 0x180c6c: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c68) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180C70u;
label_180c70:
    // 0x180c70: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180c74:
    // 0x180c74: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x180c74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_180c78:
    // 0x180c78: 0x10000026  b           . + 4 + (0x26 << 2)
label_180c7c:
    if (ctx->pc == 0x180C7Cu) {
        ctx->pc = 0x180C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C78u;
        // 0x180c7c: 0x26050007  addiu       $a1, $s0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C80u;
        goto label_180c80;
    }
    ctx->pc = 0x180C78u;
    {
        const bool branch_taken_0x180c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C78u;
        // 0x180c7c: 0x26050007  addiu       $a1, $s0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c78) {
            ctx->pc = 0x180D14u;
            goto label_180d14;
        }
    }
    ctx->pc = 0x180C80u;
label_180c80:
    // 0x180c80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180c84:
    // 0x180c84: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_180c88:
    if (ctx->pc == 0x180C88u) {
        ctx->pc = 0x180C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C84u;
        // 0x180c88: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180C8Cu;
        goto label_180c8c;
    }
    ctx->pc = 0x180C84u;
    {
        const bool branch_taken_0x180c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C84u;
        // 0x180c88: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c84) {
            ctx->pc = 0x180CB4u;
            goto label_180cb4;
        }
    }
    ctx->pc = 0x180C8Cu;
label_180c8c:
    // 0x180c8c: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x180c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_180c90:
    // 0x180c90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_180c94:
    // 0x180c94: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180c98:
    // 0x180c98: 0x441001d  bgez        $v0, . + 4 + (0x1D << 2)
label_180c9c:
    if (ctx->pc == 0x180C9Cu) {
        ctx->pc = 0x180C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C98u;
        // 0x180c9c: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CA0u;
        goto label_180ca0;
    }
    ctx->pc = 0x180C98u;
    {
        const bool branch_taken_0x180c98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C98u;
        // 0x180c9c: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c98) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180CA0u;
label_180ca0:
    // 0x180ca0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180ca4:
    // 0x180ca4: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_180ca8:
    // 0x180ca8: 0x10000019  b           . + 4 + (0x19 << 2)
label_180cac:
    if (ctx->pc == 0x180CACu) {
        ctx->pc = 0x180CB0u;
        goto label_180cb0;
    }
    ctx->pc = 0x180CA8u;
    {
        const bool branch_taken_0x180ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180ca8) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180CB0u;
label_180cb0:
    // 0x180cb0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_180cb4:
    // 0x180cb4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_180cb8:
    if (ctx->pc == 0x180CB8u) {
        ctx->pc = 0x180CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CB4u;
        // 0x180cb8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CBCu;
        goto label_180cbc;
    }
    ctx->pc = 0x180CB4u;
    {
        const bool branch_taken_0x180cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CB4u;
        // 0x180cb8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cb4) {
            ctx->pc = 0x180CE0u;
            goto label_180ce0;
        }
    }
    ctx->pc = 0x180CBCu;
label_180cbc:
    // 0x180cbc: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x180cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_180cc0:
    // 0x180cc0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180cc4:
    // 0x180cc4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_180cc8:
    if (ctx->pc == 0x180CC8u) {
        ctx->pc = 0x180CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC4u;
        // 0x180cc8: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CCCu;
        goto label_180ccc;
    }
    ctx->pc = 0x180CC4u;
    {
        const bool branch_taken_0x180cc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC4u;
        // 0x180cc8: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cc4) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180CCCu;
label_180ccc:
    // 0x180ccc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180cd0:
    // 0x180cd0: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_180cd4:
    // 0x180cd4: 0x1000000e  b           . + 4 + (0xE << 2)
label_180cd8:
    if (ctx->pc == 0x180CD8u) {
        ctx->pc = 0x180CDCu;
        goto label_180cdc;
    }
    ctx->pc = 0x180CD4u;
    {
        const bool branch_taken_0x180cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180cd4) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180CDCu;
label_180cdc:
    // 0x180cdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x180cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_180ce0:
    // 0x180ce0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_180ce4:
    if (ctx->pc == 0x180CE4u) {
        ctx->pc = 0x180CE8u;
        goto label_180ce8;
    }
    ctx->pc = 0x180CE0u;
    {
        const bool branch_taken_0x180ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180ce0) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180CE8u;
label_180ce8:
    // 0x180ce8: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x180ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_180cec:
    // 0x180cec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_180cf0:
    if (ctx->pc == 0x180CF0u) {
        ctx->pc = 0x180CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CECu;
        // 0x180cf0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180CF4u;
        goto label_180cf4;
    }
    ctx->pc = 0x180CECu;
    {
        const bool branch_taken_0x180cec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x180CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CECu;
        // 0x180cf0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cec) {
            ctx->pc = 0x180CFCu;
            goto label_180cfc;
        }
    }
    ctx->pc = 0x180CF4u;
label_180cf4:
    // 0x180cf4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_180cf8:
    // 0x180cf8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_180cfc:
    // 0x180cfc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180d00:
    // 0x180d00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_180d04:
    if (ctx->pc == 0x180D04u) {
        ctx->pc = 0x180D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D00u;
        // 0x180d04: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D08u;
        goto label_180d08;
    }
    ctx->pc = 0x180D00u;
    {
        const bool branch_taken_0x180d00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D00u;
        // 0x180d04: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d00) {
            ctx->pc = 0x180D10u;
            goto label_180d10;
        }
    }
    ctx->pc = 0x180D08u;
label_180d08:
    // 0x180d08: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x180d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_180d0c:
    // 0x180d0c: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x180d0cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_180d10:
    // 0x180d10: 0x26050007  addiu       $a1, $s0, 0x7
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
label_180d14:
    // 0x180d14: 0xc05e234  jal         func_1788D0
label_180d18:
    if (ctx->pc == 0x180D18u) {
        ctx->pc = 0x180D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D14u;
        // 0x180d18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D1Cu;
        goto label_180d1c;
    }
    ctx->pc = 0x180D14u;
    SET_GPR_U32(ctx, 31, 0x180D1Cu);
    ctx->pc = 0x180D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D14u;
    // 0x180d18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x180D14u, 0x180D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D1Cu;
label_180d1c:
    // 0x180d1c: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x180d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_180d20:
    // 0x180d20: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_180d24:
    // 0x180d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d28:
    // 0x180d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d2c:
    // 0x180d2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d30:
    // 0x180d30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180d30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180d34:
    // 0x180d34: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180d38:
    // 0x180d38: 0xc05e218  jal         func_178860
label_180d3c:
    if (ctx->pc == 0x180D3Cu) {
        ctx->pc = 0x180D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D38u;
        // 0x180d3c: 0x240b000e  addiu       $t3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D40u;
        goto label_180d40;
    }
    ctx->pc = 0x180D38u;
    SET_GPR_U32(ctx, 31, 0x180D40u);
    ctx->pc = 0x180D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D38u;
    // 0x180d3c: 0x240b000e  addiu       $t3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178860u, 0x180D38u, 0x180D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D40u;
label_180d40:
    // 0x180d40: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x180d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
label_180d44:
    // 0x180d44: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x180d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
label_180d48:
    // 0x180d48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180d48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_180d4c:
    // 0x180d4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180d4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_180d50:
    // 0x180d50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x180d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_180d54:
    // 0x180d54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x180d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_180d58:
    // 0x180d58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x180d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_180d5c:
    // 0x180d5c: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_180d60:
    // 0x180d60: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x180d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_180d64:
    // 0x180d64: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_180d68:
    // 0x180d68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180d68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_180d6c:
    // 0x180d6c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x180d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_180d70:
    // 0x180d70: 0xc05e210  jal         func_178840
label_180d74:
    if (ctx->pc == 0x180D74u) {
        ctx->pc = 0x180D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D70u;
        // 0x180d74: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180D78u;
        goto label_180d78;
    }
    ctx->pc = 0x180D70u;
    SET_GPR_U32(ctx, 31, 0x180D78u);
    ctx->pc = 0x180D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D70u;
    // 0x180d74: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x180D70u, 0x180D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D78u;
label_180d78:
    // 0x180d78: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x180d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
label_180d7c:
    // 0x180d7c: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x180d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_180d80:
    // 0x180d80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x180d80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_180d84:
    // 0x180d84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x180d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_180d88:
    // 0x180d88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x180d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_180d8c:
    // 0x180d8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x180d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_180d90:
    // 0x180d90: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x180d90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_180d94:
    // 0x180d94: 0x26c40030  addiu       $a0, $s6, 0x30
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_180d98:
    // 0x180d98: 0xc05e210  jal         func_178840
label_180d9c:
    if (ctx->pc == 0x180D9Cu) {
        ctx->pc = 0x180D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D98u;
        // 0x180d9c: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DA0u;
        goto label_180da0;
    }
    ctx->pc = 0x180D98u;
    SET_GPR_U32(ctx, 31, 0x180DA0u);
    ctx->pc = 0x180D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D98u;
    // 0x180d9c: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x180D98u, 0x180DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DA0u;
label_180da0:
    // 0x180da0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x180da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_180da4:
    // 0x180da4: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x180da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_180da8:
    // 0x180da8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x180da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_180dac:
    // 0x180dac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x180dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_180db0:
    // 0x180db0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x180db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_180db4:
    // 0x180db4: 0x26c40040  addiu       $a0, $s6, 0x40
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_180db8:
    // 0x180db8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x180db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_180dbc:
    // 0x180dbc: 0xc05e210  jal         func_178840
label_180dc0:
    if (ctx->pc == 0x180DC0u) {
        ctx->pc = 0x180DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DBCu;
        // 0x180dc0: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DC4u;
        goto label_180dc4;
    }
    ctx->pc = 0x180DBCu;
    SET_GPR_U32(ctx, 31, 0x180DC4u);
    ctx->pc = 0x180DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DBCu;
    // 0x180dc0: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x180DBCu, 0x180DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DC4u;
label_180dc4:
    // 0x180dc4: 0x26c40050  addiu       $a0, $s6, 0x50
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
label_180dc8:
    // 0x180dc8: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x180dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_180dcc:
    // 0x180dcc: 0xc05e210  jal         func_178840
label_180dd0:
    if (ctx->pc == 0x180DD0u) {
        ctx->pc = 0x180DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DCCu;
        // 0x180dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DD4u;
        goto label_180dd4;
    }
    ctx->pc = 0x180DCCu;
    SET_GPR_U32(ctx, 31, 0x180DD4u);
    ctx->pc = 0x180DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DCCu;
    // 0x180dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x180DCCu, 0x180DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DD4u;
label_180dd4:
    // 0x180dd4: 0x26c40060  addiu       $a0, $s6, 0x60
    ctx->pc = 0x180dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_180dd8:
    // 0x180dd8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_180ddc:
    // 0x180ddc: 0xc05e210  jal         func_178840
label_180de0:
    if (ctx->pc == 0x180DE0u) {
        ctx->pc = 0x180DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DDCu;
        // 0x180de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180DE4u;
        goto label_180de4;
    }
    ctx->pc = 0x180DDCu;
    SET_GPR_U32(ctx, 31, 0x180DE4u);
    ctx->pc = 0x180DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180DDCu;
    // 0x180de0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178840u, 0x180DDCu, 0x180DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180DE4u;
label_180de4:
    // 0x180de4: 0x26c40070  addiu       $a0, $s6, 0x70
    ctx->pc = 0x180de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_180de8:
    // 0x180de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180dec:
    // 0x180dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x180decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180df0:
    // 0x180df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180df4:
    // 0x180df4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180df8:
    // 0x180df8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180dfc:
    // 0x180dfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x180dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180e00:
    // 0x180e00: 0xc05e218  jal         func_178860
label_180e04:
    if (ctx->pc == 0x180E04u) {
        ctx->pc = 0x180E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E00u;
        // 0x180e04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E08u;
        goto label_180e08;
    }
    ctx->pc = 0x180E00u;
    SET_GPR_U32(ctx, 31, 0x180E08u);
    ctx->pc = 0x180E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180E00u;
    // 0x180e04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178860u, 0x180E00u, 0x180E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E08u;
label_180e08:
    // 0x180e08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x180e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_180e0c:
    // 0x180e0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x180e0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_180e10:
    // 0x180e10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x180e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_180e14:
    // 0x180e14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x180e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_180e18:
    // 0x180e18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x180e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_180e1c:
    // 0x180e1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_180e20:
    // 0x180e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_180e24:
    // 0x180e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_180e28:
    // 0x180e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180e2c:
    // 0x180e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_180e30:
    // 0x180e30: 0x3e00008  jr          $ra
label_180e34:
    if (ctx->pc == 0x180E34u) {
        ctx->pc = 0x180E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E30u;
        // 0x180e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180E38u;
        goto label_180e38;
    }
    ctx->pc = 0x180E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E30u;
        // 0x180e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E38u;
label_180e38:
    // 0x180e38: 0x0  nop
    ctx->pc = 0x180e38u;
    // NOP
label_180e3c:
    // 0x180e3c: 0x0  nop
    ctx->pc = 0x180e3cu;
    // NOP
label_180e40:
    // 0x180e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_180e44:
    // 0x180e44: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x180e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180e48:
    // 0x180e48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x180e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_180e4c:
    // 0x180e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180e50:
    // 0x180e50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_180e54:
    // 0x180e54: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x180e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_180e58:
    // 0x180e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_180e5c:
    // 0x180e5c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x180e5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180e60:
    // 0x180e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180e64:
    // 0x180e64: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x180e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_180e68:
    // 0x180e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_180e6c:
    // 0x180e6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x180e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180e70:
    // 0x180e70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180e74:
    // 0x180e74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180e78:
    // 0x180e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180e7c:
    // 0x180e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180e80:
    // 0x180e80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x180e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_180e84:
    // 0x180e84: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_180e88:
    // 0x180e88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x180e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180e8c:
    // 0x180e8c: 0x9605000c  lhu         $a1, 0xC($s0)
    ctx->pc = 0x180e8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_180e90:
    // 0x180e90: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x180e90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_180e94:
    // 0x180e94: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x180e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_180e98:
    // 0x180e98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_180e9c:
    if (ctx->pc == 0x180E9Cu) {
        ctx->pc = 0x180E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E98u;
        // 0x180e9c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EA0u;
        goto label_180ea0;
    }
    ctx->pc = 0x180E98u;
    {
        const bool branch_taken_0x180e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E98u;
        // 0x180e9c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e98) {
            ctx->pc = 0x180EBCu;
            goto label_180ebc;
        }
    }
    ctx->pc = 0x180EA0u;
label_180ea0:
    // 0x180ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180ea4:
    // 0x180ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180ea8:
    // 0x180ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180eac:
    // 0x180eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180eb0:
    // 0x180eb0: 0xc06041c  jal         func_181070
label_180eb4:
    if (ctx->pc == 0x180EB4u) {
        ctx->pc = 0x180EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EB0u;
        // 0x180eb4: 0x2408001b  addiu       $t0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EB8u;
        goto label_180eb8;
    }
    ctx->pc = 0x180EB0u;
    SET_GPR_U32(ctx, 31, 0x180EB8u);
    ctx->pc = 0x180EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EB0u;
    // 0x180eb4: 0x2408001b  addiu       $t0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181070u;
    goto label_181070;
    ctx->pc = 0x180EB8u;
label_180eb8:
    // 0x180eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x180eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180ebc:
    // 0x180ebc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x180ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_180ec0:
    // 0x180ec0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_180ec4:
    // 0x180ec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_180ec8:
    // 0x180ec8: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_180ecc:
    if (ctx->pc == 0x180ECCu) {
        ctx->pc = 0x180ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EC8u;
        // 0x180ecc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180ED0u;
        goto label_180ed0;
    }
    ctx->pc = 0x180EC8u;
    {
        const bool branch_taken_0x180ec8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x180ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EC8u;
        // 0x180ecc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ec8) {
            ctx->pc = 0x180EF4u;
            goto label_180ef4;
        }
    }
    ctx->pc = 0x180ED0u;
label_180ed0:
    // 0x180ed0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x180ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
label_180ed4:
    // 0x180ed4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x180ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_180ed8:
    // 0x180ed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_180edc:
    if (ctx->pc == 0x180EDCu) {
        ctx->pc = 0x180EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ED8u;
        // 0x180edc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EE0u;
        goto label_180ee0;
    }
    ctx->pc = 0x180ED8u;
    {
        const bool branch_taken_0x180ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ED8u;
        // 0x180edc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ed8) {
            ctx->pc = 0x180EF8u;
            goto label_180ef8;
        }
    }
    ctx->pc = 0x180EE0u;
label_180ee0:
    // 0x180ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180ee4:
    // 0x180ee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180ee8:
    // 0x180ee8: 0xc0604d8  jal         func_181360
label_180eec:
    if (ctx->pc == 0x180EECu) {
        ctx->pc = 0x180EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EE8u;
        // 0x180eec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180EF0u;
        goto label_180ef0;
    }
    ctx->pc = 0x180EE8u;
    SET_GPR_U32(ctx, 31, 0x180EF0u);
    ctx->pc = 0x180EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180EE8u;
    // 0x180eec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181360u;
    { ctx->pc = 0x181360; return; }
    ctx->pc = 0x180EF0u;
label_180ef0:
    // 0x180ef0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x180ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180ef4:
    // 0x180ef4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x180ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_180ef8:
    // 0x180ef8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x180ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_180efc:
    // 0x180efc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x180efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_180f00:
    // 0x180f00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x180f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_180f04:
    // 0x180f04: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x180f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_180f08:
    // 0x180f08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x180f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_180f0c:
    // 0x180f0c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x180f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_180f10:
    // 0x180f10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x180f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_180f14:
    // 0x180f14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x180f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_180f18:
    // 0x180f18: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x180f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_180f1c:
    // 0x180f1c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x180f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_180f20:
    // 0x180f20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x180f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_180f24:
    // 0x180f24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_180f28:
    // 0x180f28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_180f2c:
    // 0x180f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_180f30:
    // 0x180f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_180f34:
    // 0x180f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180f38:
    // 0x180f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_180f3c:
    // 0x180f3c: 0x3e00008  jr          $ra
label_180f40:
    if (ctx->pc == 0x180F40u) {
        ctx->pc = 0x180F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F3Cu;
        // 0x180f40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180F44u;
        goto label_180f44;
    }
    ctx->pc = 0x180F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F3Cu;
        // 0x180f40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180F44u;
label_180f44:
    // 0x180f44: 0x0  nop
    ctx->pc = 0x180f44u;
    // NOP
label_180f48:
    // 0x180f48: 0x0  nop
    ctx->pc = 0x180f48u;
    // NOP
label_180f4c:
    // 0x180f4c: 0x0  nop
    ctx->pc = 0x180f4cu;
    // NOP
label_180f50:
    // 0x180f50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_180f54:
    // 0x180f54: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x180f54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_180f58:
    // 0x180f58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x180f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_180f5c:
    // 0x180f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180f60:
    // 0x180f60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x180f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_180f64:
    // 0x180f64: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x180f64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180f68:
    // 0x180f68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_180f6c:
    // 0x180f6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x180f6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_180f70:
    // 0x180f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x180f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180f74:
    // 0x180f74: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x180f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_180f78:
    // 0x180f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_180f7c:
    // 0x180f7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x180f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f80:
    // 0x180f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180f84:
    // 0x180f84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x180f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180f88:
    // 0x180f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180f8c:
    // 0x180f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180f90:
    // 0x180f90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_180f94:
    // 0x180f94: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x180f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_180f98:
    // 0x180f98: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x180f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180f9c:
    // 0x180f9c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x180f9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_180fa0:
    // 0x180fa0: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x180fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_180fa4:
    // 0x180fa4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x180fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_180fa8:
    // 0x180fa8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_180fac:
    if (ctx->pc == 0x180FACu) {
        ctx->pc = 0x180FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FA8u;
        // 0x180fac: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FB0u;
        goto label_180fb0;
    }
    ctx->pc = 0x180FA8u;
    {
        const bool branch_taken_0x180fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x180FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FA8u;
        // 0x180fac: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fa8) {
            ctx->pc = 0x180FE4u;
            goto label_180fe4;
        }
    }
    ctx->pc = 0x180FB0u;
label_180fb0:
    // 0x180fb0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x180fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_180fb4:
    // 0x180fb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x180fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_180fb8:
    // 0x180fb8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_180fbc:
    // 0x180fbc: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_180fc0:
    // 0x180fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_180fc4:
    // 0x180fc4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x180fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_180fc8:
    // 0x180fc8: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_180fcc:
    // 0x180fcc: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x180fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_180fd0:
    // 0x180fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_180fd4:
    // 0x180fd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_180fd8:
    // 0x180fd8: 0xc06041c  jal         func_181070
label_180fdc:
    if (ctx->pc == 0x180FDCu) {
        ctx->pc = 0x180FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FD8u;
        // 0x180fdc: 0x27aa007e  addiu       $t2, $sp, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FE0u;
        goto label_180fe0;
    }
    ctx->pc = 0x180FD8u;
    SET_GPR_U32(ctx, 31, 0x180FE0u);
    ctx->pc = 0x180FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180FD8u;
    // 0x180fdc: 0x27aa007e  addiu       $t2, $sp, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181070u;
    goto label_181070;
    ctx->pc = 0x180FE0u;
label_180fe0:
    // 0x180fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180fe4:
    // 0x180fe4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_180fe8:
    // 0x180fe8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_180fec:
    // 0x180fec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_180ff0:
    // 0x180ff0: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_180ff4:
    if (ctx->pc == 0x180FF4u) {
        ctx->pc = 0x180FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FF0u;
        // 0x180ff4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180FF8u;
        goto label_180ff8;
    }
    ctx->pc = 0x180FF0u;
    {
        const bool branch_taken_0x180ff0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FF0u;
        // 0x180ff4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ff0) {
            ctx->pc = 0x18101Cu;
            goto label_18101c;
        }
    }
    ctx->pc = 0x180FF8u;
label_180ff8:
    // 0x180ff8: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x180ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
label_180ffc:
    // 0x180ffc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x180ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_181000:
    // 0x181000: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_181004:
    if (ctx->pc == 0x181004u) {
        ctx->pc = 0x181004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181000u;
        // 0x181004: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181008u;
        goto label_181008;
    }
    ctx->pc = 0x181000u;
    {
        const bool branch_taken_0x181000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181000u;
        // 0x181004: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181000) {
            ctx->pc = 0x181020u;
            goto label_181020;
        }
    }
    ctx->pc = 0x181008u;
label_181008:
    // 0x181008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18100c:
    // 0x18100c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181010:
    // 0x181010: 0xc0604d8  jal         func_181360
label_181014:
    if (ctx->pc == 0x181014u) {
        ctx->pc = 0x181014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181010u;
        // 0x181014: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181018u;
        goto label_181018;
    }
    ctx->pc = 0x181010u;
    SET_GPR_U32(ctx, 31, 0x181018u);
    ctx->pc = 0x181014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181010u;
    // 0x181014: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181360u;
    { ctx->pc = 0x181360; return; }
    ctx->pc = 0x181018u;
label_181018:
    // 0x181018: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x181018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18101c:
    // 0x18101c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_181020:
    // 0x181020: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x181020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181024:
    // 0x181024: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x181024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_181028:
    // 0x181028: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_18102c:
    // 0x18102c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x18102cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181030:
    // 0x181030: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x181030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_181034:
    // 0x181034: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x181034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_181038:
    // 0x181038: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_18103c:
    // 0x18103c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_181040:
    // 0x181040: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x181040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_181044:
    // 0x181044: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x181044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_181048:
    // 0x181048: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18104c:
    // 0x18104c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18104cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181050:
    // 0x181050: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_181054:
    // 0x181054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181058:
    // 0x181058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18105c:
    // 0x18105c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181060:
    // 0x181060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181064:
    // 0x181064: 0x3e00008  jr          $ra
label_181068:
    if (ctx->pc == 0x181068u) {
        ctx->pc = 0x181068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181064u;
        // 0x181068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18106Cu;
        goto label_18106c;
    }
    ctx->pc = 0x181064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181064u;
        // 0x181068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18106Cu;
label_18106c:
    // 0x18106c: 0x0  nop
    ctx->pc = 0x18106cu;
    // NOP
label_181070:
    // 0x181070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_181074:
    // 0x181074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_181078:
    // 0x181078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18107c:
    // 0x18107c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_181080:
    // 0x181080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_181084:
    // 0x181084: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x181084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_181088:
    // 0x181088: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18108c:
    // 0x18108c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x18108cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181090:
    // 0x181090: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_181094:
    // 0x181094: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_181098:
    // 0x181098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18109c:
    // 0x18109c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x18109cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1810a0:
    // 0x1810a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1810a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1810a4:
    // 0x1810a4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1810a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1810a8:
    // 0x1810a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1810a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1810ac:
    // 0x1810ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1810acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1810b0:
    // 0x1810b0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1810b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1810b4:
    // 0x1810b4: 0x90a40013  lbu         $a0, 0x13($a1)
    ctx->pc = 0x1810b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
label_1810b8:
    // 0x1810b8: 0x84b60014  lh          $s6, 0x14($a1)
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_1810bc:
    // 0x1810bc: 0x84b50016  lh          $s5, 0x16($a1)
    ctx->pc = 0x1810bcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_1810c0:
    // 0x1810c0: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_1810c4:
    if (ctx->pc == 0x1810C4u) {
        ctx->pc = 0x1810C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810C0u;
        // 0x1810c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810C8u;
        goto label_1810c8;
    }
    ctx->pc = 0x1810C0u;
    {
        const bool branch_taken_0x1810c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1810C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810C0u;
        // 0x1810c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810c0) {
            ctx->pc = 0x18111Cu;
            goto label_18111c;
        }
    }
    ctx->pc = 0x1810C8u;
label_1810c8:
    // 0x1810c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1810cc:
    // 0x1810cc: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_1810d0:
    if (ctx->pc == 0x1810D0u) {
        ctx->pc = 0x1810D4u;
        goto label_1810d4;
    }
    ctx->pc = 0x1810CCu;
    {
        const bool branch_taken_0x1810cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1810cc) {
            ctx->pc = 0x181114u;
            goto label_181114;
        }
    }
    ctx->pc = 0x1810D4u;
label_1810d4:
    // 0x1810d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1810d8:
    // 0x1810d8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_1810dc:
    if (ctx->pc == 0x1810DCu) {
        ctx->pc = 0x1810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D8u;
        // 0x1810dc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810E0u;
        goto label_1810e0;
    }
    ctx->pc = 0x1810D8u;
    {
        const bool branch_taken_0x1810d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D8u;
        // 0x1810dc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810d8) {
            ctx->pc = 0x181124u;
            goto label_181124;
        }
    }
    ctx->pc = 0x1810E0u;
label_1810e0:
    // 0x1810e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1810e4:
    // 0x1810e4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1810e8:
    if (ctx->pc == 0x1810E8u) {
        ctx->pc = 0x1810ECu;
        goto label_1810ec;
    }
    ctx->pc = 0x1810E4u;
    {
        const bool branch_taken_0x1810e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1810e4) {
            ctx->pc = 0x18110Cu;
            goto label_18110c;
        }
    }
    ctx->pc = 0x1810ECu;
label_1810ec:
    // 0x1810ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1810f0:
    // 0x1810f0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1810f4:
    if (ctx->pc == 0x1810F4u) {
        ctx->pc = 0x1810F8u;
        goto label_1810f8;
    }
    ctx->pc = 0x1810F0u;
    {
        const bool branch_taken_0x1810f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1810f0) {
            ctx->pc = 0x181100u;
            goto label_181100;
        }
    }
    ctx->pc = 0x1810F8u;
label_1810f8:
    // 0x1810f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1810fc:
    if (ctx->pc == 0x1810FCu) {
        ctx->pc = 0x181100u;
        goto label_181100;
    }
    ctx->pc = 0x1810F8u;
    {
        const bool branch_taken_0x1810f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1810f8) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x181100u;
label_181100:
    // 0x181100: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x181100u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
label_181104:
    // 0x181104: 0x10000006  b           . + 4 + (0x6 << 2)
label_181108:
    if (ctx->pc == 0x181108u) {
        ctx->pc = 0x181108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181104u;
        // 0x181108: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18110Cu;
        goto label_18110c;
    }
    ctx->pc = 0x181104u;
    {
        const bool branch_taken_0x181104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181104u;
        // 0x181108: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181104) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x18110Cu;
label_18110c:
    // 0x18110c: 0x10000004  b           . + 4 + (0x4 << 2)
label_181110:
    if (ctx->pc == 0x181110u) {
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181114u;
        goto label_181114;
    }
    ctx->pc = 0x18110Cu;
    {
        const bool branch_taken_0x18110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18110c) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x181114u;
label_181114:
    // 0x181114: 0x10000002  b           . + 4 + (0x2 << 2)
label_181118:
    if (ctx->pc == 0x181118u) {
        ctx->pc = 0x181118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181114u;
        // 0x181118: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18111Cu;
        goto label_18111c;
    }
    ctx->pc = 0x181114u;
    {
        const bool branch_taken_0x181114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181114u;
        // 0x181118: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181114) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x18111Cu;
label_18111c:
    // 0x18111c: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_181120:
    // 0x181120: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_181124:
    // 0x181124: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_181128:
    if (ctx->pc == 0x181128u) {
        ctx->pc = 0x18112Cu;
        goto label_18112c;
    }
    ctx->pc = 0x181124u;
    {
        const bool branch_taken_0x181124 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x181124) {
            ctx->pc = 0x181138u;
            goto label_181138;
        }
    }
    ctx->pc = 0x18112Cu;
label_18112c:
    // 0x18112c: 0xa7b600ac  sh          $s6, 0xAC($sp)
    ctx->pc = 0x18112cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 22));
label_181130:
    // 0x181130: 0x1000000c  b           . + 4 + (0xC << 2)
label_181134:
    if (ctx->pc == 0x181134u) {
        ctx->pc = 0x181134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181130u;
        // 0x181134: 0xa7b500ae  sh          $s5, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181138u;
        goto label_181138;
    }
    ctx->pc = 0x181130u;
    {
        const bool branch_taken_0x181130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181130u;
        // 0x181134: 0xa7b500ae  sh          $s5, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181130) {
            ctx->pc = 0x181164u;
            goto label_181164;
        }
    }
    ctx->pc = 0x181138u;
label_181138:
    // 0x181138: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18113c:
    // 0x18113c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_181140:
    // 0x181140: 0x24422a34  addiu       $v0, $v0, 0x2A34
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10804));
label_181144:
    // 0x181144: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181148:
    // 0x181148: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18114c:
    // 0x18114c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_181150:
    // 0x181150: 0x24422a36  addiu       $v0, $v0, 0x2A36
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10806));
label_181154:
    // 0x181154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181158:
    // 0x181158: 0xa7a300ac  sh          $v1, 0xAC($sp)
    ctx->pc = 0x181158u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 3));
label_18115c:
    // 0x18115c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_181160:
    // 0x181160: 0xa7a200ae  sh          $v0, 0xAE($sp)
    ctx->pc = 0x181160u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
label_181164:
    // 0x181164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181168:
    // 0x181168: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_18116c:
    // 0x18116c: 0xc060690  jal         func_181A40
label_181170:
    if (ctx->pc == 0x181170u) {
        ctx->pc = 0x181170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18116Cu;
        // 0x181170: 0x27a600ae  addiu       $a2, $sp, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181174u;
        goto label_181174;
    }
    ctx->pc = 0x18116Cu;
    SET_GPR_U32(ctx, 31, 0x181174u);
    ctx->pc = 0x181170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18116Cu;
    // 0x181170: 0x27a600ae  addiu       $a2, $sp, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A40u;
    { ctx->pc = 0x181a40; return; }
    ctx->pc = 0x181174u;
label_181174:
    // 0x181174: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x181174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
label_181178:
    // 0x181178: 0x87a200ac  lh          $v0, 0xAC($sp)
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
label_18117c:
    // 0x18117c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x18117cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_181180:
    // 0x181180: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_181184:
    // 0x181184: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_181188:
    if (ctx->pc == 0x181188u) {
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18118Cu;
        goto label_18118c;
    }
    ctx->pc = 0x181184u;
    {
        const bool branch_taken_0x181184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181184) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x18118Cu;
label_18118c:
    // 0x18118c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_181190:
    // 0x181190: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181194:
    // 0x181194: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_181198:
    // 0x181198: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_18119c:
    // 0x18119c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1811a0:
    if (ctx->pc == 0x1811A0u) {
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811A4u;
        goto label_1811a4;
    }
    ctx->pc = 0x18119Cu;
    {
        const bool branch_taken_0x18119c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18119c) {
            ctx->pc = 0x1811ACu;
            goto label_1811ac;
        }
    }
    ctx->pc = 0x1811A4u;
label_1811a4:
    // 0x1811a4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1811a8:
    // 0x1811a8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1811ac:
    // 0x1811ac: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1811acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1811b0:
    // 0x1811b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1811b4:
    // 0x1811b4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1811b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1811b8:
    // 0x1811b8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1811b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1811bc:
    // 0x1811bc: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1811bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1811c0:
    // 0x1811c0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1811c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1811c4:
    // 0x1811c4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x1811c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1811c8:
    // 0x1811c8: 0x24849880  addiu       $a0, $a0, -0x6780
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
label_1811cc:
    // 0x1811cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1811ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1811d0:
    // 0x1811d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1811d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1811d4:
    // 0x1811d4: 0xc066506  jal         func_199418
label_1811d8:
    if (ctx->pc == 0x1811D8u) {
        ctx->pc = 0x1811D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811D4u;
        // 0x1811d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811DCu;
        goto label_1811dc;
    }
    ctx->pc = 0x1811D4u;
    SET_GPR_U32(ctx, 31, 0x1811DCu);
    ctx->pc = 0x1811D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811D4u;
    // 0x1811d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199418u;
    { ctx->pc = 0x199418; return; }
    ctx->pc = 0x1811DCu;
label_1811dc:
    // 0x1811dc: 0xc0692a8  jal         func_1A4AA0
label_1811e0:
    if (ctx->pc == 0x1811E0u) {
        ctx->pc = 0x1811E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811DCu;
        // 0x1811e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811E4u;
        goto label_1811e4;
    }
    ctx->pc = 0x1811DCu;
    SET_GPR_U32(ctx, 31, 0x1811E4u);
    ctx->pc = 0x1811E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811DCu;
    // 0x1811e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1811E4u;
label_1811e4:
    // 0x1811e4: 0x8f9587e4  lw          $s5, -0x781C($gp)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_1811e8:
    // 0x1811e8: 0xc06029c  jal         func_180A70
label_1811ec:
    if (ctx->pc == 0x1811ECu) {
        ctx->pc = 0x1811ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811E8u;
        // 0x1811ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811F0u;
        goto label_1811f0;
    }
    ctx->pc = 0x1811E8u;
    SET_GPR_U32(ctx, 31, 0x1811F0u);
    ctx->pc = 0x1811ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811E8u;
    // 0x1811ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    goto label_180a70;
    ctx->pc = 0x1811F0u;
label_1811f0:
    // 0x1811f0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1811f4:
    // 0x1811f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1811f8:
    // 0x1811f8: 0xc0665d0  jal         func_199740
label_1811fc:
    if (ctx->pc == 0x1811FCu) {
        ctx->pc = 0x1811FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811F8u;
        // 0x1811fc: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181200u;
        goto label_181200;
    }
    ctx->pc = 0x1811F8u;
    SET_GPR_U32(ctx, 31, 0x181200u);
    ctx->pc = 0x1811FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811F8u;
    // 0x1811fc: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199740u;
    { ctx->pc = 0x199740; return; }
    ctx->pc = 0x181200u;
label_181200:
    // 0x181200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181204:
    // 0x181204: 0xc066440  jal         func_199100
label_181208:
    if (ctx->pc == 0x181208u) {
        ctx->pc = 0x181208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181204u;
        // 0x181208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18120Cu;
        goto label_18120c;
    }
    ctx->pc = 0x181204u;
    SET_GPR_U32(ctx, 31, 0x18120Cu);
    ctx->pc = 0x181208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181204u;
    // 0x181208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x18120Cu;
label_18120c:
    // 0x18120c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x181210u;
    return;
}
