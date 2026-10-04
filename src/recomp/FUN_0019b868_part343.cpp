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


void FUN_0019b868_part343(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x242848u: goto label_242848;
        case 0x24284cu: goto label_24284c;
        case 0x242850u: goto label_242850;
        case 0x242854u: goto label_242854;
        case 0x242858u: goto label_242858;
        case 0x24285cu: goto label_24285c;
        case 0x242860u: goto label_242860;
        case 0x242864u: goto label_242864;
        case 0x242868u: goto label_242868;
        case 0x24286cu: goto label_24286c;
        case 0x242870u: goto label_242870;
        case 0x242874u: goto label_242874;
        case 0x242878u: goto label_242878;
        case 0x24287cu: goto label_24287c;
        case 0x242880u: goto label_242880;
        case 0x242884u: goto label_242884;
        case 0x242888u: goto label_242888;
        case 0x24288cu: goto label_24288c;
        case 0x242890u: goto label_242890;
        case 0x242894u: goto label_242894;
        case 0x242898u: goto label_242898;
        case 0x24289cu: goto label_24289c;
        case 0x2428a0u: goto label_2428a0;
        case 0x2428a4u: goto label_2428a4;
        case 0x2428a8u: goto label_2428a8;
        case 0x2428acu: goto label_2428ac;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428b4u: goto label_2428b4;
        case 0x2428b8u: goto label_2428b8;
        case 0x2428bcu: goto label_2428bc;
        case 0x2428c0u: goto label_2428c0;
        case 0x2428c4u: goto label_2428c4;
        case 0x2428c8u: goto label_2428c8;
        case 0x2428ccu: goto label_2428cc;
        case 0x2428d0u: goto label_2428d0;
        case 0x2428d4u: goto label_2428d4;
        case 0x2428d8u: goto label_2428d8;
        case 0x2428dcu: goto label_2428dc;
        case 0x2428e0u: goto label_2428e0;
        case 0x2428e4u: goto label_2428e4;
        case 0x2428e8u: goto label_2428e8;
        case 0x2428ecu: goto label_2428ec;
        case 0x2428f0u: goto label_2428f0;
        case 0x2428f4u: goto label_2428f4;
        case 0x2428f8u: goto label_2428f8;
        case 0x2428fcu: goto label_2428fc;
        case 0x242900u: goto label_242900;
        case 0x242904u: goto label_242904;
        case 0x242908u: goto label_242908;
        case 0x24290cu: goto label_24290c;
        case 0x242910u: goto label_242910;
        case 0x242914u: goto label_242914;
        case 0x242918u: goto label_242918;
        case 0x24291cu: goto label_24291c;
        case 0x242920u: goto label_242920;
        case 0x242924u: goto label_242924;
        case 0x242928u: goto label_242928;
        case 0x24292cu: goto label_24292c;
        case 0x242930u: goto label_242930;
        case 0x242934u: goto label_242934;
        case 0x242938u: goto label_242938;
        case 0x24293cu: goto label_24293c;
        case 0x242940u: goto label_242940;
        case 0x242944u: goto label_242944;
        case 0x242948u: goto label_242948;
        case 0x24294cu: goto label_24294c;
        case 0x242950u: goto label_242950;
        case 0x242954u: goto label_242954;
        case 0x242958u: goto label_242958;
        case 0x24295cu: goto label_24295c;
        case 0x242960u: goto label_242960;
        case 0x242964u: goto label_242964;
        case 0x242968u: goto label_242968;
        case 0x24296cu: goto label_24296c;
        case 0x242970u: goto label_242970;
        case 0x242974u: goto label_242974;
        case 0x242978u: goto label_242978;
        case 0x24297cu: goto label_24297c;
        case 0x242980u: goto label_242980;
        case 0x242984u: goto label_242984;
        case 0x242988u: goto label_242988;
        case 0x24298cu: goto label_24298c;
        case 0x242990u: goto label_242990;
        case 0x242994u: goto label_242994;
        case 0x242998u: goto label_242998;
        case 0x24299cu: goto label_24299c;
        case 0x2429a0u: goto label_2429a0;
        case 0x2429a4u: goto label_2429a4;
        case 0x2429a8u: goto label_2429a8;
        case 0x2429acu: goto label_2429ac;
        case 0x2429b0u: goto label_2429b0;
        case 0x2429b4u: goto label_2429b4;
        case 0x2429b8u: goto label_2429b8;
        case 0x2429bcu: goto label_2429bc;
        case 0x2429c0u: goto label_2429c0;
        case 0x2429c4u: goto label_2429c4;
        case 0x2429c8u: goto label_2429c8;
        case 0x2429ccu: goto label_2429cc;
        case 0x2429d0u: goto label_2429d0;
        case 0x2429d4u: goto label_2429d4;
        case 0x2429d8u: goto label_2429d8;
        case 0x2429dcu: goto label_2429dc;
        case 0x2429e0u: goto label_2429e0;
        case 0x2429e4u: goto label_2429e4;
        case 0x2429e8u: goto label_2429e8;
        case 0x2429ecu: goto label_2429ec;
        case 0x2429f0u: goto label_2429f0;
        case 0x2429f4u: goto label_2429f4;
        case 0x2429f8u: goto label_2429f8;
        case 0x2429fcu: goto label_2429fc;
        case 0x242a00u: goto label_242a00;
        case 0x242a04u: goto label_242a04;
        case 0x242a08u: goto label_242a08;
        case 0x242a0cu: goto label_242a0c;
        case 0x242a10u: goto label_242a10;
        case 0x242a14u: goto label_242a14;
        case 0x242a18u: goto label_242a18;
        case 0x242a1cu: goto label_242a1c;
        case 0x242a20u: goto label_242a20;
        case 0x242a24u: goto label_242a24;
        case 0x242a28u: goto label_242a28;
        case 0x242a2cu: goto label_242a2c;
        case 0x242a30u: goto label_242a30;
        case 0x242a34u: goto label_242a34;
        case 0x242a38u: goto label_242a38;
        case 0x242a3cu: goto label_242a3c;
        case 0x242a40u: goto label_242a40;
        case 0x242a44u: goto label_242a44;
        case 0x242a48u: goto label_242a48;
        case 0x242a4cu: goto label_242a4c;
        case 0x242a50u: goto label_242a50;
        case 0x242a54u: goto label_242a54;
        case 0x242a58u: goto label_242a58;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a60u: goto label_242a60;
        case 0x242a64u: goto label_242a64;
        case 0x242a68u: goto label_242a68;
        case 0x242a6cu: goto label_242a6c;
        case 0x242a70u: goto label_242a70;
        case 0x242a74u: goto label_242a74;
        case 0x242a78u: goto label_242a78;
        case 0x242a7cu: goto label_242a7c;
        case 0x242a80u: goto label_242a80;
        case 0x242a84u: goto label_242a84;
        case 0x242a88u: goto label_242a88;
        case 0x242a8cu: goto label_242a8c;
        case 0x242a90u: goto label_242a90;
        case 0x242a94u: goto label_242a94;
        case 0x242a98u: goto label_242a98;
        case 0x242a9cu: goto label_242a9c;
        case 0x242aa0u: goto label_242aa0;
        case 0x242aa4u: goto label_242aa4;
        case 0x242aa8u: goto label_242aa8;
        case 0x242aacu: goto label_242aac;
        case 0x242ab0u: goto label_242ab0;
        case 0x242ab4u: goto label_242ab4;
        case 0x242ab8u: goto label_242ab8;
        case 0x242abcu: goto label_242abc;
        case 0x242ac0u: goto label_242ac0;
        case 0x242ac4u: goto label_242ac4;
        case 0x242ac8u: goto label_242ac8;
        case 0x242accu: goto label_242acc;
        case 0x242ad0u: goto label_242ad0;
        case 0x242ad4u: goto label_242ad4;
        case 0x242ad8u: goto label_242ad8;
        case 0x242adcu: goto label_242adc;
        case 0x242ae0u: goto label_242ae0;
        case 0x242ae4u: goto label_242ae4;
        case 0x242ae8u: goto label_242ae8;
        case 0x242aecu: goto label_242aec;
        case 0x242af0u: goto label_242af0;
        case 0x242af4u: goto label_242af4;
        case 0x242af8u: goto label_242af8;
        case 0x242afcu: goto label_242afc;
        case 0x242b00u: goto label_242b00;
        case 0x242b04u: goto label_242b04;
        case 0x242b08u: goto label_242b08;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b10u: goto label_242b10;
        case 0x242b14u: goto label_242b14;
        case 0x242b18u: goto label_242b18;
        case 0x242b1cu: goto label_242b1c;
        case 0x242b20u: goto label_242b20;
        case 0x242b24u: goto label_242b24;
        case 0x242b28u: goto label_242b28;
        case 0x242b2cu: goto label_242b2c;
        case 0x242b30u: goto label_242b30;
        case 0x242b34u: goto label_242b34;
        case 0x242b38u: goto label_242b38;
        case 0x242b3cu: goto label_242b3c;
        case 0x242b40u: goto label_242b40;
        case 0x242b44u: goto label_242b44;
        case 0x242b48u: goto label_242b48;
        case 0x242b4cu: goto label_242b4c;
        case 0x242b50u: goto label_242b50;
        case 0x242b54u: goto label_242b54;
        case 0x242b58u: goto label_242b58;
        case 0x242b5cu: goto label_242b5c;
        case 0x242b60u: goto label_242b60;
        case 0x242b64u: goto label_242b64;
        case 0x242b68u: goto label_242b68;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b70u: goto label_242b70;
        case 0x242b74u: goto label_242b74;
        case 0x242b78u: goto label_242b78;
        case 0x242b7cu: goto label_242b7c;
        case 0x242b80u: goto label_242b80;
        case 0x242b84u: goto label_242b84;
        case 0x242b88u: goto label_242b88;
        case 0x242b8cu: goto label_242b8c;
        case 0x242b90u: goto label_242b90;
        case 0x242b94u: goto label_242b94;
        case 0x242b98u: goto label_242b98;
        case 0x242b9cu: goto label_242b9c;
        case 0x242ba0u: goto label_242ba0;
        case 0x242ba4u: goto label_242ba4;
        case 0x242ba8u: goto label_242ba8;
        case 0x242bacu: goto label_242bac;
        case 0x242bb0u: goto label_242bb0;
        case 0x242bb4u: goto label_242bb4;
        case 0x242bb8u: goto label_242bb8;
        case 0x242bbcu: goto label_242bbc;
        case 0x242bc0u: goto label_242bc0;
        case 0x242bc4u: goto label_242bc4;
        case 0x242bc8u: goto label_242bc8;
        case 0x242bccu: goto label_242bcc;
        case 0x242bd0u: goto label_242bd0;
        case 0x242bd4u: goto label_242bd4;
        case 0x242bd8u: goto label_242bd8;
        case 0x242bdcu: goto label_242bdc;
        case 0x242be0u: goto label_242be0;
        case 0x242be4u: goto label_242be4;
        case 0x242be8u: goto label_242be8;
        case 0x242becu: goto label_242bec;
        case 0x242bf0u: goto label_242bf0;
        case 0x242bf4u: goto label_242bf4;
        case 0x242bf8u: goto label_242bf8;
        case 0x242bfcu: goto label_242bfc;
        case 0x242c00u: goto label_242c00;
        case 0x242c04u: goto label_242c04;
        case 0x242c08u: goto label_242c08;
        case 0x242c0cu: goto label_242c0c;
        case 0x242c10u: goto label_242c10;
        case 0x242c14u: goto label_242c14;
        case 0x242c18u: goto label_242c18;
        case 0x242c1cu: goto label_242c1c;
        case 0x242c20u: goto label_242c20;
        case 0x242c24u: goto label_242c24;
        case 0x242c28u: goto label_242c28;
        case 0x242c2cu: goto label_242c2c;
        case 0x242c30u: goto label_242c30;
        case 0x242c34u: goto label_242c34;
        case 0x242c38u: goto label_242c38;
        case 0x242c3cu: goto label_242c3c;
        case 0x242c40u: goto label_242c40;
        case 0x242c44u: goto label_242c44;
        case 0x242c48u: goto label_242c48;
        case 0x242c4cu: goto label_242c4c;
        case 0x242c50u: goto label_242c50;
        case 0x242c54u: goto label_242c54;
        case 0x242c58u: goto label_242c58;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c60u: goto label_242c60;
        case 0x242c64u: goto label_242c64;
        case 0x242c68u: goto label_242c68;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c70u: goto label_242c70;
        case 0x242c74u: goto label_242c74;
        case 0x242c78u: goto label_242c78;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c80u: goto label_242c80;
        case 0x242c84u: goto label_242c84;
        case 0x242c88u: goto label_242c88;
        case 0x242c8cu: goto label_242c8c;
        case 0x242c90u: goto label_242c90;
        case 0x242c94u: goto label_242c94;
        case 0x242c98u: goto label_242c98;
        case 0x242c9cu: goto label_242c9c;
        case 0x242ca0u: goto label_242ca0;
        case 0x242ca4u: goto label_242ca4;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cacu: goto label_242cac;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cb4u: goto label_242cb4;
        case 0x242cb8u: goto label_242cb8;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc0u: goto label_242cc0;
        case 0x242cc4u: goto label_242cc4;
        case 0x242cc8u: goto label_242cc8;
        case 0x242cccu: goto label_242ccc;
        case 0x242cd0u: goto label_242cd0;
        case 0x242cd4u: goto label_242cd4;
        case 0x242cd8u: goto label_242cd8;
        case 0x242cdcu: goto label_242cdc;
        case 0x242ce0u: goto label_242ce0;
        case 0x242ce4u: goto label_242ce4;
        case 0x242ce8u: goto label_242ce8;
        case 0x242cecu: goto label_242cec;
        case 0x242cf0u: goto label_242cf0;
        case 0x242cf4u: goto label_242cf4;
        case 0x242cf8u: goto label_242cf8;
        case 0x242cfcu: goto label_242cfc;
        case 0x242d00u: goto label_242d00;
        case 0x242d04u: goto label_242d04;
        case 0x242d08u: goto label_242d08;
        case 0x242d0cu: goto label_242d0c;
        case 0x242d10u: goto label_242d10;
        case 0x242d14u: goto label_242d14;
        case 0x242d18u: goto label_242d18;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d20u: goto label_242d20;
        case 0x242d24u: goto label_242d24;
        case 0x242d28u: goto label_242d28;
        case 0x242d2cu: goto label_242d2c;
        case 0x242d30u: goto label_242d30;
        case 0x242d34u: goto label_242d34;
        case 0x242d38u: goto label_242d38;
        case 0x242d3cu: goto label_242d3c;
        case 0x242d40u: goto label_242d40;
        case 0x242d44u: goto label_242d44;
        case 0x242d48u: goto label_242d48;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d50u: goto label_242d50;
        case 0x242d54u: goto label_242d54;
        case 0x242d58u: goto label_242d58;
        case 0x242d5cu: goto label_242d5c;
        case 0x242d60u: goto label_242d60;
        case 0x242d64u: goto label_242d64;
        case 0x242d68u: goto label_242d68;
        case 0x242d6cu: goto label_242d6c;
        case 0x242d70u: goto label_242d70;
        case 0x242d74u: goto label_242d74;
        case 0x242d78u: goto label_242d78;
        case 0x242d7cu: goto label_242d7c;
        case 0x242d80u: goto label_242d80;
        case 0x242d84u: goto label_242d84;
        case 0x242d88u: goto label_242d88;
        case 0x242d8cu: goto label_242d8c;
        case 0x242d90u: goto label_242d90;
        case 0x242d94u: goto label_242d94;
        case 0x242d98u: goto label_242d98;
        case 0x242d9cu: goto label_242d9c;
        case 0x242da0u: goto label_242da0;
        case 0x242da4u: goto label_242da4;
        case 0x242da8u: goto label_242da8;
        case 0x242dacu: goto label_242dac;
        case 0x242db0u: goto label_242db0;
        case 0x242db4u: goto label_242db4;
        case 0x242db8u: goto label_242db8;
        case 0x242dbcu: goto label_242dbc;
        case 0x242dc0u: goto label_242dc0;
        case 0x242dc4u: goto label_242dc4;
        case 0x242dc8u: goto label_242dc8;
        case 0x242dccu: goto label_242dcc;
        case 0x242dd0u: goto label_242dd0;
        case 0x242dd4u: goto label_242dd4;
        case 0x242dd8u: goto label_242dd8;
        case 0x242ddcu: goto label_242ddc;
        case 0x242de0u: goto label_242de0;
        case 0x242de4u: goto label_242de4;
        case 0x242de8u: goto label_242de8;
        case 0x242decu: goto label_242dec;
        case 0x242df0u: goto label_242df0;
        case 0x242df4u: goto label_242df4;
        case 0x242df8u: goto label_242df8;
        case 0x242dfcu: goto label_242dfc;
        case 0x242e00u: goto label_242e00;
        case 0x242e04u: goto label_242e04;
        case 0x242e08u: goto label_242e08;
        case 0x242e0cu: goto label_242e0c;
        case 0x242e10u: goto label_242e10;
        case 0x242e14u: goto label_242e14;
        case 0x242e18u: goto label_242e18;
        case 0x242e1cu: goto label_242e1c;
        case 0x242e20u: goto label_242e20;
        case 0x242e24u: goto label_242e24;
        case 0x242e28u: goto label_242e28;
        case 0x242e2cu: goto label_242e2c;
        case 0x242e30u: goto label_242e30;
        case 0x242e34u: goto label_242e34;
        case 0x242e38u: goto label_242e38;
        case 0x242e3cu: goto label_242e3c;
        case 0x242e40u: goto label_242e40;
        case 0x242e44u: goto label_242e44;
        case 0x242e48u: goto label_242e48;
        case 0x242e4cu: goto label_242e4c;
        case 0x242e50u: goto label_242e50;
        case 0x242e54u: goto label_242e54;
        case 0x242e58u: goto label_242e58;
        case 0x242e5cu: goto label_242e5c;
        case 0x242e60u: goto label_242e60;
        case 0x242e64u: goto label_242e64;
        case 0x242e68u: goto label_242e68;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e70u: goto label_242e70;
        case 0x242e74u: goto label_242e74;
        case 0x242e78u: goto label_242e78;
        case 0x242e7cu: goto label_242e7c;
        case 0x242e80u: goto label_242e80;
        case 0x242e84u: goto label_242e84;
        case 0x242e88u: goto label_242e88;
        case 0x242e8cu: goto label_242e8c;
        case 0x242e90u: goto label_242e90;
        case 0x242e94u: goto label_242e94;
        case 0x242e98u: goto label_242e98;
        case 0x242e9cu: goto label_242e9c;
        case 0x242ea0u: goto label_242ea0;
        case 0x242ea4u: goto label_242ea4;
        case 0x242ea8u: goto label_242ea8;
        case 0x242eacu: goto label_242eac;
        case 0x242eb0u: goto label_242eb0;
        case 0x242eb4u: goto label_242eb4;
        case 0x242eb8u: goto label_242eb8;
        case 0x242ebcu: goto label_242ebc;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ec4u: goto label_242ec4;
        case 0x242ec8u: goto label_242ec8;
        case 0x242eccu: goto label_242ecc;
        case 0x242ed0u: goto label_242ed0;
        case 0x242ed4u: goto label_242ed4;
        case 0x242ed8u: goto label_242ed8;
        case 0x242edcu: goto label_242edc;
        case 0x242ee0u: goto label_242ee0;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ee8u: goto label_242ee8;
        case 0x242eecu: goto label_242eec;
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        case 0x242f00u: goto label_242f00;
        case 0x242f04u: goto label_242f04;
        case 0x242f08u: goto label_242f08;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f10u: goto label_242f10;
        case 0x242f14u: goto label_242f14;
        case 0x242f18u: goto label_242f18;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f20u: goto label_242f20;
        case 0x242f24u: goto label_242f24;
        case 0x242f28u: goto label_242f28;
        case 0x242f2cu: goto label_242f2c;
        case 0x242f30u: goto label_242f30;
        case 0x242f34u: goto label_242f34;
        case 0x242f38u: goto label_242f38;
        case 0x242f3cu: goto label_242f3c;
        case 0x242f40u: goto label_242f40;
        case 0x242f44u: goto label_242f44;
        case 0x242f48u: goto label_242f48;
        case 0x242f4cu: goto label_242f4c;
        case 0x242f50u: goto label_242f50;
        case 0x242f54u: goto label_242f54;
        case 0x242f58u: goto label_242f58;
        case 0x242f5cu: goto label_242f5c;
        case 0x242f60u: goto label_242f60;
        case 0x242f64u: goto label_242f64;
        case 0x242f68u: goto label_242f68;
        case 0x242f6cu: goto label_242f6c;
        case 0x242f70u: goto label_242f70;
        case 0x242f74u: goto label_242f74;
        case 0x242f78u: goto label_242f78;
        case 0x242f7cu: goto label_242f7c;
        case 0x242f80u: goto label_242f80;
        case 0x242f84u: goto label_242f84;
        case 0x242f88u: goto label_242f88;
        case 0x242f8cu: goto label_242f8c;
        case 0x242f90u: goto label_242f90;
        case 0x242f94u: goto label_242f94;
        case 0x242f98u: goto label_242f98;
        case 0x242f9cu: goto label_242f9c;
        case 0x242fa0u: goto label_242fa0;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fa8u: goto label_242fa8;
        case 0x242facu: goto label_242fac;
        case 0x242fb0u: goto label_242fb0;
        case 0x242fb4u: goto label_242fb4;
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        default: return;
    }

label_242848:
    // 0x242848: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24284c:
    // 0x24284c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_242850:
    // 0x242850: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_242854:
    if (ctx->pc == 0x242854u) {
        ctx->pc = 0x242854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242850u;
        // 0x242854: 0x247202c0  addiu       $s2, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242858u;
        goto label_242858;
    }
    ctx->pc = 0x242850u;
    {
        const bool branch_taken_0x242850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242850u;
        // 0x242854: 0x247202c0  addiu       $s2, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242850) {
            ctx->pc = 0x242884u;
            goto label_242884;
        }
    }
    ctx->pc = 0x242858u;
label_242858:
    // 0x242858: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24285c:
    // 0x24285c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24285cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_242860:
    // 0x242860: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_242864:
    // 0x242864: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_242868:
    if (ctx->pc == 0x242868u) {
        ctx->pc = 0x242868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242864u;
        // 0x242868: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24286Cu;
        goto label_24286c;
    }
    ctx->pc = 0x242864u;
    {
        const bool branch_taken_0x242864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x242868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242864u;
        // 0x242868: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242864) {
            ctx->pc = 0x242884u;
            goto label_242884;
        }
    }
    ctx->pc = 0x24286Cu;
label_24286c:
    // 0x24286c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_242870:
    // 0x242870: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
label_242874:
    // 0x242874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_242878:
    if (ctx->pc == 0x242878u) {
        ctx->pc = 0x242878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242874u;
        // 0x242878: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24287Cu;
        goto label_24287c;
    }
    ctx->pc = 0x242874u;
    {
        const bool branch_taken_0x242874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242874u;
        // 0x242878: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242874) {
            ctx->pc = 0x242884u;
            goto label_242884;
        }
    }
    ctx->pc = 0x24287Cu;
label_24287c:
    // 0x24287c: 0x10000003  b           . + 4 + (0x3 << 2)
label_242880:
    if (ctx->pc == 0x242880u) {
        ctx->pc = 0x242884u;
        goto label_242884;
    }
    ctx->pc = 0x24287Cu;
    {
        const bool branch_taken_0x24287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24287c) {
            ctx->pc = 0x24288Cu;
            goto label_24288c;
        }
    }
    ctx->pc = 0x242884u;
label_242884:
    // 0x242884: 0x0  nop
    ctx->pc = 0x242884u;
    // NOP
label_242888:
    // 0x242888: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24288c:
    // 0x24288c: 0x0  nop
    ctx->pc = 0x24288cu;
    // NOP
label_242890:
    // 0x242890: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
label_242894:
    if (ctx->pc == 0x242894u) {
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242890u;
        // 0x242894: 0x32650001  andi        $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242898u;
        goto label_242898;
    }
    ctx->pc = 0x242890u;
    {
        const bool branch_taken_0x242890 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x242894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242890u;
        // 0x242894: 0x32650001  andi        $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242890) {
            ctx->pc = 0x2428A4u;
            goto label_2428a4;
        }
    }
    ctx->pc = 0x242898u;
label_242898:
    // 0x242898: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_24289c:
    if (ctx->pc == 0x24289Cu) {
        ctx->pc = 0x24289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242898u;
        // 0x24289c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428A0u;
        goto label_2428a0;
    }
    ctx->pc = 0x242898u;
    {
        const bool branch_taken_0x242898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242898u;
        // 0x24289c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242898) {
            ctx->pc = 0x2428A8u;
            goto label_2428a8;
        }
    }
    ctx->pc = 0x2428A0u;
label_2428a0:
    // 0x2428a0: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2428a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_2428a4:
    // 0x2428a4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2428a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2428a8:
    // 0x2428a8: 0x268300d4  addiu       $v1, $s4, 0xD4
    ctx->pc = 0x2428a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 212));
label_2428ac:
    // 0x2428ac: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2428acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2428b0:
    // 0x2428b0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2428b4:
    // 0x2428b4: 0x132843  sra         $a1, $s3, 1
    ctx->pc = 0x2428b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 1));
label_2428b8:
    // 0x2428b8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2428bc:
    // 0x2428bc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2428bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2428c0:
    // 0x2428c0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_2428c4:
    if (ctx->pc == 0x2428C4u) {
        ctx->pc = 0x2428C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428C0u;
        // 0x2428c4: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2428C8u;
        goto label_2428c8;
    }
    ctx->pc = 0x2428C0u;
    {
        const bool branch_taken_0x2428c0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2428C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428C0u;
        // 0x2428c4: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2428c0) {
            ctx->pc = 0x2428D0u;
            goto label_2428d0;
        }
    }
    ctx->pc = 0x2428C8u;
label_2428c8:
    // 0x2428c8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2428c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2428cc:
    // 0x2428cc: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x2428ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_2428d0:
    // 0x2428d0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2428d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2428d4:
    // 0x2428d4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2428d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2428d8:
    // 0x2428d8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x2428d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2428dc:
    // 0x2428dc: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x2428dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2428e0:
    // 0x2428e0: 0xa6430090  sh          $v1, 0x90($s2)
    ctx->pc = 0x2428e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 3));
label_2428e4:
    // 0x2428e4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2428e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2428e8:
    // 0x2428e8: 0x24c30032  addiu       $v1, $a2, 0x32
    ctx->pc = 0x2428e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
label_2428ec:
    // 0x2428ec: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x2428ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2428f0:
    // 0x2428f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2428f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2428f4:
    // 0x2428f4: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2428f8:
    // 0x2428f8: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2428fc:
    // 0x2428fc: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_242900:
    // 0x242900: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x242900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_242904:
    // 0x242904: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x242904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_242908:
    // 0x242908: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x242908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_24290c:
    // 0x24290c: 0xa6450092  sh          $a1, 0x92($s2)
    ctx->pc = 0x24290cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 5));
label_242910:
    // 0x242910: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x242910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_242914:
    // 0x242914: 0xae460094  sw          $a2, 0x94($s2)
    ctx->pc = 0x242914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 6));
label_242918:
    // 0x242918: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x242918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_24291c:
    // 0x24291c: 0xa64400a0  sh          $a0, 0xA0($s2)
    ctx->pc = 0x24291cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 4));
label_242920:
    // 0x242920: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242924:
    // 0x242924: 0xa64300a2  sh          $v1, 0xA2($s2)
    ctx->pc = 0x242924u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 3));
label_242928:
    // 0x242928: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x242928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_24292c:
    // 0x24292c: 0xae4600a4  sw          $a2, 0xA4($s2)
    ctx->pc = 0x24292cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 6));
label_242930:
    // 0x242930: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_242934:
    // 0x242934: 0x34664a18  ori         $a2, $v1, 0x4A18
    ctx->pc = 0x242934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18968);
label_242938:
    // 0x242938: 0xa2420080  sb          $v0, 0x80($s2)
    ctx->pc = 0x242938u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 2));
label_24293c:
    // 0x24293c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x24293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_242940:
    // 0x242940: 0xa2420081  sb          $v0, 0x81($s2)
    ctx->pc = 0x242940u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 2));
label_242944:
    // 0x242944: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x242944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_242948:
    // 0x242948: 0xa2420082  sb          $v0, 0x82($s2)
    ctx->pc = 0x242948u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 2));
label_24294c:
    // 0x24294c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_242950:
    // 0x242950: 0xa2450083  sb          $a1, 0x83($s2)
    ctx->pc = 0x242950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 5));
label_242954:
    // 0x242954: 0x24620000  addiu       $v0, $v1, 0x0
    ctx->pc = 0x242954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_242958:
    // 0x242958: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x242958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_24295c:
    // 0x24295c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_242960:
    // 0x242960: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x242960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_242964:
    // 0x242964: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x242964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_242968:
    // 0x242968: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_24296c:
    if (ctx->pc == 0x24296Cu) {
        ctx->pc = 0x242970u;
        goto label_242970;
    }
    ctx->pc = 0x242968u;
    {
        const bool branch_taken_0x242968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x242968) {
            ctx->pc = 0x242980u;
            goto label_242980;
        }
    }
    ctx->pc = 0x242970u;
label_242970:
    // 0x242970: 0xc070ae4  jal         func_1C2B90
label_242974:
    if (ctx->pc == 0x242974u) {
        ctx->pc = 0x242978u;
        goto label_242978;
    }
    ctx->pc = 0x242970u;
    SET_GPR_U32(ctx, 31, 0x242978u);
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x242978u;
label_242978:
    // 0x242978: 0x10000003  b           . + 4 + (0x3 << 2)
label_24297c:
    if (ctx->pc == 0x24297Cu) {
        ctx->pc = 0x242980u;
        goto label_242980;
    }
    ctx->pc = 0x242978u;
    {
        const bool branch_taken_0x242978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242978) {
            ctx->pc = 0x242988u;
            goto label_242988;
        }
    }
    ctx->pc = 0x242980u;
label_242980:
    // 0x242980: 0xc070ae4  jal         func_1C2B90
label_242984:
    if (ctx->pc == 0x242984u) {
        ctx->pc = 0x242984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242980u;
        // 0x242984: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242988u;
        goto label_242988;
    }
    ctx->pc = 0x242980u;
    SET_GPR_U32(ctx, 31, 0x242988u);
    ctx->pc = 0x242984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242980u;
    // 0x242984: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x242988u;
label_242988:
    // 0x242988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x242988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24298c:
    // 0x24298c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242990:
    // 0x242990: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_242994:
    // 0x242994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242998:
    // 0x242998: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24299c:
    // 0x24299c: 0xc066c72  jal         func_19B1C8
label_2429a0:
    if (ctx->pc == 0x2429A0u) {
        ctx->pc = 0x2429A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24299Cu;
        // 0x2429a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429A4u;
        goto label_2429a4;
    }
    ctx->pc = 0x24299Cu;
    SET_GPR_U32(ctx, 31, 0x2429A4u);
    ctx->pc = 0x2429A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24299Cu;
    // 0x2429a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x24299Cu, 0x2429A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429A4u;
label_2429a4:
    // 0x2429a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2429a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2429a8:
    // 0x2429a8: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x2429a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_2429ac:
    // 0x2429ac: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x2429acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_2429b0:
    // 0x2429b0: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_2429b4:
    if (ctx->pc == 0x2429B4u) {
        ctx->pc = 0x2429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429B0u;
        // 0x2429b4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429B8u;
        goto label_2429b8;
    }
    ctx->pc = 0x2429B0u;
    {
        const bool branch_taken_0x2429b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2429B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429B0u;
        // 0x2429b4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429b0) {
            ctx->pc = 0x24281Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x24281c; return; }
        }
    }
    ctx->pc = 0x2429B8u;
label_2429b8:
    // 0x2429b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_2429bc:
    // 0x2429bc: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2429c0:
    // 0x2429c0: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2429c4:
    // 0x2429c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2429c8:
    // 0x2429c8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2429c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2429cc:
    // 0x2429cc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2429ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2429d0:
    // 0x2429d0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2429d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2429d4:
    // 0x2429d4: 0x8c252388  lw          $a1, 0x2388($at)
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
label_2429d8:
    // 0x2429d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2429d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2429dc:
    // 0x2429dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2429e0:
    // 0x2429e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2429e4:
    // 0x2429e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2429e8:
    // 0x2429e8: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x2429e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_2429ec:
    // 0x2429ec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2429f0:
    if (ctx->pc == 0x2429F0u) {
        ctx->pc = 0x2429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ECu;
        // 0x2429f0: 0x24502a80  addiu       $s0, $v0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2429F4u;
        goto label_2429f4;
    }
    ctx->pc = 0x2429ECu;
    {
        const bool branch_taken_0x2429ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ECu;
        // 0x2429f0: 0x24502a80  addiu       $s0, $v0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429ec) {
            ctx->pc = 0x242A10u;
            goto label_242a10;
        }
    }
    ctx->pc = 0x2429F4u;
label_2429f4:
    // 0x2429f4: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x2429f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_2429f8:
    // 0x2429f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2429fc:
    if (ctx->pc == 0x2429FCu) {
        ctx->pc = 0x2429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429F8u;
        // 0x2429fc: 0x41143  sra         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A00u;
        goto label_242a00;
    }
    ctx->pc = 0x2429F8u;
    {
        const bool branch_taken_0x2429f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2429FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429F8u;
        // 0x2429fc: 0x41143  sra         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429f8) {
            ctx->pc = 0x242A08u;
            goto label_242a08;
        }
    }
    ctx->pc = 0x242A00u;
label_242a00:
    // 0x242a00: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_242a04:
    // 0x242a04: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x242a04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_242a08:
    // 0x242a08: 0x10000009  b           . + 4 + (0x9 << 2)
label_242a0c:
    if (ctx->pc == 0x242A0Cu) {
        ctx->pc = 0x242A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A08u;
        // 0x242a0c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A10u;
        goto label_242a10;
    }
    ctx->pc = 0x242A08u;
    {
        const bool branch_taken_0x242a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A08u;
        // 0x242a0c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a08) {
            ctx->pc = 0x242A30u;
            goto label_242a30;
        }
    }
    ctx->pc = 0x242A10u;
label_242a10:
    // 0x242a10: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x242a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_242a14:
    // 0x242a14: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x242a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_242a18:
    // 0x242a18: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x242a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_242a1c:
    // 0x242a1c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_242a20:
    if (ctx->pc == 0x242A20u) {
        ctx->pc = 0x242A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A1Cu;
        // 0x242a20: 0x41143  sra         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A24u;
        goto label_242a24;
    }
    ctx->pc = 0x242A1Cu;
    {
        const bool branch_taken_0x242a1c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x242A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A1Cu;
        // 0x242a20: 0x41143  sra         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a1c) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x242A24u;
label_242a24:
    // 0x242a24: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x242a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_242a28:
    // 0x242a28: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_242a2c:
    // 0x242a2c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x242a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_242a30:
    // 0x242a30: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_242a34:
    // 0x242a34: 0x34842398  ori         $a0, $a0, 0x2398
    ctx->pc = 0x242a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9112);
label_242a38:
    // 0x242a38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x242a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242a3c:
    // 0x242a3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x242a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242a40:
    // 0x242a40: 0x1480002a  bnez        $a0, . + 4 + (0x2A << 2)
label_242a44:
    if (ctx->pc == 0x242A44u) {
        ctx->pc = 0x242A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A40u;
        // 0x242a44: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242A48u;
        goto label_242a48;
    }
    ctx->pc = 0x242A40u;
    {
        const bool branch_taken_0x242a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A40u;
        // 0x242a44: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a40) {
            ctx->pc = 0x242AECu;
            goto label_242aec;
        }
    }
    ctx->pc = 0x242A48u;
label_242a48:
    // 0x242a48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242a4c:
    // 0x242a4c: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x242a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_242a50:
    // 0x242a50: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242a50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242a54:
    // 0x242a54: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x242a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_242a58:
    // 0x242a58: 0x8c262384  lw          $a2, 0x2384($at)
    ctx->pc = 0x242a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_242a5c:
    // 0x242a5c: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_242a60:
    // 0x242a60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242a64:
    // 0x242a64: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x242a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_242a68:
    // 0x242a68: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242a68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242a6c:
    // 0x242a6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_242a70:
    // 0x242a70: 0x8c232394  lw          $v1, 0x2394($at)
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_242a74:
    // 0x242a74: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x242a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_242a78:
    // 0x242a78: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x242a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_242a7c:
    // 0x242a7c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x242a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242a80:
    // 0x242a80: 0x0  nop
    ctx->pc = 0x242a80u;
    // NOP
label_242a84:
    // 0x242a84: 0x0  nop
    ctx->pc = 0x242a84u;
    // NOP
label_242a88:
    // 0x242a88: 0x2010  mfhi        $a0
    ctx->pc = 0x242a88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_242a8c:
    // 0x242a8c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x242a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242a90:
    // 0x242a90: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x242a90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_242a94:
    // 0x242a94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x242a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_242a98:
    // 0x242a98: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_242a9c:
    if (ctx->pc == 0x242A9Cu) {
        ctx->pc = 0x242A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A98u;
        // 0x242a9c: 0x24850280  addiu       $a1, $a0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AA0u;
        goto label_242aa0;
    }
    ctx->pc = 0x242A98u;
    {
        const bool branch_taken_0x242a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A98u;
        // 0x242a9c: 0x24850280  addiu       $a1, $a0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a98) {
            ctx->pc = 0x242AC4u;
            goto label_242ac4;
        }
    }
    ctx->pc = 0x242AA0u;
label_242aa0:
    // 0x242aa0: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x242aa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_242aa4:
    // 0x242aa4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x242aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242aa8:
    // 0x242aa8: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x242aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_242aac:
    // 0x242aac: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x242aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_242ab0:
    // 0x242ab0: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x242ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_242ab4:
    // 0x242ab4: 0xc07c0d0  jal         func_1F0340
label_242ab8:
    if (ctx->pc == 0x242AB8u) {
        ctx->pc = 0x242AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AB4u;
        // 0x242ab8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242ABCu;
        goto label_242abc;
    }
    ctx->pc = 0x242AB4u;
    SET_GPR_U32(ctx, 31, 0x242ABCu);
    ctx->pc = 0x242AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242AB4u;
    // 0x242ab8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x242ABCu;
label_242abc:
    // 0x242abc: 0x10000077  b           . + 4 + (0x77 << 2)
label_242ac0:
    if (ctx->pc == 0x242AC0u) {
        ctx->pc = 0x242AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ABCu;
        // 0x242ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AC4u;
        goto label_242ac4;
    }
    ctx->pc = 0x242ABCu;
    {
        const bool branch_taken_0x242abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ABCu;
        // 0x242ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242abc) {
            ctx->pc = 0x242C9Cu;
            goto label_242c9c;
        }
    }
    ctx->pc = 0x242AC4u;
label_242ac4:
    // 0x242ac4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_242ac8:
    // 0x242ac8: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x242ac8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_242acc:
    // 0x242acc: 0x24a500b6  addiu       $a1, $a1, 0xB6
    ctx->pc = 0x242accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 182));
label_242ad0:
    // 0x242ad0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x242ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242ad4:
    // 0x242ad4: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x242ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_242ad8:
    // 0x242ad8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x242ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_242adc:
    // 0x242adc: 0xc07c0d0  jal         func_1F0340
label_242ae0:
    if (ctx->pc == 0x242AE0u) {
        ctx->pc = 0x242AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ADCu;
        // 0x242ae0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242AE4u;
        goto label_242ae4;
    }
    ctx->pc = 0x242ADCu;
    SET_GPR_U32(ctx, 31, 0x242AE4u);
    ctx->pc = 0x242AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242ADCu;
    // 0x242ae0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x242AE4u;
label_242ae4:
    // 0x242ae4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_242ae8:
    if (ctx->pc == 0x242AE8u) {
        ctx->pc = 0x242AECu;
        goto label_242aec;
    }
    ctx->pc = 0x242AE4u;
    {
        const bool branch_taken_0x242ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ae4) {
            ctx->pc = 0x242C98u;
            goto label_242c98;
        }
    }
    ctx->pc = 0x242AECu;
label_242aec:
    // 0x242aec: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242aecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242af0:
    // 0x242af0: 0x8c2423ac  lw          $a0, 0x23AC($at)
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9132)));
label_242af4:
    // 0x242af4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_242af8:
    if (ctx->pc == 0x242AF8u) {
        ctx->pc = 0x242AFCu;
        goto label_242afc;
    }
    ctx->pc = 0x242AF4u;
    {
        const bool branch_taken_0x242af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242af4) {
            ctx->pc = 0x242B4Cu;
            goto label_242b4c;
        }
    }
    ctx->pc = 0x242AFCu;
label_242afc:
    // 0x242afc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242b00:
    // 0x242b00: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_242b04:
    // 0x242b04: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242b04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242b08:
    // 0x242b08: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x242b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_242b0c:
    // 0x242b0c: 0x8c272384  lw          $a3, 0x2384($at)
    ctx->pc = 0x242b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_242b10:
    // 0x242b10: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x242b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_242b14:
    // 0x242b14: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x242b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_242b18:
    // 0x242b18: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x242b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_242b1c:
    // 0x242b1c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x242b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_242b20:
    // 0x242b20: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_242b24:
    // 0x242b24: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_242b28:
    // 0x242b28: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x242b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242b2c:
    // 0x242b2c: 0x0  nop
    ctx->pc = 0x242b2cu;
    // NOP
label_242b30:
    // 0x242b30: 0x0  nop
    ctx->pc = 0x242b30u;
    // NOP
label_242b34:
    // 0x242b34: 0x2010  mfhi        $a0
    ctx->pc = 0x242b34u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_242b38:
    // 0x242b38: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x242b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242b3c:
    // 0x242b3c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x242b3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_242b40:
    // 0x242b40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x242b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_242b44:
    // 0x242b44: 0x10000013  b           . + 4 + (0x13 << 2)
label_242b48:
    if (ctx->pc == 0x242B48u) {
        ctx->pc = 0x242B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B44u;
        // 0x242b48: 0x2485fed4  addiu       $a1, $a0, -0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966996));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242B4Cu;
        goto label_242b4c;
    }
    ctx->pc = 0x242B44u;
    {
        const bool branch_taken_0x242b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B44u;
        // 0x242b48: 0x2485fed4  addiu       $a1, $a0, -0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b44) {
            ctx->pc = 0x242B94u;
            goto label_242b94;
        }
    }
    ctx->pc = 0x242B4Cu;
label_242b4c:
    // 0x242b4c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242b50:
    // 0x242b50: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x242b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_242b54:
    // 0x242b54: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242b54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242b58:
    // 0x242b58: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x242b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_242b5c:
    // 0x242b5c: 0x8c272384  lw          $a3, 0x2384($at)
    ctx->pc = 0x242b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_242b60:
    // 0x242b60: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_242b64:
    // 0x242b64: 0x72823  negu        $a1, $a3
    ctx->pc = 0x242b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_242b68:
    // 0x242b68: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x242b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_242b6c:
    // 0x242b6c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x242b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_242b70:
    // 0x242b70: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x242b70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_242b74:
    // 0x242b74: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x242b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242b78:
    // 0x242b78: 0x0  nop
    ctx->pc = 0x242b78u;
    // NOP
label_242b7c:
    // 0x242b7c: 0x0  nop
    ctx->pc = 0x242b7cu;
    // NOP
label_242b80:
    // 0x242b80: 0x2010  mfhi        $a0
    ctx->pc = 0x242b80u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_242b84:
    // 0x242b84: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x242b84u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242b88:
    // 0x242b88: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x242b88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_242b8c:
    // 0x242b8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x242b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_242b90:
    // 0x242b90: 0x24850280  addiu       $a1, $a0, 0x280
    ctx->pc = 0x242b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_242b94:
    // 0x242b94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242b98:
    // 0x242b98: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242b98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242b9c:
    // 0x242b9c: 0x8c242394  lw          $a0, 0x2394($at)
    ctx->pc = 0x242b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_242ba0:
    // 0x242ba0: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
label_242ba4:
    if (ctx->pc == 0x242BA4u) {
        ctx->pc = 0x242BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA0u;
        // 0x242ba4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242BA8u;
        goto label_242ba8;
    }
    ctx->pc = 0x242BA0u;
    {
        const bool branch_taken_0x242ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242BA0u;
        // 0x242ba4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ba0) {
            ctx->pc = 0x242C24u;
            goto label_242c24;
        }
    }
    ctx->pc = 0x242BA8u;
label_242ba8:
    // 0x242ba8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242bac:
    // 0x242bac: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x242bacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_242bb0:
    // 0x242bb0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242bb4:
    // 0x242bb4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x242bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_242bb8:
    // 0x242bb8: 0x8c2c238c  lw          $t4, 0x238C($at)
    ctx->pc = 0x242bb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_242bbc:
    // 0x242bbc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x242bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_242bc0:
    // 0x242bc0: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x242bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_242bc4:
    // 0x242bc4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x242bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242bc8:
    // 0x242bc8: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x242bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_242bcc:
    // 0x242bcc: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x242bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_242bd0:
    // 0x242bd0: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x242bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_242bd4:
    // 0x242bd4: 0x183001a  div         $zero, $t4, $v1
    ctx->pc = 0x242bd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_242bd8:
    // 0x242bd8: 0x0  nop
    ctx->pc = 0x242bd8u;
    // NOP
label_242bdc:
    // 0x242bdc: 0x0  nop
    ctx->pc = 0x242bdcu;
    // NOP
label_242be0:
    // 0x242be0: 0x5810  mfhi        $t3
    ctx->pc = 0x242be0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_242be4:
    // 0x242be4: 0xc1fc2  srl         $v1, $t4, 31
    ctx->pc = 0x242be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_242be8:
    // 0x242be8: 0x4c0018  mult        $zero, $v0, $t4
    ctx->pc = 0x242be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242bec:
    // 0x242bec: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x242becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_242bf0:
    // 0x242bf0: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x242bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_242bf4:
    // 0x242bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x242bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_242bf8:
    // 0x242bf8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x242bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_242bfc:
    // 0x242bfc: 0x1010  mfhi        $v0
    ctx->pc = 0x242bfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_242c00:
    // 0x242c00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242c04:
    // 0x242c04: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x242c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242c08:
    // 0x242c08: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242c0c:
    // 0x242c0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242c10:
    // 0x242c10: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x242c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242c14:
    // 0x242c14: 0xc07c0d0  jal         func_1F0340
label_242c18:
    if (ctx->pc == 0x242C18u) {
        ctx->pc = 0x242C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C14u;
        // 0x242c18: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C1Cu;
        goto label_242c1c;
    }
    ctx->pc = 0x242C14u;
    SET_GPR_U32(ctx, 31, 0x242C1Cu);
    ctx->pc = 0x242C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C14u;
    // 0x242c18: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x242C1Cu;
label_242c1c:
    // 0x242c1c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_242c20:
    if (ctx->pc == 0x242C20u) {
        ctx->pc = 0x242C24u;
        goto label_242c24;
    }
    ctx->pc = 0x242C1Cu;
    {
        const bool branch_taken_0x242c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242c1c) {
            ctx->pc = 0x242C98u;
            goto label_242c98;
        }
    }
    ctx->pc = 0x242C24u;
label_242c24:
    // 0x242c24: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242c24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242c28:
    // 0x242c28: 0x8c282390  lw          $t0, 0x2390($at)
    ctx->pc = 0x242c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_242c2c:
    // 0x242c2c: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
label_242c30:
    if (ctx->pc == 0x242C30u) {
        ctx->pc = 0x242C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C2Cu;
        // 0x242c30: 0x31070001  andi        $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C34u;
        goto label_242c34;
    }
    ctx->pc = 0x242C2Cu;
    {
        const bool branch_taken_0x242c2c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x242C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C2Cu;
        // 0x242c30: 0x31070001  andi        $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c2c) {
            ctx->pc = 0x242C40u;
            goto label_242c40;
        }
    }
    ctx->pc = 0x242C34u;
label_242c34:
    // 0x242c34: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_242c38:
    if (ctx->pc == 0x242C38u) {
        ctx->pc = 0x242C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C34u;
        // 0x242c38: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C3Cu;
        goto label_242c3c;
    }
    ctx->pc = 0x242C34u;
    {
        const bool branch_taken_0x242c34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x242C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C34u;
        // 0x242c38: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c34) {
            ctx->pc = 0x242C44u;
            goto label_242c44;
        }
    }
    ctx->pc = 0x242C3Cu;
label_242c3c:
    // 0x242c3c: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x242c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_242c40:
    // 0x242c40: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x242c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242c44:
    // 0x242c44: 0x24a400d4  addiu       $a0, $a1, 0xD4
    ctx->pc = 0x242c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 212));
label_242c48:
    // 0x242c48: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x242c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_242c4c:
    // 0x242c4c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x242c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242c50:
    // 0x242c50: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x242c50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
label_242c54:
    // 0x242c54: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x242c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_242c58:
    // 0x242c58: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_242c5c:
    // 0x242c5c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_242c60:
    if (ctx->pc == 0x242C60u) {
        ctx->pc = 0x242C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C5Cu;
        // 0x242c60: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C64u;
        goto label_242c64;
    }
    ctx->pc = 0x242C5Cu;
    {
        const bool branch_taken_0x242c5c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x242C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C5Cu;
        // 0x242c60: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c5c) {
            ctx->pc = 0x242C6Cu;
            goto label_242c6c;
        }
    }
    ctx->pc = 0x242C64u;
label_242c64:
    // 0x242c64: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x242c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_242c68:
    // 0x242c68: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x242c68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_242c6c:
    // 0x242c6c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x242c6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_242c70:
    // 0x242c70: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x242c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242c74:
    // 0x242c74: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x242c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242c78:
    // 0x242c78: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x242c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_242c7c:
    // 0x242c7c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x242c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242c80:
    // 0x242c80: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_242c84:
    // 0x242c84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242c88:
    // 0x242c88: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x242c88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_242c8c:
    // 0x242c8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242c90:
    // 0x242c90: 0xc07c0d0  jal         func_1F0340
label_242c94:
    if (ctx->pc == 0x242C94u) {
        ctx->pc = 0x242C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C90u;
        // 0x242c94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242C98u;
        goto label_242c98;
    }
    ctx->pc = 0x242C90u;
    SET_GPR_U32(ctx, 31, 0x242C98u);
    ctx->pc = 0x242C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242C90u;
    // 0x242c94: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x242C98u;
label_242c98:
    // 0x242c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242c9c:
    // 0x242c9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242ca0:
    // 0x242ca0: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x242ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_242ca4:
    // 0x242ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242ca8:
    // 0x242ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242cac:
    // 0x242cac: 0xc066c72  jal         func_19B1C8
label_242cb0:
    if (ctx->pc == 0x242CB0u) {
        ctx->pc = 0x242CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CACu;
        // 0x242cb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CB4u;
        goto label_242cb4;
    }
    ctx->pc = 0x242CACu;
    SET_GPR_U32(ctx, 31, 0x242CB4u);
    ctx->pc = 0x242CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CACu;
    // 0x242cb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x242CACu, 0x242CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CB4u;
label_242cb4:
    // 0x242cb4: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x242cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242cb8:
    // 0x242cb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242cbc:
    // 0x242cbc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x242cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_242cc0:
    // 0x242cc0: 0x8c232394  lw          $v1, 0x2394($at)
    ctx->pc = 0x242cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_242cc4:
    // 0x242cc4: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
label_242cc8:
    if (ctx->pc == 0x242CC8u) {
        ctx->pc = 0x242CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC4u;
        // 0x242cc8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CCCu;
        goto label_242ccc;
    }
    ctx->pc = 0x242CC4u;
    {
        const bool branch_taken_0x242cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC4u;
        // 0x242cc8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cc4) {
            ctx->pc = 0x242E8Cu;
            goto label_242e8c;
        }
    }
    ctx->pc = 0x242CCCu;
label_242ccc:
    // 0x242ccc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242cd0:
    // 0x242cd0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x242cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_242cd4:
    // 0x242cd4: 0x8c2623a8  lw          $a2, 0x23A8($at)
    ctx->pc = 0x242cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_242cd8:
    // 0x242cd8: 0x18c000d8  blez        $a2, . + 4 + (0xD8 << 2)
label_242cdc:
    if (ctx->pc == 0x242CDCu) {
        ctx->pc = 0x242CE0u;
        goto label_242ce0;
    }
    ctx->pc = 0x242CD8u;
    {
        const bool branch_taken_0x242cd8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x242cd8) {
            ctx->pc = 0x24303Cu;
            { ctx->pc = 0x24303c; return; }
        }
    }
    ctx->pc = 0x242CE0u;
label_242ce0:
    // 0x242ce0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x242ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_242ce4:
    // 0x242ce4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x242ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242ce8:
    // 0x242ce8: 0x3442238c  ori         $v0, $v0, 0x238C
    ctx->pc = 0x242ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9100);
label_242cec:
    // 0x242cec: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x242cecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_242cf0:
    // 0x242cf0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x242cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_242cf4:
    // 0x242cf4: 0x63823  negu        $a3, $a2
    ctx->pc = 0x242cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_242cf8:
    // 0x242cf8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x242cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242cfc:
    // 0x242cfc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x242cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_242d00:
    // 0x242d00: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x242d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_242d04:
    // 0x242d04: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x242d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242d08:
    // 0x242d08: 0x344c5556  ori         $t4, $v0, 0x5556
    ctx->pc = 0x242d08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_242d0c:
    // 0x242d0c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x242d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_242d10:
    // 0x242d10: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x242d10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242d14:
    // 0x242d14: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x242d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242d18:
    // 0x242d18: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x242d18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_242d1c:
    // 0x242d1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242d20:
    // 0x242d20: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x242d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_242d24:
    // 0x242d24: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x242d24u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_242d28:
    // 0x242d28: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x242d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_242d2c:
    // 0x242d2c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x242d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_242d30:
    // 0x242d30: 0x56fc2  srl         $t5, $a1, 31
    ctx->pc = 0x242d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242d34:
    // 0x242d34: 0x12b3821  addu        $a3, $t1, $t3
    ctx->pc = 0x242d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_242d38:
    // 0x242d38: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x242d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_242d3c:
    // 0x242d3c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x242d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_242d40:
    // 0x242d40: 0xa5fc2  srl         $t3, $t2, 31
    ctx->pc = 0x242d40u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_242d44:
    // 0x242d44: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_242d48:
    // 0x242d48: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x242d48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_242d4c:
    // 0x242d4c: 0x24902520  addiu       $s0, $a0, 0x2520
    ctx->pc = 0x242d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 9504));
label_242d50:
    // 0x242d50: 0xc74823  subu        $t1, $a2, $a3
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_242d54:
    // 0x242d54: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x242d54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_242d58:
    // 0x242d58: 0x24e713cb  addiu       $a3, $a3, 0x13CB
    ctx->pc = 0x242d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5067));
label_242d5c:
    // 0x242d5c: 0x7010  mfhi        $t6
    ctx->pc = 0x242d5cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_242d60:
    // 0x242d60: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x242d60u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_242d64:
    // 0x242d64: 0x1850018  mult        $zero, $t4, $a1
    ctx->pc = 0x242d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242d68:
    // 0x242d68: 0xe2900  sll         $a1, $t6, 4
    ctx->pc = 0x242d68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_242d6c:
    // 0x242d6c: 0xae2823  subu        $a1, $a1, $t6
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_242d70:
    // 0x242d70: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x242d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_242d74:
    // 0x242d74: 0x6010  mfhi        $t4
    ctx->pc = 0x242d74u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_242d78:
    // 0x242d78: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x242d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_242d7c:
    // 0x242d7c: 0x24a5ff76  addiu       $a1, $a1, -0x8A
    ctx->pc = 0x242d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967158));
label_242d80:
    // 0x242d80: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x242d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_242d84:
    // 0x242d84: 0x18d6821  addu        $t5, $t4, $t5
    ctx->pc = 0x242d84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_242d88:
    // 0x242d88: 0xd6100  sll         $t4, $t5, 4
    ctx->pc = 0x242d88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_242d8c:
    // 0x242d8c: 0x18d6823  subu        $t5, $t4, $t5
    ctx->pc = 0x242d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_242d90:
    // 0x242d90: 0xd6080  sll         $t4, $t5, 2
    ctx->pc = 0x242d90u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_242d94:
    // 0x242d94: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x242d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242d98:
    // 0x242d98: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x242d98u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_242d9c:
    // 0x242d9c: 0x258c00b4  addiu       $t4, $t4, 0xB4
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 180));
label_242da0:
    // 0x242da0: 0x56fc2  srl         $t5, $a1, 31
    ctx->pc = 0x242da0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242da4:
    // 0x242da4: 0x2585ff8c  addiu       $a1, $t4, -0x74
    ctx->pc = 0x242da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967180));
label_242da8:
    // 0x242da8: 0x70a62818  mult1       $a1, $a1, $a2
    ctx->pc = 0x242da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_242dac:
    // 0x242dac: 0x0  nop
    ctx->pc = 0x242dacu;
    // NOP
label_242db0:
    // 0x242db0: 0x0  nop
    ctx->pc = 0x242db0u;
    // NOP
label_242db4:
    // 0x242db4: 0x3010  mfhi        $a2
    ctx->pc = 0x242db4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_242db8:
    // 0x242db8: 0x567c2  srl         $t4, $a1, 31
    ctx->pc = 0x242db8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_242dbc:
    // 0x242dbc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x242dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242dc0:
    // 0x242dc0: 0x62843  sra         $a1, $a2, 1
    ctx->pc = 0x242dc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 1));
label_242dc4:
    // 0x242dc4: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x242dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_242dc8:
    // 0x242dc8: 0x24a5008a  addiu       $a1, $a1, 0x8A
    ctx->pc = 0x242dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 138));
label_242dcc:
    // 0x242dcc: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x242dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_242dd0:
    // 0x242dd0: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x242dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_242dd4:
    // 0x242dd4: 0xa48625b0  sh          $a2, 0x25B0($a0)
    ctx->pc = 0x242dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9648), (uint16_t)GPR_U32(ctx, 6));
label_242dd8:
    // 0x242dd8: 0x3010  mfhi        $a2
    ctx->pc = 0x242dd8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_242ddc:
    // 0x242ddc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x242ddcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_242de0:
    // 0x242de0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_242de4:
    // 0x242de4: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x242de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242de8:
    // 0x242de8: 0x24c60074  addiu       $a2, $a2, 0x74
    ctx->pc = 0x242de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
label_242dec:
    // 0x242dec: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x242decu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_242df0:
    // 0x242df0: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x242df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_242df4:
    // 0x242df4: 0xa48a25b2  sh          $t2, 0x25B2($a0)
    ctx->pc = 0x242df4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9650), (uint16_t)GPR_U32(ctx, 10));
label_242df8:
    // 0x242df8: 0x5010  mfhi        $t2
    ctx->pc = 0x242df8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_242dfc:
    // 0x242dfc: 0xac8225b4  sw          $v0, 0x25B4($a0)
    ctx->pc = 0x242dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9652), GPR_U32(ctx, 2));
label_242e00:
    // 0x242e00: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x242e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242e04:
    // 0x242e04: 0xa1843  sra         $v1, $t2, 1
    ctx->pc = 0x242e04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 10), 1));
label_242e08:
    // 0x242e08: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x242e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_242e0c:
    // 0x242e0c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_242e10:
    // 0x242e10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x242e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_242e14:
    // 0x242e14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242e18:
    // 0x242e18: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x242e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_242e1c:
    // 0x242e1c: 0xa48325c0  sh          $v1, 0x25C0($a0)
    ctx->pc = 0x242e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9664), (uint16_t)GPR_U32(ctx, 3));
label_242e20:
    // 0x242e20: 0x1810  mfhi        $v1
    ctx->pc = 0x242e20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_242e24:
    // 0x242e24: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x242e24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_242e28:
    // 0x242e28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x242e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_242e2c:
    // 0x242e2c: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x242e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_242e30:
    // 0x242e30: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x242e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_242e34:
    // 0x242e34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x242e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_242e38:
    // 0x242e38: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x242e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_242e3c:
    // 0x242e3c: 0xa48325c2  sh          $v1, 0x25C2($a0)
    ctx->pc = 0x242e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 9666), (uint16_t)GPR_U32(ctx, 3));
label_242e40:
    // 0x242e40: 0xac8225c4  sw          $v0, 0x25C4($a0)
    ctx->pc = 0x242e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 9668), GPR_U32(ctx, 2));
label_242e44:
    // 0x242e44: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242e48:
    // 0x242e48: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x242e48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_242e4c:
    // 0x242e4c: 0x8c23238c  lw          $v1, 0x238C($at)
    ctx->pc = 0x242e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_242e50:
    // 0x242e50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x242e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_242e54:
    // 0x242e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242e58:
    // 0x242e58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x242e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_242e5c:
    // 0x242e5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x242e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_242e60:
    // 0x242e60: 0xc070a34  jal         func_1C28D0
label_242e64:
    if (ctx->pc == 0x242E64u) {
        ctx->pc = 0x242E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E60u;
        // 0x242e64: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E68u;
        goto label_242e68;
    }
    ctx->pc = 0x242E60u;
    SET_GPR_U32(ctx, 31, 0x242E68u);
    ctx->pc = 0x242E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E60u;
    // 0x242e64: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x242E68u;
label_242e68:
    // 0x242e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x242e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242e6c:
    // 0x242e6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242e70:
    // 0x242e70: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x242e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_242e74:
    // 0x242e74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242e78:
    // 0x242e78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242e78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242e7c:
    // 0x242e7c: 0xc066c72  jal         func_19B1C8
label_242e80:
    if (ctx->pc == 0x242E80u) {
        ctx->pc = 0x242E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E7Cu;
        // 0x242e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E84u;
        goto label_242e84;
    }
    ctx->pc = 0x242E7Cu;
    SET_GPR_U32(ctx, 31, 0x242E84u);
    ctx->pc = 0x242E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E7Cu;
    // 0x242e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x242E7Cu, 0x242E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E84u;
label_242e84:
    // 0x242e84: 0x1000006e  b           . + 4 + (0x6E << 2)
label_242e88:
    if (ctx->pc == 0x242E88u) {
        ctx->pc = 0x242E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E84u;
        // 0x242e88: 0x8f8392f8  lw          $v1, -0x6D08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E8Cu;
        goto label_242e8c;
    }
    ctx->pc = 0x242E84u;
    {
        const bool branch_taken_0x242e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E84u;
        // 0x242e88: 0x8f8392f8  lw          $v1, -0x6D08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e84) {
            ctx->pc = 0x243040u;
            { ctx->pc = 0x243040; return; }
        }
    }
    ctx->pc = 0x242E8Cu;
label_242e8c:
    // 0x242e8c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_242e90:
    // 0x242e90: 0x8c2523a8  lw          $a1, 0x23A8($at)
    ctx->pc = 0x242e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
label_242e94:
    // 0x242e94: 0x18a00069  blez        $a1, . + 4 + (0x69 << 2)
label_242e98:
    if (ctx->pc == 0x242E98u) {
        ctx->pc = 0x242E9Cu;
        goto label_242e9c;
    }
    ctx->pc = 0x242E94u;
    {
        const bool branch_taken_0x242e94 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x242e94) {
            ctx->pc = 0x24303Cu;
            { ctx->pc = 0x24303c; return; }
        }
    }
    ctx->pc = 0x242E9Cu;
label_242e9c:
    // 0x242e9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x242e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_242ea0:
    // 0x242ea0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x242ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242ea4:
    // 0x242ea4: 0x34422390  ori         $v0, $v0, 0x2390
    ctx->pc = 0x242ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9104);
label_242ea8:
    // 0x242ea8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x242ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_242eac:
    // 0x242eac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x242eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_242eb0:
    // 0x242eb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x242eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242eb4:
    // 0x242eb4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242eb8:
    // 0x242eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242ebc:
    // 0x242ebc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x242ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_242ec0:
    // 0x242ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242ec4:
    // 0x242ec4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x242ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_242ec8:
    // 0x242ec8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x242ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_242ecc:
    // 0x242ecc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x242eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_242ed0:
    // 0x242ed0: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_242ed4:
    if (ctx->pc == 0x242ED4u) {
        ctx->pc = 0x242ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED0u;
        // 0x242ed4: 0x24502680  addiu       $s0, $v0, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242ED8u;
        goto label_242ed8;
    }
    ctx->pc = 0x242ED0u;
    {
        const bool branch_taken_0x242ed0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x242ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED0u;
        // 0x242ed4: 0x24502680  addiu       $s0, $v0, 0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ed0) {
            ctx->pc = 0x242EE4u;
            goto label_242ee4;
        }
    }
    ctx->pc = 0x242ED8u;
label_242ed8:
    // 0x242ed8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_242edc:
    if (ctx->pc == 0x242EDCu) {
        ctx->pc = 0x242EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED8u;
        // 0x242edc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EE0u;
        goto label_242ee0;
    }
    ctx->pc = 0x242ED8u;
    {
        const bool branch_taken_0x242ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED8u;
        // 0x242edc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ed8) {
            ctx->pc = 0x242EE8u;
            goto label_242ee8;
        }
    }
    ctx->pc = 0x242EE0u;
label_242ee0:
    // 0x242ee0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x242ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_242ee4:
    // 0x242ee4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242ee8:
    // 0x242ee8: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x242ee8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
label_242eec:
    // 0x242eec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242ef0:
    // 0x242ef0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_242ef4:
    // 0x242ef4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x242ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242ef8:
    // 0x242ef8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_242efc:
    // 0x242efc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_242f00:
    if (ctx->pc == 0x242F00u) {
        ctx->pc = 0x242F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EFCu;
        // 0x242f00: 0x2443012c  addiu       $v1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F04u;
        goto label_242f04;
    }
    ctx->pc = 0x242EFCu;
    {
        const bool branch_taken_0x242efc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x242F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EFCu;
        // 0x242f00: 0x2443012c  addiu       $v1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242efc) {
            ctx->pc = 0x242F0Cu;
            goto label_242f0c;
        }
    }
    ctx->pc = 0x242F04u;
label_242f04:
    // 0x242f04: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_242f08:
    // 0x242f08: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_242f0c:
    // 0x242f0c: 0x2463fec0  addiu       $v1, $v1, -0x140
    ctx->pc = 0x242f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966976));
label_242f10:
    // 0x242f10: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x242f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_242f14:
    // 0x242f14: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x242f14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_242f18:
    // 0x242f18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242f1c:
    // 0x242f1c: 0x653818  mult        $a3, $v1, $a1
    ctx->pc = 0x242f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_242f20:
    // 0x242f20: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x242f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_242f24:
    // 0x242f24: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x242f24u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_242f28:
    // 0x242f28: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x242f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_242f2c:
    // 0x242f2c: 0x52023  negu        $a0, $a1
    ctx->pc = 0x242f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_242f30:
    // 0x242f30: 0x24c600b4  addiu       $a2, $a2, 0xB4
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 180));
label_242f34:
    // 0x242f34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_242f38:
    // 0x242f38: 0x24c6ff8c  addiu       $a2, $a2, -0x74
    ctx->pc = 0x242f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967180));
label_242f3c:
    // 0x242f3c: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x242f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_242f40:
    // 0x242f40: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x242f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_242f44:
    // 0x242f44: 0x44840  sll         $t1, $a0, 1
    ctx->pc = 0x242f44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_242f48:
    // 0x242f48: 0x70c56018  mult1       $t4, $a2, $a1
    ctx->pc = 0x242f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_242f4c:
    // 0x242f4c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x242f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_242f50:
    // 0x242f50: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x242f50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_242f54:
    // 0x242f54: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x242f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242f58:
    // 0x242f58: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x242f58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_242f5c:
    // 0x242f5c: 0x76fc2  srl         $t5, $a3, 31
    ctx->pc = 0x242f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_242f60:
    // 0x242f60: 0xc5fc2  srl         $t3, $t4, 31
    ctx->pc = 0x242f60u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_242f64:
    // 0x242f64: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x242f64u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_242f68:
    // 0x242f68: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x242f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242f6c:
    // 0x242f6c: 0x24c613a8  addiu       $a2, $a2, 0x13A8
    ctx->pc = 0x242f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5032));
label_242f70:
    // 0x242f70: 0x2010  mfhi        $a0
    ctx->pc = 0x242f70u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_242f74:
    // 0x242f74: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x242f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_242f78:
    // 0x242f78: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x242f78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_242f7c:
    // 0x242f7c: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x242f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_242f80:
    // 0x242f80: 0x24840140  addiu       $a0, $a0, 0x140
    ctx->pc = 0x242f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
label_242f84:
    // 0x242f84: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_242f88:
    // 0x242f88: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x242f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_242f8c:
    // 0x242f8c: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x242f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242f90:
    // 0x242f90: 0xa6050090  sh          $a1, 0x90($s0)
    ctx->pc = 0x242f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 5));
label_242f94:
    // 0x242f94: 0x0  nop
    ctx->pc = 0x242f94u;
    // NOP
label_242f98:
    // 0x242f98: 0x2810  mfhi        $a1
    ctx->pc = 0x242f98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_242f9c:
    // 0x242f9c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x242f9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_242fa0:
    // 0x242fa0: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x242fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_242fa4:
    // 0x242fa4: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x242fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242fa8:
    // 0x242fa8: 0x24a50074  addiu       $a1, $a1, 0x74
    ctx->pc = 0x242fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
label_242fac:
    // 0x242fac: 0x548c0  sll         $t1, $a1, 3
    ctx->pc = 0x242facu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_242fb0:
    // 0x242fb0: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x242fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_242fb4:
    // 0x242fb4: 0xa6090092  sh          $t1, 0x92($s0)
    ctx->pc = 0x242fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 9));
label_242fb8:
    // 0x242fb8: 0x4810  mfhi        $t1
    ctx->pc = 0x242fb8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_242fbc:
    // 0x242fbc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x242fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_242fc0:
    // 0x242fc0: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x242fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242fc4:
    // 0x242fc4: 0x91843  sra         $v1, $t1, 1
    ctx->pc = 0x242fc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 1));
label_242fc8:
    // 0x242fc8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x242fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_242fcc:
    // 0x242fcc: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x242fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_242fd0:
    // 0x242fd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_242fd4:
    // 0x242fd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x242fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_242fd8:
    // 0x242fd8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x242fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_242fdc:
    // 0x242fdc: 0xa60300a0  sh          $v1, 0xA0($s0)
    ctx->pc = 0x242fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 3));
label_242fe0:
    // 0x242fe0: 0x1810  mfhi        $v1
    ctx->pc = 0x242fe0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_242fe4:
    // 0x242fe4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x242fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_242fe8:
    // 0x242fe8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x242fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_242fec:
    // 0x242fec: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x242fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_242ff0:
    // 0x242ff0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x242ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_242ff4:
    // 0x242ff4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x242ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_242ff8:
    // 0x242ff8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_242ffc:
    // 0x242ffc: 0xa60300a2  sh          $v1, 0xA2($s0)
    ctx->pc = 0x242ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 3));
label_243000:
    // 0x243000: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x243000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_243004:
    // 0x243004: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x243004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_243008:
    // 0x243008: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x243008u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24300c:
    // 0x24300c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
label_243010:
    // 0x243010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_243014:
    // 0x243014: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x243014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x243018u;
    return;
}
