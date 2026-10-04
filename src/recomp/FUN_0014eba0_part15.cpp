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


void FUN_0014eba0_part15(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x155900u: goto label_155900;
        case 0x155904u: goto label_155904;
        case 0x155908u: goto label_155908;
        case 0x15590cu: goto label_15590c;
        case 0x155910u: goto label_155910;
        case 0x155914u: goto label_155914;
        case 0x155918u: goto label_155918;
        case 0x15591cu: goto label_15591c;
        case 0x155920u: goto label_155920;
        case 0x155924u: goto label_155924;
        case 0x155928u: goto label_155928;
        case 0x15592cu: goto label_15592c;
        case 0x155930u: goto label_155930;
        case 0x155934u: goto label_155934;
        case 0x155938u: goto label_155938;
        case 0x15593cu: goto label_15593c;
        case 0x155940u: goto label_155940;
        case 0x155944u: goto label_155944;
        case 0x155948u: goto label_155948;
        case 0x15594cu: goto label_15594c;
        case 0x155950u: goto label_155950;
        case 0x155954u: goto label_155954;
        case 0x155958u: goto label_155958;
        case 0x15595cu: goto label_15595c;
        case 0x155960u: goto label_155960;
        case 0x155964u: goto label_155964;
        case 0x155968u: goto label_155968;
        case 0x15596cu: goto label_15596c;
        case 0x155970u: goto label_155970;
        case 0x155974u: goto label_155974;
        case 0x155978u: goto label_155978;
        case 0x15597cu: goto label_15597c;
        case 0x155980u: goto label_155980;
        case 0x155984u: goto label_155984;
        case 0x155988u: goto label_155988;
        case 0x15598cu: goto label_15598c;
        case 0x155990u: goto label_155990;
        case 0x155994u: goto label_155994;
        case 0x155998u: goto label_155998;
        case 0x15599cu: goto label_15599c;
        case 0x1559a0u: goto label_1559a0;
        case 0x1559a4u: goto label_1559a4;
        case 0x1559a8u: goto label_1559a8;
        case 0x1559acu: goto label_1559ac;
        case 0x1559b0u: goto label_1559b0;
        case 0x1559b4u: goto label_1559b4;
        case 0x1559b8u: goto label_1559b8;
        case 0x1559bcu: goto label_1559bc;
        case 0x1559c0u: goto label_1559c0;
        case 0x1559c4u: goto label_1559c4;
        case 0x1559c8u: goto label_1559c8;
        case 0x1559ccu: goto label_1559cc;
        case 0x1559d0u: goto label_1559d0;
        case 0x1559d4u: goto label_1559d4;
        case 0x1559d8u: goto label_1559d8;
        case 0x1559dcu: goto label_1559dc;
        case 0x1559e0u: goto label_1559e0;
        case 0x1559e4u: goto label_1559e4;
        case 0x1559e8u: goto label_1559e8;
        case 0x1559ecu: goto label_1559ec;
        case 0x1559f0u: goto label_1559f0;
        case 0x1559f4u: goto label_1559f4;
        case 0x1559f8u: goto label_1559f8;
        case 0x1559fcu: goto label_1559fc;
        case 0x155a00u: goto label_155a00;
        case 0x155a04u: goto label_155a04;
        case 0x155a08u: goto label_155a08;
        case 0x155a0cu: goto label_155a0c;
        case 0x155a10u: goto label_155a10;
        case 0x155a14u: goto label_155a14;
        case 0x155a18u: goto label_155a18;
        case 0x155a1cu: goto label_155a1c;
        case 0x155a20u: goto label_155a20;
        case 0x155a24u: goto label_155a24;
        case 0x155a28u: goto label_155a28;
        case 0x155a2cu: goto label_155a2c;
        case 0x155a30u: goto label_155a30;
        case 0x155a34u: goto label_155a34;
        case 0x155a38u: goto label_155a38;
        case 0x155a3cu: goto label_155a3c;
        case 0x155a40u: goto label_155a40;
        case 0x155a44u: goto label_155a44;
        case 0x155a48u: goto label_155a48;
        case 0x155a4cu: goto label_155a4c;
        case 0x155a50u: goto label_155a50;
        case 0x155a54u: goto label_155a54;
        case 0x155a58u: goto label_155a58;
        case 0x155a5cu: goto label_155a5c;
        case 0x155a60u: goto label_155a60;
        case 0x155a64u: goto label_155a64;
        case 0x155a68u: goto label_155a68;
        case 0x155a6cu: goto label_155a6c;
        case 0x155a70u: goto label_155a70;
        case 0x155a74u: goto label_155a74;
        case 0x155a78u: goto label_155a78;
        case 0x155a7cu: goto label_155a7c;
        case 0x155a80u: goto label_155a80;
        case 0x155a84u: goto label_155a84;
        case 0x155a88u: goto label_155a88;
        case 0x155a8cu: goto label_155a8c;
        case 0x155a90u: goto label_155a90;
        case 0x155a94u: goto label_155a94;
        case 0x155a98u: goto label_155a98;
        case 0x155a9cu: goto label_155a9c;
        case 0x155aa0u: goto label_155aa0;
        case 0x155aa4u: goto label_155aa4;
        case 0x155aa8u: goto label_155aa8;
        case 0x155aacu: goto label_155aac;
        case 0x155ab0u: goto label_155ab0;
        case 0x155ab4u: goto label_155ab4;
        case 0x155ab8u: goto label_155ab8;
        case 0x155abcu: goto label_155abc;
        case 0x155ac0u: goto label_155ac0;
        case 0x155ac4u: goto label_155ac4;
        case 0x155ac8u: goto label_155ac8;
        case 0x155accu: goto label_155acc;
        case 0x155ad0u: goto label_155ad0;
        case 0x155ad4u: goto label_155ad4;
        case 0x155ad8u: goto label_155ad8;
        case 0x155adcu: goto label_155adc;
        case 0x155ae0u: goto label_155ae0;
        case 0x155ae4u: goto label_155ae4;
        case 0x155ae8u: goto label_155ae8;
        case 0x155aecu: goto label_155aec;
        case 0x155af0u: goto label_155af0;
        case 0x155af4u: goto label_155af4;
        case 0x155af8u: goto label_155af8;
        case 0x155afcu: goto label_155afc;
        case 0x155b00u: goto label_155b00;
        case 0x155b04u: goto label_155b04;
        case 0x155b08u: goto label_155b08;
        case 0x155b0cu: goto label_155b0c;
        case 0x155b10u: goto label_155b10;
        case 0x155b14u: goto label_155b14;
        case 0x155b18u: goto label_155b18;
        case 0x155b1cu: goto label_155b1c;
        case 0x155b20u: goto label_155b20;
        case 0x155b24u: goto label_155b24;
        case 0x155b28u: goto label_155b28;
        case 0x155b2cu: goto label_155b2c;
        case 0x155b30u: goto label_155b30;
        case 0x155b34u: goto label_155b34;
        case 0x155b38u: goto label_155b38;
        case 0x155b3cu: goto label_155b3c;
        case 0x155b40u: goto label_155b40;
        case 0x155b44u: goto label_155b44;
        case 0x155b48u: goto label_155b48;
        case 0x155b4cu: goto label_155b4c;
        case 0x155b50u: goto label_155b50;
        case 0x155b54u: goto label_155b54;
        case 0x155b58u: goto label_155b58;
        case 0x155b5cu: goto label_155b5c;
        case 0x155b60u: goto label_155b60;
        case 0x155b64u: goto label_155b64;
        case 0x155b68u: goto label_155b68;
        case 0x155b6cu: goto label_155b6c;
        case 0x155b70u: goto label_155b70;
        case 0x155b74u: goto label_155b74;
        case 0x155b78u: goto label_155b78;
        case 0x155b7cu: goto label_155b7c;
        case 0x155b80u: goto label_155b80;
        case 0x155b84u: goto label_155b84;
        case 0x155b88u: goto label_155b88;
        case 0x155b8cu: goto label_155b8c;
        case 0x155b90u: goto label_155b90;
        case 0x155b94u: goto label_155b94;
        case 0x155b98u: goto label_155b98;
        case 0x155b9cu: goto label_155b9c;
        case 0x155ba0u: goto label_155ba0;
        case 0x155ba4u: goto label_155ba4;
        case 0x155ba8u: goto label_155ba8;
        case 0x155bacu: goto label_155bac;
        case 0x155bb0u: goto label_155bb0;
        case 0x155bb4u: goto label_155bb4;
        case 0x155bb8u: goto label_155bb8;
        case 0x155bbcu: goto label_155bbc;
        case 0x155bc0u: goto label_155bc0;
        case 0x155bc4u: goto label_155bc4;
        case 0x155bc8u: goto label_155bc8;
        case 0x155bccu: goto label_155bcc;
        case 0x155bd0u: goto label_155bd0;
        case 0x155bd4u: goto label_155bd4;
        case 0x155bd8u: goto label_155bd8;
        case 0x155bdcu: goto label_155bdc;
        case 0x155be0u: goto label_155be0;
        case 0x155be4u: goto label_155be4;
        case 0x155be8u: goto label_155be8;
        case 0x155becu: goto label_155bec;
        case 0x155bf0u: goto label_155bf0;
        case 0x155bf4u: goto label_155bf4;
        case 0x155bf8u: goto label_155bf8;
        case 0x155bfcu: goto label_155bfc;
        case 0x155c00u: goto label_155c00;
        case 0x155c04u: goto label_155c04;
        case 0x155c08u: goto label_155c08;
        case 0x155c0cu: goto label_155c0c;
        case 0x155c10u: goto label_155c10;
        case 0x155c14u: goto label_155c14;
        case 0x155c18u: goto label_155c18;
        case 0x155c1cu: goto label_155c1c;
        case 0x155c20u: goto label_155c20;
        case 0x155c24u: goto label_155c24;
        case 0x155c28u: goto label_155c28;
        case 0x155c2cu: goto label_155c2c;
        case 0x155c30u: goto label_155c30;
        case 0x155c34u: goto label_155c34;
        case 0x155c38u: goto label_155c38;
        case 0x155c3cu: goto label_155c3c;
        case 0x155c40u: goto label_155c40;
        case 0x155c44u: goto label_155c44;
        case 0x155c48u: goto label_155c48;
        case 0x155c4cu: goto label_155c4c;
        case 0x155c50u: goto label_155c50;
        case 0x155c54u: goto label_155c54;
        case 0x155c58u: goto label_155c58;
        case 0x155c5cu: goto label_155c5c;
        case 0x155c60u: goto label_155c60;
        case 0x155c64u: goto label_155c64;
        case 0x155c68u: goto label_155c68;
        case 0x155c6cu: goto label_155c6c;
        case 0x155c70u: goto label_155c70;
        case 0x155c74u: goto label_155c74;
        case 0x155c78u: goto label_155c78;
        case 0x155c7cu: goto label_155c7c;
        case 0x155c80u: goto label_155c80;
        case 0x155c84u: goto label_155c84;
        case 0x155c88u: goto label_155c88;
        case 0x155c8cu: goto label_155c8c;
        case 0x155c90u: goto label_155c90;
        case 0x155c94u: goto label_155c94;
        case 0x155c98u: goto label_155c98;
        case 0x155c9cu: goto label_155c9c;
        case 0x155ca0u: goto label_155ca0;
        case 0x155ca4u: goto label_155ca4;
        case 0x155ca8u: goto label_155ca8;
        case 0x155cacu: goto label_155cac;
        case 0x155cb0u: goto label_155cb0;
        case 0x155cb4u: goto label_155cb4;
        case 0x155cb8u: goto label_155cb8;
        case 0x155cbcu: goto label_155cbc;
        case 0x155cc0u: goto label_155cc0;
        case 0x155cc4u: goto label_155cc4;
        case 0x155cc8u: goto label_155cc8;
        case 0x155cccu: goto label_155ccc;
        case 0x155cd0u: goto label_155cd0;
        case 0x155cd4u: goto label_155cd4;
        case 0x155cd8u: goto label_155cd8;
        case 0x155cdcu: goto label_155cdc;
        case 0x155ce0u: goto label_155ce0;
        case 0x155ce4u: goto label_155ce4;
        case 0x155ce8u: goto label_155ce8;
        case 0x155cecu: goto label_155cec;
        case 0x155cf0u: goto label_155cf0;
        case 0x155cf4u: goto label_155cf4;
        case 0x155cf8u: goto label_155cf8;
        case 0x155cfcu: goto label_155cfc;
        case 0x155d00u: goto label_155d00;
        case 0x155d04u: goto label_155d04;
        case 0x155d08u: goto label_155d08;
        case 0x155d0cu: goto label_155d0c;
        case 0x155d10u: goto label_155d10;
        case 0x155d14u: goto label_155d14;
        case 0x155d18u: goto label_155d18;
        case 0x155d1cu: goto label_155d1c;
        case 0x155d20u: goto label_155d20;
        case 0x155d24u: goto label_155d24;
        case 0x155d28u: goto label_155d28;
        case 0x155d2cu: goto label_155d2c;
        case 0x155d30u: goto label_155d30;
        case 0x155d34u: goto label_155d34;
        case 0x155d38u: goto label_155d38;
        case 0x155d3cu: goto label_155d3c;
        case 0x155d40u: goto label_155d40;
        case 0x155d44u: goto label_155d44;
        case 0x155d48u: goto label_155d48;
        case 0x155d4cu: goto label_155d4c;
        case 0x155d50u: goto label_155d50;
        case 0x155d54u: goto label_155d54;
        case 0x155d58u: goto label_155d58;
        case 0x155d5cu: goto label_155d5c;
        case 0x155d60u: goto label_155d60;
        case 0x155d64u: goto label_155d64;
        case 0x155d68u: goto label_155d68;
        case 0x155d6cu: goto label_155d6c;
        case 0x155d70u: goto label_155d70;
        case 0x155d74u: goto label_155d74;
        case 0x155d78u: goto label_155d78;
        case 0x155d7cu: goto label_155d7c;
        case 0x155d80u: goto label_155d80;
        case 0x155d84u: goto label_155d84;
        case 0x155d88u: goto label_155d88;
        case 0x155d8cu: goto label_155d8c;
        case 0x155d90u: goto label_155d90;
        case 0x155d94u: goto label_155d94;
        case 0x155d98u: goto label_155d98;
        case 0x155d9cu: goto label_155d9c;
        case 0x155da0u: goto label_155da0;
        case 0x155da4u: goto label_155da4;
        case 0x155da8u: goto label_155da8;
        case 0x155dacu: goto label_155dac;
        case 0x155db0u: goto label_155db0;
        case 0x155db4u: goto label_155db4;
        case 0x155db8u: goto label_155db8;
        case 0x155dbcu: goto label_155dbc;
        case 0x155dc0u: goto label_155dc0;
        case 0x155dc4u: goto label_155dc4;
        case 0x155dc8u: goto label_155dc8;
        case 0x155dccu: goto label_155dcc;
        case 0x155dd0u: goto label_155dd0;
        case 0x155dd4u: goto label_155dd4;
        case 0x155dd8u: goto label_155dd8;
        case 0x155ddcu: goto label_155ddc;
        case 0x155de0u: goto label_155de0;
        case 0x155de4u: goto label_155de4;
        case 0x155de8u: goto label_155de8;
        case 0x155decu: goto label_155dec;
        case 0x155df0u: goto label_155df0;
        case 0x155df4u: goto label_155df4;
        case 0x155df8u: goto label_155df8;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e00u: goto label_155e00;
        case 0x155e04u: goto label_155e04;
        case 0x155e08u: goto label_155e08;
        case 0x155e0cu: goto label_155e0c;
        case 0x155e10u: goto label_155e10;
        case 0x155e14u: goto label_155e14;
        case 0x155e18u: goto label_155e18;
        case 0x155e1cu: goto label_155e1c;
        case 0x155e20u: goto label_155e20;
        case 0x155e24u: goto label_155e24;
        case 0x155e28u: goto label_155e28;
        case 0x155e2cu: goto label_155e2c;
        case 0x155e30u: goto label_155e30;
        case 0x155e34u: goto label_155e34;
        case 0x155e38u: goto label_155e38;
        case 0x155e3cu: goto label_155e3c;
        case 0x155e40u: goto label_155e40;
        case 0x155e44u: goto label_155e44;
        case 0x155e48u: goto label_155e48;
        case 0x155e4cu: goto label_155e4c;
        case 0x155e50u: goto label_155e50;
        case 0x155e54u: goto label_155e54;
        case 0x155e58u: goto label_155e58;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e60u: goto label_155e60;
        case 0x155e64u: goto label_155e64;
        case 0x155e68u: goto label_155e68;
        case 0x155e6cu: goto label_155e6c;
        case 0x155e70u: goto label_155e70;
        case 0x155e74u: goto label_155e74;
        case 0x155e78u: goto label_155e78;
        case 0x155e7cu: goto label_155e7c;
        case 0x155e80u: goto label_155e80;
        case 0x155e84u: goto label_155e84;
        case 0x155e88u: goto label_155e88;
        case 0x155e8cu: goto label_155e8c;
        case 0x155e90u: goto label_155e90;
        case 0x155e94u: goto label_155e94;
        case 0x155e98u: goto label_155e98;
        case 0x155e9cu: goto label_155e9c;
        case 0x155ea0u: goto label_155ea0;
        case 0x155ea4u: goto label_155ea4;
        case 0x155ea8u: goto label_155ea8;
        case 0x155eacu: goto label_155eac;
        case 0x155eb0u: goto label_155eb0;
        case 0x155eb4u: goto label_155eb4;
        case 0x155eb8u: goto label_155eb8;
        case 0x155ebcu: goto label_155ebc;
        case 0x155ec0u: goto label_155ec0;
        case 0x155ec4u: goto label_155ec4;
        case 0x155ec8u: goto label_155ec8;
        case 0x155eccu: goto label_155ecc;
        case 0x155ed0u: goto label_155ed0;
        case 0x155ed4u: goto label_155ed4;
        case 0x155ed8u: goto label_155ed8;
        case 0x155edcu: goto label_155edc;
        case 0x155ee0u: goto label_155ee0;
        case 0x155ee4u: goto label_155ee4;
        case 0x155ee8u: goto label_155ee8;
        case 0x155eecu: goto label_155eec;
        case 0x155ef0u: goto label_155ef0;
        case 0x155ef4u: goto label_155ef4;
        case 0x155ef8u: goto label_155ef8;
        case 0x155efcu: goto label_155efc;
        case 0x155f00u: goto label_155f00;
        case 0x155f04u: goto label_155f04;
        case 0x155f08u: goto label_155f08;
        case 0x155f0cu: goto label_155f0c;
        case 0x155f10u: goto label_155f10;
        case 0x155f14u: goto label_155f14;
        case 0x155f18u: goto label_155f18;
        case 0x155f1cu: goto label_155f1c;
        case 0x155f20u: goto label_155f20;
        case 0x155f24u: goto label_155f24;
        case 0x155f28u: goto label_155f28;
        case 0x155f2cu: goto label_155f2c;
        case 0x155f30u: goto label_155f30;
        case 0x155f34u: goto label_155f34;
        case 0x155f38u: goto label_155f38;
        case 0x155f3cu: goto label_155f3c;
        case 0x155f40u: goto label_155f40;
        case 0x155f44u: goto label_155f44;
        case 0x155f48u: goto label_155f48;
        case 0x155f4cu: goto label_155f4c;
        case 0x155f50u: goto label_155f50;
        case 0x155f54u: goto label_155f54;
        case 0x155f58u: goto label_155f58;
        case 0x155f5cu: goto label_155f5c;
        case 0x155f60u: goto label_155f60;
        case 0x155f64u: goto label_155f64;
        case 0x155f68u: goto label_155f68;
        case 0x155f6cu: goto label_155f6c;
        case 0x155f70u: goto label_155f70;
        case 0x155f74u: goto label_155f74;
        case 0x155f78u: goto label_155f78;
        case 0x155f7cu: goto label_155f7c;
        case 0x155f80u: goto label_155f80;
        case 0x155f84u: goto label_155f84;
        case 0x155f88u: goto label_155f88;
        case 0x155f8cu: goto label_155f8c;
        case 0x155f90u: goto label_155f90;
        case 0x155f94u: goto label_155f94;
        case 0x155f98u: goto label_155f98;
        case 0x155f9cu: goto label_155f9c;
        case 0x155fa0u: goto label_155fa0;
        case 0x155fa4u: goto label_155fa4;
        case 0x155fa8u: goto label_155fa8;
        case 0x155facu: goto label_155fac;
        case 0x155fb0u: goto label_155fb0;
        case 0x155fb4u: goto label_155fb4;
        case 0x155fb8u: goto label_155fb8;
        case 0x155fbcu: goto label_155fbc;
        case 0x155fc0u: goto label_155fc0;
        case 0x155fc4u: goto label_155fc4;
        case 0x155fc8u: goto label_155fc8;
        case 0x155fccu: goto label_155fcc;
        case 0x155fd0u: goto label_155fd0;
        case 0x155fd4u: goto label_155fd4;
        case 0x155fd8u: goto label_155fd8;
        case 0x155fdcu: goto label_155fdc;
        case 0x155fe0u: goto label_155fe0;
        case 0x155fe4u: goto label_155fe4;
        case 0x155fe8u: goto label_155fe8;
        case 0x155fecu: goto label_155fec;
        case 0x155ff0u: goto label_155ff0;
        case 0x155ff4u: goto label_155ff4;
        case 0x155ff8u: goto label_155ff8;
        case 0x155ffcu: goto label_155ffc;
        case 0x156000u: goto label_156000;
        case 0x156004u: goto label_156004;
        case 0x156008u: goto label_156008;
        case 0x15600cu: goto label_15600c;
        case 0x156010u: goto label_156010;
        case 0x156014u: goto label_156014;
        case 0x156018u: goto label_156018;
        case 0x15601cu: goto label_15601c;
        case 0x156020u: goto label_156020;
        case 0x156024u: goto label_156024;
        case 0x156028u: goto label_156028;
        case 0x15602cu: goto label_15602c;
        case 0x156030u: goto label_156030;
        case 0x156034u: goto label_156034;
        case 0x156038u: goto label_156038;
        case 0x15603cu: goto label_15603c;
        case 0x156040u: goto label_156040;
        case 0x156044u: goto label_156044;
        case 0x156048u: goto label_156048;
        case 0x15604cu: goto label_15604c;
        case 0x156050u: goto label_156050;
        case 0x156054u: goto label_156054;
        case 0x156058u: goto label_156058;
        case 0x15605cu: goto label_15605c;
        case 0x156060u: goto label_156060;
        case 0x156064u: goto label_156064;
        case 0x156068u: goto label_156068;
        case 0x15606cu: goto label_15606c;
        case 0x156070u: goto label_156070;
        case 0x156074u: goto label_156074;
        case 0x156078u: goto label_156078;
        case 0x15607cu: goto label_15607c;
        case 0x156080u: goto label_156080;
        case 0x156084u: goto label_156084;
        case 0x156088u: goto label_156088;
        case 0x15608cu: goto label_15608c;
        case 0x156090u: goto label_156090;
        case 0x156094u: goto label_156094;
        case 0x156098u: goto label_156098;
        case 0x15609cu: goto label_15609c;
        case 0x1560a0u: goto label_1560a0;
        case 0x1560a4u: goto label_1560a4;
        case 0x1560a8u: goto label_1560a8;
        case 0x1560acu: goto label_1560ac;
        case 0x1560b0u: goto label_1560b0;
        case 0x1560b4u: goto label_1560b4;
        case 0x1560b8u: goto label_1560b8;
        case 0x1560bcu: goto label_1560bc;
        case 0x1560c0u: goto label_1560c0;
        case 0x1560c4u: goto label_1560c4;
        case 0x1560c8u: goto label_1560c8;
        case 0x1560ccu: goto label_1560cc;
        default: return;
    }

label_155900:
    // 0x155900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155904:
    // 0x155904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155908:
    // 0x155908: 0xc055654  jal         func_155950
label_15590c:
    if (ctx->pc == 0x15590Cu) {
        ctx->pc = 0x155910u;
        goto label_155910;
    }
    ctx->pc = 0x155908u;
    SET_GPR_U32(ctx, 31, 0x155910u);
    ctx->pc = 0x155950u;
    goto label_155950;
    ctx->pc = 0x155910u;
label_155910:
    // 0x155910: 0xc04e168  jal         func_1385A0
label_155914:
    if (ctx->pc == 0x155914u) {
        ctx->pc = 0x155918u;
        goto label_155918;
    }
    ctx->pc = 0x155910u;
    SET_GPR_U32(ctx, 31, 0x155918u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x155910u, 0x155918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155918u;
label_155918:
    // 0x155918: 0xc04e120  jal         func_138480
label_15591c:
    if (ctx->pc == 0x15591Cu) {
        ctx->pc = 0x155920u;
        goto label_155920;
    }
    ctx->pc = 0x155918u;
    SET_GPR_U32(ctx, 31, 0x155920u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x155918u, 0x155920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155920u;
label_155920:
    // 0x155920: 0xc06e07c  jal         func_1B81F0
label_155924:
    if (ctx->pc == 0x155924u) {
        ctx->pc = 0x155928u;
        goto label_155928;
    }
    ctx->pc = 0x155920u;
    SET_GPR_U32(ctx, 31, 0x155928u);
    ctx->pc = 0x1B81F0u;
    { ctx->pc = 0x1b81f0; return; }
    ctx->pc = 0x155928u;
label_155928:
    // 0x155928: 0xc0692b4  jal         func_1A4AD0
label_15592c:
    if (ctx->pc == 0x15592Cu) {
        ctx->pc = 0x15592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155928u;
        // 0x15592c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155930u;
        goto label_155930;
    }
    ctx->pc = 0x155928u;
    SET_GPR_U32(ctx, 31, 0x155930u);
    ctx->pc = 0x15592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155928u;
    // 0x15592c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AD0u;
    { ctx->pc = 0x1a4ad0; return; }
    ctx->pc = 0x155930u;
label_155930:
    // 0x155930: 0xc060298  jal         func_180A60
label_155934:
    if (ctx->pc == 0x155934u) {
        ctx->pc = 0x155934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155930u;
        // 0x155934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155938u;
        goto label_155938;
    }
    ctx->pc = 0x155930u;
    SET_GPR_U32(ctx, 31, 0x155938u);
    ctx->pc = 0x155934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155930u;
    // 0x155934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A60u;
    { ctx->pc = 0x180a60; return; }
    ctx->pc = 0x155938u;
label_155938:
    // 0x155938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15593c:
    // 0x15593c: 0x3e00008  jr          $ra
label_155940:
    if (ctx->pc == 0x155940u) {
        ctx->pc = 0x155940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15593Cu;
        // 0x155940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155944u;
        goto label_155944;
    }
    ctx->pc = 0x15593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15593Cu;
        // 0x155940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15593Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155944u;
label_155944:
    // 0x155944: 0x0  nop
    ctx->pc = 0x155944u;
    // NOP
label_155948:
    // 0x155948: 0x0  nop
    ctx->pc = 0x155948u;
    // NOP
label_15594c:
    // 0x15594c: 0x0  nop
    ctx->pc = 0x15594cu;
    // NOP
label_155950:
    // 0x155950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_155954:
    // 0x155954: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_155958:
    // 0x155958: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x155958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15595c:
    // 0x15595c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_155960:
    // 0x155960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155964:
    // 0x155964: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_155968:
    // 0x155968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15596c:
    // 0x15596c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_155970:
    // 0x155970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_155974:
    // 0x155974: 0x2463baa0  addiu       $v1, $v1, -0x4560
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949536));
label_155978:
    // 0x155978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15597c:
    // 0x15597c: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x15597cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_155980:
    // 0x155980: 0x8f828634  lw          $v0, -0x79CC($gp)
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936116)));
label_155984:
    // 0x155984: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_155988:
    // 0x155988: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x155988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_15598c:
    // 0x15598c: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x15598cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_155990:
    // 0x155990: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x155990u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_155994:
    // 0x155994: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_155998:
    // 0x155998: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15599c:
    // 0x15599c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1559a0:
    // 0x1559a0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1559a4:
    if (ctx->pc == 0x1559A4u) {
        ctx->pc = 0x1559A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A0u;
        // 0x1559a4: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559A8u;
        goto label_1559a8;
    }
    ctx->pc = 0x1559A0u;
    {
        const bool branch_taken_0x1559a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1559A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A0u;
        // 0x1559a4: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a0) {
            ctx->pc = 0x1559B0u;
            goto label_1559b0;
        }
    }
    ctx->pc = 0x1559A8u;
label_1559a8:
    // 0x1559a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1559a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1559ac:
    // 0x1559ac: 0xaf828634  sw          $v0, -0x79CC($gp)
    ctx->pc = 0x1559acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 2));
label_1559b0:
    // 0x1559b0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1559b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1559b4:
    // 0x1559b4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1559b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1559b8:
    // 0x1559b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1559bc:
    if (ctx->pc == 0x1559BCu) {
        ctx->pc = 0x1559C0u;
        goto label_1559c0;
    }
    ctx->pc = 0x1559B8u;
    {
        const bool branch_taken_0x1559b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559b8) {
            ctx->pc = 0x1559CCu;
            goto label_1559cc;
        }
    }
    ctx->pc = 0x1559C0u;
label_1559c0:
    // 0x1559c0: 0x8f828634  lw          $v0, -0x79CC($gp)
    ctx->pc = 0x1559c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936116)));
label_1559c4:
    // 0x1559c4: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x1559c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_1559c8:
    // 0x1559c8: 0xaf828634  sw          $v0, -0x79CC($gp)
    ctx->pc = 0x1559c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 2));
label_1559cc:
    // 0x1559cc: 0x8f838634  lw          $v1, -0x79CC($gp)
    ctx->pc = 0x1559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936116)));
label_1559d0:
    // 0x1559d0: 0x286101e0  slti        $at, $v1, 0x1E0
    ctx->pc = 0x1559d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)480) ? 1 : 0);
label_1559d4:
    // 0x1559d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1559d8:
    if (ctx->pc == 0x1559D8u) {
        ctx->pc = 0x1559DCu;
        goto label_1559dc;
    }
    ctx->pc = 0x1559D4u;
    {
        const bool branch_taken_0x1559d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1559d4) {
            ctx->pc = 0x1559E4u;
            goto label_1559e4;
        }
    }
    ctx->pc = 0x1559DCu;
label_1559dc:
    // 0x1559dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1559e0:
    if (ctx->pc == 0x1559E0u) {
        ctx->pc = 0x1559E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559DCu;
        // 0x1559e0: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559E4u;
        goto label_1559e4;
    }
    ctx->pc = 0x1559DCu;
    {
        const bool branch_taken_0x1559dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559DCu;
        // 0x1559e0: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559dc) {
            ctx->pc = 0x1559ECu;
            goto label_1559ec;
        }
    }
    ctx->pc = 0x1559E4u;
label_1559e4:
    // 0x1559e4: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1559e8:
    // 0x1559e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1559e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1559ec:
    // 0x1559ec: 0x8f848638  lw          $a0, -0x79C8($gp)
    ctx->pc = 0x1559ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936120)));
label_1559f0:
    // 0x1559f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1559f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1559f4:
    // 0x1559f4: 0xaf838634  sw          $v1, -0x79CC($gp)
    ctx->pc = 0x1559f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 3));
label_1559f8:
    // 0x1559f8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1559f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1559fc:
    // 0x1559fc: 0x0  nop
    ctx->pc = 0x1559fcu;
    // NOP
label_155a00:
    // 0x155a00: 0x0  nop
    ctx->pc = 0x155a00u;
    // NOP
label_155a04:
    // 0x155a04: 0x1010  mfhi        $v0
    ctx->pc = 0x155a04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_155a08:
    // 0x155a08: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_155a0c:
    // 0x155a0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x155a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_155a10:
    // 0x155a10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_155a14:
    // 0x155a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155a18:
    // 0x155a18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x155a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_155a1c:
    // 0x155a1c: 0xaf828638  sw          $v0, -0x79C8($gp)
    ctx->pc = 0x155a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 2));
label_155a20:
    // 0x155a20: 0x8f828638  lw          $v0, -0x79C8($gp)
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936120)));
label_155a24:
    // 0x155a24: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_155a28:
    if (ctx->pc == 0x155A28u) {
        ctx->pc = 0x155A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A24u;
        // 0x155a28: 0x30430fff  andi        $v1, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A2Cu;
        goto label_155a2c;
    }
    ctx->pc = 0x155A24u;
    {
        const bool branch_taken_0x155a24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x155A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A24u;
        // 0x155a28: 0x30430fff  andi        $v1, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a24) {
            ctx->pc = 0x155A38u;
            goto label_155a38;
        }
    }
    ctx->pc = 0x155A2Cu;
label_155a2c:
    // 0x155a2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_155a30:
    if (ctx->pc == 0x155A30u) {
        ctx->pc = 0x155A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A2Cu;
        // 0x155a30: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A34u;
        goto label_155a34;
    }
    ctx->pc = 0x155A2Cu;
    {
        const bool branch_taken_0x155a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A2Cu;
        // 0x155a30: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a2c) {
            ctx->pc = 0x155A3Cu;
            goto label_155a3c;
        }
    }
    ctx->pc = 0x155A34u;
label_155a34:
    // 0x155a34: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
label_155a38:
    // 0x155a38: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_155a3c:
    // 0x155a3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a40:
    // 0x155a40: 0xa6020138  sh          $v0, 0x138($s0)
    ctx->pc = 0x155a40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 2));
label_155a44:
    // 0x155a44: 0x24630808  addiu       $v1, $v1, 0x808
    ctx->pc = 0x155a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
label_155a48:
    // 0x155a48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x155a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155a4c:
    // 0x155a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a50:
    // 0x155a50: 0xa602013a  sh          $v0, 0x13A($s0)
    ctx->pc = 0x155a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 2));
label_155a54:
    // 0x155a54: 0x24020308  addiu       $v0, $zero, 0x308
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
label_155a58:
    // 0x155a58: 0xa6030148  sh          $v1, 0x148($s0)
    ctx->pc = 0x155a58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 3));
label_155a5c:
    // 0x155a5c: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x155a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
label_155a60:
    // 0x155a60: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155a64:
    // 0x155a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155a68:
    // 0x155a68: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
label_155a6c:
    // 0x155a6c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_155a70:
    // 0x155a70: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x155a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_155a74:
    // 0x155a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a78:
    // 0x155a78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x155a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a7c:
    // 0x155a7c: 0xc066c72  jal         func_19B1C8
label_155a80:
    if (ctx->pc == 0x155A80u) {
        ctx->pc = 0x155A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A7Cu;
        // 0x155a80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A84u;
        goto label_155a84;
    }
    ctx->pc = 0x155A7Cu;
    SET_GPR_U32(ctx, 31, 0x155A84u);
    ctx->pc = 0x155A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A7Cu;
    // 0x155a80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x155A84u;
label_155a84:
    // 0x155a84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x155a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_155a88:
    // 0x155a88: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x155a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_155a8c:
    // 0x155a8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_155a90:
    if (ctx->pc == 0x155A90u) {
        ctx->pc = 0x155A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A8Cu;
        // 0x155a90: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A94u;
        goto label_155a94;
    }
    ctx->pc = 0x155A8Cu;
    {
        const bool branch_taken_0x155a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A8Cu;
        // 0x155a90: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a8c) {
            ctx->pc = 0x155A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155a60;
        }
    }
    ctx->pc = 0x155A94u;
label_155a94:
    // 0x155a94: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155a98:
    // 0x155a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155a9c:
    // 0x155a9c: 0x24a5c1c0  addiu       $a1, $a1, -0x3E40
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951360));
label_155aa0:
    // 0x155aa0: 0x24060508  addiu       $a2, $zero, 0x508
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
label_155aa4:
    // 0x155aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155aa8:
    // 0x155aa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x155aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155aac:
    // 0x155aac: 0xc066c72  jal         func_19B1C8
label_155ab0:
    if (ctx->pc == 0x155AB0u) {
        ctx->pc = 0x155AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AACu;
        // 0x155ab0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155AB4u;
        goto label_155ab4;
    }
    ctx->pc = 0x155AACu;
    SET_GPR_U32(ctx, 31, 0x155AB4u);
    ctx->pc = 0x155AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AACu;
    // 0x155ab0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x155AB4u;
label_155ab4:
    // 0x155ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155ab8:
    // 0x155ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155abc:
    // 0x155abc: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x155abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_155ac0:
    // 0x155ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155ac4:
    // 0x155ac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x155ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155ac8:
    // 0x155ac8: 0xc066c72  jal         func_19B1C8
label_155acc:
    if (ctx->pc == 0x155ACCu) {
        ctx->pc = 0x155ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AC8u;
        // 0x155acc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155AD0u;
        goto label_155ad0;
    }
    ctx->pc = 0x155AC8u;
    SET_GPR_U32(ctx, 31, 0x155AD0u);
    ctx->pc = 0x155ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155AC8u;
    // 0x155acc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x155AD0u;
label_155ad0:
    // 0x155ad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x155ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_155ad4:
    // 0x155ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155ad8:
    // 0x155ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155adc:
    // 0x155adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155ae0:
    // 0x155ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155ae4:
    // 0x155ae4: 0x3e00008  jr          $ra
label_155ae8:
    if (ctx->pc == 0x155AE8u) {
        ctx->pc = 0x155AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AE4u;
        // 0x155ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155AECu;
        goto label_155aec;
    }
    ctx->pc = 0x155AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AE4u;
        // 0x155ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155AECu;
label_155aec:
    // 0x155aec: 0x0  nop
    ctx->pc = 0x155aecu;
    // NOP
label_155af0:
    // 0x155af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x155af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_155af4:
    // 0x155af4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155af8:
    // 0x155af8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x155af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_155afc:
    // 0x155afc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_155b00:
    // 0x155b00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x155b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_155b04:
    // 0x155b04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x155b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_155b08:
    // 0x155b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_155b0c:
    // 0x155b0c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x155b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_155b10:
    // 0x155b10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_155b14:
    if (ctx->pc == 0x155B14u) {
        ctx->pc = 0x155B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B10u;
        // 0x155b14: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B18u;
        goto label_155b18;
    }
    ctx->pc = 0x155B10u;
    {
        const bool branch_taken_0x155b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B10u;
        // 0x155b14: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b10) {
            ctx->pc = 0x155B28u;
            goto label_155b28;
        }
    }
    ctx->pc = 0x155B18u;
label_155b18:
    // 0x155b18: 0xc0867a0  jal         func_219E80
label_155b1c:
    if (ctx->pc == 0x155B1Cu) {
        ctx->pc = 0x155B20u;
        goto label_155b20;
    }
    ctx->pc = 0x155B18u;
    SET_GPR_U32(ctx, 31, 0x155B20u);
    ctx->pc = 0x219E80u;
    { ctx->pc = 0x219e80; return; }
    ctx->pc = 0x155B20u;
label_155b20:
    // 0x155b20: 0x10000021  b           . + 4 + (0x21 << 2)
label_155b24:
    if (ctx->pc == 0x155B24u) {
        ctx->pc = 0x155B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B20u;
        // 0x155b24: 0x24440017  addiu       $a0, $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B28u;
        goto label_155b28;
    }
    ctx->pc = 0x155B20u;
    {
        const bool branch_taken_0x155b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B20u;
        // 0x155b24: 0x24440017  addiu       $a0, $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b20) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B28u;
label_155b28:
    // 0x155b28: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x155b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_155b2c:
    // 0x155b2c: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x155b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_155b30:
    // 0x155b30: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_155b34:
    // 0x155b34: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x155b34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_155b38:
    // 0x155b38: 0x0  nop
    ctx->pc = 0x155b38u;
    // NOP
label_155b3c:
    // 0x155b3c: 0x0  nop
    ctx->pc = 0x155b3cu;
    // NOP
label_155b40:
    // 0x155b40: 0x2010  mfhi        $a0
    ctx->pc = 0x155b40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_155b44:
    // 0x155b44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_155b48:
    if (ctx->pc == 0x155B48u) {
        ctx->pc = 0x155B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B44u;
        // 0x155b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B4Cu;
        goto label_155b4c;
    }
    ctx->pc = 0x155B44u;
    {
        const bool branch_taken_0x155b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B44u;
        // 0x155b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b44) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B4Cu;
label_155b4c:
    // 0x155b4c: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
label_155b50:
    if (ctx->pc == 0x155B50u) {
        ctx->pc = 0x155B54u;
        goto label_155b54;
    }
    ctx->pc = 0x155B4Cu;
    {
        const bool branch_taken_0x155b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b4c) {
            ctx->pc = 0x155BA4u;
            goto label_155ba4;
        }
    }
    ctx->pc = 0x155B54u;
label_155b54:
    // 0x155b54: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_155b58:
    // 0x155b58: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_155b5c:
    if (ctx->pc == 0x155B5Cu) {
        ctx->pc = 0x155B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B58u;
        // 0x155b5c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B60u;
        goto label_155b60;
    }
    ctx->pc = 0x155B58u;
    {
        const bool branch_taken_0x155b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x155B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B58u;
        // 0x155b5c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b58) {
            ctx->pc = 0x155B9Cu;
            goto label_155b9c;
        }
    }
    ctx->pc = 0x155B60u;
label_155b60:
    // 0x155b60: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_155b64:
    if (ctx->pc == 0x155B64u) {
        ctx->pc = 0x155B68u;
        goto label_155b68;
    }
    ctx->pc = 0x155B60u;
    {
        const bool branch_taken_0x155b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b60) {
            ctx->pc = 0x155B94u;
            goto label_155b94;
        }
    }
    ctx->pc = 0x155B68u;
label_155b68:
    // 0x155b68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_155b6c:
    // 0x155b6c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_155b70:
    if (ctx->pc == 0x155B70u) {
        ctx->pc = 0x155B74u;
        goto label_155b74;
    }
    ctx->pc = 0x155B6Cu;
    {
        const bool branch_taken_0x155b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b6c) {
            ctx->pc = 0x155B8Cu;
            goto label_155b8c;
        }
    }
    ctx->pc = 0x155B74u;
label_155b74:
    // 0x155b74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_155b78:
    if (ctx->pc == 0x155B78u) {
        ctx->pc = 0x155B7Cu;
        goto label_155b7c;
    }
    ctx->pc = 0x155B74u;
    {
        const bool branch_taken_0x155b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b74) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155B7Cu;
label_155b7c:
    // 0x155b7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_155b80:
    if (ctx->pc == 0x155B80u) {
        ctx->pc = 0x155B84u;
        goto label_155b84;
    }
    ctx->pc = 0x155B7Cu;
    {
        const bool branch_taken_0x155b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b7c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0x10000008  b           . + 4 + (0x8 << 2)
label_155b88:
    if (ctx->pc == 0x155B88u) {
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B84u;
        // 0x155b88: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B8Cu;
        goto label_155b8c;
    }
    ctx->pc = 0x155B84u;
    {
        const bool branch_taken_0x155b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B84u;
        // 0x155b88: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b84) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B8Cu;
label_155b8c:
    // 0x155b8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_155b90:
    if (ctx->pc == 0x155B90u) {
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B94u;
        goto label_155b94;
    }
    ctx->pc = 0x155B8Cu;
    {
        const bool branch_taken_0x155b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b8c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x10000004  b           . + 4 + (0x4 << 2)
label_155b98:
    if (ctx->pc == 0x155B98u) {
        ctx->pc = 0x155B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B94u;
        // 0x155b98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155B9Cu;
        goto label_155b9c;
    }
    ctx->pc = 0x155B94u;
    {
        const bool branch_taken_0x155b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B94u;
        // 0x155b98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b94) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B9Cu;
label_155b9c:
    // 0x155b9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_155ba0:
    if (ctx->pc == 0x155BA0u) {
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B9Cu;
        // 0x155ba0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155BA4u;
        goto label_155ba4;
    }
    ctx->pc = 0x155B9Cu;
    {
        const bool branch_taken_0x155b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B9Cu;
        // 0x155ba0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b9c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155BA4u;
label_155ba4:
    // 0x155ba4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_155ba8:
    // 0x155ba8: 0xc055768  jal         func_155DA0
label_155bac:
    if (ctx->pc == 0x155BACu) {
        ctx->pc = 0x155BB0u;
        goto label_155bb0;
    }
    ctx->pc = 0x155BA8u;
    SET_GPR_U32(ctx, 31, 0x155BB0u);
    ctx->pc = 0x155DA0u;
    goto label_155da0;
    ctx->pc = 0x155BB0u;
label_155bb0:
    // 0x155bb0: 0xaf808638  sw          $zero, -0x79C8($gp)
    ctx->pc = 0x155bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 0));
label_155bb4:
    // 0x155bb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155bb8:
    // 0x155bb8: 0xaf808634  sw          $zero, -0x79CC($gp)
    ctx->pc = 0x155bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 0));
label_155bbc:
    // 0x155bbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155bc0:
    // 0x155bc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155bc4:
    // 0x155bc4: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x155bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_155bc8:
    // 0x155bc8: 0x2442baa0  addiu       $v0, $v0, -0x4560
    ctx->pc = 0x155bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949536));
label_155bcc:
    // 0x155bcc: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x155bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_155bd0:
    // 0x155bd0: 0xc05e234  jal         func_1788D0
label_155bd4:
    if (ctx->pc == 0x155BD4u) {
        ctx->pc = 0x155BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BD0u;
        // 0x155bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155BD8u;
        goto label_155bd8;
    }
    ctx->pc = 0x155BD0u;
    SET_GPR_U32(ctx, 31, 0x155BD8u);
    ctx->pc = 0x155BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BD0u;
    // 0x155bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x155BD8u;
label_155bd8:
    // 0x155bd8: 0x3407fffe  ori         $a3, $zero, 0xFFFE
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_155bdc:
    // 0x155bdc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x155bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_155be0:
    // 0x155be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155be4:
    // 0x155be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155be8:
    // 0x155be8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_155bec:
    // 0x155bec: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_155bf0:
    // 0x155bf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155bf4:
    // 0x155bf4: 0xc05e060  jal         func_178180
label_155bf8:
    if (ctx->pc == 0x155BF8u) {
        ctx->pc = 0x155BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BF4u;
        // 0x155bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155BFCu;
        goto label_155bfc;
    }
    ctx->pc = 0x155BF4u;
    SET_GPR_U32(ctx, 31, 0x155BFCu);
    ctx->pc = 0x155BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BF4u;
    // 0x155bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    { ctx->pc = 0x178180; return; }
    ctx->pc = 0x155BFCu;
label_155bfc:
    // 0x155bfc: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x155bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
label_155c00:
    // 0x155c00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_155c04:
    // 0x155c04: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x155c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
label_155c08:
    // 0x155c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_155c0c:
    // 0x155c0c: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x155c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_155c10:
    // 0x155c10: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_155c14:
    // 0x155c14: 0xa225007b  sb          $a1, 0x7B($s1)
    ctx->pc = 0x155c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 5));
label_155c18:
    // 0x155c18: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_155c1c:
    // 0x155c1c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x155c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_155c20:
    // 0x155c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155c24:
    // 0x155c24: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x155c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
label_155c28:
    // 0x155c28: 0xa2200089  sb          $zero, 0x89($s1)
    ctx->pc = 0x155c28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 0));
label_155c2c:
    // 0x155c2c: 0xa220008a  sb          $zero, 0x8A($s1)
    ctx->pc = 0x155c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 0));
label_155c30:
    // 0x155c30: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x155c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
label_155c34:
    // 0x155c34: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x155c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_155c38:
    // 0x155c38: 0xa2200098  sb          $zero, 0x98($s1)
    ctx->pc = 0x155c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 0));
label_155c3c:
    // 0x155c3c: 0xa2200099  sb          $zero, 0x99($s1)
    ctx->pc = 0x155c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 0));
label_155c40:
    // 0x155c40: 0xa220009a  sb          $zero, 0x9A($s1)
    ctx->pc = 0x155c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 0));
label_155c44:
    // 0x155c44: 0xa225009b  sb          $a1, 0x9B($s1)
    ctx->pc = 0x155c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 5));
label_155c48:
    // 0x155c48: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x155c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_155c4c:
    // 0x155c4c: 0xa22000a8  sb          $zero, 0xA8($s1)
    ctx->pc = 0x155c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
label_155c50:
    // 0x155c50: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x155c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
label_155c54:
    // 0x155c54: 0xa22000aa  sb          $zero, 0xAA($s1)
    ctx->pc = 0x155c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
label_155c58:
    // 0x155c58: 0xa22500ab  sb          $a1, 0xAB($s1)
    ctx->pc = 0x155c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 5));
label_155c5c:
    // 0x155c5c: 0xc070924  jal         func_1C2490
label_155c60:
    if (ctx->pc == 0x155C60u) {
        ctx->pc = 0x155C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C5Cu;
        // 0x155c60: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155C64u;
        goto label_155c64;
    }
    ctx->pc = 0x155C5Cu;
    SET_GPR_U32(ctx, 31, 0x155C64u);
    ctx->pc = 0x155C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C5Cu;
    // 0x155c60: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    { ctx->pc = 0x1c2490; return; }
    ctx->pc = 0x155C64u;
label_155c64:
    // 0x155c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155c68:
    // 0x155c68: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x155c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_155c6c:
    // 0x155c6c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x155c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_155c70:
    // 0x155c70: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_155c74:
    // 0x155c74: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x155c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_155c78:
    // 0x155c78: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_155c7c:
    // 0x155c7c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x155c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_155c80:
    // 0x155c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155c84:
    // 0x155c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155c88:
    // 0x155c88: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x155c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_155c8c:
    // 0x155c8c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x155c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_155c90:
    // 0x155c90: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_155c94:
    // 0x155c94: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x155c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_155c98:
    // 0x155c98: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x155c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_155c9c:
    // 0x155c9c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_155ca0:
    // 0x155ca0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_155ca4:
    // 0x155ca4: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_155ca8:
    // 0x155ca8: 0xc05dd88  jal         func_177620
label_155cac:
    if (ctx->pc == 0x155CACu) {
        ctx->pc = 0x155CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CA8u;
        // 0x155cac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CB0u;
        goto label_155cb0;
    }
    ctx->pc = 0x155CA8u;
    SET_GPR_U32(ctx, 31, 0x155CB0u);
    ctx->pc = 0x155CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CA8u;
    // 0x155cac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x155CB0u;
label_155cb0:
    // 0x155cb0: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_155cb4:
    // 0x155cb4: 0x24020ffb  addiu       $v0, $zero, 0xFFB
    ctx->pc = 0x155cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4091));
label_155cb8:
    // 0x155cb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_155cbc:
    // 0x155cbc: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_155cc0:
    // 0x155cc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_155cc4:
    // 0x155cc4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_155cc8:
    // 0x155cc8: 0xfe220100  sd          $v0, 0x100($s1)
    ctx->pc = 0x155cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 256), GPR_U64(ctx, 2));
label_155ccc:
    // 0x155ccc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_155cd0:
    // 0x155cd0: 0xc070924  jal         func_1C2490
label_155cd4:
    if (ctx->pc == 0x155CD4u) {
        ctx->pc = 0x155CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD0u;
        // 0x155cd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CD8u;
        goto label_155cd8;
    }
    ctx->pc = 0x155CD0u;
    SET_GPR_U32(ctx, 31, 0x155CD8u);
    ctx->pc = 0x155CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CD0u;
    // 0x155cd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    { ctx->pc = 0x1c2490; return; }
    ctx->pc = 0x155CD8u;
label_155cd8:
    // 0x155cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155cdc:
    // 0x155cdc: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_155ce0:
    // 0x155ce0: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x155ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_155ce4:
    // 0x155ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155ce8:
    // 0x155ce8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x155ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_155cec:
    // 0x155cec: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_155cf0:
    // 0x155cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155cf4:
    // 0x155cf4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x155cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_155cf8:
    // 0x155cf8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x155cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_155cfc:
    // 0x155cfc: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_155d00:
    // 0x155d00: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_155d04:
    // 0x155d04: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155d04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_155d08:
    // 0x155d08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155d0c:
    // 0x155d0c: 0xc05de30  jal         func_1778C0
label_155d10:
    if (ctx->pc == 0x155D10u) {
        ctx->pc = 0x155D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D0Cu;
        // 0x155d10: 0x240b0140  addiu       $t3, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D14u;
        goto label_155d14;
    }
    ctx->pc = 0x155D0Cu;
    SET_GPR_U32(ctx, 31, 0x155D14u);
    ctx->pc = 0x155D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D0Cu;
    // 0x155d10: 0x240b0140  addiu       $t3, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x155D14u;
label_155d14:
    // 0x155d14: 0xc070834  jal         func_1C20D0
label_155d18:
    if (ctx->pc == 0x155D18u) {
        ctx->pc = 0x155D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D14u;
        // 0x155d18: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D1Cu;
        goto label_155d1c;
    }
    ctx->pc = 0x155D14u;
    SET_GPR_U32(ctx, 31, 0x155D1Cu);
    ctx->pc = 0x155D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D14u;
    // 0x155d18: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x155D1Cu;
label_155d1c:
    // 0x155d1c: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_155d20:
    // 0x155d20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155d24:
    // 0x155d24: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x155d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_155d28:
    // 0x155d28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_155d2c:
    // 0x155d2c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x155d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_155d30:
    // 0x155d30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x155d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155d34:
    // 0x155d34: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x155d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_155d38:
    // 0x155d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155d3c:
    // 0x155d3c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x155d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_155d40:
    // 0x155d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155d44:
    // 0x155d44: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x155d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_155d48:
    // 0x155d48: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x155d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_155d4c:
    // 0x155d4c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x155d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_155d50:
    // 0x155d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155d54:
    // 0x155d54: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x155d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_155d58:
    // 0x155d58: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_155d5c:
    // 0x155d5c: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x155d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_155d60:
    // 0x155d60: 0xc05ded8  jal         func_177B60
label_155d64:
    if (ctx->pc == 0x155D64u) {
        ctx->pc = 0x155D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D60u;
        // 0x155d64: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D68u;
        goto label_155d68;
    }
    ctx->pc = 0x155D60u;
    SET_GPR_U32(ctx, 31, 0x155D68u);
    ctx->pc = 0x155D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D60u;
    // 0x155d64: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x155D68u;
label_155d68:
    // 0x155d68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_155d6c:
    // 0x155d6c: 0xa22002a3  sb          $zero, 0x2A3($s1)
    ctx->pc = 0x155d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 0));
label_155d70:
    // 0x155d70: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x155d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_155d74:
    // 0x155d74: 0x265202d0  addiu       $s2, $s2, 0x2D0
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_155d78:
    // 0x155d78: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
label_155d7c:
    if (ctx->pc == 0x155D7Cu) {
        ctx->pc = 0x155D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D78u;
        // 0x155d7c: 0xa2200273  sb          $zero, 0x273($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D80u;
        goto label_155d80;
    }
    ctx->pc = 0x155D78u;
    {
        const bool branch_taken_0x155d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D78u;
        // 0x155d7c: 0xa2200273  sb          $zero, 0x273($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d78) {
            ctx->pc = 0x155BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155bc0;
        }
    }
    ctx->pc = 0x155D80u;
label_155d80:
    // 0x155d80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x155d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_155d84:
    // 0x155d84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x155d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_155d88:
    // 0x155d88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x155d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155d8c:
    // 0x155d8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x155d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155d90:
    // 0x155d90: 0x3e00008  jr          $ra
label_155d94:
    if (ctx->pc == 0x155D94u) {
        ctx->pc = 0x155D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D90u;
        // 0x155d94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D98u;
        goto label_155d98;
    }
    ctx->pc = 0x155D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D90u;
        // 0x155d94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D98u;
label_155d98:
    // 0x155d98: 0x0  nop
    ctx->pc = 0x155d98u;
    // NOP
label_155d9c:
    // 0x155d9c: 0x0  nop
    ctx->pc = 0x155d9cu;
    // NOP
label_155da0:
    // 0x155da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_155da4:
    // 0x155da4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_155da8:
    // 0x155da8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_155dac:
    // 0x155dac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155db0:
    // 0x155db0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_155db4:
    // 0x155db4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_155db8:
    // 0x155db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_155dbc:
    // 0x155dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155dc0:
    // 0x155dc0: 0x8f838148  lw          $v1, -0x7EB8($gp)
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934856)));
label_155dc4:
    // 0x155dc4: 0x1223003d  beq         $s1, $v1, . + 4 + (0x3D << 2)
label_155dc8:
    if (ctx->pc == 0x155DC8u) {
        ctx->pc = 0x155DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DC4u;
        // 0x155dc8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DCCu;
        goto label_155dcc;
    }
    ctx->pc = 0x155DC4u;
    {
        const bool branch_taken_0x155dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x155DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DC4u;
        // 0x155dc8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dc4) {
            ctx->pc = 0x155EBCu;
            goto label_155ebc;
        }
    }
    ctx->pc = 0x155DCCu;
label_155dcc:
    // 0x155dcc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x155dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_155dd0:
    // 0x155dd0: 0x8c308c50  lw          $s0, -0x73B0($at)
    ctx->pc = 0x155dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937680)));
label_155dd4:
    // 0x155dd4: 0x24055800  addiu       $a1, $zero, 0x5800
    ctx->pc = 0x155dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
label_155dd8:
    // 0x155dd8: 0xc070080  jal         func_1C0200
label_155ddc:
    if (ctx->pc == 0x155DDCu) {
        ctx->pc = 0x155DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD8u;
        // 0x155ddc: 0xaf918148  sw          $s1, -0x7EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934856), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DE0u;
        goto label_155de0;
    }
    ctx->pc = 0x155DD8u;
    SET_GPR_U32(ctx, 31, 0x155DE0u);
    ctx->pc = 0x155DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DD8u;
    // 0x155ddc: 0xaf918148  sw          $s1, -0x7EB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934856), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x155DE0u;
label_155de0:
    // 0x155de0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_155de4:
    // 0x155de4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x155de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155de8:
    // 0x155de8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_155dec:
    // 0x155dec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_155df0:
    // 0x155df0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_155df4:
    // 0x155df4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_155df8:
    // 0x155df8: 0xc041744  jal         func_105D10
label_155dfc:
    if (ctx->pc == 0x155DFCu) {
        ctx->pc = 0x155DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DF8u;
        // 0x155dfc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E00u;
        goto label_155e00;
    }
    ctx->pc = 0x155DF8u;
    SET_GPR_U32(ctx, 31, 0x155E00u);
    ctx->pc = 0x155DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DF8u;
    // 0x155dfc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x155DF8u, 0x155E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E00u;
label_155e00:
    // 0x155e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x155e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155e04:
    // 0x155e04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e08:
    // 0x155e08: 0xc060678  jal         func_1819E0
label_155e0c:
    if (ctx->pc == 0x155E0Cu) {
        ctx->pc = 0x155E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E08u;
        // 0x155e0c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E10u;
        goto label_155e10;
    }
    ctx->pc = 0x155E08u;
    SET_GPR_U32(ctx, 31, 0x155E10u);
    ctx->pc = 0x155E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E08u;
    // 0x155e0c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x155E10u;
label_155e10:
    // 0x155e10: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_155e14:
    // 0x155e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155e18:
    // 0x155e18: 0x2484c1c0  addiu       $a0, $a0, -0x3E40
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951360));
label_155e1c:
    // 0x155e1c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x155e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_155e20:
    // 0x155e20: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x155e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_155e24:
    // 0x155e24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x155e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e28:
    // 0x155e28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155e28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e2c:
    // 0x155e2c: 0x240a0140  addiu       $t2, $zero, 0x140
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_155e30:
    // 0x155e30: 0xc060300  jal         func_180C00
label_155e34:
    if (ctx->pc == 0x155E34u) {
        ctx->pc = 0x155E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E30u;
        // 0x155e34: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E38u;
        goto label_155e38;
    }
    ctx->pc = 0x155E30u;
    SET_GPR_U32(ctx, 31, 0x155E38u);
    ctx->pc = 0x155E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E30u;
    // 0x155e34: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x155E38u;
label_155e38:
    // 0x155e38: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_155e3c:
    // 0x155e3c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x155e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_155e40:
    // 0x155e40: 0x2484c240  addiu       $a0, $a0, -0x3DC0
    ctx->pc = 0x155e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951488));
label_155e44:
    // 0x155e44: 0xc08e93e  jal         func_23A4F8
label_155e48:
    if (ctx->pc == 0x155E48u) {
        ctx->pc = 0x155E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E44u;
        // 0x155e48: 0x24065000  addiu       $a2, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E4Cu;
        goto label_155e4c;
    }
    ctx->pc = 0x155E44u;
    SET_GPR_U32(ctx, 31, 0x155E4Cu);
    ctx->pc = 0x155E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E44u;
    // 0x155e48: 0x24065000  addiu       $a2, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x155E4Cu;
label_155e4c:
    // 0x155e4c: 0x26525040  addiu       $s2, $s2, 0x5040
    ctx->pc = 0x155e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20544));
label_155e50:
    // 0x155e50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e54:
    // 0x155e54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155e54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e58:
    // 0x155e58: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155e5c:
    // 0x155e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155e60:
    // 0x155e60: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x155e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
label_155e64:
    // 0x155e64: 0xc060668  jal         func_1819A0
label_155e68:
    if (ctx->pc == 0x155E68u) {
        ctx->pc = 0x155E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E64u;
        // 0x155e68: 0x53a021  addu        $s4, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E6Cu;
        goto label_155e6c;
    }
    ctx->pc = 0x155E64u;
    SET_GPR_U32(ctx, 31, 0x155E6Cu);
    ctx->pc = 0x155E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E64u;
    // 0x155e68: 0x53a021  addu        $s4, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x155E6Cu;
label_155e6c:
    // 0x155e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155e70:
    // 0x155e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_155e74:
    // 0x155e74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x155e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155e78:
    // 0x155e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e7c:
    // 0x155e7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x155e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e80:
    // 0x155e80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e84:
    // 0x155e84: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x155e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_155e88:
    // 0x155e88: 0xc060300  jal         func_180C00
label_155e8c:
    if (ctx->pc == 0x155E8Cu) {
        ctx->pc = 0x155E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E88u;
        // 0x155e8c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E90u;
        goto label_155e90;
    }
    ctx->pc = 0x155E88u;
    SET_GPR_U32(ctx, 31, 0x155E90u);
    ctx->pc = 0x155E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E88u;
    // 0x155e8c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x155E90u;
label_155e90:
    // 0x155e90: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_155e94:
    // 0x155e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_155e98:
    // 0x155e98: 0xc08e93e  jal         func_23A4F8
label_155e9c:
    if (ctx->pc == 0x155E9Cu) {
        ctx->pc = 0x155E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E98u;
        // 0x155e9c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155EA0u;
        goto label_155ea0;
    }
    ctx->pc = 0x155E98u;
    SET_GPR_U32(ctx, 31, 0x155EA0u);
    ctx->pc = 0x155E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E98u;
    // 0x155e9c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x155EA0u;
label_155ea0:
    // 0x155ea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_155ea4:
    // 0x155ea4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x155ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_155ea8:
    // 0x155ea8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x155ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_155eac:
    // 0x155eac: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_155eb0:
    if (ctx->pc == 0x155EB0u) {
        ctx->pc = 0x155EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EACu;
        // 0x155eb0: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155EB4u;
        goto label_155eb4;
    }
    ctx->pc = 0x155EACu;
    {
        const bool branch_taken_0x155eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EACu;
        // 0x155eb0: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155eac) {
            ctx->pc = 0x155E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155e58;
        }
    }
    ctx->pc = 0x155EB4u;
label_155eb4:
    // 0x155eb4: 0xc070038  jal         func_1C00E0
label_155eb8:
    if (ctx->pc == 0x155EB8u) {
        ctx->pc = 0x155EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EB4u;
        // 0x155eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155EBCu;
        goto label_155ebc;
    }
    ctx->pc = 0x155EB4u;
    SET_GPR_U32(ctx, 31, 0x155EBCu);
    ctx->pc = 0x155EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EB4u;
    // 0x155eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x155EBCu;
label_155ebc:
    // 0x155ebc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_155ec0:
    // 0x155ec0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155ec4:
    // 0x155ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155ec8:
    // 0x155ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155ecc:
    // 0x155ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155ed0:
    // 0x155ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155ed4:
    // 0x155ed4: 0x3e00008  jr          $ra
label_155ed8:
    if (ctx->pc == 0x155ED8u) {
        ctx->pc = 0x155ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ED4u;
        // 0x155ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155EDCu;
        goto label_155edc;
    }
    ctx->pc = 0x155ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155ED4u;
        // 0x155ed8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155EDCu;
label_155edc:
    // 0x155edc: 0x0  nop
    ctx->pc = 0x155edcu;
    // NOP
label_155ee0:
    // 0x155ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155ee4:
    // 0x155ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155ee8:
    // 0x155ee8: 0xc0557c8  jal         func_155F20
label_155eec:
    if (ctx->pc == 0x155EECu) {
        ctx->pc = 0x155EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155EE8u;
        // 0x155eec: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155EF0u;
        goto label_155ef0;
    }
    ctx->pc = 0x155EE8u;
    SET_GPR_U32(ctx, 31, 0x155EF0u);
    ctx->pc = 0x155EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EE8u;
    // 0x155eec: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F20u;
    goto label_155f20;
    ctx->pc = 0x155EF0u;
label_155ef0:
    // 0x155ef0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x155ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_155ef4:
    // 0x155ef4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_155ef8:
    // 0x155ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_155efc:
    if (ctx->pc == 0x155EFCu) {
        ctx->pc = 0x155F00u;
        goto label_155f00;
    }
    ctx->pc = 0x155EF8u;
    {
        const bool branch_taken_0x155ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ef8) {
            ctx->pc = 0x155F08u;
            goto label_155f08;
        }
    }
    ctx->pc = 0x155F00u;
label_155f00:
    // 0x155f00: 0xc0557c8  jal         func_155F20
label_155f04:
    if (ctx->pc == 0x155F04u) {
        ctx->pc = 0x155F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F00u;
        // 0x155f04: 0x8f8480d4  lw          $a0, -0x7F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F08u;
        goto label_155f08;
    }
    ctx->pc = 0x155F00u;
    SET_GPR_U32(ctx, 31, 0x155F08u);
    ctx->pc = 0x155F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F00u;
    // 0x155f04: 0x8f8480d4  lw          $a0, -0x7F2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F20u;
    goto label_155f20;
    ctx->pc = 0x155F08u;
label_155f08:
    // 0x155f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155f0c:
    // 0x155f0c: 0x3e00008  jr          $ra
label_155f10:
    if (ctx->pc == 0x155F10u) {
        ctx->pc = 0x155F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F0Cu;
        // 0x155f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F14u;
        goto label_155f14;
    }
    ctx->pc = 0x155F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F0Cu;
        // 0x155f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F14u;
label_155f14:
    // 0x155f14: 0x0  nop
    ctx->pc = 0x155f14u;
    // NOP
label_155f18:
    // 0x155f18: 0x0  nop
    ctx->pc = 0x155f18u;
    // NOP
label_155f1c:
    // 0x155f1c: 0x0  nop
    ctx->pc = 0x155f1cu;
    // NOP
label_155f20:
    // 0x155f20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_155f24:
    // 0x155f24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x155f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_155f28:
    // 0x155f28: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x155f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_155f2c:
    // 0x155f2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x155f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_155f30:
    // 0x155f30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x155f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_155f34:
    // 0x155f34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x155f34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f38:
    // 0x155f38: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x155f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_155f3c:
    // 0x155f3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x155f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_155f40:
    // 0x155f40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x155f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_155f44:
    // 0x155f44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x155f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_155f48:
    // 0x155f48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_155f4c:
    // 0x155f4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_155f50:
    // 0x155f50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x155f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_155f54:
    // 0x155f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155f58:
    // 0x155f58: 0x0  nop
    ctx->pc = 0x155f58u;
    // NOP
label_155f5c:
    // 0x155f5c: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_155f60:
    // 0x155f60: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_155f64:
    if (ctx->pc == 0x155F64u) {
        ctx->pc = 0x155F68u;
        goto label_155f68;
    }
    ctx->pc = 0x155F60u;
    {
        const bool branch_taken_0x155f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f60) {
            ctx->pc = 0x156194u;
            { ctx->pc = 0x156194; return; }
        }
    }
    ctx->pc = 0x155F68u;
label_155f68:
    // 0x155f68: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x155f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_155f6c:
    // 0x155f6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f70:
    // 0x155f70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x155f70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f74:
    // 0x155f74: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x155f74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f78:
    // 0x155f78: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x155f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_155f7c:
    // 0x155f7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_155f80:
    // 0x155f80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_155f84:
    // 0x155f84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_155f88:
    // 0x155f88: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_155f8c:
    if (ctx->pc == 0x155F8Cu) {
        ctx->pc = 0x155F90u;
        goto label_155f90;
    }
    ctx->pc = 0x155F88u;
    {
        const bool branch_taken_0x155f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155f88) {
            ctx->pc = 0x156174u;
            { ctx->pc = 0x156174; return; }
        }
    }
    ctx->pc = 0x155F90u;
label_155f90:
    // 0x155f90: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x155f90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_155f94:
    // 0x155f94: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x155f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_155f98:
    // 0x155f98: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_155f9c:
    if (ctx->pc == 0x155F9Cu) {
        ctx->pc = 0x155F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F98u;
        // 0x155f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FA0u;
        goto label_155fa0;
    }
    ctx->pc = 0x155F98u;
    {
        const bool branch_taken_0x155f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F98u;
        // 0x155f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f98) {
            ctx->pc = 0x155FA4u;
            goto label_155fa4;
        }
    }
    ctx->pc = 0x155FA0u;
label_155fa0:
    // 0x155fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155fa4:
    // 0x155fa4: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_155fa8:
    if (ctx->pc == 0x155FA8u) {
        ctx->pc = 0x155FACu;
        goto label_155fac;
    }
    ctx->pc = 0x155FA4u;
    {
        const bool branch_taken_0x155fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155fa4) {
            ctx->pc = 0x156174u;
            { ctx->pc = 0x156174; return; }
        }
    }
    ctx->pc = 0x155FACu;
label_155fac:
    // 0x155fac: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x155facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_155fb0:
    // 0x155fb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155fb4:
    // 0x155fb4: 0x9065001c  lbu         $a1, 0x1C($v1)
    ctx->pc = 0x155fb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_155fb8:
    // 0x155fb8: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_155fbc:
    if (ctx->pc == 0x155FBCu) {
        ctx->pc = 0x155FC0u;
        goto label_155fc0;
    }
    ctx->pc = 0x155FB8u;
    {
        const bool branch_taken_0x155fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x155fb8) {
            ctx->pc = 0x155FD4u;
            goto label_155fd4;
        }
    }
    ctx->pc = 0x155FC0u;
label_155fc0:
    // 0x155fc0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_155fc4:
    // 0x155fc4: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x155fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_155fc8:
    // 0x155fc8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_155fcc:
    // 0x155fcc: 0x14800069  bnez        $a0, . + 4 + (0x69 << 2)
label_155fd0:
    if (ctx->pc == 0x155FD0u) {
        ctx->pc = 0x155FD4u;
        goto label_155fd4;
    }
    ctx->pc = 0x155FCCu;
    {
        const bool branch_taken_0x155fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x155fcc) {
            ctx->pc = 0x156174u;
            { ctx->pc = 0x156174; return; }
        }
    }
    ctx->pc = 0x155FD4u;
label_155fd4:
    // 0x155fd4: 0x0  nop
    ctx->pc = 0x155fd4u;
    // NOP
label_155fd8:
    // 0x155fd8: 0x9064000d  lbu         $a0, 0xD($v1)
    ctx->pc = 0x155fd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
label_155fdc:
    // 0x155fdc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_155fe0:
    if (ctx->pc == 0x155FE0u) {
        ctx->pc = 0x155FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FDCu;
        // 0x155fe0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FE4u;
        goto label_155fe4;
    }
    ctx->pc = 0x155FDCu;
    {
        const bool branch_taken_0x155fdc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x155FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FDCu;
        // 0x155fe0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fdc) {
            ctx->pc = 0x155FF0u;
            goto label_155ff0;
        }
    }
    ctx->pc = 0x155FE4u;
label_155fe4:
    // 0x155fe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x155fe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155fe8:
    // 0x155fe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_155fec:
    if (ctx->pc == 0x155FECu) {
        ctx->pc = 0x155FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FE8u;
        // 0x155fec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FF0u;
        goto label_155ff0;
    }
    ctx->pc = 0x155FE8u;
    {
        const bool branch_taken_0x155fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FE8u;
        // 0x155fec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fe8) {
            ctx->pc = 0x156008u;
            goto label_156008;
        }
    }
    ctx->pc = 0x155FF0u;
label_155ff0:
    // 0x155ff0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x155ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_155ff4:
    // 0x155ff4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x155ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_155ff8:
    // 0x155ff8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x155ff8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155ffc:
    // 0x155ffc: 0x0  nop
    ctx->pc = 0x155ffcu;
    // NOP
label_156000:
    // 0x156000: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x156000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_156004:
    // 0x156004: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x156004u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_156008:
    // 0x156008: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_15600c:
    // 0x15600c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15600cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_156010:
    // 0x156010: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x156010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156014:
    // 0x156014: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x156014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_156018:
    // 0x156018: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15601c:
    // 0x15601c: 0x0  nop
    ctx->pc = 0x15601cu;
    // NOP
label_156020:
    // 0x156020: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_156024:
    if (ctx->pc == 0x156024u) {
        ctx->pc = 0x156028u;
        goto label_156028;
    }
    ctx->pc = 0x156020u;
    {
        const bool branch_taken_0x156020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156020) {
            ctx->pc = 0x156174u;
            { ctx->pc = 0x156174; return; }
        }
    }
    ctx->pc = 0x156028u;
label_156028:
    // 0x156028: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15602c:
    // 0x15602c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_156030:
    // 0x156030: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x156030u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_156034:
    // 0x156034: 0x2a52807  srav        $a1, $a1, $s5
    ctx->pc = 0x156034u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 21) & 0x1F));
label_156038:
    // 0x156038: 0x30a6000f  andi        $a2, $a1, 0xF
    ctx->pc = 0x156038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_15603c:
    // 0x15603c: 0x10c0004d  beqz        $a2, . + 4 + (0x4D << 2)
label_156040:
    if (ctx->pc == 0x156040u) {
        ctx->pc = 0x156040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15603Cu;
        // 0x156040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156044u;
        goto label_156044;
    }
    ctx->pc = 0x15603Cu;
    {
        const bool branch_taken_0x15603c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x156040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15603Cu;
        // 0x156040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15603c) {
            ctx->pc = 0x156174u;
            { ctx->pc = 0x156174; return; }
        }
    }
    ctx->pc = 0x156044u;
label_156044:
    // 0x156044: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
label_156048:
    if (ctx->pc == 0x156048u) {
        ctx->pc = 0x15604Cu;
        goto label_15604c;
    }
    ctx->pc = 0x156044u;
    {
        const bool branch_taken_0x156044 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x156044) {
            ctx->pc = 0x15605Cu;
            goto label_15605c;
        }
    }
    ctx->pc = 0x15604Cu;
label_15604c:
    // 0x15604c: 0x2152821  addu        $a1, $s0, $s5
    ctx->pc = 0x15604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_156050:
    // 0x156050: 0x8cb32110  lw          $s3, 0x2110($a1)
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8464)));
label_156054:
    // 0x156054: 0x10000016  b           . + 4 + (0x16 << 2)
label_156058:
    if (ctx->pc == 0x156058u) {
        ctx->pc = 0x156058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156054u;
        // 0x156058: 0x8cb42118  lw          $s4, 0x2118($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15605Cu;
        goto label_15605c;
    }
    ctx->pc = 0x156054u;
    {
        const bool branch_taken_0x156054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156054u;
        // 0x156058: 0x8cb42118  lw          $s4, 0x2118($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156054) {
            ctx->pc = 0x1560B0u;
            goto label_1560b0;
        }
    }
    ctx->pc = 0x15605Cu;
label_15605c:
    // 0x15605c: 0x0  nop
    ctx->pc = 0x15605cu;
    // NOP
label_156060:
    // 0x156060: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_156064:
    // 0x156064: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x156064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_156068:
    // 0x156068: 0x24a50188  addiu       $a1, $a1, 0x188
    ctx->pc = 0x156068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 392));
label_15606c:
    // 0x15606c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_156070:
    // 0x156070: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_156074:
    // 0x156074: 0x80a9ffff  lb          $t1, -0x1($a1)
    ctx->pc = 0x156074u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
label_156078:
    // 0x156078: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x156078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_15607c:
    // 0x15607c: 0x24e7b170  addiu       $a3, $a3, -0x4E90
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947184));
label_156080:
    // 0x156080: 0x91080242  lbu         $t0, 0x242($t0)
    ctx->pc = 0x156080u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 578)));
label_156084:
    // 0x156084: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_156088:
    // 0x156088: 0x132a021  addu        $s4, $t1, $s2
    ctx->pc = 0x156088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
label_15608c:
    // 0x15608c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_156090:
    // 0x156090: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_156094:
    // 0x156094: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_156098:
    // 0x156098: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x156098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_15609c:
    // 0x15609c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1560a0:
    // 0x1560a0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1560a4:
    // 0x1560a4: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1560a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1560a8:
    // 0x1560a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1560ac:
    // 0x1560ac: 0x24b30040  addiu       $s3, $a1, 0x40
    ctx->pc = 0x1560acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_1560b0:
    // 0x1560b0: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_1560b4:
    if (ctx->pc == 0x1560B4u) {
        ctx->pc = 0x1560B8u;
        goto label_1560b8;
    }
    ctx->pc = 0x1560B0u;
    {
        const bool branch_taken_0x1560b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1560b0) {
            ctx->pc = 0x156180u;
            { ctx->pc = 0x156180; return; }
        }
    }
    ctx->pc = 0x1560B8u;
label_1560b8:
    // 0x1560b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1560bc:
    // 0x1560bc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1560bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1560c0:
    // 0x1560c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1560c4:
    if (ctx->pc == 0x1560C4u) {
        ctx->pc = 0x1560C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560C0u;
        // 0x1560c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560C8u;
        goto label_1560c8;
    }
    ctx->pc = 0x1560C0u;
    {
        const bool branch_taken_0x1560c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560C0u;
        // 0x1560c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560c0) {
            ctx->pc = 0x1560D8u;
            { ctx->pc = 0x1560d8; return; }
        }
    }
    ctx->pc = 0x1560C8u;
label_1560c8:
    // 0x1560c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1560cc:
    // 0x1560cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1560ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1560d0u;
    return;
}
