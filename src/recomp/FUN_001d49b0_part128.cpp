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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2129e0u: goto label_2129e0;
        case 0x2129e4u: goto label_2129e4;
        case 0x2129e8u: goto label_2129e8;
        case 0x2129ecu: goto label_2129ec;
        case 0x2129f0u: goto label_2129f0;
        case 0x2129f4u: goto label_2129f4;
        case 0x2129f8u: goto label_2129f8;
        case 0x2129fcu: goto label_2129fc;
        case 0x212a00u: goto label_212a00;
        case 0x212a04u: goto label_212a04;
        case 0x212a08u: goto label_212a08;
        case 0x212a0cu: goto label_212a0c;
        case 0x212a10u: goto label_212a10;
        case 0x212a14u: goto label_212a14;
        case 0x212a18u: goto label_212a18;
        case 0x212a1cu: goto label_212a1c;
        case 0x212a20u: goto label_212a20;
        case 0x212a24u: goto label_212a24;
        case 0x212a28u: goto label_212a28;
        case 0x212a2cu: goto label_212a2c;
        case 0x212a30u: goto label_212a30;
        case 0x212a34u: goto label_212a34;
        case 0x212a38u: goto label_212a38;
        case 0x212a3cu: goto label_212a3c;
        case 0x212a40u: goto label_212a40;
        case 0x212a44u: goto label_212a44;
        case 0x212a48u: goto label_212a48;
        case 0x212a4cu: goto label_212a4c;
        case 0x212a50u: goto label_212a50;
        case 0x212a54u: goto label_212a54;
        case 0x212a58u: goto label_212a58;
        case 0x212a5cu: goto label_212a5c;
        case 0x212a60u: goto label_212a60;
        case 0x212a64u: goto label_212a64;
        case 0x212a68u: goto label_212a68;
        case 0x212a6cu: goto label_212a6c;
        case 0x212a70u: goto label_212a70;
        case 0x212a74u: goto label_212a74;
        case 0x212a78u: goto label_212a78;
        case 0x212a7cu: goto label_212a7c;
        case 0x212a80u: goto label_212a80;
        case 0x212a84u: goto label_212a84;
        case 0x212a88u: goto label_212a88;
        case 0x212a8cu: goto label_212a8c;
        case 0x212a90u: goto label_212a90;
        case 0x212a94u: goto label_212a94;
        case 0x212a98u: goto label_212a98;
        case 0x212a9cu: goto label_212a9c;
        case 0x212aa0u: goto label_212aa0;
        case 0x212aa4u: goto label_212aa4;
        case 0x212aa8u: goto label_212aa8;
        case 0x212aacu: goto label_212aac;
        case 0x212ab0u: goto label_212ab0;
        case 0x212ab4u: goto label_212ab4;
        case 0x212ab8u: goto label_212ab8;
        case 0x212abcu: goto label_212abc;
        case 0x212ac0u: goto label_212ac0;
        case 0x212ac4u: goto label_212ac4;
        case 0x212ac8u: goto label_212ac8;
        case 0x212accu: goto label_212acc;
        case 0x212ad0u: goto label_212ad0;
        case 0x212ad4u: goto label_212ad4;
        case 0x212ad8u: goto label_212ad8;
        case 0x212adcu: goto label_212adc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212ae4u: goto label_212ae4;
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b50u: goto label_212b50;
        case 0x212b54u: goto label_212b54;
        case 0x212b58u: goto label_212b58;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b60u: goto label_212b60;
        case 0x212b64u: goto label_212b64;
        case 0x212b68u: goto label_212b68;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b70u: goto label_212b70;
        case 0x212b74u: goto label_212b74;
        case 0x212b78u: goto label_212b78;
        case 0x212b7cu: goto label_212b7c;
        case 0x212b80u: goto label_212b80;
        case 0x212b84u: goto label_212b84;
        case 0x212b88u: goto label_212b88;
        case 0x212b8cu: goto label_212b8c;
        case 0x212b90u: goto label_212b90;
        case 0x212b94u: goto label_212b94;
        case 0x212b98u: goto label_212b98;
        case 0x212b9cu: goto label_212b9c;
        case 0x212ba0u: goto label_212ba0;
        case 0x212ba4u: goto label_212ba4;
        case 0x212ba8u: goto label_212ba8;
        case 0x212bacu: goto label_212bac;
        case 0x212bb0u: goto label_212bb0;
        case 0x212bb4u: goto label_212bb4;
        case 0x212bb8u: goto label_212bb8;
        case 0x212bbcu: goto label_212bbc;
        case 0x212bc0u: goto label_212bc0;
        case 0x212bc4u: goto label_212bc4;
        case 0x212bc8u: goto label_212bc8;
        case 0x212bccu: goto label_212bcc;
        case 0x212bd0u: goto label_212bd0;
        case 0x212bd4u: goto label_212bd4;
        case 0x212bd8u: goto label_212bd8;
        case 0x212bdcu: goto label_212bdc;
        case 0x212be0u: goto label_212be0;
        case 0x212be4u: goto label_212be4;
        case 0x212be8u: goto label_212be8;
        case 0x212becu: goto label_212bec;
        case 0x212bf0u: goto label_212bf0;
        case 0x212bf4u: goto label_212bf4;
        case 0x212bf8u: goto label_212bf8;
        case 0x212bfcu: goto label_212bfc;
        case 0x212c00u: goto label_212c00;
        case 0x212c04u: goto label_212c04;
        case 0x212c08u: goto label_212c08;
        case 0x212c0cu: goto label_212c0c;
        case 0x212c10u: goto label_212c10;
        case 0x212c14u: goto label_212c14;
        case 0x212c18u: goto label_212c18;
        case 0x212c1cu: goto label_212c1c;
        case 0x212c20u: goto label_212c20;
        case 0x212c24u: goto label_212c24;
        case 0x212c28u: goto label_212c28;
        case 0x212c2cu: goto label_212c2c;
        case 0x212c30u: goto label_212c30;
        case 0x212c34u: goto label_212c34;
        case 0x212c38u: goto label_212c38;
        case 0x212c3cu: goto label_212c3c;
        case 0x212c40u: goto label_212c40;
        case 0x212c44u: goto label_212c44;
        case 0x212c48u: goto label_212c48;
        case 0x212c4cu: goto label_212c4c;
        case 0x212c50u: goto label_212c50;
        case 0x212c54u: goto label_212c54;
        case 0x212c58u: goto label_212c58;
        case 0x212c5cu: goto label_212c5c;
        case 0x212c60u: goto label_212c60;
        case 0x212c64u: goto label_212c64;
        case 0x212c68u: goto label_212c68;
        case 0x212c6cu: goto label_212c6c;
        case 0x212c70u: goto label_212c70;
        case 0x212c74u: goto label_212c74;
        case 0x212c78u: goto label_212c78;
        case 0x212c7cu: goto label_212c7c;
        case 0x212c80u: goto label_212c80;
        case 0x212c84u: goto label_212c84;
        case 0x212c88u: goto label_212c88;
        case 0x212c8cu: goto label_212c8c;
        case 0x212c90u: goto label_212c90;
        case 0x212c94u: goto label_212c94;
        case 0x212c98u: goto label_212c98;
        case 0x212c9cu: goto label_212c9c;
        case 0x212ca0u: goto label_212ca0;
        case 0x212ca4u: goto label_212ca4;
        case 0x212ca8u: goto label_212ca8;
        case 0x212cacu: goto label_212cac;
        case 0x212cb0u: goto label_212cb0;
        case 0x212cb4u: goto label_212cb4;
        case 0x212cb8u: goto label_212cb8;
        case 0x212cbcu: goto label_212cbc;
        case 0x212cc0u: goto label_212cc0;
        case 0x212cc4u: goto label_212cc4;
        case 0x212cc8u: goto label_212cc8;
        case 0x212cccu: goto label_212ccc;
        case 0x212cd0u: goto label_212cd0;
        case 0x212cd4u: goto label_212cd4;
        case 0x212cd8u: goto label_212cd8;
        case 0x212cdcu: goto label_212cdc;
        case 0x212ce0u: goto label_212ce0;
        case 0x212ce4u: goto label_212ce4;
        case 0x212ce8u: goto label_212ce8;
        case 0x212cecu: goto label_212cec;
        case 0x212cf0u: goto label_212cf0;
        case 0x212cf4u: goto label_212cf4;
        case 0x212cf8u: goto label_212cf8;
        case 0x212cfcu: goto label_212cfc;
        case 0x212d00u: goto label_212d00;
        case 0x212d04u: goto label_212d04;
        case 0x212d08u: goto label_212d08;
        case 0x212d0cu: goto label_212d0c;
        case 0x212d10u: goto label_212d10;
        case 0x212d14u: goto label_212d14;
        case 0x212d18u: goto label_212d18;
        case 0x212d1cu: goto label_212d1c;
        case 0x212d20u: goto label_212d20;
        case 0x212d24u: goto label_212d24;
        case 0x212d28u: goto label_212d28;
        case 0x212d2cu: goto label_212d2c;
        case 0x212d30u: goto label_212d30;
        case 0x212d34u: goto label_212d34;
        case 0x212d38u: goto label_212d38;
        case 0x212d3cu: goto label_212d3c;
        case 0x212d40u: goto label_212d40;
        case 0x212d44u: goto label_212d44;
        case 0x212d48u: goto label_212d48;
        case 0x212d4cu: goto label_212d4c;
        case 0x212d50u: goto label_212d50;
        case 0x212d54u: goto label_212d54;
        case 0x212d58u: goto label_212d58;
        case 0x212d5cu: goto label_212d5c;
        case 0x212d60u: goto label_212d60;
        case 0x212d64u: goto label_212d64;
        case 0x212d68u: goto label_212d68;
        case 0x212d6cu: goto label_212d6c;
        case 0x212d70u: goto label_212d70;
        case 0x212d74u: goto label_212d74;
        case 0x212d78u: goto label_212d78;
        case 0x212d7cu: goto label_212d7c;
        case 0x212d80u: goto label_212d80;
        case 0x212d84u: goto label_212d84;
        case 0x212d88u: goto label_212d88;
        case 0x212d8cu: goto label_212d8c;
        case 0x212d90u: goto label_212d90;
        case 0x212d94u: goto label_212d94;
        case 0x212d98u: goto label_212d98;
        case 0x212d9cu: goto label_212d9c;
        case 0x212da0u: goto label_212da0;
        case 0x212da4u: goto label_212da4;
        case 0x212da8u: goto label_212da8;
        case 0x212dacu: goto label_212dac;
        case 0x212db0u: goto label_212db0;
        case 0x212db4u: goto label_212db4;
        case 0x212db8u: goto label_212db8;
        case 0x212dbcu: goto label_212dbc;
        case 0x212dc0u: goto label_212dc0;
        case 0x212dc4u: goto label_212dc4;
        case 0x212dc8u: goto label_212dc8;
        case 0x212dccu: goto label_212dcc;
        case 0x212dd0u: goto label_212dd0;
        case 0x212dd4u: goto label_212dd4;
        case 0x212dd8u: goto label_212dd8;
        case 0x212ddcu: goto label_212ddc;
        case 0x212de0u: goto label_212de0;
        case 0x212de4u: goto label_212de4;
        case 0x212de8u: goto label_212de8;
        case 0x212decu: goto label_212dec;
        case 0x212df0u: goto label_212df0;
        case 0x212df4u: goto label_212df4;
        case 0x212df8u: goto label_212df8;
        case 0x212dfcu: goto label_212dfc;
        case 0x212e00u: goto label_212e00;
        case 0x212e04u: goto label_212e04;
        case 0x212e08u: goto label_212e08;
        case 0x212e0cu: goto label_212e0c;
        case 0x212e10u: goto label_212e10;
        case 0x212e14u: goto label_212e14;
        case 0x212e18u: goto label_212e18;
        case 0x212e1cu: goto label_212e1c;
        case 0x212e20u: goto label_212e20;
        case 0x212e24u: goto label_212e24;
        case 0x212e28u: goto label_212e28;
        case 0x212e2cu: goto label_212e2c;
        case 0x212e30u: goto label_212e30;
        case 0x212e34u: goto label_212e34;
        case 0x212e38u: goto label_212e38;
        case 0x212e3cu: goto label_212e3c;
        case 0x212e40u: goto label_212e40;
        case 0x212e44u: goto label_212e44;
        case 0x212e48u: goto label_212e48;
        case 0x212e4cu: goto label_212e4c;
        case 0x212e50u: goto label_212e50;
        case 0x212e54u: goto label_212e54;
        case 0x212e58u: goto label_212e58;
        case 0x212e5cu: goto label_212e5c;
        case 0x212e60u: goto label_212e60;
        case 0x212e64u: goto label_212e64;
        case 0x212e68u: goto label_212e68;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e70u: goto label_212e70;
        case 0x212e74u: goto label_212e74;
        case 0x212e78u: goto label_212e78;
        case 0x212e7cu: goto label_212e7c;
        case 0x212e80u: goto label_212e80;
        case 0x212e84u: goto label_212e84;
        case 0x212e88u: goto label_212e88;
        case 0x212e8cu: goto label_212e8c;
        case 0x212e90u: goto label_212e90;
        case 0x212e94u: goto label_212e94;
        case 0x212e98u: goto label_212e98;
        case 0x212e9cu: goto label_212e9c;
        case 0x212ea0u: goto label_212ea0;
        case 0x212ea4u: goto label_212ea4;
        case 0x212ea8u: goto label_212ea8;
        case 0x212eacu: goto label_212eac;
        case 0x212eb0u: goto label_212eb0;
        case 0x212eb4u: goto label_212eb4;
        case 0x212eb8u: goto label_212eb8;
        case 0x212ebcu: goto label_212ebc;
        case 0x212ec0u: goto label_212ec0;
        case 0x212ec4u: goto label_212ec4;
        case 0x212ec8u: goto label_212ec8;
        case 0x212eccu: goto label_212ecc;
        case 0x212ed0u: goto label_212ed0;
        case 0x212ed4u: goto label_212ed4;
        case 0x212ed8u: goto label_212ed8;
        case 0x212edcu: goto label_212edc;
        case 0x212ee0u: goto label_212ee0;
        case 0x212ee4u: goto label_212ee4;
        case 0x212ee8u: goto label_212ee8;
        case 0x212eecu: goto label_212eec;
        case 0x212ef0u: goto label_212ef0;
        case 0x212ef4u: goto label_212ef4;
        case 0x212ef8u: goto label_212ef8;
        case 0x212efcu: goto label_212efc;
        case 0x212f00u: goto label_212f00;
        case 0x212f04u: goto label_212f04;
        case 0x212f08u: goto label_212f08;
        case 0x212f0cu: goto label_212f0c;
        case 0x212f10u: goto label_212f10;
        case 0x212f14u: goto label_212f14;
        case 0x212f18u: goto label_212f18;
        case 0x212f1cu: goto label_212f1c;
        case 0x212f20u: goto label_212f20;
        case 0x212f24u: goto label_212f24;
        case 0x212f28u: goto label_212f28;
        case 0x212f2cu: goto label_212f2c;
        case 0x212f30u: goto label_212f30;
        case 0x212f34u: goto label_212f34;
        case 0x212f38u: goto label_212f38;
        case 0x212f3cu: goto label_212f3c;
        case 0x212f40u: goto label_212f40;
        case 0x212f44u: goto label_212f44;
        case 0x212f48u: goto label_212f48;
        case 0x212f4cu: goto label_212f4c;
        case 0x212f50u: goto label_212f50;
        case 0x212f54u: goto label_212f54;
        case 0x212f58u: goto label_212f58;
        case 0x212f5cu: goto label_212f5c;
        case 0x212f60u: goto label_212f60;
        case 0x212f64u: goto label_212f64;
        case 0x212f68u: goto label_212f68;
        case 0x212f6cu: goto label_212f6c;
        case 0x212f70u: goto label_212f70;
        case 0x212f74u: goto label_212f74;
        case 0x212f78u: goto label_212f78;
        case 0x212f7cu: goto label_212f7c;
        case 0x212f80u: goto label_212f80;
        case 0x212f84u: goto label_212f84;
        case 0x212f88u: goto label_212f88;
        case 0x212f8cu: goto label_212f8c;
        case 0x212f90u: goto label_212f90;
        case 0x212f94u: goto label_212f94;
        case 0x212f98u: goto label_212f98;
        case 0x212f9cu: goto label_212f9c;
        case 0x212fa0u: goto label_212fa0;
        case 0x212fa4u: goto label_212fa4;
        case 0x212fa8u: goto label_212fa8;
        case 0x212facu: goto label_212fac;
        case 0x212fb0u: goto label_212fb0;
        case 0x212fb4u: goto label_212fb4;
        case 0x212fb8u: goto label_212fb8;
        case 0x212fbcu: goto label_212fbc;
        case 0x212fc0u: goto label_212fc0;
        case 0x212fc4u: goto label_212fc4;
        case 0x212fc8u: goto label_212fc8;
        case 0x212fccu: goto label_212fcc;
        case 0x212fd0u: goto label_212fd0;
        case 0x212fd4u: goto label_212fd4;
        case 0x212fd8u: goto label_212fd8;
        case 0x212fdcu: goto label_212fdc;
        case 0x212fe0u: goto label_212fe0;
        case 0x212fe4u: goto label_212fe4;
        case 0x212fe8u: goto label_212fe8;
        case 0x212fecu: goto label_212fec;
        case 0x212ff0u: goto label_212ff0;
        case 0x212ff4u: goto label_212ff4;
        case 0x212ff8u: goto label_212ff8;
        case 0x212ffcu: goto label_212ffc;
        case 0x213000u: goto label_213000;
        case 0x213004u: goto label_213004;
        case 0x213008u: goto label_213008;
        case 0x21300cu: goto label_21300c;
        case 0x213010u: goto label_213010;
        case 0x213014u: goto label_213014;
        case 0x213018u: goto label_213018;
        case 0x21301cu: goto label_21301c;
        case 0x213020u: goto label_213020;
        case 0x213024u: goto label_213024;
        case 0x213028u: goto label_213028;
        case 0x21302cu: goto label_21302c;
        case 0x213030u: goto label_213030;
        case 0x213034u: goto label_213034;
        case 0x213038u: goto label_213038;
        case 0x21303cu: goto label_21303c;
        case 0x213040u: goto label_213040;
        case 0x213044u: goto label_213044;
        case 0x213048u: goto label_213048;
        case 0x21304cu: goto label_21304c;
        case 0x213050u: goto label_213050;
        case 0x213054u: goto label_213054;
        case 0x213058u: goto label_213058;
        case 0x21305cu: goto label_21305c;
        case 0x213060u: goto label_213060;
        case 0x213064u: goto label_213064;
        case 0x213068u: goto label_213068;
        case 0x21306cu: goto label_21306c;
        case 0x213070u: goto label_213070;
        case 0x213074u: goto label_213074;
        case 0x213078u: goto label_213078;
        case 0x21307cu: goto label_21307c;
        case 0x213080u: goto label_213080;
        case 0x213084u: goto label_213084;
        case 0x213088u: goto label_213088;
        case 0x21308cu: goto label_21308c;
        case 0x213090u: goto label_213090;
        case 0x213094u: goto label_213094;
        case 0x213098u: goto label_213098;
        case 0x21309cu: goto label_21309c;
        case 0x2130a0u: goto label_2130a0;
        case 0x2130a4u: goto label_2130a4;
        case 0x2130a8u: goto label_2130a8;
        case 0x2130acu: goto label_2130ac;
        case 0x2130b0u: goto label_2130b0;
        case 0x2130b4u: goto label_2130b4;
        case 0x2130b8u: goto label_2130b8;
        case 0x2130bcu: goto label_2130bc;
        case 0x2130c0u: goto label_2130c0;
        case 0x2130c4u: goto label_2130c4;
        case 0x2130c8u: goto label_2130c8;
        case 0x2130ccu: goto label_2130cc;
        case 0x2130d0u: goto label_2130d0;
        case 0x2130d4u: goto label_2130d4;
        case 0x2130d8u: goto label_2130d8;
        case 0x2130dcu: goto label_2130dc;
        case 0x2130e0u: goto label_2130e0;
        case 0x2130e4u: goto label_2130e4;
        case 0x2130e8u: goto label_2130e8;
        case 0x2130ecu: goto label_2130ec;
        case 0x2130f0u: goto label_2130f0;
        case 0x2130f4u: goto label_2130f4;
        case 0x2130f8u: goto label_2130f8;
        case 0x2130fcu: goto label_2130fc;
        case 0x213100u: goto label_213100;
        case 0x213104u: goto label_213104;
        case 0x213108u: goto label_213108;
        case 0x21310cu: goto label_21310c;
        case 0x213110u: goto label_213110;
        case 0x213114u: goto label_213114;
        case 0x213118u: goto label_213118;
        case 0x21311cu: goto label_21311c;
        case 0x213120u: goto label_213120;
        case 0x213124u: goto label_213124;
        case 0x213128u: goto label_213128;
        case 0x21312cu: goto label_21312c;
        case 0x213130u: goto label_213130;
        case 0x213134u: goto label_213134;
        case 0x213138u: goto label_213138;
        case 0x21313cu: goto label_21313c;
        case 0x213140u: goto label_213140;
        case 0x213144u: goto label_213144;
        case 0x213148u: goto label_213148;
        case 0x21314cu: goto label_21314c;
        case 0x213150u: goto label_213150;
        case 0x213154u: goto label_213154;
        case 0x213158u: goto label_213158;
        case 0x21315cu: goto label_21315c;
        case 0x213160u: goto label_213160;
        case 0x213164u: goto label_213164;
        case 0x213168u: goto label_213168;
        case 0x21316cu: goto label_21316c;
        case 0x213170u: goto label_213170;
        case 0x213174u: goto label_213174;
        case 0x213178u: goto label_213178;
        case 0x21317cu: goto label_21317c;
        case 0x213180u: goto label_213180;
        case 0x213184u: goto label_213184;
        case 0x213188u: goto label_213188;
        case 0x21318cu: goto label_21318c;
        case 0x213190u: goto label_213190;
        case 0x213194u: goto label_213194;
        case 0x213198u: goto label_213198;
        case 0x21319cu: goto label_21319c;
        case 0x2131a0u: goto label_2131a0;
        case 0x2131a4u: goto label_2131a4;
        case 0x2131a8u: goto label_2131a8;
        case 0x2131acu: goto label_2131ac;
        default: return;
    }

label_2129e0:
    // 0x2129e0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2129e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2129e4:
    // 0x2129e4: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x2129e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2129e8:
    // 0x2129e8: 0xae6200ac  sw          $v0, 0xAC($s3)
    ctx->pc = 0x2129e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
label_2129ec:
    // 0x2129ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2129ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2129f0:
    // 0x2129f0: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x2129f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
label_2129f4:
    // 0x2129f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2129f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2129f8:
    // 0x2129f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2129f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2129fc:
    // 0x2129fc: 0x92420063  lbu         $v0, 0x63($s2)
    ctx->pc = 0x2129fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
label_212a00:
    // 0x212a00: 0xa262009d  sb          $v0, 0x9D($s3)
    ctx->pc = 0x212a00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 157), (uint8_t)GPR_U32(ctx, 2));
label_212a04:
    // 0x212a04: 0x92420064  lbu         $v0, 0x64($s2)
    ctx->pc = 0x212a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
label_212a08:
    // 0x212a08: 0xa262009e  sb          $v0, 0x9E($s3)
    ctx->pc = 0x212a08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 158), (uint8_t)GPR_U32(ctx, 2));
label_212a0c:
    // 0x212a0c: 0x92420065  lbu         $v0, 0x65($s2)
    ctx->pc = 0x212a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
label_212a10:
    // 0x212a10: 0xa262009f  sb          $v0, 0x9F($s3)
    ctx->pc = 0x212a10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 159), (uint8_t)GPR_U32(ctx, 2));
label_212a14:
    // 0x212a14: 0x92420066  lbu         $v0, 0x66($s2)
    ctx->pc = 0x212a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
label_212a18:
    // 0x212a18: 0xa26200a0  sb          $v0, 0xA0($s3)
    ctx->pc = 0x212a18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 2));
label_212a1c:
    // 0x212a1c: 0x92420067  lbu         $v0, 0x67($s2)
    ctx->pc = 0x212a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_212a20:
    // 0x212a20: 0xa26200a1  sb          $v0, 0xA1($s3)
    ctx->pc = 0x212a20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 2));
label_212a24:
    // 0x212a24: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x212a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_212a28:
    // 0x212a28: 0xa26200a2  sb          $v0, 0xA2($s3)
    ctx->pc = 0x212a28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 2));
label_212a2c:
    // 0x212a2c: 0x92420069  lbu         $v0, 0x69($s2)
    ctx->pc = 0x212a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
label_212a30:
    // 0x212a30: 0xc0568a8  jal         func_15A2A0
label_212a34:
    if (ctx->pc == 0x212A34u) {
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0xa2620099  sb          $v0, 0x99($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 153), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A38u;
        goto label_212a38;
    }
    ctx->pc = 0x212A30u;
    SET_GPR_U32(ctx, 31, 0x212A38u);
    ctx->pc = 0x212A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A30u;
    // 0x212a34: 0xa2620099  sb          $v0, 0x99($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 153), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2A0u, 0x212A30u, 0x212A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A38u;
label_212a38:
    // 0x212a38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a3c:
    // 0x212a3c: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x212a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_212a40:
    // 0x212a40: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x212a40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_212a44:
    // 0x212a44: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_212a48:
    // 0x212a48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a4c:
    // 0x212a4c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212a50:
    // 0x212a50: 0xc0900ec  jal         func_2403B0
label_212a54:
    if (ctx->pc == 0x212A54u) {
        ctx->pc = 0x212A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A50u;
        // 0x212a54: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A58u;
        goto label_212a58;
    }
    ctx->pc = 0x212A50u;
    SET_GPR_U32(ctx, 31, 0x212A58u);
    ctx->pc = 0x212A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A50u;
    // 0x212a54: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2403B0u;
    { ctx->pc = 0x2403b0; return; }
    ctx->pc = 0x212A58u;
label_212a58:
    // 0x212a58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_212a5c:
    // 0x212a5c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x212a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_212a60:
    // 0x212a60: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
label_212a64:
    if (ctx->pc == 0x212A64u) {
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A68u;
        goto label_212a68;
    }
    ctx->pc = 0x212A60u;
    {
        const bool branch_taken_0x212a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a60) {
            ctx->pc = 0x2128B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2128b4; return; }
        }
    }
    ctx->pc = 0x212A68u;
label_212a68:
    // 0x212a68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a6c:
    // 0x212a6c: 0xc08bc40  jal         func_22F100
label_212a70:
    if (ctx->pc == 0x212A70u) {
        ctx->pc = 0x212A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A6Cu;
        // 0x212a70: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A74u;
        goto label_212a74;
    }
    ctx->pc = 0x212A6Cu;
    SET_GPR_U32(ctx, 31, 0x212A74u);
    ctx->pc = 0x212A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A6Cu;
    // 0x212a70: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    { ctx->pc = 0x22f100; return; }
    ctx->pc = 0x212A74u;
label_212a74:
    // 0x212a74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x212a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_212a78:
    // 0x212a78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x212a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212a7c:
    // 0x212a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x212a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212a80:
    // 0x212a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212a84:
    // 0x212a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212a88:
    // 0x212a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212a8c:
    // 0x212a8c: 0x3e00008  jr          $ra
label_212a90:
    if (ctx->pc == 0x212A90u) {
        ctx->pc = 0x212A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A8Cu;
        // 0x212a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A94u;
        goto label_212a94;
    }
    ctx->pc = 0x212A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A8Cu;
        // 0x212a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212A94u;
label_212a94:
    // 0x212a94: 0x0  nop
    ctx->pc = 0x212a94u;
    // NOP
label_212a98:
    // 0x212a98: 0x0  nop
    ctx->pc = 0x212a98u;
    // NOP
label_212a9c:
    // 0x212a9c: 0x0  nop
    ctx->pc = 0x212a9cu;
    // NOP
label_212aa0:
    // 0x212aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_212aa4:
    // 0x212aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_212aa8:
    // 0x212aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_212aac:
    // 0x212aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_212ab0:
    // 0x212ab0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_212ab4:
    // 0x212ab4: 0xc0867a0  jal         func_219E80
label_212ab8:
    if (ctx->pc == 0x212AB8u) {
        ctx->pc = 0x212AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AB4u;
        // 0x212ab8: 0x26104920  addiu       $s0, $s0, 0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ABCu;
        goto label_212abc;
    }
    ctx->pc = 0x212AB4u;
    SET_GPR_U32(ctx, 31, 0x212ABCu);
    ctx->pc = 0x212AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AB4u;
    // 0x212ab8: 0x26104920  addiu       $s0, $s0, 0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    { ctx->pc = 0x219e80; return; }
    ctx->pc = 0x212ABCu;
label_212abc:
    // 0x212abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212ac0:
    // 0x212ac0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_212ac4:
    if (ctx->pc == 0x212AC4u) {
        ctx->pc = 0x212AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC0u;
        // 0x212ac4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AC8u;
        goto label_212ac8;
    }
    ctx->pc = 0x212AC0u;
    {
        const bool branch_taken_0x212ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC0u;
        // 0x212ac4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac0) {
            ctx->pc = 0x212AD0u;
            goto label_212ad0;
        }
    }
    ctx->pc = 0x212AC8u;
label_212ac8:
    // 0x212ac8: 0x16240007  bne         $s1, $a0, . + 4 + (0x7 << 2)
label_212acc:
    if (ctx->pc == 0x212ACCu) {
        ctx->pc = 0x212ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC8u;
        // 0x212acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AD0u;
        goto label_212ad0;
    }
    ctx->pc = 0x212AC8u;
    {
        const bool branch_taken_0x212ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x212ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC8u;
        // 0x212acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac8) {
            ctx->pc = 0x212AE8u;
            goto label_212ae8;
        }
    }
    ctx->pc = 0x212AD0u;
label_212ad0:
    // 0x212ad0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212ad4:
    // 0x212ad4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_212ad8:
    // 0x212ad8: 0xc0900a8  jal         func_2402A0
label_212adc:
    if (ctx->pc == 0x212ADCu) {
        ctx->pc = 0x212ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AD8u;
        // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AE0u;
        goto label_212ae0;
    }
    ctx->pc = 0x212AD8u;
    SET_GPR_U32(ctx, 31, 0x212AE0u);
    ctx->pc = 0x212ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AD8u;
    // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212AE0u;
label_212ae0:
    // 0x212ae0: 0x10000037  b           . + 4 + (0x37 << 2)
label_212ae4:
    if (ctx->pc == 0x212AE4u) {
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AE8u;
        goto label_212ae8;
    }
    ctx->pc = 0x212AE0u;
    {
        const bool branch_taken_0x212ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae0) {
            ctx->pc = 0x212BC0u;
            goto label_212bc0;
        }
    }
    ctx->pc = 0x212AE8u;
label_212ae8:
    // 0x212ae8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_212aec:
    if (ctx->pc == 0x212AECu) {
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AF0u;
        goto label_212af0;
    }
    ctx->pc = 0x212AE8u;
    {
        const bool branch_taken_0x212ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae8) {
            ctx->pc = 0x212B08u;
            goto label_212b08;
        }
    }
    ctx->pc = 0x212AF0u;
label_212af0:
    // 0x212af0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212af4:
    // 0x212af4: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212af8:
    // 0x212af8: 0xc0900a8  jal         func_2402A0
label_212afc:
    if (ctx->pc == 0x212AFCu) {
        ctx->pc = 0x212AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AF8u;
        // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B00u;
        goto label_212b00;
    }
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x1000002e  b           . + 4 + (0x2E << 2)
label_212b04:
    if (ctx->pc == 0x212B04u) {
        ctx->pc = 0x212B08u;
        goto label_212b08;
    }
    ctx->pc = 0x212B00u;
    {
        const bool branch_taken_0x212b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b00) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B08u;
label_212b08:
    // 0x212b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_212b0c:
    // 0x212b0c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_212b10:
    if (ctx->pc == 0x212B10u) {
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B14u;
        goto label_212b14;
    }
    ctx->pc = 0x212B0Cu;
    {
        const bool branch_taken_0x212b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b0c) {
            ctx->pc = 0x212B44u;
            goto label_212b44;
        }
    }
    ctx->pc = 0x212B14u;
label_212b14:
    // 0x212b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212b18:
    // 0x212b18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212b1c:
    // 0x212b1c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212b20:
    // 0x212b20: 0xc0900a8  jal         func_2402A0
label_212b24:
    if (ctx->pc == 0x212B24u) {
        ctx->pc = 0x212B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B20u;
        // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B28u;
        goto label_212b28;
    }
    ctx->pc = 0x212B20u;
    SET_GPR_U32(ctx, 31, 0x212B28u);
    ctx->pc = 0x212B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B20u;
    // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B28u;
label_212b28:
    // 0x212b28: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_212b2c:
    if (ctx->pc == 0x212B2Cu) {
        ctx->pc = 0x212B30u;
        goto label_212b30;
    }
    ctx->pc = 0x212B28u;
    {
        const bool branch_taken_0x212b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b28) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B30u;
label_212b30:
    // 0x212b30: 0xc07aebc  jal         func_1EBAF0
label_212b34:
    if (ctx->pc == 0x212B34u) {
        ctx->pc = 0x212B38u;
        goto label_212b38;
    }
    ctx->pc = 0x212B30u;
    SET_GPR_U32(ctx, 31, 0x212B38u);
    ctx->pc = 0x1EBAF0u;
    { ctx->pc = 0x1ebaf0; return; }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212b3c:
    // 0x212b3c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_212b40:
    if (ctx->pc == 0x212B40u) {
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B44u;
        goto label_212b44;
    }
    ctx->pc = 0x212B3Cu;
    {
        const bool branch_taken_0x212b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b3c) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B44u;
label_212b44:
    // 0x212b44: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_212b48:
    if (ctx->pc == 0x212B48u) {
        ctx->pc = 0x212B4Cu;
        goto label_212b4c;
    }
    ctx->pc = 0x212B44u;
    {
        const bool branch_taken_0x212b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x212b44) {
            ctx->pc = 0x212B6Cu;
            goto label_212b6c;
        }
    }
    ctx->pc = 0x212B4Cu;
label_212b4c:
    // 0x212b4c: 0xc08a614  jal         func_229850
label_212b50:
    if (ctx->pc == 0x212B50u) {
        ctx->pc = 0x212B54u;
        goto label_212b54;
    }
    ctx->pc = 0x212B4Cu;
    SET_GPR_U32(ctx, 31, 0x212B54u);
    ctx->pc = 0x229850u;
    { ctx->pc = 0x229850; return; }
    ctx->pc = 0x212B54u;
label_212b54:
    // 0x212b54: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212b58:
    // 0x212b58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212b5c:
    // 0x212b5c: 0xc0900a8  jal         func_2402A0
label_212b60:
    if (ctx->pc == 0x212B60u) {
        ctx->pc = 0x212B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B5Cu;
        // 0x212b60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B64u;
        goto label_212b64;
    }
    ctx->pc = 0x212B5Cu;
    SET_GPR_U32(ctx, 31, 0x212B64u);
    ctx->pc = 0x212B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B5Cu;
    // 0x212b60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B64u;
label_212b64:
    // 0x212b64: 0x10000015  b           . + 4 + (0x15 << 2)
label_212b68:
    if (ctx->pc == 0x212B68u) {
        ctx->pc = 0x212B6Cu;
        goto label_212b6c;
    }
    ctx->pc = 0x212B64u;
    {
        const bool branch_taken_0x212b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b64) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B6Cu;
label_212b6c:
    // 0x212b6c: 0xc051338  jal         func_144CE0
label_212b70:
    if (ctx->pc == 0x212B70u) {
        ctx->pc = 0x212B74u;
        goto label_212b74;
    }
    ctx->pc = 0x212B6Cu;
    SET_GPR_U32(ctx, 31, 0x212B74u);
    ctx->pc = 0x144CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CE0u, 0x212B6Cu, 0x212B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B74u;
label_212b74:
    // 0x212b74: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212b78:
    // 0x212b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212b7c:
    // 0x212b7c: 0xc0900a8  jal         func_2402A0
label_212b80:
    if (ctx->pc == 0x212B80u) {
        ctx->pc = 0x212B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B7Cu;
        // 0x212b80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B84u;
        goto label_212b84;
    }
    ctx->pc = 0x212B7Cu;
    SET_GPR_U32(ctx, 31, 0x212B84u);
    ctx->pc = 0x212B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B7Cu;
    // 0x212b80: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B84u;
label_212b84:
    // 0x212b84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_212b88:
    if (ctx->pc == 0x212B88u) {
        ctx->pc = 0x212B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B84u;
        // 0x212b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B8Cu;
        goto label_212b8c;
    }
    ctx->pc = 0x212B84u;
    {
        const bool branch_taken_0x212b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B84u;
        // 0x212b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b84) {
            ctx->pc = 0x212BBCu;
            goto label_212bbc;
        }
    }
    ctx->pc = 0x212B8Cu;
label_212b8c:
    // 0x212b8c: 0xc051350  jal         func_144D40
label_212b90:
    if (ctx->pc == 0x212B90u) {
        ctx->pc = 0x212B94u;
        goto label_212b94;
    }
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B8Cu, 0x212B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B94u;
label_212b94:
    // 0x212b94: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212b98:
    // 0x212b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212b9c:
    // 0x212b9c: 0xc051350  jal         func_144D40
label_212ba0:
    if (ctx->pc == 0x212BA0u) {
        ctx->pc = 0x212BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B9Cu;
        // 0x212ba0: 0xac22ccd8  sw          $v0, -0x3328($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BA4u;
        goto label_212ba4;
    }
    ctx->pc = 0x212B9Cu;
    SET_GPR_U32(ctx, 31, 0x212BA4u);
    ctx->pc = 0x212BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B9Cu;
    // 0x212ba0: 0xac22ccd8  sw          $v0, -0x3328($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212B9Cu, 0x212BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BA4u;
label_212ba4:
    // 0x212ba4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212ba8:
    // 0x212ba8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x212ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_212bac:
    // 0x212bac: 0xc051350  jal         func_144D40
label_212bb0:
    if (ctx->pc == 0x212BB0u) {
        ctx->pc = 0x212BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BACu;
        // 0x212bb0: 0xac22ccdc  sw          $v0, -0x3324($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BB4u;
        goto label_212bb4;
    }
    ctx->pc = 0x212BACu;
    SET_GPR_U32(ctx, 31, 0x212BB4u);
    ctx->pc = 0x212BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212BACu;
    // 0x212bb0: 0xac22ccdc  sw          $v0, -0x3324($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D40u, 0x212BACu, 0x212BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BB4u;
label_212bb4:
    // 0x212bb4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212bb8:
    // 0x212bb8: 0xac22cce0  sw          $v0, -0x3320($at)
    ctx->pc = 0x212bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954208), GPR_U32(ctx, 2));
label_212bbc:
    // 0x212bbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212bc0:
    // 0x212bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212bc4:
    // 0x212bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212bc8:
    // 0x212bc8: 0x3e00008  jr          $ra
label_212bcc:
    if (ctx->pc == 0x212BCCu) {
        ctx->pc = 0x212BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC8u;
        // 0x212bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BD0u;
        goto label_212bd0;
    }
    ctx->pc = 0x212BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC8u;
        // 0x212bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212BD0u;
label_212bd0:
    // 0x212bd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212bd4:
    // 0x212bd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_212bd8:
    // 0x212bd8: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_212bdc:
    // 0x212bdc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_212be0:
    if (ctx->pc == 0x212BE0u) {
        ctx->pc = 0x212BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BDCu;
        // 0x212be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BE4u;
        goto label_212be4;
    }
    ctx->pc = 0x212BDCu;
    {
        const bool branch_taken_0x212bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BDCu;
        // 0x212be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bdc) {
            ctx->pc = 0x212BF8u;
            goto label_212bf8;
        }
    }
    ctx->pc = 0x212BE4u;
label_212be4:
    // 0x212be4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212be8:
    // 0x212be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212bec:
    // 0x212bec: 0xdc2276f8  ld          $v0, 0x76F8($at)
    ctx->pc = 0x212becu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 30456)));
label_212bf0:
    // 0x212bf0: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x212bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
label_212bf4:
    // 0x212bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_212bf8:
    // 0x212bf8: 0x3e00008  jr          $ra
label_212bfc:
    if (ctx->pc == 0x212BFCu) {
        ctx->pc = 0x212C00u;
        goto label_212c00;
    }
    ctx->pc = 0x212BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212C00u;
label_212c00:
    // 0x212c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212c04:
    // 0x212c04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x212c04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212c08:
    // 0x212c08: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x212c08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212c0c:
    // 0x212c0c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x212c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_212c10:
    // 0x212c10: 0x254a7560  addiu       $t2, $t2, 0x7560
    ctx->pc = 0x212c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30048));
label_212c14:
    // 0x212c14: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x212c14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_212c18:
    // 0x212c18: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x212c18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_212c1c:
    // 0x212c1c: 0x8da5006c  lw          $a1, 0x6C($t5)
    ctx->pc = 0x212c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 108)));
label_212c20:
    // 0x212c20: 0x29630002  slti        $v1, $t3, 0x2
    ctx->pc = 0x212c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_212c24:
    // 0x212c24: 0x8da4008c  lw          $a0, 0x8C($t5)
    ctx->pc = 0x212c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 140)));
label_212c28:
    // 0x212c28: 0x258c0100  addiu       $t4, $t4, 0x100
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 256));
label_212c2c:
    // 0x212c2c: 0x8da900ac  lw          $t1, 0xAC($t5)
    ctx->pc = 0x212c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 172)));
label_212c30:
    // 0x212c30: 0x8da800cc  lw          $t0, 0xCC($t5)
    ctx->pc = 0x212c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 204)));
label_212c34:
    // 0x212c34: 0x8da700ec  lw          $a3, 0xEC($t5)
    ctx->pc = 0x212c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 236)));
label_212c38:
    // 0x212c38: 0x8da6010c  lw          $a2, 0x10C($t5)
    ctx->pc = 0x212c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 268)));
label_212c3c:
    // 0x212c3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x212c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_212c40:
    // 0x212c40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_212c44:
    // 0x212c44: 0x8da5012c  lw          $a1, 0x12C($t5)
    ctx->pc = 0x212c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 300)));
label_212c48:
    // 0x212c48: 0x8da4014c  lw          $a0, 0x14C($t5)
    ctx->pc = 0x212c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 332)));
label_212c4c:
    // 0x212c4c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x212c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_212c50:
    // 0x212c50: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x212c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_212c54:
    // 0x212c54: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_212c58:
    // 0x212c58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x212c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_212c5c:
    // 0x212c5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_212c60:
    // 0x212c60: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_212c64:
    if (ctx->pc == 0x212C64u) {
        ctx->pc = 0x212C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C60u;
        // 0x212c64: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C68u;
        goto label_212c68;
    }
    ctx->pc = 0x212C60u;
    {
        const bool branch_taken_0x212c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C60u;
        // 0x212c64: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c60) {
            ctx->pc = 0x212C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212c14;
        }
    }
    ctx->pc = 0x212C68u;
label_212c68:
    // 0x212c68: 0x2961000a  slti        $at, $t3, 0xA
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_212c6c:
    // 0x212c6c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_212c70:
    if (ctx->pc == 0x212C70u) {
        ctx->pc = 0x212C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C6Cu;
        // 0x212c70: 0xb3140  sll         $a2, $t3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C74u;
        goto label_212c74;
    }
    ctx->pc = 0x212C6Cu;
    {
        const bool branch_taken_0x212c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C6Cu;
        // 0x212c70: 0xb3140  sll         $a2, $t3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c6c) {
            ctx->pc = 0x212C9Cu;
            goto label_212c9c;
        }
    }
    ctx->pc = 0x212C74u;
label_212c74:
    // 0x212c74: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x212c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_212c78:
    // 0x212c78: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x212c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
label_212c7c:
    // 0x212c7c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x212c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_212c80:
    // 0x212c80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x212c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_212c84:
    // 0x212c84: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x212c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_212c88:
    // 0x212c88: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x212c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_212c8c:
    // 0x212c8c: 0x2963000a  slti        $v1, $t3, 0xA
    ctx->pc = 0x212c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_212c90:
    // 0x212c90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_212c94:
    // 0x212c94: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_212c98:
    if (ctx->pc == 0x212C98u) {
        ctx->pc = 0x212C9Cu;
        goto label_212c9c;
    }
    ctx->pc = 0x212C94u;
    {
        const bool branch_taken_0x212c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212c94) {
            ctx->pc = 0x212C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212c7c;
        }
    }
    ctx->pc = 0x212C9Cu;
label_212c9c:
    // 0x212c9c: 0x0  nop
    ctx->pc = 0x212c9cu;
    // NOP
label_212ca0:
    // 0x212ca0: 0x3e00008  jr          $ra
label_212ca4:
    if (ctx->pc == 0x212CA4u) {
        ctx->pc = 0x212CA8u;
        goto label_212ca8;
    }
    ctx->pc = 0x212CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212CA8u;
label_212ca8:
    // 0x212ca8: 0x0  nop
    ctx->pc = 0x212ca8u;
    // NOP
label_212cac:
    // 0x212cac: 0x0  nop
    ctx->pc = 0x212cacu;
    // NOP
label_212cb0:
    // 0x212cb0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_212cb4:
    // 0x212cb4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x212cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_212cb8:
    // 0x212cb8: 0x244275cc  addiu       $v0, $v0, 0x75CC
    ctx->pc = 0x212cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30156));
label_212cbc:
    // 0x212cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212cc0:
    // 0x212cc0: 0x3e00008  jr          $ra
label_212cc4:
    if (ctx->pc == 0x212CC4u) {
        ctx->pc = 0x212CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CC0u;
        // 0x212cc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212CC8u;
        goto label_212cc8;
    }
    ctx->pc = 0x212CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CC0u;
        // 0x212cc4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212CC8u;
label_212cc8:
    // 0x212cc8: 0x0  nop
    ctx->pc = 0x212cc8u;
    // NOP
label_212ccc:
    // 0x212ccc: 0x0  nop
    ctx->pc = 0x212cccu;
    // NOP
label_212cd0:
    // 0x212cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212cd4:
    // 0x212cd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x212cd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212cd8:
    // 0x212cd8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x212cd8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212cdc:
    // 0x212cdc: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x212cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_212ce0:
    // 0x212ce0: 0x254a7560  addiu       $t2, $t2, 0x7560
    ctx->pc = 0x212ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30048));
label_212ce4:
    // 0x212ce4: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_212ce8:
    // 0x212ce8: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x212ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_212cec:
    // 0x212cec: 0x8da50008  lw          $a1, 0x8($t5)
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_212cf0:
    // 0x212cf0: 0x29630002  slti        $v1, $t3, 0x2
    ctx->pc = 0x212cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_212cf4:
    // 0x212cf4: 0x8da4000c  lw          $a0, 0xC($t5)
    ctx->pc = 0x212cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_212cf8:
    // 0x212cf8: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x212cf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
label_212cfc:
    // 0x212cfc: 0x8da90010  lw          $t1, 0x10($t5)
    ctx->pc = 0x212cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
label_212d00:
    // 0x212d00: 0x8da80014  lw          $t0, 0x14($t5)
    ctx->pc = 0x212d00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
label_212d04:
    // 0x212d04: 0x8da70018  lw          $a3, 0x18($t5)
    ctx->pc = 0x212d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
label_212d08:
    // 0x212d08: 0x8da6001c  lw          $a2, 0x1C($t5)
    ctx->pc = 0x212d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 28)));
label_212d0c:
    // 0x212d0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x212d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_212d10:
    // 0x212d10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_212d14:
    // 0x212d14: 0x8da50020  lw          $a1, 0x20($t5)
    ctx->pc = 0x212d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 32)));
label_212d18:
    // 0x212d18: 0x8da40024  lw          $a0, 0x24($t5)
    ctx->pc = 0x212d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
label_212d1c:
    // 0x212d1c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x212d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_212d20:
    // 0x212d20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x212d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_212d24:
    // 0x212d24: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x212d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_212d28:
    // 0x212d28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x212d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_212d2c:
    // 0x212d2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x212d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_212d30:
    // 0x212d30: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_212d34:
    if (ctx->pc == 0x212D34u) {
        ctx->pc = 0x212D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D30u;
        // 0x212d34: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D38u;
        goto label_212d38;
    }
    ctx->pc = 0x212D30u;
    {
        const bool branch_taken_0x212d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D30u;
        // 0x212d34: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d30) {
            ctx->pc = 0x212CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212ce4;
        }
    }
    ctx->pc = 0x212D38u;
label_212d38:
    // 0x212d38: 0x2961000a  slti        $at, $t3, 0xA
    ctx->pc = 0x212d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_212d3c:
    // 0x212d3c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_212d40:
    if (ctx->pc == 0x212D40u) {
        ctx->pc = 0x212D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D3Cu;
        // 0x212d40: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D44u;
        goto label_212d44;
    }
    ctx->pc = 0x212D3Cu;
    {
        const bool branch_taken_0x212d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D3Cu;
        // 0x212d40: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d3c) {
            ctx->pc = 0x212D6Cu;
            goto label_212d6c;
        }
    }
    ctx->pc = 0x212D44u;
label_212d44:
    // 0x212d44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_212d48:
    // 0x212d48: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x212d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
label_212d4c:
    // 0x212d4c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x212d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_212d50:
    // 0x212d50: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x212d50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_212d54:
    // 0x212d54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_212d58:
    // 0x212d58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x212d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_212d5c:
    // 0x212d5c: 0x2963000a  slti        $v1, $t3, 0xA
    ctx->pc = 0x212d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_212d60:
    // 0x212d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_212d64:
    // 0x212d64: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_212d68:
    if (ctx->pc == 0x212D68u) {
        ctx->pc = 0x212D6Cu;
        goto label_212d6c;
    }
    ctx->pc = 0x212D64u;
    {
        const bool branch_taken_0x212d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212d64) {
            ctx->pc = 0x212D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212d4c;
        }
    }
    ctx->pc = 0x212D6Cu;
label_212d6c:
    // 0x212d6c: 0x0  nop
    ctx->pc = 0x212d6cu;
    // NOP
label_212d70:
    // 0x212d70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_212d74:
    // 0x212d74: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x212d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_212d78:
    // 0x212d78: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x212d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_212d7c:
    // 0x212d7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_212d80:
    if (ctx->pc == 0x212D80u) {
        ctx->pc = 0x212D84u;
        goto label_212d84;
    }
    ctx->pc = 0x212D7Cu;
    {
        const bool branch_taken_0x212d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x212d7c) {
            ctx->pc = 0x212D88u;
            goto label_212d88;
        }
    }
    ctx->pc = 0x212D84u;
label_212d84:
    // 0x212d84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x212d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_212d88:
    // 0x212d88: 0x3e00008  jr          $ra
label_212d8c:
    if (ctx->pc == 0x212D8Cu) {
        ctx->pc = 0x212D90u;
        goto label_212d90;
    }
    ctx->pc = 0x212D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212D90u;
label_212d90:
    // 0x212d90: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212d94:
    // 0x212d94: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x212d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_212d98:
    // 0x212d98: 0x90237560  lbu         $v1, 0x7560($at)
    ctx->pc = 0x212d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
label_212d9c:
    // 0x212d9c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_212da0:
    if (ctx->pc == 0x212DA0u) {
        ctx->pc = 0x212DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D9Cu;
        // 0x212da0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DA4u;
        goto label_212da4;
    }
    ctx->pc = 0x212D9Cu;
    {
        const bool branch_taken_0x212d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D9Cu;
        // 0x212da0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d9c) {
            ctx->pc = 0x212DBCu;
            goto label_212dbc;
        }
    }
    ctx->pc = 0x212DA4u;
label_212da4:
    // 0x212da4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x212da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_212da8:
    // 0x212da8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_212dac:
    if (ctx->pc == 0x212DACu) {
        ctx->pc = 0x212DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DA8u;
        // 0x212dac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DB0u;
        goto label_212db0;
    }
    ctx->pc = 0x212DA8u;
    {
        const bool branch_taken_0x212da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DA8u;
        // 0x212dac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212da8) {
            ctx->pc = 0x212DB8u;
            goto label_212db8;
        }
    }
    ctx->pc = 0x212DB0u;
label_212db0:
    // 0x212db0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_212db4:
    if (ctx->pc == 0x212DB4u) {
        ctx->pc = 0x212DB8u;
        goto label_212db8;
    }
    ctx->pc = 0x212DB0u;
    {
        const bool branch_taken_0x212db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212db0) {
            ctx->pc = 0x212DC4u;
            goto label_212dc4;
        }
    }
    ctx->pc = 0x212DB8u;
label_212db8:
    // 0x212db8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x212db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_212dbc:
    // 0x212dbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_212dc0:
    if (ctx->pc == 0x212DC0u) {
        ctx->pc = 0x212DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DBCu;
        // 0x212dc0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DC4u;
        goto label_212dc4;
    }
    ctx->pc = 0x212DBCu;
    {
        const bool branch_taken_0x212dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DBCu;
        // 0x212dc0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212dbc) {
            ctx->pc = 0x212DCCu;
            goto label_212dcc;
        }
    }
    ctx->pc = 0x212DC4u;
label_212dc4:
    // 0x212dc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x212dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_212dc8:
    // 0x212dc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x212dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212dcc:
    // 0x212dcc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_212dd0:
    // 0x212dd0: 0x24427590  addiu       $v0, $v0, 0x7590
    ctx->pc = 0x212dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30096));
label_212dd4:
    // 0x212dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212dd8:
    // 0x212dd8: 0x3e00008  jr          $ra
label_212ddc:
    if (ctx->pc == 0x212DDCu) {
        ctx->pc = 0x212DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DD8u;
        // 0x212ddc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DE0u;
        goto label_212de0;
    }
    ctx->pc = 0x212DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DD8u;
        // 0x212ddc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212DE0u;
label_212de0:
    // 0x212de0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212de4:
    // 0x212de4: 0x3e00008  jr          $ra
label_212de8:
    if (ctx->pc == 0x212DE8u) {
        ctx->pc = 0x212DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE4u;
        // 0x212de8: 0x90227560  lbu         $v0, 0x7560($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DECu;
        goto label_212dec;
    }
    ctx->pc = 0x212DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE4u;
        // 0x212de8: 0x90227560  lbu         $v0, 0x7560($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212DECu;
label_212dec:
    // 0x212dec: 0x0  nop
    ctx->pc = 0x212decu;
    // NOP
label_212df0:
    // 0x212df0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212df4:
    // 0x212df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x212df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212df8:
    // 0x212df8: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30052)));
label_212dfc:
    // 0x212dfc: 0x822004  sllv        $a0, $v0, $a0
    ctx->pc = 0x212dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_212e00:
    // 0x212e00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212e04:
    // 0x212e04: 0x3e00008  jr          $ra
label_212e08:
    if (ctx->pc == 0x212E08u) {
        ctx->pc = 0x212E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E04u;
        // 0x212e08: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E0Cu;
        goto label_212e0c;
    }
    ctx->pc = 0x212E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E04u;
        // 0x212e08: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212E0Cu;
label_212e0c:
    // 0x212e0c: 0x0  nop
    ctx->pc = 0x212e0cu;
    // NOP
label_212e10:
    // 0x212e10: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_212e14:
    if (ctx->pc == 0x212E14u) {
        ctx->pc = 0x212E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E10u;
        // 0x212e14: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E18u;
        goto label_212e18;
    }
    ctx->pc = 0x212E10u;
    {
        const bool branch_taken_0x212e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E10u;
        // 0x212e14: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e10) {
            ctx->pc = 0x212E38u;
            goto label_212e38;
        }
    }
    ctx->pc = 0x212E18u;
label_212e18:
    // 0x212e18: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212e1c:
    // 0x212e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212e20:
    // 0x212e20: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30052)));
label_212e24:
    // 0x212e24: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x212e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_212e28:
    // 0x212e28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x212e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_212e2c:
    // 0x212e2c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212e30:
    // 0x212e30: 0x10000008  b           . + 4 + (0x8 << 2)
label_212e34:
    if (ctx->pc == 0x212E34u) {
        ctx->pc = 0x212E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E30u;
        // 0x212e34: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E38u;
        goto label_212e38;
    }
    ctx->pc = 0x212E30u;
    {
        const bool branch_taken_0x212e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E30u;
        // 0x212e34: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e30) {
            ctx->pc = 0x212E54u;
            goto label_212e54;
        }
    }
    ctx->pc = 0x212E38u;
label_212e38:
    // 0x212e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212e3c:
    // 0x212e3c: 0x8c237564  lw          $v1, 0x7564($at)
    ctx->pc = 0x212e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30052)));
label_212e40:
    // 0x212e40: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_212e44:
    // 0x212e44: 0x802027  not         $a0, $a0
    ctx->pc = 0x212e44u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_212e48:
    // 0x212e48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212e4c:
    // 0x212e4c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212e50:
    // 0x212e50: 0xac237564  sw          $v1, 0x7564($at)
    ctx->pc = 0x212e50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
label_212e54:
    // 0x212e54: 0x3e00008  jr          $ra
label_212e58:
    if (ctx->pc == 0x212E58u) {
        ctx->pc = 0x212E5Cu;
        goto label_212e5c;
    }
    ctx->pc = 0x212E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212E5Cu;
label_212e5c:
    // 0x212e5c: 0x0  nop
    ctx->pc = 0x212e5cu;
    // NOP
label_212e60:
    // 0x212e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212e64:
    // 0x212e64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_212e68:
    // 0x212e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212e6c:
    // 0x212e6c: 0x34664ef8  ori         $a2, $v1, 0x4EF8
    ctx->pc = 0x212e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20216);
label_212e70:
    // 0x212e70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x212e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_212e74:
    // 0x212e74: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x212e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_212e78:
    // 0x212e78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x212e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_212e7c:
    // 0x212e7c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x212e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_212e80:
    // 0x212e80: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x212e80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_212e84:
    // 0x212e84: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212e84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_212e88:
    // 0x212e88: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212e8c:
    // 0x212e8c: 0xc44814  dsllv       $t1, $a0, $a2
    ctx->pc = 0x212e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_212e90:
    // 0x212e90: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_212e94:
    // 0x212e94: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x212e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
label_212e98:
    // 0x212e98: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_212e9c:
    // 0x212e9c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212e9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_212ea0:
    // 0x212ea0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_212ea4:
    // 0x212ea4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x212ea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_212ea8:
    // 0x212ea8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ea8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_212eac:
    // 0x212eac: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x212eacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
label_212eb0:
    // 0x212eb0: 0xc46014  dsllv       $t4, $a0, $a2
    ctx->pc = 0x212eb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_212eb4:
    // 0x212eb4: 0xdc2d1888  ld          $t5, 0x1888($at)
    ctx->pc = 0x212eb4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
label_212eb8:
    // 0x212eb8: 0xe47014  dsllv       $t6, $a0, $a3
    ctx->pc = 0x212eb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
label_212ebc:
    // 0x212ebc: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_212ec0:
    // 0x212ec0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x212ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
label_212ec4:
    // 0x212ec4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x212ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_212ec8:
    // 0x212ec8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212ec8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_212ecc:
    // 0x212ecc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_212ed0:
    // 0x212ed0: 0xe45814  dsllv       $t3, $a0, $a3
    ctx->pc = 0x212ed0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
label_212ed4:
    // 0x212ed4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ed4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_212ed8:
    // 0x212ed8: 0x24a70005  addiu       $a3, $a1, 0x5
    ctx->pc = 0x212ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_212edc:
    // 0x212edc: 0xc45014  dsllv       $t2, $a0, $a2
    ctx->pc = 0x212edcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_212ee0:
    // 0x212ee0: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x212ee0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
label_212ee4:
    // 0x212ee4: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x212ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_212ee8:
    // 0x212ee8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x212ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_212eec:
    // 0x212eec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_212ef0:
    // 0x212ef0: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x212ef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_212ef4:
    // 0x212ef4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ef4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_212ef8:
    // 0x212ef8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212ef8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_212efc:
    // 0x212efc: 0xc44014  dsllv       $t0, $a0, $a2
    ctx->pc = 0x212efcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_212f00:
    // 0x212f00: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x212f00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_212f04:
    // 0x212f04: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x212f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_212f08:
    // 0x212f08: 0xe44814  dsllv       $t1, $a0, $a3
    ctx->pc = 0x212f08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
label_212f0c:
    // 0x212f0c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_212f10:
    // 0x212f10: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_212f14:
    // 0x212f14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212f14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_212f18:
    // 0x212f18: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x212f18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_212f1c:
    // 0x212f1c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_212f20:
    // 0x212f20: 0xc43814  dsllv       $a3, $a0, $a2
    ctx->pc = 0x212f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
label_212f24:
    // 0x212f24: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x212f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_212f28:
    // 0x212f28: 0x28a6001d  slti        $a2, $a1, 0x1D
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_212f2c:
    // 0x212f2c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x212f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_212f30:
    // 0x212f30: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212f34:
    // 0x212f34: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
label_212f38:
    if (ctx->pc == 0x212F38u) {
        ctx->pc = 0x212F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F34u;
        // 0x212f38: 0xfc271888  sd          $a3, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F3Cu;
        goto label_212f3c;
    }
    ctx->pc = 0x212F34u;
    {
        const bool branch_taken_0x212f34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F34u;
        // 0x212f38: 0xfc271888  sd          $a3, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f34) {
            ctx->pc = 0x212E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212F3Cu;
label_212f3c:
    // 0x212f3c: 0x28a10025  slti        $at, $a1, 0x25
    ctx->pc = 0x212f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
label_212f40:
    // 0x212f40: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_212f44:
    if (ctx->pc == 0x212F44u) {
        ctx->pc = 0x212F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F40u;
        // 0x212f44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F48u;
        goto label_212f48;
    }
    ctx->pc = 0x212F40u;
    {
        const bool branch_taken_0x212f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F40u;
        // 0x212f44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f40) {
            ctx->pc = 0x212F74u;
            goto label_212f74;
        }
    }
    ctx->pc = 0x212F48u;
label_212f48:
    // 0x212f48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212f4c:
    // 0x212f4c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_212f50:
    // 0x212f50: 0xdc241888  ld          $a0, 0x1888($at)
    ctx->pc = 0x212f50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
label_212f54:
    // 0x212f54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x212f54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_212f58:
    // 0x212f58: 0x673014  dsllv       $a2, $a3, $v1
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (GPR_U32(ctx, 3) & 0x3F));
label_212f5c:
    // 0x212f5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_212f60:
    // 0x212f60: 0x28a30025  slti        $v1, $a1, 0x25
    ctx->pc = 0x212f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
label_212f64:
    // 0x212f64: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x212f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_212f68:
    // 0x212f68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212f6c:
    // 0x212f6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_212f70:
    if (ctx->pc == 0x212F70u) {
        ctx->pc = 0x212F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F6Cu;
        // 0x212f70: 0xfc241888  sd          $a0, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F74u;
        goto label_212f74;
    }
    ctx->pc = 0x212F6Cu;
    {
        const bool branch_taken_0x212f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F6Cu;
        // 0x212f70: 0xfc241888  sd          $a0, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f6c) {
            ctx->pc = 0x212F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f48;
        }
    }
    ctx->pc = 0x212F74u;
label_212f74:
    // 0x212f74: 0x0  nop
    ctx->pc = 0x212f74u;
    // NOP
label_212f78:
    // 0x212f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212f7c:
    // 0x212f7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_212f80:
    // 0x212f80: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_212f84:
    // 0x212f84: 0x34664ef0  ori         $a2, $v1, 0x4EF0
    ctx->pc = 0x212f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20208);
label_212f88:
    // 0x212f88: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_212f8c:
    // 0x212f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212f90:
    // 0x212f90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_212f94:
    // 0x212f94: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_212f98:
    // 0x212f98: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x212f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_212f9c:
    // 0x212f9c: 0xe37004  sllv        $t6, $v1, $a3
    ctx->pc = 0x212f9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_212fa0:
    // 0x212fa0: 0xa34804  sllv        $t1, $v1, $a1
    ctx->pc = 0x212fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_212fa4:
    // 0x212fa4: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x212fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_212fa8:
    // 0x212fa8: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_212fac:
    // 0x212fac: 0xe36004  sllv        $t4, $v1, $a3
    ctx->pc = 0x212facu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_212fb0:
    // 0x212fb0: 0xc36804  sllv        $t5, $v1, $a2
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_212fb4:
    // 0x212fb4: 0x24a70005  addiu       $a3, $a1, 0x5
    ctx->pc = 0x212fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_212fb8:
    // 0x212fb8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x212fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_212fbc:
    // 0x212fbc: 0xc35804  sllv        $t3, $v1, $a2
    ctx->pc = 0x212fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_212fc0:
    // 0x212fc0: 0xe35004  sllv        $t2, $v1, $a3
    ctx->pc = 0x212fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_212fc4:
    // 0x212fc4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x212fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_212fc8:
    // 0x212fc8: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x212fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_212fcc:
    // 0x212fcc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x212fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_212fd0:
    // 0x212fd0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212fd4:
    // 0x212fd4: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_212fd8:
    // 0x212fd8: 0xc34804  sllv        $t1, $v1, $a2
    ctx->pc = 0x212fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_212fdc:
    // 0x212fdc: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x212fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_212fe0:
    // 0x212fe0: 0xc34004  sllv        $t0, $v1, $a2
    ctx->pc = 0x212fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_212fe4:
    // 0x212fe4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x212fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_212fe8:
    // 0x212fe8: 0x28a6000e  slti        $a2, $a1, 0xE
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
label_212fec:
    // 0x212fec: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x212fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
label_212ff0:
    // 0x212ff0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212ff4:
    // 0x212ff4: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x212ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_212ff8:
    // 0x212ff8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212ffc:
    // 0x212ffc: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x212ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_213000:
    // 0x213000: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x213000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_213004:
    // 0x213004: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213008:
    // 0x213008: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_21300c:
    // 0x21300c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213010:
    // 0x213010: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_213014:
    // 0x213014: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x213014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
label_213018:
    // 0x213018: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_21301c:
    // 0x21301c: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x21301cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_213020:
    // 0x213020: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213024:
    // 0x213024: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_213028:
    // 0x213028: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x213028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_21302c:
    // 0x21302c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213030:
    // 0x213030: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_213034:
    // 0x213034: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213038:
    // 0x213038: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_21303c:
    // 0x21303c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x21303cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
label_213040:
    // 0x213040: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213044:
    // 0x213044: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213044u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_213048:
    // 0x213048: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_21304c:
    // 0x21304c: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x21304cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_213050:
    // 0x213050: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x213050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_213054:
    // 0x213054: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213058:
    // 0x213058: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
label_21305c:
    // 0x21305c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213060:
    // 0x213060: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_213064:
    // 0x213064: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x213064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_213068:
    // 0x213068: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_21306c:
    // 0x21306c: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
label_213070:
    if (ctx->pc == 0x213070u) {
        ctx->pc = 0x213070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21306Cu;
        // 0x213070: 0xac271880  sw          $a3, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213074u;
        goto label_213074;
    }
    ctx->pc = 0x21306Cu;
    {
        const bool branch_taken_0x21306c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x213070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21306Cu;
        // 0x213070: 0xac271880  sw          $a3, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21306c) {
            ctx->pc = 0x212F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f94;
        }
    }
    ctx->pc = 0x213074u;
label_213074:
    // 0x213074: 0x28a10016  slti        $at, $a1, 0x16
    ctx->pc = 0x213074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_213078:
    // 0x213078: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_21307c:
    if (ctx->pc == 0x21307Cu) {
        ctx->pc = 0x21307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213078u;
        // 0x21307c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213080u;
        goto label_213080;
    }
    ctx->pc = 0x213078u;
    {
        const bool branch_taken_0x213078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213078u;
        // 0x21307c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213078) {
            ctx->pc = 0x2130A4u;
            goto label_2130a4;
        }
    }
    ctx->pc = 0x213080u;
label_213080:
    // 0x213080: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_213084:
    // 0x213084: 0xa73004  sllv        $a2, $a3, $a1
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_213088:
    // 0x213088: 0x8c241880  lw          $a0, 0x1880($at)
    ctx->pc = 0x213088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_21308c:
    // 0x21308c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_213090:
    // 0x213090: 0x28a30016  slti        $v1, $a1, 0x16
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_213094:
    // 0x213094: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_213098:
    // 0x213098: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_21309c:
    // 0x21309c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2130a0:
    if (ctx->pc == 0x2130A0u) {
        ctx->pc = 0x2130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21309Cu;
        // 0x2130a0: 0xac241880  sw          $a0, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2130A4u;
        goto label_2130a4;
    }
    ctx->pc = 0x21309Cu;
    {
        const bool branch_taken_0x21309c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21309Cu;
        // 0x2130a0: 0xac241880  sw          $a0, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21309c) {
            ctx->pc = 0x213080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213080;
        }
    }
    ctx->pc = 0x2130A4u;
label_2130a4:
    // 0x2130a4: 0x0  nop
    ctx->pc = 0x2130a4u;
    // NOP
label_2130a8:
    // 0x2130a8: 0x3e00008  jr          $ra
label_2130ac:
    if (ctx->pc == 0x2130ACu) {
        ctx->pc = 0x2130B0u;
        goto label_2130b0;
    }
    ctx->pc = 0x2130A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2130A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2130B0u;
label_2130b0:
    // 0x2130b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2130b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2130b4:
    // 0x2130b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2130b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2130b8:
    // 0x2130b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2130b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2130bc:
    // 0x2130bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2130bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2130c0:
    // 0x2130c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2130c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2130c4:
    // 0x2130c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2130c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2130c8:
    // 0x2130c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2130c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2130cc:
    // 0x2130cc: 0x0  nop
    ctx->pc = 0x2130ccu;
    // NOP
label_2130d0:
    // 0x2130d0: 0x278391b8  addiu       $v1, $gp, -0x6E48
    ctx->pc = 0x2130d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_2130d4:
    // 0x2130d4: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x2130d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2130d8:
    // 0x2130d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2130d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2130dc:
    // 0x2130dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2130e0:
    if (ctx->pc == 0x2130E0u) {
        ctx->pc = 0x2130E4u;
        goto label_2130e4;
    }
    ctx->pc = 0x2130DCu;
    {
        const bool branch_taken_0x2130dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2130dc) {
            ctx->pc = 0x2130F0u;
            goto label_2130f0;
        }
    }
    ctx->pc = 0x2130E4u;
label_2130e4:
    // 0x2130e4: 0xc070038  jal         func_1C00E0
label_2130e8:
    if (ctx->pc == 0x2130E8u) {
        ctx->pc = 0x2130ECu;
        goto label_2130ec;
    }
    ctx->pc = 0x2130E4u;
    SET_GPR_U32(ctx, 31, 0x2130ECu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2130E4u, 0x2130ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130ECu;
label_2130ec:
    // 0x2130ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2130ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2130f0:
    // 0x2130f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2130f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2130f4:
    // 0x2130f4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2130f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2130f8:
    // 0x2130f8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2130fc:
    if (ctx->pc == 0x2130FCu) {
        ctx->pc = 0x2130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F8u;
        // 0x2130fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213100u;
        goto label_213100;
    }
    ctx->pc = 0x2130F8u;
    {
        const bool branch_taken_0x2130f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F8u;
        // 0x2130fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f8) {
            ctx->pc = 0x2130CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2130cc;
        }
    }
    ctx->pc = 0x213100u;
label_213100:
    // 0x213100: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213104:
    // 0x213104: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_213108:
    if (ctx->pc == 0x213108u) {
        ctx->pc = 0x213108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213104u;
        // 0x213108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21310Cu;
        goto label_21310c;
    }
    ctx->pc = 0x213104u;
    {
        const bool branch_taken_0x213104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213104u;
        // 0x213108: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213104) {
            ctx->pc = 0x21311Cu;
            goto label_21311c;
        }
    }
    ctx->pc = 0x21310Cu;
label_21310c:
    // 0x21310c: 0xc070038  jal         func_1C00E0
label_213110:
    if (ctx->pc == 0x213110u) {
        ctx->pc = 0x213114u;
        goto label_213114;
    }
    ctx->pc = 0x21310Cu;
    SET_GPR_U32(ctx, 31, 0x213114u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x21310Cu, 0x213114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213114u;
label_213114:
    // 0x213114: 0xaf8091b0  sw          $zero, -0x6E50($gp)
    ctx->pc = 0x213114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 0));
label_213118:
    // 0x213118: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21311c:
    // 0x21311c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21311cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213120:
    // 0x213120: 0x0  nop
    ctx->pc = 0x213120u;
    // NOP
label_213124:
    // 0x213124: 0x278391a8  addiu       $v1, $gp, -0x6E58
    ctx->pc = 0x213124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939048));
label_213128:
    // 0x213128: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x213128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21312c:
    // 0x21312c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_213130:
    // 0x213130: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_213134:
    if (ctx->pc == 0x213134u) {
        ctx->pc = 0x213138u;
        goto label_213138;
    }
    ctx->pc = 0x213130u;
    {
        const bool branch_taken_0x213130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x213130) {
            ctx->pc = 0x213144u;
            goto label_213144;
        }
    }
    ctx->pc = 0x213138u;
label_213138:
    // 0x213138: 0xc070038  jal         func_1C00E0
label_21313c:
    if (ctx->pc == 0x21313Cu) {
        ctx->pc = 0x213140u;
        goto label_213140;
    }
    ctx->pc = 0x213138u;
    SET_GPR_U32(ctx, 31, 0x213140u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x213138u, 0x213140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213140u;
label_213140:
    // 0x213140: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x213140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_213144:
    // 0x213144: 0x0  nop
    ctx->pc = 0x213144u;
    // NOP
label_213148:
    // 0x213148: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x213148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21314c:
    // 0x21314c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x21314cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_213150:
    // 0x213150: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_213154:
    if (ctx->pc == 0x213154u) {
        ctx->pc = 0x213154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213150u;
        // 0x213154: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213158u;
        goto label_213158;
    }
    ctx->pc = 0x213150u;
    {
        const bool branch_taken_0x213150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213150u;
        // 0x213154: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213150) {
            ctx->pc = 0x213120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213120;
        }
    }
    ctx->pc = 0x213158u;
label_213158:
    // 0x213158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x213158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21315c:
    // 0x21315c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21315cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_213160:
    // 0x213160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x213160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213164:
    // 0x213164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x213164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213168:
    // 0x213168: 0x3e00008  jr          $ra
label_21316c:
    if (ctx->pc == 0x21316Cu) {
        ctx->pc = 0x21316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213168u;
        // 0x21316c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213170u;
        goto label_213170;
    }
    ctx->pc = 0x213168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213168u;
        // 0x21316c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213170u;
label_213170:
    // 0x213170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_213174:
    // 0x213174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_213178:
    // 0x213178: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x213178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_21317c:
    // 0x21317c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_213180:
    // 0x213180: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x213180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_213184:
    // 0x213184: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213188:
    // 0x213188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x213188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21318c:
    // 0x21318c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21318cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213190:
    // 0x213190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213194:
    // 0x213194: 0x0  nop
    ctx->pc = 0x213194u;
    // NOP
label_213198:
    // 0x213198: 0x278291b8  addiu       $v0, $gp, -0x6E48
    ctx->pc = 0x213198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_21319c:
    // 0x21319c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x21319cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2131a0:
    // 0x2131a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2131a4:
    // 0x2131a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2131a8:
    if (ctx->pc == 0x2131A8u) {
        ctx->pc = 0x2131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131A4u;
        // 0x2131a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131ACu;
        goto label_2131ac;
    }
    ctx->pc = 0x2131A4u;
    {
        const bool branch_taken_0x2131a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131A4u;
        // 0x2131a8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131a4) {
            ctx->pc = 0x2131B8u;
            { ctx->pc = 0x2131b8; return; }
        }
    }
    ctx->pc = 0x2131ACu;
label_2131ac:
    // 0x2131ac: 0xc070080  jal         func_1C0200
    ctx->pc = 0x2131b0u;
    return;
}
