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


void FUN_0017d410_part57(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x198990u: goto label_198990;
        case 0x198994u: goto label_198994;
        case 0x198998u: goto label_198998;
        case 0x19899cu: goto label_19899c;
        case 0x1989a0u: goto label_1989a0;
        case 0x1989a4u: goto label_1989a4;
        case 0x1989a8u: goto label_1989a8;
        case 0x1989acu: goto label_1989ac;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989b4u: goto label_1989b4;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989bcu: goto label_1989bc;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989c4u: goto label_1989c4;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989d0u: goto label_1989d0;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989dcu: goto label_1989dc;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989e4u: goto label_1989e4;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989ecu: goto label_1989ec;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989f4u: goto label_1989f4;
        case 0x1989f8u: goto label_1989f8;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a00u: goto label_198a00;
        case 0x198a04u: goto label_198a04;
        case 0x198a08u: goto label_198a08;
        case 0x198a0cu: goto label_198a0c;
        case 0x198a10u: goto label_198a10;
        case 0x198a14u: goto label_198a14;
        case 0x198a18u: goto label_198a18;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a20u: goto label_198a20;
        case 0x198a24u: goto label_198a24;
        case 0x198a28u: goto label_198a28;
        case 0x198a2cu: goto label_198a2c;
        case 0x198a30u: goto label_198a30;
        case 0x198a34u: goto label_198a34;
        case 0x198a38u: goto label_198a38;
        case 0x198a3cu: goto label_198a3c;
        case 0x198a40u: goto label_198a40;
        case 0x198a44u: goto label_198a44;
        case 0x198a48u: goto label_198a48;
        case 0x198a4cu: goto label_198a4c;
        case 0x198a50u: goto label_198a50;
        case 0x198a54u: goto label_198a54;
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        case 0x198b08u: goto label_198b08;
        case 0x198b0cu: goto label_198b0c;
        case 0x198b10u: goto label_198b10;
        case 0x198b14u: goto label_198b14;
        case 0x198b18u: goto label_198b18;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b20u: goto label_198b20;
        case 0x198b24u: goto label_198b24;
        case 0x198b28u: goto label_198b28;
        case 0x198b2cu: goto label_198b2c;
        case 0x198b30u: goto label_198b30;
        case 0x198b34u: goto label_198b34;
        case 0x198b38u: goto label_198b38;
        case 0x198b3cu: goto label_198b3c;
        case 0x198b40u: goto label_198b40;
        case 0x198b44u: goto label_198b44;
        case 0x198b48u: goto label_198b48;
        case 0x198b4cu: goto label_198b4c;
        case 0x198b50u: goto label_198b50;
        case 0x198b54u: goto label_198b54;
        case 0x198b58u: goto label_198b58;
        case 0x198b5cu: goto label_198b5c;
        case 0x198b60u: goto label_198b60;
        case 0x198b64u: goto label_198b64;
        case 0x198b68u: goto label_198b68;
        case 0x198b6cu: goto label_198b6c;
        case 0x198b70u: goto label_198b70;
        case 0x198b74u: goto label_198b74;
        case 0x198b78u: goto label_198b78;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b80u: goto label_198b80;
        case 0x198b84u: goto label_198b84;
        case 0x198b88u: goto label_198b88;
        case 0x198b8cu: goto label_198b8c;
        case 0x198b90u: goto label_198b90;
        case 0x198b94u: goto label_198b94;
        case 0x198b98u: goto label_198b98;
        case 0x198b9cu: goto label_198b9c;
        case 0x198ba0u: goto label_198ba0;
        case 0x198ba4u: goto label_198ba4;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bacu: goto label_198bac;
        case 0x198bb0u: goto label_198bb0;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bb8u: goto label_198bb8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bc0u: goto label_198bc0;
        case 0x198bc4u: goto label_198bc4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bccu: goto label_198bcc;
        case 0x198bd0u: goto label_198bd0;
        case 0x198bd4u: goto label_198bd4;
        case 0x198bd8u: goto label_198bd8;
        case 0x198bdcu: goto label_198bdc;
        case 0x198be0u: goto label_198be0;
        case 0x198be4u: goto label_198be4;
        case 0x198be8u: goto label_198be8;
        case 0x198becu: goto label_198bec;
        case 0x198bf0u: goto label_198bf0;
        case 0x198bf4u: goto label_198bf4;
        case 0x198bf8u: goto label_198bf8;
        case 0x198bfcu: goto label_198bfc;
        case 0x198c00u: goto label_198c00;
        case 0x198c04u: goto label_198c04;
        case 0x198c08u: goto label_198c08;
        case 0x198c0cu: goto label_198c0c;
        case 0x198c10u: goto label_198c10;
        case 0x198c14u: goto label_198c14;
        case 0x198c18u: goto label_198c18;
        case 0x198c1cu: goto label_198c1c;
        case 0x198c20u: goto label_198c20;
        case 0x198c24u: goto label_198c24;
        case 0x198c28u: goto label_198c28;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c30u: goto label_198c30;
        case 0x198c34u: goto label_198c34;
        case 0x198c38u: goto label_198c38;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c40u: goto label_198c40;
        case 0x198c44u: goto label_198c44;
        case 0x198c48u: goto label_198c48;
        case 0x198c4cu: goto label_198c4c;
        case 0x198c50u: goto label_198c50;
        case 0x198c54u: goto label_198c54;
        case 0x198c58u: goto label_198c58;
        case 0x198c5cu: goto label_198c5c;
        case 0x198c60u: goto label_198c60;
        case 0x198c64u: goto label_198c64;
        case 0x198c68u: goto label_198c68;
        case 0x198c6cu: goto label_198c6c;
        case 0x198c70u: goto label_198c70;
        case 0x198c74u: goto label_198c74;
        case 0x198c78u: goto label_198c78;
        case 0x198c7cu: goto label_198c7c;
        case 0x198c80u: goto label_198c80;
        case 0x198c84u: goto label_198c84;
        case 0x198c88u: goto label_198c88;
        case 0x198c8cu: goto label_198c8c;
        case 0x198c90u: goto label_198c90;
        case 0x198c94u: goto label_198c94;
        case 0x198c98u: goto label_198c98;
        case 0x198c9cu: goto label_198c9c;
        case 0x198ca0u: goto label_198ca0;
        case 0x198ca4u: goto label_198ca4;
        case 0x198ca8u: goto label_198ca8;
        case 0x198cacu: goto label_198cac;
        case 0x198cb0u: goto label_198cb0;
        case 0x198cb4u: goto label_198cb4;
        case 0x198cb8u: goto label_198cb8;
        case 0x198cbcu: goto label_198cbc;
        case 0x198cc0u: goto label_198cc0;
        case 0x198cc4u: goto label_198cc4;
        case 0x198cc8u: goto label_198cc8;
        case 0x198cccu: goto label_198ccc;
        case 0x198cd0u: goto label_198cd0;
        case 0x198cd4u: goto label_198cd4;
        case 0x198cd8u: goto label_198cd8;
        case 0x198cdcu: goto label_198cdc;
        case 0x198ce0u: goto label_198ce0;
        case 0x198ce4u: goto label_198ce4;
        case 0x198ce8u: goto label_198ce8;
        case 0x198cecu: goto label_198cec;
        case 0x198cf0u: goto label_198cf0;
        case 0x198cf4u: goto label_198cf4;
        case 0x198cf8u: goto label_198cf8;
        case 0x198cfcu: goto label_198cfc;
        case 0x198d00u: goto label_198d00;
        case 0x198d04u: goto label_198d04;
        case 0x198d08u: goto label_198d08;
        case 0x198d0cu: goto label_198d0c;
        case 0x198d10u: goto label_198d10;
        case 0x198d14u: goto label_198d14;
        case 0x198d18u: goto label_198d18;
        case 0x198d1cu: goto label_198d1c;
        case 0x198d20u: goto label_198d20;
        case 0x198d24u: goto label_198d24;
        case 0x198d28u: goto label_198d28;
        case 0x198d2cu: goto label_198d2c;
        case 0x198d30u: goto label_198d30;
        case 0x198d34u: goto label_198d34;
        case 0x198d38u: goto label_198d38;
        case 0x198d3cu: goto label_198d3c;
        case 0x198d40u: goto label_198d40;
        case 0x198d44u: goto label_198d44;
        case 0x198d48u: goto label_198d48;
        case 0x198d4cu: goto label_198d4c;
        case 0x198d50u: goto label_198d50;
        case 0x198d54u: goto label_198d54;
        case 0x198d58u: goto label_198d58;
        case 0x198d5cu: goto label_198d5c;
        case 0x198d60u: goto label_198d60;
        case 0x198d64u: goto label_198d64;
        case 0x198d68u: goto label_198d68;
        case 0x198d6cu: goto label_198d6c;
        case 0x198d70u: goto label_198d70;
        case 0x198d74u: goto label_198d74;
        case 0x198d78u: goto label_198d78;
        case 0x198d7cu: goto label_198d7c;
        case 0x198d80u: goto label_198d80;
        case 0x198d84u: goto label_198d84;
        case 0x198d88u: goto label_198d88;
        case 0x198d8cu: goto label_198d8c;
        case 0x198d90u: goto label_198d90;
        case 0x198d94u: goto label_198d94;
        case 0x198d98u: goto label_198d98;
        case 0x198d9cu: goto label_198d9c;
        case 0x198da0u: goto label_198da0;
        case 0x198da4u: goto label_198da4;
        case 0x198da8u: goto label_198da8;
        case 0x198dacu: goto label_198dac;
        case 0x198db0u: goto label_198db0;
        case 0x198db4u: goto label_198db4;
        case 0x198db8u: goto label_198db8;
        case 0x198dbcu: goto label_198dbc;
        case 0x198dc0u: goto label_198dc0;
        case 0x198dc4u: goto label_198dc4;
        case 0x198dc8u: goto label_198dc8;
        case 0x198dccu: goto label_198dcc;
        case 0x198dd0u: goto label_198dd0;
        case 0x198dd4u: goto label_198dd4;
        case 0x198dd8u: goto label_198dd8;
        case 0x198ddcu: goto label_198ddc;
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        case 0x198f20u: goto label_198f20;
        case 0x198f24u: goto label_198f24;
        case 0x198f28u: goto label_198f28;
        case 0x198f2cu: goto label_198f2c;
        case 0x198f30u: goto label_198f30;
        case 0x198f34u: goto label_198f34;
        case 0x198f38u: goto label_198f38;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f40u: goto label_198f40;
        case 0x198f44u: goto label_198f44;
        case 0x198f48u: goto label_198f48;
        case 0x198f4cu: goto label_198f4c;
        case 0x198f50u: goto label_198f50;
        case 0x198f54u: goto label_198f54;
        case 0x198f58u: goto label_198f58;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f60u: goto label_198f60;
        case 0x198f64u: goto label_198f64;
        case 0x198f68u: goto label_198f68;
        case 0x198f6cu: goto label_198f6c;
        case 0x198f70u: goto label_198f70;
        case 0x198f74u: goto label_198f74;
        case 0x198f78u: goto label_198f78;
        case 0x198f7cu: goto label_198f7c;
        case 0x198f80u: goto label_198f80;
        case 0x198f84u: goto label_198f84;
        case 0x198f88u: goto label_198f88;
        case 0x198f8cu: goto label_198f8c;
        case 0x198f90u: goto label_198f90;
        case 0x198f94u: goto label_198f94;
        case 0x198f98u: goto label_198f98;
        case 0x198f9cu: goto label_198f9c;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fa4u: goto label_198fa4;
        case 0x198fa8u: goto label_198fa8;
        case 0x198facu: goto label_198fac;
        case 0x198fb0u: goto label_198fb0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fb8u: goto label_198fb8;
        case 0x198fbcu: goto label_198fbc;
        case 0x198fc0u: goto label_198fc0;
        case 0x198fc4u: goto label_198fc4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fccu: goto label_198fcc;
        case 0x198fd0u: goto label_198fd0;
        case 0x198fd4u: goto label_198fd4;
        case 0x198fd8u: goto label_198fd8;
        case 0x198fdcu: goto label_198fdc;
        case 0x198fe0u: goto label_198fe0;
        case 0x198fe4u: goto label_198fe4;
        case 0x198fe8u: goto label_198fe8;
        case 0x198fecu: goto label_198fec;
        case 0x198ff0u: goto label_198ff0;
        case 0x198ff4u: goto label_198ff4;
        case 0x198ff8u: goto label_198ff8;
        case 0x198ffcu: goto label_198ffc;
        case 0x199000u: goto label_199000;
        case 0x199004u: goto label_199004;
        case 0x199008u: goto label_199008;
        case 0x19900cu: goto label_19900c;
        case 0x199010u: goto label_199010;
        case 0x199014u: goto label_199014;
        case 0x199018u: goto label_199018;
        case 0x19901cu: goto label_19901c;
        case 0x199020u: goto label_199020;
        case 0x199024u: goto label_199024;
        case 0x199028u: goto label_199028;
        case 0x19902cu: goto label_19902c;
        case 0x199030u: goto label_199030;
        case 0x199034u: goto label_199034;
        case 0x199038u: goto label_199038;
        case 0x19903cu: goto label_19903c;
        case 0x199040u: goto label_199040;
        case 0x199044u: goto label_199044;
        case 0x199048u: goto label_199048;
        case 0x19904cu: goto label_19904c;
        case 0x199050u: goto label_199050;
        case 0x199054u: goto label_199054;
        case 0x199058u: goto label_199058;
        case 0x19905cu: goto label_19905c;
        case 0x199060u: goto label_199060;
        case 0x199064u: goto label_199064;
        case 0x199068u: goto label_199068;
        case 0x19906cu: goto label_19906c;
        case 0x199070u: goto label_199070;
        case 0x199074u: goto label_199074;
        case 0x199078u: goto label_199078;
        case 0x19907cu: goto label_19907c;
        case 0x199080u: goto label_199080;
        case 0x199084u: goto label_199084;
        case 0x199088u: goto label_199088;
        case 0x19908cu: goto label_19908c;
        case 0x199090u: goto label_199090;
        case 0x199094u: goto label_199094;
        case 0x199098u: goto label_199098;
        case 0x19909cu: goto label_19909c;
        case 0x1990a0u: goto label_1990a0;
        case 0x1990a4u: goto label_1990a4;
        case 0x1990a8u: goto label_1990a8;
        case 0x1990acu: goto label_1990ac;
        case 0x1990b0u: goto label_1990b0;
        case 0x1990b4u: goto label_1990b4;
        case 0x1990b8u: goto label_1990b8;
        case 0x1990bcu: goto label_1990bc;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990c4u: goto label_1990c4;
        case 0x1990c8u: goto label_1990c8;
        case 0x1990ccu: goto label_1990cc;
        case 0x1990d0u: goto label_1990d0;
        case 0x1990d4u: goto label_1990d4;
        case 0x1990d8u: goto label_1990d8;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        default: return;
    }

label_198990:
    // 0x198990: 0x3e00008  jr          $ra
label_198994:
    if (ctx->pc == 0x198994u) {
        ctx->pc = 0x198994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198990u;
        // 0x198994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198998u;
        goto label_198998;
    }
    ctx->pc = 0x198990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198990u;
        // 0x198994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198998u;
label_198998:
    // 0x198998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19899c:
    // 0x19899c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1989a0:
    // 0x1989a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1989a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1989a4:
    // 0x1989a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1989a8:
    // 0x1989a8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
label_1989ac:
    // 0x1989ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1989acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1989b0:
    // 0x1989b0: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_1989b4:
    // 0x1989b4: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
label_1989b8:
    // 0x1989b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1989bc:
    // 0x1989bc: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x1989bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_1989c0:
    // 0x1989c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1989c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1989c4:
    // 0x1989c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1989c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1989c8:
    // 0x1989c8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_1989cc:
    // 0x1989cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1989ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1989d0:
    // 0x1989d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1989d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1989d4:
    // 0x1989d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1989d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1989d8:
    // 0x1989d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1989dc:
    // 0x1989dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1989e0:
    // 0x1989e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1989e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1989e4:
    // 0x1989e4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_1989e8:
    // 0x1989e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1989ec:
    // 0x1989ec: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1989f0:
    // 0x1989f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1989f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1989f4:
    // 0x1989f4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1989f8:
    // 0x1989f8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1989fc:
    // 0x1989fc: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
label_198a00:
    // 0x198a00: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
label_198a04:
    // 0x198a04: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
label_198a08:
    // 0x198a08: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x198a08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_198a0c:
    // 0x198a0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x198a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_198a10:
    // 0x198a10: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
label_198a14:
    if (ctx->pc == 0x198A14u) {
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A10u;
        // 0x198a14: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A18u;
        goto label_198a18;
    }
    ctx->pc = 0x198A10u;
    {
        const bool branch_taken_0x198a10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A10u;
        // 0x198a14: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a10) {
            ctx->pc = 0x198A4Cu;
            goto label_198a4c;
        }
    }
    ctx->pc = 0x198A18u;
label_198a18:
    // 0x198a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198a1c:
    // 0x198a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198a20:
    // 0x198a20: 0xc066234  jal         func_1988D0
label_198a24:
    if (ctx->pc == 0x198A24u) {
        ctx->pc = 0x198A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A20u;
        // 0x198a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A28u;
        goto label_198a28;
    }
    ctx->pc = 0x198A20u;
    SET_GPR_U32(ctx, 31, 0x198A28u);
    ctx->pc = 0x198A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A20u;
    // 0x198a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x198A28u;
label_198a28:
    // 0x198a28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a2c:
    // 0x198a2c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_198a30:
    // 0x198a30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a34:
    // 0x198a34: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_198a38:
    // 0x198a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198a3c:
    // 0x198a3c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_198a40:
    // 0x198a40: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
label_198a44:
    // 0x198a44: 0x1000000a  b           . + 4 + (0xA << 2)
label_198a48:
    if (ctx->pc == 0x198A48u) {
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A4Cu;
        goto label_198a4c;
    }
    ctx->pc = 0x198A44u;
    {
        const bool branch_taken_0x198a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a44) {
            ctx->pc = 0x198A70u;
            goto label_198a70;
        }
    }
    ctx->pc = 0x198A4Cu;
label_198a4c:
    // 0x198a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198a50:
    // 0x198a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198a54:
    // 0x198a54: 0xc066234  jal         func_1988D0
label_198a58:
    if (ctx->pc == 0x198A58u) {
        ctx->pc = 0x198A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A54u;
        // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A5Cu;
        goto label_198a5c;
    }
    ctx->pc = 0x198A54u;
    SET_GPR_U32(ctx, 31, 0x198A5Cu);
    ctx->pc = 0x198A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A54u;
    // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x198A5Cu;
label_198a5c:
    // 0x198a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a60:
    // 0x198a60: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_198a64:
    // 0x198a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a68:
    // 0x198a68: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_198a6c:
    // 0x198a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198a70:
    // 0x198a70: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x198a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_198a74:
    // 0x198a74: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_198a78:
    // 0x198a78: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_198a7c:
    // 0x198a7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a80:
    // 0x198a80: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_198a84:
    // 0x198a84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x198a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_198a88:
    // 0x198a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a8c:
    // 0x198a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x198a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_198a90:
    // 0x198a90: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x198a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_198a94:
    // 0x198a94: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x198a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_198a98:
    // 0x198a98: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_198a9c:
    // 0x198a9c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_198aa0:
    // 0x198aa0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_198aa4:
    // 0x198aa4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_198aa8:
    // 0x198aa8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x198aa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_198aac:
    // 0x198aac: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_198ab0:
    // 0x198ab0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_198ab4:
    // 0x198ab4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198ab8:
    // 0x198ab8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_198abc:
    // 0x198abc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198ac0:
    // 0x198ac0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_198ac4:
    // 0x198ac4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_198ac8:
    // 0x198ac8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_198acc:
    // 0x198acc: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x198accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_198ad0:
    // 0x198ad0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_198ad4:
    // 0x198ad4: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_198ad8:
    // 0x198ad8: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_198adc:
    // 0x198adc: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_198ae0:
    // 0x198ae0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x198ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
label_198ae4:
    // 0x198ae4: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x198ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
label_198ae8:
    // 0x198ae8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x198ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_198aec:
    // 0x198aec: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x198aecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
label_198af0:
    // 0x198af0: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x198af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
label_198af4:
    // 0x198af4: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x198af4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
label_198af8:
    // 0x198af8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_198afc:
    // 0x198afc: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x198afcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
label_198b00:
    // 0x198b00: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x198b00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
label_198b04:
    // 0x198b04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_198b08:
    if (ctx->pc == 0x198B08u) {
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B0Cu;
        goto label_198b0c;
    }
    ctx->pc = 0x198B04u;
    {
        const bool branch_taken_0x198b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b04) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x198B0Cu;
label_198b0c:
    // 0x198b0c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_198b10:
    // 0x198b10: 0x10000004  b           . + 4 + (0x4 << 2)
label_198b14:
    if (ctx->pc == 0x198B14u) {
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B18u;
        goto label_198b18;
    }
    ctx->pc = 0x198B10u;
    {
        const bool branch_taken_0x198b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b10) {
            ctx->pc = 0x198B24u;
            goto label_198b24;
        }
    }
    ctx->pc = 0x198B18u;
label_198b18:
    // 0x198b18: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_198b1c:
    // 0x198b1c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_198b20:
    // 0x198b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_198b24:
    // 0x198b24: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x198b24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
label_198b28:
    // 0x198b28: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x198b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_198b2c:
    // 0x198b2c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_198b30:
    if (ctx->pc == 0x198B30u) {
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B34u;
        goto label_198b34;
    }
    ctx->pc = 0x198B2Cu;
    {
        const bool branch_taken_0x198b2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b2c) {
            ctx->pc = 0x198B48u;
            goto label_198b48;
        }
    }
    ctx->pc = 0x198B34u;
label_198b34:
    // 0x198b34: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x198b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
label_198b38:
    // 0x198b38: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_198b3c:
    // 0x198b3c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_198b40:
    // 0x198b40: 0x10000002  b           . + 4 + (0x2 << 2)
label_198b44:
    if (ctx->pc == 0x198B44u) {
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B48u;
        goto label_198b48;
    }
    ctx->pc = 0x198B40u;
    {
        const bool branch_taken_0x198b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b40) {
            ctx->pc = 0x198B4Cu;
            goto label_198b4c;
        }
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_198b4c:
    // 0x198b4c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x198b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
label_198b50:
    // 0x198b50: 0xf  sync
    ctx->pc = 0x198b50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198b54:
    // 0x198b54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_198b58:
    // 0x198b58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198b5c:
    // 0x198b5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x198b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_198b60:
    // 0x198b60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198b64:
    // 0x198b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198b68:
    // 0x198b68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198b6c:
    // 0x198b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198b70:
    // 0x198b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198b74:
    // 0x198b74: 0x3e00008  jr          $ra
label_198b78:
    if (ctx->pc == 0x198B78u) {
        ctx->pc = 0x198B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B74u;
        // 0x198b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B7Cu;
        goto label_198b7c;
    }
    ctx->pc = 0x198B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B74u;
        // 0x198b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B7Cu;
label_198b7c:
    // 0x198b7c: 0x0  nop
    ctx->pc = 0x198b7cu;
    // NOP
label_198b80:
    // 0x198b80: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_198b84:
    // 0x198b84: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_198b88:
    // 0x198b88: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x198b88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_198b8c:
    // 0x198b8c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_198b90:
    // 0x198b90: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_198b94:
    // 0x198b94: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_198b98:
    // 0x198b98: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_198b9c:
    // 0x198b9c: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x198b9cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_198ba0:
    // 0x198ba0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_198ba4:
    // 0x198ba4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_198ba8:
    // 0x198ba8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_198bac:
    // 0x198bac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_198bb0:
    // 0x198bb0: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x198bb0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_198bb4:
    // 0x198bb4: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_198bb8:
    // 0x198bb8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x198bb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_198bbc:
    // 0x198bbc: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x198bbcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_198bc0:
    // 0x198bc0: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x198bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
label_198bc4:
    // 0x198bc4: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x198bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_198bc8:
    // 0x198bc8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x198bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
label_198bcc:
    // 0x198bcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_198bd0:
    // 0x198bd0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_198bd4:
    // 0x198bd4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x198bd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_198bd8:
    // 0x198bd8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
label_198bdc:
    // 0x198bdc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_198be0:
    // 0x198be0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x198be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_198be4:
    // 0x198be4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_198be8:
    // 0x198be8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x198be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_198bec:
    // 0x198bec: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_198bf0:
    // 0x198bf0: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_198bf4:
    // 0x198bf4: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_198bf8:
    // 0x198bf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_198bfc:
    // 0x198bfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198c00:
    // 0x198c00: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_198c04:
    // 0x198c04: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x198c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_198c08:
    // 0x198c08: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x198c08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
label_198c0c:
    // 0x198c0c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
label_198c10:
    // 0x198c10: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
label_198c14:
    // 0x198c14: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_198c18:
    // 0x198c18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_198c1c:
    // 0x198c1c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
label_198c20:
    // 0x198c20: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
label_198c24:
    // 0x198c24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198c28:
    // 0x198c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198c2c:
    // 0x198c2c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x198c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_198c30:
    // 0x198c30: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x198c30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
label_198c34:
    // 0x198c34: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x198c34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
label_198c38:
    // 0x198c38: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x198c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
label_198c3c:
    // 0x198c3c: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x198c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
label_198c40:
    // 0x198c40: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x198c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
label_198c44:
    // 0x198c44: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x198c44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
label_198c48:
    // 0x198c48: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x198c48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_198c4c:
    // 0x198c4c: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x198c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
label_198c50:
    // 0x198c50: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x198c50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
label_198c54:
    // 0x198c54: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_198c58:
    if (ctx->pc == 0x198C58u) {
        ctx->pc = 0x198C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C54u;
        // 0x198c58: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C5Cu;
        goto label_198c5c;
    }
    ctx->pc = 0x198C54u;
    {
        const bool branch_taken_0x198c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C54u;
        // 0x198c58: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c54) {
            ctx->pc = 0x198C74u;
            goto label_198c74;
        }
    }
    ctx->pc = 0x198C5Cu;
label_198c5c:
    // 0x198c5c: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x198c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_198c60:
    // 0x198c60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_198c64:
    // 0x198c64: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_198c68:
    // 0x198c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198c6c:
    // 0x198c6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_198c70:
    if (ctx->pc == 0x198C70u) {
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C74u;
        goto label_198c74;
    }
    ctx->pc = 0x198C6Cu;
    {
        const bool branch_taken_0x198c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c6c) {
            ctx->pc = 0x198C78u;
            goto label_198c78;
        }
    }
    ctx->pc = 0x198C74u;
label_198c74:
    // 0x198c74: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x198c74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_198c78:
    // 0x198c78: 0xf  sync
    ctx->pc = 0x198c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198c7c:
    // 0x198c7c: 0x3e00008  jr          $ra
label_198c80:
    if (ctx->pc == 0x198C80u) {
        ctx->pc = 0x198C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C7Cu;
        // 0x198c80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C84u;
        goto label_198c84;
    }
    ctx->pc = 0x198C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C7Cu;
        // 0x198c80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C84u;
label_198c84:
    // 0x198c84: 0x0  nop
    ctx->pc = 0x198c84u;
    // NOP
label_198c88:
    // 0x198c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198c8c:
    // 0x198c8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198c90:
    // 0x198c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198c94:
    // 0x198c94: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198c98:
    // 0x198c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198c9c:
    // 0x198c9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198ca0:
    // 0x198ca0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_198ca4:
    // 0x198ca4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_198ca8:
    if (ctx->pc == 0x198CA8u) {
        ctx->pc = 0x198CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA4u;
        // 0x198ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CACu;
        goto label_198cac;
    }
    ctx->pc = 0x198CA4u;
    {
        const bool branch_taken_0x198ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA4u;
        // 0x198ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ca4) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198CACu;
label_198cac:
    // 0x198cac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198cb0:
    // 0x198cb0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_198cb4:
    // 0x198cb4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198cb8:
    // 0x198cb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198cbc:
    // 0x198cbc: 0x0  nop
    ctx->pc = 0x198cbcu;
    // NOP
label_198cc0:
    // 0x198cc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_198cc4:
    // 0x198cc4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_198cc8:
    if (ctx->pc == 0x198CC8u) {
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CCCu;
        goto label_198ccc;
    }
    ctx->pc = 0x198CC4u;
    {
        const bool branch_taken_0x198cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc4) {
            ctx->pc = 0x198D28u;
            goto label_198d28;
        }
    }
    ctx->pc = 0x198CCCu;
label_198ccc:
    // 0x198ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198cd0:
    // 0x198cd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_198cd4:
    // 0x198cd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_198cd8:
    if (ctx->pc == 0x198CD8u) {
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CDCu;
        goto label_198cdc;
    }
    ctx->pc = 0x198CD4u;
    {
        const bool branch_taken_0x198cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cd4) {
            ctx->pc = 0x198CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198cc0;
        }
    }
    ctx->pc = 0x198CDCu;
label_198cdc:
    // 0x198cdc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_198ce0:
    // 0x198ce0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198ce4:
    // 0x198ce4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
label_198ce8:
    // 0x198ce8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_198cec:
    // 0x198cec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x198cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_198cf0:
    // 0x198cf0: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x198cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_198cf4:
    // 0x198cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_198cf8:
    // 0x198cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x198cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_198cfc:
    // 0x198cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_198d00:
    // 0x198d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198d04:
    // 0x198d04: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
label_198d08:
    if (ctx->pc == 0x198D08u) {
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D0Cu;
        goto label_198d0c;
    }
    ctx->pc = 0x198D04u;
    {
        const bool branch_taken_0x198d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d04) {
            ctx->pc = 0x198D3Cu;
            goto label_198d3c;
        }
    }
    ctx->pc = 0x198D0Cu;
label_198d0c:
    // 0x198d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d10:
    // 0x198d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_198d14:
    // 0x198d14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_198d18:
    // 0x198d18: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_198d1c:
    // 0x198d1c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_198d20:
    // 0x198d20: 0x1000000a  b           . + 4 + (0xA << 2)
label_198d24:
    if (ctx->pc == 0x198D24u) {
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D28u;
        goto label_198d28;
    }
    ctx->pc = 0x198D20u;
    {
        const bool branch_taken_0x198d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d20) {
            ctx->pc = 0x198D4Cu;
            goto label_198d4c;
        }
    }
    ctx->pc = 0x198D28u;
label_198d28:
    // 0x198d28: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_198d2c:
    // 0x198d2c: 0xc08ee2e  jal         func_23B8B8
label_198d30:
    if (ctx->pc == 0x198D30u) {
        ctx->pc = 0x198D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D2Cu;
        // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D34u;
        goto label_198d34;
    }
    ctx->pc = 0x198D2Cu;
    SET_GPR_U32(ctx, 31, 0x198D34u);
    ctx->pc = 0x198D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D2Cu;
    // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x198D34u;
label_198d34:
    // 0x198d34: 0x1000000b  b           . + 4 + (0xB << 2)
label_198d38:
    if (ctx->pc == 0x198D38u) {
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D3Cu;
        goto label_198d3c;
    }
    ctx->pc = 0x198D34u;
    {
        const bool branch_taken_0x198d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d34) {
            ctx->pc = 0x198D64u;
            goto label_198d64;
        }
    }
    ctx->pc = 0x198D3Cu;
label_198d3c:
    // 0x198d3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d40:
    // 0x198d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_198d44:
    // 0x198d44: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_198d48:
    // 0x198d48: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_198d4c:
    // 0x198d4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198d50:
    // 0x198d50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d54:
    // 0x198d54: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_198d58:
    // 0x198d58: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198d5c:
    // 0x198d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198d60:
    // 0x198d60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x198d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_198d64:
    // 0x198d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198d68:
    // 0x198d68: 0x3e00008  jr          $ra
label_198d6c:
    if (ctx->pc == 0x198D6Cu) {
        ctx->pc = 0x198D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D68u;
        // 0x198d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D70u;
        goto label_198d70;
    }
    ctx->pc = 0x198D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D68u;
        // 0x198d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D70u;
label_198d70:
    // 0x198d70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_198d74:
    // 0x198d74: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_198d78:
    // 0x198d78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x198d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_198d7c:
    // 0x198d7c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_198d80:
    // 0x198d80: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x198d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_198d84:
    // 0x198d84: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_198d88:
    // 0x198d88: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x198d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_198d8c:
    // 0x198d8c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_198d90:
    // 0x198d90: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x198d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_198d94:
    // 0x198d94: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_198d98:
    // 0x198d98: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x198d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_198d9c:
    // 0x198d9c: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
label_198da0:
    // 0x198da0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x198da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_198da4:
    // 0x198da4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
label_198da8:
    // 0x198da8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x198da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_198dac:
    // 0x198dac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198db0:
    // 0x198db0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x198db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_198db4:
    // 0x198db4: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x198db4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
label_198db8:
    // 0x198db8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x198db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_198dbc:
    // 0x198dbc: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x198dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_198dc0:
    // 0x198dc0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x198dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_198dc4:
    // 0x198dc4: 0xc06614a  jal         func_198528
label_198dc8:
    if (ctx->pc == 0x198DC8u) {
        ctx->pc = 0x198DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DC4u;
        // 0x198dc8: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DCCu;
        goto label_198dcc;
    }
    ctx->pc = 0x198DC4u;
    SET_GPR_U32(ctx, 31, 0x198DCCu);
    ctx->pc = 0x198DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DC4u;
    // 0x198dc8: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x198DCCu;
label_198dcc:
    // 0x198dcc: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
label_198dd0:
    // 0x198dd0: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
label_198dd4:
    // 0x198dd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x198dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_198dd8:
    // 0x198dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198ddc:
    // 0x198ddc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198de0:
    // 0x198de0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198de4:
    // 0x198de4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198de8:
    // 0x198de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198dec:
    // 0x198dec: 0xc066168  jal         func_1985A0
label_198df0:
    if (ctx->pc == 0x198DF0u) {
        ctx->pc = 0x198DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DECu;
        // 0x198df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DF4u;
        goto label_198df4;
    }
    ctx->pc = 0x198DECu;
    SET_GPR_U32(ctx, 31, 0x198DF4u);
    ctx->pc = 0x198DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DECu;
    // 0x198df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x198DF4u;
label_198df4:
    // 0x198df4: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_198df8:
    // 0x198df8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198dfc:
    // 0x198dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e00:
    // 0x198e00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e04:
    // 0x198e04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e08:
    // 0x198e08: 0xc066168  jal         func_1985A0
label_198e0c:
    if (ctx->pc == 0x198E0Cu) {
        ctx->pc = 0x198E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E08u;
        // 0x198e0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E10u;
        goto label_198e10;
    }
    ctx->pc = 0x198E08u;
    SET_GPR_U32(ctx, 31, 0x198E10u);
    ctx->pc = 0x198E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E08u;
    // 0x198e0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x198E10u;
label_198e10:
    // 0x198e10: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_198e14:
    // 0x198e14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198e18:
    // 0x198e18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e1c:
    // 0x198e1c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e20:
    // 0x198e20: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x198e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e24:
    // 0x198e24: 0xc066266  jal         func_198998
label_198e28:
    if (ctx->pc == 0x198E28u) {
        ctx->pc = 0x198E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E24u;
        // 0x198e28: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E2Cu;
        goto label_198e2c;
    }
    ctx->pc = 0x198E24u;
    SET_GPR_U32(ctx, 31, 0x198E2Cu);
    ctx->pc = 0x198E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E24u;
    // 0x198e28: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    goto label_198998;
    ctx->pc = 0x198E2Cu;
label_198e2c:
    // 0x198e2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x198e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e30:
    // 0x198e30: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_198e34:
    // 0x198e34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198e38:
    // 0x198e38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e3c:
    // 0x198e3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e40:
    // 0x198e40: 0xc066266  jal         func_198998
label_198e44:
    if (ctx->pc == 0x198E44u) {
        ctx->pc = 0x198E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E40u;
        // 0x198e44: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E48u;
        goto label_198e48;
    }
    ctx->pc = 0x198E40u;
    SET_GPR_U32(ctx, 31, 0x198E48u);
    ctx->pc = 0x198E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E40u;
    // 0x198e44: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    goto label_198998;
    ctx->pc = 0x198E48u;
label_198e48:
    // 0x198e48: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
label_198e4c:
    if (ctx->pc == 0x198E4Cu) {
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E50u;
        goto label_198e50;
    }
    ctx->pc = 0x198E48u;
    {
        const bool branch_taken_0x198e48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e48) {
            ctx->pc = 0x198EC0u;
            goto label_198ec0;
        }
    }
    ctx->pc = 0x198E50u;
label_198e50:
    // 0x198e50: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x198e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_198e54:
    // 0x198e54: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
label_198e58:
    // 0x198e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_198e5c:
    // 0x198e5c: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_198e60:
    // 0x198e60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_198e64:
    // 0x198e64: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_198e68:
    // 0x198e68: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_198e6c:
    // 0x198e6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_198e70:
    // 0x198e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e74:
    // 0x198e74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e78:
    // 0x198e78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e7c:
    // 0x198e7c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e80:
    // 0x198e80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e84:
    // 0x198e84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198e84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e88:
    // 0x198e88: 0xc0662e0  jal         func_198B80
label_198e8c:
    if (ctx->pc == 0x198E8Cu) {
        ctx->pc = 0x198E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E88u;
        // 0x198e8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E90u;
        goto label_198e90;
    }
    ctx->pc = 0x198E88u;
    SET_GPR_U32(ctx, 31, 0x198E90u);
    ctx->pc = 0x198E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E88u;
    // 0x198e8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    goto label_198b80;
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e94:
    // 0x198e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e98:
    // 0x198e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e9c:
    // 0x198e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_198ea0:
    // 0x198ea0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_198ea4:
    // 0x198ea4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_198ea8:
    // 0x198ea8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_198eac:
    // 0x198eac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198eb0:
    // 0x198eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198eb4:
    // 0x198eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198eb8:
    // 0x198eb8: 0xc0662e0  jal         func_198B80
label_198ebc:
    if (ctx->pc == 0x198EBCu) {
        ctx->pc = 0x198EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB8u;
        // 0x198ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EC0u;
        goto label_198ec0;
    }
    ctx->pc = 0x198EB8u;
    SET_GPR_U32(ctx, 31, 0x198EC0u);
    ctx->pc = 0x198EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EB8u;
    // 0x198ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    goto label_198b80;
    ctx->pc = 0x198EC0u;
label_198ec0:
    // 0x198ec0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x198ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_198ec4:
    // 0x198ec4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x198ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_198ec8:
    // 0x198ec8: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x198ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
label_198ecc:
    // 0x198ecc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_198ed0:
    // 0x198ed0: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x198ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
label_198ed4:
    // 0x198ed4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198ed8:
    // 0x198ed8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x198ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_198edc:
    // 0x198edc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198ee0:
    // 0x198ee0: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x198ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
label_198ee4:
    // 0x198ee4: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x198ee4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_198ee8:
    // 0x198ee8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x198ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_198eec:
    // 0x198eec: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x198eecu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_198ef0:
    // 0x198ef0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_198ef4:
    // 0x198ef4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198ef8:
    // 0x198ef8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_198efc:
    // 0x198efc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_198f00:
    // 0x198f00: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x198f00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_198f04:
    // 0x198f04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x198f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_198f08:
    // 0x198f08: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x198f08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
label_198f0c:
    // 0x198f0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198f10:
    // 0x198f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198f14:
    // 0x198f14: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x198f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
label_198f18:
    // 0x198f18: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_198f1c:
    // 0x198f1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_198f20:
    // 0x198f20: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x198f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_198f24:
    // 0x198f24: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x198f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_198f28:
    // 0x198f28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x198f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_198f2c:
    // 0x198f2c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x198f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_198f30:
    // 0x198f30: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x198f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_198f34:
    // 0x198f34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x198f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_198f38:
    // 0x198f38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198f3c:
    // 0x198f3c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x198f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_198f40:
    // 0x198f40: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x198f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_198f44:
    // 0x198f44: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x198f44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
label_198f48:
    // 0x198f48: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x198f48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
label_198f4c:
    // 0x198f4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x198f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198f50:
    // 0x198f50: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x198f50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
label_198f54:
    // 0x198f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198f58:
    // 0x198f58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198f5c:
    // 0x198f5c: 0xc066234  jal         func_1988D0
label_198f60:
    if (ctx->pc == 0x198F60u) {
        ctx->pc = 0x198F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F5Cu;
        // 0x198f60: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F64u;
        goto label_198f64;
    }
    ctx->pc = 0x198F5Cu;
    SET_GPR_U32(ctx, 31, 0x198F64u);
    ctx->pc = 0x198F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F5Cu;
    // 0x198f60: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x198F64u;
label_198f64:
    // 0x198f64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_198f68:
    // 0x198f68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x198f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198f6c:
    // 0x198f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198f70:
    // 0x198f70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_198f74:
    // 0x198f74: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x198f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_198f78:
    // 0x198f78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_198f7c:
    // 0x198f7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x198f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_198f80:
    // 0x198f80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_198f84:
    // 0x198f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x198f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_198f88:
    // 0x198f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_198f8c:
    // 0x198f8c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_198f90:
    if (ctx->pc == 0x198F90u) {
        ctx->pc = 0x198F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F8Cu;
        // 0x198f90: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F94u;
        goto label_198f94;
    }
    ctx->pc = 0x198F8Cu;
    {
        const bool branch_taken_0x198f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x198F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F8Cu;
        // 0x198f90: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f8c) {
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198F94u;
label_198f94:
    // 0x198f94: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_198f98:
    // 0x198f98: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_198f9c:
    if (ctx->pc == 0x198F9Cu) {
        ctx->pc = 0x198F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F98u;
        // 0x198f9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FA0u;
        goto label_198fa0;
    }
    ctx->pc = 0x198F98u;
    {
        const bool branch_taken_0x198f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F98u;
        // 0x198f9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f98) {
            ctx->pc = 0x198FDCu;
            goto label_198fdc;
        }
    }
    ctx->pc = 0x198FA0u;
label_198fa0:
    // 0x198fa0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_198fa4:
    // 0x198fa4: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x198fa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
label_198fa8:
    // 0x198fa8: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x198fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
label_198fac:
    // 0x198fac: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_198fb0:
    // 0x198fb0: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_198fb4:
    // 0x198fb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_198fb8:
    // 0x198fb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x198fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_198fbc:
    // 0x198fbc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x198fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_198fc0:
    // 0x198fc0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_198fc4:
    // 0x198fc4: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x198fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_198fc8:
    // 0x198fc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198fcc:
    // 0x198fcc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x198fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_198fd0:
    // 0x198fd0: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x198fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
label_198fd4:
    // 0x198fd4: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x198fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
label_198fd8:
    // 0x198fd8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x198fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_198fdc:
    // 0x198fdc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x198fdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_198fe0:
    // 0x198fe0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x198fe0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_198fe4:
    // 0x198fe4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x198fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_198fe8:
    // 0x198fe8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x198fe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_198fec:
    // 0x198fec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x198fecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_198ff0:
    // 0x198ff0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x198ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_198ff4:
    // 0x198ff4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x198ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_198ff8:
    // 0x198ff8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x198ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198ffc:
    // 0x198ffc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x198ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_199000:
    // 0x199000: 0x3e00008  jr          $ra
label_199004:
    if (ctx->pc == 0x199004u) {
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199000u;
        // 0x199004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199008u;
        goto label_199008;
    }
    ctx->pc = 0x199000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199000u;
        // 0x199004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199008u;
label_199008:
    // 0x199008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19900c:
    // 0x19900c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_199010:
    // 0x199010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199014:
    // 0x199014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199018:
    // 0x199018: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x199018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19901c:
    // 0x19901c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x19901cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_199020:
    // 0x199020: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x199020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_199024:
    // 0x199024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_199028:
    // 0x199028: 0xc066204  jal         func_198810
label_19902c:
    if (ctx->pc == 0x19902Cu) {
        ctx->pc = 0x19902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199028u;
        // 0x19902c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199030u;
        goto label_199030;
    }
    ctx->pc = 0x199028u;
    SET_GPR_U32(ctx, 31, 0x199030u);
    ctx->pc = 0x19902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199028u;
    // 0x19902c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198810u;
    { ctx->pc = 0x198810; return; }
    ctx->pc = 0x199030u;
label_199030:
    // 0x199030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_199034:
    if (ctx->pc == 0x199034u) {
        ctx->pc = 0x199038u;
        goto label_199038;
    }
    ctx->pc = 0x199030u;
    {
        const bool branch_taken_0x199030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x199030) {
            ctx->pc = 0x199048u;
            goto label_199048;
        }
    }
    ctx->pc = 0x199038u;
label_199038:
    // 0x199038: 0xc066322  jal         func_198C88
label_19903c:
    if (ctx->pc == 0x19903Cu) {
        ctx->pc = 0x19903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199038u;
        // 0x19903c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199040u;
        goto label_199040;
    }
    ctx->pc = 0x199038u;
    SET_GPR_U32(ctx, 31, 0x199040u);
    ctx->pc = 0x19903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199038u;
    // 0x19903c: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    goto label_198c88;
    ctx->pc = 0x199040u;
label_199040:
    // 0x199040: 0x10000004  b           . + 4 + (0x4 << 2)
label_199044:
    if (ctx->pc == 0x199044u) {
        ctx->pc = 0x199044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199040u;
        // 0x199044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199048u;
        goto label_199048;
    }
    ctx->pc = 0x199040u;
    {
        const bool branch_taken_0x199040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199040u;
        // 0x199044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199040) {
            ctx->pc = 0x199054u;
            goto label_199054;
        }
    }
    ctx->pc = 0x199048u;
label_199048:
    // 0x199048: 0xc066322  jal         func_198C88
label_19904c:
    if (ctx->pc == 0x19904Cu) {
        ctx->pc = 0x19904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199048u;
        // 0x19904c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199050u;
        goto label_199050;
    }
    ctx->pc = 0x199048u;
    SET_GPR_U32(ctx, 31, 0x199050u);
    ctx->pc = 0x19904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199048u;
    // 0x19904c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    goto label_198c88;
    ctx->pc = 0x199050u;
label_199050:
    // 0x199050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_199054:
    // 0x199054: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x199054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199058:
    // 0x199058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19905c:
    // 0x19905c: 0x3e00008  jr          $ra
label_199060:
    if (ctx->pc == 0x199060u) {
        ctx->pc = 0x199060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19905Cu;
        // 0x199060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199064u;
        goto label_199064;
    }
    ctx->pc = 0x19905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19905Cu;
        // 0x199060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199064u;
label_199064:
    // 0x199064: 0x0  nop
    ctx->pc = 0x199064u;
    // NOP
label_199068:
    // 0x199068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19906c:
    // 0x19906c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199070:
    // 0x199070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_199074:
    // 0x199074: 0xc06614a  jal         func_198528
label_199078:
    if (ctx->pc == 0x199078u) {
        ctx->pc = 0x19907Cu;
        goto label_19907c;
    }
    ctx->pc = 0x199074u;
    SET_GPR_U32(ctx, 31, 0x19907Cu);
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x19907Cu;
label_19907c:
    // 0x19907c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19907cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199080:
    // 0x199080: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x199080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_199084:
    // 0x199084: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_199088:
    if (ctx->pc == 0x199088u) {
        ctx->pc = 0x19908Cu;
        goto label_19908c;
    }
    ctx->pc = 0x199084u;
    {
        const bool branch_taken_0x199084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199084) {
            ctx->pc = 0x1990C8u;
            goto label_1990c8;
        }
    }
    ctx->pc = 0x19908Cu;
label_19908c:
    // 0x19908c: 0xc06932c  jal         func_1A4CB0
label_199090:
    if (ctx->pc == 0x199090u) {
        ctx->pc = 0x199094u;
        goto label_199094;
    }
    ctx->pc = 0x19908Cu;
    SET_GPR_U32(ctx, 31, 0x199094u);
    ctx->pc = 0x1A4CB0u;
    { ctx->pc = 0x1a4cb0; return; }
    ctx->pc = 0x199094u;
label_199094:
    // 0x199094: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x199094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_199098:
    // 0x199098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19909c:
    // 0x19909c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1990a0:
    if (ctx->pc == 0x1990A0u) {
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990A4u;
        goto label_1990a4;
    }
    ctx->pc = 0x19909Cu;
    {
        const bool branch_taken_0x19909c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19909c) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990A4u;
label_1990a4:
    // 0x1990a4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_1990a8:
    // 0x1990a8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1990a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1990ac:
    // 0x1990ac: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1990acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1990b0:
    // 0x1990b0: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1990b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
label_1990b4:
    // 0x1990b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1990b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1990b8:
    // 0x1990b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1990b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1990bc:
    // 0x1990bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1990c0:
    // 0x1990c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1990c4:
    if (ctx->pc == 0x1990C4u) {
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990C8u;
        goto label_1990c8;
    }
    ctx->pc = 0x1990C0u;
    {
        const bool branch_taken_0x1990c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990C0u;
        // 0x1990c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990c0) {
            ctx->pc = 0x1990F4u;
            goto label_1990f4;
        }
    }
    ctx->pc = 0x1990C8u;
label_1990c8:
    // 0x1990c8: 0xc069350  jal         func_1A4D40
label_1990cc:
    if (ctx->pc == 0x1990CCu) {
        ctx->pc = 0x1990D0u;
        goto label_1990d0;
    }
    ctx->pc = 0x1990C8u;
    SET_GPR_U32(ctx, 31, 0x1990D0u);
    ctx->pc = 0x1A4D40u;
    { ctx->pc = 0x1a4d40; return; }
    ctx->pc = 0x1990D0u;
label_1990d0:
    // 0x1990d0: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x1990d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
label_1990d4:
    // 0x1990d4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1990d8:
    // 0x1990d8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1990d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1990dc:
    // 0x1990dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1990dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1990e0:
    // 0x1990e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1990e4:
    if (ctx->pc == 0x1990E4u) {
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990E8u;
        goto label_1990e8;
    }
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990E8u;
label_1990e8:
    // 0x1990e8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1990e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_1990ec:
    // 0x1990ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1990f0:
    // 0x1990f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1990f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1990f4:
    // 0x1990f4: 0x3e00008  jr          $ra
label_1990f8:
    if (ctx->pc == 0x1990F8u) {
        ctx->pc = 0x1990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F4u;
        // 0x1990f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990FCu;
        goto label_1990fc;
    }
    ctx->pc = 0x1990F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F4u;
        // 0x1990f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1990F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1990FCu;
label_1990fc:
    // 0x1990fc: 0x0  nop
    ctx->pc = 0x1990fcu;
    // NOP
label_199100:
    // 0x199100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199104:
    // 0x199104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199108:
    // 0x199108: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
label_19910c:
    if (ctx->pc == 0x19910Cu) {
        ctx->pc = 0x19910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199108u;
        // 0x19910c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199110u;
        goto label_199110;
    }
    ctx->pc = 0x199108u;
    {
        const bool branch_taken_0x199108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199108u;
        // 0x19910c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199108) {
            ctx->pc = 0x199394u;
            { ctx->pc = 0x199394; return; }
        }
    }
    ctx->pc = 0x199110u;
label_199110:
    // 0x199110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199114:
    // 0x199114: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_199118:
    // 0x199118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19911c:
    // 0x19911c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x19911cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199120:
    // 0x199120: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_199124:
    if (ctx->pc == 0x199124u) {
        ctx->pc = 0x199124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199120u;
        // 0x199124: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199128u;
        goto label_199128;
    }
    ctx->pc = 0x199120u;
    {
        const bool branch_taken_0x199120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199120u;
        // 0x199124: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199120) {
            ctx->pc = 0x199154u;
            goto label_199154;
        }
    }
    ctx->pc = 0x199128u;
label_199128:
    // 0x199128: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_19912c:
    // 0x19912c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199130:
    // 0x199130: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199134:
    // 0x199134: 0x0  nop
    ctx->pc = 0x199134u;
    // NOP
label_199138:
    // 0x199138: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19913c:
    // 0x19913c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_199140:
    if (ctx->pc == 0x199140u) {
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199144u;
        goto label_199144;
    }
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19913c) {
            ctx->pc = 0x19925Cu;
            { ctx->pc = 0x19925c; return; }
        }
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199148:
    // 0x199148: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19914c:
    // 0x19914c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199150:
    if (ctx->pc == 0x199150u) {
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199154u;
        goto label_199154;
    }
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19914c) {
            ctx->pc = 0x199138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199138;
        }
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199158:
    // 0x199158: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x199158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_19915c:
    // 0x19915c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x199160u;
    return;
}
