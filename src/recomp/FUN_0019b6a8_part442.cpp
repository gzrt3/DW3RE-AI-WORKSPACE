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


void FUN_0019b6a8_part442(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x272bf8u: goto label_272bf8;
        case 0x272bfcu: goto label_272bfc;
        case 0x272c00u: goto label_272c00;
        case 0x272c04u: goto label_272c04;
        case 0x272c08u: goto label_272c08;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c10u: goto label_272c10;
        case 0x272c14u: goto label_272c14;
        case 0x272c18u: goto label_272c18;
        case 0x272c1cu: goto label_272c1c;
        case 0x272c20u: goto label_272c20;
        case 0x272c24u: goto label_272c24;
        case 0x272c28u: goto label_272c28;
        case 0x272c2cu: goto label_272c2c;
        case 0x272c30u: goto label_272c30;
        case 0x272c34u: goto label_272c34;
        case 0x272c38u: goto label_272c38;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c40u: goto label_272c40;
        case 0x272c44u: goto label_272c44;
        case 0x272c48u: goto label_272c48;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c50u: goto label_272c50;
        case 0x272c54u: goto label_272c54;
        case 0x272c58u: goto label_272c58;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c60u: goto label_272c60;
        case 0x272c64u: goto label_272c64;
        case 0x272c68u: goto label_272c68;
        case 0x272c6cu: goto label_272c6c;
        case 0x272c70u: goto label_272c70;
        case 0x272c74u: goto label_272c74;
        case 0x272c78u: goto label_272c78;
        case 0x272c7cu: goto label_272c7c;
        case 0x272c80u: goto label_272c80;
        case 0x272c84u: goto label_272c84;
        case 0x272c88u: goto label_272c88;
        case 0x272c8cu: goto label_272c8c;
        case 0x272c90u: goto label_272c90;
        case 0x272c94u: goto label_272c94;
        case 0x272c98u: goto label_272c98;
        case 0x272c9cu: goto label_272c9c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272ca4u: goto label_272ca4;
        case 0x272ca8u: goto label_272ca8;
        case 0x272cacu: goto label_272cac;
        case 0x272cb0u: goto label_272cb0;
        case 0x272cb4u: goto label_272cb4;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cbcu: goto label_272cbc;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cccu: goto label_272ccc;
        case 0x272cd0u: goto label_272cd0;
        case 0x272cd4u: goto label_272cd4;
        case 0x272cd8u: goto label_272cd8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272ce0u: goto label_272ce0;
        case 0x272ce4u: goto label_272ce4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272cecu: goto label_272cec;
        case 0x272cf0u: goto label_272cf0;
        case 0x272cf4u: goto label_272cf4;
        case 0x272cf8u: goto label_272cf8;
        case 0x272cfcu: goto label_272cfc;
        case 0x272d00u: goto label_272d00;
        case 0x272d04u: goto label_272d04;
        case 0x272d08u: goto label_272d08;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d10u: goto label_272d10;
        case 0x272d14u: goto label_272d14;
        case 0x272d18u: goto label_272d18;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d20u: goto label_272d20;
        case 0x272d24u: goto label_272d24;
        case 0x272d28u: goto label_272d28;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d30u: goto label_272d30;
        case 0x272d34u: goto label_272d34;
        case 0x272d38u: goto label_272d38;
        case 0x272d3cu: goto label_272d3c;
        case 0x272d40u: goto label_272d40;
        case 0x272d44u: goto label_272d44;
        case 0x272d48u: goto label_272d48;
        case 0x272d4cu: goto label_272d4c;
        case 0x272d50u: goto label_272d50;
        case 0x272d54u: goto label_272d54;
        case 0x272d58u: goto label_272d58;
        case 0x272d5cu: goto label_272d5c;
        case 0x272d60u: goto label_272d60;
        case 0x272d64u: goto label_272d64;
        case 0x272d68u: goto label_272d68;
        case 0x272d6cu: goto label_272d6c;
        case 0x272d70u: goto label_272d70;
        case 0x272d74u: goto label_272d74;
        case 0x272d78u: goto label_272d78;
        case 0x272d7cu: goto label_272d7c;
        case 0x272d80u: goto label_272d80;
        case 0x272d84u: goto label_272d84;
        case 0x272d88u: goto label_272d88;
        case 0x272d8cu: goto label_272d8c;
        case 0x272d90u: goto label_272d90;
        case 0x272d94u: goto label_272d94;
        case 0x272d98u: goto label_272d98;
        case 0x272d9cu: goto label_272d9c;
        case 0x272da0u: goto label_272da0;
        case 0x272da4u: goto label_272da4;
        case 0x272da8u: goto label_272da8;
        case 0x272dacu: goto label_272dac;
        case 0x272db0u: goto label_272db0;
        case 0x272db4u: goto label_272db4;
        case 0x272db8u: goto label_272db8;
        case 0x272dbcu: goto label_272dbc;
        case 0x272dc0u: goto label_272dc0;
        case 0x272dc4u: goto label_272dc4;
        case 0x272dc8u: goto label_272dc8;
        case 0x272dccu: goto label_272dcc;
        case 0x272dd0u: goto label_272dd0;
        case 0x272dd4u: goto label_272dd4;
        case 0x272dd8u: goto label_272dd8;
        case 0x272ddcu: goto label_272ddc;
        case 0x272de0u: goto label_272de0;
        case 0x272de4u: goto label_272de4;
        case 0x272de8u: goto label_272de8;
        case 0x272decu: goto label_272dec;
        case 0x272df0u: goto label_272df0;
        case 0x272df4u: goto label_272df4;
        case 0x272df8u: goto label_272df8;
        case 0x272dfcu: goto label_272dfc;
        case 0x272e00u: goto label_272e00;
        case 0x272e04u: goto label_272e04;
        case 0x272e08u: goto label_272e08;
        case 0x272e0cu: goto label_272e0c;
        case 0x272e10u: goto label_272e10;
        case 0x272e14u: goto label_272e14;
        case 0x272e18u: goto label_272e18;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e20u: goto label_272e20;
        case 0x272e24u: goto label_272e24;
        case 0x272e28u: goto label_272e28;
        case 0x272e2cu: goto label_272e2c;
        case 0x272e30u: goto label_272e30;
        case 0x272e34u: goto label_272e34;
        case 0x272e38u: goto label_272e38;
        case 0x272e3cu: goto label_272e3c;
        case 0x272e40u: goto label_272e40;
        case 0x272e44u: goto label_272e44;
        case 0x272e48u: goto label_272e48;
        case 0x272e4cu: goto label_272e4c;
        case 0x272e50u: goto label_272e50;
        case 0x272e54u: goto label_272e54;
        case 0x272e58u: goto label_272e58;
        case 0x272e5cu: goto label_272e5c;
        case 0x272e60u: goto label_272e60;
        case 0x272e64u: goto label_272e64;
        case 0x272e68u: goto label_272e68;
        case 0x272e6cu: goto label_272e6c;
        case 0x272e70u: goto label_272e70;
        case 0x272e74u: goto label_272e74;
        case 0x272e78u: goto label_272e78;
        case 0x272e7cu: goto label_272e7c;
        case 0x272e80u: goto label_272e80;
        case 0x272e84u: goto label_272e84;
        case 0x272e88u: goto label_272e88;
        case 0x272e8cu: goto label_272e8c;
        case 0x272e90u: goto label_272e90;
        case 0x272e94u: goto label_272e94;
        case 0x272e98u: goto label_272e98;
        case 0x272e9cu: goto label_272e9c;
        case 0x272ea0u: goto label_272ea0;
        case 0x272ea4u: goto label_272ea4;
        case 0x272ea8u: goto label_272ea8;
        case 0x272eacu: goto label_272eac;
        case 0x272eb0u: goto label_272eb0;
        case 0x272eb4u: goto label_272eb4;
        case 0x272eb8u: goto label_272eb8;
        case 0x272ebcu: goto label_272ebc;
        case 0x272ec0u: goto label_272ec0;
        case 0x272ec4u: goto label_272ec4;
        case 0x272ec8u: goto label_272ec8;
        case 0x272eccu: goto label_272ecc;
        case 0x272ed0u: goto label_272ed0;
        case 0x272ed4u: goto label_272ed4;
        case 0x272ed8u: goto label_272ed8;
        case 0x272edcu: goto label_272edc;
        case 0x272ee0u: goto label_272ee0;
        case 0x272ee4u: goto label_272ee4;
        case 0x272ee8u: goto label_272ee8;
        case 0x272eecu: goto label_272eec;
        case 0x272ef0u: goto label_272ef0;
        case 0x272ef4u: goto label_272ef4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272efcu: goto label_272efc;
        case 0x272f00u: goto label_272f00;
        case 0x272f04u: goto label_272f04;
        case 0x272f08u: goto label_272f08;
        case 0x272f0cu: goto label_272f0c;
        case 0x272f10u: goto label_272f10;
        case 0x272f14u: goto label_272f14;
        case 0x272f18u: goto label_272f18;
        case 0x272f1cu: goto label_272f1c;
        case 0x272f20u: goto label_272f20;
        case 0x272f24u: goto label_272f24;
        case 0x272f28u: goto label_272f28;
        case 0x272f2cu: goto label_272f2c;
        case 0x272f30u: goto label_272f30;
        case 0x272f34u: goto label_272f34;
        case 0x272f38u: goto label_272f38;
        case 0x272f3cu: goto label_272f3c;
        case 0x272f40u: goto label_272f40;
        case 0x272f44u: goto label_272f44;
        case 0x272f48u: goto label_272f48;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f50u: goto label_272f50;
        case 0x272f54u: goto label_272f54;
        case 0x272f58u: goto label_272f58;
        case 0x272f5cu: goto label_272f5c;
        case 0x272f60u: goto label_272f60;
        case 0x272f64u: goto label_272f64;
        case 0x272f68u: goto label_272f68;
        case 0x272f6cu: goto label_272f6c;
        case 0x272f70u: goto label_272f70;
        case 0x272f74u: goto label_272f74;
        case 0x272f78u: goto label_272f78;
        case 0x272f7cu: goto label_272f7c;
        case 0x272f80u: goto label_272f80;
        case 0x272f84u: goto label_272f84;
        case 0x272f88u: goto label_272f88;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f90u: goto label_272f90;
        case 0x272f94u: goto label_272f94;
        case 0x272f98u: goto label_272f98;
        case 0x272f9cu: goto label_272f9c;
        case 0x272fa0u: goto label_272fa0;
        case 0x272fa4u: goto label_272fa4;
        case 0x272fa8u: goto label_272fa8;
        case 0x272facu: goto label_272fac;
        case 0x272fb0u: goto label_272fb0;
        case 0x272fb4u: goto label_272fb4;
        case 0x272fb8u: goto label_272fb8;
        case 0x272fbcu: goto label_272fbc;
        case 0x272fc0u: goto label_272fc0;
        case 0x272fc4u: goto label_272fc4;
        case 0x272fc8u: goto label_272fc8;
        case 0x272fccu: goto label_272fcc;
        case 0x272fd0u: goto label_272fd0;
        case 0x272fd4u: goto label_272fd4;
        case 0x272fd8u: goto label_272fd8;
        case 0x272fdcu: goto label_272fdc;
        case 0x272fe0u: goto label_272fe0;
        case 0x272fe4u: goto label_272fe4;
        case 0x272fe8u: goto label_272fe8;
        case 0x272fecu: goto label_272fec;
        case 0x272ff0u: goto label_272ff0;
        case 0x272ff4u: goto label_272ff4;
        case 0x272ff8u: goto label_272ff8;
        case 0x272ffcu: goto label_272ffc;
        case 0x273000u: goto label_273000;
        case 0x273004u: goto label_273004;
        case 0x273008u: goto label_273008;
        case 0x27300cu: goto label_27300c;
        case 0x273010u: goto label_273010;
        case 0x273014u: goto label_273014;
        case 0x273018u: goto label_273018;
        case 0x27301cu: goto label_27301c;
        case 0x273020u: goto label_273020;
        case 0x273024u: goto label_273024;
        case 0x273028u: goto label_273028;
        case 0x27302cu: goto label_27302c;
        case 0x273030u: goto label_273030;
        case 0x273034u: goto label_273034;
        case 0x273038u: goto label_273038;
        case 0x27303cu: goto label_27303c;
        case 0x273040u: goto label_273040;
        case 0x273044u: goto label_273044;
        case 0x273048u: goto label_273048;
        case 0x27304cu: goto label_27304c;
        case 0x273050u: goto label_273050;
        case 0x273054u: goto label_273054;
        case 0x273058u: goto label_273058;
        case 0x27305cu: goto label_27305c;
        case 0x273060u: goto label_273060;
        case 0x273064u: goto label_273064;
        case 0x273068u: goto label_273068;
        case 0x27306cu: goto label_27306c;
        case 0x273070u: goto label_273070;
        case 0x273074u: goto label_273074;
        case 0x273078u: goto label_273078;
        case 0x27307cu: goto label_27307c;
        case 0x273080u: goto label_273080;
        case 0x273084u: goto label_273084;
        case 0x273088u: goto label_273088;
        case 0x27308cu: goto label_27308c;
        case 0x273090u: goto label_273090;
        case 0x273094u: goto label_273094;
        case 0x273098u: goto label_273098;
        case 0x27309cu: goto label_27309c;
        case 0x2730a0u: goto label_2730a0;
        case 0x2730a4u: goto label_2730a4;
        case 0x2730a8u: goto label_2730a8;
        case 0x2730acu: goto label_2730ac;
        case 0x2730b0u: goto label_2730b0;
        case 0x2730b4u: goto label_2730b4;
        case 0x2730b8u: goto label_2730b8;
        case 0x2730bcu: goto label_2730bc;
        case 0x2730c0u: goto label_2730c0;
        case 0x2730c4u: goto label_2730c4;
        case 0x2730c8u: goto label_2730c8;
        case 0x2730ccu: goto label_2730cc;
        case 0x2730d0u: goto label_2730d0;
        case 0x2730d4u: goto label_2730d4;
        case 0x2730d8u: goto label_2730d8;
        case 0x2730dcu: goto label_2730dc;
        case 0x2730e0u: goto label_2730e0;
        case 0x2730e4u: goto label_2730e4;
        case 0x2730e8u: goto label_2730e8;
        case 0x2730ecu: goto label_2730ec;
        case 0x2730f0u: goto label_2730f0;
        case 0x2730f4u: goto label_2730f4;
        case 0x2730f8u: goto label_2730f8;
        case 0x2730fcu: goto label_2730fc;
        case 0x273100u: goto label_273100;
        case 0x273104u: goto label_273104;
        case 0x273108u: goto label_273108;
        case 0x27310cu: goto label_27310c;
        case 0x273110u: goto label_273110;
        case 0x273114u: goto label_273114;
        case 0x273118u: goto label_273118;
        case 0x27311cu: goto label_27311c;
        case 0x273120u: goto label_273120;
        case 0x273124u: goto label_273124;
        case 0x273128u: goto label_273128;
        case 0x27312cu: goto label_27312c;
        case 0x273130u: goto label_273130;
        case 0x273134u: goto label_273134;
        case 0x273138u: goto label_273138;
        case 0x27313cu: goto label_27313c;
        case 0x273140u: goto label_273140;
        case 0x273144u: goto label_273144;
        case 0x273148u: goto label_273148;
        case 0x27314cu: goto label_27314c;
        case 0x273150u: goto label_273150;
        case 0x273154u: goto label_273154;
        case 0x273158u: goto label_273158;
        case 0x27315cu: goto label_27315c;
        case 0x273160u: goto label_273160;
        case 0x273164u: goto label_273164;
        case 0x273168u: goto label_273168;
        case 0x27316cu: goto label_27316c;
        case 0x273170u: goto label_273170;
        case 0x273174u: goto label_273174;
        case 0x273178u: goto label_273178;
        case 0x27317cu: goto label_27317c;
        case 0x273180u: goto label_273180;
        case 0x273184u: goto label_273184;
        case 0x273188u: goto label_273188;
        case 0x27318cu: goto label_27318c;
        case 0x273190u: goto label_273190;
        case 0x273194u: goto label_273194;
        case 0x273198u: goto label_273198;
        case 0x27319cu: goto label_27319c;
        case 0x2731a0u: goto label_2731a0;
        case 0x2731a4u: goto label_2731a4;
        case 0x2731a8u: goto label_2731a8;
        case 0x2731acu: goto label_2731ac;
        case 0x2731b0u: goto label_2731b0;
        case 0x2731b4u: goto label_2731b4;
        case 0x2731b8u: goto label_2731b8;
        case 0x2731bcu: goto label_2731bc;
        case 0x2731c0u: goto label_2731c0;
        case 0x2731c4u: goto label_2731c4;
        case 0x2731c8u: goto label_2731c8;
        case 0x2731ccu: goto label_2731cc;
        case 0x2731d0u: goto label_2731d0;
        case 0x2731d4u: goto label_2731d4;
        case 0x2731d8u: goto label_2731d8;
        case 0x2731dcu: goto label_2731dc;
        case 0x2731e0u: goto label_2731e0;
        case 0x2731e4u: goto label_2731e4;
        case 0x2731e8u: goto label_2731e8;
        case 0x2731ecu: goto label_2731ec;
        case 0x2731f0u: goto label_2731f0;
        case 0x2731f4u: goto label_2731f4;
        case 0x2731f8u: goto label_2731f8;
        case 0x2731fcu: goto label_2731fc;
        case 0x273200u: goto label_273200;
        case 0x273204u: goto label_273204;
        case 0x273208u: goto label_273208;
        case 0x27320cu: goto label_27320c;
        case 0x273210u: goto label_273210;
        case 0x273214u: goto label_273214;
        case 0x273218u: goto label_273218;
        case 0x27321cu: goto label_27321c;
        case 0x273220u: goto label_273220;
        case 0x273224u: goto label_273224;
        case 0x273228u: goto label_273228;
        case 0x27322cu: goto label_27322c;
        case 0x273230u: goto label_273230;
        case 0x273234u: goto label_273234;
        case 0x273238u: goto label_273238;
        case 0x27323cu: goto label_27323c;
        case 0x273240u: goto label_273240;
        case 0x273244u: goto label_273244;
        case 0x273248u: goto label_273248;
        case 0x27324cu: goto label_27324c;
        case 0x273250u: goto label_273250;
        case 0x273254u: goto label_273254;
        case 0x273258u: goto label_273258;
        case 0x27325cu: goto label_27325c;
        case 0x273260u: goto label_273260;
        case 0x273264u: goto label_273264;
        case 0x273268u: goto label_273268;
        case 0x27326cu: goto label_27326c;
        case 0x273270u: goto label_273270;
        case 0x273274u: goto label_273274;
        case 0x273278u: goto label_273278;
        case 0x27327cu: goto label_27327c;
        case 0x273280u: goto label_273280;
        case 0x273284u: goto label_273284;
        case 0x273288u: goto label_273288;
        case 0x27328cu: goto label_27328c;
        case 0x273290u: goto label_273290;
        case 0x273294u: goto label_273294;
        case 0x273298u: goto label_273298;
        case 0x27329cu: goto label_27329c;
        case 0x2732a0u: goto label_2732a0;
        case 0x2732a4u: goto label_2732a4;
        case 0x2732a8u: goto label_2732a8;
        case 0x2732acu: goto label_2732ac;
        case 0x2732b0u: goto label_2732b0;
        case 0x2732b4u: goto label_2732b4;
        case 0x2732b8u: goto label_2732b8;
        case 0x2732bcu: goto label_2732bc;
        case 0x2732c0u: goto label_2732c0;
        case 0x2732c4u: goto label_2732c4;
        case 0x2732c8u: goto label_2732c8;
        case 0x2732ccu: goto label_2732cc;
        case 0x2732d0u: goto label_2732d0;
        case 0x2732d4u: goto label_2732d4;
        case 0x2732d8u: goto label_2732d8;
        case 0x2732dcu: goto label_2732dc;
        case 0x2732e0u: goto label_2732e0;
        case 0x2732e4u: goto label_2732e4;
        case 0x2732e8u: goto label_2732e8;
        case 0x2732ecu: goto label_2732ec;
        case 0x2732f0u: goto label_2732f0;
        case 0x2732f4u: goto label_2732f4;
        case 0x2732f8u: goto label_2732f8;
        case 0x2732fcu: goto label_2732fc;
        case 0x273300u: goto label_273300;
        case 0x273304u: goto label_273304;
        case 0x273308u: goto label_273308;
        case 0x27330cu: goto label_27330c;
        case 0x273310u: goto label_273310;
        case 0x273314u: goto label_273314;
        case 0x273318u: goto label_273318;
        case 0x27331cu: goto label_27331c;
        case 0x273320u: goto label_273320;
        case 0x273324u: goto label_273324;
        case 0x273328u: goto label_273328;
        case 0x27332cu: goto label_27332c;
        case 0x273330u: goto label_273330;
        case 0x273334u: goto label_273334;
        case 0x273338u: goto label_273338;
        case 0x27333cu: goto label_27333c;
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        case 0x2733c4u: goto label_2733c4;
        default: return;
    }

label_272bf8:
    // 0x272bf8: 0x0  nop
    ctx->pc = 0x272bf8u;
    // NOP
label_272bfc:
    // 0x272bfc: 0x0  nop
    ctx->pc = 0x272bfcu;
    // NOP
label_272c00:
    // 0x272c00: 0x925e  .word       0x0000925E                   # ddiv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x272C00 raw=0x0000925E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272c04:
    // 0x272c04: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_272c08:
    // 0x272c08: 0x0  nop
    ctx->pc = 0x272c08u;
    // NOP
label_272c0c:
    // 0x272c0c: 0x0  nop
    ctx->pc = 0x272c0cu;
    // NOP
label_272c10:
    // 0x272c10: 0x9269  .word       0x00009269                   # mtsa        $zero # 00009240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272c10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_272c14:
    // 0x272c14: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272c18:
    // 0x272c18: 0x0  nop
    ctx->pc = 0x272c18u;
    // NOP
label_272c1c:
    // 0x272c1c: 0x0  nop
    ctx->pc = 0x272c1cu;
    // NOP
label_272c20:
    // 0x272c20: 0x9274  teq         $zero, $zero, 585
    ctx->pc = 0x272c20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c24:
    // 0x272c24: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x272c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c28:
    // 0x272c28: 0x0  nop
    ctx->pc = 0x272c28u;
    // NOP
label_272c2c:
    // 0x272c2c: 0x0  nop
    ctx->pc = 0x272c2cu;
    // NOP
label_272c30:
    // 0x272c30: 0x9286  .word       0x00009286                   # srlv        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272c34:
    // 0x272c34: 0xd150  .word       0x0000D150                   # mfhi        $k0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c34u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_272c38:
    // 0x272c38: 0x0  nop
    ctx->pc = 0x272c38u;
    // NOP
label_272c3c:
    // 0x272c3c: 0x0  nop
    ctx->pc = 0x272c3cu;
    // NOP
label_272c40:
    // 0x272c40: 0x92a1  .word       0x000092A1                   # addu        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272c44:
    // 0x272c44: 0xd430  tge         $zero, $zero, 848
    ctx->pc = 0x272c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c48:
    // 0x272c48: 0x0  nop
    ctx->pc = 0x272c48u;
    // NOP
label_272c4c:
    // 0x272c4c: 0x0  nop
    ctx->pc = 0x272c4cu;
    // NOP
label_272c50:
    // 0x272c50: 0x92bc  dsll32      $s2, $zero, 10
    ctx->pc = 0x272c50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 10));
label_272c54:
    // 0x272c54: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_272c58:
    // 0x272c58: 0x0  nop
    ctx->pc = 0x272c58u;
    // NOP
label_272c5c:
    // 0x272c5c: 0x0  nop
    ctx->pc = 0x272c5cu;
    // NOP
label_272c60:
    // 0x272c60: 0x92c7  .word       0x000092C7                   # srav        $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272c64:
    // 0x272c64: 0xd990  .word       0x0000D990                   # mfhi        $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_272c68:
    // 0x272c68: 0x0  nop
    ctx->pc = 0x272c68u;
    // NOP
label_272c6c:
    // 0x272c6c: 0x0  nop
    ctx->pc = 0x272c6cu;
    // NOP
label_272c70:
    // 0x272c70: 0x92e3  .word       0x000092E3                   # negu        $s2, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c70u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272c74:
    // 0x272c74: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_272c78:
    // 0x272c78: 0x0  nop
    ctx->pc = 0x272c78u;
    // NOP
label_272c7c:
    // 0x272c7c: 0x0  nop
    ctx->pc = 0x272c7cu;
    // NOP
label_272c80:
    // 0x272c80: 0x92ef  .word       0x000092EF                   # dsubu       $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272c84:
    // 0x272c84: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272c88:
    // 0x272c88: 0x0  nop
    ctx->pc = 0x272c88u;
    // NOP
label_272c8c:
    // 0x272c8c: 0x0  nop
    ctx->pc = 0x272c8cu;
    // NOP
label_272c90:
    // 0x272c90: 0x9301  .word       0x00009301                   # INVALID     $zero, $zero, -0x6CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x272C90 raw=0x00009301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272c94:
    // 0x272c94: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c94u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_272c98:
    // 0x272c98: 0x0  nop
    ctx->pc = 0x272c98u;
    // NOP
label_272c9c:
    // 0x272c9c: 0x0  nop
    ctx->pc = 0x272c9cu;
    // NOP
label_272ca0:
    // 0x272ca0: 0x9316  .word       0x00009316                   # dsrlv       $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ca0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272ca4:
    // 0x272ca4: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_272ca8:
    // 0x272ca8: 0x0  nop
    ctx->pc = 0x272ca8u;
    // NOP
label_272cac:
    // 0x272cac: 0x0  nop
    ctx->pc = 0x272cacu;
    // NOP
label_272cb0:
    // 0x272cb0: 0x9335  .word       0x00009335                   # INVALID     $zero, $zero, -0x6CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272CB0 raw=0x00009335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272cb4:
    // 0x272cb4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_272cb8:
    // 0x272cb8: 0x0  nop
    ctx->pc = 0x272cb8u;
    // NOP
label_272cbc:
    // 0x272cbc: 0x0  nop
    ctx->pc = 0x272cbcu;
    // NOP
label_272cc0:
    // 0x272cc0: 0x934e  .word       0x0000934E                   # INVALID     $zero, $zero, -0x6CB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272CC0 raw=0x0000934E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272cc4:
    // 0x272cc4: 0xf5f0  tge         $zero, $zero, 983
    ctx->pc = 0x272cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272cc8:
    // 0x272cc8: 0x0  nop
    ctx->pc = 0x272cc8u;
    // NOP
label_272ccc:
    // 0x272ccc: 0x0  nop
    ctx->pc = 0x272cccu;
    // NOP
label_272cd0:
    // 0x272cd0: 0x936d  .word       0x0000936D                   # daddu       $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272cd4:
    // 0x272cd4: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x272cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272cd8:
    // 0x272cd8: 0x0  nop
    ctx->pc = 0x272cd8u;
    // NOP
label_272cdc:
    // 0x272cdc: 0x0  nop
    ctx->pc = 0x272cdcu;
    // NOP
label_272ce0:
    // 0x272ce0: 0x937e  dsrl32      $s2, $zero, 13
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (32 + 13));
label_272ce4:
    // 0x272ce4: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x272ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272ce8:
    // 0x272ce8: 0x0  nop
    ctx->pc = 0x272ce8u;
    // NOP
label_272cec:
    // 0x272cec: 0x0  nop
    ctx->pc = 0x272cecu;
    // NOP
label_272cf0:
    // 0x272cf0: 0x9392  .word       0x00009392                   # mflo        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_272cf4:
    // 0x272cf4: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_272cf8:
    // 0x272cf8: 0x0  nop
    ctx->pc = 0x272cf8u;
    // NOP
label_272cfc:
    // 0x272cfc: 0x0  nop
    ctx->pc = 0x272cfcu;
    // NOP
label_272d00:
    // 0x272d00: 0x939b  .word       0x0000939B                   # divu        $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272d04:
    // 0x272d04: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x272d04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_272d08:
    // 0x272d08: 0x0  nop
    ctx->pc = 0x272d08u;
    // NOP
label_272d0c:
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
label_272d10:
    // 0x272d10: 0x93af  .word       0x000093AF                   # dsubu       $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272d14:
    // 0x272d14: 0xc510  .word       0x0000C510                   # mfhi        $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d14u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_272d18:
    // 0x272d18: 0x0  nop
    ctx->pc = 0x272d18u;
    // NOP
label_272d1c:
    // 0x272d1c: 0x0  nop
    ctx->pc = 0x272d1cu;
    // NOP
label_272d20:
    // 0x272d20: 0x93c8  .word       0x000093C8                   # jr          $zero # 000093C0 <InstrIdType: CPU_SPECIAL>
label_272d24:
    if (ctx->pc == 0x272D24u) {
        ctx->pc = 0x272D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D20u;
        // 0x272d24: 0xb2f0  tge         $zero, $zero, 715 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D28u;
        goto label_272d28;
    }
    ctx->pc = 0x272D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x272D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D20u;
        // 0x272d24: 0xb2f0  tge         $zero, $zero, 715 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272D20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272D28u;
label_272d28:
    // 0x272d28: 0x0  nop
    ctx->pc = 0x272d28u;
    // NOP
label_272d2c:
    // 0x272d2c: 0x0  nop
    ctx->pc = 0x272d2cu;
    // NOP
label_272d30:
    // 0x272d30: 0x93df  .word       0x000093DF                   # ddivu       $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x272D30 raw=0x000093DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272d34:
    // 0x272d34: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d34u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272d38:
    // 0x272d38: 0x0  nop
    ctx->pc = 0x272d38u;
    // NOP
label_272d3c:
    // 0x272d3c: 0x0  nop
    ctx->pc = 0x272d3cu;
    // NOP
label_272d40:
    // 0x272d40: 0x93f6  tne         $zero, $zero, 591
    ctx->pc = 0x272d40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d44:
    // 0x272d44: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_272d48:
    // 0x272d48: 0x0  nop
    ctx->pc = 0x272d48u;
    // NOP
label_272d4c:
    // 0x272d4c: 0x0  nop
    ctx->pc = 0x272d4cu;
    // NOP
label_272d50:
    // 0x272d50: 0x940b  .word       0x0000940B                   # movn        $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_272d54:
    // 0x272d54: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_272d58:
    // 0x272d58: 0x0  nop
    ctx->pc = 0x272d58u;
    // NOP
label_272d5c:
    // 0x272d5c: 0x0  nop
    ctx->pc = 0x272d5cu;
    // NOP
label_272d60:
    // 0x272d60: 0x9419  .word       0x00009419                   # multu       $zero, $zero # 00009400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_272d64:
    // 0x272d64: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_272d68:
    // 0x272d68: 0x0  nop
    ctx->pc = 0x272d68u;
    // NOP
label_272d6c:
    // 0x272d6c: 0x0  nop
    ctx->pc = 0x272d6cu;
    // NOP
label_272d70:
    // 0x272d70: 0x9426  .word       0x00009426                   # xor         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272d74:
    // 0x272d74: 0x9e30  tge         $zero, $zero, 632
    ctx->pc = 0x272d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d78:
    // 0x272d78: 0x0  nop
    ctx->pc = 0x272d78u;
    // NOP
label_272d7c:
    // 0x272d7c: 0x0  nop
    ctx->pc = 0x272d7cu;
    // NOP
label_272d80:
    // 0x272d80: 0x943a  dsrl        $s2, $zero, 16
    ctx->pc = 0x272d80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 16);
label_272d84:
    // 0x272d84: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x272d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d88:
    // 0x272d88: 0x0  nop
    ctx->pc = 0x272d88u;
    // NOP
label_272d8c:
    // 0x272d8c: 0x0  nop
    ctx->pc = 0x272d8cu;
    // NOP
label_272d90:
    // 0x272d90: 0x9445  .word       0x00009445                   # INVALID     $zero, $zero, -0x6BBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272D90 raw=0x00009445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272d94:
    // 0x272d94: 0xe970  tge         $zero, $zero, 933
    ctx->pc = 0x272d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d98:
    // 0x272d98: 0x0  nop
    ctx->pc = 0x272d98u;
    // NOP
label_272d9c:
    // 0x272d9c: 0x0  nop
    ctx->pc = 0x272d9cu;
    // NOP
label_272da0:
    // 0x272da0: 0x9463  .word       0x00009463                   # negu        $s2, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272da0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272da4:
    // 0x272da4: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x272da4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272da8:
    // 0x272da8: 0x0  nop
    ctx->pc = 0x272da8u;
    // NOP
label_272dac:
    // 0x272dac: 0x0  nop
    ctx->pc = 0x272dacu;
    // NOP
label_272db0:
    // 0x272db0: 0x9478  dsll        $s2, $zero, 17
    ctx->pc = 0x272db0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 17);
label_272db4:
    // 0x272db4: 0x130a0  .word       0x000130A0                   # add         $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_272db8:
    // 0x272db8: 0x0  nop
    ctx->pc = 0x272db8u;
    // NOP
label_272dbc:
    // 0x272dbc: 0x0  nop
    ctx->pc = 0x272dbcu;
    // NOP
label_272dc0:
    // 0x272dc0: 0x949f  .word       0x0000949F                   # ddivu       $s2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x272DC0 raw=0x0000949F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272dc4:
    // 0x272dc4: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x272dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_272dc8:
    // 0x272dc8: 0x0  nop
    ctx->pc = 0x272dc8u;
    // NOP
label_272dcc:
    // 0x272dcc: 0x0  nop
    ctx->pc = 0x272dccu;
    // NOP
label_272dd0:
    // 0x272dd0: 0x94b1  tgeu        $zero, $zero, 594
    ctx->pc = 0x272dd0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272dd4:
    // 0x272dd4: 0xefb0  tge         $zero, $zero, 958
    ctx->pc = 0x272dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272dd8:
    // 0x272dd8: 0x0  nop
    ctx->pc = 0x272dd8u;
    // NOP
label_272ddc:
    // 0x272ddc: 0x0  nop
    ctx->pc = 0x272ddcu;
    // NOP
label_272de0:
    // 0x272de0: 0x94cf  .word       0x000094CF                   # sync.p # 00009000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272de0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272de4:
    // 0x272de4: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_272de8:
    // 0x272de8: 0x0  nop
    ctx->pc = 0x272de8u;
    // NOP
label_272dec:
    // 0x272dec: 0x0  nop
    ctx->pc = 0x272decu;
    // NOP
label_272df0:
    // 0x272df0: 0x94e2  .word       0x000094E2                   # neg         $s2, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272df0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_272df4:
    // 0x272df4: 0xf760  .word       0x0000F760                   # add         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_272df8:
    // 0x272df8: 0x0  nop
    ctx->pc = 0x272df8u;
    // NOP
label_272dfc:
    // 0x272dfc: 0x0  nop
    ctx->pc = 0x272dfcu;
    // NOP
label_272e00:
    // 0x272e00: 0x9501  .word       0x00009501                   # INVALID     $zero, $zero, -0x6AFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x272E00 raw=0x00009501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272e04:
    // 0x272e04: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x272e04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272e08:
    // 0x272e08: 0x0  nop
    ctx->pc = 0x272e08u;
    // NOP
label_272e0c:
    // 0x272e0c: 0x0  nop
    ctx->pc = 0x272e0cu;
    // NOP
label_272e10:
    // 0x272e10: 0x951b  .word       0x0000951B                   # divu        $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e10u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272e14:
    // 0x272e14: 0xf160  .word       0x0000F160                   # add         $fp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_272e18:
    // 0x272e18: 0x0  nop
    ctx->pc = 0x272e18u;
    // NOP
label_272e1c:
    // 0x272e1c: 0x0  nop
    ctx->pc = 0x272e1cu;
    // NOP
label_272e20:
    // 0x272e20: 0x953a  dsrl        $s2, $zero, 20
    ctx->pc = 0x272e20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 20);
label_272e24:
    // 0x272e24: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_272e28:
    // 0x272e28: 0x0  nop
    ctx->pc = 0x272e28u;
    // NOP
label_272e2c:
    // 0x272e2c: 0x0  nop
    ctx->pc = 0x272e2cu;
    // NOP
label_272e30:
    // 0x272e30: 0x9549  .word       0x00009549                   # jalr        $s2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
label_272e34:
    if (ctx->pc == 0x272E34u) {
        ctx->pc = 0x272E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E30u;
        // 0x272e34: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272E38u;
        goto label_272e38;
    }
    ctx->pc = 0x272E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 18, 0x272E38u);
        ctx->pc = 0x272E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272E30u;
        // 0x272e34: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272E30u, 0x272E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x272E38u;
label_272e38:
    // 0x272e38: 0x0  nop
    ctx->pc = 0x272e38u;
    // NOP
label_272e3c:
    // 0x272e3c: 0x0  nop
    ctx->pc = 0x272e3cu;
    // NOP
label_272e40:
    // 0x272e40: 0x9554  .word       0x00009554                   # dsllv       $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272e44:
    // 0x272e44: 0x5bf0  tge         $zero, $zero, 367
    ctx->pc = 0x272e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272e48:
    // 0x272e48: 0x0  nop
    ctx->pc = 0x272e48u;
    // NOP
label_272e4c:
    // 0x272e4c: 0x0  nop
    ctx->pc = 0x272e4cu;
    // NOP
label_272e50:
    // 0x272e50: 0x9560  .word       0x00009560                   # add         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_272e54:
    // 0x272e54: 0xb500  sll         $s6, $zero, 20
    ctx->pc = 0x272e54u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_272e58:
    // 0x272e58: 0x0  nop
    ctx->pc = 0x272e58u;
    // NOP
label_272e5c:
    // 0x272e5c: 0x0  nop
    ctx->pc = 0x272e5cu;
    // NOP
label_272e60:
    // 0x272e60: 0x9577  .word       0x00009577                   # INVALID     $zero, $zero, -0x6A89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x272E60 raw=0x00009577"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272e64:
    // 0x272e64: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272e68:
    // 0x272e68: 0x0  nop
    ctx->pc = 0x272e68u;
    // NOP
label_272e6c:
    // 0x272e6c: 0x0  nop
    ctx->pc = 0x272e6cu;
    // NOP
label_272e70:
    // 0x272e70: 0x9583  sra         $s2, $zero, 22
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), 22));
label_272e74:
    // 0x272e74: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_272e78:
    // 0x272e78: 0x0  nop
    ctx->pc = 0x272e78u;
    // NOP
label_272e7c:
    // 0x272e7c: 0x0  nop
    ctx->pc = 0x272e7cu;
    // NOP
label_272e80:
    // 0x272e80: 0x958f  .word       0x0000958F                   # sync.p # 00009000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272e84:
    // 0x272e84: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e84u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_272e88:
    // 0x272e88: 0x0  nop
    ctx->pc = 0x272e88u;
    // NOP
label_272e8c:
    // 0x272e8c: 0x0  nop
    ctx->pc = 0x272e8cu;
    // NOP
label_272e90:
    // 0x272e90: 0x95a2  .word       0x000095A2                   # neg         $s2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_272e94:
    // 0x272e94: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_272e98:
    // 0x272e98: 0x0  nop
    ctx->pc = 0x272e98u;
    // NOP
label_272e9c:
    // 0x272e9c: 0x0  nop
    ctx->pc = 0x272e9cu;
    // NOP
label_272ea0:
    // 0x272ea0: 0x95b6  tne         $zero, $zero, 598
    ctx->pc = 0x272ea0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272ea4:
    // 0x272ea4: 0x10c30  tge         $zero, $at, 48
    ctx->pc = 0x272ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272ea8:
    // 0x272ea8: 0x0  nop
    ctx->pc = 0x272ea8u;
    // NOP
label_272eac:
    // 0x272eac: 0x0  nop
    ctx->pc = 0x272eacu;
    // NOP
label_272eb0:
    // 0x272eb0: 0x95d8  .word       0x000095D8                   # mult        $s2, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_272eb4:
    // 0x272eb4: 0xcc00  sll         $t9, $zero, 16
    ctx->pc = 0x272eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_272eb8:
    // 0x272eb8: 0x0  nop
    ctx->pc = 0x272eb8u;
    // NOP
label_272ebc:
    // 0x272ebc: 0x0  nop
    ctx->pc = 0x272ebcu;
    // NOP
label_272ec0:
    // 0x272ec0: 0x95f2  tlt         $zero, $zero, 599
    ctx->pc = 0x272ec0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272ec4:
    // 0x272ec4: 0x14150  .word       0x00014150                   # mfhi        $t0 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ec4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_272ec8:
    // 0x272ec8: 0x0  nop
    ctx->pc = 0x272ec8u;
    // NOP
label_272ecc:
    // 0x272ecc: 0x0  nop
    ctx->pc = 0x272eccu;
    // NOP
label_272ed0:
    // 0x272ed0: 0x961b  .word       0x0000961B                   # divu        $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ed0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272ed4:
    // 0x272ed4: 0x13750  .word       0x00013750                   # mfhi        $a2 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ed4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_272ed8:
    // 0x272ed8: 0x0  nop
    ctx->pc = 0x272ed8u;
    // NOP
label_272edc:
    // 0x272edc: 0x0  nop
    ctx->pc = 0x272edcu;
    // NOP
label_272ee0:
    // 0x272ee0: 0x9642  srl         $s2, $zero, 25
    ctx->pc = 0x272ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_272ee4:
    // 0x272ee4: 0x11830  tge         $zero, $at, 96
    ctx->pc = 0x272ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272ee8:
    // 0x272ee8: 0x0  nop
    ctx->pc = 0x272ee8u;
    // NOP
label_272eec:
    // 0x272eec: 0x0  nop
    ctx->pc = 0x272eecu;
    // NOP
label_272ef0:
    // 0x272ef0: 0x9666  .word       0x00009666                   # xor         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ef0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272ef4:
    // 0x272ef4: 0x13ff0  tge         $zero, $at, 255
    ctx->pc = 0x272ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272ef8:
    // 0x272ef8: 0x0  nop
    ctx->pc = 0x272ef8u;
    // NOP
label_272efc:
    // 0x272efc: 0x0  nop
    ctx->pc = 0x272efcu;
    // NOP
label_272f00:
    // 0x272f00: 0x968e  .word       0x0000968E                   # INVALID     $zero, $zero, -0x6972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272F00 raw=0x0000968E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272f04:
    // 0x272f04: 0x1ad20  .word       0x0001AD20                   # add         $s5, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_272f08:
    // 0x272f08: 0x0  nop
    ctx->pc = 0x272f08u;
    // NOP
label_272f0c:
    // 0x272f0c: 0x0  nop
    ctx->pc = 0x272f0cu;
    // NOP
label_272f10:
    // 0x272f10: 0x96c4  .word       0x000096C4                   # sllv        $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272f14:
    // 0x272f14: 0x10d90  .word       0x00010D90                   # mfhi        $at # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f14u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_272f18:
    // 0x272f18: 0x0  nop
    ctx->pc = 0x272f18u;
    // NOP
label_272f1c:
    // 0x272f1c: 0x0  nop
    ctx->pc = 0x272f1cu;
    // NOP
label_272f20:
    // 0x272f20: 0x96e6  .word       0x000096E6                   # xor         $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272f24:
    // 0x272f24: 0x12690  .word       0x00012690                   # mfhi        $a0 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_272f28:
    // 0x272f28: 0x0  nop
    ctx->pc = 0x272f28u;
    // NOP
label_272f2c:
    // 0x272f2c: 0x0  nop
    ctx->pc = 0x272f2cu;
    // NOP
label_272f30:
    // 0x272f30: 0x970b  .word       0x0000970B                   # movn        $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f30u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_272f34:
    // 0x272f34: 0x10ad0  .word       0x00010AD0                   # mfhi        $at # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f34u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_272f38:
    // 0x272f38: 0x0  nop
    ctx->pc = 0x272f38u;
    // NOP
label_272f3c:
    // 0x272f3c: 0x0  nop
    ctx->pc = 0x272f3cu;
    // NOP
label_272f40:
    // 0x272f40: 0x972d  .word       0x0000972D                   # daddu       $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272f44:
    // 0x272f44: 0x12690  .word       0x00012690                   # mfhi        $a0 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_272f48:
    // 0x272f48: 0x0  nop
    ctx->pc = 0x272f48u;
    // NOP
label_272f4c:
    // 0x272f4c: 0x0  nop
    ctx->pc = 0x272f4cu;
    // NOP
label_272f50:
    // 0x272f50: 0x9752  .word       0x00009752                   # mflo        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f50u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_272f54:
    // 0x272f54: 0x12950  .word       0x00012950                   # mfhi        $a1 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f54u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272f58:
    // 0x272f58: 0x0  nop
    ctx->pc = 0x272f58u;
    // NOP
label_272f5c:
    // 0x272f5c: 0x0  nop
    ctx->pc = 0x272f5cu;
    // NOP
label_272f60:
    // 0x272f60: 0x9778  dsll        $s2, $zero, 29
    ctx->pc = 0x272f60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 29);
label_272f64:
    // 0x272f64: 0x11c70  tge         $zero, $at, 113
    ctx->pc = 0x272f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272f68:
    // 0x272f68: 0x0  nop
    ctx->pc = 0x272f68u;
    // NOP
label_272f6c:
    // 0x272f6c: 0x0  nop
    ctx->pc = 0x272f6cu;
    // NOP
label_272f70:
    // 0x272f70: 0x979c  .word       0x0000979C                   # dmult       $zero, $zero # 00009780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272F70 raw=0x0000979C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272f74:
    // 0x272f74: 0xeba0  .word       0x0000EBA0                   # add         $sp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_272f78:
    // 0x272f78: 0x0  nop
    ctx->pc = 0x272f78u;
    // NOP
label_272f7c:
    // 0x272f7c: 0x0  nop
    ctx->pc = 0x272f7cu;
    // NOP
label_272f80:
    // 0x272f80: 0x97ba  dsrl        $s2, $zero, 30
    ctx->pc = 0x272f80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 30);
label_272f84:
    // 0x272f84: 0x15c20  .word       0x00015C20                   # add         $t3, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272f88:
    // 0x272f88: 0x0  nop
    ctx->pc = 0x272f88u;
    // NOP
label_272f8c:
    // 0x272f8c: 0x0  nop
    ctx->pc = 0x272f8cu;
    // NOP
label_272f90:
    // 0x272f90: 0x97e6  .word       0x000097E6                   # xor         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272f94:
    // 0x272f94: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272f94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_272f98:
    // 0x272f98: 0x0  nop
    ctx->pc = 0x272f98u;
    // NOP
label_272f9c:
    // 0x272f9c: 0x0  nop
    ctx->pc = 0x272f9cu;
    // NOP
label_272fa0:
    // 0x272fa0: 0x9802  srl         $s3, $zero, 0
    ctx->pc = 0x272fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_272fa4:
    // 0x272fa4: 0x14e40  sll         $t1, $at, 25
    ctx->pc = 0x272fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_272fa8:
    // 0x272fa8: 0x0  nop
    ctx->pc = 0x272fa8u;
    // NOP
label_272fac:
    // 0x272fac: 0x0  nop
    ctx->pc = 0x272facu;
    // NOP
label_272fb0:
    // 0x272fb0: 0x982c  dadd        $s3, $zero, $zero
    ctx->pc = 0x272fb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_272fb4:
    // 0x272fb4: 0x11fb0  tge         $zero, $at, 126
    ctx->pc = 0x272fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272fb8:
    // 0x272fb8: 0x0  nop
    ctx->pc = 0x272fb8u;
    // NOP
label_272fbc:
    // 0x272fbc: 0x0  nop
    ctx->pc = 0x272fbcu;
    // NOP
label_272fc0:
    // 0x272fc0: 0x9850  .word       0x00009850                   # mfhi        $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272fc0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_272fc4:
    // 0x272fc4: 0x13630  tge         $zero, $at, 216
    ctx->pc = 0x272fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_272fc8:
    // 0x272fc8: 0x0  nop
    ctx->pc = 0x272fc8u;
    // NOP
label_272fcc:
    // 0x272fcc: 0x0  nop
    ctx->pc = 0x272fccu;
    // NOP
label_272fd0:
    // 0x272fd0: 0x9877  .word       0x00009877                   # INVALID     $zero, $zero, -0x6789 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x272FD0 raw=0x00009877"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272fd4:
    // 0x272fd4: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x272fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_272fd8:
    // 0x272fd8: 0x0  nop
    ctx->pc = 0x272fd8u;
    // NOP
label_272fdc:
    // 0x272fdc: 0x0  nop
    ctx->pc = 0x272fdcu;
    // NOP
label_272fe0:
    // 0x272fe0: 0x989c  .word       0x0000989C                   # dmult       $zero, $zero # 00009880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272FE0 raw=0x0000989C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272fe4:
    // 0x272fe4: 0xc700  sll         $t8, $zero, 28
    ctx->pc = 0x272fe4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_272fe8:
    // 0x272fe8: 0x0  nop
    ctx->pc = 0x272fe8u;
    // NOP
label_272fec:
    // 0x272fec: 0x0  nop
    ctx->pc = 0x272fecu;
    // NOP
label_272ff0:
    // 0x272ff0: 0x98b5  .word       0x000098B5                   # INVALID     $zero, $zero, -0x674B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272FF0 raw=0x000098B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272ff4:
    // 0x272ff4: 0x11ac0  sll         $v1, $at, 11
    ctx->pc = 0x272ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_272ff8:
    // 0x272ff8: 0x0  nop
    ctx->pc = 0x272ff8u;
    // NOP
label_272ffc:
    // 0x272ffc: 0x0  nop
    ctx->pc = 0x272ffcu;
    // NOP
label_273000:
    // 0x273000: 0x98d9  .word       0x000098D9                   # multu       $zero, $zero # 000098C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273000u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_273004:
    // 0x273004: 0x1cde0  .word       0x0001CDE0                   # add         $t9, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_273008:
    // 0x273008: 0x0  nop
    ctx->pc = 0x273008u;
    // NOP
label_27300c:
    // 0x27300c: 0x0  nop
    ctx->pc = 0x27300cu;
    // NOP
label_273010:
    // 0x273010: 0x9913  .word       0x00009913                   # mtlo        $zero # 00009900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273010u;
    ctx->lo = GPR_U64(ctx, 0);
label_273014:
    // 0x273014: 0x12bd0  .word       0x00012BD0                   # mfhi        $a1 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273014u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_273018:
    // 0x273018: 0x0  nop
    ctx->pc = 0x273018u;
    // NOP
label_27301c:
    // 0x27301c: 0x0  nop
    ctx->pc = 0x27301cu;
    // NOP
label_273020:
    // 0x273020: 0x9939  .word       0x00009939                   # INVALID     $zero, $zero, -0x66C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273020 raw=0x00009939"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273024:
    // 0x273024: 0x16a30  tge         $zero, $at, 424
    ctx->pc = 0x273024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273028:
    // 0x273028: 0x0  nop
    ctx->pc = 0x273028u;
    // NOP
label_27302c:
    // 0x27302c: 0x0  nop
    ctx->pc = 0x27302cu;
    // NOP
label_273030:
    // 0x273030: 0x9967  .word       0x00009967                   # not         $s3, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273030u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273034:
    // 0x273034: 0xef90  .word       0x0000EF90                   # mfhi        $sp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273034u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_273038:
    // 0x273038: 0x0  nop
    ctx->pc = 0x273038u;
    // NOP
label_27303c:
    // 0x27303c: 0x0  nop
    ctx->pc = 0x27303cu;
    // NOP
label_273040:
    // 0x273040: 0x9985  .word       0x00009985                   # INVALID     $zero, $zero, -0x667B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273040 raw=0x00009985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273044:
    // 0x273044: 0x19a10  .word       0x00019A10                   # mfhi        $s3 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273044u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273048:
    // 0x273048: 0x0  nop
    ctx->pc = 0x273048u;
    // NOP
label_27304c:
    // 0x27304c: 0x0  nop
    ctx->pc = 0x27304cu;
    // NOP
label_273050:
    // 0x273050: 0x99b9  .word       0x000099B9                   # INVALID     $zero, $zero, -0x6647 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273050 raw=0x000099B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273054:
    // 0x273054: 0x113a0  .word       0x000113A0                   # add         $v0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_273058:
    // 0x273058: 0x0  nop
    ctx->pc = 0x273058u;
    // NOP
label_27305c:
    // 0x27305c: 0x0  nop
    ctx->pc = 0x27305cu;
    // NOP
label_273060:
    // 0x273060: 0x99dc  .word       0x000099DC                   # dmult       $zero, $zero # 000099C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x273060 raw=0x000099DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273064:
    // 0x273064: 0x12720  .word       0x00012720                   # add         $a0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_273068:
    // 0x273068: 0x0  nop
    ctx->pc = 0x273068u;
    // NOP
label_27306c:
    // 0x27306c: 0x0  nop
    ctx->pc = 0x27306cu;
    // NOP
label_273070:
    // 0x273070: 0x9a01  .word       0x00009A01                   # INVALID     $zero, $zero, -0x65FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x273070 raw=0x00009A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273074:
    // 0x273074: 0x18630  tge         $zero, $at, 536
    ctx->pc = 0x273074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273078:
    // 0x273078: 0x0  nop
    ctx->pc = 0x273078u;
    // NOP
label_27307c:
    // 0x27307c: 0x0  nop
    ctx->pc = 0x27307cu;
    // NOP
label_273080:
    // 0x273080: 0x9a32  tlt         $zero, $zero, 616
    ctx->pc = 0x273080u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273084:
    // 0x273084: 0x15ce0  .word       0x00015CE0                   # add         $t3, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_273088:
    // 0x273088: 0x0  nop
    ctx->pc = 0x273088u;
    // NOP
label_27308c:
    // 0x27308c: 0x0  nop
    ctx->pc = 0x27308cu;
    // NOP
label_273090:
    // 0x273090: 0x9a5e  .word       0x00009A5E                   # ddiv        $s3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x273090 raw=0x00009A5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273094:
    // 0x273094: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x273094u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273098:
    // 0x273098: 0x0  nop
    ctx->pc = 0x273098u;
    // NOP
label_27309c:
    // 0x27309c: 0x0  nop
    ctx->pc = 0x27309cu;
    // NOP
label_2730a0:
    // 0x2730a0: 0x9a78  dsll        $s3, $zero, 9
    ctx->pc = 0x2730a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 9);
label_2730a4:
    // 0x2730a4: 0x101a0  .word       0x000101A0                   # add         $zero, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2730a8:
    // 0x2730a8: 0x0  nop
    ctx->pc = 0x2730a8u;
    // NOP
label_2730ac:
    // 0x2730ac: 0x0  nop
    ctx->pc = 0x2730acu;
    // NOP
label_2730b0:
    // 0x2730b0: 0x9a99  .word       0x00009A99                   # multu       $zero, $zero # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2730b4:
    // 0x2730b4: 0x14e20  .word       0x00014E20                   # add         $t1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2730b8:
    // 0x2730b8: 0x0  nop
    ctx->pc = 0x2730b8u;
    // NOP
label_2730bc:
    // 0x2730bc: 0x0  nop
    ctx->pc = 0x2730bcu;
    // NOP
label_2730c0:
    // 0x2730c0: 0x9ac3  sra         $s3, $zero, 11
    ctx->pc = 0x2730c0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), 11));
label_2730c4:
    // 0x2730c4: 0x11110  .word       0x00011110                   # mfhi        $v0 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2730c8:
    // 0x2730c8: 0x0  nop
    ctx->pc = 0x2730c8u;
    // NOP
label_2730cc:
    // 0x2730cc: 0x0  nop
    ctx->pc = 0x2730ccu;
    // NOP
label_2730d0:
    // 0x2730d0: 0x9ae6  .word       0x00009AE6                   # xor         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2730d4:
    // 0x2730d4: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2730d8:
    // 0x2730d8: 0x0  nop
    ctx->pc = 0x2730d8u;
    // NOP
label_2730dc:
    // 0x2730dc: 0x0  nop
    ctx->pc = 0x2730dcu;
    // NOP
label_2730e0:
    // 0x2730e0: 0x9aed  .word       0x00009AED                   # daddu       $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2730e4:
    // 0x2730e4: 0xfb20  .word       0x0000FB20                   # add         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2730e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2730e8:
    // 0x2730e8: 0x0  nop
    ctx->pc = 0x2730e8u;
    // NOP
label_2730ec:
    // 0x2730ec: 0x0  nop
    ctx->pc = 0x2730ecu;
    // NOP
label_2730f0:
    // 0x2730f0: 0x9b0d  break       0, 620
    ctx->pc = 0x2730f0u;
    runtime->handleBreak(rdram, ctx);
label_2730f4:
    // 0x2730f4: 0x13cc0  sll         $a3, $at, 19
    ctx->pc = 0x2730f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2730f8:
    // 0x2730f8: 0x0  nop
    ctx->pc = 0x2730f8u;
    // NOP
label_2730fc:
    // 0x2730fc: 0x0  nop
    ctx->pc = 0x2730fcu;
    // NOP
label_273100:
    // 0x273100: 0x9b35  .word       0x00009B35                   # INVALID     $zero, $zero, -0x64CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273100 raw=0x00009B35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273104:
    // 0x273104: 0xf4e0  .word       0x0000F4E0                   # add         $fp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_273108:
    // 0x273108: 0x0  nop
    ctx->pc = 0x273108u;
    // NOP
label_27310c:
    // 0x27310c: 0x0  nop
    ctx->pc = 0x27310cu;
    // NOP
label_273110:
    // 0x273110: 0x9b54  .word       0x00009B54                   # dsllv       $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273110u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273114:
    // 0x273114: 0xdfa0  .word       0x0000DFA0                   # add         $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_273118:
    // 0x273118: 0x0  nop
    ctx->pc = 0x273118u;
    // NOP
label_27311c:
    // 0x27311c: 0x0  nop
    ctx->pc = 0x27311cu;
    // NOP
label_273120:
    // 0x273120: 0x9b70  tge         $zero, $zero, 621
    ctx->pc = 0x273120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273124:
    // 0x273124: 0xc7a0  .word       0x0000C7A0                   # add         $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_273128:
    // 0x273128: 0x0  nop
    ctx->pc = 0x273128u;
    // NOP
label_27312c:
    // 0x27312c: 0x0  nop
    ctx->pc = 0x27312cu;
    // NOP
label_273130:
    // 0x273130: 0x9b89  .word       0x00009B89                   # jalr        $s3, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_273134:
    if (ctx->pc == 0x273134u) {
        ctx->pc = 0x273134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273130u;
        // 0x273134: 0x15550  .word       0x00015550                   # mfhi        $t2 # 00010540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273138u;
        goto label_273138;
    }
    ctx->pc = 0x273130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 19, 0x273138u);
        ctx->pc = 0x273134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273130u;
        // 0x273134: 0x15550  .word       0x00015550                   # mfhi        $t2 # 00010540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273130u, 0x273138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273138u;
label_273138:
    // 0x273138: 0x0  nop
    ctx->pc = 0x273138u;
    // NOP
label_27313c:
    // 0x27313c: 0x0  nop
    ctx->pc = 0x27313cu;
    // NOP
label_273140:
    // 0x273140: 0x9bb4  teq         $zero, $zero, 622
    ctx->pc = 0x273140u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273144:
    // 0x273144: 0x11680  sll         $v0, $at, 26
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_273148:
    // 0x273148: 0x0  nop
    ctx->pc = 0x273148u;
    // NOP
label_27314c:
    // 0x27314c: 0x0  nop
    ctx->pc = 0x27314cu;
    // NOP
label_273150:
    // 0x273150: 0x9bd7  .word       0x00009BD7                   # dsrav       $s3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273150u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273154:
    // 0x273154: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_273158:
    // 0x273158: 0x0  nop
    ctx->pc = 0x273158u;
    // NOP
label_27315c:
    // 0x27315c: 0x0  nop
    ctx->pc = 0x27315cu;
    // NOP
label_273160:
    // 0x273160: 0x9be4  .word       0x00009BE4                   # and         $s3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273160u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273164:
    // 0x273164: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x273164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273168:
    // 0x273168: 0x0  nop
    ctx->pc = 0x273168u;
    // NOP
label_27316c:
    // 0x27316c: 0x0  nop
    ctx->pc = 0x27316cu;
    // NOP
label_273170:
    // 0x273170: 0x9bf2  tlt         $zero, $zero, 623
    ctx->pc = 0x273170u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273174:
    // 0x273174: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x273174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273178:
    // 0x273178: 0x0  nop
    ctx->pc = 0x273178u;
    // NOP
label_27317c:
    // 0x27317c: 0x0  nop
    ctx->pc = 0x27317cu;
    // NOP
label_273180:
    // 0x273180: 0x9c08  .word       0x00009C08                   # jr          $zero # 00009C00 <InstrIdType: CPU_SPECIAL>
label_273184:
    if (ctx->pc == 0x273184u) {
        ctx->pc = 0x273184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273180u;
        // 0x273184: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273188u;
        goto label_273188;
    }
    ctx->pc = 0x273180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273180u;
        // 0x273184: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273180u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273188u;
label_273188:
    // 0x273188: 0x0  nop
    ctx->pc = 0x273188u;
    // NOP
label_27318c:
    // 0x27318c: 0x0  nop
    ctx->pc = 0x27318cu;
    // NOP
label_273190:
    // 0x273190: 0x9c15  .word       0x00009C15                   # INVALID     $zero, $zero, -0x63EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273190 raw=0x00009C15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273194:
    // 0x273194: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_273198:
    // 0x273198: 0x0  nop
    ctx->pc = 0x273198u;
    // NOP
label_27319c:
    // 0x27319c: 0x0  nop
    ctx->pc = 0x27319cu;
    // NOP
label_2731a0:
    // 0x2731a0: 0x9c1e  .word       0x00009C1E                   # ddiv        $s3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2731A0 raw=0x00009C1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2731a4:
    // 0x2731a4: 0xff10  .word       0x0000FF10                   # mfhi        $ra # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731a4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2731a8:
    // 0x2731a8: 0x0  nop
    ctx->pc = 0x2731a8u;
    // NOP
label_2731ac:
    // 0x2731ac: 0x0  nop
    ctx->pc = 0x2731acu;
    // NOP
label_2731b0:
    // 0x2731b0: 0x9c3e  dsrl32      $s3, $zero, 16
    ctx->pc = 0x2731b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (32 + 16));
label_2731b4:
    // 0x2731b4: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2731b8:
    // 0x2731b8: 0x0  nop
    ctx->pc = 0x2731b8u;
    // NOP
label_2731bc:
    // 0x2731bc: 0x0  nop
    ctx->pc = 0x2731bcu;
    // NOP
label_2731c0:
    // 0x2731c0: 0x9c4c  syscall     625
    ctx->pc = 0x2731c0u;
    ctx->pc = 0x2731C4u;
runtime->handleSyscall(rdram, ctx, 0x271u);
label_2731c4:
    // 0x2731c4: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2731c8:
    // 0x2731c8: 0x0  nop
    ctx->pc = 0x2731c8u;
    // NOP
label_2731cc:
    // 0x2731cc: 0x0  nop
    ctx->pc = 0x2731ccu;
    // NOP
label_2731d0:
    // 0x2731d0: 0x9c53  .word       0x00009C53                   # mtlo        $zero # 00009C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2731d4:
    // 0x2731d4: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x2731d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2731d8:
    // 0x2731d8: 0x0  nop
    ctx->pc = 0x2731d8u;
    // NOP
label_2731dc:
    // 0x2731dc: 0x0  nop
    ctx->pc = 0x2731dcu;
    // NOP
label_2731e0:
    // 0x2731e0: 0x9c5e  .word       0x00009C5E                   # ddiv        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2731E0 raw=0x00009C5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2731e4:
    // 0x2731e4: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x2731e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2731e8:
    // 0x2731e8: 0x0  nop
    ctx->pc = 0x2731e8u;
    // NOP
label_2731ec:
    // 0x2731ec: 0x0  nop
    ctx->pc = 0x2731ecu;
    // NOP
label_2731f0:
    // 0x2731f0: 0x9c6b  .word       0x00009C6B                   # sltu        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2731f0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2731f4:
    // 0x2731f4: 0x8ef0  tge         $zero, $zero, 571
    ctx->pc = 0x2731f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2731f8:
    // 0x2731f8: 0x0  nop
    ctx->pc = 0x2731f8u;
    // NOP
label_2731fc:
    // 0x2731fc: 0x0  nop
    ctx->pc = 0x2731fcu;
    // NOP
label_273200:
    // 0x273200: 0x9c7d  .word       0x00009C7D                   # INVALID     $zero, $zero, -0x6383 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273200 raw=0x00009C7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273204:
    // 0x273204: 0x10390  .word       0x00010390                   # mfhi        $zero # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273204u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_273208:
    // 0x273208: 0x0  nop
    ctx->pc = 0x273208u;
    // NOP
label_27320c:
    // 0x27320c: 0x0  nop
    ctx->pc = 0x27320cu;
    // NOP
label_273210:
    // 0x273210: 0x9c9e  .word       0x00009C9E                   # ddiv        $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x273210 raw=0x00009C9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273214:
    // 0x273214: 0x2d00  sll         $a1, $zero, 20
    ctx->pc = 0x273214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_273218:
    // 0x273218: 0x0  nop
    ctx->pc = 0x273218u;
    // NOP
label_27321c:
    // 0x27321c: 0x0  nop
    ctx->pc = 0x27321cu;
    // NOP
label_273220:
    // 0x273220: 0x9ca4  .word       0x00009CA4                   # and         $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273220u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273224:
    // 0x273224: 0x3c00  sll         $a3, $zero, 16
    ctx->pc = 0x273224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_273228:
    // 0x273228: 0x0  nop
    ctx->pc = 0x273228u;
    // NOP
label_27322c:
    // 0x27322c: 0x0  nop
    ctx->pc = 0x27322cu;
    // NOP
label_273230:
    // 0x273230: 0x9cac  .word       0x00009CAC                   # dadd        $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_273234:
    // 0x273234: 0x5440  sll         $t2, $zero, 17
    ctx->pc = 0x273234u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_273238:
    // 0x273238: 0x0  nop
    ctx->pc = 0x273238u;
    // NOP
label_27323c:
    // 0x27323c: 0x0  nop
    ctx->pc = 0x27323cu;
    // NOP
label_273240:
    // 0x273240: 0x9cb7  .word       0x00009CB7                   # INVALID     $zero, $zero, -0x6349 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273240 raw=0x00009CB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273244:
    // 0x273244: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_273248:
    // 0x273248: 0x0  nop
    ctx->pc = 0x273248u;
    // NOP
label_27324c:
    // 0x27324c: 0x0  nop
    ctx->pc = 0x27324cu;
    // NOP
label_273250:
    // 0x273250: 0x9ccb  .word       0x00009CCB                   # movn        $s3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273250u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_273254:
    // 0x273254: 0x62c0  sll         $t4, $zero, 11
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273258:
    // 0x273258: 0x0  nop
    ctx->pc = 0x273258u;
    // NOP
label_27325c:
    // 0x27325c: 0x0  nop
    ctx->pc = 0x27325cu;
    // NOP
label_273260:
    // 0x273260: 0x9cd8  .word       0x00009CD8                   # mult        $s3, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_273264:
    // 0x273264: 0xdbf0  tge         $zero, $zero, 879
    ctx->pc = 0x273264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273268:
    // 0x273268: 0x0  nop
    ctx->pc = 0x273268u;
    // NOP
label_27326c:
    // 0x27326c: 0x0  nop
    ctx->pc = 0x27326cu;
    // NOP
label_273270:
    // 0x273270: 0x9cf4  teq         $zero, $zero, 627
    ctx->pc = 0x273270u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273274:
    // 0x273274: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273274u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273278:
    // 0x273278: 0x0  nop
    ctx->pc = 0x273278u;
    // NOP
label_27327c:
    // 0x27327c: 0x0  nop
    ctx->pc = 0x27327cu;
    // NOP
label_273280:
    // 0x273280: 0x9d04  .word       0x00009D04                   # sllv        $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273280u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273284:
    // 0x273284: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_273288:
    // 0x273288: 0x0  nop
    ctx->pc = 0x273288u;
    // NOP
label_27328c:
    // 0x27328c: 0x0  nop
    ctx->pc = 0x27328cu;
    // NOP
label_273290:
    // 0x273290: 0x9d16  .word       0x00009D16                   # dsrlv       $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273290u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273294:
    // 0x273294: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273294u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273298:
    // 0x273298: 0x0  nop
    ctx->pc = 0x273298u;
    // NOP
label_27329c:
    // 0x27329c: 0x0  nop
    ctx->pc = 0x27329cu;
    // NOP
label_2732a0:
    // 0x2732a0: 0x9d2e  .word       0x00009D2E                   # dsub        $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_2732a4:
    // 0x2732a4: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2732a8:
    // 0x2732a8: 0x0  nop
    ctx->pc = 0x2732a8u;
    // NOP
label_2732ac:
    // 0x2732ac: 0x0  nop
    ctx->pc = 0x2732acu;
    // NOP
label_2732b0:
    // 0x2732b0: 0x9d3c  dsll32      $s3, $zero, 20
    ctx->pc = 0x2732b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 20));
label_2732b4:
    // 0x2732b4: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2732b8:
    // 0x2732b8: 0x0  nop
    ctx->pc = 0x2732b8u;
    // NOP
label_2732bc:
    // 0x2732bc: 0x0  nop
    ctx->pc = 0x2732bcu;
    // NOP
label_2732c0:
    // 0x2732c0: 0x9d47  .word       0x00009D47                   # srav        $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2732c4:
    // 0x2732c4: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x2732c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2732c8:
    // 0x2732c8: 0x0  nop
    ctx->pc = 0x2732c8u;
    // NOP
label_2732cc:
    // 0x2732cc: 0x0  nop
    ctx->pc = 0x2732ccu;
    // NOP
label_2732d0:
    // 0x2732d0: 0x9d5c  .word       0x00009D5C                   # dmult       $zero, $zero # 00009D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2732D0 raw=0x00009D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2732d4:
    // 0x2732d4: 0x10ee0  .word       0x00010EE0                   # add         $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2732d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2732d8:
    // 0x2732d8: 0x0  nop
    ctx->pc = 0x2732d8u;
    // NOP
label_2732dc:
    // 0x2732dc: 0x0  nop
    ctx->pc = 0x2732dcu;
    // NOP
label_2732e0:
    // 0x2732e0: 0x9d7e  dsrl32      $s3, $zero, 21
    ctx->pc = 0x2732e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (32 + 21));
label_2732e4:
    // 0x2732e4: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x2732e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2732e8:
    // 0x2732e8: 0x0  nop
    ctx->pc = 0x2732e8u;
    // NOP
label_2732ec:
    // 0x2732ec: 0x0  nop
    ctx->pc = 0x2732ecu;
    // NOP
label_2732f0:
    // 0x2732f0: 0x9d89  .word       0x00009D89                   # jalr        $s3, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_2732f4:
    if (ctx->pc == 0x2732F4u) {
        ctx->pc = 0x2732F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732F0u;
        // 0x2732f4: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732F8u;
        goto label_2732f8;
    }
    ctx->pc = 0x2732F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 19, 0x2732F8u);
        ctx->pc = 0x2732F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732F0u;
        // 0x2732f4: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2732F0u, 0x2732F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2732F8u;
label_2732f8:
    // 0x2732f8: 0x0  nop
    ctx->pc = 0x2732f8u;
    // NOP
label_2732fc:
    // 0x2732fc: 0x0  nop
    ctx->pc = 0x2732fcu;
    // NOP
label_273300:
    // 0x273300: 0x9d94  .word       0x00009D94                   # dsllv       $s3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273300u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273304:
    // 0x273304: 0x87b0  tge         $zero, $zero, 542
    ctx->pc = 0x273304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273308:
    // 0x273308: 0x0  nop
    ctx->pc = 0x273308u;
    // NOP
label_27330c:
    // 0x27330c: 0x0  nop
    ctx->pc = 0x27330cu;
    // NOP
label_273310:
    // 0x273310: 0x9da5  .word       0x00009DA5                   # move        $s3, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273310u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273314:
    // 0x273314: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x273314u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_273318:
    // 0x273318: 0x0  nop
    ctx->pc = 0x273318u;
    // NOP
label_27331c:
    // 0x27331c: 0x0  nop
    ctx->pc = 0x27331cu;
    // NOP
label_273320:
    // 0x273320: 0x9db2  tlt         $zero, $zero, 630
    ctx->pc = 0x273320u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273324:
    // 0x273324: 0xe390  .word       0x0000E390                   # mfhi        $gp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273324u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273328:
    // 0x273328: 0x0  nop
    ctx->pc = 0x273328u;
    // NOP
label_27332c:
    // 0x27332c: 0x0  nop
    ctx->pc = 0x27332cu;
    // NOP
label_273330:
    // 0x273330: 0x9dcf  .word       0x00009DCF                   # sync.p # 00009800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273330u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_273334:
    // 0x273334: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273334u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_273338:
    // 0x273338: 0x0  nop
    ctx->pc = 0x273338u;
    // NOP
label_27333c:
    // 0x27333c: 0x0  nop
    ctx->pc = 0x27333cu;
    // NOP
label_273340:
    // 0x273340: 0x9ddd  .word       0x00009DDD                   # dmultu      $zero, $zero # 00009DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273340 raw=0x00009DDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273344:
    // 0x273344: 0x8260  .word       0x00008260                   # add         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273348:
    // 0x273348: 0x0  nop
    ctx->pc = 0x273348u;
    // NOP
label_27334c:
    // 0x27334c: 0x0  nop
    ctx->pc = 0x27334cu;
    // NOP
label_273350:
    // 0x273350: 0x9dee  .word       0x00009DEE                   # dsub        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_273354:
    // 0x273354: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x273354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273358:
    // 0x273358: 0x0  nop
    ctx->pc = 0x273358u;
    // NOP
label_27335c:
    // 0x27335c: 0x0  nop
    ctx->pc = 0x27335cu;
    // NOP
label_273360:
    // 0x273360: 0x9dff  dsra32      $s3, $zero, 23
    ctx->pc = 0x273360u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (32 + 23));
label_273364:
    // 0x273364: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x273364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273368:
    // 0x273368: 0x0  nop
    ctx->pc = 0x273368u;
    // NOP
label_27336c:
    // 0x27336c: 0x0  nop
    ctx->pc = 0x27336cu;
    // NOP
label_273370:
    // 0x273370: 0x9e10  .word       0x00009E10                   # mfhi        $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273370u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273374:
    // 0x273374: 0xd780  sll         $k0, $zero, 30
    ctx->pc = 0x273374u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_273378:
    // 0x273378: 0x0  nop
    ctx->pc = 0x273378u;
    // NOP
label_27337c:
    // 0x27337c: 0x0  nop
    ctx->pc = 0x27337cu;
    // NOP
label_273380:
    // 0x273380: 0x9e2b  .word       0x00009E2B                   # sltu        $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_273384:
    // 0x273384: 0x9870  tge         $zero, $zero, 609
    ctx->pc = 0x273384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273388:
    // 0x273388: 0x0  nop
    ctx->pc = 0x273388u;
    // NOP
label_27338c:
    // 0x27338c: 0x0  nop
    ctx->pc = 0x27338cu;
    // NOP
label_273390:
    // 0x273390: 0x9e3f  dsra32      $s3, $zero, 24
    ctx->pc = 0x273390u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (32 + 24));
label_273394:
    // 0x273394: 0x9ad0  .word       0x00009AD0                   # mfhi        $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273394u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273398:
    // 0x273398: 0x0  nop
    ctx->pc = 0x273398u;
    // NOP
label_27339c:
    // 0x27339c: 0x0  nop
    ctx->pc = 0x27339cu;
    // NOP
label_2733a0:
    // 0x2733a0: 0x9e53  .word       0x00009E53                   # mtlo        $zero # 00009E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2733a4:
    // 0x2733a4: 0x117a0  .word       0x000117A0                   # add         $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2733a8:
    // 0x2733a8: 0x0  nop
    ctx->pc = 0x2733a8u;
    // NOP
label_2733ac:
    // 0x2733ac: 0x0  nop
    ctx->pc = 0x2733acu;
    // NOP
label_2733b0:
    // 0x2733b0: 0x9e76  tne         $zero, $zero, 633
    ctx->pc = 0x2733b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2733b4:
    // 0x2733b4: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2733b8:
    // 0x2733b8: 0x0  nop
    ctx->pc = 0x2733b8u;
    // NOP
label_2733bc:
    // 0x2733bc: 0x0  nop
    ctx->pc = 0x2733bcu;
    // NOP
label_2733c0:
    // 0x2733c0: 0x9e86  .word       0x00009E86                   # srlv        $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2733c4:
    // 0x2733c4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x2733c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2733c8u;
    return;
}
