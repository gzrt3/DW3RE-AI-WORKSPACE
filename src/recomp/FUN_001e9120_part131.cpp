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


void FUN_001e9120_part131(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2288c0u: goto label_2288c0;
        case 0x2288c4u: goto label_2288c4;
        case 0x2288c8u: goto label_2288c8;
        case 0x2288ccu: goto label_2288cc;
        case 0x2288d0u: goto label_2288d0;
        case 0x2288d4u: goto label_2288d4;
        case 0x2288d8u: goto label_2288d8;
        case 0x2288dcu: goto label_2288dc;
        case 0x2288e0u: goto label_2288e0;
        case 0x2288e4u: goto label_2288e4;
        case 0x2288e8u: goto label_2288e8;
        case 0x2288ecu: goto label_2288ec;
        case 0x2288f0u: goto label_2288f0;
        case 0x2288f4u: goto label_2288f4;
        case 0x2288f8u: goto label_2288f8;
        case 0x2288fcu: goto label_2288fc;
        case 0x228900u: goto label_228900;
        case 0x228904u: goto label_228904;
        case 0x228908u: goto label_228908;
        case 0x22890cu: goto label_22890c;
        case 0x228910u: goto label_228910;
        case 0x228914u: goto label_228914;
        case 0x228918u: goto label_228918;
        case 0x22891cu: goto label_22891c;
        case 0x228920u: goto label_228920;
        case 0x228924u: goto label_228924;
        case 0x228928u: goto label_228928;
        case 0x22892cu: goto label_22892c;
        case 0x228930u: goto label_228930;
        case 0x228934u: goto label_228934;
        case 0x228938u: goto label_228938;
        case 0x22893cu: goto label_22893c;
        case 0x228940u: goto label_228940;
        case 0x228944u: goto label_228944;
        case 0x228948u: goto label_228948;
        case 0x22894cu: goto label_22894c;
        case 0x228950u: goto label_228950;
        case 0x228954u: goto label_228954;
        case 0x228958u: goto label_228958;
        case 0x22895cu: goto label_22895c;
        case 0x228960u: goto label_228960;
        case 0x228964u: goto label_228964;
        case 0x228968u: goto label_228968;
        case 0x22896cu: goto label_22896c;
        case 0x228970u: goto label_228970;
        case 0x228974u: goto label_228974;
        case 0x228978u: goto label_228978;
        case 0x22897cu: goto label_22897c;
        case 0x228980u: goto label_228980;
        case 0x228984u: goto label_228984;
        case 0x228988u: goto label_228988;
        case 0x22898cu: goto label_22898c;
        case 0x228990u: goto label_228990;
        case 0x228994u: goto label_228994;
        case 0x228998u: goto label_228998;
        case 0x22899cu: goto label_22899c;
        case 0x2289a0u: goto label_2289a0;
        case 0x2289a4u: goto label_2289a4;
        case 0x2289a8u: goto label_2289a8;
        case 0x2289acu: goto label_2289ac;
        case 0x2289b0u: goto label_2289b0;
        case 0x2289b4u: goto label_2289b4;
        case 0x2289b8u: goto label_2289b8;
        case 0x2289bcu: goto label_2289bc;
        case 0x2289c0u: goto label_2289c0;
        case 0x2289c4u: goto label_2289c4;
        case 0x2289c8u: goto label_2289c8;
        case 0x2289ccu: goto label_2289cc;
        case 0x2289d0u: goto label_2289d0;
        case 0x2289d4u: goto label_2289d4;
        case 0x2289d8u: goto label_2289d8;
        case 0x2289dcu: goto label_2289dc;
        case 0x2289e0u: goto label_2289e0;
        case 0x2289e4u: goto label_2289e4;
        case 0x2289e8u: goto label_2289e8;
        case 0x2289ecu: goto label_2289ec;
        case 0x2289f0u: goto label_2289f0;
        case 0x2289f4u: goto label_2289f4;
        case 0x2289f8u: goto label_2289f8;
        case 0x2289fcu: goto label_2289fc;
        case 0x228a00u: goto label_228a00;
        case 0x228a04u: goto label_228a04;
        case 0x228a08u: goto label_228a08;
        case 0x228a0cu: goto label_228a0c;
        case 0x228a10u: goto label_228a10;
        case 0x228a14u: goto label_228a14;
        case 0x228a18u: goto label_228a18;
        case 0x228a1cu: goto label_228a1c;
        case 0x228a20u: goto label_228a20;
        case 0x228a24u: goto label_228a24;
        case 0x228a28u: goto label_228a28;
        case 0x228a2cu: goto label_228a2c;
        case 0x228a30u: goto label_228a30;
        case 0x228a34u: goto label_228a34;
        case 0x228a38u: goto label_228a38;
        case 0x228a3cu: goto label_228a3c;
        case 0x228a40u: goto label_228a40;
        case 0x228a44u: goto label_228a44;
        case 0x228a48u: goto label_228a48;
        case 0x228a4cu: goto label_228a4c;
        case 0x228a50u: goto label_228a50;
        case 0x228a54u: goto label_228a54;
        case 0x228a58u: goto label_228a58;
        case 0x228a5cu: goto label_228a5c;
        case 0x228a60u: goto label_228a60;
        case 0x228a64u: goto label_228a64;
        case 0x228a68u: goto label_228a68;
        case 0x228a6cu: goto label_228a6c;
        case 0x228a70u: goto label_228a70;
        case 0x228a74u: goto label_228a74;
        case 0x228a78u: goto label_228a78;
        case 0x228a7cu: goto label_228a7c;
        case 0x228a80u: goto label_228a80;
        case 0x228a84u: goto label_228a84;
        case 0x228a88u: goto label_228a88;
        case 0x228a8cu: goto label_228a8c;
        case 0x228a90u: goto label_228a90;
        case 0x228a94u: goto label_228a94;
        case 0x228a98u: goto label_228a98;
        case 0x228a9cu: goto label_228a9c;
        case 0x228aa0u: goto label_228aa0;
        case 0x228aa4u: goto label_228aa4;
        case 0x228aa8u: goto label_228aa8;
        case 0x228aacu: goto label_228aac;
        case 0x228ab0u: goto label_228ab0;
        case 0x228ab4u: goto label_228ab4;
        case 0x228ab8u: goto label_228ab8;
        case 0x228abcu: goto label_228abc;
        case 0x228ac0u: goto label_228ac0;
        case 0x228ac4u: goto label_228ac4;
        case 0x228ac8u: goto label_228ac8;
        case 0x228accu: goto label_228acc;
        case 0x228ad0u: goto label_228ad0;
        case 0x228ad4u: goto label_228ad4;
        case 0x228ad8u: goto label_228ad8;
        case 0x228adcu: goto label_228adc;
        case 0x228ae0u: goto label_228ae0;
        case 0x228ae4u: goto label_228ae4;
        case 0x228ae8u: goto label_228ae8;
        case 0x228aecu: goto label_228aec;
        case 0x228af0u: goto label_228af0;
        case 0x228af4u: goto label_228af4;
        case 0x228af8u: goto label_228af8;
        case 0x228afcu: goto label_228afc;
        case 0x228b00u: goto label_228b00;
        case 0x228b04u: goto label_228b04;
        case 0x228b08u: goto label_228b08;
        case 0x228b0cu: goto label_228b0c;
        case 0x228b10u: goto label_228b10;
        case 0x228b14u: goto label_228b14;
        case 0x228b18u: goto label_228b18;
        case 0x228b1cu: goto label_228b1c;
        case 0x228b20u: goto label_228b20;
        case 0x228b24u: goto label_228b24;
        case 0x228b28u: goto label_228b28;
        case 0x228b2cu: goto label_228b2c;
        case 0x228b30u: goto label_228b30;
        case 0x228b34u: goto label_228b34;
        case 0x228b38u: goto label_228b38;
        case 0x228b3cu: goto label_228b3c;
        case 0x228b40u: goto label_228b40;
        case 0x228b44u: goto label_228b44;
        case 0x228b48u: goto label_228b48;
        case 0x228b4cu: goto label_228b4c;
        case 0x228b50u: goto label_228b50;
        case 0x228b54u: goto label_228b54;
        case 0x228b58u: goto label_228b58;
        case 0x228b5cu: goto label_228b5c;
        case 0x228b60u: goto label_228b60;
        case 0x228b64u: goto label_228b64;
        case 0x228b68u: goto label_228b68;
        case 0x228b6cu: goto label_228b6c;
        case 0x228b70u: goto label_228b70;
        case 0x228b74u: goto label_228b74;
        case 0x228b78u: goto label_228b78;
        case 0x228b7cu: goto label_228b7c;
        case 0x228b80u: goto label_228b80;
        case 0x228b84u: goto label_228b84;
        case 0x228b88u: goto label_228b88;
        case 0x228b8cu: goto label_228b8c;
        case 0x228b90u: goto label_228b90;
        case 0x228b94u: goto label_228b94;
        case 0x228b98u: goto label_228b98;
        case 0x228b9cu: goto label_228b9c;
        case 0x228ba0u: goto label_228ba0;
        case 0x228ba4u: goto label_228ba4;
        case 0x228ba8u: goto label_228ba8;
        case 0x228bacu: goto label_228bac;
        case 0x228bb0u: goto label_228bb0;
        case 0x228bb4u: goto label_228bb4;
        case 0x228bb8u: goto label_228bb8;
        case 0x228bbcu: goto label_228bbc;
        case 0x228bc0u: goto label_228bc0;
        case 0x228bc4u: goto label_228bc4;
        case 0x228bc8u: goto label_228bc8;
        case 0x228bccu: goto label_228bcc;
        case 0x228bd0u: goto label_228bd0;
        case 0x228bd4u: goto label_228bd4;
        case 0x228bd8u: goto label_228bd8;
        case 0x228bdcu: goto label_228bdc;
        case 0x228be0u: goto label_228be0;
        case 0x228be4u: goto label_228be4;
        case 0x228be8u: goto label_228be8;
        case 0x228becu: goto label_228bec;
        case 0x228bf0u: goto label_228bf0;
        case 0x228bf4u: goto label_228bf4;
        case 0x228bf8u: goto label_228bf8;
        case 0x228bfcu: goto label_228bfc;
        case 0x228c00u: goto label_228c00;
        case 0x228c04u: goto label_228c04;
        case 0x228c08u: goto label_228c08;
        case 0x228c0cu: goto label_228c0c;
        case 0x228c10u: goto label_228c10;
        case 0x228c14u: goto label_228c14;
        case 0x228c18u: goto label_228c18;
        case 0x228c1cu: goto label_228c1c;
        case 0x228c20u: goto label_228c20;
        case 0x228c24u: goto label_228c24;
        case 0x228c28u: goto label_228c28;
        case 0x228c2cu: goto label_228c2c;
        case 0x228c30u: goto label_228c30;
        case 0x228c34u: goto label_228c34;
        case 0x228c38u: goto label_228c38;
        case 0x228c3cu: goto label_228c3c;
        case 0x228c40u: goto label_228c40;
        case 0x228c44u: goto label_228c44;
        case 0x228c48u: goto label_228c48;
        case 0x228c4cu: goto label_228c4c;
        case 0x228c50u: goto label_228c50;
        case 0x228c54u: goto label_228c54;
        case 0x228c58u: goto label_228c58;
        case 0x228c5cu: goto label_228c5c;
        case 0x228c60u: goto label_228c60;
        case 0x228c64u: goto label_228c64;
        case 0x228c68u: goto label_228c68;
        case 0x228c6cu: goto label_228c6c;
        case 0x228c70u: goto label_228c70;
        case 0x228c74u: goto label_228c74;
        case 0x228c78u: goto label_228c78;
        case 0x228c7cu: goto label_228c7c;
        case 0x228c80u: goto label_228c80;
        case 0x228c84u: goto label_228c84;
        case 0x228c88u: goto label_228c88;
        case 0x228c8cu: goto label_228c8c;
        case 0x228c90u: goto label_228c90;
        case 0x228c94u: goto label_228c94;
        case 0x228c98u: goto label_228c98;
        case 0x228c9cu: goto label_228c9c;
        case 0x228ca0u: goto label_228ca0;
        case 0x228ca4u: goto label_228ca4;
        case 0x228ca8u: goto label_228ca8;
        case 0x228cacu: goto label_228cac;
        case 0x228cb0u: goto label_228cb0;
        case 0x228cb4u: goto label_228cb4;
        case 0x228cb8u: goto label_228cb8;
        case 0x228cbcu: goto label_228cbc;
        case 0x228cc0u: goto label_228cc0;
        case 0x228cc4u: goto label_228cc4;
        case 0x228cc8u: goto label_228cc8;
        case 0x228cccu: goto label_228ccc;
        case 0x228cd0u: goto label_228cd0;
        case 0x228cd4u: goto label_228cd4;
        case 0x228cd8u: goto label_228cd8;
        case 0x228cdcu: goto label_228cdc;
        case 0x228ce0u: goto label_228ce0;
        case 0x228ce4u: goto label_228ce4;
        case 0x228ce8u: goto label_228ce8;
        case 0x228cecu: goto label_228cec;
        case 0x228cf0u: goto label_228cf0;
        case 0x228cf4u: goto label_228cf4;
        case 0x228cf8u: goto label_228cf8;
        case 0x228cfcu: goto label_228cfc;
        case 0x228d00u: goto label_228d00;
        case 0x228d04u: goto label_228d04;
        case 0x228d08u: goto label_228d08;
        case 0x228d0cu: goto label_228d0c;
        case 0x228d10u: goto label_228d10;
        case 0x228d14u: goto label_228d14;
        case 0x228d18u: goto label_228d18;
        case 0x228d1cu: goto label_228d1c;
        case 0x228d20u: goto label_228d20;
        case 0x228d24u: goto label_228d24;
        case 0x228d28u: goto label_228d28;
        case 0x228d2cu: goto label_228d2c;
        case 0x228d30u: goto label_228d30;
        case 0x228d34u: goto label_228d34;
        case 0x228d38u: goto label_228d38;
        case 0x228d3cu: goto label_228d3c;
        case 0x228d40u: goto label_228d40;
        case 0x228d44u: goto label_228d44;
        case 0x228d48u: goto label_228d48;
        case 0x228d4cu: goto label_228d4c;
        case 0x228d50u: goto label_228d50;
        case 0x228d54u: goto label_228d54;
        case 0x228d58u: goto label_228d58;
        case 0x228d5cu: goto label_228d5c;
        case 0x228d60u: goto label_228d60;
        case 0x228d64u: goto label_228d64;
        case 0x228d68u: goto label_228d68;
        case 0x228d6cu: goto label_228d6c;
        case 0x228d70u: goto label_228d70;
        case 0x228d74u: goto label_228d74;
        case 0x228d78u: goto label_228d78;
        case 0x228d7cu: goto label_228d7c;
        case 0x228d80u: goto label_228d80;
        case 0x228d84u: goto label_228d84;
        case 0x228d88u: goto label_228d88;
        case 0x228d8cu: goto label_228d8c;
        case 0x228d90u: goto label_228d90;
        case 0x228d94u: goto label_228d94;
        case 0x228d98u: goto label_228d98;
        case 0x228d9cu: goto label_228d9c;
        case 0x228da0u: goto label_228da0;
        case 0x228da4u: goto label_228da4;
        case 0x228da8u: goto label_228da8;
        case 0x228dacu: goto label_228dac;
        case 0x228db0u: goto label_228db0;
        case 0x228db4u: goto label_228db4;
        case 0x228db8u: goto label_228db8;
        case 0x228dbcu: goto label_228dbc;
        case 0x228dc0u: goto label_228dc0;
        case 0x228dc4u: goto label_228dc4;
        case 0x228dc8u: goto label_228dc8;
        case 0x228dccu: goto label_228dcc;
        case 0x228dd0u: goto label_228dd0;
        case 0x228dd4u: goto label_228dd4;
        case 0x228dd8u: goto label_228dd8;
        case 0x228ddcu: goto label_228ddc;
        case 0x228de0u: goto label_228de0;
        case 0x228de4u: goto label_228de4;
        case 0x228de8u: goto label_228de8;
        case 0x228decu: goto label_228dec;
        case 0x228df0u: goto label_228df0;
        case 0x228df4u: goto label_228df4;
        case 0x228df8u: goto label_228df8;
        case 0x228dfcu: goto label_228dfc;
        case 0x228e00u: goto label_228e00;
        case 0x228e04u: goto label_228e04;
        case 0x228e08u: goto label_228e08;
        case 0x228e0cu: goto label_228e0c;
        case 0x228e10u: goto label_228e10;
        case 0x228e14u: goto label_228e14;
        case 0x228e18u: goto label_228e18;
        case 0x228e1cu: goto label_228e1c;
        case 0x228e20u: goto label_228e20;
        case 0x228e24u: goto label_228e24;
        case 0x228e28u: goto label_228e28;
        case 0x228e2cu: goto label_228e2c;
        case 0x228e30u: goto label_228e30;
        case 0x228e34u: goto label_228e34;
        case 0x228e38u: goto label_228e38;
        case 0x228e3cu: goto label_228e3c;
        case 0x228e40u: goto label_228e40;
        case 0x228e44u: goto label_228e44;
        case 0x228e48u: goto label_228e48;
        case 0x228e4cu: goto label_228e4c;
        case 0x228e50u: goto label_228e50;
        case 0x228e54u: goto label_228e54;
        case 0x228e58u: goto label_228e58;
        case 0x228e5cu: goto label_228e5c;
        case 0x228e60u: goto label_228e60;
        case 0x228e64u: goto label_228e64;
        case 0x228e68u: goto label_228e68;
        case 0x228e6cu: goto label_228e6c;
        case 0x228e70u: goto label_228e70;
        case 0x228e74u: goto label_228e74;
        case 0x228e78u: goto label_228e78;
        case 0x228e7cu: goto label_228e7c;
        case 0x228e80u: goto label_228e80;
        case 0x228e84u: goto label_228e84;
        case 0x228e88u: goto label_228e88;
        case 0x228e8cu: goto label_228e8c;
        case 0x228e90u: goto label_228e90;
        case 0x228e94u: goto label_228e94;
        case 0x228e98u: goto label_228e98;
        case 0x228e9cu: goto label_228e9c;
        case 0x228ea0u: goto label_228ea0;
        case 0x228ea4u: goto label_228ea4;
        case 0x228ea8u: goto label_228ea8;
        case 0x228eacu: goto label_228eac;
        case 0x228eb0u: goto label_228eb0;
        case 0x228eb4u: goto label_228eb4;
        case 0x228eb8u: goto label_228eb8;
        case 0x228ebcu: goto label_228ebc;
        case 0x228ec0u: goto label_228ec0;
        case 0x228ec4u: goto label_228ec4;
        case 0x228ec8u: goto label_228ec8;
        case 0x228eccu: goto label_228ecc;
        case 0x228ed0u: goto label_228ed0;
        case 0x228ed4u: goto label_228ed4;
        case 0x228ed8u: goto label_228ed8;
        case 0x228edcu: goto label_228edc;
        case 0x228ee0u: goto label_228ee0;
        case 0x228ee4u: goto label_228ee4;
        case 0x228ee8u: goto label_228ee8;
        case 0x228eecu: goto label_228eec;
        case 0x228ef0u: goto label_228ef0;
        case 0x228ef4u: goto label_228ef4;
        case 0x228ef8u: goto label_228ef8;
        case 0x228efcu: goto label_228efc;
        case 0x228f00u: goto label_228f00;
        case 0x228f04u: goto label_228f04;
        case 0x228f08u: goto label_228f08;
        case 0x228f0cu: goto label_228f0c;
        case 0x228f10u: goto label_228f10;
        case 0x228f14u: goto label_228f14;
        case 0x228f18u: goto label_228f18;
        case 0x228f1cu: goto label_228f1c;
        case 0x228f20u: goto label_228f20;
        case 0x228f24u: goto label_228f24;
        case 0x228f28u: goto label_228f28;
        case 0x228f2cu: goto label_228f2c;
        case 0x228f30u: goto label_228f30;
        case 0x228f34u: goto label_228f34;
        case 0x228f38u: goto label_228f38;
        case 0x228f3cu: goto label_228f3c;
        case 0x228f40u: goto label_228f40;
        case 0x228f44u: goto label_228f44;
        case 0x228f48u: goto label_228f48;
        case 0x228f4cu: goto label_228f4c;
        case 0x228f50u: goto label_228f50;
        case 0x228f54u: goto label_228f54;
        case 0x228f58u: goto label_228f58;
        case 0x228f5cu: goto label_228f5c;
        case 0x228f60u: goto label_228f60;
        case 0x228f64u: goto label_228f64;
        case 0x228f68u: goto label_228f68;
        case 0x228f6cu: goto label_228f6c;
        case 0x228f70u: goto label_228f70;
        case 0x228f74u: goto label_228f74;
        case 0x228f78u: goto label_228f78;
        case 0x228f7cu: goto label_228f7c;
        case 0x228f80u: goto label_228f80;
        case 0x228f84u: goto label_228f84;
        case 0x228f88u: goto label_228f88;
        case 0x228f8cu: goto label_228f8c;
        case 0x228f90u: goto label_228f90;
        case 0x228f94u: goto label_228f94;
        case 0x228f98u: goto label_228f98;
        case 0x228f9cu: goto label_228f9c;
        case 0x228fa0u: goto label_228fa0;
        case 0x228fa4u: goto label_228fa4;
        case 0x228fa8u: goto label_228fa8;
        case 0x228facu: goto label_228fac;
        case 0x228fb0u: goto label_228fb0;
        case 0x228fb4u: goto label_228fb4;
        case 0x228fb8u: goto label_228fb8;
        case 0x228fbcu: goto label_228fbc;
        case 0x228fc0u: goto label_228fc0;
        case 0x228fc4u: goto label_228fc4;
        case 0x228fc8u: goto label_228fc8;
        case 0x228fccu: goto label_228fcc;
        case 0x228fd0u: goto label_228fd0;
        case 0x228fd4u: goto label_228fd4;
        case 0x228fd8u: goto label_228fd8;
        case 0x228fdcu: goto label_228fdc;
        case 0x228fe0u: goto label_228fe0;
        case 0x228fe4u: goto label_228fe4;
        case 0x228fe8u: goto label_228fe8;
        case 0x228fecu: goto label_228fec;
        case 0x228ff0u: goto label_228ff0;
        case 0x228ff4u: goto label_228ff4;
        case 0x228ff8u: goto label_228ff8;
        case 0x228ffcu: goto label_228ffc;
        case 0x229000u: goto label_229000;
        case 0x229004u: goto label_229004;
        case 0x229008u: goto label_229008;
        case 0x22900cu: goto label_22900c;
        case 0x229010u: goto label_229010;
        case 0x229014u: goto label_229014;
        case 0x229018u: goto label_229018;
        case 0x22901cu: goto label_22901c;
        case 0x229020u: goto label_229020;
        case 0x229024u: goto label_229024;
        case 0x229028u: goto label_229028;
        case 0x22902cu: goto label_22902c;
        case 0x229030u: goto label_229030;
        case 0x229034u: goto label_229034;
        case 0x229038u: goto label_229038;
        case 0x22903cu: goto label_22903c;
        case 0x229040u: goto label_229040;
        case 0x229044u: goto label_229044;
        case 0x229048u: goto label_229048;
        case 0x22904cu: goto label_22904c;
        case 0x229050u: goto label_229050;
        case 0x229054u: goto label_229054;
        case 0x229058u: goto label_229058;
        case 0x22905cu: goto label_22905c;
        case 0x229060u: goto label_229060;
        case 0x229064u: goto label_229064;
        case 0x229068u: goto label_229068;
        case 0x22906cu: goto label_22906c;
        case 0x229070u: goto label_229070;
        case 0x229074u: goto label_229074;
        case 0x229078u: goto label_229078;
        case 0x22907cu: goto label_22907c;
        case 0x229080u: goto label_229080;
        case 0x229084u: goto label_229084;
        case 0x229088u: goto label_229088;
        case 0x22908cu: goto label_22908c;
        default: return;
    }

label_2288c0:
    // 0x2288c0: 0x16670040  bne         $s3, $a3, . + 4 + (0x40 << 2)
label_2288c4:
    if (ctx->pc == 0x2288C4u) {
        ctx->pc = 0x2288C8u;
        goto label_2288c8;
    }
    ctx->pc = 0x2288C0u;
    {
        const bool branch_taken_0x2288c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        if (branch_taken_0x2288c0) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288C8u;
label_2288c8:
    // 0x2288c8: 0xd98821  addu        $s1, $a2, $t9
    ctx->pc = 0x2288c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
label_2288cc:
    // 0x2288cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2288ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288d0:
    // 0x2288d0: 0xc5630150  lwc1        $f3, 0x150($t3)
    ctx->pc = 0x2288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2288d4:
    // 0x2288d4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2288d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2288d8:
    // 0x2288d8: 0x0  nop
    ctx->pc = 0x2288d8u;
    // NOP
label_2288dc:
    // 0x2288dc: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2288e0:
    if (ctx->pc == 0x2288E0u) {
        ctx->pc = 0x2288E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288DCu;
        // 0x2288e0: 0xb99021  addu        $s2, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288E4u;
        goto label_2288e4;
    }
    ctx->pc = 0x2288DCu;
    {
        const bool branch_taken_0x2288dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2288E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288DCu;
        // 0x2288e0: 0xb99021  addu        $s2, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288dc) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288E4u;
label_2288e4:
    // 0x2288e4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2288e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288e8:
    // 0x2288e8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2288e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2288ec:
    // 0x2288ec: 0x0  nop
    ctx->pc = 0x2288ecu;
    // NOP
label_2288f0:
    // 0x2288f0: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_2288f4:
    if (ctx->pc == 0x2288F4u) {
        ctx->pc = 0x2288F8u;
        goto label_2288f8;
    }
    ctx->pc = 0x2288F0u;
    {
        const bool branch_taken_0x2288f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2288f0) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288F8u;
label_2288f8:
    // 0x2288f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2288f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288fc:
    // 0x2288fc: 0xc5630158  lwc1        $f3, 0x158($t3)
    ctx->pc = 0x2288fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228900:
    // 0x228900: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x228900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228904:
    // 0x228904: 0x0  nop
    ctx->pc = 0x228904u;
    // NOP
label_228908:
    // 0x228908: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_22890c:
    if (ctx->pc == 0x22890Cu) {
        ctx->pc = 0x228910u;
        goto label_228910;
    }
    ctx->pc = 0x228908u;
    {
        const bool branch_taken_0x228908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228908) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x228910u;
label_228910:
    // 0x228910: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x228910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228914:
    // 0x228914: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x228914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228918:
    // 0x228918: 0x0  nop
    ctx->pc = 0x228918u;
    // NOP
label_22891c:
    // 0x22891c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_228920:
    if (ctx->pc == 0x228920u) {
        ctx->pc = 0x228924u;
        goto label_228924;
    }
    ctx->pc = 0x22891Cu;
    {
        const bool branch_taken_0x22891c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22891c) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x228924u;
label_228924:
    // 0x228924: 0xc90c0  sll         $s2, $t4, 3
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_228928:
    // 0x228928: 0x928821  addu        $s1, $a0, $s2
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22892c:
    // 0x22892c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_228930:
    // 0x228930: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x228930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_228934:
    // 0x228934: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x228934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228938:
    // 0x228938: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22893c:
    // 0x22893c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x22893cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_228940:
    // 0x228940: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_228944:
    // 0x228944: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x228944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_228948:
    // 0x228948: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x228948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22894c:
    // 0x22894c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x22894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228950:
    // 0x228950: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228954:
    // 0x228954: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x228954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_228958:
    // 0x228958: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_22895c:
    // 0x22895c: 0xe5600058  swc1        $f0, 0x58($t3)
    ctx->pc = 0x22895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
label_228960:
    // 0x228960: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228964:
    // 0x228964: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228968:
    // 0x228968: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x228968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_22896c:
    // 0x22896c: 0x0  nop
    ctx->pc = 0x22896cu;
    // NOP
label_228970:
    // 0x228970: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x228970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228974:
    // 0x228974: 0x0  nop
    ctx->pc = 0x228974u;
    // NOP
label_228978:
    // 0x228978: 0x0  nop
    ctx->pc = 0x228978u;
    // NOP
label_22897c:
    // 0x22897c: 0x9010  mfhi        $s2
    ctx->pc = 0x22897cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_228980:
    // 0x228980: 0x118fc2  srl         $s1, $s1, 31
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_228984:
    // 0x228984: 0x1292c3  sra         $s2, $s2, 11
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 11));
label_228988:
    // 0x228988: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_22898c:
    // 0x22898c: 0xa1710218  sb          $s1, 0x218($t3)
    ctx->pc = 0x22898cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 536), (uint8_t)GPR_U32(ctx, 17));
label_228990:
    // 0x228990: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228994:
    // 0x228994: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228998:
    // 0x228998: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x228998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_22899c:
    // 0x22899c: 0x0  nop
    ctx->pc = 0x22899cu;
    // NOP
label_2289a0:
    // 0x2289a0: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2289a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2289a4:
    // 0x2289a4: 0x0  nop
    ctx->pc = 0x2289a4u;
    // NOP
label_2289a8:
    // 0x2289a8: 0x0  nop
    ctx->pc = 0x2289a8u;
    // NOP
label_2289ac:
    // 0x2289ac: 0x9010  mfhi        $s2
    ctx->pc = 0x2289acu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2289b0:
    // 0x2289b0: 0x118fc2  srl         $s1, $s1, 31
    ctx->pc = 0x2289b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_2289b4:
    // 0x2289b4: 0x1292c3  sra         $s2, $s2, 11
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 11));
label_2289b8:
    // 0x2289b8: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x2289b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2289bc:
    // 0x2289bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2289c0:
    if (ctx->pc == 0x2289C0u) {
        ctx->pc = 0x2289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289BCu;
        // 0x2289c0: 0xa1710219  sb          $s1, 0x219($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2289C4u;
        goto label_2289c4;
    }
    ctx->pc = 0x2289BCu;
    {
        const bool branch_taken_0x2289bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289BCu;
        // 0x2289c0: 0xa1710219  sb          $s1, 0x219($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289bc) {
            ctx->pc = 0x2289D8u;
            goto label_2289d8;
        }
    }
    ctx->pc = 0x2289C4u;
label_2289c4:
    // 0x2289c4: 0x0  nop
    ctx->pc = 0x2289c4u;
    // NOP
label_2289c8:
    // 0x2289c8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2289c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2289cc:
    // 0x2289cc: 0x29910002  slti        $s1, $t4, 0x2
    ctx->pc = 0x2289ccu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_2289d0:
    // 0x2289d0: 0x1620ffb4  bnez        $s1, . + 4 + (-0x4C << 2)
label_2289d4:
    if (ctx->pc == 0x2289D4u) {
        ctx->pc = 0x2289D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289D0u;
        // 0x2289d4: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2289D8u;
        goto label_2289d8;
    }
    ctx->pc = 0x2289D0u;
    {
        const bool branch_taken_0x2289d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2289D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289D0u;
        // 0x2289d4: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289d0) {
            ctx->pc = 0x2288A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2288a4; return; }
        }
    }
    ctx->pc = 0x2289D8u;
label_2289d8:
    // 0x2289d8: 0x15820023  bne         $t4, $v0, . + 4 + (0x23 << 2)
label_2289dc:
    if (ctx->pc == 0x2289DCu) {
        ctx->pc = 0x2289E0u;
        goto label_2289e0;
    }
    ctx->pc = 0x2289D8u;
    {
        const bool branch_taken_0x2289d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2289d8) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289E0u;
label_2289e0:
    // 0x2289e0: 0x916c0218  lbu         $t4, 0x218($t3)
    ctx->pc = 0x2289e0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 536)));
label_2289e4:
    // 0x2289e4: 0x158d0020  bne         $t4, $t5, . + 4 + (0x20 << 2)
label_2289e8:
    if (ctx->pc == 0x2289E8u) {
        ctx->pc = 0x2289ECu;
        goto label_2289ec;
    }
    ctx->pc = 0x2289E4u;
    {
        const bool branch_taken_0x2289e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        if (branch_taken_0x2289e4) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289ECu;
label_2289ec:
    // 0x2289ec: 0x916c0219  lbu         $t4, 0x219($t3)
    ctx->pc = 0x2289ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 537)));
label_2289f0:
    // 0x2289f0: 0x158e001d  bne         $t4, $t6, . + 4 + (0x1D << 2)
label_2289f4:
    if (ctx->pc == 0x2289F4u) {
        ctx->pc = 0x2289F8u;
        goto label_2289f8;
    }
    ctx->pc = 0x2289F0u;
    {
        const bool branch_taken_0x2289f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        if (branch_taken_0x2289f0) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289F8u;
label_2289f8:
    // 0x2289f8: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x2289f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2289fc:
    // 0x2289fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2289fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_228a00:
    // 0x228a00: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x228a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_228a04:
    // 0x228a04: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a08:
    // 0x228a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228a0c:
    // 0x228a0c: 0xe5600058  swc1        $f0, 0x58($t3)
    ctx->pc = 0x228a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
label_228a10:
    // 0x228a10: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a14:
    // 0x228a14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228a18:
    // 0x228a18: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x228a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_228a1c:
    // 0x228a1c: 0x0  nop
    ctx->pc = 0x228a1cu;
    // NOP
label_228a20:
    // 0x228a20: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x228a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228a24:
    // 0x228a24: 0xc8fc2  srl         $s1, $t4, 31
    ctx->pc = 0x228a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_228a28:
    // 0x228a28: 0x0  nop
    ctx->pc = 0x228a28u;
    // NOP
label_228a2c:
    // 0x228a2c: 0x6010  mfhi        $t4
    ctx->pc = 0x228a2cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_228a30:
    // 0x228a30: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
label_228a34:
    // 0x228a34: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
label_228a38:
    // 0x228a38: 0xa16c0218  sb          $t4, 0x218($t3)
    ctx->pc = 0x228a38u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 536), (uint8_t)GPR_U32(ctx, 12));
label_228a3c:
    // 0x228a3c: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a40:
    // 0x228a40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228a44:
    // 0x228a44: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x228a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_228a48:
    // 0x228a48: 0x0  nop
    ctx->pc = 0x228a48u;
    // NOP
label_228a4c:
    // 0x228a4c: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x228a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228a50:
    // 0x228a50: 0xc8fc2  srl         $s1, $t4, 31
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_228a54:
    // 0x228a54: 0x0  nop
    ctx->pc = 0x228a54u;
    // NOP
label_228a58:
    // 0x228a58: 0x6010  mfhi        $t4
    ctx->pc = 0x228a58u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_228a5c:
    // 0x228a5c: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
label_228a60:
    // 0x228a60: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x228a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
label_228a64:
    // 0x228a64: 0xa16c0219  sb          $t4, 0x219($t3)
    ctx->pc = 0x228a64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 12));
label_228a68:
    // 0x228a68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_228a6c:
    // 0x228a6c: 0x2aab0009  slti        $t3, $s5, 0x9
    ctx->pc = 0x228a6cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
label_228a70:
    // 0x228a70: 0x1560ff86  bnez        $t3, . + 4 + (-0x7A << 2)
label_228a74:
    if (ctx->pc == 0x228A74u) {
        ctx->pc = 0x228A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A70u;
        // 0x228a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228A78u;
        goto label_228a78;
    }
    ctx->pc = 0x228A70u;
    {
        const bool branch_taken_0x228a70 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x228A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A70u;
        // 0x228a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a70) {
            ctx->pc = 0x22888Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22888c; return; }
        }
    }
    ctx->pc = 0x228A78u;
label_228a78:
    // 0x228a78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_228a7c:
    // 0x228a7c: 0x2a8b004a  slti        $t3, $s4, 0x4A
    ctx->pc = 0x228a7cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)74) ? 1 : 0);
label_228a80:
    // 0x228a80: 0x1560ff78  bnez        $t3, . + 4 + (-0x88 << 2)
label_228a84:
    if (ctx->pc == 0x228A84u) {
        ctx->pc = 0x228A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A80u;
        // 0x228a84: 0x254a0030  addiu       $t2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228A88u;
        goto label_228a88;
    }
    ctx->pc = 0x228A80u;
    {
        const bool branch_taken_0x228a80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x228A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A80u;
        // 0x228a84: 0x254a0030  addiu       $t2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a80) {
            ctx->pc = 0x228864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x228864; return; }
        }
    }
    ctx->pc = 0x228A88u;
label_228a88:
    // 0x228a88: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_228a8c:
    // 0x228a8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228a90:
    // 0x228a90: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
label_228a94:
    // 0x228a94: 0x30e2023  subu        $a0, $t8, $t6
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_228a98:
    // 0x228a98: 0x1ed2823  subu        $a1, $t7, $t5
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_228a9c:
    // 0x228a9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228aa0:
    // 0x228aa0: 0x3c06459c  lui         $a2, 0x459C
    ctx->pc = 0x228aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17820 << 16));
label_228aa4:
    // 0x228aa4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x228aa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_228aa8:
    // 0x228aa8: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x228aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_228aac:
    // 0x228aac: 0x25c40001  addiu       $a0, $t6, 0x1
    ctx->pc = 0x228aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_228ab0:
    // 0x228ab0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x228ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228ab4:
    // 0x228ab4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x228ab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_228ab8:
    // 0x228ab8: 0x25a50001  addiu       $a1, $t5, 0x1
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_228abc:
    // 0x228abc: 0x448e2000  mtc1        $t6, $f4
    ctx->pc = 0x228abcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_228ac0:
    // 0x228ac0: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x228ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_228ac4:
    // 0x228ac4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x228ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_228ac8:
    // 0x228ac8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x228ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_228acc:
    // 0x228acc: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_228ad0:
    // 0x228ad0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x228ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228ad4:
    // 0x228ad4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_228ad8:
    // 0x228ad8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228adc:
    // 0x228adc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x228adcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_228ae0:
    // 0x228ae0: 0x44863800  mtc1        $a2, $f7
    ctx->pc = 0x228ae0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_228ae4:
    // 0x228ae4: 0x46801160  cvt.s.w     $f5, $f2
    ctx->pc = 0x228ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_228ae8:
    // 0x228ae8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_228aec:
    // 0x228aec: 0x46013882  mul.s       $f2, $f7, $f1
    ctx->pc = 0x228aecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_228af0:
    // 0x228af0: 0x448d3000  mtc1        $t5, $f6
    ctx->pc = 0x228af0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_228af4:
    // 0x228af4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x228af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_228af8:
    // 0x228af8: 0x46803060  cvt.s.w     $f1, $f6
    ctx->pc = 0x228af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_228afc:
    // 0x228afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_228b00:
    // 0x228b00: 0x46013982  mul.s       $f6, $f7, $f1
    ctx->pc = 0x228b00u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_228b04:
    // 0x228b04: 0x46003842  mul.s       $f1, $f7, $f0
    ctx->pc = 0x228b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_228b08:
    // 0x228b08: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x228b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_228b0c:
    // 0x228b0c: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x228b0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_228b10:
    // 0x228b10: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x228b10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_228b14:
    // 0x228b14: 0x0  nop
    ctx->pc = 0x228b14u;
    // NOP
label_228b18:
    // 0x228b18: 0x0  nop
    ctx->pc = 0x228b18u;
    // NOP
label_228b1c:
    // 0x228b1c: 0x84440012  lh          $a0, 0x12($v0)
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_228b20:
    // 0x228b20: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
label_228b24:
    if (ctx->pc == 0x228B24u) {
        ctx->pc = 0x228B28u;
        goto label_228b28;
    }
    ctx->pc = 0x228B20u;
    {
        const bool branch_taken_0x228b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x228b20) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228B28u;
label_228b28:
    // 0x228b28: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_228b2c:
    // 0x228b2c: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
label_228b30:
    if (ctx->pc == 0x228B30u) {
        ctx->pc = 0x228B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B2Cu;
        // 0x228b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228B34u;
        goto label_228b34;
    }
    ctx->pc = 0x228B2Cu;
    {
        const bool branch_taken_0x228b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B2Cu;
        // 0x228b30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b2c) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228B34u;
label_228b34:
    // 0x228b34: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x228b34u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228b38:
    // 0x228b38: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_228b3c:
    if (ctx->pc == 0x228B3Cu) {
        ctx->pc = 0x228B40u;
        goto label_228b40;
    }
    ctx->pc = 0x228B38u;
    {
        const bool branch_taken_0x228b38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x228b38) {
            ctx->pc = 0x228B48u;
            goto label_228b48;
        }
    }
    ctx->pc = 0x228B40u;
label_228b40:
    // 0x228b40: 0x126f0005  beq         $s3, $t7, . + 4 + (0x5 << 2)
label_228b44:
    if (ctx->pc == 0x228B44u) {
        ctx->pc = 0x228B48u;
        goto label_228b48;
    }
    ctx->pc = 0x228B40u;
    {
        const bool branch_taken_0x228b40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x228b40) {
            ctx->pc = 0x228B58u;
            goto label_228b58;
        }
    }
    ctx->pc = 0x228B48u;
label_228b48:
    // 0x228b48: 0x14cc0029  bne         $a2, $t4, . + 4 + (0x29 << 2)
label_228b4c:
    if (ctx->pc == 0x228B4Cu) {
        ctx->pc = 0x228B50u;
        goto label_228b50;
    }
    ctx->pc = 0x228B48u;
    {
        const bool branch_taken_0x228b48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        if (branch_taken_0x228b48) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228B50u;
label_228b50:
    // 0x228b50: 0x166b0027  bne         $s3, $t3, . + 4 + (0x27 << 2)
label_228b54:
    if (ctx->pc == 0x228B54u) {
        ctx->pc = 0x228B58u;
        goto label_228b58;
    }
    ctx->pc = 0x228B50u;
    {
        const bool branch_taken_0x228b50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 11));
        if (branch_taken_0x228b50) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228B58u;
label_228b58:
    // 0x228b58: 0x14d2021  addu        $a0, $t2, $t5
    ctx->pc = 0x228b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_228b5c:
    // 0x228b5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x228b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228b60:
    // 0x228b60: 0xc4a70150  lwc1        $f7, 0x150($a1)
    ctx->pc = 0x228b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_228b64:
    // 0x228b64: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x228b64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228b68:
    // 0x228b68: 0x0  nop
    ctx->pc = 0x228b68u;
    // NOP
label_228b6c:
    // 0x228b6c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_228b70:
    if (ctx->pc == 0x228B70u) {
        ctx->pc = 0x228B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B6Cu;
        // 0x228b70: 0x12d7021  addu        $t6, $t1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228B74u;
        goto label_228b74;
    }
    ctx->pc = 0x228B6Cu;
    {
        const bool branch_taken_0x228b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B6Cu;
        // 0x228b70: 0x12d7021  addu        $t6, $t1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b6c) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228B74u;
label_228b74:
    // 0x228b74: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228b78:
    // 0x228b78: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x228b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228b7c:
    // 0x228b7c: 0x0  nop
    ctx->pc = 0x228b7cu;
    // NOP
label_228b80:
    // 0x228b80: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_228b84:
    if (ctx->pc == 0x228B84u) {
        ctx->pc = 0x228B88u;
        goto label_228b88;
    }
    ctx->pc = 0x228B80u;
    {
        const bool branch_taken_0x228b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b80) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228B88u;
label_228b88:
    // 0x228b88: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x228b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228b8c:
    // 0x228b8c: 0xc4a70158  lwc1        $f7, 0x158($a1)
    ctx->pc = 0x228b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_228b90:
    // 0x228b90: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x228b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228b94:
    // 0x228b94: 0x0  nop
    ctx->pc = 0x228b94u;
    // NOP
label_228b98:
    // 0x228b98: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_228b9c:
    if (ctx->pc == 0x228B9Cu) {
        ctx->pc = 0x228BA0u;
        goto label_228ba0;
    }
    ctx->pc = 0x228B98u;
    {
        const bool branch_taken_0x228b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b98) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228BA0u;
label_228ba0:
    // 0x228ba0: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x228ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228ba4:
    // 0x228ba4: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x228ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228ba8:
    // 0x228ba8: 0x0  nop
    ctx->pc = 0x228ba8u;
    // NOP
label_228bac:
    // 0x228bac: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_228bb0:
    if (ctx->pc == 0x228BB0u) {
        ctx->pc = 0x228BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BACu;
        // 0x228bb0: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BB4u;
        goto label_228bb4;
    }
    ctx->pc = 0x228BACu;
    {
        const bool branch_taken_0x228bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BACu;
        // 0x228bb0: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bac) {
            ctx->pc = 0x228BF0u;
            goto label_228bf0;
        }
    }
    ctx->pc = 0x228BB4u;
label_228bb4:
    // 0x228bb4: 0x1046821  addu        $t5, $t0, $a0
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_228bb8:
    // 0x228bb8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x228bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_228bbc:
    // 0x228bbc: 0xc5a80000  lwc1        $f8, 0x0($t5)
    ctx->pc = 0x228bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_228bc0:
    // 0x228bc0: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x228bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_228bc4:
    // 0x228bc4: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x228bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228bc8:
    // 0x228bc8: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x228bc8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_228bcc:
    // 0x228bcc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x228bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_228bd0:
    // 0x228bd0: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x228bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_228bd4:
    // 0x228bd4: 0xc5a80004  lwc1        $f8, 0x4($t5)
    ctx->pc = 0x228bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_228bd8:
    // 0x228bd8: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x228bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_228bdc:
    // 0x228bdc: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x228bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228be0:
    // 0x228be0: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x228be0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_228be4:
    // 0x228be4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x228be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_228be8:
    // 0x228be8: 0x10000005  b           . + 4 + (0x5 << 2)
label_228bec:
    if (ctx->pc == 0x228BECu) {
        ctx->pc = 0x228BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BE8u;
        // 0x228bec: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x228BF0u;
        goto label_228bf0;
    }
    ctx->pc = 0x228BE8u;
    {
        const bool branch_taken_0x228be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BE8u;
        // 0x228bec: 0xe4a00058  swc1        $f0, 0x58($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228be8) {
            ctx->pc = 0x228C00u;
            goto label_228c00;
        }
    }
    ctx->pc = 0x228BF0u;
label_228bf0:
    // 0x228bf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x228bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_228bf4:
    // 0x228bf4: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x228bf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_228bf8:
    // 0x228bf8: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
label_228bfc:
    if (ctx->pc == 0x228BFCu) {
        ctx->pc = 0x228BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BF8u;
        // 0x228bfc: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C00u;
        goto label_228c00;
    }
    ctx->pc = 0x228BF8u;
    {
        const bool branch_taken_0x228bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BF8u;
        // 0x228bfc: 0x25ad0008  addiu       $t5, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bf8) {
            ctx->pc = 0x228B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228b38;
        }
    }
    ctx->pc = 0x228C00u;
label_228c00:
    // 0x228c00: 0x14c70019  bne         $a2, $a3, . + 4 + (0x19 << 2)
label_228c04:
    if (ctx->pc == 0x228C04u) {
        ctx->pc = 0x228C08u;
        goto label_228c08;
    }
    ctx->pc = 0x228C00u;
    {
        const bool branch_taken_0x228c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x228c00) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228C08u;
label_228c08:
    // 0x228c08: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x228c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228c0c:
    // 0x228c0c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x228c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228c10:
    // 0x228c10: 0x0  nop
    ctx->pc = 0x228c10u;
    // NOP
label_228c14:
    // 0x228c14: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_228c18:
    if (ctx->pc == 0x228C18u) {
        ctx->pc = 0x228C1Cu;
        goto label_228c1c;
    }
    ctx->pc = 0x228C14u;
    {
        const bool branch_taken_0x228c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c14) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228C1Cu;
label_228c1c:
    // 0x228c1c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x228c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228c20:
    // 0x228c20: 0x0  nop
    ctx->pc = 0x228c20u;
    // NOP
label_228c24:
    // 0x228c24: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_228c28:
    if (ctx->pc == 0x228C28u) {
        ctx->pc = 0x228C2Cu;
        goto label_228c2c;
    }
    ctx->pc = 0x228C24u;
    {
        const bool branch_taken_0x228c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c24) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228C2Cu;
label_228c2c:
    // 0x228c2c: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x228c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228c30:
    // 0x228c30: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x228c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228c34:
    // 0x228c34: 0x0  nop
    ctx->pc = 0x228c34u;
    // NOP
label_228c38:
    // 0x228c38: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_228c3c:
    if (ctx->pc == 0x228C3Cu) {
        ctx->pc = 0x228C40u;
        goto label_228c40;
    }
    ctx->pc = 0x228C38u;
    {
        const bool branch_taken_0x228c38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c38) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228C40u;
label_228c40:
    // 0x228c40: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x228c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228c44:
    // 0x228c44: 0x0  nop
    ctx->pc = 0x228c44u;
    // NOP
label_228c48:
    // 0x228c48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_228c4c:
    if (ctx->pc == 0x228C4Cu) {
        ctx->pc = 0x228C50u;
        goto label_228c50;
    }
    ctx->pc = 0x228C48u;
    {
        const bool branch_taken_0x228c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c48) {
            ctx->pc = 0x228C68u;
            goto label_228c68;
        }
    }
    ctx->pc = 0x228C50u;
label_228c50:
    // 0x228c50: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x228c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228c54:
    // 0x228c54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x228c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_228c58:
    // 0x228c58: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x228c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_228c5c:
    // 0x228c5c: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x228c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228c60:
    // 0x228c60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228c64:
    // 0x228c64: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x228c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_228c68:
    // 0x228c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x228c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_228c6c:
    // 0x228c6c: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x228c6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_228c70:
    // 0x228c70: 0x1480ffa8  bnez        $a0, . + 4 + (-0x58 << 2)
label_228c74:
    if (ctx->pc == 0x228C74u) {
        ctx->pc = 0x228C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C70u;
        // 0x228c74: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C78u;
        goto label_228c78;
    }
    ctx->pc = 0x228C70u;
    {
        const bool branch_taken_0x228c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C70u;
        // 0x228c74: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c70) {
            ctx->pc = 0x228B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228b14;
        }
    }
    ctx->pc = 0x228C78u;
label_228c78:
    // 0x228c78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_228c7c:
    // 0x228c7c: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x228c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_228c80:
    // 0x228c80: 0x1440fd98  bnez        $v0, . + 4 + (-0x268 << 2)
label_228c84:
    if (ctx->pc == 0x228C84u) {
        ctx->pc = 0x228C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C80u;
        // 0x228c84: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228C88u;
        goto label_228c88;
    }
    ctx->pc = 0x228C80u;
    {
        const bool branch_taken_0x228c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C80u;
        // 0x228c84: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c80) {
            ctx->pc = 0x2282E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2282e4; return; }
        }
    }
    ctx->pc = 0x228C88u;
label_228c88:
    // 0x228c88: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_228c8c:
    // 0x228c8c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x228c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_228c90:
    // 0x228c90: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x228c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
label_228c94:
    // 0x228c94: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x228c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_228c98:
    // 0x228c98: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x228c98u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_228c9c:
    // 0x228c9c: 0x2463ed10  addiu       $v1, $v1, -0x12F0
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962448));
label_228ca0:
    // 0x228ca0: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x228ca0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_228ca4:
    // 0x228ca4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x228ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_228ca8:
    // 0x228ca8: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x228ca8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_228cac:
    // 0x228cac: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x228cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_228cb0:
    // 0x228cb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x228cb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228cb4:
    // 0x228cb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x228cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228cb8:
    // 0x228cb8: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x228cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
label_228cbc:
    // 0x228cbc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_228cc0:
    // 0x228cc0: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x228cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
label_228cc4:
    // 0x228cc4: 0x2442ed40  addiu       $v0, $v0, -0x12C0
    ctx->pc = 0x228cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962496));
label_228cc8:
    // 0x228cc8: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x228cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
label_228ccc:
    // 0x228ccc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x228cccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_228cd0:
    // 0x228cd0: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x228cd0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_228cd4:
    // 0x228cd4: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x228cd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_228cd8:
    // 0x228cd8: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x228cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_228cdc:
    // 0x228cdc: 0x7ce40010  sq          $a0, 0x10($a3)
    ctx->pc = 0x228cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 4));
label_228ce0:
    // 0x228ce0: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x228ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
label_228ce4:
    // 0x228ce4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x228ce4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_228ce8:
    // 0x228ce8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x228ce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_228cec:
    // 0x228cec: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x228cecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_228cf0:
    // 0x228cf0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x228cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_228cf4:
    // 0x228cf4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x228cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_228cf8:
    // 0x228cf8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x228cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_228cfc:
    // 0x228cfc: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x228cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_228d00:
    // 0x228d00: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x228d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_228d04:
    // 0x228d04: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x228d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_228d08:
    // 0x228d08: 0x34428bad  ori         $v0, $v0, 0x8BAD
    ctx->pc = 0x228d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_228d0c:
    // 0x228d0c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x228d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_228d10:
    // 0x228d10: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x228d10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228d14:
    // 0x228d14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x228d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228d18:
    // 0x228d18: 0xaa2021  addu        $a0, $a1, $t2
    ctx->pc = 0x228d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_228d1c:
    // 0x228d1c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x228d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_228d20:
    // 0x228d20: 0x896821  addu        $t5, $a0, $t1
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_228d24:
    // 0x228d24: 0x91ae0039  lbu         $t6, 0x39($t5)
    ctx->pc = 0x228d24u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 57)));
label_228d28:
    // 0x228d28: 0x15c30085  bne         $t6, $v1, . + 4 + (0x85 << 2)
label_228d2c:
    if (ctx->pc == 0x228D2Cu) {
        ctx->pc = 0x228D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D28u;
        // 0x228d2c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D30u;
        goto label_228d30;
    }
    ctx->pc = 0x228D28u;
    {
        const bool branch_taken_0x228d28 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x228D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D28u;
        // 0x228d2c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d28) {
            ctx->pc = 0x228F40u;
            goto label_228f40;
        }
    }
    ctx->pc = 0x228D30u;
label_228d30:
    // 0x228d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228d34:
    // 0x228d34: 0xc5a20004  lwc1        $f2, 0x4($t5)
    ctx->pc = 0x228d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228d38:
    // 0x228d38: 0x0  nop
    ctx->pc = 0x228d38u;
    // NOP
label_228d3c:
    // 0x228d3c: 0x0  nop
    ctx->pc = 0x228d3cu;
    // NOP
label_228d40:
    // 0x228d40: 0x1107021  addu        $t6, $t0, $s0
    ctx->pc = 0x228d40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_228d44:
    // 0x228d44: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228d48:
    // 0x228d48: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x228d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228d4c:
    // 0x228d4c: 0x0  nop
    ctx->pc = 0x228d4cu;
    // NOP
label_228d50:
    // 0x228d50: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_228d54:
    if (ctx->pc == 0x228D54u) {
        ctx->pc = 0x228D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D50u;
        // 0x228d54: 0xf08821  addu        $s1, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D58u;
        goto label_228d58;
    }
    ctx->pc = 0x228D50u;
    {
        const bool branch_taken_0x228d50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D50u;
        // 0x228d54: 0xf08821  addu        $s1, $a3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d50) {
            ctx->pc = 0x228E28u;
            goto label_228e28;
        }
    }
    ctx->pc = 0x228D58u;
label_228d58:
    // 0x228d58: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x228d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228d5c:
    // 0x228d5c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x228d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228d60:
    // 0x228d60: 0x0  nop
    ctx->pc = 0x228d60u;
    // NOP
label_228d64:
    // 0x228d64: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_228d68:
    if (ctx->pc == 0x228D68u) {
        ctx->pc = 0x228D6Cu;
        goto label_228d6c;
    }
    ctx->pc = 0x228D64u;
    {
        const bool branch_taken_0x228d64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228d64) {
            ctx->pc = 0x228E28u;
            goto label_228e28;
        }
    }
    ctx->pc = 0x228D6Cu;
label_228d6c:
    // 0x228d6c: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x228d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228d70:
    // 0x228d70: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x228d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228d74:
    // 0x228d74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228d78:
    // 0x228d78: 0x0  nop
    ctx->pc = 0x228d78u;
    // NOP
label_228d7c:
    // 0x228d7c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_228d80:
    if (ctx->pc == 0x228D80u) {
        ctx->pc = 0x228D84u;
        goto label_228d84;
    }
    ctx->pc = 0x228D7Cu;
    {
        const bool branch_taken_0x228d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228d7c) {
            ctx->pc = 0x228E28u;
            goto label_228e28;
        }
    }
    ctx->pc = 0x228D84u;
label_228d84:
    // 0x228d84: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x228d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228d88:
    // 0x228d88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228d88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228d8c:
    // 0x228d8c: 0x0  nop
    ctx->pc = 0x228d8cu;
    // NOP
label_228d90:
    // 0x228d90: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_228d94:
    if (ctx->pc == 0x228D94u) {
        ctx->pc = 0x228D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D90u;
        // 0x228d94: 0xf70c0  sll         $t6, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D98u;
        goto label_228d98;
    }
    ctx->pc = 0x228D90u;
    {
        const bool branch_taken_0x228d90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D90u;
        // 0x228d94: 0xf70c0  sll         $t6, $t7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d90) {
            ctx->pc = 0x228E28u;
            goto label_228e28;
        }
    }
    ctx->pc = 0x228D98u;
label_228d98:
    // 0x228d98: 0xce7821  addu        $t7, $a2, $t6
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_228d9c:
    // 0x228d9c: 0x10e7021  addu        $t6, $t0, $t6
    ctx->pc = 0x228d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
label_228da0:
    // 0x228da0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x228da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228da4:
    // 0x228da4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228da8:
    // 0x228da8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_228dac:
    // 0x228dac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x228dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_228db0:
    // 0x228db0: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x228db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_228db4:
    // 0x228db4: 0xc5e20004  lwc1        $f2, 0x4($t7)
    ctx->pc = 0x228db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228db8:
    // 0x228db8: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x228db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228dbc:
    // 0x228dbc: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x228dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228dc0:
    // 0x228dc0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228dc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_228dc4:
    // 0x228dc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228dc8:
    // 0x228dc8: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x228dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_228dcc:
    // 0x228dcc: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x228dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228dd0:
    // 0x228dd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228dd4:
    // 0x228dd4: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x228dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_228dd8:
    // 0x228dd8: 0x0  nop
    ctx->pc = 0x228dd8u;
    // NOP
label_228ddc:
    // 0x228ddc: 0x4e0018  mult        $zero, $v0, $t6
    ctx->pc = 0x228ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228de0:
    // 0x228de0: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_228de4:
    // 0x228de4: 0x0  nop
    ctx->pc = 0x228de4u;
    // NOP
label_228de8:
    // 0x228de8: 0x7010  mfhi        $t6
    ctx->pc = 0x228de8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_228dec:
    // 0x228dec: 0xe72c3  sra         $t6, $t6, 11
    ctx->pc = 0x228decu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 11));
label_228df0:
    // 0x228df0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x228df0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_228df4:
    // 0x228df4: 0xa1ae0022  sb          $t6, 0x22($t5)
    ctx->pc = 0x228df4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 34), (uint8_t)GPR_U32(ctx, 14));
label_228df8:
    // 0x228df8: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x228df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228dfc:
    // 0x228dfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228dfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228e00:
    // 0x228e00: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x228e00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_228e04:
    // 0x228e04: 0x0  nop
    ctx->pc = 0x228e04u;
    // NOP
label_228e08:
    // 0x228e08: 0x4e0018  mult        $zero, $v0, $t6
    ctx->pc = 0x228e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228e0c:
    // 0x228e0c: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_228e10:
    // 0x228e10: 0x0  nop
    ctx->pc = 0x228e10u;
    // NOP
label_228e14:
    // 0x228e14: 0x7010  mfhi        $t6
    ctx->pc = 0x228e14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_228e18:
    // 0x228e18: 0xe72c3  sra         $t6, $t6, 11
    ctx->pc = 0x228e18u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 11));
label_228e1c:
    // 0x228e1c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x228e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_228e20:
    // 0x228e20: 0x10000005  b           . + 4 + (0x5 << 2)
label_228e24:
    if (ctx->pc == 0x228E24u) {
        ctx->pc = 0x228E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E20u;
        // 0x228e24: 0xa1ae0023  sb          $t6, 0x23($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 35), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228E28u;
        goto label_228e28;
    }
    ctx->pc = 0x228E20u;
    {
        const bool branch_taken_0x228e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E20u;
        // 0x228e24: 0xa1ae0023  sb          $t6, 0x23($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 35), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e20) {
            ctx->pc = 0x228E38u;
            goto label_228e38;
        }
    }
    ctx->pc = 0x228E28u;
label_228e28:
    // 0x228e28: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x228e28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_228e2c:
    // 0x228e2c: 0x29ee0006  slti        $t6, $t7, 0x6
    ctx->pc = 0x228e2cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)6) ? 1 : 0);
label_228e30:
    // 0x228e30: 0x15c0ffc2  bnez        $t6, . + 4 + (-0x3E << 2)
label_228e34:
    if (ctx->pc == 0x228E34u) {
        ctx->pc = 0x228E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E30u;
        // 0x228e34: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228E38u;
        goto label_228e38;
    }
    ctx->pc = 0x228E30u;
    {
        const bool branch_taken_0x228e30 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E30u;
        // 0x228e34: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e30) {
            ctx->pc = 0x228D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228d3c;
        }
    }
    ctx->pc = 0x228E38u;
label_228e38:
    // 0x228e38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228e3c:
    // 0x228e3c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x228e3cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228e40:
    // 0x228e40: 0xc5a20014  lwc1        $f2, 0x14($t5)
    ctx->pc = 0x228e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228e44:
    // 0x228e44: 0x0  nop
    ctx->pc = 0x228e44u;
    // NOP
label_228e48:
    // 0x228e48: 0x10f7021  addu        $t6, $t0, $t7
    ctx->pc = 0x228e48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
label_228e4c:
    // 0x228e4c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228e50:
    // 0x228e50: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x228e50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228e54:
    // 0x228e54: 0x0  nop
    ctx->pc = 0x228e54u;
    // NOP
label_228e58:
    // 0x228e58: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_228e5c:
    if (ctx->pc == 0x228E5Cu) {
        ctx->pc = 0x228E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E58u;
        // 0x228e5c: 0xef8021  addu        $s0, $a3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228E60u;
        goto label_228e60;
    }
    ctx->pc = 0x228E58u;
    {
        const bool branch_taken_0x228e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E58u;
        // 0x228e5c: 0xef8021  addu        $s0, $a3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e58) {
            ctx->pc = 0x228F30u;
            goto label_228f30;
        }
    }
    ctx->pc = 0x228E60u;
label_228e60:
    // 0x228e60: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x228e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228e64:
    // 0x228e64: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x228e64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228e68:
    // 0x228e68: 0x0  nop
    ctx->pc = 0x228e68u;
    // NOP
label_228e6c:
    // 0x228e6c: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_228e70:
    if (ctx->pc == 0x228E70u) {
        ctx->pc = 0x228E74u;
        goto label_228e74;
    }
    ctx->pc = 0x228E6Cu;
    {
        const bool branch_taken_0x228e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228e6c) {
            ctx->pc = 0x228F30u;
            goto label_228f30;
        }
    }
    ctx->pc = 0x228E74u;
label_228e74:
    // 0x228e74: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x228e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228e78:
    // 0x228e78: 0xc5a10018  lwc1        $f1, 0x18($t5)
    ctx->pc = 0x228e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228e7c:
    // 0x228e7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228e80:
    // 0x228e80: 0x0  nop
    ctx->pc = 0x228e80u;
    // NOP
label_228e84:
    // 0x228e84: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_228e88:
    if (ctx->pc == 0x228E88u) {
        ctx->pc = 0x228E8Cu;
        goto label_228e8c;
    }
    ctx->pc = 0x228E84u;
    {
        const bool branch_taken_0x228e84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228e84) {
            ctx->pc = 0x228F30u;
            goto label_228f30;
        }
    }
    ctx->pc = 0x228E8Cu;
label_228e8c:
    // 0x228e8c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x228e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228e90:
    // 0x228e90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228e90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228e94:
    // 0x228e94: 0x0  nop
    ctx->pc = 0x228e94u;
    // NOP
label_228e98:
    // 0x228e98: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_228e9c:
    if (ctx->pc == 0x228E9Cu) {
        ctx->pc = 0x228E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E98u;
        // 0x228e9c: 0x1170c0  sll         $t6, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228EA0u;
        goto label_228ea0;
    }
    ctx->pc = 0x228E98u;
    {
        const bool branch_taken_0x228e98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E98u;
        // 0x228e9c: 0x1170c0  sll         $t6, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e98) {
            ctx->pc = 0x228F30u;
            goto label_228f30;
        }
    }
    ctx->pc = 0x228EA0u;
label_228ea0:
    // 0x228ea0: 0xce7821  addu        $t7, $a2, $t6
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_228ea4:
    // 0x228ea4: 0x10e7021  addu        $t6, $t0, $t6
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
label_228ea8:
    // 0x228ea8: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x228ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228eac:
    // 0x228eac: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228eb0:
    // 0x228eb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_228eb4:
    // 0x228eb4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x228eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_228eb8:
    // 0x228eb8: 0xe5a00014  swc1        $f0, 0x14($t5)
    ctx->pc = 0x228eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
label_228ebc:
    // 0x228ebc: 0xc5e20004  lwc1        $f2, 0x4($t7)
    ctx->pc = 0x228ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228ec0:
    // 0x228ec0: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x228ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228ec4:
    // 0x228ec4: 0xc5a00018  lwc1        $f0, 0x18($t5)
    ctx->pc = 0x228ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228ec8:
    // 0x228ec8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_228ecc:
    // 0x228ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228ed0:
    // 0x228ed0: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x228ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
label_228ed4:
    // 0x228ed4: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x228ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228ed8:
    // 0x228ed8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228edc:
    // 0x228edc: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x228edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_228ee0:
    // 0x228ee0: 0x0  nop
    ctx->pc = 0x228ee0u;
    // NOP
label_228ee4:
    // 0x228ee4: 0x4e0018  mult        $zero, $v0, $t6
    ctx->pc = 0x228ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228ee8:
    // 0x228ee8: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x228ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_228eec:
    // 0x228eec: 0x0  nop
    ctx->pc = 0x228eecu;
    // NOP
label_228ef0:
    // 0x228ef0: 0x7010  mfhi        $t6
    ctx->pc = 0x228ef0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_228ef4:
    // 0x228ef4: 0xe72c3  sra         $t6, $t6, 11
    ctx->pc = 0x228ef4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 11));
label_228ef8:
    // 0x228ef8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_228efc:
    // 0x228efc: 0xa1ae0026  sb          $t6, 0x26($t5)
    ctx->pc = 0x228efcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 38), (uint8_t)GPR_U32(ctx, 14));
label_228f00:
    // 0x228f00: 0xc5a00018  lwc1        $f0, 0x18($t5)
    ctx->pc = 0x228f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228f04:
    // 0x228f04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228f08:
    // 0x228f08: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x228f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_228f0c:
    // 0x228f0c: 0x0  nop
    ctx->pc = 0x228f0cu;
    // NOP
label_228f10:
    // 0x228f10: 0x4e0018  mult        $zero, $v0, $t6
    ctx->pc = 0x228f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228f14:
    // 0x228f14: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x228f14u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_228f18:
    // 0x228f18: 0x0  nop
    ctx->pc = 0x228f18u;
    // NOP
label_228f1c:
    // 0x228f1c: 0x7010  mfhi        $t6
    ctx->pc = 0x228f1cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_228f20:
    // 0x228f20: 0xe72c3  sra         $t6, $t6, 11
    ctx->pc = 0x228f20u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 11));
label_228f24:
    // 0x228f24: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x228f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_228f28:
    // 0x228f28: 0x10000005  b           . + 4 + (0x5 << 2)
label_228f2c:
    if (ctx->pc == 0x228F2Cu) {
        ctx->pc = 0x228F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F28u;
        // 0x228f2c: 0xa1ae0027  sb          $t6, 0x27($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 39), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228F30u;
        goto label_228f30;
    }
    ctx->pc = 0x228F28u;
    {
        const bool branch_taken_0x228f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F28u;
        // 0x228f2c: 0xa1ae0027  sb          $t6, 0x27($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 39), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f28) {
            ctx->pc = 0x228F40u;
            goto label_228f40;
        }
    }
    ctx->pc = 0x228F30u;
label_228f30:
    // 0x228f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_228f34:
    // 0x228f34: 0x2a2e0006  slti        $t6, $s1, 0x6
    ctx->pc = 0x228f34u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_228f38:
    // 0x228f38: 0x15c0ffc3  bnez        $t6, . + 4 + (-0x3D << 2)
label_228f3c:
    if (ctx->pc == 0x228F3Cu) {
        ctx->pc = 0x228F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F38u;
        // 0x228f3c: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228F40u;
        goto label_228f40;
    }
    ctx->pc = 0x228F38u;
    {
        const bool branch_taken_0x228f38 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F38u;
        // 0x228f3c: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f38) {
            ctx->pc = 0x228E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228e48;
        }
    }
    ctx->pc = 0x228F40u;
label_228f40:
    // 0x228f40: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_228f44:
    // 0x228f44: 0x298d00ff  slti        $t5, $t4, 0xFF
    ctx->pc = 0x228f44u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)255) ? 1 : 0);
label_228f48:
    // 0x228f48: 0x15a0ff75  bnez        $t5, . + 4 + (-0x8B << 2)
label_228f4c:
    if (ctx->pc == 0x228F4Cu) {
        ctx->pc = 0x228F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F48u;
        // 0x228f4c: 0x25290048  addiu       $t1, $t1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228F50u;
        goto label_228f50;
    }
    ctx->pc = 0x228F48u;
    {
        const bool branch_taken_0x228f48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F48u;
        // 0x228f4c: 0x25290048  addiu       $t1, $t1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f48) {
            ctx->pc = 0x228D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228d20;
        }
    }
    ctx->pc = 0x228F50u;
label_228f50:
    // 0x228f50: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x228f50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_228f54:
    // 0x228f54: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x228f54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_228f58:
    // 0x228f58: 0x1480ff6d  bnez        $a0, . + 4 + (-0x93 << 2)
label_228f5c:
    if (ctx->pc == 0x228F5Cu) {
        ctx->pc = 0x228F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F58u;
        // 0x228f5c: 0x254a47b8  addiu       $t2, $t2, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228F60u;
        goto label_228f60;
    }
    ctx->pc = 0x228F58u;
    {
        const bool branch_taken_0x228f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F58u;
        // 0x228f5c: 0x254a47b8  addiu       $t2, $t2, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f58) {
            ctx->pc = 0x228D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228d10;
        }
    }
    ctx->pc = 0x228F60u;
label_228f60:
    // 0x228f60: 0x8f8584e0  lw          $a1, -0x7B20($gp)
    ctx->pc = 0x228f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_228f64:
    // 0x228f64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228f68:
    // 0x228f68: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x228f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_228f6c:
    // 0x228f6c: 0x27ab00e0  addiu       $t3, $sp, 0xE0
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_228f70:
    // 0x228f70: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x228f70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_228f74:
    // 0x228f74: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x228f74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_228f78:
    // 0x228f78: 0x34498bad  ori         $t1, $v0, 0x8BAD
    ctx->pc = 0x228f78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_228f7c:
    // 0x228f7c: 0x0  nop
    ctx->pc = 0x228f7cu;
    // NOP
label_228f80:
    // 0x228f80: 0x90a2002e  lbu         $v0, 0x2E($a1)
    ctx->pc = 0x228f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_228f84:
    // 0x228f84: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_228f88:
    if (ctx->pc == 0x228F88u) {
        ctx->pc = 0x228F8Cu;
        goto label_228f8c;
    }
    ctx->pc = 0x228F84u;
    {
        const bool branch_taken_0x228f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228f84) {
            ctx->pc = 0x2290D0u;
            { ctx->pc = 0x2290d0; return; }
        }
    }
    ctx->pc = 0x228F8Cu;
label_228f8c:
    // 0x228f8c: 0x90a2002f  lbu         $v0, 0x2F($a1)
    ctx->pc = 0x228f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 47)));
label_228f90:
    // 0x228f90: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x228f90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_228f94:
    // 0x228f94: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_228f98:
    if (ctx->pc == 0x228F98u) {
        ctx->pc = 0x228F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F94u;
        // 0x228f98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228F9Cu;
        goto label_228f9c;
    }
    ctx->pc = 0x228F94u;
    {
        const bool branch_taken_0x228f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F94u;
        // 0x228f98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f94) {
            ctx->pc = 0x2290D0u;
            { ctx->pc = 0x2290d0; return; }
        }
    }
    ctx->pc = 0x228F9Cu;
label_228f9c:
    // 0x228f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228fa0:
    // 0x228fa0: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x228fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_228fa4:
    // 0x228fa4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x228fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_228fa8:
    // 0x228fa8: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
label_228fac:
    if (ctx->pc == 0x228FACu) {
        ctx->pc = 0x228FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FA8u;
        // 0x228fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228FB0u;
        goto label_228fb0;
    }
    ctx->pc = 0x228FA8u;
    {
        const bool branch_taken_0x228fa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FA8u;
        // 0x228fac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fa8) {
            ctx->pc = 0x2290C0u;
            { ctx->pc = 0x2290c0; return; }
        }
    }
    ctx->pc = 0x228FB0u;
label_228fb0:
    // 0x228fb0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x228fb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228fb4:
    // 0x228fb4: 0xc4c10150  lwc1        $f1, 0x150($a2)
    ctx->pc = 0x228fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228fb8:
    // 0x228fb8: 0x0  nop
    ctx->pc = 0x228fb8u;
    // NOP
label_228fbc:
    // 0x228fbc: 0x0  nop
    ctx->pc = 0x228fbcu;
    // NOP
label_228fc0:
    // 0x228fc0: 0x18d3821  addu        $a3, $t4, $t5
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_228fc4:
    // 0x228fc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x228fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228fc8:
    // 0x228fc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228fc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228fcc:
    // 0x228fcc: 0x0  nop
    ctx->pc = 0x228fccu;
    // NOP
label_228fd0:
    // 0x228fd0: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_228fd4:
    if (ctx->pc == 0x228FD4u) {
        ctx->pc = 0x228FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FD0u;
        // 0x228fd4: 0x16d7021  addu        $t6, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228FD8u;
        goto label_228fd8;
    }
    ctx->pc = 0x228FD0u;
    {
        const bool branch_taken_0x228fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FD0u;
        // 0x228fd4: 0x16d7021  addu        $t6, $t3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fd0) {
            ctx->pc = 0x2290ACu;
            { ctx->pc = 0x2290ac; return; }
        }
    }
    ctx->pc = 0x228FD8u;
label_228fd8:
    // 0x228fd8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x228fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228fdc:
    // 0x228fdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228fe0:
    // 0x228fe0: 0x0  nop
    ctx->pc = 0x228fe0u;
    // NOP
label_228fe4:
    // 0x228fe4: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_228fe8:
    if (ctx->pc == 0x228FE8u) {
        ctx->pc = 0x228FECu;
        goto label_228fec;
    }
    ctx->pc = 0x228FE4u;
    {
        const bool branch_taken_0x228fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228fe4) {
            ctx->pc = 0x2290ACu;
            { ctx->pc = 0x2290ac; return; }
        }
    }
    ctx->pc = 0x228FECu;
label_228fec:
    // 0x228fec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x228fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228ff0:
    // 0x228ff0: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x228ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_228ff4:
    // 0x228ff4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x228ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228ff8:
    // 0x228ff8: 0x0  nop
    ctx->pc = 0x228ff8u;
    // NOP
label_228ffc:
    // 0x228ffc: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_229000:
    if (ctx->pc == 0x229000u) {
        ctx->pc = 0x229004u;
        goto label_229004;
    }
    ctx->pc = 0x228FFCu;
    {
        const bool branch_taken_0x228ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228ffc) {
            ctx->pc = 0x2290ACu;
            { ctx->pc = 0x2290ac; return; }
        }
    }
    ctx->pc = 0x229004u;
label_229004:
    // 0x229004: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x229004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229008:
    // 0x229008: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x229008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22900c:
    // 0x22900c: 0x0  nop
    ctx->pc = 0x22900cu;
    // NOP
label_229010:
    // 0x229010: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_229014:
    if (ctx->pc == 0x229014u) {
        ctx->pc = 0x229014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229010u;
        // 0x229014: 0x838c0  sll         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229018u;
        goto label_229018;
    }
    ctx->pc = 0x229010u;
    {
        const bool branch_taken_0x229010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229010u;
        // 0x229014: 0x838c0  sll         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229010) {
            ctx->pc = 0x2290ACu;
            { ctx->pc = 0x2290ac; return; }
        }
    }
    ctx->pc = 0x229018u;
label_229018:
    // 0x229018: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_22901c:
    // 0x22901c: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x22901cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_229020:
    // 0x229020: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x229020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_229024:
    // 0x229024: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x229024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229028:
    // 0x229028: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x229028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22902c:
    // 0x22902c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22902cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_229030:
    // 0x229030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_229034:
    // 0x229034: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x229034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
label_229038:
    // 0x229038: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x229038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22903c:
    // 0x22903c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x22903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229040:
    // 0x229040: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x229040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229044:
    // 0x229044: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x229044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_229048:
    // 0x229048: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22904c:
    // 0x22904c: 0xe4c00058  swc1        $f0, 0x58($a2)
    ctx->pc = 0x22904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
label_229050:
    // 0x229050: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x229050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229054:
    // 0x229054: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_229058:
    // 0x229058: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x229058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_22905c:
    // 0x22905c: 0x0  nop
    ctx->pc = 0x22905cu;
    // NOP
label_229060:
    // 0x229060: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x229060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_229064:
    // 0x229064: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x229064u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_229068:
    // 0x229068: 0x0  nop
    ctx->pc = 0x229068u;
    // NOP
label_22906c:
    // 0x22906c: 0x3810  mfhi        $a3
    ctx->pc = 0x22906cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_229070:
    // 0x229070: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x229070u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
label_229074:
    // 0x229074: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x229074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_229078:
    // 0x229078: 0xa0c70218  sb          $a3, 0x218($a2)
    ctx->pc = 0x229078u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 536), (uint8_t)GPR_U32(ctx, 7));
label_22907c:
    // 0x22907c: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x22907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229080:
    // 0x229080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_229084:
    // 0x229084: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x229084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_229088:
    // 0x229088: 0x0  nop
    ctx->pc = 0x229088u;
    // NOP
label_22908c:
    // 0x22908c: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x22908cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    ctx->pc = 0x229090u;
    return;
}
