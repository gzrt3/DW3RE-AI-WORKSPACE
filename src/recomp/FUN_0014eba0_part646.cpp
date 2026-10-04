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


void FUN_0014eba0_part646(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x289ab0u: goto label_289ab0;
        case 0x289ab4u: goto label_289ab4;
        case 0x289ab8u: goto label_289ab8;
        case 0x289abcu: goto label_289abc;
        case 0x289ac0u: goto label_289ac0;
        case 0x289ac4u: goto label_289ac4;
        case 0x289ac8u: goto label_289ac8;
        case 0x289accu: goto label_289acc;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ad4u: goto label_289ad4;
        case 0x289ad8u: goto label_289ad8;
        case 0x289adcu: goto label_289adc;
        case 0x289ae0u: goto label_289ae0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289ae8u: goto label_289ae8;
        case 0x289aecu: goto label_289aec;
        case 0x289af0u: goto label_289af0;
        case 0x289af4u: goto label_289af4;
        case 0x289af8u: goto label_289af8;
        case 0x289afcu: goto label_289afc;
        case 0x289b00u: goto label_289b00;
        case 0x289b04u: goto label_289b04;
        case 0x289b08u: goto label_289b08;
        case 0x289b0cu: goto label_289b0c;
        case 0x289b10u: goto label_289b10;
        case 0x289b14u: goto label_289b14;
        case 0x289b18u: goto label_289b18;
        case 0x289b1cu: goto label_289b1c;
        case 0x289b20u: goto label_289b20;
        case 0x289b24u: goto label_289b24;
        case 0x289b28u: goto label_289b28;
        case 0x289b2cu: goto label_289b2c;
        case 0x289b30u: goto label_289b30;
        case 0x289b34u: goto label_289b34;
        case 0x289b38u: goto label_289b38;
        case 0x289b3cu: goto label_289b3c;
        case 0x289b40u: goto label_289b40;
        case 0x289b44u: goto label_289b44;
        case 0x289b48u: goto label_289b48;
        case 0x289b4cu: goto label_289b4c;
        case 0x289b50u: goto label_289b50;
        case 0x289b54u: goto label_289b54;
        case 0x289b58u: goto label_289b58;
        case 0x289b5cu: goto label_289b5c;
        case 0x289b60u: goto label_289b60;
        case 0x289b64u: goto label_289b64;
        case 0x289b68u: goto label_289b68;
        case 0x289b6cu: goto label_289b6c;
        case 0x289b70u: goto label_289b70;
        case 0x289b74u: goto label_289b74;
        case 0x289b78u: goto label_289b78;
        case 0x289b7cu: goto label_289b7c;
        case 0x289b80u: goto label_289b80;
        case 0x289b84u: goto label_289b84;
        case 0x289b88u: goto label_289b88;
        case 0x289b8cu: goto label_289b8c;
        case 0x289b90u: goto label_289b90;
        case 0x289b94u: goto label_289b94;
        case 0x289b98u: goto label_289b98;
        case 0x289b9cu: goto label_289b9c;
        case 0x289ba0u: goto label_289ba0;
        case 0x289ba4u: goto label_289ba4;
        case 0x289ba8u: goto label_289ba8;
        case 0x289bacu: goto label_289bac;
        case 0x289bb0u: goto label_289bb0;
        case 0x289bb4u: goto label_289bb4;
        case 0x289bb8u: goto label_289bb8;
        case 0x289bbcu: goto label_289bbc;
        case 0x289bc0u: goto label_289bc0;
        case 0x289bc4u: goto label_289bc4;
        case 0x289bc8u: goto label_289bc8;
        case 0x289bccu: goto label_289bcc;
        case 0x289bd0u: goto label_289bd0;
        case 0x289bd4u: goto label_289bd4;
        case 0x289bd8u: goto label_289bd8;
        case 0x289bdcu: goto label_289bdc;
        case 0x289be0u: goto label_289be0;
        case 0x289be4u: goto label_289be4;
        case 0x289be8u: goto label_289be8;
        case 0x289becu: goto label_289bec;
        case 0x289bf0u: goto label_289bf0;
        case 0x289bf4u: goto label_289bf4;
        case 0x289bf8u: goto label_289bf8;
        case 0x289bfcu: goto label_289bfc;
        case 0x289c00u: goto label_289c00;
        case 0x289c04u: goto label_289c04;
        case 0x289c08u: goto label_289c08;
        case 0x289c0cu: goto label_289c0c;
        case 0x289c10u: goto label_289c10;
        case 0x289c14u: goto label_289c14;
        case 0x289c18u: goto label_289c18;
        case 0x289c1cu: goto label_289c1c;
        case 0x289c20u: goto label_289c20;
        case 0x289c24u: goto label_289c24;
        case 0x289c28u: goto label_289c28;
        case 0x289c2cu: goto label_289c2c;
        case 0x289c30u: goto label_289c30;
        case 0x289c34u: goto label_289c34;
        case 0x289c38u: goto label_289c38;
        case 0x289c3cu: goto label_289c3c;
        case 0x289c40u: goto label_289c40;
        case 0x289c44u: goto label_289c44;
        case 0x289c48u: goto label_289c48;
        case 0x289c4cu: goto label_289c4c;
        case 0x289c50u: goto label_289c50;
        case 0x289c54u: goto label_289c54;
        case 0x289c58u: goto label_289c58;
        case 0x289c5cu: goto label_289c5c;
        case 0x289c60u: goto label_289c60;
        case 0x289c64u: goto label_289c64;
        case 0x289c68u: goto label_289c68;
        case 0x289c6cu: goto label_289c6c;
        case 0x289c70u: goto label_289c70;
        case 0x289c74u: goto label_289c74;
        case 0x289c78u: goto label_289c78;
        case 0x289c7cu: goto label_289c7c;
        case 0x289c80u: goto label_289c80;
        case 0x289c84u: goto label_289c84;
        case 0x289c88u: goto label_289c88;
        case 0x289c8cu: goto label_289c8c;
        case 0x289c90u: goto label_289c90;
        case 0x289c94u: goto label_289c94;
        case 0x289c98u: goto label_289c98;
        case 0x289c9cu: goto label_289c9c;
        case 0x289ca0u: goto label_289ca0;
        case 0x289ca4u: goto label_289ca4;
        case 0x289ca8u: goto label_289ca8;
        case 0x289cacu: goto label_289cac;
        case 0x289cb0u: goto label_289cb0;
        case 0x289cb4u: goto label_289cb4;
        case 0x289cb8u: goto label_289cb8;
        case 0x289cbcu: goto label_289cbc;
        case 0x289cc0u: goto label_289cc0;
        case 0x289cc4u: goto label_289cc4;
        case 0x289cc8u: goto label_289cc8;
        case 0x289cccu: goto label_289ccc;
        case 0x289cd0u: goto label_289cd0;
        case 0x289cd4u: goto label_289cd4;
        case 0x289cd8u: goto label_289cd8;
        case 0x289cdcu: goto label_289cdc;
        case 0x289ce0u: goto label_289ce0;
        case 0x289ce4u: goto label_289ce4;
        case 0x289ce8u: goto label_289ce8;
        case 0x289cecu: goto label_289cec;
        case 0x289cf0u: goto label_289cf0;
        case 0x289cf4u: goto label_289cf4;
        case 0x289cf8u: goto label_289cf8;
        case 0x289cfcu: goto label_289cfc;
        case 0x289d00u: goto label_289d00;
        case 0x289d04u: goto label_289d04;
        case 0x289d08u: goto label_289d08;
        case 0x289d0cu: goto label_289d0c;
        case 0x289d10u: goto label_289d10;
        case 0x289d14u: goto label_289d14;
        case 0x289d18u: goto label_289d18;
        case 0x289d1cu: goto label_289d1c;
        case 0x289d20u: goto label_289d20;
        case 0x289d24u: goto label_289d24;
        case 0x289d28u: goto label_289d28;
        case 0x289d2cu: goto label_289d2c;
        case 0x289d30u: goto label_289d30;
        case 0x289d34u: goto label_289d34;
        case 0x289d38u: goto label_289d38;
        case 0x289d3cu: goto label_289d3c;
        case 0x289d40u: goto label_289d40;
        case 0x289d44u: goto label_289d44;
        case 0x289d48u: goto label_289d48;
        case 0x289d4cu: goto label_289d4c;
        case 0x289d50u: goto label_289d50;
        case 0x289d54u: goto label_289d54;
        case 0x289d58u: goto label_289d58;
        case 0x289d5cu: goto label_289d5c;
        case 0x289d60u: goto label_289d60;
        case 0x289d64u: goto label_289d64;
        case 0x289d68u: goto label_289d68;
        case 0x289d6cu: goto label_289d6c;
        case 0x289d70u: goto label_289d70;
        case 0x289d74u: goto label_289d74;
        case 0x289d78u: goto label_289d78;
        case 0x289d7cu: goto label_289d7c;
        case 0x289d80u: goto label_289d80;
        case 0x289d84u: goto label_289d84;
        case 0x289d88u: goto label_289d88;
        case 0x289d8cu: goto label_289d8c;
        case 0x289d90u: goto label_289d90;
        case 0x289d94u: goto label_289d94;
        case 0x289d98u: goto label_289d98;
        case 0x289d9cu: goto label_289d9c;
        case 0x289da0u: goto label_289da0;
        case 0x289da4u: goto label_289da4;
        case 0x289da8u: goto label_289da8;
        case 0x289dacu: goto label_289dac;
        case 0x289db0u: goto label_289db0;
        case 0x289db4u: goto label_289db4;
        case 0x289db8u: goto label_289db8;
        case 0x289dbcu: goto label_289dbc;
        case 0x289dc0u: goto label_289dc0;
        case 0x289dc4u: goto label_289dc4;
        case 0x289dc8u: goto label_289dc8;
        case 0x289dccu: goto label_289dcc;
        case 0x289dd0u: goto label_289dd0;
        case 0x289dd4u: goto label_289dd4;
        case 0x289dd8u: goto label_289dd8;
        case 0x289ddcu: goto label_289ddc;
        case 0x289de0u: goto label_289de0;
        case 0x289de4u: goto label_289de4;
        case 0x289de8u: goto label_289de8;
        case 0x289decu: goto label_289dec;
        case 0x289df0u: goto label_289df0;
        case 0x289df4u: goto label_289df4;
        case 0x289df8u: goto label_289df8;
        case 0x289dfcu: goto label_289dfc;
        case 0x289e00u: goto label_289e00;
        case 0x289e04u: goto label_289e04;
        case 0x289e08u: goto label_289e08;
        case 0x289e0cu: goto label_289e0c;
        case 0x289e10u: goto label_289e10;
        case 0x289e14u: goto label_289e14;
        case 0x289e18u: goto label_289e18;
        case 0x289e1cu: goto label_289e1c;
        case 0x289e20u: goto label_289e20;
        case 0x289e24u: goto label_289e24;
        case 0x289e28u: goto label_289e28;
        case 0x289e2cu: goto label_289e2c;
        case 0x289e30u: goto label_289e30;
        case 0x289e34u: goto label_289e34;
        case 0x289e38u: goto label_289e38;
        case 0x289e3cu: goto label_289e3c;
        case 0x289e40u: goto label_289e40;
        case 0x289e44u: goto label_289e44;
        case 0x289e48u: goto label_289e48;
        case 0x289e4cu: goto label_289e4c;
        case 0x289e50u: goto label_289e50;
        case 0x289e54u: goto label_289e54;
        case 0x289e58u: goto label_289e58;
        case 0x289e5cu: goto label_289e5c;
        case 0x289e60u: goto label_289e60;
        case 0x289e64u: goto label_289e64;
        case 0x289e68u: goto label_289e68;
        case 0x289e6cu: goto label_289e6c;
        case 0x289e70u: goto label_289e70;
        case 0x289e74u: goto label_289e74;
        case 0x289e78u: goto label_289e78;
        case 0x289e7cu: goto label_289e7c;
        case 0x289e80u: goto label_289e80;
        case 0x289e84u: goto label_289e84;
        case 0x289e88u: goto label_289e88;
        case 0x289e8cu: goto label_289e8c;
        case 0x289e90u: goto label_289e90;
        case 0x289e94u: goto label_289e94;
        case 0x289e98u: goto label_289e98;
        case 0x289e9cu: goto label_289e9c;
        case 0x289ea0u: goto label_289ea0;
        case 0x289ea4u: goto label_289ea4;
        case 0x289ea8u: goto label_289ea8;
        case 0x289eacu: goto label_289eac;
        case 0x289eb0u: goto label_289eb0;
        case 0x289eb4u: goto label_289eb4;
        case 0x289eb8u: goto label_289eb8;
        case 0x289ebcu: goto label_289ebc;
        case 0x289ec0u: goto label_289ec0;
        case 0x289ec4u: goto label_289ec4;
        case 0x289ec8u: goto label_289ec8;
        case 0x289eccu: goto label_289ecc;
        case 0x289ed0u: goto label_289ed0;
        case 0x289ed4u: goto label_289ed4;
        case 0x289ed8u: goto label_289ed8;
        case 0x289edcu: goto label_289edc;
        case 0x289ee0u: goto label_289ee0;
        case 0x289ee4u: goto label_289ee4;
        case 0x289ee8u: goto label_289ee8;
        case 0x289eecu: goto label_289eec;
        case 0x289ef0u: goto label_289ef0;
        case 0x289ef4u: goto label_289ef4;
        case 0x289ef8u: goto label_289ef8;
        case 0x289efcu: goto label_289efc;
        case 0x289f00u: goto label_289f00;
        case 0x289f04u: goto label_289f04;
        case 0x289f08u: goto label_289f08;
        case 0x289f0cu: goto label_289f0c;
        case 0x289f10u: goto label_289f10;
        case 0x289f14u: goto label_289f14;
        case 0x289f18u: goto label_289f18;
        case 0x289f1cu: goto label_289f1c;
        case 0x289f20u: goto label_289f20;
        case 0x289f24u: goto label_289f24;
        case 0x289f28u: goto label_289f28;
        case 0x289f2cu: goto label_289f2c;
        case 0x289f30u: goto label_289f30;
        case 0x289f34u: goto label_289f34;
        case 0x289f38u: goto label_289f38;
        case 0x289f3cu: goto label_289f3c;
        case 0x289f40u: goto label_289f40;
        case 0x289f44u: goto label_289f44;
        case 0x289f48u: goto label_289f48;
        case 0x289f4cu: goto label_289f4c;
        case 0x289f50u: goto label_289f50;
        case 0x289f54u: goto label_289f54;
        case 0x289f58u: goto label_289f58;
        case 0x289f5cu: goto label_289f5c;
        case 0x289f60u: goto label_289f60;
        case 0x289f64u: goto label_289f64;
        case 0x289f68u: goto label_289f68;
        case 0x289f6cu: goto label_289f6c;
        case 0x289f70u: goto label_289f70;
        case 0x289f74u: goto label_289f74;
        case 0x289f78u: goto label_289f78;
        case 0x289f7cu: goto label_289f7c;
        case 0x289f80u: goto label_289f80;
        case 0x289f84u: goto label_289f84;
        case 0x289f88u: goto label_289f88;
        case 0x289f8cu: goto label_289f8c;
        case 0x289f90u: goto label_289f90;
        case 0x289f94u: goto label_289f94;
        case 0x289f98u: goto label_289f98;
        case 0x289f9cu: goto label_289f9c;
        case 0x289fa0u: goto label_289fa0;
        case 0x289fa4u: goto label_289fa4;
        case 0x289fa8u: goto label_289fa8;
        case 0x289facu: goto label_289fac;
        case 0x289fb0u: goto label_289fb0;
        case 0x289fb4u: goto label_289fb4;
        case 0x289fb8u: goto label_289fb8;
        case 0x289fbcu: goto label_289fbc;
        case 0x289fc0u: goto label_289fc0;
        case 0x289fc4u: goto label_289fc4;
        case 0x289fc8u: goto label_289fc8;
        case 0x289fccu: goto label_289fcc;
        case 0x289fd0u: goto label_289fd0;
        case 0x289fd4u: goto label_289fd4;
        case 0x289fd8u: goto label_289fd8;
        case 0x289fdcu: goto label_289fdc;
        case 0x289fe0u: goto label_289fe0;
        case 0x289fe4u: goto label_289fe4;
        case 0x289fe8u: goto label_289fe8;
        case 0x289fecu: goto label_289fec;
        case 0x289ff0u: goto label_289ff0;
        case 0x289ff4u: goto label_289ff4;
        case 0x289ff8u: goto label_289ff8;
        case 0x289ffcu: goto label_289ffc;
        case 0x28a000u: goto label_28a000;
        case 0x28a004u: goto label_28a004;
        case 0x28a008u: goto label_28a008;
        case 0x28a00cu: goto label_28a00c;
        case 0x28a010u: goto label_28a010;
        case 0x28a014u: goto label_28a014;
        case 0x28a018u: goto label_28a018;
        case 0x28a01cu: goto label_28a01c;
        case 0x28a020u: goto label_28a020;
        case 0x28a024u: goto label_28a024;
        case 0x28a028u: goto label_28a028;
        case 0x28a02cu: goto label_28a02c;
        case 0x28a030u: goto label_28a030;
        case 0x28a034u: goto label_28a034;
        case 0x28a038u: goto label_28a038;
        case 0x28a03cu: goto label_28a03c;
        case 0x28a040u: goto label_28a040;
        case 0x28a044u: goto label_28a044;
        case 0x28a048u: goto label_28a048;
        case 0x28a04cu: goto label_28a04c;
        case 0x28a050u: goto label_28a050;
        case 0x28a054u: goto label_28a054;
        case 0x28a058u: goto label_28a058;
        case 0x28a05cu: goto label_28a05c;
        case 0x28a060u: goto label_28a060;
        case 0x28a064u: goto label_28a064;
        case 0x28a068u: goto label_28a068;
        case 0x28a06cu: goto label_28a06c;
        case 0x28a070u: goto label_28a070;
        case 0x28a074u: goto label_28a074;
        case 0x28a078u: goto label_28a078;
        case 0x28a07cu: goto label_28a07c;
        case 0x28a080u: goto label_28a080;
        case 0x28a084u: goto label_28a084;
        case 0x28a088u: goto label_28a088;
        case 0x28a08cu: goto label_28a08c;
        case 0x28a090u: goto label_28a090;
        case 0x28a094u: goto label_28a094;
        case 0x28a098u: goto label_28a098;
        case 0x28a09cu: goto label_28a09c;
        case 0x28a0a0u: goto label_28a0a0;
        case 0x28a0a4u: goto label_28a0a4;
        case 0x28a0a8u: goto label_28a0a8;
        case 0x28a0acu: goto label_28a0ac;
        case 0x28a0b0u: goto label_28a0b0;
        case 0x28a0b4u: goto label_28a0b4;
        case 0x28a0b8u: goto label_28a0b8;
        case 0x28a0bcu: goto label_28a0bc;
        case 0x28a0c0u: goto label_28a0c0;
        case 0x28a0c4u: goto label_28a0c4;
        case 0x28a0c8u: goto label_28a0c8;
        case 0x28a0ccu: goto label_28a0cc;
        case 0x28a0d0u: goto label_28a0d0;
        case 0x28a0d4u: goto label_28a0d4;
        case 0x28a0d8u: goto label_28a0d8;
        case 0x28a0dcu: goto label_28a0dc;
        case 0x28a0e0u: goto label_28a0e0;
        case 0x28a0e4u: goto label_28a0e4;
        case 0x28a0e8u: goto label_28a0e8;
        case 0x28a0ecu: goto label_28a0ec;
        case 0x28a0f0u: goto label_28a0f0;
        case 0x28a0f4u: goto label_28a0f4;
        case 0x28a0f8u: goto label_28a0f8;
        case 0x28a0fcu: goto label_28a0fc;
        case 0x28a100u: goto label_28a100;
        case 0x28a104u: goto label_28a104;
        case 0x28a108u: goto label_28a108;
        case 0x28a10cu: goto label_28a10c;
        case 0x28a110u: goto label_28a110;
        case 0x28a114u: goto label_28a114;
        case 0x28a118u: goto label_28a118;
        case 0x28a11cu: goto label_28a11c;
        case 0x28a120u: goto label_28a120;
        case 0x28a124u: goto label_28a124;
        case 0x28a128u: goto label_28a128;
        case 0x28a12cu: goto label_28a12c;
        case 0x28a130u: goto label_28a130;
        case 0x28a134u: goto label_28a134;
        case 0x28a138u: goto label_28a138;
        case 0x28a13cu: goto label_28a13c;
        case 0x28a140u: goto label_28a140;
        case 0x28a144u: goto label_28a144;
        case 0x28a148u: goto label_28a148;
        case 0x28a14cu: goto label_28a14c;
        case 0x28a150u: goto label_28a150;
        case 0x28a154u: goto label_28a154;
        case 0x28a158u: goto label_28a158;
        case 0x28a15cu: goto label_28a15c;
        case 0x28a160u: goto label_28a160;
        case 0x28a164u: goto label_28a164;
        case 0x28a168u: goto label_28a168;
        case 0x28a16cu: goto label_28a16c;
        case 0x28a170u: goto label_28a170;
        case 0x28a174u: goto label_28a174;
        case 0x28a178u: goto label_28a178;
        case 0x28a17cu: goto label_28a17c;
        case 0x28a180u: goto label_28a180;
        case 0x28a184u: goto label_28a184;
        case 0x28a188u: goto label_28a188;
        case 0x28a18cu: goto label_28a18c;
        case 0x28a190u: goto label_28a190;
        case 0x28a194u: goto label_28a194;
        case 0x28a198u: goto label_28a198;
        case 0x28a19cu: goto label_28a19c;
        case 0x28a1a0u: goto label_28a1a0;
        case 0x28a1a4u: goto label_28a1a4;
        case 0x28a1a8u: goto label_28a1a8;
        case 0x28a1acu: goto label_28a1ac;
        case 0x28a1b0u: goto label_28a1b0;
        case 0x28a1b4u: goto label_28a1b4;
        case 0x28a1b8u: goto label_28a1b8;
        case 0x28a1bcu: goto label_28a1bc;
        case 0x28a1c0u: goto label_28a1c0;
        case 0x28a1c4u: goto label_28a1c4;
        case 0x28a1c8u: goto label_28a1c8;
        case 0x28a1ccu: goto label_28a1cc;
        case 0x28a1d0u: goto label_28a1d0;
        case 0x28a1d4u: goto label_28a1d4;
        case 0x28a1d8u: goto label_28a1d8;
        case 0x28a1dcu: goto label_28a1dc;
        case 0x28a1e0u: goto label_28a1e0;
        case 0x28a1e4u: goto label_28a1e4;
        case 0x28a1e8u: goto label_28a1e8;
        case 0x28a1ecu: goto label_28a1ec;
        case 0x28a1f0u: goto label_28a1f0;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a1f8u: goto label_28a1f8;
        case 0x28a1fcu: goto label_28a1fc;
        case 0x28a200u: goto label_28a200;
        case 0x28a204u: goto label_28a204;
        case 0x28a208u: goto label_28a208;
        case 0x28a20cu: goto label_28a20c;
        case 0x28a210u: goto label_28a210;
        case 0x28a214u: goto label_28a214;
        case 0x28a218u: goto label_28a218;
        case 0x28a21cu: goto label_28a21c;
        case 0x28a220u: goto label_28a220;
        case 0x28a224u: goto label_28a224;
        case 0x28a228u: goto label_28a228;
        case 0x28a22cu: goto label_28a22c;
        case 0x28a230u: goto label_28a230;
        case 0x28a234u: goto label_28a234;
        case 0x28a238u: goto label_28a238;
        case 0x28a23cu: goto label_28a23c;
        case 0x28a240u: goto label_28a240;
        case 0x28a244u: goto label_28a244;
        case 0x28a248u: goto label_28a248;
        case 0x28a24cu: goto label_28a24c;
        case 0x28a250u: goto label_28a250;
        case 0x28a254u: goto label_28a254;
        case 0x28a258u: goto label_28a258;
        case 0x28a25cu: goto label_28a25c;
        case 0x28a260u: goto label_28a260;
        case 0x28a264u: goto label_28a264;
        case 0x28a268u: goto label_28a268;
        case 0x28a26cu: goto label_28a26c;
        case 0x28a270u: goto label_28a270;
        case 0x28a274u: goto label_28a274;
        case 0x28a278u: goto label_28a278;
        case 0x28a27cu: goto label_28a27c;
        default: return;
    }

label_289ab0:
    // 0x289ab0: 0x22ea9  .word       0x00022EA9                   # mtsa        $zero # 00022E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289ab0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289ab4:
    // 0x289ab4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ab8:
    // 0x289ab8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ab8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289abc:
    // 0x289abc: 0x0  nop
    ctx->pc = 0x289abcu;
    // NOP
label_289ac0:
    // 0x289ac0: 0x22ead  .word       0x00022EAD                   # daddu       $a1, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289ac4:
    // 0x289ac4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ac8:
    // 0x289ac8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289acc:
    // 0x289acc: 0x0  nop
    ctx->pc = 0x289accu;
    // NOP
label_289ad0:
    // 0x289ad0: 0x22eb1  tgeu        $zero, $v0, 186
    ctx->pc = 0x289ad0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289ad4:
    // 0x289ad4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ad4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289AD4 raw=0x00000001");
 /* MITIGATED */
label_289ad8:
    // 0x289ad8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289adc:
    // 0x289adc: 0x0  nop
    ctx->pc = 0x289adcu;
    // NOP
label_289ae0:
    // 0x289ae0: 0x22eb2  tlt         $zero, $v0, 186
    ctx->pc = 0x289ae0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289ae4:
    // 0x289ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ae4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289AE4 raw=0x00000001");
 /* MITIGATED */
label_289ae8:
    // 0x289ae8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289aec:
    // 0x289aec: 0x0  nop
    ctx->pc = 0x289aecu;
    // NOP
label_289af0:
    // 0x289af0: 0x22eb3  tltu        $zero, $v0, 186
    ctx->pc = 0x289af0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289af4:
    // 0x289af4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289af8:
    // 0x289af8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289afc:
    // 0x289afc: 0x0  nop
    ctx->pc = 0x289afcu;
    // NOP
label_289b00:
    // 0x289b00: 0x22eb7  .word       0x00022EB7                   # INVALID     $zero, $v0, 0x2EB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289B00 raw=0x00022EB7");
 /* MITIGATED */
label_289b04:
    // 0x289b04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b08:
    // 0x289b08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b0c:
    // 0x289b0c: 0x0  nop
    ctx->pc = 0x289b0cu;
    // NOP
label_289b10:
    // 0x289b10: 0x22ebb  dsra        $a1, $v0, 26
    ctx->pc = 0x289b10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> 26);
label_289b14:
    // 0x289b14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B14 raw=0x00000001");
 /* MITIGATED */
label_289b18:
    // 0x289b18: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b1c:
    // 0x289b1c: 0x0  nop
    ctx->pc = 0x289b1cu;
    // NOP
label_289b20:
    // 0x289b20: 0x22ebc  dsll32      $a1, $v0, 26
    ctx->pc = 0x289b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 26));
label_289b24:
    // 0x289b24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B24 raw=0x00000001");
 /* MITIGATED */
label_289b28:
    // 0x289b28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b2c:
    // 0x289b2c: 0x0  nop
    ctx->pc = 0x289b2cu;
    // NOP
label_289b30:
    // 0x289b30: 0x22ebd  .word       0x00022EBD                   # INVALID     $zero, $v0, 0x2EBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x289B30 raw=0x00022EBD");
 /* MITIGATED */
label_289b34:
    // 0x289b34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b38:
    // 0x289b38: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b3c:
    // 0x289b3c: 0x0  nop
    ctx->pc = 0x289b3cu;
    // NOP
label_289b40:
    // 0x289b40: 0x22ec1  .word       0x00022EC1                   # INVALID     $zero, $v0, 0x2EC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B40 raw=0x00022EC1");
 /* MITIGATED */
label_289b44:
    // 0x289b44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b48:
    // 0x289b48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b4c:
    // 0x289b4c: 0x0  nop
    ctx->pc = 0x289b4cu;
    // NOP
label_289b50:
    // 0x289b50: 0x22ec5  .word       0x00022EC5                   # INVALID     $zero, $v0, 0x2EC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x289B50 raw=0x00022EC5");
 /* MITIGATED */
label_289b54:
    // 0x289b54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B54 raw=0x00000001");
 /* MITIGATED */
label_289b58:
    // 0x289b58: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b5c:
    // 0x289b5c: 0x0  nop
    ctx->pc = 0x289b5cu;
    // NOP
label_289b60:
    // 0x289b60: 0x22ec6  .word       0x00022EC6                   # srlv        $a1, $v0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289b64:
    // 0x289b64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B64 raw=0x00000001");
 /* MITIGATED */
label_289b68:
    // 0x289b68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b6c:
    // 0x289b6c: 0x0  nop
    ctx->pc = 0x289b6cu;
    // NOP
label_289b70:
    // 0x289b70: 0x22ec7  .word       0x00022EC7                   # srav        $a1, $v0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289b74:
    // 0x289b74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b78:
    // 0x289b78: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b7c:
    // 0x289b7c: 0x0  nop
    ctx->pc = 0x289b7cu;
    // NOP
label_289b80:
    // 0x289b80: 0x22ecb  .word       0x00022ECB                   # movn        $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289b84:
    // 0x289b84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289b84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289b88:
    // 0x289b88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289b8c:
    // 0x289b8c: 0x0  nop
    ctx->pc = 0x289b8cu;
    // NOP
label_289b90:
    // 0x289b90: 0x22ecf  .word       0x00022ECF                   # sync.p # 00022800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_289b94:
    // 0x289b94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289b94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289B94 raw=0x00000001");
 /* MITIGATED */
label_289b98:
    // 0x289b98: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289b98u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289b9c:
    // 0x289b9c: 0x0  nop
    ctx->pc = 0x289b9cu;
    // NOP
label_289ba0:
    // 0x289ba0: 0x22ed0  .word       0x00022ED0                   # mfhi        $a1 # 000206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ba0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_289ba4:
    // 0x289ba4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ba4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289BA4 raw=0x00000001");
 /* MITIGATED */
label_289ba8:
    // 0x289ba8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289bac:
    // 0x289bac: 0x0  nop
    ctx->pc = 0x289bacu;
    // NOP
label_289bb0:
    // 0x289bb0: 0x22ed1  .word       0x00022ED1                   # mthi        $zero # 00022EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_289bb4:
    // 0x289bb4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289bb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289bb8:
    // 0x289bb8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289bbc:
    // 0x289bbc: 0x0  nop
    ctx->pc = 0x289bbcu;
    // NOP
label_289bc0:
    // 0x289bc0: 0x22ed5  .word       0x00022ED5                   # INVALID     $zero, $v0, 0x2ED5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x289BC0 raw=0x00022ED5");
 /* MITIGATED */
label_289bc4:
    // 0x289bc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289bc8:
    // 0x289bc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289bcc:
    // 0x289bcc: 0x0  nop
    ctx->pc = 0x289bccu;
    // NOP
label_289bd0:
    // 0x289bd0: 0x22ed9  .word       0x00022ED9                   # multu       $zero, $v0 # 00002EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bd0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_289bd4:
    // 0x289bd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289BD4 raw=0x00000001");
 /* MITIGATED */
label_289bd8:
    // 0x289bd8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289bdc:
    // 0x289bdc: 0x0  nop
    ctx->pc = 0x289bdcu;
    // NOP
label_289be0:
    // 0x289be0: 0x22eda  .word       0x00022EDA                   # div         $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289be0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_289be4:
    // 0x289be4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289be4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289BE4 raw=0x00000001");
 /* MITIGATED */
label_289be8:
    // 0x289be8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289bec:
    // 0x289bec: 0x0  nop
    ctx->pc = 0x289becu;
    // NOP
label_289bf0:
    // 0x289bf0: 0x22edb  .word       0x00022EDB                   # divu        $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bf0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_289bf4:
    // 0x289bf4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289bf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289bf8:
    // 0x289bf8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289bf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289bfc:
    // 0x289bfc: 0x0  nop
    ctx->pc = 0x289bfcu;
    // NOP
label_289c00:
    // 0x289c00: 0x22edf  .word       0x00022EDF                   # ddivu       $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289C00 raw=0x00022EDF");
 /* MITIGATED */
label_289c04:
    // 0x289c04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289c04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289c08:
    // 0x289c08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289c0c:
    // 0x289c0c: 0x0  nop
    ctx->pc = 0x289c0cu;
    // NOP
label_289c10:
    // 0x289c10: 0x22ee3  .word       0x00022EE3                   # negu        $a1, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289c14:
    // 0x289c14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289C14 raw=0x00000001");
 /* MITIGATED */
label_289c18:
    // 0x289c18: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289c1c:
    // 0x289c1c: 0x0  nop
    ctx->pc = 0x289c1cu;
    // NOP
label_289c20:
    // 0x289c20: 0x22ee4  .word       0x00022EE4                   # and         $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_289c24:
    // 0x289c24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289C24 raw=0x00000001");
 /* MITIGATED */
label_289c28:
    // 0x289c28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289c28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289c2c:
    // 0x289c2c: 0x0  nop
    ctx->pc = 0x289c2cu;
    // NOP
label_289c30:
    // 0x289c30: 0x22ee5  .word       0x00022EE5                   # or          $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_289c34:
    // 0x289c34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289c34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289c38:
    // 0x289c38: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289c3c:
    // 0x289c3c: 0x0  nop
    ctx->pc = 0x289c3cu;
    // NOP
label_289c40:
    // 0x289c40: 0x22ee9  .word       0x00022EE9                   # mtsa        $zero # 00022EC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289c40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289c44:
    // 0x289c44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289c44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289c48:
    // 0x289c48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289c4c:
    // 0x289c4c: 0x0  nop
    ctx->pc = 0x289c4cu;
    // NOP
label_289c50:
    // 0x289c50: 0x22eed  .word       0x00022EED                   # daddu       $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_289c54:
    // 0x289c54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289C54 raw=0x00000001");
 /* MITIGATED */
label_289c58:
    // 0x289c58: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289c58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289c5c:
    // 0x289c5c: 0x0  nop
    ctx->pc = 0x289c5cu;
    // NOP
label_289c60:
    // 0x289c60: 0x22eee  .word       0x00022EEE                   # dsub        $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_289c64:
    // 0x289c64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289C64 raw=0x00000001");
 /* MITIGATED */
label_289c68:
    // 0x289c68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289c68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289c6c:
    // 0x289c6c: 0x0  nop
    ctx->pc = 0x289c6cu;
    // NOP
label_289c70:
    // 0x289c70: 0x22eef  .word       0x00022EEF                   # dsubu       $a1, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289c74:
    // 0x289c74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289c74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289c78:
    // 0x289c78: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289c7c:
    // 0x289c7c: 0x0  nop
    ctx->pc = 0x289c7cu;
    // NOP
label_289c80:
    // 0x289c80: 0x22ef3  tltu        $zero, $v0, 187
    ctx->pc = 0x289c80u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289c84:
    // 0x289c84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289c84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289c88:
    // 0x289c88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289c8c:
    // 0x289c8c: 0x0  nop
    ctx->pc = 0x289c8cu;
    // NOP
label_289c90:
    // 0x289c90: 0x22ef7  .word       0x00022EF7                   # INVALID     $zero, $v0, 0x2EF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x289C90 raw=0x00022EF7");
 /* MITIGATED */
label_289c94:
    // 0x289c94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289C94 raw=0x00000001");
 /* MITIGATED */
label_289c98:
    // 0x289c98: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289c98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289c9c:
    // 0x289c9c: 0x0  nop
    ctx->pc = 0x289c9cu;
    // NOP
label_289ca0:
    // 0x289ca0: 0x22ef8  dsll        $a1, $v0, 27
    ctx->pc = 0x289ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 27);
label_289ca4:
    // 0x289ca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ca4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289CA4 raw=0x00000001");
 /* MITIGATED */
label_289ca8:
    // 0x289ca8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ca8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289cac:
    // 0x289cac: 0x0  nop
    ctx->pc = 0x289cacu;
    // NOP
label_289cb0:
    // 0x289cb0: 0x22ef9  .word       0x00022EF9                   # INVALID     $zero, $v0, 0x2EF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x289CB0 raw=0x00022EF9");
 /* MITIGATED */
label_289cb4:
    // 0x289cb4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289cb8:
    // 0x289cb8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289cbc:
    // 0x289cbc: 0x0  nop
    ctx->pc = 0x289cbcu;
    // NOP
label_289cc0:
    // 0x289cc0: 0x22efd  .word       0x00022EFD                   # INVALID     $zero, $v0, 0x2EFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x289CC0 raw=0x00022EFD");
 /* MITIGATED */
label_289cc4:
    // 0x289cc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289cc8:
    // 0x289cc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289ccc:
    // 0x289ccc: 0x0  nop
    ctx->pc = 0x289cccu;
    // NOP
label_289cd0:
    // 0x289cd0: 0x22f01  .word       0x00022F01                   # INVALID     $zero, $v0, 0x2F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289CD0 raw=0x00022F01");
 /* MITIGATED */
label_289cd4:
    // 0x289cd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289CD4 raw=0x00000001");
 /* MITIGATED */
label_289cd8:
    // 0x289cd8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289cdc:
    // 0x289cdc: 0x0  nop
    ctx->pc = 0x289cdcu;
    // NOP
label_289ce0:
    // 0x289ce0: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_289ce4:
    // 0x289ce4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ce4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289CE4 raw=0x00000001");
 /* MITIGATED */
label_289ce8:
    // 0x289ce8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289cec:
    // 0x289cec: 0x0  nop
    ctx->pc = 0x289cecu;
    // NOP
label_289cf0:
    // 0x289cf0: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x289cf0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
label_289cf4:
    // 0x289cf4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289cf8:
    // 0x289cf8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289cf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289cfc:
    // 0x289cfc: 0x0  nop
    ctx->pc = 0x289cfcu;
    // NOP
label_289d00:
    // 0x289d00: 0x22f07  .word       0x00022F07                   # srav        $a1, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289d04:
    // 0x289d04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289d08:
    // 0x289d08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289d0c:
    // 0x289d0c: 0x0  nop
    ctx->pc = 0x289d0cu;
    // NOP
label_289d10:
    // 0x289d10: 0x22f0b  .word       0x00022F0B                   # movn        $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_289d14:
    // 0x289d14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289D14 raw=0x00000001");
 /* MITIGATED */
label_289d18:
    // 0x289d18: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289d1c:
    // 0x289d1c: 0x0  nop
    ctx->pc = 0x289d1cu;
    // NOP
label_289d20:
    // 0x289d20: 0x22f0c  .word       0x00022F0C                   # syscall     188 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d20u;
    ctx->pc = 0x289D24u;
runtime->handleSyscall(rdram, ctx, 0x8BCu);
label_289d24:
    // 0x289d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289D24 raw=0x00000001");
 /* MITIGATED */
label_289d28:
    // 0x289d28: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289d2c:
    // 0x289d2c: 0x0  nop
    ctx->pc = 0x289d2cu;
    // NOP
label_289d30:
    // 0x289d30: 0x22f0d  break       2, 188
    ctx->pc = 0x289d30u;
    runtime->handleBreak(rdram, ctx);
label_289d34:
    // 0x289d34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289d38:
    // 0x289d38: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289d3c:
    // 0x289d3c: 0x0  nop
    ctx->pc = 0x289d3cu;
    // NOP
label_289d40:
    // 0x289d40: 0x22f11  .word       0x00022F11                   # mthi        $zero # 00022F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d40u;
    ctx->hi = GPR_U64(ctx, 0);
label_289d44:
    // 0x289d44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289d44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289d48:
    // 0x289d48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289d4c:
    // 0x289d4c: 0x0  nop
    ctx->pc = 0x289d4cu;
    // NOP
label_289d50:
    // 0x289d50: 0x22f15  .word       0x00022F15                   # INVALID     $zero, $v0, 0x2F15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x289D50 raw=0x00022F15");
 /* MITIGATED */
label_289d54:
    // 0x289d54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289D54 raw=0x00000001");
 /* MITIGATED */
label_289d58:
    // 0x289d58: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289d5c:
    // 0x289d5c: 0x0  nop
    ctx->pc = 0x289d5cu;
    // NOP
label_289d60:
    // 0x289d60: 0x22f16  .word       0x00022F16                   # dsrlv       $a1, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289d64:
    // 0x289d64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289D64 raw=0x00000001");
 /* MITIGATED */
label_289d68:
    // 0x289d68: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289d6c:
    // 0x289d6c: 0x0  nop
    ctx->pc = 0x289d6cu;
    // NOP
label_289d70:
    // 0x289d70: 0x22f17  .word       0x00022F17                   # dsrav       $a1, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289d74:
    // 0x289d74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289d74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289d78:
    // 0x289d78: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289d7c:
    // 0x289d7c: 0x0  nop
    ctx->pc = 0x289d7cu;
    // NOP
label_289d80:
    // 0x289d80: 0x22f1b  .word       0x00022F1B                   # divu        $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d80u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_289d84:
    // 0x289d84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289d84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289d88:
    // 0x289d88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289d8c:
    // 0x289d8c: 0x0  nop
    ctx->pc = 0x289d8cu;
    // NOP
label_289d90:
    // 0x289d90: 0x22f1f  .word       0x00022F1F                   # ddivu       $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x289D90 raw=0x00022F1F");
 /* MITIGATED */
label_289d94:
    // 0x289d94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289D94 raw=0x00000001");
 /* MITIGATED */
label_289d98:
    // 0x289d98: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289d98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289d9c:
    // 0x289d9c: 0x0  nop
    ctx->pc = 0x289d9cu;
    // NOP
label_289da0:
    // 0x289da0: 0x22f20  .word       0x00022F20                   # add         $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289da0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_289da4:
    // 0x289da4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289da4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289DA4 raw=0x00000001");
 /* MITIGATED */
label_289da8:
    // 0x289da8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289da8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289dac:
    // 0x289dac: 0x0  nop
    ctx->pc = 0x289dacu;
    // NOP
label_289db0:
    // 0x289db0: 0x22f21  .word       0x00022F21                   # addu        $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_289db4:
    // 0x289db4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289db4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289db8:
    // 0x289db8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289db8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289dbc:
    // 0x289dbc: 0x0  nop
    ctx->pc = 0x289dbcu;
    // NOP
label_289dc0:
    // 0x289dc0: 0x22f25  .word       0x00022F25                   # or          $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_289dc4:
    // 0x289dc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289dc8:
    // 0x289dc8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289dcc:
    // 0x289dcc: 0x0  nop
    ctx->pc = 0x289dccu;
    // NOP
label_289dd0:
    // 0x289dd0: 0x22f29  .word       0x00022F29                   # mtsa        $zero # 00022F00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x289dd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_289dd4:
    // 0x289dd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289dd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289DD4 raw=0x00000001");
 /* MITIGATED */
label_289dd8:
    // 0x289dd8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289ddc:
    // 0x289ddc: 0x0  nop
    ctx->pc = 0x289ddcu;
    // NOP
label_289de0:
    // 0x289de0: 0x22f2a  .word       0x00022F2A                   # slt         $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289de0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_289de4:
    // 0x289de4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289de4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289DE4 raw=0x00000001");
 /* MITIGATED */
label_289de8:
    // 0x289de8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289de8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289dec:
    // 0x289dec: 0x0  nop
    ctx->pc = 0x289decu;
    // NOP
label_289df0:
    // 0x289df0: 0x22f2b  .word       0x00022F2B                   # sltu        $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289df0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289df4:
    // 0x289df4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289df4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289df8:
    // 0x289df8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289df8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289dfc:
    // 0x289dfc: 0x0  nop
    ctx->pc = 0x289dfcu;
    // NOP
label_289e00:
    // 0x289e00: 0x22f2f  .word       0x00022F2F                   # dsubu       $a1, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_289e04:
    // 0x289e04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289e08:
    // 0x289e08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289e0c:
    // 0x289e0c: 0x0  nop
    ctx->pc = 0x289e0cu;
    // NOP
label_289e10:
    // 0x289e10: 0x22f33  tltu        $zero, $v0, 188
    ctx->pc = 0x289e10u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289e14:
    // 0x289e14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289E14 raw=0x00000001");
 /* MITIGATED */
label_289e18:
    // 0x289e18: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289e1c:
    // 0x289e1c: 0x0  nop
    ctx->pc = 0x289e1cu;
    // NOP
label_289e20:
    // 0x289e20: 0x22f34  teq         $zero, $v0, 188
    ctx->pc = 0x289e20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_289e24:
    // 0x289e24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289E24 raw=0x00000001");
 /* MITIGATED */
label_289e28:
    // 0x289e28: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289e2c:
    // 0x289e2c: 0x0  nop
    ctx->pc = 0x289e2cu;
    // NOP
label_289e30:
    // 0x289e30: 0x22f35  .word       0x00022F35                   # INVALID     $zero, $v0, 0x2F35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x289E30 raw=0x00022F35");
 /* MITIGATED */
label_289e34:
    // 0x289e34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289e34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289e38:
    // 0x289e38: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289e3c:
    // 0x289e3c: 0x0  nop
    ctx->pc = 0x289e3cu;
    // NOP
label_289e40:
    // 0x289e40: 0x22f39  .word       0x00022F39                   # INVALID     $zero, $v0, 0x2F39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x289E40 raw=0x00022F39");
 /* MITIGATED */
label_289e44:
    // 0x289e44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289e48:
    // 0x289e48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289e4c:
    // 0x289e4c: 0x0  nop
    ctx->pc = 0x289e4cu;
    // NOP
label_289e50:
    // 0x289e50: 0x22f3d  .word       0x00022F3D                   # INVALID     $zero, $v0, 0x2F3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x289E50 raw=0x00022F3D");
 /* MITIGATED */
label_289e54:
    // 0x289e54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289E54 raw=0x00000001");
 /* MITIGATED */
label_289e58:
    // 0x289e58: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289e5c:
    // 0x289e5c: 0x0  nop
    ctx->pc = 0x289e5cu;
    // NOP
label_289e60:
    // 0x289e60: 0x22f3e  dsrl32      $a1, $v0, 28
    ctx->pc = 0x289e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 28));
label_289e64:
    // 0x289e64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289E64 raw=0x00000001");
 /* MITIGATED */
label_289e68:
    // 0x289e68: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289e6c:
    // 0x289e6c: 0x0  nop
    ctx->pc = 0x289e6cu;
    // NOP
label_289e70:
    // 0x289e70: 0x22f3f  dsra32      $a1, $v0, 28
    ctx->pc = 0x289e70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 28));
label_289e74:
    // 0x289e74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289e74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289e78:
    // 0x289e78: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289e7c:
    // 0x289e7c: 0x0  nop
    ctx->pc = 0x289e7cu;
    // NOP
label_289e80:
    // 0x289e80: 0x22f43  sra         $a1, $v0, 29
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 29));
label_289e84:
    // 0x289e84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289e88:
    // 0x289e88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289e8c:
    // 0x289e8c: 0x0  nop
    ctx->pc = 0x289e8cu;
    // NOP
label_289e90:
    // 0x289e90: 0x22f47  .word       0x00022F47                   # srav        $a1, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_289e94:
    // 0x289e94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289e94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289E94 raw=0x00000001");
 /* MITIGATED */
label_289e98:
    // 0x289e98: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289e9c:
    // 0x289e9c: 0x0  nop
    ctx->pc = 0x289e9cu;
    // NOP
label_289ea0:
    // 0x289ea0: 0x22f48  .word       0x00022F48                   # jr          $zero # 00022F40 <InstrIdType: CPU_SPECIAL>
label_289ea4:
    if (ctx->pc == 0x289EA4u) {
        ctx->pc = 0x289EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EA0u;
        // 0x289ea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289EA4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x289EA8u;
        goto label_289ea8;
    }
    ctx->pc = 0x289EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x289EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EA0u;
        // 0x289ea4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289EA4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289EA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289EA8u;
label_289ea8:
    // 0x289ea8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289eac:
    // 0x289eac: 0x0  nop
    ctx->pc = 0x289eacu;
    // NOP
label_289eb0:
    // 0x289eb0: 0x22f49  .word       0x00022F49                   # jalr        $a1, $zero # 00020740 <InstrIdType: CPU_SPECIAL>
label_289eb4:
    if (ctx->pc == 0x289EB4u) {
        ctx->pc = 0x289EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EB0u;
        // 0x289eb4: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289EB8u;
        goto label_289eb8;
    }
    ctx->pc = 0x289EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x289EB8u);
        ctx->pc = 0x289EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EB0u;
        // 0x289eb4: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289EB0u, 0x289EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289EB8u;
label_289eb8:
    // 0x289eb8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289ebc:
    // 0x289ebc: 0x0  nop
    ctx->pc = 0x289ebcu;
    // NOP
label_289ec0:
    // 0x289ec0: 0x22f4d  break       2, 189
    ctx->pc = 0x289ec0u;
    runtime->handleBreak(rdram, ctx);
label_289ec4:
    // 0x289ec4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ec4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ec8:
    // 0x289ec8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ec8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289ecc:
    // 0x289ecc: 0x0  nop
    ctx->pc = 0x289eccu;
    // NOP
label_289ed0:
    // 0x289ed0: 0x22f51  .word       0x00022F51                   # mthi        $zero # 00022F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ed0u;
    ctx->hi = GPR_U64(ctx, 0);
label_289ed4:
    // 0x289ed4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ed4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289ED4 raw=0x00000001");
 /* MITIGATED */
label_289ed8:
    // 0x289ed8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289edc:
    // 0x289edc: 0x0  nop
    ctx->pc = 0x289edcu;
    // NOP
label_289ee0:
    // 0x289ee0: 0x22f52  .word       0x00022F52                   # mflo        $a1 # 00020740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ee0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_289ee4:
    // 0x289ee4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ee4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x289EE4 raw=0x00000001");
 /* MITIGATED */
label_289ee8:
    // 0x289ee8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_289eec:
    // 0x289eec: 0x0  nop
    ctx->pc = 0x289eecu;
    // NOP
label_289ef0:
    // 0x289ef0: 0x22f53  .word       0x00022F53                   # mtlo        $zero # 00022F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ef0u;
    ctx->lo = GPR_U64(ctx, 0);
label_289ef4:
    // 0x289ef4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289ef8:
    // 0x289ef8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ef8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289efc:
    // 0x289efc: 0x0  nop
    ctx->pc = 0x289efcu;
    // NOP
label_289f00:
    // 0x289f00: 0x22f57  .word       0x00022F57                   # dsrav       $a1, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_289f04:
    // 0x289f04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_289f08:
    // 0x289f08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_289f0c:
    // 0x289f0c: 0x0  nop
    ctx->pc = 0x289f0cu;
    // NOP
label_289f10:
    // 0x289f10: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_289f14:
    // 0x289f14: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_289f18:
    // 0x289f18: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_289f1c:
    // 0x289f1c: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f1cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f20:
    // 0x289f20: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f20u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f24:
    // 0x289f24: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f24u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f28:
    // 0x289f28: 0xffe2  .word       0x0000FFE2                   # neg         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f28u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_289f2c:
    // 0x289f2c: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f2cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f30:
    // 0x289f30: 0xffe2  .word       0x0000FFE2                   # neg         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_289f34:
    // 0x289f34: 0xffe2  .word       0x0000FFE2                   # neg         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f34u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_289f38:
    // 0x289f38: 0xffe2  .word       0x0000FFE2                   # neg         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f38u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_289f3c:
    // 0x289f3c: 0xffe2  .word       0x0000FFE2                   # neg         $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f3cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_289f40:
    // 0x289f40: 0xffe3  .word       0x0000FFE3                   # negu        $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f40u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f44:
    // 0x289f44: 0xffe3  .word       0x0000FFE3                   # negu        $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f44u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f48:
    // 0x289f48: 0xffe3  .word       0x0000FFE3                   # negu        $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f48u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_289f4c:
    // 0x289f4c: 0x0  nop
    ctx->pc = 0x289f4cu;
    // NOP
label_289f50:
    // 0x289f50: 0x600190  .word       0x00600190                   # mfhi        $zero # 00600180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f50u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289f54:
    // 0x289f54: 0x500050  .word       0x00500050                   # mfhi        $zero # 00500040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f54u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289f58:
    // 0x289f58: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289f58u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289f5c:
    // 0x289f5c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x289f5cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289f60:
    // 0x289f60: 0x600240  .word       0x00600240                   # sll         $zero, $zero, 9 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f60u;
    
label_289f64:
    // 0x289f64: 0x280008  .word       0x00280008                   # jr          $at # 00080000 <InstrIdType: CPU_SPECIAL>
label_289f68:
    if (ctx->pc == 0x289F68u) {
        ctx->pc = 0x289F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F64u;
        // 0x289f68: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F6Cu;
        goto label_289f6c;
    }
    ctx->pc = 0x289F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x289F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F64u;
        // 0x289f68: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289F6Cu;
label_289f6c:
    // 0x289f6c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289f6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289f70:
    // 0x289f70: 0x600248  .word       0x00600248                   # jr          $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
label_289f74:
    if (ctx->pc == 0x289F74u) {
        ctx->pc = 0x289F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F70u;
        // 0x289f74: 0x280008  .word       0x00280008                   # jr          $at # 00080000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F78u;
        goto label_289f78;
    }
    ctx->pc = 0x289F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x289F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F70u;
        // 0x289f74: 0x280008  .word       0x00280008                   # jr          $at # 00080000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289F78u;
label_289f78:
    // 0x289f78: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289f78u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289f7c:
    // 0x289f7c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289f7cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289f80:
    // 0x289f80: 0x600230  tge         $v1, $zero, 8
    ctx->pc = 0x289f80u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_289f84:
    // 0x289f84: 0x280008  .word       0x00280008                   # jr          $at # 00080000 <InstrIdType: CPU_SPECIAL>
label_289f88:
    if (ctx->pc == 0x289F88u) {
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F84u;
        // 0x289f88: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F8Cu;
        goto label_289f8c;
    }
    ctx->pc = 0x289F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x289F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F84u;
        // 0x289f88: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289F8Cu;
label_289f8c:
    // 0x289f8c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289f8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289f90:
    // 0x289f90: 0x600238  .word       0x00600238                   # dsll        $zero, $zero, 8 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289f90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_289f94:
    // 0x289f94: 0x280008  .word       0x00280008                   # jr          $at # 00080000 <InstrIdType: CPU_SPECIAL>
label_289f98:
    if (ctx->pc == 0x289F98u) {
        ctx->pc = 0x289F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F94u;
        // 0x289f98: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x289F9Cu;
        goto label_289f9c;
    }
    ctx->pc = 0x289F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x289F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F94u;
        // 0x289f98: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289F9Cu;
label_289f9c:
    // 0x289f9c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289f9cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289fa0:
    // 0x289fa0: 0x6001e0  .word       0x006001E0                   # add         $zero, $v1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fa0u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289fa4:
    // 0x289fa4: 0x280050  .word       0x00280050                   # mfhi        $zero # 00280040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fa4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289fa8:
    // 0x289fa8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289fa8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289fac:
    // 0x289fac: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289facu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289fb0:
    // 0x289fb0: 0x880190  .word       0x00880190                   # mfhi        $zero # 00880180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fb0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289fb4:
    // 0x289fb4: 0x280050  .word       0x00280050                   # mfhi        $zero # 00280040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289fb8:
    // 0x289fb8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289fbc:
    // 0x289fbc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x289fbcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289fc0:
    // 0x289fc0: 0x0  nop
    ctx->pc = 0x289fc0u;
    // NOP
label_289fc4:
    // 0x289fc4: 0x500040  .word       0x00500040                   # sll         $zero, $s0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fc4u;
    
label_289fc8:
    // 0x289fc8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289fc8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289fcc:
    // 0x289fcc: 0x0  nop
    ctx->pc = 0x289fccu;
    // NOP
label_289fd0:
    // 0x289fd0: 0x8801e0  .word       0x008801E0                   # add         $zero, $a0, $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fd0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289fd4:
    // 0x289fd4: 0x280050  .word       0x00280050                   # mfhi        $zero # 00280040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_289fd8:
    // 0x289fd8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289fd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289fdc:
    // 0x289fdc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x289fdcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_289fe0:
    // 0x289fe0: 0xb001b8  .word       0x00B001B8                   # dsll        $zero, $s0, 6 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289fe0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << 6);
label_289fe4:
    // 0x289fe4: 0x200020  add         $zero, $at, $zero
    ctx->pc = 0x289fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_289fe8:
    // 0x289fe8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289fe8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289fec:
    // 0x289fec: 0xc  syscall     0
    ctx->pc = 0x289fecu;
    ctx->pc = 0x289FF0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_289ff0:
    // 0x289ff0: 0x900100  .word       0x00900100                   # sll         $zero, $s0, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ff0u;
    
label_289ff4:
    // 0x289ff4: 0x14000c  .word       0x0014000C                   # syscall     0 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x289ff4u;
    ctx->pc = 0x289FF8u;
runtime->handleSyscall(rdram, ctx, 0x5000u);
label_289ff8:
    // 0x289ff8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x289ff8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_289ffc:
    // 0x289ffc: 0xd  break       0
    ctx->pc = 0x289ffcu;
    runtime->handleBreak(rdram, ctx);
label_28a000:
    // 0x28a000: 0x900100  .word       0x00900100                   # sll         $zero, $s0, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a000u;
    
label_28a004:
    // 0x28a004: 0x14000c  .word       0x0014000C                   # syscall     0 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a004u;
    ctx->pc = 0x28A008u;
runtime->handleSyscall(rdram, ctx, 0x5000u);
label_28a008:
    // 0x28a008: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a00c:
    // 0x28a00c: 0xd  break       0
    ctx->pc = 0x28a00cu;
    runtime->handleBreak(rdram, ctx);
label_28a010:
    // 0x28a010: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a014:
    // 0x28a014: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a018:
    if (ctx->pc == 0x28A018u) {
        ctx->pc = 0x28A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A014u;
        // 0x28a018: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A01Cu;
        goto label_28a01c;
    }
    ctx->pc = 0x28A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A014u;
        // 0x28a018: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A014u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A01Cu;
label_28a01c:
    // 0x28a01c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a01cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A01C raw=0x0000000E");
 /* MITIGATED */
label_28a020:
    // 0x28a020: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a024:
    // 0x28a024: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a028:
    if (ctx->pc == 0x28A028u) {
        ctx->pc = 0x28A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A024u;
        // 0x28a028: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A02Cu;
        goto label_28a02c;
    }
    ctx->pc = 0x28A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A024u;
        // 0x28a028: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A024u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A02Cu;
label_28a02c:
    // 0x28a02c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a02cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A02C raw=0x0000000E");
 /* MITIGATED */
label_28a030:
    // 0x28a030: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a034:
    // 0x28a034: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a038:
    if (ctx->pc == 0x28A038u) {
        ctx->pc = 0x28A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A034u;
        // 0x28a038: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A03Cu;
        goto label_28a03c;
    }
    ctx->pc = 0x28A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A034u;
        // 0x28a038: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A034u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A03Cu;
label_28a03c:
    // 0x28a03c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a03cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A03C raw=0x0000000E");
 /* MITIGATED */
label_28a040:
    // 0x28a040: 0xc  syscall     0
    ctx->pc = 0x28a040u;
    ctx->pc = 0x28A044u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a044:
    // 0x28a044: 0x164  .word       0x00000164                   # and         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a044u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a048:
    // 0x28a048: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a04c:
    // 0x28a04c: 0x174  teq         $zero, $zero, 5
    ctx->pc = 0x28a04cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a050:
    // 0x28a050: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a054:
    // 0x28a054: 0x174  teq         $zero, $zero, 5
    ctx->pc = 0x28a054u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a058:
    // 0x28a058: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a05c:
    // 0x28a05c: 0x174  teq         $zero, $zero, 5
    ctx->pc = 0x28a05cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a060:
    // 0x28a060: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a060u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a064:
    // 0x28a064: 0x174  teq         $zero, $zero, 5
    ctx->pc = 0x28a064u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a068:
    // 0x28a068: 0xc  syscall     0
    ctx->pc = 0x28a068u;
    ctx->pc = 0x28A06Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a06c:
    // 0x28a06c: 0x164  .word       0x00000164                   # and         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a06cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a070:
    // 0x28a070: 0xc  syscall     0
    ctx->pc = 0x28a070u;
    ctx->pc = 0x28A074u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a074:
    // 0x28a074: 0x18c  syscall     6
    ctx->pc = 0x28a074u;
    ctx->pc = 0x28A078u;
runtime->handleSyscall(rdram, ctx, 0x6u);
label_28a078:
    // 0x28a078: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28a078u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a07c:
    // 0x28a07c: 0x15c  .word       0x0000015C                   # dmult       $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a07cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28A07C raw=0x0000015C");
 /* MITIGATED */
label_28a080:
    // 0x28a080: 0xc  syscall     0
    ctx->pc = 0x28a080u;
    ctx->pc = 0x28A084u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a084:
    // 0x28a084: 0x18c  syscall     6
    ctx->pc = 0x28a084u;
    ctx->pc = 0x28A088u;
runtime->handleSyscall(rdram, ctx, 0x6u);
label_28a088:
    // 0x28a088: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28a088u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28a08c:
    // 0x28a08c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a08cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a090:
    // 0x28a090: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28a090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a094:
    // 0x28a094: 0x198  .word       0x00000198                   # mult        $zero, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a098:
    // 0x28a098: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x28a098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a09c:
    // 0x28a09c: 0x198  .word       0x00000198                   # mult        $zero, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a09cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a0a0:
    // 0x28a0a0: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A0A0 raw=0x0000004E");
 /* MITIGATED */
label_28a0a4:
    // 0x28a0a4: 0x198  .word       0x00000198                   # mult        $zero, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a0a8:
    // 0x28a0a8: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28a0ac:
    // 0x28a0ac: 0x19e  .word       0x0000019E                   # ddiv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28A0AC raw=0x0000019E");
 /* MITIGATED */
label_28a0b0:
    // 0x28a0b0: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x28a0b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_28a0b4:
    // 0x28a0b4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a0b8:
    // 0x28a0b8: 0x0  nop
    ctx->pc = 0x28a0b8u;
    // NOP
label_28a0bc:
    // 0x28a0bc: 0x0  nop
    ctx->pc = 0x28a0bcu;
    // NOP
label_28a0c0:
    // 0x28a0c0: 0x0  nop
    ctx->pc = 0x28a0c0u;
    // NOP
label_28a0c4:
    // 0x28a0c4: 0x0  nop
    ctx->pc = 0x28a0c4u;
    // NOP
label_28a0c8:
    // 0x28a0c8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a0c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a0cc:
    // 0x28a0cc: 0x0  nop
    ctx->pc = 0x28a0ccu;
    // NOP
label_28a0d0:
    // 0x28a0d0: 0x900260  .word       0x00900260                   # add         $zero, $a0, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0d0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28a0d4:
    // 0x28a0d4: 0x200008  jr          $at
label_28a0d8:
    if (ctx->pc == 0x28A0D8u) {
        ctx->pc = 0x28A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0D4u;
        // 0x28a0d8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0DCu;
        goto label_28a0dc;
    }
    ctx->pc = 0x28A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0D4u;
        // 0x28a0d8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A0D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A0DCu;
label_28a0dc:
    // 0x28a0dc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28a0dcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28a0e0:
    // 0x28a0e0: 0x900268  .word       0x00900268                   # mfsa        $zero # 00900240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a0e0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28a0e4:
    // 0x28a0e4: 0x200008  jr          $at
label_28a0e8:
    if (ctx->pc == 0x28A0E8u) {
        ctx->pc = 0x28A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0E4u;
        // 0x28a0e8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0ECu;
        goto label_28a0ec;
    }
    ctx->pc = 0x28A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0E4u;
        // 0x28a0e8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A0E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A0ECu;
label_28a0ec:
    // 0x28a0ec: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28a0ecu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28a0f0:
    // 0x28a0f0: 0x900250  .word       0x00900250                   # mfhi        $zero # 00900240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a0f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a0f4:
    // 0x28a0f4: 0x200008  jr          $at
label_28a0f8:
    if (ctx->pc == 0x28A0F8u) {
        ctx->pc = 0x28A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0F4u;
        // 0x28a0f8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A0FCu;
        goto label_28a0fc;
    }
    ctx->pc = 0x28A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0F4u;
        // 0x28a0f8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A0F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A0FCu;
label_28a0fc:
    // 0x28a0fc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28a0fcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28a100:
    // 0x28a100: 0x900258  .word       0x00900258                   # mult        $zero, $a0, $s0 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a104:
    // 0x28a104: 0x200008  jr          $at
label_28a108:
    if (ctx->pc == 0x28A108u) {
        ctx->pc = 0x28A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A104u;
        // 0x28a108: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A10Cu;
        goto label_28a10c;
    }
    ctx->pc = 0x28A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A104u;
        // 0x28a108: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A104u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A10Cu;
label_28a10c:
    // 0x28a10c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28a10cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28a110:
    // 0x28a110: 0x900230  tge         $a0, $s0, 8
    ctx->pc = 0x28a110u;
    if (GPR_S64(ctx, 4) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_28a114:
    // 0x28a114: 0x200020  add         $zero, $at, $zero
    ctx->pc = 0x28a114u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28a118:
    // 0x28a118: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a118u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a11c:
    // 0x28a11c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28a11cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28a120:
    // 0x28a120: 0x0  nop
    ctx->pc = 0x28a120u;
    // NOP
label_28a124:
    // 0x28a124: 0x0  nop
    ctx->pc = 0x28a124u;
    // NOP
label_28a128:
    // 0x28a128: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a128u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a12c:
    // 0x28a12c: 0x0  nop
    ctx->pc = 0x28a12cu;
    // NOP
label_28a130:
    // 0x28a130: 0x0  nop
    ctx->pc = 0x28a130u;
    // NOP
label_28a134:
    // 0x28a134: 0x0  nop
    ctx->pc = 0x28a134u;
    // NOP
label_28a138:
    // 0x28a138: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a138u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a13c:
    // 0x28a13c: 0x0  nop
    ctx->pc = 0x28a13cu;
    // NOP
label_28a140:
    // 0x28a140: 0x0  nop
    ctx->pc = 0x28a140u;
    // NOP
label_28a144:
    // 0x28a144: 0x0  nop
    ctx->pc = 0x28a144u;
    // NOP
label_28a148:
    // 0x28a148: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a14c:
    // 0x28a14c: 0x0  nop
    ctx->pc = 0x28a14cu;
    // NOP
label_28a150:
    // 0x28a150: 0xb001b8  .word       0x00B001B8                   # dsll        $zero, $s0, 6 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a150u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << 6);
label_28a154:
    // 0x28a154: 0x200020  add         $zero, $at, $zero
    ctx->pc = 0x28a154u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28a158:
    // 0x28a158: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a15c:
    // 0x28a15c: 0xc  syscall     0
    ctx->pc = 0x28a15cu;
    ctx->pc = 0x28A160u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a160:
    // 0x28a160: 0x900100  .word       0x00900100                   # sll         $zero, $s0, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a160u;
    
label_28a164:
    // 0x28a164: 0x14000c  .word       0x0014000C                   # syscall     0 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a164u;
    ctx->pc = 0x28A168u;
runtime->handleSyscall(rdram, ctx, 0x5000u);
label_28a168:
    // 0x28a168: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a168u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a16c:
    // 0x28a16c: 0xd  break       0
    ctx->pc = 0x28a16cu;
    runtime->handleBreak(rdram, ctx);
label_28a170:
    // 0x28a170: 0x900100  .word       0x00900100                   # sll         $zero, $s0, 4 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a170u;
    
label_28a174:
    // 0x28a174: 0x14000c  .word       0x0014000C                   # syscall     0 # 00140000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a174u;
    ctx->pc = 0x28A178u;
runtime->handleSyscall(rdram, ctx, 0x5000u);
label_28a178:
    // 0x28a178: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a178u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a17c:
    // 0x28a17c: 0xd  break       0
    ctx->pc = 0x28a17cu;
    runtime->handleBreak(rdram, ctx);
label_28a180:
    // 0x28a180: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a184:
    // 0x28a184: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a188:
    if (ctx->pc == 0x28A188u) {
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A18Cu;
        goto label_28a18c;
    }
    ctx->pc = 0x28A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A184u;
        // 0x28a188: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A18Cu;
label_28a18c:
    // 0x28a18c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a18cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A18C raw=0x0000000E");
 /* MITIGATED */
label_28a190:
    // 0x28a190: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a194:
    // 0x28a194: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a198:
    if (ctx->pc == 0x28A198u) {
        ctx->pc = 0x28A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A194u;
        // 0x28a198: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A19Cu;
        goto label_28a19c;
    }
    ctx->pc = 0x28A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A194u;
        // 0x28a198: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A19Cu;
label_28a19c:
    // 0x28a19c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a19cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A19C raw=0x0000000E");
 /* MITIGATED */
label_28a1a0:
    // 0x28a1a0: 0xa80158  .word       0x00A80158                   # mult        $zero, $a1, $t0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28a1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28a1a4:
    // 0x28a1a4: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_28a1a8:
    if (ctx->pc == 0x28A1A8u) {
        ctx->pc = 0x28A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1A4u;
        // 0x28a1a8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A1ACu;
        goto label_28a1ac;
    }
    ctx->pc = 0x28A1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1A4u;
        // 0x28a1a8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A1A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A1ACu;
label_28a1ac:
    // 0x28a1ac: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a1acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28A1AC raw=0x0000000E");
 /* MITIGATED */
label_28a1b0:
    // 0x28a1b0: 0x0  nop
    ctx->pc = 0x28a1b0u;
    // NOP
label_28a1b4:
    // 0x28a1b4: 0x0  nop
    ctx->pc = 0x28a1b4u;
    // NOP
label_28a1b8:
    // 0x28a1b8: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x28a1b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28a1bc:
    // 0x28a1bc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a1c0:
    // 0x28a1c0: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x28a1c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28a1c4:
    // 0x28a1c4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a1c8:
    // 0x28a1c8: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x28a1c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28a1cc:
    // 0x28a1cc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a1d0:
    // 0x28a1d0: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x28a1d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28a1d4:
    // 0x28a1d4: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a1d8:
    // 0x28a1d8: 0xc  syscall     0
    ctx->pc = 0x28a1d8u;
    ctx->pc = 0x28A1DCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a1dc:
    // 0x28a1dc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a1e0:
    // 0x28a1e0: 0x0  nop
    ctx->pc = 0x28a1e0u;
    // NOP
label_28a1e4:
    // 0x28a1e4: 0x0  nop
    ctx->pc = 0x28a1e4u;
    // NOP
label_28a1e8:
    // 0x28a1e8: 0x0  nop
    ctx->pc = 0x28a1e8u;
    // NOP
label_28a1ec:
    // 0x28a1ec: 0x0  nop
    ctx->pc = 0x28a1ecu;
    // NOP
label_28a1f0:
    // 0x28a1f0: 0x0  nop
    ctx->pc = 0x28a1f0u;
    // NOP
label_28a1f4:
    // 0x28a1f4: 0x0  nop
    ctx->pc = 0x28a1f4u;
    // NOP
label_28a1f8:
    // 0x28a1f8: 0xc  syscall     0
    ctx->pc = 0x28a1f8u;
    ctx->pc = 0x28A1FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28a1fc:
    // 0x28a1fc: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x28a1fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28a200:
    // 0x28a200: 0x10  mfhi        $zero
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a204:
    // 0x28a204: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_28a208:
    // 0x28a208: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28a208u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28A208 raw=0x0000001C");
 /* MITIGATED */
label_28a20c:
    // 0x28a20c: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x28a20cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_28a210:
    // 0x28a210: 0xcc  syscall     3
    ctx->pc = 0x28a210u;
    ctx->pc = 0x28A214u;
runtime->handleSyscall(rdram, ctx, 0x3u);
label_28a214:
    // 0x28a214: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28a218:
    // 0x28a218: 0xcc  syscall     3
    ctx->pc = 0x28a218u;
    ctx->pc = 0x28A21Cu;
runtime->handleSyscall(rdram, ctx, 0x3u);
label_28a21c:
    // 0x28a21c: 0xa7  .word       0x000000A7                   # not         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a21cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28a220:
    // 0x28a220: 0xcc  syscall     3
    ctx->pc = 0x28a220u;
    ctx->pc = 0x28A224u;
runtime->handleSyscall(rdram, ctx, 0x3u);
label_28a224:
    // 0x28a224: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a224u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a228:
    // 0x28a228: 0x0  nop
    ctx->pc = 0x28a228u;
    // NOP
label_28a22c:
    // 0x28a22c: 0x0  nop
    ctx->pc = 0x28a22cu;
    // NOP
label_28a230:
    // 0x28a230: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a230u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A230 raw=0x00000001");
 /* MITIGATED */
label_28a234:
    // 0x28a234: 0x0  nop
    ctx->pc = 0x28a234u;
    // NOP
label_28a238:
    // 0x28a238: 0x40a00  sll         $at, $a0, 8
    ctx->pc = 0x28a238u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_28a23c:
    // 0x28a23c: 0x0  nop
    ctx->pc = 0x28a23cu;
    // NOP
label_28a240:
    // 0x28a240: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a244:
    // 0x28a244: 0x0  nop
    ctx->pc = 0x28a244u;
    // NOP
label_28a248:
    // 0x28a248: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x28a248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_28a24c:
    // 0x28a24c: 0x0  nop
    ctx->pc = 0x28a24cu;
    // NOP
label_28a250:
    // 0x28a250: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28a254:
    // 0x28a254: 0x0  nop
    ctx->pc = 0x28a254u;
    // NOP
label_28a258:
    // 0x28a258: 0xf1e00  sll         $v1, $t7, 24
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
label_28a25c:
    // 0x28a25c: 0x0  nop
    ctx->pc = 0x28a25cu;
    // NOP
label_28a260:
    // 0x28a260: 0x8  jr          $zero
label_28a264:
    if (ctx->pc == 0x28A264u) {
        ctx->pc = 0x28A268u;
        goto label_28a268;
    }
    ctx->pc = 0x28A260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A268u;
label_28a268:
    // 0x28a268: 0xf2800  sll         $a1, $t7, 0
    ctx->pc = 0x28a268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_28a26c:
    // 0x28a26c: 0x0  nop
    ctx->pc = 0x28a26cu;
    // NOP
label_28a270:
    // 0x28a270: 0x10  mfhi        $zero
    ctx->pc = 0x28a270u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a274:
    // 0x28a274: 0x0  nop
    ctx->pc = 0x28a274u;
    // NOP
label_28a278:
    // 0x28a278: 0x53200  sll         $a2, $a1, 8
    ctx->pc = 0x28a278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_28a27c:
    // 0x28a27c: 0x0  nop
    ctx->pc = 0x28a27cu;
    // NOP
    ctx->pc = 0x28a280u;
    return;
}
