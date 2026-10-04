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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part605(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x275a60u: goto label_275a60;
        case 0x275a64u: goto label_275a64;
        case 0x275a68u: goto label_275a68;
        case 0x275a6cu: goto label_275a6c;
        case 0x275a70u: goto label_275a70;
        case 0x275a74u: goto label_275a74;
        case 0x275a78u: goto label_275a78;
        case 0x275a7cu: goto label_275a7c;
        case 0x275a80u: goto label_275a80;
        case 0x275a84u: goto label_275a84;
        case 0x275a88u: goto label_275a88;
        case 0x275a8cu: goto label_275a8c;
        case 0x275a90u: goto label_275a90;
        case 0x275a94u: goto label_275a94;
        case 0x275a98u: goto label_275a98;
        case 0x275a9cu: goto label_275a9c;
        case 0x275aa0u: goto label_275aa0;
        case 0x275aa4u: goto label_275aa4;
        case 0x275aa8u: goto label_275aa8;
        case 0x275aacu: goto label_275aac;
        case 0x275ab0u: goto label_275ab0;
        case 0x275ab4u: goto label_275ab4;
        case 0x275ab8u: goto label_275ab8;
        case 0x275abcu: goto label_275abc;
        case 0x275ac0u: goto label_275ac0;
        case 0x275ac4u: goto label_275ac4;
        case 0x275ac8u: goto label_275ac8;
        case 0x275accu: goto label_275acc;
        case 0x275ad0u: goto label_275ad0;
        case 0x275ad4u: goto label_275ad4;
        case 0x275ad8u: goto label_275ad8;
        case 0x275adcu: goto label_275adc;
        case 0x275ae0u: goto label_275ae0;
        case 0x275ae4u: goto label_275ae4;
        case 0x275ae8u: goto label_275ae8;
        case 0x275aecu: goto label_275aec;
        case 0x275af0u: goto label_275af0;
        case 0x275af4u: goto label_275af4;
        case 0x275af8u: goto label_275af8;
        case 0x275afcu: goto label_275afc;
        case 0x275b00u: goto label_275b00;
        case 0x275b04u: goto label_275b04;
        case 0x275b08u: goto label_275b08;
        case 0x275b0cu: goto label_275b0c;
        case 0x275b10u: goto label_275b10;
        case 0x275b14u: goto label_275b14;
        case 0x275b18u: goto label_275b18;
        case 0x275b1cu: goto label_275b1c;
        case 0x275b20u: goto label_275b20;
        case 0x275b24u: goto label_275b24;
        case 0x275b28u: goto label_275b28;
        case 0x275b2cu: goto label_275b2c;
        case 0x275b30u: goto label_275b30;
        case 0x275b34u: goto label_275b34;
        case 0x275b38u: goto label_275b38;
        case 0x275b3cu: goto label_275b3c;
        case 0x275b40u: goto label_275b40;
        case 0x275b44u: goto label_275b44;
        case 0x275b48u: goto label_275b48;
        case 0x275b4cu: goto label_275b4c;
        case 0x275b50u: goto label_275b50;
        case 0x275b54u: goto label_275b54;
        case 0x275b58u: goto label_275b58;
        case 0x275b5cu: goto label_275b5c;
        case 0x275b60u: goto label_275b60;
        case 0x275b64u: goto label_275b64;
        case 0x275b68u: goto label_275b68;
        case 0x275b6cu: goto label_275b6c;
        case 0x275b70u: goto label_275b70;
        case 0x275b74u: goto label_275b74;
        case 0x275b78u: goto label_275b78;
        case 0x275b7cu: goto label_275b7c;
        case 0x275b80u: goto label_275b80;
        case 0x275b84u: goto label_275b84;
        case 0x275b88u: goto label_275b88;
        case 0x275b8cu: goto label_275b8c;
        case 0x275b90u: goto label_275b90;
        case 0x275b94u: goto label_275b94;
        case 0x275b98u: goto label_275b98;
        case 0x275b9cu: goto label_275b9c;
        case 0x275ba0u: goto label_275ba0;
        case 0x275ba4u: goto label_275ba4;
        case 0x275ba8u: goto label_275ba8;
        case 0x275bacu: goto label_275bac;
        case 0x275bb0u: goto label_275bb0;
        case 0x275bb4u: goto label_275bb4;
        case 0x275bb8u: goto label_275bb8;
        case 0x275bbcu: goto label_275bbc;
        case 0x275bc0u: goto label_275bc0;
        case 0x275bc4u: goto label_275bc4;
        case 0x275bc8u: goto label_275bc8;
        case 0x275bccu: goto label_275bcc;
        case 0x275bd0u: goto label_275bd0;
        case 0x275bd4u: goto label_275bd4;
        case 0x275bd8u: goto label_275bd8;
        case 0x275bdcu: goto label_275bdc;
        case 0x275be0u: goto label_275be0;
        case 0x275be4u: goto label_275be4;
        case 0x275be8u: goto label_275be8;
        case 0x275becu: goto label_275bec;
        case 0x275bf0u: goto label_275bf0;
        case 0x275bf4u: goto label_275bf4;
        case 0x275bf8u: goto label_275bf8;
        case 0x275bfcu: goto label_275bfc;
        case 0x275c00u: goto label_275c00;
        case 0x275c04u: goto label_275c04;
        case 0x275c08u: goto label_275c08;
        case 0x275c0cu: goto label_275c0c;
        case 0x275c10u: goto label_275c10;
        case 0x275c14u: goto label_275c14;
        case 0x275c18u: goto label_275c18;
        case 0x275c1cu: goto label_275c1c;
        case 0x275c20u: goto label_275c20;
        case 0x275c24u: goto label_275c24;
        case 0x275c28u: goto label_275c28;
        case 0x275c2cu: goto label_275c2c;
        case 0x275c30u: goto label_275c30;
        case 0x275c34u: goto label_275c34;
        case 0x275c38u: goto label_275c38;
        case 0x275c3cu: goto label_275c3c;
        case 0x275c40u: goto label_275c40;
        case 0x275c44u: goto label_275c44;
        case 0x275c48u: goto label_275c48;
        case 0x275c4cu: goto label_275c4c;
        case 0x275c50u: goto label_275c50;
        case 0x275c54u: goto label_275c54;
        case 0x275c58u: goto label_275c58;
        case 0x275c5cu: goto label_275c5c;
        case 0x275c60u: goto label_275c60;
        case 0x275c64u: goto label_275c64;
        case 0x275c68u: goto label_275c68;
        case 0x275c6cu: goto label_275c6c;
        case 0x275c70u: goto label_275c70;
        case 0x275c74u: goto label_275c74;
        case 0x275c78u: goto label_275c78;
        case 0x275c7cu: goto label_275c7c;
        case 0x275c80u: goto label_275c80;
        case 0x275c84u: goto label_275c84;
        case 0x275c88u: goto label_275c88;
        case 0x275c8cu: goto label_275c8c;
        case 0x275c90u: goto label_275c90;
        case 0x275c94u: goto label_275c94;
        case 0x275c98u: goto label_275c98;
        case 0x275c9cu: goto label_275c9c;
        case 0x275ca0u: goto label_275ca0;
        case 0x275ca4u: goto label_275ca4;
        case 0x275ca8u: goto label_275ca8;
        case 0x275cacu: goto label_275cac;
        case 0x275cb0u: goto label_275cb0;
        case 0x275cb4u: goto label_275cb4;
        case 0x275cb8u: goto label_275cb8;
        case 0x275cbcu: goto label_275cbc;
        case 0x275cc0u: goto label_275cc0;
        case 0x275cc4u: goto label_275cc4;
        case 0x275cc8u: goto label_275cc8;
        case 0x275cccu: goto label_275ccc;
        case 0x275cd0u: goto label_275cd0;
        case 0x275cd4u: goto label_275cd4;
        case 0x275cd8u: goto label_275cd8;
        case 0x275cdcu: goto label_275cdc;
        case 0x275ce0u: goto label_275ce0;
        case 0x275ce4u: goto label_275ce4;
        case 0x275ce8u: goto label_275ce8;
        case 0x275cecu: goto label_275cec;
        case 0x275cf0u: goto label_275cf0;
        case 0x275cf4u: goto label_275cf4;
        case 0x275cf8u: goto label_275cf8;
        case 0x275cfcu: goto label_275cfc;
        case 0x275d00u: goto label_275d00;
        case 0x275d04u: goto label_275d04;
        case 0x275d08u: goto label_275d08;
        case 0x275d0cu: goto label_275d0c;
        case 0x275d10u: goto label_275d10;
        case 0x275d14u: goto label_275d14;
        case 0x275d18u: goto label_275d18;
        case 0x275d1cu: goto label_275d1c;
        case 0x275d20u: goto label_275d20;
        case 0x275d24u: goto label_275d24;
        case 0x275d28u: goto label_275d28;
        case 0x275d2cu: goto label_275d2c;
        case 0x275d30u: goto label_275d30;
        case 0x275d34u: goto label_275d34;
        case 0x275d38u: goto label_275d38;
        case 0x275d3cu: goto label_275d3c;
        case 0x275d40u: goto label_275d40;
        case 0x275d44u: goto label_275d44;
        case 0x275d48u: goto label_275d48;
        case 0x275d4cu: goto label_275d4c;
        case 0x275d50u: goto label_275d50;
        case 0x275d54u: goto label_275d54;
        case 0x275d58u: goto label_275d58;
        case 0x275d5cu: goto label_275d5c;
        case 0x275d60u: goto label_275d60;
        case 0x275d64u: goto label_275d64;
        case 0x275d68u: goto label_275d68;
        case 0x275d6cu: goto label_275d6c;
        case 0x275d70u: goto label_275d70;
        case 0x275d74u: goto label_275d74;
        case 0x275d78u: goto label_275d78;
        case 0x275d7cu: goto label_275d7c;
        case 0x275d80u: goto label_275d80;
        case 0x275d84u: goto label_275d84;
        case 0x275d88u: goto label_275d88;
        case 0x275d8cu: goto label_275d8c;
        case 0x275d90u: goto label_275d90;
        case 0x275d94u: goto label_275d94;
        case 0x275d98u: goto label_275d98;
        case 0x275d9cu: goto label_275d9c;
        case 0x275da0u: goto label_275da0;
        case 0x275da4u: goto label_275da4;
        case 0x275da8u: goto label_275da8;
        case 0x275dacu: goto label_275dac;
        case 0x275db0u: goto label_275db0;
        case 0x275db4u: goto label_275db4;
        case 0x275db8u: goto label_275db8;
        case 0x275dbcu: goto label_275dbc;
        case 0x275dc0u: goto label_275dc0;
        case 0x275dc4u: goto label_275dc4;
        case 0x275dc8u: goto label_275dc8;
        case 0x275dccu: goto label_275dcc;
        case 0x275dd0u: goto label_275dd0;
        case 0x275dd4u: goto label_275dd4;
        case 0x275dd8u: goto label_275dd8;
        case 0x275ddcu: goto label_275ddc;
        case 0x275de0u: goto label_275de0;
        case 0x275de4u: goto label_275de4;
        case 0x275de8u: goto label_275de8;
        case 0x275decu: goto label_275dec;
        case 0x275df0u: goto label_275df0;
        case 0x275df4u: goto label_275df4;
        case 0x275df8u: goto label_275df8;
        case 0x275dfcu: goto label_275dfc;
        case 0x275e00u: goto label_275e00;
        case 0x275e04u: goto label_275e04;
        case 0x275e08u: goto label_275e08;
        case 0x275e0cu: goto label_275e0c;
        case 0x275e10u: goto label_275e10;
        case 0x275e14u: goto label_275e14;
        case 0x275e18u: goto label_275e18;
        case 0x275e1cu: goto label_275e1c;
        case 0x275e20u: goto label_275e20;
        case 0x275e24u: goto label_275e24;
        case 0x275e28u: goto label_275e28;
        case 0x275e2cu: goto label_275e2c;
        case 0x275e30u: goto label_275e30;
        case 0x275e34u: goto label_275e34;
        case 0x275e38u: goto label_275e38;
        case 0x275e3cu: goto label_275e3c;
        case 0x275e40u: goto label_275e40;
        case 0x275e44u: goto label_275e44;
        case 0x275e48u: goto label_275e48;
        case 0x275e4cu: goto label_275e4c;
        case 0x275e50u: goto label_275e50;
        case 0x275e54u: goto label_275e54;
        case 0x275e58u: goto label_275e58;
        case 0x275e5cu: goto label_275e5c;
        case 0x275e60u: goto label_275e60;
        case 0x275e64u: goto label_275e64;
        case 0x275e68u: goto label_275e68;
        case 0x275e6cu: goto label_275e6c;
        case 0x275e70u: goto label_275e70;
        case 0x275e74u: goto label_275e74;
        case 0x275e78u: goto label_275e78;
        case 0x275e7cu: goto label_275e7c;
        case 0x275e80u: goto label_275e80;
        case 0x275e84u: goto label_275e84;
        case 0x275e88u: goto label_275e88;
        case 0x275e8cu: goto label_275e8c;
        case 0x275e90u: goto label_275e90;
        case 0x275e94u: goto label_275e94;
        case 0x275e98u: goto label_275e98;
        case 0x275e9cu: goto label_275e9c;
        case 0x275ea0u: goto label_275ea0;
        case 0x275ea4u: goto label_275ea4;
        case 0x275ea8u: goto label_275ea8;
        case 0x275eacu: goto label_275eac;
        case 0x275eb0u: goto label_275eb0;
        case 0x275eb4u: goto label_275eb4;
        case 0x275eb8u: goto label_275eb8;
        case 0x275ebcu: goto label_275ebc;
        case 0x275ec0u: goto label_275ec0;
        case 0x275ec4u: goto label_275ec4;
        case 0x275ec8u: goto label_275ec8;
        case 0x275eccu: goto label_275ecc;
        case 0x275ed0u: goto label_275ed0;
        case 0x275ed4u: goto label_275ed4;
        case 0x275ed8u: goto label_275ed8;
        case 0x275edcu: goto label_275edc;
        case 0x275ee0u: goto label_275ee0;
        case 0x275ee4u: goto label_275ee4;
        case 0x275ee8u: goto label_275ee8;
        case 0x275eecu: goto label_275eec;
        case 0x275ef0u: goto label_275ef0;
        case 0x275ef4u: goto label_275ef4;
        case 0x275ef8u: goto label_275ef8;
        case 0x275efcu: goto label_275efc;
        case 0x275f00u: goto label_275f00;
        case 0x275f04u: goto label_275f04;
        case 0x275f08u: goto label_275f08;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f10u: goto label_275f10;
        case 0x275f14u: goto label_275f14;
        case 0x275f18u: goto label_275f18;
        case 0x275f1cu: goto label_275f1c;
        case 0x275f20u: goto label_275f20;
        case 0x275f24u: goto label_275f24;
        case 0x275f28u: goto label_275f28;
        case 0x275f2cu: goto label_275f2c;
        case 0x275f30u: goto label_275f30;
        case 0x275f34u: goto label_275f34;
        case 0x275f38u: goto label_275f38;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f40u: goto label_275f40;
        case 0x275f44u: goto label_275f44;
        case 0x275f48u: goto label_275f48;
        case 0x275f4cu: goto label_275f4c;
        case 0x275f50u: goto label_275f50;
        case 0x275f54u: goto label_275f54;
        case 0x275f58u: goto label_275f58;
        case 0x275f5cu: goto label_275f5c;
        case 0x275f60u: goto label_275f60;
        case 0x275f64u: goto label_275f64;
        case 0x275f68u: goto label_275f68;
        case 0x275f6cu: goto label_275f6c;
        case 0x275f70u: goto label_275f70;
        case 0x275f74u: goto label_275f74;
        case 0x275f78u: goto label_275f78;
        case 0x275f7cu: goto label_275f7c;
        case 0x275f80u: goto label_275f80;
        case 0x275f84u: goto label_275f84;
        case 0x275f88u: goto label_275f88;
        case 0x275f8cu: goto label_275f8c;
        case 0x275f90u: goto label_275f90;
        case 0x275f94u: goto label_275f94;
        case 0x275f98u: goto label_275f98;
        case 0x275f9cu: goto label_275f9c;
        case 0x275fa0u: goto label_275fa0;
        case 0x275fa4u: goto label_275fa4;
        case 0x275fa8u: goto label_275fa8;
        case 0x275facu: goto label_275fac;
        case 0x275fb0u: goto label_275fb0;
        case 0x275fb4u: goto label_275fb4;
        case 0x275fb8u: goto label_275fb8;
        case 0x275fbcu: goto label_275fbc;
        case 0x275fc0u: goto label_275fc0;
        case 0x275fc4u: goto label_275fc4;
        case 0x275fc8u: goto label_275fc8;
        case 0x275fccu: goto label_275fcc;
        case 0x275fd0u: goto label_275fd0;
        case 0x275fd4u: goto label_275fd4;
        case 0x275fd8u: goto label_275fd8;
        case 0x275fdcu: goto label_275fdc;
        case 0x275fe0u: goto label_275fe0;
        case 0x275fe4u: goto label_275fe4;
        case 0x275fe8u: goto label_275fe8;
        case 0x275fecu: goto label_275fec;
        case 0x275ff0u: goto label_275ff0;
        case 0x275ff4u: goto label_275ff4;
        case 0x275ff8u: goto label_275ff8;
        case 0x275ffcu: goto label_275ffc;
        case 0x276000u: goto label_276000;
        case 0x276004u: goto label_276004;
        case 0x276008u: goto label_276008;
        case 0x27600cu: goto label_27600c;
        case 0x276010u: goto label_276010;
        case 0x276014u: goto label_276014;
        case 0x276018u: goto label_276018;
        case 0x27601cu: goto label_27601c;
        case 0x276020u: goto label_276020;
        case 0x276024u: goto label_276024;
        case 0x276028u: goto label_276028;
        case 0x27602cu: goto label_27602c;
        case 0x276030u: goto label_276030;
        case 0x276034u: goto label_276034;
        case 0x276038u: goto label_276038;
        case 0x27603cu: goto label_27603c;
        case 0x276040u: goto label_276040;
        case 0x276044u: goto label_276044;
        case 0x276048u: goto label_276048;
        case 0x27604cu: goto label_27604c;
        case 0x276050u: goto label_276050;
        case 0x276054u: goto label_276054;
        case 0x276058u: goto label_276058;
        case 0x27605cu: goto label_27605c;
        case 0x276060u: goto label_276060;
        case 0x276064u: goto label_276064;
        case 0x276068u: goto label_276068;
        case 0x27606cu: goto label_27606c;
        case 0x276070u: goto label_276070;
        case 0x276074u: goto label_276074;
        case 0x276078u: goto label_276078;
        case 0x27607cu: goto label_27607c;
        case 0x276080u: goto label_276080;
        case 0x276084u: goto label_276084;
        case 0x276088u: goto label_276088;
        case 0x27608cu: goto label_27608c;
        case 0x276090u: goto label_276090;
        case 0x276094u: goto label_276094;
        case 0x276098u: goto label_276098;
        case 0x27609cu: goto label_27609c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760a4u: goto label_2760a4;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760acu: goto label_2760ac;
        case 0x2760b0u: goto label_2760b0;
        case 0x2760b4u: goto label_2760b4;
        case 0x2760b8u: goto label_2760b8;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760c0u: goto label_2760c0;
        case 0x2760c4u: goto label_2760c4;
        case 0x2760c8u: goto label_2760c8;
        case 0x2760ccu: goto label_2760cc;
        case 0x2760d0u: goto label_2760d0;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760d8u: goto label_2760d8;
        case 0x2760dcu: goto label_2760dc;
        case 0x2760e0u: goto label_2760e0;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760e8u: goto label_2760e8;
        case 0x2760ecu: goto label_2760ec;
        case 0x2760f0u: goto label_2760f0;
        case 0x2760f4u: goto label_2760f4;
        case 0x2760f8u: goto label_2760f8;
        case 0x2760fcu: goto label_2760fc;
        case 0x276100u: goto label_276100;
        case 0x276104u: goto label_276104;
        case 0x276108u: goto label_276108;
        case 0x27610cu: goto label_27610c;
        case 0x276110u: goto label_276110;
        case 0x276114u: goto label_276114;
        case 0x276118u: goto label_276118;
        case 0x27611cu: goto label_27611c;
        case 0x276120u: goto label_276120;
        case 0x276124u: goto label_276124;
        case 0x276128u: goto label_276128;
        case 0x27612cu: goto label_27612c;
        case 0x276130u: goto label_276130;
        case 0x276134u: goto label_276134;
        case 0x276138u: goto label_276138;
        case 0x27613cu: goto label_27613c;
        case 0x276140u: goto label_276140;
        case 0x276144u: goto label_276144;
        case 0x276148u: goto label_276148;
        case 0x27614cu: goto label_27614c;
        case 0x276150u: goto label_276150;
        case 0x276154u: goto label_276154;
        case 0x276158u: goto label_276158;
        case 0x27615cu: goto label_27615c;
        case 0x276160u: goto label_276160;
        case 0x276164u: goto label_276164;
        case 0x276168u: goto label_276168;
        case 0x27616cu: goto label_27616c;
        case 0x276170u: goto label_276170;
        case 0x276174u: goto label_276174;
        case 0x276178u: goto label_276178;
        case 0x27617cu: goto label_27617c;
        case 0x276180u: goto label_276180;
        case 0x276184u: goto label_276184;
        case 0x276188u: goto label_276188;
        case 0x27618cu: goto label_27618c;
        case 0x276190u: goto label_276190;
        case 0x276194u: goto label_276194;
        case 0x276198u: goto label_276198;
        case 0x27619cu: goto label_27619c;
        case 0x2761a0u: goto label_2761a0;
        case 0x2761a4u: goto label_2761a4;
        case 0x2761a8u: goto label_2761a8;
        case 0x2761acu: goto label_2761ac;
        case 0x2761b0u: goto label_2761b0;
        case 0x2761b4u: goto label_2761b4;
        case 0x2761b8u: goto label_2761b8;
        case 0x2761bcu: goto label_2761bc;
        case 0x2761c0u: goto label_2761c0;
        case 0x2761c4u: goto label_2761c4;
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        default: return;
    }

label_275a60:
    // 0x275a60: 0xcf58  .word       0x0000CF58                   # mult        $t9, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_275a64:
    // 0x275a64: 0x8d60  .word       0x00008D60                   # add         $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_275a68:
    // 0x275a68: 0x0  nop
    ctx->pc = 0x275a68u;
    // NOP
label_275a6c:
    // 0x275a6c: 0x0  nop
    ctx->pc = 0x275a6cu;
    // NOP
label_275a70:
    // 0x275a70: 0xcf6a  .word       0x0000CF6A                   # slt         $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a70u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_275a74:
    // 0x275a74: 0xcf10  .word       0x0000CF10                   # mfhi        $t9 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a74u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_275a78:
    // 0x275a78: 0x0  nop
    ctx->pc = 0x275a78u;
    // NOP
label_275a7c:
    // 0x275a7c: 0x0  nop
    ctx->pc = 0x275a7cu;
    // NOP
label_275a80:
    // 0x275a80: 0xcf84  .word       0x0000CF84                   # sllv        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a80u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275a84:
    // 0x275a84: 0x35a0  .word       0x000035A0                   # add         $a2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_275a88:
    // 0x275a88: 0x0  nop
    ctx->pc = 0x275a88u;
    // NOP
label_275a8c:
    // 0x275a8c: 0x0  nop
    ctx->pc = 0x275a8cu;
    // NOP
label_275a90:
    // 0x275a90: 0xcf8b  .word       0x0000CF8B                   # movn        $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a90u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_275a94:
    // 0x275a94: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_275a98:
    // 0x275a98: 0x0  nop
    ctx->pc = 0x275a98u;
    // NOP
label_275a9c:
    // 0x275a9c: 0x0  nop
    ctx->pc = 0x275a9cu;
    // NOP
label_275aa0:
    // 0x275aa0: 0xcfa7  .word       0x0000CFA7                   # not         $t9, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275aa0u;
    SET_GPR_U64(ctx, 25, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275aa4:
    // 0x275aa4: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_275aa8:
    // 0x275aa8: 0x0  nop
    ctx->pc = 0x275aa8u;
    // NOP
label_275aac:
    // 0x275aac: 0x0  nop
    ctx->pc = 0x275aacu;
    // NOP
label_275ab0:
    // 0x275ab0: 0xcfd2  .word       0x0000CFD2                   # mflo        $t9 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ab0u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_275ab4:
    // 0x275ab4: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x275ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_275ab8:
    // 0x275ab8: 0x0  nop
    ctx->pc = 0x275ab8u;
    // NOP
label_275abc:
    // 0x275abc: 0x0  nop
    ctx->pc = 0x275abcu;
    // NOP
label_275ac0:
    // 0x275ac0: 0xcfd9  .word       0x0000CFD9                   # multu       $zero, $zero # 0000CFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ac0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_275ac4:
    // 0x275ac4: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_275ac8:
    // 0x275ac8: 0x0  nop
    ctx->pc = 0x275ac8u;
    // NOP
label_275acc:
    // 0x275acc: 0x0  nop
    ctx->pc = 0x275accu;
    // NOP
label_275ad0:
    // 0x275ad0: 0xcfea  .word       0x0000CFEA                   # slt         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ad0u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_275ad4:
    // 0x275ad4: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ad4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_275ad8:
    // 0x275ad8: 0x0  nop
    ctx->pc = 0x275ad8u;
    // NOP
label_275adc:
    // 0x275adc: 0x0  nop
    ctx->pc = 0x275adcu;
    // NOP
label_275ae0:
    // 0x275ae0: 0xcffc  dsll32      $t9, $zero, 31
    ctx->pc = 0x275ae0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (32 + 31));
label_275ae4:
    // 0x275ae4: 0x48d0  .word       0x000048D0                   # mfhi        $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ae4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_275ae8:
    // 0x275ae8: 0x0  nop
    ctx->pc = 0x275ae8u;
    // NOP
label_275aec:
    // 0x275aec: 0x0  nop
    ctx->pc = 0x275aecu;
    // NOP
label_275af0:
    // 0x275af0: 0xd006  srlv        $k0, $zero, $zero
    ctx->pc = 0x275af0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275af4:
    // 0x275af4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275af4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_275af8:
    // 0x275af8: 0x0  nop
    ctx->pc = 0x275af8u;
    // NOP
label_275afc:
    // 0x275afc: 0x0  nop
    ctx->pc = 0x275afcu;
    // NOP
label_275b00:
    // 0x275b00: 0xd019  .word       0x0000D019                   # multu       $zero, $zero # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_275b04:
    // 0x275b04: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b04u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_275b08:
    // 0x275b08: 0x0  nop
    ctx->pc = 0x275b08u;
    // NOP
label_275b0c:
    // 0x275b0c: 0x0  nop
    ctx->pc = 0x275b0cu;
    // NOP
label_275b10:
    // 0x275b10: 0xd02c  dadd        $k0, $zero, $zero
    ctx->pc = 0x275b10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275b14:
    // 0x275b14: 0xb760  .word       0x0000B760                   # add         $s6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_275b18:
    // 0x275b18: 0x0  nop
    ctx->pc = 0x275b18u;
    // NOP
label_275b1c:
    // 0x275b1c: 0x0  nop
    ctx->pc = 0x275b1cu;
    // NOP
label_275b20:
    // 0x275b20: 0xd043  sra         $k0, $zero, 1
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 1));
label_275b24:
    // 0x275b24: 0x97e0  .word       0x000097E0                   # add         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_275b28:
    // 0x275b28: 0x0  nop
    ctx->pc = 0x275b28u;
    // NOP
label_275b2c:
    // 0x275b2c: 0x0  nop
    ctx->pc = 0x275b2cu;
    // NOP
label_275b30:
    // 0x275b30: 0xd056  .word       0x0000D056                   # dsrlv       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b30u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275b34:
    // 0x275b34: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_275b38:
    // 0x275b38: 0x0  nop
    ctx->pc = 0x275b38u;
    // NOP
label_275b3c:
    // 0x275b3c: 0x0  nop
    ctx->pc = 0x275b3cu;
    // NOP
label_275b40:
    // 0x275b40: 0xd05b  .word       0x0000D05B                   # divu        $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b40u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275b44:
    // 0x275b44: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x275b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_275b48:
    // 0x275b48: 0x0  nop
    ctx->pc = 0x275b48u;
    // NOP
label_275b4c:
    // 0x275b4c: 0x0  nop
    ctx->pc = 0x275b4cu;
    // NOP
label_275b50:
    // 0x275b50: 0xd065  .word       0x0000D065                   # move        $k0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b50u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275b54:
    // 0x275b54: 0xd480  sll         $k0, $zero, 18
    ctx->pc = 0x275b54u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_275b58:
    // 0x275b58: 0x0  nop
    ctx->pc = 0x275b58u;
    // NOP
label_275b5c:
    // 0x275b5c: 0x0  nop
    ctx->pc = 0x275b5cu;
    // NOP
label_275b60:
    // 0x275b60: 0xd080  sll         $k0, $zero, 2
    ctx->pc = 0x275b60u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_275b64:
    // 0x275b64: 0xc5a0  .word       0x0000C5A0                   # add         $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_275b68:
    // 0x275b68: 0x0  nop
    ctx->pc = 0x275b68u;
    // NOP
label_275b6c:
    // 0x275b6c: 0x0  nop
    ctx->pc = 0x275b6cu;
    // NOP
label_275b70:
    // 0x275b70: 0xd099  .word       0x0000D099                   # multu       $zero, $zero # 0000D080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_275b74:
    // 0x275b74: 0x9d90  .word       0x00009D90                   # mfhi        $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b74u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_275b78:
    // 0x275b78: 0x0  nop
    ctx->pc = 0x275b78u;
    // NOP
label_275b7c:
    // 0x275b7c: 0x0  nop
    ctx->pc = 0x275b7cu;
    // NOP
label_275b80:
    // 0x275b80: 0xd0ad  .word       0x0000D0AD                   # daddu       $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b80u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275b84:
    // 0x275b84: 0x11820  add         $v1, $zero, $at
    ctx->pc = 0x275b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_275b88:
    // 0x275b88: 0x0  nop
    ctx->pc = 0x275b88u;
    // NOP
label_275b8c:
    // 0x275b8c: 0x0  nop
    ctx->pc = 0x275b8cu;
    // NOP
label_275b90:
    // 0x275b90: 0xd0d1  .word       0x0000D0D1                   # mthi        $zero # 0000D0C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275b90u;
    ctx->hi = GPR_U64(ctx, 0);
label_275b94:
    // 0x275b94: 0x54b0  tge         $zero, $zero, 338
    ctx->pc = 0x275b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275b98:
    // 0x275b98: 0x0  nop
    ctx->pc = 0x275b98u;
    // NOP
label_275b9c:
    // 0x275b9c: 0x0  nop
    ctx->pc = 0x275b9cu;
    // NOP
label_275ba0:
    // 0x275ba0: 0xd0dc  .word       0x0000D0DC                   # dmult       $zero, $zero # 0000D0C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ba0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x275BA0 raw=0x0000D0DC");
 /* MITIGATED */
label_275ba4:
    // 0x275ba4: 0x9af0  tge         $zero, $zero, 619
    ctx->pc = 0x275ba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ba8:
    // 0x275ba8: 0x0  nop
    ctx->pc = 0x275ba8u;
    // NOP
label_275bac:
    // 0x275bac: 0x0  nop
    ctx->pc = 0x275bacu;
    // NOP
label_275bb0:
    // 0x275bb0: 0xd0f0  tge         $zero, $zero, 835
    ctx->pc = 0x275bb0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275bb4:
    // 0x275bb4: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275bb4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275bb8:
    // 0x275bb8: 0x0  nop
    ctx->pc = 0x275bb8u;
    // NOP
label_275bbc:
    // 0x275bbc: 0x0  nop
    ctx->pc = 0x275bbcu;
    // NOP
label_275bc0:
    // 0x275bc0: 0xd0fb  dsra        $k0, $zero, 3
    ctx->pc = 0x275bc0u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 3);
label_275bc4:
    // 0x275bc4: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x275bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275bc8:
    // 0x275bc8: 0x0  nop
    ctx->pc = 0x275bc8u;
    // NOP
label_275bcc:
    // 0x275bcc: 0x0  nop
    ctx->pc = 0x275bccu;
    // NOP
label_275bd0:
    // 0x275bd0: 0xd104  .word       0x0000D104                   # sllv        $k0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275bd4:
    // 0x275bd4: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_275bd8:
    // 0x275bd8: 0x0  nop
    ctx->pc = 0x275bd8u;
    // NOP
label_275bdc:
    // 0x275bdc: 0x0  nop
    ctx->pc = 0x275bdcu;
    // NOP
label_275be0:
    // 0x275be0: 0xd111  .word       0x0000D111                   # mthi        $zero # 0000D100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275be0u;
    ctx->hi = GPR_U64(ctx, 0);
label_275be4:
    // 0x275be4: 0x2b00  sll         $a1, $zero, 12
    ctx->pc = 0x275be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_275be8:
    // 0x275be8: 0x0  nop
    ctx->pc = 0x275be8u;
    // NOP
label_275bec:
    // 0x275bec: 0x0  nop
    ctx->pc = 0x275becu;
    // NOP
label_275bf0:
    // 0x275bf0: 0xd117  .word       0x0000D117                   # dsrav       $k0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275bf0u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275bf4:
    // 0x275bf4: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x275bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275bf8:
    // 0x275bf8: 0x0  nop
    ctx->pc = 0x275bf8u;
    // NOP
label_275bfc:
    // 0x275bfc: 0x0  nop
    ctx->pc = 0x275bfcu;
    // NOP
label_275c00:
    // 0x275c00: 0xd123  .word       0x0000D123                   # negu        $k0, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c00u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275c04:
    // 0x275c04: 0x22e0  .word       0x000022E0                   # add         $a0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_275c08:
    // 0x275c08: 0x0  nop
    ctx->pc = 0x275c08u;
    // NOP
label_275c0c:
    // 0x275c0c: 0x0  nop
    ctx->pc = 0x275c0cu;
    // NOP
label_275c10:
    // 0x275c10: 0xd128  .word       0x0000D128                   # mfsa        $k0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275c10u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_275c14:
    // 0x275c14: 0x9d30  tge         $zero, $zero, 628
    ctx->pc = 0x275c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275c18:
    // 0x275c18: 0x0  nop
    ctx->pc = 0x275c18u;
    // NOP
label_275c1c:
    // 0x275c1c: 0x0  nop
    ctx->pc = 0x275c1cu;
    // NOP
label_275c20:
    // 0x275c20: 0xd13c  dsll32      $k0, $zero, 4
    ctx->pc = 0x275c20u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 4));
label_275c24:
    // 0x275c24: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x275c24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275c28:
    // 0x275c28: 0x0  nop
    ctx->pc = 0x275c28u;
    // NOP
label_275c2c:
    // 0x275c2c: 0x0  nop
    ctx->pc = 0x275c2cu;
    // NOP
label_275c30:
    // 0x275c30: 0xd146  .word       0x0000D146                   # srlv        $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c30u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275c34:
    // 0x275c34: 0x2d60  .word       0x00002D60                   # add         $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_275c38:
    // 0x275c38: 0x0  nop
    ctx->pc = 0x275c38u;
    // NOP
label_275c3c:
    // 0x275c3c: 0x0  nop
    ctx->pc = 0x275c3cu;
    // NOP
label_275c40:
    // 0x275c40: 0xd14c  syscall     837
    ctx->pc = 0x275c40u;
    ctx->pc = 0x275C44u;
runtime->handleSyscall(rdram, ctx, 0x345u);
label_275c44:
    // 0x275c44: 0x8830  tge         $zero, $zero, 544
    ctx->pc = 0x275c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275c48:
    // 0x275c48: 0x0  nop
    ctx->pc = 0x275c48u;
    // NOP
label_275c4c:
    // 0x275c4c: 0x0  nop
    ctx->pc = 0x275c4cu;
    // NOP
label_275c50:
    // 0x275c50: 0xd15e  .word       0x0000D15E                   # ddiv        $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x275C50 raw=0x0000D15E");
 /* MITIGATED */
label_275c54:
    // 0x275c54: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c54u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_275c58:
    // 0x275c58: 0x0  nop
    ctx->pc = 0x275c58u;
    // NOP
label_275c5c:
    // 0x275c5c: 0x0  nop
    ctx->pc = 0x275c5cu;
    // NOP
label_275c60:
    // 0x275c60: 0xd165  .word       0x0000D165                   # move        $k0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c60u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275c64:
    // 0x275c64: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_275c68:
    // 0x275c68: 0x0  nop
    ctx->pc = 0x275c68u;
    // NOP
label_275c6c:
    // 0x275c6c: 0x0  nop
    ctx->pc = 0x275c6cu;
    // NOP
label_275c70:
    // 0x275c70: 0xd17b  dsra        $k0, $zero, 5
    ctx->pc = 0x275c70u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 5);
label_275c74:
    // 0x275c74: 0x23a0  .word       0x000023A0                   # add         $a0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_275c78:
    // 0x275c78: 0x0  nop
    ctx->pc = 0x275c78u;
    // NOP
label_275c7c:
    // 0x275c7c: 0x0  nop
    ctx->pc = 0x275c7cu;
    // NOP
label_275c80:
    // 0x275c80: 0xd180  sll         $k0, $zero, 6
    ctx->pc = 0x275c80u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_275c84:
    // 0x275c84: 0x2fa0  .word       0x00002FA0                   # add         $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_275c88:
    // 0x275c88: 0x0  nop
    ctx->pc = 0x275c88u;
    // NOP
label_275c8c:
    // 0x275c8c: 0x0  nop
    ctx->pc = 0x275c8cu;
    // NOP
label_275c90:
    // 0x275c90: 0xd186  .word       0x0000D186                   # srlv        $k0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c90u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_275c94:
    // 0x275c94: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275c94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_275c98:
    // 0x275c98: 0x0  nop
    ctx->pc = 0x275c98u;
    // NOP
label_275c9c:
    // 0x275c9c: 0x0  nop
    ctx->pc = 0x275c9cu;
    // NOP
label_275ca0:
    // 0x275ca0: 0xd190  .word       0x0000D190                   # mfhi        $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ca0u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275ca4:
    // 0x275ca4: 0x1a20  .word       0x00001A20                   # add         $v1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_275ca8:
    // 0x275ca8: 0x0  nop
    ctx->pc = 0x275ca8u;
    // NOP
label_275cac:
    // 0x275cac: 0x0  nop
    ctx->pc = 0x275cacu;
    // NOP
label_275cb0:
    // 0x275cb0: 0xd194  .word       0x0000D194                   # dsllv       $k0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275cb0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_275cb4:
    // 0x275cb4: 0x9be0  .word       0x00009BE0                   # add         $s3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_275cb8:
    // 0x275cb8: 0x0  nop
    ctx->pc = 0x275cb8u;
    // NOP
label_275cbc:
    // 0x275cbc: 0x0  nop
    ctx->pc = 0x275cbcu;
    // NOP
label_275cc0:
    // 0x275cc0: 0xd1a8  .word       0x0000D1A8                   # mfsa        $k0 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275cc0u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_275cc4:
    // 0x275cc4: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x275cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_275cc8:
    // 0x275cc8: 0x0  nop
    ctx->pc = 0x275cc8u;
    // NOP
label_275ccc:
    // 0x275ccc: 0x0  nop
    ctx->pc = 0x275cccu;
    // NOP
label_275cd0:
    // 0x275cd0: 0xd1bb  dsra        $k0, $zero, 6
    ctx->pc = 0x275cd0u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 6);
label_275cd4:
    // 0x275cd4: 0xd190  .word       0x0000D190                   # mfhi        $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275cd4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275cd8:
    // 0x275cd8: 0x0  nop
    ctx->pc = 0x275cd8u;
    // NOP
label_275cdc:
    // 0x275cdc: 0x0  nop
    ctx->pc = 0x275cdcu;
    // NOP
label_275ce0:
    // 0x275ce0: 0xd1d6  .word       0x0000D1D6                   # dsrlv       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ce0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275ce4:
    // 0x275ce4: 0x1180  sll         $v0, $zero, 6
    ctx->pc = 0x275ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_275ce8:
    // 0x275ce8: 0x0  nop
    ctx->pc = 0x275ce8u;
    // NOP
label_275cec:
    // 0x275cec: 0x0  nop
    ctx->pc = 0x275cecu;
    // NOP
label_275cf0:
    // 0x275cf0: 0xd1d9  .word       0x0000D1D9                   # multu       $zero, $zero # 0000D1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275cf0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_275cf4:
    // 0x275cf4: 0x7960  .word       0x00007960                   # add         $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_275cf8:
    // 0x275cf8: 0x0  nop
    ctx->pc = 0x275cf8u;
    // NOP
label_275cfc:
    // 0x275cfc: 0x0  nop
    ctx->pc = 0x275cfcu;
    // NOP
label_275d00:
    // 0x275d00: 0xd1e9  .word       0x0000D1E9                   # mtsa        $zero # 0000D1C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x275d00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_275d04:
    // 0x275d04: 0x1800  sll         $v1, $zero, 0
    ctx->pc = 0x275d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_275d08:
    // 0x275d08: 0x0  nop
    ctx->pc = 0x275d08u;
    // NOP
label_275d0c:
    // 0x275d0c: 0x0  nop
    ctx->pc = 0x275d0cu;
    // NOP
label_275d10:
    // 0x275d10: 0xd1ec  .word       0x0000D1EC                   # dadd        $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275d14:
    // 0x275d14: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d14u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_275d18:
    // 0x275d18: 0x0  nop
    ctx->pc = 0x275d18u;
    // NOP
label_275d1c:
    // 0x275d1c: 0x0  nop
    ctx->pc = 0x275d1cu;
    // NOP
label_275d20:
    // 0x275d20: 0xd1f9  .word       0x0000D1F9                   # INVALID     $zero, $zero, -0x2E07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x275D20 raw=0x0000D1F9");
 /* MITIGATED */
label_275d24:
    // 0x275d24: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_275d28:
    // 0x275d28: 0x0  nop
    ctx->pc = 0x275d28u;
    // NOP
label_275d2c:
    // 0x275d2c: 0x0  nop
    ctx->pc = 0x275d2cu;
    // NOP
label_275d30:
    // 0x275d30: 0xd203  sra         $k0, $zero, 8
    ctx->pc = 0x275d30u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 8));
label_275d34:
    // 0x275d34: 0x21b0  tge         $zero, $zero, 134
    ctx->pc = 0x275d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275d38:
    // 0x275d38: 0x0  nop
    ctx->pc = 0x275d38u;
    // NOP
label_275d3c:
    // 0x275d3c: 0x0  nop
    ctx->pc = 0x275d3cu;
    // NOP
label_275d40:
    // 0x275d40: 0xd208  .word       0x0000D208                   # jr          $zero # 0000D200 <InstrIdType: CPU_SPECIAL>
label_275d44:
    if (ctx->pc == 0x275D44u) {
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D40u;
        // 0x275d44: 0x6610  .word       0x00006610                   # mfhi        $t4 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275D48u;
        goto label_275d48;
    }
    ctx->pc = 0x275D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D40u;
        // 0x275d44: 0x6610  .word       0x00006610                   # mfhi        $t4 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275D48u;
label_275d48:
    // 0x275d48: 0x0  nop
    ctx->pc = 0x275d48u;
    // NOP
label_275d4c:
    // 0x275d4c: 0x0  nop
    ctx->pc = 0x275d4cu;
    // NOP
label_275d50:
    // 0x275d50: 0xd215  .word       0x0000D215                   # INVALID     $zero, $zero, -0x2DEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275D50 raw=0x0000D215");
 /* MITIGATED */
label_275d54:
    // 0x275d54: 0xf580  sll         $fp, $zero, 22
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275d58:
    // 0x275d58: 0x0  nop
    ctx->pc = 0x275d58u;
    // NOP
label_275d5c:
    // 0x275d5c: 0x0  nop
    ctx->pc = 0x275d5cu;
    // NOP
label_275d60:
    // 0x275d60: 0xd234  teq         $zero, $zero, 840
    ctx->pc = 0x275d60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275d64:
    // 0x275d64: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_275d68:
    // 0x275d68: 0x0  nop
    ctx->pc = 0x275d68u;
    // NOP
label_275d6c:
    // 0x275d6c: 0x0  nop
    ctx->pc = 0x275d6cu;
    // NOP
label_275d70:
    // 0x275d70: 0xd245  .word       0x0000D245                   # INVALID     $zero, $zero, -0x2DBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x275D70 raw=0x0000D245");
 /* MITIGATED */
label_275d74:
    // 0x275d74: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275d78:
    // 0x275d78: 0x0  nop
    ctx->pc = 0x275d78u;
    // NOP
label_275d7c:
    // 0x275d7c: 0x0  nop
    ctx->pc = 0x275d7cu;
    // NOP
label_275d80:
    // 0x275d80: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d80u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275d84:
    // 0x275d84: 0x14510  .word       0x00014510                   # mfhi        $t0 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d84u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_275d88:
    // 0x275d88: 0x0  nop
    ctx->pc = 0x275d88u;
    // NOP
label_275d8c:
    // 0x275d8c: 0x0  nop
    ctx->pc = 0x275d8cu;
    // NOP
label_275d90:
    // 0x275d90: 0xd279  .word       0x0000D279                   # INVALID     $zero, $zero, -0x2D87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x275D90 raw=0x0000D279");
 /* MITIGATED */
label_275d94:
    // 0x275d94: 0x11ad0  .word       0x00011AD0                   # mfhi        $v1 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_275d98:
    // 0x275d98: 0x0  nop
    ctx->pc = 0x275d98u;
    // NOP
label_275d9c:
    // 0x275d9c: 0x0  nop
    ctx->pc = 0x275d9cu;
    // NOP
label_275da0:
    // 0x275da0: 0xd29d  .word       0x0000D29D                   # dmultu      $zero, $zero # 0000D280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275da0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x275DA0 raw=0x0000D29D");
 /* MITIGATED */
label_275da4:
    // 0x275da4: 0x3b80  sll         $a3, $zero, 14
    ctx->pc = 0x275da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275da8:
    // 0x275da8: 0x0  nop
    ctx->pc = 0x275da8u;
    // NOP
label_275dac:
    // 0x275dac: 0x0  nop
    ctx->pc = 0x275dacu;
    // NOP
label_275db0:
    // 0x275db0: 0xd2a5  .word       0x0000D2A5                   # move        $k0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275db0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275db4:
    // 0x275db4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x275db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275db8:
    // 0x275db8: 0x0  nop
    ctx->pc = 0x275db8u;
    // NOP
label_275dbc:
    // 0x275dbc: 0x0  nop
    ctx->pc = 0x275dbcu;
    // NOP
label_275dc0:
    // 0x275dc0: 0xd2ac  .word       0x0000D2AC                   # dadd        $k0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275dc4:
    // 0x275dc4: 0xb0b0  tge         $zero, $zero, 706
    ctx->pc = 0x275dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275dc8:
    // 0x275dc8: 0x0  nop
    ctx->pc = 0x275dc8u;
    // NOP
label_275dcc:
    // 0x275dcc: 0x0  nop
    ctx->pc = 0x275dccu;
    // NOP
label_275dd0:
    // 0x275dd0: 0xd2c3  sra         $k0, $zero, 11
    ctx->pc = 0x275dd0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 11));
label_275dd4:
    // 0x275dd4: 0xbc30  tge         $zero, $zero, 752
    ctx->pc = 0x275dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275dd8:
    // 0x275dd8: 0x0  nop
    ctx->pc = 0x275dd8u;
    // NOP
label_275ddc:
    // 0x275ddc: 0x0  nop
    ctx->pc = 0x275ddcu;
    // NOP
label_275de0:
    // 0x275de0: 0xd2db  .word       0x0000D2DB                   # divu        $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275de0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275de4:
    // 0x275de4: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x275de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275de8:
    // 0x275de8: 0x0  nop
    ctx->pc = 0x275de8u;
    // NOP
label_275dec:
    // 0x275dec: 0x0  nop
    ctx->pc = 0x275decu;
    // NOP
label_275df0:
    // 0x275df0: 0xd2ee  .word       0x0000D2EE                   # dsub        $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275df0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275df4:
    // 0x275df4: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x275df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275df8:
    // 0x275df8: 0x0  nop
    ctx->pc = 0x275df8u;
    // NOP
label_275dfc:
    // 0x275dfc: 0x0  nop
    ctx->pc = 0x275dfcu;
    // NOP
label_275e00:
    // 0x275e00: 0xd309  .word       0x0000D309                   # jalr        $k0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_275e04:
    if (ctx->pc == 0x275E04u) {
        ctx->pc = 0x275E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E00u;
        // 0x275e04: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E08u;
        goto label_275e08;
    }
    ctx->pc = 0x275E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 26, 0x275E08u);
        ctx->pc = 0x275E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E00u;
        // 0x275e04: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E00u, 0x275E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275E08u;
label_275e08:
    // 0x275e08: 0x0  nop
    ctx->pc = 0x275e08u;
    // NOP
label_275e0c:
    // 0x275e0c: 0x0  nop
    ctx->pc = 0x275e0cu;
    // NOP
label_275e10:
    // 0x275e10: 0xd326  .word       0x0000D326                   # xor         $k0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e10u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_275e14:
    // 0x275e14: 0xb010  mfhi        $s6
    ctx->pc = 0x275e14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_275e18:
    // 0x275e18: 0x0  nop
    ctx->pc = 0x275e18u;
    // NOP
label_275e1c:
    // 0x275e1c: 0x0  nop
    ctx->pc = 0x275e1cu;
    // NOP
label_275e20:
    // 0x275e20: 0xd33d  .word       0x0000D33D                   # INVALID     $zero, $zero, -0x2CC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x275E20 raw=0x0000D33D");
 /* MITIGATED */
label_275e24:
    // 0x275e24: 0x1070  tge         $zero, $zero, 65
    ctx->pc = 0x275e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275e28:
    // 0x275e28: 0x0  nop
    ctx->pc = 0x275e28u;
    // NOP
label_275e2c:
    // 0x275e2c: 0x0  nop
    ctx->pc = 0x275e2cu;
    // NOP
label_275e30:
    // 0x275e30: 0xd340  sll         $k0, $zero, 13
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_275e34:
    // 0x275e34: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x275e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275e38:
    // 0x275e38: 0x0  nop
    ctx->pc = 0x275e38u;
    // NOP
label_275e3c:
    // 0x275e3c: 0x0  nop
    ctx->pc = 0x275e3cu;
    // NOP
label_275e40:
    // 0x275e40: 0xd349  .word       0x0000D349                   # jalr        $k0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_275e44:
    if (ctx->pc == 0x275E44u) {
        ctx->pc = 0x275E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E40u;
        // 0x275e44: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E48u;
        goto label_275e48;
    }
    ctx->pc = 0x275E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 26, 0x275E48u);
        ctx->pc = 0x275E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E40u;
        // 0x275e44: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E40u, 0x275E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275E48u;
label_275e48:
    // 0x275e48: 0x0  nop
    ctx->pc = 0x275e48u;
    // NOP
label_275e4c:
    // 0x275e4c: 0x0  nop
    ctx->pc = 0x275e4cu;
    // NOP
label_275e50:
    // 0x275e50: 0xd365  .word       0x0000D365                   # move        $k0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e50u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275e54:
    // 0x275e54: 0x3a60  .word       0x00003A60                   # add         $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_275e58:
    // 0x275e58: 0x0  nop
    ctx->pc = 0x275e58u;
    // NOP
label_275e5c:
    // 0x275e5c: 0x0  nop
    ctx->pc = 0x275e5cu;
    // NOP
label_275e60:
    // 0x275e60: 0xd36d  .word       0x0000D36D                   # daddu       $k0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e60u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275e64:
    // 0x275e64: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e64u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275e68:
    // 0x275e68: 0x0  nop
    ctx->pc = 0x275e68u;
    // NOP
label_275e6c:
    // 0x275e6c: 0x0  nop
    ctx->pc = 0x275e6cu;
    // NOP
label_275e70:
    // 0x275e70: 0xd375  .word       0x0000D375                   # INVALID     $zero, $zero, -0x2C8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x275E70 raw=0x0000D375");
 /* MITIGATED */
label_275e74:
    // 0x275e74: 0xb240  sll         $s6, $zero, 9
    ctx->pc = 0x275e74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_275e78:
    // 0x275e78: 0x0  nop
    ctx->pc = 0x275e78u;
    // NOP
label_275e7c:
    // 0x275e7c: 0x0  nop
    ctx->pc = 0x275e7cu;
    // NOP
label_275e80:
    // 0x275e80: 0xd38c  syscall     846
    ctx->pc = 0x275e80u;
    ctx->pc = 0x275E84u;
runtime->handleSyscall(rdram, ctx, 0x34Eu);
label_275e84:
    // 0x275e84: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275e88:
    // 0x275e88: 0x0  nop
    ctx->pc = 0x275e88u;
    // NOP
label_275e8c:
    // 0x275e8c: 0x0  nop
    ctx->pc = 0x275e8cu;
    // NOP
label_275e90:
    // 0x275e90: 0xd397  .word       0x0000D397                   # dsrav       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e90u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275e94:
    // 0x275e94: 0x11900  sll         $v1, $at, 4
    ctx->pc = 0x275e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_275e98:
    // 0x275e98: 0x0  nop
    ctx->pc = 0x275e98u;
    // NOP
label_275e9c:
    // 0x275e9c: 0x0  nop
    ctx->pc = 0x275e9cu;
    // NOP
label_275ea0:
    // 0x275ea0: 0xd3bb  dsra        $k0, $zero, 14
    ctx->pc = 0x275ea0u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 14);
label_275ea4:
    // 0x275ea4: 0x9170  tge         $zero, $zero, 581
    ctx->pc = 0x275ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ea8:
    // 0x275ea8: 0x0  nop
    ctx->pc = 0x275ea8u;
    // NOP
label_275eac:
    // 0x275eac: 0x0  nop
    ctx->pc = 0x275eacu;
    // NOP
label_275eb0:
    // 0x275eb0: 0xd3ce  .word       0x0000D3CE                   # INVALID     $zero, $zero, -0x2C32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275eb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x275EB0 raw=0x0000D3CE");
 /* MITIGATED */
label_275eb4:
    // 0x275eb4: 0x1340  sll         $v0, $zero, 13
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_275eb8:
    // 0x275eb8: 0x0  nop
    ctx->pc = 0x275eb8u;
    // NOP
label_275ebc:
    // 0x275ebc: 0x0  nop
    ctx->pc = 0x275ebcu;
    // NOP
label_275ec0:
    // 0x275ec0: 0xd3d1  .word       0x0000D3D1                   # mthi        $zero # 0000D3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ec0u;
    ctx->hi = GPR_U64(ctx, 0);
label_275ec4:
    // 0x275ec4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x275ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ec8:
    // 0x275ec8: 0x0  nop
    ctx->pc = 0x275ec8u;
    // NOP
label_275ecc:
    // 0x275ecc: 0x0  nop
    ctx->pc = 0x275eccu;
    // NOP
label_275ed0:
    // 0x275ed0: 0xd3e7  .word       0x0000D3E7                   # not         $k0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ed0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275ed4:
    // 0x275ed4: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x275ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275ed8:
    // 0x275ed8: 0x0  nop
    ctx->pc = 0x275ed8u;
    // NOP
label_275edc:
    // 0x275edc: 0x0  nop
    ctx->pc = 0x275edcu;
    // NOP
label_275ee0:
    // 0x275ee0: 0xd3f6  tne         $zero, $zero, 847
    ctx->pc = 0x275ee0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ee4:
    // 0x275ee4: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x275ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ee8:
    // 0x275ee8: 0x0  nop
    ctx->pc = 0x275ee8u;
    // NOP
label_275eec:
    // 0x275eec: 0x0  nop
    ctx->pc = 0x275eecu;
    // NOP
label_275ef0:
    // 0x275ef0: 0xd40a  .word       0x0000D40A                   # movz        $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ef0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_275ef4:
    // 0x275ef4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x275ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275ef8:
    // 0x275ef8: 0x0  nop
    ctx->pc = 0x275ef8u;
    // NOP
label_275efc:
    // 0x275efc: 0x0  nop
    ctx->pc = 0x275efcu;
    // NOP
label_275f00:
    // 0x275f00: 0xd41a  .word       0x0000D41A                   # div         $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_275f04:
    // 0x275f04: 0x15a0  .word       0x000015A0                   # add         $v0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_275f08:
    // 0x275f08: 0x0  nop
    ctx->pc = 0x275f08u;
    // NOP
label_275f0c:
    // 0x275f0c: 0x0  nop
    ctx->pc = 0x275f0cu;
    // NOP
label_275f10:
    // 0x275f10: 0xd41d  .word       0x0000D41D                   # dmultu      $zero, $zero # 0000D400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x275F10 raw=0x0000D41D");
 /* MITIGATED */
label_275f14:
    // 0x275f14: 0xe210  .word       0x0000E210                   # mfhi        $gp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f14u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_275f18:
    // 0x275f18: 0x0  nop
    ctx->pc = 0x275f18u;
    // NOP
label_275f1c:
    // 0x275f1c: 0x0  nop
    ctx->pc = 0x275f1cu;
    // NOP
label_275f20:
    // 0x275f20: 0xd43a  dsrl        $k0, $zero, 16
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 16);
label_275f24:
    // 0x275f24: 0x69b0  tge         $zero, $zero, 422
    ctx->pc = 0x275f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f28:
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
label_275f2c:
    // 0x275f2c: 0x0  nop
    ctx->pc = 0x275f2cu;
    // NOP
label_275f30:
    // 0x275f30: 0xd448  .word       0x0000D448                   # jr          $zero # 0000D440 <InstrIdType: CPU_SPECIAL>
label_275f34:
    if (ctx->pc == 0x275F34u) {
        ctx->pc = 0x275F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F30u;
        // 0x275f34: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275F38u;
        goto label_275f38;
    }
    ctx->pc = 0x275F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F30u;
        // 0x275f34: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275F38u;
label_275f38:
    // 0x275f38: 0x0  nop
    ctx->pc = 0x275f38u;
    // NOP
label_275f3c:
    // 0x275f3c: 0x0  nop
    ctx->pc = 0x275f3cu;
    // NOP
label_275f40:
    // 0x275f40: 0xd450  .word       0x0000D450                   # mfhi        $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f40u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275f44:
    // 0x275f44: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x275f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f48:
    // 0x275f48: 0x0  nop
    ctx->pc = 0x275f48u;
    // NOP
label_275f4c:
    // 0x275f4c: 0x0  nop
    ctx->pc = 0x275f4cu;
    // NOP
label_275f50:
    // 0x275f50: 0xd45f  .word       0x0000D45F                   # ddivu       $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x275F50 raw=0x0000D45F");
 /* MITIGATED */
label_275f54:
    // 0x275f54: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x275f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_275f58:
    // 0x275f58: 0x0  nop
    ctx->pc = 0x275f58u;
    // NOP
label_275f5c:
    // 0x275f5c: 0x0  nop
    ctx->pc = 0x275f5cu;
    // NOP
label_275f60:
    // 0x275f60: 0xd463  .word       0x0000D463                   # negu        $k0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f60u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275f64:
    // 0x275f64: 0x43b0  tge         $zero, $zero, 270
    ctx->pc = 0x275f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f68:
    // 0x275f68: 0x0  nop
    ctx->pc = 0x275f68u;
    // NOP
label_275f6c:
    // 0x275f6c: 0x0  nop
    ctx->pc = 0x275f6cu;
    // NOP
label_275f70:
    // 0x275f70: 0xd46c  .word       0x0000D46C                   # dadd        $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275f74:
    // 0x275f74: 0x2cd0  .word       0x00002CD0                   # mfhi        $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_275f78:
    // 0x275f78: 0x0  nop
    ctx->pc = 0x275f78u;
    // NOP
label_275f7c:
    // 0x275f7c: 0x0  nop
    ctx->pc = 0x275f7cu;
    // NOP
label_275f80:
    // 0x275f80: 0xd472  tlt         $zero, $zero, 849
    ctx->pc = 0x275f80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f84:
    // 0x275f84: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x275f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f88:
    // 0x275f88: 0x0  nop
    ctx->pc = 0x275f88u;
    // NOP
label_275f8c:
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
label_275f90:
    // 0x275f90: 0xd47e  dsrl32      $k0, $zero, 17
    ctx->pc = 0x275f90u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 17));
label_275f94:
    // 0x275f94: 0x48a0  .word       0x000048A0                   # add         $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_275f98:
    // 0x275f98: 0x0  nop
    ctx->pc = 0x275f98u;
    // NOP
label_275f9c:
    // 0x275f9c: 0x0  nop
    ctx->pc = 0x275f9cu;
    // NOP
label_275fa0:
    // 0x275fa0: 0xd488  .word       0x0000D488                   # jr          $zero # 0000D480 <InstrIdType: CPU_SPECIAL>
label_275fa4:
    if (ctx->pc == 0x275FA4u) {
        ctx->pc = 0x275FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FA0u;
        // 0x275fa4: 0x8830  tge         $zero, $zero, 544 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275FA8u;
        goto label_275fa8;
    }
    ctx->pc = 0x275FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FA0u;
        // 0x275fa4: 0x8830  tge         $zero, $zero, 544 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275FA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275FA8u;
label_275fa8:
    // 0x275fa8: 0x0  nop
    ctx->pc = 0x275fa8u;
    // NOP
label_275fac:
    // 0x275fac: 0x0  nop
    ctx->pc = 0x275facu;
    // NOP
label_275fb0:
    // 0x275fb0: 0xd49a  .word       0x0000D49A                   # div         $k0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_275fb4:
    // 0x275fb4: 0xdeb0  tge         $zero, $zero, 890
    ctx->pc = 0x275fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fb8:
    // 0x275fb8: 0x0  nop
    ctx->pc = 0x275fb8u;
    // NOP
label_275fbc:
    // 0x275fbc: 0x0  nop
    ctx->pc = 0x275fbcu;
    // NOP
label_275fc0:
    // 0x275fc0: 0xd4b6  tne         $zero, $zero, 850
    ctx->pc = 0x275fc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fc4:
    // 0x275fc4: 0x15b00  sll         $t3, $at, 12
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_275fc8:
    // 0x275fc8: 0x0  nop
    ctx->pc = 0x275fc8u;
    // NOP
label_275fcc:
    // 0x275fcc: 0x0  nop
    ctx->pc = 0x275fccu;
    // NOP
label_275fd0:
    // 0x275fd0: 0xd4e2  .word       0x0000D4E2                   # neg         $k0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_275fd4:
    // 0x275fd4: 0x71d0  .word       0x000071D0                   # mfhi        $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fd4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_275fd8:
    // 0x275fd8: 0x0  nop
    ctx->pc = 0x275fd8u;
    // NOP
label_275fdc:
    // 0x275fdc: 0x0  nop
    ctx->pc = 0x275fdcu;
    // NOP
label_275fe0:
    // 0x275fe0: 0xd4f1  tgeu        $zero, $zero, 851
    ctx->pc = 0x275fe0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fe4:
    // 0x275fe4: 0x10df0  tge         $zero, $at, 55
    ctx->pc = 0x275fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_275fe8:
    // 0x275fe8: 0x0  nop
    ctx->pc = 0x275fe8u;
    // NOP
label_275fec:
    // 0x275fec: 0x0  nop
    ctx->pc = 0x275fecu;
    // NOP
label_275ff0:
    // 0x275ff0: 0xd513  .word       0x0000D513                   # mtlo        $zero # 0000D500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ff0u;
    ctx->lo = GPR_U64(ctx, 0);
label_275ff4:
    // 0x275ff4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275ff8:
    // 0x275ff8: 0x0  nop
    ctx->pc = 0x275ff8u;
    // NOP
label_275ffc:
    // 0x275ffc: 0x0  nop
    ctx->pc = 0x275ffcu;
    // NOP
label_276000:
    // 0x276000: 0xd51d  .word       0x0000D51D                   # dmultu      $zero, $zero # 0000D500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276000u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x276000 raw=0x0000D51D");
 /* MITIGATED */
label_276004:
    // 0x276004: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x276004u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_276008:
    // 0x276008: 0x0  nop
    ctx->pc = 0x276008u;
    // NOP
label_27600c:
    // 0x27600c: 0x0  nop
    ctx->pc = 0x27600cu;
    // NOP
label_276010:
    // 0x276010: 0xd536  tne         $zero, $zero, 852
    ctx->pc = 0x276010u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276014:
    // 0x276014: 0xa3b0  tge         $zero, $zero, 654
    ctx->pc = 0x276014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276018:
    // 0x276018: 0x0  nop
    ctx->pc = 0x276018u;
    // NOP
label_27601c:
    // 0x27601c: 0x0  nop
    ctx->pc = 0x27601cu;
    // NOP
label_276020:
    // 0x276020: 0xd54b  .word       0x0000D54B                   # movn        $k0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276020u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_276024:
    // 0x276024: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x276024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276028:
    // 0x276028: 0x0  nop
    ctx->pc = 0x276028u;
    // NOP
label_27602c:
    // 0x27602c: 0x0  nop
    ctx->pc = 0x27602cu;
    // NOP
label_276030:
    // 0x276030: 0xd55b  .word       0x0000D55B                   # divu        $k0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276030u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_276034:
    // 0x276034: 0x3650  .word       0x00003650                   # mfhi        $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276038:
    // 0x276038: 0x0  nop
    ctx->pc = 0x276038u;
    // NOP
label_27603c:
    // 0x27603c: 0x0  nop
    ctx->pc = 0x27603cu;
    // NOP
label_276040:
    // 0x276040: 0xd562  .word       0x0000D562                   # neg         $k0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276040u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_276044:
    // 0x276044: 0xdcb0  tge         $zero, $zero, 882
    ctx->pc = 0x276044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276048:
    // 0x276048: 0x0  nop
    ctx->pc = 0x276048u;
    // NOP
label_27604c:
    // 0x27604c: 0x0  nop
    ctx->pc = 0x27604cu;
    // NOP
label_276050:
    // 0x276050: 0xd57e  dsrl32      $k0, $zero, 21
    ctx->pc = 0x276050u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 21));
label_276054:
    // 0x276054: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x276054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276058:
    // 0x276058: 0x0  nop
    ctx->pc = 0x276058u;
    // NOP
label_27605c:
    // 0x27605c: 0x0  nop
    ctx->pc = 0x27605cu;
    // NOP
label_276060:
    // 0x276060: 0xd599  .word       0x0000D599                   # multu       $zero, $zero # 0000D580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276060u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276064:
    // 0x276064: 0xe1c0  sll         $gp, $zero, 7
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276068:
    // 0x276068: 0x0  nop
    ctx->pc = 0x276068u;
    // NOP
label_27606c:
    // 0x27606c: 0x0  nop
    ctx->pc = 0x27606cu;
    // NOP
label_276070:
    // 0x276070: 0xd5b6  tne         $zero, $zero, 854
    ctx->pc = 0x276070u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276074:
    // 0x276074: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x276074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276078:
    // 0x276078: 0x0  nop
    ctx->pc = 0x276078u;
    // NOP
label_27607c:
    // 0x27607c: 0x0  nop
    ctx->pc = 0x27607cu;
    // NOP
label_276080:
    // 0x276080: 0xd5cd  break       0, 855
    ctx->pc = 0x276080u;
    runtime->handleBreak(rdram, ctx);
label_276084:
    // 0x276084: 0xd840  sll         $k1, $zero, 1
    ctx->pc = 0x276084u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_276088:
    // 0x276088: 0x0  nop
    ctx->pc = 0x276088u;
    // NOP
label_27608c:
    // 0x27608c: 0x0  nop
    ctx->pc = 0x27608cu;
    // NOP
label_276090:
    // 0x276090: 0xd5e9  .word       0x0000D5E9                   # mtsa        $zero # 0000D5C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_276094:
    // 0x276094: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_276098:
    // 0x276098: 0x0  nop
    ctx->pc = 0x276098u;
    // NOP
label_27609c:
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
label_2760a0:
    // 0x2760a0: 0xd5fa  dsrl        $k0, $zero, 23
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 23);
label_2760a4:
    // 0x2760a4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2760a8:
    // 0x2760a8: 0x0  nop
    ctx->pc = 0x2760a8u;
    // NOP
label_2760ac:
    // 0x2760ac: 0x0  nop
    ctx->pc = 0x2760acu;
    // NOP
label_2760b0:
    // 0x2760b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2760b4:
    // 0x2760b4: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2760b8:
    // 0x2760b8: 0x0  nop
    ctx->pc = 0x2760b8u;
    // NOP
label_2760bc:
    // 0x2760bc: 0x0  nop
    ctx->pc = 0x2760bcu;
    // NOP
label_2760c0:
    // 0x2760c0: 0xd61e  .word       0x0000D61E                   # ddiv        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2760C0 raw=0x0000D61E");
 /* MITIGATED */
label_2760c4:
    // 0x2760c4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x2760c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760c8:
    // 0x2760c8: 0x0  nop
    ctx->pc = 0x2760c8u;
    // NOP
label_2760cc:
    // 0x2760cc: 0x0  nop
    ctx->pc = 0x2760ccu;
    // NOP
label_2760d0:
    // 0x2760d0: 0xd634  teq         $zero, $zero, 856
    ctx->pc = 0x2760d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760d4:
    // 0x2760d4: 0xd210  .word       0x0000D210                   # mfhi        $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760d4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2760d8:
    // 0x2760d8: 0x0  nop
    ctx->pc = 0x2760d8u;
    // NOP
label_2760dc:
    // 0x2760dc: 0x0  nop
    ctx->pc = 0x2760dcu;
    // NOP
label_2760e0:
    // 0x2760e0: 0xd64f  .word       0x0000D64F                   # sync.p # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2760e4:
    // 0x2760e4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2760e8:
    // 0x2760e8: 0x0  nop
    ctx->pc = 0x2760e8u;
    // NOP
label_2760ec:
    // 0x2760ec: 0x0  nop
    ctx->pc = 0x2760ecu;
    // NOP
label_2760f0:
    // 0x2760f0: 0xd65c  .word       0x0000D65C                   # dmult       $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2760F0 raw=0x0000D65C");
 /* MITIGATED */
label_2760f4:
    // 0x2760f4: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2760f8:
    // 0x2760f8: 0x0  nop
    ctx->pc = 0x2760f8u;
    // NOP
label_2760fc:
    // 0x2760fc: 0x0  nop
    ctx->pc = 0x2760fcu;
    // NOP
label_276100:
    // 0x276100: 0xd663  .word       0x0000D663                   # negu        $k0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276104:
    // 0x276104: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276104u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276108:
    // 0x276108: 0x0  nop
    ctx->pc = 0x276108u;
    // NOP
label_27610c:
    // 0x27610c: 0x0  nop
    ctx->pc = 0x27610cu;
    // NOP
label_276110:
    // 0x276110: 0xd66f  .word       0x0000D66F                   # dsubu       $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276110u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276114:
    // 0x276114: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_276118:
    // 0x276118: 0x0  nop
    ctx->pc = 0x276118u;
    // NOP
label_27611c:
    // 0x27611c: 0x0  nop
    ctx->pc = 0x27611cu;
    // NOP
label_276120:
    // 0x276120: 0xd67b  dsra        $k0, $zero, 25
    ctx->pc = 0x276120u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 25);
label_276124:
    // 0x276124: 0xee90  .word       0x0000EE90                   # mfhi        $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276124u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_276128:
    // 0x276128: 0x0  nop
    ctx->pc = 0x276128u;
    // NOP
label_27612c:
    // 0x27612c: 0x0  nop
    ctx->pc = 0x27612cu;
    // NOP
label_276130:
    // 0x276130: 0xd699  .word       0x0000D699                   # multu       $zero, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276130u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276134:
    // 0x276134: 0x10720  .word       0x00010720                   # add         $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_276138:
    // 0x276138: 0x0  nop
    ctx->pc = 0x276138u;
    // NOP
label_27613c:
    // 0x27613c: 0x0  nop
    ctx->pc = 0x27613cu;
    // NOP
label_276140:
    // 0x276140: 0xd6ba  dsrl        $k0, $zero, 26
    ctx->pc = 0x276140u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 26);
label_276144:
    // 0x276144: 0xb320  .word       0x0000B320                   # add         $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_276148:
    // 0x276148: 0x0  nop
    ctx->pc = 0x276148u;
    // NOP
label_27614c:
    // 0x27614c: 0x0  nop
    ctx->pc = 0x27614cu;
    // NOP
label_276150:
    // 0x276150: 0xd6d1  .word       0x0000D6D1                   # mthi        $zero # 0000D6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276150u;
    ctx->hi = GPR_U64(ctx, 0);
label_276154:
    // 0x276154: 0x11af0  tge         $zero, $at, 107
    ctx->pc = 0x276154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_276158:
    // 0x276158: 0x0  nop
    ctx->pc = 0x276158u;
    // NOP
label_27615c:
    // 0x27615c: 0x0  nop
    ctx->pc = 0x27615cu;
    // NOP
label_276160:
    // 0x276160: 0xd6f5  .word       0x0000D6F5                   # INVALID     $zero, $zero, -0x290B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276160u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276160 raw=0x0000D6F5");
 /* MITIGATED */
label_276164:
    // 0x276164: 0xe370  tge         $zero, $zero, 909
    ctx->pc = 0x276164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276168:
    // 0x276168: 0x0  nop
    ctx->pc = 0x276168u;
    // NOP
label_27616c:
    // 0x27616c: 0x0  nop
    ctx->pc = 0x27616cu;
    // NOP
label_276170:
    // 0x276170: 0xd712  .word       0x0000D712                   # mflo        $k0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276170u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_276174:
    // 0x276174: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x276174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276178:
    // 0x276178: 0x0  nop
    ctx->pc = 0x276178u;
    // NOP
label_27617c:
    // 0x27617c: 0x0  nop
    ctx->pc = 0x27617cu;
    // NOP
label_276180:
    // 0x276180: 0xd716  .word       0x0000D716                   # dsrlv       $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276180u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276184:
    // 0x276184: 0x6d00  sll         $t5, $zero, 20
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_276188:
    // 0x276188: 0x0  nop
    ctx->pc = 0x276188u;
    // NOP
label_27618c:
    // 0x27618c: 0x0  nop
    ctx->pc = 0x27618cu;
    // NOP
label_276190:
    // 0x276190: 0xd724  .word       0x0000D724                   # and         $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276190u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276194:
    // 0x276194: 0xbc90  .word       0x0000BC90                   # mfhi        $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276194u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_276198:
    // 0x276198: 0x0  nop
    ctx->pc = 0x276198u;
    // NOP
label_27619c:
    // 0x27619c: 0x0  nop
    ctx->pc = 0x27619cu;
    // NOP
label_2761a0:
    // 0x2761a0: 0xd73c  dsll32      $k0, $zero, 28
    ctx->pc = 0x2761a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 28));
label_2761a4:
    // 0x2761a4: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x2761a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2761a8:
    // 0x2761a8: 0x0  nop
    ctx->pc = 0x2761a8u;
    // NOP
label_2761ac:
    // 0x2761ac: 0x0  nop
    ctx->pc = 0x2761acu;
    // NOP
label_2761b0:
    // 0x2761b0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2761b4:
    // 0x2761b4: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2761b8:
    // 0x2761b8: 0x0  nop
    ctx->pc = 0x2761b8u;
    // NOP
label_2761bc:
    // 0x2761bc: 0x0  nop
    ctx->pc = 0x2761bcu;
    // NOP
label_2761c0:
    // 0x2761c0: 0xd75c  .word       0x0000D75C                   # dmult       $zero, $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2761C0 raw=0x0000D75C");
 /* MITIGATED */
label_2761c4:
    // 0x2761c4: 0x12940  sll         $a1, $at, 5
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_2761c8:
    // 0x2761c8: 0x0  nop
    ctx->pc = 0x2761c8u;
    // NOP
label_2761cc:
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
label_2761d0:
    // 0x2761d0: 0xd782  srl         $k0, $zero, 30
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2761d4:
    // 0x2761d4: 0xd460  .word       0x0000D460                   # add         $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
label_2761dc:
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
label_2761e0:
    // 0x2761e0: 0xd79d  .word       0x0000D79D                   # dmultu      $zero, $zero # 0000D780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2761E0 raw=0x0000D79D");
 /* MITIGATED */
label_2761e4:
    // 0x2761e4: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2761e8:
    // 0x2761e8: 0x0  nop
    ctx->pc = 0x2761e8u;
    // NOP
label_2761ec:
    // 0x2761ec: 0x0  nop
    ctx->pc = 0x2761ecu;
    // NOP
label_2761f0:
    // 0x2761f0: 0xd7aa  .word       0x0000D7AA                   # slt         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761f0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2761f4:
    // 0x2761f4: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x2761f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2761f8:
    // 0x2761f8: 0x0  nop
    ctx->pc = 0x2761f8u;
    // NOP
label_2761fc:
    // 0x2761fc: 0x0  nop
    ctx->pc = 0x2761fcu;
    // NOP
label_276200:
    // 0x276200: 0xd7ae  .word       0x0000D7AE                   # dsub        $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_276204:
    // 0x276204: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_276208:
    // 0x276208: 0x0  nop
    ctx->pc = 0x276208u;
    // NOP
label_27620c:
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
label_276210:
    // 0x276210: 0xd7c3  sra         $k0, $zero, 31
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 31));
label_276214:
    // 0x276214: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_276218:
    // 0x276218: 0x0  nop
    ctx->pc = 0x276218u;
    // NOP
label_27621c:
    // 0x27621c: 0x0  nop
    ctx->pc = 0x27621cu;
    // NOP
label_276220:
    // 0x276220: 0xd7d9  .word       0x0000D7D9                   # multu       $zero, $zero # 0000D7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276224:
    // 0x276224: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x276224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276228:
    // 0x276228: 0x0  nop
    ctx->pc = 0x276228u;
    // NOP
label_27622c:
    // 0x27622c: 0x0  nop
    ctx->pc = 0x27622cu;
    // NOP
    ctx->pc = 0x276230u;
    return;
}
