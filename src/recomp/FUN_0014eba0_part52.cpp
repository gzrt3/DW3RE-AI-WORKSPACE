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


void FUN_0014eba0_part52(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x167a10u: goto label_167a10;
        case 0x167a14u: goto label_167a14;
        case 0x167a18u: goto label_167a18;
        case 0x167a1cu: goto label_167a1c;
        case 0x167a20u: goto label_167a20;
        case 0x167a24u: goto label_167a24;
        case 0x167a28u: goto label_167a28;
        case 0x167a2cu: goto label_167a2c;
        case 0x167a30u: goto label_167a30;
        case 0x167a34u: goto label_167a34;
        case 0x167a38u: goto label_167a38;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a40u: goto label_167a40;
        case 0x167a44u: goto label_167a44;
        case 0x167a48u: goto label_167a48;
        case 0x167a4cu: goto label_167a4c;
        case 0x167a50u: goto label_167a50;
        case 0x167a54u: goto label_167a54;
        case 0x167a58u: goto label_167a58;
        case 0x167a5cu: goto label_167a5c;
        case 0x167a60u: goto label_167a60;
        case 0x167a64u: goto label_167a64;
        case 0x167a68u: goto label_167a68;
        case 0x167a6cu: goto label_167a6c;
        case 0x167a70u: goto label_167a70;
        case 0x167a74u: goto label_167a74;
        case 0x167a78u: goto label_167a78;
        case 0x167a7cu: goto label_167a7c;
        case 0x167a80u: goto label_167a80;
        case 0x167a84u: goto label_167a84;
        case 0x167a88u: goto label_167a88;
        case 0x167a8cu: goto label_167a8c;
        case 0x167a90u: goto label_167a90;
        case 0x167a94u: goto label_167a94;
        case 0x167a98u: goto label_167a98;
        case 0x167a9cu: goto label_167a9c;
        case 0x167aa0u: goto label_167aa0;
        case 0x167aa4u: goto label_167aa4;
        case 0x167aa8u: goto label_167aa8;
        case 0x167aacu: goto label_167aac;
        case 0x167ab0u: goto label_167ab0;
        case 0x167ab4u: goto label_167ab4;
        case 0x167ab8u: goto label_167ab8;
        case 0x167abcu: goto label_167abc;
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac4u: goto label_167ac4;
        case 0x167ac8u: goto label_167ac8;
        case 0x167accu: goto label_167acc;
        case 0x167ad0u: goto label_167ad0;
        case 0x167ad4u: goto label_167ad4;
        case 0x167ad8u: goto label_167ad8;
        case 0x167adcu: goto label_167adc;
        case 0x167ae0u: goto label_167ae0;
        case 0x167ae4u: goto label_167ae4;
        case 0x167ae8u: goto label_167ae8;
        case 0x167aecu: goto label_167aec;
        case 0x167af0u: goto label_167af0;
        case 0x167af4u: goto label_167af4;
        case 0x167af8u: goto label_167af8;
        case 0x167afcu: goto label_167afc;
        case 0x167b00u: goto label_167b00;
        case 0x167b04u: goto label_167b04;
        case 0x167b08u: goto label_167b08;
        case 0x167b0cu: goto label_167b0c;
        case 0x167b10u: goto label_167b10;
        case 0x167b14u: goto label_167b14;
        case 0x167b18u: goto label_167b18;
        case 0x167b1cu: goto label_167b1c;
        case 0x167b20u: goto label_167b20;
        case 0x167b24u: goto label_167b24;
        case 0x167b28u: goto label_167b28;
        case 0x167b2cu: goto label_167b2c;
        case 0x167b30u: goto label_167b30;
        case 0x167b34u: goto label_167b34;
        case 0x167b38u: goto label_167b38;
        case 0x167b3cu: goto label_167b3c;
        case 0x167b40u: goto label_167b40;
        case 0x167b44u: goto label_167b44;
        case 0x167b48u: goto label_167b48;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b50u: goto label_167b50;
        case 0x167b54u: goto label_167b54;
        case 0x167b58u: goto label_167b58;
        case 0x167b5cu: goto label_167b5c;
        case 0x167b60u: goto label_167b60;
        case 0x167b64u: goto label_167b64;
        case 0x167b68u: goto label_167b68;
        case 0x167b6cu: goto label_167b6c;
        case 0x167b70u: goto label_167b70;
        case 0x167b74u: goto label_167b74;
        case 0x167b78u: goto label_167b78;
        case 0x167b7cu: goto label_167b7c;
        case 0x167b80u: goto label_167b80;
        case 0x167b84u: goto label_167b84;
        case 0x167b88u: goto label_167b88;
        case 0x167b8cu: goto label_167b8c;
        case 0x167b90u: goto label_167b90;
        case 0x167b94u: goto label_167b94;
        case 0x167b98u: goto label_167b98;
        case 0x167b9cu: goto label_167b9c;
        case 0x167ba0u: goto label_167ba0;
        case 0x167ba4u: goto label_167ba4;
        case 0x167ba8u: goto label_167ba8;
        case 0x167bacu: goto label_167bac;
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        case 0x167e48u: goto label_167e48;
        case 0x167e4cu: goto label_167e4c;
        case 0x167e50u: goto label_167e50;
        case 0x167e54u: goto label_167e54;
        case 0x167e58u: goto label_167e58;
        case 0x167e5cu: goto label_167e5c;
        case 0x167e60u: goto label_167e60;
        case 0x167e64u: goto label_167e64;
        case 0x167e68u: goto label_167e68;
        case 0x167e6cu: goto label_167e6c;
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        case 0x167ebcu: goto label_167ebc;
        case 0x167ec0u: goto label_167ec0;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ec8u: goto label_167ec8;
        case 0x167eccu: goto label_167ecc;
        case 0x167ed0u: goto label_167ed0;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ed8u: goto label_167ed8;
        case 0x167edcu: goto label_167edc;
        case 0x167ee0u: goto label_167ee0;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ee8u: goto label_167ee8;
        case 0x167eecu: goto label_167eec;
        case 0x167ef0u: goto label_167ef0;
        case 0x167ef4u: goto label_167ef4;
        case 0x167ef8u: goto label_167ef8;
        case 0x167efcu: goto label_167efc;
        case 0x167f00u: goto label_167f00;
        case 0x167f04u: goto label_167f04;
        case 0x167f08u: goto label_167f08;
        case 0x167f0cu: goto label_167f0c;
        case 0x167f10u: goto label_167f10;
        case 0x167f14u: goto label_167f14;
        case 0x167f18u: goto label_167f18;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f20u: goto label_167f20;
        case 0x167f24u: goto label_167f24;
        case 0x167f28u: goto label_167f28;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f30u: goto label_167f30;
        case 0x167f34u: goto label_167f34;
        case 0x167f38u: goto label_167f38;
        case 0x167f3cu: goto label_167f3c;
        case 0x167f40u: goto label_167f40;
        case 0x167f44u: goto label_167f44;
        case 0x167f48u: goto label_167f48;
        case 0x167f4cu: goto label_167f4c;
        case 0x167f50u: goto label_167f50;
        case 0x167f54u: goto label_167f54;
        case 0x167f58u: goto label_167f58;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f60u: goto label_167f60;
        case 0x167f64u: goto label_167f64;
        case 0x167f68u: goto label_167f68;
        case 0x167f6cu: goto label_167f6c;
        case 0x167f70u: goto label_167f70;
        case 0x167f74u: goto label_167f74;
        case 0x167f78u: goto label_167f78;
        case 0x167f7cu: goto label_167f7c;
        case 0x167f80u: goto label_167f80;
        case 0x167f84u: goto label_167f84;
        case 0x167f88u: goto label_167f88;
        case 0x167f8cu: goto label_167f8c;
        case 0x167f90u: goto label_167f90;
        case 0x167f94u: goto label_167f94;
        case 0x167f98u: goto label_167f98;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa0u: goto label_167fa0;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fa8u: goto label_167fa8;
        case 0x167facu: goto label_167fac;
        case 0x167fb0u: goto label_167fb0;
        case 0x167fb4u: goto label_167fb4;
        case 0x167fb8u: goto label_167fb8;
        case 0x167fbcu: goto label_167fbc;
        case 0x167fc0u: goto label_167fc0;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fc8u: goto label_167fc8;
        case 0x167fccu: goto label_167fcc;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fd4u: goto label_167fd4;
        case 0x167fd8u: goto label_167fd8;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fe0u: goto label_167fe0;
        case 0x167fe4u: goto label_167fe4;
        case 0x167fe8u: goto label_167fe8;
        case 0x167fecu: goto label_167fec;
        case 0x167ff0u: goto label_167ff0;
        case 0x167ff4u: goto label_167ff4;
        case 0x167ff8u: goto label_167ff8;
        case 0x167ffcu: goto label_167ffc;
        case 0x168000u: goto label_168000;
        case 0x168004u: goto label_168004;
        case 0x168008u: goto label_168008;
        case 0x16800cu: goto label_16800c;
        case 0x168010u: goto label_168010;
        case 0x168014u: goto label_168014;
        case 0x168018u: goto label_168018;
        case 0x16801cu: goto label_16801c;
        case 0x168020u: goto label_168020;
        case 0x168024u: goto label_168024;
        case 0x168028u: goto label_168028;
        case 0x16802cu: goto label_16802c;
        case 0x168030u: goto label_168030;
        case 0x168034u: goto label_168034;
        case 0x168038u: goto label_168038;
        case 0x16803cu: goto label_16803c;
        case 0x168040u: goto label_168040;
        case 0x168044u: goto label_168044;
        case 0x168048u: goto label_168048;
        case 0x16804cu: goto label_16804c;
        case 0x168050u: goto label_168050;
        case 0x168054u: goto label_168054;
        case 0x168058u: goto label_168058;
        case 0x16805cu: goto label_16805c;
        case 0x168060u: goto label_168060;
        case 0x168064u: goto label_168064;
        case 0x168068u: goto label_168068;
        case 0x16806cu: goto label_16806c;
        case 0x168070u: goto label_168070;
        case 0x168074u: goto label_168074;
        case 0x168078u: goto label_168078;
        case 0x16807cu: goto label_16807c;
        case 0x168080u: goto label_168080;
        case 0x168084u: goto label_168084;
        case 0x168088u: goto label_168088;
        case 0x16808cu: goto label_16808c;
        case 0x168090u: goto label_168090;
        case 0x168094u: goto label_168094;
        case 0x168098u: goto label_168098;
        case 0x16809cu: goto label_16809c;
        case 0x1680a0u: goto label_1680a0;
        case 0x1680a4u: goto label_1680a4;
        case 0x1680a8u: goto label_1680a8;
        case 0x1680acu: goto label_1680ac;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680b4u: goto label_1680b4;
        case 0x1680b8u: goto label_1680b8;
        case 0x1680bcu: goto label_1680bc;
        case 0x1680c0u: goto label_1680c0;
        case 0x1680c4u: goto label_1680c4;
        case 0x1680c8u: goto label_1680c8;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d0u: goto label_1680d0;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680d8u: goto label_1680d8;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e0u: goto label_1680e0;
        case 0x1680e4u: goto label_1680e4;
        case 0x1680e8u: goto label_1680e8;
        case 0x1680ecu: goto label_1680ec;
        case 0x1680f0u: goto label_1680f0;
        case 0x1680f4u: goto label_1680f4;
        case 0x1680f8u: goto label_1680f8;
        case 0x1680fcu: goto label_1680fc;
        case 0x168100u: goto label_168100;
        case 0x168104u: goto label_168104;
        case 0x168108u: goto label_168108;
        case 0x16810cu: goto label_16810c;
        case 0x168110u: goto label_168110;
        case 0x168114u: goto label_168114;
        case 0x168118u: goto label_168118;
        case 0x16811cu: goto label_16811c;
        case 0x168120u: goto label_168120;
        case 0x168124u: goto label_168124;
        case 0x168128u: goto label_168128;
        case 0x16812cu: goto label_16812c;
        case 0x168130u: goto label_168130;
        case 0x168134u: goto label_168134;
        case 0x168138u: goto label_168138;
        case 0x16813cu: goto label_16813c;
        case 0x168140u: goto label_168140;
        case 0x168144u: goto label_168144;
        case 0x168148u: goto label_168148;
        case 0x16814cu: goto label_16814c;
        case 0x168150u: goto label_168150;
        case 0x168154u: goto label_168154;
        case 0x168158u: goto label_168158;
        case 0x16815cu: goto label_16815c;
        case 0x168160u: goto label_168160;
        case 0x168164u: goto label_168164;
        case 0x168168u: goto label_168168;
        case 0x16816cu: goto label_16816c;
        case 0x168170u: goto label_168170;
        case 0x168174u: goto label_168174;
        case 0x168178u: goto label_168178;
        case 0x16817cu: goto label_16817c;
        case 0x168180u: goto label_168180;
        case 0x168184u: goto label_168184;
        case 0x168188u: goto label_168188;
        case 0x16818cu: goto label_16818c;
        case 0x168190u: goto label_168190;
        case 0x168194u: goto label_168194;
        case 0x168198u: goto label_168198;
        case 0x16819cu: goto label_16819c;
        case 0x1681a0u: goto label_1681a0;
        case 0x1681a4u: goto label_1681a4;
        case 0x1681a8u: goto label_1681a8;
        case 0x1681acu: goto label_1681ac;
        case 0x1681b0u: goto label_1681b0;
        case 0x1681b4u: goto label_1681b4;
        case 0x1681b8u: goto label_1681b8;
        case 0x1681bcu: goto label_1681bc;
        case 0x1681c0u: goto label_1681c0;
        case 0x1681c4u: goto label_1681c4;
        case 0x1681c8u: goto label_1681c8;
        case 0x1681ccu: goto label_1681cc;
        case 0x1681d0u: goto label_1681d0;
        case 0x1681d4u: goto label_1681d4;
        case 0x1681d8u: goto label_1681d8;
        case 0x1681dcu: goto label_1681dc;
        default: return;
    }

label_167a10:
    // 0x167a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_167a14:
    // 0x167a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167a18:
    // 0x167a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167a1c:
    // 0x167a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167a20:
    // 0x167a20: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167a24:
    // 0x167a24: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_167a28:
    if (ctx->pc == 0x167A28u) {
        ctx->pc = 0x167A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A24u;
        // 0x167a28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A2Cu;
        goto label_167a2c;
    }
    ctx->pc = 0x167A24u;
    {
        const bool branch_taken_0x167a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A24u;
        // 0x167a28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a24) {
            ctx->pc = 0x167AB4u;
            goto label_167ab4;
        }
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x167a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167a30:
    // 0x167a30: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x167a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_167a34:
    // 0x167a34: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_167a38:
    if (ctx->pc == 0x167A38u) {
        ctx->pc = 0x167A3Cu;
        goto label_167a3c;
    }
    ctx->pc = 0x167A34u;
    {
        const bool branch_taken_0x167a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167a34) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x167a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167a40:
    // 0x167a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167a44:
    // 0x167a44: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
label_167a48:
    if (ctx->pc == 0x167A48u) {
        ctx->pc = 0x167A4Cu;
        goto label_167a4c;
    }
    ctx->pc = 0x167A44u;
    {
        const bool branch_taken_0x167a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x167a44) {
            ctx->pc = 0x167A84u;
            goto label_167a84;
        }
    }
    ctx->pc = 0x167A4Cu;
label_167a4c:
    // 0x167a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_167a50:
    if (ctx->pc == 0x167A50u) {
        ctx->pc = 0x167A54u;
        goto label_167a54;
    }
    ctx->pc = 0x167A4Cu;
    {
        const bool branch_taken_0x167a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a4c) {
            ctx->pc = 0x167A5Cu;
            goto label_167a5c;
        }
    }
    ctx->pc = 0x167A54u;
label_167a54:
    // 0x167a54: 0x10000013  b           . + 4 + (0x13 << 2)
label_167a58:
    if (ctx->pc == 0x167A58u) {
        ctx->pc = 0x167A5Cu;
        goto label_167a5c;
    }
    ctx->pc = 0x167A54u;
    {
        const bool branch_taken_0x167a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a54) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A5Cu;
label_167a5c:
    // 0x167a5c: 0x0  nop
    ctx->pc = 0x167a5cu;
    // NOP
label_167a60:
    // 0x167a60: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
label_167a64:
    // 0x167a64: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_167a68:
    // 0x167a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167a6c:
    // 0x167a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167a70:
    // 0x167a70: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_167a74:
    // 0x167a74: 0xc059b50  jal         func_166D40
label_167a78:
    if (ctx->pc == 0x167A78u) {
        ctx->pc = 0x167A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A74u;
        // 0x167a78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A7Cu;
        goto label_167a7c;
    }
    ctx->pc = 0x167A74u;
    SET_GPR_U32(ctx, 31, 0x167A7Cu);
    ctx->pc = 0x167A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A74u;
    // 0x167a78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x167A7Cu;
label_167a7c:
    // 0x167a7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_167a80:
    if (ctx->pc == 0x167A80u) {
        ctx->pc = 0x167A84u;
        goto label_167a84;
    }
    ctx->pc = 0x167A7Cu;
    {
        const bool branch_taken_0x167a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a7c) {
            ctx->pc = 0x167AA4u;
            goto label_167aa4;
        }
    }
    ctx->pc = 0x167A84u;
label_167a84:
    // 0x167a84: 0x0  nop
    ctx->pc = 0x167a84u;
    // NOP
label_167a88:
    // 0x167a88: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x167a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
label_167a8c:
    // 0x167a8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_167a90:
    // 0x167a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167a94:
    // 0x167a94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167a98:
    // 0x167a98: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_167a9c:
    // 0x167a9c: 0xc059b50  jal         func_166D40
label_167aa0:
    if (ctx->pc == 0x167AA0u) {
        ctx->pc = 0x167AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A9Cu;
        // 0x167aa0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AA4u;
        goto label_167aa4;
    }
    ctx->pc = 0x167A9Cu;
    SET_GPR_U32(ctx, 31, 0x167AA4u);
    ctx->pc = 0x167AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A9Cu;
    // 0x167aa0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x167AA4u;
label_167aa4:
    // 0x167aa4: 0x0  nop
    ctx->pc = 0x167aa4u;
    // NOP
label_167aa8:
    // 0x167aa8: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_167aac:
    // 0x167aac: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
label_167ab0:
    if (ctx->pc == 0x167AB0u) {
        ctx->pc = 0x167AB4u;
        goto label_167ab4;
    }
    ctx->pc = 0x167AACu;
    {
        const bool branch_taken_0x167aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167aac) {
            ctx->pc = 0x167A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a2c;
        }
    }
    ctx->pc = 0x167AB4u;
label_167ab4:
    // 0x167ab4: 0x0  nop
    ctx->pc = 0x167ab4u;
    // NOP
label_167ab8:
    // 0x167ab8: 0xc0592ac  jal         func_164AB0
label_167abc:
    if (ctx->pc == 0x167ABCu) {
        ctx->pc = 0x167ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AB8u;
        // 0x167abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AC0u;
        goto label_167ac0;
    }
    ctx->pc = 0x167AB8u;
    SET_GPR_U32(ctx, 31, 0x167AC0u);
    ctx->pc = 0x167ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AB8u;
    // 0x167abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AB0u;
    { ctx->pc = 0x164ab0; return; }
    ctx->pc = 0x167AC0u;
label_167ac0:
    // 0x167ac0: 0xc04f564  jal         func_13D590
label_167ac4:
    if (ctx->pc == 0x167AC4u) {
        ctx->pc = 0x167AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AC0u;
        // 0x167ac4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AC8u;
        goto label_167ac8;
    }
    ctx->pc = 0x167AC0u;
    SET_GPR_U32(ctx, 31, 0x167AC8u);
    ctx->pc = 0x167AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167AC0u;
    // 0x167ac4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D590u, 0x167AC0u, 0x167AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167AC8u;
label_167ac8:
    // 0x167ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167acc:
    // 0x167acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167ad0:
    // 0x167ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167ad4:
    // 0x167ad4: 0x3e00008  jr          $ra
label_167ad8:
    if (ctx->pc == 0x167AD8u) {
        ctx->pc = 0x167AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AD4u;
        // 0x167ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167ADCu;
        goto label_167adc;
    }
    ctx->pc = 0x167AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AD4u;
        // 0x167ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167ADCu;
label_167adc:
    // 0x167adc: 0x0  nop
    ctx->pc = 0x167adcu;
    // NOP
label_167ae0:
    // 0x167ae0: 0x308b00ff  andi        $t3, $a0, 0xFF
    ctx->pc = 0x167ae0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_167ae4:
    // 0x167ae4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_167ae8:
    // 0x167ae8: 0x3163001f  andi        $v1, $t3, 0x1F
    ctx->pc = 0x167ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)31);
label_167aec:
    // 0x167aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167af0:
    // 0x167af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_167af4:
    // 0x167af4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x167af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167af8:
    // 0x167af8: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167afc:
    // 0x167afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167b00:
    // 0x167b00: 0xc0592ec  jal         func_164BB0
label_167b04:
    if (ctx->pc == 0x167B04u) {
        ctx->pc = 0x167B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B00u;
        // 0x167b04: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B08u;
        goto label_167b08;
    }
    ctx->pc = 0x167B00u;
    SET_GPR_U32(ctx, 31, 0x167B08u);
    ctx->pc = 0x167B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B00u;
    // 0x167b04: 0xaf8286b8  sw          $v0, -0x7948($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164BB0u;
    { ctx->pc = 0x164bb0; return; }
    ctx->pc = 0x167B08u;
label_167b08:
    // 0x167b08: 0xc04f5bc  jal         func_13D6F0
label_167b0c:
    if (ctx->pc == 0x167B0Cu) {
        ctx->pc = 0x167B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B08u;
        // 0x167b0c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B10u;
        goto label_167b10;
    }
    ctx->pc = 0x167B08u;
    SET_GPR_U32(ctx, 31, 0x167B10u);
    ctx->pc = 0x167B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B08u;
    // 0x167b0c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x167B08u, 0x167B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B10u;
label_167b10:
    // 0x167b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167b14:
    // 0x167b14: 0x3e00008  jr          $ra
label_167b18:
    if (ctx->pc == 0x167B18u) {
        ctx->pc = 0x167B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B14u;
        // 0x167b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B1Cu;
        goto label_167b1c;
    }
    ctx->pc = 0x167B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B14u;
        // 0x167b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B1Cu;
label_167b1c:
    // 0x167b1c: 0x0  nop
    ctx->pc = 0x167b1cu;
    // NOP
label_167b20:
    // 0x167b20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x167b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_167b24:
    // 0x167b24: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x167b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_167b28:
    // 0x167b28: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167b2c:
    // 0x167b2c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167b30:
    // 0x167b30: 0x3e00008  jr          $ra
label_167b34:
    if (ctx->pc == 0x167B34u) {
        ctx->pc = 0x167B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B30u;
        // 0x167b34: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B38u;
        goto label_167b38;
    }
    ctx->pc = 0x167B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B30u;
        // 0x167b34: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B38u;
label_167b38:
    // 0x167b38: 0x0  nop
    ctx->pc = 0x167b38u;
    // NOP
label_167b3c:
    // 0x167b3c: 0x0  nop
    ctx->pc = 0x167b3cu;
    // NOP
label_167b40:
    // 0x167b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_167b44:
    // 0x167b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b48:
    // 0x167b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167b4c:
    // 0x167b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b50:
    // 0x167b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167b54:
    // 0x167b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167b58:
    // 0x167b58: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x167b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167b5c:
    // 0x167b5c: 0x0  nop
    ctx->pc = 0x167b5cu;
    // NOP
label_167b60:
    // 0x167b60: 0x278386a8  addiu       $v1, $gp, -0x7958
    ctx->pc = 0x167b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_167b64:
    // 0x167b64: 0x0  nop
    ctx->pc = 0x167b64u;
    // NOP
label_167b68:
    // 0x167b68: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_167b6c:
    // 0x167b6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_167b70:
    // 0x167b70: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_167b74:
    if (ctx->pc == 0x167B74u) {
        ctx->pc = 0x167B78u;
        goto label_167b78;
    }
    ctx->pc = 0x167B70u;
    {
        const bool branch_taken_0x167b70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x167b70) {
            ctx->pc = 0x167B80u;
            goto label_167b80;
        }
    }
    ctx->pc = 0x167B78u;
label_167b78:
    // 0x167b78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_167b7c:
    // 0x167b7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x167b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_167b80:
    // 0x167b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_167b84:
    // 0x167b84: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x167b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_167b88:
    // 0x167b88: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_167b8c:
    if (ctx->pc == 0x167B8Cu) {
        ctx->pc = 0x167B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B88u;
        // 0x167b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B90u;
        goto label_167b90;
    }
    ctx->pc = 0x167B88u;
    {
        const bool branch_taken_0x167b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B88u;
        // 0x167b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b88) {
            ctx->pc = 0x167B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167b64;
        }
    }
    ctx->pc = 0x167B90u;
label_167b90:
    // 0x167b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b94:
    // 0x167b94: 0xc06468c  jal         func_191A30
label_167b98:
    if (ctx->pc == 0x167B98u) {
        ctx->pc = 0x167B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B94u;
        // 0x167b98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B9Cu;
        goto label_167b9c;
    }
    ctx->pc = 0x167B94u;
    SET_GPR_U32(ctx, 31, 0x167B9Cu);
    ctx->pc = 0x167B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B94u;
    // 0x167b98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x167B9Cu;
label_167b9c:
    // 0x167b9c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x167b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_167ba0:
    // 0x167ba0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x167ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_167ba4:
    // 0x167ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_167ba8:
    if (ctx->pc == 0x167BA8u) {
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BACu;
        goto label_167bac;
    }
    ctx->pc = 0x167BA4u;
    {
        const bool branch_taken_0x167ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ba4) {
            ctx->pc = 0x167BB4u;
            goto label_167bb4;
        }
    }
    ctx->pc = 0x167BACu;
label_167bac:
    // 0x167bac: 0xc06468c  jal         func_191A30
label_167bb0:
    if (ctx->pc == 0x167BB0u) {
        ctx->pc = 0x167BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BACu;
        // 0x167bb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BB4u;
        goto label_167bb4;
    }
    ctx->pc = 0x167BACu;
    SET_GPR_U32(ctx, 31, 0x167BB4u);
    ctx->pc = 0x167BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BACu;
    // 0x167bb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x167BB4u;
label_167bb4:
    // 0x167bb4: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
label_167bb8:
    if (ctx->pc == 0x167BB8u) {
        ctx->pc = 0x167BBCu;
        goto label_167bbc;
    }
    ctx->pc = 0x167BB4u;
    {
        const bool branch_taken_0x167bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bb4) {
            ctx->pc = 0x167D94u;
            goto label_167d94;
        }
    }
    ctx->pc = 0x167BBCu;
label_167bbc:
    // 0x167bbc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167bc0:
    // 0x167bc0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167bc4:
    // 0x167bc4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_167bc8:
    // 0x167bc8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_167bcc:
    if (ctx->pc == 0x167BCCu) {
        ctx->pc = 0x167BD0u;
        goto label_167bd0;
    }
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BE0u;
            goto label_167be0;
        }
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167bd4:
    // 0x167bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167bd8:
    // 0x167bd8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_167bdc:
    if (ctx->pc == 0x167BDCu) {
        ctx->pc = 0x167BE0u;
        goto label_167be0;
    }
    ctx->pc = 0x167BD8u;
    {
        const bool branch_taken_0x167bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bd8) {
            ctx->pc = 0x167C1Cu;
            goto label_167c1c;
        }
    }
    ctx->pc = 0x167BE0u;
label_167be0:
    // 0x167be0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167be4:
    // 0x167be4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_167be8:
    if (ctx->pc == 0x167BE8u) {
        ctx->pc = 0x167BECu;
        goto label_167bec;
    }
    ctx->pc = 0x167BE4u;
    {
        const bool branch_taken_0x167be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167be4) {
            ctx->pc = 0x167BFCu;
            goto label_167bfc;
        }
    }
    ctx->pc = 0x167BECu;
label_167bec:
    // 0x167bec: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167bf0:
    // 0x167bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167bf4:
    // 0x167bf4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_167bf8:
    if (ctx->pc == 0x167BF8u) {
        ctx->pc = 0x167BFCu;
        goto label_167bfc;
    }
    ctx->pc = 0x167BF4u;
    {
        const bool branch_taken_0x167bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bf4) {
            ctx->pc = 0x167C1Cu;
            goto label_167c1c;
        }
    }
    ctx->pc = 0x167BFCu;
label_167bfc:
    // 0x167bfc: 0x0  nop
    ctx->pc = 0x167bfcu;
    // NOP
label_167c00:
    // 0x167c00: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_167c04:
    // 0x167c04: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
label_167c08:
    if (ctx->pc == 0x167C08u) {
        ctx->pc = 0x167C0Cu;
        goto label_167c0c;
    }
    ctx->pc = 0x167C04u;
    {
        const bool branch_taken_0x167c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c04) {
            ctx->pc = 0x167CB8u;
            goto label_167cb8;
        }
    }
    ctx->pc = 0x167C0Cu;
label_167c0c:
    // 0x167c0c: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167c10:
    // 0x167c10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167c14:
    // 0x167c14: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_167c18:
    if (ctx->pc == 0x167C18u) {
        ctx->pc = 0x167C1Cu;
        goto label_167c1c;
    }
    ctx->pc = 0x167C14u;
    {
        const bool branch_taken_0x167c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c14) {
            ctx->pc = 0x167CB8u;
            goto label_167cb8;
        }
    }
    ctx->pc = 0x167C1Cu;
label_167c1c:
    // 0x167c1c: 0x0  nop
    ctx->pc = 0x167c1cu;
    // NOP
label_167c20:
    // 0x167c20: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_167c24:
    // 0x167c24: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_167c28:
    if (ctx->pc == 0x167C28u) {
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C2Cu;
        goto label_167c2c;
    }
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C2Cu;
label_167c2c:
    // 0x167c2c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_167c30:
    if (ctx->pc == 0x167C30u) {
        ctx->pc = 0x167C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C2Cu;
        // 0x167c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C34u;
        goto label_167c34;
    }
    ctx->pc = 0x167C2Cu;
    {
        const bool branch_taken_0x167c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C2Cu;
        // 0x167c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c2c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C34u;
label_167c34:
    // 0x167c34: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
label_167c38:
    if (ctx->pc == 0x167C38u) {
        ctx->pc = 0x167C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C34u;
        // 0x167c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C3Cu;
        goto label_167c3c;
    }
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x167C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C34u;
        // 0x167c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C7Cu;
            goto label_167c7c;
        }
    }
    ctx->pc = 0x167C3Cu;
label_167c3c:
    // 0x167c3c: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_167c40:
    if (ctx->pc == 0x167C40u) {
        ctx->pc = 0x167C44u;
        goto label_167c44;
    }
    ctx->pc = 0x167C3Cu;
    {
        const bool branch_taken_0x167c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c3c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C44u;
label_167c44:
    // 0x167c44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167c48:
    // 0x167c48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_167c4c:
    if (ctx->pc == 0x167C4Cu) {
        ctx->pc = 0x167C50u;
        goto label_167c50;
    }
    ctx->pc = 0x167C48u;
    {
        const bool branch_taken_0x167c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c48) {
            ctx->pc = 0x167C58u;
            goto label_167c58;
        }
    }
    ctx->pc = 0x167C50u;
label_167c50:
    // 0x167c50: 0x1000004d  b           . + 4 + (0x4D << 2)
label_167c54:
    if (ctx->pc == 0x167C54u) {
        ctx->pc = 0x167C58u;
        goto label_167c58;
    }
    ctx->pc = 0x167C50u;
    {
        const bool branch_taken_0x167c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c50) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C58u;
label_167c58:
    // 0x167c58: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167c5c:
    // 0x167c5c: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167c60:
    // 0x167c60: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x167c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_167c64:
    // 0x167c64: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167c68:
    // 0x167c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167c6c:
    // 0x167c6c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_167c70:
    if (ctx->pc == 0x167C70u) {
        ctx->pc = 0x167C74u;
        goto label_167c74;
    }
    ctx->pc = 0x167C6Cu;
    {
        const bool branch_taken_0x167c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c6c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C74u;
label_167c74:
    // 0x167c74: 0x10000044  b           . + 4 + (0x44 << 2)
label_167c78:
    if (ctx->pc == 0x167C78u) {
        ctx->pc = 0x167C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C74u;
        // 0x167c78: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C7Cu;
        goto label_167c7c;
    }
    ctx->pc = 0x167C74u;
    {
        const bool branch_taken_0x167c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C74u;
        // 0x167c78: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c74) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0x9205004d  lbu         $a1, 0x4D($s0)
    ctx->pc = 0x167c80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167c84:
    // 0x167c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167c88:
    // 0x167c88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167c8c:
    // 0x167c8c: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167c90:
    // 0x167c90: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x167c90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_167c94:
    // 0x167c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167c98:
    // 0x167c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167c9c:
    // 0x167c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167ca0:
    // 0x167ca0: 0x40f809  jalr        $v0
label_167ca4:
    if (ctx->pc == 0x167CA4u) {
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CA8u;
        goto label_167ca8;
    }
    ctx->pc = 0x167CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167CA8u);
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167CA0u, 0x167CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167CA8u;
label_167ca8:
    // 0x167ca8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_167cac:
    if (ctx->pc == 0x167CACu) {
        ctx->pc = 0x167CB0u;
        goto label_167cb0;
    }
    ctx->pc = 0x167CA8u;
    {
        const bool branch_taken_0x167ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ca8) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CB0u;
label_167cb0:
    // 0x167cb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_167cb4:
    if (ctx->pc == 0x167CB4u) {
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CB8u;
        goto label_167cb8;
    }
    ctx->pc = 0x167CB0u;
    {
        const bool branch_taken_0x167cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cb0) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CB8u;
label_167cb8:
    // 0x167cb8: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_167cbc:
    // 0x167cbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167cc0:
    // 0x167cc0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_167cc4:
    if (ctx->pc == 0x167CC4u) {
        ctx->pc = 0x167CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC0u;
        // 0x167cc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CC8u;
        goto label_167cc8;
    }
    ctx->pc = 0x167CC0u;
    {
        const bool branch_taken_0x167cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC0u;
        // 0x167cc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cc0) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CC8u;
label_167cc8:
    // 0x167cc8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_167ccc:
    if (ctx->pc == 0x167CCCu) {
        ctx->pc = 0x167CD0u;
        goto label_167cd0;
    }
    ctx->pc = 0x167CC8u;
    {
        const bool branch_taken_0x167cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167cc8) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CD0u;
label_167cd0:
    // 0x167cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167cd4:
    // 0x167cd4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_167cd8:
    if (ctx->pc == 0x167CD8u) {
        ctx->pc = 0x167CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD4u;
        // 0x167cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CDCu;
        goto label_167cdc;
    }
    ctx->pc = 0x167CD4u;
    {
        const bool branch_taken_0x167cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD4u;
        // 0x167cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cd4) {
            ctx->pc = 0x167D54u;
            goto label_167d54;
        }
    }
    ctx->pc = 0x167CDCu;
label_167cdc:
    // 0x167cdc: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
label_167ce0:
    if (ctx->pc == 0x167CE0u) {
        ctx->pc = 0x167CE4u;
        goto label_167ce4;
    }
    ctx->pc = 0x167CDCu;
    {
        const bool branch_taken_0x167cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x167cdc) {
            ctx->pc = 0x167D1Cu;
            goto label_167d1c;
        }
    }
    ctx->pc = 0x167CE4u;
label_167ce4:
    // 0x167ce4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_167ce8:
    if (ctx->pc == 0x167CE8u) {
        ctx->pc = 0x167CECu;
        goto label_167cec;
    }
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167CF4u;
            goto label_167cf4;
        }
    }
    ctx->pc = 0x167CECu;
label_167cec:
    // 0x167cec: 0x10000026  b           . + 4 + (0x26 << 2)
label_167cf0:
    if (ctx->pc == 0x167CF0u) {
        ctx->pc = 0x167CF4u;
        goto label_167cf4;
    }
    ctx->pc = 0x167CECu;
    {
        const bool branch_taken_0x167cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cec) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CF4u;
label_167cf4:
    // 0x167cf4: 0x0  nop
    ctx->pc = 0x167cf4u;
    // NOP
label_167cf8:
    // 0x167cf8: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167cfc:
    // 0x167cfc: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167d00:
    // 0x167d00: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_167d04:
    // 0x167d04: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167d08:
    // 0x167d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167d0c:
    // 0x167d0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_167d10:
    if (ctx->pc == 0x167D10u) {
        ctx->pc = 0x167D14u;
        goto label_167d14;
    }
    ctx->pc = 0x167D0Cu;
    {
        const bool branch_taken_0x167d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d0c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D14u;
label_167d14:
    // 0x167d14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_167d18:
    if (ctx->pc == 0x167D18u) {
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D1Cu;
        goto label_167d1c;
    }
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D1Cu;
label_167d1c:
    // 0x167d1c: 0x0  nop
    ctx->pc = 0x167d1cu;
    // NOP
label_167d20:
    // 0x167d20: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d24:
    // 0x167d24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d28:
    // 0x167d28: 0x24426260  addiu       $v0, $v0, 0x6260
    ctx->pc = 0x167d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25184));
label_167d2c:
    // 0x167d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d30:
    // 0x167d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d34:
    // 0x167d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d38:
    // 0x167d38: 0x40f809  jalr        $v0
label_167d3c:
    if (ctx->pc == 0x167D3Cu) {
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D40u;
        goto label_167d40;
    }
    ctx->pc = 0x167D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D40u);
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D38u, 0x167D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D40u;
label_167d40:
    // 0x167d40: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_167d44:
    if (ctx->pc == 0x167D44u) {
        ctx->pc = 0x167D48u;
        goto label_167d48;
    }
    ctx->pc = 0x167D40u;
    {
        const bool branch_taken_0x167d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d40) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D48u;
label_167d48:
    // 0x167d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167d4c:
    // 0x167d4c: 0x1000000e  b           . + 4 + (0xE << 2)
label_167d50:
    if (ctx->pc == 0x167D50u) {
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D54u;
        goto label_167d54;
    }
    ctx->pc = 0x167D4Cu;
    {
        const bool branch_taken_0x167d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d4c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D54u;
label_167d54:
    // 0x167d54: 0x0  nop
    ctx->pc = 0x167d54u;
    // NOP
label_167d58:
    // 0x167d58: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d5c:
    // 0x167d5c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d60:
    // 0x167d60: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167d64:
    // 0x167d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d68:
    // 0x167d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d6c:
    // 0x167d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d70:
    // 0x167d70: 0x40f809  jalr        $v0
label_167d74:
    if (ctx->pc == 0x167D74u) {
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D78u;
        goto label_167d78;
    }
    ctx->pc = 0x167D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D78u);
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D70u, 0x167D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D78u;
label_167d78:
    // 0x167d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_167d7c:
    if (ctx->pc == 0x167D7Cu) {
        ctx->pc = 0x167D80u;
        goto label_167d80;
    }
    ctx->pc = 0x167D78u;
    {
        const bool branch_taken_0x167d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d78) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D80u;
label_167d80:
    // 0x167d80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167d84:
    // 0x167d84: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x167d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
label_167d88:
    // 0x167d88: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_167d8c:
    // 0x167d8c: 0x1600ff8b  bnez        $s0, . + 4 + (-0x75 << 2)
label_167d90:
    if (ctx->pc == 0x167D90u) {
        ctx->pc = 0x167D94u;
        goto label_167d94;
    }
    ctx->pc = 0x167D8Cu;
    {
        const bool branch_taken_0x167d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d8c) {
            ctx->pc = 0x167BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167bbc;
        }
    }
    ctx->pc = 0x167D94u;
label_167d94:
    // 0x167d94: 0x0  nop
    ctx->pc = 0x167d94u;
    // NOP
label_167d98:
    // 0x167d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167d9c:
    // 0x167d9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x167d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167da0:
    // 0x167da0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_167da4:
    // 0x167da4: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_167da8:
    if (ctx->pc == 0x167DA8u) {
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DACu;
        goto label_167dac;
    }
    ctx->pc = 0x167DA4u;
    {
        const bool branch_taken_0x167da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da4) {
            ctx->pc = 0x167DE0u;
            goto label_167de0;
        }
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_167db0:
    if (ctx->pc == 0x167DB0u) {
        ctx->pc = 0x167DB4u;
        goto label_167db4;
    }
    ctx->pc = 0x167DACu;
    {
        const bool branch_taken_0x167dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x167dac) {
            ctx->pc = 0x167DBCu;
            goto label_167dbc;
        }
    }
    ctx->pc = 0x167DB4u;
label_167db4:
    // 0x167db4: 0x1000000e  b           . + 4 + (0xE << 2)
label_167db8:
    if (ctx->pc == 0x167DB8u) {
        ctx->pc = 0x167DBCu;
        goto label_167dbc;
    }
    ctx->pc = 0x167DB4u;
    {
        const bool branch_taken_0x167db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167db4) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DBCu;
label_167dbc:
    // 0x167dbc: 0x0  nop
    ctx->pc = 0x167dbcu;
    // NOP
label_167dc0:
    // 0x167dc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167dc4:
    // 0x167dc4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x167dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_167dc8:
    // 0x167dc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_167dcc:
    if (ctx->pc == 0x167DCCu) {
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC8u;
        // 0x167dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DD0u;
        goto label_167dd0;
    }
    ctx->pc = 0x167DC8u;
    {
        const bool branch_taken_0x167dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC8u;
        // 0x167dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc8) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DD0u;
label_167dd0:
    // 0x167dd0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_167dd4:
    if (ctx->pc == 0x167DD4u) {
        ctx->pc = 0x167DD8u;
        goto label_167dd8;
    }
    ctx->pc = 0x167DD0u;
    {
        const bool branch_taken_0x167dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167dd0) {
            ctx->pc = 0x167E14u;
            goto label_167e14;
        }
    }
    ctx->pc = 0x167DD8u;
label_167dd8:
    // 0x167dd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_167ddc:
    if (ctx->pc == 0x167DDCu) {
        ctx->pc = 0x167DE0u;
        goto label_167de0;
    }
    ctx->pc = 0x167DD8u;
    {
        const bool branch_taken_0x167dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167dd8) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DE0u;
label_167de0:
    // 0x167de0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167de4:
    // 0x167de4: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x167de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_167de8:
    // 0x167de8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_167dec:
    if (ctx->pc == 0x167DECu) {
        ctx->pc = 0x167DF0u;
        goto label_167df0;
    }
    ctx->pc = 0x167DE8u;
    {
        const bool branch_taken_0x167de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167de8) {
            ctx->pc = 0x167E14u;
            goto label_167e14;
        }
    }
    ctx->pc = 0x167DF0u;
label_167df0:
    // 0x167df0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_167df4:
    // 0x167df4: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
label_167df8:
    // 0x167df8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_167dfc:
    // 0x167dfc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_167e00:
    // 0x167e00: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
label_167e04:
    // 0x167e04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_167e08:
    // 0x167e08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x167e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167e0c:
    // 0x167e0c: 0xc05951c  jal         func_165470
label_167e10:
    if (ctx->pc == 0x167E10u) {
        ctx->pc = 0x167E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E0Cu;
        // 0x167e10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E14u;
        goto label_167e14;
    }
    ctx->pc = 0x167E0Cu;
    SET_GPR_U32(ctx, 31, 0x167E14u);
    ctx->pc = 0x167E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E0Cu;
    // 0x167e10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165470u;
    { ctx->pc = 0x165470; return; }
    ctx->pc = 0x167E14u;
label_167e14:
    // 0x167e14: 0x0  nop
    ctx->pc = 0x167e14u;
    // NOP
label_167e18:
    // 0x167e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_167e1c:
    // 0x167e1c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x167e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_167e20:
    // 0x167e20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_167e24:
    if (ctx->pc == 0x167E24u) {
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E28u;
        goto label_167e28;
    }
    ctx->pc = 0x167E20u;
    {
        const bool branch_taken_0x167e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e20) {
            ctx->pc = 0x167DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167da0;
        }
    }
    ctx->pc = 0x167E28u;
label_167e28:
    // 0x167e28: 0xc059398  jal         func_164E60
label_167e2c:
    if (ctx->pc == 0x167E2Cu) {
        ctx->pc = 0x167E30u;
        goto label_167e30;
    }
    ctx->pc = 0x167E28u;
    SET_GPR_U32(ctx, 31, 0x167E30u);
    ctx->pc = 0x164E60u;
    { ctx->pc = 0x164e60; return; }
    ctx->pc = 0x167E30u;
label_167e30:
    // 0x167e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167e34:
    // 0x167e34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167e38:
    // 0x167e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167e3c:
    // 0x167e3c: 0x3e00008  jr          $ra
label_167e40:
    if (ctx->pc == 0x167E40u) {
        ctx->pc = 0x167E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E3Cu;
        // 0x167e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E44u;
        goto label_167e44;
    }
    ctx->pc = 0x167E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E3Cu;
        // 0x167e40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E44u;
label_167e44:
    // 0x167e44: 0x0  nop
    ctx->pc = 0x167e44u;
    // NOP
label_167e48:
    // 0x167e48: 0x0  nop
    ctx->pc = 0x167e48u;
    // NOP
label_167e4c:
    // 0x167e4c: 0x0  nop
    ctx->pc = 0x167e4cu;
    // NOP
label_167e50:
    // 0x167e50: 0x8f8386e0  lw          $v1, -0x7920($gp)
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167e54:
    // 0x167e54: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_167e58:
    if (ctx->pc == 0x167E58u) {
        ctx->pc = 0x167E5Cu;
        goto label_167e5c;
    }
    ctx->pc = 0x167E54u;
    {
        const bool branch_taken_0x167e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167e54) {
            ctx->pc = 0x167E70u;
            goto label_167e70;
        }
    }
    ctx->pc = 0x167E5Cu;
label_167e5c:
    // 0x167e5c: 0xaf8486e0  sw          $a0, -0x7920($gp)
    ctx->pc = 0x167e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 4));
label_167e60:
    // 0x167e60: 0xaf8486d0  sw          $a0, -0x7930($gp)
    ctx->pc = 0x167e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
label_167e64:
    // 0x167e64: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x167e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_167e68:
    // 0x167e68: 0x1000000f  b           . + 4 + (0xF << 2)
label_167e6c:
    if (ctx->pc == 0x167E6Cu) {
        ctx->pc = 0x167E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E68u;
        // 0x167e6c: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E70u;
        goto label_167e70;
    }
    ctx->pc = 0x167E68u;
    {
        const bool branch_taken_0x167e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E68u;
        // 0x167e6c: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e68) {
            ctx->pc = 0x167EA8u;
            goto label_167ea8;
        }
    }
    ctx->pc = 0x167E70u;
label_167e70:
    // 0x167e70: 0x8f8586d0  lw          $a1, -0x7930($gp)
    ctx->pc = 0x167e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
label_167e74:
    // 0x167e74: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
label_167e78:
    if (ctx->pc == 0x167E78u) {
        ctx->pc = 0x167E7Cu;
        goto label_167e7c;
    }
    ctx->pc = 0x167E74u;
    {
        const bool branch_taken_0x167e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x167e74) {
            ctx->pc = 0x167E94u;
            goto label_167e94;
        }
    }
    ctx->pc = 0x167E7Cu;
label_167e7c:
    // 0x167e7c: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x167e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
label_167e80:
    // 0x167e80: 0x8f8386e0  lw          $v1, -0x7920($gp)
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167e84:
    // 0x167e84: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x167e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_167e88:
    // 0x167e88: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x167e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_167e8c:
    // 0x167e8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_167e90:
    if (ctx->pc == 0x167E90u) {
        ctx->pc = 0x167E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E8Cu;
        // 0x167e90: 0xaf8486d0  sw          $a0, -0x7930($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E94u;
        goto label_167e94;
    }
    ctx->pc = 0x167E8Cu;
    {
        const bool branch_taken_0x167e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E8Cu;
        // 0x167e90: 0xaf8486d0  sw          $a0, -0x7930($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e8c) {
            ctx->pc = 0x167EA8u;
            goto label_167ea8;
        }
    }
    ctx->pc = 0x167E94u;
label_167e94:
    // 0x167e94: 0xaca40044  sw          $a0, 0x44($a1)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 4));
label_167e98:
    // 0x167e98: 0x8f8386d0  lw          $v1, -0x7930($gp)
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
label_167e9c:
    // 0x167e9c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x167e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_167ea0:
    // 0x167ea0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x167ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_167ea4:
    // 0x167ea4: 0xaf8486d0  sw          $a0, -0x7930($gp)
    ctx->pc = 0x167ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 4));
label_167ea8:
    // 0x167ea8: 0x3e00008  jr          $ra
label_167eac:
    if (ctx->pc == 0x167EACu) {
        ctx->pc = 0x167EB0u;
        goto label_167eb0;
    }
    ctx->pc = 0x167EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EB0u;
label_167eb0:
    // 0x167eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_167eb4:
    // 0x167eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_167eb8:
    // 0x167eb8: 0xc042090  jal         func_108240
label_167ebc:
    if (ctx->pc == 0x167EBCu) {
        ctx->pc = 0x167EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EB8u;
        // 0x167ebc: 0x240403d0  addiu       $a0, $zero, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EC0u;
        goto label_167ec0;
    }
    ctx->pc = 0x167EB8u;
    SET_GPR_U32(ctx, 31, 0x167EC0u);
    ctx->pc = 0x167EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EB8u;
    // 0x167ebc: 0x240403d0  addiu       $a0, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x167EB8u, 0x167EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167EC0u;
label_167ec0:
    // 0x167ec0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_167ec4:
    if (ctx->pc == 0x167EC4u) {
        ctx->pc = 0x167EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC0u;
        // 0x167ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EC8u;
        goto label_167ec8;
    }
    ctx->pc = 0x167EC0u;
    {
        const bool branch_taken_0x167ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC0u;
        // 0x167ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ec0) {
            ctx->pc = 0x167EE4u;
            goto label_167ee4;
        }
    }
    ctx->pc = 0x167EC8u;
label_167ec8:
    // 0x167ec8: 0xc059f94  jal         func_167E50
label_167ecc:
    if (ctx->pc == 0x167ECCu) {
        ctx->pc = 0x167ED0u;
        goto label_167ed0;
    }
    ctx->pc = 0x167EC8u;
    SET_GPR_U32(ctx, 31, 0x167ED0u);
    ctx->pc = 0x167E50u;
    goto label_167e50;
    ctx->pc = 0x167ED0u;
label_167ed0:
    // 0x167ed0: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x167ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
label_167ed4:
    // 0x167ed4: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x167ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
label_167ed8:
    // 0x167ed8: 0xa4800052  sh          $zero, 0x52($a0)
    ctx->pc = 0x167ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 0));
label_167edc:
    // 0x167edc: 0x10000002  b           . + 4 + (0x2 << 2)
label_167ee0:
    if (ctx->pc == 0x167EE0u) {
        ctx->pc = 0x167EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EDCu;
        // 0x167ee0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EE4u;
        goto label_167ee4;
    }
    ctx->pc = 0x167EDCu;
    {
        const bool branch_taken_0x167edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EDCu;
        // 0x167ee0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167edc) {
            ctx->pc = 0x167EE8u;
            goto label_167ee8;
        }
    }
    ctx->pc = 0x167EE4u;
label_167ee4:
    // 0x167ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167ee8:
    // 0x167ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167eec:
    // 0x167eec: 0x3e00008  jr          $ra
label_167ef0:
    if (ctx->pc == 0x167EF0u) {
        ctx->pc = 0x167EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EECu;
        // 0x167ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EF4u;
        goto label_167ef4;
    }
    ctx->pc = 0x167EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EECu;
        // 0x167ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EF4u;
label_167ef4:
    // 0x167ef4: 0x0  nop
    ctx->pc = 0x167ef4u;
    // NOP
label_167ef8:
    // 0x167ef8: 0x0  nop
    ctx->pc = 0x167ef8u;
    // NOP
label_167efc:
    // 0x167efc: 0x0  nop
    ctx->pc = 0x167efcu;
    // NOP
label_167f00:
    // 0x167f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_167f04:
    // 0x167f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x167f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167f08:
    // 0x167f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167f0c:
    // 0x167f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167f10:
    // 0x167f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167f14:
    // 0x167f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167f18:
    // 0x167f18: 0x8c870048  lw          $a3, 0x48($a0)
    ctx->pc = 0x167f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_167f1c:
    // 0x167f1c: 0x9084004d  lbu         $a0, 0x4D($a0)
    ctx->pc = 0x167f1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_167f20:
    // 0x167f20: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
label_167f24:
    if (ctx->pc == 0x167F24u) {
        ctx->pc = 0x167F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F20u;
        // 0x167f24: 0x8cf0004c  lw          $s0, 0x4C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F28u;
        goto label_167f28;
    }
    ctx->pc = 0x167F20u;
    {
        const bool branch_taken_0x167f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F20u;
        // 0x167f24: 0x8cf0004c  lw          $s0, 0x4C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f20) {
            ctx->pc = 0x167FF4u;
            goto label_167ff4;
        }
    }
    ctx->pc = 0x167F28u;
label_167f28:
    // 0x167f28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167f2c:
    // 0x167f2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_167f30:
    if (ctx->pc == 0x167F30u) {
        ctx->pc = 0x167F34u;
        goto label_167f34;
    }
    ctx->pc = 0x167F2Cu;
    {
        const bool branch_taken_0x167f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167f2c) {
            ctx->pc = 0x167F3Cu;
            goto label_167f3c;
        }
    }
    ctx->pc = 0x167F34u;
label_167f34:
    // 0x167f34: 0x10000050  b           . + 4 + (0x50 << 2)
label_167f38:
    if (ctx->pc == 0x167F38u) {
        ctx->pc = 0x167F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F34u;
        // 0x167f38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F3Cu;
        goto label_167f3c;
    }
    ctx->pc = 0x167F34u;
    {
        const bool branch_taken_0x167f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F34u;
        // 0x167f38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f34) {
            ctx->pc = 0x168078u;
            goto label_168078;
        }
    }
    ctx->pc = 0x167F3Cu;
label_167f3c:
    // 0x167f3c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x167f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_167f40:
    // 0x167f40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_167f44:
    // 0x167f44: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x167f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_167f48:
    // 0x167f48: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x167f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_167f4c:
    // 0x167f4c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_167f50:
    // 0x167f50: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
label_167f54:
    // 0x167f54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x167f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_167f58:
    // 0x167f58: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x167f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_167f5c:
    // 0x167f5c: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x167f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_167f60:
    // 0x167f60: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x167f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_167f64:
    // 0x167f64: 0xc066e26  jal         func_19B898
label_167f68:
    if (ctx->pc == 0x167F68u) {
        ctx->pc = 0x167F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F64u;
        // 0x167f68: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F6Cu;
        goto label_167f6c;
    }
    ctx->pc = 0x167F64u;
    SET_GPR_U32(ctx, 31, 0x167F6Cu);
    ctx->pc = 0x167F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F64u;
    // 0x167f68: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x167F6Cu;
label_167f6c:
    // 0x167f6c: 0xc08f0cc  jal         func_23C330
label_167f70:
    if (ctx->pc == 0x167F70u) {
        ctx->pc = 0x167F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F6Cu;
        // 0x167f70: 0xa6200050  sh          $zero, 0x50($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F74u;
        goto label_167f74;
    }
    ctx->pc = 0x167F6Cu;
    SET_GPR_U32(ctx, 31, 0x167F74u);
    ctx->pc = 0x167F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F6Cu;
    // 0x167f70: 0xa6200050  sh          $zero, 0x50($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x167F74u;
label_167f74:
    // 0x167f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167f78:
    // 0x167f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167f7c:
    // 0x167f7c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x167f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_167f80:
    // 0x167f80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x167f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_167f84:
    // 0x167f84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x167f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_167f88:
    // 0x167f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167f8c:
    // 0x167f8c: 0x0  nop
    ctx->pc = 0x167f8cu;
    // NOP
label_167f90:
    // 0x167f90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x167f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_167f94:
    // 0x167f94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x167f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_167f98:
    // 0x167f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167f9c:
    // 0x167f9c: 0x0  nop
    ctx->pc = 0x167f9cu;
    // NOP
label_167fa0:
    // 0x167fa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x167fa0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_167fa4:
    // 0x167fa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_167fa8:
    // 0x167fa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x167fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_167fac:
    // 0x167fac: 0x0  nop
    ctx->pc = 0x167facu;
    // NOP
label_167fb0:
    // 0x167fb0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x167fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_167fb4:
    // 0x167fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x167fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167fb8:
    // 0x167fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_167fbc:
    // 0x167fbc: 0xc066e26  jal         func_19B898
label_167fc0:
    if (ctx->pc == 0x167FC0u) {
        ctx->pc = 0x167FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FBCu;
        // 0x167fc0: 0xa6220052  sh          $v0, 0x52($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FC4u;
        goto label_167fc4;
    }
    ctx->pc = 0x167FBCu;
    SET_GPR_U32(ctx, 31, 0x167FC4u);
    ctx->pc = 0x167FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FBCu;
    // 0x167fc0: 0xa6220052  sh          $v0, 0x52($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x167FC4u;
label_167fc4:
    // 0x167fc4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_167fc8:
    // 0x167fc8: 0xc066e26  jal         func_19B898
label_167fcc:
    if (ctx->pc == 0x167FCCu) {
        ctx->pc = 0x167FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FC8u;
        // 0x167fcc: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FD0u;
        goto label_167fd0;
    }
    ctx->pc = 0x167FC8u;
    SET_GPR_U32(ctx, 31, 0x167FD0u);
    ctx->pc = 0x167FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FC8u;
    // 0x167fcc: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x167FD0u;
label_167fd0:
    // 0x167fd0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_167fd4:
    // 0x167fd4: 0xc066e26  jal         func_19B898
label_167fd8:
    if (ctx->pc == 0x167FD8u) {
        ctx->pc = 0x167FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FD4u;
        // 0x167fd8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FDCu;
        goto label_167fdc;
    }
    ctx->pc = 0x167FD4u;
    SET_GPR_U32(ctx, 31, 0x167FDCu);
    ctx->pc = 0x167FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FD4u;
    // 0x167fd8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x167FDCu;
label_167fdc:
    // 0x167fdc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_167fe0:
    // 0x167fe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167fe4:
    // 0x167fe4: 0xc05cf6c  jal         func_173DB0
label_167fe8:
    if (ctx->pc == 0x167FE8u) {
        ctx->pc = 0x167FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FE4u;
        // 0x167fe8: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FECu;
        goto label_167fec;
    }
    ctx->pc = 0x167FE4u;
    SET_GPR_U32(ctx, 31, 0x167FECu);
    ctx->pc = 0x167FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FE4u;
    // 0x167fe8: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    { ctx->pc = 0x173db0; return; }
    ctx->pc = 0x167FECu;
label_167fec:
    // 0x167fec: 0x10000021  b           . + 4 + (0x21 << 2)
label_167ff0:
    if (ctx->pc == 0x167FF0u) {
        ctx->pc = 0x167FF4u;
        goto label_167ff4;
    }
    ctx->pc = 0x167FECu;
    {
        const bool branch_taken_0x167fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167fec) {
            ctx->pc = 0x168074u;
            goto label_168074;
        }
    }
    ctx->pc = 0x167FF4u;
label_167ff4:
    // 0x167ff4: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x167ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_167ff8:
    // 0x167ff8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_167ffc:
    // 0x167ffc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x167ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_168000:
    // 0x168000: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x168000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_168004:
    // 0x168004: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
label_168008:
    // 0x168008: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_16800c:
    // 0x16800c: 0x24a55fa0  addiu       $a1, $a1, 0x5FA0
    ctx->pc = 0x16800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24480));
label_168010:
    // 0x168010: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_168014:
    // 0x168014: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x168014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_168018:
    // 0x168018: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x168018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_16801c:
    // 0x16801c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_168020:
    // 0x168020: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x168020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_168024:
    // 0x168024: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x168024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_168028:
    // 0x168028: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x168028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
label_16802c:
    // 0x16802c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x16802cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_168030:
    // 0x168030: 0xc066e26  jal         func_19B898
label_168034:
    if (ctx->pc == 0x168034u) {
        ctx->pc = 0x168034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168030u;
        // 0x168034: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168038u;
        goto label_168038;
    }
    ctx->pc = 0x168030u;
    SET_GPR_U32(ctx, 31, 0x168038u);
    ctx->pc = 0x168034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168030u;
    // 0x168034: 0xa4e20056  sh          $v0, 0x56($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x168038u;
label_168038:
    // 0x168038: 0xa6200050  sh          $zero, 0x50($s1)
    ctx->pc = 0x168038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 0));
label_16803c:
    // 0x16803c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168040:
    // 0x168040: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_168044:
    // 0x168044: 0xc066e26  jal         func_19B898
label_168048:
    if (ctx->pc == 0x168048u) {
        ctx->pc = 0x168048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168044u;
        // 0x168048: 0xa6200052  sh          $zero, 0x52($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16804Cu;
        goto label_16804c;
    }
    ctx->pc = 0x168044u;
    SET_GPR_U32(ctx, 31, 0x16804Cu);
    ctx->pc = 0x168048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168044u;
    // 0x168048: 0xa6200052  sh          $zero, 0x52($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x16804Cu;
label_16804c:
    // 0x16804c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_168050:
    // 0x168050: 0xc066e26  jal         func_19B898
label_168054:
    if (ctx->pc == 0x168054u) {
        ctx->pc = 0x168054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168050u;
        // 0x168054: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168058u;
        goto label_168058;
    }
    ctx->pc = 0x168050u;
    SET_GPR_U32(ctx, 31, 0x168058u);
    ctx->pc = 0x168054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168050u;
    // 0x168054: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x168058u;
label_168058:
    // 0x168058: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_16805c:
    // 0x16805c: 0xc066e26  jal         func_19B898
label_168060:
    if (ctx->pc == 0x168060u) {
        ctx->pc = 0x168060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16805Cu;
        // 0x168060: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168064u;
        goto label_168064;
    }
    ctx->pc = 0x16805Cu;
    SET_GPR_U32(ctx, 31, 0x168064u);
    ctx->pc = 0x168060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16805Cu;
    // 0x168060: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x168064u;
label_168064:
    // 0x168064: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x168064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_168068:
    // 0x168068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x168068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16806c:
    // 0x16806c: 0xc05cf6c  jal         func_173DB0
label_168070:
    if (ctx->pc == 0x168070u) {
        ctx->pc = 0x168070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16806Cu;
        // 0x168070: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168074u;
        goto label_168074;
    }
    ctx->pc = 0x16806Cu;
    SET_GPR_U32(ctx, 31, 0x168074u);
    ctx->pc = 0x168070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16806Cu;
    // 0x168070: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    { ctx->pc = 0x173db0; return; }
    ctx->pc = 0x168074u;
label_168074:
    // 0x168074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_168078:
    // 0x168078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16807c:
    // 0x16807c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16807cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168080:
    // 0x168080: 0x3e00008  jr          $ra
label_168084:
    if (ctx->pc == 0x168084u) {
        ctx->pc = 0x168084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168080u;
        // 0x168084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168088u;
        goto label_168088;
    }
    ctx->pc = 0x168080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168080u;
        // 0x168084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168088u;
label_168088:
    // 0x168088: 0x0  nop
    ctx->pc = 0x168088u;
    // NOP
label_16808c:
    // 0x16808c: 0x0  nop
    ctx->pc = 0x16808cu;
    // NOP
label_168090:
    // 0x168090: 0xaf8086e0  sw          $zero, -0x7920($gp)
    ctx->pc = 0x168090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 0));
label_168094:
    // 0x168094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168098:
    // 0x168098: 0xaf8086d0  sw          $zero, -0x7930($gp)
    ctx->pc = 0x168098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 0));
label_16809c:
    // 0x16809c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16809cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1680a0:
    // 0x1680a0: 0xaf8086b8  sw          $zero, -0x7948($gp)
    ctx->pc = 0x1680a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 0));
label_1680a4:
    // 0x1680a4: 0xa38086b0  sb          $zero, -0x7950($gp)
    ctx->pc = 0x1680a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936240), (uint8_t)GPR_U32(ctx, 0));
label_1680a8:
    // 0x1680a8: 0xa38086b1  sb          $zero, -0x794F($gp)
    ctx->pc = 0x1680a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936241), (uint8_t)GPR_U32(ctx, 0));
label_1680ac:
    // 0x1680ac: 0xa38086b2  sb          $zero, -0x794E($gp)
    ctx->pc = 0x1680acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936242), (uint8_t)GPR_U32(ctx, 0));
label_1680b0:
    // 0x1680b0: 0xa38086b3  sb          $zero, -0x794D($gp)
    ctx->pc = 0x1680b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936243), (uint8_t)GPR_U32(ctx, 0));
label_1680b4:
    // 0x1680b4: 0xa38086b4  sb          $zero, -0x794C($gp)
    ctx->pc = 0x1680b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936244), (uint8_t)GPR_U32(ctx, 0));
label_1680b8:
    // 0x1680b8: 0xa38086b5  sb          $zero, -0x794B($gp)
    ctx->pc = 0x1680b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936245), (uint8_t)GPR_U32(ctx, 0));
label_1680bc:
    // 0x1680bc: 0xa38086b6  sb          $zero, -0x794A($gp)
    ctx->pc = 0x1680bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936246), (uint8_t)GPR_U32(ctx, 0));
label_1680c0:
    // 0x1680c0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1680c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1680c4:
    // 0x1680c4: 0x24843eb0  addiu       $a0, $a0, 0x3EB0
    ctx->pc = 0x1680c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16048));
label_1680c8:
    // 0x1680c8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1680c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1680cc:
    // 0x1680cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1680d0:
    // 0x1680d0: 0xe01821  addu        $v1, $a3, $zero
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_1680d4:
    // 0x1680d4: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x1680d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_1680d8:
    // 0x1680d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1680d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1680dc:
    // 0x1680dc: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1680dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
label_1680e0:
    // 0x1680e0: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x1680e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
label_1680e4:
    // 0x1680e4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1680e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1680e8:
    // 0x1680e8: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1680e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_1680ec:
    // 0x1680ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1680f0:
    if (ctx->pc == 0x1680F0u) {
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0xa0e00004  sb          $zero, 0x4($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1680F4u;
        goto label_1680f4;
    }
    ctx->pc = 0x1680ECu;
    {
        const bool branch_taken_0x1680ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0xa0e00004  sb          $zero, 0x4($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680ec) {
            ctx->pc = 0x1680C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1680c8;
        }
    }
    ctx->pc = 0x1680F4u;
label_1680f4:
    // 0x1680f4: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x1680f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
label_1680f8:
    // 0x1680f8: 0x3e00008  jr          $ra
label_1680fc:
    if (ctx->pc == 0x1680FCu) {
        ctx->pc = 0x1680FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F8u;
        // 0x1680fc: 0xaf8086ac  sw          $zero, -0x7954($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168100u;
        goto label_168100;
    }
    ctx->pc = 0x1680F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680F8u;
        // 0x1680fc: 0xaf8086ac  sw          $zero, -0x7954($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168100u;
label_168100:
    // 0x168100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_168104:
    // 0x168104: 0x248e0008  addiu       $t6, $a0, 0x8
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_168108:
    // 0x168108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16810c:
    // 0x16810c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16810cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168110:
    // 0x168110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168114:
    // 0x168114: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_168118:
    // 0x168118: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x168118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16811c:
    // 0x16811c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_168120:
    // 0x168120: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168124:
    // 0x168124: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_168128:
    // 0x168128: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x168128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16812c:
    // 0x16812c: 0x10000052  b           . + 4 + (0x52 << 2)
label_168130:
    if (ctx->pc == 0x168130u) {
        ctx->pc = 0x168130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16812Cu;
        // 0x168130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168134u;
        goto label_168134;
    }
    ctx->pc = 0x16812Cu;
    {
        const bool branch_taken_0x16812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16812Cu;
        // 0x168130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16812c) {
            ctx->pc = 0x168278u;
            { ctx->pc = 0x168278; return; }
        }
    }
    ctx->pc = 0x168134u;
label_168134:
    // 0x168134: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x168134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_168138:
    // 0x168138: 0xf6a02  srl         $t5, $t7, 8
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
label_16813c:
    // 0x16813c: 0xf3b42  srl         $a3, $t7, 13
    ctx->pc = 0x16813cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), 13));
label_168140:
    // 0x168140: 0x31b8001f  andi        $t8, $t5, 0x1F
    ctx->pc = 0x168140u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31);
label_168144:
    // 0x168144: 0x30f90007  andi        $t9, $a3, 0x7
    ctx->pc = 0x168144u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_168148:
    // 0x168148: 0xf6c82  srl         $t5, $t7, 18
    ctx->pc = 0x168148u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 18));
label_16814c:
    // 0x16814c: 0x31e700ff  andi        $a3, $t7, 0xFF
    ctx->pc = 0x16814cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
label_168150:
    // 0x168150: 0x31af3fff  andi        $t7, $t5, 0x3FFF
    ctx->pc = 0x168150u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16383);
label_168154:
    // 0x168154: 0x14e00044  bnez        $a3, . + 4 + (0x44 << 2)
label_168158:
    if (ctx->pc == 0x168158u) {
        ctx->pc = 0x168158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168154u;
        // 0x168158: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16815Cu;
        goto label_16815c;
    }
    ctx->pc = 0x168154u;
    {
        const bool branch_taken_0x168154 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168154u;
        // 0x168158: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168154) {
            ctx->pc = 0x168268u;
            { ctx->pc = 0x168268; return; }
        }
    }
    ctx->pc = 0x16815Cu;
label_16815c:
    // 0x16815c: 0x2f070003  sltiu       $a3, $t8, 0x3
    ctx->pc = 0x16815cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_168160:
    // 0x168160: 0x14e00041  bnez        $a3, . + 4 + (0x41 << 2)
label_168164:
    if (ctx->pc == 0x168164u) {
        ctx->pc = 0x168164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168160u;
        // 0x168164: 0x2f010006  sltiu       $at, $t8, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168168u;
        goto label_168168;
    }
    ctx->pc = 0x168160u;
    {
        const bool branch_taken_0x168160 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x168164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168160u;
        // 0x168164: 0x2f010006  sltiu       $at, $t8, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168160) {
            ctx->pc = 0x168268u;
            { ctx->pc = 0x168268; return; }
        }
    }
    ctx->pc = 0x168168u;
label_168168:
    // 0x168168: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_16816c:
    if (ctx->pc == 0x16816Cu) {
        ctx->pc = 0x168170u;
        goto label_168170;
    }
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168168) {
            ctx->pc = 0x168268u;
            { ctx->pc = 0x168268; return; }
        }
    }
    ctx->pc = 0x168170u;
label_168170:
    // 0x168170: 0x17200004  bnez        $t9, . + 4 + (0x4 << 2)
label_168174:
    if (ctx->pc == 0x168174u) {
        ctx->pc = 0x168178u;
        goto label_168178;
    }
    ctx->pc = 0x168170u;
    {
        const bool branch_taken_0x168170 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x168170) {
            ctx->pc = 0x168184u;
            goto label_168184;
        }
    }
    ctx->pc = 0x168178u;
label_168178:
    // 0x168178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16817c:
    // 0x16817c: 0x10000026  b           . + 4 + (0x26 << 2)
label_168180:
    if (ctx->pc == 0x168180u) {
        ctx->pc = 0x168184u;
        goto label_168184;
    }
    ctx->pc = 0x16817Cu;
    {
        const bool branch_taken_0x16817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16817c) {
            ctx->pc = 0x168218u;
            { ctx->pc = 0x168218; return; }
        }
    }
    ctx->pc = 0x168184u;
label_168184:
    // 0x168184: 0x0  nop
    ctx->pc = 0x168184u;
    // NOP
label_168188:
    // 0x168188: 0x172c0003  bne         $t9, $t4, . + 4 + (0x3 << 2)
label_16818c:
    if (ctx->pc == 0x16818Cu) {
        ctx->pc = 0x168190u;
        goto label_168190;
    }
    ctx->pc = 0x168188u;
    {
        const bool branch_taken_0x168188 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 12));
        if (branch_taken_0x168188) {
            ctx->pc = 0x168198u;
            goto label_168198;
        }
    }
    ctx->pc = 0x168190u;
label_168190:
    // 0x168190: 0x10000021  b           . + 4 + (0x21 << 2)
label_168194:
    if (ctx->pc == 0x168194u) {
        ctx->pc = 0x168194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168190u;
        // 0x168194: 0xc5c00000  lwc1        $f0, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168198u;
        goto label_168198;
    }
    ctx->pc = 0x168190u;
    {
        const bool branch_taken_0x168190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168190u;
        // 0x168194: 0xc5c00000  lwc1        $f0, 0x0($t6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168190) {
            ctx->pc = 0x168218u;
            { ctx->pc = 0x168218; return; }
        }
    }
    ctx->pc = 0x168198u;
label_168198:
    // 0x168198: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16819c:
    // 0x16819c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x16819cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1681a0:
    // 0x1681a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1681a4:
    // 0x1681a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1681a8:
    if (ctx->pc == 0x1681A8u) {
        ctx->pc = 0x1681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681A4u;
        // 0x1681a8: 0x198880  sll         $s1, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1681ACu;
        goto label_1681ac;
    }
    ctx->pc = 0x1681A4u;
    {
        const bool branch_taken_0x1681a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681A4u;
        // 0x1681a8: 0x198880  sll         $s1, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681a4) {
            ctx->pc = 0x1681BCu;
            goto label_1681bc;
        }
    }
    ctx->pc = 0x1681ACu;
label_1681ac:
    // 0x1681ac: 0x0  nop
    ctx->pc = 0x1681acu;
    // NOP
label_1681b0:
    // 0x1681b0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1681b4:
    // 0x1681b4: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x1681b4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_1681b8:
    // 0x1681b8: 0x1b96821  addu        $t5, $t5, $t9
    ctx->pc = 0x1681b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_1681bc:
    // 0x1681bc: 0x0  nop
    ctx->pc = 0x1681bcu;
    // NOP
label_1681c0:
    // 0x1681c0: 0x1d03821  addu        $a3, $t6, $s0
    ctx->pc = 0x1681c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_1681c4:
    // 0x1681c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1681c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1681c8:
    // 0x1681c8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1681c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1681cc:
    // 0x1681cc: 0x0  nop
    ctx->pc = 0x1681ccu;
    // NOP
label_1681d0:
    // 0x1681d0: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_1681d4:
    if (ctx->pc == 0x1681D4u) {
        ctx->pc = 0x1681D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681D0u;
        // 0x1681d4: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1681D8u;
        goto label_1681d8;
    }
    ctx->pc = 0x1681D0u;
    {
        const bool branch_taken_0x1681d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1681D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681D0u;
        // 0x1681d4: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681d0) {
            ctx->pc = 0x1681ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1681ac;
        }
    }
    ctx->pc = 0x1681D8u;
label_1681d8:
    // 0x1681d8: 0x1c73821  addu        $a3, $t6, $a3
    ctx->pc = 0x1681d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_1681dc:
    // 0x1681dc: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x1681dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    ctx->pc = 0x1681e0u;
    return;
}
