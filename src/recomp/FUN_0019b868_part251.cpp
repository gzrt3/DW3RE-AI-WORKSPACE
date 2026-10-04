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


void FUN_0019b868_part251(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x215988u: goto label_215988;
        case 0x21598cu: goto label_21598c;
        case 0x215990u: goto label_215990;
        case 0x215994u: goto label_215994;
        case 0x215998u: goto label_215998;
        case 0x21599cu: goto label_21599c;
        case 0x2159a0u: goto label_2159a0;
        case 0x2159a4u: goto label_2159a4;
        case 0x2159a8u: goto label_2159a8;
        case 0x2159acu: goto label_2159ac;
        case 0x2159b0u: goto label_2159b0;
        case 0x2159b4u: goto label_2159b4;
        case 0x2159b8u: goto label_2159b8;
        case 0x2159bcu: goto label_2159bc;
        case 0x2159c0u: goto label_2159c0;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159c8u: goto label_2159c8;
        case 0x2159ccu: goto label_2159cc;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159d4u: goto label_2159d4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159dcu: goto label_2159dc;
        case 0x2159e0u: goto label_2159e0;
        case 0x2159e4u: goto label_2159e4;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159ecu: goto label_2159ec;
        case 0x2159f0u: goto label_2159f0;
        case 0x2159f4u: goto label_2159f4;
        case 0x2159f8u: goto label_2159f8;
        case 0x2159fcu: goto label_2159fc;
        case 0x215a00u: goto label_215a00;
        case 0x215a04u: goto label_215a04;
        case 0x215a08u: goto label_215a08;
        case 0x215a0cu: goto label_215a0c;
        case 0x215a10u: goto label_215a10;
        case 0x215a14u: goto label_215a14;
        case 0x215a18u: goto label_215a18;
        case 0x215a1cu: goto label_215a1c;
        case 0x215a20u: goto label_215a20;
        case 0x215a24u: goto label_215a24;
        case 0x215a28u: goto label_215a28;
        case 0x215a2cu: goto label_215a2c;
        case 0x215a30u: goto label_215a30;
        case 0x215a34u: goto label_215a34;
        case 0x215a38u: goto label_215a38;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a40u: goto label_215a40;
        case 0x215a44u: goto label_215a44;
        case 0x215a48u: goto label_215a48;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a50u: goto label_215a50;
        case 0x215a54u: goto label_215a54;
        case 0x215a58u: goto label_215a58;
        case 0x215a5cu: goto label_215a5c;
        case 0x215a60u: goto label_215a60;
        case 0x215a64u: goto label_215a64;
        case 0x215a68u: goto label_215a68;
        case 0x215a6cu: goto label_215a6c;
        case 0x215a70u: goto label_215a70;
        case 0x215a74u: goto label_215a74;
        case 0x215a78u: goto label_215a78;
        case 0x215a7cu: goto label_215a7c;
        case 0x215a80u: goto label_215a80;
        case 0x215a84u: goto label_215a84;
        case 0x215a88u: goto label_215a88;
        case 0x215a8cu: goto label_215a8c;
        case 0x215a90u: goto label_215a90;
        case 0x215a94u: goto label_215a94;
        case 0x215a98u: goto label_215a98;
        case 0x215a9cu: goto label_215a9c;
        case 0x215aa0u: goto label_215aa0;
        case 0x215aa4u: goto label_215aa4;
        case 0x215aa8u: goto label_215aa8;
        case 0x215aacu: goto label_215aac;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ab8u: goto label_215ab8;
        case 0x215abcu: goto label_215abc;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ac4u: goto label_215ac4;
        case 0x215ac8u: goto label_215ac8;
        case 0x215accu: goto label_215acc;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ad4u: goto label_215ad4;
        case 0x215ad8u: goto label_215ad8;
        case 0x215adcu: goto label_215adc;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae4u: goto label_215ae4;
        case 0x215ae8u: goto label_215ae8;
        case 0x215aecu: goto label_215aec;
        case 0x215af0u: goto label_215af0;
        case 0x215af4u: goto label_215af4;
        case 0x215af8u: goto label_215af8;
        case 0x215afcu: goto label_215afc;
        case 0x215b00u: goto label_215b00;
        case 0x215b04u: goto label_215b04;
        case 0x215b08u: goto label_215b08;
        case 0x215b0cu: goto label_215b0c;
        case 0x215b10u: goto label_215b10;
        case 0x215b14u: goto label_215b14;
        case 0x215b18u: goto label_215b18;
        case 0x215b1cu: goto label_215b1c;
        case 0x215b20u: goto label_215b20;
        case 0x215b24u: goto label_215b24;
        case 0x215b28u: goto label_215b28;
        case 0x215b2cu: goto label_215b2c;
        case 0x215b30u: goto label_215b30;
        case 0x215b34u: goto label_215b34;
        case 0x215b38u: goto label_215b38;
        case 0x215b3cu: goto label_215b3c;
        case 0x215b40u: goto label_215b40;
        case 0x215b44u: goto label_215b44;
        case 0x215b48u: goto label_215b48;
        case 0x215b4cu: goto label_215b4c;
        case 0x215b50u: goto label_215b50;
        case 0x215b54u: goto label_215b54;
        case 0x215b58u: goto label_215b58;
        case 0x215b5cu: goto label_215b5c;
        case 0x215b60u: goto label_215b60;
        case 0x215b64u: goto label_215b64;
        case 0x215b68u: goto label_215b68;
        case 0x215b6cu: goto label_215b6c;
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        case 0x215bd0u: goto label_215bd0;
        case 0x215bd4u: goto label_215bd4;
        case 0x215bd8u: goto label_215bd8;
        case 0x215bdcu: goto label_215bdc;
        case 0x215be0u: goto label_215be0;
        case 0x215be4u: goto label_215be4;
        case 0x215be8u: goto label_215be8;
        case 0x215becu: goto label_215bec;
        case 0x215bf0u: goto label_215bf0;
        case 0x215bf4u: goto label_215bf4;
        case 0x215bf8u: goto label_215bf8;
        case 0x215bfcu: goto label_215bfc;
        case 0x215c00u: goto label_215c00;
        case 0x215c04u: goto label_215c04;
        case 0x215c08u: goto label_215c08;
        case 0x215c0cu: goto label_215c0c;
        case 0x215c10u: goto label_215c10;
        case 0x215c14u: goto label_215c14;
        case 0x215c18u: goto label_215c18;
        case 0x215c1cu: goto label_215c1c;
        case 0x215c20u: goto label_215c20;
        case 0x215c24u: goto label_215c24;
        case 0x215c28u: goto label_215c28;
        case 0x215c2cu: goto label_215c2c;
        case 0x215c30u: goto label_215c30;
        case 0x215c34u: goto label_215c34;
        case 0x215c38u: goto label_215c38;
        case 0x215c3cu: goto label_215c3c;
        case 0x215c40u: goto label_215c40;
        case 0x215c44u: goto label_215c44;
        case 0x215c48u: goto label_215c48;
        case 0x215c4cu: goto label_215c4c;
        case 0x215c50u: goto label_215c50;
        case 0x215c54u: goto label_215c54;
        case 0x215c58u: goto label_215c58;
        case 0x215c5cu: goto label_215c5c;
        case 0x215c60u: goto label_215c60;
        case 0x215c64u: goto label_215c64;
        case 0x215c68u: goto label_215c68;
        case 0x215c6cu: goto label_215c6c;
        case 0x215c70u: goto label_215c70;
        case 0x215c74u: goto label_215c74;
        case 0x215c78u: goto label_215c78;
        case 0x215c7cu: goto label_215c7c;
        case 0x215c80u: goto label_215c80;
        case 0x215c84u: goto label_215c84;
        case 0x215c88u: goto label_215c88;
        case 0x215c8cu: goto label_215c8c;
        case 0x215c90u: goto label_215c90;
        case 0x215c94u: goto label_215c94;
        case 0x215c98u: goto label_215c98;
        case 0x215c9cu: goto label_215c9c;
        case 0x215ca0u: goto label_215ca0;
        case 0x215ca4u: goto label_215ca4;
        case 0x215ca8u: goto label_215ca8;
        case 0x215cacu: goto label_215cac;
        case 0x215cb0u: goto label_215cb0;
        case 0x215cb4u: goto label_215cb4;
        case 0x215cb8u: goto label_215cb8;
        case 0x215cbcu: goto label_215cbc;
        case 0x215cc0u: goto label_215cc0;
        case 0x215cc4u: goto label_215cc4;
        case 0x215cc8u: goto label_215cc8;
        case 0x215cccu: goto label_215ccc;
        case 0x215cd0u: goto label_215cd0;
        case 0x215cd4u: goto label_215cd4;
        case 0x215cd8u: goto label_215cd8;
        case 0x215cdcu: goto label_215cdc;
        case 0x215ce0u: goto label_215ce0;
        case 0x215ce4u: goto label_215ce4;
        case 0x215ce8u: goto label_215ce8;
        case 0x215cecu: goto label_215cec;
        case 0x215cf0u: goto label_215cf0;
        case 0x215cf4u: goto label_215cf4;
        case 0x215cf8u: goto label_215cf8;
        case 0x215cfcu: goto label_215cfc;
        case 0x215d00u: goto label_215d00;
        case 0x215d04u: goto label_215d04;
        case 0x215d08u: goto label_215d08;
        case 0x215d0cu: goto label_215d0c;
        case 0x215d10u: goto label_215d10;
        case 0x215d14u: goto label_215d14;
        case 0x215d18u: goto label_215d18;
        case 0x215d1cu: goto label_215d1c;
        case 0x215d20u: goto label_215d20;
        case 0x215d24u: goto label_215d24;
        case 0x215d28u: goto label_215d28;
        case 0x215d2cu: goto label_215d2c;
        case 0x215d30u: goto label_215d30;
        case 0x215d34u: goto label_215d34;
        case 0x215d38u: goto label_215d38;
        case 0x215d3cu: goto label_215d3c;
        case 0x215d40u: goto label_215d40;
        case 0x215d44u: goto label_215d44;
        case 0x215d48u: goto label_215d48;
        case 0x215d4cu: goto label_215d4c;
        case 0x215d50u: goto label_215d50;
        case 0x215d54u: goto label_215d54;
        case 0x215d58u: goto label_215d58;
        case 0x215d5cu: goto label_215d5c;
        case 0x215d60u: goto label_215d60;
        case 0x215d64u: goto label_215d64;
        case 0x215d68u: goto label_215d68;
        case 0x215d6cu: goto label_215d6c;
        case 0x215d70u: goto label_215d70;
        case 0x215d74u: goto label_215d74;
        case 0x215d78u: goto label_215d78;
        case 0x215d7cu: goto label_215d7c;
        case 0x215d80u: goto label_215d80;
        case 0x215d84u: goto label_215d84;
        case 0x215d88u: goto label_215d88;
        case 0x215d8cu: goto label_215d8c;
        case 0x215d90u: goto label_215d90;
        case 0x215d94u: goto label_215d94;
        case 0x215d98u: goto label_215d98;
        case 0x215d9cu: goto label_215d9c;
        case 0x215da0u: goto label_215da0;
        case 0x215da4u: goto label_215da4;
        case 0x215da8u: goto label_215da8;
        case 0x215dacu: goto label_215dac;
        case 0x215db0u: goto label_215db0;
        case 0x215db4u: goto label_215db4;
        case 0x215db8u: goto label_215db8;
        case 0x215dbcu: goto label_215dbc;
        case 0x215dc0u: goto label_215dc0;
        case 0x215dc4u: goto label_215dc4;
        case 0x215dc8u: goto label_215dc8;
        case 0x215dccu: goto label_215dcc;
        case 0x215dd0u: goto label_215dd0;
        case 0x215dd4u: goto label_215dd4;
        case 0x215dd8u: goto label_215dd8;
        case 0x215ddcu: goto label_215ddc;
        case 0x215de0u: goto label_215de0;
        case 0x215de4u: goto label_215de4;
        case 0x215de8u: goto label_215de8;
        case 0x215decu: goto label_215dec;
        case 0x215df0u: goto label_215df0;
        case 0x215df4u: goto label_215df4;
        case 0x215df8u: goto label_215df8;
        case 0x215dfcu: goto label_215dfc;
        case 0x215e00u: goto label_215e00;
        case 0x215e04u: goto label_215e04;
        case 0x215e08u: goto label_215e08;
        case 0x215e0cu: goto label_215e0c;
        case 0x215e10u: goto label_215e10;
        case 0x215e14u: goto label_215e14;
        case 0x215e18u: goto label_215e18;
        case 0x215e1cu: goto label_215e1c;
        case 0x215e20u: goto label_215e20;
        case 0x215e24u: goto label_215e24;
        case 0x215e28u: goto label_215e28;
        case 0x215e2cu: goto label_215e2c;
        case 0x215e30u: goto label_215e30;
        case 0x215e34u: goto label_215e34;
        case 0x215e38u: goto label_215e38;
        case 0x215e3cu: goto label_215e3c;
        case 0x215e40u: goto label_215e40;
        case 0x215e44u: goto label_215e44;
        case 0x215e48u: goto label_215e48;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e50u: goto label_215e50;
        case 0x215e54u: goto label_215e54;
        case 0x215e58u: goto label_215e58;
        case 0x215e5cu: goto label_215e5c;
        case 0x215e60u: goto label_215e60;
        case 0x215e64u: goto label_215e64;
        case 0x215e68u: goto label_215e68;
        case 0x215e6cu: goto label_215e6c;
        case 0x215e70u: goto label_215e70;
        case 0x215e74u: goto label_215e74;
        case 0x215e78u: goto label_215e78;
        case 0x215e7cu: goto label_215e7c;
        case 0x215e80u: goto label_215e80;
        case 0x215e84u: goto label_215e84;
        case 0x215e88u: goto label_215e88;
        case 0x215e8cu: goto label_215e8c;
        case 0x215e90u: goto label_215e90;
        case 0x215e94u: goto label_215e94;
        case 0x215e98u: goto label_215e98;
        case 0x215e9cu: goto label_215e9c;
        case 0x215ea0u: goto label_215ea0;
        case 0x215ea4u: goto label_215ea4;
        case 0x215ea8u: goto label_215ea8;
        case 0x215eacu: goto label_215eac;
        case 0x215eb0u: goto label_215eb0;
        case 0x215eb4u: goto label_215eb4;
        case 0x215eb8u: goto label_215eb8;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec0u: goto label_215ec0;
        case 0x215ec4u: goto label_215ec4;
        case 0x215ec8u: goto label_215ec8;
        case 0x215eccu: goto label_215ecc;
        case 0x215ed0u: goto label_215ed0;
        case 0x215ed4u: goto label_215ed4;
        case 0x215ed8u: goto label_215ed8;
        case 0x215edcu: goto label_215edc;
        case 0x215ee0u: goto label_215ee0;
        case 0x215ee4u: goto label_215ee4;
        case 0x215ee8u: goto label_215ee8;
        case 0x215eecu: goto label_215eec;
        case 0x215ef0u: goto label_215ef0;
        case 0x215ef4u: goto label_215ef4;
        case 0x215ef8u: goto label_215ef8;
        case 0x215efcu: goto label_215efc;
        case 0x215f00u: goto label_215f00;
        case 0x215f04u: goto label_215f04;
        case 0x215f08u: goto label_215f08;
        case 0x215f0cu: goto label_215f0c;
        case 0x215f10u: goto label_215f10;
        case 0x215f14u: goto label_215f14;
        case 0x215f18u: goto label_215f18;
        case 0x215f1cu: goto label_215f1c;
        case 0x215f20u: goto label_215f20;
        case 0x215f24u: goto label_215f24;
        case 0x215f28u: goto label_215f28;
        case 0x215f2cu: goto label_215f2c;
        case 0x215f30u: goto label_215f30;
        case 0x215f34u: goto label_215f34;
        case 0x215f38u: goto label_215f38;
        case 0x215f3cu: goto label_215f3c;
        case 0x215f40u: goto label_215f40;
        case 0x215f44u: goto label_215f44;
        case 0x215f48u: goto label_215f48;
        case 0x215f4cu: goto label_215f4c;
        case 0x215f50u: goto label_215f50;
        case 0x215f54u: goto label_215f54;
        case 0x215f58u: goto label_215f58;
        case 0x215f5cu: goto label_215f5c;
        case 0x215f60u: goto label_215f60;
        case 0x215f64u: goto label_215f64;
        case 0x215f68u: goto label_215f68;
        case 0x215f6cu: goto label_215f6c;
        case 0x215f70u: goto label_215f70;
        case 0x215f74u: goto label_215f74;
        case 0x215f78u: goto label_215f78;
        case 0x215f7cu: goto label_215f7c;
        case 0x215f80u: goto label_215f80;
        case 0x215f84u: goto label_215f84;
        case 0x215f88u: goto label_215f88;
        case 0x215f8cu: goto label_215f8c;
        case 0x215f90u: goto label_215f90;
        case 0x215f94u: goto label_215f94;
        case 0x215f98u: goto label_215f98;
        case 0x215f9cu: goto label_215f9c;
        case 0x215fa0u: goto label_215fa0;
        case 0x215fa4u: goto label_215fa4;
        case 0x215fa8u: goto label_215fa8;
        case 0x215facu: goto label_215fac;
        case 0x215fb0u: goto label_215fb0;
        case 0x215fb4u: goto label_215fb4;
        case 0x215fb8u: goto label_215fb8;
        case 0x215fbcu: goto label_215fbc;
        case 0x215fc0u: goto label_215fc0;
        case 0x215fc4u: goto label_215fc4;
        case 0x215fc8u: goto label_215fc8;
        case 0x215fccu: goto label_215fcc;
        case 0x215fd0u: goto label_215fd0;
        case 0x215fd4u: goto label_215fd4;
        case 0x215fd8u: goto label_215fd8;
        case 0x215fdcu: goto label_215fdc;
        case 0x215fe0u: goto label_215fe0;
        case 0x215fe4u: goto label_215fe4;
        case 0x215fe8u: goto label_215fe8;
        case 0x215fecu: goto label_215fec;
        case 0x215ff0u: goto label_215ff0;
        case 0x215ff4u: goto label_215ff4;
        case 0x215ff8u: goto label_215ff8;
        case 0x215ffcu: goto label_215ffc;
        case 0x216000u: goto label_216000;
        case 0x216004u: goto label_216004;
        case 0x216008u: goto label_216008;
        case 0x21600cu: goto label_21600c;
        case 0x216010u: goto label_216010;
        case 0x216014u: goto label_216014;
        case 0x216018u: goto label_216018;
        case 0x21601cu: goto label_21601c;
        case 0x216020u: goto label_216020;
        case 0x216024u: goto label_216024;
        case 0x216028u: goto label_216028;
        case 0x21602cu: goto label_21602c;
        case 0x216030u: goto label_216030;
        case 0x216034u: goto label_216034;
        case 0x216038u: goto label_216038;
        case 0x21603cu: goto label_21603c;
        case 0x216040u: goto label_216040;
        case 0x216044u: goto label_216044;
        case 0x216048u: goto label_216048;
        case 0x21604cu: goto label_21604c;
        case 0x216050u: goto label_216050;
        case 0x216054u: goto label_216054;
        case 0x216058u: goto label_216058;
        case 0x21605cu: goto label_21605c;
        case 0x216060u: goto label_216060;
        case 0x216064u: goto label_216064;
        case 0x216068u: goto label_216068;
        case 0x21606cu: goto label_21606c;
        case 0x216070u: goto label_216070;
        case 0x216074u: goto label_216074;
        case 0x216078u: goto label_216078;
        case 0x21607cu: goto label_21607c;
        case 0x216080u: goto label_216080;
        case 0x216084u: goto label_216084;
        case 0x216088u: goto label_216088;
        case 0x21608cu: goto label_21608c;
        case 0x216090u: goto label_216090;
        case 0x216094u: goto label_216094;
        case 0x216098u: goto label_216098;
        case 0x21609cu: goto label_21609c;
        case 0x2160a0u: goto label_2160a0;
        case 0x2160a4u: goto label_2160a4;
        case 0x2160a8u: goto label_2160a8;
        case 0x2160acu: goto label_2160ac;
        case 0x2160b0u: goto label_2160b0;
        case 0x2160b4u: goto label_2160b4;
        case 0x2160b8u: goto label_2160b8;
        case 0x2160bcu: goto label_2160bc;
        case 0x2160c0u: goto label_2160c0;
        case 0x2160c4u: goto label_2160c4;
        case 0x2160c8u: goto label_2160c8;
        case 0x2160ccu: goto label_2160cc;
        case 0x2160d0u: goto label_2160d0;
        case 0x2160d4u: goto label_2160d4;
        case 0x2160d8u: goto label_2160d8;
        case 0x2160dcu: goto label_2160dc;
        case 0x2160e0u: goto label_2160e0;
        case 0x2160e4u: goto label_2160e4;
        case 0x2160e8u: goto label_2160e8;
        case 0x2160ecu: goto label_2160ec;
        case 0x2160f0u: goto label_2160f0;
        case 0x2160f4u: goto label_2160f4;
        case 0x2160f8u: goto label_2160f8;
        case 0x2160fcu: goto label_2160fc;
        case 0x216100u: goto label_216100;
        case 0x216104u: goto label_216104;
        case 0x216108u: goto label_216108;
        case 0x21610cu: goto label_21610c;
        case 0x216110u: goto label_216110;
        case 0x216114u: goto label_216114;
        case 0x216118u: goto label_216118;
        case 0x21611cu: goto label_21611c;
        case 0x216120u: goto label_216120;
        case 0x216124u: goto label_216124;
        case 0x216128u: goto label_216128;
        case 0x21612cu: goto label_21612c;
        case 0x216130u: goto label_216130;
        case 0x216134u: goto label_216134;
        case 0x216138u: goto label_216138;
        case 0x21613cu: goto label_21613c;
        case 0x216140u: goto label_216140;
        case 0x216144u: goto label_216144;
        case 0x216148u: goto label_216148;
        case 0x21614cu: goto label_21614c;
        case 0x216150u: goto label_216150;
        case 0x216154u: goto label_216154;
        default: return;
    }

label_215988:
    // 0x215988: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21598c:
    // 0x21598c: 0x8f87924c  lw          $a3, -0x6DB4($gp)
    ctx->pc = 0x21598cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_215990:
    // 0x215990: 0xac208ab0  sw          $zero, -0x7550($at)
    ctx->pc = 0x215990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937264), GPR_U32(ctx, 0));
label_215994:
    // 0x215994: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_215998:
    // 0x215998: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21599c:
    // 0x21599c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2159a0:
    // 0x2159a0: 0xac208ab4  sw          $zero, -0x754C($at)
    ctx->pc = 0x2159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937268), GPR_U32(ctx, 0));
label_2159a4:
    // 0x2159a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2159a8:
    // 0x2159a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159ac:
    // 0x2159ac: 0xaf829220  sw          $v0, -0x6DE0($gp)
    ctx->pc = 0x2159acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), GPR_U32(ctx, 2));
label_2159b0:
    // 0x2159b0: 0xac208ab8  sw          $zero, -0x7548($at)
    ctx->pc = 0x2159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937272), GPR_U32(ctx, 0));
label_2159b4:
    // 0x2159b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2159b8:
    // 0x2159b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159bc:
    // 0x2159bc: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
label_2159c0:
    // 0x2159c0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2159c4:
    // 0x2159c4: 0xac288abc  sw          $t0, -0x7544($at)
    ctx->pc = 0x2159c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937276), GPR_U32(ctx, 8));
label_2159c8:
    // 0x2159c8: 0xaf809244  sw          $zero, -0x6DBC($gp)
    ctx->pc = 0x2159c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 0));
label_2159cc:
    // 0x2159cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2159d0:
    // 0x2159d0: 0xaf809240  sw          $zero, -0x6DC0($gp)
    ctx->pc = 0x2159d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 0));
label_2159d4:
    // 0x2159d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2159d8:
    // 0x2159d8: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x2159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
label_2159dc:
    // 0x2159dc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_2159e0:
    // 0x2159e0: 0xaf88922c  sw          $t0, -0x6DD4($gp)
    ctx->pc = 0x2159e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), GPR_U32(ctx, 8));
label_2159e4:
    // 0x2159e4: 0x24a5d674  addiu       $a1, $a1, -0x298C
    ctx->pc = 0x2159e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956660));
label_2159e8:
    // 0x2159e8: 0xaf80921c  sw          $zero, -0x6DE4($gp)
    ctx->pc = 0x2159e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
label_2159ec:
    // 0x2159ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_2159f0:
    // 0x2159f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2159f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2159f4:
    // 0x2159f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159f8:
    // 0x2159f8: 0x2463d730  addiu       $v1, $v1, -0x28D0
    ctx->pc = 0x2159f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956848));
label_2159fc:
    // 0x2159fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_215a00:
    // 0x215a00: 0x2442d734  addiu       $v0, $v0, -0x28CC
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956852));
label_215a04:
    // 0x215a04: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_215a08:
    // 0x215a08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_215a0c:
    // 0x215a0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_215a10:
    // 0x215a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215a14:
    // 0x215a14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_215a18:
    // 0x215a18: 0xac208aa4  sw          $zero, -0x755C($at)
    ctx->pc = 0x215a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937252), GPR_U32(ctx, 0));
label_215a1c:
    // 0x215a1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a20:
    // 0x215a20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_215a24:
    // 0x215a24: 0xe4208aa0  swc1        $f0, -0x7560($at)
    ctx->pc = 0x215a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937248), bits); }
label_215a28:
    // 0x215a28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x215a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a2c:
    // 0x215a2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a30:
    // 0x215a30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_215a34:
    // 0x215a34: 0xac288aac  sw          $t0, -0x7554($at)
    ctx->pc = 0x215a34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937260), GPR_U32(ctx, 8));
label_215a38:
    // 0x215a38: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a3c:
    // 0x215a3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_215a40:
    // 0x215a40: 0xe4208aa8  swc1        $f0, -0x7558($at)
    ctx->pc = 0x215a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937256), bits); }
label_215a44:
    // 0x215a44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x215a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a48:
    // 0x215a48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a4c:
    // 0x215a4c: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x215a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_215a50:
    // 0x215a50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x215a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a54:
    // 0x215a54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a58:
    // 0x215a58: 0xe4208a94  swc1        $f0, -0x756C($at)
    ctx->pc = 0x215a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_215a5c:
    // 0x215a5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a60:
    // 0x215a60: 0xac288a8c  sw          $t0, -0x7574($at)
    ctx->pc = 0x215a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 8));
label_215a64:
    // 0x215a64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a68:
    // 0x215a68: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x215a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U32(ctx, 0));
label_215a6c:
    // 0x215a6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a70:
    // 0x215a70: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x215a70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937244), GPR_U32(ctx, 0));
label_215a74:
    // 0x215a74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a78:
    // 0x215a78: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x215a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U32(ctx, 0));
label_215a7c:
    // 0x215a7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a80:
    // 0x215a80: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x215a80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937220), GPR_U32(ctx, 0));
label_215a84:
    // 0x215a84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a88:
    // 0x215a88: 0xc0856a8  jal         func_215AA0
label_215a8c:
    if (ctx->pc == 0x215A8Cu) {
        ctx->pc = 0x215A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A88u;
        // 0x215a8c: 0xac208a88  sw          $zero, -0x7578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A90u;
        goto label_215a90;
    }
    ctx->pc = 0x215A88u;
    SET_GPR_U32(ctx, 31, 0x215A90u);
    ctx->pc = 0x215A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A88u;
    // 0x215a8c: 0xac208a88  sw          $zero, -0x7578($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215AA0u;
    goto label_215aa0;
    ctx->pc = 0x215A90u;
label_215a90:
    // 0x215a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215a94:
    // 0x215a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_215a98:
    // 0x215a98: 0x3e00008  jr          $ra
label_215a9c:
    if (ctx->pc == 0x215A9Cu) {
        ctx->pc = 0x215A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A98u;
        // 0x215a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AA0u;
        goto label_215aa0;
    }
    ctx->pc = 0x215A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A98u;
        // 0x215a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AA0u;
label_215aa0:
    // 0x215aa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_215aa4:
    // 0x215aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x215aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_215aa8:
    // 0x215aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x215aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_215aac:
    // 0x215aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x215aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_215ab0:
    // 0x215ab0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x215ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ab4:
    // 0x215ab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x215ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_215ab8:
    // 0x215ab8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x215ab8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215abc:
    // 0x215abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x215abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_215ac0:
    // 0x215ac0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x215ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ac4:
    // 0x215ac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x215ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_215ac8:
    // 0x215ac8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x215ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215acc:
    // 0x215acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x215accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_215ad0:
    // 0x215ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x215ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_215ad4:
    // 0x215ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x215ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_215ad8:
    // 0x215ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_215adc:
    // 0x215adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x215adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae0:
    // 0x215ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae4:
    // 0x215ae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x215ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae8:
    // 0x215ae8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x215ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215aec:
    // 0x215aec: 0x0  nop
    ctx->pc = 0x215aecu;
    // NOP
label_215af0:
    // 0x215af0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x215af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_215af4:
    // 0x215af4: 0x24428680  addiu       $v0, $v0, -0x7980
    ctx->pc = 0x215af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936192));
label_215af8:
    // 0x215af8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x215af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_215afc:
    // 0x215afc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_215b00:
    // 0x215b00: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_215b04:
    // 0x215b04: 0x12e00036  beqz        $s7, . + 4 + (0x36 << 2)
label_215b08:
    if (ctx->pc == 0x215B08u) {
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B0Cu;
        goto label_215b0c;
    }
    ctx->pc = 0x215B04u;
    {
        const bool branch_taken_0x215b04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b04) {
            ctx->pc = 0x215BE0u;
            goto label_215be0;
        }
    }
    ctx->pc = 0x215B0Cu;
label_215b0c:
    // 0x215b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215b10:
    // 0x215b10: 0xc07b95c  jal         func_1EE570
label_215b14:
    if (ctx->pc == 0x215B14u) {
        ctx->pc = 0x215B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B10u;
        // 0x215b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B18u;
        goto label_215b18;
    }
    ctx->pc = 0x215B10u;
    SET_GPR_U32(ctx, 31, 0x215B18u);
    ctx->pc = 0x215B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B10u;
    // 0x215b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE570u;
    { ctx->pc = 0x1ee570; return; }
    ctx->pc = 0x215B18u;
label_215b18:
    // 0x215b18: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_215b1c:
    if (ctx->pc == 0x215B1Cu) {
        ctx->pc = 0x215B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B18u;
        // 0x215b1c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B20u;
        goto label_215b20;
    }
    ctx->pc = 0x215B18u;
    {
        const bool branch_taken_0x215b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B18u;
        // 0x215b1c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b18) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215B20u;
label_215b20:
    // 0x215b20: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x215b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_215b24:
    // 0x215b24: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x215b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_215b28:
    // 0x215b28: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_215b2c:
    // 0x215b2c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x215b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_215b30:
    // 0x215b30: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x215b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_215b34:
    // 0x215b34: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x215b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_215b38:
    // 0x215b38: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x215b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_215b3c:
    // 0x215b3c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_215b40:
    // 0x215b40: 0x90850221  lbu         $a1, 0x221($a0)
    ctx->pc = 0x215b40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 545)));
label_215b44:
    // 0x215b44: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x215b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_215b48:
    // 0x215b48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215b4c:
    // 0x215b4c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x215b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_215b50:
    // 0x215b50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x215b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215b54:
    // 0x215b54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_215b58:
    // 0x215b58: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x215b58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_215b5c:
    // 0x215b5c: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_215b60:
    if (ctx->pc == 0x215B60u) {
        ctx->pc = 0x215B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B5Cu;
        // 0x215b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B64u;
        goto label_215b64;
    }
    ctx->pc = 0x215B5Cu;
    {
        const bool branch_taken_0x215b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B5Cu;
        // 0x215b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b5c) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215B64u;
label_215b64:
    // 0x215b64: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_215b68:
    if (ctx->pc == 0x215B68u) {
        ctx->pc = 0x215B6Cu;
        goto label_215b6c;
    }
    ctx->pc = 0x215B64u;
    {
        const bool branch_taken_0x215b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x215b64) {
            ctx->pc = 0x215B7Cu;
            goto label_215b7c;
        }
    }
    ctx->pc = 0x215B6Cu;
label_215b6c:
    // 0x215b6c: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
label_215b70:
    // 0x215b70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x215b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215b74:
    // 0x215b74: 0x10000004  b           . + 4 + (0x4 << 2)
label_215b78:
    if (ctx->pc == 0x215B78u) {
        ctx->pc = 0x215B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B74u;
        // 0x215b78: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B7Cu;
        goto label_215b7c;
    }
    ctx->pc = 0x215B74u;
    {
        const bool branch_taken_0x215b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B74u;
        // 0x215b78: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b74) {
            ctx->pc = 0x215B88u;
            goto label_215b88;
        }
    }
    ctx->pc = 0x215B7Cu;
label_215b7c:
    // 0x215b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215b80:
    // 0x215b80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x215b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215b84:
    // 0x215b84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x215b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215b88:
    // 0x215b88: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x215b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_215b8c:
    // 0x215b8c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x215b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215b90:
    // 0x215b90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215b94:
    // 0x215b94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x215b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215b98:
    // 0x215b98: 0xc4a3001c  lwc1        $f3, 0x1C($a1)
    ctx->pc = 0x215b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_215b9c:
    // 0x215b9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215ba0:
    // 0x215ba0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x215ba0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_215ba4:
    // 0x215ba4: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x215ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_215ba8:
    // 0x215ba8: 0x10200b  movn        $a0, $zero, $s0
    ctx->pc = 0x215ba8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_215bac:
    // 0x215bac: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x215bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
label_215bb0:
    // 0x215bb0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x215bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_215bb4:
    // 0x215bb4: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x215bb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_215bb8:
    // 0x215bb8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x215bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_215bbc:
    // 0x215bbc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x215bbcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_215bc0:
    // 0x215bc0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x215bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_215bc4:
    // 0x215bc4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x215bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_215bc8:
    // 0x215bc8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x215bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_215bcc:
    // 0x215bcc: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x215bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_215bd0:
    // 0x215bd0: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x215bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_215bd4:
    // 0x215bd4: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x215bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_215bd8:
    // 0x215bd8: 0x10000031  b           . + 4 + (0x31 << 2)
label_215bdc:
    if (ctx->pc == 0x215BDCu) {
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BE0u;
        goto label_215be0;
    }
    ctx->pc = 0x215BD8u;
    {
        const bool branch_taken_0x215bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bd8) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215BE0u;
label_215be0:
    // 0x215be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215be4:
    // 0x215be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215be8:
    // 0x215be8: 0xc08675c  jal         func_219D70
label_215bec:
    if (ctx->pc == 0x215BECu) {
        ctx->pc = 0x215BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BE8u;
        // 0x215bec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BF0u;
        goto label_215bf0;
    }
    ctx->pc = 0x215BE8u;
    SET_GPR_U32(ctx, 31, 0x215BF0u);
    ctx->pc = 0x215BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BE8u;
    // 0x215bec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x215BF0u;
label_215bf0:
    // 0x215bf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x215bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215bf4:
    // 0x215bf4: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
label_215bf8:
    if (ctx->pc == 0x215BF8u) {
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BFCu;
        goto label_215bfc;
    }
    ctx->pc = 0x215BF4u;
    {
        const bool branch_taken_0x215bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bf4) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215BFCu;
label_215bfc:
    // 0x215bfc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x215bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_215c00:
    // 0x215c00: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_215c04:
    // 0x215c04: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x215c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_215c08:
    // 0x215c08: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x215c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_215c0c:
    // 0x215c0c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x215c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_215c10:
    // 0x215c10: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_215c14:
    // 0x215c14: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x215c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_215c18:
    // 0x215c18: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x215c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_215c1c:
    // 0x215c1c: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x215c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_215c20:
    // 0x215c20: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x215c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_215c24:
    // 0x215c24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215c28:
    // 0x215c28: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_215c2c:
    // 0x215c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215c30:
    // 0x215c30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x215c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215c34:
    // 0x215c34: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x215c34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_215c38:
    // 0x215c38: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_215c3c:
    if (ctx->pc == 0x215C3Cu) {
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C40u;
        goto label_215c40;
    }
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215C40u;
label_215c40:
    // 0x215c40: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_215c44:
    if (ctx->pc == 0x215C44u) {
        ctx->pc = 0x215C48u;
        goto label_215c48;
    }
    ctx->pc = 0x215C40u;
    {
        const bool branch_taken_0x215c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x215c40) {
            ctx->pc = 0x215C58u;
            goto label_215c58;
        }
    }
    ctx->pc = 0x215C48u;
label_215c48:
    // 0x215c48: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x215c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
label_215c4c:
    // 0x215c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215c50:
    // 0x215c50: 0x10000004  b           . + 4 + (0x4 << 2)
label_215c54:
    if (ctx->pc == 0x215C54u) {
        ctx->pc = 0x215C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C50u;
        // 0x215c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C58u;
        goto label_215c58;
    }
    ctx->pc = 0x215C50u;
    {
        const bool branch_taken_0x215c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C50u;
        // 0x215c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c50) {
            ctx->pc = 0x215C64u;
            goto label_215c64;
        }
    }
    ctx->pc = 0x215C58u;
label_215c58:
    // 0x215c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215c5c:
    // 0x215c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215c60:
    // 0x215c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215c64:
    // 0x215c64: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_215c68:
    // 0x215c68: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x215c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
label_215c6c:
    // 0x215c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x215c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215c70:
    // 0x215c70: 0x10280b  movn        $a1, $zero, $s0
    ctx->pc = 0x215c70u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_215c74:
    // 0x215c74: 0xae450024  sw          $a1, 0x24($s2)
    ctx->pc = 0x215c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 5));
label_215c78:
    // 0x215c78: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x215c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_215c7c:
    // 0x215c7c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x215c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_215c80:
    // 0x215c80: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x215c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_215c84:
    // 0x215c84: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x215c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_215c88:
    // 0x215c88: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x215c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_215c8c:
    // 0x215c8c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x215c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_215c90:
    // 0x215c90: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x215c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_215c94:
    // 0x215c94: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x215c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_215c98:
    // 0x215c98: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x215c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_215c9c:
    // 0x215c9c: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x215c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_215ca0:
    // 0x215ca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x215ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_215ca4:
    // 0x215ca4: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x215ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_215ca8:
    // 0x215ca8: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x215ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_215cac:
    // 0x215cac: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_215cb0:
    if (ctx->pc == 0x215CB0u) {
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x26940240  addiu       $s4, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215CB4u;
        goto label_215cb4;
    }
    ctx->pc = 0x215CACu;
    {
        const bool branch_taken_0x215cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x26940240  addiu       $s4, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cac) {
            ctx->pc = 0x215AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215aec;
        }
    }
    ctx->pc = 0x215CB4u;
label_215cb4:
    // 0x215cb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_215cb8:
    // 0x215cb8: 0x27de01e0  addiu       $fp, $fp, 0x1E0
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 480));
label_215cbc:
    // 0x215cbc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x215cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_215cc0:
    // 0x215cc0: 0x26b51b00  addiu       $s5, $s5, 0x1B00
    ctx->pc = 0x215cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
label_215cc4:
    // 0x215cc4: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_215cc8:
    if (ctx->pc == 0x215CC8u) {
        ctx->pc = 0x215CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC4u;
        // 0x215cc8: 0x26d647b8  addiu       $s6, $s6, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215CCCu;
        goto label_215ccc;
    }
    ctx->pc = 0x215CC4u;
    {
        const bool branch_taken_0x215cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC4u;
        // 0x215cc8: 0x26d647b8  addiu       $s6, $s6, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cc4) {
            ctx->pc = 0x215AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215CCCu;
label_215ccc:
    // 0x215ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd0:
    // 0x215cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd4:
    // 0x215cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd8:
    // 0x215cd8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x215cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_215cdc:
    // 0x215cdc: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x215cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_215ce0:
    // 0x215ce0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x215ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215ce4:
    // 0x215ce4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x215ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_215ce8:
    // 0x215ce8: 0x25ef2570  addiu       $t7, $t7, 0x2570
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9584));
label_215cec:
    // 0x215cec: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x215cecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215cf0:
    // 0x215cf0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x215cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_215cf4:
    // 0x215cf4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215cf8:
    // 0x215cf8: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_215cfc:
    // 0x215cfc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x215cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215d00:
    // 0x215d00: 0x24848620  addiu       $a0, $a0, -0x79E0
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
label_215d04:
    // 0x215d04: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x215d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_215d08:
    // 0x215d08: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x215d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215d0c:
    // 0x215d0c: 0x667021  addu        $t6, $v1, $a2
    ctx->pc = 0x215d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_215d10:
    // 0x215d10: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x215d10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
label_215d14:
    // 0x215d14: 0x91cd367c  lbu         $t5, 0x367C($t6)
    ctx->pc = 0x215d14u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 13948)));
label_215d18:
    // 0x215d18: 0x11a0002d  beqz        $t5, . + 4 + (0x2D << 2)
label_215d1c:
    if (ctx->pc == 0x215D1Cu) {
        ctx->pc = 0x215D20u;
        goto label_215d20;
    }
    ctx->pc = 0x215D18u;
    {
        const bool branch_taken_0x215d18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d18) {
            ctx->pc = 0x215DD0u;
            goto label_215dd0;
        }
    }
    ctx->pc = 0x215D20u;
label_215d20:
    // 0x215d20: 0x8dd03674  lw          $s0, 0x3674($t6)
    ctx->pc = 0x215d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 13940)));
label_215d24:
    // 0x215d24: 0x8dce366c  lw          $t6, 0x366C($t6)
    ctx->pc = 0x215d24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 13932)));
label_215d28:
    // 0x215d28: 0x106a00  sll         $t5, $s0, 8
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_215d2c:
    // 0x215d2c: 0x1b08023  subu        $s0, $t5, $s0
    ctx->pc = 0x215d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
label_215d30:
    // 0x215d30: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x215d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_215d34:
    // 0x215d34: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x215d34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_215d38:
    // 0x215d38: 0x1070c0  sll         $t6, $s0, 3
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_215d3c:
    // 0x215d3c: 0x20e8021  addu        $s0, $s0, $t6
    ctx->pc = 0x215d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_215d40:
    // 0x215d40: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_215d44:
    // 0x215d44: 0x1068c0  sll         $t5, $s0, 3
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_215d48:
    // 0x215d48: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x215d48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_215d4c:
    // 0x215d4c: 0x25ad0000  addiu       $t5, $t5, 0x0
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 0));
label_215d50:
    // 0x215d50: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
label_215d54:
    if (ctx->pc == 0x215D54u) {
        ctx->pc = 0x215D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D50u;
        // 0x215d54: 0x1ae6821  addu        $t5, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D58u;
        goto label_215d58;
    }
    ctx->pc = 0x215D50u;
    {
        const bool branch_taken_0x215d50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D50u;
        // 0x215d54: 0x1ae6821  addu        $t5, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d50) {
            ctx->pc = 0x215DA0u;
            goto label_215da0;
        }
    }
    ctx->pc = 0x215D58u;
label_215d58:
    // 0x215d58: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x215d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215d5c:
    // 0x215d5c: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x215d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215d60:
    // 0x215d60: 0xc5a2001c  lwc1        $f2, 0x1C($t5)
    ctx->pc = 0x215d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215d64:
    // 0x215d64: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x215d64u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_215d68:
    // 0x215d68: 0xad0c0020  sw          $t4, 0x20($t0)
    ctx->pc = 0x215d68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 12));
label_215d6c:
    // 0x215d6c: 0xad0b0024  sw          $t3, 0x24($t0)
    ctx->pc = 0x215d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 11));
label_215d70:
    // 0x215d70: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x215d70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_215d74:
    // 0x215d74: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x215d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_215d78:
    // 0x215d78: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x215d78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_215d7c:
    // 0x215d7c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x215d7cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_215d80:
    // 0x215d80: 0xad0a000c  sw          $t2, 0xC($t0)
    ctx->pc = 0x215d80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 10));
label_215d84:
    // 0x215d84: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x215d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_215d88:
    // 0x215d88: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x215d88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_215d8c:
    // 0x215d8c: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x215d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_215d90:
    // 0x215d90: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x215d90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_215d94:
    // 0x215d94: 0xad0a0028  sw          $t2, 0x28($t0)
    ctx->pc = 0x215d94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 10));
label_215d98:
    // 0x215d98: 0x1000000d  b           . + 4 + (0xD << 2)
label_215d9c:
    if (ctx->pc == 0x215D9Cu) {
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xad00002c  sw          $zero, 0x2C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DA0u;
        goto label_215da0;
    }
    ctx->pc = 0x215D98u;
    {
        const bool branch_taken_0x215d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xad00002c  sw          $zero, 0x2C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d98) {
            ctx->pc = 0x215DD0u;
            goto label_215dd0;
        }
    }
    ctx->pc = 0x215DA0u;
label_215da0:
    // 0x215da0: 0xad0c0020  sw          $t4, 0x20($t0)
    ctx->pc = 0x215da0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 12));
label_215da4:
    // 0x215da4: 0xad0b0024  sw          $t3, 0x24($t0)
    ctx->pc = 0x215da4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 11));
label_215da8:
    // 0x215da8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x215da8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_215dac:
    // 0x215dac: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x215dacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_215db0:
    // 0x215db0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x215db0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_215db4:
    // 0x215db4: 0xad0a000c  sw          $t2, 0xC($t0)
    ctx->pc = 0x215db4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 10));
label_215db8:
    // 0x215db8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x215db8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_215dbc:
    // 0x215dbc: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x215dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_215dc0:
    // 0x215dc0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x215dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_215dc4:
    // 0x215dc4: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x215dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_215dc8:
    // 0x215dc8: 0xad0a0028  sw          $t2, 0x28($t0)
    ctx->pc = 0x215dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 10));
label_215dcc:
    // 0x215dcc: 0xad09002c  sw          $t1, 0x2C($t0)
    ctx->pc = 0x215dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 9));
label_215dd0:
    // 0x215dd0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_215dd4:
    // 0x215dd4: 0x28e80002  slti        $t0, $a3, 0x2
    ctx->pc = 0x215dd4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_215dd8:
    // 0x215dd8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x215dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_215ddc:
    // 0x215ddc: 0x1500ffca  bnez        $t0, . + 4 + (-0x36 << 2)
label_215de0:
    if (ctx->pc == 0x215DE0u) {
        ctx->pc = 0x215DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DDCu;
        // 0x215de0: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DE4u;
        goto label_215de4;
    }
    ctx->pc = 0x215DDCu;
    {
        const bool branch_taken_0x215ddc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x215DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DDCu;
        // 0x215de0: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ddc) {
            ctx->pc = 0x215D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215d08;
        }
    }
    ctx->pc = 0x215DE4u;
label_215de4:
    // 0x215de4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x215de4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215de8:
    // 0x215de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215dec:
    // 0x215dec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215df0:
    // 0x215df0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_215df4:
    // 0x215df4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_215df8:
    // 0x215df8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x215df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215dfc:
    // 0x215dfc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_215e00:
    // 0x215e00: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x215e00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215e04:
    // 0x215e04: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x215e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_215e08:
    // 0x215e08: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x215e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_215e0c:
    // 0x215e0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215e10:
    // 0x215e10: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
label_215e14:
    // 0x215e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x215e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215e18:
    // 0x215e18: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x215e18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
label_215e1c:
    // 0x215e1c: 0x24c68320  addiu       $a2, $a2, -0x7CE0
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935328));
label_215e20:
    // 0x215e20: 0x24a524b0  addiu       $a1, $a1, 0x24B0
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
label_215e24:
    // 0x215e24: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_215e28:
    // 0x215e28: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x215e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_215e2c:
    // 0x215e2c: 0xad800020  sw          $zero, 0x20($t4)
    ctx->pc = 0x215e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 0));
label_215e30:
    // 0x215e30: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x215e30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_215e34:
    // 0x215e34: 0x1144006a  beq         $t2, $a0, . + 4 + (0x6A << 2)
label_215e38:
    if (ctx->pc == 0x215E38u) {
        ctx->pc = 0x215E3Cu;
        goto label_215e3c;
    }
    ctx->pc = 0x215E34u;
    {
        const bool branch_taken_0x215e34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x215e34) {
            ctx->pc = 0x215FE0u;
            goto label_215fe0;
        }
    }
    ctx->pc = 0x215E3Cu;
label_215e3c:
    // 0x215e3c: 0x12e00039  beqz        $s7, . + 4 + (0x39 << 2)
label_215e40:
    if (ctx->pc == 0x215E40u) {
        ctx->pc = 0x215E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E3Cu;
        // 0x215e40: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E44u;
        goto label_215e44;
    }
    ctx->pc = 0x215E3Cu;
    {
        const bool branch_taken_0x215e3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E3Cu;
        // 0x215e40: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e3c) {
            ctx->pc = 0x215F24u;
            goto label_215f24;
        }
    }
    ctx->pc = 0x215E44u;
label_215e44:
    // 0x215e44: 0x8d2d0004  lw          $t5, 0x4($t1)
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_215e48:
    // 0x215e48: 0x8c2e4900  lw          $t6, 0x4900($at)
    ctx->pc = 0x215e48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_215e4c:
    // 0x215e4c: 0x1cd082a  slt         $at, $t6, $t5
    ctx->pc = 0x215e4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_215e50:
    // 0x215e50: 0x14200063  bnez        $at, . + 4 + (0x63 << 2)
label_215e54:
    if (ctx->pc == 0x215E54u) {
        ctx->pc = 0x215E58u;
        goto label_215e58;
    }
    ctx->pc = 0x215E50u;
    {
        const bool branch_taken_0x215e50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e50) {
            ctx->pc = 0x215FE0u;
            goto label_215fe0;
        }
    }
    ctx->pc = 0x215E58u;
label_215e58:
    // 0x215e58: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x215e58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_215e5c:
    // 0x215e5c: 0x1cd082a  slt         $at, $t6, $t5
    ctx->pc = 0x215e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_215e60:
    // 0x215e60: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_215e64:
    if (ctx->pc == 0x215E64u) {
        ctx->pc = 0x215E68u;
        goto label_215e68;
    }
    ctx->pc = 0x215E60u;
    {
        const bool branch_taken_0x215e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e60) {
            ctx->pc = 0x215FE0u;
            goto label_215fe0;
        }
    }
    ctx->pc = 0x215E68u;
label_215e68:
    // 0x215e68: 0x912d0001  lbu         $t5, 0x1($t1)
    ctx->pc = 0x215e68u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_215e6c:
    // 0x215e6c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215e70:
    if (ctx->pc == 0x215E70u) {
        ctx->pc = 0x215E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E6Cu;
        // 0x215e70: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E74u;
        goto label_215e74;
    }
    ctx->pc = 0x215E6Cu;
    {
        const bool branch_taken_0x215e6c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E6Cu;
        // 0x215e70: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e6c) {
            ctx->pc = 0x215E80u;
            goto label_215e80;
        }
    }
    ctx->pc = 0x215E74u;
label_215e74:
    // 0x215e74: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215e74u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215e78:
    // 0x215e78: 0x10000007  b           . + 4 + (0x7 << 2)
label_215e7c:
    if (ctx->pc == 0x215E7Cu) {
        ctx->pc = 0x215E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E78u;
        // 0x215e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E80u;
        goto label_215e80;
    }
    ctx->pc = 0x215E78u;
    {
        const bool branch_taken_0x215e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E78u;
        // 0x215e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e78) {
            ctx->pc = 0x215E98u;
            goto label_215e98;
        }
    }
    ctx->pc = 0x215E80u;
label_215e80:
    // 0x215e80: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215e84:
    // 0x215e84: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215e88:
    // 0x215e88: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215e88u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215e8c:
    // 0x215e8c: 0x0  nop
    ctx->pc = 0x215e8cu;
    // NOP
label_215e90:
    // 0x215e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215e94:
    // 0x215e94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215e98:
    // 0x215e98: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_215e9c:
    // 0x215e9c: 0x912d0000  lbu         $t5, 0x0($t1)
    ctx->pc = 0x215e9cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_215ea0:
    // 0x215ea0: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215ea4:
    if (ctx->pc == 0x215EA4u) {
        ctx->pc = 0x215EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EA0u;
        // 0x215ea4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EA8u;
        goto label_215ea8;
    }
    ctx->pc = 0x215EA0u;
    {
        const bool branch_taken_0x215ea0 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EA0u;
        // 0x215ea4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ea0) {
            ctx->pc = 0x215EB4u;
            goto label_215eb4;
        }
    }
    ctx->pc = 0x215EA8u;
label_215ea8:
    // 0x215ea8: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215ea8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215eac:
    // 0x215eac: 0x10000008  b           . + 4 + (0x8 << 2)
label_215eb0:
    if (ctx->pc == 0x215EB0u) {
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EB4u;
        goto label_215eb4;
    }
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eac) {
            ctx->pc = 0x215ED0u;
            goto label_215ed0;
        }
    }
    ctx->pc = 0x215EB4u;
label_215eb4:
    // 0x215eb4: 0xd7042  srl         $t6, $t5, 1
    ctx->pc = 0x215eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_215eb8:
    // 0x215eb8: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215eb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215ebc:
    // 0x215ebc: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215ec0:
    // 0x215ec0: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215ec0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215ec4:
    // 0x215ec4: 0x0  nop
    ctx->pc = 0x215ec4u;
    // NOP
label_215ec8:
    // 0x215ec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215ecc:
    // 0x215ecc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215ed0:
    // 0x215ed0: 0x91290003  lbu         $t1, 0x3($t1)
    ctx->pc = 0x215ed0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_215ed4:
    // 0x215ed4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_215ed8:
    // 0x215ed8: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x215ed8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215edc:
    // 0x215edc: 0x8a680b  movn        $t5, $a0, $t2
    ctx->pc = 0x215edcu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 4));
label_215ee0:
    // 0x215ee0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x215ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_215ee4:
    // 0x215ee4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x215ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_215ee8:
    // 0x215ee8: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x215ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_215eec:
    // 0x215eec: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x215eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215ef0:
    // 0x215ef0: 0xad900020  sw          $s0, 0x20($t4)
    ctx->pc = 0x215ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 16));
label_215ef4:
    // 0x215ef4: 0xad8d0024  sw          $t5, 0x24($t4)
    ctx->pc = 0x215ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 13));
label_215ef8:
    // 0x215ef8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x215ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_215efc:
    // 0x215efc: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x215efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_215f00:
    // 0x215f00: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x215f00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
label_215f04:
    // 0x215f04: 0xad8f000c  sw          $t7, 0xC($t4)
    ctx->pc = 0x215f04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 15));
label_215f08:
    // 0x215f08: 0xe5800010  swc1        $f0, 0x10($t4)
    ctx->pc = 0x215f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
label_215f0c:
    // 0x215f0c: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x215f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
label_215f10:
    // 0x215f10: 0xe5810018  swc1        $f1, 0x18($t4)
    ctx->pc = 0x215f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
label_215f14:
    // 0x215f14: 0xad8f001c  sw          $t7, 0x1C($t4)
    ctx->pc = 0x215f14u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 15));
label_215f18:
    // 0x215f18: 0xad8f0028  sw          $t7, 0x28($t4)
    ctx->pc = 0x215f18u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 15));
label_215f1c:
    // 0x215f1c: 0x10000030  b           . + 4 + (0x30 << 2)
label_215f20:
    if (ctx->pc == 0x215F20u) {
        ctx->pc = 0x215F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F1Cu;
        // 0x215f20: 0xad80002c  sw          $zero, 0x2C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F24u;
        goto label_215f24;
    }
    ctx->pc = 0x215F1Cu;
    {
        const bool branch_taken_0x215f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F1Cu;
        // 0x215f20: 0xad80002c  sw          $zero, 0x2C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f1c) {
            ctx->pc = 0x215FE0u;
            goto label_215fe0;
        }
    }
    ctx->pc = 0x215F24u;
label_215f24:
    // 0x215f24: 0x0  nop
    ctx->pc = 0x215f24u;
    // NOP
label_215f28:
    // 0x215f28: 0x912d0001  lbu         $t5, 0x1($t1)
    ctx->pc = 0x215f28u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_215f2c:
    // 0x215f2c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215f30:
    if (ctx->pc == 0x215F30u) {
        ctx->pc = 0x215F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F2Cu;
        // 0x215f30: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F34u;
        goto label_215f34;
    }
    ctx->pc = 0x215F2Cu;
    {
        const bool branch_taken_0x215f2c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F2Cu;
        // 0x215f30: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f2c) {
            ctx->pc = 0x215F40u;
            goto label_215f40;
        }
    }
    ctx->pc = 0x215F34u;
label_215f34:
    // 0x215f34: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215f34u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215f38:
    // 0x215f38: 0x10000007  b           . + 4 + (0x7 << 2)
label_215f3c:
    if (ctx->pc == 0x215F3Cu) {
        ctx->pc = 0x215F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F38u;
        // 0x215f3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F40u;
        goto label_215f40;
    }
    ctx->pc = 0x215F38u;
    {
        const bool branch_taken_0x215f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F38u;
        // 0x215f3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f38) {
            ctx->pc = 0x215F58u;
            goto label_215f58;
        }
    }
    ctx->pc = 0x215F40u;
label_215f40:
    // 0x215f40: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215f40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215f44:
    // 0x215f44: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215f44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215f48:
    // 0x215f48: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215f48u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215f4c:
    // 0x215f4c: 0x0  nop
    ctx->pc = 0x215f4cu;
    // NOP
label_215f50:
    // 0x215f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215f54:
    // 0x215f54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215f58:
    // 0x215f58: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_215f5c:
    // 0x215f5c: 0x912d0000  lbu         $t5, 0x0($t1)
    ctx->pc = 0x215f5cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_215f60:
    // 0x215f60: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215f64:
    if (ctx->pc == 0x215F64u) {
        ctx->pc = 0x215F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F60u;
        // 0x215f64: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F68u;
        goto label_215f68;
    }
    ctx->pc = 0x215F60u;
    {
        const bool branch_taken_0x215f60 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F60u;
        // 0x215f64: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f60) {
            ctx->pc = 0x215F74u;
            goto label_215f74;
        }
    }
    ctx->pc = 0x215F68u;
label_215f68:
    // 0x215f68: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215f68u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215f6c:
    // 0x215f6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_215f70:
    if (ctx->pc == 0x215F70u) {
        ctx->pc = 0x215F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F6Cu;
        // 0x215f70: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215F74u;
        goto label_215f74;
    }
    ctx->pc = 0x215F6Cu;
    {
        const bool branch_taken_0x215f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F6Cu;
        // 0x215f70: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f6c) {
            ctx->pc = 0x215F90u;
            goto label_215f90;
        }
    }
    ctx->pc = 0x215F74u;
label_215f74:
    // 0x215f74: 0xd7042  srl         $t6, $t5, 1
    ctx->pc = 0x215f74u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_215f78:
    // 0x215f78: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215f78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215f7c:
    // 0x215f7c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215f7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215f80:
    // 0x215f80: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215f80u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215f84:
    // 0x215f84: 0x0  nop
    ctx->pc = 0x215f84u;
    // NOP
label_215f88:
    // 0x215f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215f8c:
    // 0x215f8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215f90:
    // 0x215f90: 0x91290003  lbu         $t1, 0x3($t1)
    ctx->pc = 0x215f90u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_215f94:
    // 0x215f94: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_215f98:
    // 0x215f98: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x215f98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215f9c:
    // 0x215f9c: 0x8a680b  movn        $t5, $a0, $t2
    ctx->pc = 0x215f9cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 4));
label_215fa0:
    // 0x215fa0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x215fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_215fa4:
    // 0x215fa4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_215fa8:
    // 0x215fa8: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_215fac:
    // 0x215fac: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x215facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215fb0:
    // 0x215fb0: 0xad900020  sw          $s0, 0x20($t4)
    ctx->pc = 0x215fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 16));
label_215fb4:
    // 0x215fb4: 0xad8d0024  sw          $t5, 0x24($t4)
    ctx->pc = 0x215fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 13));
label_215fb8:
    // 0x215fb8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x215fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_215fbc:
    // 0x215fbc: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x215fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_215fc0:
    // 0x215fc0: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x215fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
label_215fc4:
    // 0x215fc4: 0xad8f000c  sw          $t7, 0xC($t4)
    ctx->pc = 0x215fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 15));
label_215fc8:
    // 0x215fc8: 0xe5800010  swc1        $f0, 0x10($t4)
    ctx->pc = 0x215fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
label_215fcc:
    // 0x215fcc: 0xad800014  sw          $zero, 0x14($t4)
    ctx->pc = 0x215fccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 0));
label_215fd0:
    // 0x215fd0: 0xe5810018  swc1        $f1, 0x18($t4)
    ctx->pc = 0x215fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
label_215fd4:
    // 0x215fd4: 0xad8f001c  sw          $t7, 0x1C($t4)
    ctx->pc = 0x215fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 15));
label_215fd8:
    // 0x215fd8: 0xad8f0028  sw          $t7, 0x28($t4)
    ctx->pc = 0x215fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 15));
label_215fdc:
    // 0x215fdc: 0xad84002c  sw          $a0, 0x2C($t4)
    ctx->pc = 0x215fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 4));
label_215fe0:
    // 0x215fe0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x215fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_215fe4:
    // 0x215fe4: 0x29690010  slti        $t1, $t3, 0x10
    ctx->pc = 0x215fe4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
label_215fe8:
    // 0x215fe8: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_215fec:
    // 0x215fec: 0x1520ff8d  bnez        $t1, . + 4 + (-0x73 << 2)
label_215ff0:
    if (ctx->pc == 0x215FF0u) {
        ctx->pc = 0x215FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FECu;
        // 0x215ff0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215FF4u;
        goto label_215ff4;
    }
    ctx->pc = 0x215FECu;
    {
        const bool branch_taken_0x215fec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FECu;
        // 0x215ff0: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fec) {
            ctx->pc = 0x215E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215e24;
        }
    }
    ctx->pc = 0x215FF4u;
label_215ff4:
    // 0x215ff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215ff8:
    // 0x215ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215ffc:
    // 0x215ffc: 0xac2082f0  sw          $zero, -0x7D10($at)
    ctx->pc = 0x215ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935280), GPR_U32(ctx, 0));
label_216000:
    // 0x216000: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_216004:
    // 0x216004: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216008:
    // 0x216008: 0xac238310  sw          $v1, -0x7CF0($at)
    ctx->pc = 0x216008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935312), GPR_U32(ctx, 3));
label_21600c:
    // 0x21600c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_216010:
    // 0x216010: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216014:
    // 0x216014: 0xac238314  sw          $v1, -0x7CEC($at)
    ctx->pc = 0x216014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935316), GPR_U32(ctx, 3));
label_216018:
    // 0x216018: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21601c:
    // 0x21601c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_216020:
    // 0x216020: 0xac2082f4  sw          $zero, -0x7D0C($at)
    ctx->pc = 0x216020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935284), GPR_U32(ctx, 0));
label_216024:
    // 0x216024: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216028:
    // 0x216028: 0xac23831c  sw          $v1, -0x7CE4($at)
    ctx->pc = 0x216028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935324), GPR_U32(ctx, 3));
label_21602c:
    // 0x21602c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216030:
    // 0x216030: 0xac2082f8  sw          $zero, -0x7D08($at)
    ctx->pc = 0x216030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935288), GPR_U32(ctx, 0));
label_216034:
    // 0x216034: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216038:
    // 0x216038: 0xac2482fc  sw          $a0, -0x7D04($at)
    ctx->pc = 0x216038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935292), GPR_U32(ctx, 4));
label_21603c:
    // 0x21603c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216040:
    // 0x216040: 0xac208300  sw          $zero, -0x7D00($at)
    ctx->pc = 0x216040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935296), GPR_U32(ctx, 0));
label_216044:
    // 0x216044: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216048:
    // 0x216048: 0xac208304  sw          $zero, -0x7CFC($at)
    ctx->pc = 0x216048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935300), GPR_U32(ctx, 0));
label_21604c:
    // 0x21604c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21604cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216050:
    // 0x216050: 0xac208308  sw          $zero, -0x7CF8($at)
    ctx->pc = 0x216050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935304), GPR_U32(ctx, 0));
label_216054:
    // 0x216054: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x216054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216058:
    // 0x216058: 0xac24830c  sw          $a0, -0x7CF4($at)
    ctx->pc = 0x216058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935308), GPR_U32(ctx, 4));
label_21605c:
    // 0x21605c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_216060:
    // 0x216060: 0xac248318  sw          $a0, -0x7CE8($at)
    ctx->pc = 0x216060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935320), GPR_U32(ctx, 4));
label_216064:
    // 0x216064: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x216064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_216068:
    // 0x216068: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x216068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21606c:
    // 0x21606c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21606cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_216070:
    // 0x216070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x216070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_216074:
    // 0x216074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x216074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_216078:
    // 0x216078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x216078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21607c:
    // 0x21607c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21607cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216080:
    // 0x216080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x216080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216084:
    // 0x216084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216088:
    // 0x216088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21608c:
    // 0x21608c: 0x3e00008  jr          $ra
label_216090:
    if (ctx->pc == 0x216090u) {
        ctx->pc = 0x216090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21608Cu;
        // 0x216090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216094u;
        goto label_216094;
    }
    ctx->pc = 0x21608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21608Cu;
        // 0x216090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216094u;
label_216094:
    // 0x216094: 0x0  nop
    ctx->pc = 0x216094u;
    // NOP
label_216098:
    // 0x216098: 0x0  nop
    ctx->pc = 0x216098u;
    // NOP
label_21609c:
    // 0x21609c: 0x0  nop
    ctx->pc = 0x21609cu;
    // NOP
label_2160a0:
    // 0x2160a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2160a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2160a4:
    // 0x2160a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2160a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2160a8:
    // 0x2160a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2160a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2160ac:
    // 0x2160ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2160acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2160b0:
    // 0x2160b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2160b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2160b4:
    // 0x2160b4: 0x8f849244  lw          $a0, -0x6DBC($gp)
    ctx->pc = 0x2160b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939204)));
label_2160b8:
    // 0x2160b8: 0x8f839240  lw          $v1, -0x6DC0($gp)
    ctx->pc = 0x2160b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939200)));
label_2160bc:
    // 0x2160bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2160c0:
    // 0x2160c0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_2160c4:
    if (ctx->pc == 0x2160C4u) {
        ctx->pc = 0x2160C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160C0u;
        // 0x2160c4: 0xaf849244  sw          $a0, -0x6DBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2160C8u;
        goto label_2160c8;
    }
    ctx->pc = 0x2160C0u;
    {
        const bool branch_taken_0x2160c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160C0u;
        // 0x2160c4: 0xaf849244  sw          $a0, -0x6DBC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160c0) {
            ctx->pc = 0x2162A8u;
            { ctx->pc = 0x2162a8; return; }
        }
    }
    ctx->pc = 0x2160C8u;
label_2160c8:
    // 0x2160c8: 0x8f829238  lw          $v0, -0x6DC8($gp)
    ctx->pc = 0x2160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939192)));
label_2160cc:
    // 0x2160cc: 0xc780923c  lwc1        $f0, -0x6DC4($gp)
    ctx->pc = 0x2160ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2160d0:
    // 0x2160d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2160d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2160d4:
    // 0x2160d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2160d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2160d8:
    // 0x2160d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2160d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2160dc:
    // 0x2160dc: 0xaf829238  sw          $v0, -0x6DC8($gp)
    ctx->pc = 0x2160dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939192), GPR_U32(ctx, 2));
label_2160e0:
    // 0x2160e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2160e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2160e4:
    // 0x2160e4: 0xc7819238  lwc1        $f1, -0x6DC8($gp)
    ctx->pc = 0x2160e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2160e8:
    // 0x2160e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2160e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2160ec:
    // 0x2160ec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2160ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2160f0:
    // 0x2160f0: 0x8f839234  lw          $v1, -0x6DCC($gp)
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939188)));
label_2160f4:
    // 0x2160f4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2160f8:
    if (ctx->pc == 0x2160F8u) {
        ctx->pc = 0x2160FCu;
        goto label_2160fc;
    }
    ctx->pc = 0x2160F4u;
    {
        const bool branch_taken_0x2160f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2160f4) {
            ctx->pc = 0x216138u;
            goto label_216138;
        }
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2160fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216100:
    // 0x216100: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216104:
    // 0x216104: 0x24638a70  addiu       $v1, $v1, -0x7590
    ctx->pc = 0x216104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937200));
label_216108:
    // 0x216108: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x216108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_21610c:
    // 0x21610c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_216110:
    // 0x216110: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x216110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216114:
    // 0x216114: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x216114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_216118:
    // 0x216118: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x216118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_21611c:
    // 0x21611c: 0xc07b16c  jal         func_1EC5B0
label_216120:
    if (ctx->pc == 0x216120u) {
        ctx->pc = 0x216120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21611Cu;
        // 0x216120: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x216124u;
        goto label_216124;
    }
    ctx->pc = 0x21611Cu;
    SET_GPR_U32(ctx, 31, 0x216124u);
    ctx->pc = 0x216120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21611Cu;
    // 0x216120: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC5B0u;
    { ctx->pc = 0x1ec5b0; return; }
    ctx->pc = 0x216124u;
label_216124:
    // 0x216124: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_216128:
    // 0x216128: 0x24428a90  addiu       $v0, $v0, -0x7570
    ctx->pc = 0x216128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937232));
label_21612c:
    // 0x21612c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_216130:
    // 0x216130: 0x10000021  b           . + 4 + (0x21 << 2)
label_216134:
    if (ctx->pc == 0x216134u) {
        ctx->pc = 0x216134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216130u;
        // 0x216134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x216138u;
        goto label_216138;
    }
    ctx->pc = 0x216130u;
    {
        const bool branch_taken_0x216130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216130u;
        // 0x216134: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216130) {
            ctx->pc = 0x2161B8u;
            { ctx->pc = 0x2161b8; return; }
        }
    }
    ctx->pc = 0x216138u;
label_216138:
    // 0x216138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21613c:
    // 0x21613c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_216140:
    if (ctx->pc == 0x216140u) {
        ctx->pc = 0x216144u;
        goto label_216144;
    }
    ctx->pc = 0x21613Cu;
    {
        const bool branch_taken_0x21613c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21613c) {
            ctx->pc = 0x216180u;
            { ctx->pc = 0x216180; return; }
        }
    }
    ctx->pc = 0x216144u;
label_216144:
    // 0x216144: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_216148:
    // 0x216148: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21614c:
    // 0x21614c: 0x24638a70  addiu       $v1, $v1, -0x7590
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937200));
label_216150:
    // 0x216150: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_216154:
    // 0x216154: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x216158u;
    return;
}
