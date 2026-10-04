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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part212(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2028d8u: goto label_2028d8;
        case 0x2028dcu: goto label_2028dc;
        case 0x2028e0u: goto label_2028e0;
        case 0x2028e4u: goto label_2028e4;
        case 0x2028e8u: goto label_2028e8;
        case 0x2028ecu: goto label_2028ec;
        case 0x2028f0u: goto label_2028f0;
        case 0x2028f4u: goto label_2028f4;
        case 0x2028f8u: goto label_2028f8;
        case 0x2028fcu: goto label_2028fc;
        case 0x202900u: goto label_202900;
        case 0x202904u: goto label_202904;
        case 0x202908u: goto label_202908;
        case 0x20290cu: goto label_20290c;
        case 0x202910u: goto label_202910;
        case 0x202914u: goto label_202914;
        case 0x202918u: goto label_202918;
        case 0x20291cu: goto label_20291c;
        case 0x202920u: goto label_202920;
        case 0x202924u: goto label_202924;
        case 0x202928u: goto label_202928;
        case 0x20292cu: goto label_20292c;
        case 0x202930u: goto label_202930;
        case 0x202934u: goto label_202934;
        case 0x202938u: goto label_202938;
        case 0x20293cu: goto label_20293c;
        case 0x202940u: goto label_202940;
        case 0x202944u: goto label_202944;
        case 0x202948u: goto label_202948;
        case 0x20294cu: goto label_20294c;
        case 0x202950u: goto label_202950;
        case 0x202954u: goto label_202954;
        case 0x202958u: goto label_202958;
        case 0x20295cu: goto label_20295c;
        case 0x202960u: goto label_202960;
        case 0x202964u: goto label_202964;
        case 0x202968u: goto label_202968;
        case 0x20296cu: goto label_20296c;
        case 0x202970u: goto label_202970;
        case 0x202974u: goto label_202974;
        case 0x202978u: goto label_202978;
        case 0x20297cu: goto label_20297c;
        case 0x202980u: goto label_202980;
        case 0x202984u: goto label_202984;
        case 0x202988u: goto label_202988;
        case 0x20298cu: goto label_20298c;
        case 0x202990u: goto label_202990;
        case 0x202994u: goto label_202994;
        case 0x202998u: goto label_202998;
        case 0x20299cu: goto label_20299c;
        case 0x2029a0u: goto label_2029a0;
        case 0x2029a4u: goto label_2029a4;
        case 0x2029a8u: goto label_2029a8;
        case 0x2029acu: goto label_2029ac;
        case 0x2029b0u: goto label_2029b0;
        case 0x2029b4u: goto label_2029b4;
        case 0x2029b8u: goto label_2029b8;
        case 0x2029bcu: goto label_2029bc;
        case 0x2029c0u: goto label_2029c0;
        case 0x2029c4u: goto label_2029c4;
        case 0x2029c8u: goto label_2029c8;
        case 0x2029ccu: goto label_2029cc;
        case 0x2029d0u: goto label_2029d0;
        case 0x2029d4u: goto label_2029d4;
        case 0x2029d8u: goto label_2029d8;
        case 0x2029dcu: goto label_2029dc;
        case 0x2029e0u: goto label_2029e0;
        case 0x2029e4u: goto label_2029e4;
        case 0x2029e8u: goto label_2029e8;
        case 0x2029ecu: goto label_2029ec;
        case 0x2029f0u: goto label_2029f0;
        case 0x2029f4u: goto label_2029f4;
        case 0x2029f8u: goto label_2029f8;
        case 0x2029fcu: goto label_2029fc;
        case 0x202a00u: goto label_202a00;
        case 0x202a04u: goto label_202a04;
        case 0x202a08u: goto label_202a08;
        case 0x202a0cu: goto label_202a0c;
        case 0x202a10u: goto label_202a10;
        case 0x202a14u: goto label_202a14;
        case 0x202a18u: goto label_202a18;
        case 0x202a1cu: goto label_202a1c;
        case 0x202a20u: goto label_202a20;
        case 0x202a24u: goto label_202a24;
        case 0x202a28u: goto label_202a28;
        case 0x202a2cu: goto label_202a2c;
        case 0x202a30u: goto label_202a30;
        case 0x202a34u: goto label_202a34;
        case 0x202a38u: goto label_202a38;
        case 0x202a3cu: goto label_202a3c;
        case 0x202a40u: goto label_202a40;
        case 0x202a44u: goto label_202a44;
        case 0x202a48u: goto label_202a48;
        case 0x202a4cu: goto label_202a4c;
        case 0x202a50u: goto label_202a50;
        case 0x202a54u: goto label_202a54;
        case 0x202a58u: goto label_202a58;
        case 0x202a5cu: goto label_202a5c;
        case 0x202a60u: goto label_202a60;
        case 0x202a64u: goto label_202a64;
        case 0x202a68u: goto label_202a68;
        case 0x202a6cu: goto label_202a6c;
        case 0x202a70u: goto label_202a70;
        case 0x202a74u: goto label_202a74;
        case 0x202a78u: goto label_202a78;
        case 0x202a7cu: goto label_202a7c;
        case 0x202a80u: goto label_202a80;
        case 0x202a84u: goto label_202a84;
        case 0x202a88u: goto label_202a88;
        case 0x202a8cu: goto label_202a8c;
        case 0x202a90u: goto label_202a90;
        case 0x202a94u: goto label_202a94;
        case 0x202a98u: goto label_202a98;
        case 0x202a9cu: goto label_202a9c;
        case 0x202aa0u: goto label_202aa0;
        case 0x202aa4u: goto label_202aa4;
        case 0x202aa8u: goto label_202aa8;
        case 0x202aacu: goto label_202aac;
        case 0x202ab0u: goto label_202ab0;
        case 0x202ab4u: goto label_202ab4;
        case 0x202ab8u: goto label_202ab8;
        case 0x202abcu: goto label_202abc;
        case 0x202ac0u: goto label_202ac0;
        case 0x202ac4u: goto label_202ac4;
        case 0x202ac8u: goto label_202ac8;
        case 0x202accu: goto label_202acc;
        case 0x202ad0u: goto label_202ad0;
        case 0x202ad4u: goto label_202ad4;
        case 0x202ad8u: goto label_202ad8;
        case 0x202adcu: goto label_202adc;
        case 0x202ae0u: goto label_202ae0;
        case 0x202ae4u: goto label_202ae4;
        case 0x202ae8u: goto label_202ae8;
        case 0x202aecu: goto label_202aec;
        case 0x202af0u: goto label_202af0;
        case 0x202af4u: goto label_202af4;
        case 0x202af8u: goto label_202af8;
        case 0x202afcu: goto label_202afc;
        case 0x202b00u: goto label_202b00;
        case 0x202b04u: goto label_202b04;
        case 0x202b08u: goto label_202b08;
        case 0x202b0cu: goto label_202b0c;
        case 0x202b10u: goto label_202b10;
        case 0x202b14u: goto label_202b14;
        case 0x202b18u: goto label_202b18;
        case 0x202b1cu: goto label_202b1c;
        case 0x202b20u: goto label_202b20;
        case 0x202b24u: goto label_202b24;
        case 0x202b28u: goto label_202b28;
        case 0x202b2cu: goto label_202b2c;
        case 0x202b30u: goto label_202b30;
        case 0x202b34u: goto label_202b34;
        case 0x202b38u: goto label_202b38;
        case 0x202b3cu: goto label_202b3c;
        case 0x202b40u: goto label_202b40;
        case 0x202b44u: goto label_202b44;
        case 0x202b48u: goto label_202b48;
        case 0x202b4cu: goto label_202b4c;
        case 0x202b50u: goto label_202b50;
        case 0x202b54u: goto label_202b54;
        case 0x202b58u: goto label_202b58;
        case 0x202b5cu: goto label_202b5c;
        case 0x202b60u: goto label_202b60;
        case 0x202b64u: goto label_202b64;
        case 0x202b68u: goto label_202b68;
        case 0x202b6cu: goto label_202b6c;
        case 0x202b70u: goto label_202b70;
        case 0x202b74u: goto label_202b74;
        case 0x202b78u: goto label_202b78;
        case 0x202b7cu: goto label_202b7c;
        case 0x202b80u: goto label_202b80;
        case 0x202b84u: goto label_202b84;
        case 0x202b88u: goto label_202b88;
        case 0x202b8cu: goto label_202b8c;
        case 0x202b90u: goto label_202b90;
        case 0x202b94u: goto label_202b94;
        case 0x202b98u: goto label_202b98;
        case 0x202b9cu: goto label_202b9c;
        case 0x202ba0u: goto label_202ba0;
        case 0x202ba4u: goto label_202ba4;
        case 0x202ba8u: goto label_202ba8;
        case 0x202bacu: goto label_202bac;
        case 0x202bb0u: goto label_202bb0;
        case 0x202bb4u: goto label_202bb4;
        case 0x202bb8u: goto label_202bb8;
        case 0x202bbcu: goto label_202bbc;
        case 0x202bc0u: goto label_202bc0;
        case 0x202bc4u: goto label_202bc4;
        case 0x202bc8u: goto label_202bc8;
        case 0x202bccu: goto label_202bcc;
        case 0x202bd0u: goto label_202bd0;
        case 0x202bd4u: goto label_202bd4;
        case 0x202bd8u: goto label_202bd8;
        case 0x202bdcu: goto label_202bdc;
        case 0x202be0u: goto label_202be0;
        case 0x202be4u: goto label_202be4;
        case 0x202be8u: goto label_202be8;
        case 0x202becu: goto label_202bec;
        case 0x202bf0u: goto label_202bf0;
        case 0x202bf4u: goto label_202bf4;
        case 0x202bf8u: goto label_202bf8;
        case 0x202bfcu: goto label_202bfc;
        case 0x202c00u: goto label_202c00;
        case 0x202c04u: goto label_202c04;
        case 0x202c08u: goto label_202c08;
        case 0x202c0cu: goto label_202c0c;
        case 0x202c10u: goto label_202c10;
        case 0x202c14u: goto label_202c14;
        case 0x202c18u: goto label_202c18;
        case 0x202c1cu: goto label_202c1c;
        case 0x202c20u: goto label_202c20;
        case 0x202c24u: goto label_202c24;
        case 0x202c28u: goto label_202c28;
        case 0x202c2cu: goto label_202c2c;
        case 0x202c30u: goto label_202c30;
        case 0x202c34u: goto label_202c34;
        case 0x202c38u: goto label_202c38;
        case 0x202c3cu: goto label_202c3c;
        case 0x202c40u: goto label_202c40;
        case 0x202c44u: goto label_202c44;
        case 0x202c48u: goto label_202c48;
        case 0x202c4cu: goto label_202c4c;
        case 0x202c50u: goto label_202c50;
        case 0x202c54u: goto label_202c54;
        case 0x202c58u: goto label_202c58;
        case 0x202c5cu: goto label_202c5c;
        case 0x202c60u: goto label_202c60;
        case 0x202c64u: goto label_202c64;
        case 0x202c68u: goto label_202c68;
        case 0x202c6cu: goto label_202c6c;
        case 0x202c70u: goto label_202c70;
        case 0x202c74u: goto label_202c74;
        case 0x202c78u: goto label_202c78;
        case 0x202c7cu: goto label_202c7c;
        case 0x202c80u: goto label_202c80;
        case 0x202c84u: goto label_202c84;
        case 0x202c88u: goto label_202c88;
        case 0x202c8cu: goto label_202c8c;
        case 0x202c90u: goto label_202c90;
        case 0x202c94u: goto label_202c94;
        case 0x202c98u: goto label_202c98;
        case 0x202c9cu: goto label_202c9c;
        case 0x202ca0u: goto label_202ca0;
        case 0x202ca4u: goto label_202ca4;
        case 0x202ca8u: goto label_202ca8;
        case 0x202cacu: goto label_202cac;
        case 0x202cb0u: goto label_202cb0;
        case 0x202cb4u: goto label_202cb4;
        case 0x202cb8u: goto label_202cb8;
        case 0x202cbcu: goto label_202cbc;
        case 0x202cc0u: goto label_202cc0;
        case 0x202cc4u: goto label_202cc4;
        case 0x202cc8u: goto label_202cc8;
        case 0x202cccu: goto label_202ccc;
        case 0x202cd0u: goto label_202cd0;
        case 0x202cd4u: goto label_202cd4;
        case 0x202cd8u: goto label_202cd8;
        case 0x202cdcu: goto label_202cdc;
        case 0x202ce0u: goto label_202ce0;
        case 0x202ce4u: goto label_202ce4;
        case 0x202ce8u: goto label_202ce8;
        case 0x202cecu: goto label_202cec;
        case 0x202cf0u: goto label_202cf0;
        case 0x202cf4u: goto label_202cf4;
        case 0x202cf8u: goto label_202cf8;
        case 0x202cfcu: goto label_202cfc;
        case 0x202d00u: goto label_202d00;
        case 0x202d04u: goto label_202d04;
        case 0x202d08u: goto label_202d08;
        case 0x202d0cu: goto label_202d0c;
        case 0x202d10u: goto label_202d10;
        case 0x202d14u: goto label_202d14;
        case 0x202d18u: goto label_202d18;
        case 0x202d1cu: goto label_202d1c;
        case 0x202d20u: goto label_202d20;
        case 0x202d24u: goto label_202d24;
        case 0x202d28u: goto label_202d28;
        case 0x202d2cu: goto label_202d2c;
        case 0x202d30u: goto label_202d30;
        case 0x202d34u: goto label_202d34;
        case 0x202d38u: goto label_202d38;
        case 0x202d3cu: goto label_202d3c;
        case 0x202d40u: goto label_202d40;
        case 0x202d44u: goto label_202d44;
        case 0x202d48u: goto label_202d48;
        case 0x202d4cu: goto label_202d4c;
        case 0x202d50u: goto label_202d50;
        case 0x202d54u: goto label_202d54;
        case 0x202d58u: goto label_202d58;
        case 0x202d5cu: goto label_202d5c;
        case 0x202d60u: goto label_202d60;
        case 0x202d64u: goto label_202d64;
        case 0x202d68u: goto label_202d68;
        case 0x202d6cu: goto label_202d6c;
        case 0x202d70u: goto label_202d70;
        case 0x202d74u: goto label_202d74;
        case 0x202d78u: goto label_202d78;
        case 0x202d7cu: goto label_202d7c;
        case 0x202d80u: goto label_202d80;
        case 0x202d84u: goto label_202d84;
        case 0x202d88u: goto label_202d88;
        case 0x202d8cu: goto label_202d8c;
        case 0x202d90u: goto label_202d90;
        case 0x202d94u: goto label_202d94;
        case 0x202d98u: goto label_202d98;
        case 0x202d9cu: goto label_202d9c;
        case 0x202da0u: goto label_202da0;
        case 0x202da4u: goto label_202da4;
        case 0x202da8u: goto label_202da8;
        case 0x202dacu: goto label_202dac;
        case 0x202db0u: goto label_202db0;
        case 0x202db4u: goto label_202db4;
        case 0x202db8u: goto label_202db8;
        case 0x202dbcu: goto label_202dbc;
        case 0x202dc0u: goto label_202dc0;
        case 0x202dc4u: goto label_202dc4;
        case 0x202dc8u: goto label_202dc8;
        case 0x202dccu: goto label_202dcc;
        case 0x202dd0u: goto label_202dd0;
        case 0x202dd4u: goto label_202dd4;
        case 0x202dd8u: goto label_202dd8;
        case 0x202ddcu: goto label_202ddc;
        case 0x202de0u: goto label_202de0;
        case 0x202de4u: goto label_202de4;
        case 0x202de8u: goto label_202de8;
        case 0x202decu: goto label_202dec;
        case 0x202df0u: goto label_202df0;
        case 0x202df4u: goto label_202df4;
        case 0x202df8u: goto label_202df8;
        case 0x202dfcu: goto label_202dfc;
        case 0x202e00u: goto label_202e00;
        case 0x202e04u: goto label_202e04;
        case 0x202e08u: goto label_202e08;
        case 0x202e0cu: goto label_202e0c;
        case 0x202e10u: goto label_202e10;
        case 0x202e14u: goto label_202e14;
        case 0x202e18u: goto label_202e18;
        case 0x202e1cu: goto label_202e1c;
        case 0x202e20u: goto label_202e20;
        case 0x202e24u: goto label_202e24;
        case 0x202e28u: goto label_202e28;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e30u: goto label_202e30;
        case 0x202e34u: goto label_202e34;
        case 0x202e38u: goto label_202e38;
        case 0x202e3cu: goto label_202e3c;
        case 0x202e40u: goto label_202e40;
        case 0x202e44u: goto label_202e44;
        case 0x202e48u: goto label_202e48;
        case 0x202e4cu: goto label_202e4c;
        case 0x202e50u: goto label_202e50;
        case 0x202e54u: goto label_202e54;
        case 0x202e58u: goto label_202e58;
        case 0x202e5cu: goto label_202e5c;
        case 0x202e60u: goto label_202e60;
        case 0x202e64u: goto label_202e64;
        case 0x202e68u: goto label_202e68;
        case 0x202e6cu: goto label_202e6c;
        case 0x202e70u: goto label_202e70;
        case 0x202e74u: goto label_202e74;
        case 0x202e78u: goto label_202e78;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e80u: goto label_202e80;
        case 0x202e84u: goto label_202e84;
        case 0x202e88u: goto label_202e88;
        case 0x202e8cu: goto label_202e8c;
        case 0x202e90u: goto label_202e90;
        case 0x202e94u: goto label_202e94;
        case 0x202e98u: goto label_202e98;
        case 0x202e9cu: goto label_202e9c;
        case 0x202ea0u: goto label_202ea0;
        case 0x202ea4u: goto label_202ea4;
        case 0x202ea8u: goto label_202ea8;
        case 0x202eacu: goto label_202eac;
        case 0x202eb0u: goto label_202eb0;
        case 0x202eb4u: goto label_202eb4;
        case 0x202eb8u: goto label_202eb8;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec0u: goto label_202ec0;
        case 0x202ec4u: goto label_202ec4;
        case 0x202ec8u: goto label_202ec8;
        case 0x202eccu: goto label_202ecc;
        case 0x202ed0u: goto label_202ed0;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ed8u: goto label_202ed8;
        case 0x202edcu: goto label_202edc;
        case 0x202ee0u: goto label_202ee0;
        case 0x202ee4u: goto label_202ee4;
        case 0x202ee8u: goto label_202ee8;
        case 0x202eecu: goto label_202eec;
        case 0x202ef0u: goto label_202ef0;
        case 0x202ef4u: goto label_202ef4;
        case 0x202ef8u: goto label_202ef8;
        case 0x202efcu: goto label_202efc;
        case 0x202f00u: goto label_202f00;
        case 0x202f04u: goto label_202f04;
        case 0x202f08u: goto label_202f08;
        case 0x202f0cu: goto label_202f0c;
        case 0x202f10u: goto label_202f10;
        case 0x202f14u: goto label_202f14;
        case 0x202f18u: goto label_202f18;
        case 0x202f1cu: goto label_202f1c;
        case 0x202f20u: goto label_202f20;
        case 0x202f24u: goto label_202f24;
        case 0x202f28u: goto label_202f28;
        case 0x202f2cu: goto label_202f2c;
        case 0x202f30u: goto label_202f30;
        case 0x202f34u: goto label_202f34;
        case 0x202f38u: goto label_202f38;
        case 0x202f3cu: goto label_202f3c;
        case 0x202f40u: goto label_202f40;
        case 0x202f44u: goto label_202f44;
        case 0x202f48u: goto label_202f48;
        case 0x202f4cu: goto label_202f4c;
        case 0x202f50u: goto label_202f50;
        case 0x202f54u: goto label_202f54;
        case 0x202f58u: goto label_202f58;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f60u: goto label_202f60;
        case 0x202f64u: goto label_202f64;
        case 0x202f68u: goto label_202f68;
        case 0x202f6cu: goto label_202f6c;
        case 0x202f70u: goto label_202f70;
        case 0x202f74u: goto label_202f74;
        case 0x202f78u: goto label_202f78;
        case 0x202f7cu: goto label_202f7c;
        case 0x202f80u: goto label_202f80;
        case 0x202f84u: goto label_202f84;
        case 0x202f88u: goto label_202f88;
        case 0x202f8cu: goto label_202f8c;
        case 0x202f90u: goto label_202f90;
        case 0x202f94u: goto label_202f94;
        case 0x202f98u: goto label_202f98;
        case 0x202f9cu: goto label_202f9c;
        case 0x202fa0u: goto label_202fa0;
        case 0x202fa4u: goto label_202fa4;
        case 0x202fa8u: goto label_202fa8;
        case 0x202facu: goto label_202fac;
        case 0x202fb0u: goto label_202fb0;
        case 0x202fb4u: goto label_202fb4;
        case 0x202fb8u: goto label_202fb8;
        case 0x202fbcu: goto label_202fbc;
        case 0x202fc0u: goto label_202fc0;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fc8u: goto label_202fc8;
        case 0x202fccu: goto label_202fcc;
        case 0x202fd0u: goto label_202fd0;
        case 0x202fd4u: goto label_202fd4;
        case 0x202fd8u: goto label_202fd8;
        case 0x202fdcu: goto label_202fdc;
        case 0x202fe0u: goto label_202fe0;
        case 0x202fe4u: goto label_202fe4;
        case 0x202fe8u: goto label_202fe8;
        case 0x202fecu: goto label_202fec;
        case 0x202ff0u: goto label_202ff0;
        case 0x202ff4u: goto label_202ff4;
        case 0x202ff8u: goto label_202ff8;
        case 0x202ffcu: goto label_202ffc;
        case 0x203000u: goto label_203000;
        case 0x203004u: goto label_203004;
        case 0x203008u: goto label_203008;
        case 0x20300cu: goto label_20300c;
        case 0x203010u: goto label_203010;
        case 0x203014u: goto label_203014;
        case 0x203018u: goto label_203018;
        case 0x20301cu: goto label_20301c;
        case 0x203020u: goto label_203020;
        case 0x203024u: goto label_203024;
        case 0x203028u: goto label_203028;
        case 0x20302cu: goto label_20302c;
        case 0x203030u: goto label_203030;
        case 0x203034u: goto label_203034;
        case 0x203038u: goto label_203038;
        case 0x20303cu: goto label_20303c;
        case 0x203040u: goto label_203040;
        case 0x203044u: goto label_203044;
        case 0x203048u: goto label_203048;
        case 0x20304cu: goto label_20304c;
        case 0x203050u: goto label_203050;
        case 0x203054u: goto label_203054;
        case 0x203058u: goto label_203058;
        case 0x20305cu: goto label_20305c;
        case 0x203060u: goto label_203060;
        case 0x203064u: goto label_203064;
        case 0x203068u: goto label_203068;
        case 0x20306cu: goto label_20306c;
        case 0x203070u: goto label_203070;
        case 0x203074u: goto label_203074;
        case 0x203078u: goto label_203078;
        case 0x20307cu: goto label_20307c;
        case 0x203080u: goto label_203080;
        case 0x203084u: goto label_203084;
        case 0x203088u: goto label_203088;
        case 0x20308cu: goto label_20308c;
        case 0x203090u: goto label_203090;
        case 0x203094u: goto label_203094;
        case 0x203098u: goto label_203098;
        case 0x20309cu: goto label_20309c;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030a4u: goto label_2030a4;
        default: return;
    }

label_2028d8:
    // 0x2028d8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2028dc:
    // 0x2028dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2028e0:
    // 0x2028e0: 0x8c22f454  lw          $v0, -0xBAC($at)
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964308)));
label_2028e4:
    // 0x2028e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2028e8:
    // 0x2028e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2028ec:
    // 0x2028ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2028f0:
    // 0x2028f0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2028f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2028f4:
    // 0x2028f4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2028f8:
    if (ctx->pc == 0x2028F8u) {
        ctx->pc = 0x2028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F4u;
        // 0x2028f8: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2028FCu;
        goto label_2028fc;
    }
    ctx->pc = 0x2028F4u;
    {
        const bool branch_taken_0x2028f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F4u;
        // 0x2028f8: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028f4) {
            ctx->pc = 0x20293Cu;
            goto label_20293c;
        }
    }
    ctx->pc = 0x2028FCu;
label_2028fc:
    // 0x2028fc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202900:
    // 0x202900: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_202904:
    // 0x202904: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_202908:
    // 0x202908: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x202908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_20290c:
    // 0x20290c: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_202910:
    // 0x202910: 0xc07aa5c  jal         func_1EA970
label_202914:
    if (ctx->pc == 0x202914u) {
        ctx->pc = 0x202914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202910u;
        // 0x202914: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202918u;
        goto label_202918;
    }
    ctx->pc = 0x202910u;
    SET_GPR_U32(ctx, 31, 0x202918u);
    ctx->pc = 0x202914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202910u;
    // 0x202914: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x202918u;
label_202918:
    // 0x202918: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20291c:
    // 0x20291c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_202920:
    // 0x202920: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x202920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_202924:
    // 0x202924: 0xc07aa7c  jal         func_1EA9F0
label_202928:
    if (ctx->pc == 0x202928u) {
        ctx->pc = 0x202928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202924u;
        // 0x202928: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20292Cu;
        goto label_20292c;
    }
    ctx->pc = 0x202924u;
    SET_GPR_U32(ctx, 31, 0x20292Cu);
    ctx->pc = 0x202928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202924u;
    // 0x202928: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x20292Cu;
label_20292c:
    // 0x20292c: 0xc07ab08  jal         func_1EAC20
label_202930:
    if (ctx->pc == 0x202930u) {
        ctx->pc = 0x202930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20292Cu;
        // 0x202930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202934u;
        goto label_202934;
    }
    ctx->pc = 0x20292Cu;
    SET_GPR_U32(ctx, 31, 0x202934u);
    ctx->pc = 0x202930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20292Cu;
    // 0x202930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x202934u;
label_202934:
    // 0x202934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202938:
    // 0x202938: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x202938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_20293c:
    // 0x20293c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_202940:
    // 0x202940: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x202940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_202944:
    // 0x202944: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_202948:
    if (ctx->pc == 0x202948u) {
        ctx->pc = 0x20294Cu;
        goto label_20294c;
    }
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202944) {
            ctx->pc = 0x2029B4u;
            goto label_2029b4;
        }
    }
    ctx->pc = 0x20294Cu;
label_20294c:
    // 0x20294c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_202950:
    // 0x202950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_202954:
    if (ctx->pc == 0x202954u) {
        ctx->pc = 0x202958u;
        goto label_202958;
    }
    ctx->pc = 0x202950u;
    {
        const bool branch_taken_0x202950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202950) {
            ctx->pc = 0x20296Cu;
            goto label_20296c;
        }
    }
    ctx->pc = 0x202958u;
label_202958:
    // 0x202958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20295c:
    // 0x20295c: 0xc080aec  jal         func_202BB0
label_202960:
    if (ctx->pc == 0x202960u) {
        ctx->pc = 0x202960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20295Cu;
        // 0x202960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202964u;
        goto label_202964;
    }
    ctx->pc = 0x20295Cu;
    SET_GPR_U32(ctx, 31, 0x202964u);
    ctx->pc = 0x202960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20295Cu;
    // 0x202960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202BB0u;
    goto label_202bb0;
    ctx->pc = 0x202964u;
label_202964:
    // 0x202964: 0x10000088  b           . + 4 + (0x88 << 2)
label_202968:
    if (ctx->pc == 0x202968u) {
        ctx->pc = 0x202968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202964u;
        // 0x202968: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20296Cu;
        goto label_20296c;
    }
    ctx->pc = 0x202964u;
    {
        const bool branch_taken_0x202964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202964u;
        // 0x202968: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202964) {
            ctx->pc = 0x202B88u;
            goto label_202b88;
        }
    }
    ctx->pc = 0x20296Cu;
label_20296c:
    // 0x20296c: 0xc07aa90  jal         func_1EAA40
label_202970:
    if (ctx->pc == 0x202970u) {
        ctx->pc = 0x202970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20296Cu;
        // 0x202970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202974u;
        goto label_202974;
    }
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20296Cu;
    // 0x202970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA40u;
    { ctx->pc = 0x1eaa40; return; }
    ctx->pc = 0x202974u;
label_202974:
    // 0x202974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202978:
    // 0x202978: 0x14430082  bne         $v0, $v1, . + 4 + (0x82 << 2)
label_20297c:
    if (ctx->pc == 0x20297Cu) {
        ctx->pc = 0x202980u;
        goto label_202980;
    }
    ctx->pc = 0x202978u;
    {
        const bool branch_taken_0x202978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202978) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x202980u;
label_202980:
    // 0x202980: 0xc07aa8c  jal         func_1EAA30
label_202984:
    if (ctx->pc == 0x202984u) {
        ctx->pc = 0x202988u;
        goto label_202988;
    }
    ctx->pc = 0x202980u;
    SET_GPR_U32(ctx, 31, 0x202988u);
    ctx->pc = 0x1EAA30u;
    { ctx->pc = 0x1eaa30; return; }
    ctx->pc = 0x202988u;
label_202988:
    // 0x202988: 0xc07ab18  jal         func_1EAC60
label_20298c:
    if (ctx->pc == 0x20298Cu) {
        ctx->pc = 0x20298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202988u;
        // 0x20298c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202990u;
        goto label_202990;
    }
    ctx->pc = 0x202988u;
    SET_GPR_U32(ctx, 31, 0x202990u);
    ctx->pc = 0x20298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202988u;
    // 0x20298c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x202990u;
label_202990:
    // 0x202990: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x202990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_202994:
    // 0x202994: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x202994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_202998:
    // 0x202998: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20299c:
    // 0x20299c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2029a0:
    // 0x2029a0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2029a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2029a4:
    // 0x2029a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2029a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2029a8:
    // 0x2029a8: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x2029a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_2029ac:
    // 0x2029ac: 0x10000075  b           . + 4 + (0x75 << 2)
label_2029b0:
    if (ctx->pc == 0x2029B0u) {
        ctx->pc = 0x2029B4u;
        goto label_2029b4;
    }
    ctx->pc = 0x2029ACu;
    {
        const bool branch_taken_0x2029ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029ac) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x2029B4u;
label_2029b4:
    // 0x2029b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2029b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2029b8:
    // 0x2029b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2029b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2029bc:
    // 0x2029bc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2029c0:
    if (ctx->pc == 0x2029C0u) {
        ctx->pc = 0x2029C4u;
        goto label_2029c4;
    }
    ctx->pc = 0x2029BCu;
    {
        const bool branch_taken_0x2029bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2029bc) {
            ctx->pc = 0x2029F8u;
            goto label_2029f8;
        }
    }
    ctx->pc = 0x2029C4u;
label_2029c4:
    // 0x2029c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2029c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2029c8:
    // 0x2029c8: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
label_2029cc:
    if (ctx->pc == 0x2029CCu) {
        ctx->pc = 0x2029CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029C8u;
        // 0x2029cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2029D0u;
        goto label_2029d0;
    }
    ctx->pc = 0x2029C8u;
    {
        const bool branch_taken_0x2029c8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2029CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029C8u;
        // 0x2029cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029c8) {
            ctx->pc = 0x2029E8u;
            goto label_2029e8;
        }
    }
    ctx->pc = 0x2029D0u;
label_2029d0:
    // 0x2029d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2029d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2029d4:
    // 0x2029d4: 0xc080e08  jal         func_203820
label_2029d8:
    if (ctx->pc == 0x2029D8u) {
        ctx->pc = 0x2029D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029D4u;
        // 0x2029d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2029DCu;
        goto label_2029dc;
    }
    ctx->pc = 0x2029D4u;
    SET_GPR_U32(ctx, 31, 0x2029DCu);
    ctx->pc = 0x2029D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029D4u;
    // 0x2029d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203820u;
    { ctx->pc = 0x203820; return; }
    ctx->pc = 0x2029DCu;
label_2029dc:
    // 0x2029dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2029e0:
    if (ctx->pc == 0x2029E0u) {
        ctx->pc = 0x2029E4u;
        goto label_2029e4;
    }
    ctx->pc = 0x2029DCu;
    {
        const bool branch_taken_0x2029dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029dc) {
            ctx->pc = 0x2029F8u;
            goto label_2029f8;
        }
    }
    ctx->pc = 0x2029E4u;
label_2029e4:
    // 0x2029e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2029e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2029e8:
    // 0x2029e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2029ec:
    // 0x2029ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2029ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2029f0:
    // 0x2029f0: 0xc080ba4  jal         func_202E90
label_2029f4:
    if (ctx->pc == 0x2029F4u) {
        ctx->pc = 0x2029F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029F0u;
        // 0x2029f4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2029F8u;
        goto label_2029f8;
    }
    ctx->pc = 0x2029F0u;
    SET_GPR_U32(ctx, 31, 0x2029F8u);
    ctx->pc = 0x2029F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029F0u;
    // 0x2029f4: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E90u;
    goto label_202e90;
    ctx->pc = 0x2029F8u;
label_2029f8:
    // 0x2029f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2029f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2029fc:
    // 0x2029fc: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x2029fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_202a00:
    // 0x202a00: 0x8c22f460  lw          $v0, -0xBA0($at)
    ctx->pc = 0x202a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_202a04:
    // 0x202a04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202a08:
    // 0x202a08: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_202a0c:
    if (ctx->pc == 0x202A0Cu) {
        ctx->pc = 0x202A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A08u;
        // 0x202a0c: 0x2694f460  addiu       $s4, $s4, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A10u;
        goto label_202a10;
    }
    ctx->pc = 0x202A08u;
    {
        const bool branch_taken_0x202a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x202A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A08u;
        // 0x202a0c: 0x2694f460  addiu       $s4, $s4, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a08) {
            ctx->pc = 0x202A34u;
            goto label_202a34;
        }
    }
    ctx->pc = 0x202A10u;
label_202a10:
    // 0x202a10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_202a14:
    if (ctx->pc == 0x202A14u) {
        ctx->pc = 0x202A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A10u;
        // 0x202a14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A18u;
        goto label_202a18;
    }
    ctx->pc = 0x202A10u;
    {
        const bool branch_taken_0x202a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A10u;
        // 0x202a14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a10) {
            ctx->pc = 0x202A24u;
            goto label_202a24;
        }
    }
    ctx->pc = 0x202A18u;
label_202a18:
    // 0x202a18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_202a1c:
    if (ctx->pc == 0x202A1Cu) {
        ctx->pc = 0x202A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A18u;
        // 0x202a1c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A20u;
        goto label_202a20;
    }
    ctx->pc = 0x202A18u;
    {
        const bool branch_taken_0x202a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A18u;
        // 0x202a1c: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a18) {
            ctx->pc = 0x202AC4u;
            goto label_202ac4;
        }
    }
    ctx->pc = 0x202A20u;
label_202a20:
    // 0x202a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202a24:
    // 0x202a24: 0xc0810f0  jal         func_2043C0
label_202a28:
    if (ctx->pc == 0x202A28u) {
        ctx->pc = 0x202A2Cu;
        goto label_202a2c;
    }
    ctx->pc = 0x202A24u;
    SET_GPR_U32(ctx, 31, 0x202A2Cu);
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x202A2Cu;
label_202a2c:
    // 0x202a2c: 0x10000024  b           . + 4 + (0x24 << 2)
label_202a30:
    if (ctx->pc == 0x202A30u) {
        ctx->pc = 0x202A34u;
        goto label_202a34;
    }
    ctx->pc = 0x202A2Cu;
    {
        const bool branch_taken_0x202a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a2c) {
            ctx->pc = 0x202AC0u;
            goto label_202ac0;
        }
    }
    ctx->pc = 0x202A34u;
label_202a34:
    // 0x202a34: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x202a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_202a38:
    // 0x202a38: 0xc06c672  jal         func_1B19C8
label_202a3c:
    if (ctx->pc == 0x202A3Cu) {
        ctx->pc = 0x202A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A38u;
        // 0x202a3c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A40u;
        goto label_202a40;
    }
    ctx->pc = 0x202A38u;
    SET_GPR_U32(ctx, 31, 0x202A40u);
    ctx->pc = 0x202A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A38u;
    // 0x202a3c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x202A40u;
label_202a40:
    // 0x202a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202a44:
    // 0x202a44: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_202a48:
    if (ctx->pc == 0x202A48u) {
        ctx->pc = 0x202A4Cu;
        goto label_202a4c;
    }
    ctx->pc = 0x202A44u;
    {
        const bool branch_taken_0x202a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202a44) {
            ctx->pc = 0x202AC0u;
            goto label_202ac0;
        }
    }
    ctx->pc = 0x202A4Cu;
label_202a4c:
    // 0x202a4c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_202a50:
    // 0x202a50: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_202a54:
    // 0x202a54: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_202a58:
    // 0x202a58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x202a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_202a5c:
    // 0x202a5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202a60:
    // 0x202a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202a64:
    // 0x202a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202a68:
    // 0x202a68: 0x40f809  jalr        $v0
label_202a6c:
    if (ctx->pc == 0x202A6Cu) {
        ctx->pc = 0x202A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A68u;
        // 0x202a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A70u;
        goto label_202a70;
    }
    ctx->pc = 0x202A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202A70u);
        ctx->pc = 0x202A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A68u;
        // 0x202a6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A68u, 0x202A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202A70u;
label_202a70:
    // 0x202a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_202a74:
    if (ctx->pc == 0x202A74u) {
        ctx->pc = 0x202A78u;
        goto label_202a78;
    }
    ctx->pc = 0x202A70u;
    {
        const bool branch_taken_0x202a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a70) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202A78u;
label_202a78:
    // 0x202a78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202a7c:
    // 0x202a7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_202a80:
    if (ctx->pc == 0x202A80u) {
        ctx->pc = 0x202A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A7Cu;
        // 0x202a80: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202A84u;
        goto label_202a84;
    }
    ctx->pc = 0x202A7Cu;
    {
        const bool branch_taken_0x202a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A7Cu;
        // 0x202a80: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a7c) {
            ctx->pc = 0x202ABCu;
            goto label_202abc;
        }
    }
    ctx->pc = 0x202A84u;
label_202a84:
    // 0x202a84: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_202a88:
    // 0x202a88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_202a8c:
    if (ctx->pc == 0x202A8Cu) {
        ctx->pc = 0x202A90u;
        goto label_202a90;
    }
    ctx->pc = 0x202A88u;
    {
        const bool branch_taken_0x202a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a88) {
            ctx->pc = 0x202AACu;
            goto label_202aac;
        }
    }
    ctx->pc = 0x202A90u;
label_202a90:
    // 0x202a90: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_202a94:
    // 0x202a94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_202a98:
    // 0x202a98: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x202a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_202a9c:
    // 0x202a9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_202aa0:
    if (ctx->pc == 0x202AA0u) {
        ctx->pc = 0x202AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A9Cu;
        // 0x202aa0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202AA4u;
        goto label_202aa4;
    }
    ctx->pc = 0x202A9Cu;
    {
        const bool branch_taken_0x202a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A9Cu;
        // 0x202aa0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a9c) {
            ctx->pc = 0x202AACu;
            goto label_202aac;
        }
    }
    ctx->pc = 0x202AA4u;
label_202aa4:
    // 0x202aa4: 0x10000006  b           . + 4 + (0x6 << 2)
label_202aa8:
    if (ctx->pc == 0x202AA8u) {
        ctx->pc = 0x202AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AA4u;
        // 0x202aa8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202AACu;
        goto label_202aac;
    }
    ctx->pc = 0x202AA4u;
    {
        const bool branch_taken_0x202aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AA4u;
        // 0x202aa8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202aa4) {
            ctx->pc = 0x202AC0u;
            goto label_202ac0;
        }
    }
    ctx->pc = 0x202AACu;
label_202aac:
    // 0x202aac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_202ab0:
    // 0x202ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x202ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202ab4:
    // 0x202ab4: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x202ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_202ab8:
    // 0x202ab8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x202ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_202abc:
    // 0x202abc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x202abcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_202ac0:
    // 0x202ac0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x202ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_202ac4:
    // 0x202ac4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x202ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_202ac8:
    // 0x202ac8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202acc:
    // 0x202acc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_202ad0:
    if (ctx->pc == 0x202AD0u) {
        ctx->pc = 0x202AD4u;
        goto label_202ad4;
    }
    ctx->pc = 0x202ACCu;
    {
        const bool branch_taken_0x202acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202acc) {
            ctx->pc = 0x202ADCu;
            goto label_202adc;
        }
    }
    ctx->pc = 0x202AD4u;
label_202ad4:
    // 0x202ad4: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x202ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_202ad8:
    // 0x202ad8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202adc:
    // 0x202adc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_202ae0:
    if (ctx->pc == 0x202AE0u) {
        ctx->pc = 0x202AE4u;
        goto label_202ae4;
    }
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x202AE4u;
label_202ae4:
    // 0x202ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202ae8:
    // 0x202ae8: 0x16a20014  bne         $s5, $v0, . + 4 + (0x14 << 2)
label_202aec:
    if (ctx->pc == 0x202AECu) {
        ctx->pc = 0x202AF0u;
        goto label_202af0;
    }
    ctx->pc = 0x202AE8u;
    {
        const bool branch_taken_0x202ae8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x202ae8) {
            ctx->pc = 0x202B3Cu;
            goto label_202b3c;
        }
    }
    ctx->pc = 0x202AF0u;
label_202af0:
    // 0x202af0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202af4:
    // 0x202af4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202af8:
    // 0x202af8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_202afc:
    if (ctx->pc == 0x202AFCu) {
        ctx->pc = 0x202AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF8u;
        // 0x202afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B00u;
        goto label_202b00;
    }
    ctx->pc = 0x202AF8u;
    {
        const bool branch_taken_0x202af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF8u;
        // 0x202afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202af8) {
            ctx->pc = 0x202B20u;
            goto label_202b20;
        }
    }
    ctx->pc = 0x202B00u;
label_202b00:
    // 0x202b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202b04:
    // 0x202b04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202b08:
    // 0x202b08: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x202b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_202b0c:
    // 0x202b0c: 0xc080e80  jal         func_203A00
label_202b10:
    if (ctx->pc == 0x202B10u) {
        ctx->pc = 0x202B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B0Cu;
        // 0x202b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B14u;
        goto label_202b14;
    }
    ctx->pc = 0x202B0Cu;
    SET_GPR_U32(ctx, 31, 0x202B14u);
    ctx->pc = 0x202B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B0Cu;
    // 0x202b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A00u;
    { ctx->pc = 0x203a00; return; }
    ctx->pc = 0x202B14u;
label_202b14:
    // 0x202b14: 0x10000007  b           . + 4 + (0x7 << 2)
label_202b18:
    if (ctx->pc == 0x202B18u) {
        ctx->pc = 0x202B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B14u;
        // 0x202b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B1Cu;
        goto label_202b1c;
    }
    ctx->pc = 0x202B14u;
    {
        const bool branch_taken_0x202b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B14u;
        // 0x202b18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b14) {
            ctx->pc = 0x202B34u;
            goto label_202b34;
        }
    }
    ctx->pc = 0x202B1Cu;
label_202b1c:
    // 0x202b1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202b20:
    // 0x202b20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202b24:
    // 0x202b24: 0xc080f0c  jal         func_203C30
label_202b28:
    if (ctx->pc == 0x202B28u) {
        ctx->pc = 0x202B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B24u;
        // 0x202b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B2Cu;
        goto label_202b2c;
    }
    ctx->pc = 0x202B24u;
    SET_GPR_U32(ctx, 31, 0x202B2Cu);
    ctx->pc = 0x202B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B24u;
    // 0x202b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203C30u;
    { ctx->pc = 0x203c30; return; }
    ctx->pc = 0x202B2Cu;
label_202b2c:
    // 0x202b2c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x202b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_202b30:
    // 0x202b30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_202b34:
    // 0x202b34: 0x10000013  b           . + 4 + (0x13 << 2)
label_202b38:
    if (ctx->pc == 0x202B38u) {
        ctx->pc = 0x202B3Cu;
        goto label_202b3c;
    }
    ctx->pc = 0x202B34u;
    {
        const bool branch_taken_0x202b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b34) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x202B3Cu;
label_202b3c:
    // 0x202b3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202b40:
    // 0x202b40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202b44:
    // 0x202b44: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_202b48:
    if (ctx->pc == 0x202B48u) {
        ctx->pc = 0x202B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B44u;
        // 0x202b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B4Cu;
        goto label_202b4c;
    }
    ctx->pc = 0x202B44u;
    {
        const bool branch_taken_0x202b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B44u;
        // 0x202b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b44) {
            ctx->pc = 0x202B6Cu;
            goto label_202b6c;
        }
    }
    ctx->pc = 0x202B4Cu;
label_202b4c:
    // 0x202b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202b50:
    // 0x202b50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202b54:
    // 0x202b54: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x202b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_202b58:
    // 0x202b58: 0xc080cd0  jal         func_203340
label_202b5c:
    if (ctx->pc == 0x202B5Cu) {
        ctx->pc = 0x202B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B58u;
        // 0x202b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B60u;
        goto label_202b60;
    }
    ctx->pc = 0x202B58u;
    SET_GPR_U32(ctx, 31, 0x202B60u);
    ctx->pc = 0x202B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B58u;
    // 0x202b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203340u;
    { ctx->pc = 0x203340; return; }
    ctx->pc = 0x202B60u;
label_202b60:
    // 0x202b60: 0x10000008  b           . + 4 + (0x8 << 2)
label_202b64:
    if (ctx->pc == 0x202B64u) {
        ctx->pc = 0x202B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B60u;
        // 0x202b64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B68u;
        goto label_202b68;
    }
    ctx->pc = 0x202B60u;
    {
        const bool branch_taken_0x202b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B60u;
        // 0x202b64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b60) {
            ctx->pc = 0x202B84u;
            goto label_202b84;
        }
    }
    ctx->pc = 0x202B68u;
label_202b68:
    // 0x202b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202b6c:
    // 0x202b6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202b70:
    // 0x202b70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x202b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_202b74:
    // 0x202b74: 0xc080d84  jal         func_203610
label_202b78:
    if (ctx->pc == 0x202B78u) {
        ctx->pc = 0x202B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B74u;
        // 0x202b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202B7Cu;
        goto label_202b7c;
    }
    ctx->pc = 0x202B74u;
    SET_GPR_U32(ctx, 31, 0x202B7Cu);
    ctx->pc = 0x202B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B74u;
    // 0x202b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203610u;
    { ctx->pc = 0x203610; return; }
    ctx->pc = 0x202B7Cu;
label_202b7c:
    // 0x202b7c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x202b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_202b80:
    // 0x202b80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_202b84:
    // 0x202b84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x202b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202b88:
    // 0x202b88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x202b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_202b8c:
    // 0x202b8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x202b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_202b90:
    // 0x202b90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x202b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_202b94:
    // 0x202b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x202b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202b98:
    // 0x202b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202b9c:
    // 0x202b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202ba0:
    // 0x202ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202ba4:
    // 0x202ba4: 0x3e00008  jr          $ra
label_202ba8:
    if (ctx->pc == 0x202BA8u) {
        ctx->pc = 0x202BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BA4u;
        // 0x202ba8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202BACu;
        goto label_202bac;
    }
    ctx->pc = 0x202BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BA4u;
        // 0x202ba8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202BACu;
label_202bac:
    // 0x202bac: 0x0  nop
    ctx->pc = 0x202bacu;
    // NOP
label_202bb0:
    // 0x202bb0: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x202bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
label_202bb4:
    // 0x202bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x202bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_202bb8:
    // 0x202bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x202bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_202bbc:
    // 0x202bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_202bc0:
    // 0x202bc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x202bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202bc4:
    // 0x202bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_202bc8:
    // 0x202bc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202bcc:
    // 0x202bcc: 0xc07aaa4  jal         func_1EAA90
label_202bd0:
    if (ctx->pc == 0x202BD0u) {
        ctx->pc = 0x202BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BCCu;
        // 0x202bd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202BD4u;
        goto label_202bd4;
    }
    ctx->pc = 0x202BCCu;
    SET_GPR_U32(ctx, 31, 0x202BD4u);
    ctx->pc = 0x202BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BCCu;
    // 0x202bd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x202BD4u;
label_202bd4:
    // 0x202bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202bd8:
    // 0x202bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202bdc:
    // 0x202bdc: 0x16040049  bne         $s0, $a0, . + 4 + (0x49 << 2)
label_202be0:
    if (ctx->pc == 0x202BE0u) {
        ctx->pc = 0x202BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BDCu;
        // 0x202be0: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202BE4u;
        goto label_202be4;
    }
    ctx->pc = 0x202BDCu;
    {
        const bool branch_taken_0x202bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x202BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BDCu;
        // 0x202be0: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bdc) {
            ctx->pc = 0x202D04u;
            goto label_202d04;
        }
    }
    ctx->pc = 0x202BE4u;
label_202be4:
    // 0x202be4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_202be8:
    // 0x202be8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x202be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202bec:
    // 0x202bec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_202bf0:
    if (ctx->pc == 0x202BF0u) {
        ctx->pc = 0x202BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BECu;
        // 0x202bf0: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202BF4u;
        goto label_202bf4;
    }
    ctx->pc = 0x202BECu;
    {
        const bool branch_taken_0x202bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x202BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BECu;
        // 0x202bf0: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bec) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202BF4u;
label_202bf4:
    // 0x202bf4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x202bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_202bf8:
    // 0x202bf8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x202bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_202bfc:
    // 0x202bfc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_202c00:
    // 0x202c00: 0x8c23f460  lw          $v1, -0xBA0($at)
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_202c04:
    // 0x202c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202c08:
    // 0x202c08: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_202c0c:
    if (ctx->pc == 0x202C0Cu) {
        ctx->pc = 0x202C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C08u;
        // 0x202c0c: 0x2610f460  addiu       $s0, $s0, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C10u;
        goto label_202c10;
    }
    ctx->pc = 0x202C08u;
    {
        const bool branch_taken_0x202c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x202C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C08u;
        // 0x202c0c: 0x2610f460  addiu       $s0, $s0, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c08) {
            ctx->pc = 0x202C30u;
            goto label_202c30;
        }
    }
    ctx->pc = 0x202C10u;
label_202c10:
    // 0x202c10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_202c14:
    if (ctx->pc == 0x202C14u) {
        ctx->pc = 0x202C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C10u;
        // 0x202c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C18u;
        goto label_202c18;
    }
    ctx->pc = 0x202C10u;
    {
        const bool branch_taken_0x202c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C10u;
        // 0x202c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c10) {
            ctx->pc = 0x202C20u;
            goto label_202c20;
        }
    }
    ctx->pc = 0x202C18u;
label_202c18:
    // 0x202c18: 0x10000028  b           . + 4 + (0x28 << 2)
label_202c1c:
    if (ctx->pc == 0x202C1Cu) {
        ctx->pc = 0x202C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C18u;
        // 0x202c1c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C20u;
        goto label_202c20;
    }
    ctx->pc = 0x202C18u;
    {
        const bool branch_taken_0x202c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C18u;
        // 0x202c1c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c18) {
            ctx->pc = 0x202CBCu;
            goto label_202cbc;
        }
    }
    ctx->pc = 0x202C20u;
label_202c20:
    // 0x202c20: 0xc0810f0  jal         func_2043C0
label_202c24:
    if (ctx->pc == 0x202C24u) {
        ctx->pc = 0x202C28u;
        goto label_202c28;
    }
    ctx->pc = 0x202C20u;
    SET_GPR_U32(ctx, 31, 0x202C28u);
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x202C28u;
label_202c28:
    // 0x202c28: 0x10000023  b           . + 4 + (0x23 << 2)
label_202c2c:
    if (ctx->pc == 0x202C2Cu) {
        ctx->pc = 0x202C30u;
        goto label_202c30;
    }
    ctx->pc = 0x202C28u;
    {
        const bool branch_taken_0x202c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c28) {
            ctx->pc = 0x202CB8u;
            goto label_202cb8;
        }
    }
    ctx->pc = 0x202C30u;
label_202c30:
    // 0x202c30: 0x27a50354  addiu       $a1, $sp, 0x354
    ctx->pc = 0x202c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 852));
label_202c34:
    // 0x202c34: 0xc06c672  jal         func_1B19C8
label_202c38:
    if (ctx->pc == 0x202C38u) {
        ctx->pc = 0x202C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C34u;
        // 0x202c38: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C3Cu;
        goto label_202c3c;
    }
    ctx->pc = 0x202C34u;
    SET_GPR_U32(ctx, 31, 0x202C3Cu);
    ctx->pc = 0x202C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C34u;
    // 0x202c38: 0x27a60350  addiu       $a2, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x202C3Cu;
label_202c3c:
    // 0x202c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202c40:
    // 0x202c40: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_202c44:
    if (ctx->pc == 0x202C44u) {
        ctx->pc = 0x202C48u;
        goto label_202c48;
    }
    ctx->pc = 0x202C40u;
    {
        const bool branch_taken_0x202c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202c40) {
            ctx->pc = 0x202CB8u;
            goto label_202cb8;
        }
    }
    ctx->pc = 0x202C48u;
label_202c48:
    // 0x202c48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_202c4c:
    // 0x202c4c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x202c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_202c50:
    // 0x202c50: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x202c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_202c54:
    // 0x202c54: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x202c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_202c58:
    // 0x202c58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202c5c:
    // 0x202c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202c60:
    // 0x202c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202c64:
    // 0x202c64: 0x40f809  jalr        $v0
label_202c68:
    if (ctx->pc == 0x202C68u) {
        ctx->pc = 0x202C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C64u;
        // 0x202c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C6Cu;
        goto label_202c6c;
    }
    ctx->pc = 0x202C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202C6Cu);
        ctx->pc = 0x202C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C64u;
        // 0x202c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C64u, 0x202C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202C6Cu;
label_202c6c:
    // 0x202c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_202c70:
    if (ctx->pc == 0x202C70u) {
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C6Cu;
        // 0x202c70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C74u;
        goto label_202c74;
    }
    ctx->pc = 0x202C6Cu;
    {
        const bool branch_taken_0x202c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C6Cu;
        // 0x202c70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c6c) {
            ctx->pc = 0x202C7Cu;
            goto label_202c7c;
        }
    }
    ctx->pc = 0x202C74u;
label_202c74:
    // 0x202c74: 0x1000000f  b           . + 4 + (0xF << 2)
label_202c78:
    if (ctx->pc == 0x202C78u) {
        ctx->pc = 0x202C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C74u;
        // 0x202c78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C7Cu;
        goto label_202c7c;
    }
    ctx->pc = 0x202C74u;
    {
        const bool branch_taken_0x202c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C74u;
        // 0x202c78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c74) {
            ctx->pc = 0x202CB4u;
            goto label_202cb4;
        }
    }
    ctx->pc = 0x202C7Cu;
label_202c7c:
    // 0x202c7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x202c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_202c80:
    // 0x202c80: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_202c84:
    if (ctx->pc == 0x202C84u) {
        ctx->pc = 0x202C88u;
        goto label_202c88;
    }
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202CA4u;
            goto label_202ca4;
        }
    }
    ctx->pc = 0x202C88u;
label_202c88:
    // 0x202c88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x202c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_202c8c:
    // 0x202c8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_202c90:
    // 0x202c90: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_202c94:
    // 0x202c94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_202c98:
    if (ctx->pc == 0x202C98u) {
        ctx->pc = 0x202C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C94u;
        // 0x202c98: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202C9Cu;
        goto label_202c9c;
    }
    ctx->pc = 0x202C94u;
    {
        const bool branch_taken_0x202c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C94u;
        // 0x202c98: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c94) {
            ctx->pc = 0x202CA4u;
            goto label_202ca4;
        }
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_202ca0:
    if (ctx->pc == 0x202CA0u) {
        ctx->pc = 0x202CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C9Cu;
        // 0x202ca0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202CA4u;
        goto label_202ca4;
    }
    ctx->pc = 0x202C9Cu;
    {
        const bool branch_taken_0x202c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C9Cu;
        // 0x202ca0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c9c) {
            ctx->pc = 0x202CB8u;
            goto label_202cb8;
        }
    }
    ctx->pc = 0x202CA4u;
label_202ca4:
    // 0x202ca4: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_202ca8:
    // 0x202ca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202cac:
    // 0x202cac: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x202cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_202cb0:
    // 0x202cb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x202cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_202cb4:
    // 0x202cb4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x202cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_202cb8:
    // 0x202cb8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x202cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_202cbc:
    // 0x202cbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202cc0:
    // 0x202cc0: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_202cc4:
    if (ctx->pc == 0x202CC4u) {
        ctx->pc = 0x202CC8u;
        goto label_202cc8;
    }
    ctx->pc = 0x202CC0u;
    {
        const bool branch_taken_0x202cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x202cc0) {
            ctx->pc = 0x202E70u;
            goto label_202e70;
        }
    }
    ctx->pc = 0x202CC8u;
label_202cc8:
    // 0x202cc8: 0xc07aaa0  jal         func_1EAA80
label_202ccc:
    if (ctx->pc == 0x202CCCu) {
        ctx->pc = 0x202CD0u;
        goto label_202cd0;
    }
    ctx->pc = 0x202CC8u;
    SET_GPR_U32(ctx, 31, 0x202CD0u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x202CD0u;
label_202cd0:
    // 0x202cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202cd4:
    // 0x202cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202cd8:
    // 0x202cd8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x202cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202cdc:
    // 0x202cdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ce0:
    // 0x202ce0: 0xc08104c  jal         func_204130
label_202ce4:
    if (ctx->pc == 0x202CE4u) {
        ctx->pc = 0x202CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CE0u;
        // 0x202ce4: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202CE8u;
        goto label_202ce8;
    }
    ctx->pc = 0x202CE0u;
    SET_GPR_U32(ctx, 31, 0x202CE8u);
    ctx->pc = 0x202CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CE0u;
    // 0x202ce4: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202CE8u;
label_202ce8:
    // 0x202ce8: 0xc07aaa8  jal         func_1EAAA0
label_202cec:
    if (ctx->pc == 0x202CECu) {
        ctx->pc = 0x202CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CE8u;
        // 0x202cec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202CF0u;
        goto label_202cf0;
    }
    ctx->pc = 0x202CE8u;
    SET_GPR_U32(ctx, 31, 0x202CF0u);
    ctx->pc = 0x202CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CE8u;
    // 0x202cec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202CF0u;
label_202cf0:
    // 0x202cf0: 0xc07aa84  jal         func_1EAA10
label_202cf4:
    if (ctx->pc == 0x202CF4u) {
        ctx->pc = 0x202CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CF0u;
        // 0x202cf4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202CF8u;
        goto label_202cf8;
    }
    ctx->pc = 0x202CF0u;
    SET_GPR_U32(ctx, 31, 0x202CF8u);
    ctx->pc = 0x202CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CF0u;
    // 0x202cf4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x202CF8u;
label_202cf8:
    // 0x202cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202cfc:
    // 0x202cfc: 0x1000005c  b           . + 4 + (0x5C << 2)
label_202d00:
    if (ctx->pc == 0x202D00u) {
        ctx->pc = 0x202D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CFCu;
        // 0x202d00: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D04u;
        goto label_202d04;
    }
    ctx->pc = 0x202CFCu;
    {
        const bool branch_taken_0x202cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CFCu;
        // 0x202d00: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cfc) {
            ctx->pc = 0x202E70u;
            goto label_202e70;
        }
    }
    ctx->pc = 0x202D04u;
label_202d04:
    // 0x202d04: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_202d08:
    // 0x202d08: 0x8c23f460  lw          $v1, -0xBA0($at)
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_202d0c:
    // 0x202d0c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_202d10:
    if (ctx->pc == 0x202D10u) {
        ctx->pc = 0x202D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D0Cu;
        // 0x202d10: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D14u;
        goto label_202d14;
    }
    ctx->pc = 0x202D0Cu;
    {
        const bool branch_taken_0x202d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x202D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D0Cu;
        // 0x202d10: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d0c) {
            ctx->pc = 0x202D34u;
            goto label_202d34;
        }
    }
    ctx->pc = 0x202D14u;
label_202d14:
    // 0x202d14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_202d18:
    if (ctx->pc == 0x202D18u) {
        ctx->pc = 0x202D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D14u;
        // 0x202d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D1Cu;
        goto label_202d1c;
    }
    ctx->pc = 0x202D14u;
    {
        const bool branch_taken_0x202d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D14u;
        // 0x202d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d14) {
            ctx->pc = 0x202D24u;
            goto label_202d24;
        }
    }
    ctx->pc = 0x202D1Cu;
label_202d1c:
    // 0x202d1c: 0x10000028  b           . + 4 + (0x28 << 2)
label_202d20:
    if (ctx->pc == 0x202D20u) {
        ctx->pc = 0x202D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D1Cu;
        // 0x202d20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D24u;
        goto label_202d24;
    }
    ctx->pc = 0x202D1Cu;
    {
        const bool branch_taken_0x202d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D1Cu;
        // 0x202d20: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d1c) {
            ctx->pc = 0x202DC0u;
            goto label_202dc0;
        }
    }
    ctx->pc = 0x202D24u;
label_202d24:
    // 0x202d24: 0xc0810f0  jal         func_2043C0
label_202d28:
    if (ctx->pc == 0x202D28u) {
        ctx->pc = 0x202D2Cu;
        goto label_202d2c;
    }
    ctx->pc = 0x202D24u;
    SET_GPR_U32(ctx, 31, 0x202D2Cu);
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x202D2Cu;
label_202d2c:
    // 0x202d2c: 0x10000023  b           . + 4 + (0x23 << 2)
label_202d30:
    if (ctx->pc == 0x202D30u) {
        ctx->pc = 0x202D34u;
        goto label_202d34;
    }
    ctx->pc = 0x202D2Cu;
    {
        const bool branch_taken_0x202d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202d2c) {
            ctx->pc = 0x202DBCu;
            goto label_202dbc;
        }
    }
    ctx->pc = 0x202D34u;
label_202d34:
    // 0x202d34: 0x27a5035c  addiu       $a1, $sp, 0x35C
    ctx->pc = 0x202d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 860));
label_202d38:
    // 0x202d38: 0xc06c672  jal         func_1B19C8
label_202d3c:
    if (ctx->pc == 0x202D3Cu) {
        ctx->pc = 0x202D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D38u;
        // 0x202d3c: 0x27a60358  addiu       $a2, $sp, 0x358 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D40u;
        goto label_202d40;
    }
    ctx->pc = 0x202D38u;
    SET_GPR_U32(ctx, 31, 0x202D40u);
    ctx->pc = 0x202D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D38u;
    // 0x202d3c: 0x27a60358  addiu       $a2, $sp, 0x358 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x202D40u;
label_202d40:
    // 0x202d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202d44:
    // 0x202d44: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_202d48:
    if (ctx->pc == 0x202D48u) {
        ctx->pc = 0x202D4Cu;
        goto label_202d4c;
    }
    ctx->pc = 0x202D44u;
    {
        const bool branch_taken_0x202d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202d44) {
            ctx->pc = 0x202DBCu;
            goto label_202dbc;
        }
    }
    ctx->pc = 0x202D4Cu;
label_202d4c:
    // 0x202d4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x202d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_202d50:
    // 0x202d50: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x202d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_202d54:
    // 0x202d54: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x202d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_202d58:
    // 0x202d58: 0x8fa50358  lw          $a1, 0x358($sp)
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_202d5c:
    // 0x202d5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202d60:
    // 0x202d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202d64:
    // 0x202d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202d68:
    // 0x202d68: 0x40f809  jalr        $v0
label_202d6c:
    if (ctx->pc == 0x202D6Cu) {
        ctx->pc = 0x202D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D68u;
        // 0x202d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D70u;
        goto label_202d70;
    }
    ctx->pc = 0x202D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202D70u);
        ctx->pc = 0x202D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D68u;
        // 0x202d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D68u, 0x202D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202D70u;
label_202d70:
    // 0x202d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_202d74:
    if (ctx->pc == 0x202D74u) {
        ctx->pc = 0x202D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D70u;
        // 0x202d74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D78u;
        goto label_202d78;
    }
    ctx->pc = 0x202D70u;
    {
        const bool branch_taken_0x202d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D70u;
        // 0x202d74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d70) {
            ctx->pc = 0x202D80u;
            goto label_202d80;
        }
    }
    ctx->pc = 0x202D78u;
label_202d78:
    // 0x202d78: 0x1000000f  b           . + 4 + (0xF << 2)
label_202d7c:
    if (ctx->pc == 0x202D7Cu) {
        ctx->pc = 0x202D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D78u;
        // 0x202d7c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202D80u;
        goto label_202d80;
    }
    ctx->pc = 0x202D78u;
    {
        const bool branch_taken_0x202d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D78u;
        // 0x202d7c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d78) {
            ctx->pc = 0x202DB8u;
            goto label_202db8;
        }
    }
    ctx->pc = 0x202D80u;
label_202d80:
    // 0x202d80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x202d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_202d84:
    // 0x202d84: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_202d88:
    if (ctx->pc == 0x202D88u) {
        ctx->pc = 0x202D8Cu;
        goto label_202d8c;
    }
    ctx->pc = 0x202D84u;
    {
        const bool branch_taken_0x202d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202d84) {
            ctx->pc = 0x202DA8u;
            goto label_202da8;
        }
    }
    ctx->pc = 0x202D8Cu;
label_202d8c:
    // 0x202d8c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x202d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_202d90:
    // 0x202d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_202d94:
    // 0x202d94: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x202d94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_202d98:
    // 0x202d98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_202d9c:
    if (ctx->pc == 0x202D9Cu) {
        ctx->pc = 0x202D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D98u;
        // 0x202d9c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202DA0u;
        goto label_202da0;
    }
    ctx->pc = 0x202D98u;
    {
        const bool branch_taken_0x202d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D98u;
        // 0x202d9c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d98) {
            ctx->pc = 0x202DA8u;
            goto label_202da8;
        }
    }
    ctx->pc = 0x202DA0u;
label_202da0:
    // 0x202da0: 0x10000006  b           . + 4 + (0x6 << 2)
label_202da4:
    if (ctx->pc == 0x202DA4u) {
        ctx->pc = 0x202DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DA0u;
        // 0x202da4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202DA8u;
        goto label_202da8;
    }
    ctx->pc = 0x202DA0u;
    {
        const bool branch_taken_0x202da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DA0u;
        // 0x202da4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202da0) {
            ctx->pc = 0x202DBCu;
            goto label_202dbc;
        }
    }
    ctx->pc = 0x202DA8u;
label_202da8:
    // 0x202da8: 0x8fa40358  lw          $a0, 0x358($sp)
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_202dac:
    // 0x202dac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202db0:
    // 0x202db0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x202db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_202db4:
    // 0x202db4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x202db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_202db8:
    // 0x202db8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x202db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_202dbc:
    // 0x202dbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_202dc0:
    // 0x202dc0: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x202dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_202dc4:
    // 0x202dc4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x202dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202dc8:
    // 0x202dc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_202dcc:
    if (ctx->pc == 0x202DCCu) {
        ctx->pc = 0x202DD0u;
        goto label_202dd0;
    }
    ctx->pc = 0x202DC8u;
    {
        const bool branch_taken_0x202dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202dc8) {
            ctx->pc = 0x202DD8u;
            goto label_202dd8;
        }
    }
    ctx->pc = 0x202DD0u;
label_202dd0:
    // 0x202dd0: 0x38830003  xori        $v1, $a0, 0x3
    ctx->pc = 0x202dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_202dd4:
    // 0x202dd4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x202dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202dd8:
    // 0x202dd8: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_202ddc:
    if (ctx->pc == 0x202DDCu) {
        ctx->pc = 0x202DE0u;
        goto label_202de0;
    }
    ctx->pc = 0x202DD8u;
    {
        const bool branch_taken_0x202dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202dd8) {
            ctx->pc = 0x202E70u;
            goto label_202e70;
        }
    }
    ctx->pc = 0x202DE0u;
label_202de0:
    // 0x202de0: 0xc07aaa0  jal         func_1EAA80
label_202de4:
    if (ctx->pc == 0x202DE4u) {
        ctx->pc = 0x202DE8u;
        goto label_202de8;
    }
    ctx->pc = 0x202DE0u;
    SET_GPR_U32(ctx, 31, 0x202DE8u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x202DE8u;
label_202de8:
    // 0x202de8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x202de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_202dec:
    // 0x202dec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x202decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202df0:
    // 0x202df0: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_202df4:
    if (ctx->pc == 0x202DF4u) {
        ctx->pc = 0x202DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DF0u;
        // 0x202df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202DF8u;
        goto label_202df8;
    }
    ctx->pc = 0x202DF0u;
    {
        const bool branch_taken_0x202df0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x202DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DF0u;
        // 0x202df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202df0) {
            ctx->pc = 0x202E44u;
            goto label_202e44;
        }
    }
    ctx->pc = 0x202DF8u;
label_202df8:
    // 0x202df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202dfc:
    // 0x202dfc: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_202e00:
    if (ctx->pc == 0x202E00u) {
        ctx->pc = 0x202E04u;
        goto label_202e04;
    }
    ctx->pc = 0x202DFCu;
    {
        const bool branch_taken_0x202dfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x202dfc) {
            ctx->pc = 0x202E10u;
            goto label_202e10;
        }
    }
    ctx->pc = 0x202E04u;
label_202e04:
    // 0x202e04: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_202e08:
    // 0x202e08: 0x10000019  b           . + 4 + (0x19 << 2)
label_202e0c:
    if (ctx->pc == 0x202E0Cu) {
        ctx->pc = 0x202E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E08u;
        // 0x202e0c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E10u;
        goto label_202e10;
    }
    ctx->pc = 0x202E08u;
    {
        const bool branch_taken_0x202e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E08u;
        // 0x202e0c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e08) {
            ctx->pc = 0x202E70u;
            goto label_202e70;
        }
    }
    ctx->pc = 0x202E10u;
label_202e10:
    // 0x202e10: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x202e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_202e14:
    // 0x202e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202e18:
    // 0x202e18: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202e1c:
    // 0x202e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e20:
    // 0x202e20: 0xc08104c  jal         func_204130
label_202e24:
    if (ctx->pc == 0x202E24u) {
        ctx->pc = 0x202E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E20u;
        // 0x202e24: 0x27a80150  addiu       $t0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E28u;
        goto label_202e28;
    }
    ctx->pc = 0x202E20u;
    SET_GPR_U32(ctx, 31, 0x202E28u);
    ctx->pc = 0x202E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E20u;
    // 0x202e24: 0x27a80150  addiu       $t0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202E28u;
label_202e28:
    // 0x202e28: 0xc07aaa8  jal         func_1EAAA0
label_202e2c:
    if (ctx->pc == 0x202E2Cu) {
        ctx->pc = 0x202E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E28u;
        // 0x202e2c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E30u;
        goto label_202e30;
    }
    ctx->pc = 0x202E28u;
    SET_GPR_U32(ctx, 31, 0x202E30u);
    ctx->pc = 0x202E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E28u;
    // 0x202e2c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202E30u;
label_202e30:
    // 0x202e30: 0xc07aa84  jal         func_1EAA10
label_202e34:
    if (ctx->pc == 0x202E34u) {
        ctx->pc = 0x202E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E30u;
        // 0x202e34: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E38u;
        goto label_202e38;
    }
    ctx->pc = 0x202E30u;
    SET_GPR_U32(ctx, 31, 0x202E38u);
    ctx->pc = 0x202E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E30u;
    // 0x202e34: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x202E38u;
label_202e38:
    // 0x202e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202e3c:
    // 0x202e3c: 0x1000000c  b           . + 4 + (0xC << 2)
label_202e40:
    if (ctx->pc == 0x202E40u) {
        ctx->pc = 0x202E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E3Cu;
        // 0x202e40: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E44u;
        goto label_202e44;
    }
    ctx->pc = 0x202E3Cu;
    {
        const bool branch_taken_0x202e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E3Cu;
        // 0x202e40: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e3c) {
            ctx->pc = 0x202E70u;
            goto label_202e70;
        }
    }
    ctx->pc = 0x202E44u;
label_202e44:
    // 0x202e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x202e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202e48:
    // 0x202e48: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x202e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202e4c:
    // 0x202e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e50:
    // 0x202e50: 0xc08104c  jal         func_204130
label_202e54:
    if (ctx->pc == 0x202E54u) {
        ctx->pc = 0x202E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E50u;
        // 0x202e54: 0x27a80250  addiu       $t0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E58u;
        goto label_202e58;
    }
    ctx->pc = 0x202E50u;
    SET_GPR_U32(ctx, 31, 0x202E58u);
    ctx->pc = 0x202E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E50u;
    // 0x202e54: 0x27a80250  addiu       $t0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202E58u;
label_202e58:
    // 0x202e58: 0xc07aaa8  jal         func_1EAAA0
label_202e5c:
    if (ctx->pc == 0x202E5Cu) {
        ctx->pc = 0x202E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E58u;
        // 0x202e5c: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E60u;
        goto label_202e60;
    }
    ctx->pc = 0x202E58u;
    SET_GPR_U32(ctx, 31, 0x202E60u);
    ctx->pc = 0x202E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E58u;
    // 0x202e5c: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202E60u;
label_202e60:
    // 0x202e60: 0xc07aa84  jal         func_1EAA10
label_202e64:
    if (ctx->pc == 0x202E64u) {
        ctx->pc = 0x202E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E60u;
        // 0x202e64: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E68u;
        goto label_202e68;
    }
    ctx->pc = 0x202E60u;
    SET_GPR_U32(ctx, 31, 0x202E68u);
    ctx->pc = 0x202E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E60u;
    // 0x202e64: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x202E68u;
label_202e68:
    // 0x202e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202e6c:
    // 0x202e6c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x202e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_202e70:
    // 0x202e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x202e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_202e74:
    // 0x202e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x202e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202e78:
    // 0x202e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202e7c:
    // 0x202e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202e80:
    // 0x202e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202e84:
    // 0x202e84: 0x3e00008  jr          $ra
label_202e88:
    if (ctx->pc == 0x202E88u) {
        ctx->pc = 0x202E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E84u;
        // 0x202e88: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202E8Cu;
        goto label_202e8c;
    }
    ctx->pc = 0x202E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E84u;
        // 0x202e88: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202E8Cu;
label_202e8c:
    // 0x202e8c: 0x0  nop
    ctx->pc = 0x202e8cu;
    // NOP
label_202e90:
    // 0x202e90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x202e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_202e94:
    // 0x202e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_202e98:
    // 0x202e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_202e9c:
    // 0x202e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_202ea0:
    // 0x202ea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202ea4:
    // 0x202ea4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_202ea8:
    // 0x202ea8: 0x2c610013  sltiu       $at, $v1, 0x13
    ctx->pc = 0x202ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_202eac:
    // 0x202eac: 0x1020011c  beqz        $at, . + 4 + (0x11C << 2)
label_202eb0:
    if (ctx->pc == 0x202EB0u) {
        ctx->pc = 0x202EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EACu;
        // 0x202eb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EB4u;
        goto label_202eb4;
    }
    ctx->pc = 0x202EACu;
    {
        const bool branch_taken_0x202eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EACu;
        // 0x202eb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202eac) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202EB4u;
label_202eb4:
    // 0x202eb4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x202eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_202eb8:
    // 0x202eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202ebc:
    // 0x202ebc: 0x2484dea0  addiu       $a0, $a0, -0x2160
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958752));
label_202ec0:
    // 0x202ec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202ec4:
    // 0x202ec4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_202ec8:
    // 0x202ec8: 0x600008  jr          $v1
label_202ecc:
    if (ctx->pc == 0x202ECCu) {
        ctx->pc = 0x202ED0u;
        goto label_202ed0;
    }
    ctx->pc = 0x202EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202ED0u: goto label_202ed0;
            case 0x202EF8u: goto label_202ef8;
            case 0x202F20u: goto label_202f20;
            case 0x202F4Cu: goto label_202f4c;
            case 0x202F94u: goto label_202f94;
            case 0x202FF0u: goto label_202ff0;
            case 0x203034u: goto label_203034;
            case 0x203084u: goto label_203084;
            case 0x2030E4u: { ctx->pc = 0x2030e4; return; }
            case 0x20312Cu: { ctx->pc = 0x20312c; return; }
            case 0x203184u: { ctx->pc = 0x203184; return; }
            case 0x203260u: { ctx->pc = 0x203260; return; }
            case 0x2032A8u: { ctx->pc = 0x2032a8; return; }
            case 0x20330Cu: { ctx->pc = 0x20330c; return; }
            case 0x203318u: { ctx->pc = 0x203318; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x202ED0u;
label_202ed0:
    // 0x202ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202ed4:
    // 0x202ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ed8:
    // 0x202ed8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202edc:
    // 0x202edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ee0:
    // 0x202ee0: 0xc08104c  jal         func_204130
label_202ee4:
    if (ctx->pc == 0x202EE4u) {
        ctx->pc = 0x202EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE0u;
        // 0x202ee4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EE8u;
        goto label_202ee8;
    }
    ctx->pc = 0x202EE0u;
    SET_GPR_U32(ctx, 31, 0x202EE8u);
    ctx->pc = 0x202EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EE0u;
    // 0x202ee4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202EE8u;
label_202ee8:
    // 0x202ee8: 0xc07aaa8  jal         func_1EAAA0
label_202eec:
    if (ctx->pc == 0x202EECu) {
        ctx->pc = 0x202EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE8u;
        // 0x202eec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EF0u;
        goto label_202ef0;
    }
    ctx->pc = 0x202EE8u;
    SET_GPR_U32(ctx, 31, 0x202EF0u);
    ctx->pc = 0x202EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EE8u;
    // 0x202eec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202EF0u;
label_202ef0:
    // 0x202ef0: 0x1000010b  b           . + 4 + (0x10B << 2)
label_202ef4:
    if (ctx->pc == 0x202EF4u) {
        ctx->pc = 0x202EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF0u;
        // 0x202ef4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202EF8u;
        goto label_202ef8;
    }
    ctx->pc = 0x202EF0u;
    {
        const bool branch_taken_0x202ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF0u;
        // 0x202ef4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef0) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202EF8u;
label_202ef8:
    // 0x202ef8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_202efc:
    // 0x202efc: 0xc080fe4  jal         func_203F90
label_202f00:
    if (ctx->pc == 0x202F00u) {
        ctx->pc = 0x202F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EFCu;
        // 0x202f00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F04u;
        goto label_202f04;
    }
    ctx->pc = 0x202EFCu;
    SET_GPR_U32(ctx, 31, 0x202F04u);
    ctx->pc = 0x202F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EFCu;
    // 0x202f00: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x202F04u;
label_202f04:
    // 0x202f04: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_202f08:
    // 0x202f08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_202f0c:
    // 0x202f0c: 0xc08f390  jal         func_23CE40
label_202f10:
    if (ctx->pc == 0x202F10u) {
        ctx->pc = 0x202F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F0Cu;
        // 0x202f10: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F14u;
        goto label_202f14;
    }
    ctx->pc = 0x202F0Cu;
    SET_GPR_U32(ctx, 31, 0x202F14u);
    ctx->pc = 0x202F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F0Cu;
    // 0x202f10: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x202F14u;
label_202f14:
    // 0x202f14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_202f18:
    // 0x202f18: 0x10000101  b           . + 4 + (0x101 << 2)
label_202f1c:
    if (ctx->pc == 0x202F1Cu) {
        ctx->pc = 0x202F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F18u;
        // 0x202f1c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F20u;
        goto label_202f20;
    }
    ctx->pc = 0x202F18u;
    {
        const bool branch_taken_0x202f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F18u;
        // 0x202f1c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f18) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202F20u;
label_202f20:
    // 0x202f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202f24:
    // 0x202f24: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x202f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_202f28:
    // 0x202f28: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x202f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_202f2c:
    // 0x202f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202f30:
    // 0x202f30: 0xc08104c  jal         func_204130
label_202f34:
    if (ctx->pc == 0x202F34u) {
        ctx->pc = 0x202F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F30u;
        // 0x202f34: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F38u;
        goto label_202f38;
    }
    ctx->pc = 0x202F30u;
    SET_GPR_U32(ctx, 31, 0x202F38u);
    ctx->pc = 0x202F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F30u;
    // 0x202f34: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202F38u;
label_202f38:
    // 0x202f38: 0xc07aaa8  jal         func_1EAAA0
label_202f3c:
    if (ctx->pc == 0x202F3Cu) {
        ctx->pc = 0x202F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F38u;
        // 0x202f3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F40u;
        goto label_202f40;
    }
    ctx->pc = 0x202F38u;
    SET_GPR_U32(ctx, 31, 0x202F40u);
    ctx->pc = 0x202F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F38u;
    // 0x202f3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202F40u;
label_202f40:
    // 0x202f40: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x202f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_202f44:
    // 0x202f44: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_202f48:
    if (ctx->pc == 0x202F48u) {
        ctx->pc = 0x202F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F44u;
        // 0x202f48: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F4Cu;
        goto label_202f4c;
    }
    ctx->pc = 0x202F44u;
    {
        const bool branch_taken_0x202f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F44u;
        // 0x202f48: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f44) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202F4Cu;
label_202f4c:
    // 0x202f4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x202f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_202f50:
    // 0x202f50: 0xc080fe4  jal         func_203F90
label_202f54:
    if (ctx->pc == 0x202F54u) {
        ctx->pc = 0x202F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F50u;
        // 0x202f54: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F58u;
        goto label_202f58;
    }
    ctx->pc = 0x202F50u;
    SET_GPR_U32(ctx, 31, 0x202F58u);
    ctx->pc = 0x202F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F50u;
    // 0x202f54: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x202F58u;
label_202f58:
    // 0x202f58: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_202f5c:
    // 0x202f5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_202f60:
    // 0x202f60: 0xc08f390  jal         func_23CE40
label_202f64:
    if (ctx->pc == 0x202F64u) {
        ctx->pc = 0x202F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F60u;
        // 0x202f64: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F68u;
        goto label_202f68;
    }
    ctx->pc = 0x202F60u;
    SET_GPR_U32(ctx, 31, 0x202F68u);
    ctx->pc = 0x202F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F60u;
    // 0x202f64: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x202F68u;
label_202f68:
    // 0x202f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202f6c:
    // 0x202f6c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x202f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_202f70:
    // 0x202f70: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_202f74:
    // 0x202f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202f78:
    // 0x202f78: 0xc08104c  jal         func_204130
label_202f7c:
    if (ctx->pc == 0x202F7Cu) {
        ctx->pc = 0x202F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F78u;
        // 0x202f7c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F80u;
        goto label_202f80;
    }
    ctx->pc = 0x202F78u;
    SET_GPR_U32(ctx, 31, 0x202F80u);
    ctx->pc = 0x202F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F78u;
    // 0x202f7c: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202F80u;
label_202f80:
    // 0x202f80: 0xc07aaa8  jal         func_1EAAA0
label_202f84:
    if (ctx->pc == 0x202F84u) {
        ctx->pc = 0x202F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F80u;
        // 0x202f84: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F88u;
        goto label_202f88;
    }
    ctx->pc = 0x202F80u;
    SET_GPR_U32(ctx, 31, 0x202F88u);
    ctx->pc = 0x202F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F80u;
    // 0x202f84: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202F88u;
label_202f88:
    // 0x202f88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_202f8c:
    // 0x202f8c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_202f90:
    if (ctx->pc == 0x202F90u) {
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202F94u;
        goto label_202f94;
    }
    ctx->pc = 0x202F8Cu;
    {
        const bool branch_taken_0x202f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f8c) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_202f98:
    // 0x202f98: 0xc080fe4  jal         func_203F90
label_202f9c:
    if (ctx->pc == 0x202F9Cu) {
        ctx->pc = 0x202F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F98u;
        // 0x202f9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FA0u;
        goto label_202fa0;
    }
    ctx->pc = 0x202F98u;
    SET_GPR_U32(ctx, 31, 0x202FA0u);
    ctx->pc = 0x202F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F98u;
    // 0x202f9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x202FA0u;
label_202fa0:
    // 0x202fa0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202fa4:
    // 0x202fa4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x202fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_202fa8:
    // 0x202fa8: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x202fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_202fac:
    // 0x202fac: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x202facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_202fb0:
    // 0x202fb0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x202fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_202fb4:
    // 0x202fb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_202fb8:
    // 0x202fb8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_202fbc:
    // 0x202fbc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x202fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_202fc0:
    // 0x202fc0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_202fc4:
    // 0x202fc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_202fc8:
    // 0x202fc8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_202fcc:
    // 0x202fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202fd0:
    // 0x202fd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x202fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_202fd4:
    // 0x202fd4: 0xc08f390  jal         func_23CE40
label_202fd8:
    if (ctx->pc == 0x202FD8u) {
        ctx->pc = 0x202FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FD4u;
        // 0x202fd8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FDCu;
        goto label_202fdc;
    }
    ctx->pc = 0x202FD4u;
    SET_GPR_U32(ctx, 31, 0x202FDCu);
    ctx->pc = 0x202FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FD4u;
    // 0x202fd8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x202FDCu;
label_202fdc:
    // 0x202fdc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202fe0:
    // 0x202fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202fe4:
    // 0x202fe4: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x202fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_202fe8:
    // 0x202fe8: 0x100000cd  b           . + 4 + (0xCD << 2)
label_202fec:
    if (ctx->pc == 0x202FECu) {
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202FF0u;
        goto label_202ff0;
    }
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FE8u;
        // 0x202fec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202ff4:
    // 0x202ff4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x202ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_202ff8:
    // 0x202ff8: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_202ffc:
    // 0x202ffc: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
label_203000:
    // 0x203000: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203004:
    // 0x203004: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203008:
    // 0x203008: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20300c:
    // 0x20300c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20300cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203010:
    // 0x203010: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_203014:
    // 0x203014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_203018:
    // 0x203018: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x203018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20301c:
    // 0x20301c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_203020:
    // 0x203020: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x203020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_203024:
    // 0x203024: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x203024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_203028:
    // 0x203028: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_20302c:
    // 0x20302c: 0x100000bc  b           . + 4 + (0xBC << 2)
label_203030:
    if (ctx->pc == 0x203030u) {
        ctx->pc = 0x203030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20302Cu;
        // 0x203030: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203034u;
        goto label_203034;
    }
    ctx->pc = 0x20302Cu;
    {
        const bool branch_taken_0x20302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20302Cu;
        // 0x203030: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20302c) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x203034u;
label_203034:
    // 0x203034: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203038:
    // 0x203038: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_20303c:
    // 0x20303c: 0x8c28f468  lw          $t0, -0xB98($at)
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203040:
    // 0x203040: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x203040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_203044:
    // 0x203044: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_203048:
    // 0x203048: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
label_20304c:
    // 0x20304c: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
label_203050:
    // 0x203050: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203054:
    // 0x203054: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_203058:
    // 0x203058: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20305c:
    // 0x20305c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x20305cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203060:
    // 0x203060: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_203064:
    // 0x203064: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x203064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_203068:
    // 0x203068: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x203068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_20306c:
    // 0x20306c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203070:
    // 0x203070: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x203070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
label_203074:
    // 0x203074: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x203074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
label_203078:
    // 0x203078: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_20307c:
    // 0x20307c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_203080:
    if (ctx->pc == 0x203080u) {
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203084u;
        goto label_203084;
    }
    ctx->pc = 0x20307Cu;
    {
        const bool branch_taken_0x20307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20307Cu;
        // 0x203080: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20307c) {
            ctx->pc = 0x203320u;
            { ctx->pc = 0x203320; return; }
        }
    }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x203084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_203088:
    // 0x203088: 0xc080fe4  jal         func_203F90
label_20308c:
    if (ctx->pc == 0x20308Cu) {
        ctx->pc = 0x20308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203088u;
        // 0x20308c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203090u;
        goto label_203090;
    }
    ctx->pc = 0x203088u;
    SET_GPR_U32(ctx, 31, 0x203090u);
    ctx->pc = 0x20308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203088u;
    // 0x20308c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x203090u;
label_203090:
    // 0x203090: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203094:
    // 0x203094: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x203094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_203098:
    // 0x203098: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x203098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_20309c:
    // 0x20309c: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2030a0:
    // 0x2030a0: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x2030a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_2030a4:
    // 0x2030a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2030a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2030a8u;
    return;
}
