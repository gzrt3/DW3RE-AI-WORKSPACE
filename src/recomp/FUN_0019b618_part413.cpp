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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part413(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2648d8u: goto label_2648d8;
        case 0x2648dcu: goto label_2648dc;
        case 0x2648e0u: goto label_2648e0;
        case 0x2648e4u: goto label_2648e4;
        case 0x2648e8u: goto label_2648e8;
        case 0x2648ecu: goto label_2648ec;
        case 0x2648f0u: goto label_2648f0;
        case 0x2648f4u: goto label_2648f4;
        case 0x2648f8u: goto label_2648f8;
        case 0x2648fcu: goto label_2648fc;
        case 0x264900u: goto label_264900;
        case 0x264904u: goto label_264904;
        case 0x264908u: goto label_264908;
        case 0x26490cu: goto label_26490c;
        case 0x264910u: goto label_264910;
        case 0x264914u: goto label_264914;
        case 0x264918u: goto label_264918;
        case 0x26491cu: goto label_26491c;
        case 0x264920u: goto label_264920;
        case 0x264924u: goto label_264924;
        case 0x264928u: goto label_264928;
        case 0x26492cu: goto label_26492c;
        case 0x264930u: goto label_264930;
        case 0x264934u: goto label_264934;
        case 0x264938u: goto label_264938;
        case 0x26493cu: goto label_26493c;
        case 0x264940u: goto label_264940;
        case 0x264944u: goto label_264944;
        case 0x264948u: goto label_264948;
        case 0x26494cu: goto label_26494c;
        case 0x264950u: goto label_264950;
        case 0x264954u: goto label_264954;
        case 0x264958u: goto label_264958;
        case 0x26495cu: goto label_26495c;
        case 0x264960u: goto label_264960;
        case 0x264964u: goto label_264964;
        case 0x264968u: goto label_264968;
        case 0x26496cu: goto label_26496c;
        case 0x264970u: goto label_264970;
        case 0x264974u: goto label_264974;
        case 0x264978u: goto label_264978;
        case 0x26497cu: goto label_26497c;
        case 0x264980u: goto label_264980;
        case 0x264984u: goto label_264984;
        case 0x264988u: goto label_264988;
        case 0x26498cu: goto label_26498c;
        case 0x264990u: goto label_264990;
        case 0x264994u: goto label_264994;
        case 0x264998u: goto label_264998;
        case 0x26499cu: goto label_26499c;
        case 0x2649a0u: goto label_2649a0;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649a8u: goto label_2649a8;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b0u: goto label_2649b0;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c0u: goto label_2649c0;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649c8u: goto label_2649c8;
        case 0x2649ccu: goto label_2649cc;
        case 0x2649d0u: goto label_2649d0;
        case 0x2649d4u: goto label_2649d4;
        case 0x2649d8u: goto label_2649d8;
        case 0x2649dcu: goto label_2649dc;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649e4u: goto label_2649e4;
        case 0x2649e8u: goto label_2649e8;
        case 0x2649ecu: goto label_2649ec;
        case 0x2649f0u: goto label_2649f0;
        case 0x2649f4u: goto label_2649f4;
        case 0x2649f8u: goto label_2649f8;
        case 0x2649fcu: goto label_2649fc;
        case 0x264a00u: goto label_264a00;
        case 0x264a04u: goto label_264a04;
        case 0x264a08u: goto label_264a08;
        case 0x264a0cu: goto label_264a0c;
        case 0x264a10u: goto label_264a10;
        case 0x264a14u: goto label_264a14;
        case 0x264a18u: goto label_264a18;
        case 0x264a1cu: goto label_264a1c;
        case 0x264a20u: goto label_264a20;
        case 0x264a24u: goto label_264a24;
        case 0x264a28u: goto label_264a28;
        case 0x264a2cu: goto label_264a2c;
        case 0x264a30u: goto label_264a30;
        case 0x264a34u: goto label_264a34;
        case 0x264a38u: goto label_264a38;
        case 0x264a3cu: goto label_264a3c;
        case 0x264a40u: goto label_264a40;
        case 0x264a44u: goto label_264a44;
        case 0x264a48u: goto label_264a48;
        case 0x264a4cu: goto label_264a4c;
        case 0x264a50u: goto label_264a50;
        case 0x264a54u: goto label_264a54;
        case 0x264a58u: goto label_264a58;
        case 0x264a5cu: goto label_264a5c;
        case 0x264a60u: goto label_264a60;
        case 0x264a64u: goto label_264a64;
        case 0x264a68u: goto label_264a68;
        case 0x264a6cu: goto label_264a6c;
        case 0x264a70u: goto label_264a70;
        case 0x264a74u: goto label_264a74;
        case 0x264a78u: goto label_264a78;
        case 0x264a7cu: goto label_264a7c;
        case 0x264a80u: goto label_264a80;
        case 0x264a84u: goto label_264a84;
        case 0x264a88u: goto label_264a88;
        case 0x264a8cu: goto label_264a8c;
        case 0x264a90u: goto label_264a90;
        case 0x264a94u: goto label_264a94;
        case 0x264a98u: goto label_264a98;
        case 0x264a9cu: goto label_264a9c;
        case 0x264aa0u: goto label_264aa0;
        case 0x264aa4u: goto label_264aa4;
        case 0x264aa8u: goto label_264aa8;
        case 0x264aacu: goto label_264aac;
        case 0x264ab0u: goto label_264ab0;
        case 0x264ab4u: goto label_264ab4;
        case 0x264ab8u: goto label_264ab8;
        case 0x264abcu: goto label_264abc;
        case 0x264ac0u: goto label_264ac0;
        case 0x264ac4u: goto label_264ac4;
        case 0x264ac8u: goto label_264ac8;
        case 0x264accu: goto label_264acc;
        case 0x264ad0u: goto label_264ad0;
        case 0x264ad4u: goto label_264ad4;
        case 0x264ad8u: goto label_264ad8;
        case 0x264adcu: goto label_264adc;
        case 0x264ae0u: goto label_264ae0;
        case 0x264ae4u: goto label_264ae4;
        case 0x264ae8u: goto label_264ae8;
        case 0x264aecu: goto label_264aec;
        case 0x264af0u: goto label_264af0;
        case 0x264af4u: goto label_264af4;
        case 0x264af8u: goto label_264af8;
        case 0x264afcu: goto label_264afc;
        case 0x264b00u: goto label_264b00;
        case 0x264b04u: goto label_264b04;
        case 0x264b08u: goto label_264b08;
        case 0x264b0cu: goto label_264b0c;
        case 0x264b10u: goto label_264b10;
        case 0x264b14u: goto label_264b14;
        case 0x264b18u: goto label_264b18;
        case 0x264b1cu: goto label_264b1c;
        case 0x264b20u: goto label_264b20;
        case 0x264b24u: goto label_264b24;
        case 0x264b28u: goto label_264b28;
        case 0x264b2cu: goto label_264b2c;
        case 0x264b30u: goto label_264b30;
        case 0x264b34u: goto label_264b34;
        case 0x264b38u: goto label_264b38;
        case 0x264b3cu: goto label_264b3c;
        case 0x264b40u: goto label_264b40;
        case 0x264b44u: goto label_264b44;
        case 0x264b48u: goto label_264b48;
        case 0x264b4cu: goto label_264b4c;
        case 0x264b50u: goto label_264b50;
        case 0x264b54u: goto label_264b54;
        case 0x264b58u: goto label_264b58;
        case 0x264b5cu: goto label_264b5c;
        case 0x264b60u: goto label_264b60;
        case 0x264b64u: goto label_264b64;
        case 0x264b68u: goto label_264b68;
        case 0x264b6cu: goto label_264b6c;
        case 0x264b70u: goto label_264b70;
        case 0x264b74u: goto label_264b74;
        case 0x264b78u: goto label_264b78;
        case 0x264b7cu: goto label_264b7c;
        case 0x264b80u: goto label_264b80;
        case 0x264b84u: goto label_264b84;
        case 0x264b88u: goto label_264b88;
        case 0x264b8cu: goto label_264b8c;
        case 0x264b90u: goto label_264b90;
        case 0x264b94u: goto label_264b94;
        case 0x264b98u: goto label_264b98;
        case 0x264b9cu: goto label_264b9c;
        case 0x264ba0u: goto label_264ba0;
        case 0x264ba4u: goto label_264ba4;
        case 0x264ba8u: goto label_264ba8;
        case 0x264bacu: goto label_264bac;
        case 0x264bb0u: goto label_264bb0;
        case 0x264bb4u: goto label_264bb4;
        case 0x264bb8u: goto label_264bb8;
        case 0x264bbcu: goto label_264bbc;
        case 0x264bc0u: goto label_264bc0;
        case 0x264bc4u: goto label_264bc4;
        case 0x264bc8u: goto label_264bc8;
        case 0x264bccu: goto label_264bcc;
        case 0x264bd0u: goto label_264bd0;
        case 0x264bd4u: goto label_264bd4;
        case 0x264bd8u: goto label_264bd8;
        case 0x264bdcu: goto label_264bdc;
        case 0x264be0u: goto label_264be0;
        case 0x264be4u: goto label_264be4;
        case 0x264be8u: goto label_264be8;
        case 0x264becu: goto label_264bec;
        case 0x264bf0u: goto label_264bf0;
        case 0x264bf4u: goto label_264bf4;
        case 0x264bf8u: goto label_264bf8;
        case 0x264bfcu: goto label_264bfc;
        case 0x264c00u: goto label_264c00;
        case 0x264c04u: goto label_264c04;
        case 0x264c08u: goto label_264c08;
        case 0x264c0cu: goto label_264c0c;
        case 0x264c10u: goto label_264c10;
        case 0x264c14u: goto label_264c14;
        case 0x264c18u: goto label_264c18;
        case 0x264c1cu: goto label_264c1c;
        case 0x264c20u: goto label_264c20;
        case 0x264c24u: goto label_264c24;
        case 0x264c28u: goto label_264c28;
        case 0x264c2cu: goto label_264c2c;
        case 0x264c30u: goto label_264c30;
        case 0x264c34u: goto label_264c34;
        case 0x264c38u: goto label_264c38;
        case 0x264c3cu: goto label_264c3c;
        case 0x264c40u: goto label_264c40;
        case 0x264c44u: goto label_264c44;
        case 0x264c48u: goto label_264c48;
        case 0x264c4cu: goto label_264c4c;
        case 0x264c50u: goto label_264c50;
        case 0x264c54u: goto label_264c54;
        case 0x264c58u: goto label_264c58;
        case 0x264c5cu: goto label_264c5c;
        case 0x264c60u: goto label_264c60;
        case 0x264c64u: goto label_264c64;
        case 0x264c68u: goto label_264c68;
        case 0x264c6cu: goto label_264c6c;
        case 0x264c70u: goto label_264c70;
        case 0x264c74u: goto label_264c74;
        case 0x264c78u: goto label_264c78;
        case 0x264c7cu: goto label_264c7c;
        case 0x264c80u: goto label_264c80;
        case 0x264c84u: goto label_264c84;
        case 0x264c88u: goto label_264c88;
        case 0x264c8cu: goto label_264c8c;
        case 0x264c90u: goto label_264c90;
        case 0x264c94u: goto label_264c94;
        case 0x264c98u: goto label_264c98;
        case 0x264c9cu: goto label_264c9c;
        case 0x264ca0u: goto label_264ca0;
        case 0x264ca4u: goto label_264ca4;
        case 0x264ca8u: goto label_264ca8;
        case 0x264cacu: goto label_264cac;
        case 0x264cb0u: goto label_264cb0;
        case 0x264cb4u: goto label_264cb4;
        case 0x264cb8u: goto label_264cb8;
        case 0x264cbcu: goto label_264cbc;
        case 0x264cc0u: goto label_264cc0;
        case 0x264cc4u: goto label_264cc4;
        case 0x264cc8u: goto label_264cc8;
        case 0x264cccu: goto label_264ccc;
        case 0x264cd0u: goto label_264cd0;
        case 0x264cd4u: goto label_264cd4;
        case 0x264cd8u: goto label_264cd8;
        case 0x264cdcu: goto label_264cdc;
        case 0x264ce0u: goto label_264ce0;
        case 0x264ce4u: goto label_264ce4;
        case 0x264ce8u: goto label_264ce8;
        case 0x264cecu: goto label_264cec;
        case 0x264cf0u: goto label_264cf0;
        case 0x264cf4u: goto label_264cf4;
        case 0x264cf8u: goto label_264cf8;
        case 0x264cfcu: goto label_264cfc;
        case 0x264d00u: goto label_264d00;
        case 0x264d04u: goto label_264d04;
        case 0x264d08u: goto label_264d08;
        case 0x264d0cu: goto label_264d0c;
        case 0x264d10u: goto label_264d10;
        case 0x264d14u: goto label_264d14;
        case 0x264d18u: goto label_264d18;
        case 0x264d1cu: goto label_264d1c;
        case 0x264d20u: goto label_264d20;
        case 0x264d24u: goto label_264d24;
        case 0x264d28u: goto label_264d28;
        case 0x264d2cu: goto label_264d2c;
        case 0x264d30u: goto label_264d30;
        case 0x264d34u: goto label_264d34;
        case 0x264d38u: goto label_264d38;
        case 0x264d3cu: goto label_264d3c;
        case 0x264d40u: goto label_264d40;
        case 0x264d44u: goto label_264d44;
        case 0x264d48u: goto label_264d48;
        case 0x264d4cu: goto label_264d4c;
        case 0x264d50u: goto label_264d50;
        case 0x264d54u: goto label_264d54;
        case 0x264d58u: goto label_264d58;
        case 0x264d5cu: goto label_264d5c;
        case 0x264d60u: goto label_264d60;
        case 0x264d64u: goto label_264d64;
        case 0x264d68u: goto label_264d68;
        case 0x264d6cu: goto label_264d6c;
        case 0x264d70u: goto label_264d70;
        case 0x264d74u: goto label_264d74;
        case 0x264d78u: goto label_264d78;
        case 0x264d7cu: goto label_264d7c;
        case 0x264d80u: goto label_264d80;
        case 0x264d84u: goto label_264d84;
        case 0x264d88u: goto label_264d88;
        case 0x264d8cu: goto label_264d8c;
        case 0x264d90u: goto label_264d90;
        case 0x264d94u: goto label_264d94;
        case 0x264d98u: goto label_264d98;
        case 0x264d9cu: goto label_264d9c;
        case 0x264da0u: goto label_264da0;
        case 0x264da4u: goto label_264da4;
        case 0x264da8u: goto label_264da8;
        case 0x264dacu: goto label_264dac;
        case 0x264db0u: goto label_264db0;
        case 0x264db4u: goto label_264db4;
        case 0x264db8u: goto label_264db8;
        case 0x264dbcu: goto label_264dbc;
        case 0x264dc0u: goto label_264dc0;
        case 0x264dc4u: goto label_264dc4;
        case 0x264dc8u: goto label_264dc8;
        case 0x264dccu: goto label_264dcc;
        case 0x264dd0u: goto label_264dd0;
        case 0x264dd4u: goto label_264dd4;
        case 0x264dd8u: goto label_264dd8;
        case 0x264ddcu: goto label_264ddc;
        case 0x264de0u: goto label_264de0;
        case 0x264de4u: goto label_264de4;
        case 0x264de8u: goto label_264de8;
        case 0x264decu: goto label_264dec;
        case 0x264df0u: goto label_264df0;
        case 0x264df4u: goto label_264df4;
        case 0x264df8u: goto label_264df8;
        case 0x264dfcu: goto label_264dfc;
        case 0x264e00u: goto label_264e00;
        case 0x264e04u: goto label_264e04;
        case 0x264e08u: goto label_264e08;
        case 0x264e0cu: goto label_264e0c;
        case 0x264e10u: goto label_264e10;
        case 0x264e14u: goto label_264e14;
        case 0x264e18u: goto label_264e18;
        case 0x264e1cu: goto label_264e1c;
        case 0x264e20u: goto label_264e20;
        case 0x264e24u: goto label_264e24;
        case 0x264e28u: goto label_264e28;
        case 0x264e2cu: goto label_264e2c;
        case 0x264e30u: goto label_264e30;
        case 0x264e34u: goto label_264e34;
        case 0x264e38u: goto label_264e38;
        case 0x264e3cu: goto label_264e3c;
        case 0x264e40u: goto label_264e40;
        case 0x264e44u: goto label_264e44;
        case 0x264e48u: goto label_264e48;
        case 0x264e4cu: goto label_264e4c;
        case 0x264e50u: goto label_264e50;
        case 0x264e54u: goto label_264e54;
        case 0x264e58u: goto label_264e58;
        case 0x264e5cu: goto label_264e5c;
        case 0x264e60u: goto label_264e60;
        case 0x264e64u: goto label_264e64;
        case 0x264e68u: goto label_264e68;
        case 0x264e6cu: goto label_264e6c;
        case 0x264e70u: goto label_264e70;
        case 0x264e74u: goto label_264e74;
        case 0x264e78u: goto label_264e78;
        case 0x264e7cu: goto label_264e7c;
        case 0x264e80u: goto label_264e80;
        case 0x264e84u: goto label_264e84;
        case 0x264e88u: goto label_264e88;
        case 0x264e8cu: goto label_264e8c;
        case 0x264e90u: goto label_264e90;
        case 0x264e94u: goto label_264e94;
        case 0x264e98u: goto label_264e98;
        case 0x264e9cu: goto label_264e9c;
        case 0x264ea0u: goto label_264ea0;
        case 0x264ea4u: goto label_264ea4;
        case 0x264ea8u: goto label_264ea8;
        case 0x264eacu: goto label_264eac;
        case 0x264eb0u: goto label_264eb0;
        case 0x264eb4u: goto label_264eb4;
        case 0x264eb8u: goto label_264eb8;
        case 0x264ebcu: goto label_264ebc;
        case 0x264ec0u: goto label_264ec0;
        case 0x264ec4u: goto label_264ec4;
        case 0x264ec8u: goto label_264ec8;
        case 0x264eccu: goto label_264ecc;
        case 0x264ed0u: goto label_264ed0;
        case 0x264ed4u: goto label_264ed4;
        case 0x264ed8u: goto label_264ed8;
        case 0x264edcu: goto label_264edc;
        case 0x264ee0u: goto label_264ee0;
        case 0x264ee4u: goto label_264ee4;
        case 0x264ee8u: goto label_264ee8;
        case 0x264eecu: goto label_264eec;
        case 0x264ef0u: goto label_264ef0;
        case 0x264ef4u: goto label_264ef4;
        case 0x264ef8u: goto label_264ef8;
        case 0x264efcu: goto label_264efc;
        case 0x264f00u: goto label_264f00;
        case 0x264f04u: goto label_264f04;
        case 0x264f08u: goto label_264f08;
        case 0x264f0cu: goto label_264f0c;
        case 0x264f10u: goto label_264f10;
        case 0x264f14u: goto label_264f14;
        case 0x264f18u: goto label_264f18;
        case 0x264f1cu: goto label_264f1c;
        case 0x264f20u: goto label_264f20;
        case 0x264f24u: goto label_264f24;
        case 0x264f28u: goto label_264f28;
        case 0x264f2cu: goto label_264f2c;
        case 0x264f30u: goto label_264f30;
        case 0x264f34u: goto label_264f34;
        case 0x264f38u: goto label_264f38;
        case 0x264f3cu: goto label_264f3c;
        case 0x264f40u: goto label_264f40;
        case 0x264f44u: goto label_264f44;
        case 0x264f48u: goto label_264f48;
        case 0x264f4cu: goto label_264f4c;
        case 0x264f50u: goto label_264f50;
        case 0x264f54u: goto label_264f54;
        case 0x264f58u: goto label_264f58;
        case 0x264f5cu: goto label_264f5c;
        case 0x264f60u: goto label_264f60;
        case 0x264f64u: goto label_264f64;
        case 0x264f68u: goto label_264f68;
        case 0x264f6cu: goto label_264f6c;
        case 0x264f70u: goto label_264f70;
        case 0x264f74u: goto label_264f74;
        case 0x264f78u: goto label_264f78;
        case 0x264f7cu: goto label_264f7c;
        case 0x264f80u: goto label_264f80;
        case 0x264f84u: goto label_264f84;
        case 0x264f88u: goto label_264f88;
        case 0x264f8cu: goto label_264f8c;
        case 0x264f90u: goto label_264f90;
        case 0x264f94u: goto label_264f94;
        case 0x264f98u: goto label_264f98;
        case 0x264f9cu: goto label_264f9c;
        case 0x264fa0u: goto label_264fa0;
        case 0x264fa4u: goto label_264fa4;
        case 0x264fa8u: goto label_264fa8;
        case 0x264facu: goto label_264fac;
        case 0x264fb0u: goto label_264fb0;
        case 0x264fb4u: goto label_264fb4;
        case 0x264fb8u: goto label_264fb8;
        case 0x264fbcu: goto label_264fbc;
        case 0x264fc0u: goto label_264fc0;
        case 0x264fc4u: goto label_264fc4;
        case 0x264fc8u: goto label_264fc8;
        case 0x264fccu: goto label_264fcc;
        case 0x264fd0u: goto label_264fd0;
        case 0x264fd4u: goto label_264fd4;
        case 0x264fd8u: goto label_264fd8;
        case 0x264fdcu: goto label_264fdc;
        case 0x264fe0u: goto label_264fe0;
        case 0x264fe4u: goto label_264fe4;
        case 0x264fe8u: goto label_264fe8;
        case 0x264fecu: goto label_264fec;
        case 0x264ff0u: goto label_264ff0;
        case 0x264ff4u: goto label_264ff4;
        case 0x264ff8u: goto label_264ff8;
        case 0x264ffcu: goto label_264ffc;
        case 0x265000u: goto label_265000;
        case 0x265004u: goto label_265004;
        case 0x265008u: goto label_265008;
        case 0x26500cu: goto label_26500c;
        case 0x265010u: goto label_265010;
        case 0x265014u: goto label_265014;
        case 0x265018u: goto label_265018;
        case 0x26501cu: goto label_26501c;
        case 0x265020u: goto label_265020;
        case 0x265024u: goto label_265024;
        case 0x265028u: goto label_265028;
        case 0x26502cu: goto label_26502c;
        case 0x265030u: goto label_265030;
        case 0x265034u: goto label_265034;
        case 0x265038u: goto label_265038;
        case 0x26503cu: goto label_26503c;
        case 0x265040u: goto label_265040;
        case 0x265044u: goto label_265044;
        case 0x265048u: goto label_265048;
        case 0x26504cu: goto label_26504c;
        case 0x265050u: goto label_265050;
        case 0x265054u: goto label_265054;
        case 0x265058u: goto label_265058;
        case 0x26505cu: goto label_26505c;
        case 0x265060u: goto label_265060;
        case 0x265064u: goto label_265064;
        case 0x265068u: goto label_265068;
        case 0x26506cu: goto label_26506c;
        case 0x265070u: goto label_265070;
        case 0x265074u: goto label_265074;
        case 0x265078u: goto label_265078;
        case 0x26507cu: goto label_26507c;
        case 0x265080u: goto label_265080;
        case 0x265084u: goto label_265084;
        case 0x265088u: goto label_265088;
        case 0x26508cu: goto label_26508c;
        case 0x265090u: goto label_265090;
        case 0x265094u: goto label_265094;
        case 0x265098u: goto label_265098;
        case 0x26509cu: goto label_26509c;
        case 0x2650a0u: goto label_2650a0;
        case 0x2650a4u: goto label_2650a4;
        default: return;
    }

label_2648d8:
    // 0x2648d8: 0x0  nop
    ctx->pc = 0x2648d8u;
    // NOP
label_2648dc:
    // 0x2648dc: 0x0  nop
    ctx->pc = 0x2648dcu;
    // NOP
label_2648e0:
    // 0x2648e0: 0xf1a3  .word       0x0000F1A3                   # negu        $fp, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2648e4:
    // 0x2648e4: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2648e8:
    // 0x2648e8: 0x0  nop
    ctx->pc = 0x2648e8u;
    // NOP
label_2648ec:
    // 0x2648ec: 0x0  nop
    ctx->pc = 0x2648ecu;
    // NOP
label_2648f0:
    // 0x2648f0: 0xf1b1  tgeu        $zero, $zero, 966
    ctx->pc = 0x2648f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2648f4:
    // 0x2648f4: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x2648f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2648f8:
    // 0x2648f8: 0x0  nop
    ctx->pc = 0x2648f8u;
    // NOP
label_2648fc:
    // 0x2648fc: 0x0  nop
    ctx->pc = 0x2648fcu;
    // NOP
label_264900:
    // 0x264900: 0xf1c0  sll         $fp, $zero, 7
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264904:
    // 0x264904: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x264904u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264908:
    // 0x264908: 0x0  nop
    ctx->pc = 0x264908u;
    // NOP
label_26490c:
    // 0x26490c: 0x0  nop
    ctx->pc = 0x26490cu;
    // NOP
label_264910:
    // 0x264910: 0xf1cd  break       0, 967
    ctx->pc = 0x264910u;
    runtime->handleBreak(rdram, ctx);
label_264914:
    // 0x264914: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x264914u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264918:
    // 0x264918: 0x0  nop
    ctx->pc = 0x264918u;
    // NOP
label_26491c:
    // 0x26491c: 0x0  nop
    ctx->pc = 0x26491cu;
    // NOP
label_264920:
    // 0x264920: 0xf1d7  .word       0x0000F1D7                   # dsrav       $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264920u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264924:
    // 0x264924: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x264924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264928:
    // 0x264928: 0x0  nop
    ctx->pc = 0x264928u;
    // NOP
label_26492c:
    // 0x26492c: 0x0  nop
    ctx->pc = 0x26492cu;
    // NOP
label_264930:
    // 0x264930: 0xf1e0  .word       0x0000F1E0                   # add         $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264930u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_264934:
    // 0x264934: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x264934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264938:
    // 0x264938: 0x0  nop
    ctx->pc = 0x264938u;
    // NOP
label_26493c:
    // 0x26493c: 0x0  nop
    ctx->pc = 0x26493cu;
    // NOP
label_264940:
    // 0x264940: 0xf1ed  .word       0x0000F1ED                   # daddu       $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264940u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264944:
    // 0x264944: 0x36f0  tge         $zero, $zero, 219
    ctx->pc = 0x264944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264948:
    // 0x264948: 0x0  nop
    ctx->pc = 0x264948u;
    // NOP
label_26494c:
    // 0x26494c: 0x0  nop
    ctx->pc = 0x26494cu;
    // NOP
label_264950:
    // 0x264950: 0xf1f4  teq         $zero, $zero, 967
    ctx->pc = 0x264950u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264954:
    // 0x264954: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x264954u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_264958:
    // 0x264958: 0x0  nop
    ctx->pc = 0x264958u;
    // NOP
label_26495c:
    // 0x26495c: 0x0  nop
    ctx->pc = 0x26495cu;
    // NOP
label_264960:
    // 0x264960: 0xf202  srl         $fp, $zero, 8
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_264964:
    // 0x264964: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264968:
    // 0x264968: 0x0  nop
    ctx->pc = 0x264968u;
    // NOP
label_26496c:
    // 0x26496c: 0x0  nop
    ctx->pc = 0x26496cu;
    // NOP
label_264970:
    // 0x264970: 0xf20e  .word       0x0000F20E                   # INVALID     $zero, $zero, -0xDF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x264970 raw=0x0000F20E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264974:
    // 0x264974: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x264974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264978:
    // 0x264978: 0x0  nop
    ctx->pc = 0x264978u;
    // NOP
label_26497c:
    // 0x26497c: 0x0  nop
    ctx->pc = 0x26497cu;
    // NOP
label_264980:
    // 0x264980: 0xf21f  .word       0x0000F21F                   # ddivu       $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264980 raw=0x0000F21F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264984:
    // 0x264984: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264984u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264988:
    // 0x264988: 0x0  nop
    ctx->pc = 0x264988u;
    // NOP
label_26498c:
    // 0x26498c: 0x0  nop
    ctx->pc = 0x26498cu;
    // NOP
label_264990:
    // 0x264990: 0xf22b  .word       0x0000F22B                   # sltu        $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264990u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_264994:
    // 0x264994: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x264994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264998:
    // 0x264998: 0x0  nop
    ctx->pc = 0x264998u;
    // NOP
label_26499c:
    // 0x26499c: 0x0  nop
    ctx->pc = 0x26499cu;
    // NOP
label_2649a0:
    // 0x2649a0: 0xf237  .word       0x0000F237                   # INVALID     $zero, $zero, -0xDC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2649A0 raw=0x0000F237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649a4:
    // 0x2649a4: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2649a8:
    // 0x2649a8: 0x0  nop
    ctx->pc = 0x2649a8u;
    // NOP
label_2649ac:
    // 0x2649ac: 0x0  nop
    ctx->pc = 0x2649acu;
    // NOP
label_2649b0:
    // 0x2649b0: 0xf24d  break       0, 969
    ctx->pc = 0x2649b0u;
    runtime->handleBreak(rdram, ctx);
label_2649b4:
    // 0x2649b4: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x2649b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2649b8:
    // 0x2649b8: 0x0  nop
    ctx->pc = 0x2649b8u;
    // NOP
label_2649bc:
    // 0x2649bc: 0x0  nop
    ctx->pc = 0x2649bcu;
    // NOP
label_2649c0:
    // 0x2649c0: 0xf255  .word       0x0000F255                   # INVALID     $zero, $zero, -0xDAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2649C0 raw=0x0000F255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649c4:
    // 0x2649c4: 0x5df0  tge         $zero, $zero, 375
    ctx->pc = 0x2649c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2649c8:
    // 0x2649c8: 0x0  nop
    ctx->pc = 0x2649c8u;
    // NOP
label_2649cc:
    // 0x2649cc: 0x0  nop
    ctx->pc = 0x2649ccu;
    // NOP
label_2649d0:
    // 0x2649d0: 0xf261  .word       0x0000F261                   # addu        $fp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2649d4:
    // 0x2649d4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2649d8:
    // 0x2649d8: 0x0  nop
    ctx->pc = 0x2649d8u;
    // NOP
label_2649dc:
    // 0x2649dc: 0x0  nop
    ctx->pc = 0x2649dcu;
    // NOP
label_2649e0:
    // 0x2649e0: 0xf26a  .word       0x0000F26A                   # slt         $fp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2649e4:
    // 0x2649e4: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x2649e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2649e8:
    // 0x2649e8: 0x0  nop
    ctx->pc = 0x2649e8u;
    // NOP
label_2649ec:
    // 0x2649ec: 0x0  nop
    ctx->pc = 0x2649ecu;
    // NOP
label_2649f0:
    // 0x2649f0: 0xf275  .word       0x0000F275                   # INVALID     $zero, $zero, -0xD8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2649F0 raw=0x0000F275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649f4:
    // 0x2649f4: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x2649f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2649f8:
    // 0x2649f8: 0x0  nop
    ctx->pc = 0x2649f8u;
    // NOP
label_2649fc:
    // 0x2649fc: 0x0  nop
    ctx->pc = 0x2649fcu;
    // NOP
label_264a00:
    // 0x264a00: 0xf27f  dsra32      $fp, $zero, 9
    ctx->pc = 0x264a00u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 9));
label_264a04:
    // 0x264a04: 0x3c60  .word       0x00003C60                   # add         $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264a08:
    // 0x264a08: 0x0  nop
    ctx->pc = 0x264a08u;
    // NOP
label_264a0c:
    // 0x264a0c: 0x0  nop
    ctx->pc = 0x264a0cu;
    // NOP
label_264a10:
    // 0x264a10: 0xf287  .word       0x0000F287                   # srav        $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a10u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264a14:
    // 0x264a14: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264a18:
    // 0x264a18: 0x0  nop
    ctx->pc = 0x264a18u;
    // NOP
label_264a1c:
    // 0x264a1c: 0x0  nop
    ctx->pc = 0x264a1cu;
    // NOP
label_264a20:
    // 0x264a20: 0xf294  .word       0x0000F294                   # dsllv       $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264a24:
    // 0x264a24: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_264a28:
    // 0x264a28: 0x0  nop
    ctx->pc = 0x264a28u;
    // NOP
label_264a2c:
    // 0x264a2c: 0x0  nop
    ctx->pc = 0x264a2cu;
    // NOP
label_264a30:
    // 0x264a30: 0xf2a5  .word       0x0000F2A5                   # move        $fp, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_264a34:
    // 0x264a34: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x264a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a38:
    // 0x264a38: 0x0  nop
    ctx->pc = 0x264a38u;
    // NOP
label_264a3c:
    // 0x264a3c: 0x0  nop
    ctx->pc = 0x264a3cu;
    // NOP
label_264a40:
    // 0x264a40: 0xf2ae  .word       0x0000F2AE                   # dsub        $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264a44:
    // 0x264a44: 0x3ca0  .word       0x00003CA0                   # add         $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264a48:
    // 0x264a48: 0x0  nop
    ctx->pc = 0x264a48u;
    // NOP
label_264a4c:
    // 0x264a4c: 0x0  nop
    ctx->pc = 0x264a4cu;
    // NOP
label_264a50:
    // 0x264a50: 0xf2b6  tne         $zero, $zero, 970
    ctx->pc = 0x264a50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a54:
    // 0x264a54: 0x4ff0  tge         $zero, $zero, 319
    ctx->pc = 0x264a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a58:
    // 0x264a58: 0x0  nop
    ctx->pc = 0x264a58u;
    // NOP
label_264a5c:
    // 0x264a5c: 0x0  nop
    ctx->pc = 0x264a5cu;
    // NOP
label_264a60:
    // 0x264a60: 0xf2c0  sll         $fp, $zero, 11
    ctx->pc = 0x264a60u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264a64:
    // 0x264a64: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x264a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a68:
    // 0x264a68: 0x0  nop
    ctx->pc = 0x264a68u;
    // NOP
label_264a6c:
    // 0x264a6c: 0x0  nop
    ctx->pc = 0x264a6cu;
    // NOP
label_264a70:
    // 0x264a70: 0xf2cb  .word       0x0000F2CB                   # movn        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a70u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264a74:
    // 0x264a74: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_264a78:
    // 0x264a78: 0x0  nop
    ctx->pc = 0x264a78u;
    // NOP
label_264a7c:
    // 0x264a7c: 0x0  nop
    ctx->pc = 0x264a7cu;
    // NOP
label_264a80:
    // 0x264a80: 0xf2d4  .word       0x0000F2D4                   # dsllv       $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264a84:
    // 0x264a84: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x264a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264a88:
    // 0x264a88: 0x0  nop
    ctx->pc = 0x264a88u;
    // NOP
label_264a8c:
    // 0x264a8c: 0x0  nop
    ctx->pc = 0x264a8cu;
    // NOP
label_264a90:
    // 0x264a90: 0xf2e1  .word       0x0000F2E1                   # addu        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264a94:
    // 0x264a94: 0x6cf0  tge         $zero, $zero, 435
    ctx->pc = 0x264a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a98:
    // 0x264a98: 0x0  nop
    ctx->pc = 0x264a98u;
    // NOP
label_264a9c:
    // 0x264a9c: 0x0  nop
    ctx->pc = 0x264a9cu;
    // NOP
label_264aa0:
    // 0x264aa0: 0xf2ef  .word       0x0000F2EF                   # dsubu       $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264aa0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264aa4:
    // 0x264aa4: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_264aa8:
    // 0x264aa8: 0x0  nop
    ctx->pc = 0x264aa8u;
    // NOP
label_264aac:
    // 0x264aac: 0x0  nop
    ctx->pc = 0x264aacu;
    // NOP
label_264ab0:
    // 0x264ab0: 0xf2f6  tne         $zero, $zero, 971
    ctx->pc = 0x264ab0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ab4:
    // 0x264ab4: 0x97c0  sll         $s2, $zero, 31
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_264ab8:
    // 0x264ab8: 0x0  nop
    ctx->pc = 0x264ab8u;
    // NOP
label_264abc:
    // 0x264abc: 0x0  nop
    ctx->pc = 0x264abcu;
    // NOP
label_264ac0:
    // 0x264ac0: 0xf309  .word       0x0000F309                   # jalr        $fp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_264ac4:
    if (ctx->pc == 0x264AC4u) {
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AC8u;
        goto label_264ac8;
    }
    ctx->pc = 0x264AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x264AC8u);
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264AC0u, 0x264AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264AC8u;
label_264ac8:
    // 0x264ac8: 0x0  nop
    ctx->pc = 0x264ac8u;
    // NOP
label_264acc:
    // 0x264acc: 0x0  nop
    ctx->pc = 0x264accu;
    // NOP
label_264ad0:
    // 0x264ad0: 0xf319  .word       0x0000F319                   # multu       $zero, $zero # 0000F300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264ad4:
    // 0x264ad4: 0xac90  .word       0x0000AC90                   # mfhi        $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_264ad8:
    // 0x264ad8: 0x0  nop
    ctx->pc = 0x264ad8u;
    // NOP
label_264adc:
    // 0x264adc: 0x0  nop
    ctx->pc = 0x264adcu;
    // NOP
label_264ae0:
    // 0x264ae0: 0xf32f  .word       0x0000F32F                   # dsubu       $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264ae4:
    // 0x264ae4: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264ae8:
    // 0x264ae8: 0x0  nop
    ctx->pc = 0x264ae8u;
    // NOP
label_264aec:
    // 0x264aec: 0x0  nop
    ctx->pc = 0x264aecu;
    // NOP
label_264af0:
    // 0x264af0: 0xf339  .word       0x0000F339                   # INVALID     $zero, $zero, -0xCC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264AF0 raw=0x0000F339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264af4:
    // 0x264af4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264af8:
    // 0x264af8: 0x0  nop
    ctx->pc = 0x264af8u;
    // NOP
label_264afc:
    // 0x264afc: 0x0  nop
    ctx->pc = 0x264afcu;
    // NOP
label_264b00:
    // 0x264b00: 0xf346  .word       0x0000F346                   # srlv        $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264b04:
    // 0x264b04: 0x48e0  .word       0x000048E0                   # add         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264b08:
    // 0x264b08: 0x0  nop
    ctx->pc = 0x264b08u;
    // NOP
label_264b0c:
    // 0x264b0c: 0x0  nop
    ctx->pc = 0x264b0cu;
    // NOP
label_264b10:
    // 0x264b10: 0xf350  .word       0x0000F350                   # mfhi        $fp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b10u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_264b14:
    // 0x264b14: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264b18:
    // 0x264b18: 0x0  nop
    ctx->pc = 0x264b18u;
    // NOP
label_264b1c:
    // 0x264b1c: 0x0  nop
    ctx->pc = 0x264b1cu;
    // NOP
label_264b20:
    // 0x264b20: 0xf359  .word       0x0000F359                   # multu       $zero, $zero # 0000F340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264b24:
    // 0x264b24: 0x85d0  .word       0x000085D0                   # mfhi        $s0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b24u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264b28:
    // 0x264b28: 0x0  nop
    ctx->pc = 0x264b28u;
    // NOP
label_264b2c:
    // 0x264b2c: 0x0  nop
    ctx->pc = 0x264b2cu;
    // NOP
label_264b30:
    // 0x264b30: 0xf36a  .word       0x0000F36A                   # slt         $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b30u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264b34:
    // 0x264b34: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x264b34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264b38:
    // 0x264b38: 0x0  nop
    ctx->pc = 0x264b38u;
    // NOP
label_264b3c:
    // 0x264b3c: 0x0  nop
    ctx->pc = 0x264b3cu;
    // NOP
label_264b40:
    // 0x264b40: 0xf374  teq         $zero, $zero, 973
    ctx->pc = 0x264b40u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264b44:
    // 0x264b44: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264b48:
    // 0x264b48: 0x0  nop
    ctx->pc = 0x264b48u;
    // NOP
label_264b4c:
    // 0x264b4c: 0x0  nop
    ctx->pc = 0x264b4cu;
    // NOP
label_264b50:
    // 0x264b50: 0xf381  .word       0x0000F381                   # INVALID     $zero, $zero, -0xC7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x264B50 raw=0x0000F381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264b54:
    // 0x264b54: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b54u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264b58:
    // 0x264b58: 0x0  nop
    ctx->pc = 0x264b58u;
    // NOP
label_264b5c:
    // 0x264b5c: 0x0  nop
    ctx->pc = 0x264b5cu;
    // NOP
label_264b60:
    // 0x264b60: 0xf392  .word       0x0000F392                   # mflo        $fp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b60u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_264b64:
    // 0x264b64: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b64u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264b68:
    // 0x264b68: 0x0  nop
    ctx->pc = 0x264b68u;
    // NOP
label_264b6c:
    // 0x264b6c: 0x0  nop
    ctx->pc = 0x264b6cu;
    // NOP
label_264b70:
    // 0x264b70: 0xf39f  .word       0x0000F39F                   # ddivu       $fp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264B70 raw=0x0000F39F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264b74:
    // 0x264b74: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_264b78:
    // 0x264b78: 0x0  nop
    ctx->pc = 0x264b78u;
    // NOP
label_264b7c:
    // 0x264b7c: 0x0  nop
    ctx->pc = 0x264b7cu;
    // NOP
label_264b80:
    // 0x264b80: 0xf3a9  .word       0x0000F3A9                   # mtsa        $zero # 0000F380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264b80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264b84:
    // 0x264b84: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x264b84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264b88:
    // 0x264b88: 0x0  nop
    ctx->pc = 0x264b88u;
    // NOP
label_264b8c:
    // 0x264b8c: 0x0  nop
    ctx->pc = 0x264b8cu;
    // NOP
label_264b90:
    // 0x264b90: 0xf3b3  tltu        $zero, $zero, 974
    ctx->pc = 0x264b90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264b94:
    // 0x264b94: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_264b98:
    // 0x264b98: 0x0  nop
    ctx->pc = 0x264b98u;
    // NOP
label_264b9c:
    // 0x264b9c: 0x0  nop
    ctx->pc = 0x264b9cu;
    // NOP
label_264ba0:
    // 0x264ba0: 0xf3bd  .word       0x0000F3BD                   # INVALID     $zero, $zero, -0xC43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264BA0 raw=0x0000F3BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ba4:
    // 0x264ba4: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264ba8:
    // 0x264ba8: 0x0  nop
    ctx->pc = 0x264ba8u;
    // NOP
label_264bac:
    // 0x264bac: 0x0  nop
    ctx->pc = 0x264bacu;
    // NOP
label_264bb0:
    // 0x264bb0: 0xf3c6  .word       0x0000F3C6                   # srlv        $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bb0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264bb4:
    // 0x264bb4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264bb8:
    // 0x264bb8: 0x0  nop
    ctx->pc = 0x264bb8u;
    // NOP
label_264bbc:
    // 0x264bbc: 0x0  nop
    ctx->pc = 0x264bbcu;
    // NOP
label_264bc0:
    // 0x264bc0: 0xf3d3  .word       0x0000F3D3                   # mtlo        $zero # 0000F3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bc0u;
    ctx->lo = GPR_U64(ctx, 0);
label_264bc4:
    // 0x264bc4: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x264bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264bc8:
    // 0x264bc8: 0x0  nop
    ctx->pc = 0x264bc8u;
    // NOP
label_264bcc:
    // 0x264bcc: 0x0  nop
    ctx->pc = 0x264bccu;
    // NOP
label_264bd0:
    // 0x264bd0: 0xf3df  .word       0x0000F3DF                   # ddivu       $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264BD0 raw=0x0000F3DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264bd4:
    // 0x264bd4: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bd4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_264bd8:
    // 0x264bd8: 0x0  nop
    ctx->pc = 0x264bd8u;
    // NOP
label_264bdc:
    // 0x264bdc: 0x0  nop
    ctx->pc = 0x264bdcu;
    // NOP
label_264be0:
    // 0x264be0: 0xf3ef  .word       0x0000F3EF                   # dsubu       $fp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264be0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264be4:
    // 0x264be4: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x264be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264be8:
    // 0x264be8: 0x0  nop
    ctx->pc = 0x264be8u;
    // NOP
label_264bec:
    // 0x264bec: 0x0  nop
    ctx->pc = 0x264becu;
    // NOP
label_264bf0:
    // 0x264bf0: 0xf3fd  .word       0x0000F3FD                   # INVALID     $zero, $zero, -0xC03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264BF0 raw=0x0000F3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264bf4:
    // 0x264bf4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264bf4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264bf8:
    // 0x264bf8: 0x0  nop
    ctx->pc = 0x264bf8u;
    // NOP
label_264bfc:
    // 0x264bfc: 0x0  nop
    ctx->pc = 0x264bfcu;
    // NOP
label_264c00:
    // 0x264c00: 0xf40c  syscall     976
    ctx->pc = 0x264c00u;
    ctx->pc = 0x264C04u;
runtime->handleSyscall(rdram, ctx, 0x3D0u);
label_264c04:
    // 0x264c04: 0xa930  tge         $zero, $zero, 676
    ctx->pc = 0x264c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264c08:
    // 0x264c08: 0x0  nop
    ctx->pc = 0x264c08u;
    // NOP
label_264c0c:
    // 0x264c0c: 0x0  nop
    ctx->pc = 0x264c0cu;
    // NOP
label_264c10:
    // 0x264c10: 0xf422  .word       0x0000F422                   # neg         $fp, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264c14:
    // 0x264c14: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264c18:
    // 0x264c18: 0x0  nop
    ctx->pc = 0x264c18u;
    // NOP
label_264c1c:
    // 0x264c1c: 0x0  nop
    ctx->pc = 0x264c1cu;
    // NOP
label_264c20:
    // 0x264c20: 0xf42e  .word       0x0000F42E                   # dsub        $fp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264c24:
    // 0x264c24: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c24u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_264c28:
    // 0x264c28: 0x0  nop
    ctx->pc = 0x264c28u;
    // NOP
label_264c2c:
    // 0x264c2c: 0x0  nop
    ctx->pc = 0x264c2cu;
    // NOP
label_264c30:
    // 0x264c30: 0xf43e  dsrl32      $fp, $zero, 16
    ctx->pc = 0x264c30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 16));
label_264c34:
    // 0x264c34: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x264c34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264c38:
    // 0x264c38: 0x0  nop
    ctx->pc = 0x264c38u;
    // NOP
label_264c3c:
    // 0x264c3c: 0x0  nop
    ctx->pc = 0x264c3cu;
    // NOP
label_264c40:
    // 0x264c40: 0xf44b  .word       0x0000F44B                   # movn        $fp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c40u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264c44:
    // 0x264c44: 0x6770  tge         $zero, $zero, 413
    ctx->pc = 0x264c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264c48:
    // 0x264c48: 0x0  nop
    ctx->pc = 0x264c48u;
    // NOP
label_264c4c:
    // 0x264c4c: 0x0  nop
    ctx->pc = 0x264c4cu;
    // NOP
label_264c50:
    // 0x264c50: 0xf458  .word       0x0000F458                   # mult        $fp, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264c54:
    // 0x264c54: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264c58:
    // 0x264c58: 0x0  nop
    ctx->pc = 0x264c58u;
    // NOP
label_264c5c:
    // 0x264c5c: 0x0  nop
    ctx->pc = 0x264c5cu;
    // NOP
label_264c60:
    // 0x264c60: 0xf465  .word       0x0000F465                   # move        $fp, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c60u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_264c64:
    // 0x264c64: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264c68:
    // 0x264c68: 0x0  nop
    ctx->pc = 0x264c68u;
    // NOP
label_264c6c:
    // 0x264c6c: 0x0  nop
    ctx->pc = 0x264c6cu;
    // NOP
label_264c70:
    // 0x264c70: 0xf46e  .word       0x0000F46E                   # dsub        $fp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264c74:
    // 0x264c74: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264c78:
    // 0x264c78: 0x0  nop
    ctx->pc = 0x264c78u;
    // NOP
label_264c7c:
    // 0x264c7c: 0x0  nop
    ctx->pc = 0x264c7cu;
    // NOP
label_264c80:
    // 0x264c80: 0xf47e  dsrl32      $fp, $zero, 17
    ctx->pc = 0x264c80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 17));
label_264c84:
    // 0x264c84: 0xa750  .word       0x0000A750                   # mfhi        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c84u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_264c88:
    // 0x264c88: 0x0  nop
    ctx->pc = 0x264c88u;
    // NOP
label_264c8c:
    // 0x264c8c: 0x0  nop
    ctx->pc = 0x264c8cu;
    // NOP
label_264c90:
    // 0x264c90: 0xf493  .word       0x0000F493                   # mtlo        $zero # 0000F480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264c90u;
    ctx->lo = GPR_U64(ctx, 0);
label_264c94:
    // 0x264c94: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264c98:
    // 0x264c98: 0x0  nop
    ctx->pc = 0x264c98u;
    // NOP
label_264c9c:
    // 0x264c9c: 0x0  nop
    ctx->pc = 0x264c9cu;
    // NOP
label_264ca0:
    // 0x264ca0: 0xf49b  .word       0x0000F49B                   # divu        $fp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ca0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_264ca4:
    // 0x264ca4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x264ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ca8:
    // 0x264ca8: 0x0  nop
    ctx->pc = 0x264ca8u;
    // NOP
label_264cac:
    // 0x264cac: 0x0  nop
    ctx->pc = 0x264cacu;
    // NOP
label_264cb0:
    // 0x264cb0: 0xf4a6  .word       0x0000F4A6                   # xor         $fp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cb0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264cb4:
    // 0x264cb4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x264cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_264cb8:
    // 0x264cb8: 0x0  nop
    ctx->pc = 0x264cb8u;
    // NOP
label_264cbc:
    // 0x264cbc: 0x0  nop
    ctx->pc = 0x264cbcu;
    // NOP
label_264cc0:
    // 0x264cc0: 0xf4b6  tne         $zero, $zero, 978
    ctx->pc = 0x264cc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264cc4:
    // 0x264cc4: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264cc8:
    // 0x264cc8: 0x0  nop
    ctx->pc = 0x264cc8u;
    // NOP
label_264ccc:
    // 0x264ccc: 0x0  nop
    ctx->pc = 0x264cccu;
    // NOP
label_264cd0:
    // 0x264cd0: 0xf4c1  .word       0x0000F4C1                   # INVALID     $zero, $zero, -0xB3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x264CD0 raw=0x0000F4C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264cd4:
    // 0x264cd4: 0x4780  sll         $t0, $zero, 30
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_264cd8:
    // 0x264cd8: 0x0  nop
    ctx->pc = 0x264cd8u;
    // NOP
label_264cdc:
    // 0x264cdc: 0x0  nop
    ctx->pc = 0x264cdcu;
    // NOP
label_264ce0:
    // 0x264ce0: 0xf4ca  .word       0x0000F4CA                   # movz        $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264ce4:
    // 0x264ce4: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ce4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264ce8:
    // 0x264ce8: 0x0  nop
    ctx->pc = 0x264ce8u;
    // NOP
label_264cec:
    // 0x264cec: 0x0  nop
    ctx->pc = 0x264cecu;
    // NOP
label_264cf0:
    // 0x264cf0: 0xf4d7  .word       0x0000F4D7                   # dsrav       $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cf0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264cf4:
    // 0x264cf4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264cf4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264cf8:
    // 0x264cf8: 0x0  nop
    ctx->pc = 0x264cf8u;
    // NOP
label_264cfc:
    // 0x264cfc: 0x0  nop
    ctx->pc = 0x264cfcu;
    // NOP
label_264d00:
    // 0x264d00: 0xf4e6  .word       0x0000F4E6                   # xor         $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264d04:
    // 0x264d04: 0xdf30  tge         $zero, $zero, 892
    ctx->pc = 0x264d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d08:
    // 0x264d08: 0x0  nop
    ctx->pc = 0x264d08u;
    // NOP
label_264d0c:
    // 0x264d0c: 0x0  nop
    ctx->pc = 0x264d0cu;
    // NOP
label_264d10:
    // 0x264d10: 0xf502  srl         $fp, $zero, 20
    ctx->pc = 0x264d10u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 20));
label_264d14:
    // 0x264d14: 0xac80  sll         $s5, $zero, 18
    ctx->pc = 0x264d14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264d18:
    // 0x264d18: 0x0  nop
    ctx->pc = 0x264d18u;
    // NOP
label_264d1c:
    // 0x264d1c: 0x0  nop
    ctx->pc = 0x264d1cu;
    // NOP
label_264d20:
    // 0x264d20: 0xf518  .word       0x0000F518                   # mult        $fp, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264d24:
    // 0x264d24: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_264d28:
    // 0x264d28: 0x0  nop
    ctx->pc = 0x264d28u;
    // NOP
label_264d2c:
    // 0x264d2c: 0x0  nop
    ctx->pc = 0x264d2cu;
    // NOP
label_264d30:
    // 0x264d30: 0xf52a  .word       0x0000F52A                   # slt         $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d30u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264d34:
    // 0x264d34: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x264d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d38:
    // 0x264d38: 0x0  nop
    ctx->pc = 0x264d38u;
    // NOP
label_264d3c:
    // 0x264d3c: 0x0  nop
    ctx->pc = 0x264d3cu;
    // NOP
label_264d40:
    // 0x264d40: 0xf538  dsll        $fp, $zero, 20
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 20);
label_264d44:
    // 0x264d44: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x264d44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264d48:
    // 0x264d48: 0x0  nop
    ctx->pc = 0x264d48u;
    // NOP
label_264d4c:
    // 0x264d4c: 0x0  nop
    ctx->pc = 0x264d4cu;
    // NOP
label_264d50:
    // 0x264d50: 0xf542  srl         $fp, $zero, 21
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_264d54:
    // 0x264d54: 0x63b0  tge         $zero, $zero, 398
    ctx->pc = 0x264d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d58:
    // 0x264d58: 0x0  nop
    ctx->pc = 0x264d58u;
    // NOP
label_264d5c:
    // 0x264d5c: 0x0  nop
    ctx->pc = 0x264d5cu;
    // NOP
label_264d60:
    // 0x264d60: 0xf54f  .word       0x0000F54F                   # sync.p # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264d64:
    // 0x264d64: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264d68:
    // 0x264d68: 0x0  nop
    ctx->pc = 0x264d68u;
    // NOP
label_264d6c:
    // 0x264d6c: 0x0  nop
    ctx->pc = 0x264d6cu;
    // NOP
label_264d70:
    // 0x264d70: 0xf55c  .word       0x0000F55C                   # dmult       $zero, $zero # 0000F540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x264D70 raw=0x0000F55C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264d74:
    // 0x264d74: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x264d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264d78:
    // 0x264d78: 0x0  nop
    ctx->pc = 0x264d78u;
    // NOP
label_264d7c:
    // 0x264d7c: 0x0  nop
    ctx->pc = 0x264d7cu;
    // NOP
label_264d80:
    // 0x264d80: 0xf569  .word       0x0000F569                   # mtsa        $zero # 0000F540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264d80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264d84:
    // 0x264d84: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x264d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264d88:
    // 0x264d88: 0x0  nop
    ctx->pc = 0x264d88u;
    // NOP
label_264d8c:
    // 0x264d8c: 0x0  nop
    ctx->pc = 0x264d8cu;
    // NOP
label_264d90:
    // 0x264d90: 0xf579  .word       0x0000F579                   # INVALID     $zero, $zero, -0xA87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264D90 raw=0x0000F579"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264d94:
    // 0x264d94: 0xb240  sll         $s6, $zero, 9
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_264d98:
    // 0x264d98: 0x0  nop
    ctx->pc = 0x264d98u;
    // NOP
label_264d9c:
    // 0x264d9c: 0x0  nop
    ctx->pc = 0x264d9cu;
    // NOP
label_264da0:
    // 0x264da0: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264da0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_264da4:
    // 0x264da4: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x264da4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264da8:
    // 0x264da8: 0x0  nop
    ctx->pc = 0x264da8u;
    // NOP
label_264dac:
    // 0x264dac: 0x0  nop
    ctx->pc = 0x264dacu;
    // NOP
label_264db0:
    // 0x264db0: 0xf59d  .word       0x0000F59D                   # dmultu      $zero, $zero # 0000F580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264DB0 raw=0x0000F59D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264db4:
    // 0x264db4: 0x74b0  tge         $zero, $zero, 466
    ctx->pc = 0x264db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264db8:
    // 0x264db8: 0x0  nop
    ctx->pc = 0x264db8u;
    // NOP
label_264dbc:
    // 0x264dbc: 0x0  nop
    ctx->pc = 0x264dbcu;
    // NOP
label_264dc0:
    // 0x264dc0: 0xf5ac  .word       0x0000F5AC                   # dadd        $fp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264dc4:
    // 0x264dc4: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_264dc8:
    // 0x264dc8: 0x0  nop
    ctx->pc = 0x264dc8u;
    // NOP
label_264dcc:
    // 0x264dcc: 0x0  nop
    ctx->pc = 0x264dccu;
    // NOP
label_264dd0:
    // 0x264dd0: 0xf5bd  .word       0x0000F5BD                   # INVALID     $zero, $zero, -0xA43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264DD0 raw=0x0000F5BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264dd4:
    // 0x264dd4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_264dd8:
    // 0x264dd8: 0x0  nop
    ctx->pc = 0x264dd8u;
    // NOP
label_264ddc:
    // 0x264ddc: 0x0  nop
    ctx->pc = 0x264ddcu;
    // NOP
label_264de0:
    // 0x264de0: 0xf5c9  .word       0x0000F5C9                   # jalr        $fp, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_264de4:
    if (ctx->pc == 0x264DE4u) {
        ctx->pc = 0x264DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DE0u;
        // 0x264de4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x264DE8u;
        goto label_264de8;
    }
    ctx->pc = 0x264DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x264DE8u);
        ctx->pc = 0x264DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DE0u;
        // 0x264de4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264DE0u, 0x264DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264DE8u;
label_264de8:
    // 0x264de8: 0x0  nop
    ctx->pc = 0x264de8u;
    // NOP
label_264dec:
    // 0x264dec: 0x0  nop
    ctx->pc = 0x264decu;
    // NOP
label_264df0:
    // 0x264df0: 0xf5d2  .word       0x0000F5D2                   # mflo        $fp # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264df0u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_264df4:
    // 0x264df4: 0x3250  .word       0x00003250                   # mfhi        $a2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264df4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_264df8:
    // 0x264df8: 0x0  nop
    ctx->pc = 0x264df8u;
    // NOP
label_264dfc:
    // 0x264dfc: 0x0  nop
    ctx->pc = 0x264dfcu;
    // NOP
label_264e00:
    // 0x264e00: 0xf5d9  .word       0x0000F5D9                   # multu       $zero, $zero # 0000F5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264e04:
    // 0x264e04: 0x5380  sll         $t2, $zero, 14
    ctx->pc = 0x264e04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_264e08:
    // 0x264e08: 0x0  nop
    ctx->pc = 0x264e08u;
    // NOP
label_264e0c:
    // 0x264e0c: 0x0  nop
    ctx->pc = 0x264e0cu;
    // NOP
label_264e10:
    // 0x264e10: 0xf5e4  .word       0x0000F5E4                   # and         $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_264e14:
    // 0x264e14: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x264e14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_264e18:
    // 0x264e18: 0x0  nop
    ctx->pc = 0x264e18u;
    // NOP
label_264e1c:
    // 0x264e1c: 0x0  nop
    ctx->pc = 0x264e1cu;
    // NOP
label_264e20:
    // 0x264e20: 0xf5f6  tne         $zero, $zero, 983
    ctx->pc = 0x264e20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e24:
    // 0x264e24: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x264e24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_264e28:
    // 0x264e28: 0x0  nop
    ctx->pc = 0x264e28u;
    // NOP
label_264e2c:
    // 0x264e2c: 0x0  nop
    ctx->pc = 0x264e2cu;
    // NOP
label_264e30:
    // 0x264e30: 0xf603  sra         $fp, $zero, 24
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), 24));
label_264e34:
    // 0x264e34: 0x43b0  tge         $zero, $zero, 270
    ctx->pc = 0x264e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e38:
    // 0x264e38: 0x0  nop
    ctx->pc = 0x264e38u;
    // NOP
label_264e3c:
    // 0x264e3c: 0x0  nop
    ctx->pc = 0x264e3cu;
    // NOP
label_264e40:
    // 0x264e40: 0xf60c  syscall     984
    ctx->pc = 0x264e40u;
    ctx->pc = 0x264E44u;
runtime->handleSyscall(rdram, ctx, 0x3D8u);
label_264e44:
    // 0x264e44: 0x3f60  .word       0x00003F60                   # add         $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264e48:
    // 0x264e48: 0x0  nop
    ctx->pc = 0x264e48u;
    // NOP
label_264e4c:
    // 0x264e4c: 0x0  nop
    ctx->pc = 0x264e4cu;
    // NOP
label_264e50:
    // 0x264e50: 0xf614  .word       0x0000F614                   # dsllv       $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264e54:
    // 0x264e54: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x264e54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_264e58:
    // 0x264e58: 0x0  nop
    ctx->pc = 0x264e58u;
    // NOP
label_264e5c:
    // 0x264e5c: 0x0  nop
    ctx->pc = 0x264e5cu;
    // NOP
label_264e60:
    // 0x264e60: 0xf620  .word       0x0000F620                   # add         $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_264e64:
    // 0x264e64: 0x2c00  sll         $a1, $zero, 16
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_264e68:
    // 0x264e68: 0x0  nop
    ctx->pc = 0x264e68u;
    // NOP
label_264e6c:
    // 0x264e6c: 0x0  nop
    ctx->pc = 0x264e6cu;
    // NOP
label_264e70:
    // 0x264e70: 0xf626  .word       0x0000F626                   # xor         $fp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e70u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264e74:
    // 0x264e74: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264e78:
    // 0x264e78: 0x0  nop
    ctx->pc = 0x264e78u;
    // NOP
label_264e7c:
    // 0x264e7c: 0x0  nop
    ctx->pc = 0x264e7cu;
    // NOP
label_264e80:
    // 0x264e80: 0xf632  tlt         $zero, $zero, 984
    ctx->pc = 0x264e80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e84:
    // 0x264e84: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x264e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264e88:
    // 0x264e88: 0x0  nop
    ctx->pc = 0x264e88u;
    // NOP
label_264e8c:
    // 0x264e8c: 0x0  nop
    ctx->pc = 0x264e8cu;
    // NOP
label_264e90:
    // 0x264e90: 0xf63d  .word       0x0000F63D                   # INVALID     $zero, $zero, -0x9C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264e90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264E90 raw=0x0000F63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264e94:
    // 0x264e94: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_264e98:
    // 0x264e98: 0x0  nop
    ctx->pc = 0x264e98u;
    // NOP
label_264e9c:
    // 0x264e9c: 0x0  nop
    ctx->pc = 0x264e9cu;
    // NOP
label_264ea0:
    // 0x264ea0: 0xf646  .word       0x0000F646                   # srlv        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264ea4:
    // 0x264ea4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264ea8:
    // 0x264ea8: 0x0  nop
    ctx->pc = 0x264ea8u;
    // NOP
label_264eac:
    // 0x264eac: 0x0  nop
    ctx->pc = 0x264eacu;
    // NOP
label_264eb0:
    // 0x264eb0: 0xf64f  .word       0x0000F64F                   # sync.p # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264eb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264eb4:
    // 0x264eb4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x264eb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264eb8:
    // 0x264eb8: 0x0  nop
    ctx->pc = 0x264eb8u;
    // NOP
label_264ebc:
    // 0x264ebc: 0x0  nop
    ctx->pc = 0x264ebcu;
    // NOP
label_264ec0:
    // 0x264ec0: 0xf65d  .word       0x0000F65D                   # dmultu      $zero, $zero # 0000F640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264EC0 raw=0x0000F65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ec4:
    // 0x264ec4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x264ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ec8:
    // 0x264ec8: 0x0  nop
    ctx->pc = 0x264ec8u;
    // NOP
label_264ecc:
    // 0x264ecc: 0x0  nop
    ctx->pc = 0x264eccu;
    // NOP
label_264ed0:
    // 0x264ed0: 0xf66e  .word       0x0000F66E                   # dsub        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ed0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264ed4:
    // 0x264ed4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_264ed8:
    // 0x264ed8: 0x0  nop
    ctx->pc = 0x264ed8u;
    // NOP
label_264edc:
    // 0x264edc: 0x0  nop
    ctx->pc = 0x264edcu;
    // NOP
label_264ee0:
    // 0x264ee0: 0xf67a  dsrl        $fp, $zero, 25
    ctx->pc = 0x264ee0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 25);
label_264ee4:
    // 0x264ee4: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ee4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264ee8:
    // 0x264ee8: 0x0  nop
    ctx->pc = 0x264ee8u;
    // NOP
label_264eec:
    // 0x264eec: 0x0  nop
    ctx->pc = 0x264eecu;
    // NOP
label_264ef0:
    // 0x264ef0: 0xf685  .word       0x0000F685                   # INVALID     $zero, $zero, -0x97B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x264EF0 raw=0x0000F685"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264ef4:
    // 0x264ef4: 0x4490  .word       0x00004490                   # mfhi        $t0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ef4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264ef8:
    // 0x264ef8: 0x0  nop
    ctx->pc = 0x264ef8u;
    // NOP
label_264efc:
    // 0x264efc: 0x0  nop
    ctx->pc = 0x264efcu;
    // NOP
label_264f00:
    // 0x264f00: 0xf68e  .word       0x0000F68E                   # INVALID     $zero, $zero, -0x972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x264F00 raw=0x0000F68E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f04:
    // 0x264f04: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264f08:
    // 0x264f08: 0x0  nop
    ctx->pc = 0x264f08u;
    // NOP
label_264f0c:
    // 0x264f0c: 0x0  nop
    ctx->pc = 0x264f0cu;
    // NOP
label_264f10:
    // 0x264f10: 0xf696  .word       0x0000F696                   # dsrlv       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264f14:
    // 0x264f14: 0x36e0  .word       0x000036E0                   # add         $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_264f18:
    // 0x264f18: 0x0  nop
    ctx->pc = 0x264f18u;
    // NOP
label_264f1c:
    // 0x264f1c: 0x0  nop
    ctx->pc = 0x264f1cu;
    // NOP
label_264f20:
    // 0x264f20: 0xf69d  .word       0x0000F69D                   # dmultu      $zero, $zero # 0000F680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264F20 raw=0x0000F69D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f24:
    // 0x264f24: 0x2740  sll         $a0, $zero, 29
    ctx->pc = 0x264f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_264f28:
    // 0x264f28: 0x0  nop
    ctx->pc = 0x264f28u;
    // NOP
label_264f2c:
    // 0x264f2c: 0x0  nop
    ctx->pc = 0x264f2cu;
    // NOP
label_264f30:
    // 0x264f30: 0xf6a2  .word       0x0000F6A2                   # neg         $fp, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264f34:
    // 0x264f34: 0x5430  tge         $zero, $zero, 336
    ctx->pc = 0x264f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264f38:
    // 0x264f38: 0x0  nop
    ctx->pc = 0x264f38u;
    // NOP
label_264f3c:
    // 0x264f3c: 0x0  nop
    ctx->pc = 0x264f3cu;
    // NOP
label_264f40:
    // 0x264f40: 0xf6ad  .word       0x0000F6AD                   # daddu       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264f44:
    // 0x264f44: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_264f48:
    // 0x264f48: 0x0  nop
    ctx->pc = 0x264f48u;
    // NOP
label_264f4c:
    // 0x264f4c: 0x0  nop
    ctx->pc = 0x264f4cu;
    // NOP
label_264f50:
    // 0x264f50: 0xf6be  dsrl32      $fp, $zero, 26
    ctx->pc = 0x264f50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 26));
label_264f54:
    // 0x264f54: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x264f54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264f58:
    // 0x264f58: 0x0  nop
    ctx->pc = 0x264f58u;
    // NOP
label_264f5c:
    // 0x264f5c: 0x0  nop
    ctx->pc = 0x264f5cu;
    // NOP
label_264f60:
    // 0x264f60: 0xf6c6  .word       0x0000F6C6                   # srlv        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264f64:
    // 0x264f64: 0x3480  sll         $a2, $zero, 18
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264f68:
    // 0x264f68: 0x0  nop
    ctx->pc = 0x264f68u;
    // NOP
label_264f6c:
    // 0x264f6c: 0x0  nop
    ctx->pc = 0x264f6cu;
    // NOP
label_264f70:
    // 0x264f70: 0xf6cd  break       0, 987
    ctx->pc = 0x264f70u;
    runtime->handleBreak(rdram, ctx);
label_264f74:
    // 0x264f74: 0x3c80  sll         $a3, $zero, 18
    ctx->pc = 0x264f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_264f78:
    // 0x264f78: 0x0  nop
    ctx->pc = 0x264f78u;
    // NOP
label_264f7c:
    // 0x264f7c: 0x0  nop
    ctx->pc = 0x264f7cu;
    // NOP
label_264f80:
    // 0x264f80: 0xf6d5  .word       0x0000F6D5                   # INVALID     $zero, $zero, -0x92B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x264F80 raw=0x0000F6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264f84:
    // 0x264f84: 0x6400  sll         $t4, $zero, 16
    ctx->pc = 0x264f84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_264f88:
    // 0x264f88: 0x0  nop
    ctx->pc = 0x264f88u;
    // NOP
label_264f8c:
    // 0x264f8c: 0x0  nop
    ctx->pc = 0x264f8cu;
    // NOP
label_264f90:
    // 0x264f90: 0xf6e2  .word       0x0000F6E2                   # neg         $fp, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264f90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264f94:
    // 0x264f94: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x264f94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264f98:
    // 0x264f98: 0x0  nop
    ctx->pc = 0x264f98u;
    // NOP
label_264f9c:
    // 0x264f9c: 0x0  nop
    ctx->pc = 0x264f9cu;
    // NOP
label_264fa0:
    // 0x264fa0: 0xf6eb  .word       0x0000F6EB                   # sltu        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fa0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_264fa4:
    // 0x264fa4: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x264fa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264fa8:
    // 0x264fa8: 0x0  nop
    ctx->pc = 0x264fa8u;
    // NOP
label_264fac:
    // 0x264fac: 0x0  nop
    ctx->pc = 0x264facu;
    // NOP
label_264fb0:
    // 0x264fb0: 0xf6f5  .word       0x0000F6F5                   # INVALID     $zero, $zero, -0x90B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x264FB0 raw=0x0000F6F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264fb4:
    // 0x264fb4: 0x63d0  .word       0x000063D0                   # mfhi        $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264fb8:
    // 0x264fb8: 0x0  nop
    ctx->pc = 0x264fb8u;
    // NOP
label_264fbc:
    // 0x264fbc: 0x0  nop
    ctx->pc = 0x264fbcu;
    // NOP
label_264fc0:
    // 0x264fc0: 0xf702  srl         $fp, $zero, 28
    ctx->pc = 0x264fc0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 28));
label_264fc4:
    // 0x264fc4: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_264fc8:
    // 0x264fc8: 0x0  nop
    ctx->pc = 0x264fc8u;
    // NOP
label_264fcc:
    // 0x264fcc: 0x0  nop
    ctx->pc = 0x264fccu;
    // NOP
label_264fd0:
    // 0x264fd0: 0xf714  .word       0x0000F714                   # dsllv       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264fd4:
    // 0x264fd4: 0x5250  .word       0x00005250                   # mfhi        $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264fd8:
    // 0x264fd8: 0x0  nop
    ctx->pc = 0x264fd8u;
    // NOP
label_264fdc:
    // 0x264fdc: 0x0  nop
    ctx->pc = 0x264fdcu;
    // NOP
label_264fe0:
    // 0x264fe0: 0xf71f  .word       0x0000F71F                   # ddivu       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264FE0 raw=0x0000F71F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264fe4:
    // 0x264fe4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x264fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_264fe8:
    // 0x264fe8: 0x0  nop
    ctx->pc = 0x264fe8u;
    // NOP
label_264fec:
    // 0x264fec: 0x0  nop
    ctx->pc = 0x264fecu;
    // NOP
label_264ff0:
    // 0x264ff0: 0xf731  tgeu        $zero, $zero, 988
    ctx->pc = 0x264ff0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ff4:
    // 0x264ff4: 0xb700  sll         $s6, $zero, 28
    ctx->pc = 0x264ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_264ff8:
    // 0x264ff8: 0x0  nop
    ctx->pc = 0x264ff8u;
    // NOP
label_264ffc:
    // 0x264ffc: 0x0  nop
    ctx->pc = 0x264ffcu;
    // NOP
label_265000:
    // 0x265000: 0xf748  .word       0x0000F748                   # jr          $zero # 0000F740 <InstrIdType: CPU_SPECIAL>
label_265004:
    if (ctx->pc == 0x265004u) {
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x5ef0  tge         $zero, $zero, 379 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x265008u;
        goto label_265008;
    }
    ctx->pc = 0x265000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265000u;
        // 0x265004: 0x5ef0  tge         $zero, $zero, 379 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265000u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265008u;
label_265008:
    // 0x265008: 0x0  nop
    ctx->pc = 0x265008u;
    // NOP
label_26500c:
    // 0x26500c: 0x0  nop
    ctx->pc = 0x26500cu;
    // NOP
label_265010:
    // 0x265010: 0xf754  .word       0x0000F754                   # dsllv       $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265010u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_265014:
    // 0x265014: 0x7a90  .word       0x00007A90                   # mfhi        $t7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265018:
    // 0x265018: 0x0  nop
    ctx->pc = 0x265018u;
    // NOP
label_26501c:
    // 0x26501c: 0x0  nop
    ctx->pc = 0x26501cu;
    // NOP
label_265020:
    // 0x265020: 0xf764  .word       0x0000F764                   # and         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265020u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_265024:
    // 0x265024: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265028:
    // 0x265028: 0x0  nop
    ctx->pc = 0x265028u;
    // NOP
label_26502c:
    // 0x26502c: 0x0  nop
    ctx->pc = 0x26502cu;
    // NOP
label_265030:
    // 0x265030: 0xf76f  .word       0x0000F76F                   # dsubu       $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265030u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_265034:
    // 0x265034: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265034u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_265038:
    // 0x265038: 0x0  nop
    ctx->pc = 0x265038u;
    // NOP
label_26503c:
    // 0x26503c: 0x0  nop
    ctx->pc = 0x26503cu;
    // NOP
label_265040:
    // 0x265040: 0xf779  .word       0x0000F779                   # INVALID     $zero, $zero, -0x887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x265040 raw=0x0000F779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265044:
    // 0x265044: 0x3ef0  tge         $zero, $zero, 251
    ctx->pc = 0x265044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265048:
    // 0x265048: 0x0  nop
    ctx->pc = 0x265048u;
    // NOP
label_26504c:
    // 0x26504c: 0x0  nop
    ctx->pc = 0x26504cu;
    // NOP
label_265050:
    // 0x265050: 0xf781  .word       0x0000F781                   # INVALID     $zero, $zero, -0x87F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265050 raw=0x0000F781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265054:
    // 0x265054: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x265054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_265058:
    // 0x265058: 0x0  nop
    ctx->pc = 0x265058u;
    // NOP
label_26505c:
    // 0x26505c: 0x0  nop
    ctx->pc = 0x26505cu;
    // NOP
label_265060:
    // 0x265060: 0xf78a  .word       0x0000F78A                   # movz        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_265064:
    // 0x265064: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265068:
    // 0x265068: 0x0  nop
    ctx->pc = 0x265068u;
    // NOP
label_26506c:
    // 0x26506c: 0x0  nop
    ctx->pc = 0x26506cu;
    // NOP
label_265070:
    // 0x265070: 0xf79e  .word       0x0000F79E                   # ddiv        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265070 raw=0x0000F79E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265074:
    // 0x265074: 0x7c90  .word       0x00007C90                   # mfhi        $t7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265074u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265078:
    // 0x265078: 0x0  nop
    ctx->pc = 0x265078u;
    // NOP
label_26507c:
    // 0x26507c: 0x0  nop
    ctx->pc = 0x26507cu;
    // NOP
label_265080:
    // 0x265080: 0xf7ae  .word       0x0000F7AE                   # dsub        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265080u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_265084:
    // 0x265084: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265084u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265088:
    // 0x265088: 0x0  nop
    ctx->pc = 0x265088u;
    // NOP
label_26508c:
    // 0x26508c: 0x0  nop
    ctx->pc = 0x26508cu;
    // NOP
label_265090:
    // 0x265090: 0xf7ba  dsrl        $fp, $zero, 30
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 30);
label_265094:
    // 0x265094: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265098:
    // 0x265098: 0x0  nop
    ctx->pc = 0x265098u;
    // NOP
label_26509c:
    // 0x26509c: 0x0  nop
    ctx->pc = 0x26509cu;
    // NOP
label_2650a0:
    // 0x2650a0: 0xf7c4  .word       0x0000F7C4                   # sllv        $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2650a4:
    // 0x2650a4: 0x3d60  .word       0x00003D60                   # add         $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
    ctx->pc = 0x2650a8u;
    return;
}
