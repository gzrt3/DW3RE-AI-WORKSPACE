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


void FUN_0019b868_part214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        case 0x203af8u: goto label_203af8;
        case 0x203afcu: goto label_203afc;
        case 0x203b00u: goto label_203b00;
        case 0x203b04u: goto label_203b04;
        case 0x203b08u: goto label_203b08;
        case 0x203b0cu: goto label_203b0c;
        case 0x203b10u: goto label_203b10;
        case 0x203b14u: goto label_203b14;
        case 0x203b18u: goto label_203b18;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b20u: goto label_203b20;
        case 0x203b24u: goto label_203b24;
        case 0x203b28u: goto label_203b28;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b30u: goto label_203b30;
        case 0x203b34u: goto label_203b34;
        case 0x203b38u: goto label_203b38;
        case 0x203b3cu: goto label_203b3c;
        case 0x203b40u: goto label_203b40;
        case 0x203b44u: goto label_203b44;
        case 0x203b48u: goto label_203b48;
        case 0x203b4cu: goto label_203b4c;
        case 0x203b50u: goto label_203b50;
        case 0x203b54u: goto label_203b54;
        case 0x203b58u: goto label_203b58;
        case 0x203b5cu: goto label_203b5c;
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        case 0x203be4u: goto label_203be4;
        case 0x203be8u: goto label_203be8;
        case 0x203becu: goto label_203bec;
        case 0x203bf0u: goto label_203bf0;
        case 0x203bf4u: goto label_203bf4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c00u: goto label_203c00;
        case 0x203c04u: goto label_203c04;
        case 0x203c08u: goto label_203c08;
        case 0x203c0cu: goto label_203c0c;
        case 0x203c10u: goto label_203c10;
        case 0x203c14u: goto label_203c14;
        case 0x203c18u: goto label_203c18;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c20u: goto label_203c20;
        case 0x203c24u: goto label_203c24;
        case 0x203c28u: goto label_203c28;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c30u: goto label_203c30;
        case 0x203c34u: goto label_203c34;
        case 0x203c38u: goto label_203c38;
        case 0x203c3cu: goto label_203c3c;
        case 0x203c40u: goto label_203c40;
        case 0x203c44u: goto label_203c44;
        case 0x203c48u: goto label_203c48;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c50u: goto label_203c50;
        case 0x203c54u: goto label_203c54;
        case 0x203c58u: goto label_203c58;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c60u: goto label_203c60;
        case 0x203c64u: goto label_203c64;
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c70u: goto label_203c70;
        case 0x203c74u: goto label_203c74;
        case 0x203c78u: goto label_203c78;
        case 0x203c7cu: goto label_203c7c;
        case 0x203c80u: goto label_203c80;
        case 0x203c84u: goto label_203c84;
        case 0x203c88u: goto label_203c88;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c90u: goto label_203c90;
        case 0x203c94u: goto label_203c94;
        case 0x203c98u: goto label_203c98;
        case 0x203c9cu: goto label_203c9c;
        case 0x203ca0u: goto label_203ca0;
        case 0x203ca4u: goto label_203ca4;
        case 0x203ca8u: goto label_203ca8;
        case 0x203cacu: goto label_203cac;
        case 0x203cb0u: goto label_203cb0;
        case 0x203cb4u: goto label_203cb4;
        case 0x203cb8u: goto label_203cb8;
        case 0x203cbcu: goto label_203cbc;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cc8u: goto label_203cc8;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd0u: goto label_203cd0;
        case 0x203cd4u: goto label_203cd4;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cdcu: goto label_203cdc;
        case 0x203ce0u: goto label_203ce0;
        case 0x203ce4u: goto label_203ce4;
        case 0x203ce8u: goto label_203ce8;
        case 0x203cecu: goto label_203cec;
        case 0x203cf0u: goto label_203cf0;
        case 0x203cf4u: goto label_203cf4;
        case 0x203cf8u: goto label_203cf8;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d00u: goto label_203d00;
        case 0x203d04u: goto label_203d04;
        case 0x203d08u: goto label_203d08;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d10u: goto label_203d10;
        case 0x203d14u: goto label_203d14;
        case 0x203d18u: goto label_203d18;
        case 0x203d1cu: goto label_203d1c;
        case 0x203d20u: goto label_203d20;
        case 0x203d24u: goto label_203d24;
        case 0x203d28u: goto label_203d28;
        case 0x203d2cu: goto label_203d2c;
        case 0x203d30u: goto label_203d30;
        case 0x203d34u: goto label_203d34;
        case 0x203d38u: goto label_203d38;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        case 0x203dc8u: goto label_203dc8;
        case 0x203dccu: goto label_203dcc;
        case 0x203dd0u: goto label_203dd0;
        case 0x203dd4u: goto label_203dd4;
        case 0x203dd8u: goto label_203dd8;
        case 0x203ddcu: goto label_203ddc;
        case 0x203de0u: goto label_203de0;
        case 0x203de4u: goto label_203de4;
        case 0x203de8u: goto label_203de8;
        case 0x203decu: goto label_203dec;
        case 0x203df0u: goto label_203df0;
        case 0x203df4u: goto label_203df4;
        case 0x203df8u: goto label_203df8;
        case 0x203dfcu: goto label_203dfc;
        case 0x203e00u: goto label_203e00;
        case 0x203e04u: goto label_203e04;
        case 0x203e08u: goto label_203e08;
        case 0x203e0cu: goto label_203e0c;
        case 0x203e10u: goto label_203e10;
        case 0x203e14u: goto label_203e14;
        case 0x203e18u: goto label_203e18;
        case 0x203e1cu: goto label_203e1c;
        case 0x203e20u: goto label_203e20;
        case 0x203e24u: goto label_203e24;
        case 0x203e28u: goto label_203e28;
        case 0x203e2cu: goto label_203e2c;
        case 0x203e30u: goto label_203e30;
        case 0x203e34u: goto label_203e34;
        case 0x203e38u: goto label_203e38;
        case 0x203e3cu: goto label_203e3c;
        case 0x203e40u: goto label_203e40;
        case 0x203e44u: goto label_203e44;
        case 0x203e48u: goto label_203e48;
        case 0x203e4cu: goto label_203e4c;
        case 0x203e50u: goto label_203e50;
        case 0x203e54u: goto label_203e54;
        case 0x203e58u: goto label_203e58;
        case 0x203e5cu: goto label_203e5c;
        case 0x203e60u: goto label_203e60;
        case 0x203e64u: goto label_203e64;
        case 0x203e68u: goto label_203e68;
        case 0x203e6cu: goto label_203e6c;
        case 0x203e70u: goto label_203e70;
        case 0x203e74u: goto label_203e74;
        case 0x203e78u: goto label_203e78;
        case 0x203e7cu: goto label_203e7c;
        case 0x203e80u: goto label_203e80;
        case 0x203e84u: goto label_203e84;
        case 0x203e88u: goto label_203e88;
        case 0x203e8cu: goto label_203e8c;
        case 0x203e90u: goto label_203e90;
        case 0x203e94u: goto label_203e94;
        case 0x203e98u: goto label_203e98;
        case 0x203e9cu: goto label_203e9c;
        case 0x203ea0u: goto label_203ea0;
        case 0x203ea4u: goto label_203ea4;
        case 0x203ea8u: goto label_203ea8;
        case 0x203eacu: goto label_203eac;
        case 0x203eb0u: goto label_203eb0;
        case 0x203eb4u: goto label_203eb4;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ebcu: goto label_203ebc;
        case 0x203ec0u: goto label_203ec0;
        case 0x203ec4u: goto label_203ec4;
        case 0x203ec8u: goto label_203ec8;
        case 0x203eccu: goto label_203ecc;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ed4u: goto label_203ed4;
        case 0x203ed8u: goto label_203ed8;
        case 0x203edcu: goto label_203edc;
        case 0x203ee0u: goto label_203ee0;
        case 0x203ee4u: goto label_203ee4;
        case 0x203ee8u: goto label_203ee8;
        case 0x203eecu: goto label_203eec;
        case 0x203ef0u: goto label_203ef0;
        case 0x203ef4u: goto label_203ef4;
        case 0x203ef8u: goto label_203ef8;
        case 0x203efcu: goto label_203efc;
        case 0x203f00u: goto label_203f00;
        case 0x203f04u: goto label_203f04;
        case 0x203f08u: goto label_203f08;
        case 0x203f0cu: goto label_203f0c;
        case 0x203f10u: goto label_203f10;
        case 0x203f14u: goto label_203f14;
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        case 0x203f4cu: goto label_203f4c;
        case 0x203f50u: goto label_203f50;
        case 0x203f54u: goto label_203f54;
        case 0x203f58u: goto label_203f58;
        case 0x203f5cu: goto label_203f5c;
        case 0x203f60u: goto label_203f60;
        case 0x203f64u: goto label_203f64;
        case 0x203f68u: goto label_203f68;
        case 0x203f6cu: goto label_203f6c;
        case 0x203f70u: goto label_203f70;
        case 0x203f74u: goto label_203f74;
        case 0x203f78u: goto label_203f78;
        case 0x203f7cu: goto label_203f7c;
        case 0x203f80u: goto label_203f80;
        case 0x203f84u: goto label_203f84;
        case 0x203f88u: goto label_203f88;
        case 0x203f8cu: goto label_203f8c;
        case 0x203f90u: goto label_203f90;
        case 0x203f94u: goto label_203f94;
        case 0x203f98u: goto label_203f98;
        case 0x203f9cu: goto label_203f9c;
        case 0x203fa0u: goto label_203fa0;
        case 0x203fa4u: goto label_203fa4;
        case 0x203fa8u: goto label_203fa8;
        case 0x203facu: goto label_203fac;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fb4u: goto label_203fb4;
        case 0x203fb8u: goto label_203fb8;
        case 0x203fbcu: goto label_203fbc;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc4u: goto label_203fc4;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fccu: goto label_203fcc;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd4u: goto label_203fd4;
        case 0x203fd8u: goto label_203fd8;
        case 0x203fdcu: goto label_203fdc;
        case 0x203fe0u: goto label_203fe0;
        case 0x203fe4u: goto label_203fe4;
        case 0x203fe8u: goto label_203fe8;
        case 0x203fecu: goto label_203fec;
        case 0x203ff0u: goto label_203ff0;
        case 0x203ff4u: goto label_203ff4;
        case 0x203ff8u: goto label_203ff8;
        case 0x203ffcu: goto label_203ffc;
        case 0x204000u: goto label_204000;
        case 0x204004u: goto label_204004;
        case 0x204008u: goto label_204008;
        case 0x20400cu: goto label_20400c;
        case 0x204010u: goto label_204010;
        case 0x204014u: goto label_204014;
        case 0x204018u: goto label_204018;
        case 0x20401cu: goto label_20401c;
        case 0x204020u: goto label_204020;
        case 0x204024u: goto label_204024;
        case 0x204028u: goto label_204028;
        case 0x20402cu: goto label_20402c;
        case 0x204030u: goto label_204030;
        case 0x204034u: goto label_204034;
        case 0x204038u: goto label_204038;
        case 0x20403cu: goto label_20403c;
        case 0x204040u: goto label_204040;
        case 0x204044u: goto label_204044;
        default: return;
    }

label_203878:
    // 0x203878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20387c:
    // 0x20387c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203880:
    // 0x203880: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203884:
    // 0x203884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203888:
    // 0x203888: 0xc08104c  jal         func_204130
label_20388c:
    if (ctx->pc == 0x20388Cu) {
        ctx->pc = 0x20388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203888u;
        // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203890u;
        goto label_203890;
    }
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203888u;
    // 0x20388c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0xc07aaa8  jal         func_1EAAA0
label_203894:
    if (ctx->pc == 0x203894u) {
        ctx->pc = 0x203894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203890u;
        // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203898u;
        goto label_203898;
    }
    ctx->pc = 0x203890u;
    SET_GPR_U32(ctx, 31, 0x203898u);
    ctx->pc = 0x203894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203890u;
    // 0x203894: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203898u;
label_203898:
    // 0x203898: 0x10000053  b           . + 4 + (0x53 << 2)
label_20389c:
    if (ctx->pc == 0x20389Cu) {
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038A0u;
        goto label_2038a0;
    }
    ctx->pc = 0x203898u;
    {
        const bool branch_taken_0x203898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203898) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038A0u;
label_2038a0:
    // 0x2038a0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2038a4:
    // 0x2038a4: 0xc080fe4  jal         func_203F90
label_2038a8:
    if (ctx->pc == 0x2038A8u) {
        ctx->pc = 0x2038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038A4u;
        // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038ACu;
        goto label_2038ac;
    }
    ctx->pc = 0x2038A4u;
    SET_GPR_U32(ctx, 31, 0x2038ACu);
    ctx->pc = 0x2038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A4u;
    // 0x2038a8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    goto label_203f90;
    ctx->pc = 0x2038ACu;
label_2038ac:
    // 0x2038ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2038b0:
    // 0x2038b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2038b4:
    // 0x2038b4: 0xc08f390  jal         func_23CE40
label_2038b8:
    if (ctx->pc == 0x2038B8u) {
        ctx->pc = 0x2038B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038B4u;
        // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038BCu;
        goto label_2038bc;
    }
    ctx->pc = 0x2038B4u;
    SET_GPR_U32(ctx, 31, 0x2038BCu);
    ctx->pc = 0x2038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038B4u;
    // 0x2038b8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x2038BCu;
label_2038bc:
    // 0x2038bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2038bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2038c0:
    // 0x2038c0: 0x10000049  b           . + 4 + (0x49 << 2)
label_2038c4:
    if (ctx->pc == 0x2038C4u) {
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038C8u;
        goto label_2038c8;
    }
    ctx->pc = 0x2038C0u;
    {
        const bool branch_taken_0x2038c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C0u;
        // 0x2038c4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c0) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2038C8u;
label_2038c8:
    // 0x2038c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2038c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2038cc:
    // 0x2038cc: 0xc080fe4  jal         func_203F90
label_2038d0:
    if (ctx->pc == 0x2038D0u) {
        ctx->pc = 0x2038D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038CCu;
        // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2038D4u;
        goto label_2038d4;
    }
    ctx->pc = 0x2038CCu;
    SET_GPR_U32(ctx, 31, 0x2038D4u);
    ctx->pc = 0x2038D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038CCu;
    // 0x2038d0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    goto label_203f90;
    ctx->pc = 0x2038D4u;
label_2038d4:
    // 0x2038d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2038d8:
    // 0x2038d8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2038d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2038dc:
    // 0x2038dc: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2038e0:
    // 0x2038e0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2038e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2038e4:
    // 0x2038e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2038e8:
    // 0x2038e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2038ec:
    // 0x2038ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2038f0:
    // 0x2038f0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2038f4:
    // 0x2038f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2038f8:
    // 0x2038f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2038fc:
    // 0x2038fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2038fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_203900:
    // 0x203900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203904:
    // 0x203904: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x203904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_203908:
    // 0x203908: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x203908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_20390c:
    // 0x20390c: 0xc08f390  jal         func_23CE40
label_203910:
    if (ctx->pc == 0x203910u) {
        ctx->pc = 0x203910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20390Cu;
        // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203914u;
        goto label_203914;
    }
    ctx->pc = 0x20390Cu;
    SET_GPR_U32(ctx, 31, 0x203914u);
    ctx->pc = 0x203910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20390Cu;
    // 0x203910: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x203914u;
label_203914:
    // 0x203914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203918:
    // 0x203918: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20391c:
    // 0x20391c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203920:
    // 0x203920: 0xac22f474  sw          $v0, -0xB8C($at)
    ctx->pc = 0x203920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 2));
label_203924:
    // 0x203924: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_203928:
    // 0x203928: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20392c:
    // 0x20392c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20392cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203930:
    // 0x203930: 0xc08104c  jal         func_204130
label_203934:
    if (ctx->pc == 0x203934u) {
        ctx->pc = 0x203934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203930u;
        // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203938u;
        goto label_203938;
    }
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 31, 0x203938u);
    ctx->pc = 0x203934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203930u;
    // 0x203934: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0xc07aaa8  jal         func_1EAAA0
label_20393c:
    if (ctx->pc == 0x20393Cu) {
        ctx->pc = 0x20393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203938u;
        // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203940u;
        goto label_203940;
    }
    ctx->pc = 0x203938u;
    SET_GPR_U32(ctx, 31, 0x203940u);
    ctx->pc = 0x20393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203938u;
    // 0x20393c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203944:
    // 0x203944: 0x10000028  b           . + 4 + (0x28 << 2)
label_203948:
    if (ctx->pc == 0x203948u) {
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20394Cu;
        goto label_20394c;
    }
    ctx->pc = 0x203944u;
    {
        const bool branch_taken_0x203944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203944) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x20394Cu;
label_20394c:
    // 0x20394c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20394cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_203950:
    // 0x203950: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203954:
    // 0x203954: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_203958:
    // 0x203958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20395c:
    // 0x20395c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203960:
    // 0x203960: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_203964:
    // 0x203964: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203968:
    // 0x203968: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20396c:
    // 0x20396c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203970:
    // 0x203970: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_203974:
    // 0x203974: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_203978:
    // 0x203978: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20397c:
    // 0x20397c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20397cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
label_203980:
    // 0x203980: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
label_203984:
    // 0x203984: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_203988:
    // 0x203988: 0x10000017  b           . + 4 + (0x17 << 2)
label_20398c:
    if (ctx->pc == 0x20398Cu) {
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203990u;
        goto label_203990;
    }
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203988) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_203994:
    // 0x203994: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x203994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_203998:
    // 0x203998: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_20399c:
    // 0x20399c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20399cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_2039a0:
    // 0x2039a0: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2039a4:
    // 0x2039a4: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_2039a8:
    // 0x2039a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2039ac:
    // 0x2039ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2039b0:
    // 0x2039b0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2039b4:
    // 0x2039b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2039b8:
    // 0x2039b8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2039b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2039bc:
    // 0x2039bc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2039c0:
    // 0x2039c0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2039c4:
    // 0x2039c4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2039c8:
    // 0x2039c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2039cc:
    // 0x2039cc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_2039d0:
    // 0x2039d0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2039d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_2039d4:
    // 0x2039d4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2039d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_2039d8:
    // 0x2039d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039D8u;
        // 0x2039dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2039e4:
    // 0x2039e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2039e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2039e8:
    // 0x2039e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2039e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2039ec:
    // 0x2039ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2039ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2039f0:
    // 0x2039f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2039f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2039f4:
    // 0x2039f4: 0x3e00008  jr          $ra
label_2039f8:
    if (ctx->pc == 0x2039F8u) {
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039FCu;
        goto label_2039fc;
    }
    ctx->pc = 0x2039F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2039FCu;
label_2039fc:
    // 0x2039fc: 0x0  nop
    ctx->pc = 0x2039fcu;
    // NOP
label_203a00:
    // 0x203a00: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
label_203a04:
    // 0x203a04: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203a08:
    // 0x203a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_203a0c:
    // 0x203a0c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x203a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_203a10:
    // 0x203a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203a14:
    // 0x203a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203a18:
    // 0x203a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203a1c:
    // 0x203a1c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x203a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203a20:
    // 0x203a20: 0x10e3005b  beq         $a3, $v1, . + 4 + (0x5B << 2)
label_203a24:
    if (ctx->pc == 0x203A24u) {
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A28u;
        goto label_203a28;
    }
    ctx->pc = 0x203A20u;
    {
        const bool branch_taken_0x203a20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A20u;
        // 0x203a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a20) {
            ctx->pc = 0x203B90u;
            goto label_203b90;
        }
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_203a2c:
    // 0x203a2c: 0x10e40056  beq         $a3, $a0, . + 4 + (0x56 << 2)
label_203a30:
    if (ctx->pc == 0x203A30u) {
        ctx->pc = 0x203A34u;
        goto label_203a34;
    }
    ctx->pc = 0x203A2Cu;
    {
        const bool branch_taken_0x203a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x203a2c) {
            ctx->pc = 0x203B88u;
            goto label_203b88;
        }
    }
    ctx->pc = 0x203A34u;
label_203a34:
    // 0x203a34: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_203a38:
    // 0x203a38: 0x10e30051  beq         $a3, $v1, . + 4 + (0x51 << 2)
label_203a3c:
    if (ctx->pc == 0x203A3Cu) {
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A40u;
        goto label_203a40;
    }
    ctx->pc = 0x203A38u;
    {
        const bool branch_taken_0x203a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x203A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A38u;
        // 0x203a3c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a38) {
            ctx->pc = 0x203B80u;
            goto label_203b80;
        }
    }
    ctx->pc = 0x203A40u;
label_203a40:
    // 0x203a40: 0x10e5004d  beq         $a3, $a1, . + 4 + (0x4D << 2)
label_203a44:
    if (ctx->pc == 0x203A44u) {
        ctx->pc = 0x203A48u;
        goto label_203a48;
    }
    ctx->pc = 0x203A40u;
    {
        const bool branch_taken_0x203a40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x203a40) {
            ctx->pc = 0x203B78u;
            goto label_203b78;
        }
    }
    ctx->pc = 0x203A48u;
label_203a48:
    // 0x203a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203a4c:
    // 0x203a4c: 0x10e30028  beq         $a3, $v1, . + 4 + (0x28 << 2)
label_203a50:
    if (ctx->pc == 0x203A50u) {
        ctx->pc = 0x203A54u;
        goto label_203a54;
    }
    ctx->pc = 0x203A4Cu;
    {
        const bool branch_taken_0x203a4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x203a4c) {
            ctx->pc = 0x203AF0u;
            goto label_203af0;
        }
    }
    ctx->pc = 0x203A54u;
label_203a54:
    // 0x203a54: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_203a58:
    if (ctx->pc == 0x203A58u) {
        ctx->pc = 0x203A5Cu;
        goto label_203a5c;
    }
    ctx->pc = 0x203A54u;
    {
        const bool branch_taken_0x203a54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x203a54) {
            ctx->pc = 0x203A64u;
            goto label_203a64;
        }
    }
    ctx->pc = 0x203A5Cu;
label_203a5c:
    // 0x203a5c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_203a60:
    if (ctx->pc == 0x203A60u) {
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A64u;
        goto label_203a64;
    }
    ctx->pc = 0x203A5Cu;
    {
        const bool branch_taken_0x203a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A5Cu;
        // 0x203a60: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a5c) {
            ctx->pc = 0x203C1Cu;
            goto label_203c1c;
        }
    }
    ctx->pc = 0x203A64u;
label_203a64:
    // 0x203a64: 0x8cc40480  lw          $a0, 0x480($a2)
    ctx->pc = 0x203a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_203a68:
    // 0x203a68: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_203a6c:
    // 0x203a6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_203a70:
    // 0x203a70: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203a74:
    if (ctx->pc == 0x203A74u) {
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A78u;
        goto label_203a78;
    }
    ctx->pc = 0x203A70u;
    {
        const bool branch_taken_0x203a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A70u;
        // 0x203a74: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a70) {
            ctx->pc = 0x203AACu;
            goto label_203aac;
        }
    }
    ctx->pc = 0x203A78u;
label_203a78:
    // 0x203a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203a7c:
    // 0x203a7c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203a80:
    // 0x203a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203a84:
    // 0x203a84: 0xc08104c  jal         func_204130
label_203a88:
    if (ctx->pc == 0x203A88u) {
        ctx->pc = 0x203A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A84u;
        // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A8Cu;
        goto label_203a8c;
    }
    ctx->pc = 0x203A84u;
    SET_GPR_U32(ctx, 31, 0x203A8Cu);
    ctx->pc = 0x203A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A84u;
    // 0x203a88: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203A8Cu;
label_203a8c:
    // 0x203a8c: 0xc07aaa8  jal         func_1EAAA0
label_203a90:
    if (ctx->pc == 0x203A90u) {
        ctx->pc = 0x203A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A8Cu;
        // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A94u;
        goto label_203a94;
    }
    ctx->pc = 0x203A8Cu;
    SET_GPR_U32(ctx, 31, 0x203A94u);
    ctx->pc = 0x203A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A8Cu;
    // 0x203a90: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203A94u;
label_203a94:
    // 0x203a94: 0xc07aa84  jal         func_1EAA10
label_203a98:
    if (ctx->pc == 0x203A98u) {
        ctx->pc = 0x203A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A94u;
        // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A9Cu;
        goto label_203a9c;
    }
    ctx->pc = 0x203A94u;
    SET_GPR_U32(ctx, 31, 0x203A9Cu);
    ctx->pc = 0x203A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A94u;
    // 0x203a98: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203A9Cu;
label_203a9c:
    // 0x203a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203aa0:
    // 0x203aa0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203aa4:
    // 0x203aa4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_203aa8:
    if (ctx->pc == 0x203AA8u) {
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AACu;
        goto label_203aac;
    }
    ctx->pc = 0x203AA4u;
    {
        const bool branch_taken_0x203aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA4u;
        // 0x203aa8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aa4) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AACu;
label_203aac:
    // 0x203aac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203ab0:
    if (ctx->pc == 0x203AB0u) {
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AB4u;
        goto label_203ab4;
    }
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AACu;
        // 0x203ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AE8u;
            goto label_203ae8;
        }
    }
    ctx->pc = 0x203AB4u;
label_203ab4:
    // 0x203ab4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_203ab8:
    // 0x203ab8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203abc:
    // 0x203abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203ac0:
    // 0x203ac0: 0xc08104c  jal         func_204130
label_203ac4:
    if (ctx->pc == 0x203AC4u) {
        ctx->pc = 0x203AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC0u;
        // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AC8u;
        goto label_203ac8;
    }
    ctx->pc = 0x203AC0u;
    SET_GPR_U32(ctx, 31, 0x203AC8u);
    ctx->pc = 0x203AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC0u;
    // 0x203ac4: 0x27a80130  addiu       $t0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203AC8u;
label_203ac8:
    // 0x203ac8: 0xc07aaa8  jal         func_1EAAA0
label_203acc:
    if (ctx->pc == 0x203ACCu) {
        ctx->pc = 0x203ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AC8u;
        // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD0u;
        goto label_203ad0;
    }
    ctx->pc = 0x203AC8u;
    SET_GPR_U32(ctx, 31, 0x203AD0u);
    ctx->pc = 0x203ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AC8u;
    // 0x203acc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0xc07aa84  jal         func_1EAA10
label_203ad4:
    if (ctx->pc == 0x203AD4u) {
        ctx->pc = 0x203AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AD0u;
        // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AD8u;
        goto label_203ad8;
    }
    ctx->pc = 0x203AD0u;
    SET_GPR_U32(ctx, 31, 0x203AD8u);
    ctx->pc = 0x203AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD0u;
    // 0x203ad4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203adc:
    // 0x203adc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203ae0:
    // 0x203ae0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_203ae4:
    if (ctx->pc == 0x203AE4u) {
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AE8u;
        goto label_203ae8;
    }
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_203aec:
    if (ctx->pc == 0x203AECu) {
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AF0u;
        goto label_203af0;
    }
    ctx->pc = 0x203AE8u;
    {
        const bool branch_taken_0x203ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE8u;
        // 0x203aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae8) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
label_203af4:
    // 0x203af4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_203af8:
    if (ctx->pc == 0x203AF8u) {
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203AFCu;
        goto label_203afc;
    }
    ctx->pc = 0x203AF4u;
    {
        const bool branch_taken_0x203af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x203AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF4u;
        // 0x203af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203af4) {
            ctx->pc = 0x203B44u;
            goto label_203b44;
        }
    }
    ctx->pc = 0x203AFCu;
label_203afc:
    // 0x203afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203b00:
    // 0x203b00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x203b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_203b04:
    // 0x203b04: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_203b08:
    // 0x203b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b0c:
    // 0x203b0c: 0xc08104c  jal         func_204130
label_203b10:
    if (ctx->pc == 0x203B10u) {
        ctx->pc = 0x203B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B0Cu;
        // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B14u;
        goto label_203b14;
    }
    ctx->pc = 0x203B0Cu;
    SET_GPR_U32(ctx, 31, 0x203B14u);
    ctx->pc = 0x203B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B0Cu;
    // 0x203b10: 0x27a80230  addiu       $t0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203B14u;
label_203b14:
    // 0x203b14: 0xc07aaa8  jal         func_1EAAA0
label_203b18:
    if (ctx->pc == 0x203B18u) {
        ctx->pc = 0x203B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B14u;
        // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B1Cu;
        goto label_203b1c;
    }
    ctx->pc = 0x203B14u;
    SET_GPR_U32(ctx, 31, 0x203B1Cu);
    ctx->pc = 0x203B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B14u;
    // 0x203b18: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203B1Cu;
label_203b1c:
    // 0x203b1c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_203b20:
    // 0x203b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b24:
    // 0x203b24: 0xc07aa94  jal         func_1EAA50
label_203b28:
    if (ctx->pc == 0x203B28u) {
        ctx->pc = 0x203B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B24u;
        // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B2Cu;
        goto label_203b2c;
    }
    ctx->pc = 0x203B24u;
    SET_GPR_U32(ctx, 31, 0x203B2Cu);
    ctx->pc = 0x203B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B24u;
    // 0x203b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x203B2Cu;
label_203b2c:
    // 0x203b2c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_203b30:
    // 0x203b30: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203b34:
    // 0x203b34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x203b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_203b38:
    // 0x203b38: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x203b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_203b3c:
    // 0x203b3c: 0x1000000c  b           . + 4 + (0xC << 2)
label_203b40:
    if (ctx->pc == 0x203B40u) {
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B44u;
        goto label_203b44;
    }
    ctx->pc = 0x203B3Cu;
    {
        const bool branch_taken_0x203b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B3Cu;
        // 0x203b40: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b3c) {
            ctx->pc = 0x203B70u;
            goto label_203b70;
        }
    }
    ctx->pc = 0x203B44u;
label_203b44:
    // 0x203b44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_203b48:
    // 0x203b48: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203b4c:
    // 0x203b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203b50:
    // 0x203b50: 0xc08104c  jal         func_204130
label_203b54:
    if (ctx->pc == 0x203B54u) {
        ctx->pc = 0x203B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B50u;
        // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B58u;
        goto label_203b58;
    }
    ctx->pc = 0x203B50u;
    SET_GPR_U32(ctx, 31, 0x203B58u);
    ctx->pc = 0x203B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B50u;
    // 0x203b54: 0x27a80330  addiu       $t0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0xc07aaa8  jal         func_1EAAA0
label_203b5c:
    if (ctx->pc == 0x203B5Cu) {
        ctx->pc = 0x203B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B58u;
        // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B60u;
        goto label_203b60;
    }
    ctx->pc = 0x203B58u;
    SET_GPR_U32(ctx, 31, 0x203B60u);
    ctx->pc = 0x203B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B58u;
    // 0x203b5c: 0x27a40330  addiu       $a0, $sp, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0xc07aa84  jal         func_1EAA10
label_203b64:
    if (ctx->pc == 0x203B64u) {
        ctx->pc = 0x203B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B60u;
        // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B68u;
        goto label_203b68;
    }
    ctx->pc = 0x203B60u;
    SET_GPR_U32(ctx, 31, 0x203B68u);
    ctx->pc = 0x203B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B60u;
    // 0x203b64: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203B68u;
label_203b68:
    // 0x203b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203b6c:
    // 0x203b6c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203b70:
    // 0x203b70: 0x10000029  b           . + 4 + (0x29 << 2)
label_203b74:
    if (ctx->pc == 0x203B74u) {
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B78u;
        goto label_203b78;
    }
    ctx->pc = 0x203B70u;
    {
        const bool branch_taken_0x203b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B70u;
        // 0x203b74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b70) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B78u;
label_203b78:
    // 0x203b78: 0x10000027  b           . + 4 + (0x27 << 2)
label_203b7c:
    if (ctx->pc == 0x203B7Cu) {
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B80u;
        goto label_203b80;
    }
    ctx->pc = 0x203B78u;
    {
        const bool branch_taken_0x203b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B78u;
        // 0x203b7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b78) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B80u;
label_203b80:
    // 0x203b80: 0x10000025  b           . + 4 + (0x25 << 2)
label_203b84:
    if (ctx->pc == 0x203B84u) {
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B88u;
        goto label_203b88;
    }
    ctx->pc = 0x203B80u;
    {
        const bool branch_taken_0x203b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B80u;
        // 0x203b84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b80) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B88u;
label_203b88:
    // 0x203b88: 0x10000023  b           . + 4 + (0x23 << 2)
label_203b8c:
    if (ctx->pc == 0x203B8Cu) {
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B90u;
        goto label_203b90;
    }
    ctx->pc = 0x203B88u;
    {
        const bool branch_taken_0x203b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B88u;
        // 0x203b8c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b88) {
            ctx->pc = 0x203C18u;
            goto label_203c18;
        }
    }
    ctx->pc = 0x203B90u;
label_203b90:
    // 0x203b90: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203b94:
    // 0x203b94: 0xc083d30  jal         func_20F4C0
label_203b98:
    if (ctx->pc == 0x203B98u) {
        ctx->pc = 0x203B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B94u;
        // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203B9Cu;
        goto label_203b9c;
    }
    ctx->pc = 0x203B94u;
    SET_GPR_U32(ctx, 31, 0x203B9Cu);
    ctx->pc = 0x203B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B94u;
    // 0x203b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    { ctx->pc = 0x20f4c0; return; }
    ctx->pc = 0x203B9Cu;
label_203b9c:
    // 0x203b9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_203ba0:
    if (ctx->pc == 0x203BA0u) {
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BA4u;
        goto label_203ba4;
    }
    ctx->pc = 0x203B9Cu;
    {
        const bool branch_taken_0x203b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B9Cu;
        // 0x203ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b9c) {
            ctx->pc = 0x203BE8u;
            goto label_203be8;
        }
    }
    ctx->pc = 0x203BA4u;
label_203ba4:
    // 0x203ba4: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x203ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203ba8:
    // 0x203ba8: 0xc083cc8  jal         func_20F320
label_203bac:
    if (ctx->pc == 0x203BACu) {
        ctx->pc = 0x203BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BA8u;
        // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BB0u;
        goto label_203bb0;
    }
    ctx->pc = 0x203BA8u;
    SET_GPR_U32(ctx, 31, 0x203BB0u);
    ctx->pc = 0x203BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BA8u;
    // 0x203bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    { ctx->pc = 0x20f320; return; }
    ctx->pc = 0x203BB0u;
label_203bb0:
    // 0x203bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203bb4:
    // 0x203bb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203bb8:
    // 0x203bb8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203bbc:
    // 0x203bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203bc0:
    // 0x203bc0: 0xc08104c  jal         func_204130
label_203bc4:
    if (ctx->pc == 0x203BC4u) {
        ctx->pc = 0x203BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC0u;
        // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BC8u;
        goto label_203bc8;
    }
    ctx->pc = 0x203BC0u;
    SET_GPR_U32(ctx, 31, 0x203BC8u);
    ctx->pc = 0x203BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC0u;
    // 0x203bc4: 0x27a80430  addiu       $t0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203BC8u;
label_203bc8:
    // 0x203bc8: 0xc07aaa8  jal         func_1EAAA0
label_203bcc:
    if (ctx->pc == 0x203BCCu) {
        ctx->pc = 0x203BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BC8u;
        // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BD0u;
        goto label_203bd0;
    }
    ctx->pc = 0x203BC8u;
    SET_GPR_U32(ctx, 31, 0x203BD0u);
    ctx->pc = 0x203BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BC8u;
    // 0x203bcc: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203BD0u;
label_203bd0:
    // 0x203bd0: 0xc07aa84  jal         func_1EAA10
label_203bd4:
    if (ctx->pc == 0x203BD4u) {
        ctx->pc = 0x203BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BD0u;
        // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BD8u;
        goto label_203bd8;
    }
    ctx->pc = 0x203BD0u;
    SET_GPR_U32(ctx, 31, 0x203BD8u);
    ctx->pc = 0x203BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BD0u;
    // 0x203bd4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203BD8u;
label_203bd8:
    // 0x203bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203bdc:
    // 0x203bdc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203be0:
    // 0x203be0: 0x1000000c  b           . + 4 + (0xC << 2)
label_203be4:
    if (ctx->pc == 0x203BE4u) {
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BE8u;
        goto label_203be8;
    }
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BE0u;
        // 0x203be4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203C14u;
            goto label_203c14;
        }
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203bec:
    // 0x203bec: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203bf0:
    // 0x203bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203bf4:
    // 0x203bf4: 0xc08104c  jal         func_204130
label_203bf8:
    if (ctx->pc == 0x203BF8u) {
        ctx->pc = 0x203BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BF4u;
        // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203BFCu;
        goto label_203bfc;
    }
    ctx->pc = 0x203BF4u;
    SET_GPR_U32(ctx, 31, 0x203BFCu);
    ctx->pc = 0x203BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BF4u;
    // 0x203bf8: 0x27a80530  addiu       $t0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203BFCu;
label_203bfc:
    // 0x203bfc: 0xc07aaa8  jal         func_1EAAA0
label_203c00:
    if (ctx->pc == 0x203C00u) {
        ctx->pc = 0x203C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BFCu;
        // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C04u;
        goto label_203c04;
    }
    ctx->pc = 0x203BFCu;
    SET_GPR_U32(ctx, 31, 0x203C04u);
    ctx->pc = 0x203C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203BFCu;
    // 0x203c00: 0x27a40530  addiu       $a0, $sp, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0xc07aa84  jal         func_1EAA10
label_203c08:
    if (ctx->pc == 0x203C08u) {
        ctx->pc = 0x203C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C04u;
        // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C0Cu;
        goto label_203c0c;
    }
    ctx->pc = 0x203C04u;
    SET_GPR_U32(ctx, 31, 0x203C0Cu);
    ctx->pc = 0x203C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C04u;
    // 0x203c08: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203C0Cu;
label_203c0c:
    // 0x203c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203c10:
    // 0x203c10: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x203c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_203c14:
    // 0x203c14: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_203c18:
    // 0x203c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203c1c:
    // 0x203c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203c20:
    // 0x203c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203c24:
    // 0x203c24: 0x3e00008  jr          $ra
label_203c28:
    if (ctx->pc == 0x203C28u) {
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C2Cu;
        goto label_203c2c;
    }
    ctx->pc = 0x203C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C24u;
        // 0x203c28: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203C2Cu;
label_203c2c:
    // 0x203c2c: 0x0  nop
    ctx->pc = 0x203c2cu;
    // NOP
label_203c30:
    // 0x203c30: 0x27bdf9e0  addiu       $sp, $sp, -0x620
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965728));
label_203c34:
    // 0x203c34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_203c38:
    // 0x203c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203c3c:
    // 0x203c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203c40:
    // 0x203c40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203c44:
    // 0x203c44: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_203c48:
    if (ctx->pc == 0x203C48u) {
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C4Cu;
        goto label_203c4c;
    }
    ctx->pc = 0x203C44u;
    {
        const bool branch_taken_0x203c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C44u;
        // 0x203c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c44) {
            ctx->pc = 0x203D50u;
            goto label_203d50;
        }
    }
    ctx->pc = 0x203C4Cu;
label_203c4c:
    // 0x203c4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_203c50:
    if (ctx->pc == 0x203C50u) {
        ctx->pc = 0x203C54u;
        goto label_203c54;
    }
    ctx->pc = 0x203C4Cu;
    {
        const bool branch_taken_0x203c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c4c) {
            ctx->pc = 0x203C5Cu;
            goto label_203c5c;
        }
    }
    ctx->pc = 0x203C54u;
label_203c54:
    // 0x203c54: 0x1000004b  b           . + 4 + (0x4B << 2)
label_203c58:
    if (ctx->pc == 0x203C58u) {
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C5Cu;
        goto label_203c5c;
    }
    ctx->pc = 0x203C54u;
    {
        const bool branch_taken_0x203c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C54u;
        // 0x203c58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c54) {
            ctx->pc = 0x203D84u;
            goto label_203d84;
        }
    }
    ctx->pc = 0x203C5Cu;
label_203c5c:
    // 0x203c5c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x203c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_203c60:
    // 0x203c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x203c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_203c64:
    // 0x203c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_203c68:
    // 0x203c68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203c6c:
    if (ctx->pc == 0x203C6Cu) {
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C70u;
        goto label_203c70;
    }
    ctx->pc = 0x203C68u;
    {
        const bool branch_taken_0x203c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C68u;
        // 0x203c6c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c68) {
            ctx->pc = 0x203CA4u;
            goto label_203ca4;
        }
    }
    ctx->pc = 0x203C70u;
label_203c70:
    // 0x203c70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203c74:
    // 0x203c74: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203c78:
    // 0x203c78: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_203c7c:
    // 0x203c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203c80:
    // 0x203c80: 0xc08104c  jal         func_204130
label_203c84:
    if (ctx->pc == 0x203C84u) {
        ctx->pc = 0x203C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C80u;
        // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C88u;
        goto label_203c88;
    }
    ctx->pc = 0x203C80u;
    SET_GPR_U32(ctx, 31, 0x203C88u);
    ctx->pc = 0x203C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C80u;
    // 0x203c84: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0xc07aaa8  jal         func_1EAAA0
label_203c8c:
    if (ctx->pc == 0x203C8Cu) {
        ctx->pc = 0x203C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C88u;
        // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C90u;
        goto label_203c90;
    }
    ctx->pc = 0x203C88u;
    SET_GPR_U32(ctx, 31, 0x203C90u);
    ctx->pc = 0x203C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C88u;
    // 0x203c8c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203C90u;
label_203c90:
    // 0x203c90: 0xc07aa84  jal         func_1EAA10
label_203c94:
    if (ctx->pc == 0x203C94u) {
        ctx->pc = 0x203C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C90u;
        // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203C98u;
        goto label_203c98;
    }
    ctx->pc = 0x203C90u;
    SET_GPR_U32(ctx, 31, 0x203C98u);
    ctx->pc = 0x203C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C90u;
    // 0x203c94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203C98u;
label_203c98:
    // 0x203c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203c9c:
    // 0x203c9c: 0x10000044  b           . + 4 + (0x44 << 2)
label_203ca0:
    if (ctx->pc == 0x203CA0u) {
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CA4u;
        goto label_203ca4;
    }
    ctx->pc = 0x203C9Cu;
    {
        const bool branch_taken_0x203c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C9Cu;
        // 0x203ca0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c9c) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203CA4u;
label_203ca4:
    // 0x203ca4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_203ca8:
    // 0x203ca8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_203cac:
    if (ctx->pc == 0x203CACu) {
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CB0u;
        goto label_203cb0;
    }
    ctx->pc = 0x203CA8u;
    {
        const bool branch_taken_0x203ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CA8u;
        // 0x203cac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ca8) {
            ctx->pc = 0x203CE0u;
            goto label_203ce0;
        }
    }
    ctx->pc = 0x203CB0u;
label_203cb0:
    // 0x203cb0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203cb4:
    // 0x203cb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_203cb8:
    // 0x203cb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cbc:
    // 0x203cbc: 0xc08104c  jal         func_204130
label_203cc0:
    if (ctx->pc == 0x203CC0u) {
        ctx->pc = 0x203CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CBCu;
        // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CC4u;
        goto label_203cc4;
    }
    ctx->pc = 0x203CBCu;
    SET_GPR_U32(ctx, 31, 0x203CC4u);
    ctx->pc = 0x203CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CBCu;
    // 0x203cc0: 0x27a80120  addiu       $t0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203CC4u;
label_203cc4:
    // 0x203cc4: 0xc07aaa8  jal         func_1EAAA0
label_203cc8:
    if (ctx->pc == 0x203CC8u) {
        ctx->pc = 0x203CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CC4u;
        // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CCCu;
        goto label_203ccc;
    }
    ctx->pc = 0x203CC4u;
    SET_GPR_U32(ctx, 31, 0x203CCCu);
    ctx->pc = 0x203CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CC4u;
    // 0x203cc8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0xc07aa84  jal         func_1EAA10
label_203cd0:
    if (ctx->pc == 0x203CD0u) {
        ctx->pc = 0x203CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CCCu;
        // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CD4u;
        goto label_203cd4;
    }
    ctx->pc = 0x203CCCu;
    SET_GPR_U32(ctx, 31, 0x203CD4u);
    ctx->pc = 0x203CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CCCu;
    // 0x203cd0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203CD4u;
label_203cd4:
    // 0x203cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203cd8:
    // 0x203cd8: 0x10000035  b           . + 4 + (0x35 << 2)
label_203cdc:
    if (ctx->pc == 0x203CDCu) {
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CE0u;
        goto label_203ce0;
    }
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CD8u;
        // 0x203cdc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203CE0u;
label_203ce0:
    // 0x203ce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x203ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_203ce4:
    // 0x203ce4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_203ce8:
    if (ctx->pc == 0x203CE8u) {
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203CECu;
        goto label_203cec;
    }
    ctx->pc = 0x203CE4u;
    {
        const bool branch_taken_0x203ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CE4u;
        // 0x203ce8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ce4) {
            ctx->pc = 0x203D20u;
            goto label_203d20;
        }
    }
    ctx->pc = 0x203CECu;
label_203cec:
    // 0x203cec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203cf0:
    // 0x203cf0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203cf4:
    // 0x203cf4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203cf8:
    // 0x203cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cfc:
    // 0x203cfc: 0xc08104c  jal         func_204130
label_203d00:
    if (ctx->pc == 0x203D00u) {
        ctx->pc = 0x203D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CFCu;
        // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D04u;
        goto label_203d04;
    }
    ctx->pc = 0x203CFCu;
    SET_GPR_U32(ctx, 31, 0x203D04u);
    ctx->pc = 0x203D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203CFCu;
    // 0x203d00: 0x27a80220  addiu       $t0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D04u;
label_203d04:
    // 0x203d04: 0xc07aaa8  jal         func_1EAAA0
label_203d08:
    if (ctx->pc == 0x203D08u) {
        ctx->pc = 0x203D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D04u;
        // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D0Cu;
        goto label_203d0c;
    }
    ctx->pc = 0x203D04u;
    SET_GPR_U32(ctx, 31, 0x203D0Cu);
    ctx->pc = 0x203D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D04u;
    // 0x203d08: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D0Cu;
label_203d0c:
    // 0x203d0c: 0xc07aa84  jal         func_1EAA10
label_203d10:
    if (ctx->pc == 0x203D10u) {
        ctx->pc = 0x203D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D0Cu;
        // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D14u;
        goto label_203d14;
    }
    ctx->pc = 0x203D0Cu;
    SET_GPR_U32(ctx, 31, 0x203D14u);
    ctx->pc = 0x203D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D0Cu;
    // 0x203d10: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D14u;
label_203d14:
    // 0x203d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d18:
    // 0x203d18: 0x10000025  b           . + 4 + (0x25 << 2)
label_203d1c:
    if (ctx->pc == 0x203D1Cu) {
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D20u;
        goto label_203d20;
    }
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D20u;
label_203d20:
    // 0x203d20: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_203d24:
    // 0x203d24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203d28:
    // 0x203d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d2c:
    // 0x203d2c: 0xc08104c  jal         func_204130
label_203d30:
    if (ctx->pc == 0x203D30u) {
        ctx->pc = 0x203D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D2Cu;
        // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D34u;
        goto label_203d34;
    }
    ctx->pc = 0x203D2Cu;
    SET_GPR_U32(ctx, 31, 0x203D34u);
    ctx->pc = 0x203D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D2Cu;
    // 0x203d30: 0x27a80320  addiu       $t0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D34u;
label_203d34:
    // 0x203d34: 0xc07aaa8  jal         func_1EAAA0
label_203d38:
    if (ctx->pc == 0x203D38u) {
        ctx->pc = 0x203D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D34u;
        // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D3Cu;
        goto label_203d3c;
    }
    ctx->pc = 0x203D34u;
    SET_GPR_U32(ctx, 31, 0x203D3Cu);
    ctx->pc = 0x203D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D34u;
    // 0x203d38: 0x27a40320  addiu       $a0, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0xc07aa84  jal         func_1EAA10
label_203d40:
    if (ctx->pc == 0x203D40u) {
        ctx->pc = 0x203D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D3Cu;
        // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D44u;
        goto label_203d44;
    }
    ctx->pc = 0x203D3Cu;
    SET_GPR_U32(ctx, 31, 0x203D44u);
    ctx->pc = 0x203D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D3Cu;
    // 0x203d40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D44u;
label_203d44:
    // 0x203d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d48:
    // 0x203d48: 0x10000019  b           . + 4 + (0x19 << 2)
label_203d4c:
    if (ctx->pc == 0x203D4Cu) {
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D50u;
        goto label_203d50;
    }
    ctx->pc = 0x203D48u;
    {
        const bool branch_taken_0x203d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D48u;
        // 0x203d4c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d48) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D50u;
label_203d50:
    // 0x203d50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203d54:
    // 0x203d54: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203d58:
    // 0x203d58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203d5c:
    // 0x203d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d60:
    // 0x203d60: 0xc08104c  jal         func_204130
label_203d64:
    if (ctx->pc == 0x203D64u) {
        ctx->pc = 0x203D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D60u;
        // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D68u;
        goto label_203d68;
    }
    ctx->pc = 0x203D60u;
    SET_GPR_U32(ctx, 31, 0x203D68u);
    ctx->pc = 0x203D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D60u;
    // 0x203d64: 0x27a80420  addiu       $t0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0xc07aaa8  jal         func_1EAAA0
label_203d6c:
    if (ctx->pc == 0x203D6Cu) {
        ctx->pc = 0x203D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D68u;
        // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D70u;
        goto label_203d70;
    }
    ctx->pc = 0x203D68u;
    SET_GPR_U32(ctx, 31, 0x203D70u);
    ctx->pc = 0x203D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D68u;
    // 0x203d6c: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203D70u;
label_203d70:
    // 0x203d70: 0xc07aa84  jal         func_1EAA10
label_203d74:
    if (ctx->pc == 0x203D74u) {
        ctx->pc = 0x203D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D70u;
        // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D78u;
        goto label_203d78;
    }
    ctx->pc = 0x203D70u;
    SET_GPR_U32(ctx, 31, 0x203D78u);
    ctx->pc = 0x203D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D70u;
    // 0x203d74: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203D78u;
label_203d78:
    // 0x203d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d7c:
    // 0x203d7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_203d80:
    if (ctx->pc == 0x203D80u) {
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D84u;
        goto label_203d84;
    }
    ctx->pc = 0x203D7Cu;
    {
        const bool branch_taken_0x203d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D7Cu;
        // 0x203d80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d7c) {
            ctx->pc = 0x203DB0u;
            goto label_203db0;
        }
    }
    ctx->pc = 0x203D84u;
label_203d84:
    // 0x203d84: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_203d88:
    // 0x203d88: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_203d8c:
    // 0x203d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x203d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203d90:
    // 0x203d90: 0xc08104c  jal         func_204130
label_203d94:
    if (ctx->pc == 0x203D94u) {
        ctx->pc = 0x203D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D90u;
        // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203D98u;
        goto label_203d98;
    }
    ctx->pc = 0x203D90u;
    SET_GPR_U32(ctx, 31, 0x203D98u);
    ctx->pc = 0x203D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D90u;
    // 0x203d94: 0x27a80520  addiu       $t0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x203D98u;
label_203d98:
    // 0x203d98: 0xc07aaa8  jal         func_1EAAA0
label_203d9c:
    if (ctx->pc == 0x203D9Cu) {
        ctx->pc = 0x203D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D98u;
        // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA0u;
        goto label_203da0;
    }
    ctx->pc = 0x203D98u;
    SET_GPR_U32(ctx, 31, 0x203DA0u);
    ctx->pc = 0x203D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203D98u;
    // 0x203d9c: 0x27a40520  addiu       $a0, $sp, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x203DA0u;
label_203da0:
    // 0x203da0: 0xc07aa84  jal         func_1EAA10
label_203da4:
    if (ctx->pc == 0x203DA4u) {
        ctx->pc = 0x203DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DA0u;
        // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DA8u;
        goto label_203da8;
    }
    ctx->pc = 0x203DA0u;
    SET_GPR_U32(ctx, 31, 0x203DA8u);
    ctx->pc = 0x203DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DA0u;
    // 0x203da4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x203DA8u;
label_203da8:
    // 0x203da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203dac:
    // 0x203dac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x203dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_203db0:
    // 0x203db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203db4:
    // 0x203db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203db8:
    // 0x203db8: 0x3e00008  jr          $ra
label_203dbc:
    if (ctx->pc == 0x203DBCu) {
        ctx->pc = 0x203DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB8u;
        // 0x203dbc: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DC0u;
        goto label_203dc0;
    }
    ctx->pc = 0x203DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DB8u;
        // 0x203dbc: 0x27bd0620  addiu       $sp, $sp, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203DC0u;
label_203dc0:
    // 0x203dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203dc4:
    // 0x203dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203dc8:
    // 0x203dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203dcc:
    // 0x203dcc: 0xc070e28  jal         func_1C38A0
label_203dd0:
    if (ctx->pc == 0x203DD0u) {
        ctx->pc = 0x203DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DCCu;
        // 0x203dd0: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DD4u;
        goto label_203dd4;
    }
    ctx->pc = 0x203DCCu;
    SET_GPR_U32(ctx, 31, 0x203DD4u);
    ctx->pc = 0x203DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DCCu;
    // 0x203dd0: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    { ctx->pc = 0x1c38a0; return; }
    ctx->pc = 0x203DD4u;
label_203dd4:
    // 0x203dd4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_203dd8:
    if (ctx->pc == 0x203DD8u) {
        ctx->pc = 0x203DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DD4u;
        // 0x203dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DDCu;
        goto label_203ddc;
    }
    ctx->pc = 0x203DD4u;
    {
        const bool branch_taken_0x203dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x203DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DD4u;
        // 0x203dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dd4) {
            ctx->pc = 0x203DF4u;
            goto label_203df4;
        }
    }
    ctx->pc = 0x203DDCu;
label_203ddc:
    // 0x203ddc: 0xc070de0  jal         func_1C3780
label_203de0:
    if (ctx->pc == 0x203DE0u) {
        ctx->pc = 0x203DE4u;
        goto label_203de4;
    }
    ctx->pc = 0x203DDCu;
    SET_GPR_U32(ctx, 31, 0x203DE4u);
    ctx->pc = 0x1C3780u;
    { ctx->pc = 0x1c3780; return; }
    ctx->pc = 0x203DE4u;
label_203de4:
    // 0x203de4: 0xc070e60  jal         func_1C3980
label_203de8:
    if (ctx->pc == 0x203DE8u) {
        ctx->pc = 0x203DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE4u;
        // 0x203de8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DECu;
        goto label_203dec;
    }
    ctx->pc = 0x203DE4u;
    SET_GPR_U32(ctx, 31, 0x203DECu);
    ctx->pc = 0x203DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203DE4u;
    // 0x203de8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    { ctx->pc = 0x1c3980; return; }
    ctx->pc = 0x203DECu;
label_203dec:
    // 0x203dec: 0x10000004  b           . + 4 + (0x4 << 2)
label_203df0:
    if (ctx->pc == 0x203DF0u) {
        ctx->pc = 0x203DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DECu;
        // 0x203df0: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203DF4u;
        goto label_203df4;
    }
    ctx->pc = 0x203DECu;
    {
        const bool branch_taken_0x203dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DECu;
        // 0x203df0: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203dec) {
            ctx->pc = 0x203E00u;
            goto label_203e00;
        }
    }
    ctx->pc = 0x203DF4u;
label_203df4:
    // 0x203df4: 0xc070038  jal         func_1C00E0
label_203df8:
    if (ctx->pc == 0x203DF8u) {
        ctx->pc = 0x203DFCu;
        goto label_203dfc;
    }
    ctx->pc = 0x203DF4u;
    SET_GPR_U32(ctx, 31, 0x203DFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x203DFCu;
label_203dfc:
    // 0x203dfc: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x203dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
label_203e00:
    // 0x203e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203e04:
    // 0x203e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203e08:
    // 0x203e08: 0x3e00008  jr          $ra
label_203e0c:
    if (ctx->pc == 0x203E0Cu) {
        ctx->pc = 0x203E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E08u;
        // 0x203e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203E10u;
        goto label_203e10;
    }
    ctx->pc = 0x203E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E08u;
        // 0x203e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203E10u;
label_203e10:
    // 0x203e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_203e14:
    // 0x203e14: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_203e18:
    // 0x203e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_203e1c:
    // 0x203e1c: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x203e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
label_203e20:
    // 0x203e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203e24:
    // 0x203e24: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_203e28:
    // 0x203e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203e2c:
    // 0x203e2c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e30:
    // 0x203e30: 0xac20f468  sw          $zero, -0xB98($at)
    ctx->pc = 0x203e30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964328), GPR_U32(ctx, 0));
label_203e34:
    // 0x203e34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x203e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203e38:
    // 0x203e38: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e3c:
    // 0x203e3c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x203e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_203e40:
    // 0x203e40: 0xac20f46c  sw          $zero, -0xB94($at)
    ctx->pc = 0x203e40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964332), GPR_U32(ctx, 0));
label_203e44:
    // 0x203e44: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_203e48:
    // 0x203e48: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e4c:
    // 0x203e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x203e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203e50:
    // 0x203e50: 0xac26f460  sw          $a2, -0xBA0($at)
    ctx->pc = 0x203e50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964320), GPR_U32(ctx, 6));
label_203e54:
    // 0x203e54: 0x2529f598  addiu       $t1, $t1, -0xA68
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964632));
label_203e58:
    // 0x203e58: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e5c:
    // 0x203e5c: 0x2508f630  addiu       $t0, $t0, -0x9D0
    ctx->pc = 0x203e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964784));
label_203e60:
    // 0x203e60: 0xac23f464  sw          $v1, -0xB9C($at)
    ctx->pc = 0x203e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964324), GPR_U32(ctx, 3));
label_203e64:
    // 0x203e64: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e68:
    // 0x203e68: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x203e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_203e6c:
    // 0x203e6c: 0xac20f470  sw          $zero, -0xB90($at)
    ctx->pc = 0x203e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964336), GPR_U32(ctx, 0));
label_203e70:
    // 0x203e70: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e74:
    // 0x203e74: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x203e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 0));
label_203e78:
    // 0x203e78: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e7c:
    // 0x203e7c: 0xa020f47c  sb          $zero, -0xB84($at)
    ctx->pc = 0x203e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294964348), (uint8_t)GPR_U32(ctx, 0));
label_203e80:
    // 0x203e80: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x203e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_203e84:
    // 0x203e84: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203e88:
    // 0x203e88: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x203e88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_203e8c:
    // 0x203e8c: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x203e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
label_203e90:
    // 0x203e90: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x203e90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_203e94:
    // 0x203e94: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x203e94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_203e98:
    // 0x203e98: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x203e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_203e9c:
    // 0x203e9c: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x203e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_203ea0:
    // 0x203ea0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x203ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_203ea4:
    // 0x203ea4: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x203ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
label_203ea8:
    // 0x203ea8: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x203ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
label_203eac:
    // 0x203eac: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x203eacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
label_203eb0:
    // 0x203eb0: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x203eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
label_203eb4:
    // 0x203eb4: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x203eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
label_203eb8:
    // 0x203eb8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x203eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_203ebc:
    // 0x203ebc: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x203ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_203ec0:
    // 0x203ec0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x203ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_203ec4:
    // 0x203ec4: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x203ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_203ec8:
    // 0x203ec8: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x203ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_203ecc:
    // 0x203ecc: 0xac24f450  sw          $a0, -0xBB0($at)
    ctx->pc = 0x203eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964304), GPR_U32(ctx, 4));
label_203ed0:
    // 0x203ed0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203ed4:
    // 0x203ed4: 0x8f8390f0  lw          $v1, -0x6F10($gp)
    ctx->pc = 0x203ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203ed8:
    // 0x203ed8: 0xac20f440  sw          $zero, -0xBC0($at)
    ctx->pc = 0x203ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964288), GPR_U32(ctx, 0));
label_203edc:
    // 0x203edc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203ee0:
    // 0x203ee0: 0xac20f454  sw          $zero, -0xBAC($at)
    ctx->pc = 0x203ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964308), GPR_U32(ctx, 0));
label_203ee4:
    // 0x203ee4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_203ee8:
    // 0x203ee8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_203eec:
    if (ctx->pc == 0x203EECu) {
        ctx->pc = 0x203EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE8u;
        // 0x203eec: 0xac20f458  sw          $zero, -0xBA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203EF0u;
        goto label_203ef0;
    }
    ctx->pc = 0x203EE8u;
    {
        const bool branch_taken_0x203ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EE8u;
        // 0x203eec: 0xac20f458  sw          $zero, -0xBA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ee8) {
            ctx->pc = 0x203F04u;
            goto label_203f04;
        }
    }
    ctx->pc = 0x203EF0u;
label_203ef0:
    // 0x203ef0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_203ef4:
    // 0x203ef4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_203ef8:
    // 0x203ef8: 0xc070080  jal         func_1C0200
label_203efc:
    if (ctx->pc == 0x203EFCu) {
        ctx->pc = 0x203EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EF8u;
        // 0x203efc: 0x34455400  ori         $a1, $v0, 0x5400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F00u;
        goto label_203f00;
    }
    ctx->pc = 0x203EF8u;
    SET_GPR_U32(ctx, 31, 0x203F00u);
    ctx->pc = 0x203EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EF8u;
    // 0x203efc: 0x34455400  ori         $a1, $v0, 0x5400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x203F00u;
label_203f00:
    // 0x203f00: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x203f00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
label_203f04:
    // 0x203f04: 0x8f8390f0  lw          $v1, -0x6F10($gp)
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203f08:
    // 0x203f08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_203f0c:
    if (ctx->pc == 0x203F0Cu) {
        ctx->pc = 0x203F10u;
        goto label_203f10;
    }
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F1Cu;
            goto label_203f1c;
        }
    }
    ctx->pc = 0x203F10u;
label_203f10:
    // 0x203f10: 0xc070e28  jal         func_1C38A0
label_203f14:
    if (ctx->pc == 0x203F14u) {
        ctx->pc = 0x203F18u;
        goto label_203f18;
    }
    ctx->pc = 0x203F10u;
    SET_GPR_U32(ctx, 31, 0x203F18u);
    ctx->pc = 0x1C38A0u;
    { ctx->pc = 0x1c38a0; return; }
    ctx->pc = 0x203F18u;
label_203f18:
    // 0x203f18: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x203f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
label_203f1c:
    // 0x203f1c: 0x8f9190f0  lw          $s1, -0x6F10($gp)
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_203f20:
    // 0x203f20: 0x10000006  b           . + 4 + (0x6 << 2)
label_203f24:
    if (ctx->pc == 0x203F24u) {
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F28u;
        goto label_203f28;
    }
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F3Cu;
            goto label_203f3c;
        }
    }
    ctx->pc = 0x203F28u;
label_203f28:
    // 0x203f28: 0xc08f0cc  jal         func_23C330
label_203f2c:
    if (ctx->pc == 0x203F2Cu) {
        ctx->pc = 0x203F30u;
        goto label_203f30;
    }
    ctx->pc = 0x203F28u;
    SET_GPR_U32(ctx, 31, 0x203F30u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x203F30u;
label_203f30:
    // 0x203f30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_203f34:
    // 0x203f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_203f38:
    // 0x203f38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_203f3c:
    // 0x203f3c: 0x0  nop
    ctx->pc = 0x203f3cu;
    // NOP
label_203f40:
    // 0x203f40: 0x2e035500  sltiu       $v1, $s0, 0x5500
    ctx->pc = 0x203f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)21760) ? 1 : 0);
label_203f44:
    // 0x203f44: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_203f48:
    if (ctx->pc == 0x203F48u) {
        ctx->pc = 0x203F4Cu;
        goto label_203f4c;
    }
    ctx->pc = 0x203F44u;
    {
        const bool branch_taken_0x203f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f44) {
            ctx->pc = 0x203F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203f28;
        }
    }
    ctx->pc = 0x203F4Cu;
label_203f4c:
    // 0x203f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203f50:
    // 0x203f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203f54:
    // 0x203f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203f58:
    // 0x203f58: 0x3e00008  jr          $ra
label_203f5c:
    if (ctx->pc == 0x203F5Cu) {
        ctx->pc = 0x203F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F58u;
        // 0x203f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F60u;
        goto label_203f60;
    }
    ctx->pc = 0x203F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F58u;
        // 0x203f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F60u;
label_203f60:
    // 0x203f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203f64:
    // 0x203f64: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_203f68:
    // 0x203f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203f6c:
    // 0x203f6c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_203f70:
    // 0x203f70: 0x8c240d20  lw          $a0, 0xD20($at)
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3360)));
label_203f74:
    // 0x203f74: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x203f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_203f78:
    // 0x203f78: 0xc041698  jal         func_105A60
label_203f7c:
    if (ctx->pc == 0x203F7Cu) {
        ctx->pc = 0x203F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F78u;
        // 0x203f7c: 0x24c64440  addiu       $a2, $a2, 0x4440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F80u;
        goto label_203f80;
    }
    ctx->pc = 0x203F78u;
    SET_GPR_U32(ctx, 31, 0x203F80u);
    ctx->pc = 0x203F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203F78u;
    // 0x203f7c: 0x24c64440  addiu       $a2, $a2, 0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A60u, 0x203F78u, 0x203F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F80u;
label_203f80:
    // 0x203f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203f84:
    // 0x203f84: 0x3e00008  jr          $ra
label_203f88:
    if (ctx->pc == 0x203F88u) {
        ctx->pc = 0x203F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F84u;
        // 0x203f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203F8Cu;
        goto label_203f8c;
    }
    ctx->pc = 0x203F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F84u;
        // 0x203f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F8Cu;
label_203f8c:
    // 0x203f8c: 0x0  nop
    ctx->pc = 0x203f8cu;
    // NOP
label_203f90:
    // 0x203f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203f94:
    // 0x203f94: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_203f98:
    // 0x203f98: 0x10200060  beqz        $at, . + 4 + (0x60 << 2)
label_203f9c:
    if (ctx->pc == 0x203F9Cu) {
        ctx->pc = 0x203F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F98u;
        // 0x203f9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FA0u;
        goto label_203fa0;
    }
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F98u;
        // 0x203f9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f98) {
            ctx->pc = 0x20411Cu;
            { ctx->pc = 0x20411c; return; }
        }
    }
    ctx->pc = 0x203FA0u;
label_203fa0:
    // 0x203fa0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_203fa4:
    // 0x203fa4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x203fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_203fa8:
    // 0x203fa8: 0x2484dfc0  addiu       $a0, $a0, -0x2040
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959040));
label_203fac:
    // 0x203fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x203facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203fb0:
    // 0x203fb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_203fb4:
    // 0x203fb4: 0x600008  jr          $v1
label_203fb8:
    if (ctx->pc == 0x203FB8u) {
        ctx->pc = 0x203FBCu;
        goto label_203fbc;
    }
    ctx->pc = 0x203FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203FBCu: goto label_203fbc;
            case 0x203FDCu: goto label_203fdc;
            case 0x204004u: goto label_204004;
            case 0x20402Cu: goto label_20402c;
            case 0x204050u: { ctx->pc = 0x204050; return; }
            case 0x204070u: { ctx->pc = 0x204070; return; }
            case 0x204090u: { ctx->pc = 0x204090; return; }
            case 0x2040B8u: { ctx->pc = 0x2040b8; return; }
            case 0x2040E0u: { ctx->pc = 0x2040e0; return; }
            case 0x204104u: { ctx->pc = 0x204104; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x203FBCu;
label_203fbc:
    // 0x203fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203fc0:
    // 0x203fc0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_203fc4:
    // 0x203fc4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x203fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_203fc8:
    // 0x203fc8: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x203fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
label_203fcc:
    // 0x203fcc: 0xc08f20e  jal         func_23C838
label_203fd0:
    if (ctx->pc == 0x203FD0u) {
        ctx->pc = 0x203FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FCCu;
        // 0x203fd0: 0x24a5df40  addiu       $a1, $a1, -0x20C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FD4u;
        goto label_203fd4;
    }
    ctx->pc = 0x203FCCu;
    SET_GPR_U32(ctx, 31, 0x203FD4u);
    ctx->pc = 0x203FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FCCu;
    // 0x203fd0: 0x24a5df40  addiu       $a1, $a1, -0x20C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x203FD4u;
label_203fd4:
    // 0x203fd4: 0x10000052  b           . + 4 + (0x52 << 2)
label_203fd8:
    if (ctx->pc == 0x203FD8u) {
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FDCu;
        goto label_203fdc;
    }
    ctx->pc = 0x203FD4u;
    {
        const bool branch_taken_0x203fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fd4) {
            ctx->pc = 0x204120u;
            { ctx->pc = 0x204120; return; }
        }
    }
    ctx->pc = 0x203FDCu;
label_203fdc:
    // 0x203fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x203fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203fe0:
    // 0x203fe0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_203fe4:
    // 0x203fe4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x203fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_203fe8:
    // 0x203fe8: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
label_203fec:
    // 0x203fec: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
label_203ff0:
    // 0x203ff0: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
label_203ff4:
    // 0x203ff4: 0xc08f20e  jal         func_23C838
label_203ff8:
    if (ctx->pc == 0x203FF8u) {
        ctx->pc = 0x203FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FF4u;
        // 0x203ff8: 0x24e7df70  addiu       $a3, $a3, -0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FFCu;
        goto label_203ffc;
    }
    ctx->pc = 0x203FF4u;
    SET_GPR_U32(ctx, 31, 0x203FFCu);
    ctx->pc = 0x203FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FF4u;
    // 0x203ff8: 0x24e7df70  addiu       $a3, $a3, -0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x203FFCu;
label_203ffc:
    // 0x203ffc: 0x10000047  b           . + 4 + (0x47 << 2)
label_204000:
    if (ctx->pc == 0x204000u) {
        ctx->pc = 0x204004u;
        goto label_204004;
    }
    ctx->pc = 0x203FFCu;
    {
        const bool branch_taken_0x203ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203ffc) {
            ctx->pc = 0x20411Cu;
            { ctx->pc = 0x20411c; return; }
        }
    }
    ctx->pc = 0x204004u;
label_204004:
    // 0x204004: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204008:
    // 0x204008: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_20400c:
    // 0x20400c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20400cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_204010:
    // 0x204010: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x204010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
label_204014:
    // 0x204014: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x204014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
label_204018:
    // 0x204018: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
label_20401c:
    // 0x20401c: 0xc08f20e  jal         func_23C838
label_204020:
    if (ctx->pc == 0x204020u) {
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204024u;
        goto label_204024;
    }
    ctx->pc = 0x20401Cu;
    SET_GPR_U32(ctx, 31, 0x204024u);
    ctx->pc = 0x204020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20401Cu;
    // 0x204020: 0x24e7df80  addiu       $a3, $a3, -0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x204024u;
label_204024:
    // 0x204024: 0x1000003d  b           . + 4 + (0x3D << 2)
label_204028:
    if (ctx->pc == 0x204028u) {
        ctx->pc = 0x20402Cu;
        goto label_20402c;
    }
    ctx->pc = 0x204024u;
    {
        const bool branch_taken_0x204024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204024) {
            ctx->pc = 0x20411Cu;
            { ctx->pc = 0x20411c; return; }
        }
    }
    ctx->pc = 0x20402Cu;
label_20402c:
    // 0x20402c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204030:
    // 0x204030: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x204030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_204034:
    // 0x204034: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x204034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
label_204038:
    // 0x204038: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x204038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20403c:
    // 0x20403c: 0x24a5df68  addiu       $a1, $a1, -0x2098
    ctx->pc = 0x20403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958952));
label_204040:
    // 0x204040: 0xc08f20e  jal         func_23C838
label_204044:
    if (ctx->pc == 0x204044u) {
        ctx->pc = 0x204044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204040u;
        // 0x204044: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204048u;
        { ctx->pc = 0x204048; return; }
    }
    ctx->pc = 0x204040u;
    SET_GPR_U32(ctx, 31, 0x204048u);
    ctx->pc = 0x204044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204040u;
    // 0x204044: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x204048u;
    ctx->pc = 0x204048u;
    return;
}
