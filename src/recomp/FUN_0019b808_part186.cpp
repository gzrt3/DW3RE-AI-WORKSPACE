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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part186(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5da0u: goto label_1f5da0;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5da8u: goto label_1f5da8;
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db4u: goto label_1f5db4;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dbcu: goto label_1f5dbc;
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5df0u: goto label_1f5df0;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5dfcu: goto label_1f5dfc;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e10u: goto label_1f5e10;
        case 0x1f5e14u: goto label_1f5e14;
        case 0x1f5e18u: goto label_1f5e18;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e20u: goto label_1f5e20;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e2cu: goto label_1f5e2c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e38u: goto label_1f5e38;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e40u: goto label_1f5e40;
        case 0x1f5e44u: goto label_1f5e44;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5e54u: goto label_1f5e54;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e5cu: goto label_1f5e5c;
        case 0x1f5e60u: goto label_1f5e60;
        case 0x1f5e64u: goto label_1f5e64;
        case 0x1f5e68u: goto label_1f5e68;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e74u: goto label_1f5e74;
        case 0x1f5e78u: goto label_1f5e78;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e80u: goto label_1f5e80;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e88u: goto label_1f5e88;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5ef8u: goto label_1f5ef8;
        case 0x1f5efcu: goto label_1f5efc;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f08u: goto label_1f5f08;
        case 0x1f5f0cu: goto label_1f5f0c;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f14u: goto label_1f5f14;
        case 0x1f5f18u: goto label_1f5f18;
        case 0x1f5f1cu: goto label_1f5f1c;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f24u: goto label_1f5f24;
        case 0x1f5f28u: goto label_1f5f28;
        case 0x1f5f2cu: goto label_1f5f2c;
        case 0x1f5f30u: goto label_1f5f30;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f38u: goto label_1f5f38;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f54u: goto label_1f5f54;
        case 0x1f5f58u: goto label_1f5f58;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f64u: goto label_1f5f64;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f6cu: goto label_1f5f6c;
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6080u: goto label_1f6080;
        case 0x1f6084u: goto label_1f6084;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f608cu: goto label_1f608c;
        case 0x1f6090u: goto label_1f6090;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60a0u: goto label_1f60a0;
        case 0x1f60a4u: goto label_1f60a4;
        case 0x1f60a8u: goto label_1f60a8;
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60b4u: goto label_1f60b4;
        case 0x1f60b8u: goto label_1f60b8;
        case 0x1f60bcu: goto label_1f60bc;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c4u: goto label_1f60c4;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60ccu: goto label_1f60cc;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60d4u: goto label_1f60d4;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60dcu: goto label_1f60dc;
        case 0x1f60e0u: goto label_1f60e0;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f60f0u: goto label_1f60f0;
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f60f8u: goto label_1f60f8;
        case 0x1f60fcu: goto label_1f60fc;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f610cu: goto label_1f610c;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6114u: goto label_1f6114;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f611cu: goto label_1f611c;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6128u: goto label_1f6128;
        case 0x1f612cu: goto label_1f612c;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f6134u: goto label_1f6134;
        case 0x1f6138u: goto label_1f6138;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6144u: goto label_1f6144;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f614cu: goto label_1f614c;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6158u: goto label_1f6158;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f6160u: goto label_1f6160;
        case 0x1f6164u: goto label_1f6164;
        case 0x1f6168u: goto label_1f6168;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f6174u: goto label_1f6174;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6180u: goto label_1f6180;
        case 0x1f6184u: goto label_1f6184;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f618cu: goto label_1f618c;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f6194u: goto label_1f6194;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61a0u: goto label_1f61a0;
        case 0x1f61a4u: goto label_1f61a4;
        case 0x1f61a8u: goto label_1f61a8;
        case 0x1f61acu: goto label_1f61ac;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61b8u: goto label_1f61b8;
        case 0x1f61bcu: goto label_1f61bc;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f61c4u: goto label_1f61c4;
        case 0x1f61c8u: goto label_1f61c8;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d0u: goto label_1f61d0;
        case 0x1f61d4u: goto label_1f61d4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61dcu: goto label_1f61dc;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e4u: goto label_1f61e4;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61ecu: goto label_1f61ec;
        case 0x1f61f0u: goto label_1f61f0;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f61f8u: goto label_1f61f8;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f6200u: goto label_1f6200;
        case 0x1f6204u: goto label_1f6204;
        case 0x1f6208u: goto label_1f6208;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6214u: goto label_1f6214;
        case 0x1f6218u: goto label_1f6218;
        case 0x1f621cu: goto label_1f621c;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f6224u: goto label_1f6224;
        case 0x1f6228u: goto label_1f6228;
        case 0x1f622cu: goto label_1f622c;
        case 0x1f6230u: goto label_1f6230;
        case 0x1f6234u: goto label_1f6234;
        case 0x1f6238u: goto label_1f6238;
        case 0x1f623cu: goto label_1f623c;
        case 0x1f6240u: goto label_1f6240;
        case 0x1f6244u: goto label_1f6244;
        case 0x1f6248u: goto label_1f6248;
        case 0x1f624cu: goto label_1f624c;
        case 0x1f6250u: goto label_1f6250;
        case 0x1f6254u: goto label_1f6254;
        case 0x1f6258u: goto label_1f6258;
        case 0x1f625cu: goto label_1f625c;
        case 0x1f6260u: goto label_1f6260;
        case 0x1f6264u: goto label_1f6264;
        case 0x1f6268u: goto label_1f6268;
        case 0x1f626cu: goto label_1f626c;
        case 0x1f6270u: goto label_1f6270;
        case 0x1f6274u: goto label_1f6274;
        case 0x1f6278u: goto label_1f6278;
        case 0x1f627cu: goto label_1f627c;
        case 0x1f6280u: goto label_1f6280;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f6288u: goto label_1f6288;
        case 0x1f628cu: goto label_1f628c;
        case 0x1f6290u: goto label_1f6290;
        case 0x1f6294u: goto label_1f6294;
        case 0x1f6298u: goto label_1f6298;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62a0u: goto label_1f62a0;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f62a8u: goto label_1f62a8;
        case 0x1f62acu: goto label_1f62ac;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f62b4u: goto label_1f62b4;
        case 0x1f62b8u: goto label_1f62b8;
        case 0x1f62bcu: goto label_1f62bc;
        case 0x1f62c0u: goto label_1f62c0;
        case 0x1f62c4u: goto label_1f62c4;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62ccu: goto label_1f62cc;
        case 0x1f62d0u: goto label_1f62d0;
        case 0x1f62d4u: goto label_1f62d4;
        case 0x1f62d8u: goto label_1f62d8;
        case 0x1f62dcu: goto label_1f62dc;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f62e8u: goto label_1f62e8;
        case 0x1f62ecu: goto label_1f62ec;
        case 0x1f62f0u: goto label_1f62f0;
        case 0x1f62f4u: goto label_1f62f4;
        case 0x1f62f8u: goto label_1f62f8;
        case 0x1f62fcu: goto label_1f62fc;
        case 0x1f6300u: goto label_1f6300;
        case 0x1f6304u: goto label_1f6304;
        case 0x1f6308u: goto label_1f6308;
        case 0x1f630cu: goto label_1f630c;
        case 0x1f6310u: goto label_1f6310;
        case 0x1f6314u: goto label_1f6314;
        case 0x1f6318u: goto label_1f6318;
        case 0x1f631cu: goto label_1f631c;
        case 0x1f6320u: goto label_1f6320;
        case 0x1f6324u: goto label_1f6324;
        case 0x1f6328u: goto label_1f6328;
        case 0x1f632cu: goto label_1f632c;
        case 0x1f6330u: goto label_1f6330;
        case 0x1f6334u: goto label_1f6334;
        case 0x1f6338u: goto label_1f6338;
        case 0x1f633cu: goto label_1f633c;
        case 0x1f6340u: goto label_1f6340;
        case 0x1f6344u: goto label_1f6344;
        case 0x1f6348u: goto label_1f6348;
        case 0x1f634cu: goto label_1f634c;
        case 0x1f6350u: goto label_1f6350;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6358u: goto label_1f6358;
        case 0x1f635cu: goto label_1f635c;
        case 0x1f6360u: goto label_1f6360;
        case 0x1f6364u: goto label_1f6364;
        case 0x1f6368u: goto label_1f6368;
        case 0x1f636cu: goto label_1f636c;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6374u: goto label_1f6374;
        case 0x1f6378u: goto label_1f6378;
        case 0x1f637cu: goto label_1f637c;
        case 0x1f6380u: goto label_1f6380;
        case 0x1f6384u: goto label_1f6384;
        case 0x1f6388u: goto label_1f6388;
        case 0x1f638cu: goto label_1f638c;
        case 0x1f6390u: goto label_1f6390;
        case 0x1f6394u: goto label_1f6394;
        case 0x1f6398u: goto label_1f6398;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63a0u: goto label_1f63a0;
        case 0x1f63a4u: goto label_1f63a4;
        case 0x1f63a8u: goto label_1f63a8;
        case 0x1f63acu: goto label_1f63ac;
        case 0x1f63b0u: goto label_1f63b0;
        case 0x1f63b4u: goto label_1f63b4;
        case 0x1f63b8u: goto label_1f63b8;
        case 0x1f63bcu: goto label_1f63bc;
        case 0x1f63c0u: goto label_1f63c0;
        case 0x1f63c4u: goto label_1f63c4;
        case 0x1f63c8u: goto label_1f63c8;
        case 0x1f63ccu: goto label_1f63cc;
        case 0x1f63d0u: goto label_1f63d0;
        case 0x1f63d4u: goto label_1f63d4;
        case 0x1f63d8u: goto label_1f63d8;
        case 0x1f63dcu: goto label_1f63dc;
        case 0x1f63e0u: goto label_1f63e0;
        case 0x1f63e4u: goto label_1f63e4;
        case 0x1f63e8u: goto label_1f63e8;
        case 0x1f63ecu: goto label_1f63ec;
        case 0x1f63f0u: goto label_1f63f0;
        case 0x1f63f4u: goto label_1f63f4;
        case 0x1f63f8u: goto label_1f63f8;
        case 0x1f63fcu: goto label_1f63fc;
        case 0x1f6400u: goto label_1f6400;
        case 0x1f6404u: goto label_1f6404;
        case 0x1f6408u: goto label_1f6408;
        case 0x1f640cu: goto label_1f640c;
        case 0x1f6410u: goto label_1f6410;
        case 0x1f6414u: goto label_1f6414;
        case 0x1f6418u: goto label_1f6418;
        case 0x1f641cu: goto label_1f641c;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f6424u: goto label_1f6424;
        case 0x1f6428u: goto label_1f6428;
        case 0x1f642cu: goto label_1f642c;
        case 0x1f6430u: goto label_1f6430;
        case 0x1f6434u: goto label_1f6434;
        case 0x1f6438u: goto label_1f6438;
        case 0x1f643cu: goto label_1f643c;
        case 0x1f6440u: goto label_1f6440;
        case 0x1f6444u: goto label_1f6444;
        case 0x1f6448u: goto label_1f6448;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f6450u: goto label_1f6450;
        case 0x1f6454u: goto label_1f6454;
        case 0x1f6458u: goto label_1f6458;
        case 0x1f645cu: goto label_1f645c;
        case 0x1f6460u: goto label_1f6460;
        case 0x1f6464u: goto label_1f6464;
        case 0x1f6468u: goto label_1f6468;
        case 0x1f646cu: goto label_1f646c;
        case 0x1f6470u: goto label_1f6470;
        case 0x1f6474u: goto label_1f6474;
        case 0x1f6478u: goto label_1f6478;
        case 0x1f647cu: goto label_1f647c;
        case 0x1f6480u: goto label_1f6480;
        case 0x1f6484u: goto label_1f6484;
        case 0x1f6488u: goto label_1f6488;
        case 0x1f648cu: goto label_1f648c;
        case 0x1f6490u: goto label_1f6490;
        case 0x1f6494u: goto label_1f6494;
        case 0x1f6498u: goto label_1f6498;
        case 0x1f649cu: goto label_1f649c;
        case 0x1f64a0u: goto label_1f64a0;
        case 0x1f64a4u: goto label_1f64a4;
        case 0x1f64a8u: goto label_1f64a8;
        case 0x1f64acu: goto label_1f64ac;
        case 0x1f64b0u: goto label_1f64b0;
        case 0x1f64b4u: goto label_1f64b4;
        case 0x1f64b8u: goto label_1f64b8;
        case 0x1f64bcu: goto label_1f64bc;
        case 0x1f64c0u: goto label_1f64c0;
        case 0x1f64c4u: goto label_1f64c4;
        case 0x1f64c8u: goto label_1f64c8;
        case 0x1f64ccu: goto label_1f64cc;
        case 0x1f64d0u: goto label_1f64d0;
        case 0x1f64d4u: goto label_1f64d4;
        case 0x1f64d8u: goto label_1f64d8;
        case 0x1f64dcu: goto label_1f64dc;
        case 0x1f64e0u: goto label_1f64e0;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f64ecu: goto label_1f64ec;
        case 0x1f64f0u: goto label_1f64f0;
        case 0x1f64f4u: goto label_1f64f4;
        case 0x1f64f8u: goto label_1f64f8;
        case 0x1f64fcu: goto label_1f64fc;
        case 0x1f6500u: goto label_1f6500;
        case 0x1f6504u: goto label_1f6504;
        case 0x1f6508u: goto label_1f6508;
        case 0x1f650cu: goto label_1f650c;
        case 0x1f6510u: goto label_1f6510;
        case 0x1f6514u: goto label_1f6514;
        case 0x1f6518u: goto label_1f6518;
        case 0x1f651cu: goto label_1f651c;
        case 0x1f6520u: goto label_1f6520;
        case 0x1f6524u: goto label_1f6524;
        default: return;
    }

label_1f5d58:
    if (ctx->pc == 0x1F5D58u) {
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D5Cu;
        goto label_1f5d5c;
    }
    ctx->pc = 0x1F5D54u;
    {
        const bool branch_taken_0x1f5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d54) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5D5Cu;
label_1f5d5c:
    // 0x1f5d5c: 0x2604002a  addiu       $a0, $s0, 0x2A
    ctx->pc = 0x1f5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
label_1f5d60:
    // 0x1f5d60: 0x2881004b  slti        $at, $a0, 0x4B
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5d64:
    // 0x1f5d64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5d68:
    if (ctx->pc == 0x1F5D68u) {
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D6Cu;
        goto label_1f5d6c;
    }
    ctx->pc = 0x1F5D64u;
    {
        const bool branch_taken_0x1f5d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d64) {
            ctx->pc = 0x1F5DACu;
            goto label_1f5dac;
        }
    }
    ctx->pc = 0x1F5D6Cu;
label_1f5d6c:
    // 0x1f5d6c: 0x2603fff2  addiu       $v1, $s0, -0xE
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
label_1f5d70:
    // 0x1f5d70: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5d74:
    if (ctx->pc == 0x1F5D74u) {
        ctx->pc = 0x1F5D78u;
        goto label_1f5d78;
    }
    ctx->pc = 0x1F5D70u;
    {
        const bool branch_taken_0x1f5d70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5d70) {
            ctx->pc = 0x1F5D7Cu;
            goto label_1f5d7c;
        }
    }
    ctx->pc = 0x1F5D78u;
label_1f5d78:
    // 0x1f5d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d7c:
    // 0x1f5d7c: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5d80:
    // 0x1f5d80: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_1f5d84:
    // 0x1f5d84: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5d88:
    // 0x1f5d88: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x1f5d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_1f5d8c:
    // 0x1f5d8c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5d90:
    // 0x1f5d90: 0x0  nop
    ctx->pc = 0x1f5d90u;
    // NOP
label_1f5d94:
    // 0x1f5d94: 0x0  nop
    ctx->pc = 0x1f5d94u;
    // NOP
label_1f5d98:
    // 0x1f5d98: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5d98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5d9c:
    // 0x1f5d9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f5da0:
    // 0x1f5da0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1f5da0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f5da4:
    // 0x1f5da4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5da8:
    if (ctx->pc == 0x1F5DA8u) {
        ctx->pc = 0x1F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA4u;
        // 0x1f5da8: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DACu;
        goto label_1f5dac;
    }
    ctx->pc = 0x1F5DA4u;
    {
        const bool branch_taken_0x1f5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA4u;
        // 0x1f5da8: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5da4) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5DACu;
label_1f5dac:
    // 0x1f5dac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5db0:
    // 0x1f5db0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5db4:
    if (ctx->pc == 0x1F5DB4u) {
        ctx->pc = 0x1F5DB8u;
        goto label_1f5db8;
    }
    ctx->pc = 0x1F5DB0u;
    {
        const bool branch_taken_0x1f5db0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5db0) {
            ctx->pc = 0x1F5DBCu;
            goto label_1f5dbc;
        }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5dbc:
    // 0x1f5dbc: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5dc0:
    // 0x1f5dc0: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_1f5dc4:
    // 0x1f5dc4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5dc8:
    // 0x1f5dc8: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x1f5dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_1f5dcc:
    // 0x1f5dcc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5dd0:
    // 0x1f5dd0: 0x0  nop
    ctx->pc = 0x1f5dd0u;
    // NOP
label_1f5dd4:
    // 0x1f5dd4: 0x0  nop
    ctx->pc = 0x1f5dd4u;
    // NOP
label_1f5dd8:
    // 0x1f5dd8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5ddc:
    // 0x1f5ddc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f5de0:
    // 0x1f5de0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5de4:
    // 0x1f5de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5de8:
    // 0x1f5de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5dec:
    // 0x1f5dec: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1f5df0:
    // 0x1f5df0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1f5df4:
    // 0x1f5df4: 0xa0e2071b  sb          $v0, 0x71B($a3)
    ctx->pc = 0x1f5df4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1819), (uint8_t)GPR_U32(ctx, 2));
label_1f5df8:
    // 0x1f5df8: 0x28830077  slti        $v1, $a0, 0x77
    ctx->pc = 0x1f5df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)119) ? 1 : 0);
label_1f5dfc:
    // 0x1f5dfc: 0xa0e20703  sb          $v0, 0x703($a3)
    ctx->pc = 0x1f5dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1795), (uint8_t)GPR_U32(ctx, 2));
label_1f5e00:
    // 0x1f5e00: 0x24c60680  addiu       $a2, $a2, 0x680
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
label_1f5e04:
    // 0x1f5e04: 0xa0e5074b  sb          $a1, 0x74B($a3)
    ctx->pc = 0x1f5e04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1867), (uint8_t)GPR_U32(ctx, 5));
label_1f5e08:
    // 0x1f5e08: 0xa0e50733  sb          $a1, 0x733($a3)
    ctx->pc = 0x1f5e08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
label_1f5e0c:
    // 0x1f5e0c: 0xa0e207eb  sb          $v0, 0x7EB($a3)
    ctx->pc = 0x1f5e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2027), (uint8_t)GPR_U32(ctx, 2));
label_1f5e10:
    // 0x1f5e10: 0xa0e207d3  sb          $v0, 0x7D3($a3)
    ctx->pc = 0x1f5e10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2003), (uint8_t)GPR_U32(ctx, 2));
label_1f5e14:
    // 0x1f5e14: 0xa0e5081b  sb          $a1, 0x81B($a3)
    ctx->pc = 0x1f5e14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2075), (uint8_t)GPR_U32(ctx, 5));
label_1f5e18:
    // 0x1f5e18: 0xa0e50803  sb          $a1, 0x803($a3)
    ctx->pc = 0x1f5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2051), (uint8_t)GPR_U32(ctx, 5));
label_1f5e1c:
    // 0x1f5e1c: 0xa0e208bb  sb          $v0, 0x8BB($a3)
    ctx->pc = 0x1f5e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2235), (uint8_t)GPR_U32(ctx, 2));
label_1f5e20:
    // 0x1f5e20: 0xa0e208a3  sb          $v0, 0x8A3($a3)
    ctx->pc = 0x1f5e20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2211), (uint8_t)GPR_U32(ctx, 2));
label_1f5e24:
    // 0x1f5e24: 0xa0e508eb  sb          $a1, 0x8EB($a3)
    ctx->pc = 0x1f5e24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2283), (uint8_t)GPR_U32(ctx, 5));
label_1f5e28:
    // 0x1f5e28: 0xa0e508d3  sb          $a1, 0x8D3($a3)
    ctx->pc = 0x1f5e28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2259), (uint8_t)GPR_U32(ctx, 5));
label_1f5e2c:
    // 0x1f5e2c: 0xa0e2098b  sb          $v0, 0x98B($a3)
    ctx->pc = 0x1f5e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2443), (uint8_t)GPR_U32(ctx, 2));
label_1f5e30:
    // 0x1f5e30: 0xa0e20973  sb          $v0, 0x973($a3)
    ctx->pc = 0x1f5e30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2419), (uint8_t)GPR_U32(ctx, 2));
label_1f5e34:
    // 0x1f5e34: 0xa0e509bb  sb          $a1, 0x9BB($a3)
    ctx->pc = 0x1f5e34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2491), (uint8_t)GPR_U32(ctx, 5));
label_1f5e38:
    // 0x1f5e38: 0xa0e509a3  sb          $a1, 0x9A3($a3)
    ctx->pc = 0x1f5e38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2467), (uint8_t)GPR_U32(ctx, 5));
label_1f5e3c:
    // 0x1f5e3c: 0xa0e20a5b  sb          $v0, 0xA5B($a3)
    ctx->pc = 0x1f5e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2651), (uint8_t)GPR_U32(ctx, 2));
label_1f5e40:
    // 0x1f5e40: 0xa0e20a43  sb          $v0, 0xA43($a3)
    ctx->pc = 0x1f5e40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2627), (uint8_t)GPR_U32(ctx, 2));
label_1f5e44:
    // 0x1f5e44: 0xa0e50a8b  sb          $a1, 0xA8B($a3)
    ctx->pc = 0x1f5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2699), (uint8_t)GPR_U32(ctx, 5));
label_1f5e48:
    // 0x1f5e48: 0xa0e50a73  sb          $a1, 0xA73($a3)
    ctx->pc = 0x1f5e48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2675), (uint8_t)GPR_U32(ctx, 5));
label_1f5e4c:
    // 0x1f5e4c: 0xa0e20b2b  sb          $v0, 0xB2B($a3)
    ctx->pc = 0x1f5e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2859), (uint8_t)GPR_U32(ctx, 2));
label_1f5e50:
    // 0x1f5e50: 0xa0e20b13  sb          $v0, 0xB13($a3)
    ctx->pc = 0x1f5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2835), (uint8_t)GPR_U32(ctx, 2));
label_1f5e54:
    // 0x1f5e54: 0xa0e50b5b  sb          $a1, 0xB5B($a3)
    ctx->pc = 0x1f5e54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2907), (uint8_t)GPR_U32(ctx, 5));
label_1f5e58:
    // 0x1f5e58: 0xa0e50b43  sb          $a1, 0xB43($a3)
    ctx->pc = 0x1f5e58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2883), (uint8_t)GPR_U32(ctx, 5));
label_1f5e5c:
    // 0x1f5e5c: 0xa0e20bfb  sb          $v0, 0xBFB($a3)
    ctx->pc = 0x1f5e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3067), (uint8_t)GPR_U32(ctx, 2));
label_1f5e60:
    // 0x1f5e60: 0xa0e20be3  sb          $v0, 0xBE3($a3)
    ctx->pc = 0x1f5e60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3043), (uint8_t)GPR_U32(ctx, 2));
label_1f5e64:
    // 0x1f5e64: 0xa0e50c2b  sb          $a1, 0xC2B($a3)
    ctx->pc = 0x1f5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3115), (uint8_t)GPR_U32(ctx, 5));
label_1f5e68:
    // 0x1f5e68: 0xa0e50c13  sb          $a1, 0xC13($a3)
    ctx->pc = 0x1f5e68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3091), (uint8_t)GPR_U32(ctx, 5));
label_1f5e6c:
    // 0x1f5e6c: 0xa0e20ccb  sb          $v0, 0xCCB($a3)
    ctx->pc = 0x1f5e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3275), (uint8_t)GPR_U32(ctx, 2));
label_1f5e70:
    // 0x1f5e70: 0xa0e20cb3  sb          $v0, 0xCB3($a3)
    ctx->pc = 0x1f5e70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3251), (uint8_t)GPR_U32(ctx, 2));
label_1f5e74:
    // 0x1f5e74: 0xa0e50cfb  sb          $a1, 0xCFB($a3)
    ctx->pc = 0x1f5e74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3323), (uint8_t)GPR_U32(ctx, 5));
label_1f5e78:
    // 0x1f5e78: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_1f5e7c:
    if (ctx->pc == 0x1F5E7Cu) {
        ctx->pc = 0x1F5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E78u;
        // 0x1f5e7c: 0xa0e50ce3  sb          $a1, 0xCE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3299), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E80u;
        goto label_1f5e80;
    }
    ctx->pc = 0x1F5E78u;
    {
        const bool branch_taken_0x1f5e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E78u;
        // 0x1f5e7c: 0xa0e50ce3  sb          $a1, 0xCE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3299), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e78) {
            ctx->pc = 0x1F5DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5dec;
        }
    }
    ctx->pc = 0x1F5E80u;
label_1f5e80:
    // 0x1f5e80: 0x2881007f  slti        $at, $a0, 0x7F
    ctx->pc = 0x1f5e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)127) ? 1 : 0);
label_1f5e84:
    // 0x1f5e84: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1f5e88:
    if (ctx->pc == 0x1F5E88u) {
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E84u;
        // 0x1f5e88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E8Cu;
        goto label_1f5e8c;
    }
    ctx->pc = 0x1F5E84u;
    {
        const bool branch_taken_0x1f5e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E84u;
        // 0x1f5e88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e84) {
            ctx->pc = 0x1F5EC0u;
            goto label_1f5ec0;
        }
    }
    ctx->pc = 0x1F5E8Cu;
label_1f5e8c:
    // 0x1f5e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5e90:
    // 0x1f5e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5e94:
    // 0x1f5e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5e98:
    // 0x1f5e98: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f5e9c:
    // 0x1f5e9c: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1f5ea0:
    // 0x1f5ea0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f5ea4:
    // 0x1f5ea4: 0xa0e2071b  sb          $v0, 0x71B($a3)
    ctx->pc = 0x1f5ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1819), (uint8_t)GPR_U32(ctx, 2));
label_1f5ea8:
    // 0x1f5ea8: 0x2883007f  slti        $v1, $a0, 0x7F
    ctx->pc = 0x1f5ea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)127) ? 1 : 0);
label_1f5eac:
    // 0x1f5eac: 0xa0e20703  sb          $v0, 0x703($a3)
    ctx->pc = 0x1f5eacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1795), (uint8_t)GPR_U32(ctx, 2));
label_1f5eb0:
    // 0x1f5eb0: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_1f5eb4:
    // 0x1f5eb4: 0xa0e5074b  sb          $a1, 0x74B($a3)
    ctx->pc = 0x1f5eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1867), (uint8_t)GPR_U32(ctx, 5));
label_1f5eb8:
    // 0x1f5eb8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1f5ebc:
    if (ctx->pc == 0x1F5EBCu) {
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB8u;
        // 0x1f5ebc: 0xa0e50733  sb          $a1, 0x733($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EC0u;
        goto label_1f5ec0;
    }
    ctx->pc = 0x1F5EB8u;
    {
        const bool branch_taken_0x1f5eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB8u;
        // 0x1f5ebc: 0xa0e50733  sb          $a1, 0x733($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb8) {
            ctx->pc = 0x1F5E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5e9c;
        }
    }
    ctx->pc = 0x1F5EC0u;
label_1f5ec0:
    // 0x1f5ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec4:
    // 0x1f5ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec8:
    // 0x1f5ec8: 0x240606dc  addiu       $a2, $zero, 0x6DC
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1756));
label_1f5ecc:
    // 0x1f5ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ed0:
    // 0x1f5ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ed4:
    // 0x1f5ed4: 0xc066c72  jal         func_19B1C8
label_1f5ed8:
    if (ctx->pc == 0x1F5ED8u) {
        ctx->pc = 0x1F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ED4u;
        // 0x1f5ed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EDCu;
        goto label_1f5edc;
    }
    ctx->pc = 0x1F5ED4u;
    SET_GPR_U32(ctx, 31, 0x1F5EDCu);
    ctx->pc = 0x1F5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED4u;
    // 0x1f5ed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F5ED4u, 0x1F5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EDCu;
label_1f5edc:
    // 0x1f5edc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5ee0:
    // 0x1f5ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5ee4:
    // 0x1f5ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5ee8:
    // 0x1f5ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5eec:
    // 0x1f5eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5ef0:
    // 0x1f5ef0: 0x3e00008  jr          $ra
label_1f5ef4:
    if (ctx->pc == 0x1F5EF4u) {
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EF0u;
        // 0x1f5ef4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EF8u;
        goto label_1f5ef8;
    }
    ctx->pc = 0x1F5EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EF0u;
        // 0x1f5ef4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5EF8u;
label_1f5ef8:
    // 0x1f5ef8: 0x0  nop
    ctx->pc = 0x1f5ef8u;
    // NOP
label_1f5efc:
    // 0x1f5efc: 0x0  nop
    ctx->pc = 0x1f5efcu;
    // NOP
label_1f5f00:
    // 0x1f5f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f5f04:
    // 0x1f5f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f5f08:
    // 0x1f5f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5f0c:
    // 0x1f5f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5f10:
    // 0x1f5f10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f5f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f14:
    // 0x1f5f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5f18:
    // 0x1f5f18: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f5f1c:
    // 0x1f5f1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f20:
    // 0x1f5f20: 0xc078050  jal         func_1E0140
label_1f5f24:
    if (ctx->pc == 0x1F5F24u) {
        ctx->pc = 0x1F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F20u;
        // 0x1f5f24: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F28u;
        goto label_1f5f28;
    }
    ctx->pc = 0x1F5F20u;
    SET_GPR_U32(ctx, 31, 0x1F5F28u);
    ctx->pc = 0x1F5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F20u;
    // 0x1f5f24: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F5F28u;
label_1f5f28:
    // 0x1f5f28: 0xc078070  jal         func_1E01C0
label_1f5f2c:
    if (ctx->pc == 0x1F5F2Cu) {
        ctx->pc = 0x1F5F30u;
        goto label_1f5f30;
    }
    ctx->pc = 0x1F5F28u;
    SET_GPR_U32(ctx, 31, 0x1F5F30u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1F5F30u;
label_1f5f30:
    // 0x1f5f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5f34:
    // 0x1f5f34: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1f5f38:
    // 0x1f5f38: 0xaf869024  sw          $a2, -0x6FDC($gp)
    ctx->pc = 0x1f5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 6));
label_1f5f3c:
    // 0x1f5f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f40:
    // 0x1f5f40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5f40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f44:
    // 0x1f5f44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f5f48:
    // 0x1f5f48: 0x27849000  addiu       $a0, $gp, -0x7000
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f5f4c:
    // 0x1f5f4c: 0x27859008  addiu       $a1, $gp, -0x6FF8
    ctx->pc = 0x1f5f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f5f50:
    // 0x1f5f50: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f5f54:
    // 0x1f5f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5f58:
    // 0x1f5f58: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
label_1f5f5c:
    if (ctx->pc == 0x1F5F5Cu) {
        ctx->pc = 0x1F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F58u;
        // 0x1f5f5c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F60u;
        goto label_1f5f60;
    }
    ctx->pc = 0x1F5F58u;
    {
        const bool branch_taken_0x1f5f58 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F58u;
        // 0x1f5f5c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f58) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5F60u;
label_1f5f60:
    // 0x1f5f60: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x1f5f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f5f64:
    // 0x1f5f64: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1f5f68:
    if (ctx->pc == 0x1F5F68u) {
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F6Cu;
        goto label_1f5f6c;
    }
    ctx->pc = 0x1F5F64u;
    {
        const bool branch_taken_0x1f5f64 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f64) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5F6Cu;
label_1f5f6c:
    // 0x1f5f6c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f5f70:
    // 0x1f5f70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f5f74:
    // 0x1f5f74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f5f78:
    // 0x1f5f78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f5f7c:
    // 0x1f5f7c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f5f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f5f80:
    // 0x1f5f80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f5f84:
    if (ctx->pc == 0x1F5F84u) {
        ctx->pc = 0x1F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F80u;
        // 0x1f5f84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F88u;
        goto label_1f5f88;
    }
    ctx->pc = 0x1F5F80u;
    {
        const bool branch_taken_0x1f5f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F80u;
        // 0x1f5f84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f80) {
            ctx->pc = 0x1F5F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5f50;
        }
    }
    ctx->pc = 0x1F5F88u;
label_1f5f88:
    // 0x1f5f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5f8c:
    // 0x1f5f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f90:
    // 0x1f5f90: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f5f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f5f94:
    // 0x1f5f94: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f5f98:
    // 0x1f5f98: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f5f9c:
    // 0x1f5f9c: 0xc05b468  jal         func_16D1A0
label_1f5fa0:
    if (ctx->pc == 0x1F5FA0u) {
        ctx->pc = 0x1F5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F9Cu;
        // 0x1f5fa0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FA4u;
        goto label_1f5fa4;
    }
    ctx->pc = 0x1F5F9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5FA4u);
    ctx->pc = 0x1F5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F9Cu;
    // 0x1f5fa0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D1A0u, 0x1F5F9Cu, 0x1F5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FA4u;
label_1f5fa4:
    // 0x1f5fa4: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f5fa8:
    // 0x1f5fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5fac:
    if (ctx->pc == 0x1F5FACu) {
        ctx->pc = 0x1F5FB0u;
        goto label_1f5fb0;
    }
    ctx->pc = 0x1F5FA8u;
    {
        const bool branch_taken_0x1f5fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fa8) {
            ctx->pc = 0x1F5FB8u;
            goto label_1f5fb8;
        }
    }
    ctx->pc = 0x1F5FB0u;
label_1f5fb0:
    // 0x1f5fb0: 0x10000071  b           . + 4 + (0x71 << 2)
label_1f5fb4:
    if (ctx->pc == 0x1F5FB4u) {
        ctx->pc = 0x1F5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FB0u;
        // 0x1f5fb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FB8u;
        goto label_1f5fb8;
    }
    ctx->pc = 0x1F5FB0u;
    {
        const bool branch_taken_0x1f5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FB0u;
        // 0x1f5fb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fb0) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FB8u;
label_1f5fb8:
    // 0x1f5fb8: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f5fbc:
    // 0x1f5fbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5fc0:
    if (ctx->pc == 0x1F5FC0u) {
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FC4u;
        goto label_1f5fc4;
    }
    ctx->pc = 0x1F5FBCu;
    {
        const bool branch_taken_0x1f5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fbc) {
            ctx->pc = 0x1F5FCCu;
            goto label_1f5fcc;
        }
    }
    ctx->pc = 0x1F5FC4u;
label_1f5fc4:
    // 0x1f5fc4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1f5fc8:
    if (ctx->pc == 0x1F5FC8u) {
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FC4u;
        // 0x1f5fc8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FCCu;
        goto label_1f5fcc;
    }
    ctx->pc = 0x1F5FC4u;
    {
        const bool branch_taken_0x1f5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FC4u;
        // 0x1f5fc8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fc4) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FCCu;
label_1f5fcc:
    // 0x1f5fcc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f5fd0:
    // 0x1f5fd0: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f5fd4:
    // 0x1f5fd4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f5fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f5fd8:
    // 0x1f5fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f5fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f5fdc:
    // 0x1f5fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f5fe0:
    if (ctx->pc == 0x1F5FE0u) {
        ctx->pc = 0x1F5FE4u;
        goto label_1f5fe4;
    }
    ctx->pc = 0x1F5FDCu;
    {
        const bool branch_taken_0x1f5fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fdc) {
            ctx->pc = 0x1F5FF8u;
            goto label_1f5ff8;
        }
    }
    ctx->pc = 0x1F5FE4u;
label_1f5fe4:
    // 0x1f5fe4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5fe8:
    // 0x1f5fe8: 0xc05b420  jal         func_16D080
label_1f5fec:
    if (ctx->pc == 0x1F5FECu) {
        ctx->pc = 0x1F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE8u;
        // 0x1f5fec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FF0u;
        goto label_1f5ff0;
    }
    ctx->pc = 0x1F5FE8u;
    SET_GPR_U32(ctx, 31, 0x1F5FF0u);
    ctx->pc = 0x1F5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE8u;
    // 0x1f5fec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F5FE8u, 0x1F5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FF0u;
label_1f5ff0:
    // 0x1f5ff0: 0x10000061  b           . + 4 + (0x61 << 2)
label_1f5ff4:
    if (ctx->pc == 0x1F5FF4u) {
        ctx->pc = 0x1F5FF8u;
        goto label_1f5ff8;
    }
    ctx->pc = 0x1F5FF0u;
    {
        const bool branch_taken_0x1f5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ff0) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FF8u;
label_1f5ff8:
    // 0x1f5ff8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f5ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f5ffc:
    // 0x1f5ffc: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1f6000:
    // 0x1f6000: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1f6004:
    // 0x1f6004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f6008:
    // 0x1f6008: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1f600c:
    if (ctx->pc == 0x1F600Cu) {
        ctx->pc = 0x1F6010u;
        goto label_1f6010;
    }
    ctx->pc = 0x1F6008u;
    {
        const bool branch_taken_0x1f6008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6008) {
            ctx->pc = 0x1F613Cu;
            goto label_1f613c;
        }
    }
    ctx->pc = 0x1F6010u;
label_1f6010:
    // 0x1f6010: 0x8f829024  lw          $v0, -0x6FDC($gp)
    ctx->pc = 0x1f6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6014:
    // 0x1f6014: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6018:
    // 0x1f6018: 0x1447002e  bne         $v0, $a3, . + 4 + (0x2E << 2)
label_1f601c:
    if (ctx->pc == 0x1F601Cu) {
        ctx->pc = 0x1F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6018u;
        // 0x1f601c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6020u;
        goto label_1f6020;
    }
    ctx->pc = 0x1F6018u;
    {
        const bool branch_taken_0x1f6018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6018u;
        // 0x1f601c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6018) {
            ctx->pc = 0x1F60D4u;
            goto label_1f60d4;
        }
    }
    ctx->pc = 0x1F6020u;
label_1f6020:
    // 0x1f6020: 0xc05b2e4  jal         func_16CB90
label_1f6024:
    if (ctx->pc == 0x1F6024u) {
        ctx->pc = 0x1F6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6020u;
        // 0x1f6024: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6028u;
        goto label_1f6028;
    }
    ctx->pc = 0x1F6020u;
    SET_GPR_U32(ctx, 31, 0x1F6028u);
    ctx->pc = 0x1F6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6020u;
    // 0x1f6024: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1F6020u, 0x1F6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6028u;
label_1f6028:
    // 0x1f6028: 0x8f829010  lw          $v0, -0x6FF0($gp)
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f602c:
    // 0x1f602c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f6030:
    // 0x1f6030: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1f6030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f6034:
    // 0x1f6034: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1f6038:
    if (ctx->pc == 0x1F6038u) {
        ctx->pc = 0x1F603Cu;
        goto label_1f603c;
    }
    ctx->pc = 0x1F6034u;
    {
        const bool branch_taken_0x1f6034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6034) {
            ctx->pc = 0x1F60BCu;
            goto label_1f60bc;
        }
    }
    ctx->pc = 0x1F603Cu;
label_1f603c:
    // 0x1f603c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f603cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6040:
    // 0x1f6040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6044:
    // 0x1f6044: 0xaf869024  sw          $a2, -0x6FDC($gp)
    ctx->pc = 0x1f6044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 6));
label_1f6048:
    // 0x1f6048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f604c:
    // 0x1f604c: 0xaf909020  sw          $s0, -0x6FE0($gp)
    ctx->pc = 0x1f604cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 16));
label_1f6050:
    // 0x1f6050: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6054:
    // 0x1f6054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6058:
    // 0x1f6058: 0x27849000  addiu       $a0, $gp, -0x7000
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f605c:
    // 0x1f605c: 0x27859008  addiu       $a1, $gp, -0x6FF8
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f6060:
    // 0x1f6060: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f6064:
    // 0x1f6064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6068:
    // 0x1f6068: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1f606c:
    if (ctx->pc == 0x1F606Cu) {
        ctx->pc = 0x1F606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6068u;
        // 0x1f606c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6070u;
        goto label_1f6070;
    }
    ctx->pc = 0x1F6068u;
    {
        const bool branch_taken_0x1f6068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6068u;
        // 0x1f606c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6068) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F6070u;
label_1f6070:
    // 0x1f6070: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f6074:
    // 0x1f6074: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1f6078:
    if (ctx->pc == 0x1F6078u) {
        ctx->pc = 0x1F6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6074u;
        // 0x1f6078: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F607Cu;
        goto label_1f607c;
    }
    ctx->pc = 0x1F6074u;
    {
        const bool branch_taken_0x1f6074 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1F6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6074u;
        // 0x1f6078: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6074) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F607Cu;
label_1f607c:
    // 0x1f607c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f6080:
    // 0x1f6080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f6084:
    // 0x1f6084: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6088:
    // 0x1f6088: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f608c:
    // 0x1f608c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f608cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6090:
    // 0x1f6090: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f6094:
    if (ctx->pc == 0x1F6094u) {
        ctx->pc = 0x1F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6090u;
        // 0x1f6094: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6098u;
        goto label_1f6098;
    }
    ctx->pc = 0x1F6090u;
    {
        const bool branch_taken_0x1f6090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6090u;
        // 0x1f6094: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6090) {
            ctx->pc = 0x1F6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F6098u;
label_1f6098:
    // 0x1f6098: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f609c:
    // 0x1f609c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f609cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f60a0:
    // 0x1f60a0: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f60a4:
    // 0x1f60a4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f60a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f60a8:
    // 0x1f60a8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f60ac:
    // 0x1f60ac: 0xc05b468  jal         func_16D1A0
label_1f60b0:
    if (ctx->pc == 0x1F60B0u) {
        ctx->pc = 0x1F60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60ACu;
        // 0x1f60b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F60B4u;
        goto label_1f60b4;
    }
    ctx->pc = 0x1F60ACu;
    SET_GPR_U32(ctx, 31, 0x1F60B4u);
    ctx->pc = 0x1F60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60ACu;
    // 0x1f60b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D1A0u, 0x1F60ACu, 0x1F60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60B4u;
label_1f60b4:
    // 0x1f60b4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1f60b8:
    if (ctx->pc == 0x1F60B8u) {
        ctx->pc = 0x1F60BCu;
        goto label_1f60bc;
    }
    ctx->pc = 0x1F60B4u;
    {
        const bool branch_taken_0x1f60b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60b4) {
            ctx->pc = 0x1F613Cu;
            goto label_1f613c;
        }
    }
    ctx->pc = 0x1F60BCu;
label_1f60bc:
    // 0x1f60bc: 0x0  nop
    ctx->pc = 0x1f60bcu;
    // NOP
label_1f60c0:
    // 0x1f60c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f60c4:
    // 0x1f60c4: 0xc05b420  jal         func_16D080
label_1f60c8:
    if (ctx->pc == 0x1F60C8u) {
        ctx->pc = 0x1F60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60C4u;
        // 0x1f60c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F60CCu;
        goto label_1f60cc;
    }
    ctx->pc = 0x1F60C4u;
    SET_GPR_U32(ctx, 31, 0x1F60CCu);
    ctx->pc = 0x1F60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60C4u;
    // 0x1f60c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F60C4u, 0x1F60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60CCu;
label_1f60cc:
    // 0x1f60cc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f60d0:
    if (ctx->pc == 0x1F60D0u) {
        ctx->pc = 0x1F60D4u;
        goto label_1f60d4;
    }
    ctx->pc = 0x1F60CCu;
    {
        const bool branch_taken_0x1f60cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60cc) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F60D4u;
label_1f60d4:
    // 0x1f60d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f60d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f60d8:
    // 0x1f60d8: 0x27838ff8  addiu       $v1, $gp, -0x7008
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
label_1f60dc:
    // 0x1f60dc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f60e0:
    // 0x1f60e0: 0x27869000  addiu       $a2, $gp, -0x7000
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f60e4:
    // 0x1f60e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f60e8:
    // 0x1f60e8: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f60ec:
    // 0x1f60ec: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1f60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f60f0:
    // 0x1f60f0: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_1f60f4:
    if (ctx->pc == 0x1F60F4u) {
        ctx->pc = 0x1F60F8u;
        goto label_1f60f8;
    }
    ctx->pc = 0x1F60F0u;
    {
        const bool branch_taken_0x1f60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f60f0) {
            ctx->pc = 0x1F6104u;
            goto label_1f6104;
        }
    }
    ctx->pc = 0x1F60F8u;
label_1f60f8:
    // 0x1f60f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f60fc:
    // 0x1f60fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f6100:
    if (ctx->pc == 0x1F6100u) {
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6104u;
        goto label_1f6104;
    }
    ctx->pc = 0x1F60FCu;
    {
        const bool branch_taken_0x1f60fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60fc) {
            ctx->pc = 0x1F6118u;
            goto label_1f6118;
        }
    }
    ctx->pc = 0x1F6104u;
label_1f6104:
    // 0x1f6104: 0x0  nop
    ctx->pc = 0x1f6104u;
    // NOP
label_1f6108:
    // 0x1f6108: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
label_1f610c:
    if (ctx->pc == 0x1F610Cu) {
        ctx->pc = 0x1F6110u;
        goto label_1f6110;
    }
    ctx->pc = 0x1F6108u;
    {
        const bool branch_taken_0x1f6108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f6108) {
            ctx->pc = 0x1F6118u;
            goto label_1f6118;
        }
    }
    ctx->pc = 0x1F6110u;
label_1f6110:
    // 0x1f6110: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1f6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f6114:
    // 0x1f6114: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f6114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f6118:
    // 0x1f6118: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f611c:
    // 0x1f611c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f611cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6120:
    // 0x1f6120: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1f6120u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_1f6124:
    // 0x1f6124: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1f6128:
    if (ctx->pc == 0x1F6128u) {
        ctx->pc = 0x1F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6124u;
        // 0x1f6128: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F612Cu;
        goto label_1f612c;
    }
    ctx->pc = 0x1F6124u;
    {
        const bool branch_taken_0x1f6124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6124u;
        // 0x1f6128: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6124) {
            ctx->pc = 0x1F60E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f60e8;
        }
    }
    ctx->pc = 0x1F612Cu;
label_1f612c:
    // 0x1f612c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6130:
    // 0x1f6130: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1f6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1f6134:
    // 0x1f6134: 0xaf839024  sw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 3));
label_1f6138:
    // 0x1f6138: 0xaf828ff0  sw          $v0, -0x7010($gp)
    ctx->pc = 0x1f6138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 2));
label_1f613c:
    // 0x1f613c: 0x0  nop
    ctx->pc = 0x1f613cu;
    // NOP
label_1f6140:
    // 0x1f6140: 0x8f829010  lw          $v0, -0x6FF0($gp)
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f6144:
    // 0x1f6144: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f6148:
    // 0x1f6148: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1f614c:
    if (ctx->pc == 0x1F614Cu) {
        ctx->pc = 0x1F6150u;
        goto label_1f6150;
    }
    ctx->pc = 0x1F6148u;
    {
        const bool branch_taken_0x1f6148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6148) {
            ctx->pc = 0x1F6168u;
            goto label_1f6168;
        }
    }
    ctx->pc = 0x1F6150u;
label_1f6150:
    // 0x1f6150: 0x8f839024  lw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6154:
    // 0x1f6154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6158:
    // 0x1f6158: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1f615c:
    if (ctx->pc == 0x1F615Cu) {
        ctx->pc = 0x1F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6158u;
        // 0x1f615c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6160u;
        goto label_1f6160;
    }
    ctx->pc = 0x1F6158u;
    {
        const bool branch_taken_0x1f6158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6158u;
        // 0x1f615c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6158) {
            ctx->pc = 0x1F6168u;
            goto label_1f6168;
        }
    }
    ctx->pc = 0x1F6160u;
label_1f6160:
    // 0x1f6160: 0xc078050  jal         func_1E0140
label_1f6164:
    if (ctx->pc == 0x1F6164u) {
        ctx->pc = 0x1F6168u;
        goto label_1f6168;
    }
    ctx->pc = 0x1F6160u;
    SET_GPR_U32(ctx, 31, 0x1F6168u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F6168u;
label_1f6168:
    // 0x1f6168: 0xc07b48c  jal         func_1ED230
label_1f616c:
    if (ctx->pc == 0x1F616Cu) {
        ctx->pc = 0x1F6170u;
        goto label_1f6170;
    }
    ctx->pc = 0x1F6168u;
    SET_GPR_U32(ctx, 31, 0x1F6170u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F6170u;
label_1f6170:
    // 0x1f6170: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
label_1f6174:
    if (ctx->pc == 0x1F6174u) {
        ctx->pc = 0x1F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6170u;
        // 0x1f6174: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6178u;
        goto label_1f6178;
    }
    ctx->pc = 0x1F6170u;
    {
        const bool branch_taken_0x1f6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6170u;
        // 0x1f6174: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6170) {
            ctx->pc = 0x1F5FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5fa8;
        }
    }
    ctx->pc = 0x1F6178u;
label_1f6178:
    // 0x1f6178: 0xc05b2e4  jal         func_16CB90
label_1f617c:
    if (ctx->pc == 0x1F617Cu) {
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6180u;
        goto label_1f6180;
    }
    ctx->pc = 0x1F6178u;
    SET_GPR_U32(ctx, 31, 0x1F6180u);
    ctx->pc = 0x1F617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6178u;
    // 0x1f617c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1F6178u, 0x1F6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6180u;
label_1f6180:
    // 0x1f6180: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f6184:
    // 0x1f6184: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_1f6188:
    if (ctx->pc == 0x1F6188u) {
        ctx->pc = 0x1F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6184u;
        // 0x1f6188: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F618Cu;
        goto label_1f618c;
    }
    ctx->pc = 0x1F6184u;
    {
        const bool branch_taken_0x1f6184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6184u;
        // 0x1f6188: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6184) {
            ctx->pc = 0x1F61B8u;
            goto label_1f61b8;
        }
    }
    ctx->pc = 0x1F618Cu;
label_1f618c:
    // 0x1f618c: 0xc085bd0  jal         func_216F40
label_1f6190:
    if (ctx->pc == 0x1F6190u) {
        ctx->pc = 0x1F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F618Cu;
        // 0x1f6190: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6194u;
        goto label_1f6194;
    }
    ctx->pc = 0x1F618Cu;
    SET_GPR_U32(ctx, 31, 0x1F6194u);
    ctx->pc = 0x1F6190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F618Cu;
    // 0x1f6190: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F6194u;
label_1f6194:
    // 0x1f6194: 0xaf809024  sw          $zero, -0x6FDC($gp)
    ctx->pc = 0x1f6194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 0));
label_1f6198:
    // 0x1f6198: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f6198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1f619c:
    // 0x1f619c: 0xaf809000  sw          $zero, -0x7000($gp)
    ctx->pc = 0x1f619cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938624), GPR_U32(ctx, 0));
label_1f61a0:
    // 0x1f61a0: 0xaf808ff8  sw          $zero, -0x7008($gp)
    ctx->pc = 0x1f61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938616), GPR_U32(ctx, 0));
label_1f61a4:
    // 0x1f61a4: 0xaf809004  sw          $zero, -0x6FFC($gp)
    ctx->pc = 0x1f61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
label_1f61a8:
    // 0x1f61a8: 0xaf808ffc  sw          $zero, -0x7004($gp)
    ctx->pc = 0x1f61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938620), GPR_U32(ctx, 0));
label_1f61ac:
    // 0x1f61ac: 0xc078078  jal         func_1E01E0
label_1f61b0:
    if (ctx->pc == 0x1F61B0u) {
        ctx->pc = 0x1F61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61ACu;
        // 0x1f61b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F61B4u;
        goto label_1f61b4;
    }
    ctx->pc = 0x1F61ACu;
    SET_GPR_U32(ctx, 31, 0x1F61B4u);
    ctx->pc = 0x1F61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61ACu;
    // 0x1f61b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F61B4u;
label_1f61b4:
    // 0x1f61b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f61b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f61b8:
    // 0x1f61b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f61b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f61bc:
    // 0x1f61bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f61bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f61c0:
    // 0x1f61c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f61c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f61c4:
    // 0x1f61c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f61c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f61c8:
    // 0x1f61c8: 0x3e00008  jr          $ra
label_1f61cc:
    if (ctx->pc == 0x1F61CCu) {
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F61D0u;
        goto label_1f61d0;
    }
    ctx->pc = 0x1F61C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61D0u;
label_1f61d0:
    // 0x1f61d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f61d4:
    // 0x1f61d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f61d8:
    // 0x1f61d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f61dc:
    // 0x1f61dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f61e0:
    // 0x1f61e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f61e4:
    // 0x1f61e4: 0x8f849038  lw          $a0, -0x6FC8($gp)
    ctx->pc = 0x1f61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
label_1f61e8:
    // 0x1f61e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f61ec:
    if (ctx->pc == 0x1F61ECu) {
        ctx->pc = 0x1F61F0u;
        goto label_1f61f0;
    }
    ctx->pc = 0x1F61E8u;
    {
        const bool branch_taken_0x1f61e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f61e8) {
            ctx->pc = 0x1F61FCu;
            goto label_1f61fc;
        }
    }
    ctx->pc = 0x1F61F0u;
label_1f61f0:
    // 0x1f61f0: 0xc070038  jal         func_1C00E0
label_1f61f4:
    if (ctx->pc == 0x1F61F4u) {
        ctx->pc = 0x1F61F8u;
        goto label_1f61f8;
    }
    ctx->pc = 0x1F61F0u;
    SET_GPR_U32(ctx, 31, 0x1F61F8u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F61F8u;
label_1f61f8:
    // 0x1f61f8: 0xaf809038  sw          $zero, -0x6FC8($gp)
    ctx->pc = 0x1f61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938680), GPR_U32(ctx, 0));
label_1f61fc:
    // 0x1f61fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6200:
    // 0x1f6200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6204:
    // 0x1f6204: 0x27839030  addiu       $v1, $gp, -0x6FD0
    ctx->pc = 0x1f6204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f6208:
    // 0x1f6208: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f620c:
    // 0x1f620c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6210:
    // 0x1f6210: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f6214:
    if (ctx->pc == 0x1F6214u) {
        ctx->pc = 0x1F6218u;
        goto label_1f6218;
    }
    ctx->pc = 0x1F6210u;
    {
        const bool branch_taken_0x1f6210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6210) {
            ctx->pc = 0x1F6224u;
            goto label_1f6224;
        }
    }
    ctx->pc = 0x1F6218u;
label_1f6218:
    // 0x1f6218: 0xc070038  jal         func_1C00E0
label_1f621c:
    if (ctx->pc == 0x1F621Cu) {
        ctx->pc = 0x1F6220u;
        goto label_1f6220;
    }
    ctx->pc = 0x1F6218u;
    SET_GPR_U32(ctx, 31, 0x1F6220u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F6220u;
label_1f6220:
    // 0x1f6220: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f6220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1f6224:
    // 0x1f6224: 0x0  nop
    ctx->pc = 0x1f6224u;
    // NOP
label_1f6228:
    // 0x1f6228: 0x27839028  addiu       $v1, $gp, -0x6FD8
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f622c:
    // 0x1f622c: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f6230:
    // 0x1f6230: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6234:
    // 0x1f6234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f6238:
    if (ctx->pc == 0x1F6238u) {
        ctx->pc = 0x1F623Cu;
        goto label_1f623c;
    }
    ctx->pc = 0x1F6234u;
    {
        const bool branch_taken_0x1f6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6234) {
            ctx->pc = 0x1F6248u;
            goto label_1f6248;
        }
    }
    ctx->pc = 0x1F623Cu;
label_1f623c:
    // 0x1f623c: 0xc070038  jal         func_1C00E0
label_1f6240:
    if (ctx->pc == 0x1F6240u) {
        ctx->pc = 0x1F6244u;
        goto label_1f6244;
    }
    ctx->pc = 0x1F623Cu;
    SET_GPR_U32(ctx, 31, 0x1F6244u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F6244u;
label_1f6244:
    // 0x1f6244: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f6244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1f6248:
    // 0x1f6248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f624c:
    // 0x1f624c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f624cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6250:
    // 0x1f6250: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1f6254:
    if (ctx->pc == 0x1F6254u) {
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6258u;
        goto label_1f6258;
    }
    ctx->pc = 0x1F6250u;
    {
        const bool branch_taken_0x1f6250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6250) {
            ctx->pc = 0x1F6204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6204;
        }
    }
    ctx->pc = 0x1F6258u;
label_1f6258:
    // 0x1f6258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f625c:
    // 0x1f625c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f625cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6260:
    // 0x1f6260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6264:
    // 0x1f6264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6268:
    // 0x1f6268: 0x3e00008  jr          $ra
label_1f626c:
    if (ctx->pc == 0x1F626Cu) {
        ctx->pc = 0x1F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6268u;
        // 0x1f626c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6270u;
        goto label_1f6270;
    }
    ctx->pc = 0x1F6268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6268u;
        // 0x1f626c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6270u;
label_1f6270:
    // 0x1f6270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f6274:
    // 0x1f6274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f6274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f6278:
    // 0x1f6278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f627c:
    // 0x1f627c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6280:
    // 0x1f6280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f6284:
    // 0x1f6284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6288:
    // 0x1f6288: 0xc07d93c  jal         func_1F64F0
label_1f628c:
    if (ctx->pc == 0x1F628Cu) {
        ctx->pc = 0x1F628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6288u;
        // 0x1f628c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6290u;
        goto label_1f6290;
    }
    ctx->pc = 0x1F6288u;
    SET_GPR_U32(ctx, 31, 0x1F6290u);
    ctx->pc = 0x1F628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6288u;
    // 0x1f628c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64F0u;
    goto label_1f64f0;
    ctx->pc = 0x1F6290u;
label_1f6290:
    // 0x1f6290: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
label_1f6294:
    // 0x1f6294: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1f6298:
    if (ctx->pc == 0x1F6298u) {
        ctx->pc = 0x1F6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6294u;
        // 0x1f6298: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F629Cu;
        goto label_1f629c;
    }
    ctx->pc = 0x1F6294u;
    {
        const bool branch_taken_0x1f6294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6294u;
        // 0x1f6298: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6294) {
            ctx->pc = 0x1F62D4u;
            goto label_1f62d4;
        }
    }
    ctx->pc = 0x1F629Cu;
label_1f629c:
    // 0x1f629c: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1f629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f62a0:
    // 0x1f62a0: 0x241007f1  addiu       $s0, $zero, 0x7F1
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2033));
label_1f62a4:
    // 0x1f62a4: 0x240205c3  addiu       $v0, $zero, 0x5C3
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1475));
label_1f62a8:
    // 0x1f62a8: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1f62a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1f62ac:
    // 0x1f62ac: 0xc041738  jal         func_105CE0
label_1f62b0:
    if (ctx->pc == 0x1F62B0u) {
        ctx->pc = 0x1F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62ACu;
        // 0x1f62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62B4u;
        goto label_1f62b4;
    }
    ctx->pc = 0x1F62ACu;
    SET_GPR_U32(ctx, 31, 0x1F62B4u);
    ctx->pc = 0x1F62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62ACu;
    // 0x1f62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1F62ACu, 0x1F62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62B4u;
label_1f62b4:
    // 0x1f62b4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1f62b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1f62b8:
    // 0x1f62b8: 0xc070080  jal         func_1C0200
label_1f62bc:
    if (ctx->pc == 0x1F62BCu) {
        ctx->pc = 0x1F62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62B8u;
        // 0x1f62bc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62C0u;
        goto label_1f62c0;
    }
    ctx->pc = 0x1F62B8u;
    SET_GPR_U32(ctx, 31, 0x1F62C0u);
    ctx->pc = 0x1F62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62B8u;
    // 0x1f62bc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F62C0u;
label_1f62c0:
    // 0x1f62c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f62c4:
    // 0x1f62c4: 0xc0416e4  jal         func_105B90
label_1f62c8:
    if (ctx->pc == 0x1F62C8u) {
        ctx->pc = 0x1F62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62C4u;
        // 0x1f62c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62CCu;
        goto label_1f62cc;
    }
    ctx->pc = 0x1F62C4u;
    SET_GPR_U32(ctx, 31, 0x1F62CCu);
    ctx->pc = 0x1F62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62C4u;
    // 0x1f62c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1F62C4u, 0x1F62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62CCu;
label_1f62cc:
    // 0x1f62cc: 0xaf829038  sw          $v0, -0x6FC8($gp)
    ctx->pc = 0x1f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938680), GPR_U32(ctx, 2));
label_1f62d0:
    // 0x1f62d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f62d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62d4:
    // 0x1f62d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f62d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62d8:
    // 0x1f62d8: 0x27839030  addiu       $v1, $gp, -0x6FD0
    ctx->pc = 0x1f62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f62dc:
    // 0x1f62dc: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f62dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f62e0:
    // 0x1f62e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f62e4:
    // 0x1f62e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1f62e8:
    if (ctx->pc == 0x1F62E8u) {
        ctx->pc = 0x1F62ECu;
        goto label_1f62ec;
    }
    ctx->pc = 0x1F62E4u;
    {
        const bool branch_taken_0x1f62e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f62e4) {
            ctx->pc = 0x1F6300u;
            goto label_1f6300;
        }
    }
    ctx->pc = 0x1F62ECu;
label_1f62ec:
    // 0x1f62ec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1f62f0:
    // 0x1f62f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f62f4:
    // 0x1f62f4: 0xc070080  jal         func_1C0200
label_1f62f8:
    if (ctx->pc == 0x1F62F8u) {
        ctx->pc = 0x1F62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62F4u;
        // 0x1f62f8: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62FCu;
        goto label_1f62fc;
    }
    ctx->pc = 0x1F62F4u;
    SET_GPR_U32(ctx, 31, 0x1F62FCu);
    ctx->pc = 0x1F62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62F4u;
    // 0x1f62f8: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F62FCu;
label_1f62fc:
    // 0x1f62fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f6300:
    // 0x1f6300: 0x27839028  addiu       $v1, $gp, -0x6FD8
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f6304:
    // 0x1f6304: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f6308:
    // 0x1f6308: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f630c:
    // 0x1f630c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f6310:
    if (ctx->pc == 0x1F6310u) {
        ctx->pc = 0x1F6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F630Cu;
        // 0x1f6310: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6314u;
        goto label_1f6314;
    }
    ctx->pc = 0x1F630Cu;
    {
        const bool branch_taken_0x1f630c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F630Cu;
        // 0x1f6310: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f630c) {
            ctx->pc = 0x1F6320u;
            goto label_1f6320;
        }
    }
    ctx->pc = 0x1F6314u;
label_1f6314:
    // 0x1f6314: 0xc070080  jal         func_1C0200
label_1f6318:
    if (ctx->pc == 0x1F6318u) {
        ctx->pc = 0x1F6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6314u;
        // 0x1f6318: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F631Cu;
        goto label_1f631c;
    }
    ctx->pc = 0x1F6314u;
    SET_GPR_U32(ctx, 31, 0x1F631Cu);
    ctx->pc = 0x1F6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6314u;
    // 0x1f6318: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F631Cu;
label_1f631c:
    // 0x1f631c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f631cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f6320:
    // 0x1f6320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6324:
    // 0x1f6324: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f6324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6328:
    // 0x1f6328: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_1f632c:
    if (ctx->pc == 0x1F632Cu) {
        ctx->pc = 0x1F632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6328u;
        // 0x1f632c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6330u;
        goto label_1f6330;
    }
    ctx->pc = 0x1F6328u;
    {
        const bool branch_taken_0x1f6328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6328u;
        // 0x1f632c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6328) {
            ctx->pc = 0x1F62D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f62d8;
        }
    }
    ctx->pc = 0x1F6330u;
label_1f6330:
    // 0x1f6330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f6330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6334:
    // 0x1f6334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6338:
    // 0x1f6338: 0x27849018  addiu       $a0, $gp, -0x6FE8
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_1f633c:
    // 0x1f633c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1f633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6340:
    // 0x1f6340: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1f6344:
    // 0x1f6344: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6348:
    // 0x1f6348: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
label_1f634c:
    if (ctx->pc == 0x1F634Cu) {
        ctx->pc = 0x1F6350u;
        goto label_1f6350;
    }
    ctx->pc = 0x1F6348u;
    {
        const bool branch_taken_0x1f6348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6348) {
            ctx->pc = 0x1F6460u;
            goto label_1f6460;
        }
    }
    ctx->pc = 0x1F6350u;
label_1f6350:
    // 0x1f6350: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f6354:
    // 0x1f6354: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f6358:
    if (ctx->pc == 0x1F6358u) {
        ctx->pc = 0x1F6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6354u;
        // 0x1f6358: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F635Cu;
        goto label_1f635c;
    }
    ctx->pc = 0x1F6354u;
    {
        const bool branch_taken_0x1f6354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6354u;
        // 0x1f6358: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6354) {
            ctx->pc = 0x1F6370u;
            goto label_1f6370;
        }
    }
    ctx->pc = 0x1F635Cu;
label_1f635c:
    // 0x1f635c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f6360:
    // 0x1f6360: 0x2442bfc0  addiu       $v0, $v0, -0x4040
    ctx->pc = 0x1f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950848));
label_1f6364:
    // 0x1f6364: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6368:
    // 0x1f6368: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f636c:
    if (ctx->pc == 0x1F636Cu) {
        ctx->pc = 0x1F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6368u;
        // 0x1f636c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6370u;
        goto label_1f6370;
    }
    ctx->pc = 0x1F6368u;
    {
        const bool branch_taken_0x1f6368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6368u;
        // 0x1f636c: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6368) {
            ctx->pc = 0x1F6380u;
            goto label_1f6380;
        }
    }
    ctx->pc = 0x1F6370u;
label_1f6370:
    // 0x1f6370: 0x2442bee0  addiu       $v0, $v0, -0x4120
    ctx->pc = 0x1f6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
label_1f6374:
    // 0x1f6374: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6378:
    // 0x1f6378: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f6378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f637c:
    // 0x1f637c: 0x0  nop
    ctx->pc = 0x1f637cu;
    // NOP
label_1f6380:
    // 0x1f6380: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1f6384:
    // 0x1f6384: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1f6384u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f6388:
    // 0x1f6388: 0x8c308c10  lw          $s0, -0x73F0($at)
    ctx->pc = 0x1f6388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937616)));
label_1f638c:
    // 0x1f638c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1f6390:
    // 0x1f6390: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1f6390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f6394:
    // 0x1f6394: 0xc070080  jal         func_1C0200
label_1f6398:
    if (ctx->pc == 0x1F6398u) {
        ctx->pc = 0x1F6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6394u;
        // 0x1f6398: 0x34450800  ori         $a1, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F639Cu;
        goto label_1f639c;
    }
    ctx->pc = 0x1F6394u;
    SET_GPR_U32(ctx, 31, 0x1F639Cu);
    ctx->pc = 0x1F6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6394u;
    // 0x1f6398: 0x34450800  ori         $a1, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F639Cu;
label_1f639c:
    // 0x1f639c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x1f639cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1f63a0:
    // 0x1f63a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f63a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f63a4:
    // 0x1f63a4: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1f63a8:
    // 0x1f63a8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1f63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1f63ac:
    // 0x1f63ac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f63b0:
    // 0x1f63b0: 0xc041744  jal         func_105D10
label_1f63b4:
    if (ctx->pc == 0x1F63B4u) {
        ctx->pc = 0x1F63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63B0u;
        // 0x1f63b4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F63B8u;
        goto label_1f63b8;
    }
    ctx->pc = 0x1F63B0u;
    SET_GPR_U32(ctx, 31, 0x1F63B8u);
    ctx->pc = 0x1F63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63B0u;
    // 0x1f63b4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1F63B0u, 0x1F63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63B8u;
label_1f63b8:
    // 0x1f63b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f63b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f63bc:
    // 0x1f63bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f63bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f63c0:
    // 0x1f63c0: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f63c4:
    // 0x1f63c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f63c8:
    // 0x1f63c8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f63cc:
    // 0x1f63cc: 0xc060678  jal         func_1819E0
label_1f63d0:
    if (ctx->pc == 0x1F63D0u) {
        ctx->pc = 0x1F63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63CCu;
        // 0x1f63d0: 0x26930080  addiu       $s3, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F63D4u;
        goto label_1f63d4;
    }
    ctx->pc = 0x1F63CCu;
    SET_GPR_U32(ctx, 31, 0x1F63D4u);
    ctx->pc = 0x1F63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63CCu;
    // 0x1f63d0: 0x26930080  addiu       $s3, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1F63CCu, 0x1F63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63D4u;
label_1f63d4:
    // 0x1f63d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f63d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f63d8:
    // 0x1f63d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f63d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f63dc:
    // 0x1f63dc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1f63dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f63e0:
    // 0x1f63e0: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f63e4:
    // 0x1f63e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f63e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f63e8:
    // 0x1f63e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f63e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f63ec:
    // 0x1f63ec: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x1f63ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f63f0:
    // 0x1f63f0: 0xc060300  jal         func_180C00
label_1f63f4:
    if (ctx->pc == 0x1F63F4u) {
        ctx->pc = 0x1F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63F0u;
        // 0x1f63f4: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F63F8u;
        goto label_1f63f8;
    }
    ctx->pc = 0x1F63F0u;
    SET_GPR_U32(ctx, 31, 0x1F63F8u);
    ctx->pc = 0x1F63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F63F0u;
    // 0x1f63f4: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1F63F0u, 0x1F63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63F8u;
label_1f63f8:
    // 0x1f63f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f63f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f63fc:
    // 0x1f63fc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1f6400:
    // 0x1f6400: 0xc08e93e  jal         func_23A4F8
label_1f6404:
    if (ctx->pc == 0x1F6404u) {
        ctx->pc = 0x1F6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6400u;
        // 0x1f6404: 0x3c060002  lui         $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6408u;
        goto label_1f6408;
    }
    ctx->pc = 0x1F6400u;
    SET_GPR_U32(ctx, 31, 0x1F6408u);
    ctx->pc = 0x1F6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6400u;
    // 0x1f6404: 0x3c060002  lui         $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1F6408u;
label_1f6408:
    // 0x1f6408: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f640c:
    // 0x1f640c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f6410:
    // 0x1f6410: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6414:
    // 0x1f6414: 0xc060668  jal         func_1819A0
label_1f6418:
    if (ctx->pc == 0x1F6418u) {
        ctx->pc = 0x1F6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6414u;
        // 0x1f6418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F641Cu;
        goto label_1f641c;
    }
    ctx->pc = 0x1F6414u;
    SET_GPR_U32(ctx, 31, 0x1F641Cu);
    ctx->pc = 0x1F6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6414u;
    // 0x1f6418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1F6414u, 0x1F641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F641Cu;
label_1f641c:
    // 0x1f641c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f6420:
    // 0x1f6420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f6420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6424:
    // 0x1f6424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f6428:
    // 0x1f6428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f642c:
    // 0x1f642c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f642cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6430:
    // 0x1f6430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6434:
    // 0x1f6434: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6438:
    // 0x1f6438: 0xc060300  jal         func_180C00
label_1f643c:
    if (ctx->pc == 0x1F643Cu) {
        ctx->pc = 0x1F643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6438u;
        // 0x1f643c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6440u;
        goto label_1f6440;
    }
    ctx->pc = 0x1F6438u;
    SET_GPR_U32(ctx, 31, 0x1F6440u);
    ctx->pc = 0x1F643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6438u;
    // 0x1f643c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1F6438u, 0x1F6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6440u;
label_1f6440:
    // 0x1f6440: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f6440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1f6444:
    // 0x1f6444: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x1f6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1f6448:
    // 0x1f6448: 0x34210040  ori         $at, $at, 0x40
    ctx->pc = 0x1f6448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64);
label_1f644c:
    // 0x1f644c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f6450:
    // 0x1f6450: 0xc08e93e  jal         func_23A4F8
label_1f6454:
    if (ctx->pc == 0x1F6454u) {
        ctx->pc = 0x1F6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6450u;
        // 0x1f6454: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6458u;
        goto label_1f6458;
    }
    ctx->pc = 0x1F6450u;
    SET_GPR_U32(ctx, 31, 0x1F6458u);
    ctx->pc = 0x1F6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6450u;
    // 0x1f6454: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1F6458u;
label_1f6458:
    // 0x1f6458: 0xc070038  jal         func_1C00E0
label_1f645c:
    if (ctx->pc == 0x1F645Cu) {
        ctx->pc = 0x1F645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6458u;
        // 0x1f645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6460u;
        goto label_1f6460;
    }
    ctx->pc = 0x1F6458u;
    SET_GPR_U32(ctx, 31, 0x1F6460u);
    ctx->pc = 0x1F645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6458u;
    // 0x1f645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F6460u;
label_1f6460:
    // 0x1f6460: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f6460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f6464:
    // 0x1f6464: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1f6464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6468:
    // 0x1f6468: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
label_1f646c:
    if (ctx->pc == 0x1F646Cu) {
        ctx->pc = 0x1F646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6468u;
        // 0x1f646c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6470u;
        goto label_1f6470;
    }
    ctx->pc = 0x1F6468u;
    {
        const bool branch_taken_0x1f6468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6468u;
        // 0x1f646c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6468) {
            ctx->pc = 0x1F6338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6338;
        }
    }
    ctx->pc = 0x1F6470u;
label_1f6470:
    // 0x1f6470: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f6470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f6474:
    // 0x1f6474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f6474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6478:
    // 0x1f6478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f647c:
    // 0x1f647c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f647cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6480:
    // 0x1f6480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6484:
    // 0x1f6484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6488:
    // 0x1f6488: 0x3e00008  jr          $ra
label_1f648c:
    if (ctx->pc == 0x1F648Cu) {
        ctx->pc = 0x1F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6488u;
        // 0x1f648c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6490u;
        goto label_1f6490;
    }
    ctx->pc = 0x1F6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6488u;
        // 0x1f648c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6490u;
label_1f6490:
    // 0x1f6490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f6494:
    // 0x1f6494: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f6494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1f6498:
    // 0x1f6498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f6498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f649c:
    // 0x1f649c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1f64a0:
    // 0x1f64a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f64a4:
    // 0x1f64a4: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x1f64a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1f64a8:
    // 0x1f64a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f64a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f64ac:
    // 0x1f64ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f64acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f64b0:
    // 0x1f64b0: 0x8c308c10  lw          $s0, -0x73F0($at)
    ctx->pc = 0x1f64b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937616)));
label_1f64b4:
    // 0x1f64b4: 0xc070080  jal         func_1C0200
label_1f64b8:
    if (ctx->pc == 0x1F64B8u) {
        ctx->pc = 0x1F64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64B4u;
        // 0x1f64b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F64BCu;
        goto label_1f64bc;
    }
    ctx->pc = 0x1F64B4u;
    SET_GPR_U32(ctx, 31, 0x1F64BCu);
    ctx->pc = 0x1F64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64B4u;
    // 0x1f64b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F64BCu;
label_1f64bc:
    // 0x1f64bc: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_1f64c0:
    // 0x1f64c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1f64c4:
    // 0x1f64c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f64c8:
    // 0x1f64c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f64c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f64cc:
    // 0x1f64cc: 0xc041744  jal         func_105D10
label_1f64d0:
    if (ctx->pc == 0x1F64D0u) {
        ctx->pc = 0x1F64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64CCu;
        // 0x1f64d0: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F64D4u;
        goto label_1f64d4;
    }
    ctx->pc = 0x1F64CCu;
    SET_GPR_U32(ctx, 31, 0x1F64D4u);
    ctx->pc = 0x1F64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F64CCu;
    // 0x1f64d0: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1F64CCu, 0x1F64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64D4u;
label_1f64d4:
    // 0x1f64d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f64d8:
    // 0x1f64d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f64d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f64dc:
    // 0x1f64dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f64dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f64e0:
    // 0x1f64e0: 0x3e00008  jr          $ra
label_1f64e4:
    if (ctx->pc == 0x1F64E4u) {
        ctx->pc = 0x1F64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64E0u;
        // 0x1f64e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F64E8u;
        goto label_1f64e8;
    }
    ctx->pc = 0x1F64E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64E0u;
        // 0x1f64e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F64E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0x0  nop
    ctx->pc = 0x1f64e8u;
    // NOP
label_1f64ec:
    // 0x1f64ec: 0x0  nop
    ctx->pc = 0x1f64ecu;
    // NOP
label_1f64f0:
    // 0x1f64f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f64f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f64f4:
    // 0x1f64f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f64f8:
    // 0x1f64f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f64f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f64fc:
    // 0x1f64fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f6500:
    // 0x1f6500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f6504:
    // 0x1f6504: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6508:
    // 0x1f6508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f650c:
    // 0x1f650c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6510:
    // 0x1f6510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f6514:
    // 0x1f6514: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1f6514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1f6518:
    // 0x1f6518: 0x1462009f  bne         $v1, $v0, . + 4 + (0x9F << 2)
label_1f651c:
    if (ctx->pc == 0x1F651Cu) {
        ctx->pc = 0x1F651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6518u;
        // 0x1f651c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6520u;
        goto label_1f6520;
    }
    ctx->pc = 0x1F6518u;
    {
        const bool branch_taken_0x1f6518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6518u;
        // 0x1f651c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6518) {
            ctx->pc = 0x1F6798u;
            { ctx->pc = 0x1f6798; return; }
        }
    }
    ctx->pc = 0x1F6520u;
label_1f6520:
    // 0x1f6520: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f6520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f6524:
    // 0x1f6524: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x1f6528u;
    return;
}
