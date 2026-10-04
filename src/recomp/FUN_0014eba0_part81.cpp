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


void FUN_0014eba0_part81(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x175ca0u: goto label_175ca0;
        case 0x175ca4u: goto label_175ca4;
        case 0x175ca8u: goto label_175ca8;
        case 0x175cacu: goto label_175cac;
        case 0x175cb0u: goto label_175cb0;
        case 0x175cb4u: goto label_175cb4;
        case 0x175cb8u: goto label_175cb8;
        case 0x175cbcu: goto label_175cbc;
        case 0x175cc0u: goto label_175cc0;
        case 0x175cc4u: goto label_175cc4;
        case 0x175cc8u: goto label_175cc8;
        case 0x175cccu: goto label_175ccc;
        case 0x175cd0u: goto label_175cd0;
        case 0x175cd4u: goto label_175cd4;
        case 0x175cd8u: goto label_175cd8;
        case 0x175cdcu: goto label_175cdc;
        case 0x175ce0u: goto label_175ce0;
        case 0x175ce4u: goto label_175ce4;
        case 0x175ce8u: goto label_175ce8;
        case 0x175cecu: goto label_175cec;
        case 0x175cf0u: goto label_175cf0;
        case 0x175cf4u: goto label_175cf4;
        case 0x175cf8u: goto label_175cf8;
        case 0x175cfcu: goto label_175cfc;
        case 0x175d00u: goto label_175d00;
        case 0x175d04u: goto label_175d04;
        case 0x175d08u: goto label_175d08;
        case 0x175d0cu: goto label_175d0c;
        case 0x175d10u: goto label_175d10;
        case 0x175d14u: goto label_175d14;
        case 0x175d18u: goto label_175d18;
        case 0x175d1cu: goto label_175d1c;
        case 0x175d20u: goto label_175d20;
        case 0x175d24u: goto label_175d24;
        case 0x175d28u: goto label_175d28;
        case 0x175d2cu: goto label_175d2c;
        case 0x175d30u: goto label_175d30;
        case 0x175d34u: goto label_175d34;
        case 0x175d38u: goto label_175d38;
        case 0x175d3cu: goto label_175d3c;
        case 0x175d40u: goto label_175d40;
        case 0x175d44u: goto label_175d44;
        case 0x175d48u: goto label_175d48;
        case 0x175d4cu: goto label_175d4c;
        case 0x175d50u: goto label_175d50;
        case 0x175d54u: goto label_175d54;
        case 0x175d58u: goto label_175d58;
        case 0x175d5cu: goto label_175d5c;
        case 0x175d60u: goto label_175d60;
        case 0x175d64u: goto label_175d64;
        case 0x175d68u: goto label_175d68;
        case 0x175d6cu: goto label_175d6c;
        case 0x175d70u: goto label_175d70;
        case 0x175d74u: goto label_175d74;
        case 0x175d78u: goto label_175d78;
        case 0x175d7cu: goto label_175d7c;
        case 0x175d80u: goto label_175d80;
        case 0x175d84u: goto label_175d84;
        case 0x175d88u: goto label_175d88;
        case 0x175d8cu: goto label_175d8c;
        case 0x175d90u: goto label_175d90;
        case 0x175d94u: goto label_175d94;
        case 0x175d98u: goto label_175d98;
        case 0x175d9cu: goto label_175d9c;
        case 0x175da0u: goto label_175da0;
        case 0x175da4u: goto label_175da4;
        case 0x175da8u: goto label_175da8;
        case 0x175dacu: goto label_175dac;
        case 0x175db0u: goto label_175db0;
        case 0x175db4u: goto label_175db4;
        case 0x175db8u: goto label_175db8;
        case 0x175dbcu: goto label_175dbc;
        case 0x175dc0u: goto label_175dc0;
        case 0x175dc4u: goto label_175dc4;
        case 0x175dc8u: goto label_175dc8;
        case 0x175dccu: goto label_175dcc;
        case 0x175dd0u: goto label_175dd0;
        case 0x175dd4u: goto label_175dd4;
        case 0x175dd8u: goto label_175dd8;
        case 0x175ddcu: goto label_175ddc;
        case 0x175de0u: goto label_175de0;
        case 0x175de4u: goto label_175de4;
        case 0x175de8u: goto label_175de8;
        case 0x175decu: goto label_175dec;
        case 0x175df0u: goto label_175df0;
        case 0x175df4u: goto label_175df4;
        case 0x175df8u: goto label_175df8;
        case 0x175dfcu: goto label_175dfc;
        case 0x175e00u: goto label_175e00;
        case 0x175e04u: goto label_175e04;
        case 0x175e08u: goto label_175e08;
        case 0x175e0cu: goto label_175e0c;
        case 0x175e10u: goto label_175e10;
        case 0x175e14u: goto label_175e14;
        case 0x175e18u: goto label_175e18;
        case 0x175e1cu: goto label_175e1c;
        case 0x175e20u: goto label_175e20;
        case 0x175e24u: goto label_175e24;
        case 0x175e28u: goto label_175e28;
        case 0x175e2cu: goto label_175e2c;
        case 0x175e30u: goto label_175e30;
        case 0x175e34u: goto label_175e34;
        case 0x175e38u: goto label_175e38;
        case 0x175e3cu: goto label_175e3c;
        case 0x175e40u: goto label_175e40;
        case 0x175e44u: goto label_175e44;
        case 0x175e48u: goto label_175e48;
        case 0x175e4cu: goto label_175e4c;
        case 0x175e50u: goto label_175e50;
        case 0x175e54u: goto label_175e54;
        case 0x175e58u: goto label_175e58;
        case 0x175e5cu: goto label_175e5c;
        case 0x175e60u: goto label_175e60;
        case 0x175e64u: goto label_175e64;
        case 0x175e68u: goto label_175e68;
        case 0x175e6cu: goto label_175e6c;
        case 0x175e70u: goto label_175e70;
        case 0x175e74u: goto label_175e74;
        case 0x175e78u: goto label_175e78;
        case 0x175e7cu: goto label_175e7c;
        case 0x175e80u: goto label_175e80;
        case 0x175e84u: goto label_175e84;
        case 0x175e88u: goto label_175e88;
        case 0x175e8cu: goto label_175e8c;
        case 0x175e90u: goto label_175e90;
        case 0x175e94u: goto label_175e94;
        case 0x175e98u: goto label_175e98;
        case 0x175e9cu: goto label_175e9c;
        case 0x175ea0u: goto label_175ea0;
        case 0x175ea4u: goto label_175ea4;
        case 0x175ea8u: goto label_175ea8;
        case 0x175eacu: goto label_175eac;
        case 0x175eb0u: goto label_175eb0;
        case 0x175eb4u: goto label_175eb4;
        case 0x175eb8u: goto label_175eb8;
        case 0x175ebcu: goto label_175ebc;
        case 0x175ec0u: goto label_175ec0;
        case 0x175ec4u: goto label_175ec4;
        case 0x175ec8u: goto label_175ec8;
        case 0x175eccu: goto label_175ecc;
        case 0x175ed0u: goto label_175ed0;
        case 0x175ed4u: goto label_175ed4;
        case 0x175ed8u: goto label_175ed8;
        case 0x175edcu: goto label_175edc;
        case 0x175ee0u: goto label_175ee0;
        case 0x175ee4u: goto label_175ee4;
        case 0x175ee8u: goto label_175ee8;
        case 0x175eecu: goto label_175eec;
        case 0x175ef0u: goto label_175ef0;
        case 0x175ef4u: goto label_175ef4;
        case 0x175ef8u: goto label_175ef8;
        case 0x175efcu: goto label_175efc;
        case 0x175f00u: goto label_175f00;
        case 0x175f04u: goto label_175f04;
        case 0x175f08u: goto label_175f08;
        case 0x175f0cu: goto label_175f0c;
        case 0x175f10u: goto label_175f10;
        case 0x175f14u: goto label_175f14;
        case 0x175f18u: goto label_175f18;
        case 0x175f1cu: goto label_175f1c;
        case 0x175f20u: goto label_175f20;
        case 0x175f24u: goto label_175f24;
        case 0x175f28u: goto label_175f28;
        case 0x175f2cu: goto label_175f2c;
        case 0x175f30u: goto label_175f30;
        case 0x175f34u: goto label_175f34;
        case 0x175f38u: goto label_175f38;
        case 0x175f3cu: goto label_175f3c;
        case 0x175f40u: goto label_175f40;
        case 0x175f44u: goto label_175f44;
        case 0x175f48u: goto label_175f48;
        case 0x175f4cu: goto label_175f4c;
        case 0x175f50u: goto label_175f50;
        case 0x175f54u: goto label_175f54;
        case 0x175f58u: goto label_175f58;
        case 0x175f5cu: goto label_175f5c;
        case 0x175f60u: goto label_175f60;
        case 0x175f64u: goto label_175f64;
        case 0x175f68u: goto label_175f68;
        case 0x175f6cu: goto label_175f6c;
        case 0x175f70u: goto label_175f70;
        case 0x175f74u: goto label_175f74;
        case 0x175f78u: goto label_175f78;
        case 0x175f7cu: goto label_175f7c;
        case 0x175f80u: goto label_175f80;
        case 0x175f84u: goto label_175f84;
        case 0x175f88u: goto label_175f88;
        case 0x175f8cu: goto label_175f8c;
        case 0x175f90u: goto label_175f90;
        case 0x175f94u: goto label_175f94;
        case 0x175f98u: goto label_175f98;
        case 0x175f9cu: goto label_175f9c;
        case 0x175fa0u: goto label_175fa0;
        case 0x175fa4u: goto label_175fa4;
        case 0x175fa8u: goto label_175fa8;
        case 0x175facu: goto label_175fac;
        case 0x175fb0u: goto label_175fb0;
        case 0x175fb4u: goto label_175fb4;
        case 0x175fb8u: goto label_175fb8;
        case 0x175fbcu: goto label_175fbc;
        case 0x175fc0u: goto label_175fc0;
        case 0x175fc4u: goto label_175fc4;
        case 0x175fc8u: goto label_175fc8;
        case 0x175fccu: goto label_175fcc;
        case 0x175fd0u: goto label_175fd0;
        case 0x175fd4u: goto label_175fd4;
        case 0x175fd8u: goto label_175fd8;
        case 0x175fdcu: goto label_175fdc;
        case 0x175fe0u: goto label_175fe0;
        case 0x175fe4u: goto label_175fe4;
        case 0x175fe8u: goto label_175fe8;
        case 0x175fecu: goto label_175fec;
        case 0x175ff0u: goto label_175ff0;
        case 0x175ff4u: goto label_175ff4;
        case 0x175ff8u: goto label_175ff8;
        case 0x175ffcu: goto label_175ffc;
        case 0x176000u: goto label_176000;
        case 0x176004u: goto label_176004;
        case 0x176008u: goto label_176008;
        case 0x17600cu: goto label_17600c;
        case 0x176010u: goto label_176010;
        case 0x176014u: goto label_176014;
        case 0x176018u: goto label_176018;
        case 0x17601cu: goto label_17601c;
        case 0x176020u: goto label_176020;
        case 0x176024u: goto label_176024;
        case 0x176028u: goto label_176028;
        case 0x17602cu: goto label_17602c;
        case 0x176030u: goto label_176030;
        case 0x176034u: goto label_176034;
        case 0x176038u: goto label_176038;
        case 0x17603cu: goto label_17603c;
        case 0x176040u: goto label_176040;
        case 0x176044u: goto label_176044;
        case 0x176048u: goto label_176048;
        case 0x17604cu: goto label_17604c;
        case 0x176050u: goto label_176050;
        case 0x176054u: goto label_176054;
        case 0x176058u: goto label_176058;
        case 0x17605cu: goto label_17605c;
        case 0x176060u: goto label_176060;
        case 0x176064u: goto label_176064;
        case 0x176068u: goto label_176068;
        case 0x17606cu: goto label_17606c;
        case 0x176070u: goto label_176070;
        case 0x176074u: goto label_176074;
        case 0x176078u: goto label_176078;
        case 0x17607cu: goto label_17607c;
        case 0x176080u: goto label_176080;
        case 0x176084u: goto label_176084;
        case 0x176088u: goto label_176088;
        case 0x17608cu: goto label_17608c;
        case 0x176090u: goto label_176090;
        case 0x176094u: goto label_176094;
        case 0x176098u: goto label_176098;
        case 0x17609cu: goto label_17609c;
        case 0x1760a0u: goto label_1760a0;
        case 0x1760a4u: goto label_1760a4;
        case 0x1760a8u: goto label_1760a8;
        case 0x1760acu: goto label_1760ac;
        case 0x1760b0u: goto label_1760b0;
        case 0x1760b4u: goto label_1760b4;
        case 0x1760b8u: goto label_1760b8;
        case 0x1760bcu: goto label_1760bc;
        case 0x1760c0u: goto label_1760c0;
        case 0x1760c4u: goto label_1760c4;
        case 0x1760c8u: goto label_1760c8;
        case 0x1760ccu: goto label_1760cc;
        case 0x1760d0u: goto label_1760d0;
        case 0x1760d4u: goto label_1760d4;
        case 0x1760d8u: goto label_1760d8;
        case 0x1760dcu: goto label_1760dc;
        case 0x1760e0u: goto label_1760e0;
        case 0x1760e4u: goto label_1760e4;
        case 0x1760e8u: goto label_1760e8;
        case 0x1760ecu: goto label_1760ec;
        case 0x1760f0u: goto label_1760f0;
        case 0x1760f4u: goto label_1760f4;
        case 0x1760f8u: goto label_1760f8;
        case 0x1760fcu: goto label_1760fc;
        case 0x176100u: goto label_176100;
        case 0x176104u: goto label_176104;
        case 0x176108u: goto label_176108;
        case 0x17610cu: goto label_17610c;
        case 0x176110u: goto label_176110;
        case 0x176114u: goto label_176114;
        case 0x176118u: goto label_176118;
        case 0x17611cu: goto label_17611c;
        case 0x176120u: goto label_176120;
        case 0x176124u: goto label_176124;
        case 0x176128u: goto label_176128;
        case 0x17612cu: goto label_17612c;
        case 0x176130u: goto label_176130;
        case 0x176134u: goto label_176134;
        case 0x176138u: goto label_176138;
        case 0x17613cu: goto label_17613c;
        case 0x176140u: goto label_176140;
        case 0x176144u: goto label_176144;
        case 0x176148u: goto label_176148;
        case 0x17614cu: goto label_17614c;
        case 0x176150u: goto label_176150;
        case 0x176154u: goto label_176154;
        case 0x176158u: goto label_176158;
        case 0x17615cu: goto label_17615c;
        case 0x176160u: goto label_176160;
        case 0x176164u: goto label_176164;
        case 0x176168u: goto label_176168;
        case 0x17616cu: goto label_17616c;
        case 0x176170u: goto label_176170;
        case 0x176174u: goto label_176174;
        case 0x176178u: goto label_176178;
        case 0x17617cu: goto label_17617c;
        case 0x176180u: goto label_176180;
        case 0x176184u: goto label_176184;
        case 0x176188u: goto label_176188;
        case 0x17618cu: goto label_17618c;
        case 0x176190u: goto label_176190;
        case 0x176194u: goto label_176194;
        case 0x176198u: goto label_176198;
        case 0x17619cu: goto label_17619c;
        case 0x1761a0u: goto label_1761a0;
        case 0x1761a4u: goto label_1761a4;
        case 0x1761a8u: goto label_1761a8;
        case 0x1761acu: goto label_1761ac;
        case 0x1761b0u: goto label_1761b0;
        case 0x1761b4u: goto label_1761b4;
        case 0x1761b8u: goto label_1761b8;
        case 0x1761bcu: goto label_1761bc;
        case 0x1761c0u: goto label_1761c0;
        case 0x1761c4u: goto label_1761c4;
        case 0x1761c8u: goto label_1761c8;
        case 0x1761ccu: goto label_1761cc;
        case 0x1761d0u: goto label_1761d0;
        case 0x1761d4u: goto label_1761d4;
        case 0x1761d8u: goto label_1761d8;
        case 0x1761dcu: goto label_1761dc;
        case 0x1761e0u: goto label_1761e0;
        case 0x1761e4u: goto label_1761e4;
        case 0x1761e8u: goto label_1761e8;
        case 0x1761ecu: goto label_1761ec;
        case 0x1761f0u: goto label_1761f0;
        case 0x1761f4u: goto label_1761f4;
        case 0x1761f8u: goto label_1761f8;
        case 0x1761fcu: goto label_1761fc;
        case 0x176200u: goto label_176200;
        case 0x176204u: goto label_176204;
        case 0x176208u: goto label_176208;
        case 0x17620cu: goto label_17620c;
        case 0x176210u: goto label_176210;
        case 0x176214u: goto label_176214;
        case 0x176218u: goto label_176218;
        case 0x17621cu: goto label_17621c;
        case 0x176220u: goto label_176220;
        case 0x176224u: goto label_176224;
        case 0x176228u: goto label_176228;
        case 0x17622cu: goto label_17622c;
        case 0x176230u: goto label_176230;
        case 0x176234u: goto label_176234;
        case 0x176238u: goto label_176238;
        case 0x17623cu: goto label_17623c;
        case 0x176240u: goto label_176240;
        case 0x176244u: goto label_176244;
        case 0x176248u: goto label_176248;
        case 0x17624cu: goto label_17624c;
        case 0x176250u: goto label_176250;
        case 0x176254u: goto label_176254;
        case 0x176258u: goto label_176258;
        case 0x17625cu: goto label_17625c;
        case 0x176260u: goto label_176260;
        case 0x176264u: goto label_176264;
        case 0x176268u: goto label_176268;
        case 0x17626cu: goto label_17626c;
        case 0x176270u: goto label_176270;
        case 0x176274u: goto label_176274;
        case 0x176278u: goto label_176278;
        case 0x17627cu: goto label_17627c;
        case 0x176280u: goto label_176280;
        case 0x176284u: goto label_176284;
        case 0x176288u: goto label_176288;
        case 0x17628cu: goto label_17628c;
        case 0x176290u: goto label_176290;
        case 0x176294u: goto label_176294;
        case 0x176298u: goto label_176298;
        case 0x17629cu: goto label_17629c;
        case 0x1762a0u: goto label_1762a0;
        case 0x1762a4u: goto label_1762a4;
        case 0x1762a8u: goto label_1762a8;
        case 0x1762acu: goto label_1762ac;
        case 0x1762b0u: goto label_1762b0;
        case 0x1762b4u: goto label_1762b4;
        case 0x1762b8u: goto label_1762b8;
        case 0x1762bcu: goto label_1762bc;
        case 0x1762c0u: goto label_1762c0;
        case 0x1762c4u: goto label_1762c4;
        case 0x1762c8u: goto label_1762c8;
        case 0x1762ccu: goto label_1762cc;
        case 0x1762d0u: goto label_1762d0;
        case 0x1762d4u: goto label_1762d4;
        case 0x1762d8u: goto label_1762d8;
        case 0x1762dcu: goto label_1762dc;
        case 0x1762e0u: goto label_1762e0;
        case 0x1762e4u: goto label_1762e4;
        case 0x1762e8u: goto label_1762e8;
        case 0x1762ecu: goto label_1762ec;
        case 0x1762f0u: goto label_1762f0;
        case 0x1762f4u: goto label_1762f4;
        case 0x1762f8u: goto label_1762f8;
        case 0x1762fcu: goto label_1762fc;
        case 0x176300u: goto label_176300;
        case 0x176304u: goto label_176304;
        case 0x176308u: goto label_176308;
        case 0x17630cu: goto label_17630c;
        case 0x176310u: goto label_176310;
        case 0x176314u: goto label_176314;
        case 0x176318u: goto label_176318;
        case 0x17631cu: goto label_17631c;
        case 0x176320u: goto label_176320;
        case 0x176324u: goto label_176324;
        case 0x176328u: goto label_176328;
        case 0x17632cu: goto label_17632c;
        case 0x176330u: goto label_176330;
        case 0x176334u: goto label_176334;
        case 0x176338u: goto label_176338;
        case 0x17633cu: goto label_17633c;
        case 0x176340u: goto label_176340;
        case 0x176344u: goto label_176344;
        case 0x176348u: goto label_176348;
        case 0x17634cu: goto label_17634c;
        case 0x176350u: goto label_176350;
        case 0x176354u: goto label_176354;
        case 0x176358u: goto label_176358;
        case 0x17635cu: goto label_17635c;
        case 0x176360u: goto label_176360;
        case 0x176364u: goto label_176364;
        case 0x176368u: goto label_176368;
        case 0x17636cu: goto label_17636c;
        case 0x176370u: goto label_176370;
        case 0x176374u: goto label_176374;
        case 0x176378u: goto label_176378;
        case 0x17637cu: goto label_17637c;
        case 0x176380u: goto label_176380;
        case 0x176384u: goto label_176384;
        case 0x176388u: goto label_176388;
        case 0x17638cu: goto label_17638c;
        case 0x176390u: goto label_176390;
        case 0x176394u: goto label_176394;
        case 0x176398u: goto label_176398;
        case 0x17639cu: goto label_17639c;
        case 0x1763a0u: goto label_1763a0;
        case 0x1763a4u: goto label_1763a4;
        case 0x1763a8u: goto label_1763a8;
        case 0x1763acu: goto label_1763ac;
        case 0x1763b0u: goto label_1763b0;
        case 0x1763b4u: goto label_1763b4;
        case 0x1763b8u: goto label_1763b8;
        case 0x1763bcu: goto label_1763bc;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763c4u: goto label_1763c4;
        case 0x1763c8u: goto label_1763c8;
        case 0x1763ccu: goto label_1763cc;
        case 0x1763d0u: goto label_1763d0;
        case 0x1763d4u: goto label_1763d4;
        case 0x1763d8u: goto label_1763d8;
        case 0x1763dcu: goto label_1763dc;
        case 0x1763e0u: goto label_1763e0;
        case 0x1763e4u: goto label_1763e4;
        case 0x1763e8u: goto label_1763e8;
        case 0x1763ecu: goto label_1763ec;
        case 0x1763f0u: goto label_1763f0;
        case 0x1763f4u: goto label_1763f4;
        case 0x1763f8u: goto label_1763f8;
        case 0x1763fcu: goto label_1763fc;
        case 0x176400u: goto label_176400;
        case 0x176404u: goto label_176404;
        case 0x176408u: goto label_176408;
        case 0x17640cu: goto label_17640c;
        case 0x176410u: goto label_176410;
        case 0x176414u: goto label_176414;
        case 0x176418u: goto label_176418;
        case 0x17641cu: goto label_17641c;
        case 0x176420u: goto label_176420;
        case 0x176424u: goto label_176424;
        case 0x176428u: goto label_176428;
        case 0x17642cu: goto label_17642c;
        case 0x176430u: goto label_176430;
        case 0x176434u: goto label_176434;
        case 0x176438u: goto label_176438;
        case 0x17643cu: goto label_17643c;
        case 0x176440u: goto label_176440;
        case 0x176444u: goto label_176444;
        case 0x176448u: goto label_176448;
        case 0x17644cu: goto label_17644c;
        case 0x176450u: goto label_176450;
        case 0x176454u: goto label_176454;
        case 0x176458u: goto label_176458;
        case 0x17645cu: goto label_17645c;
        case 0x176460u: goto label_176460;
        case 0x176464u: goto label_176464;
        case 0x176468u: goto label_176468;
        case 0x17646cu: goto label_17646c;
        default: return;
    }

label_175ca0:
    // 0x175ca0: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x175ca0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_175ca4:
    // 0x175ca4: 0x28e40002  slti        $a0, $a3, 0x2
    ctx->pc = 0x175ca4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_175ca8:
    // 0x175ca8: 0x14800031  bnez        $a0, . + 4 + (0x31 << 2)
label_175cac:
    if (ctx->pc == 0x175CACu) {
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0x28c10008  slti        $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CB0u;
        goto label_175cb0;
    }
    ctx->pc = 0x175CA8u;
    {
        const bool branch_taken_0x175ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0x28c10008  slti        $at, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca8) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175CB0u;
label_175cb0:
    // 0x175cb0: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_175cb4:
    if (ctx->pc == 0x175CB4u) {
        ctx->pc = 0x175CB8u;
        goto label_175cb8;
    }
    ctx->pc = 0x175CB0u;
    {
        const bool branch_taken_0x175cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cb0) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175CB8u;
label_175cb8:
    // 0x175cb8: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x175cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_175cbc:
    // 0x175cbc: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_175cc0:
    if (ctx->pc == 0x175CC0u) {
        ctx->pc = 0x175CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CBCu;
        // 0x175cc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CC4u;
        goto label_175cc4;
    }
    ctx->pc = 0x175CBCu;
    {
        const bool branch_taken_0x175cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CBCu;
        // 0x175cc0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cbc) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175CC4u;
label_175cc4:
    // 0x175cc4: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_175cc8:
    if (ctx->pc == 0x175CC8u) {
        ctx->pc = 0x175CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CC4u;
        // 0x175cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CCCu;
        goto label_175ccc;
    }
    ctx->pc = 0x175CC4u;
    {
        const bool branch_taken_0x175cc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CC4u;
        // 0x175cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cc4) {
            ctx->pc = 0x175CE8u;
            goto label_175ce8;
        }
    }
    ctx->pc = 0x175CCCu;
label_175ccc:
    // 0x175ccc: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_175cd0:
    if (ctx->pc == 0x175CD0u) {
        ctx->pc = 0x175CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CCCu;
        // 0x175cd0: 0x28c30004  slti        $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CD4u;
        goto label_175cd4;
    }
    ctx->pc = 0x175CCCu;
    {
        const bool branch_taken_0x175ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CCCu;
        // 0x175cd0: 0x28c30004  slti        $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ccc) {
            ctx->pc = 0x175CECu;
            goto label_175cec;
        }
    }
    ctx->pc = 0x175CD4u;
label_175cd4:
    // 0x175cd4: 0x28e10004  slti        $at, $a3, 0x4
    ctx->pc = 0x175cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_175cd8:
    // 0x175cd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_175cdc:
    if (ctx->pc == 0x175CDCu) {
        ctx->pc = 0x175CE0u;
        goto label_175ce0;
    }
    ctx->pc = 0x175CD8u;
    {
        const bool branch_taken_0x175cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cd8) {
            ctx->pc = 0x175CE8u;
            goto label_175ce8;
        }
    }
    ctx->pc = 0x175CE0u;
label_175ce0:
    // 0x175ce0: 0x10000023  b           . + 4 + (0x23 << 2)
label_175ce4:
    if (ctx->pc == 0x175CE4u) {
        ctx->pc = 0x175CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CE0u;
        // 0x175ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CE8u;
        goto label_175ce8;
    }
    ctx->pc = 0x175CE0u;
    {
        const bool branch_taken_0x175ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CE0u;
        // 0x175ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ce0) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175CE8u;
label_175ce8:
    // 0x175ce8: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x175ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_175cec:
    // 0x175cec: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_175cf0:
    if (ctx->pc == 0x175CF0u) {
        ctx->pc = 0x175CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CECu;
        // 0x175cf0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CF4u;
        goto label_175cf4;
    }
    ctx->pc = 0x175CECu;
    {
        const bool branch_taken_0x175cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CECu;
        // 0x175cf0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cec) {
            ctx->pc = 0x175D34u;
            goto label_175d34;
        }
    }
    ctx->pc = 0x175CF4u;
label_175cf4:
    // 0x175cf4: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x175cf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_175cf8:
    // 0x175cf8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_175cfc:
    if (ctx->pc == 0x175CFCu) {
        ctx->pc = 0x175CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CF8u;
        // 0x175cfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D00u;
        goto label_175d00;
    }
    ctx->pc = 0x175CF8u;
    {
        const bool branch_taken_0x175cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CF8u;
        // 0x175cfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cf8) {
            ctx->pc = 0x175D30u;
            goto label_175d30;
        }
    }
    ctx->pc = 0x175D00u;
label_175d00:
    // 0x175d00: 0x14e3000b  bne         $a3, $v1, . + 4 + (0xB << 2)
label_175d04:
    if (ctx->pc == 0x175D04u) {
        ctx->pc = 0x175D08u;
        goto label_175d08;
    }
    ctx->pc = 0x175D00u;
    {
        const bool branch_taken_0x175d00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175d00) {
            ctx->pc = 0x175D30u;
            goto label_175d30;
        }
    }
    ctx->pc = 0x175D08u;
label_175d08:
    // 0x175d08: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x175d08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_175d0c:
    // 0x175d0c: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x175d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_175d10:
    // 0x175d10: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_175d14:
    if (ctx->pc == 0x175D14u) {
        ctx->pc = 0x175D18u;
        goto label_175d18;
    }
    ctx->pc = 0x175D10u;
    {
        const bool branch_taken_0x175d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x175d10) {
            ctx->pc = 0x175D28u;
            goto label_175d28;
        }
    }
    ctx->pc = 0x175D18u;
label_175d18:
    // 0x175d18: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x175d18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_175d1c:
    // 0x175d1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x175d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_175d20:
    // 0x175d20: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_175d24:
    if (ctx->pc == 0x175D24u) {
        ctx->pc = 0x175D28u;
        goto label_175d28;
    }
    ctx->pc = 0x175D20u;
    {
        const bool branch_taken_0x175d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x175d20) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D28u;
label_175d28:
    // 0x175d28: 0x10000011  b           . + 4 + (0x11 << 2)
label_175d2c:
    if (ctx->pc == 0x175D2Cu) {
        ctx->pc = 0x175D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D28u;
        // 0x175d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D30u;
        goto label_175d30;
    }
    ctx->pc = 0x175D28u;
    {
        const bool branch_taken_0x175d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D28u;
        // 0x175d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d28) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D30u;
label_175d30:
    // 0x175d30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_175d34:
    // 0x175d34: 0x14c3000e  bne         $a2, $v1, . + 4 + (0xE << 2)
label_175d38:
    if (ctx->pc == 0x175D38u) {
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D34u;
        // 0x175d38: 0x28e30005  slti        $v1, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D3Cu;
        goto label_175d3c;
    }
    ctx->pc = 0x175D34u;
    {
        const bool branch_taken_0x175d34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D34u;
        // 0x175d38: 0x28e30005  slti        $v1, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d34) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D3Cu;
label_175d3c:
    // 0x175d3c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_175d40:
    if (ctx->pc == 0x175D40u) {
        ctx->pc = 0x175D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D3Cu;
        // 0x175d40: 0x28e10007  slti        $at, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175D44u;
        goto label_175d44;
    }
    ctx->pc = 0x175D3Cu;
    {
        const bool branch_taken_0x175d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D3Cu;
        // 0x175d40: 0x28e10007  slti        $at, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d3c) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D44u;
label_175d44:
    // 0x175d44: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_175d48:
    if (ctx->pc == 0x175D48u) {
        ctx->pc = 0x175D4Cu;
        goto label_175d4c;
    }
    ctx->pc = 0x175D44u;
    {
        const bool branch_taken_0x175d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175d44) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D4Cu;
label_175d4c:
    // 0x175d4c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x175d4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_175d50:
    // 0x175d50: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_175d54:
    // 0x175d54: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_175d58:
    if (ctx->pc == 0x175D58u) {
        ctx->pc = 0x175D5Cu;
        goto label_175d5c;
    }
    ctx->pc = 0x175D54u;
    {
        const bool branch_taken_0x175d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x175d54) {
            ctx->pc = 0x175D6Cu;
            goto label_175d6c;
        }
    }
    ctx->pc = 0x175D5Cu;
label_175d5c:
    // 0x175d5c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x175d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_175d60:
    // 0x175d60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x175d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_175d64:
    // 0x175d64: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_175d68:
    if (ctx->pc == 0x175D68u) {
        ctx->pc = 0x175D6Cu;
        goto label_175d6c;
    }
    ctx->pc = 0x175D64u;
    {
        const bool branch_taken_0x175d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x175d64) {
            ctx->pc = 0x175D70u;
            goto label_175d70;
        }
    }
    ctx->pc = 0x175D6Cu;
label_175d6c:
    // 0x175d6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x175d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d70:
    // 0x175d70: 0x3e00008  jr          $ra
label_175d74:
    if (ctx->pc == 0x175D74u) {
        ctx->pc = 0x175D78u;
        goto label_175d78;
    }
    ctx->pc = 0x175D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175D78u;
label_175d78:
    // 0x175d78: 0x0  nop
    ctx->pc = 0x175d78u;
    // NOP
label_175d7c:
    // 0x175d7c: 0x0  nop
    ctx->pc = 0x175d7cu;
    // NOP
label_175d80:
    // 0x175d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_175d84:
    // 0x175d84: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_175d88:
    // 0x175d88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x175d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_175d8c:
    // 0x175d8c: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_175d90:
    // 0x175d90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_175d94:
    // 0x175d94: 0x24e725ae  addiu       $a3, $a3, 0x25AE
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9646));
label_175d98:
    // 0x175d98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_175d9c:
    // 0x175d9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_175da0:
    // 0x175da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175da4:
    // 0x175da4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175da8:
    // 0x175da8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175dac:
    // 0x175dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175db0:
    // 0x175db0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175db4:
    // 0x175db4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x175db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_175db8:
    // 0x175db8: 0x723023  subu        $a2, $v1, $s2
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_175dbc:
    // 0x175dbc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_175dc0:
    // 0x175dc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x175dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_175dc4:
    // 0x175dc4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_175dc8:
    // 0x175dc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_175dcc:
    // 0x175dcc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_175dd0:
    // 0x175dd0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_175dd4:
    // 0x175dd4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_175dd8:
    // 0x175dd8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_175ddc:
    // 0x175ddc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_175de0:
    // 0x175de0: 0x24870000  addiu       $a3, $a0, 0x0
    ctx->pc = 0x175de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_175de4:
    // 0x175de4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_175de8:
    // 0x175de8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x175de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_175dec:
    // 0x175dec: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_175df0:
    // 0x175df0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_175df4:
    // 0x175df4: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x175df4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_175df8:
    // 0x175df8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_175dfc:
    // 0x175dfc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x175dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_175e00:
    // 0x175e00: 0x24c61520  addiu       $a2, $a2, 0x1520
    ctx->pc = 0x175e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5408));
label_175e04:
    // 0x175e04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x175e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_175e08:
    // 0x175e08: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x175e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_175e0c:
    // 0x175e0c: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x175e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_175e10:
    // 0x175e10: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_175e14:
    // 0x175e14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x175e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_175e18:
    // 0x175e18: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x175e18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_175e1c:
    // 0x175e1c: 0x16260012  bne         $s1, $a2, . + 4 + (0x12 << 2)
label_175e20:
    if (ctx->pc == 0x175E20u) {
        ctx->pc = 0x175E24u;
        goto label_175e24;
    }
    ctx->pc = 0x175E1Cu;
    {
        const bool branch_taken_0x175e1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x175e1c) {
            ctx->pc = 0x175E68u;
            goto label_175e68;
        }
    }
    ctx->pc = 0x175E24u;
label_175e24:
    // 0x175e24: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_175e28:
    // 0x175e28: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_175e2c:
    // 0x175e2c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_175e30:
    // 0x175e30: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_175e34:
    // 0x175e34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x175e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_175e38:
    // 0x175e38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_175e3c:
    // 0x175e3c: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x175e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
label_175e40:
    // 0x175e40: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
label_175e44:
    if (ctx->pc == 0x175E44u) {
        ctx->pc = 0x175E48u;
        goto label_175e48;
    }
    ctx->pc = 0x175E40u;
    {
        const bool branch_taken_0x175e40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x175e40) {
            ctx->pc = 0x175E68u;
            goto label_175e68;
        }
    }
    ctx->pc = 0x175E48u;
label_175e48:
    // 0x175e48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_175e4c:
    // 0x175e4c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_175e50:
    // 0x175e50: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_175e54:
    // 0x175e54: 0x24631528  addiu       $v1, $v1, 0x1528
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5416));
label_175e58:
    // 0x175e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_175e5c:
    // 0x175e5c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x175e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_175e60:
    // 0x175e60: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_175e64:
    // 0x175e64: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x175e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_175e68:
    // 0x175e68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_175e6c:
    // 0x175e6c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x175e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_175e70:
    // 0x175e70: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x175e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_175e74:
    // 0x175e74: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x175e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_175e78:
    // 0x175e78: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_175e7c:
    // 0x175e7c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_175e80:
    // 0x175e80: 0x14830149  bne         $a0, $v1, . + 4 + (0x149 << 2)
label_175e84:
    if (ctx->pc == 0x175E84u) {
        ctx->pc = 0x175E88u;
        goto label_175e88;
    }
    ctx->pc = 0x175E80u;
    {
        const bool branch_taken_0x175e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x175e80) {
            ctx->pc = 0x1763A8u;
            goto label_1763a8;
        }
    }
    ctx->pc = 0x175E88u;
label_175e88:
    // 0x175e88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_175e8c:
    // 0x175e8c: 0x90640011  lbu         $a0, 0x11($v1)
    ctx->pc = 0x175e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
label_175e90:
    // 0x175e90: 0x14910145  bne         $a0, $s1, . + 4 + (0x145 << 2)
label_175e94:
    if (ctx->pc == 0x175E94u) {
        ctx->pc = 0x175E98u;
        goto label_175e98;
    }
    ctx->pc = 0x175E90u;
    {
        const bool branch_taken_0x175e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x175e90) {
            ctx->pc = 0x1763A8u;
            goto label_1763a8;
        }
    }
    ctx->pc = 0x175E98u;
label_175e98:
    // 0x175e98: 0x16200143  bnez        $s1, . + 4 + (0x143 << 2)
label_175e9c:
    if (ctx->pc == 0x175E9Cu) {
        ctx->pc = 0x175EA0u;
        goto label_175ea0;
    }
    ctx->pc = 0x175E98u;
    {
        const bool branch_taken_0x175e98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e98) {
            ctx->pc = 0x1763A8u;
            goto label_1763a8;
        }
    }
    ctx->pc = 0x175EA0u;
label_175ea0:
    // 0x175ea0: 0x90650012  lbu         $a1, 0x12($v1)
    ctx->pc = 0x175ea0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_175ea4:
    // 0x175ea4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x175ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_175ea8:
    // 0x175ea8: 0x14a4013f  bne         $a1, $a0, . + 4 + (0x13F << 2)
label_175eac:
    if (ctx->pc == 0x175EACu) {
        ctx->pc = 0x175EB0u;
        goto label_175eb0;
    }
    ctx->pc = 0x175EA8u;
    {
        const bool branch_taken_0x175ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x175ea8) {
            ctx->pc = 0x1763A8u;
            goto label_1763a8;
        }
    }
    ctx->pc = 0x175EB0u;
label_175eb0:
    // 0x175eb0: 0x92680034  lbu         $t0, 0x34($s3)
    ctx->pc = 0x175eb0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_175eb4:
    // 0x175eb4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x175eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_175eb8:
    // 0x175eb8: 0x9266003e  lbu         $a2, 0x3E($s3)
    ctx->pc = 0x175eb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_175ebc:
    // 0x175ebc: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x175ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
label_175ec0:
    // 0x175ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175ec4:
    // 0x175ec4: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x175ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_175ec8:
    // 0x175ec8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x175ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_175ecc:
    // 0x175ecc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x175eccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_175ed0:
    // 0x175ed0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_175ed4:
    // 0x175ed4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x175ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_175ed8:
    // 0x175ed8: 0xc84023  subu        $t0, $a2, $t0
    ctx->pc = 0x175ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_175edc:
    // 0x175edc: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x175edcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_175ee0:
    // 0x175ee0: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x175ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_175ee4:
    // 0x175ee4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x175ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_175ee8:
    // 0x175ee8: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x175ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_175eec:
    // 0x175eec: 0x16040123  bne         $s0, $a0, . + 4 + (0x123 << 2)
label_175ef0:
    if (ctx->pc == 0x175EF0u) {
        ctx->pc = 0x175EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EECu;
        // 0x175ef0: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175EF4u;
        goto label_175ef4;
    }
    ctx->pc = 0x175EECu;
    {
        const bool branch_taken_0x175eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x175EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EECu;
        // 0x175ef0: 0xa6a021  addu        $s4, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175eec) {
            ctx->pc = 0x17637Cu;
            goto label_17637c;
        }
    }
    ctx->pc = 0x175EF4u;
label_175ef4:
    // 0x175ef4: 0xc059ec8  jal         func_167B20
label_175ef8:
    if (ctx->pc == 0x175EF8u) {
        ctx->pc = 0x175EFCu;
        goto label_175efc;
    }
    ctx->pc = 0x175EF4u;
    SET_GPR_U32(ctx, 31, 0x175EFCu);
    ctx->pc = 0x167B20u;
    { ctx->pc = 0x167b20; return; }
    ctx->pc = 0x175EFCu;
label_175efc:
    // 0x175efc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x175efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_175f00:
    // 0x175f00: 0xc059ec8  jal         func_167B20
label_175f04:
    if (ctx->pc == 0x175F04u) {
        ctx->pc = 0x175F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F00u;
        // 0x175f04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F08u;
        goto label_175f08;
    }
    ctx->pc = 0x175F00u;
    SET_GPR_U32(ctx, 31, 0x175F08u);
    ctx->pc = 0x175F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F00u;
    // 0x175f04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    { ctx->pc = 0x167b20; return; }
    ctx->pc = 0x175F08u;
label_175f08:
    // 0x175f08: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x175f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_175f0c:
    // 0x175f0c: 0xc059ec8  jal         func_167B20
label_175f10:
    if (ctx->pc == 0x175F10u) {
        ctx->pc = 0x175F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F0Cu;
        // 0x175f10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F14u;
        goto label_175f14;
    }
    ctx->pc = 0x175F0Cu;
    SET_GPR_U32(ctx, 31, 0x175F14u);
    ctx->pc = 0x175F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F0Cu;
    // 0x175f10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    { ctx->pc = 0x167b20; return; }
    ctx->pc = 0x175F14u;
label_175f14:
    // 0x175f14: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x175f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_175f18:
    // 0x175f18: 0xc059ec8  jal         func_167B20
label_175f1c:
    if (ctx->pc == 0x175F1Cu) {
        ctx->pc = 0x175F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F18u;
        // 0x175f1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F20u;
        goto label_175f20;
    }
    ctx->pc = 0x175F18u;
    SET_GPR_U32(ctx, 31, 0x175F20u);
    ctx->pc = 0x175F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175F18u;
    // 0x175f1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    { ctx->pc = 0x167b20; return; }
    ctx->pc = 0x175F20u;
label_175f20:
    // 0x175f20: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x175f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_175f24:
    // 0x175f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175f28:
    // 0x175f28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x175f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_175f2c:
    // 0x175f2c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_175f30:
    // 0x175f30: 0x90244910  lbu         $a0, 0x4910($at)
    ctx->pc = 0x175f30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_175f34:
    // 0x175f34: 0x0  nop
    ctx->pc = 0x175f34u;
    // NOP
label_175f38:
    // 0x175f38: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_175f3c:
    // 0x175f3c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_175f40:
    if (ctx->pc == 0x175F40u) {
        ctx->pc = 0x175F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F3Cu;
        // 0x175f40: 0x30460003  andi        $a2, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F44u;
        goto label_175f44;
    }
    ctx->pc = 0x175F3Cu;
    {
        const bool branch_taken_0x175f3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x175F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F3Cu;
        // 0x175f40: 0x30460003  andi        $a2, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f3c) {
            ctx->pc = 0x175F50u;
            goto label_175f50;
        }
    }
    ctx->pc = 0x175F44u;
label_175f44:
    // 0x175f44: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_175f48:
    if (ctx->pc == 0x175F48u) {
        ctx->pc = 0x175F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F44u;
        // 0x175f48: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F4Cu;
        goto label_175f4c;
    }
    ctx->pc = 0x175F44u;
    {
        const bool branch_taken_0x175f44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F44u;
        // 0x175f48: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f44) {
            ctx->pc = 0x175F54u;
            goto label_175f54;
        }
    }
    ctx->pc = 0x175F4Cu;
label_175f4c:
    // 0x175f4c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x175f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_175f50:
    // 0x175f50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x175f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_175f54:
    // 0x175f54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_175f58:
    // 0x175f58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x175f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175f5c:
    // 0x175f5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_175f60:
    if (ctx->pc == 0x175F60u) {
        ctx->pc = 0x175F64u;
        goto label_175f64;
    }
    ctx->pc = 0x175F5Cu;
    {
        const bool branch_taken_0x175f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f5c) {
            ctx->pc = 0x175F90u;
            goto label_175f90;
        }
    }
    ctx->pc = 0x175F64u;
label_175f64:
    // 0x175f64: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x175f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_175f68:
    // 0x175f68: 0x24c200e6  addiu       $v0, $a2, 0xE6
    ctx->pc = 0x175f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 230));
label_175f6c:
    // 0x175f6c: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x175f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_175f70:
    // 0x175f70: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_175f74:
    // 0x175f74: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_175f78:
    // 0x175f78: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x175f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_175f7c:
    // 0x175f7c: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
label_175f80:
    // 0x175f80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x175f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_175f84:
    // 0x175f84: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_175f88:
    // 0x175f88: 0x10000005  b           . + 4 + (0x5 << 2)
label_175f8c:
    if (ctx->pc == 0x175F8Cu) {
        ctx->pc = 0x175F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F88u;
        // 0x175f8c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175F90u;
        goto label_175f90;
    }
    ctx->pc = 0x175F88u;
    {
        const bool branch_taken_0x175f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F88u;
        // 0x175f8c: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f88) {
            ctx->pc = 0x175FA0u;
            goto label_175fa0;
        }
    }
    ctx->pc = 0x175F90u;
label_175f90:
    // 0x175f90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x175f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_175f94:
    // 0x175f94: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x175f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_175f98:
    // 0x175f98: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_175f9c:
    if (ctx->pc == 0x175F9Cu) {
        ctx->pc = 0x175F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F98u;
        // 0x175f9c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FA0u;
        goto label_175fa0;
    }
    ctx->pc = 0x175F98u;
    {
        const bool branch_taken_0x175f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F98u;
        // 0x175f9c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f98) {
            ctx->pc = 0x175F3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175f3c;
        }
    }
    ctx->pc = 0x175FA0u;
label_175fa0:
    // 0x175fa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175fa4:
    // 0x175fa4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_175fa8:
    if (ctx->pc == 0x175FA8u) {
        ctx->pc = 0x175FACu;
        goto label_175fac;
    }
    ctx->pc = 0x175FA4u;
    {
        const bool branch_taken_0x175fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x175fa4) {
            ctx->pc = 0x175FC8u;
            goto label_175fc8;
        }
    }
    ctx->pc = 0x175FACu;
label_175fac:
    // 0x175fac: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x175facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_175fb0:
    // 0x175fb0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x175fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_175fb4:
    // 0x175fb4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_175fb8:
    // 0x175fb8: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x175fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
label_175fbc:
    // 0x175fbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_175fc0:
    // 0x175fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_175fc4:
    // 0x175fc4: 0x24551cc0  addiu       $s5, $v0, 0x1CC0
    ctx->pc = 0x175fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 7360));
label_175fc8:
    // 0x175fc8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x175fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_175fcc:
    // 0x175fcc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x175fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_175fd0:
    // 0x175fd0: 0xc08e93e  jal         func_23A4F8
label_175fd4:
    if (ctx->pc == 0x175FD4u) {
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175FD8u;
        goto label_175fd8;
    }
    ctx->pc = 0x175FD0u;
    SET_GPR_U32(ctx, 31, 0x175FD8u);
    ctx->pc = 0x175FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FD0u;
    // 0x175fd4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x175FD8u;
label_175fd8:
    // 0x175fd8: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x175fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_175fdc:
    // 0x175fdc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x175fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_175fe0:
    // 0x175fe0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x175fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_175fe4:
    // 0x175fe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_175fe8:
    // 0x175fe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x175fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_175fec:
    // 0x175fec: 0xa2a40010  sb          $a0, 0x10($s5)
    ctx->pc = 0x175fecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 4));
label_175ff0:
    // 0x175ff0: 0xa2a30012  sb          $v1, 0x12($s5)
    ctx->pc = 0x175ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 18), (uint8_t)GPR_U32(ctx, 3));
label_175ff4:
    // 0x175ff4: 0xa2a30015  sb          $v1, 0x15($s5)
    ctx->pc = 0x175ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 21), (uint8_t)GPR_U32(ctx, 3));
label_175ff8:
    // 0x175ff8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x175ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_175ffc:
    // 0x175ffc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_176000:
    if (ctx->pc == 0x176000u) {
        ctx->pc = 0x176000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FFCu;
        // 0x176000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176004u;
        goto label_176004;
    }
    ctx->pc = 0x175FFCu;
    {
        const bool branch_taken_0x175ffc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x176000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FFCu;
        // 0x176000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ffc) {
            ctx->pc = 0x176014u;
            goto label_176014;
        }
    }
    ctx->pc = 0x176004u;
label_176004:
    // 0x176004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176008:
    // 0x176008: 0x10000008  b           . + 4 + (0x8 << 2)
label_17600c:
    if (ctx->pc == 0x17600Cu) {
        ctx->pc = 0x17600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176008u;
        // 0x17600c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176010u;
        goto label_176010;
    }
    ctx->pc = 0x176008u;
    {
        const bool branch_taken_0x176008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176008u;
        // 0x17600c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176008) {
            ctx->pc = 0x17602Cu;
            goto label_17602c;
        }
    }
    ctx->pc = 0x176010u;
label_176010:
    // 0x176010: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x176010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_176014:
    // 0x176014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x176014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_176018:
    // 0x176018: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x176018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17601c:
    // 0x17601c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176020:
    // 0x176020: 0x0  nop
    ctx->pc = 0x176020u;
    // NOP
label_176024:
    // 0x176024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x176024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_176028:
    // 0x176028: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x176028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17602c:
    // 0x17602c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17602cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176030:
    // 0x176030: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x176030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_176034:
    // 0x176034: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x176034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_176038:
    // 0x176038: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x176038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_17603c:
    // 0x17603c: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x17603cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_176040:
    // 0x176040: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_176044:
    if (ctx->pc == 0x176044u) {
        ctx->pc = 0x176044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176040u;
        // 0x176044: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176048u;
        goto label_176048;
    }
    ctx->pc = 0x176040u;
    {
        const bool branch_taken_0x176040 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x176044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176040u;
        // 0x176044: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176040) {
            ctx->pc = 0x176058u;
            goto label_176058;
        }
    }
    ctx->pc = 0x176048u;
label_176048:
    // 0x176048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17604c:
    // 0x17604c: 0x10000008  b           . + 4 + (0x8 << 2)
label_176050:
    if (ctx->pc == 0x176050u) {
        ctx->pc = 0x176050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17604Cu;
        // 0x176050: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176054u;
        goto label_176054;
    }
    ctx->pc = 0x17604Cu;
    {
        const bool branch_taken_0x17604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17604Cu;
        // 0x176050: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17604c) {
            ctx->pc = 0x176070u;
            goto label_176070;
        }
    }
    ctx->pc = 0x176054u;
label_176054:
    // 0x176054: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x176054u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_176058:
    // 0x176058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x176058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17605c:
    // 0x17605c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_176060:
    // 0x176060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176064:
    // 0x176064: 0x0  nop
    ctx->pc = 0x176064u;
    // NOP
label_176068:
    // 0x176068: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x176068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17606c:
    // 0x17606c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17606cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_176070:
    // 0x176070: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_176074:
    // 0x176074: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x176074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_176078:
    // 0x176078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17607c:
    // 0x17607c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176080:
    // 0x176080: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_176084:
    // 0x176084: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x176084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_176088:
    // 0x176088: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_17608c:
    // 0x17608c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x17608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_176090:
    // 0x176090: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x176090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_176094:
    // 0x176094: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x176094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_176098:
    // 0x176098: 0xa260003b  sb          $zero, 0x3B($s3)
    ctx->pc = 0x176098u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 59), (uint8_t)GPR_U32(ctx, 0));
label_17609c:
    // 0x17609c: 0xa263003c  sb          $v1, 0x3C($s3)
    ctx->pc = 0x17609cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 60), (uint8_t)GPR_U32(ctx, 3));
label_1760a0:
    // 0x1760a0: 0xa6620040  sh          $v0, 0x40($s3)
    ctx->pc = 0x1760a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 64), (uint16_t)GPR_U32(ctx, 2));
label_1760a4:
    // 0x1760a4: 0xa2600036  sb          $zero, 0x36($s3)
    ctx->pc = 0x1760a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 0));
label_1760a8:
    // 0x1760a8: 0xa2720034  sb          $s2, 0x34($s3)
    ctx->pc = 0x1760a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 18));
label_1760ac:
    // 0x1760ac: 0xa2600035  sb          $zero, 0x35($s3)
    ctx->pc = 0x1760acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 0));
label_1760b0:
    // 0x1760b0: 0xc0445bc  jal         func_1116F0
label_1760b4:
    if (ctx->pc == 0x1760B4u) {
        ctx->pc = 0x1760B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760B0u;
        // 0x1760b4: 0xa6600042  sh          $zero, 0x42($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1760B8u;
        goto label_1760b8;
    }
    ctx->pc = 0x1760B0u;
    SET_GPR_U32(ctx, 31, 0x1760B8u);
    ctx->pc = 0x1760B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760B0u;
    // 0x1760b4: 0xa6600042  sh          $zero, 0x42($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116F0u, 0x1760B0u, 0x1760B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760B8u;
label_1760b8:
    // 0x1760b8: 0x9263003a  lbu         $v1, 0x3A($s3)
    ctx->pc = 0x1760b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_1760bc:
    // 0x1760bc: 0xa2630044  sb          $v1, 0x44($s3)
    ctx->pc = 0x1760bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 3));
label_1760c0:
    // 0x1760c0: 0x92630026  lbu         $v1, 0x26($s3)
    ctx->pc = 0x1760c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
label_1760c4:
    // 0x1760c4: 0xa2630022  sb          $v1, 0x22($s3)
    ctx->pc = 0x1760c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 3));
label_1760c8:
    // 0x1760c8: 0xa2630028  sb          $v1, 0x28($s3)
    ctx->pc = 0x1760c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 3));
label_1760cc:
    // 0x1760cc: 0x92630027  lbu         $v1, 0x27($s3)
    ctx->pc = 0x1760ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_1760d0:
    // 0x1760d0: 0xa2630023  sb          $v1, 0x23($s3)
    ctx->pc = 0x1760d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 3));
label_1760d4:
    // 0x1760d4: 0xa2630029  sb          $v1, 0x29($s3)
    ctx->pc = 0x1760d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 3));
label_1760d8:
    // 0x1760d8: 0x92a30004  lbu         $v1, 0x4($s5)
    ctx->pc = 0x1760d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_1760dc:
    // 0x1760dc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1760e0:
    if (ctx->pc == 0x1760E0u) {
        ctx->pc = 0x1760E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760DCu;
        // 0x1760e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1760E4u;
        goto label_1760e4;
    }
    ctx->pc = 0x1760DCu;
    {
        const bool branch_taken_0x1760dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1760E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760DCu;
        // 0x1760e0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760dc) {
            ctx->pc = 0x1760F4u;
            goto label_1760f4;
        }
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1760e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1760e8:
    // 0x1760e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1760ec:
    if (ctx->pc == 0x1760ECu) {
        ctx->pc = 0x1760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760E8u;
        // 0x1760ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1760F0u;
        goto label_1760f0;
    }
    ctx->pc = 0x1760E8u;
    {
        const bool branch_taken_0x1760e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760E8u;
        // 0x1760ec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760e8) {
            ctx->pc = 0x17610Cu;
            goto label_17610c;
        }
    }
    ctx->pc = 0x1760F0u;
label_1760f0:
    // 0x1760f0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1760f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1760f4:
    // 0x1760f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1760f8:
    // 0x1760f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1760f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1760fc:
    // 0x1760fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1760fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176100:
    // 0x176100: 0x0  nop
    ctx->pc = 0x176100u;
    // NOP
label_176104:
    // 0x176104: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x176104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_176108:
    // 0x176108: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x176108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17610c:
    // 0x17610c: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
label_176110:
    // 0x176110: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_176114:
    // 0x176114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x176114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176118:
    // 0x176118: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x176118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17611c:
    // 0x17611c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17611cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_176120:
    // 0x176120: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x176120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_176124:
    // 0x176124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x176124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176128:
    // 0x176128: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_17612c:
    // 0x17612c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x17612cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_176130:
    // 0x176130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176134:
    // 0x176134: 0x0  nop
    ctx->pc = 0x176134u;
    // NOP
label_176138:
    // 0x176138: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x176138u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_17613c:
    // 0x17613c: 0x0  nop
    ctx->pc = 0x17613cu;
    // NOP
label_176140:
    // 0x176140: 0x0  nop
    ctx->pc = 0x176140u;
    // NOP
label_176144:
    // 0x176144: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x176144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176148:
    // 0x176148: 0x0  nop
    ctx->pc = 0x176148u;
    // NOP
label_17614c:
    // 0x17614c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_176150:
    if (ctx->pc == 0x176150u) {
        ctx->pc = 0x176154u;
        goto label_176154;
    }
    ctx->pc = 0x17614Cu;
    {
        const bool branch_taken_0x17614c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17614c) {
            ctx->pc = 0x176158u;
            goto label_176158;
        }
    }
    ctx->pc = 0x176154u;
label_176154:
    // 0x176154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176158:
    // 0x176158: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_17615c:
    if (ctx->pc == 0x17615Cu) {
        ctx->pc = 0x17615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176158u;
        // 0x17615c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176160u;
        goto label_176160;
    }
    ctx->pc = 0x176158u;
    {
        const bool branch_taken_0x176158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176158u;
        // 0x17615c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176158) {
            ctx->pc = 0x176178u;
            goto label_176178;
        }
    }
    ctx->pc = 0x176160u;
label_176160:
    // 0x176160: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_176164:
    // 0x176164: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x176164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_176168:
    // 0x176168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x176168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17616c:
    // 0x17616c: 0x1000000e  b           . + 4 + (0xE << 2)
label_176170:
    if (ctx->pc == 0x176170u) {
        ctx->pc = 0x176170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17616Cu;
        // 0x176170: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x176174u;
        goto label_176174;
    }
    ctx->pc = 0x17616Cu;
    {
        const bool branch_taken_0x17616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17616Cu;
        // 0x176170: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17616c) {
            ctx->pc = 0x1761A8u;
            goto label_1761a8;
        }
    }
    ctx->pc = 0x176174u;
label_176174:
    // 0x176174: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x176174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_176178:
    // 0x176178: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x176178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17617c:
    // 0x17617c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17617cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_176180:
    // 0x176180: 0x0  nop
    ctx->pc = 0x176180u;
    // NOP
label_176184:
    // 0x176184: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_176188:
    // 0x176188: 0x0  nop
    ctx->pc = 0x176188u;
    // NOP
label_17618c:
    // 0x17618c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_176190:
    if (ctx->pc == 0x176190u) {
        ctx->pc = 0x176194u;
        goto label_176194;
    }
    ctx->pc = 0x17618Cu;
    {
        const bool branch_taken_0x17618c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17618c) {
            ctx->pc = 0x1761A8u;
            goto label_1761a8;
        }
    }
    ctx->pc = 0x176194u;
label_176194:
    // 0x176194: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x176194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_176198:
    // 0x176198: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17619c:
    // 0x17619c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17619cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1761a0:
    // 0x1761a0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1761a4:
    if (ctx->pc == 0x1761A4u) {
        ctx->pc = 0x1761A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761A0u;
        // 0x1761a4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1761A8u;
        goto label_1761a8;
    }
    ctx->pc = 0x1761A0u;
    {
        const bool branch_taken_0x1761a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761A0u;
        // 0x1761a4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761a0) {
            ctx->pc = 0x1761A8u;
            goto label_1761a8;
        }
    }
    ctx->pc = 0x1761A8u;
label_1761a8:
    // 0x1761a8: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x1761a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_1761ac:
    // 0x1761ac: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1761b0:
    // 0x1761b0: 0x92a70004  lbu         $a3, 0x4($s5)
    ctx->pc = 0x1761b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_1761b4:
    // 0x1761b4: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1761b8:
    // 0x1761b8: 0x34655556  ori         $a1, $v1, 0x5556
    ctx->pc = 0x1761b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1761bc:
    // 0x1761bc: 0x24c63b8e  addiu       $a2, $a2, 0x3B8E
    ctx->pc = 0x1761bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15246));
label_1761c0:
    // 0x1761c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1761c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1761c4:
    // 0x1761c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1761c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1761c8:
    // 0x1761c8: 0xa2670020  sb          $a3, 0x20($s3)
    ctx->pc = 0x1761c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 7));
label_1761cc:
    // 0x1761cc: 0xa660002c  sh          $zero, 0x2C($s3)
    ctx->pc = 0x1761ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 0));
label_1761d0:
    // 0x1761d0: 0xa2600046  sb          $zero, 0x46($s3)
    ctx->pc = 0x1761d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 70), (uint8_t)GPR_U32(ctx, 0));
label_1761d4:
    // 0x1761d4: 0x96a8000a  lhu         $t0, 0xA($s5)
    ctx->pc = 0x1761d4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
label_1761d8:
    // 0x1761d8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1761d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1761dc:
    // 0x1761dc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1761dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1761e0:
    // 0x1761e0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1761e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1761e4:
    // 0x1761e4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1761e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1761e8:
    // 0x1761e8: 0xa2660047  sb          $a2, 0x47($s3)
    ctx->pc = 0x1761e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 71), (uint8_t)GPR_U32(ctx, 6));
label_1761ec:
    // 0x1761ec: 0x92a60010  lbu         $a2, 0x10($s5)
    ctx->pc = 0x1761ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_1761f0:
    // 0x1761f0: 0xa266002a  sb          $a2, 0x2A($s3)
    ctx->pc = 0x1761f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 6));
label_1761f4:
    // 0x1761f4: 0x86a60008  lh          $a2, 0x8($s5)
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_1761f8:
    // 0x1761f8: 0xa666002e  sh          $a2, 0x2E($s3)
    ctx->pc = 0x1761f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 6));
label_1761fc:
    // 0x1761fc: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x1761fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_176200:
    // 0x176200: 0x92a70010  lbu         $a3, 0x10($s5)
    ctx->pc = 0x176200u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_176204:
    // 0x176204: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x176204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_176208:
    // 0x176208: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x176208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17620c:
    // 0x17620c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_176210:
    // 0x176210: 0x0  nop
    ctx->pc = 0x176210u;
    // NOP
label_176214:
    // 0x176214: 0x2810  mfhi        $a1
    ctx->pc = 0x176214u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_176218:
    // 0x176218: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x176218u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_17621c:
    // 0x17621c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_176220:
    // 0x176220: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x176220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_176224:
    // 0x176224: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x176224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_176228:
    // 0x176228: 0xa6650030  sh          $a1, 0x30($s3)
    ctx->pc = 0x176228u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 5));
label_17622c:
    // 0x17622c: 0xa6650032  sh          $a1, 0x32($s3)
    ctx->pc = 0x17622cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 5));
label_176230:
    // 0x176230: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x176230u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_176234:
    // 0x176234: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176238:
    // 0x176238: 0x252924b0  addiu       $t1, $t1, 0x24B0
    ctx->pc = 0x176238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9392));
label_17623c:
    // 0x17623c: 0x1235021  addu        $t2, $t1, $v1
    ctx->pc = 0x17623cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_176240:
    // 0x176240: 0x91450002  lbu         $a1, 0x2($t2)
    ctx->pc = 0x176240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_176244:
    // 0x176244: 0x10a8000a  beq         $a1, $t0, . + 4 + (0xA << 2)
label_176248:
    if (ctx->pc == 0x176248u) {
        ctx->pc = 0x17624Cu;
        goto label_17624c;
    }
    ctx->pc = 0x176244u;
    {
        const bool branch_taken_0x176244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x176244) {
            ctx->pc = 0x176270u;
            goto label_176270;
        }
    }
    ctx->pc = 0x17624Cu;
label_17624c:
    // 0x17624c: 0x92a70006  lbu         $a3, 0x6($s5)
    ctx->pc = 0x17624cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_176250:
    // 0x176250: 0x91450000  lbu         $a1, 0x0($t2)
    ctx->pc = 0x176250u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_176254:
    // 0x176254: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x176254u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
label_176258:
    // 0x176258: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
label_17625c:
    if (ctx->pc == 0x17625Cu) {
        ctx->pc = 0x176260u;
        goto label_176260;
    }
    ctx->pc = 0x176258u;
    {
        const bool branch_taken_0x176258 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x176258) {
            ctx->pc = 0x176270u;
            goto label_176270;
        }
    }
    ctx->pc = 0x176260u;
label_176260:
    // 0x176260: 0x91450001  lbu         $a1, 0x1($t2)
    ctx->pc = 0x176260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_176264:
    // 0x176264: 0x30e6000f  andi        $a2, $a3, 0xF
    ctx->pc = 0x176264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
label_176268:
    // 0x176268: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
label_17626c:
    if (ctx->pc == 0x17626Cu) {
        ctx->pc = 0x176270u;
        goto label_176270;
    }
    ctx->pc = 0x176268u;
    {
        const bool branch_taken_0x176268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x176268) {
            ctx->pc = 0x176280u;
            goto label_176280;
        }
    }
    ctx->pc = 0x176270u;
label_176270:
    // 0x176270: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x176270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_176274:
    // 0x176274: 0x28850010  slti        $a1, $a0, 0x10
    ctx->pc = 0x176274u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_176278:
    // 0x176278: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
label_17627c:
    if (ctx->pc == 0x17627Cu) {
        ctx->pc = 0x17627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176278u;
        // 0x17627c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176280u;
        goto label_176280;
    }
    ctx->pc = 0x176278u;
    {
        const bool branch_taken_0x176278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176278u;
        // 0x17627c: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176278) {
            ctx->pc = 0x17623Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17623c;
        }
    }
    ctx->pc = 0x176280u;
label_176280:
    // 0x176280: 0xa264003f  sb          $a0, 0x3F($s3)
    ctx->pc = 0x176280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 63), (uint8_t)GPR_U32(ctx, 4));
label_176284:
    // 0x176284: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_176288:
    // 0x176288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17628c:
    // 0x17628c: 0xa2640039  sb          $a0, 0x39($s3)
    ctx->pc = 0x17628cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 57), (uint8_t)GPR_U32(ctx, 4));
label_176290:
    // 0x176290: 0xa2630045  sb          $v1, 0x45($s3)
    ctx->pc = 0x176290u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 69), (uint8_t)GPR_U32(ctx, 3));
label_176294:
    // 0x176294: 0x92a40005  lbu         $a0, 0x5($s5)
    ctx->pc = 0x176294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_176298:
    // 0x176298: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_17629c:
    if (ctx->pc == 0x17629Cu) {
        ctx->pc = 0x17629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176298u;
        // 0x17629c: 0x26650022  addiu       $a1, $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1762A0u;
        goto label_1762a0;
    }
    ctx->pc = 0x176298u;
    {
        const bool branch_taken_0x176298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176298u;
        // 0x17629c: 0x26650022  addiu       $a1, $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176298) {
            ctx->pc = 0x1762C4u;
            goto label_1762c4;
        }
    }
    ctx->pc = 0x1762A0u;
label_1762a0:
    // 0x1762a0: 0x82650022  lb          $a1, 0x22($s3)
    ctx->pc = 0x1762a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_1762a4:
    // 0x1762a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1762a8:
    // 0x1762a8: 0x82640023  lb          $a0, 0x23($s3)
    ctx->pc = 0x1762a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_1762ac:
    // 0x1762ac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1762b0:
    // 0x1762b0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1762b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1762b4:
    // 0x1762b4: 0xa2a40005  sb          $a0, 0x5($s5)
    ctx->pc = 0x1762b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 4));
label_1762b8:
    // 0x1762b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1762bc:
    if (ctx->pc == 0x1762BCu) {
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0xa2630037  sb          $v1, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1762C0u;
        goto label_1762c0;
    }
    ctx->pc = 0x1762B8u;
    {
        const bool branch_taken_0x1762b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0xa2630037  sb          $v1, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762b8) {
            ctx->pc = 0x1762D0u;
            goto label_1762d0;
        }
    }
    ctx->pc = 0x1762C0u;
label_1762c0:
    // 0x1762c0: 0x26650022  addiu       $a1, $s3, 0x22
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
label_1762c4:
    // 0x1762c4: 0xc0448dc  jal         func_112370
label_1762c8:
    if (ctx->pc == 0x1762C8u) {
        ctx->pc = 0x1762CCu;
        goto label_1762cc;
    }
    ctx->pc = 0x1762C4u;
    SET_GPR_U32(ctx, 31, 0x1762CCu);
    ctx->pc = 0x112370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112370u, 0x1762C4u, 0x1762CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762CCu;
label_1762cc:
    // 0x1762cc: 0xa2620037  sb          $v0, 0x37($s3)
    ctx->pc = 0x1762ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
label_1762d0:
    // 0x1762d0: 0x92a40014  lbu         $a0, 0x14($s5)
    ctx->pc = 0x1762d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
label_1762d4:
    // 0x1762d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1762d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1762d8:
    // 0x1762d8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_1762dc:
    if (ctx->pc == 0x1762DCu) {
        ctx->pc = 0x1762E0u;
        goto label_1762e0;
    }
    ctx->pc = 0x1762D8u;
    {
        const bool branch_taken_0x1762d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1762d8) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x1762E0u;
label_1762e0:
    // 0x1762e0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1762e4:
    // 0x1762e4: 0x9023497c  lbu         $v1, 0x497C($at)
    ctx->pc = 0x1762e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1762e8:
    // 0x1762e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1762ec:
    if (ctx->pc == 0x1762ECu) {
        ctx->pc = 0x1762F0u;
        goto label_1762f0;
    }
    ctx->pc = 0x1762E8u;
    {
        const bool branch_taken_0x1762e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1762e8) {
            ctx->pc = 0x176318u;
            goto label_176318;
        }
    }
    ctx->pc = 0x1762F0u;
label_1762f0:
    // 0x1762f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1762f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1762f4:
    // 0x1762f4: 0x92640034  lbu         $a0, 0x34($s3)
    ctx->pc = 0x1762f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_1762f8:
    // 0x1762f8: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_1762fc:
    // 0x1762fc: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_176300:
    if (ctx->pc == 0x176300u) {
        ctx->pc = 0x176304u;
        goto label_176304;
    }
    ctx->pc = 0x1762FCu;
    {
        const bool branch_taken_0x1762fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1762fc) {
            ctx->pc = 0x176318u;
            goto label_176318;
        }
    }
    ctx->pc = 0x176304u;
label_176304:
    // 0x176304: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176308:
    // 0x176308: 0x92a40016  lbu         $a0, 0x16($s5)
    ctx->pc = 0x176308u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_17630c:
    // 0x17630c: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_176310:
    // 0x176310: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_176314:
    if (ctx->pc == 0x176314u) {
        ctx->pc = 0x176318u;
        goto label_176318;
    }
    ctx->pc = 0x176310u;
    {
        const bool branch_taken_0x176310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176310) {
            ctx->pc = 0x176350u;
            goto label_176350;
        }
    }
    ctx->pc = 0x176318u;
label_176318:
    // 0x176318: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17631c:
    // 0x17631c: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x17631cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_176320:
    // 0x176320: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_176324:
    if (ctx->pc == 0x176324u) {
        ctx->pc = 0x176328u;
        goto label_176328;
    }
    ctx->pc = 0x176320u;
    {
        const bool branch_taken_0x176320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176320) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x176328u;
label_176328:
    // 0x176328: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17632c:
    // 0x17632c: 0x92640034  lbu         $a0, 0x34($s3)
    ctx->pc = 0x17632cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_176330:
    // 0x176330: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x176330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_176334:
    // 0x176334: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_176338:
    if (ctx->pc == 0x176338u) {
        ctx->pc = 0x17633Cu;
        goto label_17633c;
    }
    ctx->pc = 0x176334u;
    {
        const bool branch_taken_0x176334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176334) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x17633Cu;
label_17633c:
    // 0x17633c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176340:
    // 0x176340: 0x92a40016  lbu         $a0, 0x16($s5)
    ctx->pc = 0x176340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 22)));
label_176344:
    // 0x176344: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_176348:
    // 0x176348: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_17634c:
    if (ctx->pc == 0x17634Cu) {
        ctx->pc = 0x176350u;
        goto label_176350;
    }
    ctx->pc = 0x176348u;
    {
        const bool branch_taken_0x176348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176348) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x176350u;
label_176350:
    // 0x176350: 0xa2a00016  sb          $zero, 0x16($s5)
    ctx->pc = 0x176350u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 22), (uint8_t)GPR_U32(ctx, 0));
label_176354:
    // 0x176354: 0xa260002a  sb          $zero, 0x2A($s3)
    ctx->pc = 0x176354u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
label_176358:
    // 0x176358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17635c:
    // 0x17635c: 0xa660002e  sh          $zero, 0x2E($s3)
    ctx->pc = 0x17635cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 0));
label_176360:
    // 0x176360: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x176360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_176364:
    // 0x176364: 0xa263003d  sb          $v1, 0x3D($s3)
    ctx->pc = 0x176364u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 61), (uint8_t)GPR_U32(ctx, 3));
label_176368:
    // 0x176368: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x176368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17636c:
    // 0x17636c: 0xa2640038  sb          $a0, 0x38($s3)
    ctx->pc = 0x17636cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 4));
label_176370:
    // 0x176370: 0x34637e40  ori         $v1, $v1, 0x7E40
    ctx->pc = 0x176370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32320);
label_176374:
    // 0x176374: 0x10000028  b           . + 4 + (0x28 << 2)
label_176378:
    if (ctx->pc == 0x176378u) {
        ctx->pc = 0x176378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176374u;
        // 0x176378: 0xae830228  sw          $v1, 0x228($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17637Cu;
        goto label_17637c;
    }
    ctx->pc = 0x176374u;
    {
        const bool branch_taken_0x176374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176374u;
        // 0x176378: 0xae830228  sw          $v1, 0x228($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176374) {
            ctx->pc = 0x176418u;
            goto label_176418;
        }
    }
    ctx->pc = 0x17637Cu;
label_17637c:
    // 0x17637c: 0x9264003d  lbu         $a0, 0x3D($s3)
    ctx->pc = 0x17637cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 61)));
label_176380:
    // 0x176380: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_176384:
    if (ctx->pc == 0x176384u) {
        ctx->pc = 0x176388u;
        goto label_176388;
    }
    ctx->pc = 0x176380u;
    {
        const bool branch_taken_0x176380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176380) {
            ctx->pc = 0x176418u;
            goto label_176418;
        }
    }
    ctx->pc = 0x176388u;
label_176388:
    // 0x176388: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x176388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_17638c:
    // 0x17638c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17638cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176390:
    // 0x176390: 0xa663002e  sh          $v1, 0x2E($s3)
    ctx->pc = 0x176390u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 46), (uint16_t)GPR_U32(ctx, 3));
label_176394:
    // 0x176394: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x176394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_176398:
    // 0x176398: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x176398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_17639c:
    // 0x17639c: 0xa263002a  sb          $v1, 0x2A($s3)
    ctx->pc = 0x17639cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 3));
label_1763a0:
    // 0x1763a0: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1763a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1763a4:
    // 0x1763a4: 0xae830228  sw          $v1, 0x228($s4)
    ctx->pc = 0x1763a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 552), GPR_U32(ctx, 3));
label_1763a8:
    // 0x1763a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1763a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1763ac:
    // 0x1763ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1763acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1763b0:
    // 0x1763b0: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x1763b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
label_1763b4:
    // 0x1763b4: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
label_1763b8:
    if (ctx->pc == 0x1763B8u) {
        ctx->pc = 0x1763BCu;
        goto label_1763bc;
    }
    ctx->pc = 0x1763B4u;
    {
        const bool branch_taken_0x1763b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1763b4) {
            ctx->pc = 0x1763C4u;
            goto label_1763c4;
        }
    }
    ctx->pc = 0x1763BCu;
label_1763bc:
    // 0x1763bc: 0x16510012  bne         $s2, $s1, . + 4 + (0x12 << 2)
label_1763c0:
    if (ctx->pc == 0x1763C0u) {
        ctx->pc = 0x1763C4u;
        goto label_1763c4;
    }
    ctx->pc = 0x1763BCu;
    {
        const bool branch_taken_0x1763bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1763bc) {
            ctx->pc = 0x176408u;
            goto label_176408;
        }
    }
    ctx->pc = 0x1763C4u;
label_1763c4:
    // 0x1763c4: 0x0  nop
    ctx->pc = 0x1763c4u;
    // NOP
label_1763c8:
    // 0x1763c8: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x1763c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_1763cc:
    // 0x1763cc: 0x1470000e  bne         $v1, $s0, . + 4 + (0xE << 2)
label_1763d0:
    if (ctx->pc == 0x1763D0u) {
        ctx->pc = 0x1763D4u;
        goto label_1763d4;
    }
    ctx->pc = 0x1763CCu;
    {
        const bool branch_taken_0x1763cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1763cc) {
            ctx->pc = 0x176408u;
            goto label_176408;
        }
    }
    ctx->pc = 0x1763D4u;
label_1763d4:
    // 0x1763d4: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x1763d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1763d8:
    // 0x1763d8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1763d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1763dc:
    // 0x1763dc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1763e0:
    if (ctx->pc == 0x1763E0u) {
        ctx->pc = 0x1763E4u;
        goto label_1763e4;
    }
    ctx->pc = 0x1763DCu;
    {
        const bool branch_taken_0x1763dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1763dc) {
            ctx->pc = 0x1763FCu;
            goto label_1763fc;
        }
    }
    ctx->pc = 0x1763E4u;
label_1763e4:
    // 0x1763e4: 0x16510008  bne         $s2, $s1, . + 4 + (0x8 << 2)
label_1763e8:
    if (ctx->pc == 0x1763E8u) {
        ctx->pc = 0x1763ECu;
        goto label_1763ec;
    }
    ctx->pc = 0x1763E4u;
    {
        const bool branch_taken_0x1763e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1763e4) {
            ctx->pc = 0x176408u;
            goto label_176408;
        }
    }
    ctx->pc = 0x1763ECu;
label_1763ec:
    // 0x1763ec: 0xc05d914  jal         func_176450
label_1763f0:
    if (ctx->pc == 0x1763F0u) {
        ctx->pc = 0x1763F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763ECu;
        // 0x1763f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1763F4u;
        goto label_1763f4;
    }
    ctx->pc = 0x1763ECu;
    SET_GPR_U32(ctx, 31, 0x1763F4u);
    ctx->pc = 0x1763F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763ECu;
    // 0x1763f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176450u;
    goto label_176450;
    ctx->pc = 0x1763F4u;
label_1763f4:
    // 0x1763f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1763f8:
    if (ctx->pc == 0x1763F8u) {
        ctx->pc = 0x1763FCu;
        goto label_1763fc;
    }
    ctx->pc = 0x1763F4u;
    {
        const bool branch_taken_0x1763f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763f4) {
            ctx->pc = 0x176408u;
            goto label_176408;
        }
    }
    ctx->pc = 0x1763FCu;
label_1763fc:
    // 0x1763fc: 0x0  nop
    ctx->pc = 0x1763fcu;
    // NOP
label_176400:
    // 0x176400: 0xc05d914  jal         func_176450
label_176404:
    if (ctx->pc == 0x176404u) {
        ctx->pc = 0x176404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176400u;
        // 0x176404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176408u;
        goto label_176408;
    }
    ctx->pc = 0x176400u;
    SET_GPR_U32(ctx, 31, 0x176408u);
    ctx->pc = 0x176404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176400u;
    // 0x176404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176450u;
    goto label_176450;
    ctx->pc = 0x176408u;
label_176408:
    // 0x176408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x176408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17640c:
    // 0x17640c: 0x2a4300ff  slti        $v1, $s2, 0xFF
    ctx->pc = 0x17640cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_176410:
    // 0x176410: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_176414:
    if (ctx->pc == 0x176414u) {
        ctx->pc = 0x176414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176410u;
        // 0x176414: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176418u;
        goto label_176418;
    }
    ctx->pc = 0x176410u;
    {
        const bool branch_taken_0x176410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176410u;
        // 0x176414: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176410) {
            ctx->pc = 0x1763ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1763ac;
        }
    }
    ctx->pc = 0x176418u;
label_176418:
    // 0x176418: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x176418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17641c:
    // 0x17641c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17641cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_176420:
    // 0x176420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_176424:
    // 0x176424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176428:
    // 0x176428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17642c:
    // 0x17642c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17642cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176430:
    // 0x176430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176434:
    // 0x176434: 0x3e00008  jr          $ra
label_176438:
    if (ctx->pc == 0x176438u) {
        ctx->pc = 0x176438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176434u;
        // 0x176438: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17643Cu;
        goto label_17643c;
    }
    ctx->pc = 0x176434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176434u;
        // 0x176438: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17643Cu;
label_17643c:
    // 0x17643c: 0x0  nop
    ctx->pc = 0x17643cu;
    // NOP
label_176440:
    // 0x176440: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176444:
    // 0x176444: 0x3e00008  jr          $ra
label_176448:
    if (ctx->pc == 0x176448u) {
        ctx->pc = 0x176448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176444u;
        // 0x176448: 0xa0830036  sb          $v1, 0x36($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17644Cu;
        goto label_17644c;
    }
    ctx->pc = 0x176444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176444u;
        // 0x176448: 0xa0830036  sb          $v1, 0x36($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17644Cu;
label_17644c:
    // 0x17644c: 0x0  nop
    ctx->pc = 0x17644cu;
    // NOP
label_176450:
    // 0x176450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176454:
    // 0x176454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176458:
    // 0x176458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17645c:
    // 0x17645c: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x17645cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
label_176460:
    // 0x176460: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_176464:
    if (ctx->pc == 0x176464u) {
        ctx->pc = 0x176464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176460u;
        // 0x176464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176468u;
        goto label_176468;
    }
    ctx->pc = 0x176460u;
    {
        const bool branch_taken_0x176460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176460u;
        // 0x176464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176460) {
            ctx->pc = 0x1765ACu;
            { ctx->pc = 0x1765ac; return; }
        }
    }
    ctx->pc = 0x176468u;
label_176468:
    // 0x176468: 0xa200003d  sb          $zero, 0x3D($s0)
    ctx->pc = 0x176468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 0));
label_17646c:
    // 0x17646c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x176470u;
    return;
}
