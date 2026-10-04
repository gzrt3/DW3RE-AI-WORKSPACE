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


void FUN_0017d410_part18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1858e0u: goto label_1858e0;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858e8u: goto label_1858e8;
        case 0x1858ecu: goto label_1858ec;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858f4u: goto label_1858f4;
        case 0x1858f8u: goto label_1858f8;
        case 0x1858fcu: goto label_1858fc;
        case 0x185900u: goto label_185900;
        case 0x185904u: goto label_185904;
        case 0x185908u: goto label_185908;
        case 0x18590cu: goto label_18590c;
        case 0x185910u: goto label_185910;
        case 0x185914u: goto label_185914;
        case 0x185918u: goto label_185918;
        case 0x18591cu: goto label_18591c;
        case 0x185920u: goto label_185920;
        case 0x185924u: goto label_185924;
        case 0x185928u: goto label_185928;
        case 0x18592cu: goto label_18592c;
        case 0x185930u: goto label_185930;
        case 0x185934u: goto label_185934;
        case 0x185938u: goto label_185938;
        case 0x18593cu: goto label_18593c;
        case 0x185940u: goto label_185940;
        case 0x185944u: goto label_185944;
        case 0x185948u: goto label_185948;
        case 0x18594cu: goto label_18594c;
        case 0x185950u: goto label_185950;
        case 0x185954u: goto label_185954;
        case 0x185958u: goto label_185958;
        case 0x18595cu: goto label_18595c;
        case 0x185960u: goto label_185960;
        case 0x185964u: goto label_185964;
        case 0x185968u: goto label_185968;
        case 0x18596cu: goto label_18596c;
        case 0x185970u: goto label_185970;
        case 0x185974u: goto label_185974;
        case 0x185978u: goto label_185978;
        case 0x18597cu: goto label_18597c;
        case 0x185980u: goto label_185980;
        case 0x185984u: goto label_185984;
        case 0x185988u: goto label_185988;
        case 0x18598cu: goto label_18598c;
        case 0x185990u: goto label_185990;
        case 0x185994u: goto label_185994;
        case 0x185998u: goto label_185998;
        case 0x18599cu: goto label_18599c;
        case 0x1859a0u: goto label_1859a0;
        case 0x1859a4u: goto label_1859a4;
        case 0x1859a8u: goto label_1859a8;
        case 0x1859acu: goto label_1859ac;
        case 0x1859b0u: goto label_1859b0;
        case 0x1859b4u: goto label_1859b4;
        case 0x1859b8u: goto label_1859b8;
        case 0x1859bcu: goto label_1859bc;
        case 0x1859c0u: goto label_1859c0;
        case 0x1859c4u: goto label_1859c4;
        case 0x1859c8u: goto label_1859c8;
        case 0x1859ccu: goto label_1859cc;
        case 0x1859d0u: goto label_1859d0;
        case 0x1859d4u: goto label_1859d4;
        case 0x1859d8u: goto label_1859d8;
        case 0x1859dcu: goto label_1859dc;
        case 0x1859e0u: goto label_1859e0;
        case 0x1859e4u: goto label_1859e4;
        case 0x1859e8u: goto label_1859e8;
        case 0x1859ecu: goto label_1859ec;
        case 0x1859f0u: goto label_1859f0;
        case 0x1859f4u: goto label_1859f4;
        case 0x1859f8u: goto label_1859f8;
        case 0x1859fcu: goto label_1859fc;
        case 0x185a00u: goto label_185a00;
        case 0x185a04u: goto label_185a04;
        case 0x185a08u: goto label_185a08;
        case 0x185a0cu: goto label_185a0c;
        case 0x185a10u: goto label_185a10;
        case 0x185a14u: goto label_185a14;
        case 0x185a18u: goto label_185a18;
        case 0x185a1cu: goto label_185a1c;
        case 0x185a20u: goto label_185a20;
        case 0x185a24u: goto label_185a24;
        case 0x185a28u: goto label_185a28;
        case 0x185a2cu: goto label_185a2c;
        case 0x185a30u: goto label_185a30;
        case 0x185a34u: goto label_185a34;
        case 0x185a38u: goto label_185a38;
        case 0x185a3cu: goto label_185a3c;
        case 0x185a40u: goto label_185a40;
        case 0x185a44u: goto label_185a44;
        case 0x185a48u: goto label_185a48;
        case 0x185a4cu: goto label_185a4c;
        case 0x185a50u: goto label_185a50;
        case 0x185a54u: goto label_185a54;
        case 0x185a58u: goto label_185a58;
        case 0x185a5cu: goto label_185a5c;
        case 0x185a60u: goto label_185a60;
        case 0x185a64u: goto label_185a64;
        case 0x185a68u: goto label_185a68;
        case 0x185a6cu: goto label_185a6c;
        case 0x185a70u: goto label_185a70;
        case 0x185a74u: goto label_185a74;
        case 0x185a78u: goto label_185a78;
        case 0x185a7cu: goto label_185a7c;
        case 0x185a80u: goto label_185a80;
        case 0x185a84u: goto label_185a84;
        case 0x185a88u: goto label_185a88;
        case 0x185a8cu: goto label_185a8c;
        case 0x185a90u: goto label_185a90;
        case 0x185a94u: goto label_185a94;
        case 0x185a98u: goto label_185a98;
        case 0x185a9cu: goto label_185a9c;
        case 0x185aa0u: goto label_185aa0;
        case 0x185aa4u: goto label_185aa4;
        case 0x185aa8u: goto label_185aa8;
        case 0x185aacu: goto label_185aac;
        case 0x185ab0u: goto label_185ab0;
        case 0x185ab4u: goto label_185ab4;
        case 0x185ab8u: goto label_185ab8;
        case 0x185abcu: goto label_185abc;
        case 0x185ac0u: goto label_185ac0;
        case 0x185ac4u: goto label_185ac4;
        case 0x185ac8u: goto label_185ac8;
        case 0x185accu: goto label_185acc;
        case 0x185ad0u: goto label_185ad0;
        case 0x185ad4u: goto label_185ad4;
        case 0x185ad8u: goto label_185ad8;
        case 0x185adcu: goto label_185adc;
        case 0x185ae0u: goto label_185ae0;
        case 0x185ae4u: goto label_185ae4;
        case 0x185ae8u: goto label_185ae8;
        case 0x185aecu: goto label_185aec;
        case 0x185af0u: goto label_185af0;
        case 0x185af4u: goto label_185af4;
        case 0x185af8u: goto label_185af8;
        case 0x185afcu: goto label_185afc;
        case 0x185b00u: goto label_185b00;
        case 0x185b04u: goto label_185b04;
        case 0x185b08u: goto label_185b08;
        case 0x185b0cu: goto label_185b0c;
        case 0x185b10u: goto label_185b10;
        case 0x185b14u: goto label_185b14;
        case 0x185b18u: goto label_185b18;
        case 0x185b1cu: goto label_185b1c;
        case 0x185b20u: goto label_185b20;
        case 0x185b24u: goto label_185b24;
        case 0x185b28u: goto label_185b28;
        case 0x185b2cu: goto label_185b2c;
        case 0x185b30u: goto label_185b30;
        case 0x185b34u: goto label_185b34;
        case 0x185b38u: goto label_185b38;
        case 0x185b3cu: goto label_185b3c;
        case 0x185b40u: goto label_185b40;
        case 0x185b44u: goto label_185b44;
        case 0x185b48u: goto label_185b48;
        case 0x185b4cu: goto label_185b4c;
        case 0x185b50u: goto label_185b50;
        case 0x185b54u: goto label_185b54;
        case 0x185b58u: goto label_185b58;
        case 0x185b5cu: goto label_185b5c;
        case 0x185b60u: goto label_185b60;
        case 0x185b64u: goto label_185b64;
        case 0x185b68u: goto label_185b68;
        case 0x185b6cu: goto label_185b6c;
        case 0x185b70u: goto label_185b70;
        case 0x185b74u: goto label_185b74;
        case 0x185b78u: goto label_185b78;
        case 0x185b7cu: goto label_185b7c;
        case 0x185b80u: goto label_185b80;
        case 0x185b84u: goto label_185b84;
        case 0x185b88u: goto label_185b88;
        case 0x185b8cu: goto label_185b8c;
        case 0x185b90u: goto label_185b90;
        case 0x185b94u: goto label_185b94;
        case 0x185b98u: goto label_185b98;
        case 0x185b9cu: goto label_185b9c;
        case 0x185ba0u: goto label_185ba0;
        case 0x185ba4u: goto label_185ba4;
        case 0x185ba8u: goto label_185ba8;
        case 0x185bacu: goto label_185bac;
        case 0x185bb0u: goto label_185bb0;
        case 0x185bb4u: goto label_185bb4;
        case 0x185bb8u: goto label_185bb8;
        case 0x185bbcu: goto label_185bbc;
        case 0x185bc0u: goto label_185bc0;
        case 0x185bc4u: goto label_185bc4;
        case 0x185bc8u: goto label_185bc8;
        case 0x185bccu: goto label_185bcc;
        case 0x185bd0u: goto label_185bd0;
        case 0x185bd4u: goto label_185bd4;
        case 0x185bd8u: goto label_185bd8;
        case 0x185bdcu: goto label_185bdc;
        case 0x185be0u: goto label_185be0;
        case 0x185be4u: goto label_185be4;
        case 0x185be8u: goto label_185be8;
        case 0x185becu: goto label_185bec;
        case 0x185bf0u: goto label_185bf0;
        case 0x185bf4u: goto label_185bf4;
        case 0x185bf8u: goto label_185bf8;
        case 0x185bfcu: goto label_185bfc;
        case 0x185c00u: goto label_185c00;
        case 0x185c04u: goto label_185c04;
        case 0x185c08u: goto label_185c08;
        case 0x185c0cu: goto label_185c0c;
        case 0x185c10u: goto label_185c10;
        case 0x185c14u: goto label_185c14;
        case 0x185c18u: goto label_185c18;
        case 0x185c1cu: goto label_185c1c;
        case 0x185c20u: goto label_185c20;
        case 0x185c24u: goto label_185c24;
        case 0x185c28u: goto label_185c28;
        case 0x185c2cu: goto label_185c2c;
        case 0x185c30u: goto label_185c30;
        case 0x185c34u: goto label_185c34;
        case 0x185c38u: goto label_185c38;
        case 0x185c3cu: goto label_185c3c;
        case 0x185c40u: goto label_185c40;
        case 0x185c44u: goto label_185c44;
        case 0x185c48u: goto label_185c48;
        case 0x185c4cu: goto label_185c4c;
        case 0x185c50u: goto label_185c50;
        case 0x185c54u: goto label_185c54;
        case 0x185c58u: goto label_185c58;
        case 0x185c5cu: goto label_185c5c;
        case 0x185c60u: goto label_185c60;
        case 0x185c64u: goto label_185c64;
        case 0x185c68u: goto label_185c68;
        case 0x185c6cu: goto label_185c6c;
        case 0x185c70u: goto label_185c70;
        case 0x185c74u: goto label_185c74;
        case 0x185c78u: goto label_185c78;
        case 0x185c7cu: goto label_185c7c;
        case 0x185c80u: goto label_185c80;
        case 0x185c84u: goto label_185c84;
        case 0x185c88u: goto label_185c88;
        case 0x185c8cu: goto label_185c8c;
        case 0x185c90u: goto label_185c90;
        case 0x185c94u: goto label_185c94;
        case 0x185c98u: goto label_185c98;
        case 0x185c9cu: goto label_185c9c;
        case 0x185ca0u: goto label_185ca0;
        case 0x185ca4u: goto label_185ca4;
        case 0x185ca8u: goto label_185ca8;
        case 0x185cacu: goto label_185cac;
        case 0x185cb0u: goto label_185cb0;
        case 0x185cb4u: goto label_185cb4;
        case 0x185cb8u: goto label_185cb8;
        case 0x185cbcu: goto label_185cbc;
        case 0x185cc0u: goto label_185cc0;
        case 0x185cc4u: goto label_185cc4;
        case 0x185cc8u: goto label_185cc8;
        case 0x185cccu: goto label_185ccc;
        case 0x185cd0u: goto label_185cd0;
        case 0x185cd4u: goto label_185cd4;
        case 0x185cd8u: goto label_185cd8;
        case 0x185cdcu: goto label_185cdc;
        case 0x185ce0u: goto label_185ce0;
        case 0x185ce4u: goto label_185ce4;
        case 0x185ce8u: goto label_185ce8;
        case 0x185cecu: goto label_185cec;
        case 0x185cf0u: goto label_185cf0;
        case 0x185cf4u: goto label_185cf4;
        case 0x185cf8u: goto label_185cf8;
        case 0x185cfcu: goto label_185cfc;
        case 0x185d00u: goto label_185d00;
        case 0x185d04u: goto label_185d04;
        case 0x185d08u: goto label_185d08;
        case 0x185d0cu: goto label_185d0c;
        case 0x185d10u: goto label_185d10;
        case 0x185d14u: goto label_185d14;
        case 0x185d18u: goto label_185d18;
        case 0x185d1cu: goto label_185d1c;
        case 0x185d20u: goto label_185d20;
        case 0x185d24u: goto label_185d24;
        case 0x185d28u: goto label_185d28;
        case 0x185d2cu: goto label_185d2c;
        case 0x185d30u: goto label_185d30;
        case 0x185d34u: goto label_185d34;
        case 0x185d38u: goto label_185d38;
        case 0x185d3cu: goto label_185d3c;
        case 0x185d40u: goto label_185d40;
        case 0x185d44u: goto label_185d44;
        case 0x185d48u: goto label_185d48;
        case 0x185d4cu: goto label_185d4c;
        case 0x185d50u: goto label_185d50;
        case 0x185d54u: goto label_185d54;
        case 0x185d58u: goto label_185d58;
        case 0x185d5cu: goto label_185d5c;
        case 0x185d60u: goto label_185d60;
        case 0x185d64u: goto label_185d64;
        case 0x185d68u: goto label_185d68;
        case 0x185d6cu: goto label_185d6c;
        case 0x185d70u: goto label_185d70;
        case 0x185d74u: goto label_185d74;
        case 0x185d78u: goto label_185d78;
        case 0x185d7cu: goto label_185d7c;
        case 0x185d80u: goto label_185d80;
        case 0x185d84u: goto label_185d84;
        case 0x185d88u: goto label_185d88;
        case 0x185d8cu: goto label_185d8c;
        case 0x185d90u: goto label_185d90;
        case 0x185d94u: goto label_185d94;
        case 0x185d98u: goto label_185d98;
        case 0x185d9cu: goto label_185d9c;
        case 0x185da0u: goto label_185da0;
        case 0x185da4u: goto label_185da4;
        case 0x185da8u: goto label_185da8;
        case 0x185dacu: goto label_185dac;
        case 0x185db0u: goto label_185db0;
        case 0x185db4u: goto label_185db4;
        case 0x185db8u: goto label_185db8;
        case 0x185dbcu: goto label_185dbc;
        case 0x185dc0u: goto label_185dc0;
        case 0x185dc4u: goto label_185dc4;
        case 0x185dc8u: goto label_185dc8;
        case 0x185dccu: goto label_185dcc;
        case 0x185dd0u: goto label_185dd0;
        case 0x185dd4u: goto label_185dd4;
        case 0x185dd8u: goto label_185dd8;
        case 0x185ddcu: goto label_185ddc;
        case 0x185de0u: goto label_185de0;
        case 0x185de4u: goto label_185de4;
        case 0x185de8u: goto label_185de8;
        case 0x185decu: goto label_185dec;
        case 0x185df0u: goto label_185df0;
        case 0x185df4u: goto label_185df4;
        case 0x185df8u: goto label_185df8;
        case 0x185dfcu: goto label_185dfc;
        case 0x185e00u: goto label_185e00;
        case 0x185e04u: goto label_185e04;
        case 0x185e08u: goto label_185e08;
        case 0x185e0cu: goto label_185e0c;
        case 0x185e10u: goto label_185e10;
        case 0x185e14u: goto label_185e14;
        case 0x185e18u: goto label_185e18;
        case 0x185e1cu: goto label_185e1c;
        case 0x185e20u: goto label_185e20;
        case 0x185e24u: goto label_185e24;
        case 0x185e28u: goto label_185e28;
        case 0x185e2cu: goto label_185e2c;
        case 0x185e30u: goto label_185e30;
        case 0x185e34u: goto label_185e34;
        case 0x185e38u: goto label_185e38;
        case 0x185e3cu: goto label_185e3c;
        case 0x185e40u: goto label_185e40;
        case 0x185e44u: goto label_185e44;
        case 0x185e48u: goto label_185e48;
        case 0x185e4cu: goto label_185e4c;
        case 0x185e50u: goto label_185e50;
        case 0x185e54u: goto label_185e54;
        case 0x185e58u: goto label_185e58;
        case 0x185e5cu: goto label_185e5c;
        case 0x185e60u: goto label_185e60;
        case 0x185e64u: goto label_185e64;
        case 0x185e68u: goto label_185e68;
        case 0x185e6cu: goto label_185e6c;
        case 0x185e70u: goto label_185e70;
        case 0x185e74u: goto label_185e74;
        case 0x185e78u: goto label_185e78;
        case 0x185e7cu: goto label_185e7c;
        case 0x185e80u: goto label_185e80;
        case 0x185e84u: goto label_185e84;
        case 0x185e88u: goto label_185e88;
        case 0x185e8cu: goto label_185e8c;
        case 0x185e90u: goto label_185e90;
        case 0x185e94u: goto label_185e94;
        case 0x185e98u: goto label_185e98;
        case 0x185e9cu: goto label_185e9c;
        case 0x185ea0u: goto label_185ea0;
        case 0x185ea4u: goto label_185ea4;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eacu: goto label_185eac;
        case 0x185eb0u: goto label_185eb0;
        case 0x185eb4u: goto label_185eb4;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ebcu: goto label_185ebc;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ec4u: goto label_185ec4;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ed4u: goto label_185ed4;
        case 0x185ed8u: goto label_185ed8;
        case 0x185edcu: goto label_185edc;
        case 0x185ee0u: goto label_185ee0;
        case 0x185ee4u: goto label_185ee4;
        case 0x185ee8u: goto label_185ee8;
        case 0x185eecu: goto label_185eec;
        case 0x185ef0u: goto label_185ef0;
        case 0x185ef4u: goto label_185ef4;
        case 0x185ef8u: goto label_185ef8;
        case 0x185efcu: goto label_185efc;
        case 0x185f00u: goto label_185f00;
        case 0x185f04u: goto label_185f04;
        case 0x185f08u: goto label_185f08;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f10u: goto label_185f10;
        case 0x185f14u: goto label_185f14;
        case 0x185f18u: goto label_185f18;
        case 0x185f1cu: goto label_185f1c;
        case 0x185f20u: goto label_185f20;
        case 0x185f24u: goto label_185f24;
        case 0x185f28u: goto label_185f28;
        case 0x185f2cu: goto label_185f2c;
        case 0x185f30u: goto label_185f30;
        case 0x185f34u: goto label_185f34;
        case 0x185f38u: goto label_185f38;
        case 0x185f3cu: goto label_185f3c;
        case 0x185f40u: goto label_185f40;
        case 0x185f44u: goto label_185f44;
        case 0x185f48u: goto label_185f48;
        case 0x185f4cu: goto label_185f4c;
        case 0x185f50u: goto label_185f50;
        case 0x185f54u: goto label_185f54;
        case 0x185f58u: goto label_185f58;
        case 0x185f5cu: goto label_185f5c;
        case 0x185f60u: goto label_185f60;
        case 0x185f64u: goto label_185f64;
        case 0x185f68u: goto label_185f68;
        case 0x185f6cu: goto label_185f6c;
        case 0x185f70u: goto label_185f70;
        case 0x185f74u: goto label_185f74;
        case 0x185f78u: goto label_185f78;
        case 0x185f7cu: goto label_185f7c;
        case 0x185f80u: goto label_185f80;
        case 0x185f84u: goto label_185f84;
        case 0x185f88u: goto label_185f88;
        case 0x185f8cu: goto label_185f8c;
        case 0x185f90u: goto label_185f90;
        case 0x185f94u: goto label_185f94;
        case 0x185f98u: goto label_185f98;
        case 0x185f9cu: goto label_185f9c;
        case 0x185fa0u: goto label_185fa0;
        case 0x185fa4u: goto label_185fa4;
        case 0x185fa8u: goto label_185fa8;
        case 0x185facu: goto label_185fac;
        case 0x185fb0u: goto label_185fb0;
        case 0x185fb4u: goto label_185fb4;
        case 0x185fb8u: goto label_185fb8;
        case 0x185fbcu: goto label_185fbc;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc4u: goto label_185fc4;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fccu: goto label_185fcc;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fd4u: goto label_185fd4;
        case 0x185fd8u: goto label_185fd8;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fe0u: goto label_185fe0;
        case 0x185fe4u: goto label_185fe4;
        case 0x185fe8u: goto label_185fe8;
        case 0x185fecu: goto label_185fec;
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff4u: goto label_185ff4;
        case 0x185ff8u: goto label_185ff8;
        case 0x185ffcu: goto label_185ffc;
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        case 0x186050u: goto label_186050;
        case 0x186054u: goto label_186054;
        case 0x186058u: goto label_186058;
        case 0x18605cu: goto label_18605c;
        case 0x186060u: goto label_186060;
        case 0x186064u: goto label_186064;
        case 0x186068u: goto label_186068;
        case 0x18606cu: goto label_18606c;
        case 0x186070u: goto label_186070;
        case 0x186074u: goto label_186074;
        case 0x186078u: goto label_186078;
        case 0x18607cu: goto label_18607c;
        case 0x186080u: goto label_186080;
        case 0x186084u: goto label_186084;
        case 0x186088u: goto label_186088;
        case 0x18608cu: goto label_18608c;
        case 0x186090u: goto label_186090;
        case 0x186094u: goto label_186094;
        case 0x186098u: goto label_186098;
        case 0x18609cu: goto label_18609c;
        case 0x1860a0u: goto label_1860a0;
        case 0x1860a4u: goto label_1860a4;
        case 0x1860a8u: goto label_1860a8;
        case 0x1860acu: goto label_1860ac;
        default: return;
    }

label_1858e0:
    // 0x1858e0: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x1858e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_1858e4:
    // 0x1858e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1858e8:
    if (ctx->pc == 0x1858E8u) {
        ctx->pc = 0x1858ECu;
        goto label_1858ec;
    }
    ctx->pc = 0x1858E4u;
    {
        const bool branch_taken_0x1858e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1858e4) {
            ctx->pc = 0x185910u;
            goto label_185910;
        }
    }
    ctx->pc = 0x1858ECu;
label_1858ec:
    // 0x1858ec: 0x9063006b  lbu         $v1, 0x6B($v1)
    ctx->pc = 0x1858ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 107)));
label_1858f0:
    // 0x1858f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1858f4:
    // 0x1858f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1858f8:
    if (ctx->pc == 0x1858F8u) {
        ctx->pc = 0x1858F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F4u;
        // 0x1858f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1858FCu;
        goto label_1858fc;
    }
    ctx->pc = 0x1858F4u;
    {
        const bool branch_taken_0x1858f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1858F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858F4u;
        // 0x1858f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858f4) {
            ctx->pc = 0x185910u;
            goto label_185910;
        }
    }
    ctx->pc = 0x1858FCu;
label_1858fc:
    // 0x1858fc: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1858fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_185900:
    // 0x185900: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x185900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_185904:
    // 0x185904: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_185908:
    if (ctx->pc == 0x185908u) {
        ctx->pc = 0x18590Cu;
        goto label_18590c;
    }
    ctx->pc = 0x185904u;
    {
        const bool branch_taken_0x185904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185904) {
            ctx->pc = 0x185910u;
            goto label_185910;
        }
    }
    ctx->pc = 0x18590Cu;
label_18590c:
    // 0x18590c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185910:
    // 0x185910: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_185914:
    if (ctx->pc == 0x185914u) {
        ctx->pc = 0x185918u;
        goto label_185918;
    }
    ctx->pc = 0x185910u;
    {
        const bool branch_taken_0x185910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x185910) {
            ctx->pc = 0x18592Cu;
            goto label_18592c;
        }
    }
    ctx->pc = 0x185918u;
label_185918:
    // 0x185918: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x185918u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_18591c:
    // 0x18591c: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x18591cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_185920:
    // 0x185920: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_185924:
    // 0x185924: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x185924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_185928:
    // 0x185928: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x185928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_18592c:
    // 0x18592c: 0x92430231  lbu         $v1, 0x231($s2)
    ctx->pc = 0x18592cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_185930:
    // 0x185930: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x185930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_185934:
    // 0x185934: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_185938:
    if (ctx->pc == 0x185938u) {
        ctx->pc = 0x185938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185934u;
        // 0x185938: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18593Cu;
        goto label_18593c;
    }
    ctx->pc = 0x185934u;
    {
        const bool branch_taken_0x185934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185934u;
        // 0x185938: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185934) {
            ctx->pc = 0x185998u;
            goto label_185998;
        }
    }
    ctx->pc = 0x18593Cu;
label_18593c:
    // 0x18593c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_185940:
    if (ctx->pc == 0x185940u) {
        ctx->pc = 0x185944u;
        goto label_185944;
    }
    ctx->pc = 0x18593Cu;
    {
        const bool branch_taken_0x18593c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18593c) {
            ctx->pc = 0x185998u;
            goto label_185998;
        }
    }
    ctx->pc = 0x185944u;
label_185944:
    // 0x185944: 0x9242023c  lbu         $v0, 0x23C($s2)
    ctx->pc = 0x185944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_185948:
    // 0x185948: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x185948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18594c:
    // 0x18594c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_185950:
    if (ctx->pc == 0x185950u) {
        ctx->pc = 0x185954u;
        goto label_185954;
    }
    ctx->pc = 0x18594Cu;
    {
        const bool branch_taken_0x18594c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18594c) {
            ctx->pc = 0x185970u;
            goto label_185970;
        }
    }
    ctx->pc = 0x185954u;
label_185954:
    // 0x185954: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x185954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_185958:
    // 0x185958: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18595c:
    if (ctx->pc == 0x18595Cu) {
        ctx->pc = 0x185960u;
        goto label_185960;
    }
    ctx->pc = 0x185958u;
    {
        const bool branch_taken_0x185958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185958) {
            ctx->pc = 0x185988u;
            goto label_185988;
        }
    }
    ctx->pc = 0x185960u;
label_185960:
    // 0x185960: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x185960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_185964:
    // 0x185964: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x185964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_185968:
    // 0x185968: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18596c:
    if (ctx->pc == 0x18596Cu) {
        ctx->pc = 0x185970u;
        goto label_185970;
    }
    ctx->pc = 0x185968u;
    {
        const bool branch_taken_0x185968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185968) {
            ctx->pc = 0x185988u;
            goto label_185988;
        }
    }
    ctx->pc = 0x185970u;
label_185970:
    // 0x185970: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_185974:
    // 0x185974: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x185974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_185978:
    // 0x185978: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x185978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18597c:
    // 0x18597c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_185980:
    // 0x185980: 0x10000008  b           . + 4 + (0x8 << 2)
label_185984:
    if (ctx->pc == 0x185984u) {
        ctx->pc = 0x185984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185980u;
        // 0x185984: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185988u;
        goto label_185988;
    }
    ctx->pc = 0x185980u;
    {
        const bool branch_taken_0x185980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185980u;
        // 0x185984: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185980) {
            ctx->pc = 0x1859A4u;
            goto label_1859a4;
        }
    }
    ctx->pc = 0x185988u;
label_185988:
    // 0x185988: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18598c:
    // 0x18598c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_185990:
    // 0x185990: 0x10000004  b           . + 4 + (0x4 << 2)
label_185994:
    if (ctx->pc == 0x185994u) {
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185990u;
        // 0x185994: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185998u;
        goto label_185998;
    }
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185990u;
        // 0x185994: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185990) {
            ctx->pc = 0x1859A4u;
            goto label_1859a4;
        }
    }
    ctx->pc = 0x185998u;
label_185998:
    // 0x185998: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18599c:
    // 0x18599c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1859a0:
    // 0x1859a0: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x1859a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_1859a4:
    // 0x1859a4: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1859a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1859a8:
    // 0x1859a8: 0x26440264  addiu       $a0, $s2, 0x264
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_1859ac:
    // 0x1859ac: 0xc0439e8  jal         func_10E7A0
label_1859b0:
    if (ctx->pc == 0x1859B0u) {
        ctx->pc = 0x1859B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859ACu;
        // 0x1859b0: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859B4u;
        goto label_1859b4;
    }
    ctx->pc = 0x1859ACu;
    SET_GPR_U32(ctx, 31, 0x1859B4u);
    ctx->pc = 0x1859B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859ACu;
    // 0x1859b0: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1859ACu, 0x1859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859B4u;
label_1859b4:
    // 0x1859b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1859b8:
    if (ctx->pc == 0x1859B8u) {
        ctx->pc = 0x1859B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859B4u;
        // 0x1859b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1859BCu;
        goto label_1859bc;
    }
    ctx->pc = 0x1859B4u;
    {
        const bool branch_taken_0x1859b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859B4u;
        // 0x1859b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859b4) {
            ctx->pc = 0x1859C8u;
            goto label_1859c8;
        }
    }
    ctx->pc = 0x1859BCu;
label_1859bc:
    // 0x1859bc: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1859c0:
    // 0x1859c0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1859c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1859c4:
    // 0x1859c4: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x1859c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_1859c8:
    // 0x1859c8: 0xc062948  jal         func_18A520
label_1859cc:
    if (ctx->pc == 0x1859CCu) {
        ctx->pc = 0x1859D0u;
        goto label_1859d0;
    }
    ctx->pc = 0x1859C8u;
    SET_GPR_U32(ctx, 31, 0x1859D0u);
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x1859D0u;
label_1859d0:
    // 0x1859d0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1859d4:
    if (ctx->pc == 0x1859D4u) {
        ctx->pc = 0x1859D8u;
        goto label_1859d8;
    }
    ctx->pc = 0x1859D0u;
    {
        const bool branch_taken_0x1859d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859d0) {
            ctx->pc = 0x185A74u;
            goto label_185a74;
        }
    }
    ctx->pc = 0x1859D8u;
label_1859d8:
    // 0x1859d8: 0x9243023c  lbu         $v1, 0x23C($s2)
    ctx->pc = 0x1859d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_1859dc:
    // 0x1859dc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1859e0:
    // 0x1859e0: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1859e4:
    if (ctx->pc == 0x1859E4u) {
        ctx->pc = 0x1859E8u;
        goto label_1859e8;
    }
    ctx->pc = 0x1859E0u;
    {
        const bool branch_taken_0x1859e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859e0) {
            ctx->pc = 0x185A74u;
            goto label_185a74;
        }
    }
    ctx->pc = 0x1859E8u;
label_1859e8:
    // 0x1859e8: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x1859e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_1859ec:
    // 0x1859ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1859ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1859f0:
    // 0x1859f0: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x1859f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_1859f4:
    // 0x1859f4: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x1859f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_1859f8:
    // 0x1859f8: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_1859fc:
    if (ctx->pc == 0x1859FCu) {
        ctx->pc = 0x185A00u;
        goto label_185a00;
    }
    ctx->pc = 0x1859F8u;
    {
        const bool branch_taken_0x1859f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1859f8) {
            ctx->pc = 0x185A54u;
            goto label_185a54;
        }
    }
    ctx->pc = 0x185A00u;
label_185a00:
    // 0x185a00: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x185a00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_185a04:
    // 0x185a04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x185a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_185a08:
    // 0x185a08: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x185a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_185a0c:
    // 0x185a0c: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x185a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_185a10:
    // 0x185a10: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_185a14:
    // 0x185a14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x185a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_185a18:
    // 0x185a18: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x185a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_185a1c:
    // 0x185a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185a20:
    // 0x185a20: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_185a24:
    // 0x185a24: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x185a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_185a28:
    // 0x185a28: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_185a2c:
    if (ctx->pc == 0x185A2Cu) {
        ctx->pc = 0x185A30u;
        goto label_185a30;
    }
    ctx->pc = 0x185A28u;
    {
        const bool branch_taken_0x185a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a28) {
            ctx->pc = 0x185A54u;
            goto label_185a54;
        }
    }
    ctx->pc = 0x185A30u;
label_185a30:
    // 0x185a30: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x185a30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_185a34:
    // 0x185a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x185a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_185a38:
    // 0x185a38: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_185a3c:
    if (ctx->pc == 0x185A3Cu) {
        ctx->pc = 0x185A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A38u;
        // 0x185a3c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A40u;
        goto label_185a40;
    }
    ctx->pc = 0x185A38u;
    {
        const bool branch_taken_0x185a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A38u;
        // 0x185a3c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a38) {
            ctx->pc = 0x185A54u;
            goto label_185a54;
        }
    }
    ctx->pc = 0x185A40u;
label_185a40:
    // 0x185a40: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_185a44:
    // 0x185a44: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x185a44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_185a48:
    // 0x185a48: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_185a4c:
    if (ctx->pc == 0x185A4Cu) {
        ctx->pc = 0x185A50u;
        goto label_185a50;
    }
    ctx->pc = 0x185A48u;
    {
        const bool branch_taken_0x185a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x185a48) {
            ctx->pc = 0x185A54u;
            goto label_185a54;
        }
    }
    ctx->pc = 0x185A50u;
label_185a50:
    // 0x185a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185a54:
    // 0x185a54: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_185a58:
    if (ctx->pc == 0x185A58u) {
        ctx->pc = 0x185A5Cu;
        goto label_185a5c;
    }
    ctx->pc = 0x185A54u;
    {
        const bool branch_taken_0x185a54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x185a54) {
            ctx->pc = 0x185A74u;
            goto label_185a74;
        }
    }
    ctx->pc = 0x185A5Cu;
label_185a5c:
    // 0x185a5c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x185a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_185a60:
    // 0x185a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185a64:
    // 0x185a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x185a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185a68:
    // 0x185a68: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x185a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_185a6c:
    // 0x185a6c: 0xc061d44  jal         func_187510
label_185a70:
    if (ctx->pc == 0x185A70u) {
        ctx->pc = 0x185A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A6Cu;
        // 0x185a70: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A74u;
        goto label_185a74;
    }
    ctx->pc = 0x185A6Cu;
    SET_GPR_U32(ctx, 31, 0x185A74u);
    ctx->pc = 0x185A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185A6Cu;
    // 0x185a70: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187510u;
    { ctx->pc = 0x187510; return; }
    ctx->pc = 0x185A74u;
label_185a74:
    // 0x185a74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x185a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_185a78:
    // 0x185a78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185a7c:
    // 0x185a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185a80:
    // 0x185a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_185a84:
    // 0x185a84: 0x3e00008  jr          $ra
label_185a88:
    if (ctx->pc == 0x185A88u) {
        ctx->pc = 0x185A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A84u;
        // 0x185a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185A8Cu;
        goto label_185a8c;
    }
    ctx->pc = 0x185A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A84u;
        // 0x185a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185A8Cu;
label_185a8c:
    // 0x185a8c: 0x0  nop
    ctx->pc = 0x185a8cu;
    // NOP
label_185a90:
    // 0x185a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x185a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_185a94:
    // 0x185a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_185a98:
    // 0x185a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_185a9c:
    // 0x185a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_185aa0:
    // 0x185aa0: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x185aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
label_185aa4:
    // 0x185aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185aa8:
    // 0x185aa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_185aac:
    // 0x185aac: 0x10650027  beq         $v1, $a1, . + 4 + (0x27 << 2)
label_185ab0:
    if (ctx->pc == 0x185AB0u) {
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AACu;
        // 0x185ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AB4u;
        goto label_185ab4;
    }
    ctx->pc = 0x185AACu;
    {
        const bool branch_taken_0x185aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x185AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AACu;
        // 0x185ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185aac) {
            ctx->pc = 0x185B4Cu;
            goto label_185b4c;
        }
    }
    ctx->pc = 0x185AB4u;
label_185ab4:
    // 0x185ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x185ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185ab8:
    // 0x185ab8: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
label_185abc:
    if (ctx->pc == 0x185ABCu) {
        ctx->pc = 0x185AC0u;
        goto label_185ac0;
    }
    ctx->pc = 0x185AB8u;
    {
        const bool branch_taken_0x185ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x185ab8) {
            ctx->pc = 0x185AFCu;
            goto label_185afc;
        }
    }
    ctx->pc = 0x185AC0u;
label_185ac0:
    // 0x185ac0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_185ac4:
    if (ctx->pc == 0x185AC4u) {
        ctx->pc = 0x185AC8u;
        goto label_185ac8;
    }
    ctx->pc = 0x185AC0u;
    {
        const bool branch_taken_0x185ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185ac0) {
            ctx->pc = 0x185AD0u;
            goto label_185ad0;
        }
    }
    ctx->pc = 0x185AC8u;
label_185ac8:
    // 0x185ac8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_185acc:
    if (ctx->pc == 0x185ACCu) {
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x8623003c  lh          $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AD0u;
        goto label_185ad0;
    }
    ctx->pc = 0x185AC8u;
    {
        const bool branch_taken_0x185ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AC8u;
        // 0x185acc: 0x8623003c  lh          $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ac8) {
            ctx->pc = 0x185B78u;
            goto label_185b78;
        }
    }
    ctx->pc = 0x185AD0u;
label_185ad0:
    // 0x185ad0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185ad4:
    // 0x185ad4: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
label_185ad8:
    // 0x185ad8: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_185adc:
    // 0x185adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185ae0:
    // 0x185ae0: 0x0  nop
    ctx->pc = 0x185ae0u;
    // NOP
label_185ae4:
    // 0x185ae4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185ae8:
    // 0x185ae8: 0x0  nop
    ctx->pc = 0x185ae8u;
    // NOP
label_185aec:
    // 0x185aec: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_185af0:
    if (ctx->pc == 0x185AF0u) {
        ctx->pc = 0x185AF4u;
        goto label_185af4;
    }
    ctx->pc = 0x185AECu;
    {
        const bool branch_taken_0x185aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185aec) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185AF4u;
label_185af4:
    // 0x185af4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_185af8:
    if (ctx->pc == 0x185AF8u) {
        ctx->pc = 0x185AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF4u;
        // 0x185af8: 0xa224023c  sb          $a0, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185AFCu;
        goto label_185afc;
    }
    ctx->pc = 0x185AF4u;
    {
        const bool branch_taken_0x185af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AF4u;
        // 0x185af8: 0xa224023c  sb          $a0, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185af4) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185AFCu;
label_185afc:
    // 0x185afc: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185b00:
    // 0x185b00: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
label_185b04:
    // 0x185b04: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_185b08:
    // 0x185b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185b0c:
    // 0x185b0c: 0x0  nop
    ctx->pc = 0x185b0cu;
    // NOP
label_185b10:
    // 0x185b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185b14:
    // 0x185b14: 0x0  nop
    ctx->pc = 0x185b14u;
    // NOP
label_185b18:
    // 0x185b18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_185b1c:
    if (ctx->pc == 0x185B1Cu) {
        ctx->pc = 0x185B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B18u;
        // 0x185b1c: 0x3c034974  lui         $v1, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B20u;
        goto label_185b20;
    }
    ctx->pc = 0x185B18u;
    {
        const bool branch_taken_0x185b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B18u;
        // 0x185b1c: 0x3c034974  lui         $v1, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b18) {
            ctx->pc = 0x185B28u;
            goto label_185b28;
        }
    }
    ctx->pc = 0x185B20u;
label_185b20:
    // 0x185b20: 0x10000014  b           . + 4 + (0x14 << 2)
label_185b24:
    if (ctx->pc == 0x185B24u) {
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0xa220023c  sb          $zero, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B28u;
        goto label_185b28;
    }
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0xa220023c  sb          $zero, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B28u;
label_185b28:
    // 0x185b28: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_185b2c:
    // 0x185b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185b30:
    // 0x185b30: 0x0  nop
    ctx->pc = 0x185b30u;
    // NOP
label_185b34:
    // 0x185b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185b38:
    // 0x185b38: 0x0  nop
    ctx->pc = 0x185b38u;
    // NOP
label_185b3c:
    // 0x185b3c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_185b40:
    if (ctx->pc == 0x185B40u) {
        ctx->pc = 0x185B44u;
        goto label_185b44;
    }
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B44u;
label_185b44:
    // 0x185b44: 0x1000000b  b           . + 4 + (0xB << 2)
label_185b48:
    if (ctx->pc == 0x185B48u) {
        ctx->pc = 0x185B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B44u;
        // 0x185b48: 0xa225023c  sb          $a1, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B4Cu;
        goto label_185b4c;
    }
    ctx->pc = 0x185B44u;
    {
        const bool branch_taken_0x185b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B44u;
        // 0x185b48: 0xa225023c  sb          $a1, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b44) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B4Cu;
label_185b4c:
    // 0x185b4c: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185b50:
    // 0x185b50: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x185b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_185b54:
    // 0x185b54: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_185b58:
    // 0x185b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185b5c:
    // 0x185b5c: 0x0  nop
    ctx->pc = 0x185b5cu;
    // NOP
label_185b60:
    // 0x185b60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185b64:
    // 0x185b64: 0x0  nop
    ctx->pc = 0x185b64u;
    // NOP
label_185b68:
    // 0x185b68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_185b6c:
    if (ctx->pc == 0x185B6Cu) {
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B70u;
        goto label_185b70;
    }
    ctx->pc = 0x185B68u;
    {
        const bool branch_taken_0x185b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B68u;
        // 0x185b6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b68) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B70u;
label_185b70:
    // 0x185b70: 0xa223023c  sb          $v1, 0x23C($s1)
    ctx->pc = 0x185b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 3));
label_185b74:
    // 0x185b74: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x185b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_185b78:
    // 0x185b78: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_185b7c:
    // 0x185b7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_185b80:
    if (ctx->pc == 0x185B80u) {
        ctx->pc = 0x185B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B7Cu;
        // 0x185b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B84u;
        goto label_185b84;
    }
    ctx->pc = 0x185B7Cu;
    {
        const bool branch_taken_0x185b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B7Cu;
        // 0x185b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b7c) {
            ctx->pc = 0x185B88u;
            goto label_185b88;
        }
    }
    ctx->pc = 0x185B84u;
label_185b84:
    // 0x185b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185b88:
    // 0x185b88: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_185b8c:
    if (ctx->pc == 0x185B8Cu) {
        ctx->pc = 0x185B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B88u;
        // 0x185b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B90u;
        goto label_185b90;
    }
    ctx->pc = 0x185B88u;
    {
        const bool branch_taken_0x185b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B88u;
        // 0x185b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b88) {
            ctx->pc = 0x185BD0u;
            goto label_185bd0;
        }
    }
    ctx->pc = 0x185B90u;
label_185b90:
    // 0x185b90: 0xc062210  jal         func_188840
label_185b94:
    if (ctx->pc == 0x185B94u) {
        ctx->pc = 0x185B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B90u;
        // 0x185b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B98u;
        goto label_185b98;
    }
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B90u;
    // 0x185b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188840u;
    { ctx->pc = 0x188840; return; }
    ctx->pc = 0x185B98u;
label_185b98:
    // 0x185b98: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x185b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185b9c:
    // 0x185b9c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_185ba0:
    // 0x185ba0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_185ba4:
    if (ctx->pc == 0x185BA4u) {
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BA8u;
        goto label_185ba8;
    }
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BC0u;
            goto label_185bc0;
        }
    }
    ctx->pc = 0x185BA8u;
label_185ba8:
    // 0x185ba8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_185bac:
    // 0x185bac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_185bb0:
    // 0x185bb0: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x185bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_185bb4:
    // 0x185bb4: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x185bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
label_185bb8:
    // 0x185bb8: 0x10000352  b           . + 4 + (0x352 << 2)
label_185bbc:
    if (ctx->pc == 0x185BBCu) {
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BC0u;
        goto label_185bc0;
    }
    ctx->pc = 0x185BB8u;
    {
        const bool branch_taken_0x185bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bb8) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185BC0u;
label_185bc0:
    // 0x185bc0: 0xc06237c  jal         func_188DF0
label_185bc4:
    if (ctx->pc == 0x185BC4u) {
        ctx->pc = 0x185BC8u;
        goto label_185bc8;
    }
    ctx->pc = 0x185BC0u;
    SET_GPR_U32(ctx, 31, 0x185BC8u);
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x185BC8u;
label_185bc8:
    // 0x185bc8: 0x1000034f  b           . + 4 + (0x34F << 2)
label_185bcc:
    if (ctx->pc == 0x185BCCu) {
        ctx->pc = 0x185BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC8u;
        // 0x185bcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BD0u;
        goto label_185bd0;
    }
    ctx->pc = 0x185BC8u;
    {
        const bool branch_taken_0x185bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC8u;
        // 0x185bcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bc8) {
            ctx->pc = 0x186908u;
            { ctx->pc = 0x186908; return; }
        }
    }
    ctx->pc = 0x185BD0u;
label_185bd0:
    // 0x185bd0: 0x9225023d  lbu         $a1, 0x23D($s1)
    ctx->pc = 0x185bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185bd4:
    // 0x185bd4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x185bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_185bd8:
    // 0x185bd8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_185bdc:
    if (ctx->pc == 0x185BDCu) {
        ctx->pc = 0x185BE0u;
        goto label_185be0;
    }
    ctx->pc = 0x185BD8u;
    {
        const bool branch_taken_0x185bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185bd8) {
            ctx->pc = 0x185C14u;
            goto label_185c14;
        }
    }
    ctx->pc = 0x185BE0u;
label_185be0:
    // 0x185be0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185be0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_185be4:
    // 0x185be4: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x185be4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_185be8:
    // 0x185be8: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_185bec:
    // 0x185bec: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_185bf0:
    // 0x185bf0: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x185bf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_185bf4:
    // 0x185bf4: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x185bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_185bf8:
    // 0x185bf8: 0x1c600342  bgtz        $v1, . + 4 + (0x342 << 2)
label_185bfc:
    if (ctx->pc == 0x185BFCu) {
        ctx->pc = 0x185C00u;
        goto label_185c00;
    }
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185C00u;
label_185c00:
    // 0x185c00: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185c04:
    // 0x185c04: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x185c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_185c08:
    // 0x185c08: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_185c0c:
    // 0x185c0c: 0x1000033d  b           . + 4 + (0x33D << 2)
label_185c10:
    if (ctx->pc == 0x185C10u) {
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C14u;
        goto label_185c14;
    }
    ctx->pc = 0x185C0Cu;
    {
        const bool branch_taken_0x185c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C0Cu;
        // 0x185c10: 0xa6200224  sh          $zero, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c0c) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185C14u;
label_185c14:
    // 0x185c14: 0x9224023c  lbu         $a0, 0x23C($s1)
    ctx->pc = 0x185c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 572)));
label_185c18:
    // 0x185c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x185c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_185c1c:
    // 0x185c1c: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
label_185c20:
    if (ctx->pc == 0x185C20u) {
        ctx->pc = 0x185C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C1Cu;
        // 0x185c20: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C24u;
        goto label_185c24;
    }
    ctx->pc = 0x185C1Cu;
    {
        const bool branch_taken_0x185c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C1Cu;
        // 0x185c20: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c1c) {
            ctx->pc = 0x185E88u;
            goto label_185e88;
        }
    }
    ctx->pc = 0x185C24u;
label_185c24:
    // 0x185c24: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x185c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_185c28:
    // 0x185c28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_185c2c:
    if (ctx->pc == 0x185C2Cu) {
        ctx->pc = 0x185C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C28u;
        // 0x185c2c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C30u;
        goto label_185c30;
    }
    ctx->pc = 0x185C28u;
    {
        const bool branch_taken_0x185c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C28u;
        // 0x185c2c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c28) {
            ctx->pc = 0x185CA0u;
            goto label_185ca0;
        }
    }
    ctx->pc = 0x185C30u;
label_185c30:
    // 0x185c30: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_185c34:
    // 0x185c34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x185c34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_185c38:
    // 0x185c38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_185c3c:
    // 0x185c3c: 0xc08f0cc  jal         func_23C330
label_185c40:
    if (ctx->pc == 0x185C40u) {
        ctx->pc = 0x185C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C3Cu;
        // 0x185c40: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C44u;
        goto label_185c44;
    }
    ctx->pc = 0x185C3Cu;
    SET_GPR_U32(ctx, 31, 0x185C44u);
    ctx->pc = 0x185C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C3Cu;
    // 0x185c40: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x185C44u;
label_185c44:
    // 0x185c44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x185c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_185c48:
    // 0x185c48: 0x92240230  lbu         $a0, 0x230($s1)
    ctx->pc = 0x185c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_185c4c:
    // 0x185c4c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_185c50:
    // 0x185c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x185c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_185c54:
    // 0x185c54: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_185c58:
    // 0x185c58: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_185c5c:
    // 0x185c5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_185c60:
    // 0x185c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185c64:
    // 0x185c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_185c68:
    // 0x185c68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x185c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_185c6c:
    // 0x185c6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_185c70:
    // 0x185c70: 0x24422b15  addiu       $v0, $v0, 0x2B15
    ctx->pc = 0x185c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11029));
label_185c74:
    // 0x185c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185c78:
    // 0x185c78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x185c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_185c7c:
    // 0x185c7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x185c7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185c80:
    // 0x185c80: 0x0  nop
    ctx->pc = 0x185c80u;
    // NOP
label_185c84:
    // 0x185c84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x185c84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_185c88:
    // 0x185c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185c8c:
    // 0x185c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185c90:
    // 0x185c90: 0x0  nop
    ctx->pc = 0x185c90u;
    // NOP
label_185c94:
    // 0x185c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_185c98:
    // 0x185c98: 0xa6220224  sh          $v0, 0x224($s1)
    ctx->pc = 0x185c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 2));
label_185c9c:
    // 0x185c9c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x185c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_185ca0:
    // 0x185ca0: 0x8224023d  lb          $a0, 0x23D($s1)
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185ca4:
    // 0x185ca4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x185ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ca8:
    // 0x185ca8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185cac:
    // 0x185cac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185cb0:
    // 0x185cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185cb4:
    // 0x185cb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x185cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_185cb8:
    // 0x185cb8: 0x308200cb  andi        $v0, $a0, 0xCB
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)203);
label_185cbc:
    // 0x185cbc: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x185cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_185cc0:
    // 0x185cc0: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185cc4:
    // 0x185cc4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x185cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_185cc8:
    // 0x185cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185ccc:
    // 0x185ccc: 0x0  nop
    ctx->pc = 0x185cccu;
    // NOP
label_185cd0:
    // 0x185cd0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185cd4:
    if (ctx->pc == 0x185CD4u) {
        ctx->pc = 0x185CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CD0u;
        // 0x185cd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185CD8u;
        goto label_185cd8;
    }
    ctx->pc = 0x185CD0u;
    {
        const bool branch_taken_0x185cd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CD0u;
        // 0x185cd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cd0) {
            ctx->pc = 0x185CECu;
            goto label_185cec;
        }
    }
    ctx->pc = 0x185CD8u;
label_185cd8:
    // 0x185cd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185cdc:
    // 0x185cdc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ce0:
    // 0x185ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185ce4:
    // 0x185ce4: 0x1000000d  b           . + 4 + (0xD << 2)
label_185ce8:
    if (ctx->pc == 0x185CE8u) {
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185CECu;
        goto label_185cec;
    }
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185CECu;
label_185cec:
    // 0x185cec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185cf0:
    // 0x185cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185cf4:
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
label_185cf8:
    // 0x185cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185cfc:
    // 0x185cfc: 0x0  nop
    ctx->pc = 0x185cfcu;
    // NOP
label_185d00:
    // 0x185d00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_185d04:
    if (ctx->pc == 0x185D04u) {
        ctx->pc = 0x185D08u;
        goto label_185d08;
    }
    ctx->pc = 0x185D00u;
    {
        const bool branch_taken_0x185d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185d00) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D08u;
label_185d08:
    // 0x185d08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185d0c:
    // 0x185d0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185d10:
    // 0x185d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185d14:
    // 0x185d14: 0x10000001  b           . + 4 + (0x1 << 2)
label_185d18:
    if (ctx->pc == 0x185D18u) {
        ctx->pc = 0x185D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D14u;
        // 0x185d18: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185D1Cu;
        goto label_185d1c;
    }
    ctx->pc = 0x185D14u;
    {
        const bool branch_taken_0x185d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D14u;
        // 0x185d18: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d14) {
            ctx->pc = 0x185D1Cu;
            goto label_185d1c;
        }
    }
    ctx->pc = 0x185D1Cu;
label_185d1c:
    // 0x185d1c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x185d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_185d20:
    // 0x185d20: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x185d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_185d24:
    // 0x185d24: 0x4a000138  vcallms     0x20
    ctx->pc = 0x185d24u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_185d28:
    // 0x185d28: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x185d28u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_185d2c:
    // 0x185d2c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x185d2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185d30:
    // 0x185d30: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x185d30u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_185d34:
    // 0x185d34: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x185d34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_185d38:
    // 0x185d38: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_185d3c:
    // 0x185d3c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_185d40:
    // 0x185d40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x185d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_185d44:
    // 0x185d44: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_185d48:
    // 0x185d48: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x185d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185d4c:
    // 0x185d4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x185d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_185d50:
    // 0x185d50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x185d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_185d54:
    // 0x185d54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x185d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_185d58:
    // 0x185d58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x185d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_185d5c:
    // 0x185d5c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x185d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185d60:
    // 0x185d60: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x185d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_185d64:
    // 0x185d64: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x185d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_185d68:
    // 0x185d68: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x185d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185d6c:
    // 0x185d6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_185d70:
    // 0x185d70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x185d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_185d74:
    // 0x185d74: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x185d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185d78:
    // 0x185d78: 0xc0439e8  jal         func_10E7A0
label_185d7c:
    if (ctx->pc == 0x185D7Cu) {
        ctx->pc = 0x185D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D78u;
        // 0x185d7c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185D80u;
        goto label_185d80;
    }
    ctx->pc = 0x185D78u;
    SET_GPR_U32(ctx, 31, 0x185D80u);
    ctx->pc = 0x185D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D78u;
    // 0x185d7c: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185D78u, 0x185D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D80u;
label_185d80:
    // 0x185d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185d84:
    if (ctx->pc == 0x185D84u) {
        ctx->pc = 0x185D88u;
        goto label_185d88;
    }
    ctx->pc = 0x185D80u;
    {
        const bool branch_taken_0x185d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185d80) {
            ctx->pc = 0x185D90u;
            goto label_185d90;
        }
    }
    ctx->pc = 0x185D88u;
label_185d88:
    // 0x185d88: 0x10000020  b           . + 4 + (0x20 << 2)
label_185d8c:
    if (ctx->pc == 0x185D8Cu) {
        ctx->pc = 0x185D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D88u;
        // 0x185d8c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185D90u;
        goto label_185d90;
    }
    ctx->pc = 0x185D88u;
    {
        const bool branch_taken_0x185d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D88u;
        // 0x185d8c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d88) {
            ctx->pc = 0x185E0Cu;
            goto label_185e0c;
        }
    }
    ctx->pc = 0x185D90u;
label_185d90:
    // 0x185d90: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185d94:
    // 0x185d94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185d98:
    // 0x185d98: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185d9c:
    // 0x185d9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185da0:
    // 0x185da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185da4:
    // 0x185da4: 0x0  nop
    ctx->pc = 0x185da4u;
    // NOP
label_185da8:
    // 0x185da8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185da8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_185dac:
    // 0x185dac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185db0:
    // 0x185db0: 0x0  nop
    ctx->pc = 0x185db0u;
    // NOP
label_185db4:
    // 0x185db4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185db8:
    if (ctx->pc == 0x185DB8u) {
        ctx->pc = 0x185DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DB4u;
        // 0x185db8: 0xe7ac007c  swc1        $f12, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DBCu;
        goto label_185dbc;
    }
    ctx->pc = 0x185DB4u;
    {
        const bool branch_taken_0x185db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DB4u;
        // 0x185db8: 0xe7ac007c  swc1        $f12, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185db4) {
            ctx->pc = 0x185DD0u;
            goto label_185dd0;
        }
    }
    ctx->pc = 0x185DBCu;
label_185dbc:
    // 0x185dbc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185dc0:
    // 0x185dc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185dc4:
    // 0x185dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185dc8:
    // 0x185dc8: 0x1000000d  b           . + 4 + (0xD << 2)
label_185dcc:
    if (ctx->pc == 0x185DCCu) {
        ctx->pc = 0x185DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC8u;
        // 0x185dcc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DD0u;
        goto label_185dd0;
    }
    ctx->pc = 0x185DC8u;
    {
        const bool branch_taken_0x185dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DC8u;
        // 0x185dcc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185dc8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DD0u;
label_185dd0:
    // 0x185dd0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_185dd4:
    // 0x185dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185dd8:
    // 0x185dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185ddc:
    // 0x185ddc: 0x0  nop
    ctx->pc = 0x185ddcu;
    // NOP
label_185de0:
    // 0x185de0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185de4:
    // 0x185de4: 0x0  nop
    ctx->pc = 0x185de4u;
    // NOP
label_185de8:
    // 0x185de8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_185dec:
    if (ctx->pc == 0x185DECu) {
        ctx->pc = 0x185DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE8u;
        // 0x185dec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185DF0u;
        goto label_185df0;
    }
    ctx->pc = 0x185DE8u;
    {
        const bool branch_taken_0x185de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DE8u;
        // 0x185dec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185de8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DF0u;
label_185df0:
    // 0x185df0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185df4:
    // 0x185df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185df8:
    // 0x185df8: 0x10000001  b           . + 4 + (0x1 << 2)
label_185dfc:
    if (ctx->pc == 0x185DFCu) {
        ctx->pc = 0x185DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF8u;
        // 0x185dfc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E00u;
        goto label_185e00;
    }
    ctx->pc = 0x185DF8u;
    {
        const bool branch_taken_0x185df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DF8u;
        // 0x185dfc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185df8) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185E00u;
label_185e00:
    // 0x185e00: 0xc06d448  jal         func_1B5120
label_185e04:
    if (ctx->pc == 0x185E04u) {
        ctx->pc = 0x185E08u;
        goto label_185e08;
    }
    ctx->pc = 0x185E00u;
    SET_GPR_U32(ctx, 31, 0x185E08u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185E08u;
label_185e08:
    // 0x185e08: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x185e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_185e0c:
    // 0x185e0c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x185e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185e10:
    // 0x185e10: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_185e14:
    // 0x185e14: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_185e18:
    // 0x185e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185e1c:
    // 0x185e1c: 0x0  nop
    ctx->pc = 0x185e1cu;
    // NOP
label_185e20:
    // 0x185e20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185e24:
    // 0x185e24: 0x0  nop
    ctx->pc = 0x185e24u;
    // NOP
label_185e28:
    // 0x185e28: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185e2c:
    if (ctx->pc == 0x185E2Cu) {
        ctx->pc = 0x185E30u;
        goto label_185e30;
    }
    ctx->pc = 0x185E28u;
    {
        const bool branch_taken_0x185e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185e28) {
            ctx->pc = 0x185E44u;
            goto label_185e44;
        }
    }
    ctx->pc = 0x185E30u;
label_185e30:
    // 0x185e30: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_185e34:
    // 0x185e34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185e38:
    // 0x185e38: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x185e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_185e3c:
    // 0x185e3c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_185e40:
    if (ctx->pc == 0x185E40u) {
        ctx->pc = 0x185E44u;
        goto label_185e44;
    }
    ctx->pc = 0x185E3Cu;
    {
        const bool branch_taken_0x185e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e3c) {
            ctx->pc = 0x185E7Cu;
            goto label_185e7c;
        }
    }
    ctx->pc = 0x185E44u;
label_185e44:
    // 0x185e44: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x185e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185e48:
    // 0x185e48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x185e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185e4c:
    // 0x185e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_185e50:
    // 0x185e50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185e54:
    // 0x185e54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185e58:
    // 0x185e58: 0x0  nop
    ctx->pc = 0x185e58u;
    // NOP
label_185e5c:
    // 0x185e5c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x185e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_185e60:
    // 0x185e60: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x185e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185e64:
    // 0x185e64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x185e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_185e68:
    // 0x185e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x185e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_185e6c:
    // 0x185e6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_185e70:
    // 0x185e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185e74:
    // 0x185e74: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_185e78:
    if (ctx->pc == 0x185E78u) {
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E7Cu;
        goto label_185e7c;
    }
    ctx->pc = 0x185E74u;
    {
        const bool branch_taken_0x185e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e74) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185E7Cu;
label_185e7c:
    // 0x185e7c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_185e80:
    // 0x185e80: 0x100002a0  b           . + 4 + (0x2A0 << 2)
label_185e84:
    if (ctx->pc == 0x185E84u) {
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E88u;
        goto label_185e88;
    }
    ctx->pc = 0x185E80u;
    {
        const bool branch_taken_0x185e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e80) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185E88u;
label_185e88:
    // 0x185e88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_185e8c:
    if (ctx->pc == 0x185E8Cu) {
        ctx->pc = 0x185E90u;
        goto label_185e90;
    }
    ctx->pc = 0x185E88u;
    {
        const bool branch_taken_0x185e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e88) {
            ctx->pc = 0x185EB0u;
            goto label_185eb0;
        }
    }
    ctx->pc = 0x185E90u;
label_185e90:
    // 0x185e90: 0xc06237c  jal         func_188DF0
label_185e94:
    if (ctx->pc == 0x185E94u) {
        ctx->pc = 0x185E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E90u;
        // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E98u;
        goto label_185e98;
    }
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E90u;
    // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0x1440029a  bnez        $v0, . + 4 + (0x29A << 2)
label_185e9c:
    if (ctx->pc == 0x185E9Cu) {
        ctx->pc = 0x185EA0u;
        goto label_185ea0;
    }
    ctx->pc = 0x185E98u;
    {
        const bool branch_taken_0x185e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e98) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185EA0u;
label_185ea0:
    // 0x185ea0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185ea4:
    // 0x185ea4: 0x306300cb  andi        $v1, $v1, 0xCB
    ctx->pc = 0x185ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)203);
label_185ea8:
    // 0x185ea8: 0x10000296  b           . + 4 + (0x296 << 2)
label_185eac:
    if (ctx->pc == 0x185EACu) {
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EB0u;
        goto label_185eb0;
    }
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185EB0u;
label_185eb0:
    // 0x185eb0: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x185eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
label_185eb4:
    // 0x185eb4: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x185eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_185eb8:
    // 0x185eb8: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
label_185ebc:
    if (ctx->pc == 0x185EBCu) {
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EC0u;
        goto label_185ec0;
    }
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x18611Cu;
            { ctx->pc = 0x18611c; return; }
        }
    }
    ctx->pc = 0x185EC0u;
label_185ec0:
    // 0x185ec0: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x185ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_185ec4:
    // 0x185ec4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185ec8:
    // 0x185ec8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x185ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_185ecc:
    // 0x185ecc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ed0:
    // 0x185ed0: 0x306300eb  andi        $v1, $v1, 0xEB
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)235);
label_185ed4:
    // 0x185ed4: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_185ed8:
    // 0x185ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185edc:
    // 0x185edc: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x185edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185ee0:
    // 0x185ee0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x185ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185ee4:
    // 0x185ee4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x185ee4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_185ee8:
    // 0x185ee8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185eec:
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
label_185ef0:
    // 0x185ef0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185ef4:
    if (ctx->pc == 0x185EF4u) {
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EF8u;
        goto label_185ef8;
    }
    ctx->pc = 0x185EF0u;
    {
        const bool branch_taken_0x185ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ef0) {
            ctx->pc = 0x185F0Cu;
            goto label_185f0c;
        }
    }
    ctx->pc = 0x185EF8u;
label_185ef8:
    // 0x185ef8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185efc:
    // 0x185efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f00:
    // 0x185f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f04:
    // 0x185f04: 0x1000000d  b           . + 4 + (0xD << 2)
label_185f08:
    if (ctx->pc == 0x185F08u) {
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F0Cu;
        goto label_185f0c;
    }
    ctx->pc = 0x185F04u;
    {
        const bool branch_taken_0x185f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f04) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f10:
    // 0x185f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f14:
    // 0x185f14: 0x0  nop
    ctx->pc = 0x185f14u;
    // NOP
label_185f18:
    // 0x185f18: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185f1c:
    // 0x185f1c: 0x0  nop
    ctx->pc = 0x185f1cu;
    // NOP
label_185f20:
    // 0x185f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_185f24:
    if (ctx->pc == 0x185F24u) {
        ctx->pc = 0x185F28u;
        goto label_185f28;
    }
    ctx->pc = 0x185F20u;
    {
        const bool branch_taken_0x185f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f20) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F28u;
label_185f28:
    // 0x185f28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185f2c:
    // 0x185f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f30:
    // 0x185f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f34:
    // 0x185f34: 0x10000001  b           . + 4 + (0x1 << 2)
label_185f38:
    if (ctx->pc == 0x185F38u) {
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F3Cu;
        goto label_185f3c;
    }
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0xc06d448  jal         func_1B5120
label_185f40:
    if (ctx->pc == 0x185F40u) {
        ctx->pc = 0x185F44u;
        goto label_185f44;
    }
    ctx->pc = 0x185F3Cu;
    SET_GPR_U32(ctx, 31, 0x185F44u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_185f48:
    // 0x185f48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x185f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_185f4c:
    // 0x185f4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_185f50:
    // 0x185f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f54:
    // 0x185f54: 0x0  nop
    ctx->pc = 0x185f54u;
    // NOP
label_185f58:
    // 0x185f58: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185f5c:
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
label_185f60:
    // 0x185f60: 0x45000055  bc1f        . + 4 + (0x55 << 2)
label_185f64:
    if (ctx->pc == 0x185F64u) {
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F68u;
        goto label_185f68;
    }
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f60) {
            ctx->pc = 0x1860B8u;
            { ctx->pc = 0x1860b8; return; }
        }
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_185f6c:
    // 0x185f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_185f70:
    // 0x185f70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x185f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_185f74:
    // 0x185f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185f78:
    if (ctx->pc == 0x185F78u) {
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F7Cu;
        goto label_185f7c;
    }
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f74) {
            ctx->pc = 0x185F84u;
            goto label_185f84;
        }
    }
    ctx->pc = 0x185F7Cu;
label_185f7c:
    // 0x185f7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_185f80:
    if (ctx->pc == 0x185F80u) {
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F84u;
        goto label_185f84;
    }
    ctx->pc = 0x185F7Cu;
    {
        const bool branch_taken_0x185f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f7c) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F84u;
label_185f84:
    // 0x185f84: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x185f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_185f88:
    // 0x185f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_185f8c:
    if (ctx->pc == 0x185F8Cu) {
        ctx->pc = 0x185F90u;
        goto label_185f90;
    }
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F90u;
label_185f90:
    // 0x185f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185f94:
    // 0x185f94: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
label_185f98:
    if (ctx->pc == 0x185F98u) {
        ctx->pc = 0x185F9Cu;
        goto label_185f9c;
    }
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f94) {
            ctx->pc = 0x1860B4u;
            { ctx->pc = 0x1860b4; return; }
        }
    }
    ctx->pc = 0x185F9Cu;
label_185f9c:
    // 0x185f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_185fa0:
    // 0x185fa0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_185fa4:
    // 0x185fa4: 0xc0439e8  jal         func_10E7A0
label_185fa8:
    if (ctx->pc == 0x185FA8u) {
        ctx->pc = 0x185FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA4u;
        // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FACu;
        goto label_185fac;
    }
    ctx->pc = 0x185FA4u;
    SET_GPR_U32(ctx, 31, 0x185FACu);
    ctx->pc = 0x185FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA4u;
    // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185FA4u, 0x185FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185fb0:
    if (ctx->pc == 0x185FB0u) {
        ctx->pc = 0x185FB4u;
        goto label_185fb4;
    }
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fac) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FB4u;
label_185fb4:
    // 0x185fb4: 0x10000020  b           . + 4 + (0x20 << 2)
label_185fb8:
    if (ctx->pc == 0x185FB8u) {
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FBCu;
        goto label_185fbc;
    }
    ctx->pc = 0x185FB4u;
    {
        const bool branch_taken_0x185fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fb4) {
            ctx->pc = 0x186038u;
            goto label_186038;
        }
    }
    ctx->pc = 0x185FBCu;
label_185fbc:
    // 0x185fbc: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185fc0:
    // 0x185fc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185fc4:
    // 0x185fc4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x185fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185fc8:
    // 0x185fc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185fcc:
    // 0x185fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185fd0:
    // 0x185fd0: 0x0  nop
    ctx->pc = 0x185fd0u;
    // NOP
label_185fd4:
    // 0x185fd4: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185fd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_185fd8:
    // 0x185fd8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185fdc:
    // 0x185fdc: 0x0  nop
    ctx->pc = 0x185fdcu;
    // NOP
label_185fe0:
    // 0x185fe0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185fe4:
    if (ctx->pc == 0x185FE4u) {
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FE8u;
        goto label_185fe8;
    }
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FFCu;
            goto label_185ffc;
        }
    }
    ctx->pc = 0x185FE8u;
label_185fe8:
    // 0x185fe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185fec:
    // 0x185fec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ff0:
    // 0x185ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185ff4:
    // 0x185ff4: 0x1000000d  b           . + 4 + (0xD << 2)
label_185ff8:
    if (ctx->pc == 0x185FF8u) {
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FFCu;
        goto label_185ffc;
    }
    ctx->pc = 0x185FF4u;
    {
        const bool branch_taken_0x185ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff4) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FFCu;
label_185ffc:
    // 0x185ffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_186000:
    // 0x186000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186004:
    // 0x186004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186008:
    // 0x186008: 0x0  nop
    ctx->pc = 0x186008u;
    // NOP
label_18600c:
    // 0x18600c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18600cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186010:
    // 0x186010: 0x0  nop
    ctx->pc = 0x186010u;
    // NOP
label_186014:
    // 0x186014: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_186018:
    if (ctx->pc == 0x186018u) {
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18601Cu;
        goto label_18601c;
    }
    ctx->pc = 0x186014u;
    {
        const bool branch_taken_0x186014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186014) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18601Cu;
label_18601c:
    // 0x18601c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186020:
    // 0x186020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186024:
    // 0x186024: 0x10000001  b           . + 4 + (0x1 << 2)
label_186028:
    if (ctx->pc == 0x186028u) {
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18602Cu;
        goto label_18602c;
    }
    ctx->pc = 0x186024u;
    {
        const bool branch_taken_0x186024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186024) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18602Cu;
label_18602c:
    // 0x18602c: 0xc06d448  jal         func_1B5120
label_186030:
    if (ctx->pc == 0x186030u) {
        ctx->pc = 0x186034u;
        goto label_186034;
    }
    ctx->pc = 0x18602Cu;
    SET_GPR_U32(ctx, 31, 0x186034u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186034u;
label_186034:
    // 0x186034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_186038:
    // 0x186038: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x186038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18603c:
    // 0x18603c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186040:
    // 0x186040: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186044:
    // 0x186044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186048:
    // 0x186048: 0x0  nop
    ctx->pc = 0x186048u;
    // NOP
label_18604c:
    // 0x18604c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18604cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186050:
    // 0x186050: 0x0  nop
    ctx->pc = 0x186050u;
    // NOP
label_186054:
    // 0x186054: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186058:
    if (ctx->pc == 0x186058u) {
        ctx->pc = 0x18605Cu;
        goto label_18605c;
    }
    ctx->pc = 0x186054u;
    {
        const bool branch_taken_0x186054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186054) {
            ctx->pc = 0x186070u;
            goto label_186070;
        }
    }
    ctx->pc = 0x18605Cu;
label_18605c:
    // 0x18605c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_186060:
    // 0x186060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186064:
    // 0x186064: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_186068:
    // 0x186068: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_18606c:
    if (ctx->pc == 0x18606Cu) {
        ctx->pc = 0x186070u;
        goto label_186070;
    }
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186068) {
            ctx->pc = 0x1860A8u;
            goto label_1860a8;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186074:
    // 0x186074: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x186074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186078:
    // 0x186078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18607c:
    // 0x18607c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18607cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186080:
    // 0x186080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186084:
    // 0x186084: 0x0  nop
    ctx->pc = 0x186084u;
    // NOP
label_186088:
    // 0x186088: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x186088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_18608c:
    // 0x18608c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x18608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186090:
    // 0x186090: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x186090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186094:
    // 0x186094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186098:
    // 0x186098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18609c:
    // 0x18609c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18609cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1860a0:
    // 0x1860a0: 0x10000218  b           . + 4 + (0x218 << 2)
label_1860a4:
    if (ctx->pc == 0x1860A4u) {
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860A8u;
        goto label_1860a8;
    }
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1860a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1860ac:
    // 0x1860ac: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1860b0u;
    return;
}
