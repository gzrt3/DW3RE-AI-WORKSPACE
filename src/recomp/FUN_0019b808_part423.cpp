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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part423(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        case 0x269908u: goto label_269908;
        case 0x26990cu: goto label_26990c;
        case 0x269910u: goto label_269910;
        case 0x269914u: goto label_269914;
        case 0x269918u: goto label_269918;
        case 0x26991cu: goto label_26991c;
        case 0x269920u: goto label_269920;
        case 0x269924u: goto label_269924;
        case 0x269928u: goto label_269928;
        case 0x26992cu: goto label_26992c;
        case 0x269930u: goto label_269930;
        case 0x269934u: goto label_269934;
        case 0x269938u: goto label_269938;
        case 0x26993cu: goto label_26993c;
        case 0x269940u: goto label_269940;
        case 0x269944u: goto label_269944;
        case 0x269948u: goto label_269948;
        case 0x26994cu: goto label_26994c;
        case 0x269950u: goto label_269950;
        case 0x269954u: goto label_269954;
        case 0x269958u: goto label_269958;
        case 0x26995cu: goto label_26995c;
        case 0x269960u: goto label_269960;
        case 0x269964u: goto label_269964;
        case 0x269968u: goto label_269968;
        case 0x26996cu: goto label_26996c;
        case 0x269970u: goto label_269970;
        case 0x269974u: goto label_269974;
        case 0x269978u: goto label_269978;
        case 0x26997cu: goto label_26997c;
        case 0x269980u: goto label_269980;
        case 0x269984u: goto label_269984;
        case 0x269988u: goto label_269988;
        case 0x26998cu: goto label_26998c;
        case 0x269990u: goto label_269990;
        case 0x269994u: goto label_269994;
        case 0x269998u: goto label_269998;
        case 0x26999cu: goto label_26999c;
        case 0x2699a0u: goto label_2699a0;
        case 0x2699a4u: goto label_2699a4;
        case 0x2699a8u: goto label_2699a8;
        case 0x2699acu: goto label_2699ac;
        case 0x2699b0u: goto label_2699b0;
        case 0x2699b4u: goto label_2699b4;
        case 0x2699b8u: goto label_2699b8;
        case 0x2699bcu: goto label_2699bc;
        case 0x2699c0u: goto label_2699c0;
        case 0x2699c4u: goto label_2699c4;
        case 0x2699c8u: goto label_2699c8;
        case 0x2699ccu: goto label_2699cc;
        case 0x2699d0u: goto label_2699d0;
        case 0x2699d4u: goto label_2699d4;
        case 0x2699d8u: goto label_2699d8;
        case 0x2699dcu: goto label_2699dc;
        case 0x2699e0u: goto label_2699e0;
        case 0x2699e4u: goto label_2699e4;
        case 0x2699e8u: goto label_2699e8;
        case 0x2699ecu: goto label_2699ec;
        case 0x2699f0u: goto label_2699f0;
        case 0x2699f4u: goto label_2699f4;
        case 0x2699f8u: goto label_2699f8;
        case 0x2699fcu: goto label_2699fc;
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        case 0x269a40u: goto label_269a40;
        case 0x269a44u: goto label_269a44;
        case 0x269a48u: goto label_269a48;
        case 0x269a4cu: goto label_269a4c;
        case 0x269a50u: goto label_269a50;
        case 0x269a54u: goto label_269a54;
        case 0x269a58u: goto label_269a58;
        case 0x269a5cu: goto label_269a5c;
        case 0x269a60u: goto label_269a60;
        case 0x269a64u: goto label_269a64;
        case 0x269a68u: goto label_269a68;
        case 0x269a6cu: goto label_269a6c;
        case 0x269a70u: goto label_269a70;
        case 0x269a74u: goto label_269a74;
        case 0x269a78u: goto label_269a78;
        case 0x269a7cu: goto label_269a7c;
        case 0x269a80u: goto label_269a80;
        case 0x269a84u: goto label_269a84;
        case 0x269a88u: goto label_269a88;
        case 0x269a8cu: goto label_269a8c;
        case 0x269a90u: goto label_269a90;
        case 0x269a94u: goto label_269a94;
        case 0x269a98u: goto label_269a98;
        case 0x269a9cu: goto label_269a9c;
        case 0x269aa0u: goto label_269aa0;
        case 0x269aa4u: goto label_269aa4;
        case 0x269aa8u: goto label_269aa8;
        case 0x269aacu: goto label_269aac;
        case 0x269ab0u: goto label_269ab0;
        case 0x269ab4u: goto label_269ab4;
        case 0x269ab8u: goto label_269ab8;
        case 0x269abcu: goto label_269abc;
        case 0x269ac0u: goto label_269ac0;
        case 0x269ac4u: goto label_269ac4;
        case 0x269ac8u: goto label_269ac8;
        case 0x269accu: goto label_269acc;
        case 0x269ad0u: goto label_269ad0;
        case 0x269ad4u: goto label_269ad4;
        case 0x269ad8u: goto label_269ad8;
        case 0x269adcu: goto label_269adc;
        case 0x269ae0u: goto label_269ae0;
        case 0x269ae4u: goto label_269ae4;
        case 0x269ae8u: goto label_269ae8;
        case 0x269aecu: goto label_269aec;
        case 0x269af0u: goto label_269af0;
        case 0x269af4u: goto label_269af4;
        case 0x269af8u: goto label_269af8;
        case 0x269afcu: goto label_269afc;
        case 0x269b00u: goto label_269b00;
        case 0x269b04u: goto label_269b04;
        case 0x269b08u: goto label_269b08;
        case 0x269b0cu: goto label_269b0c;
        case 0x269b10u: goto label_269b10;
        case 0x269b14u: goto label_269b14;
        case 0x269b18u: goto label_269b18;
        case 0x269b1cu: goto label_269b1c;
        case 0x269b20u: goto label_269b20;
        case 0x269b24u: goto label_269b24;
        case 0x269b28u: goto label_269b28;
        case 0x269b2cu: goto label_269b2c;
        case 0x269b30u: goto label_269b30;
        case 0x269b34u: goto label_269b34;
        case 0x269b38u: goto label_269b38;
        case 0x269b3cu: goto label_269b3c;
        case 0x269b40u: goto label_269b40;
        case 0x269b44u: goto label_269b44;
        case 0x269b48u: goto label_269b48;
        case 0x269b4cu: goto label_269b4c;
        case 0x269b50u: goto label_269b50;
        case 0x269b54u: goto label_269b54;
        case 0x269b58u: goto label_269b58;
        case 0x269b5cu: goto label_269b5c;
        case 0x269b60u: goto label_269b60;
        case 0x269b64u: goto label_269b64;
        case 0x269b68u: goto label_269b68;
        case 0x269b6cu: goto label_269b6c;
        case 0x269b70u: goto label_269b70;
        case 0x269b74u: goto label_269b74;
        case 0x269b78u: goto label_269b78;
        case 0x269b7cu: goto label_269b7c;
        case 0x269b80u: goto label_269b80;
        case 0x269b84u: goto label_269b84;
        case 0x269b88u: goto label_269b88;
        case 0x269b8cu: goto label_269b8c;
        case 0x269b90u: goto label_269b90;
        case 0x269b94u: goto label_269b94;
        case 0x269b98u: goto label_269b98;
        case 0x269b9cu: goto label_269b9c;
        case 0x269ba0u: goto label_269ba0;
        case 0x269ba4u: goto label_269ba4;
        case 0x269ba8u: goto label_269ba8;
        case 0x269bacu: goto label_269bac;
        case 0x269bb0u: goto label_269bb0;
        case 0x269bb4u: goto label_269bb4;
        case 0x269bb8u: goto label_269bb8;
        case 0x269bbcu: goto label_269bbc;
        case 0x269bc0u: goto label_269bc0;
        case 0x269bc4u: goto label_269bc4;
        case 0x269bc8u: goto label_269bc8;
        case 0x269bccu: goto label_269bcc;
        case 0x269bd0u: goto label_269bd0;
        case 0x269bd4u: goto label_269bd4;
        case 0x269bd8u: goto label_269bd8;
        case 0x269bdcu: goto label_269bdc;
        case 0x269be0u: goto label_269be0;
        case 0x269be4u: goto label_269be4;
        case 0x269be8u: goto label_269be8;
        case 0x269becu: goto label_269bec;
        case 0x269bf0u: goto label_269bf0;
        case 0x269bf4u: goto label_269bf4;
        case 0x269bf8u: goto label_269bf8;
        case 0x269bfcu: goto label_269bfc;
        case 0x269c00u: goto label_269c00;
        case 0x269c04u: goto label_269c04;
        case 0x269c08u: goto label_269c08;
        case 0x269c0cu: goto label_269c0c;
        case 0x269c10u: goto label_269c10;
        case 0x269c14u: goto label_269c14;
        case 0x269c18u: goto label_269c18;
        case 0x269c1cu: goto label_269c1c;
        case 0x269c20u: goto label_269c20;
        case 0x269c24u: goto label_269c24;
        case 0x269c28u: goto label_269c28;
        case 0x269c2cu: goto label_269c2c;
        case 0x269c30u: goto label_269c30;
        case 0x269c34u: goto label_269c34;
        case 0x269c38u: goto label_269c38;
        case 0x269c3cu: goto label_269c3c;
        case 0x269c40u: goto label_269c40;
        case 0x269c44u: goto label_269c44;
        case 0x269c48u: goto label_269c48;
        case 0x269c4cu: goto label_269c4c;
        case 0x269c50u: goto label_269c50;
        case 0x269c54u: goto label_269c54;
        case 0x269c58u: goto label_269c58;
        case 0x269c5cu: goto label_269c5c;
        case 0x269c60u: goto label_269c60;
        case 0x269c64u: goto label_269c64;
        case 0x269c68u: goto label_269c68;
        case 0x269c6cu: goto label_269c6c;
        case 0x269c70u: goto label_269c70;
        case 0x269c74u: goto label_269c74;
        case 0x269c78u: goto label_269c78;
        case 0x269c7cu: goto label_269c7c;
        case 0x269c80u: goto label_269c80;
        case 0x269c84u: goto label_269c84;
        case 0x269c88u: goto label_269c88;
        case 0x269c8cu: goto label_269c8c;
        case 0x269c90u: goto label_269c90;
        case 0x269c94u: goto label_269c94;
        case 0x269c98u: goto label_269c98;
        case 0x269c9cu: goto label_269c9c;
        case 0x269ca0u: goto label_269ca0;
        case 0x269ca4u: goto label_269ca4;
        case 0x269ca8u: goto label_269ca8;
        case 0x269cacu: goto label_269cac;
        case 0x269cb0u: goto label_269cb0;
        case 0x269cb4u: goto label_269cb4;
        case 0x269cb8u: goto label_269cb8;
        case 0x269cbcu: goto label_269cbc;
        case 0x269cc0u: goto label_269cc0;
        case 0x269cc4u: goto label_269cc4;
        case 0x269cc8u: goto label_269cc8;
        case 0x269cccu: goto label_269ccc;
        case 0x269cd0u: goto label_269cd0;
        case 0x269cd4u: goto label_269cd4;
        case 0x269cd8u: goto label_269cd8;
        case 0x269cdcu: goto label_269cdc;
        case 0x269ce0u: goto label_269ce0;
        case 0x269ce4u: goto label_269ce4;
        case 0x269ce8u: goto label_269ce8;
        case 0x269cecu: goto label_269cec;
        case 0x269cf0u: goto label_269cf0;
        case 0x269cf4u: goto label_269cf4;
        case 0x269cf8u: goto label_269cf8;
        case 0x269cfcu: goto label_269cfc;
        case 0x269d00u: goto label_269d00;
        case 0x269d04u: goto label_269d04;
        case 0x269d08u: goto label_269d08;
        case 0x269d0cu: goto label_269d0c;
        case 0x269d10u: goto label_269d10;
        case 0x269d14u: goto label_269d14;
        case 0x269d18u: goto label_269d18;
        case 0x269d1cu: goto label_269d1c;
        case 0x269d20u: goto label_269d20;
        case 0x269d24u: goto label_269d24;
        case 0x269d28u: goto label_269d28;
        case 0x269d2cu: goto label_269d2c;
        case 0x269d30u: goto label_269d30;
        case 0x269d34u: goto label_269d34;
        case 0x269d38u: goto label_269d38;
        case 0x269d3cu: goto label_269d3c;
        case 0x269d40u: goto label_269d40;
        case 0x269d44u: goto label_269d44;
        case 0x269d48u: goto label_269d48;
        case 0x269d4cu: goto label_269d4c;
        case 0x269d50u: goto label_269d50;
        case 0x269d54u: goto label_269d54;
        case 0x269d58u: goto label_269d58;
        case 0x269d5cu: goto label_269d5c;
        case 0x269d60u: goto label_269d60;
        case 0x269d64u: goto label_269d64;
        case 0x269d68u: goto label_269d68;
        case 0x269d6cu: goto label_269d6c;
        case 0x269d70u: goto label_269d70;
        case 0x269d74u: goto label_269d74;
        case 0x269d78u: goto label_269d78;
        case 0x269d7cu: goto label_269d7c;
        case 0x269d80u: goto label_269d80;
        case 0x269d84u: goto label_269d84;
        case 0x269d88u: goto label_269d88;
        case 0x269d8cu: goto label_269d8c;
        case 0x269d90u: goto label_269d90;
        case 0x269d94u: goto label_269d94;
        case 0x269d98u: goto label_269d98;
        case 0x269d9cu: goto label_269d9c;
        case 0x269da0u: goto label_269da0;
        case 0x269da4u: goto label_269da4;
        case 0x269da8u: goto label_269da8;
        case 0x269dacu: goto label_269dac;
        case 0x269db0u: goto label_269db0;
        case 0x269db4u: goto label_269db4;
        case 0x269db8u: goto label_269db8;
        case 0x269dbcu: goto label_269dbc;
        case 0x269dc0u: goto label_269dc0;
        case 0x269dc4u: goto label_269dc4;
        case 0x269dc8u: goto label_269dc8;
        case 0x269dccu: goto label_269dcc;
        case 0x269dd0u: goto label_269dd0;
        case 0x269dd4u: goto label_269dd4;
        case 0x269dd8u: goto label_269dd8;
        case 0x269ddcu: goto label_269ddc;
        case 0x269de0u: goto label_269de0;
        case 0x269de4u: goto label_269de4;
        case 0x269de8u: goto label_269de8;
        case 0x269decu: goto label_269dec;
        case 0x269df0u: goto label_269df0;
        case 0x269df4u: goto label_269df4;
        case 0x269df8u: goto label_269df8;
        case 0x269dfcu: goto label_269dfc;
        case 0x269e00u: goto label_269e00;
        case 0x269e04u: goto label_269e04;
        case 0x269e08u: goto label_269e08;
        case 0x269e0cu: goto label_269e0c;
        case 0x269e10u: goto label_269e10;
        case 0x269e14u: goto label_269e14;
        case 0x269e18u: goto label_269e18;
        case 0x269e1cu: goto label_269e1c;
        case 0x269e20u: goto label_269e20;
        case 0x269e24u: goto label_269e24;
        case 0x269e28u: goto label_269e28;
        case 0x269e2cu: goto label_269e2c;
        case 0x269e30u: goto label_269e30;
        case 0x269e34u: goto label_269e34;
        case 0x269e38u: goto label_269e38;
        case 0x269e3cu: goto label_269e3c;
        case 0x269e40u: goto label_269e40;
        case 0x269e44u: goto label_269e44;
        case 0x269e48u: goto label_269e48;
        case 0x269e4cu: goto label_269e4c;
        case 0x269e50u: goto label_269e50;
        case 0x269e54u: goto label_269e54;
        case 0x269e58u: goto label_269e58;
        case 0x269e5cu: goto label_269e5c;
        case 0x269e60u: goto label_269e60;
        case 0x269e64u: goto label_269e64;
        case 0x269e68u: goto label_269e68;
        case 0x269e6cu: goto label_269e6c;
        case 0x269e70u: goto label_269e70;
        case 0x269e74u: goto label_269e74;
        case 0x269e78u: goto label_269e78;
        case 0x269e7cu: goto label_269e7c;
        case 0x269e80u: goto label_269e80;
        case 0x269e84u: goto label_269e84;
        case 0x269e88u: goto label_269e88;
        case 0x269e8cu: goto label_269e8c;
        case 0x269e90u: goto label_269e90;
        case 0x269e94u: goto label_269e94;
        case 0x269e98u: goto label_269e98;
        case 0x269e9cu: goto label_269e9c;
        case 0x269ea0u: goto label_269ea0;
        case 0x269ea4u: goto label_269ea4;
        case 0x269ea8u: goto label_269ea8;
        case 0x269eacu: goto label_269eac;
        case 0x269eb0u: goto label_269eb0;
        case 0x269eb4u: goto label_269eb4;
        case 0x269eb8u: goto label_269eb8;
        case 0x269ebcu: goto label_269ebc;
        case 0x269ec0u: goto label_269ec0;
        case 0x269ec4u: goto label_269ec4;
        case 0x269ec8u: goto label_269ec8;
        case 0x269eccu: goto label_269ecc;
        case 0x269ed0u: goto label_269ed0;
        case 0x269ed4u: goto label_269ed4;
        case 0x269ed8u: goto label_269ed8;
        case 0x269edcu: goto label_269edc;
        case 0x269ee0u: goto label_269ee0;
        case 0x269ee4u: goto label_269ee4;
        case 0x269ee8u: goto label_269ee8;
        case 0x269eecu: goto label_269eec;
        case 0x269ef0u: goto label_269ef0;
        case 0x269ef4u: goto label_269ef4;
        case 0x269ef8u: goto label_269ef8;
        case 0x269efcu: goto label_269efc;
        case 0x269f00u: goto label_269f00;
        case 0x269f04u: goto label_269f04;
        case 0x269f08u: goto label_269f08;
        case 0x269f0cu: goto label_269f0c;
        case 0x269f10u: goto label_269f10;
        case 0x269f14u: goto label_269f14;
        case 0x269f18u: goto label_269f18;
        case 0x269f1cu: goto label_269f1c;
        case 0x269f20u: goto label_269f20;
        case 0x269f24u: goto label_269f24;
        case 0x269f28u: goto label_269f28;
        case 0x269f2cu: goto label_269f2c;
        case 0x269f30u: goto label_269f30;
        case 0x269f34u: goto label_269f34;
        case 0x269f38u: goto label_269f38;
        case 0x269f3cu: goto label_269f3c;
        case 0x269f40u: goto label_269f40;
        case 0x269f44u: goto label_269f44;
        case 0x269f48u: goto label_269f48;
        case 0x269f4cu: goto label_269f4c;
        case 0x269f50u: goto label_269f50;
        case 0x269f54u: goto label_269f54;
        case 0x269f58u: goto label_269f58;
        case 0x269f5cu: goto label_269f5c;
        case 0x269f60u: goto label_269f60;
        case 0x269f64u: goto label_269f64;
        case 0x269f68u: goto label_269f68;
        case 0x269f6cu: goto label_269f6c;
        case 0x269f70u: goto label_269f70;
        case 0x269f74u: goto label_269f74;
        case 0x269f78u: goto label_269f78;
        case 0x269f7cu: goto label_269f7c;
        case 0x269f80u: goto label_269f80;
        case 0x269f84u: goto label_269f84;
        case 0x269f88u: goto label_269f88;
        case 0x269f8cu: goto label_269f8c;
        case 0x269f90u: goto label_269f90;
        case 0x269f94u: goto label_269f94;
        case 0x269f98u: goto label_269f98;
        case 0x269f9cu: goto label_269f9c;
        case 0x269fa0u: goto label_269fa0;
        case 0x269fa4u: goto label_269fa4;
        case 0x269fa8u: goto label_269fa8;
        case 0x269facu: goto label_269fac;
        case 0x269fb0u: goto label_269fb0;
        case 0x269fb4u: goto label_269fb4;
        case 0x269fb8u: goto label_269fb8;
        case 0x269fbcu: goto label_269fbc;
        case 0x269fc0u: goto label_269fc0;
        case 0x269fc4u: goto label_269fc4;
        case 0x269fc8u: goto label_269fc8;
        case 0x269fccu: goto label_269fcc;
        case 0x269fd0u: goto label_269fd0;
        case 0x269fd4u: goto label_269fd4;
        case 0x269fd8u: goto label_269fd8;
        case 0x269fdcu: goto label_269fdc;
        case 0x269fe0u: goto label_269fe0;
        case 0x269fe4u: goto label_269fe4;
        case 0x269fe8u: goto label_269fe8;
        case 0x269fecu: goto label_269fec;
        case 0x269ff0u: goto label_269ff0;
        case 0x269ff4u: goto label_269ff4;
        case 0x269ff8u: goto label_269ff8;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a000u: goto label_26a000;
        case 0x26a004u: goto label_26a004;
        case 0x26a008u: goto label_26a008;
        case 0x26a00cu: goto label_26a00c;
        case 0x26a010u: goto label_26a010;
        case 0x26a014u: goto label_26a014;
        case 0x26a018u: goto label_26a018;
        case 0x26a01cu: goto label_26a01c;
        case 0x26a020u: goto label_26a020;
        case 0x26a024u: goto label_26a024;
        case 0x26a028u: goto label_26a028;
        case 0x26a02cu: goto label_26a02c;
        case 0x26a030u: goto label_26a030;
        case 0x26a034u: goto label_26a034;
        case 0x26a038u: goto label_26a038;
        case 0x26a03cu: goto label_26a03c;
        case 0x26a040u: goto label_26a040;
        case 0x26a044u: goto label_26a044;
        case 0x26a048u: goto label_26a048;
        case 0x26a04cu: goto label_26a04c;
        case 0x26a050u: goto label_26a050;
        case 0x26a054u: goto label_26a054;
        case 0x26a058u: goto label_26a058;
        case 0x26a05cu: goto label_26a05c;
        case 0x26a060u: goto label_26a060;
        case 0x26a064u: goto label_26a064;
        case 0x26a068u: goto label_26a068;
        case 0x26a06cu: goto label_26a06c;
        case 0x26a070u: goto label_26a070;
        case 0x26a074u: goto label_26a074;
        case 0x26a078u: goto label_26a078;
        case 0x26a07cu: goto label_26a07c;
        case 0x26a080u: goto label_26a080;
        case 0x26a084u: goto label_26a084;
        case 0x26a088u: goto label_26a088;
        case 0x26a08cu: goto label_26a08c;
        case 0x26a090u: goto label_26a090;
        case 0x26a094u: goto label_26a094;
        case 0x26a098u: goto label_26a098;
        case 0x26a09cu: goto label_26a09c;
        case 0x26a0a0u: goto label_26a0a0;
        case 0x26a0a4u: goto label_26a0a4;
        case 0x26a0a8u: goto label_26a0a8;
        case 0x26a0acu: goto label_26a0ac;
        case 0x26a0b0u: goto label_26a0b0;
        case 0x26a0b4u: goto label_26a0b4;
        default: return;
    }

label_2698e8:
    // 0x2698e8: 0x0  nop
    ctx->pc = 0x2698e8u;
    // NOP
label_2698ec:
    // 0x2698ec: 0x0  nop
    ctx->pc = 0x2698ecu;
    // NOP
label_2698f0:
    // 0x2698f0: 0x13db9  .word       0x00013DB9                   # INVALID     $zero, $at, 0x3DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2698F0 raw=0x00013DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2698f4:
    // 0x2698f4: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2698f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2698f8:
    // 0x2698f8: 0x0  nop
    ctx->pc = 0x2698f8u;
    // NOP
label_2698fc:
    // 0x2698fc: 0x0  nop
    ctx->pc = 0x2698fcu;
    // NOP
label_269900:
    // 0x269900: 0x13dc5  .word       0x00013DC5                   # INVALID     $zero, $at, 0x3DC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269900 raw=0x00013DC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269904:
    // 0x269904: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269908:
    // 0x269908: 0x0  nop
    ctx->pc = 0x269908u;
    // NOP
label_26990c:
    // 0x26990c: 0x0  nop
    ctx->pc = 0x26990cu;
    // NOP
label_269910:
    // 0x269910: 0x13dd5  .word       0x00013DD5                   # INVALID     $zero, $at, 0x3DD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269910 raw=0x00013DD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269914:
    // 0x269914: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269914u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269918:
    // 0x269918: 0x0  nop
    ctx->pc = 0x269918u;
    // NOP
label_26991c:
    // 0x26991c: 0x0  nop
    ctx->pc = 0x26991cu;
    // NOP
label_269920:
    // 0x269920: 0x13de8  .word       0x00013DE8                   # mfsa        $a3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269920u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_269924:
    // 0x269924: 0xcb60  .word       0x0000CB60                   # add         $t9, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269928:
    // 0x269928: 0x0  nop
    ctx->pc = 0x269928u;
    // NOP
label_26992c:
    // 0x26992c: 0x0  nop
    ctx->pc = 0x26992cu;
    // NOP
label_269930:
    // 0x269930: 0x13e02  srl         $a3, $at, 24
    ctx->pc = 0x269930u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_269934:
    // 0x269934: 0x4c40  sll         $t1, $zero, 17
    ctx->pc = 0x269934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_269938:
    // 0x269938: 0x0  nop
    ctx->pc = 0x269938u;
    // NOP
label_26993c:
    // 0x26993c: 0x0  nop
    ctx->pc = 0x26993cu;
    // NOP
label_269940:
    // 0x269940: 0x13e0c  .word       0x00013E0C                   # syscall     248 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269940u;
    ctx->pc = 0x269944u;
runtime->handleSyscall(rdram, ctx, 0x4F8u);
label_269944:
    // 0x269944: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_269948:
    // 0x269948: 0x0  nop
    ctx->pc = 0x269948u;
    // NOP
label_26994c:
    // 0x26994c: 0x0  nop
    ctx->pc = 0x26994cu;
    // NOP
label_269950:
    // 0x269950: 0x13e1b  .word       0x00013E1B                   # divu        $a3, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269950u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269954:
    // 0x269954: 0x110f0  tge         $zero, $at, 67
    ctx->pc = 0x269954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269958:
    // 0x269958: 0x0  nop
    ctx->pc = 0x269958u;
    // NOP
label_26995c:
    // 0x26995c: 0x0  nop
    ctx->pc = 0x26995cu;
    // NOP
label_269960:
    // 0x269960: 0x13e3e  dsrl32      $a3, $at, 24
    ctx->pc = 0x269960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 24));
label_269964:
    // 0x269964: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269968:
    // 0x269968: 0x0  nop
    ctx->pc = 0x269968u;
    // NOP
label_26996c:
    // 0x26996c: 0x0  nop
    ctx->pc = 0x26996cu;
    // NOP
label_269970:
    // 0x269970: 0x13e54  .word       0x00013E54                   # dsllv       $a3, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269974:
    // 0x269974: 0x11880  sll         $v1, $at, 2
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_269978:
    // 0x269978: 0x0  nop
    ctx->pc = 0x269978u;
    // NOP
label_26997c:
    // 0x26997c: 0x0  nop
    ctx->pc = 0x26997cu;
    // NOP
label_269980:
    // 0x269980: 0x13e78  dsll        $a3, $at, 25
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << 25);
label_269984:
    // 0x269984: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_269988:
    // 0x269988: 0x0  nop
    ctx->pc = 0x269988u;
    // NOP
label_26998c:
    // 0x26998c: 0x0  nop
    ctx->pc = 0x26998cu;
    // NOP
label_269990:
    // 0x269990: 0x13e8e  .word       0x00013E8E                   # INVALID     $zero, $at, 0x3E8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269990 raw=0x00013E8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269994:
    // 0x269994: 0xb7d0  .word       0x0000B7D0                   # mfhi        $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_269998:
    // 0x269998: 0x0  nop
    ctx->pc = 0x269998u;
    // NOP
label_26999c:
    // 0x26999c: 0x0  nop
    ctx->pc = 0x26999cu;
    // NOP
label_2699a0:
    // 0x2699a0: 0x13ea5  .word       0x00013EA5                   # or          $a3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2699a4:
    // 0x2699a4: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x2699a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2699a8:
    // 0x2699a8: 0x0  nop
    ctx->pc = 0x2699a8u;
    // NOP
label_2699ac:
    // 0x2699ac: 0x0  nop
    ctx->pc = 0x2699acu;
    // NOP
label_2699b0:
    // 0x2699b0: 0x13ebc  dsll32      $a3, $at, 26
    ctx->pc = 0x2699b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (32 + 26));
label_2699b4:
    // 0x2699b4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2699b8:
    // 0x2699b8: 0x0  nop
    ctx->pc = 0x2699b8u;
    // NOP
label_2699bc:
    // 0x2699bc: 0x0  nop
    ctx->pc = 0x2699bcu;
    // NOP
label_2699c0:
    // 0x2699c0: 0x13ecf  .word       0x00013ECF                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2699c4:
    // 0x2699c4: 0x79d0  .word       0x000079D0                   # mfhi        $t7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2699c8:
    // 0x2699c8: 0x0  nop
    ctx->pc = 0x2699c8u;
    // NOP
label_2699cc:
    // 0x2699cc: 0x0  nop
    ctx->pc = 0x2699ccu;
    // NOP
label_2699d0:
    // 0x2699d0: 0x13edf  .word       0x00013EDF                   # ddivu       $a3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2699D0 raw=0x00013EDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2699d4:
    // 0x2699d4: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x2699d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2699d8:
    // 0x2699d8: 0x0  nop
    ctx->pc = 0x2699d8u;
    // NOP
label_2699dc:
    // 0x2699dc: 0x0  nop
    ctx->pc = 0x2699dcu;
    // NOP
label_2699e0:
    // 0x2699e0: 0x13ee7  .word       0x00013EE7                   # nor         $a3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699e0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2699e4:
    // 0x2699e4: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2699e8:
    // 0x2699e8: 0x0  nop
    ctx->pc = 0x2699e8u;
    // NOP
label_2699ec:
    // 0x2699ec: 0x0  nop
    ctx->pc = 0x2699ecu;
    // NOP
label_2699f0:
    // 0x2699f0: 0x13ef5  .word       0x00013EF5                   # INVALID     $zero, $at, 0x3EF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2699f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2699F0 raw=0x00013EF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2699f4:
    // 0x2699f4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2699f8:
    // 0x2699f8: 0x0  nop
    ctx->pc = 0x2699f8u;
    // NOP
label_2699fc:
    // 0x2699fc: 0x0  nop
    ctx->pc = 0x2699fcu;
    // NOP
label_269a00:
    // 0x269a00: 0x13f03  sra         $a3, $at, 28
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 28));
label_269a04:
    // 0x269a04: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269a08:
    // 0x269a08: 0x0  nop
    ctx->pc = 0x269a08u;
    // NOP
label_269a0c:
    // 0x269a0c: 0x0  nop
    ctx->pc = 0x269a0cu;
    // NOP
label_269a10:
    // 0x269a10: 0x13f14  .word       0x00013F14                   # dsllv       $a3, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269a14:
    // 0x269a14: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269a18:
    // 0x269a18: 0x0  nop
    ctx->pc = 0x269a18u;
    // NOP
label_269a1c:
    // 0x269a1c: 0x0  nop
    ctx->pc = 0x269a1cu;
    // NOP
label_269a20:
    // 0x269a20: 0x13f2e  .word       0x00013F2E                   # dsub        $a3, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_269a24:
    // 0x269a24: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269a28:
    // 0x269a28: 0x0  nop
    ctx->pc = 0x269a28u;
    // NOP
label_269a2c:
    // 0x269a2c: 0x0  nop
    ctx->pc = 0x269a2cu;
    // NOP
label_269a30:
    // 0x269a30: 0x13f40  sll         $a3, $at, 29
    ctx->pc = 0x269a30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_269a34:
    // 0x269a34: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x269a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269a38:
    // 0x269a38: 0x0  nop
    ctx->pc = 0x269a38u;
    // NOP
label_269a3c:
    // 0x269a3c: 0x0  nop
    ctx->pc = 0x269a3cu;
    // NOP
label_269a40:
    // 0x269a40: 0x13f56  .word       0x00013F56                   # dsrlv       $a3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269a44:
    // 0x269a44: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x269a44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_269a48:
    // 0x269a48: 0x0  nop
    ctx->pc = 0x269a48u;
    // NOP
label_269a4c:
    // 0x269a4c: 0x0  nop
    ctx->pc = 0x269a4cu;
    // NOP
label_269a50:
    // 0x269a50: 0x13f6b  .word       0x00013F6B                   # sltu        $a3, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a50u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_269a54:
    // 0x269a54: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269a58:
    // 0x269a58: 0x0  nop
    ctx->pc = 0x269a58u;
    // NOP
label_269a5c:
    // 0x269a5c: 0x0  nop
    ctx->pc = 0x269a5cu;
    // NOP
label_269a60:
    // 0x269a60: 0x13f7b  dsra        $a3, $at, 29
    ctx->pc = 0x269a60u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 29);
label_269a64:
    // 0x269a64: 0xc680  sll         $t8, $zero, 26
    ctx->pc = 0x269a64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_269a68:
    // 0x269a68: 0x0  nop
    ctx->pc = 0x269a68u;
    // NOP
label_269a6c:
    // 0x269a6c: 0x0  nop
    ctx->pc = 0x269a6cu;
    // NOP
label_269a70:
    // 0x269a70: 0x13f94  .word       0x00013F94                   # dsllv       $a3, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_269a74:
    // 0x269a74: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269a78:
    // 0x269a78: 0x0  nop
    ctx->pc = 0x269a78u;
    // NOP
label_269a7c:
    // 0x269a7c: 0x0  nop
    ctx->pc = 0x269a7cu;
    // NOP
label_269a80:
    // 0x269a80: 0x13fa5  .word       0x00013FA5                   # or          $a3, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_269a84:
    // 0x269a84: 0xd410  .word       0x0000D410                   # mfhi        $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269a84u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_269a88:
    // 0x269a88: 0x0  nop
    ctx->pc = 0x269a88u;
    // NOP
label_269a8c:
    // 0x269a8c: 0x0  nop
    ctx->pc = 0x269a8cu;
    // NOP
label_269a90:
    // 0x269a90: 0x13fc0  sll         $a3, $at, 31
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_269a94:
    // 0x269a94: 0xe400  sll         $gp, $zero, 16
    ctx->pc = 0x269a94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_269a98:
    // 0x269a98: 0x0  nop
    ctx->pc = 0x269a98u;
    // NOP
label_269a9c:
    // 0x269a9c: 0x0  nop
    ctx->pc = 0x269a9cu;
    // NOP
label_269aa0:
    // 0x269aa0: 0x13fdd  .word       0x00013FDD                   # dmultu      $zero, $at # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269AA0 raw=0x00013FDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269aa4:
    // 0x269aa4: 0x12590  .word       0x00012590                   # mfhi        $a0 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269aa4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_269aa8:
    // 0x269aa8: 0x0  nop
    ctx->pc = 0x269aa8u;
    // NOP
label_269aac:
    // 0x269aac: 0x0  nop
    ctx->pc = 0x269aacu;
    // NOP
label_269ab0:
    // 0x269ab0: 0x14002  srl         $t0, $at, 0
    ctx->pc = 0x269ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_269ab4:
    // 0x269ab4: 0xc410  .word       0x0000C410                   # mfhi        $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ab4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269ab8:
    // 0x269ab8: 0x0  nop
    ctx->pc = 0x269ab8u;
    // NOP
label_269abc:
    // 0x269abc: 0x0  nop
    ctx->pc = 0x269abcu;
    // NOP
label_269ac0:
    // 0x269ac0: 0x1401b  divu        $t0, $zero, $at
    ctx->pc = 0x269ac0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269ac4:
    // 0x269ac4: 0xcad0  .word       0x0000CAD0                   # mfhi        $t9 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ac4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269ac8:
    // 0x269ac8: 0x0  nop
    ctx->pc = 0x269ac8u;
    // NOP
label_269acc:
    // 0x269acc: 0x0  nop
    ctx->pc = 0x269accu;
    // NOP
label_269ad0:
    // 0x269ad0: 0x14035  .word       0x00014035                   # INVALID     $zero, $at, 0x4035 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269AD0 raw=0x00014035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ad4:
    // 0x269ad4: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ad4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269ad8:
    // 0x269ad8: 0x0  nop
    ctx->pc = 0x269ad8u;
    // NOP
label_269adc:
    // 0x269adc: 0x0  nop
    ctx->pc = 0x269adcu;
    // NOP
label_269ae0:
    // 0x269ae0: 0x14047  .word       0x00014047                   # srav        $t0, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ae0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269ae4:
    // 0x269ae4: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ae4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269ae8:
    // 0x269ae8: 0x0  nop
    ctx->pc = 0x269ae8u;
    // NOP
label_269aec:
    // 0x269aec: 0x0  nop
    ctx->pc = 0x269aecu;
    // NOP
label_269af0:
    // 0x269af0: 0x14058  .word       0x00014058                   # mult        $t0, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_269af4:
    // 0x269af4: 0xc7f0  tge         $zero, $zero, 799
    ctx->pc = 0x269af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269af8:
    // 0x269af8: 0x0  nop
    ctx->pc = 0x269af8u;
    // NOP
label_269afc:
    // 0x269afc: 0x0  nop
    ctx->pc = 0x269afcu;
    // NOP
label_269b00:
    // 0x269b00: 0x14071  tgeu        $zero, $at, 257
    ctx->pc = 0x269b00u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269b04:
    // 0x269b04: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b04u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269b08:
    // 0x269b08: 0x0  nop
    ctx->pc = 0x269b08u;
    // NOP
label_269b0c:
    // 0x269b0c: 0x0  nop
    ctx->pc = 0x269b0cu;
    // NOP
label_269b10:
    // 0x269b10: 0x14087  .word       0x00014087                   # srav        $t0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269b14:
    // 0x269b14: 0x7d20  .word       0x00007D20                   # add         $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_269b18:
    // 0x269b18: 0x0  nop
    ctx->pc = 0x269b18u;
    // NOP
label_269b1c:
    // 0x269b1c: 0x0  nop
    ctx->pc = 0x269b1cu;
    // NOP
label_269b20:
    // 0x269b20: 0x14097  .word       0x00014097                   # dsrav       $t0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269b24:
    // 0x269b24: 0xeed0  .word       0x0000EED0                   # mfhi        $sp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b24u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_269b28:
    // 0x269b28: 0x0  nop
    ctx->pc = 0x269b28u;
    // NOP
label_269b2c:
    // 0x269b2c: 0x0  nop
    ctx->pc = 0x269b2cu;
    // NOP
label_269b30:
    // 0x269b30: 0x140b5  .word       0x000140B5                   # INVALID     $zero, $at, 0x40B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269B30 raw=0x000140B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269b34:
    // 0x269b34: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269b38:
    // 0x269b38: 0x0  nop
    ctx->pc = 0x269b38u;
    // NOP
label_269b3c:
    // 0x269b3c: 0x0  nop
    ctx->pc = 0x269b3cu;
    // NOP
label_269b40:
    // 0x269b40: 0x140ca  .word       0x000140CA                   # movz        $t0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b40u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_269b44:
    // 0x269b44: 0xbd40  sll         $s7, $zero, 21
    ctx->pc = 0x269b44u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269b48:
    // 0x269b48: 0x0  nop
    ctx->pc = 0x269b48u;
    // NOP
label_269b4c:
    // 0x269b4c: 0x0  nop
    ctx->pc = 0x269b4cu;
    // NOP
label_269b50:
    // 0x269b50: 0x140e2  .word       0x000140E2                   # neg         $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_269b54:
    // 0x269b54: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x269b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269b58:
    // 0x269b58: 0x0  nop
    ctx->pc = 0x269b58u;
    // NOP
label_269b5c:
    // 0x269b5c: 0x0  nop
    ctx->pc = 0x269b5cu;
    // NOP
label_269b60:
    // 0x269b60: 0x140f8  dsll        $t0, $at, 3
    ctx->pc = 0x269b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 3);
label_269b64:
    // 0x269b64: 0x82d0  .word       0x000082D0                   # mfhi        $s0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269b68:
    // 0x269b68: 0x0  nop
    ctx->pc = 0x269b68u;
    // NOP
label_269b6c:
    // 0x269b6c: 0x0  nop
    ctx->pc = 0x269b6cu;
    // NOP
label_269b70:
    // 0x269b70: 0x14109  .word       0x00014109                   # jalr        $t0, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_269b74:
    if (ctx->pc == 0x269B74u) {
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x8a00  sll         $s1, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269B78u;
        goto label_269b78;
    }
    ctx->pc = 0x269B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x269B78u);
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x8a00  sll         $s1, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B70u, 0x269B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269B78u;
label_269b78:
    // 0x269b78: 0x0  nop
    ctx->pc = 0x269b78u;
    // NOP
label_269b7c:
    // 0x269b7c: 0x0  nop
    ctx->pc = 0x269b7cu;
    // NOP
label_269b80:
    // 0x269b80: 0x1411b  .word       0x0001411B                   # divu        $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b80u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269b84:
    // 0x269b84: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_269b88:
    // 0x269b88: 0x0  nop
    ctx->pc = 0x269b88u;
    // NOP
label_269b8c:
    // 0x269b8c: 0x0  nop
    ctx->pc = 0x269b8cu;
    // NOP
label_269b90:
    // 0x269b90: 0x14127  .word       0x00014127                   # nor         $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269b90u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_269b94:
    // 0x269b94: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x269b94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_269b98:
    // 0x269b98: 0x0  nop
    ctx->pc = 0x269b98u;
    // NOP
label_269b9c:
    // 0x269b9c: 0x0  nop
    ctx->pc = 0x269b9cu;
    // NOP
label_269ba0:
    // 0x269ba0: 0x14137  .word       0x00014137                   # INVALID     $zero, $at, 0x4137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x269BA0 raw=0x00014137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ba4:
    // 0x269ba4: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x269ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_269ba8:
    // 0x269ba8: 0x0  nop
    ctx->pc = 0x269ba8u;
    // NOP
label_269bac:
    // 0x269bac: 0x0  nop
    ctx->pc = 0x269bacu;
    // NOP
label_269bb0:
    // 0x269bb0: 0x14143  sra         $t0, $at, 5
    ctx->pc = 0x269bb0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 5));
label_269bb4:
    // 0x269bb4: 0x4a10  .word       0x00004A10                   # mfhi        $t1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_269bb8:
    // 0x269bb8: 0x0  nop
    ctx->pc = 0x269bb8u;
    // NOP
label_269bbc:
    // 0x269bbc: 0x0  nop
    ctx->pc = 0x269bbcu;
    // NOP
label_269bc0:
    // 0x269bc0: 0x1414d  break       1, 261
    ctx->pc = 0x269bc0u;
    runtime->handleBreak(rdram, ctx);
label_269bc4:
    // 0x269bc4: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x269bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269bc8:
    // 0x269bc8: 0x0  nop
    ctx->pc = 0x269bc8u;
    // NOP
label_269bcc:
    // 0x269bcc: 0x0  nop
    ctx->pc = 0x269bccu;
    // NOP
label_269bd0:
    // 0x269bd0: 0x14156  .word       0x00014156                   # dsrlv       $t0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269bd4:
    // 0x269bd4: 0x78f0  tge         $zero, $zero, 483
    ctx->pc = 0x269bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269bd8:
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
label_269bdc:
    // 0x269bdc: 0x0  nop
    ctx->pc = 0x269bdcu;
    // NOP
label_269be0:
    // 0x269be0: 0x14166  .word       0x00014166                   # xor         $t0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_269be4:
    // 0x269be4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269be8:
    // 0x269be8: 0x0  nop
    ctx->pc = 0x269be8u;
    // NOP
label_269bec:
    // 0x269bec: 0x0  nop
    ctx->pc = 0x269becu;
    // NOP
label_269bf0:
    // 0x269bf0: 0x1417b  dsra        $t0, $at, 5
    ctx->pc = 0x269bf0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 5);
label_269bf4:
    // 0x269bf4: 0xcf60  .word       0x0000CF60                   # add         $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_269bf8:
    // 0x269bf8: 0x0  nop
    ctx->pc = 0x269bf8u;
    // NOP
label_269bfc:
    // 0x269bfc: 0x0  nop
    ctx->pc = 0x269bfcu;
    // NOP
label_269c00:
    // 0x269c00: 0x14195  .word       0x00014195                   # INVALID     $zero, $at, 0x4195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269C00 raw=0x00014195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c04:
    // 0x269c04: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269c08:
    // 0x269c08: 0x0  nop
    ctx->pc = 0x269c08u;
    // NOP
label_269c0c:
    // 0x269c0c: 0x0  nop
    ctx->pc = 0x269c0cu;
    // NOP
label_269c10:
    // 0x269c10: 0x141ab  .word       0x000141AB                   # sltu        $t0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c10u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_269c14:
    // 0x269c14: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_269c18:
    // 0x269c18: 0x0  nop
    ctx->pc = 0x269c18u;
    // NOP
label_269c1c:
    // 0x269c1c: 0x0  nop
    ctx->pc = 0x269c1cu;
    // NOP
label_269c20:
    // 0x269c20: 0x141b6  tne         $zero, $at, 262
    ctx->pc = 0x269c20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269c24:
    // 0x269c24: 0x8330  tge         $zero, $zero, 524
    ctx->pc = 0x269c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c28:
    // 0x269c28: 0x0  nop
    ctx->pc = 0x269c28u;
    // NOP
label_269c2c:
    // 0x269c2c: 0x0  nop
    ctx->pc = 0x269c2cu;
    // NOP
label_269c30:
    // 0x269c30: 0x141c7  .word       0x000141C7                   # srav        $t0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269c34:
    // 0x269c34: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_269c38:
    // 0x269c38: 0x0  nop
    ctx->pc = 0x269c38u;
    // NOP
label_269c3c:
    // 0x269c3c: 0x0  nop
    ctx->pc = 0x269c3cu;
    // NOP
label_269c40:
    // 0x269c40: 0x141dd  .word       0x000141DD                   # dmultu      $zero, $at # 000041C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269C40 raw=0x000141DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c44:
    // 0x269c44: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x269c44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269c48:
    // 0x269c48: 0x0  nop
    ctx->pc = 0x269c48u;
    // NOP
label_269c4c:
    // 0x269c4c: 0x0  nop
    ctx->pc = 0x269c4cu;
    // NOP
label_269c50:
    // 0x269c50: 0x141f0  tge         $zero, $at, 263
    ctx->pc = 0x269c50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269c54:
    // 0x269c54: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x269c54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269c58:
    // 0x269c58: 0x0  nop
    ctx->pc = 0x269c58u;
    // NOP
label_269c5c:
    // 0x269c5c: 0x0  nop
    ctx->pc = 0x269c5cu;
    // NOP
label_269c60:
    // 0x269c60: 0x14201  .word       0x00014201                   # INVALID     $zero, $at, 0x4201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x269C60 raw=0x00014201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c64:
    // 0x269c64: 0xcbd0  .word       0x0000CBD0                   # mfhi        $t9 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c64u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269c68:
    // 0x269c68: 0x0  nop
    ctx->pc = 0x269c68u;
    // NOP
label_269c6c:
    // 0x269c6c: 0x0  nop
    ctx->pc = 0x269c6cu;
    // NOP
label_269c70:
    // 0x269c70: 0x1421b  .word       0x0001421B                   # divu        $t0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c70u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269c74:
    // 0x269c74: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x269c74u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_269c78:
    // 0x269c78: 0x0  nop
    ctx->pc = 0x269c78u;
    // NOP
label_269c7c:
    // 0x269c7c: 0x0  nop
    ctx->pc = 0x269c7cu;
    // NOP
label_269c80:
    // 0x269c80: 0x14239  .word       0x00014239                   # INVALID     $zero, $at, 0x4239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269c80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x269C80 raw=0x00014239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269c84:
    // 0x269c84: 0x1730  tge         $zero, $zero, 92
    ctx->pc = 0x269c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c88:
    // 0x269c88: 0x0  nop
    ctx->pc = 0x269c88u;
    // NOP
label_269c8c:
    // 0x269c8c: 0x0  nop
    ctx->pc = 0x269c8cu;
    // NOP
label_269c90:
    // 0x269c90: 0x1423c  dsll32      $t0, $at, 8
    ctx->pc = 0x269c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 8));
label_269c94:
    // 0x269c94: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x269c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269c98:
    // 0x269c98: 0x0  nop
    ctx->pc = 0x269c98u;
    // NOP
label_269c9c:
    // 0x269c9c: 0x0  nop
    ctx->pc = 0x269c9cu;
    // NOP
label_269ca0:
    // 0x269ca0: 0x14245  .word       0x00014245                   # INVALID     $zero, $at, 0x4245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x269CA0 raw=0x00014245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269ca4:
    // 0x269ca4: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x269ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_269ca8:
    // 0x269ca8: 0x0  nop
    ctx->pc = 0x269ca8u;
    // NOP
label_269cac:
    // 0x269cac: 0x0  nop
    ctx->pc = 0x269cacu;
    // NOP
label_269cb0:
    // 0x269cb0: 0x14255  .word       0x00014255                   # INVALID     $zero, $at, 0x4255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x269CB0 raw=0x00014255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cb4:
    // 0x269cb4: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x269cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_269cb8:
    // 0x269cb8: 0x0  nop
    ctx->pc = 0x269cb8u;
    // NOP
label_269cbc:
    // 0x269cbc: 0x0  nop
    ctx->pc = 0x269cbcu;
    // NOP
label_269cc0:
    // 0x269cc0: 0x14264  .word       0x00014264                   # and         $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_269cc4:
    // 0x269cc4: 0x82f0  tge         $zero, $zero, 523
    ctx->pc = 0x269cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269cc8:
    // 0x269cc8: 0x0  nop
    ctx->pc = 0x269cc8u;
    // NOP
label_269ccc:
    // 0x269ccc: 0x0  nop
    ctx->pc = 0x269cccu;
    // NOP
label_269cd0:
    // 0x269cd0: 0x14275  .word       0x00014275                   # INVALID     $zero, $at, 0x4275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x269CD0 raw=0x00014275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cd4:
    // 0x269cd4: 0x9820  add         $s3, $zero, $zero
    ctx->pc = 0x269cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_269cd8:
    // 0x269cd8: 0x0  nop
    ctx->pc = 0x269cd8u;
    // NOP
label_269cdc:
    // 0x269cdc: 0x0  nop
    ctx->pc = 0x269cdcu;
    // NOP
label_269ce0:
    // 0x269ce0: 0x14289  .word       0x00014289                   # jalr        $t0, $zero # 00010280 <InstrIdType: CPU_SPECIAL>
label_269ce4:
    if (ctx->pc == 0x269CE4u) {
        ctx->pc = 0x269CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE0u;
        // 0x269ce4: 0xac40  sll         $s5, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269CE8u;
        goto label_269ce8;
    }
    ctx->pc = 0x269CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x269CE8u);
        ctx->pc = 0x269CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE0u;
        // 0x269ce4: 0xac40  sll         $s5, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269CE0u, 0x269CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269CE8u;
label_269ce8:
    // 0x269ce8: 0x0  nop
    ctx->pc = 0x269ce8u;
    // NOP
label_269cec:
    // 0x269cec: 0x0  nop
    ctx->pc = 0x269cecu;
    // NOP
label_269cf0:
    // 0x269cf0: 0x1429f  .word       0x0001429F                   # ddivu       $t0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269CF0 raw=0x0001429F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269cf4:
    // 0x269cf4: 0xb370  tge         $zero, $zero, 717
    ctx->pc = 0x269cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269cf8:
    // 0x269cf8: 0x0  nop
    ctx->pc = 0x269cf8u;
    // NOP
label_269cfc:
    // 0x269cfc: 0x0  nop
    ctx->pc = 0x269cfcu;
    // NOP
label_269d00:
    // 0x269d00: 0x142b6  tne         $zero, $at, 266
    ctx->pc = 0x269d00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269d04:
    // 0x269d04: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269d08:
    // 0x269d08: 0x0  nop
    ctx->pc = 0x269d08u;
    // NOP
label_269d0c:
    // 0x269d0c: 0x0  nop
    ctx->pc = 0x269d0cu;
    // NOP
label_269d10:
    // 0x269d10: 0x142c8  .word       0x000142C8                   # jr          $zero # 000142C0 <InstrIdType: CPU_SPECIAL>
label_269d14:
    if (ctx->pc == 0x269D14u) {
        ctx->pc = 0x269D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D10u;
        // 0x269d14: 0x9500  sll         $s2, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269D18u;
        goto label_269d18;
    }
    ctx->pc = 0x269D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x269D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D10u;
        // 0x269d14: 0x9500  sll         $s2, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x269D18u;
label_269d18:
    // 0x269d18: 0x0  nop
    ctx->pc = 0x269d18u;
    // NOP
label_269d1c:
    // 0x269d1c: 0x0  nop
    ctx->pc = 0x269d1cu;
    // NOP
label_269d20:
    // 0x269d20: 0x142db  .word       0x000142DB                   # divu        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269d24:
    // 0x269d24: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d24u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_269d28:
    // 0x269d28: 0x0  nop
    ctx->pc = 0x269d28u;
    // NOP
label_269d2c:
    // 0x269d2c: 0x0  nop
    ctx->pc = 0x269d2cu;
    // NOP
label_269d30:
    // 0x269d30: 0x142ee  .word       0x000142EE                   # dsub        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269d34:
    // 0x269d34: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d34u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_269d38:
    // 0x269d38: 0x0  nop
    ctx->pc = 0x269d38u;
    // NOP
label_269d3c:
    // 0x269d3c: 0x0  nop
    ctx->pc = 0x269d3cu;
    // NOP
label_269d40:
    // 0x269d40: 0x14304  .word       0x00014304                   # sllv        $t0, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269d44:
    // 0x269d44: 0xb5a0  .word       0x0000B5A0                   # add         $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_269d48:
    // 0x269d48: 0x0  nop
    ctx->pc = 0x269d48u;
    // NOP
label_269d4c:
    // 0x269d4c: 0x0  nop
    ctx->pc = 0x269d4cu;
    // NOP
label_269d50:
    // 0x269d50: 0x1431b  .word       0x0001431B                   # divu        $t0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d50u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_269d54:
    // 0x269d54: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_269d58:
    // 0x269d58: 0x0  nop
    ctx->pc = 0x269d58u;
    // NOP
label_269d5c:
    // 0x269d5c: 0x0  nop
    ctx->pc = 0x269d5cu;
    // NOP
label_269d60:
    // 0x269d60: 0x14329  .word       0x00014329                   # mtsa        $zero # 00014300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269d60u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_269d64:
    // 0x269d64: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x269d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269d68:
    // 0x269d68: 0x0  nop
    ctx->pc = 0x269d68u;
    // NOP
label_269d6c:
    // 0x269d6c: 0x0  nop
    ctx->pc = 0x269d6cu;
    // NOP
label_269d70:
    // 0x269d70: 0x1433d  .word       0x0001433D                   # INVALID     $zero, $at, 0x433D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x269D70 raw=0x0001433D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d74:
    // 0x269d74: 0x81e0  .word       0x000081E0                   # add         $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269d78:
    // 0x269d78: 0x0  nop
    ctx->pc = 0x269d78u;
    // NOP
label_269d7c:
    // 0x269d7c: 0x0  nop
    ctx->pc = 0x269d7cu;
    // NOP
label_269d80:
    // 0x269d80: 0x1434e  .word       0x0001434E                   # INVALID     $zero, $at, 0x434E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269D80 raw=0x0001434E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d84:
    // 0x269d84: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_269d88:
    // 0x269d88: 0x0  nop
    ctx->pc = 0x269d88u;
    // NOP
label_269d8c:
    // 0x269d8c: 0x0  nop
    ctx->pc = 0x269d8cu;
    // NOP
label_269d90:
    // 0x269d90: 0x1435f  .word       0x0001435F                   # ddivu       $t0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269D90 raw=0x0001435F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269d94:
    // 0x269d94: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x269d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269d98:
    // 0x269d98: 0x0  nop
    ctx->pc = 0x269d98u;
    // NOP
label_269d9c:
    // 0x269d9c: 0x0  nop
    ctx->pc = 0x269d9cu;
    // NOP
label_269da0:
    // 0x269da0: 0x14370  tge         $zero, $at, 269
    ctx->pc = 0x269da0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269da4:
    // 0x269da4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x269da4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_269da8:
    // 0x269da8: 0x0  nop
    ctx->pc = 0x269da8u;
    // NOP
label_269dac:
    // 0x269dac: 0x0  nop
    ctx->pc = 0x269dacu;
    // NOP
label_269db0:
    // 0x269db0: 0x1437e  dsrl32      $t0, $at, 13
    ctx->pc = 0x269db0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (32 + 13));
label_269db4:
    // 0x269db4: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x269db4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_269db8:
    // 0x269db8: 0x0  nop
    ctx->pc = 0x269db8u;
    // NOP
label_269dbc:
    // 0x269dbc: 0x0  nop
    ctx->pc = 0x269dbcu;
    // NOP
label_269dc0:
    // 0x269dc0: 0x1438e  .word       0x0001438E                   # INVALID     $zero, $at, 0x438E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269DC0 raw=0x0001438E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269dc4:
    // 0x269dc4: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x269dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_269dc8:
    // 0x269dc8: 0x0  nop
    ctx->pc = 0x269dc8u;
    // NOP
label_269dcc:
    // 0x269dcc: 0x0  nop
    ctx->pc = 0x269dccu;
    // NOP
label_269dd0:
    // 0x269dd0: 0x1439a  .word       0x0001439A                   # div         $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dd0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269dd4:
    // 0x269dd4: 0xa320  .word       0x0000A320                   # add         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_269dd8:
    // 0x269dd8: 0x0  nop
    ctx->pc = 0x269dd8u;
    // NOP
label_269ddc:
    // 0x269ddc: 0x0  nop
    ctx->pc = 0x269ddcu;
    // NOP
label_269de0:
    // 0x269de0: 0x143af  .word       0x000143AF                   # dsubu       $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269de0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_269de4:
    // 0x269de4: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x269de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269de8:
    // 0x269de8: 0x0  nop
    ctx->pc = 0x269de8u;
    // NOP
label_269dec:
    // 0x269dec: 0x0  nop
    ctx->pc = 0x269decu;
    // NOP
label_269df0:
    // 0x269df0: 0x143c6  .word       0x000143C6                   # srlv        $t0, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269df0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269df4:
    // 0x269df4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x269df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269df8:
    // 0x269df8: 0x0  nop
    ctx->pc = 0x269df8u;
    // NOP
label_269dfc:
    // 0x269dfc: 0x0  nop
    ctx->pc = 0x269dfcu;
    // NOP
label_269e00:
    // 0x269e00: 0x143dd  .word       0x000143DD                   # dmultu      $zero, $at # 000043C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x269E00 raw=0x000143DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e04:
    // 0x269e04: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_269e08:
    // 0x269e08: 0x0  nop
    ctx->pc = 0x269e08u;
    // NOP
label_269e0c:
    // 0x269e0c: 0x0  nop
    ctx->pc = 0x269e0cu;
    // NOP
label_269e10:
    // 0x269e10: 0x143e6  .word       0x000143E6                   # xor         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_269e14:
    // 0x269e14: 0xc3c0  sll         $t8, $zero, 15
    ctx->pc = 0x269e14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_269e18:
    // 0x269e18: 0x0  nop
    ctx->pc = 0x269e18u;
    // NOP
label_269e1c:
    // 0x269e1c: 0x0  nop
    ctx->pc = 0x269e1cu;
    // NOP
label_269e20:
    // 0x269e20: 0x143ff  dsra32      $t0, $at, 15
    ctx->pc = 0x269e20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 15));
label_269e24:
    // 0x269e24: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x269e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_269e28:
    // 0x269e28: 0x0  nop
    ctx->pc = 0x269e28u;
    // NOP
label_269e2c:
    // 0x269e2c: 0x0  nop
    ctx->pc = 0x269e2cu;
    // NOP
label_269e30:
    // 0x269e30: 0x1440e  .word       0x0001440E                   # INVALID     $zero, $at, 0x440E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x269E30 raw=0x0001440E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e34:
    // 0x269e34: 0x8350  .word       0x00008350                   # mfhi        $s0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e34u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_269e38:
    // 0x269e38: 0x0  nop
    ctx->pc = 0x269e38u;
    // NOP
label_269e3c:
    // 0x269e3c: 0x0  nop
    ctx->pc = 0x269e3cu;
    // NOP
label_269e40:
    // 0x269e40: 0x1441f  .word       0x0001441F                   # ddivu       $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269E40 raw=0x0001441F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e44:
    // 0x269e44: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_269e48:
    // 0x269e48: 0x0  nop
    ctx->pc = 0x269e48u;
    // NOP
label_269e4c:
    // 0x269e4c: 0x0  nop
    ctx->pc = 0x269e4cu;
    // NOP
label_269e50:
    // 0x269e50: 0x1442c  .word       0x0001442C                   # dadd        $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269e54:
    // 0x269e54: 0xb720  .word       0x0000B720                   # add         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_269e58:
    // 0x269e58: 0x0  nop
    ctx->pc = 0x269e58u;
    // NOP
label_269e5c:
    // 0x269e5c: 0x0  nop
    ctx->pc = 0x269e5cu;
    // NOP
label_269e60:
    // 0x269e60: 0x14443  sra         $t0, $at, 17
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 17));
label_269e64:
    // 0x269e64: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x269e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269e68:
    // 0x269e68: 0x0  nop
    ctx->pc = 0x269e68u;
    // NOP
label_269e6c:
    // 0x269e6c: 0x0  nop
    ctx->pc = 0x269e6cu;
    // NOP
label_269e70:
    // 0x269e70: 0x14452  .word       0x00014452                   # mflo        $t0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e70u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_269e74:
    // 0x269e74: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x269e74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_269e78:
    // 0x269e78: 0x0  nop
    ctx->pc = 0x269e78u;
    // NOP
label_269e7c:
    // 0x269e7c: 0x0  nop
    ctx->pc = 0x269e7cu;
    // NOP
label_269e80:
    // 0x269e80: 0x1445f  .word       0x0001445F                   # ddivu       $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x269E80 raw=0x0001445F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269e84:
    // 0x269e84: 0x7130  tge         $zero, $zero, 452
    ctx->pc = 0x269e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269e88:
    // 0x269e88: 0x0  nop
    ctx->pc = 0x269e88u;
    // NOP
label_269e8c:
    // 0x269e8c: 0x0  nop
    ctx->pc = 0x269e8cu;
    // NOP
label_269e90:
    // 0x269e90: 0x1446e  .word       0x0001446E                   # dsub        $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269e90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269e94:
    // 0x269e94: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x269e94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_269e98:
    // 0x269e98: 0x0  nop
    ctx->pc = 0x269e98u;
    // NOP
label_269e9c:
    // 0x269e9c: 0x0  nop
    ctx->pc = 0x269e9cu;
    // NOP
label_269ea0:
    // 0x269ea0: 0x1447a  dsrl        $t0, $at, 17
    ctx->pc = 0x269ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> 17);
label_269ea4:
    // 0x269ea4: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ea4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_269ea8:
    // 0x269ea8: 0x0  nop
    ctx->pc = 0x269ea8u;
    // NOP
label_269eac:
    // 0x269eac: 0x0  nop
    ctx->pc = 0x269eacu;
    // NOP
label_269eb0:
    // 0x269eb0: 0x1448a  .word       0x0001448A                   # movz        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269eb0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_269eb4:
    // 0x269eb4: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269eb8:
    // 0x269eb8: 0x0  nop
    ctx->pc = 0x269eb8u;
    // NOP
label_269ebc:
    // 0x269ebc: 0x0  nop
    ctx->pc = 0x269ebcu;
    // NOP
label_269ec0:
    // 0x269ec0: 0x14493  .word       0x00014493                   # mtlo        $zero # 00014480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ec0u;
    ctx->lo = GPR_U64(ctx, 0);
label_269ec4:
    // 0x269ec4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ec4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_269ec8:
    // 0x269ec8: 0x0  nop
    ctx->pc = 0x269ec8u;
    // NOP
label_269ecc:
    // 0x269ecc: 0x0  nop
    ctx->pc = 0x269eccu;
    // NOP
label_269ed0:
    // 0x269ed0: 0x144a2  .word       0x000144A2                   # neg         $t0, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_269ed4:
    // 0x269ed4: 0x5940  sll         $t3, $zero, 5
    ctx->pc = 0x269ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_269ed8:
    // 0x269ed8: 0x0  nop
    ctx->pc = 0x269ed8u;
    // NOP
label_269edc:
    // 0x269edc: 0x0  nop
    ctx->pc = 0x269edcu;
    // NOP
label_269ee0:
    // 0x269ee0: 0x144ae  .word       0x000144AE                   # dsub        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ee0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269ee4:
    // 0x269ee4: 0xc410  .word       0x0000C410                   # mfhi        $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ee4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269ee8:
    // 0x269ee8: 0x0  nop
    ctx->pc = 0x269ee8u;
    // NOP
label_269eec:
    // 0x269eec: 0x0  nop
    ctx->pc = 0x269eecu;
    // NOP
label_269ef0:
    // 0x269ef0: 0x144c7  .word       0x000144C7                   # srav        $t0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ef0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269ef4:
    // 0x269ef4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x269ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269ef8:
    // 0x269ef8: 0x0  nop
    ctx->pc = 0x269ef8u;
    // NOP
label_269efc:
    // 0x269efc: 0x0  nop
    ctx->pc = 0x269efcu;
    // NOP
label_269f00:
    // 0x269f00: 0x144e1  .word       0x000144E1                   # addu        $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269f04:
    // 0x269f04: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_269f08:
    // 0x269f08: 0x0  nop
    ctx->pc = 0x269f08u;
    // NOP
label_269f0c:
    // 0x269f0c: 0x0  nop
    ctx->pc = 0x269f0cu;
    // NOP
label_269f10:
    // 0x269f10: 0x144ec  .word       0x000144EC                   # dadd        $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269f14:
    // 0x269f14: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269f18:
    // 0x269f18: 0x0  nop
    ctx->pc = 0x269f18u;
    // NOP
label_269f1c:
    // 0x269f1c: 0x0  nop
    ctx->pc = 0x269f1cu;
    // NOP
label_269f20:
    // 0x269f20: 0x144fd  .word       0x000144FD                   # INVALID     $zero, $at, 0x44FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x269F20 raw=0x000144FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269f24:
    // 0x269f24: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x269f24u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269f28:
    // 0x269f28: 0x0  nop
    ctx->pc = 0x269f28u;
    // NOP
label_269f2c:
    // 0x269f2c: 0x0  nop
    ctx->pc = 0x269f2cu;
    // NOP
label_269f30:
    // 0x269f30: 0x14517  .word       0x00014517                   # dsrav       $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269f34:
    // 0x269f34: 0x10630  tge         $zero, $at, 24
    ctx->pc = 0x269f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269f38:
    // 0x269f38: 0x0  nop
    ctx->pc = 0x269f38u;
    // NOP
label_269f3c:
    // 0x269f3c: 0x0  nop
    ctx->pc = 0x269f3cu;
    // NOP
label_269f40:
    // 0x269f40: 0x14538  dsll        $t0, $at, 20
    ctx->pc = 0x269f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 20);
label_269f44:
    // 0x269f44: 0xc9d0  .word       0x0000C9D0                   # mfhi        $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f44u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269f48:
    // 0x269f48: 0x0  nop
    ctx->pc = 0x269f48u;
    // NOP
label_269f4c:
    // 0x269f4c: 0x0  nop
    ctx->pc = 0x269f4cu;
    // NOP
label_269f50:
    // 0x269f50: 0x14552  .word       0x00014552                   # mflo        $t0 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f50u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_269f54:
    // 0x269f54: 0xfa10  .word       0x0000FA10                   # mfhi        $ra # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f54u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_269f58:
    // 0x269f58: 0x0  nop
    ctx->pc = 0x269f58u;
    // NOP
label_269f5c:
    // 0x269f5c: 0x0  nop
    ctx->pc = 0x269f5cu;
    // NOP
label_269f60:
    // 0x269f60: 0x14572  tlt         $zero, $at, 277
    ctx->pc = 0x269f60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269f64:
    // 0x269f64: 0x13be0  .word       0x00013BE0                   # add         $a3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_269f68:
    // 0x269f68: 0x0  nop
    ctx->pc = 0x269f68u;
    // NOP
label_269f6c:
    // 0x269f6c: 0x0  nop
    ctx->pc = 0x269f6cu;
    // NOP
label_269f70:
    // 0x269f70: 0x1459a  .word       0x0001459A                   # div         $t0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f70u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269f74:
    // 0x269f74: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_269f78:
    // 0x269f78: 0x0  nop
    ctx->pc = 0x269f78u;
    // NOP
label_269f7c:
    // 0x269f7c: 0x0  nop
    ctx->pc = 0x269f7cu;
    // NOP
label_269f80:
    // 0x269f80: 0x145a9  .word       0x000145A9                   # mtsa        $zero # 00014580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269f80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_269f84:
    // 0x269f84: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_269f88:
    // 0x269f88: 0x0  nop
    ctx->pc = 0x269f88u;
    // NOP
label_269f8c:
    // 0x269f8c: 0x0  nop
    ctx->pc = 0x269f8cu;
    // NOP
label_269f90:
    // 0x269f90: 0x145b8  dsll        $t0, $at, 22
    ctx->pc = 0x269f90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 22);
label_269f94:
    // 0x269f94: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f94u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269f98:
    // 0x269f98: 0x0  nop
    ctx->pc = 0x269f98u;
    // NOP
label_269f9c:
    // 0x269f9c: 0x0  nop
    ctx->pc = 0x269f9cu;
    // NOP
label_269fa0:
    // 0x269fa0: 0x145d1  .word       0x000145D1                   # mthi        $zero # 000145C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fa0u;
    ctx->hi = GPR_U64(ctx, 0);
label_269fa4:
    // 0x269fa4: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x269fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_269fa8:
    // 0x269fa8: 0x0  nop
    ctx->pc = 0x269fa8u;
    // NOP
label_269fac:
    // 0x269fac: 0x0  nop
    ctx->pc = 0x269facu;
    // NOP
label_269fb0:
    // 0x269fb0: 0x145e3  .word       0x000145E3                   # negu        $t0, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269fb4:
    // 0x269fb4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x269fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269fb8:
    // 0x269fb8: 0x0  nop
    ctx->pc = 0x269fb8u;
    // NOP
label_269fbc:
    // 0x269fbc: 0x0  nop
    ctx->pc = 0x269fbcu;
    // NOP
label_269fc0:
    // 0x269fc0: 0x145f0  tge         $zero, $at, 279
    ctx->pc = 0x269fc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269fc4:
    // 0x269fc4: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269fc8:
    // 0x269fc8: 0x0  nop
    ctx->pc = 0x269fc8u;
    // NOP
label_269fcc:
    // 0x269fcc: 0x0  nop
    ctx->pc = 0x269fccu;
    // NOP
label_269fd0:
    // 0x269fd0: 0x14602  srl         $t0, $at, 24
    ctx->pc = 0x269fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_269fd4:
    // 0x269fd4: 0xa600  sll         $s4, $zero, 24
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_269fd8:
    // 0x269fd8: 0x0  nop
    ctx->pc = 0x269fd8u;
    // NOP
label_269fdc:
    // 0x269fdc: 0x0  nop
    ctx->pc = 0x269fdcu;
    // NOP
label_269fe0:
    // 0x269fe0: 0x14617  .word       0x00014617                   # dsrav       $t0, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fe0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269fe4:
    // 0x269fe4: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x269fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269fe8:
    // 0x269fe8: 0x0  nop
    ctx->pc = 0x269fe8u;
    // NOP
label_269fec:
    // 0x269fec: 0x0  nop
    ctx->pc = 0x269fecu;
    // NOP
label_269ff0:
    // 0x269ff0: 0x14620  .word       0x00014620                   # add         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ff0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269ff4:
    // 0x269ff4: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ff4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269ff8:
    // 0x269ff8: 0x0  nop
    ctx->pc = 0x269ff8u;
    // NOP
label_269ffc:
    // 0x269ffc: 0x0  nop
    ctx->pc = 0x269ffcu;
    // NOP
label_26a000:
    // 0x26a000: 0x14632  tlt         $zero, $at, 280
    ctx->pc = 0x26a000u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a004:
    // 0x26a004: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x26a004u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a008:
    // 0x26a008: 0x0  nop
    ctx->pc = 0x26a008u;
    // NOP
label_26a00c:
    // 0x26a00c: 0x0  nop
    ctx->pc = 0x26a00cu;
    // NOP
label_26a010:
    // 0x26a010: 0x14646  .word       0x00014646                   # srlv        $t0, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a014:
    // 0x26a014: 0xb810  mfhi        $s7
    ctx->pc = 0x26a014u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26a018:
    // 0x26a018: 0x0  nop
    ctx->pc = 0x26a018u;
    // NOP
label_26a01c:
    // 0x26a01c: 0x0  nop
    ctx->pc = 0x26a01cu;
    // NOP
label_26a020:
    // 0x26a020: 0x1465e  .word       0x0001465E                   # ddiv        $t0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26A020 raw=0x0001465E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a024:
    // 0x26a024: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x26a024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a028:
    // 0x26a028: 0x0  nop
    ctx->pc = 0x26a028u;
    // NOP
label_26a02c:
    // 0x26a02c: 0x0  nop
    ctx->pc = 0x26a02cu;
    // NOP
label_26a030:
    // 0x26a030: 0x14667  .word       0x00014667                   # nor         $t0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a030u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_26a034:
    // 0x26a034: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26a034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a038:
    // 0x26a038: 0x0  nop
    ctx->pc = 0x26a038u;
    // NOP
label_26a03c:
    // 0x26a03c: 0x0  nop
    ctx->pc = 0x26a03cu;
    // NOP
label_26a040:
    // 0x26a040: 0x14672  tlt         $zero, $at, 281
    ctx->pc = 0x26a040u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a044:
    // 0x26a044: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a044u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26a048:
    // 0x26a048: 0x0  nop
    ctx->pc = 0x26a048u;
    // NOP
label_26a04c:
    // 0x26a04c: 0x0  nop
    ctx->pc = 0x26a04cu;
    // NOP
label_26a050:
    // 0x26a050: 0x1467f  dsra32      $t0, $at, 25
    ctx->pc = 0x26a050u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 25));
label_26a054:
    // 0x26a054: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x26a054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26a058:
    // 0x26a058: 0x0  nop
    ctx->pc = 0x26a058u;
    // NOP
label_26a05c:
    // 0x26a05c: 0x0  nop
    ctx->pc = 0x26a05cu;
    // NOP
label_26a060:
    // 0x26a060: 0x14687  .word       0x00014687                   # srav        $t0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a064:
    // 0x26a064: 0x27e0  .word       0x000027E0                   # add         $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26a068:
    // 0x26a068: 0x0  nop
    ctx->pc = 0x26a068u;
    // NOP
label_26a06c:
    // 0x26a06c: 0x0  nop
    ctx->pc = 0x26a06cu;
    // NOP
label_26a070:
    // 0x26a070: 0x1468c  .word       0x0001468C                   # syscall     282 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a070u;
    ctx->pc = 0x26A074u;
runtime->handleSyscall(rdram, ctx, 0x51Au);
label_26a074:
    // 0x26a074: 0xb740  sll         $s6, $zero, 29
    ctx->pc = 0x26a074u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26a078:
    // 0x26a078: 0x0  nop
    ctx->pc = 0x26a078u;
    // NOP
label_26a07c:
    // 0x26a07c: 0x0  nop
    ctx->pc = 0x26a07cu;
    // NOP
label_26a080:
    // 0x26a080: 0x146a3  .word       0x000146A3                   # negu        $t0, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a084:
    // 0x26a084: 0x3080  sll         $a2, $zero, 2
    ctx->pc = 0x26a084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a088:
    // 0x26a088: 0x0  nop
    ctx->pc = 0x26a088u;
    // NOP
label_26a08c:
    // 0x26a08c: 0x0  nop
    ctx->pc = 0x26a08cu;
    // NOP
label_26a090:
    // 0x26a090: 0x146aa  .word       0x000146AA                   # slt         $t0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a090u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_26a094:
    // 0x26a094: 0xabd0  .word       0x0000ABD0                   # mfhi        $s5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a094u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a098:
    // 0x26a098: 0x0  nop
    ctx->pc = 0x26a098u;
    // NOP
label_26a09c:
    // 0x26a09c: 0x0  nop
    ctx->pc = 0x26a09cu;
    // NOP
label_26a0a0:
    // 0x26a0a0: 0x146c0  sll         $t0, $at, 27
    ctx->pc = 0x26a0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_26a0a4:
    // 0x26a0a4: 0xa770  tge         $zero, $zero, 669
    ctx->pc = 0x26a0a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a0a8:
    // 0x26a0a8: 0x0  nop
    ctx->pc = 0x26a0a8u;
    // NOP
label_26a0ac:
    // 0x26a0ac: 0x0  nop
    ctx->pc = 0x26a0acu;
    // NOP
label_26a0b0:
    // 0x26a0b0: 0x146d5  .word       0x000146D5                   # INVALID     $zero, $at, 0x46D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A0B0 raw=0x000146D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a0b4:
    // 0x26a0b4: 0xaed0  .word       0x0000AED0                   # mfhi        $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0b4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
    ctx->pc = 0x26a0b8u;
    return;
}
