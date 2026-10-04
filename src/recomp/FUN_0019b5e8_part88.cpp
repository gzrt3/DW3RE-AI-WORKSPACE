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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e58u: goto label_1c5e58;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e64u: goto label_1c5e64;
        case 0x1c5e68u: goto label_1c5e68;
        case 0x1c5e6cu: goto label_1c5e6c;
        case 0x1c5e70u: goto label_1c5e70;
        case 0x1c5e74u: goto label_1c5e74;
        case 0x1c5e78u: goto label_1c5e78;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e80u: goto label_1c5e80;
        case 0x1c5e84u: goto label_1c5e84;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5e8cu: goto label_1c5e8c;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5e94u: goto label_1c5e94;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5e9cu: goto label_1c5e9c;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5ea4u: goto label_1c5ea4;
        case 0x1c5ea8u: goto label_1c5ea8;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5eb0u: goto label_1c5eb0;
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5eb8u: goto label_1c5eb8;
        case 0x1c5ebcu: goto label_1c5ebc;
        case 0x1c5ec0u: goto label_1c5ec0;
        case 0x1c5ec4u: goto label_1c5ec4;
        case 0x1c5ec8u: goto label_1c5ec8;
        case 0x1c5eccu: goto label_1c5ecc;
        case 0x1c5ed0u: goto label_1c5ed0;
        case 0x1c5ed4u: goto label_1c5ed4;
        case 0x1c5ed8u: goto label_1c5ed8;
        case 0x1c5edcu: goto label_1c5edc;
        case 0x1c5ee0u: goto label_1c5ee0;
        case 0x1c5ee4u: goto label_1c5ee4;
        case 0x1c5ee8u: goto label_1c5ee8;
        case 0x1c5eecu: goto label_1c5eec;
        case 0x1c5ef0u: goto label_1c5ef0;
        case 0x1c5ef4u: goto label_1c5ef4;
        case 0x1c5ef8u: goto label_1c5ef8;
        case 0x1c5efcu: goto label_1c5efc;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f04u: goto label_1c5f04;
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f0cu: goto label_1c5f0c;
        case 0x1c5f10u: goto label_1c5f10;
        case 0x1c5f14u: goto label_1c5f14;
        case 0x1c5f18u: goto label_1c5f18;
        case 0x1c5f1cu: goto label_1c5f1c;
        case 0x1c5f20u: goto label_1c5f20;
        case 0x1c5f24u: goto label_1c5f24;
        case 0x1c5f28u: goto label_1c5f28;
        case 0x1c5f2cu: goto label_1c5f2c;
        case 0x1c5f30u: goto label_1c5f30;
        case 0x1c5f34u: goto label_1c5f34;
        case 0x1c5f38u: goto label_1c5f38;
        case 0x1c5f3cu: goto label_1c5f3c;
        case 0x1c5f40u: goto label_1c5f40;
        case 0x1c5f44u: goto label_1c5f44;
        case 0x1c5f48u: goto label_1c5f48;
        case 0x1c5f4cu: goto label_1c5f4c;
        case 0x1c5f50u: goto label_1c5f50;
        case 0x1c5f54u: goto label_1c5f54;
        case 0x1c5f58u: goto label_1c5f58;
        case 0x1c5f5cu: goto label_1c5f5c;
        case 0x1c5f60u: goto label_1c5f60;
        case 0x1c5f64u: goto label_1c5f64;
        case 0x1c5f68u: goto label_1c5f68;
        case 0x1c5f6cu: goto label_1c5f6c;
        case 0x1c5f70u: goto label_1c5f70;
        case 0x1c5f74u: goto label_1c5f74;
        case 0x1c5f78u: goto label_1c5f78;
        case 0x1c5f7cu: goto label_1c5f7c;
        case 0x1c5f80u: goto label_1c5f80;
        case 0x1c5f84u: goto label_1c5f84;
        case 0x1c5f88u: goto label_1c5f88;
        case 0x1c5f8cu: goto label_1c5f8c;
        case 0x1c5f90u: goto label_1c5f90;
        case 0x1c5f94u: goto label_1c5f94;
        case 0x1c5f98u: goto label_1c5f98;
        case 0x1c5f9cu: goto label_1c5f9c;
        case 0x1c5fa0u: goto label_1c5fa0;
        case 0x1c5fa4u: goto label_1c5fa4;
        case 0x1c5fa8u: goto label_1c5fa8;
        case 0x1c5facu: goto label_1c5fac;
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5fb4u: goto label_1c5fb4;
        case 0x1c5fb8u: goto label_1c5fb8;
        case 0x1c5fbcu: goto label_1c5fbc;
        case 0x1c5fc0u: goto label_1c5fc0;
        case 0x1c5fc4u: goto label_1c5fc4;
        case 0x1c5fc8u: goto label_1c5fc8;
        case 0x1c5fccu: goto label_1c5fcc;
        case 0x1c5fd0u: goto label_1c5fd0;
        case 0x1c5fd4u: goto label_1c5fd4;
        case 0x1c5fd8u: goto label_1c5fd8;
        case 0x1c5fdcu: goto label_1c5fdc;
        case 0x1c5fe0u: goto label_1c5fe0;
        case 0x1c5fe4u: goto label_1c5fe4;
        case 0x1c5fe8u: goto label_1c5fe8;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c5ff0u: goto label_1c5ff0;
        case 0x1c5ff4u: goto label_1c5ff4;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c5ffcu: goto label_1c5ffc;
        case 0x1c6000u: goto label_1c6000;
        case 0x1c6004u: goto label_1c6004;
        case 0x1c6008u: goto label_1c6008;
        case 0x1c600cu: goto label_1c600c;
        case 0x1c6010u: goto label_1c6010;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6018u: goto label_1c6018;
        case 0x1c601cu: goto label_1c601c;
        case 0x1c6020u: goto label_1c6020;
        case 0x1c6024u: goto label_1c6024;
        case 0x1c6028u: goto label_1c6028;
        case 0x1c602cu: goto label_1c602c;
        case 0x1c6030u: goto label_1c6030;
        case 0x1c6034u: goto label_1c6034;
        case 0x1c6038u: goto label_1c6038;
        case 0x1c603cu: goto label_1c603c;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6044u: goto label_1c6044;
        case 0x1c6048u: goto label_1c6048;
        case 0x1c604cu: goto label_1c604c;
        case 0x1c6050u: goto label_1c6050;
        case 0x1c6054u: goto label_1c6054;
        case 0x1c6058u: goto label_1c6058;
        case 0x1c605cu: goto label_1c605c;
        case 0x1c6060u: goto label_1c6060;
        case 0x1c6064u: goto label_1c6064;
        case 0x1c6068u: goto label_1c6068;
        case 0x1c606cu: goto label_1c606c;
        case 0x1c6070u: goto label_1c6070;
        case 0x1c6074u: goto label_1c6074;
        case 0x1c6078u: goto label_1c6078;
        case 0x1c607cu: goto label_1c607c;
        case 0x1c6080u: goto label_1c6080;
        case 0x1c6084u: goto label_1c6084;
        case 0x1c6088u: goto label_1c6088;
        case 0x1c608cu: goto label_1c608c;
        case 0x1c6090u: goto label_1c6090;
        case 0x1c6094u: goto label_1c6094;
        case 0x1c6098u: goto label_1c6098;
        case 0x1c609cu: goto label_1c609c;
        case 0x1c60a0u: goto label_1c60a0;
        case 0x1c60a4u: goto label_1c60a4;
        case 0x1c60a8u: goto label_1c60a8;
        case 0x1c60acu: goto label_1c60ac;
        case 0x1c60b0u: goto label_1c60b0;
        case 0x1c60b4u: goto label_1c60b4;
        case 0x1c60b8u: goto label_1c60b8;
        case 0x1c60bcu: goto label_1c60bc;
        case 0x1c60c0u: goto label_1c60c0;
        case 0x1c60c4u: goto label_1c60c4;
        case 0x1c60c8u: goto label_1c60c8;
        case 0x1c60ccu: goto label_1c60cc;
        case 0x1c60d0u: goto label_1c60d0;
        case 0x1c60d4u: goto label_1c60d4;
        case 0x1c60d8u: goto label_1c60d8;
        case 0x1c60dcu: goto label_1c60dc;
        case 0x1c60e0u: goto label_1c60e0;
        case 0x1c60e4u: goto label_1c60e4;
        case 0x1c60e8u: goto label_1c60e8;
        case 0x1c60ecu: goto label_1c60ec;
        case 0x1c60f0u: goto label_1c60f0;
        case 0x1c60f4u: goto label_1c60f4;
        case 0x1c60f8u: goto label_1c60f8;
        case 0x1c60fcu: goto label_1c60fc;
        case 0x1c6100u: goto label_1c6100;
        case 0x1c6104u: goto label_1c6104;
        case 0x1c6108u: goto label_1c6108;
        case 0x1c610cu: goto label_1c610c;
        case 0x1c6110u: goto label_1c6110;
        case 0x1c6114u: goto label_1c6114;
        case 0x1c6118u: goto label_1c6118;
        case 0x1c611cu: goto label_1c611c;
        case 0x1c6120u: goto label_1c6120;
        case 0x1c6124u: goto label_1c6124;
        case 0x1c6128u: goto label_1c6128;
        case 0x1c612cu: goto label_1c612c;
        case 0x1c6130u: goto label_1c6130;
        case 0x1c6134u: goto label_1c6134;
        case 0x1c6138u: goto label_1c6138;
        case 0x1c613cu: goto label_1c613c;
        case 0x1c6140u: goto label_1c6140;
        case 0x1c6144u: goto label_1c6144;
        case 0x1c6148u: goto label_1c6148;
        case 0x1c614cu: goto label_1c614c;
        case 0x1c6150u: goto label_1c6150;
        case 0x1c6154u: goto label_1c6154;
        case 0x1c6158u: goto label_1c6158;
        case 0x1c615cu: goto label_1c615c;
        case 0x1c6160u: goto label_1c6160;
        case 0x1c6164u: goto label_1c6164;
        case 0x1c6168u: goto label_1c6168;
        case 0x1c616cu: goto label_1c616c;
        case 0x1c6170u: goto label_1c6170;
        case 0x1c6174u: goto label_1c6174;
        case 0x1c6178u: goto label_1c6178;
        case 0x1c617cu: goto label_1c617c;
        case 0x1c6180u: goto label_1c6180;
        case 0x1c6184u: goto label_1c6184;
        case 0x1c6188u: goto label_1c6188;
        case 0x1c618cu: goto label_1c618c;
        case 0x1c6190u: goto label_1c6190;
        case 0x1c6194u: goto label_1c6194;
        case 0x1c6198u: goto label_1c6198;
        case 0x1c619cu: goto label_1c619c;
        case 0x1c61a0u: goto label_1c61a0;
        case 0x1c61a4u: goto label_1c61a4;
        case 0x1c61a8u: goto label_1c61a8;
        case 0x1c61acu: goto label_1c61ac;
        case 0x1c61b0u: goto label_1c61b0;
        case 0x1c61b4u: goto label_1c61b4;
        case 0x1c61b8u: goto label_1c61b8;
        case 0x1c61bcu: goto label_1c61bc;
        case 0x1c61c0u: goto label_1c61c0;
        case 0x1c61c4u: goto label_1c61c4;
        case 0x1c61c8u: goto label_1c61c8;
        case 0x1c61ccu: goto label_1c61cc;
        case 0x1c61d0u: goto label_1c61d0;
        case 0x1c61d4u: goto label_1c61d4;
        case 0x1c61d8u: goto label_1c61d8;
        case 0x1c61dcu: goto label_1c61dc;
        case 0x1c61e0u: goto label_1c61e0;
        case 0x1c61e4u: goto label_1c61e4;
        case 0x1c61e8u: goto label_1c61e8;
        case 0x1c61ecu: goto label_1c61ec;
        case 0x1c61f0u: goto label_1c61f0;
        case 0x1c61f4u: goto label_1c61f4;
        case 0x1c61f8u: goto label_1c61f8;
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6200u: goto label_1c6200;
        case 0x1c6204u: goto label_1c6204;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c620cu: goto label_1c620c;
        case 0x1c6210u: goto label_1c6210;
        case 0x1c6214u: goto label_1c6214;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c621cu: goto label_1c621c;
        case 0x1c6220u: goto label_1c6220;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c6228u: goto label_1c6228;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6230u: goto label_1c6230;
        case 0x1c6234u: goto label_1c6234;
        case 0x1c6238u: goto label_1c6238;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6240u: goto label_1c6240;
        case 0x1c6244u: goto label_1c6244;
        case 0x1c6248u: goto label_1c6248;
        case 0x1c624cu: goto label_1c624c;
        case 0x1c6250u: goto label_1c6250;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6258u: goto label_1c6258;
        case 0x1c625cu: goto label_1c625c;
        case 0x1c6260u: goto label_1c6260;
        case 0x1c6264u: goto label_1c6264;
        case 0x1c6268u: goto label_1c6268;
        case 0x1c626cu: goto label_1c626c;
        case 0x1c6270u: goto label_1c6270;
        case 0x1c6274u: goto label_1c6274;
        case 0x1c6278u: goto label_1c6278;
        case 0x1c627cu: goto label_1c627c;
        case 0x1c6280u: goto label_1c6280;
        case 0x1c6284u: goto label_1c6284;
        case 0x1c6288u: goto label_1c6288;
        case 0x1c628cu: goto label_1c628c;
        case 0x1c6290u: goto label_1c6290;
        case 0x1c6294u: goto label_1c6294;
        case 0x1c6298u: goto label_1c6298;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62a0u: goto label_1c62a0;
        case 0x1c62a4u: goto label_1c62a4;
        case 0x1c62a8u: goto label_1c62a8;
        case 0x1c62acu: goto label_1c62ac;
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62b4u: goto label_1c62b4;
        case 0x1c62b8u: goto label_1c62b8;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62c0u: goto label_1c62c0;
        case 0x1c62c4u: goto label_1c62c4;
        case 0x1c62c8u: goto label_1c62c8;
        case 0x1c62ccu: goto label_1c62cc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62d4u: goto label_1c62d4;
        case 0x1c62d8u: goto label_1c62d8;
        case 0x1c62dcu: goto label_1c62dc;
        case 0x1c62e0u: goto label_1c62e0;
        case 0x1c62e4u: goto label_1c62e4;
        case 0x1c62e8u: goto label_1c62e8;
        case 0x1c62ecu: goto label_1c62ec;
        case 0x1c62f0u: goto label_1c62f0;
        case 0x1c62f4u: goto label_1c62f4;
        case 0x1c62f8u: goto label_1c62f8;
        case 0x1c62fcu: goto label_1c62fc;
        case 0x1c6300u: goto label_1c6300;
        case 0x1c6304u: goto label_1c6304;
        case 0x1c6308u: goto label_1c6308;
        case 0x1c630cu: goto label_1c630c;
        case 0x1c6310u: goto label_1c6310;
        case 0x1c6314u: goto label_1c6314;
        case 0x1c6318u: goto label_1c6318;
        case 0x1c631cu: goto label_1c631c;
        case 0x1c6320u: goto label_1c6320;
        case 0x1c6324u: goto label_1c6324;
        case 0x1c6328u: goto label_1c6328;
        case 0x1c632cu: goto label_1c632c;
        case 0x1c6330u: goto label_1c6330;
        case 0x1c6334u: goto label_1c6334;
        case 0x1c6338u: goto label_1c6338;
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6340u: goto label_1c6340;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6348u: goto label_1c6348;
        case 0x1c634cu: goto label_1c634c;
        case 0x1c6350u: goto label_1c6350;
        case 0x1c6354u: goto label_1c6354;
        case 0x1c6358u: goto label_1c6358;
        case 0x1c635cu: goto label_1c635c;
        case 0x1c6360u: goto label_1c6360;
        case 0x1c6364u: goto label_1c6364;
        case 0x1c6368u: goto label_1c6368;
        case 0x1c636cu: goto label_1c636c;
        case 0x1c6370u: goto label_1c6370;
        case 0x1c6374u: goto label_1c6374;
        case 0x1c6378u: goto label_1c6378;
        case 0x1c637cu: goto label_1c637c;
        case 0x1c6380u: goto label_1c6380;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c6388u: goto label_1c6388;
        case 0x1c638cu: goto label_1c638c;
        case 0x1c6390u: goto label_1c6390;
        case 0x1c6394u: goto label_1c6394;
        case 0x1c6398u: goto label_1c6398;
        case 0x1c639cu: goto label_1c639c;
        case 0x1c63a0u: goto label_1c63a0;
        case 0x1c63a4u: goto label_1c63a4;
        case 0x1c63a8u: goto label_1c63a8;
        case 0x1c63acu: goto label_1c63ac;
        case 0x1c63b0u: goto label_1c63b0;
        case 0x1c63b4u: goto label_1c63b4;
        case 0x1c63b8u: goto label_1c63b8;
        case 0x1c63bcu: goto label_1c63bc;
        case 0x1c63c0u: goto label_1c63c0;
        case 0x1c63c4u: goto label_1c63c4;
        case 0x1c63c8u: goto label_1c63c8;
        case 0x1c63ccu: goto label_1c63cc;
        case 0x1c63d0u: goto label_1c63d0;
        case 0x1c63d4u: goto label_1c63d4;
        case 0x1c63d8u: goto label_1c63d8;
        case 0x1c63dcu: goto label_1c63dc;
        case 0x1c63e0u: goto label_1c63e0;
        case 0x1c63e4u: goto label_1c63e4;
        case 0x1c63e8u: goto label_1c63e8;
        case 0x1c63ecu: goto label_1c63ec;
        case 0x1c63f0u: goto label_1c63f0;
        case 0x1c63f4u: goto label_1c63f4;
        case 0x1c63f8u: goto label_1c63f8;
        case 0x1c63fcu: goto label_1c63fc;
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6404u: goto label_1c6404;
        case 0x1c6408u: goto label_1c6408;
        case 0x1c640cu: goto label_1c640c;
        case 0x1c6410u: goto label_1c6410;
        case 0x1c6414u: goto label_1c6414;
        case 0x1c6418u: goto label_1c6418;
        case 0x1c641cu: goto label_1c641c;
        case 0x1c6420u: goto label_1c6420;
        case 0x1c6424u: goto label_1c6424;
        case 0x1c6428u: goto label_1c6428;
        case 0x1c642cu: goto label_1c642c;
        case 0x1c6430u: goto label_1c6430;
        case 0x1c6434u: goto label_1c6434;
        case 0x1c6438u: goto label_1c6438;
        case 0x1c643cu: goto label_1c643c;
        case 0x1c6440u: goto label_1c6440;
        case 0x1c6444u: goto label_1c6444;
        case 0x1c6448u: goto label_1c6448;
        case 0x1c644cu: goto label_1c644c;
        case 0x1c6450u: goto label_1c6450;
        case 0x1c6454u: goto label_1c6454;
        case 0x1c6458u: goto label_1c6458;
        case 0x1c645cu: goto label_1c645c;
        case 0x1c6460u: goto label_1c6460;
        case 0x1c6464u: goto label_1c6464;
        case 0x1c6468u: goto label_1c6468;
        case 0x1c646cu: goto label_1c646c;
        case 0x1c6470u: goto label_1c6470;
        case 0x1c6474u: goto label_1c6474;
        case 0x1c6478u: goto label_1c6478;
        case 0x1c647cu: goto label_1c647c;
        case 0x1c6480u: goto label_1c6480;
        case 0x1c6484u: goto label_1c6484;
        case 0x1c6488u: goto label_1c6488;
        case 0x1c648cu: goto label_1c648c;
        case 0x1c6490u: goto label_1c6490;
        case 0x1c6494u: goto label_1c6494;
        case 0x1c6498u: goto label_1c6498;
        case 0x1c649cu: goto label_1c649c;
        case 0x1c64a0u: goto label_1c64a0;
        case 0x1c64a4u: goto label_1c64a4;
        case 0x1c64a8u: goto label_1c64a8;
        case 0x1c64acu: goto label_1c64ac;
        case 0x1c64b0u: goto label_1c64b0;
        case 0x1c64b4u: goto label_1c64b4;
        case 0x1c64b8u: goto label_1c64b8;
        case 0x1c64bcu: goto label_1c64bc;
        case 0x1c64c0u: goto label_1c64c0;
        case 0x1c64c4u: goto label_1c64c4;
        case 0x1c64c8u: goto label_1c64c8;
        case 0x1c64ccu: goto label_1c64cc;
        case 0x1c64d0u: goto label_1c64d0;
        case 0x1c64d4u: goto label_1c64d4;
        case 0x1c64d8u: goto label_1c64d8;
        case 0x1c64dcu: goto label_1c64dc;
        case 0x1c64e0u: goto label_1c64e0;
        case 0x1c64e4u: goto label_1c64e4;
        case 0x1c64e8u: goto label_1c64e8;
        case 0x1c64ecu: goto label_1c64ec;
        case 0x1c64f0u: goto label_1c64f0;
        case 0x1c64f4u: goto label_1c64f4;
        case 0x1c64f8u: goto label_1c64f8;
        case 0x1c64fcu: goto label_1c64fc;
        case 0x1c6500u: goto label_1c6500;
        case 0x1c6504u: goto label_1c6504;
        case 0x1c6508u: goto label_1c6508;
        case 0x1c650cu: goto label_1c650c;
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6514u: goto label_1c6514;
        case 0x1c6518u: goto label_1c6518;
        case 0x1c651cu: goto label_1c651c;
        case 0x1c6520u: goto label_1c6520;
        case 0x1c6524u: goto label_1c6524;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c652cu: goto label_1c652c;
        case 0x1c6530u: goto label_1c6530;
        case 0x1c6534u: goto label_1c6534;
        case 0x1c6538u: goto label_1c6538;
        case 0x1c653cu: goto label_1c653c;
        case 0x1c6540u: goto label_1c6540;
        case 0x1c6544u: goto label_1c6544;
        case 0x1c6548u: goto label_1c6548;
        case 0x1c654cu: goto label_1c654c;
        case 0x1c6550u: goto label_1c6550;
        case 0x1c6554u: goto label_1c6554;
        case 0x1c6558u: goto label_1c6558;
        case 0x1c655cu: goto label_1c655c;
        case 0x1c6560u: goto label_1c6560;
        case 0x1c6564u: goto label_1c6564;
        default: return;
    }

label_1c5d98:
    // 0x1c5d98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5d9c:
    // 0x1c5d9c: 0x0  nop
    ctx->pc = 0x1c5d9cu;
    // NOP
label_1c5da0:
    // 0x1c5da0: 0x0  nop
    ctx->pc = 0x1c5da0u;
    // NOP
label_1c5da4:
    // 0x1c5da4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1c5da4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1c5da8:
    // 0x1c5da8: 0x0  nop
    ctx->pc = 0x1c5da8u;
    // NOP
label_1c5dac:
    // 0x1c5dac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c5db0:
    // 0x1c5db0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5db4:
    // 0x1c5db4: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_1c5db8:
    if (ctx->pc == 0x1C5DB8u) {
        ctx->pc = 0x1C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB4u;
        // 0x1c5db8: 0x92842  srl         $a1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DBCu;
        goto label_1c5dbc;
    }
    ctx->pc = 0x1C5DB4u;
    {
        const bool branch_taken_0x1c5db4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB4u;
        // 0x1c5db8: 0x92842  srl         $a1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5db4) {
            ctx->pc = 0x1C5DC8u;
            goto label_1c5dc8;
        }
    }
    ctx->pc = 0x1C5DBCu;
label_1c5dbc:
    // 0x1c5dbc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1c5dbcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5dc0:
    // 0x1c5dc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5dc4:
    if (ctx->pc == 0x1C5DC4u) {
        ctx->pc = 0x1C5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DC0u;
        // 0x1c5dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DC8u;
        goto label_1c5dc8;
    }
    ctx->pc = 0x1C5DC0u;
    {
        const bool branch_taken_0x1c5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DC0u;
        // 0x1c5dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dc0) {
            ctx->pc = 0x1C5DE0u;
            goto label_1c5de0;
        }
    }
    ctx->pc = 0x1C5DC8u;
label_1c5dc8:
    // 0x1c5dc8: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x1c5dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_1c5dcc:
    // 0x1c5dcc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5dd0:
    // 0x1c5dd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5dd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5dd4:
    // 0x1c5dd4: 0x0  nop
    ctx->pc = 0x1c5dd4u;
    // NOP
label_1c5dd8:
    // 0x1c5dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5ddc:
    // 0x1c5ddc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5ddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5de0:
    // 0x1c5de0: 0x0  nop
    ctx->pc = 0x1c5de0u;
    // NOP
label_1c5de4:
    // 0x1c5de4: 0x0  nop
    ctx->pc = 0x1c5de4u;
    // NOP
label_1c5de8:
    // 0x1c5de8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1c5de8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_1c5dec:
    // 0x1c5dec: 0x0  nop
    ctx->pc = 0x1c5decu;
    // NOP
label_1c5df0:
    // 0x1c5df0: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x1c5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
label_1c5df4:
    // 0x1c5df4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5df8:
    // 0x1c5df8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1c5dfc:
    if (ctx->pc == 0x1C5DFCu) {
        ctx->pc = 0x1C5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DF8u;
        // 0x1c5dfc: 0x72842  srl         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E00u;
        goto label_1c5e00;
    }
    ctx->pc = 0x1C5DF8u;
    {
        const bool branch_taken_0x1c5df8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1C5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DF8u;
        // 0x1c5dfc: 0x72842  srl         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5df8) {
            ctx->pc = 0x1C5E0Cu;
            goto label_1c5e0c;
        }
    }
    ctx->pc = 0x1C5E00u;
label_1c5e00:
    // 0x1c5e00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1c5e00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e04:
    // 0x1c5e04: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c5e08:
    if (ctx->pc == 0x1C5E08u) {
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E04u;
        // 0x1c5e08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E0Cu;
        goto label_1c5e0c;
    }
    ctx->pc = 0x1C5E04u;
    {
        const bool branch_taken_0x1c5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E04u;
        // 0x1c5e08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e04) {
            ctx->pc = 0x1C5E24u;
            goto label_1c5e24;
        }
    }
    ctx->pc = 0x1C5E0Cu;
label_1c5e0c:
    // 0x1c5e0c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1c5e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1c5e10:
    // 0x1c5e10: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5e14:
    // 0x1c5e14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e18:
    // 0x1c5e18: 0x0  nop
    ctx->pc = 0x1c5e18u;
    // NOP
label_1c5e1c:
    // 0x1c5e1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5e20:
    // 0x1c5e20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5e24:
    // 0x1c5e24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c5e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c5e28:
    // 0x1c5e28: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x1c5e28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c5e2c:
    // 0x1c5e2c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_1c5e30:
    if (ctx->pc == 0x1C5E30u) {
        ctx->pc = 0x1C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E2Cu;
        // 0x1c5e30: 0xe48402b0  swc1        $f4, 0x2B0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E34u;
        goto label_1c5e34;
    }
    ctx->pc = 0x1C5E2Cu;
    {
        const bool branch_taken_0x1c5e2c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E2Cu;
        // 0x1c5e30: 0xe48402b0  swc1        $f4, 0x2B0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e2c) {
            ctx->pc = 0x1C5E40u;
            goto label_1c5e40;
        }
    }
    ctx->pc = 0x1C5E34u;
label_1c5e34:
    // 0x1c5e34: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c5e34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e38:
    // 0x1c5e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5e3c:
    if (ctx->pc == 0x1C5E3Cu) {
        ctx->pc = 0x1C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E38u;
        // 0x1c5e3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E40u;
        goto label_1c5e40;
    }
    ctx->pc = 0x1C5E38u;
    {
        const bool branch_taken_0x1c5e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E38u;
        // 0x1c5e3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e38) {
            ctx->pc = 0x1C5E5Cu;
            goto label_1c5e5c;
        }
    }
    ctx->pc = 0x1C5E40u;
label_1c5e40:
    // 0x1c5e40: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_1c5e44:
    // 0x1c5e44: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x1c5e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_1c5e48:
    // 0x1c5e48: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5e4c:
    // 0x1c5e4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e50:
    // 0x1c5e50: 0x0  nop
    ctx->pc = 0x1c5e50u;
    // NOP
label_1c5e54:
    // 0x1c5e54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5e58:
    // 0x1c5e58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5e5c:
    // 0x1c5e5c: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x1c5e5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1c5e60:
    // 0x1c5e60: 0x3c053b00  lui         $a1, 0x3B00
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15104 << 16));
label_1c5e64:
    // 0x1c5e64: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c5e68:
    // 0x1c5e68: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e6c:
    // 0x1c5e6c: 0x0  nop
    ctx->pc = 0x1c5e6cu;
    // NOP
label_1c5e70:
    // 0x1c5e70: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x1c5e70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c5e74:
    // 0x1c5e74: 0xe48502b4  swc1        $f5, 0x2B4($a0)
    ctx->pc = 0x1c5e74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
label_1c5e78:
    // 0x1c5e78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5e7c:
    if (ctx->pc == 0x1C5E7Cu) {
        ctx->pc = 0x1C5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E78u;
        // 0x1c5e7c: 0xe48402b8  swc1        $f4, 0x2B8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E80u;
        goto label_1c5e80;
    }
    ctx->pc = 0x1C5E78u;
    {
        const bool branch_taken_0x1c5e78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E78u;
        // 0x1c5e7c: 0xe48402b8  swc1        $f4, 0x2B8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e78) {
            ctx->pc = 0x1C5E8Cu;
            goto label_1c5e8c;
        }
    }
    ctx->pc = 0x1C5E80u;
label_1c5e80:
    // 0x1c5e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e84:
    // 0x1c5e84: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5e88:
    if (ctx->pc == 0x1C5E88u) {
        ctx->pc = 0x1C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E84u;
        // 0x1c5e88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E8Cu;
        goto label_1c5e8c;
    }
    ctx->pc = 0x1C5E84u;
    {
        const bool branch_taken_0x1c5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E84u;
        // 0x1c5e88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e84) {
            ctx->pc = 0x1C5EA8u;
            goto label_1c5ea8;
        }
    }
    ctx->pc = 0x1C5E8Cu;
label_1c5e8c:
    // 0x1c5e8c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1c5e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5e90:
    // 0x1c5e90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5e94:
    // 0x1c5e94: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5e98:
    // 0x1c5e98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5e98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5e9c:
    // 0x1c5e9c: 0x0  nop
    ctx->pc = 0x1c5e9cu;
    // NOP
label_1c5ea0:
    // 0x1c5ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5ea4:
    // 0x1c5ea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5ea8:
    // 0x1c5ea8: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x1c5ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1c5eac:
    // 0x1c5eac: 0x3c053b00  lui         $a1, 0x3B00
    ctx->pc = 0x1c5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15104 << 16));
label_1c5eb0:
    // 0x1c5eb0: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1c5eb4:
    // 0x1c5eb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5eb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5eb8:
    // 0x1c5eb8: 0x0  nop
    ctx->pc = 0x1c5eb8u;
    // NOP
label_1c5ebc:
    // 0x1c5ebc: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1c5ebcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c5ec0:
    // 0x1c5ec0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1c5ec4:
    if (ctx->pc == 0x1C5EC4u) {
        ctx->pc = 0x1C5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC0u;
        // 0x1c5ec4: 0xe48302bc  swc1        $f3, 0x2BC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EC8u;
        goto label_1c5ec8;
    }
    ctx->pc = 0x1C5EC0u;
    {
        const bool branch_taken_0x1c5ec0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC0u;
        // 0x1c5ec4: 0xe48302bc  swc1        $f3, 0x2BC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ec0) {
            ctx->pc = 0x1C5ED4u;
            goto label_1c5ed4;
        }
    }
    ctx->pc = 0x1C5EC8u;
label_1c5ec8:
    // 0x1c5ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5ecc:
    // 0x1c5ecc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c5ed0:
    if (ctx->pc == 0x1C5ED0u) {
        ctx->pc = 0x1C5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5ECCu;
        // 0x1c5ed0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ED4u;
        goto label_1c5ed4;
    }
    ctx->pc = 0x1C5ECCu;
    {
        const bool branch_taken_0x1c5ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5ECCu;
        // 0x1c5ed0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ecc) {
            ctx->pc = 0x1C5EF0u;
            goto label_1c5ef0;
        }
    }
    ctx->pc = 0x1C5ED4u;
label_1c5ed4:
    // 0x1c5ed4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1c5ed8:
    // 0x1c5ed8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c5ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c5edc:
    // 0x1c5edc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c5edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1c5ee0:
    // 0x1c5ee0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c5ee0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5ee4:
    // 0x1c5ee4: 0x0  nop
    ctx->pc = 0x1c5ee4u;
    // NOP
label_1c5ee8:
    // 0x1c5ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c5eec:
    // 0x1c5eec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c5eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c5ef0:
    // 0x1c5ef0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1c5ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c5ef4:
    // 0x1c5ef4: 0x3c033b00  lui         $v1, 0x3B00
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15104 << 16));
label_1c5ef8:
    // 0x1c5ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c5ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c5efc:
    // 0x1c5efc: 0x0  nop
    ctx->pc = 0x1c5efcu;
    // NOP
label_1c5f00:
    // 0x1c5f00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c5f04:
    // 0x1c5f04: 0xe48002c0  swc1        $f0, 0x2C0($a0)
    ctx->pc = 0x1c5f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
label_1c5f08:
    // 0x1c5f08: 0xe48502c4  swc1        $f5, 0x2C4($a0)
    ctx->pc = 0x1c5f08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
label_1c5f0c:
    // 0x1c5f0c: 0xe48002c8  swc1        $f0, 0x2C8($a0)
    ctx->pc = 0x1c5f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
label_1c5f10:
    // 0x1c5f10: 0x3e00008  jr          $ra
label_1c5f14:
    if (ctx->pc == 0x1C5F14u) {
        ctx->pc = 0x1C5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F10u;
        // 0x1c5f14: 0xe48302cc  swc1        $f3, 0x2CC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F18u;
        goto label_1c5f18;
    }
    ctx->pc = 0x1C5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F10u;
        // 0x1c5f14: 0xe48302cc  swc1        $f3, 0x2CC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 716), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F18u;
label_1c5f18:
    // 0x1c5f18: 0x0  nop
    ctx->pc = 0x1c5f18u;
    // NOP
label_1c5f1c:
    // 0x1c5f1c: 0x0  nop
    ctx->pc = 0x1c5f1cu;
    // NOP
label_1c5f20:
    // 0x1c5f20: 0x908302e0  lbu         $v1, 0x2E0($a0)
    ctx->pc = 0x1c5f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 736)));
label_1c5f24:
    // 0x1c5f24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c5f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f28:
    // 0x1c5f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c5f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5f2c:
    // 0x1c5f2c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1c5f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1c5f30:
    // 0x1c5f30: 0xa08302e0  sb          $v1, 0x2E0($a0)
    ctx->pc = 0x1c5f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 3));
label_1c5f34:
    // 0x1c5f34: 0x2405026c  addiu       $a1, $zero, 0x26C
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_1c5f38:
    // 0x1c5f38: 0x2406027c  addiu       $a2, $zero, 0x27C
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
label_1c5f3c:
    // 0x1c5f3c: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x1c5f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1c5f40:
    // 0x1c5f40: 0xdd430038  ld          $v1, 0x38($t2)
    ctx->pc = 0x1c5f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 56)));
label_1c5f44:
    // 0x1c5f44: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1c5f48:
    // 0x1c5f48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c5f4c:
    if (ctx->pc == 0x1C5F4Cu) {
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F50u;
        goto label_1c5f50;
    }
    ctx->pc = 0x1C5F48u;
    {
        const bool branch_taken_0x1c5f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f48) {
            ctx->pc = 0x1C5F58u;
            goto label_1c5f58;
        }
    }
    ctx->pc = 0x1C5F50u;
label_1c5f50:
    // 0x1c5f50: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c5f54:
    if (ctx->pc == 0x1C5F54u) {
        ctx->pc = 0x1C5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F50u;
        // 0x1c5f54: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F58u;
        goto label_1c5f58;
    }
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F50u;
        // 0x1c5f54: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F5Cu;
            goto label_1c5f5c;
        }
    }
    ctx->pc = 0x1C5F58u;
label_1c5f58:
    // 0x1c5f58: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1c5f58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_1c5f5c:
    // 0x1c5f5c: 0x0  nop
    ctx->pc = 0x1c5f5cu;
    // NOP
label_1c5f60:
    // 0x1c5f60: 0xdd430158  ld          $v1, 0x158($t2)
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 344)));
label_1c5f64:
    // 0x1c5f64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c5f68:
    if (ctx->pc == 0x1C5F68u) {
        ctx->pc = 0x1C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F64u;
        // 0x1c5f68: 0x25470150  addiu       $a3, $t2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F6Cu;
        goto label_1c5f6c;
    }
    ctx->pc = 0x1C5F64u;
    {
        const bool branch_taken_0x1c5f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F64u;
        // 0x1c5f68: 0x25470150  addiu       $a3, $t2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f64) {
            ctx->pc = 0x1C5F74u;
            goto label_1c5f74;
        }
    }
    ctx->pc = 0x1C5F6Cu;
label_1c5f6c:
    // 0x1c5f6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c5f70:
    if (ctx->pc == 0x1C5F70u) {
        ctx->pc = 0x1C5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F6Cu;
        // 0x1c5f70: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F74u;
        goto label_1c5f74;
    }
    ctx->pc = 0x1C5F6Cu;
    {
        const bool branch_taken_0x1c5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F6Cu;
        // 0x1c5f70: 0xfce60000  sd          $a2, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f6c) {
            ctx->pc = 0x1C5F7Cu;
            goto label_1c5f7c;
        }
    }
    ctx->pc = 0x1C5F74u;
label_1c5f74:
    // 0x1c5f74: 0x0  nop
    ctx->pc = 0x1c5f74u;
    // NOP
label_1c5f78:
    // 0x1c5f78: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1c5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_1c5f7c:
    // 0x1c5f7c: 0x0  nop
    ctx->pc = 0x1c5f7cu;
    // NOP
label_1c5f80:
    // 0x1c5f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1c5f84:
    // 0x1c5f84: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c5f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c5f88:
    // 0x1c5f88: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1c5f8c:
    if (ctx->pc == 0x1C5F8Cu) {
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F90u;
        goto label_1c5f90;
    }
    ctx->pc = 0x1C5F88u;
    {
        const bool branch_taken_0x1c5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F88u;
        // 0x1c5f8c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f88) {
            ctx->pc = 0x1C5F3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5f3c;
        }
    }
    ctx->pc = 0x1C5F90u;
label_1c5f90:
    // 0x1c5f90: 0x3e00008  jr          $ra
label_1c5f94:
    if (ctx->pc == 0x1C5F94u) {
        ctx->pc = 0x1C5F98u;
        goto label_1c5f98;
    }
    ctx->pc = 0x1C5F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F98u;
label_1c5f98:
    // 0x1c5f98: 0x0  nop
    ctx->pc = 0x1c5f98u;
    // NOP
label_1c5f9c:
    // 0x1c5f9c: 0x0  nop
    ctx->pc = 0x1c5f9cu;
    // NOP
label_1c5fa0:
    // 0x1c5fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c5fa4:
    // 0x1c5fa4: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1c5fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1c5fa8:
    // 0x1c5fa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c5fac:
    // 0x1c5fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5fb0:
    // 0x1c5fb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c5fb4:
    // 0x1c5fb4: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x1c5fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
label_1c5fb8:
    // 0x1c5fb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c5fbc:
    // 0x1c5fbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c5fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5fc0:
    // 0x1c5fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c5fc4:
    // 0x1c5fc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c5fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c5fc8:
    // 0x1c5fc8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c5fc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c5fcc:
    // 0x1c5fcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c5fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c5fd0:
    // 0x1c5fd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5fd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c5fd4:
    // 0x1c5fd4: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x1c5fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
label_1c5fd8:
    // 0x1c5fd8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1c5fd8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1c5fdc:
    // 0x1c5fdc: 0xa08302e1  sb          $v1, 0x2E1($a0)
    ctx->pc = 0x1c5fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 737), (uint8_t)GPR_U32(ctx, 3));
label_1c5fe0:
    // 0x1c5fe0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1c5fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_1c5fe4:
    // 0x1c5fe4: 0xa08002e0  sb          $zero, 0x2E0($a0)
    ctx->pc = 0x1c5fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 0));
label_1c5fe8:
    // 0x1c5fe8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1c5fec:
    if (ctx->pc == 0x1C5FECu) {
        ctx->pc = 0x1C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FE8u;
        // 0x1c5fec: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5FF0u;
        goto label_1c5ff0;
    }
    ctx->pc = 0x1C5FE8u;
    {
        const bool branch_taken_0x1c5fe8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FE8u;
        // 0x1c5fec: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fe8) {
            ctx->pc = 0x1C6000u;
            goto label_1c6000;
        }
    }
    ctx->pc = 0x1C5FF0u;
label_1c5ff0:
    // 0x1c5ff0: 0x924202e0  lbu         $v0, 0x2E0($s2)
    ctx->pc = 0x1c5ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 736)));
label_1c5ff4:
    // 0x1c5ff4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c5ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1c5ff8:
    // 0x1c5ff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c5ffc:
    if (ctx->pc == 0x1C5FFCu) {
        ctx->pc = 0x1C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF8u;
        // 0x1c5ffc: 0xa24202e0  sb          $v0, 0x2E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6000u;
        goto label_1c6000;
    }
    ctx->pc = 0x1C5FF8u;
    {
        const bool branch_taken_0x1c5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF8u;
        // 0x1c5ffc: 0xa24202e0  sb          $v0, 0x2E0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ff8) {
            ctx->pc = 0x1C6004u;
            goto label_1c6004;
        }
    }
    ctx->pc = 0x1C6000u;
label_1c6000:
    // 0x1c6000: 0xa24802e3  sb          $t0, 0x2E3($s2)
    ctx->pc = 0x1c6000u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 739), (uint8_t)GPR_U32(ctx, 8));
label_1c6004:
    // 0x1c6004: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c6008:
    // 0x1c6008: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1c600c:
    // 0x1c600c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c6010:
    if (ctx->pc == 0x1C6010u) {
        ctx->pc = 0x1C6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C600Cu;
        // 0x1c6010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6014u;
        goto label_1c6014;
    }
    ctx->pc = 0x1C600Cu;
    {
        const bool branch_taken_0x1c600c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C600Cu;
        // 0x1c6010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c600c) {
            ctx->pc = 0x1C6024u;
            goto label_1c6024;
        }
    }
    ctx->pc = 0x1C6014u;
label_1c6014:
    // 0x1c6014: 0x924202e0  lbu         $v0, 0x2E0($s2)
    ctx->pc = 0x1c6014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 736)));
label_1c6018:
    // 0x1c6018: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1c601c:
    // 0x1c601c: 0xa24202e0  sb          $v0, 0x2E0($s2)
    ctx->pc = 0x1c601cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 736), (uint8_t)GPR_U32(ctx, 2));
label_1c6020:
    // 0x1c6020: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c6024:
    // 0x1c6024: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c6028:
    // 0x1c6028: 0xa24202e2  sb          $v0, 0x2E2($s2)
    ctx->pc = 0x1c6028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 738), (uint8_t)GPR_U32(ctx, 2));
label_1c602c:
    // 0x1c602c: 0x28e1004f  slti        $at, $a3, 0x4F
    ctx->pc = 0x1c602cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)79) ? 1 : 0);
label_1c6030:
    // 0x1c6030: 0xa24002eb  sb          $zero, 0x2EB($s2)
    ctx->pc = 0x1c6030u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 747), (uint8_t)GPR_U32(ctx, 0));
label_1c6034:
    // 0x1c6034: 0xa24002ec  sb          $zero, 0x2EC($s2)
    ctx->pc = 0x1c6034u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 748), (uint8_t)GPR_U32(ctx, 0));
label_1c6038:
    // 0x1c6038: 0xa64302f2  sh          $v1, 0x2F2($s2)
    ctx->pc = 0x1c6038u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 754), (uint16_t)GPR_U32(ctx, 3));
label_1c603c:
    // 0x1c603c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1c6040:
    if (ctx->pc == 0x1C6040u) {
        ctx->pc = 0x1C6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C603Cu;
        // 0x1c6040: 0xa64302f4  sh          $v1, 0x2F4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 756), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6044u;
        goto label_1c6044;
    }
    ctx->pc = 0x1C603Cu;
    {
        const bool branch_taken_0x1c603c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C603Cu;
        // 0x1c6040: 0xa64302f4  sh          $v1, 0x2F4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 756), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c603c) {
            ctx->pc = 0x1C6050u;
            goto label_1c6050;
        }
    }
    ctx->pc = 0x1C6044u;
label_1c6044:
    // 0x1c6044: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1c6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1c6048:
    // 0x1c6048: 0xa64202f2  sh          $v0, 0x2F2($s2)
    ctx->pc = 0x1c6048u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 754), (uint16_t)GPR_U32(ctx, 2));
label_1c604c:
    // 0x1c604c: 0xa64302f4  sh          $v1, 0x2F4($s2)
    ctx->pc = 0x1c604cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 756), (uint16_t)GPR_U32(ctx, 3));
label_1c6050:
    // 0x1c6050: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c6054:
    // 0x1c6054: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c6058:
    // 0x1c6058: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1c6058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1c605c:
    // 0x1c605c: 0x24634950  addiu       $v1, $v1, 0x4950
    ctx->pc = 0x1c605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18768));
label_1c6060:
    // 0x1c6060: 0xae40030c  sw          $zero, 0x30C($s2)
    ctx->pc = 0x1c6060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 0));
label_1c6064:
    // 0x1c6064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c6068:
    // 0x1c6068: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1c6068u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c606c:
    // 0x1c606c: 0x24424951  addiu       $v0, $v0, 0x4951
    ctx->pc = 0x1c606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18769));
label_1c6070:
    // 0x1c6070: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c6074:
    // 0x1c6074: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c6078:
    // 0x1c6078: 0x24424952  addiu       $v0, $v0, 0x4952
    ctx->pc = 0x1c6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18770));
label_1c607c:
    // 0x1c607c: 0xa24602e9  sb          $a2, 0x2E9($s2)
    ctx->pc = 0x1c607cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 745), (uint8_t)GPR_U32(ctx, 6));
label_1c6080:
    // 0x1c6080: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c6080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c6084:
    // 0x1c6084: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1c6084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1c6088:
    // 0x1c6088: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c6088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c608c:
    // 0x1c608c: 0x24424953  addiu       $v0, $v0, 0x4953
    ctx->pc = 0x1c608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18771));
label_1c6090:
    // 0x1c6090: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c6094:
    // 0x1c6094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c6098:
    // 0x1c6098: 0xa24502ea  sb          $a1, 0x2EA($s2)
    ctx->pc = 0x1c6098u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 746), (uint8_t)GPR_U32(ctx, 5));
label_1c609c:
    // 0x1c609c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1c609cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c60a0:
    // 0x1c60a0: 0xa64302ee  sh          $v1, 0x2EE($s2)
    ctx->pc = 0x1c60a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 750), (uint16_t)GPR_U32(ctx, 3));
label_1c60a4:
    // 0x1c60a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1c60a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1c60a8:
    // 0x1c60a8: 0xa64202f0  sh          $v0, 0x2F0($s2)
    ctx->pc = 0x1c60a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 752), (uint16_t)GPR_U32(ctx, 2));
label_1c60ac:
    // 0x1c60ac: 0x924202e9  lbu         $v0, 0x2E9($s2)
    ctx->pc = 0x1c60acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 745)));
label_1c60b0:
    // 0x1c60b0: 0xc071740  jal         func_1C5D00
label_1c60b4:
    if (ctx->pc == 0x1C60B4u) {
        ctx->pc = 0x1C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B0u;
        // 0x1c60b4: 0xa24202e8  sb          $v0, 0x2E8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C60B8u;
        goto label_1c60b8;
    }
    ctx->pc = 0x1C60B0u;
    SET_GPR_U32(ctx, 31, 0x1C60B8u);
    ctx->pc = 0x1C60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60B0u;
    // 0x1c60b4: 0xa24202e8  sb          $v0, 0x2E8($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1C60B8u;
label_1c60b8:
    // 0x1c60b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c60b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c60bc:
    // 0x1c60bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c60bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c60c0:
    // 0x1c60c0: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_1c60c4:
    // 0x1c60c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c60c8:
    // 0x1c60c8: 0x34a98080  ori         $t1, $a1, 0x8080
    ctx->pc = 0x1c60c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
label_1c60cc:
    // 0x1c60cc: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
label_1c60d0:
    // 0x1c60d0: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x1c60d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
label_1c60d4:
    // 0x1c60d4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c60d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
label_1c60d8:
    // 0x1c60d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c60d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c60dc:
    // 0x1c60dc: 0x34aa0008  ori         $t2, $a1, 0x8
    ctx->pc = 0x1c60dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_1c60e0:
    // 0x1c60e0: 0x2474021  addu        $t0, $s2, $a3
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_1c60e4:
    // 0x1c60e4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c60e8:
    // 0x1c60e8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x1c60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_1c60ec:
    // 0x1c60ec: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1c60f0:
    // 0x1c60f0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x1c60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_1c60f4:
    // 0x1c60f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1c60f8:
    // 0x1c60f8: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x1c60f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_1c60fc:
    // 0x1c60fc: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x1c60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_1c6100:
    // 0x1c6100: 0xdc2b8ed0  ld          $t3, -0x7130($at)
    ctx->pc = 0x1c6100u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c6104:
    // 0x1c6104: 0x656b0001  daddiu      $t3, $t3, 0x1
    ctx->pc = 0x1c6104u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)1);
label_1c6108:
    // 0x1c6108: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c610c:
    // 0x1c610c: 0xfd0b0020  sd          $t3, 0x20($t0)
    ctx->pc = 0x1c610cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 11));
label_1c6110:
    // 0x1c6110: 0xdc2b8ed8  ld          $t3, -0x7128($at)
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c6114:
    // 0x1c6114: 0xfd0b0028  sd          $t3, 0x28($t0)
    ctx->pc = 0x1c6114u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 11));
label_1c6118:
    // 0x1c6118: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c611c:
    if (ctx->pc == 0x1C611Cu) {
        ctx->pc = 0x1C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6118u;
        // 0x1c611c: 0xfd100038  sd          $s0, 0x38($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6120u;
        goto label_1c6120;
    }
    ctx->pc = 0x1C6118u;
    {
        const bool branch_taken_0x1c6118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6118u;
        // 0x1c611c: 0xfd100038  sd          $s0, 0x38($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6118) {
            ctx->pc = 0x1C6128u;
            goto label_1c6128;
        }
    }
    ctx->pc = 0x1C6120u;
label_1c6120:
    // 0x1c6120: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6124:
    if (ctx->pc == 0x1C6124u) {
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6120u;
        // 0x1c6124: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6128u;
        goto label_1c6128;
    }
    ctx->pc = 0x1C6120u;
    {
        const bool branch_taken_0x1c6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6120u;
        // 0x1c6124: 0xfca40000  sd          $a0, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6120) {
            ctx->pc = 0x1C612Cu;
            goto label_1c612c;
        }
    }
    ctx->pc = 0x1C6128u;
label_1c6128:
    // 0x1c6128: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1c6128u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_1c612c:
    // 0x1c612c: 0x0  nop
    ctx->pc = 0x1c612cu;
    // NOP
label_1c6130:
    // 0x1c6130: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6130u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6134:
    // 0x1c6134: 0x250b0130  addiu       $t3, $t0, 0x130
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 304));
label_1c6138:
    // 0x1c6138: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c613c:
    // 0x1c613c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x1c613cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_1c6140:
    // 0x1c6140: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6140u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6144:
    // 0x1c6144: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6144u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6148:
    // 0x1c6148: 0xacac0018  sw          $t4, 0x18($a1)
    ctx->pc = 0x1c6148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 12));
label_1c614c:
    // 0x1c614c: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c614cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c6150:
    // 0x1c6150: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6150u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6154:
    // 0x1c6154: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6154u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6158:
    // 0x1c6158: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6158u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c615c:
    // 0x1c615c: 0xacac0030  sw          $t4, 0x30($a1)
    ctx->pc = 0x1c615cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 12));
label_1c6160:
    // 0x1c6160: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x1c6160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_1c6164:
    // 0x1c6164: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6164u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6168:
    // 0x1c6168: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c616c:
    // 0x1c616c: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c616cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6170:
    // 0x1c6170: 0xacac0048  sw          $t4, 0x48($a1)
    ctx->pc = 0x1c6170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 12));
label_1c6174:
    // 0x1c6174: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x1c6174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
label_1c6178:
    // 0x1c6178: 0x924c02e3  lbu         $t4, 0x2E3($s2)
    ctx->pc = 0x1c6178u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c617c:
    // 0x1c617c: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_1c6180:
    // 0x1c6180: 0x1896025  or          $t4, $t4, $t1
    ctx->pc = 0x1c6180u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_1c6184:
    // 0x1c6184: 0xacac0060  sw          $t4, 0x60($a1)
    ctx->pc = 0x1c6184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 12));
label_1c6188:
    // 0x1c6188: 0xaca20064  sw          $v0, 0x64($a1)
    ctx->pc = 0x1c6188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 2));
label_1c618c:
    // 0x1c618c: 0xad000130  sw          $zero, 0x130($t0)
    ctx->pc = 0x1c618cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 0));
label_1c6190:
    // 0x1c6190: 0xad000134  sw          $zero, 0x134($t0)
    ctx->pc = 0x1c6190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 308), GPR_U32(ctx, 0));
label_1c6194:
    // 0x1c6194: 0xad000138  sw          $zero, 0x138($t0)
    ctx->pc = 0x1c6194u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 312), GPR_U32(ctx, 0));
label_1c6198:
    // 0x1c6198: 0xad0a013c  sw          $t2, 0x13C($t0)
    ctx->pc = 0x1c6198u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 316), GPR_U32(ctx, 10));
label_1c619c:
    // 0x1c619c: 0xdc258ed0  ld          $a1, -0x7130($at)
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c61a0:
    // 0x1c61a0: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1c61a0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_1c61a4:
    // 0x1c61a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c61a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c61a8:
    // 0x1c61a8: 0xfd050140  sd          $a1, 0x140($t0)
    ctx->pc = 0x1c61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 320), GPR_U64(ctx, 5));
label_1c61ac:
    // 0x1c61ac: 0xdc258ed8  ld          $a1, -0x7128($at)
    ctx->pc = 0x1c61acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c61b0:
    // 0x1c61b0: 0xfd050148  sd          $a1, 0x148($t0)
    ctx->pc = 0x1c61b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 328), GPR_U64(ctx, 5));
label_1c61b4:
    // 0x1c61b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c61b8:
    if (ctx->pc == 0x1C61B8u) {
        ctx->pc = 0x1C61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B4u;
        // 0x1c61b8: 0xfd100158  sd          $s0, 0x158($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 344), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61BCu;
        goto label_1c61bc;
    }
    ctx->pc = 0x1C61B4u;
    {
        const bool branch_taken_0x1c61b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B4u;
        // 0x1c61b8: 0xfd100158  sd          $s0, 0x158($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 344), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61b4) {
            ctx->pc = 0x1C61C4u;
            goto label_1c61c4;
        }
    }
    ctx->pc = 0x1C61BCu;
label_1c61bc:
    // 0x1c61bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c61c0:
    if (ctx->pc == 0x1C61C0u) {
        ctx->pc = 0x1C61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61BCu;
        // 0x1c61c0: 0xfd640000  sd          $a0, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C61C4u;
        goto label_1c61c4;
    }
    ctx->pc = 0x1C61BCu;
    {
        const bool branch_taken_0x1c61bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61BCu;
        // 0x1c61c0: 0xfd640000  sd          $a0, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61bc) {
            ctx->pc = 0x1C61CCu;
            goto label_1c61cc;
        }
    }
    ctx->pc = 0x1C61C4u;
label_1c61c4:
    // 0x1c61c4: 0x0  nop
    ctx->pc = 0x1c61c4u;
    // NOP
label_1c61c8:
    // 0x1c61c8: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x1c61c8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
label_1c61cc:
    // 0x1c61cc: 0x0  nop
    ctx->pc = 0x1c61ccu;
    // NOP
label_1c61d0:
    // 0x1c61d0: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c61d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c61d4:
    // 0x1c61d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c61d8:
    // 0x1c61d8: 0x24e70090  addiu       $a3, $a3, 0x90
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
label_1c61dc:
    // 0x1c61dc: 0x2cc50002  sltiu       $a1, $a2, 0x2
    ctx->pc = 0x1c61dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c61e0:
    // 0x1c61e0: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c61e4:
    // 0x1c61e4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c61e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c61e8:
    // 0x1c61e8: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x1c61e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
label_1c61ec:
    // 0x1c61ec: 0xad62001c  sw          $v0, 0x1C($t3)
    ctx->pc = 0x1c61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 2));
label_1c61f0:
    // 0x1c61f0: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c61f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c61f4:
    // 0x1c61f4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c61f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c61f8:
    // 0x1c61f8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c61f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c61fc:
    // 0x1c61fc: 0xad680030  sw          $t0, 0x30($t3)
    ctx->pc = 0x1c61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 8));
label_1c6200:
    // 0x1c6200: 0xad620034  sw          $v0, 0x34($t3)
    ctx->pc = 0x1c6200u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 2));
label_1c6204:
    // 0x1c6204: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c6204u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c6208:
    // 0x1c6208: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c620c:
    // 0x1c620c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c620cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c6210:
    // 0x1c6210: 0xad680048  sw          $t0, 0x48($t3)
    ctx->pc = 0x1c6210u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 72), GPR_U32(ctx, 8));
label_1c6214:
    // 0x1c6214: 0xad62004c  sw          $v0, 0x4C($t3)
    ctx->pc = 0x1c6214u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 76), GPR_U32(ctx, 2));
label_1c6218:
    // 0x1c6218: 0x924802e3  lbu         $t0, 0x2E3($s2)
    ctx->pc = 0x1c6218u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 739)));
label_1c621c:
    // 0x1c621c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c621cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_1c6220:
    // 0x1c6220: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1c6224:
    // 0x1c6224: 0xad680060  sw          $t0, 0x60($t3)
    ctx->pc = 0x1c6224u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 8));
label_1c6228:
    // 0x1c6228: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
label_1c622c:
    if (ctx->pc == 0x1C622Cu) {
        ctx->pc = 0x1C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6228u;
        // 0x1c622c: 0xad620064  sw          $v0, 0x64($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6230u;
        goto label_1c6230;
    }
    ctx->pc = 0x1C6228u;
    {
        const bool branch_taken_0x1c6228 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6228u;
        // 0x1c622c: 0xad620064  sw          $v0, 0x64($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6228) {
            ctx->pc = 0x1C60E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60e0;
        }
    }
    ctx->pc = 0x1C6230u;
label_1c6230:
    // 0x1c6230: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c6234:
    // 0x1c6234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c6238:
    // 0x1c6238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c623c:
    // 0x1c623c: 0x26440250  addiu       $a0, $s2, 0x250
    ctx->pc = 0x1c623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_1c6240:
    // 0x1c6240: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x1c6240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1c6244:
    // 0x1c6244: 0x461508c2  mul.s       $f3, $f1, $f21
    ctx->pc = 0x1c6244u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1c6248:
    // 0x1c6248: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6248u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1c624c:
    // 0x1c624c: 0xe6410260  swc1        $f1, 0x260($s2)
    ctx->pc = 0x1c624cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 608), bits); }
label_1c6250:
    // 0x1c6250: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6250u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_1c6254:
    // 0x1c6254: 0xe6440264  swc1        $f4, 0x264($s2)
    ctx->pc = 0x1c6254u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 612), bits); }
label_1c6258:
    // 0x1c6258: 0xae400268  sw          $zero, 0x268($s2)
    ctx->pc = 0x1c6258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 616), GPR_U32(ctx, 0));
label_1c625c:
    // 0x1c625c: 0xe640026c  swc1        $f0, 0x26C($s2)
    ctx->pc = 0x1c625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 620), bits); }
label_1c6260:
    // 0x1c6260: 0xe6410270  swc1        $f1, 0x270($s2)
    ctx->pc = 0x1c6260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 624), bits); }
label_1c6264:
    // 0x1c6264: 0xe6420274  swc1        $f2, 0x274($s2)
    ctx->pc = 0x1c6264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 628), bits); }
label_1c6268:
    // 0x1c6268: 0xae400278  sw          $zero, 0x278($s2)
    ctx->pc = 0x1c6268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 0));
label_1c626c:
    // 0x1c626c: 0xe640027c  swc1        $f0, 0x27C($s2)
    ctx->pc = 0x1c626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 636), bits); }
label_1c6270:
    // 0x1c6270: 0xe6430280  swc1        $f3, 0x280($s2)
    ctx->pc = 0x1c6270u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_1c6274:
    // 0x1c6274: 0xe6440284  swc1        $f4, 0x284($s2)
    ctx->pc = 0x1c6274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 644), bits); }
label_1c6278:
    // 0x1c6278: 0xae400288  sw          $zero, 0x288($s2)
    ctx->pc = 0x1c6278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 0));
label_1c627c:
    // 0x1c627c: 0xe640028c  swc1        $f0, 0x28C($s2)
    ctx->pc = 0x1c627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 652), bits); }
label_1c6280:
    // 0x1c6280: 0xe6430290  swc1        $f3, 0x290($s2)
    ctx->pc = 0x1c6280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 656), bits); }
label_1c6284:
    // 0x1c6284: 0xe6420294  swc1        $f2, 0x294($s2)
    ctx->pc = 0x1c6284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 660), bits); }
label_1c6288:
    // 0x1c6288: 0xae400298  sw          $zero, 0x298($s2)
    ctx->pc = 0x1c6288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 664), GPR_U32(ctx, 0));
label_1c628c:
    // 0x1c628c: 0xe640029c  swc1        $f0, 0x29C($s2)
    ctx->pc = 0x1c628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 668), bits); }
label_1c6290:
    // 0x1c6290: 0xe64002d0  swc1        $f0, 0x2D0($s2)
    ctx->pc = 0x1c6290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 720), bits); }
label_1c6294:
    // 0x1c6294: 0xe64002d4  swc1        $f0, 0x2D4($s2)
    ctx->pc = 0x1c6294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 724), bits); }
label_1c6298:
    // 0x1c6298: 0xe64002d8  swc1        $f0, 0x2D8($s2)
    ctx->pc = 0x1c6298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 728), bits); }
label_1c629c:
    // 0x1c629c: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x1c629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
label_1c62a0:
    // 0x1c62a0: 0xae4002a0  sw          $zero, 0x2A0($s2)
    ctx->pc = 0x1c62a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
label_1c62a4:
    // 0x1c62a4: 0xae4002a4  sw          $zero, 0x2A4($s2)
    ctx->pc = 0x1c62a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
label_1c62a8:
    // 0x1c62a8: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x1c62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
label_1c62ac:
    // 0x1c62ac: 0xae4002ac  sw          $zero, 0x2AC($s2)
    ctx->pc = 0x1c62acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 684), GPR_U32(ctx, 0));
label_1c62b0:
    // 0x1c62b0: 0xae400310  sw          $zero, 0x310($s2)
    ctx->pc = 0x1c62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 784), GPR_U32(ctx, 0));
label_1c62b4:
    // 0x1c62b4: 0xae400314  sw          $zero, 0x314($s2)
    ctx->pc = 0x1c62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 788), GPR_U32(ctx, 0));
label_1c62b8:
    // 0x1c62b8: 0xae400318  sw          $zero, 0x318($s2)
    ctx->pc = 0x1c62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 0));
label_1c62bc:
    // 0x1c62bc: 0xae40031c  sw          $zero, 0x31C($s2)
    ctx->pc = 0x1c62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 0));
label_1c62c0:
    // 0x1c62c0: 0xae400320  sw          $zero, 0x320($s2)
    ctx->pc = 0x1c62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 0));
label_1c62c4:
    // 0x1c62c4: 0xc066e26  jal         func_19B898
label_1c62c8:
    if (ctx->pc == 0x1C62C8u) {
        ctx->pc = 0x1C62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62C4u;
        // 0x1c62c8: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C62CCu;
        goto label_1c62cc;
    }
    ctx->pc = 0x1C62C4u;
    SET_GPR_U32(ctx, 31, 0x1C62CCu);
    ctx->pc = 0x1C62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C62C4u;
    // 0x1c62c8: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1C62CCu;
label_1c62cc:
    // 0x1c62cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c62d0:
    // 0x1c62d0: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1c62d4:
    // 0x1c62d4: 0xa24402e4  sb          $a0, 0x2E4($s2)
    ctx->pc = 0x1c62d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 740), (uint8_t)GPR_U32(ctx, 4));
label_1c62d8:
    // 0x1c62d8: 0x24637960  addiu       $v1, $v1, 0x7960
    ctx->pc = 0x1c62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31072));
label_1c62dc:
    // 0x1c62dc: 0xae400364  sw          $zero, 0x364($s2)
    ctx->pc = 0x1c62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 868), GPR_U32(ctx, 0));
label_1c62e0:
    // 0x1c62e0: 0xae430368  sw          $v1, 0x368($s2)
    ctx->pc = 0x1c62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 872), GPR_U32(ctx, 3));
label_1c62e4:
    // 0x1c62e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c62e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c62e8:
    // 0x1c62e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c62ec:
    // 0x1c62ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c62ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c62f0:
    // 0x1c62f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c62f4:
    // 0x1c62f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c62f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c62f8:
    // 0x1c62f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c62f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c62fc:
    // 0x1c62fc: 0x3e00008  jr          $ra
label_1c6300:
    if (ctx->pc == 0x1C6300u) {
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6304u;
        goto label_1c6304;
    }
    ctx->pc = 0x1C62FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62FCu;
        // 0x1c6300: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C62FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6304u;
label_1c6304:
    // 0x1c6304: 0x0  nop
    ctx->pc = 0x1c6304u;
    // NOP
label_1c6308:
    // 0x1c6308: 0x0  nop
    ctx->pc = 0x1c6308u;
    // NOP
label_1c630c:
    // 0x1c630c: 0x0  nop
    ctx->pc = 0x1c630cu;
    // NOP
label_1c6310:
    // 0x1c6310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c6314:
    // 0x1c6314: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1c6314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1c6318:
    // 0x1c6318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c631c:
    // 0x1c631c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6320:
    // 0x1c6320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c6324:
    // 0x1c6324: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x1c6324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
label_1c6328:
    // 0x1c6328: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x1c6328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
label_1c632c:
    // 0x1c632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6330:
    // 0x1c6330: 0xa08302e1  sb          $v1, 0x2E1($a0)
    ctx->pc = 0x1c6330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 737), (uint8_t)GPR_U32(ctx, 3));
label_1c6334:
    // 0x1c6334: 0xa08002e0  sb          $zero, 0x2E0($a0)
    ctx->pc = 0x1c6334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 0));
label_1c6338:
    // 0x1c6338: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1c633c:
    if (ctx->pc == 0x1C633Cu) {
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6340u;
        goto label_1c6340;
    }
    ctx->pc = 0x1C6338u;
    {
        const bool branch_taken_0x1c6338 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6338) {
            ctx->pc = 0x1C6350u;
            goto label_1c6350;
        }
    }
    ctx->pc = 0x1C6340u;
label_1c6340:
    // 0x1c6340: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c6344:
    // 0x1c6344: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c6344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1c6348:
    // 0x1c6348: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c634c:
    if (ctx->pc == 0x1C634Cu) {
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6350u;
        goto label_1c6350;
    }
    ctx->pc = 0x1C6348u;
    {
        const bool branch_taken_0x1c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6348) {
            ctx->pc = 0x1C6354u;
            goto label_1c6354;
        }
    }
    ctx->pc = 0x1C6350u;
label_1c6350:
    // 0x1c6350: 0xa20702e3  sb          $a3, 0x2E3($s0)
    ctx->pc = 0x1c6350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 7));
label_1c6354:
    // 0x1c6354: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c6358:
    // 0x1c6358: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1c635c:
    // 0x1c635c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c6360:
    if (ctx->pc == 0x1C6360u) {
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6364u;
        goto label_1c6364;
    }
    ctx->pc = 0x1C635Cu;
    {
        const bool branch_taken_0x1c635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c635c) {
            ctx->pc = 0x1C6370u;
            goto label_1c6370;
        }
    }
    ctx->pc = 0x1C6364u;
label_1c6364:
    // 0x1c6364: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c6368:
    // 0x1c6368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1c636c:
    // 0x1c636c: 0xa20202e0  sb          $v0, 0x2E0($s0)
    ctx->pc = 0x1c636cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
label_1c6370:
    // 0x1c6370: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c6374:
    // 0x1c6374: 0xa20302e2  sb          $v1, 0x2E2($s0)
    ctx->pc = 0x1c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 3));
label_1c6378:
    // 0x1c6378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c637c:
    // 0x1c637c: 0xa20002e8  sb          $zero, 0x2E8($s0)
    ctx->pc = 0x1c637cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 0));
label_1c6380:
    // 0x1c6380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6384:
    // 0x1c6384: 0xa20002e9  sb          $zero, 0x2E9($s0)
    ctx->pc = 0x1c6384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 0));
label_1c6388:
    // 0x1c6388: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x1c6388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
label_1c638c:
    // 0x1c638c: 0xa20002eb  sb          $zero, 0x2EB($s0)
    ctx->pc = 0x1c638cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 0));
label_1c6390:
    // 0x1c6390: 0xa20002ec  sb          $zero, 0x2EC($s0)
    ctx->pc = 0x1c6390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 748), (uint8_t)GPR_U32(ctx, 0));
label_1c6394:
    // 0x1c6394: 0xa60202f2  sh          $v0, 0x2F2($s0)
    ctx->pc = 0x1c6394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 2));
label_1c6398:
    // 0x1c6398: 0xa60202f4  sh          $v0, 0x2F4($s0)
    ctx->pc = 0x1c6398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 756), (uint16_t)GPR_U32(ctx, 2));
label_1c639c:
    // 0x1c639c: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1c639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
label_1c63a0:
    // 0x1c63a0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
label_1c63a4:
    // 0x1c63a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c63a8:
    // 0x1c63a8: 0x34eb8080  ori         $t3, $a3, 0x8080
    ctx->pc = 0x1c63a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
label_1c63ac:
    // 0x1c63ac: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
label_1c63b0:
    // 0x1c63b0: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_1c63b4:
    // 0x1c63b4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
label_1c63b8:
    // 0x1c63b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c63bc:
    // 0x1c63bc: 0x34ec0008  ori         $t4, $a3, 0x8
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_1c63c0:
    // 0x1c63c0: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1c63c4:
    // 0x1c63c4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c63c8:
    // 0x1c63c8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x1c63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
label_1c63cc:
    // 0x1c63cc: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1c63d0:
    // 0x1c63d0: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x1c63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
label_1c63d4:
    // 0x1c63d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1c63d8:
    // 0x1c63d8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x1c63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
label_1c63dc:
    // 0x1c63dc: 0xad4c001c  sw          $t4, 0x1C($t2)
    ctx->pc = 0x1c63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
label_1c63e0:
    // 0x1c63e0: 0xdc2d8ed0  ld          $t5, -0x7130($at)
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c63e4:
    // 0x1c63e4: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x1c63e4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
label_1c63e8:
    // 0x1c63e8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c63ec:
    // 0x1c63ec: 0xfd4d0020  sd          $t5, 0x20($t2)
    ctx->pc = 0x1c63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 13));
label_1c63f0:
    // 0x1c63f0: 0xdc2d8ed8  ld          $t5, -0x7128($at)
    ctx->pc = 0x1c63f0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c63f4:
    // 0x1c63f4: 0xfd4d0028  sd          $t5, 0x28($t2)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
label_1c63f8:
    // 0x1c63f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1c63fc:
    if (ctx->pc == 0x1C63FCu) {
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6400u;
        goto label_1c6400;
    }
    ctx->pc = 0x1C63F8u;
    {
        const bool branch_taken_0x1c63f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f8) {
            ctx->pc = 0x1C6408u;
            goto label_1c6408;
        }
    }
    ctx->pc = 0x1C6400u;
label_1c6400:
    // 0x1c6400: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c6404:
    if (ctx->pc == 0x1C6404u) {
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6408u;
        goto label_1c6408;
    }
    ctx->pc = 0x1C6400u;
    {
        const bool branch_taken_0x1c6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6400) {
            ctx->pc = 0x1C640Cu;
            goto label_1c640c;
        }
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1c6408u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_1c640c:
    // 0x1c640c: 0x0  nop
    ctx->pc = 0x1c640cu;
    // NOP
label_1c6410:
    // 0x1c6410: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6410u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6414:
    // 0x1c6414: 0x254d0130  addiu       $t5, $t2, 0x130
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 304));
label_1c6418:
    // 0x1c6418: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c641c:
    // 0x1c641c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
label_1c6420:
    // 0x1c6420: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6424:
    // 0x1c6424: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6428:
    // 0x1c6428: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x1c6428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
label_1c642c:
    // 0x1c642c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1c642cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1c6430:
    // 0x1c6430: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6430u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6434:
    // 0x1c6434: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6438:
    // 0x1c6438: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6438u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c643c:
    // 0x1c643c: 0xacee0030  sw          $t6, 0x30($a3)
    ctx->pc = 0x1c643cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 14));
label_1c6440:
    // 0x1c6440: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x1c6440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
label_1c6444:
    // 0x1c6444: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6444u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c6448:
    // 0x1c6448: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c644c:
    // 0x1c644c: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6450:
    // 0x1c6450: 0xacee0048  sw          $t6, 0x48($a3)
    ctx->pc = 0x1c6450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 14));
label_1c6454:
    // 0x1c6454: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x1c6454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
label_1c6458:
    // 0x1c6458: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6458u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c645c:
    // 0x1c645c: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_1c6460:
    // 0x1c6460: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_1c6464:
    // 0x1c6464: 0xacee0060  sw          $t6, 0x60($a3)
    ctx->pc = 0x1c6464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 14));
label_1c6468:
    // 0x1c6468: 0xace20064  sw          $v0, 0x64($a3)
    ctx->pc = 0x1c6468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 2));
label_1c646c:
    // 0x1c646c: 0xad400130  sw          $zero, 0x130($t2)
    ctx->pc = 0x1c646cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 304), GPR_U32(ctx, 0));
label_1c6470:
    // 0x1c6470: 0xad400134  sw          $zero, 0x134($t2)
    ctx->pc = 0x1c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 0));
label_1c6474:
    // 0x1c6474: 0xad400138  sw          $zero, 0x138($t2)
    ctx->pc = 0x1c6474u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 312), GPR_U32(ctx, 0));
label_1c6478:
    // 0x1c6478: 0xad4c013c  sw          $t4, 0x13C($t2)
    ctx->pc = 0x1c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 316), GPR_U32(ctx, 12));
label_1c647c:
    // 0x1c647c: 0xdc278ed0  ld          $a3, -0x7130($at)
    ctx->pc = 0x1c647cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
label_1c6480:
    // 0x1c6480: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1c6480u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
label_1c6484:
    // 0x1c6484: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c6488:
    // 0x1c6488: 0xfd470140  sd          $a3, 0x140($t2)
    ctx->pc = 0x1c6488u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 320), GPR_U64(ctx, 7));
label_1c648c:
    // 0x1c648c: 0xdc278ed8  ld          $a3, -0x7128($at)
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938328)));
label_1c6490:
    // 0x1c6490: 0xfd470148  sd          $a3, 0x148($t2)
    ctx->pc = 0x1c6490u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 328), GPR_U64(ctx, 7));
label_1c6494:
    // 0x1c6494: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1c6498:
    if (ctx->pc == 0x1C6498u) {
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C649Cu;
        goto label_1c649c;
    }
    ctx->pc = 0x1C6494u;
    {
        const bool branch_taken_0x1c6494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6494) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C649Cu;
label_1c649c:
    // 0x1c649c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c64a0:
    if (ctx->pc == 0x1C64A0u) {
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C64A4u;
        goto label_1c64a4;
    }
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C64ACu;
            goto label_1c64ac;
        }
    }
    ctx->pc = 0x1C64A4u;
label_1c64a4:
    // 0x1c64a4: 0x0  nop
    ctx->pc = 0x1c64a4u;
    // NOP
label_1c64a8:
    // 0x1c64a8: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x1c64a8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
label_1c64ac:
    // 0x1c64ac: 0x0  nop
    ctx->pc = 0x1c64acu;
    // NOP
label_1c64b0:
    // 0x1c64b0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64b4:
    // 0x1c64b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1c64b8:
    // 0x1c64b8: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
label_1c64bc:
    // 0x1c64bc: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x1c64bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c64c0:
    // 0x1c64c0: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64c4:
    // 0x1c64c4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64c8:
    // 0x1c64c8: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x1c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
label_1c64cc:
    // 0x1c64cc: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x1c64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
label_1c64d0:
    // 0x1c64d0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64d4:
    // 0x1c64d4: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64d8:
    // 0x1c64d8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64dc:
    // 0x1c64dc: 0xadaa0030  sw          $t2, 0x30($t5)
    ctx->pc = 0x1c64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 10));
label_1c64e0:
    // 0x1c64e0: 0xada20034  sw          $v0, 0x34($t5)
    ctx->pc = 0x1c64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 2));
label_1c64e4:
    // 0x1c64e4: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64e8:
    // 0x1c64e8: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c64ec:
    // 0x1c64ec: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c64f0:
    // 0x1c64f0: 0xadaa0048  sw          $t2, 0x48($t5)
    ctx->pc = 0x1c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 10));
label_1c64f4:
    // 0x1c64f4: 0xada2004c  sw          $v0, 0x4C($t5)
    ctx->pc = 0x1c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 2));
label_1c64f8:
    // 0x1c64f8: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c64fc:
    // 0x1c64fc: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c6500:
    // 0x1c6500: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1c6504:
    // 0x1c6504: 0xadaa0060  sw          $t2, 0x60($t5)
    ctx->pc = 0x1c6504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 10));
label_1c6508:
    // 0x1c6508: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
label_1c650c:
    if (ctx->pc == 0x1C650Cu) {
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6510u;
        goto label_1c6510;
    }
    ctx->pc = 0x1C6508u;
    {
        const bool branch_taken_0x1c6508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6508) {
            ctx->pc = 0x1C63C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63c0;
        }
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1c6514:
    // 0x1c6514: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c6518:
    // 0x1c6518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c651c:
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
label_1c6520:
    // 0x1c6520: 0x460d0882  mul.s       $f2, $f1, $f13
    ctx->pc = 0x1c6520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
label_1c6524:
    // 0x1c6524: 0x460c08c2  mul.s       $f3, $f1, $f12
    ctx->pc = 0x1c6524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1c6528:
    // 0x1c6528: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1c652c:
    // 0x1c652c: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x1c652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_1c6530:
    // 0x1c6530: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6530u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
label_1c6534:
    // 0x1c6534: 0xe6040264  swc1        $f4, 0x264($s0)
    ctx->pc = 0x1c6534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
label_1c6538:
    // 0x1c6538: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1c653c:
    // 0x1c653c: 0xe600026c  swc1        $f0, 0x26C($s0)
    ctx->pc = 0x1c653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 620), bits); }
label_1c6540:
    // 0x1c6540: 0xe6010270  swc1        $f1, 0x270($s0)
    ctx->pc = 0x1c6540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
label_1c6544:
    // 0x1c6544: 0xe6020274  swc1        $f2, 0x274($s0)
    ctx->pc = 0x1c6544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_1c6548:
    // 0x1c6548: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_1c654c:
    // 0x1c654c: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1c654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
label_1c6550:
    // 0x1c6550: 0xe6030280  swc1        $f3, 0x280($s0)
    ctx->pc = 0x1c6550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
label_1c6554:
    // 0x1c6554: 0xe6040284  swc1        $f4, 0x284($s0)
    ctx->pc = 0x1c6554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
label_1c6558:
    // 0x1c6558: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_1c655c:
    // 0x1c655c: 0xe600028c  swc1        $f0, 0x28C($s0)
    ctx->pc = 0x1c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
label_1c6560:
    // 0x1c6560: 0xe6030290  swc1        $f3, 0x290($s0)
    ctx->pc = 0x1c6560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
label_1c6564:
    // 0x1c6564: 0xe6020294  swc1        $f2, 0x294($s0)
    ctx->pc = 0x1c6564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    ctx->pc = 0x1c6568u;
    return;
}
