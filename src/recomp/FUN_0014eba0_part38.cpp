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


void FUN_0014eba0_part38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x160cb0u: goto label_160cb0;
        case 0x160cb4u: goto label_160cb4;
        case 0x160cb8u: goto label_160cb8;
        case 0x160cbcu: goto label_160cbc;
        case 0x160cc0u: goto label_160cc0;
        case 0x160cc4u: goto label_160cc4;
        case 0x160cc8u: goto label_160cc8;
        case 0x160cccu: goto label_160ccc;
        case 0x160cd0u: goto label_160cd0;
        case 0x160cd4u: goto label_160cd4;
        case 0x160cd8u: goto label_160cd8;
        case 0x160cdcu: goto label_160cdc;
        case 0x160ce0u: goto label_160ce0;
        case 0x160ce4u: goto label_160ce4;
        case 0x160ce8u: goto label_160ce8;
        case 0x160cecu: goto label_160cec;
        case 0x160cf0u: goto label_160cf0;
        case 0x160cf4u: goto label_160cf4;
        case 0x160cf8u: goto label_160cf8;
        case 0x160cfcu: goto label_160cfc;
        case 0x160d00u: goto label_160d00;
        case 0x160d04u: goto label_160d04;
        case 0x160d08u: goto label_160d08;
        case 0x160d0cu: goto label_160d0c;
        case 0x160d10u: goto label_160d10;
        case 0x160d14u: goto label_160d14;
        case 0x160d18u: goto label_160d18;
        case 0x160d1cu: goto label_160d1c;
        case 0x160d20u: goto label_160d20;
        case 0x160d24u: goto label_160d24;
        case 0x160d28u: goto label_160d28;
        case 0x160d2cu: goto label_160d2c;
        case 0x160d30u: goto label_160d30;
        case 0x160d34u: goto label_160d34;
        case 0x160d38u: goto label_160d38;
        case 0x160d3cu: goto label_160d3c;
        case 0x160d40u: goto label_160d40;
        case 0x160d44u: goto label_160d44;
        case 0x160d48u: goto label_160d48;
        case 0x160d4cu: goto label_160d4c;
        case 0x160d50u: goto label_160d50;
        case 0x160d54u: goto label_160d54;
        case 0x160d58u: goto label_160d58;
        case 0x160d5cu: goto label_160d5c;
        case 0x160d60u: goto label_160d60;
        case 0x160d64u: goto label_160d64;
        case 0x160d68u: goto label_160d68;
        case 0x160d6cu: goto label_160d6c;
        case 0x160d70u: goto label_160d70;
        case 0x160d74u: goto label_160d74;
        case 0x160d78u: goto label_160d78;
        case 0x160d7cu: goto label_160d7c;
        case 0x160d80u: goto label_160d80;
        case 0x160d84u: goto label_160d84;
        case 0x160d88u: goto label_160d88;
        case 0x160d8cu: goto label_160d8c;
        case 0x160d90u: goto label_160d90;
        case 0x160d94u: goto label_160d94;
        case 0x160d98u: goto label_160d98;
        case 0x160d9cu: goto label_160d9c;
        case 0x160da0u: goto label_160da0;
        case 0x160da4u: goto label_160da4;
        case 0x160da8u: goto label_160da8;
        case 0x160dacu: goto label_160dac;
        case 0x160db0u: goto label_160db0;
        case 0x160db4u: goto label_160db4;
        case 0x160db8u: goto label_160db8;
        case 0x160dbcu: goto label_160dbc;
        case 0x160dc0u: goto label_160dc0;
        case 0x160dc4u: goto label_160dc4;
        case 0x160dc8u: goto label_160dc8;
        case 0x160dccu: goto label_160dcc;
        case 0x160dd0u: goto label_160dd0;
        case 0x160dd4u: goto label_160dd4;
        case 0x160dd8u: goto label_160dd8;
        case 0x160ddcu: goto label_160ddc;
        case 0x160de0u: goto label_160de0;
        case 0x160de4u: goto label_160de4;
        case 0x160de8u: goto label_160de8;
        case 0x160decu: goto label_160dec;
        case 0x160df0u: goto label_160df0;
        case 0x160df4u: goto label_160df4;
        case 0x160df8u: goto label_160df8;
        case 0x160dfcu: goto label_160dfc;
        case 0x160e00u: goto label_160e00;
        case 0x160e04u: goto label_160e04;
        case 0x160e08u: goto label_160e08;
        case 0x160e0cu: goto label_160e0c;
        case 0x160e10u: goto label_160e10;
        case 0x160e14u: goto label_160e14;
        case 0x160e18u: goto label_160e18;
        case 0x160e1cu: goto label_160e1c;
        case 0x160e20u: goto label_160e20;
        case 0x160e24u: goto label_160e24;
        case 0x160e28u: goto label_160e28;
        case 0x160e2cu: goto label_160e2c;
        case 0x160e30u: goto label_160e30;
        case 0x160e34u: goto label_160e34;
        case 0x160e38u: goto label_160e38;
        case 0x160e3cu: goto label_160e3c;
        case 0x160e40u: goto label_160e40;
        case 0x160e44u: goto label_160e44;
        case 0x160e48u: goto label_160e48;
        case 0x160e4cu: goto label_160e4c;
        case 0x160e50u: goto label_160e50;
        case 0x160e54u: goto label_160e54;
        case 0x160e58u: goto label_160e58;
        case 0x160e5cu: goto label_160e5c;
        case 0x160e60u: goto label_160e60;
        case 0x160e64u: goto label_160e64;
        case 0x160e68u: goto label_160e68;
        case 0x160e6cu: goto label_160e6c;
        case 0x160e70u: goto label_160e70;
        case 0x160e74u: goto label_160e74;
        case 0x160e78u: goto label_160e78;
        case 0x160e7cu: goto label_160e7c;
        case 0x160e80u: goto label_160e80;
        case 0x160e84u: goto label_160e84;
        case 0x160e88u: goto label_160e88;
        case 0x160e8cu: goto label_160e8c;
        case 0x160e90u: goto label_160e90;
        case 0x160e94u: goto label_160e94;
        case 0x160e98u: goto label_160e98;
        case 0x160e9cu: goto label_160e9c;
        case 0x160ea0u: goto label_160ea0;
        case 0x160ea4u: goto label_160ea4;
        case 0x160ea8u: goto label_160ea8;
        case 0x160eacu: goto label_160eac;
        case 0x160eb0u: goto label_160eb0;
        case 0x160eb4u: goto label_160eb4;
        case 0x160eb8u: goto label_160eb8;
        case 0x160ebcu: goto label_160ebc;
        case 0x160ec0u: goto label_160ec0;
        case 0x160ec4u: goto label_160ec4;
        case 0x160ec8u: goto label_160ec8;
        case 0x160eccu: goto label_160ecc;
        case 0x160ed0u: goto label_160ed0;
        case 0x160ed4u: goto label_160ed4;
        case 0x160ed8u: goto label_160ed8;
        case 0x160edcu: goto label_160edc;
        case 0x160ee0u: goto label_160ee0;
        case 0x160ee4u: goto label_160ee4;
        case 0x160ee8u: goto label_160ee8;
        case 0x160eecu: goto label_160eec;
        case 0x160ef0u: goto label_160ef0;
        case 0x160ef4u: goto label_160ef4;
        case 0x160ef8u: goto label_160ef8;
        case 0x160efcu: goto label_160efc;
        case 0x160f00u: goto label_160f00;
        case 0x160f04u: goto label_160f04;
        case 0x160f08u: goto label_160f08;
        case 0x160f0cu: goto label_160f0c;
        case 0x160f10u: goto label_160f10;
        case 0x160f14u: goto label_160f14;
        case 0x160f18u: goto label_160f18;
        case 0x160f1cu: goto label_160f1c;
        case 0x160f20u: goto label_160f20;
        case 0x160f24u: goto label_160f24;
        case 0x160f28u: goto label_160f28;
        case 0x160f2cu: goto label_160f2c;
        case 0x160f30u: goto label_160f30;
        case 0x160f34u: goto label_160f34;
        case 0x160f38u: goto label_160f38;
        case 0x160f3cu: goto label_160f3c;
        case 0x160f40u: goto label_160f40;
        case 0x160f44u: goto label_160f44;
        case 0x160f48u: goto label_160f48;
        case 0x160f4cu: goto label_160f4c;
        case 0x160f50u: goto label_160f50;
        case 0x160f54u: goto label_160f54;
        case 0x160f58u: goto label_160f58;
        case 0x160f5cu: goto label_160f5c;
        case 0x160f60u: goto label_160f60;
        case 0x160f64u: goto label_160f64;
        case 0x160f68u: goto label_160f68;
        case 0x160f6cu: goto label_160f6c;
        case 0x160f70u: goto label_160f70;
        case 0x160f74u: goto label_160f74;
        case 0x160f78u: goto label_160f78;
        case 0x160f7cu: goto label_160f7c;
        case 0x160f80u: goto label_160f80;
        case 0x160f84u: goto label_160f84;
        case 0x160f88u: goto label_160f88;
        case 0x160f8cu: goto label_160f8c;
        case 0x160f90u: goto label_160f90;
        case 0x160f94u: goto label_160f94;
        case 0x160f98u: goto label_160f98;
        case 0x160f9cu: goto label_160f9c;
        case 0x160fa0u: goto label_160fa0;
        case 0x160fa4u: goto label_160fa4;
        case 0x160fa8u: goto label_160fa8;
        case 0x160facu: goto label_160fac;
        case 0x160fb0u: goto label_160fb0;
        case 0x160fb4u: goto label_160fb4;
        case 0x160fb8u: goto label_160fb8;
        case 0x160fbcu: goto label_160fbc;
        case 0x160fc0u: goto label_160fc0;
        case 0x160fc4u: goto label_160fc4;
        case 0x160fc8u: goto label_160fc8;
        case 0x160fccu: goto label_160fcc;
        case 0x160fd0u: goto label_160fd0;
        case 0x160fd4u: goto label_160fd4;
        case 0x160fd8u: goto label_160fd8;
        case 0x160fdcu: goto label_160fdc;
        case 0x160fe0u: goto label_160fe0;
        case 0x160fe4u: goto label_160fe4;
        case 0x160fe8u: goto label_160fe8;
        case 0x160fecu: goto label_160fec;
        case 0x160ff0u: goto label_160ff0;
        case 0x160ff4u: goto label_160ff4;
        case 0x160ff8u: goto label_160ff8;
        case 0x160ffcu: goto label_160ffc;
        case 0x161000u: goto label_161000;
        case 0x161004u: goto label_161004;
        case 0x161008u: goto label_161008;
        case 0x16100cu: goto label_16100c;
        case 0x161010u: goto label_161010;
        case 0x161014u: goto label_161014;
        case 0x161018u: goto label_161018;
        case 0x16101cu: goto label_16101c;
        case 0x161020u: goto label_161020;
        case 0x161024u: goto label_161024;
        case 0x161028u: goto label_161028;
        case 0x16102cu: goto label_16102c;
        case 0x161030u: goto label_161030;
        case 0x161034u: goto label_161034;
        case 0x161038u: goto label_161038;
        case 0x16103cu: goto label_16103c;
        case 0x161040u: goto label_161040;
        case 0x161044u: goto label_161044;
        case 0x161048u: goto label_161048;
        case 0x16104cu: goto label_16104c;
        case 0x161050u: goto label_161050;
        case 0x161054u: goto label_161054;
        case 0x161058u: goto label_161058;
        case 0x16105cu: goto label_16105c;
        case 0x161060u: goto label_161060;
        case 0x161064u: goto label_161064;
        case 0x161068u: goto label_161068;
        case 0x16106cu: goto label_16106c;
        case 0x161070u: goto label_161070;
        case 0x161074u: goto label_161074;
        case 0x161078u: goto label_161078;
        case 0x16107cu: goto label_16107c;
        case 0x161080u: goto label_161080;
        case 0x161084u: goto label_161084;
        case 0x161088u: goto label_161088;
        case 0x16108cu: goto label_16108c;
        case 0x161090u: goto label_161090;
        case 0x161094u: goto label_161094;
        case 0x161098u: goto label_161098;
        case 0x16109cu: goto label_16109c;
        case 0x1610a0u: goto label_1610a0;
        case 0x1610a4u: goto label_1610a4;
        case 0x1610a8u: goto label_1610a8;
        case 0x1610acu: goto label_1610ac;
        case 0x1610b0u: goto label_1610b0;
        case 0x1610b4u: goto label_1610b4;
        case 0x1610b8u: goto label_1610b8;
        case 0x1610bcu: goto label_1610bc;
        case 0x1610c0u: goto label_1610c0;
        case 0x1610c4u: goto label_1610c4;
        case 0x1610c8u: goto label_1610c8;
        case 0x1610ccu: goto label_1610cc;
        case 0x1610d0u: goto label_1610d0;
        case 0x1610d4u: goto label_1610d4;
        case 0x1610d8u: goto label_1610d8;
        case 0x1610dcu: goto label_1610dc;
        case 0x1610e0u: goto label_1610e0;
        case 0x1610e4u: goto label_1610e4;
        case 0x1610e8u: goto label_1610e8;
        case 0x1610ecu: goto label_1610ec;
        case 0x1610f0u: goto label_1610f0;
        case 0x1610f4u: goto label_1610f4;
        case 0x1610f8u: goto label_1610f8;
        case 0x1610fcu: goto label_1610fc;
        case 0x161100u: goto label_161100;
        case 0x161104u: goto label_161104;
        case 0x161108u: goto label_161108;
        case 0x16110cu: goto label_16110c;
        case 0x161110u: goto label_161110;
        case 0x161114u: goto label_161114;
        case 0x161118u: goto label_161118;
        case 0x16111cu: goto label_16111c;
        case 0x161120u: goto label_161120;
        case 0x161124u: goto label_161124;
        case 0x161128u: goto label_161128;
        case 0x16112cu: goto label_16112c;
        case 0x161130u: goto label_161130;
        case 0x161134u: goto label_161134;
        case 0x161138u: goto label_161138;
        case 0x16113cu: goto label_16113c;
        case 0x161140u: goto label_161140;
        case 0x161144u: goto label_161144;
        case 0x161148u: goto label_161148;
        case 0x16114cu: goto label_16114c;
        case 0x161150u: goto label_161150;
        case 0x161154u: goto label_161154;
        case 0x161158u: goto label_161158;
        case 0x16115cu: goto label_16115c;
        case 0x161160u: goto label_161160;
        case 0x161164u: goto label_161164;
        case 0x161168u: goto label_161168;
        case 0x16116cu: goto label_16116c;
        case 0x161170u: goto label_161170;
        case 0x161174u: goto label_161174;
        case 0x161178u: goto label_161178;
        case 0x16117cu: goto label_16117c;
        case 0x161180u: goto label_161180;
        case 0x161184u: goto label_161184;
        case 0x161188u: goto label_161188;
        case 0x16118cu: goto label_16118c;
        case 0x161190u: goto label_161190;
        case 0x161194u: goto label_161194;
        case 0x161198u: goto label_161198;
        case 0x16119cu: goto label_16119c;
        case 0x1611a0u: goto label_1611a0;
        case 0x1611a4u: goto label_1611a4;
        case 0x1611a8u: goto label_1611a8;
        case 0x1611acu: goto label_1611ac;
        case 0x1611b0u: goto label_1611b0;
        case 0x1611b4u: goto label_1611b4;
        case 0x1611b8u: goto label_1611b8;
        case 0x1611bcu: goto label_1611bc;
        case 0x1611c0u: goto label_1611c0;
        case 0x1611c4u: goto label_1611c4;
        case 0x1611c8u: goto label_1611c8;
        case 0x1611ccu: goto label_1611cc;
        case 0x1611d0u: goto label_1611d0;
        case 0x1611d4u: goto label_1611d4;
        case 0x1611d8u: goto label_1611d8;
        case 0x1611dcu: goto label_1611dc;
        case 0x1611e0u: goto label_1611e0;
        case 0x1611e4u: goto label_1611e4;
        case 0x1611e8u: goto label_1611e8;
        case 0x1611ecu: goto label_1611ec;
        case 0x1611f0u: goto label_1611f0;
        case 0x1611f4u: goto label_1611f4;
        case 0x1611f8u: goto label_1611f8;
        case 0x1611fcu: goto label_1611fc;
        case 0x161200u: goto label_161200;
        case 0x161204u: goto label_161204;
        case 0x161208u: goto label_161208;
        case 0x16120cu: goto label_16120c;
        case 0x161210u: goto label_161210;
        case 0x161214u: goto label_161214;
        case 0x161218u: goto label_161218;
        case 0x16121cu: goto label_16121c;
        case 0x161220u: goto label_161220;
        case 0x161224u: goto label_161224;
        case 0x161228u: goto label_161228;
        case 0x16122cu: goto label_16122c;
        case 0x161230u: goto label_161230;
        case 0x161234u: goto label_161234;
        case 0x161238u: goto label_161238;
        case 0x16123cu: goto label_16123c;
        case 0x161240u: goto label_161240;
        case 0x161244u: goto label_161244;
        case 0x161248u: goto label_161248;
        case 0x16124cu: goto label_16124c;
        case 0x161250u: goto label_161250;
        case 0x161254u: goto label_161254;
        case 0x161258u: goto label_161258;
        case 0x16125cu: goto label_16125c;
        case 0x161260u: goto label_161260;
        case 0x161264u: goto label_161264;
        case 0x161268u: goto label_161268;
        case 0x16126cu: goto label_16126c;
        case 0x161270u: goto label_161270;
        case 0x161274u: goto label_161274;
        case 0x161278u: goto label_161278;
        case 0x16127cu: goto label_16127c;
        case 0x161280u: goto label_161280;
        case 0x161284u: goto label_161284;
        case 0x161288u: goto label_161288;
        case 0x16128cu: goto label_16128c;
        case 0x161290u: goto label_161290;
        case 0x161294u: goto label_161294;
        case 0x161298u: goto label_161298;
        case 0x16129cu: goto label_16129c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612a4u: goto label_1612a4;
        case 0x1612a8u: goto label_1612a8;
        case 0x1612acu: goto label_1612ac;
        case 0x1612b0u: goto label_1612b0;
        case 0x1612b4u: goto label_1612b4;
        case 0x1612b8u: goto label_1612b8;
        case 0x1612bcu: goto label_1612bc;
        case 0x1612c0u: goto label_1612c0;
        case 0x1612c4u: goto label_1612c4;
        case 0x1612c8u: goto label_1612c8;
        case 0x1612ccu: goto label_1612cc;
        case 0x1612d0u: goto label_1612d0;
        case 0x1612d4u: goto label_1612d4;
        case 0x1612d8u: goto label_1612d8;
        case 0x1612dcu: goto label_1612dc;
        case 0x1612e0u: goto label_1612e0;
        case 0x1612e4u: goto label_1612e4;
        case 0x1612e8u: goto label_1612e8;
        case 0x1612ecu: goto label_1612ec;
        case 0x1612f0u: goto label_1612f0;
        case 0x1612f4u: goto label_1612f4;
        case 0x1612f8u: goto label_1612f8;
        case 0x1612fcu: goto label_1612fc;
        case 0x161300u: goto label_161300;
        case 0x161304u: goto label_161304;
        case 0x161308u: goto label_161308;
        case 0x16130cu: goto label_16130c;
        case 0x161310u: goto label_161310;
        case 0x161314u: goto label_161314;
        case 0x161318u: goto label_161318;
        case 0x16131cu: goto label_16131c;
        case 0x161320u: goto label_161320;
        case 0x161324u: goto label_161324;
        case 0x161328u: goto label_161328;
        case 0x16132cu: goto label_16132c;
        case 0x161330u: goto label_161330;
        case 0x161334u: goto label_161334;
        case 0x161338u: goto label_161338;
        case 0x16133cu: goto label_16133c;
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        case 0x161368u: goto label_161368;
        case 0x16136cu: goto label_16136c;
        case 0x161370u: goto label_161370;
        case 0x161374u: goto label_161374;
        case 0x161378u: goto label_161378;
        case 0x16137cu: goto label_16137c;
        case 0x161380u: goto label_161380;
        case 0x161384u: goto label_161384;
        case 0x161388u: goto label_161388;
        case 0x16138cu: goto label_16138c;
        case 0x161390u: goto label_161390;
        case 0x161394u: goto label_161394;
        case 0x161398u: goto label_161398;
        case 0x16139cu: goto label_16139c;
        case 0x1613a0u: goto label_1613a0;
        case 0x1613a4u: goto label_1613a4;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613acu: goto label_1613ac;
        case 0x1613b0u: goto label_1613b0;
        case 0x1613b4u: goto label_1613b4;
        case 0x1613b8u: goto label_1613b8;
        case 0x1613bcu: goto label_1613bc;
        case 0x1613c0u: goto label_1613c0;
        case 0x1613c4u: goto label_1613c4;
        case 0x1613c8u: goto label_1613c8;
        case 0x1613ccu: goto label_1613cc;
        case 0x1613d0u: goto label_1613d0;
        case 0x1613d4u: goto label_1613d4;
        case 0x1613d8u: goto label_1613d8;
        case 0x1613dcu: goto label_1613dc;
        case 0x1613e0u: goto label_1613e0;
        case 0x1613e4u: goto label_1613e4;
        case 0x1613e8u: goto label_1613e8;
        case 0x1613ecu: goto label_1613ec;
        case 0x1613f0u: goto label_1613f0;
        case 0x1613f4u: goto label_1613f4;
        case 0x1613f8u: goto label_1613f8;
        case 0x1613fcu: goto label_1613fc;
        case 0x161400u: goto label_161400;
        case 0x161404u: goto label_161404;
        case 0x161408u: goto label_161408;
        case 0x16140cu: goto label_16140c;
        case 0x161410u: goto label_161410;
        case 0x161414u: goto label_161414;
        case 0x161418u: goto label_161418;
        case 0x16141cu: goto label_16141c;
        case 0x161420u: goto label_161420;
        case 0x161424u: goto label_161424;
        case 0x161428u: goto label_161428;
        case 0x16142cu: goto label_16142c;
        case 0x161430u: goto label_161430;
        case 0x161434u: goto label_161434;
        case 0x161438u: goto label_161438;
        case 0x16143cu: goto label_16143c;
        case 0x161440u: goto label_161440;
        case 0x161444u: goto label_161444;
        case 0x161448u: goto label_161448;
        case 0x16144cu: goto label_16144c;
        case 0x161450u: goto label_161450;
        case 0x161454u: goto label_161454;
        case 0x161458u: goto label_161458;
        case 0x16145cu: goto label_16145c;
        case 0x161460u: goto label_161460;
        case 0x161464u: goto label_161464;
        case 0x161468u: goto label_161468;
        case 0x16146cu: goto label_16146c;
        case 0x161470u: goto label_161470;
        case 0x161474u: goto label_161474;
        case 0x161478u: goto label_161478;
        case 0x16147cu: goto label_16147c;
        default: return;
    }

label_160cb0:
    // 0x160cb0: 0xc93023  subu        $a2, $a2, $t1
    ctx->pc = 0x160cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_160cb4:
    // 0x160cb4: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x160cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_160cb8:
    // 0x160cb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x160cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_160cbc:
    // 0x160cbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160cc0:
    // 0x160cc0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_160cc4:
    // 0x160cc4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x160cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160cc8:
    // 0x160cc8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x160cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_160ccc:
    // 0x160ccc: 0x9267000f  lbu         $a3, 0xF($s3)
    ctx->pc = 0x160cccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160cd0:
    // 0x160cd0: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_160cd4:
    // 0x160cd4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_160cd8:
    // 0x160cd8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_160cdc:
    // 0x160cdc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_160ce0:
    // 0x160ce0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x160ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160ce4:
    // 0x160ce4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x160ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_160ce8:
    // 0x160ce8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x160ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_160cec:
    // 0x160cec: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x160cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_160cf0:
    // 0x160cf0: 0x9267000f  lbu         $a3, 0xF($s3)
    ctx->pc = 0x160cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160cf4:
    // 0x160cf4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x160cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_160cf8:
    // 0x160cf8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_160cfc:
    // 0x160cfc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x160cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_160d00:
    // 0x160d00: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x160d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_160d04:
    // 0x160d04: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x160d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160d08:
    // 0x160d08: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x160d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_160d0c:
    // 0x160d0c: 0x9266000f  lbu         $a2, 0xF($s3)
    ctx->pc = 0x160d0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160d10:
    // 0x160d10: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x160d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_160d14:
    // 0x160d14: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_160d18:
    // 0x160d18: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_160d1c:
    // 0x160d1c: 0x1062821  addu        $a1, $t0, $a2
    ctx->pc = 0x160d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_160d20:
    // 0x160d20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_160d24:
    // 0x160d24: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x160d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160d28:
    // 0x160d28: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x160d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160d2c:
    // 0x160d2c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x160d2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_160d30:
    // 0x160d30: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x160d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_160d34:
    // 0x160d34: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x160d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_160d38:
    // 0x160d38: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x160d38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_160d3c:
    // 0x160d3c: 0x0  nop
    ctx->pc = 0x160d3cu;
    // NOP
label_160d40:
    // 0x160d40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_160d44:
    // 0x160d44: 0x1000005b  b           . + 4 + (0x5B << 2)
label_160d48:
    if (ctx->pc == 0x160D48u) {
        ctx->pc = 0x160D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D44u;
        // 0x160d48: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160D4Cu;
        goto label_160d4c;
    }
    ctx->pc = 0x160D44u;
    {
        const bool branch_taken_0x160d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D44u;
        // 0x160d48: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d44) {
            ctx->pc = 0x160EB4u;
            goto label_160eb4;
        }
    }
    ctx->pc = 0x160D4Cu;
label_160d4c:
    // 0x160d4c: 0xc066e26  jal         func_19B898
label_160d50:
    if (ctx->pc == 0x160D50u) {
        ctx->pc = 0x160D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D4Cu;
        // 0x160d50: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160D54u;
        goto label_160d54;
    }
    ctx->pc = 0x160D4Cu;
    SET_GPR_U32(ctx, 31, 0x160D54u);
    ctx->pc = 0x160D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D4Cu;
    // 0x160d50: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x160D54u;
label_160d54:
    // 0x160d54: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_160d58:
    // 0x160d58: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x160d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_160d5c:
    // 0x160d5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x160d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160d60:
    // 0x160d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_160d64:
    // 0x160d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160d68:
    // 0x160d68: 0x0  nop
    ctx->pc = 0x160d68u;
    // NOP
label_160d6c:
    // 0x160d6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_160d70:
    // 0x160d70: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_160d74:
    // 0x160d74: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x160d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_160d78:
    // 0x160d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160d7c:
    // 0x160d7c: 0x0  nop
    ctx->pc = 0x160d7cu;
    // NOP
label_160d80:
    // 0x160d80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x160d80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_160d84:
    // 0x160d84: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x160d84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_160d88:
    // 0x160d88: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x160d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_160d8c:
    // 0x160d8c: 0x4a000138  vcallms     0x20
    ctx->pc = 0x160d8cu;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_160d90:
    // 0x160d90: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x160d90u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_160d94:
    // 0x160d94: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x160d94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_160d98:
    // 0x160d98: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x160d98u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_160d9c:
    // 0x160d9c: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x160d9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_160da0:
    // 0x160da0: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x160da0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160da4:
    // 0x160da4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x160da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_160da8:
    // 0x160da8: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x160da8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_160dac:
    // 0x160dac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_160db0:
    // 0x160db0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x160db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_160db4:
    // 0x160db4: 0x24c656a4  addiu       $a2, $a2, 0x56A4
    ctx->pc = 0x160db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22180));
label_160db8:
    // 0x160db8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x160db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_160dbc:
    // 0x160dbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_160dc0:
    // 0x160dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160dc4:
    // 0x160dc4: 0x25085690  addiu       $t0, $t0, 0x5690
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22160));
label_160dc8:
    // 0x160dc8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x160dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_160dcc:
    // 0x160dcc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160dd0:
    // 0x160dd0: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_160dd4:
    // 0x160dd4: 0x246356a8  addiu       $v1, $v1, 0x56A8
    ctx->pc = 0x160dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22184));
label_160dd8:
    // 0x160dd8: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_160ddc:
    // 0x160ddc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_160de0:
    // 0x160de0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x160de0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_160de4:
    // 0x160de4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_160de8:
    // 0x160de8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x160de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_160dec:
    // 0x160dec: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x160decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_160df0:
    // 0x160df0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x160df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160df4:
    // 0x160df4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x160df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160df8:
    // 0x160df8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x160df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_160dfc:
    // 0x160dfc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x160dfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_160e00:
    // 0x160e00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x160e00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_160e04:
    // 0x160e04: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x160e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_160e08:
    // 0x160e08: 0x9267000f  lbu         $a3, 0xF($s3)
    ctx->pc = 0x160e08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160e0c:
    // 0x160e0c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x160e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_160e10:
    // 0x160e10: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_160e14:
    // 0x160e14: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_160e18:
    // 0x160e18: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_160e1c:
    // 0x160e1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_160e20:
    // 0x160e20: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x160e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160e24:
    // 0x160e24: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x160e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160e28:
    // 0x160e28: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x160e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_160e2c:
    // 0x160e2c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x160e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_160e30:
    // 0x160e30: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x160e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_160e34:
    // 0x160e34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x160e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_160e38:
    // 0x160e38: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x160e38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_160e3c:
    // 0x160e3c: 0x0  nop
    ctx->pc = 0x160e3cu;
    // NOP
label_160e40:
    // 0x160e40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_160e44:
    // 0x160e44: 0xc066e34  jal         func_19B8D0
label_160e48:
    if (ctx->pc == 0x160E48u) {
        ctx->pc = 0x160E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E44u;
        // 0x160e48: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E4Cu;
        goto label_160e4c;
    }
    ctx->pc = 0x160E44u;
    SET_GPR_U32(ctx, 31, 0x160E4Cu);
    ctx->pc = 0x160E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E44u;
    // 0x160e48: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160E4Cu;
label_160e4c:
    // 0x160e4c: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160e50:
    // 0x160e50: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_160e54:
    // 0x160e54: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160e58:
    // 0x160e58: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_160e5c:
    // 0x160e5c: 0xa6a30020  sh          $v1, 0x20($s5)
    ctx->pc = 0x160e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 32), (uint16_t)GPR_U32(ctx, 3));
label_160e60:
    // 0x160e60: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x160e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160e64:
    // 0x160e64: 0xa6a30022  sh          $v1, 0x22($s5)
    ctx->pc = 0x160e64u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 3));
label_160e68:
    // 0x160e68: 0xc066e34  jal         func_19B8D0
label_160e6c:
    if (ctx->pc == 0x160E6Cu) {
        ctx->pc = 0x160E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E68u;
        // 0x160e6c: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E70u;
        goto label_160e70;
    }
    ctx->pc = 0x160E68u;
    SET_GPR_U32(ctx, 31, 0x160E70u);
    ctx->pc = 0x160E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E68u;
    // 0x160e6c: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160E70u;
label_160e70:
    // 0x160e70: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160e74:
    // 0x160e74: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x160e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_160e78:
    // 0x160e78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160e7c:
    // 0x160e7c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_160e80:
    // 0x160e80: 0xa6a30038  sh          $v1, 0x38($s5)
    ctx->pc = 0x160e80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 56), (uint16_t)GPR_U32(ctx, 3));
label_160e84:
    // 0x160e84: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x160e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160e88:
    // 0x160e88: 0xa6a3003a  sh          $v1, 0x3A($s5)
    ctx->pc = 0x160e88u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 3));
label_160e8c:
    // 0x160e8c: 0xc066e34  jal         func_19B8D0
label_160e90:
    if (ctx->pc == 0x160E90u) {
        ctx->pc = 0x160E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E8Cu;
        // 0x160e90: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E94u;
        goto label_160e94;
    }
    ctx->pc = 0x160E8Cu;
    SET_GPR_U32(ctx, 31, 0x160E94u);
    ctx->pc = 0x160E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E8Cu;
    // 0x160e90: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160E94u;
label_160e94:
    // 0x160e94: 0x87a40080  lh          $a0, 0x80($sp)
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160e98:
    // 0x160e98: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x160e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_160e9c:
    // 0x160e9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x160e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_160ea0:
    // 0x160ea0: 0xa6a40050  sh          $a0, 0x50($s5)
    ctx->pc = 0x160ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 4));
label_160ea4:
    // 0x160ea4: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x160ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160ea8:
    // 0x160ea8: 0xa6a40052  sh          $a0, 0x52($s5)
    ctx->pc = 0x160ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 4));
label_160eac:
    // 0x160eac: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x160eacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
label_160eb0:
    // 0x160eb0: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_160eb4:
    // 0x160eb4: 0x0  nop
    ctx->pc = 0x160eb4u;
    // NOP
label_160eb8:
    // 0x160eb8: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x160eb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_160ebc:
    // 0x160ebc: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_160ec0:
    if (ctx->pc == 0x160EC0u) {
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EC4u;
        goto label_160ec4;
    }
    ctx->pc = 0x160EBCu;
    {
        const bool branch_taken_0x160ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ebc) {
            ctx->pc = 0x160D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160d4c;
        }
    }
    ctx->pc = 0x160EC4u;
label_160ec4:
    // 0x160ec4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_160ec8:
    // 0x160ec8: 0x3c03c100  lui         $v1, 0xC100
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49408 << 16));
label_160ecc:
    // 0x160ecc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x160eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_160ed0:
    // 0x160ed0: 0x26950020  addiu       $s5, $s4, 0x20
    ctx->pc = 0x160ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_160ed4:
    // 0x160ed4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x160ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_160ed8:
    // 0x160ed8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160edc:
    // 0x160edc: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x160edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_160ee0:
    // 0x160ee0: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x160ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_160ee4:
    // 0x160ee4: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x160ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_160ee8:
    // 0x160ee8: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x160ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_160eec:
    // 0x160eec: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x160eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_160ef0:
    // 0x160ef0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_160ef4:
    if (ctx->pc == 0x160EF4u) {
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EF0u;
        // 0x160ef4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EF8u;
        goto label_160ef8;
    }
    ctx->pc = 0x160EF0u;
    {
        const bool branch_taken_0x160ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EF0u;
        // 0x160ef4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef0) {
            ctx->pc = 0x161064u;
            goto label_161064;
        }
    }
    ctx->pc = 0x160EF8u;
label_160ef8:
    // 0x160ef8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_160efc:
    // 0x160efc: 0xc066e26  jal         func_19B898
label_160f00:
    if (ctx->pc == 0x160F00u) {
        ctx->pc = 0x160F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EFCu;
        // 0x160f00: 0xfeb00000  sd          $s0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F04u;
        goto label_160f04;
    }
    ctx->pc = 0x160EFCu;
    SET_GPR_U32(ctx, 31, 0x160F04u);
    ctx->pc = 0x160F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160EFCu;
    // 0x160f00: 0xfeb00000  sd          $s0, 0x0($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x160F04u;
label_160f04:
    // 0x160f04: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x160f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_160f08:
    // 0x160f08: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_160f0c:
    // 0x160f0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x160f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160f10:
    // 0x160f10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_160f14:
    // 0x160f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160f18:
    // 0x160f18: 0x0  nop
    ctx->pc = 0x160f18u;
    // NOP
label_160f1c:
    // 0x160f1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_160f20:
    // 0x160f20: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x160f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_160f24:
    // 0x160f24: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x160f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_160f28:
    // 0x160f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160f2c:
    // 0x160f2c: 0x0  nop
    ctx->pc = 0x160f2cu;
    // NOP
label_160f30:
    // 0x160f30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x160f30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_160f34:
    // 0x160f34: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x160f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_160f38:
    // 0x160f38: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x160f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_160f3c:
    // 0x160f3c: 0x4a000138  vcallms     0x20
    ctx->pc = 0x160f3cu;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_160f40:
    // 0x160f40: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x160f40u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_160f44:
    // 0x160f44: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x160f44u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_160f48:
    // 0x160f48: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x160f48u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_160f4c:
    // 0x160f4c: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x160f4cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_160f50:
    // 0x160f50: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_160f54:
    // 0x160f54: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_160f58:
    // 0x160f58: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x160f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_160f5c:
    // 0x160f5c: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x160f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_160f60:
    // 0x160f60: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x160f60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
label_160f64:
    // 0x160f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_160f68:
    // 0x160f68: 0x46061042  mul.s       $f1, $f2, $f6
    ctx->pc = 0x160f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_160f6c:
    // 0x160f6c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x160f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_160f70:
    // 0x160f70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160f74:
    // 0x160f74: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x160f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_160f78:
    // 0x160f78: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x160f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_160f7c:
    // 0x160f7c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x160f7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_160f80:
    // 0x160f80: 0x0  nop
    ctx->pc = 0x160f80u;
    // NOP
label_160f84:
    // 0x160f84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x160f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_160f88:
    // 0x160f88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x160f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_160f8c:
    // 0x160f8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x160f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_160f90:
    // 0x160f90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160f94:
    // 0x160f94: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x160f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_160f98:
    // 0x160f98: 0xc066d7a  jal         func_19B5E8
label_160f9c:
    if (ctx->pc == 0x160F9Cu) {
        ctx->pc = 0x160F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F98u;
        // 0x160f9c: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FA0u;
        goto label_160fa0;
    }
    ctx->pc = 0x160F98u;
    SET_GPR_U32(ctx, 31, 0x160FA0u);
    ctx->pc = 0x160F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F98u;
    // 0x160f9c: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x160FA0u;
label_160fa0:
    // 0x160fa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160fa4:
    // 0x160fa4: 0xc066e34  jal         func_19B8D0
label_160fa8:
    if (ctx->pc == 0x160FA8u) {
        ctx->pc = 0x160FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FA4u;
        // 0x160fa8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FACu;
        goto label_160fac;
    }
    ctx->pc = 0x160FA4u;
    SET_GPR_U32(ctx, 31, 0x160FACu);
    ctx->pc = 0x160FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FA4u;
    // 0x160fa8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160FACu;
label_160fac:
    // 0x160fac: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160fb0:
    // 0x160fb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_160fb4:
    // 0x160fb4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x160fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160fb8:
    // 0x160fb8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x160fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_160fbc:
    // 0x160fbc: 0xa6a20018  sh          $v0, 0x18($s5)
    ctx->pc = 0x160fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
label_160fc0:
    // 0x160fc0: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160fc4:
    // 0x160fc4: 0xc066d7a  jal         func_19B5E8
label_160fc8:
    if (ctx->pc == 0x160FC8u) {
        ctx->pc = 0x160FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FC4u;
        // 0x160fc8: 0xa6a2001a  sh          $v0, 0x1A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FCCu;
        goto label_160fcc;
    }
    ctx->pc = 0x160FC4u;
    SET_GPR_U32(ctx, 31, 0x160FCCu);
    ctx->pc = 0x160FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FC4u;
    // 0x160fc8: 0xa6a2001a  sh          $v0, 0x1A($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x160FCCu;
label_160fcc:
    // 0x160fcc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160fd0:
    // 0x160fd0: 0xc066e34  jal         func_19B8D0
label_160fd4:
    if (ctx->pc == 0x160FD4u) {
        ctx->pc = 0x160FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FD0u;
        // 0x160fd4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FD8u;
        goto label_160fd8;
    }
    ctx->pc = 0x160FD0u;
    SET_GPR_U32(ctx, 31, 0x160FD8u);
    ctx->pc = 0x160FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FD0u;
    // 0x160fd4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160FD8u;
label_160fd8:
    // 0x160fd8: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x160fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160fdc:
    // 0x160fdc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x160fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_160fe0:
    // 0x160fe0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x160fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160fe4:
    // 0x160fe4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_160fe8:
    // 0x160fe8: 0xa6a20030  sh          $v0, 0x30($s5)
    ctx->pc = 0x160fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 48), (uint16_t)GPR_U32(ctx, 2));
label_160fec:
    // 0x160fec: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x160fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160ff0:
    // 0x160ff0: 0xc066d7a  jal         func_19B5E8
label_160ff4:
    if (ctx->pc == 0x160FF4u) {
        ctx->pc = 0x160FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FF0u;
        // 0x160ff4: 0xa6a20032  sh          $v0, 0x32($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FF8u;
        goto label_160ff8;
    }
    ctx->pc = 0x160FF0u;
    SET_GPR_U32(ctx, 31, 0x160FF8u);
    ctx->pc = 0x160FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FF0u;
    // 0x160ff4: 0xa6a20032  sh          $v0, 0x32($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x160FF8u;
label_160ff8:
    // 0x160ff8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160ffc:
    // 0x160ffc: 0xc066e34  jal         func_19B8D0
label_161000:
    if (ctx->pc == 0x161000u) {
        ctx->pc = 0x161000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FFCu;
        // 0x161000: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161004u;
        goto label_161004;
    }
    ctx->pc = 0x160FFCu;
    SET_GPR_U32(ctx, 31, 0x161004u);
    ctx->pc = 0x161000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FFCu;
    // 0x161000: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161004u;
label_161004:
    // 0x161004: 0x87a40080  lh          $a0, 0x80($sp)
    ctx->pc = 0x161004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_161008:
    // 0x161008: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16100c:
    // 0x16100c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x16100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161010:
    // 0x161010: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161010u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_161014:
    // 0x161014: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161018:
    // 0x161018: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16101c:
    // 0x16101c: 0xa6a40048  sh          $a0, 0x48($s5)
    ctx->pc = 0x16101cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 4));
label_161020:
    // 0x161020: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x161020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161024:
    // 0x161024: 0xa6a4004a  sh          $a0, 0x4A($s5)
    ctx->pc = 0x161024u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 4));
label_161028:
    // 0x161028: 0x9025761c  lbu         $a1, 0x761C($at)
    ctx->pc = 0x161028u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_16102c:
    // 0x16102c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16102cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_161030:
    // 0x161030: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_161034:
    // 0x161034: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_161038:
    // 0x161038: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x161038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_16103c:
    // 0x16103c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x16103cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_161040:
    // 0x161040: 0x0  nop
    ctx->pc = 0x161040u;
    // NOP
label_161044:
    // 0x161044: 0x1810  mfhi        $v1
    ctx->pc = 0x161044u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161048:
    // 0x161048: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16104c:
    // 0x16104c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_161050:
    // 0x161050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_161054:
    // 0x161054: 0xa2a30043  sb          $v1, 0x43($s5)
    ctx->pc = 0x161054u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 67), (uint8_t)GPR_U32(ctx, 3));
label_161058:
    // 0x161058: 0xa2a3002b  sb          $v1, 0x2B($s5)
    ctx->pc = 0x161058u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 43), (uint8_t)GPR_U32(ctx, 3));
label_16105c:
    // 0x16105c: 0xa2a30013  sb          $v1, 0x13($s5)
    ctx->pc = 0x16105cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 3));
label_161060:
    // 0x161060: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_161064:
    // 0x161064: 0x0  nop
    ctx->pc = 0x161064u;
    // NOP
label_161068:
    // 0x161068: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x161068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_16106c:
    // 0x16106c: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
label_161070:
    if (ctx->pc == 0x161070u) {
        ctx->pc = 0x161070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16106Cu;
        // 0x161070: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161074u;
        goto label_161074;
    }
    ctx->pc = 0x16106Cu;
    {
        const bool branch_taken_0x16106c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16106Cu;
        // 0x161070: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16106c) {
            ctx->pc = 0x160EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160ef8;
        }
    }
    ctx->pc = 0x161074u;
label_161074:
    // 0x161074: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x161074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_161078:
    // 0x161078: 0x44092000  mfc1        $t1, $f4
    ctx->pc = 0x161078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_16107c:
    // 0x16107c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x16107cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_161080:
    // 0x161080: 0x4a000138  vcallms     0x20
    ctx->pc = 0x161080u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_161084:
    // 0x161084: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x161084u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_161088:
    // 0x161088: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x161088u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_16108c:
    // 0x16108c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x16108cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_161090:
    // 0x161090: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x161090u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_161094:
    // 0x161094: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x161094u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_161098:
    // 0x161098: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x161098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
label_16109c:
    // 0x16109c: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x16109cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_1610a0:
    // 0x1610a0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1610a4:
    // 0x1610a4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1610a8:
    // 0x1610a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1610ac:
    // 0x1610ac: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1610acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1610b0:
    // 0x1610b0: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1610b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1610b4:
    // 0x1610b4: 0x248456a4  addiu       $a0, $a0, 0x56A4
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22180));
label_1610b8:
    // 0x1610b8: 0x24635690  addiu       $v1, $v1, 0x5690
    ctx->pc = 0x1610b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22160));
label_1610bc:
    // 0x1610bc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1610bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1610c0:
    // 0x1610c0: 0x250856a8  addiu       $t0, $t0, 0x56A8
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22184));
label_1610c4:
    // 0x1610c4: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1610c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1610c8:
    // 0x1610c8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1610c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1610cc:
    // 0x1610cc: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1610d0:
    // 0x1610d0: 0x26950c30  addiu       $s5, $s4, 0xC30
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 3120));
label_1610d4:
    // 0x1610d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1610d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1610d8:
    // 0x1610d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1610d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1610dc:
    // 0x1610dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1610dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1610e0:
    // 0x1610e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1610e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1610e4:
    // 0x1610e4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1610e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1610e8:
    // 0x1610e8: 0x9266000f  lbu         $a2, 0xF($s3)
    ctx->pc = 0x1610e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_1610ec:
    // 0x1610ec: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1610ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1610f0:
    // 0x1610f0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1610f4:
    // 0x1610f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1610f8:
    // 0x1610f8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1610fc:
    // 0x1610fc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1610fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161100:
    // 0x161100: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_161104:
    // 0x161104: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x161104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161108:
    // 0x161108: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x161108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_16110c:
    // 0x16110c: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x16110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
label_161110:
    // 0x161110: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x161110u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_161114:
    // 0x161114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_161118:
    // 0x161118: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x161118u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_16111c:
    // 0x16111c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x16111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_161120:
    // 0x161120: 0x9266000f  lbu         $a2, 0xF($s3)
    ctx->pc = 0x161120u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_161124:
    // 0x161124: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_161128:
    // 0x161128: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16112c:
    // 0x16112c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16112cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_161130:
    // 0x161130: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x161130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_161134:
    // 0x161134: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x161134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161138:
    // 0x161138: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x161138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_16113c:
    // 0x16113c: 0x9265000f  lbu         $a1, 0xF($s3)
    ctx->pc = 0x16113cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_161140:
    // 0x161140: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_161144:
    // 0x161144: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_161148:
    // 0x161148: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16114c:
    // 0x16114c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_161150:
    // 0x161150: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x161150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_161154:
    // 0x161154: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161158:
    // 0x161158: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x161158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16115c:
    // 0x16115c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16115cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_161160:
    // 0x161160: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x161160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
label_161164:
    // 0x161164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_161168:
    // 0x161168: 0xe7a400d8  swc1        $f4, 0xD8($sp)
    ctx->pc = 0x161168u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_16116c:
    // 0x16116c: 0x10000080  b           . + 4 + (0x80 << 2)
label_161170:
    if (ctx->pc == 0x161170u) {
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161174u;
        goto label_161174;
    }
    ctx->pc = 0x16116Cu;
    {
        const bool branch_taken_0x16116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16116Cu;
        // 0x161170: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16116c) {
            ctx->pc = 0x161370u;
            goto label_161370;
        }
    }
    ctx->pc = 0x161174u;
label_161174:
    // 0x161174: 0xc066e26  jal         func_19B898
label_161178:
    if (ctx->pc == 0x161178u) {
        ctx->pc = 0x161178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161174u;
        // 0x161178: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16117Cu;
        goto label_16117c;
    }
    ctx->pc = 0x161174u;
    SET_GPR_U32(ctx, 31, 0x16117Cu);
    ctx->pc = 0x161178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161174u;
    // 0x161178: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x16117Cu;
label_16117c:
    // 0x16117c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_161180:
    // 0x161180: 0xc066e26  jal         func_19B898
label_161184:
    if (ctx->pc == 0x161184u) {
        ctx->pc = 0x161184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161180u;
        // 0x161184: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161188u;
        goto label_161188;
    }
    ctx->pc = 0x161180u;
    SET_GPR_U32(ctx, 31, 0x161188u);
    ctx->pc = 0x161184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161180u;
    // 0x161184: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x161188u;
label_161188:
    // 0x161188: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16118c:
    // 0x16118c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16118cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_161190:
    // 0x161190: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161194:
    // 0x161194: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_161198:
    // 0x161198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16119c:
    // 0x16119c: 0x0  nop
    ctx->pc = 0x16119cu;
    // NOP
label_1611a0:
    // 0x1611a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1611a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1611a4:
    // 0x1611a4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1611a8:
    // 0x1611a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1611a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1611ac:
    // 0x1611ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1611acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1611b0:
    // 0x1611b0: 0x0  nop
    ctx->pc = 0x1611b0u;
    // NOP
label_1611b4:
    // 0x1611b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1611b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1611b8:
    // 0x1611b8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1611b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1611bc:
    // 0x1611bc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1611bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1611c0:
    // 0x1611c0: 0x4a000138  vcallms     0x20
    ctx->pc = 0x1611c0u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_1611c4:
    // 0x1611c4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1611c4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1611c8:
    // 0x1611c8: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x1611c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1611cc:
    // 0x1611cc: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1611ccu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_1611d0:
    // 0x1611d0: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x1611d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1611d4:
    // 0x1611d4: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x1611d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_1611d8:
    // 0x1611d8: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1611dc:
    // 0x1611dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1611dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1611e0:
    // 0x1611e0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1611e4:
    // 0x1611e4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1611e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1611e8:
    // 0x1611e8: 0x24e75690  addiu       $a3, $a3, 0x5690
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22160));
label_1611ec:
    // 0x1611ec: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1611ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1611f0:
    // 0x1611f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1611f4:
    // 0x1611f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1611f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1611f8:
    // 0x1611f8: 0x24c656a4  addiu       $a2, $a2, 0x56A4
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22180));
label_1611fc:
    // 0x1611fc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_161200:
    // 0x161200: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_161204:
    // 0x161204: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_161208:
    // 0x161208: 0x246356a8  addiu       $v1, $v1, 0x56A8
    ctx->pc = 0x161208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22184));
label_16120c:
    // 0x16120c: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x16120cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_161210:
    // 0x161210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_161214:
    // 0x161214: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_161218:
    // 0x161218: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16121c:
    // 0x16121c: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x16121cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_161220:
    // 0x161220: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x161220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161224:
    // 0x161224: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x161224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_161228:
    // 0x161228: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x161228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16122c:
    // 0x16122c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x16122cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_161230:
    // 0x161230: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x161230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_161234:
    // 0x161234: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_161238:
    // 0x161238: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x161238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16123c:
    // 0x16123c: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x16123cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_161240:
    // 0x161240: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_161244:
    // 0x161244: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x161244u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_161248:
    // 0x161248: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_16124c:
    // 0x16124c: 0xe84821  addu        $t1, $a3, $t0
    ctx->pc = 0x16124cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_161250:
    // 0x161250: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x161250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161254:
    // 0x161254: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x161254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_161258:
    // 0x161258: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x161258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16125c:
    // 0x16125c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x16125cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_161260:
    // 0x161260: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x161260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_161264:
    // 0x161264: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x161264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_161268:
    // 0x161268: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x161268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_16126c:
    // 0x16126c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x16126cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_161270:
    // 0x161270: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_161274:
    // 0x161274: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x161274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_161278:
    // 0x161278: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x161278u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_16127c:
    // 0x16127c: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x16127cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_161280:
    // 0x161280: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x161280u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_161284:
    // 0x161284: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x161284u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_161288:
    // 0x161288: 0xc94021  addu        $t0, $a2, $t1
    ctx->pc = 0x161288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_16128c:
    // 0x16128c: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x16128cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_161290:
    // 0x161290: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x161290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161294:
    // 0x161294: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x161294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161298:
    // 0x161298: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x161298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_16129c:
    // 0x16129c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16129cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1612a0:
    // 0x1612a0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1612a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1612a4:
    // 0x1612a4: 0x9268000f  lbu         $t0, 0xF($s3)
    ctx->pc = 0x1612a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_1612a8:
    // 0x1612a8: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1612ac:
    // 0x1612ac: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1612b0:
    // 0x1612b0: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1612b4:
    // 0x1612b4: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1612b8:
    // 0x1612b8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1612bc:
    // 0x1612bc: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1612bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1612c0:
    // 0x1612c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1612c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1612c4:
    // 0x1612c4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1612c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_1612c8:
    // 0x1612c8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1612c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_1612cc:
    // 0x1612cc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x1612ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_1612d0:
    // 0x1612d0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1612d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_1612d4:
    // 0x1612d4: 0x0  nop
    ctx->pc = 0x1612d4u;
    // NOP
label_1612d8:
    // 0x1612d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1612d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1612dc:
    // 0x1612dc: 0xc066e34  jal         func_19B8D0
label_1612e0:
    if (ctx->pc == 0x1612E0u) {
        ctx->pc = 0x1612E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612DCu;
        // 0x1612e0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1612E4u;
        goto label_1612e4;
    }
    ctx->pc = 0x1612DCu;
    SET_GPR_U32(ctx, 31, 0x1612E4u);
    ctx->pc = 0x1612E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612DCu;
    // 0x1612e0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1612E4u;
label_1612e4:
    // 0x1612e4: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_1612e8:
    // 0x1612e8: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x1612e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1612ec:
    // 0x1612ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1612f0:
    // 0x1612f0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1612f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1612f4:
    // 0x1612f4: 0xa6a30020  sh          $v1, 0x20($s5)
    ctx->pc = 0x1612f4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 32), (uint16_t)GPR_U32(ctx, 3));
label_1612f8:
    // 0x1612f8: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x1612f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_1612fc:
    // 0x1612fc: 0xa6a30022  sh          $v1, 0x22($s5)
    ctx->pc = 0x1612fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 3));
label_161300:
    // 0x161300: 0xc066e34  jal         func_19B8D0
label_161304:
    if (ctx->pc == 0x161304u) {
        ctx->pc = 0x161304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161300u;
        // 0x161304: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161308u;
        goto label_161308;
    }
    ctx->pc = 0x161300u;
    SET_GPR_U32(ctx, 31, 0x161308u);
    ctx->pc = 0x161304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161300u;
    // 0x161304: 0xaea20024  sw          $v0, 0x24($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161308u;
label_161308:
    // 0x161308: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_16130c:
    // 0x16130c: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x16130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_161310:
    // 0x161310: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_161314:
    // 0x161314: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x161314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_161318:
    // 0x161318: 0xa6a30038  sh          $v1, 0x38($s5)
    ctx->pc = 0x161318u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 56), (uint16_t)GPR_U32(ctx, 3));
label_16131c:
    // 0x16131c: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161320:
    // 0x161320: 0xa6a3003a  sh          $v1, 0x3A($s5)
    ctx->pc = 0x161320u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 3));
label_161324:
    // 0x161324: 0xc066e34  jal         func_19B8D0
label_161328:
    if (ctx->pc == 0x161328u) {
        ctx->pc = 0x161328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161324u;
        // 0x161328: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16132Cu;
        goto label_16132c;
    }
    ctx->pc = 0x161324u;
    SET_GPR_U32(ctx, 31, 0x16132Cu);
    ctx->pc = 0x161328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161324u;
    // 0x161328: 0xaea2003c  sw          $v0, 0x3C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x16132Cu;
label_16132c:
    // 0x16132c: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x16132cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_161330:
    // 0x161330: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x161330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_161334:
    // 0x161334: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_161338:
    // 0x161338: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x161338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16133c:
    // 0x16133c: 0xa6a30050  sh          $v1, 0x50($s5)
    ctx->pc = 0x16133cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 80), (uint16_t)GPR_U32(ctx, 3));
label_161340:
    // 0x161340: 0x87a30084  lh          $v1, 0x84($sp)
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161344:
    // 0x161344: 0xa6a30052  sh          $v1, 0x52($s5)
    ctx->pc = 0x161344u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 82), (uint16_t)GPR_U32(ctx, 3));
label_161348:
    // 0x161348: 0xc066e34  jal         func_19B8D0
label_16134c:
    if (ctx->pc == 0x16134Cu) {
        ctx->pc = 0x16134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161348u;
        // 0x16134c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161350u;
        goto label_161350;
    }
    ctx->pc = 0x161348u;
    SET_GPR_U32(ctx, 31, 0x161350u);
    ctx->pc = 0x16134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161348u;
    // 0x16134c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161350u;
label_161350:
    // 0x161350: 0x87a40080  lh          $a0, 0x80($sp)
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_161354:
    // 0x161354: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x161354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_161358:
    // 0x161358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16135c:
    // 0x16135c: 0xa6a40068  sh          $a0, 0x68($s5)
    ctx->pc = 0x16135cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 104), (uint16_t)GPR_U32(ctx, 4));
label_161360:
    // 0x161360: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x161360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161364:
    // 0x161364: 0xa6a4006a  sh          $a0, 0x6A($s5)
    ctx->pc = 0x161364u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 106), (uint16_t)GPR_U32(ctx, 4));
label_161368:
    // 0x161368: 0xaea3006c  sw          $v1, 0x6C($s5)
    ctx->pc = 0x161368u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 3));
label_16136c:
    // 0x16136c: 0x26b50070  addiu       $s5, $s5, 0x70
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_161370:
    // 0x161370: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x161370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_161374:
    // 0x161374: 0x1460ff7f  bnez        $v1, . + 4 + (-0x81 << 2)
label_161378:
    if (ctx->pc == 0x161378u) {
        ctx->pc = 0x161378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161374u;
        // 0x161378: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16137Cu;
        goto label_16137c;
    }
    ctx->pc = 0x161374u;
    {
        const bool branch_taken_0x161374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161374u;
        // 0x161378: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161374) {
            ctx->pc = 0x161174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161174;
        }
    }
    ctx->pc = 0x16137Cu;
label_16137c:
    // 0x16137c: 0x3c03c100  lui         $v1, 0xC100
    ctx->pc = 0x16137cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49408 << 16));
label_161380:
    // 0x161380: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_161384:
    // 0x161384: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x161384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_161388:
    // 0x161388: 0x26950c30  addiu       $s5, $s4, 0xC30
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 3120));
label_16138c:
    // 0x16138c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x16138cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_161390:
    // 0x161390: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x161390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_161394:
    // 0x161394: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x161394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_161398:
    // 0x161398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x161398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16139c:
    // 0x16139c: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x16139cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_1613a0:
    // 0x1613a0: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1613a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_1613a4:
    // 0x1613a4: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x1613a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
label_1613a8:
    // 0x1613a8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1613a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1613ac:
    // 0x1613ac: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1613b0:
    if (ctx->pc == 0x1613B0u) {
        ctx->pc = 0x1613B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613ACu;
        // 0x1613b0: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613B4u;
        goto label_1613b4;
    }
    ctx->pc = 0x1613ACu;
    {
        const bool branch_taken_0x1613ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613ACu;
        // 0x1613b0: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613ac) {
            ctx->pc = 0x161560u;
            { ctx->pc = 0x161560; return; }
        }
    }
    ctx->pc = 0x1613B4u;
label_1613b4:
    // 0x1613b4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1613b8:
    // 0x1613b8: 0xc066e26  jal         func_19B898
label_1613bc:
    if (ctx->pc == 0x1613BCu) {
        ctx->pc = 0x1613BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613B8u;
        // 0x1613bc: 0xfeb00000  sd          $s0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613C0u;
        goto label_1613c0;
    }
    ctx->pc = 0x1613B8u;
    SET_GPR_U32(ctx, 31, 0x1613C0u);
    ctx->pc = 0x1613BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613B8u;
    // 0x1613bc: 0xfeb00000  sd          $s0, 0x0($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1613C0u;
label_1613c0:
    // 0x1613c0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1613c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1613c4:
    // 0x1613c4: 0xc066e26  jal         func_19B898
label_1613c8:
    if (ctx->pc == 0x1613C8u) {
        ctx->pc = 0x1613C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613C4u;
        // 0x1613c8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1613CCu;
        goto label_1613cc;
    }
    ctx->pc = 0x1613C4u;
    SET_GPR_U32(ctx, 31, 0x1613CCu);
    ctx->pc = 0x1613C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613C4u;
    // 0x1613c8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1613CCu;
label_1613cc:
    // 0x1613cc: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1613d0:
    // 0x1613d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1613d4:
    // 0x1613d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1613d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1613d8:
    // 0x1613d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1613d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1613dc:
    // 0x1613dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1613dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1613e0:
    // 0x1613e0: 0x0  nop
    ctx->pc = 0x1613e0u;
    // NOP
label_1613e4:
    // 0x1613e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1613e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1613e8:
    // 0x1613e8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1613ec:
    // 0x1613ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1613ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1613f0:
    // 0x1613f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1613f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1613f4:
    // 0x1613f4: 0x0  nop
    ctx->pc = 0x1613f4u;
    // NOP
label_1613f8:
    // 0x1613f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1613f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1613fc:
    // 0x1613fc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1613fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_161400:
    // 0x161400: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x161400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_161404:
    // 0x161404: 0x4a000138  vcallms     0x20
    ctx->pc = 0x161404u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_161408:
    // 0x161408: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x161408u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_16140c:
    // 0x16140c: 0x44893000  mtc1        $t1, $f6
    ctx->pc = 0x16140cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_161410:
    // 0x161410: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x161410u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_161414:
    // 0x161414: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x161414u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_161418:
    // 0x161418: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_16141c:
    // 0x16141c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_161420:
    // 0x161420: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161424:
    // 0x161424: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x161424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_161428:
    // 0x161428: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x161428u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
label_16142c:
    // 0x16142c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16142cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_161430:
    // 0x161430: 0x46061042  mul.s       $f1, $f2, $f6
    ctx->pc = 0x161430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_161434:
    // 0x161434: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_161438:
    // 0x161438: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16143c:
    // 0x16143c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x16143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_161440:
    // 0x161440: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x161440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_161444:
    // 0x161444: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x161444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_161448:
    // 0x161448: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x161448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16144c:
    // 0x16144c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x16144cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_161450:
    // 0x161450: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_161454:
    // 0x161454: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x161454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_161458:
    // 0x161458: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x161458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_16145c:
    // 0x16145c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x16145cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_161460:
    // 0x161460: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x161460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_161464:
    // 0x161464: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x161464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_161468:
    // 0x161468: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x161468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16146c:
    // 0x16146c: 0xc066d7a  jal         func_19B5E8
label_161470:
    if (ctx->pc == 0x161470u) {
        ctx->pc = 0x161470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16146Cu;
        // 0x161470: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161474u;
        goto label_161474;
    }
    ctx->pc = 0x16146Cu;
    SET_GPR_U32(ctx, 31, 0x161474u);
    ctx->pc = 0x161470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16146Cu;
    // 0x161470: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x161474u;
label_161474:
    // 0x161474: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x161474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_161478:
    // 0x161478: 0xc066e34  jal         func_19B8D0
label_16147c:
    if (ctx->pc == 0x16147Cu) {
        ctx->pc = 0x16147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161478u;
        // 0x16147c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161480u;
        { ctx->pc = 0x161480; return; }
    }
    ctx->pc = 0x161478u;
    SET_GPR_U32(ctx, 31, 0x161480u);
    ctx->pc = 0x16147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161478u;
    // 0x16147c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161480u;
    ctx->pc = 0x161480u;
    return;
}
