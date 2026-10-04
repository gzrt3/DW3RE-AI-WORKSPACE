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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part241(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2109a8u: goto label_2109a8;
        case 0x2109acu: goto label_2109ac;
        case 0x2109b0u: goto label_2109b0;
        case 0x2109b4u: goto label_2109b4;
        case 0x2109b8u: goto label_2109b8;
        case 0x2109bcu: goto label_2109bc;
        case 0x2109c0u: goto label_2109c0;
        case 0x2109c4u: goto label_2109c4;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109ccu: goto label_2109cc;
        case 0x2109d0u: goto label_2109d0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109dcu: goto label_2109dc;
        case 0x2109e0u: goto label_2109e0;
        case 0x2109e4u: goto label_2109e4;
        case 0x2109e8u: goto label_2109e8;
        case 0x2109ecu: goto label_2109ec;
        case 0x2109f0u: goto label_2109f0;
        case 0x2109f4u: goto label_2109f4;
        case 0x2109f8u: goto label_2109f8;
        case 0x2109fcu: goto label_2109fc;
        case 0x210a00u: goto label_210a00;
        case 0x210a04u: goto label_210a04;
        case 0x210a08u: goto label_210a08;
        case 0x210a0cu: goto label_210a0c;
        case 0x210a10u: goto label_210a10;
        case 0x210a14u: goto label_210a14;
        case 0x210a18u: goto label_210a18;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b70u: goto label_210b70;
        case 0x210b74u: goto label_210b74;
        case 0x210b78u: goto label_210b78;
        case 0x210b7cu: goto label_210b7c;
        case 0x210b80u: goto label_210b80;
        case 0x210b84u: goto label_210b84;
        case 0x210b88u: goto label_210b88;
        case 0x210b8cu: goto label_210b8c;
        case 0x210b90u: goto label_210b90;
        case 0x210b94u: goto label_210b94;
        case 0x210b98u: goto label_210b98;
        case 0x210b9cu: goto label_210b9c;
        case 0x210ba0u: goto label_210ba0;
        case 0x210ba4u: goto label_210ba4;
        case 0x210ba8u: goto label_210ba8;
        case 0x210bacu: goto label_210bac;
        case 0x210bb0u: goto label_210bb0;
        case 0x210bb4u: goto label_210bb4;
        case 0x210bb8u: goto label_210bb8;
        case 0x210bbcu: goto label_210bbc;
        case 0x210bc0u: goto label_210bc0;
        case 0x210bc4u: goto label_210bc4;
        case 0x210bc8u: goto label_210bc8;
        case 0x210bccu: goto label_210bcc;
        case 0x210bd0u: goto label_210bd0;
        case 0x210bd4u: goto label_210bd4;
        case 0x210bd8u: goto label_210bd8;
        case 0x210bdcu: goto label_210bdc;
        case 0x210be0u: goto label_210be0;
        case 0x210be4u: goto label_210be4;
        case 0x210be8u: goto label_210be8;
        case 0x210becu: goto label_210bec;
        case 0x210bf0u: goto label_210bf0;
        case 0x210bf4u: goto label_210bf4;
        case 0x210bf8u: goto label_210bf8;
        case 0x210bfcu: goto label_210bfc;
        case 0x210c00u: goto label_210c00;
        case 0x210c04u: goto label_210c04;
        case 0x210c08u: goto label_210c08;
        case 0x210c0cu: goto label_210c0c;
        case 0x210c10u: goto label_210c10;
        case 0x210c14u: goto label_210c14;
        case 0x210c18u: goto label_210c18;
        case 0x210c1cu: goto label_210c1c;
        case 0x210c20u: goto label_210c20;
        case 0x210c24u: goto label_210c24;
        case 0x210c28u: goto label_210c28;
        case 0x210c2cu: goto label_210c2c;
        case 0x210c30u: goto label_210c30;
        case 0x210c34u: goto label_210c34;
        case 0x210c38u: goto label_210c38;
        case 0x210c3cu: goto label_210c3c;
        case 0x210c40u: goto label_210c40;
        case 0x210c44u: goto label_210c44;
        case 0x210c48u: goto label_210c48;
        case 0x210c4cu: goto label_210c4c;
        case 0x210c50u: goto label_210c50;
        case 0x210c54u: goto label_210c54;
        case 0x210c58u: goto label_210c58;
        case 0x210c5cu: goto label_210c5c;
        case 0x210c60u: goto label_210c60;
        case 0x210c64u: goto label_210c64;
        case 0x210c68u: goto label_210c68;
        case 0x210c6cu: goto label_210c6c;
        case 0x210c70u: goto label_210c70;
        case 0x210c74u: goto label_210c74;
        case 0x210c78u: goto label_210c78;
        case 0x210c7cu: goto label_210c7c;
        case 0x210c80u: goto label_210c80;
        case 0x210c84u: goto label_210c84;
        case 0x210c88u: goto label_210c88;
        case 0x210c8cu: goto label_210c8c;
        case 0x210c90u: goto label_210c90;
        case 0x210c94u: goto label_210c94;
        case 0x210c98u: goto label_210c98;
        case 0x210c9cu: goto label_210c9c;
        case 0x210ca0u: goto label_210ca0;
        case 0x210ca4u: goto label_210ca4;
        case 0x210ca8u: goto label_210ca8;
        case 0x210cacu: goto label_210cac;
        case 0x210cb0u: goto label_210cb0;
        case 0x210cb4u: goto label_210cb4;
        case 0x210cb8u: goto label_210cb8;
        case 0x210cbcu: goto label_210cbc;
        case 0x210cc0u: goto label_210cc0;
        case 0x210cc4u: goto label_210cc4;
        case 0x210cc8u: goto label_210cc8;
        case 0x210cccu: goto label_210ccc;
        case 0x210cd0u: goto label_210cd0;
        case 0x210cd4u: goto label_210cd4;
        case 0x210cd8u: goto label_210cd8;
        case 0x210cdcu: goto label_210cdc;
        case 0x210ce0u: goto label_210ce0;
        case 0x210ce4u: goto label_210ce4;
        case 0x210ce8u: goto label_210ce8;
        case 0x210cecu: goto label_210cec;
        case 0x210cf0u: goto label_210cf0;
        case 0x210cf4u: goto label_210cf4;
        case 0x210cf8u: goto label_210cf8;
        case 0x210cfcu: goto label_210cfc;
        case 0x210d00u: goto label_210d00;
        case 0x210d04u: goto label_210d04;
        case 0x210d08u: goto label_210d08;
        case 0x210d0cu: goto label_210d0c;
        case 0x210d10u: goto label_210d10;
        case 0x210d14u: goto label_210d14;
        case 0x210d18u: goto label_210d18;
        case 0x210d1cu: goto label_210d1c;
        case 0x210d20u: goto label_210d20;
        case 0x210d24u: goto label_210d24;
        case 0x210d28u: goto label_210d28;
        case 0x210d2cu: goto label_210d2c;
        case 0x210d30u: goto label_210d30;
        case 0x210d34u: goto label_210d34;
        case 0x210d38u: goto label_210d38;
        case 0x210d3cu: goto label_210d3c;
        case 0x210d40u: goto label_210d40;
        case 0x210d44u: goto label_210d44;
        case 0x210d48u: goto label_210d48;
        case 0x210d4cu: goto label_210d4c;
        case 0x210d50u: goto label_210d50;
        case 0x210d54u: goto label_210d54;
        case 0x210d58u: goto label_210d58;
        case 0x210d5cu: goto label_210d5c;
        case 0x210d60u: goto label_210d60;
        case 0x210d64u: goto label_210d64;
        case 0x210d68u: goto label_210d68;
        case 0x210d6cu: goto label_210d6c;
        case 0x210d70u: goto label_210d70;
        case 0x210d74u: goto label_210d74;
        case 0x210d78u: goto label_210d78;
        case 0x210d7cu: goto label_210d7c;
        case 0x210d80u: goto label_210d80;
        case 0x210d84u: goto label_210d84;
        case 0x210d88u: goto label_210d88;
        case 0x210d8cu: goto label_210d8c;
        case 0x210d90u: goto label_210d90;
        case 0x210d94u: goto label_210d94;
        case 0x210d98u: goto label_210d98;
        case 0x210d9cu: goto label_210d9c;
        case 0x210da0u: goto label_210da0;
        case 0x210da4u: goto label_210da4;
        case 0x210da8u: goto label_210da8;
        case 0x210dacu: goto label_210dac;
        case 0x210db0u: goto label_210db0;
        case 0x210db4u: goto label_210db4;
        case 0x210db8u: goto label_210db8;
        case 0x210dbcu: goto label_210dbc;
        case 0x210dc0u: goto label_210dc0;
        case 0x210dc4u: goto label_210dc4;
        case 0x210dc8u: goto label_210dc8;
        case 0x210dccu: goto label_210dcc;
        case 0x210dd0u: goto label_210dd0;
        case 0x210dd4u: goto label_210dd4;
        case 0x210dd8u: goto label_210dd8;
        case 0x210ddcu: goto label_210ddc;
        case 0x210de0u: goto label_210de0;
        case 0x210de4u: goto label_210de4;
        case 0x210de8u: goto label_210de8;
        case 0x210decu: goto label_210dec;
        case 0x210df0u: goto label_210df0;
        case 0x210df4u: goto label_210df4;
        case 0x210df8u: goto label_210df8;
        case 0x210dfcu: goto label_210dfc;
        case 0x210e00u: goto label_210e00;
        case 0x210e04u: goto label_210e04;
        case 0x210e08u: goto label_210e08;
        case 0x210e0cu: goto label_210e0c;
        case 0x210e10u: goto label_210e10;
        case 0x210e14u: goto label_210e14;
        case 0x210e18u: goto label_210e18;
        case 0x210e1cu: goto label_210e1c;
        case 0x210e20u: goto label_210e20;
        case 0x210e24u: goto label_210e24;
        case 0x210e28u: goto label_210e28;
        case 0x210e2cu: goto label_210e2c;
        case 0x210e30u: goto label_210e30;
        case 0x210e34u: goto label_210e34;
        case 0x210e38u: goto label_210e38;
        case 0x210e3cu: goto label_210e3c;
        case 0x210e40u: goto label_210e40;
        case 0x210e44u: goto label_210e44;
        case 0x210e48u: goto label_210e48;
        case 0x210e4cu: goto label_210e4c;
        case 0x210e50u: goto label_210e50;
        case 0x210e54u: goto label_210e54;
        case 0x210e58u: goto label_210e58;
        case 0x210e5cu: goto label_210e5c;
        case 0x210e60u: goto label_210e60;
        case 0x210e64u: goto label_210e64;
        case 0x210e68u: goto label_210e68;
        case 0x210e6cu: goto label_210e6c;
        case 0x210e70u: goto label_210e70;
        case 0x210e74u: goto label_210e74;
        case 0x210e78u: goto label_210e78;
        case 0x210e7cu: goto label_210e7c;
        case 0x210e80u: goto label_210e80;
        case 0x210e84u: goto label_210e84;
        case 0x210e88u: goto label_210e88;
        case 0x210e8cu: goto label_210e8c;
        case 0x210e90u: goto label_210e90;
        case 0x210e94u: goto label_210e94;
        case 0x210e98u: goto label_210e98;
        case 0x210e9cu: goto label_210e9c;
        case 0x210ea0u: goto label_210ea0;
        case 0x210ea4u: goto label_210ea4;
        case 0x210ea8u: goto label_210ea8;
        case 0x210eacu: goto label_210eac;
        case 0x210eb0u: goto label_210eb0;
        case 0x210eb4u: goto label_210eb4;
        case 0x210eb8u: goto label_210eb8;
        case 0x210ebcu: goto label_210ebc;
        case 0x210ec0u: goto label_210ec0;
        case 0x210ec4u: goto label_210ec4;
        case 0x210ec8u: goto label_210ec8;
        case 0x210eccu: goto label_210ecc;
        case 0x210ed0u: goto label_210ed0;
        case 0x210ed4u: goto label_210ed4;
        case 0x210ed8u: goto label_210ed8;
        case 0x210edcu: goto label_210edc;
        case 0x210ee0u: goto label_210ee0;
        case 0x210ee4u: goto label_210ee4;
        case 0x210ee8u: goto label_210ee8;
        case 0x210eecu: goto label_210eec;
        case 0x210ef0u: goto label_210ef0;
        case 0x210ef4u: goto label_210ef4;
        case 0x210ef8u: goto label_210ef8;
        case 0x210efcu: goto label_210efc;
        case 0x210f00u: goto label_210f00;
        case 0x210f04u: goto label_210f04;
        case 0x210f08u: goto label_210f08;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f10u: goto label_210f10;
        case 0x210f14u: goto label_210f14;
        case 0x210f18u: goto label_210f18;
        case 0x210f1cu: goto label_210f1c;
        case 0x210f20u: goto label_210f20;
        case 0x210f24u: goto label_210f24;
        case 0x210f28u: goto label_210f28;
        case 0x210f2cu: goto label_210f2c;
        case 0x210f30u: goto label_210f30;
        case 0x210f34u: goto label_210f34;
        case 0x210f38u: goto label_210f38;
        case 0x210f3cu: goto label_210f3c;
        case 0x210f40u: goto label_210f40;
        case 0x210f44u: goto label_210f44;
        case 0x210f48u: goto label_210f48;
        case 0x210f4cu: goto label_210f4c;
        case 0x210f50u: goto label_210f50;
        case 0x210f54u: goto label_210f54;
        case 0x210f58u: goto label_210f58;
        case 0x210f5cu: goto label_210f5c;
        case 0x210f60u: goto label_210f60;
        case 0x210f64u: goto label_210f64;
        case 0x210f68u: goto label_210f68;
        case 0x210f6cu: goto label_210f6c;
        case 0x210f70u: goto label_210f70;
        case 0x210f74u: goto label_210f74;
        case 0x210f78u: goto label_210f78;
        case 0x210f7cu: goto label_210f7c;
        case 0x210f80u: goto label_210f80;
        case 0x210f84u: goto label_210f84;
        case 0x210f88u: goto label_210f88;
        case 0x210f8cu: goto label_210f8c;
        case 0x210f90u: goto label_210f90;
        case 0x210f94u: goto label_210f94;
        case 0x210f98u: goto label_210f98;
        case 0x210f9cu: goto label_210f9c;
        case 0x210fa0u: goto label_210fa0;
        case 0x210fa4u: goto label_210fa4;
        case 0x210fa8u: goto label_210fa8;
        case 0x210facu: goto label_210fac;
        case 0x210fb0u: goto label_210fb0;
        case 0x210fb4u: goto label_210fb4;
        case 0x210fb8u: goto label_210fb8;
        case 0x210fbcu: goto label_210fbc;
        case 0x210fc0u: goto label_210fc0;
        case 0x210fc4u: goto label_210fc4;
        case 0x210fc8u: goto label_210fc8;
        case 0x210fccu: goto label_210fcc;
        case 0x210fd0u: goto label_210fd0;
        case 0x210fd4u: goto label_210fd4;
        case 0x210fd8u: goto label_210fd8;
        case 0x210fdcu: goto label_210fdc;
        case 0x210fe0u: goto label_210fe0;
        case 0x210fe4u: goto label_210fe4;
        case 0x210fe8u: goto label_210fe8;
        case 0x210fecu: goto label_210fec;
        case 0x210ff0u: goto label_210ff0;
        case 0x210ff4u: goto label_210ff4;
        case 0x210ff8u: goto label_210ff8;
        case 0x210ffcu: goto label_210ffc;
        case 0x211000u: goto label_211000;
        case 0x211004u: goto label_211004;
        case 0x211008u: goto label_211008;
        case 0x21100cu: goto label_21100c;
        case 0x211010u: goto label_211010;
        case 0x211014u: goto label_211014;
        case 0x211018u: goto label_211018;
        case 0x21101cu: goto label_21101c;
        case 0x211020u: goto label_211020;
        case 0x211024u: goto label_211024;
        case 0x211028u: goto label_211028;
        case 0x21102cu: goto label_21102c;
        case 0x211030u: goto label_211030;
        case 0x211034u: goto label_211034;
        case 0x211038u: goto label_211038;
        case 0x21103cu: goto label_21103c;
        case 0x211040u: goto label_211040;
        case 0x211044u: goto label_211044;
        case 0x211048u: goto label_211048;
        case 0x21104cu: goto label_21104c;
        case 0x211050u: goto label_211050;
        case 0x211054u: goto label_211054;
        case 0x211058u: goto label_211058;
        case 0x21105cu: goto label_21105c;
        case 0x211060u: goto label_211060;
        case 0x211064u: goto label_211064;
        case 0x211068u: goto label_211068;
        case 0x21106cu: goto label_21106c;
        case 0x211070u: goto label_211070;
        case 0x211074u: goto label_211074;
        case 0x211078u: goto label_211078;
        case 0x21107cu: goto label_21107c;
        case 0x211080u: goto label_211080;
        case 0x211084u: goto label_211084;
        case 0x211088u: goto label_211088;
        case 0x21108cu: goto label_21108c;
        case 0x211090u: goto label_211090;
        case 0x211094u: goto label_211094;
        case 0x211098u: goto label_211098;
        case 0x21109cu: goto label_21109c;
        case 0x2110a0u: goto label_2110a0;
        case 0x2110a4u: goto label_2110a4;
        case 0x2110a8u: goto label_2110a8;
        case 0x2110acu: goto label_2110ac;
        case 0x2110b0u: goto label_2110b0;
        case 0x2110b4u: goto label_2110b4;
        case 0x2110b8u: goto label_2110b8;
        case 0x2110bcu: goto label_2110bc;
        case 0x2110c0u: goto label_2110c0;
        case 0x2110c4u: goto label_2110c4;
        case 0x2110c8u: goto label_2110c8;
        case 0x2110ccu: goto label_2110cc;
        case 0x2110d0u: goto label_2110d0;
        case 0x2110d4u: goto label_2110d4;
        case 0x2110d8u: goto label_2110d8;
        case 0x2110dcu: goto label_2110dc;
        case 0x2110e0u: goto label_2110e0;
        case 0x2110e4u: goto label_2110e4;
        case 0x2110e8u: goto label_2110e8;
        case 0x2110ecu: goto label_2110ec;
        case 0x2110f0u: goto label_2110f0;
        case 0x2110f4u: goto label_2110f4;
        case 0x2110f8u: goto label_2110f8;
        case 0x2110fcu: goto label_2110fc;
        case 0x211100u: goto label_211100;
        case 0x211104u: goto label_211104;
        case 0x211108u: goto label_211108;
        case 0x21110cu: goto label_21110c;
        case 0x211110u: goto label_211110;
        case 0x211114u: goto label_211114;
        case 0x211118u: goto label_211118;
        case 0x21111cu: goto label_21111c;
        case 0x211120u: goto label_211120;
        case 0x211124u: goto label_211124;
        case 0x211128u: goto label_211128;
        case 0x21112cu: goto label_21112c;
        case 0x211130u: goto label_211130;
        case 0x211134u: goto label_211134;
        case 0x211138u: goto label_211138;
        case 0x21113cu: goto label_21113c;
        case 0x211140u: goto label_211140;
        case 0x211144u: goto label_211144;
        case 0x211148u: goto label_211148;
        case 0x21114cu: goto label_21114c;
        case 0x211150u: goto label_211150;
        case 0x211154u: goto label_211154;
        case 0x211158u: goto label_211158;
        case 0x21115cu: goto label_21115c;
        case 0x211160u: goto label_211160;
        case 0x211164u: goto label_211164;
        case 0x211168u: goto label_211168;
        case 0x21116cu: goto label_21116c;
        case 0x211170u: goto label_211170;
        case 0x211174u: goto label_211174;
        default: return;
    }

label_2109a8:
    // 0x2109a8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2109ac:
    if (ctx->pc == 0x2109ACu) {
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109B0u;
        goto label_2109b0;
    }
    ctx->pc = 0x2109A8u;
    {
        const bool branch_taken_0x2109a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109a8) {
            ctx->pc = 0x210984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x210984; return; }
        }
    }
    ctx->pc = 0x2109B0u;
label_2109b0:
    // 0x2109b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2109b4:
    // 0x2109b4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2109b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2109b8:
    // 0x2109b8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2109bc:
    if (ctx->pc == 0x2109BCu) {
        ctx->pc = 0x2109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B8u;
        // 0x2109bc: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109C0u;
        goto label_2109c0;
    }
    ctx->pc = 0x2109B8u;
    {
        const bool branch_taken_0x2109b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B8u;
        // 0x2109bc: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109b8) {
            ctx->pc = 0x21097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21097c; return; }
        }
    }
    ctx->pc = 0x2109C0u;
label_2109c0:
    // 0x2109c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109c4:
    // 0x2109c4: 0x260500b8  addiu       $a1, $s0, 0xB8
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_2109c8:
    // 0x2109c8: 0x260f809  jalr        $s3
label_2109cc:
    if (ctx->pc == 0x2109CCu) {
        ctx->pc = 0x2109CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109C8u;
        // 0x2109cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109D0u;
        goto label_2109d0;
    }
    ctx->pc = 0x2109C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2109D0u);
        ctx->pc = 0x2109CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109C8u;
        // 0x2109cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109C8u, 0x2109D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2109D0u;
label_2109d0:
    // 0x2109d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109d4:
    // 0x2109d4: 0x260500bc  addiu       $a1, $s0, 0xBC
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
label_2109d8:
    // 0x2109d8: 0x260f809  jalr        $s3
label_2109dc:
    if (ctx->pc == 0x2109DCu) {
        ctx->pc = 0x2109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D8u;
        // 0x2109dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109E0u;
        goto label_2109e0;
    }
    ctx->pc = 0x2109D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2109E0u);
        ctx->pc = 0x2109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D8u;
        // 0x2109dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109D8u, 0x2109E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2109E0u;
label_2109e0:
    // 0x2109e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2109e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109e4:
    // 0x2109e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2109e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109e8:
    // 0x2109e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2109e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109ec:
    // 0x2109ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2109ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109f0:
    // 0x2109f0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2109f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2109f4:
    // 0x2109f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2109f8:
    // 0x2109f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109fc:
    // 0x2109fc: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x2109fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_210a00:
    // 0x210a00: 0x260f809  jalr        $s3
label_210a04:
    if (ctx->pc == 0x210A04u) {
        ctx->pc = 0x210A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A00u;
        // 0x210a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A08u;
        goto label_210a08;
    }
    ctx->pc = 0x210A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210A08u);
        ctx->pc = 0x210A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A00u;
        // 0x210a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A00u, 0x210A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210A08u;
label_210a08:
    // 0x210a08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x210a08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_210a0c:
    // 0x210a0c: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x210a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_210a10:
    // 0x210a10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_210a14:
    if (ctx->pc == 0x210A14u) {
        ctx->pc = 0x210A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A10u;
        // 0x210a14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A18u;
        goto label_210a18;
    }
    ctx->pc = 0x210A10u;
    {
        const bool branch_taken_0x210a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A10u;
        // 0x210a14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a10) {
            ctx->pc = 0x2109F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109f0;
        }
    }
    ctx->pc = 0x210A18u;
label_210a18:
    // 0x210a18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_210a1c:
    // 0x210a1c: 0x2a83000d  slti        $v1, $s4, 0xD
    ctx->pc = 0x210a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
label_210a20:
    // 0x210a20: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_210a24:
    if (ctx->pc == 0x210A24u) {
        ctx->pc = 0x210A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A20u;
        // 0x210a24: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A28u;
        goto label_210a28;
    }
    ctx->pc = 0x210A20u;
    {
        const bool branch_taken_0x210a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A20u;
        // 0x210a24: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a20) {
            ctx->pc = 0x2109E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109e8;
        }
    }
    ctx->pc = 0x210A28u;
label_210a28:
    // 0x210a28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x210a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_210a2c:
    // 0x210a2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x210a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210a30:
    // 0x210a30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x210a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210a34:
    // 0x210a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210a38:
    // 0x210a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210a3c:
    // 0x210a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210a40:
    // 0x210a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210a44:
    // 0x210a44: 0x3e00008  jr          $ra
label_210a48:
    if (ctx->pc == 0x210A48u) {
        ctx->pc = 0x210A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A44u;
        // 0x210a48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A4Cu;
        goto label_210a4c;
    }
    ctx->pc = 0x210A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A44u;
        // 0x210a48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210A4Cu;
label_210a4c:
    // 0x210a4c: 0x0  nop
    ctx->pc = 0x210a4cu;
    // NOP
label_210a50:
    // 0x210a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_210a54:
    // 0x210a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_210a58:
    // 0x210a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210a5c:
    // 0x210a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210a60:
    // 0x210a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210a64:
    // 0x210a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_210a68:
    // 0x210a68: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210a6c:
    if (ctx->pc == 0x210A6Cu) {
        ctx->pc = 0x210A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A68u;
        // 0x210a6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A70u;
        goto label_210a70;
    }
    ctx->pc = 0x210A68u;
    {
        const bool branch_taken_0x210a68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A68u;
        // 0x210a6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a68) {
            ctx->pc = 0x210A7Cu;
            goto label_210a7c;
        }
    }
    ctx->pc = 0x210A70u;
label_210a70:
    // 0x210a70: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210a70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210a74:
    // 0x210a74: 0x10000003  b           . + 4 + (0x3 << 2)
label_210a78:
    if (ctx->pc == 0x210A78u) {
        ctx->pc = 0x210A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A74u;
        // 0x210a78: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A7Cu;
        goto label_210a7c;
    }
    ctx->pc = 0x210A74u;
    {
        const bool branch_taken_0x210a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A74u;
        // 0x210a78: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a74) {
            ctx->pc = 0x210A84u;
            goto label_210a84;
        }
    }
    ctx->pc = 0x210A7Cu;
label_210a7c:
    // 0x210a7c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210a80:
    // 0x210a80: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210a84:
    // 0x210a84: 0x26120370  addiu       $s2, $s0, 0x370
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_210a88:
    // 0x210a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a8c:
    // 0x210a8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210a90:
    // 0x210a90: 0x260f809  jalr        $s3
label_210a94:
    if (ctx->pc == 0x210A94u) {
        ctx->pc = 0x210A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A90u;
        // 0x210a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A98u;
        goto label_210a98;
    }
    ctx->pc = 0x210A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210A98u);
        ctx->pc = 0x210A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A90u;
        // 0x210a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A90u, 0x210A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210A98u;
label_210a98:
    // 0x210a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210a9c:
    // 0x210a9c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x210a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_210aa0:
    // 0x210aa0: 0x260f809  jalr        $s3
label_210aa4:
    if (ctx->pc == 0x210AA4u) {
        ctx->pc = 0x210AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AA0u;
        // 0x210aa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AA8u;
        goto label_210aa8;
    }
    ctx->pc = 0x210AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AA8u);
        ctx->pc = 0x210AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AA0u;
        // 0x210aa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AA0u, 0x210AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AA8u;
label_210aa8:
    // 0x210aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210aac:
    // 0x210aac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210ab0:
    // 0x210ab0: 0x2a2202b2  slti        $v0, $s1, 0x2B2
    ctx->pc = 0x210ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)690) ? 1 : 0);
label_210ab4:
    // 0x210ab4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_210ab8:
    if (ctx->pc == 0x210AB8u) {
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ABCu;
        goto label_210abc;
    }
    ctx->pc = 0x210AB4u;
    {
        const bool branch_taken_0x210ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ab4) {
            ctx->pc = 0x210A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210a8c;
        }
    }
    ctx->pc = 0x210ABCu;
label_210abc:
    // 0x210abc: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x210abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_210ac0:
    // 0x210ac0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210ac4:
    // 0x210ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210ac8:
    // 0x210ac8: 0x260f809  jalr        $s3
label_210acc:
    if (ctx->pc == 0x210ACCu) {
        ctx->pc = 0x210ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AC8u;
        // 0x210acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AD0u;
        goto label_210ad0;
    }
    ctx->pc = 0x210AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AD0u);
        ctx->pc = 0x210ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AC8u;
        // 0x210acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AC8u, 0x210AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AD0u;
label_210ad0:
    // 0x210ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ad4:
    // 0x210ad4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x210ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_210ad8:
    // 0x210ad8: 0x260f809  jalr        $s3
label_210adc:
    if (ctx->pc == 0x210ADCu) {
        ctx->pc = 0x210ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD8u;
        // 0x210adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AE0u;
        goto label_210ae0;
    }
    ctx->pc = 0x210AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AE0u);
        ctx->pc = 0x210ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD8u;
        // 0x210adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AD8u, 0x210AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AE0u;
label_210ae0:
    // 0x210ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ae4:
    // 0x210ae4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210ae8:
    // 0x210ae8: 0x2a42003c  slti        $v0, $s2, 0x3C
    ctx->pc = 0x210ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
label_210aec:
    // 0x210aec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_210af0:
    if (ctx->pc == 0x210AF0u) {
        ctx->pc = 0x210AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AECu;
        // 0x210af0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AF4u;
        goto label_210af4;
    }
    ctx->pc = 0x210AECu;
    {
        const bool branch_taken_0x210aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AECu;
        // 0x210af0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210aec) {
            ctx->pc = 0x210AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210ac4;
        }
    }
    ctx->pc = 0x210AF4u;
label_210af4:
    // 0x210af4: 0x26050344  addiu       $a1, $s0, 0x344
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
label_210af8:
    // 0x210af8: 0x260f809  jalr        $s3
label_210afc:
    if (ctx->pc == 0x210AFCu) {
        ctx->pc = 0x210AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AF8u;
        // 0x210afc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B00u;
        goto label_210b00;
    }
    ctx->pc = 0x210AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B00u);
        ctx->pc = 0x210AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AF8u;
        // 0x210afc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AF8u, 0x210B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B00u;
label_210b00:
    // 0x210b00: 0x26050348  addiu       $a1, $s0, 0x348
    ctx->pc = 0x210b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
label_210b04:
    // 0x210b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210b08:
    // 0x210b08: 0x260f809  jalr        $s3
label_210b0c:
    if (ctx->pc == 0x210B0Cu) {
        ctx->pc = 0x210B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B08u;
        // 0x210b0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B10u;
        goto label_210b10;
    }
    ctx->pc = 0x210B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B10u);
        ctx->pc = 0x210B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B08u;
        // 0x210b0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B08u, 0x210B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B10u;
label_210b10:
    // 0x210b10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_210b14:
    // 0x210b14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210b18:
    // 0x210b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210b1c:
    // 0x210b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210b20:
    // 0x210b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210b24:
    // 0x210b24: 0x3e00008  jr          $ra
label_210b28:
    if (ctx->pc == 0x210B28u) {
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B2Cu;
        goto label_210b2c;
    }
    ctx->pc = 0x210B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210B2Cu;
label_210b2c:
    // 0x210b2c: 0x0  nop
    ctx->pc = 0x210b2cu;
    // NOP
label_210b30:
    // 0x210b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_210b34:
    // 0x210b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_210b38:
    // 0x210b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210b3c:
    // 0x210b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210b40:
    // 0x210b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210b44:
    // 0x210b44: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210b48:
    if (ctx->pc == 0x210B48u) {
        ctx->pc = 0x210B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B44u;
        // 0x210b48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B4Cu;
        goto label_210b4c;
    }
    ctx->pc = 0x210B44u;
    {
        const bool branch_taken_0x210b44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B44u;
        // 0x210b48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b44) {
            ctx->pc = 0x210B58u;
            goto label_210b58;
        }
    }
    ctx->pc = 0x210B4Cu;
label_210b4c:
    // 0x210b4c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210b50:
    // 0x210b50: 0x10000003  b           . + 4 + (0x3 << 2)
label_210b54:
    if (ctx->pc == 0x210B54u) {
        ctx->pc = 0x210B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B50u;
        // 0x210b54: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B58u;
        goto label_210b58;
    }
    ctx->pc = 0x210B50u;
    {
        const bool branch_taken_0x210b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B50u;
        // 0x210b54: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b50) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210b5c:
    // 0x210b5c: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210b60:
    // 0x210b60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210b64:
    // 0x210b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b68:
    // 0x210b68: 0x342135e8  ori         $at, $at, 0x35E8
    ctx->pc = 0x210b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13800);
label_210b6c:
    // 0x210b6c: 0xa19021  addu        $s2, $a1, $at
    ctx->pc = 0x210b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_210b70:
    // 0x210b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210b74:
    // 0x210b74: 0x260f809  jalr        $s3
label_210b78:
    if (ctx->pc == 0x210B78u) {
        ctx->pc = 0x210B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B74u;
        // 0x210b78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B7Cu;
        goto label_210b7c;
    }
    ctx->pc = 0x210B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B7Cu);
        ctx->pc = 0x210B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B74u;
        // 0x210b78: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B74u, 0x210B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B7Cu;
label_210b7c:
    // 0x210b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210b80:
    // 0x210b80: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x210b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_210b84:
    // 0x210b84: 0x260f809  jalr        $s3
label_210b88:
    if (ctx->pc == 0x210B88u) {
        ctx->pc = 0x210B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B84u;
        // 0x210b88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B8Cu;
        goto label_210b8c;
    }
    ctx->pc = 0x210B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B8Cu);
        ctx->pc = 0x210B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B84u;
        // 0x210b88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B84u, 0x210B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B8Cu;
label_210b8c:
    // 0x210b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210b90:
    // 0x210b90: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_210b94:
    // 0x210b94: 0x260f809  jalr        $s3
label_210b98:
    if (ctx->pc == 0x210B98u) {
        ctx->pc = 0x210B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B94u;
        // 0x210b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B9Cu;
        goto label_210b9c;
    }
    ctx->pc = 0x210B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B9Cu);
        ctx->pc = 0x210B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B94u;
        // 0x210b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B94u, 0x210B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B9Cu;
label_210b9c:
    // 0x210b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ba0:
    // 0x210ba0: 0x26450005  addiu       $a1, $s2, 0x5
    ctx->pc = 0x210ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_210ba4:
    // 0x210ba4: 0x260f809  jalr        $s3
label_210ba8:
    if (ctx->pc == 0x210BA8u) {
        ctx->pc = 0x210BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BA4u;
        // 0x210ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BACu;
        goto label_210bac;
    }
    ctx->pc = 0x210BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BACu);
        ctx->pc = 0x210BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BA4u;
        // 0x210ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BA4u, 0x210BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BACu;
label_210bac:
    // 0x210bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bb0:
    // 0x210bb0: 0x26450006  addiu       $a1, $s2, 0x6
    ctx->pc = 0x210bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
label_210bb4:
    // 0x210bb4: 0x260f809  jalr        $s3
label_210bb8:
    if (ctx->pc == 0x210BB8u) {
        ctx->pc = 0x210BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB4u;
        // 0x210bb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BBCu;
        goto label_210bbc;
    }
    ctx->pc = 0x210BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BBCu);
        ctx->pc = 0x210BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB4u;
        // 0x210bb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BB4u, 0x210BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BBCu;
label_210bbc:
    // 0x210bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210bc0:
    // 0x210bc0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x210bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_210bc4:
    // 0x210bc4: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_210bc8:
    // 0x210bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bcc:
    // 0x210bcc: 0x260f809  jalr        $s3
label_210bd0:
    if (ctx->pc == 0x210BD0u) {
        ctx->pc = 0x210BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BCCu;
        // 0x210bd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BD4u;
        goto label_210bd4;
    }
    ctx->pc = 0x210BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BD4u);
        ctx->pc = 0x210BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BCCu;
        // 0x210bd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BCCu, 0x210BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BD4u;
label_210bd4:
    // 0x210bd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210bd8:
    // 0x210bd8: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_210bdc:
    // 0x210bdc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_210be0:
    if (ctx->pc == 0x210BE0u) {
        ctx->pc = 0x210BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BDCu;
        // 0x210be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BE4u;
        goto label_210be4;
    }
    ctx->pc = 0x210BDCu;
    {
        const bool branch_taken_0x210bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BDCu;
        // 0x210be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bdc) {
            ctx->pc = 0x210BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210bc0;
        }
    }
    ctx->pc = 0x210BE4u;
label_210be4:
    // 0x210be4: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x210be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_210be8:
    // 0x210be8: 0x260f809  jalr        $s3
label_210bec:
    if (ctx->pc == 0x210BECu) {
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE8u;
        // 0x210bec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BF0u;
        goto label_210bf0;
    }
    ctx->pc = 0x210BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210BF0u);
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE8u;
        // 0x210bec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BE8u, 0x210BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210BF0u;
label_210bf0:
    // 0x210bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bf4:
    // 0x210bf4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_210bf8:
    // 0x210bf8: 0x260f809  jalr        $s3
label_210bfc:
    if (ctx->pc == 0x210BFCu) {
        ctx->pc = 0x210BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF8u;
        // 0x210bfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C00u;
        goto label_210c00;
    }
    ctx->pc = 0x210BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210C00u);
        ctx->pc = 0x210BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF8u;
        // 0x210bfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BF8u, 0x210C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C00u;
label_210c00:
    // 0x210c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c04:
    // 0x210c04: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_210c08:
    // 0x210c08: 0x260f809  jalr        $s3
label_210c0c:
    if (ctx->pc == 0x210C0Cu) {
        ctx->pc = 0x210C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C08u;
        // 0x210c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C10u;
        goto label_210c10;
    }
    ctx->pc = 0x210C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210C10u);
        ctx->pc = 0x210C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C08u;
        // 0x210c0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C08u, 0x210C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C10u;
label_210c10:
    // 0x210c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c14:
    // 0x210c14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210c18:
    // 0x210c18: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x210c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_210c1c:
    // 0x210c1c: 0x2484000b  addiu       $a0, $a0, 0xB
    ctx->pc = 0x210c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
label_210c20:
    // 0x210c20: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_210c24:
    if (ctx->pc == 0x210C24u) {
        ctx->pc = 0x210C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C20u;
        // 0x210c24: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C28u;
        goto label_210c28;
    }
    ctx->pc = 0x210C20u;
    {
        const bool branch_taken_0x210c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C20u;
        // 0x210c24: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c20) {
            ctx->pc = 0x210B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b70;
        }
    }
    ctx->pc = 0x210C28u;
label_210c28:
    // 0x210c28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_210c2c:
    // 0x210c2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x210c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210c30:
    // 0x210c30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210c34:
    // 0x210c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210c38:
    // 0x210c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210c3c:
    // 0x210c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210c40:
    // 0x210c40: 0x3e00008  jr          $ra
label_210c44:
    if (ctx->pc == 0x210C44u) {
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C40u;
        // 0x210c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C48u;
        goto label_210c48;
    }
    ctx->pc = 0x210C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C40u;
        // 0x210c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C48u;
label_210c48:
    // 0x210c48: 0x0  nop
    ctx->pc = 0x210c48u;
    // NOP
label_210c4c:
    // 0x210c4c: 0x0  nop
    ctx->pc = 0x210c4cu;
    // NOP
label_210c50:
    // 0x210c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_210c54:
    // 0x210c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x210c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_210c58:
    // 0x210c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210c5c:
    // 0x210c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210c60:
    // 0x210c60: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210c64:
    if (ctx->pc == 0x210C64u) {
        ctx->pc = 0x210C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C60u;
        // 0x210c64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C68u;
        goto label_210c68;
    }
    ctx->pc = 0x210C60u;
    {
        const bool branch_taken_0x210c60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C60u;
        // 0x210c64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c60) {
            ctx->pc = 0x210C74u;
            goto label_210c74;
        }
    }
    ctx->pc = 0x210C68u;
label_210c68:
    // 0x210c68: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210c68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210c6c:
    // 0x210c6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_210c70:
    if (ctx->pc == 0x210C70u) {
        ctx->pc = 0x210C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C6Cu;
        // 0x210c70: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C74u;
        goto label_210c74;
    }
    ctx->pc = 0x210C6Cu;
    {
        const bool branch_taken_0x210c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C6Cu;
        // 0x210c70: 0x26522380  addiu       $s2, $s2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c6c) {
            ctx->pc = 0x210C7Cu;
            goto label_210c7c;
        }
    }
    ctx->pc = 0x210C74u;
label_210c74:
    // 0x210c74: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
label_210c78:
    // 0x210c78: 0x265223c0  addiu       $s2, $s2, 0x23C0
    ctx->pc = 0x210c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9152));
label_210c7c:
    // 0x210c7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210c80:
    // 0x210c80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210c84:
    // 0x210c84: 0x34214e60  ori         $at, $at, 0x4E60
    ctx->pc = 0x210c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20064);
label_210c88:
    // 0x210c88: 0xa18821  addu        $s1, $a1, $at
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_210c8c:
    // 0x210c8c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_210c90:
    // 0x210c90: 0x240f809  jalr        $s2
label_210c94:
    if (ctx->pc == 0x210C94u) {
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C90u;
        // 0x210c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C98u;
        goto label_210c98;
    }
    ctx->pc = 0x210C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210C98u);
        ctx->pc = 0x210C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C90u;
        // 0x210c94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C90u, 0x210C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C98u;
label_210c98:
    // 0x210c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c9c:
    // 0x210c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210ca0:
    // 0x210ca0: 0x2a020065  slti        $v0, $s0, 0x65
    ctx->pc = 0x210ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
label_210ca4:
    // 0x210ca4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_210ca8:
    if (ctx->pc == 0x210CA8u) {
        ctx->pc = 0x210CACu;
        goto label_210cac;
    }
    ctx->pc = 0x210CA4u;
    {
        const bool branch_taken_0x210ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ca4) {
            ctx->pc = 0x210C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c8c;
        }
    }
    ctx->pc = 0x210CACu;
label_210cac:
    // 0x210cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210cb0:
    // 0x210cb0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_210cb4:
    // 0x210cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210cb8:
    // 0x210cb8: 0x240f809  jalr        $s2
label_210cbc:
    if (ctx->pc == 0x210CBCu) {
        ctx->pc = 0x210CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB8u;
        // 0x210cbc: 0x24450065  addiu       $a1, $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CC0u;
        goto label_210cc0;
    }
    ctx->pc = 0x210CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CC0u);
        ctx->pc = 0x210CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB8u;
        // 0x210cbc: 0x24450065  addiu       $a1, $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 101));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CB8u, 0x210CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CC0u;
label_210cc0:
    // 0x210cc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210cc4:
    // 0x210cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210cc8:
    // 0x210cc8: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x210cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_210ccc:
    // 0x210ccc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_210cd0:
    if (ctx->pc == 0x210CD0u) {
        ctx->pc = 0x210CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CCCu;
        // 0x210cd0: 0x2625008e  addiu       $a1, $s1, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 142));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CD4u;
        goto label_210cd4;
    }
    ctx->pc = 0x210CCCu;
    {
        const bool branch_taken_0x210ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CCCu;
        // 0x210cd0: 0x2625008e  addiu       $a1, $s1, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 142));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ccc) {
            ctx->pc = 0x210CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210cb0;
        }
    }
    ctx->pc = 0x210CD4u;
label_210cd4:
    // 0x210cd4: 0x240f809  jalr        $s2
label_210cd8:
    if (ctx->pc == 0x210CD8u) {
        ctx->pc = 0x210CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CD4u;
        // 0x210cd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CDCu;
        goto label_210cdc;
    }
    ctx->pc = 0x210CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CDCu);
        ctx->pc = 0x210CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CD4u;
        // 0x210cd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CD4u, 0x210CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CDCu;
label_210cdc:
    // 0x210cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ce0:
    // 0x210ce0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x210ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_210ce4:
    // 0x210ce4: 0x240f809  jalr        $s2
label_210ce8:
    if (ctx->pc == 0x210CE8u) {
        ctx->pc = 0x210CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CE4u;
        // 0x210ce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CECu;
        goto label_210cec;
    }
    ctx->pc = 0x210CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CECu);
        ctx->pc = 0x210CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CE4u;
        // 0x210ce8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CE4u, 0x210CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CECu;
label_210cec:
    // 0x210cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210cf0:
    // 0x210cf0: 0x26250094  addiu       $a1, $s1, 0x94
    ctx->pc = 0x210cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_210cf4:
    // 0x210cf4: 0x240f809  jalr        $s2
label_210cf8:
    if (ctx->pc == 0x210CF8u) {
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CFCu;
        goto label_210cfc;
    }
    ctx->pc = 0x210CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210CFCu);
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CF4u, 0x210CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210CFCu;
label_210cfc:
    // 0x210cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d00:
    // 0x210d00: 0x26250098  addiu       $a1, $s1, 0x98
    ctx->pc = 0x210d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_210d04:
    // 0x210d04: 0x240f809  jalr        $s2
label_210d08:
    if (ctx->pc == 0x210D08u) {
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D04u;
        // 0x210d08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D0Cu;
        goto label_210d0c;
    }
    ctx->pc = 0x210D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D0Cu);
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D04u;
        // 0x210d08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D04u, 0x210D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D0Cu;
label_210d0c:
    // 0x210d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d10:
    // 0x210d10: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x210d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_210d14:
    // 0x210d14: 0x240f809  jalr        $s2
label_210d18:
    if (ctx->pc == 0x210D18u) {
        ctx->pc = 0x210D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D14u;
        // 0x210d18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D1Cu;
        goto label_210d1c;
    }
    ctx->pc = 0x210D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D1Cu);
        ctx->pc = 0x210D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D14u;
        // 0x210d18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D14u, 0x210D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D1Cu;
label_210d1c:
    // 0x210d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d20:
    // 0x210d20: 0x262500a8  addiu       $a1, $s1, 0xA8
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_210d24:
    // 0x210d24: 0x240f809  jalr        $s2
label_210d28:
    if (ctx->pc == 0x210D28u) {
        ctx->pc = 0x210D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D24u;
        // 0x210d28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D2Cu;
        goto label_210d2c;
    }
    ctx->pc = 0x210D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D2Cu);
        ctx->pc = 0x210D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D24u;
        // 0x210d28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D24u, 0x210D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D2Cu;
label_210d2c:
    // 0x210d2c: 0x262500ac  addiu       $a1, $s1, 0xAC
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_210d30:
    // 0x210d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210d34:
    // 0x210d34: 0x240f809  jalr        $s2
label_210d38:
    if (ctx->pc == 0x210D38u) {
        ctx->pc = 0x210D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D34u;
        // 0x210d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D3Cu;
        goto label_210d3c;
    }
    ctx->pc = 0x210D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x210D3Cu);
        ctx->pc = 0x210D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D34u;
        // 0x210d38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D34u, 0x210D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210D3Cu;
label_210d3c:
    // 0x210d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x210d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_210d40:
    // 0x210d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210d44:
    // 0x210d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210d48:
    // 0x210d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210d4c:
    // 0x210d4c: 0x3e00008  jr          $ra
label_210d50:
    if (ctx->pc == 0x210D50u) {
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D4Cu;
        // 0x210d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D54u;
        goto label_210d54;
    }
    ctx->pc = 0x210D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D4Cu;
        // 0x210d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D54u;
label_210d54:
    // 0x210d54: 0x0  nop
    ctx->pc = 0x210d54u;
    // NOP
label_210d58:
    // 0x210d58: 0x0  nop
    ctx->pc = 0x210d58u;
    // NOP
label_210d5c:
    // 0x210d5c: 0x0  nop
    ctx->pc = 0x210d5cu;
    // NOP
label_210d60:
    // 0x210d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_210d64:
    // 0x210d64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x210d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_210d68:
    // 0x210d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210d6c:
    // 0x210d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x210d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210d70:
    // 0x210d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210d74:
    // 0x210d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210d78:
    // 0x210d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210d7c:
    // 0x210d7c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210d80:
    if (ctx->pc == 0x210D80u) {
        ctx->pc = 0x210D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D7Cu;
        // 0x210d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D84u;
        goto label_210d84;
    }
    ctx->pc = 0x210D7Cu;
    {
        const bool branch_taken_0x210d7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D7Cu;
        // 0x210d80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d7c) {
            ctx->pc = 0x210D90u;
            goto label_210d90;
        }
    }
    ctx->pc = 0x210D84u;
label_210d84:
    // 0x210d84: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_210d88:
    // 0x210d88: 0x10000003  b           . + 4 + (0x3 << 2)
label_210d8c:
    if (ctx->pc == 0x210D8Cu) {
        ctx->pc = 0x210D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D88u;
        // 0x210d8c: 0x26942380  addiu       $s4, $s4, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D90u;
        goto label_210d90;
    }
    ctx->pc = 0x210D88u;
    {
        const bool branch_taken_0x210d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D88u;
        // 0x210d8c: 0x26942380  addiu       $s4, $s4, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d88) {
            ctx->pc = 0x210D98u;
            goto label_210d98;
        }
    }
    ctx->pc = 0x210D90u;
label_210d90:
    // 0x210d90: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x210d90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_210d94:
    // 0x210d94: 0x269423c0  addiu       $s4, $s4, 0x23C0
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9152));
label_210d98:
    // 0x210d98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210d9c:
    // 0x210d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210da0:
    // 0x210da0: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x210da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_210da4:
    // 0x210da4: 0xa19821  addu        $s3, $a1, $at
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_210da8:
    // 0x210da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dac:
    // 0x210dac: 0x0  nop
    ctx->pc = 0x210dacu;
    // NOP
label_210db0:
    // 0x210db0: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210db4:
    // 0x210db4: 0x280f809  jalr        $s4
label_210db8:
    if (ctx->pc == 0x210DB8u) {
        ctx->pc = 0x210DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DB4u;
        // 0x210db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DBCu;
        goto label_210dbc;
    }
    ctx->pc = 0x210DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210DBCu);
        ctx->pc = 0x210DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DB4u;
        // 0x210db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DB4u, 0x210DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210DBCu;
label_210dbc:
    // 0x210dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210dc0:
    // 0x210dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dc4:
    // 0x210dc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x210dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210dc8:
    // 0x210dc8: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_210dcc:
    // 0x210dcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_210dd0:
    // 0x210dd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210dd4:
    // 0x210dd4: 0x280f809  jalr        $s4
label_210dd8:
    if (ctx->pc == 0x210DD8u) {
        ctx->pc = 0x210DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DD4u;
        // 0x210dd8: 0x24450011  addiu       $a1, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DDCu;
        goto label_210ddc;
    }
    ctx->pc = 0x210DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210DDCu);
        ctx->pc = 0x210DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DD4u;
        // 0x210dd8: 0x24450011  addiu       $a1, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DD4u, 0x210DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210DDCu;
label_210ddc:
    // 0x210ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210de0:
    // 0x210de0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210de4:
    // 0x210de4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x210de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_210de8:
    // 0x210de8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_210dec:
    if (ctx->pc == 0x210DECu) {
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0x26b50011  addiu       $s5, $s5, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DF0u;
        goto label_210df0;
    }
    ctx->pc = 0x210DE8u;
    {
        const bool branch_taken_0x210de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DE8u;
        // 0x210dec: 0x26b50011  addiu       $s5, $s5, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210de8) {
            ctx->pc = 0x210DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210dc8;
        }
    }
    ctx->pc = 0x210DF0u;
label_210df0:
    // 0x210df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210df4:
    // 0x210df4: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x210df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_210df8:
    // 0x210df8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_210dfc:
    if (ctx->pc == 0x210DFCu) {
        ctx->pc = 0x210E00u;
        goto label_210e00;
    }
    ctx->pc = 0x210DF8u;
    {
        const bool branch_taken_0x210df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210df8) {
            ctx->pc = 0x210DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210dac;
        }
    }
    ctx->pc = 0x210E00u;
label_210e00:
    // 0x210e00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210e04:
    // 0x210e04: 0x0  nop
    ctx->pc = 0x210e04u;
    // NOP
label_210e08:
    // 0x210e08: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210e0c:
    // 0x210e0c: 0x2445009d  addiu       $a1, $v0, 0x9D
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 157));
label_210e10:
    // 0x210e10: 0x280f809  jalr        $s4
label_210e14:
    if (ctx->pc == 0x210E14u) {
        ctx->pc = 0x210E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E10u;
        // 0x210e14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E18u;
        goto label_210e18;
    }
    ctx->pc = 0x210E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E18u);
        ctx->pc = 0x210E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E10u;
        // 0x210e14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E10u, 0x210E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E18u;
label_210e18:
    // 0x210e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e1c:
    // 0x210e1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210e20:
    // 0x210e20: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x210e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_210e24:
    // 0x210e24: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_210e28:
    if (ctx->pc == 0x210E28u) {
        ctx->pc = 0x210E2Cu;
        goto label_210e2c;
    }
    ctx->pc = 0x210E24u;
    {
        const bool branch_taken_0x210e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210e24) {
            ctx->pc = 0x210E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e04;
        }
    }
    ctx->pc = 0x210E2Cu;
label_210e2c:
    // 0x210e2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210e30:
    // 0x210e30: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x210e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_210e34:
    // 0x210e34: 0x244500a3  addiu       $a1, $v0, 0xA3
    ctx->pc = 0x210e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
label_210e38:
    // 0x210e38: 0x280f809  jalr        $s4
label_210e3c:
    if (ctx->pc == 0x210E3Cu) {
        ctx->pc = 0x210E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E38u;
        // 0x210e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E40u;
        goto label_210e40;
    }
    ctx->pc = 0x210E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E40u);
        ctx->pc = 0x210E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E38u;
        // 0x210e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E38u, 0x210E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E40u;
label_210e40:
    // 0x210e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e44:
    // 0x210e44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210e48:
    // 0x210e48: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x210e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_210e4c:
    // 0x210e4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_210e50:
    if (ctx->pc == 0x210E50u) {
        ctx->pc = 0x210E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E4Cu;
        // 0x210e50: 0x26650099  addiu       $a1, $s3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E54u;
        goto label_210e54;
    }
    ctx->pc = 0x210E4Cu;
    {
        const bool branch_taken_0x210e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E4Cu;
        // 0x210e50: 0x26650099  addiu       $a1, $s3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e4c) {
            ctx->pc = 0x210E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E54u;
label_210e54:
    // 0x210e54: 0x280f809  jalr        $s4
label_210e58:
    if (ctx->pc == 0x210E58u) {
        ctx->pc = 0x210E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E54u;
        // 0x210e58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E5Cu;
        goto label_210e5c;
    }
    ctx->pc = 0x210E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E5Cu);
        ctx->pc = 0x210E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E54u;
        // 0x210e58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E54u, 0x210E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E5Cu;
label_210e5c:
    // 0x210e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e60:
    // 0x210e60: 0x2665009a  addiu       $a1, $s3, 0x9A
    ctx->pc = 0x210e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 154));
label_210e64:
    // 0x210e64: 0x280f809  jalr        $s4
label_210e68:
    if (ctx->pc == 0x210E68u) {
        ctx->pc = 0x210E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E64u;
        // 0x210e68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E6Cu;
        goto label_210e6c;
    }
    ctx->pc = 0x210E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E6Cu);
        ctx->pc = 0x210E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E64u;
        // 0x210e68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E64u, 0x210E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E6Cu;
label_210e6c:
    // 0x210e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e70:
    // 0x210e70: 0x2665009b  addiu       $a1, $s3, 0x9B
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 155));
label_210e74:
    // 0x210e74: 0x280f809  jalr        $s4
label_210e78:
    if (ctx->pc == 0x210E78u) {
        ctx->pc = 0x210E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E74u;
        // 0x210e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E7Cu;
        goto label_210e7c;
    }
    ctx->pc = 0x210E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E7Cu);
        ctx->pc = 0x210E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E74u;
        // 0x210e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E74u, 0x210E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E7Cu;
label_210e7c:
    // 0x210e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e80:
    // 0x210e80: 0x2665009c  addiu       $a1, $s3, 0x9C
    ctx->pc = 0x210e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_210e84:
    // 0x210e84: 0x280f809  jalr        $s4
label_210e88:
    if (ctx->pc == 0x210E88u) {
        ctx->pc = 0x210E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E84u;
        // 0x210e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E8Cu;
        goto label_210e8c;
    }
    ctx->pc = 0x210E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E8Cu);
        ctx->pc = 0x210E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E84u;
        // 0x210e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E84u, 0x210E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E8Cu;
label_210e8c:
    // 0x210e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e90:
    // 0x210e90: 0x266500a8  addiu       $a1, $s3, 0xA8
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
label_210e94:
    // 0x210e94: 0x280f809  jalr        $s4
label_210e98:
    if (ctx->pc == 0x210E98u) {
        ctx->pc = 0x210E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E94u;
        // 0x210e98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210E9Cu;
        goto label_210e9c;
    }
    ctx->pc = 0x210E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210E9Cu);
        ctx->pc = 0x210E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E94u;
        // 0x210e98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210E94u, 0x210E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210E9Cu;
label_210e9c:
    // 0x210e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ea0:
    // 0x210ea0: 0x266500a9  addiu       $a1, $s3, 0xA9
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 169));
label_210ea4:
    // 0x210ea4: 0x280f809  jalr        $s4
label_210ea8:
    if (ctx->pc == 0x210EA8u) {
        ctx->pc = 0x210EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA4u;
        // 0x210ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EACu;
        goto label_210eac;
    }
    ctx->pc = 0x210EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210EACu);
        ctx->pc = 0x210EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EA4u;
        // 0x210ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EA4u, 0x210EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210EACu;
label_210eac:
    // 0x210eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210eb0:
    // 0x210eb0: 0x266500ac  addiu       $a1, $s3, 0xAC
    ctx->pc = 0x210eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 172));
label_210eb4:
    // 0x210eb4: 0x280f809  jalr        $s4
label_210eb8:
    if (ctx->pc == 0x210EB8u) {
        ctx->pc = 0x210EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EB4u;
        // 0x210eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EBCu;
        goto label_210ebc;
    }
    ctx->pc = 0x210EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x210EBCu);
        ctx->pc = 0x210EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EB4u;
        // 0x210eb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EB4u, 0x210EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210EBCu;
label_210ebc:
    // 0x210ebc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210ec0:
    // 0x210ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ec4:
    // 0x210ec4: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x210ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_210ec8:
    // 0x210ec8: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_210ecc:
    if (ctx->pc == 0x210ECCu) {
        ctx->pc = 0x210ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC8u;
        // 0x210ecc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ED0u;
        goto label_210ed0;
    }
    ctx->pc = 0x210EC8u;
    {
        const bool branch_taken_0x210ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EC8u;
        // 0x210ecc: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ec8) {
            ctx->pc = 0x210DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210da8;
        }
    }
    ctx->pc = 0x210ED0u;
label_210ed0:
    // 0x210ed0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x210ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_210ed4:
    // 0x210ed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x210ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210ed8:
    // 0x210ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x210ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210edc:
    // 0x210edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210ee0:
    // 0x210ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210ee4:
    // 0x210ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210ee8:
    // 0x210ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210eec:
    // 0x210eec: 0x3e00008  jr          $ra
label_210ef0:
    if (ctx->pc == 0x210EF0u) {
        ctx->pc = 0x210EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EECu;
        // 0x210ef0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210EF4u;
        goto label_210ef4;
    }
    ctx->pc = 0x210EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EECu;
        // 0x210ef0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210EF4u;
label_210ef4:
    // 0x210ef4: 0x0  nop
    ctx->pc = 0x210ef4u;
    // NOP
label_210ef8:
    // 0x210ef8: 0x0  nop
    ctx->pc = 0x210ef8u;
    // NOP
label_210efc:
    // 0x210efc: 0x0  nop
    ctx->pc = 0x210efcu;
    // NOP
label_210f00:
    // 0x210f00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x210f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_210f04:
    // 0x210f04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x210f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_210f08:
    // 0x210f08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x210f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_210f0c:
    // 0x210f0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x210f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_210f10:
    // 0x210f10: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x210f10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_210f14:
    // 0x210f14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x210f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_210f18:
    // 0x210f18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210f1c:
    // 0x210f1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_210f20:
    // 0x210f20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x210f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210f24:
    // 0x210f24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210f28:
    // 0x210f28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210f2c:
    // 0x210f2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210f30:
    // 0x210f30: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_210f34:
    if (ctx->pc == 0x210F34u) {
        ctx->pc = 0x210F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F30u;
        // 0x210f34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F38u;
        goto label_210f38;
    }
    ctx->pc = 0x210F30u;
    {
        const bool branch_taken_0x210f30 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F30u;
        // 0x210f34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f30) {
            ctx->pc = 0x210F4Cu;
            goto label_210f4c;
        }
    }
    ctx->pc = 0x210F38u;
label_210f38:
    // 0x210f38: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_210f3c:
    // 0x210f3c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210f40:
    // 0x210f40: 0x26732380  addiu       $s3, $s3, 0x2380
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
label_210f44:
    // 0x210f44: 0x10000005  b           . + 4 + (0x5 << 2)
label_210f48:
    if (ctx->pc == 0x210F48u) {
        ctx->pc = 0x210F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F44u;
        // 0x210f48: 0xac8230d4  sw          $v0, 0x30D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F4Cu;
        goto label_210f4c;
    }
    ctx->pc = 0x210F44u;
    {
        const bool branch_taken_0x210f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F44u;
        // 0x210f48: 0xac8230d4  sw          $v0, 0x30D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f44) {
            ctx->pc = 0x210F5Cu;
            goto label_210f5c;
        }
    }
    ctx->pc = 0x210F4Cu;
label_210f4c:
    // 0x210f4c: 0x8c8230d4  lw          $v0, 0x30D4($a0)
    ctx->pc = 0x210f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12500)));
label_210f50:
    // 0x210f50: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210f54:
    // 0x210f54: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210f58:
    // 0x210f58: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x210f58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_210f5c:
    // 0x210f5c: 0x248430d8  addiu       $a0, $a0, 0x30D8
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12504));
label_210f60:
    // 0x210f60: 0x26c50008  addiu       $a1, $s6, 0x8
    ctx->pc = 0x210f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_210f64:
    // 0x210f64: 0x260f809  jalr        $s3
label_210f68:
    if (ctx->pc == 0x210F68u) {
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F6Cu;
        goto label_210f6c;
    }
    ctx->pc = 0x210F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F6Cu);
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F64u, 0x210F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F6Cu;
label_210f6c:
    // 0x210f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f70:
    // 0x210f70: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x210f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_210f74:
    // 0x210f74: 0x260f809  jalr        $s3
label_210f78:
    if (ctx->pc == 0x210F78u) {
        ctx->pc = 0x210F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F74u;
        // 0x210f78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F7Cu;
        goto label_210f7c;
    }
    ctx->pc = 0x210F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F7Cu);
        ctx->pc = 0x210F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F74u;
        // 0x210f78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F74u, 0x210F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F7Cu;
label_210f7c:
    // 0x210f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f80:
    // 0x210f80: 0x26c5000c  addiu       $a1, $s6, 0xC
    ctx->pc = 0x210f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
label_210f84:
    // 0x210f84: 0x260f809  jalr        $s3
label_210f88:
    if (ctx->pc == 0x210F88u) {
        ctx->pc = 0x210F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F84u;
        // 0x210f88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210F8Cu;
        goto label_210f8c;
    }
    ctx->pc = 0x210F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210F8Cu);
        ctx->pc = 0x210F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F84u;
        // 0x210f88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f90:
    // 0x210f90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f94:
    // 0x210f94: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_210f98:
    // 0x210f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210f9c:
    // 0x210f9c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x210f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_210fa0:
    // 0x210fa0: 0x260f809  jalr        $s3
label_210fa4:
    if (ctx->pc == 0x210FA4u) {
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FA8u;
        goto label_210fa8;
    }
    ctx->pc = 0x210FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210FA8u);
        ctx->pc = 0x210FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FA0u;
        // 0x210fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FA0u, 0x210FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FA8u;
label_210fa8:
    // 0x210fa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210fac:
    // 0x210fac: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x210facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_210fb0:
    // 0x210fb0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_210fb4:
    if (ctx->pc == 0x210FB4u) {
        ctx->pc = 0x210FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB0u;
        // 0x210fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FB8u;
        goto label_210fb8;
    }
    ctx->pc = 0x210FB0u;
    {
        const bool branch_taken_0x210fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FB0u;
        // 0x210fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210fb0) {
            ctx->pc = 0x210F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210f94;
        }
    }
    ctx->pc = 0x210FB8u;
label_210fb8:
    // 0x210fb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fbc:
    // 0x210fbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fc0:
    // 0x210fc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210fc4:
    // 0x210fc4: 0x0  nop
    ctx->pc = 0x210fc4u;
    // NOP
label_210fc8:
    // 0x210fc8: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_210fcc:
    // 0x210fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210fd0:
    // 0x210fd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x210fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_210fd4:
    // 0x210fd4: 0x34211188  ori         $at, $at, 0x1188
    ctx->pc = 0x210fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4488);
label_210fd8:
    // 0x210fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210fdc:
    // 0x210fdc: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_210fe0:
    // 0x210fe0: 0x260f809  jalr        $s3
label_210fe4:
    if (ctx->pc == 0x210FE4u) {
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FE0u;
        // 0x210fe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210FE8u;
        goto label_210fe8;
    }
    ctx->pc = 0x210FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210FE8u);
        ctx->pc = 0x210FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210FE0u;
        // 0x210fe4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210FE0u, 0x210FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210FE8u;
label_210fe8:
    // 0x210fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210fec:
    // 0x210fec: 0x2a030021  slti        $v1, $s0, 0x21
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
label_210ff0:
    // 0x210ff0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_210ff4:
    if (ctx->pc == 0x210FF4u) {
        ctx->pc = 0x210FF8u;
        goto label_210ff8;
    }
    ctx->pc = 0x210FF0u;
    {
        const bool branch_taken_0x210ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ff0) {
            ctx->pc = 0x210FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210fc4;
        }
    }
    ctx->pc = 0x210FF8u;
label_210ff8:
    // 0x210ff8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210ffc:
    // 0x210ffc: 0x2a430021  slti        $v1, $s2, 0x21
    ctx->pc = 0x210ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
label_211000:
    // 0x211000: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_211004:
    if (ctx->pc == 0x211004u) {
        ctx->pc = 0x211004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211000u;
        // 0x211004: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211008u;
        goto label_211008;
    }
    ctx->pc = 0x211000u;
    {
        const bool branch_taken_0x211000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211000u;
        // 0x211004: 0x26310021  addiu       $s1, $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211000) {
            ctx->pc = 0x210FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210fc0;
        }
    }
    ctx->pc = 0x211008u;
label_211008:
    // 0x211008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21100c:
    // 0x21100c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_211010:
    // 0x211010: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_211014:
    // 0x211014: 0x342116b0  ori         $at, $at, 0x16B0
    ctx->pc = 0x211014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5808);
label_211018:
    // 0x211018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21101c:
    // 0x21101c: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_211020:
    // 0x211020: 0x260f809  jalr        $s3
label_211024:
    if (ctx->pc == 0x211024u) {
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211020u;
        // 0x211024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211028u;
        goto label_211028;
    }
    ctx->pc = 0x211020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211028u);
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211020u;
        // 0x211024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211020u, 0x211028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211028u;
label_211028:
    // 0x211028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21102c:
    // 0x21102c: 0x2a030140  slti        $v1, $s0, 0x140
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)320) ? 1 : 0);
label_211030:
    // 0x211030: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_211034:
    if (ctx->pc == 0x211034u) {
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211038u;
        goto label_211038;
    }
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211030u;
        // 0x211034: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211030) {
            ctx->pc = 0x211010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211010;
        }
    }
    ctx->pc = 0x211038u;
label_211038:
    // 0x211038: 0x26d00020  addiu       $s0, $s6, 0x20
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_21103c:
    // 0x21103c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211040:
    // 0x211040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211044:
    // 0x211044: 0x0  nop
    ctx->pc = 0x211044u;
    // NOP
label_211048:
    // 0x211048: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_21104c:
    // 0x21104c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211050:
    // 0x211050: 0x260f809  jalr        $s3
label_211054:
    if (ctx->pc == 0x211054u) {
        ctx->pc = 0x211054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211050u;
        // 0x211054: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211058u;
        goto label_211058;
    }
    ctx->pc = 0x211050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211058u);
        ctx->pc = 0x211054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211050u;
        // 0x211054: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211050u, 0x211058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211058u;
label_211058:
    // 0x211058: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21105c:
    // 0x21105c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x21105cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_211060:
    // 0x211060: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_211064:
    if (ctx->pc == 0x211064u) {
        ctx->pc = 0x211064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211060u;
        // 0x211064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211068u;
        goto label_211068;
    }
    ctx->pc = 0x211060u;
    {
        const bool branch_taken_0x211060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211060u;
        // 0x211064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211060) {
            ctx->pc = 0x211044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211044;
        }
    }
    ctx->pc = 0x211068u;
label_211068:
    // 0x211068: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x211068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_21106c:
    // 0x21106c: 0x260f809  jalr        $s3
label_211070:
    if (ctx->pc == 0x211070u) {
        ctx->pc = 0x211070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21106Cu;
        // 0x211070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211074u;
        goto label_211074;
    }
    ctx->pc = 0x21106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211074u);
        ctx->pc = 0x211070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21106Cu;
        // 0x211070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21106Cu, 0x211074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211074u;
label_211074:
    // 0x211074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211078:
    // 0x211078: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_21107c:
    // 0x21107c: 0x260f809  jalr        $s3
label_211080:
    if (ctx->pc == 0x211080u) {
        ctx->pc = 0x211080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21107Cu;
        // 0x211080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211084u;
        goto label_211084;
    }
    ctx->pc = 0x21107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211084u);
        ctx->pc = 0x211080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21107Cu;
        // 0x211080: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21107Cu, 0x211084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211084u;
label_211084:
    // 0x211084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211088:
    // 0x211088: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21108c:
    // 0x21108c: 0x260f809  jalr        $s3
label_211090:
    if (ctx->pc == 0x211090u) {
        ctx->pc = 0x211090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21108Cu;
        // 0x211090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211094u;
        goto label_211094;
    }
    ctx->pc = 0x21108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211094u);
        ctx->pc = 0x211090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21108Cu;
        // 0x211090: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21108Cu, 0x211094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211094u;
label_211094:
    // 0x211094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211098:
    // 0x211098: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21109c:
    // 0x21109c: 0x260f809  jalr        $s3
label_2110a0:
    if (ctx->pc == 0x2110A0u) {
        ctx->pc = 0x2110A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21109Cu;
        // 0x2110a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110A4u;
        goto label_2110a4;
    }
    ctx->pc = 0x21109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110A4u);
        ctx->pc = 0x2110A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21109Cu;
        // 0x2110a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21109Cu, 0x2110A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110A4u;
label_2110a4:
    // 0x2110a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2110a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2110a8:
    // 0x2110a8: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2110a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_2110ac:
    // 0x2110ac: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_2110b0:
    if (ctx->pc == 0x2110B0u) {
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110B4u;
        goto label_2110b4;
    }
    ctx->pc = 0x2110ACu;
    {
        const bool branch_taken_0x2110ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ac) {
            ctx->pc = 0x211040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211040;
        }
    }
    ctx->pc = 0x2110B4u;
label_2110b4:
    // 0x2110b4: 0x26d100e0  addiu       $s1, $s6, 0xE0
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
label_2110b8:
    // 0x2110b8: 0x26d240a0  addiu       $s2, $s6, 0x40A0
    ctx->pc = 0x2110b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16544));
label_2110bc:
    // 0x2110bc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2110bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c0:
    // 0x2110c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2110c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c4:
    // 0x2110c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2110c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2110c8:
    // 0x2110c8: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2110c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2110cc:
    // 0x2110cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110d0:
    // 0x2110d0: 0x260f809  jalr        $s3
label_2110d4:
    if (ctx->pc == 0x2110D4u) {
        ctx->pc = 0x2110D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D0u;
        // 0x2110d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110D8u;
        goto label_2110d8;
    }
    ctx->pc = 0x2110D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110D8u);
        ctx->pc = 0x2110D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D0u;
        // 0x2110d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110D0u, 0x2110D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110D8u;
label_2110d8:
    // 0x2110d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2110d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2110dc:
    // 0x2110dc: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x2110dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2110e0:
    // 0x2110e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2110e4:
    if (ctx->pc == 0x2110E4u) {
        ctx->pc = 0x2110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E0u;
        // 0x2110e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110E8u;
        goto label_2110e8;
    }
    ctx->pc = 0x2110E0u;
    {
        const bool branch_taken_0x2110e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2110E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E0u;
        // 0x2110e4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110e0) {
            ctx->pc = 0x2110C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2110c8;
        }
    }
    ctx->pc = 0x2110E8u;
label_2110e8:
    // 0x2110e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110ec:
    // 0x2110ec: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2110f0:
    // 0x2110f0: 0x260f809  jalr        $s3
label_2110f4:
    if (ctx->pc == 0x2110F4u) {
        ctx->pc = 0x2110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F0u;
        // 0x2110f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2110F8u;
        goto label_2110f8;
    }
    ctx->pc = 0x2110F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2110F8u);
        ctx->pc = 0x2110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F0u;
        // 0x2110f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110F0u, 0x2110F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2110F8u;
label_2110f8:
    // 0x2110f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2110fc:
    // 0x2110fc: 0x26250005  addiu       $a1, $s1, 0x5
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
label_211100:
    // 0x211100: 0x260f809  jalr        $s3
label_211104:
    if (ctx->pc == 0x211104u) {
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211108u;
        goto label_211108;
    }
    ctx->pc = 0x211100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211108u);
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211100u, 0x211108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211108u;
label_211108:
    // 0x211108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21110c:
    // 0x21110c: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_211110:
    // 0x211110: 0x260f809  jalr        $s3
label_211114:
    if (ctx->pc == 0x211114u) {
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211118u;
        goto label_211118;
    }
    ctx->pc = 0x211110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211118u);
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211110u, 0x211118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211118u;
label_211118:
    // 0x211118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21111c:
    // 0x21111c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211120:
    // 0x211120: 0x260f809  jalr        $s3
label_211124:
    if (ctx->pc == 0x211124u) {
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211128u;
        goto label_211128;
    }
    ctx->pc = 0x211120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211128u);
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21112c:
    // 0x21112c: 0x2625000a  addiu       $a1, $s1, 0xA
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_211130:
    // 0x211130: 0x260f809  jalr        $s3
label_211134:
    if (ctx->pc == 0x211134u) {
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211138u;
        goto label_211138;
    }
    ctx->pc = 0x211130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211138u);
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211130u, 0x211138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211138u;
label_211138:
    // 0x211138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21113c:
    // 0x21113c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_211140:
    // 0x211140: 0x260f809  jalr        $s3
label_211144:
    if (ctx->pc == 0x211144u) {
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211148u;
        goto label_211148;
    }
    ctx->pc = 0x211140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211148u);
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211140u, 0x211148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211148u;
label_211148:
    // 0x211148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21114c:
    // 0x21114c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_211150:
    // 0x211150: 0x260f809  jalr        $s3
label_211154:
    if (ctx->pc == 0x211154u) {
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211158u;
        goto label_211158;
    }
    ctx->pc = 0x211150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211158u);
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211150u, 0x211158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211158u;
label_211158:
    // 0x211158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21115c:
    // 0x21115c: 0x2625000f  addiu       $a1, $s1, 0xF
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_211160:
    // 0x211160: 0x260f809  jalr        $s3
label_211164:
    if (ctx->pc == 0x211164u) {
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211168u;
        goto label_211168;
    }
    ctx->pc = 0x211160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211168u);
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211160u, 0x211168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211168u;
label_211168:
    // 0x211168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21116c:
    // 0x21116c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211170:
    // 0x211170: 0x260f809  jalr        $s3
label_211174:
    if (ctx->pc == 0x211174u) {
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211178u;
        { ctx->pc = 0x211178; return; }
    }
    ctx->pc = 0x211170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211178u);
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211170u, 0x211178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211178u;
    ctx->pc = 0x211178u;
    return;
}
