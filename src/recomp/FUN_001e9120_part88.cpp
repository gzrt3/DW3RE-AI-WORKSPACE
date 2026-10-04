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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2138d0u: goto label_2138d0;
        case 0x2138d4u: goto label_2138d4;
        case 0x2138d8u: goto label_2138d8;
        case 0x2138dcu: goto label_2138dc;
        case 0x2138e0u: goto label_2138e0;
        case 0x2138e4u: goto label_2138e4;
        case 0x2138e8u: goto label_2138e8;
        case 0x2138ecu: goto label_2138ec;
        case 0x2138f0u: goto label_2138f0;
        case 0x2138f4u: goto label_2138f4;
        case 0x2138f8u: goto label_2138f8;
        case 0x2138fcu: goto label_2138fc;
        case 0x213900u: goto label_213900;
        case 0x213904u: goto label_213904;
        case 0x213908u: goto label_213908;
        case 0x21390cu: goto label_21390c;
        case 0x213910u: goto label_213910;
        case 0x213914u: goto label_213914;
        case 0x213918u: goto label_213918;
        case 0x21391cu: goto label_21391c;
        case 0x213920u: goto label_213920;
        case 0x213924u: goto label_213924;
        case 0x213928u: goto label_213928;
        case 0x21392cu: goto label_21392c;
        case 0x213930u: goto label_213930;
        case 0x213934u: goto label_213934;
        case 0x213938u: goto label_213938;
        case 0x21393cu: goto label_21393c;
        case 0x213940u: goto label_213940;
        case 0x213944u: goto label_213944;
        case 0x213948u: goto label_213948;
        case 0x21394cu: goto label_21394c;
        case 0x213950u: goto label_213950;
        case 0x213954u: goto label_213954;
        case 0x213958u: goto label_213958;
        case 0x21395cu: goto label_21395c;
        case 0x213960u: goto label_213960;
        case 0x213964u: goto label_213964;
        case 0x213968u: goto label_213968;
        case 0x21396cu: goto label_21396c;
        case 0x213970u: goto label_213970;
        case 0x213974u: goto label_213974;
        case 0x213978u: goto label_213978;
        case 0x21397cu: goto label_21397c;
        case 0x213980u: goto label_213980;
        case 0x213984u: goto label_213984;
        case 0x213988u: goto label_213988;
        case 0x21398cu: goto label_21398c;
        case 0x213990u: goto label_213990;
        case 0x213994u: goto label_213994;
        case 0x213998u: goto label_213998;
        case 0x21399cu: goto label_21399c;
        case 0x2139a0u: goto label_2139a0;
        case 0x2139a4u: goto label_2139a4;
        case 0x2139a8u: goto label_2139a8;
        case 0x2139acu: goto label_2139ac;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139b4u: goto label_2139b4;
        case 0x2139b8u: goto label_2139b8;
        case 0x2139bcu: goto label_2139bc;
        case 0x2139c0u: goto label_2139c0;
        case 0x2139c4u: goto label_2139c4;
        case 0x2139c8u: goto label_2139c8;
        case 0x2139ccu: goto label_2139cc;
        case 0x2139d0u: goto label_2139d0;
        case 0x2139d4u: goto label_2139d4;
        case 0x2139d8u: goto label_2139d8;
        case 0x2139dcu: goto label_2139dc;
        case 0x2139e0u: goto label_2139e0;
        case 0x2139e4u: goto label_2139e4;
        case 0x2139e8u: goto label_2139e8;
        case 0x2139ecu: goto label_2139ec;
        case 0x2139f0u: goto label_2139f0;
        case 0x2139f4u: goto label_2139f4;
        case 0x2139f8u: goto label_2139f8;
        case 0x2139fcu: goto label_2139fc;
        case 0x213a00u: goto label_213a00;
        case 0x213a04u: goto label_213a04;
        case 0x213a08u: goto label_213a08;
        case 0x213a0cu: goto label_213a0c;
        case 0x213a10u: goto label_213a10;
        case 0x213a14u: goto label_213a14;
        case 0x213a18u: goto label_213a18;
        case 0x213a1cu: goto label_213a1c;
        case 0x213a20u: goto label_213a20;
        case 0x213a24u: goto label_213a24;
        case 0x213a28u: goto label_213a28;
        case 0x213a2cu: goto label_213a2c;
        case 0x213a30u: goto label_213a30;
        case 0x213a34u: goto label_213a34;
        case 0x213a38u: goto label_213a38;
        case 0x213a3cu: goto label_213a3c;
        case 0x213a40u: goto label_213a40;
        case 0x213a44u: goto label_213a44;
        case 0x213a48u: goto label_213a48;
        case 0x213a4cu: goto label_213a4c;
        case 0x213a50u: goto label_213a50;
        case 0x213a54u: goto label_213a54;
        case 0x213a58u: goto label_213a58;
        case 0x213a5cu: goto label_213a5c;
        case 0x213a60u: goto label_213a60;
        case 0x213a64u: goto label_213a64;
        case 0x213a68u: goto label_213a68;
        case 0x213a6cu: goto label_213a6c;
        case 0x213a70u: goto label_213a70;
        case 0x213a74u: goto label_213a74;
        case 0x213a78u: goto label_213a78;
        case 0x213a7cu: goto label_213a7c;
        case 0x213a80u: goto label_213a80;
        case 0x213a84u: goto label_213a84;
        case 0x213a88u: goto label_213a88;
        case 0x213a8cu: goto label_213a8c;
        case 0x213a90u: goto label_213a90;
        case 0x213a94u: goto label_213a94;
        case 0x213a98u: goto label_213a98;
        case 0x213a9cu: goto label_213a9c;
        case 0x213aa0u: goto label_213aa0;
        case 0x213aa4u: goto label_213aa4;
        case 0x213aa8u: goto label_213aa8;
        case 0x213aacu: goto label_213aac;
        case 0x213ab0u: goto label_213ab0;
        case 0x213ab4u: goto label_213ab4;
        case 0x213ab8u: goto label_213ab8;
        case 0x213abcu: goto label_213abc;
        case 0x213ac0u: goto label_213ac0;
        case 0x213ac4u: goto label_213ac4;
        case 0x213ac8u: goto label_213ac8;
        case 0x213accu: goto label_213acc;
        case 0x213ad0u: goto label_213ad0;
        case 0x213ad4u: goto label_213ad4;
        case 0x213ad8u: goto label_213ad8;
        case 0x213adcu: goto label_213adc;
        case 0x213ae0u: goto label_213ae0;
        case 0x213ae4u: goto label_213ae4;
        case 0x213ae8u: goto label_213ae8;
        case 0x213aecu: goto label_213aec;
        case 0x213af0u: goto label_213af0;
        case 0x213af4u: goto label_213af4;
        case 0x213af8u: goto label_213af8;
        case 0x213afcu: goto label_213afc;
        case 0x213b00u: goto label_213b00;
        case 0x213b04u: goto label_213b04;
        case 0x213b08u: goto label_213b08;
        case 0x213b0cu: goto label_213b0c;
        case 0x213b10u: goto label_213b10;
        case 0x213b14u: goto label_213b14;
        case 0x213b18u: goto label_213b18;
        case 0x213b1cu: goto label_213b1c;
        case 0x213b20u: goto label_213b20;
        case 0x213b24u: goto label_213b24;
        case 0x213b28u: goto label_213b28;
        case 0x213b2cu: goto label_213b2c;
        case 0x213b30u: goto label_213b30;
        case 0x213b34u: goto label_213b34;
        case 0x213b38u: goto label_213b38;
        case 0x213b3cu: goto label_213b3c;
        case 0x213b40u: goto label_213b40;
        case 0x213b44u: goto label_213b44;
        case 0x213b48u: goto label_213b48;
        case 0x213b4cu: goto label_213b4c;
        case 0x213b50u: goto label_213b50;
        case 0x213b54u: goto label_213b54;
        case 0x213b58u: goto label_213b58;
        case 0x213b5cu: goto label_213b5c;
        case 0x213b60u: goto label_213b60;
        case 0x213b64u: goto label_213b64;
        case 0x213b68u: goto label_213b68;
        case 0x213b6cu: goto label_213b6c;
        case 0x213b70u: goto label_213b70;
        case 0x213b74u: goto label_213b74;
        case 0x213b78u: goto label_213b78;
        case 0x213b7cu: goto label_213b7c;
        case 0x213b80u: goto label_213b80;
        case 0x213b84u: goto label_213b84;
        case 0x213b88u: goto label_213b88;
        case 0x213b8cu: goto label_213b8c;
        case 0x213b90u: goto label_213b90;
        case 0x213b94u: goto label_213b94;
        case 0x213b98u: goto label_213b98;
        case 0x213b9cu: goto label_213b9c;
        case 0x213ba0u: goto label_213ba0;
        case 0x213ba4u: goto label_213ba4;
        case 0x213ba8u: goto label_213ba8;
        case 0x213bacu: goto label_213bac;
        case 0x213bb0u: goto label_213bb0;
        case 0x213bb4u: goto label_213bb4;
        case 0x213bb8u: goto label_213bb8;
        case 0x213bbcu: goto label_213bbc;
        case 0x213bc0u: goto label_213bc0;
        case 0x213bc4u: goto label_213bc4;
        case 0x213bc8u: goto label_213bc8;
        case 0x213bccu: goto label_213bcc;
        case 0x213bd0u: goto label_213bd0;
        case 0x213bd4u: goto label_213bd4;
        case 0x213bd8u: goto label_213bd8;
        case 0x213bdcu: goto label_213bdc;
        case 0x213be0u: goto label_213be0;
        case 0x213be4u: goto label_213be4;
        case 0x213be8u: goto label_213be8;
        case 0x213becu: goto label_213bec;
        case 0x213bf0u: goto label_213bf0;
        case 0x213bf4u: goto label_213bf4;
        case 0x213bf8u: goto label_213bf8;
        case 0x213bfcu: goto label_213bfc;
        case 0x213c00u: goto label_213c00;
        case 0x213c04u: goto label_213c04;
        case 0x213c08u: goto label_213c08;
        case 0x213c0cu: goto label_213c0c;
        case 0x213c10u: goto label_213c10;
        case 0x213c14u: goto label_213c14;
        case 0x213c18u: goto label_213c18;
        case 0x213c1cu: goto label_213c1c;
        case 0x213c20u: goto label_213c20;
        case 0x213c24u: goto label_213c24;
        case 0x213c28u: goto label_213c28;
        case 0x213c2cu: goto label_213c2c;
        case 0x213c30u: goto label_213c30;
        case 0x213c34u: goto label_213c34;
        case 0x213c38u: goto label_213c38;
        case 0x213c3cu: goto label_213c3c;
        case 0x213c40u: goto label_213c40;
        case 0x213c44u: goto label_213c44;
        case 0x213c48u: goto label_213c48;
        case 0x213c4cu: goto label_213c4c;
        case 0x213c50u: goto label_213c50;
        case 0x213c54u: goto label_213c54;
        case 0x213c58u: goto label_213c58;
        case 0x213c5cu: goto label_213c5c;
        case 0x213c60u: goto label_213c60;
        case 0x213c64u: goto label_213c64;
        case 0x213c68u: goto label_213c68;
        case 0x213c6cu: goto label_213c6c;
        case 0x213c70u: goto label_213c70;
        case 0x213c74u: goto label_213c74;
        case 0x213c78u: goto label_213c78;
        case 0x213c7cu: goto label_213c7c;
        case 0x213c80u: goto label_213c80;
        case 0x213c84u: goto label_213c84;
        case 0x213c88u: goto label_213c88;
        case 0x213c8cu: goto label_213c8c;
        case 0x213c90u: goto label_213c90;
        case 0x213c94u: goto label_213c94;
        case 0x213c98u: goto label_213c98;
        case 0x213c9cu: goto label_213c9c;
        case 0x213ca0u: goto label_213ca0;
        case 0x213ca4u: goto label_213ca4;
        case 0x213ca8u: goto label_213ca8;
        case 0x213cacu: goto label_213cac;
        case 0x213cb0u: goto label_213cb0;
        case 0x213cb4u: goto label_213cb4;
        case 0x213cb8u: goto label_213cb8;
        case 0x213cbcu: goto label_213cbc;
        case 0x213cc0u: goto label_213cc0;
        case 0x213cc4u: goto label_213cc4;
        case 0x213cc8u: goto label_213cc8;
        case 0x213cccu: goto label_213ccc;
        case 0x213cd0u: goto label_213cd0;
        case 0x213cd4u: goto label_213cd4;
        case 0x213cd8u: goto label_213cd8;
        case 0x213cdcu: goto label_213cdc;
        case 0x213ce0u: goto label_213ce0;
        case 0x213ce4u: goto label_213ce4;
        case 0x213ce8u: goto label_213ce8;
        case 0x213cecu: goto label_213cec;
        case 0x213cf0u: goto label_213cf0;
        case 0x213cf4u: goto label_213cf4;
        case 0x213cf8u: goto label_213cf8;
        case 0x213cfcu: goto label_213cfc;
        case 0x213d00u: goto label_213d00;
        case 0x213d04u: goto label_213d04;
        case 0x213d08u: goto label_213d08;
        case 0x213d0cu: goto label_213d0c;
        case 0x213d10u: goto label_213d10;
        case 0x213d14u: goto label_213d14;
        case 0x213d18u: goto label_213d18;
        case 0x213d1cu: goto label_213d1c;
        case 0x213d20u: goto label_213d20;
        case 0x213d24u: goto label_213d24;
        case 0x213d28u: goto label_213d28;
        case 0x213d2cu: goto label_213d2c;
        case 0x213d30u: goto label_213d30;
        case 0x213d34u: goto label_213d34;
        case 0x213d38u: goto label_213d38;
        case 0x213d3cu: goto label_213d3c;
        case 0x213d40u: goto label_213d40;
        case 0x213d44u: goto label_213d44;
        case 0x213d48u: goto label_213d48;
        case 0x213d4cu: goto label_213d4c;
        case 0x213d50u: goto label_213d50;
        case 0x213d54u: goto label_213d54;
        case 0x213d58u: goto label_213d58;
        case 0x213d5cu: goto label_213d5c;
        case 0x213d60u: goto label_213d60;
        case 0x213d64u: goto label_213d64;
        case 0x213d68u: goto label_213d68;
        case 0x213d6cu: goto label_213d6c;
        case 0x213d70u: goto label_213d70;
        case 0x213d74u: goto label_213d74;
        case 0x213d78u: goto label_213d78;
        case 0x213d7cu: goto label_213d7c;
        case 0x213d80u: goto label_213d80;
        case 0x213d84u: goto label_213d84;
        case 0x213d88u: goto label_213d88;
        case 0x213d8cu: goto label_213d8c;
        case 0x213d90u: goto label_213d90;
        case 0x213d94u: goto label_213d94;
        case 0x213d98u: goto label_213d98;
        case 0x213d9cu: goto label_213d9c;
        case 0x213da0u: goto label_213da0;
        case 0x213da4u: goto label_213da4;
        case 0x213da8u: goto label_213da8;
        case 0x213dacu: goto label_213dac;
        case 0x213db0u: goto label_213db0;
        case 0x213db4u: goto label_213db4;
        case 0x213db8u: goto label_213db8;
        case 0x213dbcu: goto label_213dbc;
        case 0x213dc0u: goto label_213dc0;
        case 0x213dc4u: goto label_213dc4;
        case 0x213dc8u: goto label_213dc8;
        case 0x213dccu: goto label_213dcc;
        case 0x213dd0u: goto label_213dd0;
        case 0x213dd4u: goto label_213dd4;
        case 0x213dd8u: goto label_213dd8;
        case 0x213ddcu: goto label_213ddc;
        case 0x213de0u: goto label_213de0;
        case 0x213de4u: goto label_213de4;
        case 0x213de8u: goto label_213de8;
        case 0x213decu: goto label_213dec;
        case 0x213df0u: goto label_213df0;
        case 0x213df4u: goto label_213df4;
        case 0x213df8u: goto label_213df8;
        case 0x213dfcu: goto label_213dfc;
        case 0x213e00u: goto label_213e00;
        case 0x213e04u: goto label_213e04;
        case 0x213e08u: goto label_213e08;
        case 0x213e0cu: goto label_213e0c;
        case 0x213e10u: goto label_213e10;
        case 0x213e14u: goto label_213e14;
        case 0x213e18u: goto label_213e18;
        case 0x213e1cu: goto label_213e1c;
        case 0x213e20u: goto label_213e20;
        case 0x213e24u: goto label_213e24;
        case 0x213e28u: goto label_213e28;
        case 0x213e2cu: goto label_213e2c;
        case 0x213e30u: goto label_213e30;
        case 0x213e34u: goto label_213e34;
        case 0x213e38u: goto label_213e38;
        case 0x213e3cu: goto label_213e3c;
        case 0x213e40u: goto label_213e40;
        case 0x213e44u: goto label_213e44;
        case 0x213e48u: goto label_213e48;
        case 0x213e4cu: goto label_213e4c;
        case 0x213e50u: goto label_213e50;
        case 0x213e54u: goto label_213e54;
        case 0x213e58u: goto label_213e58;
        case 0x213e5cu: goto label_213e5c;
        case 0x213e60u: goto label_213e60;
        case 0x213e64u: goto label_213e64;
        case 0x213e68u: goto label_213e68;
        case 0x213e6cu: goto label_213e6c;
        case 0x213e70u: goto label_213e70;
        case 0x213e74u: goto label_213e74;
        case 0x213e78u: goto label_213e78;
        case 0x213e7cu: goto label_213e7c;
        case 0x213e80u: goto label_213e80;
        case 0x213e84u: goto label_213e84;
        case 0x213e88u: goto label_213e88;
        case 0x213e8cu: goto label_213e8c;
        case 0x213e90u: goto label_213e90;
        case 0x213e94u: goto label_213e94;
        case 0x213e98u: goto label_213e98;
        case 0x213e9cu: goto label_213e9c;
        case 0x213ea0u: goto label_213ea0;
        case 0x213ea4u: goto label_213ea4;
        case 0x213ea8u: goto label_213ea8;
        case 0x213eacu: goto label_213eac;
        case 0x213eb0u: goto label_213eb0;
        case 0x213eb4u: goto label_213eb4;
        case 0x213eb8u: goto label_213eb8;
        case 0x213ebcu: goto label_213ebc;
        case 0x213ec0u: goto label_213ec0;
        case 0x213ec4u: goto label_213ec4;
        case 0x213ec8u: goto label_213ec8;
        case 0x213eccu: goto label_213ecc;
        case 0x213ed0u: goto label_213ed0;
        case 0x213ed4u: goto label_213ed4;
        case 0x213ed8u: goto label_213ed8;
        case 0x213edcu: goto label_213edc;
        case 0x213ee0u: goto label_213ee0;
        case 0x213ee4u: goto label_213ee4;
        case 0x213ee8u: goto label_213ee8;
        case 0x213eecu: goto label_213eec;
        case 0x213ef0u: goto label_213ef0;
        case 0x213ef4u: goto label_213ef4;
        case 0x213ef8u: goto label_213ef8;
        case 0x213efcu: goto label_213efc;
        case 0x213f00u: goto label_213f00;
        case 0x213f04u: goto label_213f04;
        case 0x213f08u: goto label_213f08;
        case 0x213f0cu: goto label_213f0c;
        case 0x213f10u: goto label_213f10;
        case 0x213f14u: goto label_213f14;
        case 0x213f18u: goto label_213f18;
        case 0x213f1cu: goto label_213f1c;
        case 0x213f20u: goto label_213f20;
        case 0x213f24u: goto label_213f24;
        case 0x213f28u: goto label_213f28;
        case 0x213f2cu: goto label_213f2c;
        case 0x213f30u: goto label_213f30;
        case 0x213f34u: goto label_213f34;
        case 0x213f38u: goto label_213f38;
        case 0x213f3cu: goto label_213f3c;
        case 0x213f40u: goto label_213f40;
        case 0x213f44u: goto label_213f44;
        case 0x213f48u: goto label_213f48;
        case 0x213f4cu: goto label_213f4c;
        case 0x213f50u: goto label_213f50;
        case 0x213f54u: goto label_213f54;
        case 0x213f58u: goto label_213f58;
        case 0x213f5cu: goto label_213f5c;
        case 0x213f60u: goto label_213f60;
        case 0x213f64u: goto label_213f64;
        case 0x213f68u: goto label_213f68;
        case 0x213f6cu: goto label_213f6c;
        case 0x213f70u: goto label_213f70;
        case 0x213f74u: goto label_213f74;
        case 0x213f78u: goto label_213f78;
        case 0x213f7cu: goto label_213f7c;
        case 0x213f80u: goto label_213f80;
        case 0x213f84u: goto label_213f84;
        case 0x213f88u: goto label_213f88;
        case 0x213f8cu: goto label_213f8c;
        case 0x213f90u: goto label_213f90;
        case 0x213f94u: goto label_213f94;
        case 0x213f98u: goto label_213f98;
        case 0x213f9cu: goto label_213f9c;
        case 0x213fa0u: goto label_213fa0;
        case 0x213fa4u: goto label_213fa4;
        case 0x213fa8u: goto label_213fa8;
        case 0x213facu: goto label_213fac;
        case 0x213fb0u: goto label_213fb0;
        case 0x213fb4u: goto label_213fb4;
        case 0x213fb8u: goto label_213fb8;
        case 0x213fbcu: goto label_213fbc;
        case 0x213fc0u: goto label_213fc0;
        case 0x213fc4u: goto label_213fc4;
        case 0x213fc8u: goto label_213fc8;
        case 0x213fccu: goto label_213fcc;
        case 0x213fd0u: goto label_213fd0;
        case 0x213fd4u: goto label_213fd4;
        case 0x213fd8u: goto label_213fd8;
        case 0x213fdcu: goto label_213fdc;
        case 0x213fe0u: goto label_213fe0;
        case 0x213fe4u: goto label_213fe4;
        case 0x213fe8u: goto label_213fe8;
        case 0x213fecu: goto label_213fec;
        case 0x213ff0u: goto label_213ff0;
        case 0x213ff4u: goto label_213ff4;
        case 0x213ff8u: goto label_213ff8;
        case 0x213ffcu: goto label_213ffc;
        case 0x214000u: goto label_214000;
        case 0x214004u: goto label_214004;
        case 0x214008u: goto label_214008;
        case 0x21400cu: goto label_21400c;
        case 0x214010u: goto label_214010;
        case 0x214014u: goto label_214014;
        case 0x214018u: goto label_214018;
        case 0x21401cu: goto label_21401c;
        case 0x214020u: goto label_214020;
        case 0x214024u: goto label_214024;
        case 0x214028u: goto label_214028;
        case 0x21402cu: goto label_21402c;
        case 0x214030u: goto label_214030;
        case 0x214034u: goto label_214034;
        case 0x214038u: goto label_214038;
        case 0x21403cu: goto label_21403c;
        case 0x214040u: goto label_214040;
        case 0x214044u: goto label_214044;
        case 0x214048u: goto label_214048;
        case 0x21404cu: goto label_21404c;
        case 0x214050u: goto label_214050;
        case 0x214054u: goto label_214054;
        case 0x214058u: goto label_214058;
        case 0x21405cu: goto label_21405c;
        case 0x214060u: goto label_214060;
        case 0x214064u: goto label_214064;
        case 0x214068u: goto label_214068;
        case 0x21406cu: goto label_21406c;
        case 0x214070u: goto label_214070;
        case 0x214074u: goto label_214074;
        case 0x214078u: goto label_214078;
        case 0x21407cu: goto label_21407c;
        case 0x214080u: goto label_214080;
        case 0x214084u: goto label_214084;
        case 0x214088u: goto label_214088;
        case 0x21408cu: goto label_21408c;
        case 0x214090u: goto label_214090;
        case 0x214094u: goto label_214094;
        case 0x214098u: goto label_214098;
        case 0x21409cu: goto label_21409c;
        default: return;
    }

label_2138d0:
    // 0x2138d0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2138d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2138d4:
    // 0x2138d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2138d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2138d8:
    // 0x2138d8: 0x0  nop
    ctx->pc = 0x2138d8u;
    // NOP
label_2138dc:
    // 0x2138dc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2138dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_2138e0:
    // 0x2138e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2138e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2138e4:
    // 0x2138e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2138e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2138e8:
    // 0x2138e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2138e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2138ec:
    // 0x2138ec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2138ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2138f0:
    // 0x2138f0: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x2138f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_2138f4:
    // 0x2138f4: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x2138f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_2138f8:
    // 0x2138f8: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x2138f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_2138fc:
    // 0x2138fc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2138fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_213900:
    // 0x213900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x213900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_213904:
    // 0x213904: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x213904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_213908:
    // 0x213908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21390c:
    // 0x21390c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x21390cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_213910:
    // 0x213910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213914:
    // 0x213914: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x213914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_213918:
    // 0x213918: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x213918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_21391c:
    // 0x21391c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x21391cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_213920:
    // 0x213920: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x213920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_213924:
    // 0x213924: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x213924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_213928:
    // 0x213928: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21392c:
    // 0x21392c: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x21392cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_213930:
    // 0x213930: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x213930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_213934:
    // 0x213934: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x213934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
label_213938:
    // 0x213938: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_21393c:
    // 0x21393c: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x21393cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
label_213940:
    // 0x213940: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x213940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
label_213944:
    // 0x213944: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x213944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_213948:
    // 0x213948: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x213948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
label_21394c:
    // 0x21394c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_213950:
    if (ctx->pc == 0x213950u) {
        ctx->pc = 0x213950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21394Cu;
        // 0x213950: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213954u;
        goto label_213954;
    }
    ctx->pc = 0x21394Cu;
    {
        const bool branch_taken_0x21394c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21394Cu;
        // 0x213950: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21394c) {
            ctx->pc = 0x213920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213920;
        }
    }
    ctx->pc = 0x213954u;
label_213954:
    // 0x213954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213958:
    // 0x213958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21395c:
    // 0x21395c: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x21395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213960:
    // 0x213960: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x213960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213964:
    // 0x213964: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x213964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213968:
    // 0x213968: 0x0  nop
    ctx->pc = 0x213968u;
    // NOP
label_21396c:
    // 0x21396c: 0x0  nop
    ctx->pc = 0x21396cu;
    // NOP
label_213970:
    // 0x213970: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_213974:
    // 0x213974: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x213974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_213978:
    // 0x213978: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x213978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21397c:
    // 0x21397c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x21397cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_213980:
    // 0x213980: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x213980u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_213984:
    // 0x213984: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x213984u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_213988:
    // 0x213988: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x213988u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_21398c:
    // 0x21398c: 0x46020084  c1          0x20084
    ctx->pc = 0x21398cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_213990:
    // 0x213990: 0x0  nop
    ctx->pc = 0x213990u;
    // NOP
label_213994:
    // 0x213994: 0x0  nop
    ctx->pc = 0x213994u;
    // NOP
label_213998:
    // 0x213998: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x213998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21399c:
    // 0x21399c: 0x0  nop
    ctx->pc = 0x21399cu;
    // NOP
label_2139a0:
    // 0x2139a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2139a4:
    if (ctx->pc == 0x2139A4u) {
        ctx->pc = 0x2139A8u;
        goto label_2139a8;
    }
    ctx->pc = 0x2139A0u;
    {
        const bool branch_taken_0x2139a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2139a0) {
            ctx->pc = 0x2139ACu;
            goto label_2139ac;
        }
    }
    ctx->pc = 0x2139A8u;
label_2139a8:
    // 0x2139a8: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2139a8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_2139ac:
    // 0x2139ac: 0x0  nop
    ctx->pc = 0x2139acu;
    // NOP
label_2139b0:
    // 0x2139b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2139b4:
    // 0x2139b4: 0x28c304a5  slti        $v1, $a2, 0x4A5
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1189) ? 1 : 0);
label_2139b8:
    // 0x2139b8: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2139bc:
    if (ctx->pc == 0x2139BCu) {
        ctx->pc = 0x2139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139B8u;
        // 0x2139bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139C0u;
        goto label_2139c0;
    }
    ctx->pc = 0x2139B8u;
    {
        const bool branch_taken_0x2139b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139B8u;
        // 0x2139bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139b8) {
            ctx->pc = 0x21396Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21396c;
        }
    }
    ctx->pc = 0x2139C0u;
label_2139c0:
    // 0x2139c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2139c4:
    // 0x2139c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2139c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2139c8:
    // 0x2139c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2139c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2139cc:
    // 0x2139cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2139ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2139d0:
    // 0x2139d0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2139d0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2139d4:
    // 0x2139d4: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_2139d8:
    // 0x2139d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2139dc:
    // 0x2139dc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2139dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2139e0:
    // 0x2139e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2139e4:
    // 0x2139e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2139e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2139e8:
    // 0x2139e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2139e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2139ec:
    // 0x2139ec: 0x0  nop
    ctx->pc = 0x2139ecu;
    // NOP
label_2139f0:
    // 0x2139f0: 0x8f8391b0  lw          $v1, -0x6E50($gp)
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2139f4:
    // 0x2139f4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2139f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2139f8:
    // 0x2139f8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2139f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2139fc:
    // 0x2139fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_213a00:
    // 0x213a00: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x213a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_213a04:
    // 0x213a04: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x213a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_213a08:
    // 0x213a08: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x213a08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_213a0c:
    // 0x213a0c: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x213a0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_213a10:
    // 0x213a10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x213a10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_213a14:
    // 0x213a14: 0x4605289c  madd.s      $f2, $f5, $f5
    ctx->pc = 0x213a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_213a18:
    // 0x213a18: 0x46020084  c1          0x20084
    ctx->pc = 0x213a18u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_213a1c:
    // 0x213a1c: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x213a1cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[6];
label_213a20:
    // 0x213a20: 0x0  nop
    ctx->pc = 0x213a20u;
    // NOP
label_213a24:
    // 0x213a24: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x213a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_213a28:
    // 0x213a28: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x213a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_213a2c:
    // 0x213a2c: 0x0  nop
    ctx->pc = 0x213a2cu;
    // NOP
label_213a30:
    // 0x213a30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_213a34:
    if (ctx->pc == 0x213A34u) {
        ctx->pc = 0x213A38u;
        goto label_213a38;
    }
    ctx->pc = 0x213A30u;
    {
        const bool branch_taken_0x213a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213a30) {
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213A38u;
label_213a38:
    // 0x213a38: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_213a3c:
    // 0x213a3c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x213a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_213a40:
    // 0x213a40: 0x10000007  b           . + 4 + (0x7 << 2)
label_213a44:
    if (ctx->pc == 0x213A44u) {
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x2281821  addu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A48u;
        goto label_213a48;
    }
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x2281821  addu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213A60u;
            goto label_213a60;
        }
    }
    ctx->pc = 0x213A48u;
label_213a48:
    // 0x213a48: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x213a48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_213a4c:
    // 0x213a4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_213a50:
    // 0x213a50: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x213a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_213a54:
    // 0x213a54: 0x0  nop
    ctx->pc = 0x213a54u;
    // NOP
label_213a58:
    // 0x213a58: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x213a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_213a5c:
    // 0x213a5c: 0x2281821  addu        $v1, $s1, $t0
    ctx->pc = 0x213a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_213a60:
    // 0x213a60: 0xa0660228  sb          $a2, 0x228($v1)
    ctx->pc = 0x213a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 552), (uint8_t)GPR_U32(ctx, 6));
label_213a64:
    // 0x213a64: 0x24660228  addiu       $a2, $v1, 0x228
    ctx->pc = 0x213a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 552));
label_213a68:
    // 0x213a68: 0x90630228  lbu         $v1, 0x228($v1)
    ctx->pc = 0x213a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 552)));
label_213a6c:
    // 0x213a6c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_213a70:
    if (ctx->pc == 0x213A70u) {
        ctx->pc = 0x213A74u;
        goto label_213a74;
    }
    ctx->pc = 0x213A6Cu;
    {
        const bool branch_taken_0x213a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213a6c) {
            ctx->pc = 0x213A78u;
            goto label_213a78;
        }
    }
    ctx->pc = 0x213A74u;
label_213a74:
    // 0x213a74: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x213a74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_213a78:
    // 0x213a78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_213a7c:
    // 0x213a7c: 0x290304a5  slti        $v1, $t0, 0x4A5
    ctx->pc = 0x213a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1189) ? 1 : 0);
label_213a80:
    // 0x213a80: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_213a84:
    if (ctx->pc == 0x213A84u) {
        ctx->pc = 0x213A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A80u;
        // 0x213a84: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A88u;
        goto label_213a88;
    }
    ctx->pc = 0x213A80u;
    {
        const bool branch_taken_0x213a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A80u;
        // 0x213a84: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a80) {
            ctx->pc = 0x2139ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2139ec;
        }
    }
    ctx->pc = 0x213A88u;
label_213a88:
    // 0x213a88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_213a8c:
    // 0x213a8c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x213a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_213a90:
    // 0x213a90: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
label_213a94:
    if (ctx->pc == 0x213A94u) {
        ctx->pc = 0x213A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A90u;
        // 0x213a94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A98u;
        goto label_213a98;
    }
    ctx->pc = 0x213A90u;
    {
        const bool branch_taken_0x213a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A90u;
        // 0x213a94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a90) {
            ctx->pc = 0x21380Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21380c; return; }
        }
    }
    ctx->pc = 0x213A98u;
label_213a98:
    // 0x213a98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x213a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_213a9c:
    // 0x213a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x213a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_213aa0:
    // 0x213aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x213aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213aa4:
    // 0x213aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x213aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213aa8:
    // 0x213aa8: 0x3e00008  jr          $ra
label_213aac:
    if (ctx->pc == 0x213AACu) {
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AA8u;
        // 0x213aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213AB0u;
        goto label_213ab0;
    }
    ctx->pc = 0x213AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AA8u;
        // 0x213aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213AB0u;
label_213ab0:
    // 0x213ab0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_213ab4:
    // 0x213ab4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x213ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_213ab8:
    // 0x213ab8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x213ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_213abc:
    // 0x213abc: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x213abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_213ac0:
    // 0x213ac0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x213ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_213ac4:
    // 0x213ac4: 0x278291a8  addiu       $v0, $gp, -0x6E58
    ctx->pc = 0x213ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939048));
label_213ac8:
    // 0x213ac8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x213ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_213acc:
    // 0x213acc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x213accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_213ad0:
    // 0x213ad0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x213ad0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213ad4:
    // 0x213ad4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x213ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_213ad8:
    // 0x213ad8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213ad8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213adc:
    // 0x213adc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x213adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_213ae0:
    // 0x213ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_213ae4:
    // 0x213ae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213ae8:
    // 0x213ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_213aec:
    // 0x213aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213af0:
    // 0x213af0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x213af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_213af4:
    // 0x213af4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_213af8:
    // 0x213af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_213afc:
    // 0x213afc: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x213afcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_213b00:
    // 0x213b00: 0x0  nop
    ctx->pc = 0x213b00u;
    // NOP
label_213b04:
    // 0x213b04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213b08:
    // 0x213b08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213b0c:
    // 0x213b0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213b10:
    // 0x213b10: 0x8f8691b0  lw          $a2, -0x6E50($gp)
    ctx->pc = 0x213b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213b14:
    // 0x213b14: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x213b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_213b18:
    // 0x213b18: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x213b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_213b1c:
    // 0x213b1c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x213b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_213b20:
    // 0x213b20: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x213b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_213b24:
    // 0x213b24: 0x34634e68  ori         $v1, $v1, 0x4E68
    ctx->pc = 0x213b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20072);
label_213b28:
    // 0x213b28: 0x24a57810  addiu       $a1, $a1, 0x7810
    ctx->pc = 0x213b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
label_213b2c:
    // 0x213b2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x213b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213b30:
    // 0x213b30: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x213b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_213b34:
    // 0x213b34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x213b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_213b38:
    // 0x213b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_213b3c:
    // 0x213b3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x213b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_213b40:
    // 0x213b40: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_213b44:
    // 0x213b44: 0xc06703a  jal         func_19C0E8
label_213b48:
    if (ctx->pc == 0x213B48u) {
        ctx->pc = 0x213B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B44u;
        // 0x213b48: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213B4Cu;
        goto label_213b4c;
    }
    ctx->pc = 0x213B44u;
    SET_GPR_U32(ctx, 31, 0x213B4Cu);
    ctx->pc = 0x213B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B44u;
    // 0x213b48: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C0E8u, 0x213B44u, 0x213B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B4Cu;
label_213b4c:
    // 0x213b4c: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x213b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213b50:
    // 0x213b50: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x213b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_213b54:
    // 0x213b54: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x213b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213b58:
    // 0x213b58: 0x24a57710  addiu       $a1, $a1, 0x7710
    ctx->pc = 0x213b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30480));
label_213b5c:
    // 0x213b5c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x213b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_213b60:
    // 0x213b60: 0xc066d7a  jal         func_19B5E8
label_213b64:
    if (ctx->pc == 0x213B64u) {
        ctx->pc = 0x213B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B60u;
        // 0x213b64: 0x24464a50  addiu       $a2, $v0, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213B68u;
        goto label_213b68;
    }
    ctx->pc = 0x213B60u;
    SET_GPR_U32(ctx, 31, 0x213B68u);
    ctx->pc = 0x213B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B60u;
    // 0x213b64: 0x24464a50  addiu       $a2, $v0, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x213B60u, 0x213B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B68u;
label_213b68:
    // 0x213b68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_213b6c:
    // 0x213b6c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x213b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213b70:
    // 0x213b70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x213b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213b74:
    // 0x213b74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213b78:
    // 0x213b78: 0xc066efe  jal         func_19BBF8
label_213b7c:
    if (ctx->pc == 0x213B7Cu) {
        ctx->pc = 0x213B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B78u;
        // 0x213b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213B80u;
        goto label_213b80;
    }
    ctx->pc = 0x213B78u;
    SET_GPR_U32(ctx, 31, 0x213B80u);
    ctx->pc = 0x213B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B78u;
    // 0x213b7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x213B78u, 0x213B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B80u;
label_213b80:
    // 0x213b80: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213b84:
    // 0x213b84: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x213b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_213b88:
    // 0x213b88: 0x24a57750  addiu       $a1, $a1, 0x7750
    ctx->pc = 0x213b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30544));
label_213b8c:
    // 0x213b8c: 0xc066d7a  jal         func_19B5E8
label_213b90:
    if (ctx->pc == 0x213B90u) {
        ctx->pc = 0x213B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B8Cu;
        // 0x213b90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213B94u;
        goto label_213b94;
    }
    ctx->pc = 0x213B8Cu;
    SET_GPR_U32(ctx, 31, 0x213B94u);
    ctx->pc = 0x213B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B8Cu;
    // 0x213b90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x213B8Cu, 0x213B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B94u;
label_213b94:
    // 0x213b94: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x213b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213b98:
    // 0x213b98: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x213b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213b9c:
    // 0x213b9c: 0x340194a0  ori         $at, $zero, 0x94A0
    ctx->pc = 0x213b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38048);
label_213ba0:
    // 0x213ba0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x213ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213ba4:
    // 0x213ba4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x213ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_213ba8:
    // 0x213ba8: 0xc066e0e  jal         func_19B838
label_213bac:
    if (ctx->pc == 0x213BACu) {
        ctx->pc = 0x213BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BA8u;
        // 0x213bac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213BB0u;
        goto label_213bb0;
    }
    ctx->pc = 0x213BA8u;
    SET_GPR_U32(ctx, 31, 0x213BB0u);
    ctx->pc = 0x213BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BA8u;
    // 0x213bac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B838u, 0x213BA8u, 0x213BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BB0u;
label_213bb0:
    // 0x213bb0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x213bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_213bb4:
    // 0x213bb4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x213bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213bb8:
    // 0x213bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213bbc:
    // 0x213bbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x213bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213bc0:
    // 0x213bc0: 0xc066efe  jal         func_19BBF8
label_213bc4:
    if (ctx->pc == 0x213BC4u) {
        ctx->pc = 0x213BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BC0u;
        // 0x213bc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213BC8u;
        goto label_213bc8;
    }
    ctx->pc = 0x213BC0u;
    SET_GPR_U32(ctx, 31, 0x213BC8u);
    ctx->pc = 0x213BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BC0u;
    // 0x213bc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x213BC0u, 0x213BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BC8u;
label_213bc8:
    // 0x213bc8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x213bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_213bcc:
    // 0x213bcc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x213bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_213bd0:
    // 0x213bd0: 0xc066e38  jal         func_19B8E0
label_213bd4:
    if (ctx->pc == 0x213BD4u) {
        ctx->pc = 0x213BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BD0u;
        // 0x213bd4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213BD8u;
        goto label_213bd8;
    }
    ctx->pc = 0x213BD0u;
    SET_GPR_U32(ctx, 31, 0x213BD8u);
    ctx->pc = 0x213BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BD0u;
    // 0x213bd4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8E0u, 0x213BD0u, 0x213BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BD8u;
label_213bd8:
    // 0x213bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_213bdc:
    // 0x213bdc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x213bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_213be0:
    // 0x213be0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x213be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_213be4:
    // 0x213be4: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_213be8:
    if (ctx->pc == 0x213BE8u) {
        ctx->pc = 0x213BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BE4u;
        // 0x213be8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213BECu;
        goto label_213bec;
    }
    ctx->pc = 0x213BE4u;
    {
        const bool branch_taken_0x213be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BE4u;
        // 0x213be8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213be4) {
            ctx->pc = 0x213B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213b10;
        }
    }
    ctx->pc = 0x213BECu;
label_213bec:
    // 0x213bec: 0x87a40090  lh          $a0, 0x90($sp)
    ctx->pc = 0x213becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_213bf0:
    // 0x213bf0: 0x2f31021  addu        $v0, $s7, $s3
    ctx->pc = 0x213bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_213bf4:
    // 0x213bf4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_213bf8:
    // 0x213bf8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x213bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_213bfc:
    // 0x213bfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x213bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_213c00:
    // 0x213c00: 0x2ac308c0  slti        $v1, $s6, 0x8C0
    ctx->pc = 0x213c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2240) ? 1 : 0);
label_213c04:
    // 0x213c04: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x213c04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_213c08:
    // 0x213c08: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x213c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_213c0c:
    // 0x213c0c: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x213c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
label_213c10:
    // 0x213c10: 0x87a40094  lh          $a0, 0x94($sp)
    ctx->pc = 0x213c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
label_213c14:
    // 0x213c14: 0xa4440092  sh          $a0, 0x92($v0)
    ctx->pc = 0x213c14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 146), (uint16_t)GPR_U32(ctx, 4));
label_213c18:
    // 0x213c18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x213c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_213c1c:
    // 0x213c1c: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x213c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
label_213c20:
    // 0x213c20: 0x87a400a0  lh          $a0, 0xA0($sp)
    ctx->pc = 0x213c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_213c24:
    // 0x213c24: 0xa44400a8  sh          $a0, 0xA8($v0)
    ctx->pc = 0x213c24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 4));
label_213c28:
    // 0x213c28: 0x87a400a4  lh          $a0, 0xA4($sp)
    ctx->pc = 0x213c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
label_213c2c:
    // 0x213c2c: 0xa44400aa  sh          $a0, 0xAA($v0)
    ctx->pc = 0x213c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 4));
label_213c30:
    // 0x213c30: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_213c34:
    // 0x213c34: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x213c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
label_213c38:
    // 0x213c38: 0x87a400b0  lh          $a0, 0xB0($sp)
    ctx->pc = 0x213c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_213c3c:
    // 0x213c3c: 0xa44400c0  sh          $a0, 0xC0($v0)
    ctx->pc = 0x213c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 4));
label_213c40:
    // 0x213c40: 0x87a400b4  lh          $a0, 0xB4($sp)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 180)));
label_213c44:
    // 0x213c44: 0xa44400c2  sh          $a0, 0xC2($v0)
    ctx->pc = 0x213c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 4));
label_213c48:
    // 0x213c48: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x213c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_213c4c:
    // 0x213c4c: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x213c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_213c50:
    // 0x213c50: 0x83a400c0  lb          $a0, 0xC0($sp)
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_213c54:
    // 0x213c54: 0xa0440080  sb          $a0, 0x80($v0)
    ctx->pc = 0x213c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 4));
label_213c58:
    // 0x213c58: 0x83a400c4  lb          $a0, 0xC4($sp)
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
label_213c5c:
    // 0x213c5c: 0xa0440081  sb          $a0, 0x81($v0)
    ctx->pc = 0x213c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 129), (uint8_t)GPR_U32(ctx, 4));
label_213c60:
    // 0x213c60: 0x83a400c8  lb          $a0, 0xC8($sp)
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
label_213c64:
    // 0x213c64: 0xa0440082  sb          $a0, 0x82($v0)
    ctx->pc = 0x213c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 4));
label_213c68:
    // 0x213c68: 0xa0460083  sb          $a2, 0x83($v0)
    ctx->pc = 0x213c68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 6));
label_213c6c:
    // 0x213c6c: 0xac450084  sw          $a1, 0x84($v0)
    ctx->pc = 0x213c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
label_213c70:
    // 0x213c70: 0x83a400d0  lb          $a0, 0xD0($sp)
    ctx->pc = 0x213c70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_213c74:
    // 0x213c74: 0xa0440098  sb          $a0, 0x98($v0)
    ctx->pc = 0x213c74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 4));
label_213c78:
    // 0x213c78: 0x83a400d4  lb          $a0, 0xD4($sp)
    ctx->pc = 0x213c78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 212)));
label_213c7c:
    // 0x213c7c: 0xa0440099  sb          $a0, 0x99($v0)
    ctx->pc = 0x213c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 4));
label_213c80:
    // 0x213c80: 0x83a400d8  lb          $a0, 0xD8($sp)
    ctx->pc = 0x213c80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
label_213c84:
    // 0x213c84: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x213c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
label_213c88:
    // 0x213c88: 0xa046009b  sb          $a2, 0x9B($v0)
    ctx->pc = 0x213c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 6));
label_213c8c:
    // 0x213c8c: 0xac45009c  sw          $a1, 0x9C($v0)
    ctx->pc = 0x213c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 5));
label_213c90:
    // 0x213c90: 0x83a400e0  lb          $a0, 0xE0($sp)
    ctx->pc = 0x213c90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_213c94:
    // 0x213c94: 0xa04400b0  sb          $a0, 0xB0($v0)
    ctx->pc = 0x213c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 4));
label_213c98:
    // 0x213c98: 0x83a400e4  lb          $a0, 0xE4($sp)
    ctx->pc = 0x213c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 228)));
label_213c9c:
    // 0x213c9c: 0xa04400b1  sb          $a0, 0xB1($v0)
    ctx->pc = 0x213c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 177), (uint8_t)GPR_U32(ctx, 4));
label_213ca0:
    // 0x213ca0: 0x83a400e8  lb          $a0, 0xE8($sp)
    ctx->pc = 0x213ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
label_213ca4:
    // 0x213ca4: 0xa04400b2  sb          $a0, 0xB2($v0)
    ctx->pc = 0x213ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 178), (uint8_t)GPR_U32(ctx, 4));
label_213ca8:
    // 0x213ca8: 0xa04600b3  sb          $a2, 0xB3($v0)
    ctx->pc = 0x213ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 179), (uint8_t)GPR_U32(ctx, 6));
label_213cac:
    // 0x213cac: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
label_213cb0:
    if (ctx->pc == 0x213CB0u) {
        ctx->pc = 0x213CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CACu;
        // 0x213cb0: 0xac4500b4  sw          $a1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213CB4u;
        goto label_213cb4;
    }
    ctx->pc = 0x213CACu;
    {
        const bool branch_taken_0x213cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CACu;
        // 0x213cb0: 0xac4500b4  sw          $a1, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cac) {
            ctx->pc = 0x213B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213b04;
        }
    }
    ctx->pc = 0x213CB4u;
label_213cb4:
    // 0x213cb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x213cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_213cb8:
    // 0x213cb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x213cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_213cbc:
    // 0x213cbc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x213cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_213cc0:
    // 0x213cc0: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x213cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_213cc4:
    // 0x213cc4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x213cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_213cc8:
    // 0x213cc8: 0x24063487  addiu       $a2, $zero, 0x3487
    ctx->pc = 0x213cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13447));
label_213ccc:
    // 0x213ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cd0:
    // 0x213cd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cd4:
    // 0x213cd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213cd8:
    // 0x213cd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x213cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_213cdc:
    // 0x213cdc: 0xc066c72  jal         func_19B1C8
label_213ce0:
    if (ctx->pc == 0x213CE0u) {
        ctx->pc = 0x213CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CDCu;
        // 0x213ce0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213CE4u;
        goto label_213ce4;
    }
    ctx->pc = 0x213CDCu;
    SET_GPR_U32(ctx, 31, 0x213CE4u);
    ctx->pc = 0x213CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CDCu;
    // 0x213ce0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x213CDCu, 0x213CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CE4u;
label_213ce4:
    // 0x213ce4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x213ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_213ce8:
    // 0x213ce8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x213ce8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_213cec:
    // 0x213cec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x213cecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_213cf0:
    // 0x213cf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x213cf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_213cf4:
    // 0x213cf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x213cf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_213cf8:
    // 0x213cf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x213cf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_213cfc:
    // 0x213cfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x213cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_213d00:
    // 0x213d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x213d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213d04:
    // 0x213d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x213d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213d08:
    // 0x213d08: 0x3e00008  jr          $ra
label_213d0c:
    if (ctx->pc == 0x213D0Cu) {
        ctx->pc = 0x213D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D08u;
        // 0x213d0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213D10u;
        goto label_213d10;
    }
    ctx->pc = 0x213D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D08u;
        // 0x213d0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D10u;
label_213d10:
    // 0x213d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_213d14:
    // 0x213d14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x213d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_213d18:
    // 0x213d18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x213d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_213d1c:
    // 0x213d1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x213d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_213d20:
    // 0x213d20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x213d20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213d24:
    // 0x213d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x213d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_213d28:
    // 0x213d28: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x213d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213d2c:
    // 0x213d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x213d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_213d30:
    // 0x213d30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_213d34:
    // 0x213d34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_213d38:
    // 0x213d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213d3c:
    // 0x213d3c: 0x278291a8  addiu       $v0, $gp, -0x6E58
    ctx->pc = 0x213d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939048));
label_213d40:
    // 0x213d40: 0x24053486  addiu       $a1, $zero, 0x3486
    ctx->pc = 0x213d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13446));
label_213d44:
    // 0x213d44: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x213d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_213d48:
    // 0x213d48: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x213d48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_213d4c:
    // 0x213d4c: 0xc05e234  jal         func_1788D0
label_213d50:
    if (ctx->pc == 0x213D50u) {
        ctx->pc = 0x213D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D4Cu;
        // 0x213d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213D54u;
        goto label_213d54;
    }
    ctx->pc = 0x213D4Cu;
    SET_GPR_U32(ctx, 31, 0x213D54u);
    ctx->pc = 0x213D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D4Cu;
    // 0x213d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x213D4Cu, 0x213D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D54u;
label_213d54:
    // 0x213d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x213d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213d58:
    // 0x213d58: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x213d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_213d5c:
    // 0x213d5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x213d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_213d60:
    // 0x213d60: 0xc05e1d4  jal         func_178750
label_213d64:
    if (ctx->pc == 0x213D64u) {
        ctx->pc = 0x213D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D60u;
        // 0x213d64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213D68u;
        goto label_213d68;
    }
    ctx->pc = 0x213D60u;
    SET_GPR_U32(ctx, 31, 0x213D68u);
    ctx->pc = 0x213D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D60u;
    // 0x213d64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x213D60u, 0x213D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D68u;
label_213d68:
    // 0x213d68: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x213d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
label_213d6c:
    // 0x213d6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_213d70:
    // 0x213d70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x213d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_213d74:
    // 0x213d74: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x213d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_213d78:
    // 0x213d78: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x213d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_213d7c:
    // 0x213d7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213d80:
    // 0x213d80: 0x3c02c400  lui         $v0, 0xC400
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50176 << 16));
label_213d84:
    // 0x213d84: 0xfe230050  sd          $v1, 0x50($s1)
    ctx->pc = 0x213d84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 3));
label_213d88:
    // 0x213d88: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x213d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_213d8c:
    // 0x213d8c: 0x340388c0  ori         $v1, $zero, 0x88C0
    ctx->pc = 0x213d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35008);
label_213d90:
    // 0x213d90: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x213d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_213d94:
    // 0x213d94: 0x3402f531  ori         $v0, $zero, 0xF531
    ctx->pc = 0x213d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62769);
label_213d98:
    // 0x213d98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x213d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_213d9c:
    // 0x213d9c: 0xfe240060  sd          $a0, 0x60($s1)
    ctx->pc = 0x213d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 4));
label_213da0:
    // 0x213da0: 0x3c025315  lui         $v0, 0x5315
    ctx->pc = 0x213da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21269 << 16));
label_213da4:
    // 0x213da4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213da8:
    // 0x213da8: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x213da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_213dac:
    // 0x213dac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213db0:
    // 0x213db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_213db4:
    // 0x213db4: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x213db4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
label_213db8:
    // 0x213db8: 0xdf8591c0  ld          $a1, -0x6E40($gp)
    ctx->pc = 0x213db8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294939072)));
label_213dbc:
    // 0x213dbc: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x213dbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_213dc0:
    // 0x213dc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213dc4:
    // 0x213dc4: 0xc05e130  jal         func_1784C0
label_213dc8:
    if (ctx->pc == 0x213DC8u) {
        ctx->pc = 0x213DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DC4u;
        // 0x213dc8: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213DCCu;
        goto label_213dcc;
    }
    ctx->pc = 0x213DC4u;
    SET_GPR_U32(ctx, 31, 0x213DCCu);
    ctx->pc = 0x213DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DC4u;
    // 0x213dc8: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784C0u, 0x213DC4u, 0x213DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DCCu;
label_213dcc:
    // 0x213dcc: 0x8f8591b0  lw          $a1, -0x6E50($gp)
    ctx->pc = 0x213dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213dd0:
    // 0x213dd0: 0x3c0363e7  lui         $v1, 0x63E7
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25575 << 16));
label_213dd4:
    // 0x213dd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_213dd8:
    // 0x213dd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x213dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213ddc:
    // 0x213ddc: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_213de0:
    // 0x213de0: 0x3463063f  ori         $v1, $v1, 0x63F
    ctx->pc = 0x213de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1599);
label_213de4:
    // 0x213de4: 0x27a60084  addiu       $a2, $sp, 0x84
    ctx->pc = 0x213de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_213de8:
    // 0x213de8: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x213de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_213dec:
    // 0x213dec: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x213decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_213df0:
    // 0x213df0: 0x27a90098  addiu       $t1, $sp, 0x98
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_213df4:
    // 0x213df4: 0x2a0a08c0  slti        $t2, $s0, 0x8C0
    ctx->pc = 0x213df4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2240) ? 1 : 0);
label_213df8:
    // 0x213df8: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x213df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_213dfc:
    // 0x213dfc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x213dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_213e00:
    // 0x213e00: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x213e00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_213e04:
    // 0x213e04: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x213e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_213e08:
    // 0x213e08: 0x8c2d4e68  lw          $t5, 0x4E68($at)
    ctx->pc = 0x213e08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20072)));
label_213e0c:
    // 0x213e0c: 0x1a4001a  div         $zero, $t5, $a0
    ctx->pc = 0x213e0cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_213e10:
    // 0x213e10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x213e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213e14:
    // 0x213e14: 0xd67c2  srl         $t4, $t5, 31
    ctx->pc = 0x213e14u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_213e18:
    // 0x213e18: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x213e18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_213e1c:
    // 0x213e1c: 0x5810  mfhi        $t3
    ctx->pc = 0x213e1cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_213e20:
    // 0x213e20: 0x6d0018  mult        $zero, $v1, $t5
    ctx->pc = 0x213e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_213e24:
    // 0x213e24: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x213e24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_213e28:
    // 0x213e28: 0xafab0080  sw          $t3, 0x80($sp)
    ctx->pc = 0x213e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 11));
label_213e2c:
    // 0x213e2c: 0x5810  mfhi        $t3
    ctx->pc = 0x213e2cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_213e30:
    // 0x213e30: 0xb5903  sra         $t3, $t3, 4
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 4));
label_213e34:
    // 0x213e34: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_213e38:
    // 0x213e38: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x213e38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_213e3c:
    // 0x213e3c: 0xafab0090  sw          $t3, 0x90($sp)
    ctx->pc = 0x213e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 11));
label_213e40:
    // 0x213e40: 0x8c2d4e6c  lw          $t5, 0x4E6C($at)
    ctx->pc = 0x213e40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20076)));
label_213e44:
    // 0x213e44: 0x1a4001a  div         $zero, $t5, $a0
    ctx->pc = 0x213e44u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_213e48:
    // 0x213e48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x213e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213e4c:
    // 0x213e4c: 0xd67c2  srl         $t4, $t5, 31
    ctx->pc = 0x213e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_213e50:
    // 0x213e50: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x213e50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_213e54:
    // 0x213e54: 0x5810  mfhi        $t3
    ctx->pc = 0x213e54u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_213e58:
    // 0x213e58: 0x6d0018  mult        $zero, $v1, $t5
    ctx->pc = 0x213e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_213e5c:
    // 0x213e5c: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_213e60:
    // 0x213e60: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x213e60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
label_213e64:
    // 0x213e64: 0x5810  mfhi        $t3
    ctx->pc = 0x213e64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_213e68:
    // 0x213e68: 0xb5903  sra         $t3, $t3, 4
    ctx->pc = 0x213e68u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 4));
label_213e6c:
    // 0x213e6c: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x213e6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_213e70:
    // 0x213e70: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x213e70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_213e74:
    // 0x213e74: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x213e74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_213e78:
    // 0x213e78: 0x8c2b4e70  lw          $t3, 0x4E70($at)
    ctx->pc = 0x213e78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20080)));
label_213e7c:
    // 0x213e7c: 0x164001a  div         $zero, $t3, $a0
    ctx->pc = 0x213e7cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_213e80:
    // 0x213e80: 0x0  nop
    ctx->pc = 0x213e80u;
    // NOP
label_213e84:
    // 0x213e84: 0x0  nop
    ctx->pc = 0x213e84u;
    // NOP
label_213e88:
    // 0x213e88: 0x2810  mfhi        $a1
    ctx->pc = 0x213e88u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_213e8c:
    // 0x213e8c: 0xb27c2  srl         $a0, $t3, 31
    ctx->pc = 0x213e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_213e90:
    // 0x213e90: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x213e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_213e94:
    // 0x213e94: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x213e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_213e98:
    // 0x213e98: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x213e98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_213e9c:
    // 0x213e9c: 0x1810  mfhi        $v1
    ctx->pc = 0x213e9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_213ea0:
    // 0x213ea0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x213ea0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_213ea4:
    // 0x213ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x213ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_213ea8:
    // 0x213ea8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x213ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_213eac:
    // 0x213eac: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x213eacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_213eb0:
    // 0x213eb0: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x213eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_213eb4:
    // 0x213eb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213eb8:
    // 0x213eb8: 0xa6830088  sh          $v1, 0x88($s4)
    ctx->pc = 0x213eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 136), (uint16_t)GPR_U32(ctx, 3));
label_213ebc:
    // 0x213ebc: 0x87a30090  lh          $v1, 0x90($sp)
    ctx->pc = 0x213ebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_213ec0:
    // 0x213ec0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213ec4:
    // 0x213ec4: 0xa683008a  sh          $v1, 0x8A($s4)
    ctx->pc = 0x213ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 3));
label_213ec8:
    // 0x213ec8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x213ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_213ecc:
    // 0x213ecc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213ed0:
    // 0x213ed0: 0xa68300a0  sh          $v1, 0xA0($s4)
    ctx->pc = 0x213ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 160), (uint16_t)GPR_U32(ctx, 3));
label_213ed4:
    // 0x213ed4: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x213ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_213ed8:
    // 0x213ed8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213edc:
    // 0x213edc: 0xa68300a2  sh          $v1, 0xA2($s4)
    ctx->pc = 0x213edcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 3));
label_213ee0:
    // 0x213ee0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x213ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_213ee4:
    // 0x213ee4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213ee8:
    // 0x213ee8: 0xa68300b8  sh          $v1, 0xB8($s4)
    ctx->pc = 0x213ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 184), (uint16_t)GPR_U32(ctx, 3));
label_213eec:
    // 0x213eec: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x213eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_213ef0:
    // 0x213ef0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_213ef4:
    // 0x213ef4: 0x1540ffb0  bnez        $t2, . + 4 + (-0x50 << 2)
label_213ef8:
    if (ctx->pc == 0x213EF8u) {
        ctx->pc = 0x213EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF4u;
        // 0x213ef8: 0xa68300ba  sh          $v1, 0xBA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 186), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213EFCu;
        goto label_213efc;
    }
    ctx->pc = 0x213EF4u;
    {
        const bool branch_taken_0x213ef4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x213EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF4u;
        // 0x213ef8: 0xa68300ba  sh          $v1, 0xBA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 186), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef4) {
            ctx->pc = 0x213DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213db8;
        }
    }
    ctx->pc = 0x213EFCu;
label_213efc:
    // 0x213efc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x213efcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_213f00:
    // 0x213f00: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x213f00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_213f04:
    // 0x213f04: 0x1460ff8d  bnez        $v1, . + 4 + (-0x73 << 2)
label_213f08:
    if (ctx->pc == 0x213F08u) {
        ctx->pc = 0x213F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F04u;
        // 0x213f08: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F0Cu;
        goto label_213f0c;
    }
    ctx->pc = 0x213F04u;
    {
        const bool branch_taken_0x213f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F04u;
        // 0x213f08: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f04) {
            ctx->pc = 0x213D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213d3c;
        }
    }
    ctx->pc = 0x213F0Cu;
label_213f0c:
    // 0x213f0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x213f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_213f10:
    // 0x213f10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x213f10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_213f14:
    // 0x213f14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x213f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_213f18:
    // 0x213f18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x213f18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_213f1c:
    // 0x213f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x213f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_213f20:
    // 0x213f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x213f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_213f24:
    // 0x213f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x213f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213f28:
    // 0x213f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x213f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213f2c:
    // 0x213f2c: 0x3e00008  jr          $ra
label_213f30:
    if (ctx->pc == 0x213F30u) {
        ctx->pc = 0x213F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F2Cu;
        // 0x213f30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213F34u;
        goto label_213f34;
    }
    ctx->pc = 0x213F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F2Cu;
        // 0x213f30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213F34u;
label_213f34:
    // 0x213f34: 0x0  nop
    ctx->pc = 0x213f34u;
    // NOP
label_213f38:
    // 0x213f38: 0x0  nop
    ctx->pc = 0x213f38u;
    // NOP
label_213f3c:
    // 0x213f3c: 0x0  nop
    ctx->pc = 0x213f3cu;
    // NOP
label_213f40:
    // 0x213f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_213f44:
    // 0x213f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213f48:
    // 0x213f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_213f4c:
    // 0x213f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213f50:
    // 0x213f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213f54:
    // 0x213f54: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_213f58:
    // 0x213f58: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_213f5c:
    // 0x213f5c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x213f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_213f60:
    // 0x213f60: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_213f64:
    // 0x213f64: 0x3c0c437f  lui         $t4, 0x437F
    ctx->pc = 0x213f64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17279 << 16));
label_213f68:
    // 0x213f68: 0x3c0b4300  lui         $t3, 0x4300
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17152 << 16));
label_213f6c:
    // 0x213f6c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_213f70:
    // 0x213f70: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x213f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_213f74:
    // 0x213f74: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_213f78:
    // 0x213f78: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x213f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_213f7c:
    // 0x213f7c: 0x3c0363e7  lui         $v1, 0x63E7
    ctx->pc = 0x213f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25575 << 16));
label_213f80:
    // 0x213f80: 0x3465063f  ori         $a1, $v1, 0x63F
    ctx->pc = 0x213f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1599);
label_213f84:
    // 0x213f84: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
label_213f88:
    // 0x213f88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x213f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_213f8c:
    // 0x213f8c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x213f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
label_213f90:
    // 0x213f90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x213f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_213f94:
    // 0x213f94: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
label_213f98:
    // 0x213f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213f9c:
    // 0x213f9c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x213f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_213fa0:
    // 0x213fa0: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x213fa0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_213fa4:
    // 0x213fa4: 0x8f8991b0  lw          $t1, -0x6E50($gp)
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213fa8:
    // 0x213fa8: 0x76fc2  srl         $t5, $a3, 31
    ctx->pc = 0x213fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_213fac:
    // 0x213fac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x213facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213fb0:
    // 0x213fb0: 0x1287021  addu        $t6, $t1, $t0
    ctx->pc = 0x213fb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_213fb4:
    // 0x213fb4: 0x4810  mfhi        $t1
    ctx->pc = 0x213fb4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_213fb8:
    // 0x213fb8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x213fb8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213fbc:
    // 0x213fbc: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x213fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_213fc0:
    // 0x213fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_213fc4:
    // 0x213fc4: 0x0  nop
    ctx->pc = 0x213fc4u;
    // NOP
label_213fc8:
    // 0x213fc8: 0x5010  mfhi        $t2
    ctx->pc = 0x213fc8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_213fcc:
    // 0x213fcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_213fd0:
    // 0x213fd0: 0x28e904a5  slti        $t1, $a3, 0x4A5
    ctx->pc = 0x213fd0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1189) ? 1 : 0);
label_213fd4:
    // 0x213fd4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x213fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_213fd8:
    // 0x213fd8: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x213fd8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
label_213fdc:
    // 0x213fdc: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x213fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_213fe0:
    // 0x213fe0: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x213fe0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
label_213fe4:
    // 0x213fe4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x213fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_213fe8:
    // 0x213fe8: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x213fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_213fec:
    // 0x213fec: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x213fecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213ff0:
    // 0x213ff0: 0x0  nop
    ctx->pc = 0x213ff0u;
    // NOP
label_213ff4:
    // 0x213ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_213ff8:
    // 0x213ff8: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213ffc:
    // 0x213ffc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x213ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_214000:
    // 0x214000: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214004:
    // 0x214004: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x214004u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
label_214008:
    // 0x214008: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21400c:
    // 0x21400c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x21400cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_214010:
    // 0x214010: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214014:
    // 0x214014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x214014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_214018:
    // 0x214018: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x214018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_21401c:
    // 0x21401c: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x21401cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214020:
    // 0x214020: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214024:
    // 0x214024: 0xad44000c  sw          $a0, 0xC($t2)
    ctx->pc = 0x214024u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 4));
label_214028:
    // 0x214028: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214028u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21402c:
    // 0x21402c: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21402cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214030:
    // 0x214030: 0xad404a50  sw          $zero, 0x4A50($t2)
    ctx->pc = 0x214030u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 19024), GPR_U32(ctx, 0));
label_214034:
    // 0x214034: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214038:
    // 0x214038: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214038u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21403c:
    // 0x21403c: 0xad434a54  sw          $v1, 0x4A54($t2)
    ctx->pc = 0x21403cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 19028), GPR_U32(ctx, 3));
label_214040:
    // 0x214040: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214040u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214044:
    // 0x214044: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214048:
    // 0x214048: 0xad404a58  sw          $zero, 0x4A58($t2)
    ctx->pc = 0x214048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 19032), GPR_U32(ctx, 0));
label_21404c:
    // 0x21404c: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x21404cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214050:
    // 0x214050: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214054:
    // 0x214054: 0xad444a5c  sw          $a0, 0x4A5C($t2)
    ctx->pc = 0x214054u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 19036), GPR_U32(ctx, 4));
label_214058:
    // 0x214058: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214058u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21405c:
    // 0x21405c: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21405cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214060:
    // 0x214060: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x214060u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_214064:
    // 0x214064: 0xac2c94a0  sw          $t4, -0x6B60($at)
    ctx->pc = 0x214064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939808), GPR_U32(ctx, 12));
label_214068:
    // 0x214068: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214068u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21406c:
    // 0x21406c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214070:
    // 0x214070: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214074:
    // 0x214074: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x214074u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_214078:
    // 0x214078: 0xac2c94a4  sw          $t4, -0x6B5C($at)
    ctx->pc = 0x214078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939812), GPR_U32(ctx, 12));
label_21407c:
    // 0x21407c: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x21407cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214080:
    // 0x214080: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214084:
    // 0x214084: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214084u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_214088:
    // 0x214088: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x214088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_21408c:
    // 0x21408c: 0xac2c94a8  sw          $t4, -0x6B58($at)
    ctx->pc = 0x21408cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939816), GPR_U32(ctx, 12));
label_214090:
    // 0x214090: 0x8f8a91b0  lw          $t2, -0x6E50($gp)
    ctx->pc = 0x214090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_214094:
    // 0x214094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x214094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_214098:
    // 0x214098: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21409c:
    // 0x21409c: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x21409cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    ctx->pc = 0x2140a0u;
    return;
}
