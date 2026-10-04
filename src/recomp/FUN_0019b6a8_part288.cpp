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


void FUN_0019b6a8_part288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2278d8u: goto label_2278d8;
        case 0x2278dcu: goto label_2278dc;
        case 0x2278e0u: goto label_2278e0;
        case 0x2278e4u: goto label_2278e4;
        case 0x2278e8u: goto label_2278e8;
        case 0x2278ecu: goto label_2278ec;
        case 0x2278f0u: goto label_2278f0;
        case 0x2278f4u: goto label_2278f4;
        case 0x2278f8u: goto label_2278f8;
        case 0x2278fcu: goto label_2278fc;
        case 0x227900u: goto label_227900;
        case 0x227904u: goto label_227904;
        case 0x227908u: goto label_227908;
        case 0x22790cu: goto label_22790c;
        case 0x227910u: goto label_227910;
        case 0x227914u: goto label_227914;
        case 0x227918u: goto label_227918;
        case 0x22791cu: goto label_22791c;
        case 0x227920u: goto label_227920;
        case 0x227924u: goto label_227924;
        case 0x227928u: goto label_227928;
        case 0x22792cu: goto label_22792c;
        case 0x227930u: goto label_227930;
        case 0x227934u: goto label_227934;
        case 0x227938u: goto label_227938;
        case 0x22793cu: goto label_22793c;
        case 0x227940u: goto label_227940;
        case 0x227944u: goto label_227944;
        case 0x227948u: goto label_227948;
        case 0x22794cu: goto label_22794c;
        case 0x227950u: goto label_227950;
        case 0x227954u: goto label_227954;
        case 0x227958u: goto label_227958;
        case 0x22795cu: goto label_22795c;
        case 0x227960u: goto label_227960;
        case 0x227964u: goto label_227964;
        case 0x227968u: goto label_227968;
        case 0x22796cu: goto label_22796c;
        case 0x227970u: goto label_227970;
        case 0x227974u: goto label_227974;
        case 0x227978u: goto label_227978;
        case 0x22797cu: goto label_22797c;
        case 0x227980u: goto label_227980;
        case 0x227984u: goto label_227984;
        case 0x227988u: goto label_227988;
        case 0x22798cu: goto label_22798c;
        case 0x227990u: goto label_227990;
        case 0x227994u: goto label_227994;
        case 0x227998u: goto label_227998;
        case 0x22799cu: goto label_22799c;
        case 0x2279a0u: goto label_2279a0;
        case 0x2279a4u: goto label_2279a4;
        case 0x2279a8u: goto label_2279a8;
        case 0x2279acu: goto label_2279ac;
        case 0x2279b0u: goto label_2279b0;
        case 0x2279b4u: goto label_2279b4;
        case 0x2279b8u: goto label_2279b8;
        case 0x2279bcu: goto label_2279bc;
        case 0x2279c0u: goto label_2279c0;
        case 0x2279c4u: goto label_2279c4;
        case 0x2279c8u: goto label_2279c8;
        case 0x2279ccu: goto label_2279cc;
        case 0x2279d0u: goto label_2279d0;
        case 0x2279d4u: goto label_2279d4;
        case 0x2279d8u: goto label_2279d8;
        case 0x2279dcu: goto label_2279dc;
        case 0x2279e0u: goto label_2279e0;
        case 0x2279e4u: goto label_2279e4;
        case 0x2279e8u: goto label_2279e8;
        case 0x2279ecu: goto label_2279ec;
        case 0x2279f0u: goto label_2279f0;
        case 0x2279f4u: goto label_2279f4;
        case 0x2279f8u: goto label_2279f8;
        case 0x2279fcu: goto label_2279fc;
        case 0x227a00u: goto label_227a00;
        case 0x227a04u: goto label_227a04;
        case 0x227a08u: goto label_227a08;
        case 0x227a0cu: goto label_227a0c;
        case 0x227a10u: goto label_227a10;
        case 0x227a14u: goto label_227a14;
        case 0x227a18u: goto label_227a18;
        case 0x227a1cu: goto label_227a1c;
        case 0x227a20u: goto label_227a20;
        case 0x227a24u: goto label_227a24;
        case 0x227a28u: goto label_227a28;
        case 0x227a2cu: goto label_227a2c;
        case 0x227a30u: goto label_227a30;
        case 0x227a34u: goto label_227a34;
        case 0x227a38u: goto label_227a38;
        case 0x227a3cu: goto label_227a3c;
        case 0x227a40u: goto label_227a40;
        case 0x227a44u: goto label_227a44;
        case 0x227a48u: goto label_227a48;
        case 0x227a4cu: goto label_227a4c;
        case 0x227a50u: goto label_227a50;
        case 0x227a54u: goto label_227a54;
        case 0x227a58u: goto label_227a58;
        case 0x227a5cu: goto label_227a5c;
        case 0x227a60u: goto label_227a60;
        case 0x227a64u: goto label_227a64;
        case 0x227a68u: goto label_227a68;
        case 0x227a6cu: goto label_227a6c;
        case 0x227a70u: goto label_227a70;
        case 0x227a74u: goto label_227a74;
        case 0x227a78u: goto label_227a78;
        case 0x227a7cu: goto label_227a7c;
        case 0x227a80u: goto label_227a80;
        case 0x227a84u: goto label_227a84;
        case 0x227a88u: goto label_227a88;
        case 0x227a8cu: goto label_227a8c;
        case 0x227a90u: goto label_227a90;
        case 0x227a94u: goto label_227a94;
        case 0x227a98u: goto label_227a98;
        case 0x227a9cu: goto label_227a9c;
        case 0x227aa0u: goto label_227aa0;
        case 0x227aa4u: goto label_227aa4;
        case 0x227aa8u: goto label_227aa8;
        case 0x227aacu: goto label_227aac;
        case 0x227ab0u: goto label_227ab0;
        case 0x227ab4u: goto label_227ab4;
        case 0x227ab8u: goto label_227ab8;
        case 0x227abcu: goto label_227abc;
        case 0x227ac0u: goto label_227ac0;
        case 0x227ac4u: goto label_227ac4;
        case 0x227ac8u: goto label_227ac8;
        case 0x227accu: goto label_227acc;
        case 0x227ad0u: goto label_227ad0;
        case 0x227ad4u: goto label_227ad4;
        case 0x227ad8u: goto label_227ad8;
        case 0x227adcu: goto label_227adc;
        case 0x227ae0u: goto label_227ae0;
        case 0x227ae4u: goto label_227ae4;
        case 0x227ae8u: goto label_227ae8;
        case 0x227aecu: goto label_227aec;
        case 0x227af0u: goto label_227af0;
        case 0x227af4u: goto label_227af4;
        case 0x227af8u: goto label_227af8;
        case 0x227afcu: goto label_227afc;
        case 0x227b00u: goto label_227b00;
        case 0x227b04u: goto label_227b04;
        case 0x227b08u: goto label_227b08;
        case 0x227b0cu: goto label_227b0c;
        case 0x227b10u: goto label_227b10;
        case 0x227b14u: goto label_227b14;
        case 0x227b18u: goto label_227b18;
        case 0x227b1cu: goto label_227b1c;
        case 0x227b20u: goto label_227b20;
        case 0x227b24u: goto label_227b24;
        case 0x227b28u: goto label_227b28;
        case 0x227b2cu: goto label_227b2c;
        case 0x227b30u: goto label_227b30;
        case 0x227b34u: goto label_227b34;
        case 0x227b38u: goto label_227b38;
        case 0x227b3cu: goto label_227b3c;
        case 0x227b40u: goto label_227b40;
        case 0x227b44u: goto label_227b44;
        case 0x227b48u: goto label_227b48;
        case 0x227b4cu: goto label_227b4c;
        case 0x227b50u: goto label_227b50;
        case 0x227b54u: goto label_227b54;
        case 0x227b58u: goto label_227b58;
        case 0x227b5cu: goto label_227b5c;
        case 0x227b60u: goto label_227b60;
        case 0x227b64u: goto label_227b64;
        case 0x227b68u: goto label_227b68;
        case 0x227b6cu: goto label_227b6c;
        case 0x227b70u: goto label_227b70;
        case 0x227b74u: goto label_227b74;
        case 0x227b78u: goto label_227b78;
        case 0x227b7cu: goto label_227b7c;
        case 0x227b80u: goto label_227b80;
        case 0x227b84u: goto label_227b84;
        case 0x227b88u: goto label_227b88;
        case 0x227b8cu: goto label_227b8c;
        case 0x227b90u: goto label_227b90;
        case 0x227b94u: goto label_227b94;
        case 0x227b98u: goto label_227b98;
        case 0x227b9cu: goto label_227b9c;
        case 0x227ba0u: goto label_227ba0;
        case 0x227ba4u: goto label_227ba4;
        case 0x227ba8u: goto label_227ba8;
        case 0x227bacu: goto label_227bac;
        case 0x227bb0u: goto label_227bb0;
        case 0x227bb4u: goto label_227bb4;
        case 0x227bb8u: goto label_227bb8;
        case 0x227bbcu: goto label_227bbc;
        case 0x227bc0u: goto label_227bc0;
        case 0x227bc4u: goto label_227bc4;
        case 0x227bc8u: goto label_227bc8;
        case 0x227bccu: goto label_227bcc;
        case 0x227bd0u: goto label_227bd0;
        case 0x227bd4u: goto label_227bd4;
        case 0x227bd8u: goto label_227bd8;
        case 0x227bdcu: goto label_227bdc;
        case 0x227be0u: goto label_227be0;
        case 0x227be4u: goto label_227be4;
        case 0x227be8u: goto label_227be8;
        case 0x227becu: goto label_227bec;
        case 0x227bf0u: goto label_227bf0;
        case 0x227bf4u: goto label_227bf4;
        case 0x227bf8u: goto label_227bf8;
        case 0x227bfcu: goto label_227bfc;
        case 0x227c00u: goto label_227c00;
        case 0x227c04u: goto label_227c04;
        case 0x227c08u: goto label_227c08;
        case 0x227c0cu: goto label_227c0c;
        case 0x227c10u: goto label_227c10;
        case 0x227c14u: goto label_227c14;
        case 0x227c18u: goto label_227c18;
        case 0x227c1cu: goto label_227c1c;
        case 0x227c20u: goto label_227c20;
        case 0x227c24u: goto label_227c24;
        case 0x227c28u: goto label_227c28;
        case 0x227c2cu: goto label_227c2c;
        case 0x227c30u: goto label_227c30;
        case 0x227c34u: goto label_227c34;
        case 0x227c38u: goto label_227c38;
        case 0x227c3cu: goto label_227c3c;
        case 0x227c40u: goto label_227c40;
        case 0x227c44u: goto label_227c44;
        case 0x227c48u: goto label_227c48;
        case 0x227c4cu: goto label_227c4c;
        case 0x227c50u: goto label_227c50;
        case 0x227c54u: goto label_227c54;
        case 0x227c58u: goto label_227c58;
        case 0x227c5cu: goto label_227c5c;
        case 0x227c60u: goto label_227c60;
        case 0x227c64u: goto label_227c64;
        case 0x227c68u: goto label_227c68;
        case 0x227c6cu: goto label_227c6c;
        case 0x227c70u: goto label_227c70;
        case 0x227c74u: goto label_227c74;
        case 0x227c78u: goto label_227c78;
        case 0x227c7cu: goto label_227c7c;
        case 0x227c80u: goto label_227c80;
        case 0x227c84u: goto label_227c84;
        case 0x227c88u: goto label_227c88;
        case 0x227c8cu: goto label_227c8c;
        case 0x227c90u: goto label_227c90;
        case 0x227c94u: goto label_227c94;
        case 0x227c98u: goto label_227c98;
        case 0x227c9cu: goto label_227c9c;
        case 0x227ca0u: goto label_227ca0;
        case 0x227ca4u: goto label_227ca4;
        case 0x227ca8u: goto label_227ca8;
        case 0x227cacu: goto label_227cac;
        case 0x227cb0u: goto label_227cb0;
        case 0x227cb4u: goto label_227cb4;
        case 0x227cb8u: goto label_227cb8;
        case 0x227cbcu: goto label_227cbc;
        case 0x227cc0u: goto label_227cc0;
        case 0x227cc4u: goto label_227cc4;
        case 0x227cc8u: goto label_227cc8;
        case 0x227cccu: goto label_227ccc;
        case 0x227cd0u: goto label_227cd0;
        case 0x227cd4u: goto label_227cd4;
        case 0x227cd8u: goto label_227cd8;
        case 0x227cdcu: goto label_227cdc;
        case 0x227ce0u: goto label_227ce0;
        case 0x227ce4u: goto label_227ce4;
        case 0x227ce8u: goto label_227ce8;
        case 0x227cecu: goto label_227cec;
        case 0x227cf0u: goto label_227cf0;
        case 0x227cf4u: goto label_227cf4;
        case 0x227cf8u: goto label_227cf8;
        case 0x227cfcu: goto label_227cfc;
        case 0x227d00u: goto label_227d00;
        case 0x227d04u: goto label_227d04;
        case 0x227d08u: goto label_227d08;
        case 0x227d0cu: goto label_227d0c;
        case 0x227d10u: goto label_227d10;
        case 0x227d14u: goto label_227d14;
        case 0x227d18u: goto label_227d18;
        case 0x227d1cu: goto label_227d1c;
        case 0x227d20u: goto label_227d20;
        case 0x227d24u: goto label_227d24;
        case 0x227d28u: goto label_227d28;
        case 0x227d2cu: goto label_227d2c;
        case 0x227d30u: goto label_227d30;
        case 0x227d34u: goto label_227d34;
        case 0x227d38u: goto label_227d38;
        case 0x227d3cu: goto label_227d3c;
        case 0x227d40u: goto label_227d40;
        case 0x227d44u: goto label_227d44;
        case 0x227d48u: goto label_227d48;
        case 0x227d4cu: goto label_227d4c;
        case 0x227d50u: goto label_227d50;
        case 0x227d54u: goto label_227d54;
        case 0x227d58u: goto label_227d58;
        case 0x227d5cu: goto label_227d5c;
        case 0x227d60u: goto label_227d60;
        case 0x227d64u: goto label_227d64;
        case 0x227d68u: goto label_227d68;
        case 0x227d6cu: goto label_227d6c;
        case 0x227d70u: goto label_227d70;
        case 0x227d74u: goto label_227d74;
        case 0x227d78u: goto label_227d78;
        case 0x227d7cu: goto label_227d7c;
        case 0x227d80u: goto label_227d80;
        case 0x227d84u: goto label_227d84;
        case 0x227d88u: goto label_227d88;
        case 0x227d8cu: goto label_227d8c;
        case 0x227d90u: goto label_227d90;
        case 0x227d94u: goto label_227d94;
        case 0x227d98u: goto label_227d98;
        case 0x227d9cu: goto label_227d9c;
        case 0x227da0u: goto label_227da0;
        case 0x227da4u: goto label_227da4;
        case 0x227da8u: goto label_227da8;
        case 0x227dacu: goto label_227dac;
        case 0x227db0u: goto label_227db0;
        case 0x227db4u: goto label_227db4;
        case 0x227db8u: goto label_227db8;
        case 0x227dbcu: goto label_227dbc;
        case 0x227dc0u: goto label_227dc0;
        case 0x227dc4u: goto label_227dc4;
        case 0x227dc8u: goto label_227dc8;
        case 0x227dccu: goto label_227dcc;
        case 0x227dd0u: goto label_227dd0;
        case 0x227dd4u: goto label_227dd4;
        case 0x227dd8u: goto label_227dd8;
        case 0x227ddcu: goto label_227ddc;
        case 0x227de0u: goto label_227de0;
        case 0x227de4u: goto label_227de4;
        case 0x227de8u: goto label_227de8;
        case 0x227decu: goto label_227dec;
        case 0x227df0u: goto label_227df0;
        case 0x227df4u: goto label_227df4;
        case 0x227df8u: goto label_227df8;
        case 0x227dfcu: goto label_227dfc;
        case 0x227e00u: goto label_227e00;
        case 0x227e04u: goto label_227e04;
        case 0x227e08u: goto label_227e08;
        case 0x227e0cu: goto label_227e0c;
        case 0x227e10u: goto label_227e10;
        case 0x227e14u: goto label_227e14;
        case 0x227e18u: goto label_227e18;
        case 0x227e1cu: goto label_227e1c;
        case 0x227e20u: goto label_227e20;
        case 0x227e24u: goto label_227e24;
        case 0x227e28u: goto label_227e28;
        case 0x227e2cu: goto label_227e2c;
        case 0x227e30u: goto label_227e30;
        case 0x227e34u: goto label_227e34;
        case 0x227e38u: goto label_227e38;
        case 0x227e3cu: goto label_227e3c;
        case 0x227e40u: goto label_227e40;
        case 0x227e44u: goto label_227e44;
        case 0x227e48u: goto label_227e48;
        case 0x227e4cu: goto label_227e4c;
        case 0x227e50u: goto label_227e50;
        case 0x227e54u: goto label_227e54;
        case 0x227e58u: goto label_227e58;
        case 0x227e5cu: goto label_227e5c;
        case 0x227e60u: goto label_227e60;
        case 0x227e64u: goto label_227e64;
        case 0x227e68u: goto label_227e68;
        case 0x227e6cu: goto label_227e6c;
        case 0x227e70u: goto label_227e70;
        case 0x227e74u: goto label_227e74;
        case 0x227e78u: goto label_227e78;
        case 0x227e7cu: goto label_227e7c;
        case 0x227e80u: goto label_227e80;
        case 0x227e84u: goto label_227e84;
        case 0x227e88u: goto label_227e88;
        case 0x227e8cu: goto label_227e8c;
        case 0x227e90u: goto label_227e90;
        case 0x227e94u: goto label_227e94;
        case 0x227e98u: goto label_227e98;
        case 0x227e9cu: goto label_227e9c;
        case 0x227ea0u: goto label_227ea0;
        case 0x227ea4u: goto label_227ea4;
        case 0x227ea8u: goto label_227ea8;
        case 0x227eacu: goto label_227eac;
        case 0x227eb0u: goto label_227eb0;
        case 0x227eb4u: goto label_227eb4;
        case 0x227eb8u: goto label_227eb8;
        case 0x227ebcu: goto label_227ebc;
        case 0x227ec0u: goto label_227ec0;
        case 0x227ec4u: goto label_227ec4;
        case 0x227ec8u: goto label_227ec8;
        case 0x227eccu: goto label_227ecc;
        case 0x227ed0u: goto label_227ed0;
        case 0x227ed4u: goto label_227ed4;
        case 0x227ed8u: goto label_227ed8;
        case 0x227edcu: goto label_227edc;
        case 0x227ee0u: goto label_227ee0;
        case 0x227ee4u: goto label_227ee4;
        case 0x227ee8u: goto label_227ee8;
        case 0x227eecu: goto label_227eec;
        case 0x227ef0u: goto label_227ef0;
        case 0x227ef4u: goto label_227ef4;
        case 0x227ef8u: goto label_227ef8;
        case 0x227efcu: goto label_227efc;
        case 0x227f00u: goto label_227f00;
        case 0x227f04u: goto label_227f04;
        case 0x227f08u: goto label_227f08;
        case 0x227f0cu: goto label_227f0c;
        case 0x227f10u: goto label_227f10;
        case 0x227f14u: goto label_227f14;
        case 0x227f18u: goto label_227f18;
        case 0x227f1cu: goto label_227f1c;
        case 0x227f20u: goto label_227f20;
        case 0x227f24u: goto label_227f24;
        case 0x227f28u: goto label_227f28;
        case 0x227f2cu: goto label_227f2c;
        case 0x227f30u: goto label_227f30;
        case 0x227f34u: goto label_227f34;
        case 0x227f38u: goto label_227f38;
        case 0x227f3cu: goto label_227f3c;
        case 0x227f40u: goto label_227f40;
        case 0x227f44u: goto label_227f44;
        case 0x227f48u: goto label_227f48;
        case 0x227f4cu: goto label_227f4c;
        case 0x227f50u: goto label_227f50;
        case 0x227f54u: goto label_227f54;
        case 0x227f58u: goto label_227f58;
        case 0x227f5cu: goto label_227f5c;
        case 0x227f60u: goto label_227f60;
        case 0x227f64u: goto label_227f64;
        case 0x227f68u: goto label_227f68;
        case 0x227f6cu: goto label_227f6c;
        case 0x227f70u: goto label_227f70;
        case 0x227f74u: goto label_227f74;
        case 0x227f78u: goto label_227f78;
        case 0x227f7cu: goto label_227f7c;
        case 0x227f80u: goto label_227f80;
        case 0x227f84u: goto label_227f84;
        case 0x227f88u: goto label_227f88;
        case 0x227f8cu: goto label_227f8c;
        case 0x227f90u: goto label_227f90;
        case 0x227f94u: goto label_227f94;
        case 0x227f98u: goto label_227f98;
        case 0x227f9cu: goto label_227f9c;
        case 0x227fa0u: goto label_227fa0;
        case 0x227fa4u: goto label_227fa4;
        case 0x227fa8u: goto label_227fa8;
        case 0x227facu: goto label_227fac;
        case 0x227fb0u: goto label_227fb0;
        case 0x227fb4u: goto label_227fb4;
        case 0x227fb8u: goto label_227fb8;
        case 0x227fbcu: goto label_227fbc;
        case 0x227fc0u: goto label_227fc0;
        case 0x227fc4u: goto label_227fc4;
        case 0x227fc8u: goto label_227fc8;
        case 0x227fccu: goto label_227fcc;
        case 0x227fd0u: goto label_227fd0;
        case 0x227fd4u: goto label_227fd4;
        case 0x227fd8u: goto label_227fd8;
        case 0x227fdcu: goto label_227fdc;
        case 0x227fe0u: goto label_227fe0;
        case 0x227fe4u: goto label_227fe4;
        case 0x227fe8u: goto label_227fe8;
        case 0x227fecu: goto label_227fec;
        case 0x227ff0u: goto label_227ff0;
        case 0x227ff4u: goto label_227ff4;
        case 0x227ff8u: goto label_227ff8;
        case 0x227ffcu: goto label_227ffc;
        case 0x228000u: goto label_228000;
        case 0x228004u: goto label_228004;
        case 0x228008u: goto label_228008;
        case 0x22800cu: goto label_22800c;
        case 0x228010u: goto label_228010;
        case 0x228014u: goto label_228014;
        case 0x228018u: goto label_228018;
        case 0x22801cu: goto label_22801c;
        case 0x228020u: goto label_228020;
        case 0x228024u: goto label_228024;
        case 0x228028u: goto label_228028;
        case 0x22802cu: goto label_22802c;
        case 0x228030u: goto label_228030;
        case 0x228034u: goto label_228034;
        case 0x228038u: goto label_228038;
        case 0x22803cu: goto label_22803c;
        case 0x228040u: goto label_228040;
        case 0x228044u: goto label_228044;
        case 0x228048u: goto label_228048;
        case 0x22804cu: goto label_22804c;
        case 0x228050u: goto label_228050;
        case 0x228054u: goto label_228054;
        case 0x228058u: goto label_228058;
        case 0x22805cu: goto label_22805c;
        case 0x228060u: goto label_228060;
        case 0x228064u: goto label_228064;
        case 0x228068u: goto label_228068;
        case 0x22806cu: goto label_22806c;
        case 0x228070u: goto label_228070;
        case 0x228074u: goto label_228074;
        case 0x228078u: goto label_228078;
        case 0x22807cu: goto label_22807c;
        case 0x228080u: goto label_228080;
        case 0x228084u: goto label_228084;
        case 0x228088u: goto label_228088;
        case 0x22808cu: goto label_22808c;
        case 0x228090u: goto label_228090;
        case 0x228094u: goto label_228094;
        case 0x228098u: goto label_228098;
        case 0x22809cu: goto label_22809c;
        case 0x2280a0u: goto label_2280a0;
        case 0x2280a4u: goto label_2280a4;
        default: return;
    }

label_2278d8:
    // 0x2278d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2278d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2278dc:
    // 0x2278dc: 0xc0564fc  jal         func_1593F0
label_2278e0:
    if (ctx->pc == 0x2278E0u) {
        ctx->pc = 0x2278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278DCu;
        // 0x2278e0: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278E4u;
        goto label_2278e4;
    }
    ctx->pc = 0x2278DCu;
    SET_GPR_U32(ctx, 31, 0x2278E4u);
    ctx->pc = 0x2278E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2278DCu;
    // 0x2278e0: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x2278DCu, 0x2278E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2278E4u;
label_2278e4:
    // 0x2278e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2278e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2278e8:
    // 0x2278e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2278e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2278ec:
    // 0x2278ec: 0x3e00008  jr          $ra
label_2278f0:
    if (ctx->pc == 0x2278F0u) {
        ctx->pc = 0x2278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278ECu;
        // 0x2278f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2278F4u;
        goto label_2278f4;
    }
    ctx->pc = 0x2278ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278ECu;
        // 0x2278f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278F4u;
label_2278f4:
    // 0x2278f4: 0x0  nop
    ctx->pc = 0x2278f4u;
    // NOP
label_2278f8:
    // 0x2278f8: 0x0  nop
    ctx->pc = 0x2278f8u;
    // NOP
label_2278fc:
    // 0x2278fc: 0x0  nop
    ctx->pc = 0x2278fcu;
    // NOP
label_227900:
    // 0x227900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227904:
    // 0x227904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_227908:
    // 0x227908: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x227908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22790c:
    // 0x22790c: 0xc0563a0  jal         func_158E80
label_227910:
    if (ctx->pc == 0x227910u) {
        ctx->pc = 0x227910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22790Cu;
        // 0x227910: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227914u;
        goto label_227914;
    }
    ctx->pc = 0x22790Cu;
    SET_GPR_U32(ctx, 31, 0x227914u);
    ctx->pc = 0x227910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22790Cu;
    // 0x227910: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E80u, 0x22790Cu, 0x227914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227914u;
label_227914:
    // 0x227914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227918:
    // 0x227918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22791c:
    // 0x22791c: 0x3e00008  jr          $ra
label_227920:
    if (ctx->pc == 0x227920u) {
        ctx->pc = 0x227920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22791Cu;
        // 0x227920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227924u;
        goto label_227924;
    }
    ctx->pc = 0x22791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22791Cu;
        // 0x227920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227924u;
label_227924:
    // 0x227924: 0x0  nop
    ctx->pc = 0x227924u;
    // NOP
label_227928:
    // 0x227928: 0x0  nop
    ctx->pc = 0x227928u;
    // NOP
label_22792c:
    // 0x22792c: 0x0  nop
    ctx->pc = 0x22792cu;
    // NOP
label_227930:
    // 0x227930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227934:
    // 0x227934: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x227934u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
label_227938:
    // 0x227938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22793c:
    // 0x22793c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x22793cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_227940:
    // 0x227940: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x227940u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227944:
    // 0x227944: 0x256b25ae  addiu       $t3, $t3, 0x25AE
    ctx->pc = 0x227944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9646));
label_227948:
    // 0x227948: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x227948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22794c:
    // 0x22794c: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x22794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_227950:
    // 0x227950: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x227950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_227954:
    // 0x227954: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x227954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_227958:
    // 0x227958: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22795c:
    // 0x22795c: 0x92200  sll         $a0, $t1, 8
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_227960:
    // 0x227960: 0x893823  subu        $a3, $a0, $t1
    ctx->pc = 0x227960u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_227964:
    // 0x227964: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x227964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_227968:
    // 0x227968: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22796c:
    // 0x22796c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x22796cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227970:
    // 0x227970: 0x450c0  sll         $t2, $a0, 3
    ctx->pc = 0x227970u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_227974:
    // 0x227974: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x227974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_227978:
    // 0x227978: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x227978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22797c:
    // 0x22797c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x22797cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_227980:
    // 0x227980: 0x1653821  addu        $a3, $t3, $a1
    ctx->pc = 0x227980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_227984:
    // 0x227984: 0x24e90000  addiu       $t1, $a3, 0x0
    ctx->pc = 0x227984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_227988:
    // 0x227988: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x227988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22798c:
    // 0x22798c: 0xa23823  subu        $a3, $a1, $v0
    ctx->pc = 0x22798cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_227990:
    // 0x227990: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x227990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_227994:
    // 0x227994: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x227994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227998:
    // 0x227998: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x227998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_22799c:
    // 0x22799c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x22799cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2279a0:
    // 0x2279a0: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x2279a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2279a4:
    // 0x2279a4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2279a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2279a8:
    // 0x2279a8: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x2279a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_2279ac:
    // 0x2279ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2279b0:
    // 0x2279b0: 0x740c0  sll         $t0, $a3, 3
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2279b4:
    // 0x2279b4: 0x25270000  addiu       $a3, $t1, 0x0
    ctx->pc = 0x2279b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 0));
label_2279b8:
    // 0x2279b8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x2279b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2279bc:
    // 0x2279bc: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x2279bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2279c0:
    // 0x2279c0: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2279c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2279c4:
    // 0x2279c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2279c8:
    // 0x2279c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2279cc:
    // 0x2279cc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2279ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2279d0:
    // 0x2279d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2279d4:
    // 0x2279d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2279d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2279d8:
    // 0x2279d8: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2279d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2279dc:
    // 0x2279dc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2279dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2279e0:
    // 0x2279e0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2279e4:
    // 0x2279e4: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_2279e8:
    // 0x2279e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2279e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2279ec:
    // 0x2279ec: 0x84420232  lh          $v0, 0x232($v0)
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 562)));
label_2279f0:
    // 0x2279f0: 0xc056534  jal         func_1594D0
label_2279f4:
    if (ctx->pc == 0x2279F4u) {
        ctx->pc = 0x2279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279F0u;
        // 0x2279f4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2279F8u;
        goto label_2279f8;
    }
    ctx->pc = 0x2279F0u;
    SET_GPR_U32(ctx, 31, 0x2279F8u);
    ctx->pc = 0x2279F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2279F0u;
    // 0x2279f4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1594D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1594D0u, 0x2279F0u, 0x2279F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279F8u;
label_2279f8:
    // 0x2279f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2279f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2279fc:
    // 0x2279fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2279fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227a00:
    // 0x227a00: 0x3e00008  jr          $ra
label_227a04:
    if (ctx->pc == 0x227A04u) {
        ctx->pc = 0x227A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A00u;
        // 0x227a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A08u;
        goto label_227a08;
    }
    ctx->pc = 0x227A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A00u;
        // 0x227a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A08u;
label_227a08:
    // 0x227a08: 0x0  nop
    ctx->pc = 0x227a08u;
    // NOP
label_227a0c:
    // 0x227a0c: 0x0  nop
    ctx->pc = 0x227a0cu;
    // NOP
label_227a10:
    // 0x227a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_227a14:
    // 0x227a14: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_227a18:
    // 0x227a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_227a1c:
    // 0x227a1c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x227a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_227a20:
    // 0x227a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_227a24:
    // 0x227a24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227a28:
    // 0x227a28: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227a2c:
    // 0x227a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227a30:
    // 0x227a30: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x227a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_227a34:
    // 0x227a34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227a38:
    // 0x227a38: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_227a3c:
    // 0x227a3c: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_227a40:
    // 0x227a40: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_227a44:
    // 0x227a44: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x227a44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227a48:
    // 0x227a48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_227a4c:
    // 0x227a4c: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x227a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_227a50:
    // 0x227a50: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x227a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_227a54:
    // 0x227a54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x227a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_227a58:
    // 0x227a58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x227a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_227a5c:
    // 0x227a5c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x227a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_227a60:
    // 0x227a60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_227a64:
    if (ctx->pc == 0x227A64u) {
        ctx->pc = 0x227A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A60u;
        // 0x227a64: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A68u;
        goto label_227a68;
    }
    ctx->pc = 0x227A60u;
    {
        const bool branch_taken_0x227a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A60u;
        // 0x227a64: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a60) {
            ctx->pc = 0x227A78u;
            goto label_227a78;
        }
    }
    ctx->pc = 0x227A68u;
label_227a68:
    // 0x227a68: 0xc044894  jal         func_112250
label_227a6c:
    if (ctx->pc == 0x227A6Cu) {
        ctx->pc = 0x227A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A68u;
        // 0x227a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A70u;
        goto label_227a70;
    }
    ctx->pc = 0x227A68u;
    SET_GPR_U32(ctx, 31, 0x227A70u);
    ctx->pc = 0x227A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A68u;
    // 0x227a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x227A68u, 0x227A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A70u;
label_227a70:
    // 0x227a70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_227a74:
    if (ctx->pc == 0x227A74u) {
        ctx->pc = 0x227A78u;
        goto label_227a78;
    }
    ctx->pc = 0x227A70u;
    {
        const bool branch_taken_0x227a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227a70) {
            ctx->pc = 0x227A84u;
            goto label_227a84;
        }
    }
    ctx->pc = 0x227A78u;
label_227a78:
    // 0x227a78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227a7c:
    // 0x227a7c: 0xc05da58  jal         func_176960
label_227a80:
    if (ctx->pc == 0x227A80u) {
        ctx->pc = 0x227A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A7Cu;
        // 0x227a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A84u;
        goto label_227a84;
    }
    ctx->pc = 0x227A7Cu;
    SET_GPR_U32(ctx, 31, 0x227A84u);
    ctx->pc = 0x227A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A7Cu;
    // 0x227a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227A7Cu, 0x227A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A84u;
label_227a84:
    // 0x227a84: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_227a88:
    // 0x227a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_227a8c:
    // 0x227a8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_227a90:
    if (ctx->pc == 0x227A90u) {
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227A94u;
        goto label_227a94;
    }
    ctx->pc = 0x227A8Cu;
    {
        const bool branch_taken_0x227a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A8Cu;
        // 0x227a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a8c) {
            ctx->pc = 0x227AC0u;
            goto label_227ac0;
        }
    }
    ctx->pc = 0x227A94u;
label_227a94:
    // 0x227a94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_227a98:
    // 0x227a98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_227a9c:
    if (ctx->pc == 0x227A9Cu) {
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AA0u;
        goto label_227aa0;
    }
    ctx->pc = 0x227A98u;
    {
        const bool branch_taken_0x227a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A98u;
        // 0x227a9c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a98) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AA0u;
label_227aa0:
    // 0x227aa0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_227aa4:
    if (ctx->pc == 0x227AA4u) {
        ctx->pc = 0x227AA8u;
        goto label_227aa8;
    }
    ctx->pc = 0x227AA0u;
    {
        const bool branch_taken_0x227aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227aa0) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AA8u;
label_227aa8:
    // 0x227aa8: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_227aac:
    // 0x227aac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_227ab0:
    if (ctx->pc == 0x227AB0u) {
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AB4u;
        goto label_227ab4;
    }
    ctx->pc = 0x227AACu;
    {
        const bool branch_taken_0x227aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aac) {
            ctx->pc = 0x227ABCu;
            goto label_227abc;
        }
    }
    ctx->pc = 0x227AB4u;
label_227ab4:
    // 0x227ab4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_227ab8:
    if (ctx->pc == 0x227AB8u) {
        ctx->pc = 0x227ABCu;
        goto label_227abc;
    }
    ctx->pc = 0x227AB4u;
    {
        const bool branch_taken_0x227ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227ab4) {
            ctx->pc = 0x227AC8u;
            goto label_227ac8;
        }
    }
    ctx->pc = 0x227ABCu;
label_227abc:
    // 0x227abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ac0:
    // 0x227ac0: 0x10000003  b           . + 4 + (0x3 << 2)
label_227ac4:
    if (ctx->pc == 0x227AC4u) {
        ctx->pc = 0x227AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC0u;
        // 0x227ac4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AC8u;
        goto label_227ac8;
    }
    ctx->pc = 0x227AC0u;
    {
        const bool branch_taken_0x227ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC0u;
        // 0x227ac4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ac0) {
            ctx->pc = 0x227AD0u;
            goto label_227ad0;
        }
    }
    ctx->pc = 0x227AC8u;
label_227ac8:
    // 0x227ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227acc:
    // 0x227acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_227ad0:
    // 0x227ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227ad4:
    // 0x227ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227ad8:
    // 0x227ad8: 0x3e00008  jr          $ra
label_227adc:
    if (ctx->pc == 0x227ADCu) {
        ctx->pc = 0x227ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AD8u;
        // 0x227adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227AE0u;
        goto label_227ae0;
    }
    ctx->pc = 0x227AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AD8u;
        // 0x227adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227AE0u;
label_227ae0:
    // 0x227ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227ae4:
    // 0x227ae4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_227ae8:
    // 0x227ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227aec:
    // 0x227aec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_227af0:
    // 0x227af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227af4:
    // 0x227af4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227af8:
    // 0x227af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227afc:
    // 0x227afc: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x227afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_227b00:
    // 0x227b00: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_227b04:
    // 0x227b04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_227b08:
    // 0x227b08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_227b0c:
    // 0x227b0c: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_227b10:
    // 0x227b10: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_227b14:
    // 0x227b14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_227b18:
    // 0x227b18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_227b1c:
    if (ctx->pc == 0x227B1Cu) {
        ctx->pc = 0x227B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B18u;
        // 0x227b1c: 0x24843620  addiu       $a0, $a0, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B20u;
        goto label_227b20;
    }
    ctx->pc = 0x227B18u;
    {
        const bool branch_taken_0x227b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B18u;
        // 0x227b1c: 0x24843620  addiu       $a0, $a0, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b18) {
            ctx->pc = 0x227B2Cu;
            goto label_227b2c;
        }
    }
    ctx->pc = 0x227B20u;
label_227b20:
    // 0x227b20: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_227b24:
    // 0x227b24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_227b28:
    if (ctx->pc == 0x227B28u) {
        ctx->pc = 0x227B2Cu;
        goto label_227b2c;
    }
    ctx->pc = 0x227B24u;
    {
        const bool branch_taken_0x227b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b24) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B2Cu;
label_227b2c:
    // 0x227b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227b30:
    // 0x227b30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_227b34:
    // 0x227b34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_227b38:
    if (ctx->pc == 0x227B38u) {
        ctx->pc = 0x227B3Cu;
        goto label_227b3c;
    }
    ctx->pc = 0x227B34u;
    {
        const bool branch_taken_0x227b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b34) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B3Cu;
label_227b3c:
    // 0x227b3c: 0xaf8692e8  sw          $a2, -0x6D18($gp)
    ctx->pc = 0x227b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 6));
label_227b40:
    // 0x227b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227b44:
    // 0x227b44: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_227b48:
    // 0x227b48: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x227b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_227b4c:
    // 0x227b4c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_227b50:
    // 0x227b50: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_227b54:
    // 0x227b54: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x227b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_227b58:
    // 0x227b58: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_227b5c:
    // 0x227b5c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_227b60:
    // 0x227b60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_227b64:
    // 0x227b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227b68:
    // 0x227b68: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x227b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_227b6c:
    // 0x227b6c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_227b70:
    // 0x227b70: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_227b74:
    // 0x227b74: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_227b78:
    // 0x227b78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_227b7c:
    // 0x227b7c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_227b80:
    // 0x227b80: 0xc05da58  jal         func_176960
label_227b84:
    if (ctx->pc == 0x227B84u) {
        ctx->pc = 0x227B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B80u;
        // 0x227b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B88u;
        goto label_227b88;
    }
    ctx->pc = 0x227B80u;
    SET_GPR_U32(ctx, 31, 0x227B88u);
    ctx->pc = 0x227B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B80u;
    // 0x227b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227B80u, 0x227B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B88u;
label_227b88:
    // 0x227b88: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_227b8c:
    // 0x227b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_227b90:
    // 0x227b90: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_227b94:
    if (ctx->pc == 0x227B94u) {
        ctx->pc = 0x227B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B90u;
        // 0x227b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227B98u;
        goto label_227b98;
    }
    ctx->pc = 0x227B90u;
    {
        const bool branch_taken_0x227b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B90u;
        // 0x227b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b90) {
            ctx->pc = 0x227BC4u;
            goto label_227bc4;
        }
    }
    ctx->pc = 0x227B98u;
label_227b98:
    // 0x227b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_227b9c:
    // 0x227b9c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_227ba0:
    if (ctx->pc == 0x227BA0u) {
        ctx->pc = 0x227BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B9Cu;
        // 0x227ba0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227BA4u;
        goto label_227ba4;
    }
    ctx->pc = 0x227B9Cu;
    {
        const bool branch_taken_0x227b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B9Cu;
        // 0x227ba0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b9c) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BA4u;
label_227ba4:
    // 0x227ba4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_227ba8:
    if (ctx->pc == 0x227BA8u) {
        ctx->pc = 0x227BACu;
        goto label_227bac;
    }
    ctx->pc = 0x227BA4u;
    {
        const bool branch_taken_0x227ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227ba4) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BACu;
label_227bac:
    // 0x227bac: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_227bb0:
    // 0x227bb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_227bb4:
    if (ctx->pc == 0x227BB4u) {
        ctx->pc = 0x227BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB0u;
        // 0x227bb4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227BB8u;
        goto label_227bb8;
    }
    ctx->pc = 0x227BB0u;
    {
        const bool branch_taken_0x227bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB0u;
        // 0x227bb4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bb0) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BB8u;
label_227bb8:
    // 0x227bb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_227bbc:
    if (ctx->pc == 0x227BBCu) {
        ctx->pc = 0x227BC0u;
        goto label_227bc0;
    }
    ctx->pc = 0x227BB8u;
    {
        const bool branch_taken_0x227bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227bb8) {
            ctx->pc = 0x227BCCu;
            goto label_227bcc;
        }
    }
    ctx->pc = 0x227BC0u;
label_227bc0:
    // 0x227bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227bc4:
    // 0x227bc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_227bc8:
    if (ctx->pc == 0x227BC8u) {
        ctx->pc = 0x227BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BC4u;
        // 0x227bc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227BCCu;
        goto label_227bcc;
    }
    ctx->pc = 0x227BC4u;
    {
        const bool branch_taken_0x227bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BC4u;
        // 0x227bc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bc4) {
            ctx->pc = 0x227BD4u;
            goto label_227bd4;
        }
    }
    ctx->pc = 0x227BCCu;
label_227bcc:
    // 0x227bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227bd0:
    // 0x227bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227bd4:
    // 0x227bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227bd8:
    // 0x227bd8: 0x3e00008  jr          $ra
label_227bdc:
    if (ctx->pc == 0x227BDCu) {
        ctx->pc = 0x227BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD8u;
        // 0x227bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227BE0u;
        goto label_227be0;
    }
    ctx->pc = 0x227BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BD8u;
        // 0x227bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227BE0u;
label_227be0:
    // 0x227be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227be4:
    // 0x227be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227be8:
    // 0x227be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227bec:
    // 0x227bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227bf0:
    // 0x227bf0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227bf4:
    // 0x227bf4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227bf8:
    // 0x227bf8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227bfc:
    // 0x227bfc: 0xc05d988  jal         func_176620
label_227c00:
    if (ctx->pc == 0x227C00u) {
        ctx->pc = 0x227C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BFCu;
        // 0x227c00: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C04u;
        goto label_227c04;
    }
    ctx->pc = 0x227BFCu;
    SET_GPR_U32(ctx, 31, 0x227C04u);
    ctx->pc = 0x227C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BFCu;
    // 0x227c00: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227BFCu, 0x227C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C04u;
label_227c04:
    // 0x227c04: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227c08:
    // 0x227c08: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_227c0c:
    // 0x227c0c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227c10:
    // 0x227c10: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
label_227c14:
    // 0x227c14: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227c18:
    // 0x227c18: 0xc05d9d8  jal         func_176760
label_227c1c:
    if (ctx->pc == 0x227C1Cu) {
        ctx->pc = 0x227C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C18u;
        // 0x227c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C20u;
        goto label_227c20;
    }
    ctx->pc = 0x227C18u;
    SET_GPR_U32(ctx, 31, 0x227C20u);
    ctx->pc = 0x227C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C18u;
    // 0x227c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227C18u, 0x227C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C20u;
label_227c20:
    // 0x227c20: 0xc05b63c  jal         func_16D8F0
label_227c24:
    if (ctx->pc == 0x227C24u) {
        ctx->pc = 0x227C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C20u;
        // 0x227c24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C28u;
        goto label_227c28;
    }
    ctx->pc = 0x227C20u;
    SET_GPR_U32(ctx, 31, 0x227C28u);
    ctx->pc = 0x227C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C20u;
    // 0x227c24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227C20u, 0x227C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C28u;
label_227c28:
    // 0x227c28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_227c2c:
    // 0x227c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227c30:
    // 0x227c30: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_227c34:
    // 0x227c34: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_227c38:
    // 0x227c38: 0xc05b4d4  jal         func_16D350
label_227c3c:
    if (ctx->pc == 0x227C3Cu) {
        ctx->pc = 0x227C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C38u;
        // 0x227c3c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C40u;
        goto label_227c40;
    }
    ctx->pc = 0x227C38u;
    SET_GPR_U32(ctx, 31, 0x227C40u);
    ctx->pc = 0x227C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C38u;
    // 0x227c3c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227C38u, 0x227C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C40u;
label_227c40:
    // 0x227c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227c44:
    // 0x227c44: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_227c48:
    // 0x227c48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x227c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227c4c:
    // 0x227c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227c50:
    // 0x227c50: 0x250899b0  addiu       $t0, $t0, -0x6650
    ctx->pc = 0x227c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
label_227c54:
    // 0x227c54: 0xc070430  jal         func_1C10C0
label_227c58:
    if (ctx->pc == 0x227C58u) {
        ctx->pc = 0x227C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C54u;
        // 0x227c58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C5Cu;
        goto label_227c5c;
    }
    ctx->pc = 0x227C54u;
    SET_GPR_U32(ctx, 31, 0x227C5Cu);
    ctx->pc = 0x227C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C54u;
    // 0x227c58: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    { ctx->pc = 0x1c10c0; return; }
    ctx->pc = 0x227C5Cu;
label_227c5c:
    // 0x227c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227c60:
    // 0x227c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227c64:
    // 0x227c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227c68:
    // 0x227c68: 0x3e00008  jr          $ra
label_227c6c:
    if (ctx->pc == 0x227C6Cu) {
        ctx->pc = 0x227C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C68u;
        // 0x227c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C70u;
        goto label_227c70;
    }
    ctx->pc = 0x227C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C68u;
        // 0x227c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C70u;
label_227c70:
    // 0x227c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227c74:
    // 0x227c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227c78:
    // 0x227c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227c7c:
    // 0x227c7c: 0xc05b63c  jal         func_16D8F0
label_227c80:
    if (ctx->pc == 0x227C80u) {
        ctx->pc = 0x227C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C7Cu;
        // 0x227c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C84u;
        goto label_227c84;
    }
    ctx->pc = 0x227C7Cu;
    SET_GPR_U32(ctx, 31, 0x227C84u);
    ctx->pc = 0x227C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C7Cu;
    // 0x227c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227C7Cu, 0x227C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C84u;
label_227c84:
    // 0x227c84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227c88:
    // 0x227c88: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227c8c:
    // 0x227c8c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227c90:
    // 0x227c90: 0xc05d988  jal         func_176620
label_227c94:
    if (ctx->pc == 0x227C94u) {
        ctx->pc = 0x227C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C90u;
        // 0x227c94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227C98u;
        goto label_227c98;
    }
    ctx->pc = 0x227C90u;
    SET_GPR_U32(ctx, 31, 0x227C98u);
    ctx->pc = 0x227C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C90u;
    // 0x227c94: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227C90u, 0x227C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C98u;
label_227c98:
    // 0x227c98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227c9c:
    // 0x227c9c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_227ca0:
    // 0x227ca0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227ca4:
    // 0x227ca4: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
label_227ca8:
    // 0x227ca8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227cac:
    // 0x227cac: 0xc05d9d8  jal         func_176760
label_227cb0:
    if (ctx->pc == 0x227CB0u) {
        ctx->pc = 0x227CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CACu;
        // 0x227cb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227CB4u;
        goto label_227cb4;
    }
    ctx->pc = 0x227CACu;
    SET_GPR_U32(ctx, 31, 0x227CB4u);
    ctx->pc = 0x227CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CACu;
    // 0x227cb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227CACu, 0x227CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CB4u;
label_227cb4:
    // 0x227cb4: 0xc05b63c  jal         func_16D8F0
label_227cb8:
    if (ctx->pc == 0x227CB8u) {
        ctx->pc = 0x227CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CB4u;
        // 0x227cb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227CBCu;
        goto label_227cbc;
    }
    ctx->pc = 0x227CB4u;
    SET_GPR_U32(ctx, 31, 0x227CBCu);
    ctx->pc = 0x227CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CB4u;
    // 0x227cb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227CB4u, 0x227CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CBCu;
label_227cbc:
    // 0x227cbc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_227cc0:
    // 0x227cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227cc4:
    // 0x227cc4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_227cc8:
    // 0x227cc8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_227ccc:
    // 0x227ccc: 0xc05b4d4  jal         func_16D350
label_227cd0:
    if (ctx->pc == 0x227CD0u) {
        ctx->pc = 0x227CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CCCu;
        // 0x227cd0: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227CD4u;
        goto label_227cd4;
    }
    ctx->pc = 0x227CCCu;
    SET_GPR_U32(ctx, 31, 0x227CD4u);
    ctx->pc = 0x227CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CCCu;
    // 0x227cd0: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227CCCu, 0x227CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CD4u;
label_227cd4:
    // 0x227cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227cd8:
    // 0x227cd8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_227cdc:
    // 0x227cdc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x227cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227ce0:
    // 0x227ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ce4:
    // 0x227ce4: 0x250899b0  addiu       $t0, $t0, -0x6650
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
label_227ce8:
    // 0x227ce8: 0xc070430  jal         func_1C10C0
label_227cec:
    if (ctx->pc == 0x227CECu) {
        ctx->pc = 0x227CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CE8u;
        // 0x227cec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227CF0u;
        goto label_227cf0;
    }
    ctx->pc = 0x227CE8u;
    SET_GPR_U32(ctx, 31, 0x227CF0u);
    ctx->pc = 0x227CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CE8u;
    // 0x227cec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    { ctx->pc = 0x1c10c0; return; }
    ctx->pc = 0x227CF0u;
label_227cf0:
    // 0x227cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227cf4:
    // 0x227cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227cf8:
    // 0x227cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227cfc:
    // 0x227cfc: 0x3e00008  jr          $ra
label_227d00:
    if (ctx->pc == 0x227D00u) {
        ctx->pc = 0x227D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CFCu;
        // 0x227d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D04u;
        goto label_227d04;
    }
    ctx->pc = 0x227CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CFCu;
        // 0x227d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D04u;
label_227d04:
    // 0x227d04: 0x0  nop
    ctx->pc = 0x227d04u;
    // NOP
label_227d08:
    // 0x227d08: 0x0  nop
    ctx->pc = 0x227d08u;
    // NOP
label_227d0c:
    // 0x227d0c: 0x0  nop
    ctx->pc = 0x227d0cu;
    // NOP
label_227d10:
    // 0x227d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_227d14:
    // 0x227d14: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x227d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_227d18:
    // 0x227d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227d1c:
    // 0x227d1c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_227d20:
    // 0x227d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227d24:
    // 0x227d24: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_227d28:
    // 0x227d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227d2c:
    // 0x227d2c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x227d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_227d30:
    // 0x227d30: 0xc05b4d4  jal         func_16D350
label_227d34:
    if (ctx->pc == 0x227D34u) {
        ctx->pc = 0x227D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D30u;
        // 0x227d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D38u;
        goto label_227d38;
    }
    ctx->pc = 0x227D30u;
    SET_GPR_U32(ctx, 31, 0x227D38u);
    ctx->pc = 0x227D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D30u;
    // 0x227d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227D30u, 0x227D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D38u;
label_227d38:
    // 0x227d38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227d3c:
    // 0x227d3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227d40:
    // 0x227d40: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227d44:
    // 0x227d44: 0xc05d988  jal         func_176620
label_227d48:
    if (ctx->pc == 0x227D48u) {
        ctx->pc = 0x227D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D44u;
        // 0x227d48: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D4Cu;
        goto label_227d4c;
    }
    ctx->pc = 0x227D44u;
    SET_GPR_U32(ctx, 31, 0x227D4Cu);
    ctx->pc = 0x227D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D44u;
    // 0x227d48: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227D44u, 0x227D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D4Cu;
label_227d4c:
    // 0x227d4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227d50:
    // 0x227d50: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_227d54:
    // 0x227d54: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227d58:
    // 0x227d58: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
label_227d5c:
    // 0x227d5c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227d60:
    // 0x227d60: 0xc05d9d8  jal         func_176760
label_227d64:
    if (ctx->pc == 0x227D64u) {
        ctx->pc = 0x227D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D60u;
        // 0x227d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D68u;
        goto label_227d68;
    }
    ctx->pc = 0x227D60u;
    SET_GPR_U32(ctx, 31, 0x227D68u);
    ctx->pc = 0x227D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D60u;
    // 0x227d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227D60u, 0x227D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D68u;
label_227d68:
    // 0x227d68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_227d6c:
    // 0x227d6c: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_227d70:
    // 0x227d70: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_227d74:
    if (ctx->pc == 0x227D74u) {
        ctx->pc = 0x227D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D70u;
        // 0x227d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D78u;
        goto label_227d78;
    }
    ctx->pc = 0x227D70u;
    {
        const bool branch_taken_0x227d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D70u;
        // 0x227d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d70) {
            ctx->pc = 0x227E0Cu;
            goto label_227e0c;
        }
    }
    ctx->pc = 0x227D78u;
label_227d78:
    // 0x227d78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_227d7c:
    // 0x227d7c: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x227d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_227d80:
    // 0x227d80: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_227d84:
    if (ctx->pc == 0x227D84u) {
        ctx->pc = 0x227D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D80u;
        // 0x227d84: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227D88u;
        goto label_227d88;
    }
    ctx->pc = 0x227D80u;
    {
        const bool branch_taken_0x227d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D80u;
        // 0x227d84: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d80) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227D88u;
label_227d88:
    // 0x227d88: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x227d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_227d8c:
    // 0x227d8c: 0x2463edb0  addiu       $v1, $v1, -0x1250
    ctx->pc = 0x227d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962608));
label_227d90:
    // 0x227d90: 0x24e799b0  addiu       $a3, $a3, -0x6650
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941104));
label_227d94:
    // 0x227d94: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x227d94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_227d98:
    // 0x227d98: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x227d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_227d9c:
    // 0x227d9c: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x227d9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_227da0:
    // 0x227da0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_227da4:
    // 0x227da4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x227da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_227da8:
    // 0x227da8: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x227da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_227dac:
    // 0x227dac: 0x90630024  lbu         $v1, 0x24($v1)
    ctx->pc = 0x227dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_227db0:
    // 0x227db0: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x227db0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
label_227db4:
    // 0x227db4: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x227db4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
label_227db8:
    // 0x227db8: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x227db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_227dbc:
    // 0x227dbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_227dc0:
    if (ctx->pc == 0x227DC0u) {
        ctx->pc = 0x227DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DBCu;
        // 0x227dc0: 0xa1030024  sb          $v1, 0x24($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227DC4u;
        goto label_227dc4;
    }
    ctx->pc = 0x227DBCu;
    {
        const bool branch_taken_0x227dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DBCu;
        // 0x227dc0: 0xa1030024  sb          $v1, 0x24($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dbc) {
            ctx->pc = 0x227DE0u;
            goto label_227de0;
        }
    }
    ctx->pc = 0x227DC4u;
label_227dc4:
    // 0x227dc4: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x227dc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_227dc8:
    // 0x227dc8: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
label_227dcc:
    if (ctx->pc == 0x227DCCu) {
        ctx->pc = 0x227DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DC8u;
        // 0x227dcc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227DD0u;
        goto label_227dd0;
    }
    ctx->pc = 0x227DC8u;
    {
        const bool branch_taken_0x227dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x227DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DC8u;
        // 0x227dcc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dc8) {
            ctx->pc = 0x227DECu;
            goto label_227dec;
        }
    }
    ctx->pc = 0x227DD0u;
label_227dd0:
    // 0x227dd0: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_227dd4:
    // 0x227dd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_227dd8:
    if (ctx->pc == 0x227DD8u) {
        ctx->pc = 0x227DDCu;
        goto label_227ddc;
    }
    ctx->pc = 0x227DD4u;
    {
        const bool branch_taken_0x227dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227dd4) {
            ctx->pc = 0x227DECu;
            goto label_227dec;
        }
    }
    ctx->pc = 0x227DDCu;
label_227ddc:
    // 0x227ddc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x227ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_227de0:
    // 0x227de0: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x227de0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_227de4:
    // 0x227de4: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
label_227de8:
    if (ctx->pc == 0x227DE8u) {
        ctx->pc = 0x227DECu;
        goto label_227dec;
    }
    ctx->pc = 0x227DE4u;
    {
        const bool branch_taken_0x227de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x227de4) {
            ctx->pc = 0x227DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227dc4;
        }
    }
    ctx->pc = 0x227DECu;
label_227dec:
    // 0x227dec: 0x0  nop
    ctx->pc = 0x227decu;
    // NOP
label_227df0:
    // 0x227df0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_227df4:
    if (ctx->pc == 0x227DF4u) {
        ctx->pc = 0x227DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF0u;
        // 0x227df4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227DF8u;
        goto label_227df8;
    }
    ctx->pc = 0x227DF0u;
    {
        const bool branch_taken_0x227df0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x227DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF0u;
        // 0x227df4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227df0) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227DF8u;
label_227df8:
    // 0x227df8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_227dfc:
    // 0x227dfc: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
label_227e00:
    // 0x227e00: 0xc08f20e  jal         func_23C838
label_227e04:
    if (ctx->pc == 0x227E04u) {
        ctx->pc = 0x227E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E00u;
        // 0x227e04: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E08u;
        goto label_227e08;
    }
    ctx->pc = 0x227E00u;
    SET_GPR_U32(ctx, 31, 0x227E08u);
    ctx->pc = 0x227E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E00u;
    // 0x227e04: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x227E08u;
label_227e08:
    // 0x227e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227e0c:
    // 0x227e0c: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_227e10:
    // 0x227e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227e14:
    // 0x227e14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227e18:
    // 0x227e18: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_227e1c:
    // 0x227e1c: 0xc070430  jal         func_1C10C0
label_227e20:
    if (ctx->pc == 0x227E20u) {
        ctx->pc = 0x227E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E1Cu;
        // 0x227e20: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E24u;
        goto label_227e24;
    }
    ctx->pc = 0x227E1Cu;
    SET_GPR_U32(ctx, 31, 0x227E24u);
    ctx->pc = 0x227E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E1Cu;
    // 0x227e20: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    { ctx->pc = 0x1c10c0; return; }
    ctx->pc = 0x227E24u;
label_227e24:
    // 0x227e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227e28:
    // 0x227e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227e2c:
    // 0x227e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227e30:
    // 0x227e30: 0x3e00008  jr          $ra
label_227e34:
    if (ctx->pc == 0x227E34u) {
        ctx->pc = 0x227E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E30u;
        // 0x227e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E38u;
        goto label_227e38;
    }
    ctx->pc = 0x227E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E30u;
        // 0x227e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E38u;
label_227e38:
    // 0x227e38: 0x0  nop
    ctx->pc = 0x227e38u;
    // NOP
label_227e3c:
    // 0x227e3c: 0x0  nop
    ctx->pc = 0x227e3cu;
    // NOP
label_227e40:
    // 0x227e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227e44:
    // 0x227e44: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x227e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_227e48:
    // 0x227e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227e4c:
    // 0x227e4c: 0x2463ea31  addiu       $v1, $v1, -0x15CF
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961713));
label_227e50:
    // 0x227e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227e54:
    // 0x227e54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_227e58:
    // 0x227e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_227e5c:
    // 0x227e5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x227e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227e60:
    // 0x227e60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x227e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_227e64:
    // 0x227e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x227e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_227e68:
    // 0x227e68: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x227e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_227e6c:
    // 0x227e6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_227e70:
    if (ctx->pc == 0x227E70u) {
        ctx->pc = 0x227E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E6Cu;
        // 0x227e70: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E74u;
        goto label_227e74;
    }
    ctx->pc = 0x227E6Cu;
    {
        const bool branch_taken_0x227e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E6Cu;
        // 0x227e70: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e6c) {
            ctx->pc = 0x227E88u;
            goto label_227e88;
        }
    }
    ctx->pc = 0x227E74u;
label_227e74:
    // 0x227e74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227e78:
    // 0x227e78: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_227e7c:
    // 0x227e7c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_227e80:
    // 0x227e80: 0xc05b4d4  jal         func_16D350
label_227e84:
    if (ctx->pc == 0x227E84u) {
        ctx->pc = 0x227E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E80u;
        // 0x227e84: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227E88u;
        goto label_227e88;
    }
    ctx->pc = 0x227E80u;
    SET_GPR_U32(ctx, 31, 0x227E88u);
    ctx->pc = 0x227E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E80u;
    // 0x227e84: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227E80u, 0x227E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E88u;
label_227e88:
    // 0x227e88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227e8c:
    // 0x227e8c: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x227e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_227e90:
    // 0x227e90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_227e94:
    if (ctx->pc == 0x227E94u) {
        ctx->pc = 0x227E98u;
        goto label_227e98;
    }
    ctx->pc = 0x227E90u;
    {
        const bool branch_taken_0x227e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227e90) {
            ctx->pc = 0x227EC0u;
            goto label_227ec0;
        }
    }
    ctx->pc = 0x227E98u;
label_227e98:
    // 0x227e98: 0xc05b63c  jal         func_16D8F0
label_227e9c:
    if (ctx->pc == 0x227E9Cu) {
        ctx->pc = 0x227EA0u;
        goto label_227ea0;
    }
    ctx->pc = 0x227E98u;
    SET_GPR_U32(ctx, 31, 0x227EA0u);
    ctx->pc = 0x16D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D8F0u, 0x227E98u, 0x227EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EA0u;
label_227ea0:
    // 0x227ea0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x227ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_227ea4:
    // 0x227ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227ea8:
    // 0x227ea8: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_227eac:
    // 0x227eac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_227eb0:
    // 0x227eb0: 0xc05b4d4  jal         func_16D350
label_227eb4:
    if (ctx->pc == 0x227EB4u) {
        ctx->pc = 0x227EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB0u;
        // 0x227eb4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EB8u;
        goto label_227eb8;
    }
    ctx->pc = 0x227EB0u;
    SET_GPR_U32(ctx, 31, 0x227EB8u);
    ctx->pc = 0x227EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EB0u;
    // 0x227eb4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227EB0u, 0x227EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EB8u;
label_227eb8:
    // 0x227eb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_227ebc:
    if (ctx->pc == 0x227EBCu) {
        ctx->pc = 0x227EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB8u;
        // 0x227ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EC0u;
        goto label_227ec0;
    }
    ctx->pc = 0x227EB8u;
    {
        const bool branch_taken_0x227eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EB8u;
        // 0x227ebc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227eb8) {
            ctx->pc = 0x227ED4u;
            goto label_227ed4;
        }
    }
    ctx->pc = 0x227EC0u;
label_227ec0:
    // 0x227ec0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227ec4:
    // 0x227ec4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227ec8:
    // 0x227ec8: 0xc05d988  jal         func_176620
label_227ecc:
    if (ctx->pc == 0x227ECCu) {
        ctx->pc = 0x227ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EC8u;
        // 0x227ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227ED0u;
        goto label_227ed0;
    }
    ctx->pc = 0x227EC8u;
    SET_GPR_U32(ctx, 31, 0x227ED0u);
    ctx->pc = 0x227ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EC8u;
    // 0x227ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227EC8u, 0x227ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ED0u;
label_227ed0:
    // 0x227ed0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227ed4:
    // 0x227ed4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_227ed8:
    // 0x227ed8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227edc:
    // 0x227edc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227ee0:
    // 0x227ee0: 0xc072ecc  jal         func_1CBB30
label_227ee4:
    if (ctx->pc == 0x227EE4u) {
        ctx->pc = 0x227EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EE0u;
        // 0x227ee4: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227EE8u;
        goto label_227ee8;
    }
    ctx->pc = 0x227EE0u;
    SET_GPR_U32(ctx, 31, 0x227EE8u);
    ctx->pc = 0x227EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EE0u;
    // 0x227ee4: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    { ctx->pc = 0x1cbb30; return; }
    ctx->pc = 0x227EE8u;
label_227ee8:
    // 0x227ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227eec:
    // 0x227eec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227ef0:
    // 0x227ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_227ef4:
    // 0x227ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227ef8:
    // 0x227ef8: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_227efc:
    // 0x227efc: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x227efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
label_227f00:
    // 0x227f00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227f04:
    // 0x227f04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_227f08:
    // 0x227f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227f0c:
    // 0x227f0c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x227f0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_227f10:
    // 0x227f10: 0xc070430  jal         func_1C10C0
label_227f14:
    if (ctx->pc == 0x227F14u) {
        ctx->pc = 0x227F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F10u;
        // 0x227f14: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F18u;
        goto label_227f18;
    }
    ctx->pc = 0x227F10u;
    SET_GPR_U32(ctx, 31, 0x227F18u);
    ctx->pc = 0x227F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F10u;
    // 0x227f14: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    { ctx->pc = 0x1c10c0; return; }
    ctx->pc = 0x227F18u;
label_227f18:
    // 0x227f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227f1c:
    // 0x227f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227f20:
    // 0x227f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227f24:
    // 0x227f24: 0x3e00008  jr          $ra
label_227f28:
    if (ctx->pc == 0x227F28u) {
        ctx->pc = 0x227F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F24u;
        // 0x227f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F2Cu;
        goto label_227f2c;
    }
    ctx->pc = 0x227F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F24u;
        // 0x227f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F2Cu;
label_227f2c:
    // 0x227f2c: 0x0  nop
    ctx->pc = 0x227f2cu;
    // NOP
label_227f30:
    // 0x227f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_227f34:
    // 0x227f34: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x227f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_227f38:
    // 0x227f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_227f3c:
    // 0x227f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227f40:
    // 0x227f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227f44:
    // 0x227f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x227f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227f48:
    // 0x227f48: 0xa02099b0  sb          $zero, -0x6650($at)
    ctx->pc = 0x227f48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294941104), (uint8_t)GPR_U32(ctx, 0));
label_227f4c:
    // 0x227f4c: 0xaf8092e8  sw          $zero, -0x6D18($gp)
    ctx->pc = 0x227f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 0));
label_227f50:
    // 0x227f50: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x227f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_227f54:
    // 0x227f54: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x227f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_227f58:
    // 0x227f58: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
label_227f5c:
    // 0x227f5c: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x227f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_227f60:
    // 0x227f60: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x227f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_227f64:
    // 0x227f64: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x227f64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_227f68:
    // 0x227f68: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x227f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_227f6c:
    // 0x227f6c: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x227f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
label_227f70:
    // 0x227f70: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_227f74:
    // 0x227f74: 0xad050020  sw          $a1, 0x20($t0)
    ctx->pc = 0x227f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 5));
label_227f78:
    // 0x227f78: 0xad050030  sw          $a1, 0x30($t0)
    ctx->pc = 0x227f78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 5));
label_227f7c:
    // 0x227f7c: 0xad050040  sw          $a1, 0x40($t0)
    ctx->pc = 0x227f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 5));
label_227f80:
    // 0x227f80: 0xad050050  sw          $a1, 0x50($t0)
    ctx->pc = 0x227f80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 5));
label_227f84:
    // 0x227f84: 0xad050060  sw          $a1, 0x60($t0)
    ctx->pc = 0x227f84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 5));
label_227f88:
    // 0x227f88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_227f8c:
    if (ctx->pc == 0x227F8Cu) {
        ctx->pc = 0x227F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F88u;
        // 0x227f8c: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227F90u;
        goto label_227f90;
    }
    ctx->pc = 0x227F88u;
    {
        const bool branch_taken_0x227f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F88u;
        // 0x227f8c: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f88) {
            ctx->pc = 0x227F5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227f5c;
        }
    }
    ctx->pc = 0x227F90u;
label_227f90:
    // 0x227f90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_227f94:
    // 0x227f94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_227f98:
    // 0x227f98: 0x2442eab0  addiu       $v0, $v0, -0x1550
    ctx->pc = 0x227f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961840));
label_227f9c:
    // 0x227f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227fa0:
    // 0x227fa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227fa4:
    // 0x227fa4: 0xc041738  jal         func_105CE0
label_227fa8:
    if (ctx->pc == 0x227FA8u) {
        ctx->pc = 0x227FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FA4u;
        // 0x227fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FACu;
        goto label_227fac;
    }
    ctx->pc = 0x227FA4u;
    SET_GPR_U32(ctx, 31, 0x227FACu);
    ctx->pc = 0x227FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FA4u;
    // 0x227fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x227FA4u, 0x227FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FACu;
label_227fac:
    // 0x227fac: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x227facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_227fb0:
    // 0x227fb0: 0xc070080  jal         func_1C0200
label_227fb4:
    if (ctx->pc == 0x227FB4u) {
        ctx->pc = 0x227FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FB0u;
        // 0x227fb4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FB8u;
        goto label_227fb8;
    }
    ctx->pc = 0x227FB0u;
    SET_GPR_U32(ctx, 31, 0x227FB8u);
    ctx->pc = 0x227FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FB0u;
    // 0x227fb4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x227FB8u;
label_227fb8:
    // 0x227fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227fbc:
    // 0x227fbc: 0xc0416e4  jal         func_105B90
label_227fc0:
    if (ctx->pc == 0x227FC0u) {
        ctx->pc = 0x227FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FBCu;
        // 0x227fc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FC4u;
        goto label_227fc4;
    }
    ctx->pc = 0x227FBCu;
    SET_GPR_U32(ctx, 31, 0x227FC4u);
    ctx->pc = 0x227FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FBCu;
    // 0x227fc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x227FBCu, 0x227FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FC4u;
label_227fc4:
    // 0x227fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227fc8:
    // 0x227fc8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_227fcc:
    // 0x227fcc: 0x24849a70  addiu       $a0, $a0, -0x6590
    ctx->pc = 0x227fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941296));
label_227fd0:
    // 0x227fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x227fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227fd4:
    // 0x227fd4: 0xc08e93e  jal         func_23A4F8
label_227fd8:
    if (ctx->pc == 0x227FD8u) {
        ctx->pc = 0x227FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FD4u;
        // 0x227fd8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FDCu;
        goto label_227fdc;
    }
    ctx->pc = 0x227FD4u;
    SET_GPR_U32(ctx, 31, 0x227FDCu);
    ctx->pc = 0x227FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FD4u;
    // 0x227fd8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x227FDCu;
label_227fdc:
    // 0x227fdc: 0xc070038  jal         func_1C00E0
label_227fe0:
    if (ctx->pc == 0x227FE0u) {
        ctx->pc = 0x227FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FDCu;
        // 0x227fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FE4u;
        goto label_227fe4;
    }
    ctx->pc = 0x227FDCu;
    SET_GPR_U32(ctx, 31, 0x227FE4u);
    ctx->pc = 0x227FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FDCu;
    // 0x227fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x227FE4u;
label_227fe4:
    // 0x227fe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227fe8:
    // 0x227fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227fec:
    // 0x227fec: 0x3e00008  jr          $ra
label_227ff0:
    if (ctx->pc == 0x227FF0u) {
        ctx->pc = 0x227FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FECu;
        // 0x227ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227FF4u;
        goto label_227ff4;
    }
    ctx->pc = 0x227FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FECu;
        // 0x227ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FF4u;
label_227ff4:
    // 0x227ff4: 0x0  nop
    ctx->pc = 0x227ff4u;
    // NOP
label_227ff8:
    // 0x227ff8: 0x0  nop
    ctx->pc = 0x227ff8u;
    // NOP
label_227ffc:
    // 0x227ffc: 0x0  nop
    ctx->pc = 0x227ffcu;
    // NOP
label_228000:
    // 0x228000: 0x3e00008  jr          $ra
label_228004:
    if (ctx->pc == 0x228004u) {
        ctx->pc = 0x228004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228000u;
        // 0x228004: 0x8f8292e8  lw          $v0, -0x6D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228008u;
        goto label_228008;
    }
    ctx->pc = 0x228000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228000u;
        // 0x228004: 0x8f8292e8  lw          $v0, -0x6D18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939368)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228008u;
label_228008:
    // 0x228008: 0x0  nop
    ctx->pc = 0x228008u;
    // NOP
label_22800c:
    // 0x22800c: 0x0  nop
    ctx->pc = 0x22800cu;
    // NOP
label_228010:
    // 0x228010: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x228010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_228014:
    // 0x228014: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x228014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_228018:
    // 0x228018: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x228018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
label_22801c:
    // 0x22801c: 0x3e00008  jr          $ra
label_228020:
    if (ctx->pc == 0x228020u) {
        ctx->pc = 0x228020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22801Cu;
        // 0x228020: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228024u;
        goto label_228024;
    }
    ctx->pc = 0x22801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22801Cu;
        // 0x228020: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228024u;
label_228024:
    // 0x228024: 0x0  nop
    ctx->pc = 0x228024u;
    // NOP
label_228028:
    // 0x228028: 0x0  nop
    ctx->pc = 0x228028u;
    // NOP
label_22802c:
    // 0x22802c: 0x0  nop
    ctx->pc = 0x22802cu;
    // NOP
label_228030:
    // 0x228030: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x228030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_228034:
    // 0x228034: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x228034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_228038:
    // 0x228038: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x228038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22803c:
    // 0x22803c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_228040:
    // 0x228040: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x228040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_228044:
    // 0x228044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x228044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_228048:
    // 0x228048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22804c:
    // 0x22804c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_228050:
    // 0x228050: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228054:
    // 0x228054: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228058:
    // 0x228058: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x228058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22805c:
    // 0x22805c: 0x2442ed70  addiu       $v0, $v0, -0x1290
    ctx->pc = 0x22805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962544));
label_228060:
    // 0x228060: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x228060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_228064:
    // 0x228064: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x228064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_228068:
    // 0x228068: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x228068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_22806c:
    // 0x22806c: 0xc044934  jal         func_1124D0
label_228070:
    if (ctx->pc == 0x228070u) {
        ctx->pc = 0x228070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22806Cu;
        // 0x228070: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228074u;
        goto label_228074;
    }
    ctx->pc = 0x22806Cu;
    SET_GPR_U32(ctx, 31, 0x228074u);
    ctx->pc = 0x228070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22806Cu;
    // 0x228070: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x22806Cu, 0x228074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228074u;
label_228074:
    // 0x228074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_228078:
    // 0x228078: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x228078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_22807c:
    // 0x22807c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_228080:
    if (ctx->pc == 0x228080u) {
        ctx->pc = 0x228080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22807Cu;
        // 0x228080: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228084u;
        goto label_228084;
    }
    ctx->pc = 0x22807Cu;
    {
        const bool branch_taken_0x22807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22807Cu;
        // 0x228080: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22807c) {
            ctx->pc = 0x228058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228058;
        }
    }
    ctx->pc = 0x228084u;
label_228084:
    // 0x228084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228088:
    // 0x228088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22808c:
    // 0x22808c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_228090:
    // 0x228090: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x228090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
label_228094:
    // 0x228094: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x228094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_228098:
    // 0x228098: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x228098u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22809c:
    // 0x22809c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x22809cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2280a0:
    // 0x2280a0: 0xc044934  jal         func_1124D0
label_2280a4:
    if (ctx->pc == 0x2280A4u) {
        ctx->pc = 0x2280A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280A0u;
        // 0x2280a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2280A8u;
        { ctx->pc = 0x2280a8; return; }
    }
    ctx->pc = 0x2280A0u;
    SET_GPR_U32(ctx, 31, 0x2280A8u);
    ctx->pc = 0x2280A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280A0u;
    // 0x2280a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x2280A0u, 0x2280A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280A8u;
    ctx->pc = 0x2280a8u;
    return;
}
