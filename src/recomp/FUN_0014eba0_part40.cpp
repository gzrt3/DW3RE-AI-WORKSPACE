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


void FUN_0014eba0_part40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x161c50u: goto label_161c50;
        case 0x161c54u: goto label_161c54;
        case 0x161c58u: goto label_161c58;
        case 0x161c5cu: goto label_161c5c;
        case 0x161c60u: goto label_161c60;
        case 0x161c64u: goto label_161c64;
        case 0x161c68u: goto label_161c68;
        case 0x161c6cu: goto label_161c6c;
        case 0x161c70u: goto label_161c70;
        case 0x161c74u: goto label_161c74;
        case 0x161c78u: goto label_161c78;
        case 0x161c7cu: goto label_161c7c;
        case 0x161c80u: goto label_161c80;
        case 0x161c84u: goto label_161c84;
        case 0x161c88u: goto label_161c88;
        case 0x161c8cu: goto label_161c8c;
        case 0x161c90u: goto label_161c90;
        case 0x161c94u: goto label_161c94;
        case 0x161c98u: goto label_161c98;
        case 0x161c9cu: goto label_161c9c;
        case 0x161ca0u: goto label_161ca0;
        case 0x161ca4u: goto label_161ca4;
        case 0x161ca8u: goto label_161ca8;
        case 0x161cacu: goto label_161cac;
        case 0x161cb0u: goto label_161cb0;
        case 0x161cb4u: goto label_161cb4;
        case 0x161cb8u: goto label_161cb8;
        case 0x161cbcu: goto label_161cbc;
        case 0x161cc0u: goto label_161cc0;
        case 0x161cc4u: goto label_161cc4;
        case 0x161cc8u: goto label_161cc8;
        case 0x161cccu: goto label_161ccc;
        case 0x161cd0u: goto label_161cd0;
        case 0x161cd4u: goto label_161cd4;
        case 0x161cd8u: goto label_161cd8;
        case 0x161cdcu: goto label_161cdc;
        case 0x161ce0u: goto label_161ce0;
        case 0x161ce4u: goto label_161ce4;
        case 0x161ce8u: goto label_161ce8;
        case 0x161cecu: goto label_161cec;
        case 0x161cf0u: goto label_161cf0;
        case 0x161cf4u: goto label_161cf4;
        case 0x161cf8u: goto label_161cf8;
        case 0x161cfcu: goto label_161cfc;
        case 0x161d00u: goto label_161d00;
        case 0x161d04u: goto label_161d04;
        case 0x161d08u: goto label_161d08;
        case 0x161d0cu: goto label_161d0c;
        case 0x161d10u: goto label_161d10;
        case 0x161d14u: goto label_161d14;
        case 0x161d18u: goto label_161d18;
        case 0x161d1cu: goto label_161d1c;
        case 0x161d20u: goto label_161d20;
        case 0x161d24u: goto label_161d24;
        case 0x161d28u: goto label_161d28;
        case 0x161d2cu: goto label_161d2c;
        case 0x161d30u: goto label_161d30;
        case 0x161d34u: goto label_161d34;
        case 0x161d38u: goto label_161d38;
        case 0x161d3cu: goto label_161d3c;
        case 0x161d40u: goto label_161d40;
        case 0x161d44u: goto label_161d44;
        case 0x161d48u: goto label_161d48;
        case 0x161d4cu: goto label_161d4c;
        case 0x161d50u: goto label_161d50;
        case 0x161d54u: goto label_161d54;
        case 0x161d58u: goto label_161d58;
        case 0x161d5cu: goto label_161d5c;
        case 0x161d60u: goto label_161d60;
        case 0x161d64u: goto label_161d64;
        case 0x161d68u: goto label_161d68;
        case 0x161d6cu: goto label_161d6c;
        case 0x161d70u: goto label_161d70;
        case 0x161d74u: goto label_161d74;
        case 0x161d78u: goto label_161d78;
        case 0x161d7cu: goto label_161d7c;
        case 0x161d80u: goto label_161d80;
        case 0x161d84u: goto label_161d84;
        case 0x161d88u: goto label_161d88;
        case 0x161d8cu: goto label_161d8c;
        case 0x161d90u: goto label_161d90;
        case 0x161d94u: goto label_161d94;
        case 0x161d98u: goto label_161d98;
        case 0x161d9cu: goto label_161d9c;
        case 0x161da0u: goto label_161da0;
        case 0x161da4u: goto label_161da4;
        case 0x161da8u: goto label_161da8;
        case 0x161dacu: goto label_161dac;
        case 0x161db0u: goto label_161db0;
        case 0x161db4u: goto label_161db4;
        case 0x161db8u: goto label_161db8;
        case 0x161dbcu: goto label_161dbc;
        case 0x161dc0u: goto label_161dc0;
        case 0x161dc4u: goto label_161dc4;
        case 0x161dc8u: goto label_161dc8;
        case 0x161dccu: goto label_161dcc;
        case 0x161dd0u: goto label_161dd0;
        case 0x161dd4u: goto label_161dd4;
        case 0x161dd8u: goto label_161dd8;
        case 0x161ddcu: goto label_161ddc;
        case 0x161de0u: goto label_161de0;
        case 0x161de4u: goto label_161de4;
        case 0x161de8u: goto label_161de8;
        case 0x161decu: goto label_161dec;
        case 0x161df0u: goto label_161df0;
        case 0x161df4u: goto label_161df4;
        case 0x161df8u: goto label_161df8;
        case 0x161dfcu: goto label_161dfc;
        case 0x161e00u: goto label_161e00;
        case 0x161e04u: goto label_161e04;
        case 0x161e08u: goto label_161e08;
        case 0x161e0cu: goto label_161e0c;
        case 0x161e10u: goto label_161e10;
        case 0x161e14u: goto label_161e14;
        case 0x161e18u: goto label_161e18;
        case 0x161e1cu: goto label_161e1c;
        case 0x161e20u: goto label_161e20;
        case 0x161e24u: goto label_161e24;
        case 0x161e28u: goto label_161e28;
        case 0x161e2cu: goto label_161e2c;
        case 0x161e30u: goto label_161e30;
        case 0x161e34u: goto label_161e34;
        case 0x161e38u: goto label_161e38;
        case 0x161e3cu: goto label_161e3c;
        case 0x161e40u: goto label_161e40;
        case 0x161e44u: goto label_161e44;
        case 0x161e48u: goto label_161e48;
        case 0x161e4cu: goto label_161e4c;
        case 0x161e50u: goto label_161e50;
        case 0x161e54u: goto label_161e54;
        case 0x161e58u: goto label_161e58;
        case 0x161e5cu: goto label_161e5c;
        case 0x161e60u: goto label_161e60;
        case 0x161e64u: goto label_161e64;
        case 0x161e68u: goto label_161e68;
        case 0x161e6cu: goto label_161e6c;
        case 0x161e70u: goto label_161e70;
        case 0x161e74u: goto label_161e74;
        case 0x161e78u: goto label_161e78;
        case 0x161e7cu: goto label_161e7c;
        case 0x161e80u: goto label_161e80;
        case 0x161e84u: goto label_161e84;
        case 0x161e88u: goto label_161e88;
        case 0x161e8cu: goto label_161e8c;
        case 0x161e90u: goto label_161e90;
        case 0x161e94u: goto label_161e94;
        case 0x161e98u: goto label_161e98;
        case 0x161e9cu: goto label_161e9c;
        case 0x161ea0u: goto label_161ea0;
        case 0x161ea4u: goto label_161ea4;
        case 0x161ea8u: goto label_161ea8;
        case 0x161eacu: goto label_161eac;
        case 0x161eb0u: goto label_161eb0;
        case 0x161eb4u: goto label_161eb4;
        case 0x161eb8u: goto label_161eb8;
        case 0x161ebcu: goto label_161ebc;
        case 0x161ec0u: goto label_161ec0;
        case 0x161ec4u: goto label_161ec4;
        case 0x161ec8u: goto label_161ec8;
        case 0x161eccu: goto label_161ecc;
        case 0x161ed0u: goto label_161ed0;
        case 0x161ed4u: goto label_161ed4;
        case 0x161ed8u: goto label_161ed8;
        case 0x161edcu: goto label_161edc;
        case 0x161ee0u: goto label_161ee0;
        case 0x161ee4u: goto label_161ee4;
        case 0x161ee8u: goto label_161ee8;
        case 0x161eecu: goto label_161eec;
        case 0x161ef0u: goto label_161ef0;
        case 0x161ef4u: goto label_161ef4;
        case 0x161ef8u: goto label_161ef8;
        case 0x161efcu: goto label_161efc;
        case 0x161f00u: goto label_161f00;
        case 0x161f04u: goto label_161f04;
        case 0x161f08u: goto label_161f08;
        case 0x161f0cu: goto label_161f0c;
        case 0x161f10u: goto label_161f10;
        case 0x161f14u: goto label_161f14;
        case 0x161f18u: goto label_161f18;
        case 0x161f1cu: goto label_161f1c;
        case 0x161f20u: goto label_161f20;
        case 0x161f24u: goto label_161f24;
        case 0x161f28u: goto label_161f28;
        case 0x161f2cu: goto label_161f2c;
        case 0x161f30u: goto label_161f30;
        case 0x161f34u: goto label_161f34;
        case 0x161f38u: goto label_161f38;
        case 0x161f3cu: goto label_161f3c;
        case 0x161f40u: goto label_161f40;
        case 0x161f44u: goto label_161f44;
        case 0x161f48u: goto label_161f48;
        case 0x161f4cu: goto label_161f4c;
        case 0x161f50u: goto label_161f50;
        case 0x161f54u: goto label_161f54;
        case 0x161f58u: goto label_161f58;
        case 0x161f5cu: goto label_161f5c;
        case 0x161f60u: goto label_161f60;
        case 0x161f64u: goto label_161f64;
        case 0x161f68u: goto label_161f68;
        case 0x161f6cu: goto label_161f6c;
        case 0x161f70u: goto label_161f70;
        case 0x161f74u: goto label_161f74;
        case 0x161f78u: goto label_161f78;
        case 0x161f7cu: goto label_161f7c;
        case 0x161f80u: goto label_161f80;
        case 0x161f84u: goto label_161f84;
        case 0x161f88u: goto label_161f88;
        case 0x161f8cu: goto label_161f8c;
        case 0x161f90u: goto label_161f90;
        case 0x161f94u: goto label_161f94;
        case 0x161f98u: goto label_161f98;
        case 0x161f9cu: goto label_161f9c;
        case 0x161fa0u: goto label_161fa0;
        case 0x161fa4u: goto label_161fa4;
        case 0x161fa8u: goto label_161fa8;
        case 0x161facu: goto label_161fac;
        case 0x161fb0u: goto label_161fb0;
        case 0x161fb4u: goto label_161fb4;
        case 0x161fb8u: goto label_161fb8;
        case 0x161fbcu: goto label_161fbc;
        case 0x161fc0u: goto label_161fc0;
        case 0x161fc4u: goto label_161fc4;
        case 0x161fc8u: goto label_161fc8;
        case 0x161fccu: goto label_161fcc;
        case 0x161fd0u: goto label_161fd0;
        case 0x161fd4u: goto label_161fd4;
        case 0x161fd8u: goto label_161fd8;
        case 0x161fdcu: goto label_161fdc;
        case 0x161fe0u: goto label_161fe0;
        case 0x161fe4u: goto label_161fe4;
        case 0x161fe8u: goto label_161fe8;
        case 0x161fecu: goto label_161fec;
        case 0x161ff0u: goto label_161ff0;
        case 0x161ff4u: goto label_161ff4;
        case 0x161ff8u: goto label_161ff8;
        case 0x161ffcu: goto label_161ffc;
        case 0x162000u: goto label_162000;
        case 0x162004u: goto label_162004;
        case 0x162008u: goto label_162008;
        case 0x16200cu: goto label_16200c;
        case 0x162010u: goto label_162010;
        case 0x162014u: goto label_162014;
        case 0x162018u: goto label_162018;
        case 0x16201cu: goto label_16201c;
        case 0x162020u: goto label_162020;
        case 0x162024u: goto label_162024;
        case 0x162028u: goto label_162028;
        case 0x16202cu: goto label_16202c;
        case 0x162030u: goto label_162030;
        case 0x162034u: goto label_162034;
        case 0x162038u: goto label_162038;
        case 0x16203cu: goto label_16203c;
        case 0x162040u: goto label_162040;
        case 0x162044u: goto label_162044;
        case 0x162048u: goto label_162048;
        case 0x16204cu: goto label_16204c;
        case 0x162050u: goto label_162050;
        case 0x162054u: goto label_162054;
        case 0x162058u: goto label_162058;
        case 0x16205cu: goto label_16205c;
        case 0x162060u: goto label_162060;
        case 0x162064u: goto label_162064;
        case 0x162068u: goto label_162068;
        case 0x16206cu: goto label_16206c;
        case 0x162070u: goto label_162070;
        case 0x162074u: goto label_162074;
        case 0x162078u: goto label_162078;
        case 0x16207cu: goto label_16207c;
        case 0x162080u: goto label_162080;
        case 0x162084u: goto label_162084;
        case 0x162088u: goto label_162088;
        case 0x16208cu: goto label_16208c;
        case 0x162090u: goto label_162090;
        case 0x162094u: goto label_162094;
        case 0x162098u: goto label_162098;
        case 0x16209cu: goto label_16209c;
        case 0x1620a0u: goto label_1620a0;
        case 0x1620a4u: goto label_1620a4;
        case 0x1620a8u: goto label_1620a8;
        case 0x1620acu: goto label_1620ac;
        case 0x1620b0u: goto label_1620b0;
        case 0x1620b4u: goto label_1620b4;
        case 0x1620b8u: goto label_1620b8;
        case 0x1620bcu: goto label_1620bc;
        case 0x1620c0u: goto label_1620c0;
        case 0x1620c4u: goto label_1620c4;
        case 0x1620c8u: goto label_1620c8;
        case 0x1620ccu: goto label_1620cc;
        case 0x1620d0u: goto label_1620d0;
        case 0x1620d4u: goto label_1620d4;
        case 0x1620d8u: goto label_1620d8;
        case 0x1620dcu: goto label_1620dc;
        case 0x1620e0u: goto label_1620e0;
        case 0x1620e4u: goto label_1620e4;
        case 0x1620e8u: goto label_1620e8;
        case 0x1620ecu: goto label_1620ec;
        case 0x1620f0u: goto label_1620f0;
        case 0x1620f4u: goto label_1620f4;
        case 0x1620f8u: goto label_1620f8;
        case 0x1620fcu: goto label_1620fc;
        case 0x162100u: goto label_162100;
        case 0x162104u: goto label_162104;
        case 0x162108u: goto label_162108;
        case 0x16210cu: goto label_16210c;
        case 0x162110u: goto label_162110;
        case 0x162114u: goto label_162114;
        case 0x162118u: goto label_162118;
        case 0x16211cu: goto label_16211c;
        case 0x162120u: goto label_162120;
        case 0x162124u: goto label_162124;
        case 0x162128u: goto label_162128;
        case 0x16212cu: goto label_16212c;
        case 0x162130u: goto label_162130;
        case 0x162134u: goto label_162134;
        case 0x162138u: goto label_162138;
        case 0x16213cu: goto label_16213c;
        case 0x162140u: goto label_162140;
        case 0x162144u: goto label_162144;
        case 0x162148u: goto label_162148;
        case 0x16214cu: goto label_16214c;
        case 0x162150u: goto label_162150;
        case 0x162154u: goto label_162154;
        case 0x162158u: goto label_162158;
        case 0x16215cu: goto label_16215c;
        case 0x162160u: goto label_162160;
        case 0x162164u: goto label_162164;
        case 0x162168u: goto label_162168;
        case 0x16216cu: goto label_16216c;
        case 0x162170u: goto label_162170;
        case 0x162174u: goto label_162174;
        case 0x162178u: goto label_162178;
        case 0x16217cu: goto label_16217c;
        case 0x162180u: goto label_162180;
        case 0x162184u: goto label_162184;
        case 0x162188u: goto label_162188;
        case 0x16218cu: goto label_16218c;
        case 0x162190u: goto label_162190;
        case 0x162194u: goto label_162194;
        case 0x162198u: goto label_162198;
        case 0x16219cu: goto label_16219c;
        case 0x1621a0u: goto label_1621a0;
        case 0x1621a4u: goto label_1621a4;
        case 0x1621a8u: goto label_1621a8;
        case 0x1621acu: goto label_1621ac;
        case 0x1621b0u: goto label_1621b0;
        case 0x1621b4u: goto label_1621b4;
        case 0x1621b8u: goto label_1621b8;
        case 0x1621bcu: goto label_1621bc;
        case 0x1621c0u: goto label_1621c0;
        case 0x1621c4u: goto label_1621c4;
        case 0x1621c8u: goto label_1621c8;
        case 0x1621ccu: goto label_1621cc;
        case 0x1621d0u: goto label_1621d0;
        case 0x1621d4u: goto label_1621d4;
        case 0x1621d8u: goto label_1621d8;
        case 0x1621dcu: goto label_1621dc;
        case 0x1621e0u: goto label_1621e0;
        case 0x1621e4u: goto label_1621e4;
        case 0x1621e8u: goto label_1621e8;
        case 0x1621ecu: goto label_1621ec;
        case 0x1621f0u: goto label_1621f0;
        case 0x1621f4u: goto label_1621f4;
        case 0x1621f8u: goto label_1621f8;
        case 0x1621fcu: goto label_1621fc;
        case 0x162200u: goto label_162200;
        case 0x162204u: goto label_162204;
        case 0x162208u: goto label_162208;
        case 0x16220cu: goto label_16220c;
        case 0x162210u: goto label_162210;
        case 0x162214u: goto label_162214;
        case 0x162218u: goto label_162218;
        case 0x16221cu: goto label_16221c;
        case 0x162220u: goto label_162220;
        case 0x162224u: goto label_162224;
        case 0x162228u: goto label_162228;
        case 0x16222cu: goto label_16222c;
        case 0x162230u: goto label_162230;
        case 0x162234u: goto label_162234;
        case 0x162238u: goto label_162238;
        case 0x16223cu: goto label_16223c;
        case 0x162240u: goto label_162240;
        case 0x162244u: goto label_162244;
        case 0x162248u: goto label_162248;
        case 0x16224cu: goto label_16224c;
        case 0x162250u: goto label_162250;
        case 0x162254u: goto label_162254;
        case 0x162258u: goto label_162258;
        case 0x16225cu: goto label_16225c;
        case 0x162260u: goto label_162260;
        case 0x162264u: goto label_162264;
        case 0x162268u: goto label_162268;
        case 0x16226cu: goto label_16226c;
        case 0x162270u: goto label_162270;
        case 0x162274u: goto label_162274;
        case 0x162278u: goto label_162278;
        case 0x16227cu: goto label_16227c;
        case 0x162280u: goto label_162280;
        case 0x162284u: goto label_162284;
        case 0x162288u: goto label_162288;
        case 0x16228cu: goto label_16228c;
        case 0x162290u: goto label_162290;
        case 0x162294u: goto label_162294;
        case 0x162298u: goto label_162298;
        case 0x16229cu: goto label_16229c;
        case 0x1622a0u: goto label_1622a0;
        case 0x1622a4u: goto label_1622a4;
        case 0x1622a8u: goto label_1622a8;
        case 0x1622acu: goto label_1622ac;
        case 0x1622b0u: goto label_1622b0;
        case 0x1622b4u: goto label_1622b4;
        case 0x1622b8u: goto label_1622b8;
        case 0x1622bcu: goto label_1622bc;
        case 0x1622c0u: goto label_1622c0;
        case 0x1622c4u: goto label_1622c4;
        case 0x1622c8u: goto label_1622c8;
        case 0x1622ccu: goto label_1622cc;
        case 0x1622d0u: goto label_1622d0;
        case 0x1622d4u: goto label_1622d4;
        case 0x1622d8u: goto label_1622d8;
        case 0x1622dcu: goto label_1622dc;
        case 0x1622e0u: goto label_1622e0;
        case 0x1622e4u: goto label_1622e4;
        case 0x1622e8u: goto label_1622e8;
        case 0x1622ecu: goto label_1622ec;
        case 0x1622f0u: goto label_1622f0;
        case 0x1622f4u: goto label_1622f4;
        case 0x1622f8u: goto label_1622f8;
        case 0x1622fcu: goto label_1622fc;
        case 0x162300u: goto label_162300;
        case 0x162304u: goto label_162304;
        case 0x162308u: goto label_162308;
        case 0x16230cu: goto label_16230c;
        case 0x162310u: goto label_162310;
        case 0x162314u: goto label_162314;
        case 0x162318u: goto label_162318;
        case 0x16231cu: goto label_16231c;
        case 0x162320u: goto label_162320;
        case 0x162324u: goto label_162324;
        case 0x162328u: goto label_162328;
        case 0x16232cu: goto label_16232c;
        case 0x162330u: goto label_162330;
        case 0x162334u: goto label_162334;
        case 0x162338u: goto label_162338;
        case 0x16233cu: goto label_16233c;
        case 0x162340u: goto label_162340;
        case 0x162344u: goto label_162344;
        case 0x162348u: goto label_162348;
        case 0x16234cu: goto label_16234c;
        case 0x162350u: goto label_162350;
        case 0x162354u: goto label_162354;
        case 0x162358u: goto label_162358;
        case 0x16235cu: goto label_16235c;
        case 0x162360u: goto label_162360;
        case 0x162364u: goto label_162364;
        case 0x162368u: goto label_162368;
        case 0x16236cu: goto label_16236c;
        case 0x162370u: goto label_162370;
        case 0x162374u: goto label_162374;
        case 0x162378u: goto label_162378;
        case 0x16237cu: goto label_16237c;
        case 0x162380u: goto label_162380;
        case 0x162384u: goto label_162384;
        case 0x162388u: goto label_162388;
        case 0x16238cu: goto label_16238c;
        case 0x162390u: goto label_162390;
        case 0x162394u: goto label_162394;
        case 0x162398u: goto label_162398;
        case 0x16239cu: goto label_16239c;
        case 0x1623a0u: goto label_1623a0;
        case 0x1623a4u: goto label_1623a4;
        case 0x1623a8u: goto label_1623a8;
        case 0x1623acu: goto label_1623ac;
        case 0x1623b0u: goto label_1623b0;
        case 0x1623b4u: goto label_1623b4;
        case 0x1623b8u: goto label_1623b8;
        case 0x1623bcu: goto label_1623bc;
        case 0x1623c0u: goto label_1623c0;
        case 0x1623c4u: goto label_1623c4;
        case 0x1623c8u: goto label_1623c8;
        case 0x1623ccu: goto label_1623cc;
        case 0x1623d0u: goto label_1623d0;
        case 0x1623d4u: goto label_1623d4;
        case 0x1623d8u: goto label_1623d8;
        case 0x1623dcu: goto label_1623dc;
        case 0x1623e0u: goto label_1623e0;
        case 0x1623e4u: goto label_1623e4;
        case 0x1623e8u: goto label_1623e8;
        case 0x1623ecu: goto label_1623ec;
        case 0x1623f0u: goto label_1623f0;
        case 0x1623f4u: goto label_1623f4;
        case 0x1623f8u: goto label_1623f8;
        case 0x1623fcu: goto label_1623fc;
        case 0x162400u: goto label_162400;
        case 0x162404u: goto label_162404;
        case 0x162408u: goto label_162408;
        case 0x16240cu: goto label_16240c;
        case 0x162410u: goto label_162410;
        case 0x162414u: goto label_162414;
        case 0x162418u: goto label_162418;
        case 0x16241cu: goto label_16241c;
        default: return;
    }

label_161c50:
    // 0x161c50: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x161c50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_161c54:
    // 0x161c54: 0x12e2023  subu        $a0, $t1, $t6
    ctx->pc = 0x161c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
label_161c58:
    // 0x161c58: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x161c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_161c5c:
    // 0x161c5c: 0x886818  mult        $t5, $a0, $t0
    ctx->pc = 0x161c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_161c60:
    // 0x161c60: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161c64:
    // 0x161c64: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x161c64u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_161c68:
    // 0x161c68: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x161c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_161c6c:
    // 0x161c6c: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x161c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_161c70:
    // 0x161c70: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x161c70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_161c74:
    // 0x161c74: 0x71286018  mult1       $t4, $t1, $t0
    ctx->pc = 0x161c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_161c78:
    // 0x161c78: 0x6d0018  mult        $zero, $v1, $t5
    ctx->pc = 0x161c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161c7c:
    // 0x161c7c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x161c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_161c80:
    // 0x161c80: 0x864823  subu        $t1, $a0, $a2
    ctx->pc = 0x161c80u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_161c84:
    // 0x161c84: 0xd57c2  srl         $t2, $t5, 31
    ctx->pc = 0x161c84u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_161c88:
    // 0x161c88: 0xc5fc2  srl         $t3, $t4, 31
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_161c8c:
    // 0x161c8c: 0x2010  mfhi        $a0
    ctx->pc = 0x161c8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_161c90:
    // 0x161c90: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x161c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161c94:
    // 0x161c94: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x161c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_161c98:
    // 0x161c98: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_161c9c:
    // 0x161c9c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x161c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_161ca0:
    // 0x161ca0: 0x1c42021  addu        $a0, $t6, $a0
    ctx->pc = 0x161ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
label_161ca4:
    // 0x161ca4: 0x5010  mfhi        $t2
    ctx->pc = 0x161ca4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_161ca8:
    // 0x161ca8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x161ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_161cac:
    // 0x161cac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x161cacu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_161cb0:
    // 0x161cb0: 0x1284818  mult        $t1, $t1, $t0
    ctx->pc = 0x161cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_161cb4:
    // 0x161cb4: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_161cb8:
    // 0x161cb8: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x161cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161cbc:
    // 0x161cbc: 0xa4143  sra         $t0, $t2, 5
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 5));
label_161cc0:
    // 0x161cc0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_161cc4:
    // 0x161cc4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_161cc8:
    // 0x161cc8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x161cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_161ccc:
    // 0x161ccc: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_161cd0:
    // 0x161cd0: 0x1810  mfhi        $v1
    ctx->pc = 0x161cd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161cd4:
    // 0x161cd4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x161cd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_161cd8:
    // 0x161cd8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x161cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_161cdc:
    // 0x161cdc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x161cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_161ce0:
    // 0x161ce0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x161ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_161ce4:
    // 0x161ce4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_161ce8:
    // 0x161ce8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x161ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_161cec:
    // 0x161cec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x161cecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_161cf0:
    // 0x161cf0: 0xa2040010  sb          $a0, 0x10($s0)
    ctx->pc = 0x161cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 4));
label_161cf4:
    // 0x161cf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_161cf8:
    // 0x161cf8: 0xa2050011  sb          $a1, 0x11($s0)
    ctx->pc = 0x161cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 5));
label_161cfc:
    // 0x161cfc: 0xa2060012  sb          $a2, 0x12($s0)
    ctx->pc = 0x161cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 6));
label_161d00:
    // 0x161d00: 0xa2070013  sb          $a3, 0x13($s0)
    ctx->pc = 0x161d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 7));
label_161d04:
    // 0x161d04: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x161d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_161d08:
    // 0x161d08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x161d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_161d0c:
    // 0x161d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_161d10:
    // 0x161d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161d14:
    // 0x161d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161d18:
    // 0x161d18: 0x3e00008  jr          $ra
label_161d1c:
    if (ctx->pc == 0x161D1Cu) {
        ctx->pc = 0x161D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D18u;
        // 0x161d1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161D20u;
        goto label_161d20;
    }
    ctx->pc = 0x161D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D18u;
        // 0x161d1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161D20u;
label_161d20:
    // 0x161d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_161d24:
    // 0x161d24: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x161d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_161d28:
    // 0x161d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_161d2c:
    // 0x161d2c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_161d30:
    // 0x161d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_161d34:
    // 0x161d34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161d38:
    // 0x161d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_161d3c:
    // 0x161d3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161d40:
    // 0x161d40: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x161d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161d44:
    // 0x161d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161d48:
    // 0x161d48: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x161d48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_161d4c:
    // 0x161d4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x161d4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161d50:
    // 0x161d50: 0x0  nop
    ctx->pc = 0x161d50u;
    // NOP
label_161d54:
    // 0x161d54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x161d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_161d58:
    // 0x161d58: 0x90244c65  lbu         $a0, 0x4C65($at)
    ctx->pc = 0x161d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19557)));
label_161d5c:
    // 0x161d5c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x161d5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_161d60:
    // 0x161d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161d64:
    // 0x161d64: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x161d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_161d68:
    // 0x161d68: 0x2211821  addu        $v1, $s1, $at
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_161d6c:
    // 0x161d6c: 0x0  nop
    ctx->pc = 0x161d6cu;
    // NOP
label_161d70:
    // 0x161d70: 0x0  nop
    ctx->pc = 0x161d70u;
    // NOP
label_161d74:
    // 0x161d74: 0x10800085  beqz        $a0, . + 4 + (0x85 << 2)
label_161d78:
    if (ctx->pc == 0x161D78u) {
        ctx->pc = 0x161D7Cu;
        goto label_161d7c;
    }
    ctx->pc = 0x161D74u;
    {
        const bool branch_taken_0x161d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d74) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161D7Cu;
label_161d7c:
    // 0x161d7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161d80:
    // 0x161d80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_161d84:
    // 0x161d84: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_161d88:
    // 0x161d88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x161d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_161d8c:
    // 0x161d8c: 0x8c264c70  lw          $a2, 0x4C70($at)
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_161d90:
    // 0x161d90: 0xdcc50270  ld          $a1, 0x270($a2)
    ctx->pc = 0x161d90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 624)));
label_161d94:
    // 0x161d94: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_161d98:
    // 0x161d98: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
label_161d9c:
    if (ctx->pc == 0x161D9Cu) {
        ctx->pc = 0x161DA0u;
        goto label_161da0;
    }
    ctx->pc = 0x161D98u;
    {
        const bool branch_taken_0x161d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d98) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161DA0u;
label_161da0:
    // 0x161da0: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_161da4:
    // 0x161da4: 0x14800079  bnez        $a0, . + 4 + (0x79 << 2)
label_161da8:
    if (ctx->pc == 0x161DA8u) {
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x3c070032  lui         $a3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DACu;
        goto label_161dac;
    }
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x3c070032  lui         $a3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161DACu;
label_161dac:
    // 0x161dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161db0:
    // 0x161db0: 0x24e712a0  addiu       $a3, $a3, 0x12A0
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4768));
label_161db4:
    // 0x161db4: 0x8ce40204  lw          $a0, 0x204($a3)
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 516)));
label_161db8:
    // 0x161db8: 0x14c40070  bne         $a2, $a0, . + 4 + (0x70 << 2)
label_161dbc:
    if (ctx->pc == 0x161DBCu) {
        ctx->pc = 0x161DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DB8u;
        // 0x161dbc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161DC0u;
        goto label_161dc0;
    }
    ctx->pc = 0x161DB8u;
    {
        const bool branch_taken_0x161db8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x161DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DB8u;
        // 0x161dbc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161db8) {
            ctx->pc = 0x161F7Cu;
            goto label_161f7c;
        }
    }
    ctx->pc = 0x161DC0u;
label_161dc0:
    // 0x161dc0: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x161dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
label_161dc4:
    // 0x161dc4: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_161dc8:
    // 0x161dc8: 0xc4e80150  lwc1        $f8, 0x150($a3)
    ctx->pc = 0x161dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_161dcc:
    // 0x161dcc: 0xc4e20158  lwc1        $f2, 0x158($a3)
    ctx->pc = 0x161dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161dd0:
    // 0x161dd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x161dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_161dd4:
    // 0x161dd4: 0x9068000f  lbu         $t0, 0xF($v1)
    ctx->pc = 0x161dd4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_161dd8:
    // 0x161dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161ddc:
    // 0x161ddc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_161de0:
    // 0x161de0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_161de4:
    // 0x161de4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_161de8:
    // 0x161de8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_161dec:
    // 0x161dec: 0x244256a0  addiu       $v0, $v0, 0x56A0
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22176));
label_161df0:
    // 0x161df0: 0x24c65680  addiu       $a2, $a2, 0x5680
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22144));
label_161df4:
    // 0x161df4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161df8:
    // 0x161df8: 0x24a5569c  addiu       $a1, $a1, 0x569C
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22172));
label_161dfc:
    // 0x161dfc: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_161e00:
    // 0x161e00: 0x34217680  ori         $at, $at, 0x7680
    ctx->pc = 0x161e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30336);
label_161e04:
    // 0x161e04: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_161e08:
    // 0x161e08: 0x24845684  addiu       $a0, $a0, 0x5684
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22148));
label_161e0c:
    // 0x161e0c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x161e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_161e10:
    // 0x161e10: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_161e14:
    // 0x161e14: 0x94140  sll         $t0, $t1, 5
    ctx->pc = 0x161e14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_161e18:
    // 0x161e18: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_161e1c:
    // 0x161e1c: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x161e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_161e20:
    // 0x161e20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x161e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_161e24:
    // 0x161e24: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x161e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_161e28:
    // 0x161e28: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_161e2c:
    // 0x161e2c: 0x1018021  addu        $s0, $t0, $at
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
label_161e30:
    // 0x161e30: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x161e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_161e34:
    // 0x161e34: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_161e38:
    // 0x161e38: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x161e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_161e3c:
    // 0x161e3c: 0x25085670  addiu       $t0, $t0, 0x5670
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22128));
label_161e40:
    // 0x161e40: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x161e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161e44:
    // 0x161e44: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x161e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_161e48:
    // 0x161e48: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x161e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_161e4c:
    // 0x161e4c: 0x24e75674  addiu       $a3, $a3, 0x5674
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22132));
label_161e50:
    // 0x161e50: 0x46030100  add.s       $f4, $f0, $f3
    ctx->pc = 0x161e50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_161e54:
    // 0x161e54: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_161e58:
    // 0x161e58: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x161e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_161e5c:
    // 0x161e5c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x161e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_161e60:
    // 0x161e60: 0x0  nop
    ctx->pc = 0x161e60u;
    // NOP
label_161e64:
    // 0x161e64: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x161e64u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_161e68:
    // 0x161e68: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_161e6c:
    // 0x161e6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_161e70:
    // 0x161e70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161e74:
    // 0x161e74: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x161e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_161e78:
    // 0x161e78: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x161e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_161e7c:
    // 0x161e7c: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x161e7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
label_161e80:
    // 0x161e80: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_161e84:
    // 0x161e84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x161e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_161e88:
    // 0x161e88: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x161e88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_161e8c:
    // 0x161e8c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x161e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_161e90:
    // 0x161e90: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x161e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161e94:
    // 0x161e94: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x161e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_161e98:
    // 0x161e98: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x161e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_161e9c:
    // 0x161e9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x161e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_161ea0:
    // 0x161ea0: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x161ea0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_161ea4:
    // 0x161ea4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x161ea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_161ea8:
    // 0x161ea8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_161eac:
    // 0x161eac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_161eb0:
    // 0x161eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_161eb4:
    // 0x161eb4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_161eb8:
    // 0x161eb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161ebc:
    // 0x161ebc: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_161ec0:
    // 0x161ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_161ec4:
    // 0x161ec4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x161ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_161ec8:
    // 0x161ec8: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x161ec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_161ecc:
    // 0x161ecc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_161ed0:
    // 0x161ed0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_161ed4:
    // 0x161ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_161ed8:
    // 0x161ed8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_161edc:
    // 0x161edc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161ee0:
    // 0x161ee0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_161ee4:
    // 0x161ee4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x161ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_161ee8:
    // 0x161ee8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x161ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_161eec:
    // 0x161eec: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x161eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_161ef0:
    // 0x161ef0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_161ef4:
    // 0x161ef4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161ef8:
    // 0x161ef8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_161efc:
    // 0x161efc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x161efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_161f00:
    // 0x161f00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161f04:
    // 0x161f04: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_161f08:
    // 0x161f08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_161f0c:
    // 0x161f0c: 0xc066e34  jal         func_19B8D0
label_161f10:
    if (ctx->pc == 0x161F10u) {
        ctx->pc = 0x161F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F0Cu;
        // 0x161f10: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F14u;
        goto label_161f14;
    }
    ctx->pc = 0x161F0Cu;
    SET_GPR_U32(ctx, 31, 0x161F14u);
    ctx->pc = 0x161F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F0Cu;
    // 0x161f10: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161F14u;
label_161f14:
    // 0x161f14: 0x87a40030  lh          $a0, 0x30($sp)
    ctx->pc = 0x161f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_161f18:
    // 0x161f18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161f1c:
    // 0x161f1c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161f20:
    // 0x161f20: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x161f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_161f24:
    // 0x161f24: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161f24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_161f28:
    // 0x161f28: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161f2c:
    // 0x161f2c: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x161f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
label_161f30:
    // 0x161f30: 0x87a40034  lh          $a0, 0x34($sp)
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
label_161f34:
    // 0x161f34: 0xa6040022  sh          $a0, 0x22($s0)
    ctx->pc = 0x161f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 4));
label_161f38:
    // 0x161f38: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x161f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_161f3c:
    // 0x161f3c: 0x87a40038  lh          $a0, 0x38($sp)
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
label_161f40:
    // 0x161f40: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x161f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
label_161f44:
    // 0x161f44: 0x87a4003c  lh          $a0, 0x3C($sp)
    ctx->pc = 0x161f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
label_161f48:
    // 0x161f48: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x161f48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
label_161f4c:
    // 0x161f4c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x161f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
label_161f50:
    // 0x161f50: 0x9024761c  lbu         $a0, 0x761C($at)
    ctx->pc = 0x161f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_161f54:
    // 0x161f54: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x161f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_161f58:
    // 0x161f58: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x161f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161f5c:
    // 0x161f5c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_161f60:
    // 0x161f60: 0x0  nop
    ctx->pc = 0x161f60u;
    // NOP
label_161f64:
    // 0x161f64: 0x1810  mfhi        $v1
    ctx->pc = 0x161f64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161f68:
    // 0x161f68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_161f6c:
    // 0x161f6c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x161f6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_161f70:
    // 0x161f70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_161f74:
    // 0x161f74: 0x10000005  b           . + 4 + (0x5 << 2)
label_161f78:
    if (ctx->pc == 0x161F78u) {
        ctx->pc = 0x161F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F74u;
        // 0x161f78: 0xa2030013  sb          $v1, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F7Cu;
        goto label_161f7c;
    }
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F74u;
        // 0x161f78: 0xa2030013  sb          $v1, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161F7Cu;
label_161f7c:
    // 0x161f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_161f80:
    // 0x161f80: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
label_161f84:
    // 0x161f84: 0x1480ff8b  bnez        $a0, . + 4 + (-0x75 << 2)
label_161f88:
    if (ctx->pc == 0x161F88u) {
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x24e70220  addiu       $a3, $a3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161F8Cu;
        goto label_161f8c;
    }
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x24e70220  addiu       $a3, $a3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f84) {
            ctx->pc = 0x161DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161db4;
        }
    }
    ctx->pc = 0x161F8Cu;
label_161f8c:
    // 0x161f8c: 0x0  nop
    ctx->pc = 0x161f8cu;
    // NOP
label_161f90:
    // 0x161f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161f94:
    // 0x161f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161f98:
    // 0x161f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161f9c:
    // 0x161f9c: 0x3e00008  jr          $ra
label_161fa0:
    if (ctx->pc == 0x161FA0u) {
        ctx->pc = 0x161FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F9Cu;
        // 0x161fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161FA4u;
        goto label_161fa4;
    }
    ctx->pc = 0x161F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F9Cu;
        // 0x161fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161FA4u;
label_161fa4:
    // 0x161fa4: 0x0  nop
    ctx->pc = 0x161fa4u;
    // NOP
label_161fa8:
    // 0x161fa8: 0x0  nop
    ctx->pc = 0x161fa8u;
    // NOP
label_161fac:
    // 0x161fac: 0x0  nop
    ctx->pc = 0x161facu;
    // NOP
label_161fb0:
    // 0x161fb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_161fb4:
    // 0x161fb4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_161fb8:
    // 0x161fb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x161fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_161fbc:
    // 0x161fbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_161fc0:
    // 0x161fc0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x161fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_161fc4:
    // 0x161fc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161fc8:
    // 0x161fc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x161fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_161fcc:
    // 0x161fcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x161fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_161fd0:
    // 0x161fd0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x161fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_161fd4:
    // 0x161fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161fd8:
    // 0x161fd8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x161fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_161fdc:
    // 0x161fdc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x161fdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161fe0:
    // 0x161fe0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x161fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_161fe4:
    // 0x161fe4: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_161fe8:
    // 0x161fe8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x161fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_161fec:
    // 0x161fec: 0x3c11821  addu        $v1, $fp, $at
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 1)));
label_161ff0:
    // 0x161ff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x161ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_161ff4:
    // 0x161ff4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161ff8:
    // 0x161ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_161ffc:
    // 0x161ffc: 0x34214c60  ori         $at, $at, 0x4C60
    ctx->pc = 0x161ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19552);
label_162000:
    // 0x162000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_162004:
    // 0x162004: 0x3c19021  addu        $s2, $fp, $at
    ctx->pc = 0x162004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 1)));
label_162008:
    // 0x162008: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x162008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16200c:
    // 0x16200c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16200cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162010:
    // 0x162010: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x162010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162014:
    // 0x162014: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x162014u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162018:
    // 0x162018: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x162018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_16201c:
    // 0x16201c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x16201cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_162020:
    // 0x162020: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x162020u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_162024:
    // 0x162024: 0x0  nop
    ctx->pc = 0x162024u;
    // NOP
label_162028:
    // 0x162028: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x162028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_16202c:
    // 0x16202c: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_162030:
    if (ctx->pc == 0x162030u) {
        ctx->pc = 0x162030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16202Cu;
        // 0x162030: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162034u;
        goto label_162034;
    }
    ctx->pc = 0x16202Cu;
    {
        const bool branch_taken_0x16202c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16202Cu;
        // 0x162030: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16202c) {
            ctx->pc = 0x162280u;
            goto label_162280;
        }
    }
    ctx->pc = 0x162034u;
label_162034:
    // 0x162034: 0xc066e44  jal         func_19B910
label_162038:
    if (ctx->pc == 0x162038u) {
        ctx->pc = 0x16203Cu;
        goto label_16203c;
    }
    ctx->pc = 0x162034u;
    SET_GPR_U32(ctx, 31, 0x16203Cu);
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x16203Cu;
label_16203c:
    // 0x16203c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x16203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162040:
    // 0x162040: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_162044:
    // 0x162044: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x162044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_162048:
    // 0x162048: 0xc066e6c  jal         func_19B9B0
label_16204c:
    if (ctx->pc == 0x16204Cu) {
        ctx->pc = 0x16204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162048u;
        // 0x16204c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162050u;
        goto label_162050;
    }
    ctx->pc = 0x162048u;
    SET_GPR_U32(ctx, 31, 0x162050u);
    ctx->pc = 0x16204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162048u;
    // 0x16204c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x162050u;
label_162050:
    // 0x162050: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_162054:
    // 0x162054: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x162054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_162058:
    // 0x162058: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x162058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_16205c:
    // 0x16205c: 0x27b400e4  addiu       $s4, $sp, 0xE4
    ctx->pc = 0x16205cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_162060:
    // 0x162060: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x162060u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_162064:
    // 0x162064: 0x27b000e8  addiu       $s0, $sp, 0xE8
    ctx->pc = 0x162064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_162068:
    // 0x162068: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x162068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_16206c:
    // 0x16206c: 0x27b300ec  addiu       $s3, $sp, 0xEC
    ctx->pc = 0x16206cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_162070:
    // 0x162070: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x162070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_162074:
    // 0x162074: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x162074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_162078:
    // 0x162078: 0xc064f38  jal         func_193CE0
label_16207c:
    if (ctx->pc == 0x16207Cu) {
        ctx->pc = 0x16207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162078u;
        // 0x16207c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162080u;
        goto label_162080;
    }
    ctx->pc = 0x162078u;
    SET_GPR_U32(ctx, 31, 0x162080u);
    ctx->pc = 0x16207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162078u;
    // 0x16207c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    { ctx->pc = 0x193ce0; return; }
    ctx->pc = 0x162080u;
label_162080:
    // 0x162080: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x162080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_162084:
    // 0x162084: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x162084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_162088:
    // 0x162088: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x162088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16208c:
    // 0x16208c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_162090:
    // 0x162090: 0x25085670  addiu       $t0, $t0, 0x5670
    ctx->pc = 0x162090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22128));
label_162094:
    // 0x162094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162098:
    // 0x162098: 0xc7c00010  lwc1        $f0, 0x10($fp)
    ctx->pc = 0x162098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16209c:
    // 0x16209c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x16209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1620a0:
    // 0x1620a0: 0x9047000f  lbu         $a3, 0xF($v0)
    ctx->pc = 0x1620a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_1620a4:
    // 0x1620a4: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x1620a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1620a8:
    // 0x1620a8: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
label_1620ac:
    // 0x1620ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1620acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1620b0:
    // 0x1620b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1620b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1620b4:
    // 0x1620b4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1620b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1620b8:
    // 0x1620b8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1620b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1620bc:
    // 0x1620bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1620c0:
    // 0x1620c0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1620c4:
    // 0x1620c4: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x1620c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1620c8:
    // 0x1620c8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1620c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1620cc:
    // 0x1620cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1620ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1620d0:
    // 0x1620d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1620d4:
    // 0x1620d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1620d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1620d8:
    // 0x1620d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1620d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1620dc:
    // 0x1620dc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1620dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1620e0:
    // 0x1620e0: 0x9047000f  lbu         $a3, 0xF($v0)
    ctx->pc = 0x1620e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_1620e4:
    // 0x1620e4: 0xc7c00014  lwc1        $f0, 0x14($fp)
    ctx->pc = 0x1620e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1620e8:
    // 0x1620e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1620ec:
    // 0x1620ec: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1620f0:
    // 0x1620f0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1620f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1620f4:
    // 0x1620f4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1620f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1620f8:
    // 0x1620f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1620fc:
    // 0x1620fc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_162100:
    // 0x162100: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x162100u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_162104:
    // 0x162104: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x162104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162108:
    // 0x162108: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x162108u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_16210c:
    // 0x16210c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x16210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162110:
    // 0x162110: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x162110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_162114:
    // 0x162114: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x162114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_162118:
    // 0x162118: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162118u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16211c:
    // 0x16211c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x16211cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_162120:
    // 0x162120: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x162120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_162124:
    // 0x162124: 0xc066e1a  jal         func_19B868
label_162128:
    if (ctx->pc == 0x162128u) {
        ctx->pc = 0x162128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162124u;
        // 0x162128: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16212Cu;
        goto label_16212c;
    }
    ctx->pc = 0x162124u;
    SET_GPR_U32(ctx, 31, 0x16212Cu);
    ctx->pc = 0x162128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162124u;
    // 0x162128: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_162130:
    // 0x162130: 0x3d72021  addu        $a0, $fp, $s7
    ctx->pc = 0x162130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_162134:
    // 0x162134: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_162138:
    // 0x162138: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x162138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16213c:
    // 0x16213c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x16213cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162140:
    // 0x162140: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x162140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162144:
    // 0x162144: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_162148:
    // 0x162148: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16214c:
    // 0x16214c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162150:
    // 0x162150: 0x34214c90  ori         $at, $at, 0x4C90
    ctx->pc = 0x162150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19600);
label_162154:
    // 0x162154: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_162158:
    // 0x162158: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_16215c:
    // 0x16215c: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x16215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_162160:
    // 0x162160: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x162160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_162164:
    // 0x162164: 0x0  nop
    ctx->pc = 0x162164u;
    // NOP
label_162168:
    // 0x162168: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_16216c:
    // 0x16216c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_162170:
    // 0x162170: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_162174:
    // 0x162174: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x162174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_162178:
    // 0x162178: 0x24530020  addiu       $s3, $v0, 0x20
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_16217c:
    // 0x16217c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_162180:
    // 0x162180: 0x24425730  addiu       $v0, $v0, 0x5730
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22320));
label_162184:
    // 0x162184: 0x54a821  addu        $s5, $v0, $s4
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_162188:
    // 0x162188: 0xc066d7a  jal         func_19B5E8
label_16218c:
    if (ctx->pc == 0x16218Cu) {
        ctx->pc = 0x16218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162188u;
        // 0x16218c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162190u;
        goto label_162190;
    }
    ctx->pc = 0x162188u;
    SET_GPR_U32(ctx, 31, 0x162190u);
    ctx->pc = 0x16218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162188u;
    // 0x16218c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x162190u;
label_162190:
    // 0x162190: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_162194:
    // 0x162194: 0xc066e34  jal         func_19B8D0
label_162198:
    if (ctx->pc == 0x162198u) {
        ctx->pc = 0x162198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162194u;
        // 0x162198: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16219Cu;
        goto label_16219c;
    }
    ctx->pc = 0x162194u;
    SET_GPR_U32(ctx, 31, 0x16219Cu);
    ctx->pc = 0x162198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162194u;
    // 0x162198: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x16219Cu;
label_16219c:
    // 0x16219c: 0x87a200d0  lh          $v0, 0xD0($sp)
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1621a0:
    // 0x1621a0: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x1621a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1621a4:
    // 0x1621a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1621a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1621a8:
    // 0x1621a8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1621a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1621ac:
    // 0x1621ac: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1621b0:
    // 0x1621b0: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x1621b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_1621b4:
    // 0x1621b4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1621b8:
    // 0x1621b8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1621b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1621bc:
    // 0x1621bc: 0xa6620012  sh          $v0, 0x12($s3)
    ctx->pc = 0x1621bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 2));
label_1621c0:
    // 0x1621c0: 0xc066d7a  jal         func_19B5E8
label_1621c4:
    if (ctx->pc == 0x1621C4u) {
        ctx->pc = 0x1621C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621C0u;
        // 0x1621c4: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621C8u;
        goto label_1621c8;
    }
    ctx->pc = 0x1621C0u;
    SET_GPR_U32(ctx, 31, 0x1621C8u);
    ctx->pc = 0x1621C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621C0u;
    // 0x1621c4: 0xae630014  sw          $v1, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1621C8u;
label_1621c8:
    // 0x1621c8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1621cc:
    // 0x1621cc: 0xc066e34  jal         func_19B8D0
label_1621d0:
    if (ctx->pc == 0x1621D0u) {
        ctx->pc = 0x1621D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621CCu;
        // 0x1621d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1621D4u;
        goto label_1621d4;
    }
    ctx->pc = 0x1621CCu;
    SET_GPR_U32(ctx, 31, 0x1621D4u);
    ctx->pc = 0x1621D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621CCu;
    // 0x1621d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1621D4u;
label_1621d4:
    // 0x1621d4: 0x87a200d0  lh          $v0, 0xD0($sp)
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1621d8:
    // 0x1621d8: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x1621d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1621dc:
    // 0x1621dc: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1621e0:
    // 0x1621e0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1621e4:
    // 0x1621e4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1621e8:
    // 0x1621e8: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x1621e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_1621ec:
    // 0x1621ec: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1621ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1621f0:
    // 0x1621f0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1621f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1621f4:
    // 0x1621f4: 0xa6620022  sh          $v0, 0x22($s3)
    ctx->pc = 0x1621f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
label_1621f8:
    // 0x1621f8: 0xc066d7a  jal         func_19B5E8
label_1621fc:
    if (ctx->pc == 0x1621FCu) {
        ctx->pc = 0x1621FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1621F8u;
        // 0x1621fc: 0xae630024  sw          $v1, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162200u;
        goto label_162200;
    }
    ctx->pc = 0x1621F8u;
    SET_GPR_U32(ctx, 31, 0x162200u);
    ctx->pc = 0x1621FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621F8u;
    // 0x1621fc: 0xae630024  sw          $v1, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x162200u;
label_162200:
    // 0x162200: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_162204:
    // 0x162204: 0xc066e34  jal         func_19B8D0
label_162208:
    if (ctx->pc == 0x162208u) {
        ctx->pc = 0x162208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162204u;
        // 0x162208: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16220Cu;
        goto label_16220c;
    }
    ctx->pc = 0x162204u;
    SET_GPR_U32(ctx, 31, 0x16220Cu);
    ctx->pc = 0x162208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162204u;
    // 0x162208: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x16220Cu;
label_16220c:
    // 0x16220c: 0x87a700d0  lh          $a3, 0xD0($sp)
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_162210:
    // 0x162210: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x162210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_162214:
    // 0x162214: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x162214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_162218:
    // 0x162218: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16221c:
    // 0x16221c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16221cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_162220:
    // 0x162220: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x162220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_162224:
    // 0x162224: 0x3406ffe0  ori         $a2, $zero, 0xFFE0
    ctx->pc = 0x162224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_162228:
    // 0x162228: 0x3c10821  addu        $at, $fp, $at
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 1)));
label_16222c:
    // 0x16222c: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x16222cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_162230:
    // 0x162230: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x162230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_162234:
    // 0x162234: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_162238:
    // 0x162238: 0xa6670030  sh          $a3, 0x30($s3)
    ctx->pc = 0x162238u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 7));
label_16223c:
    // 0x16223c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_162240:
    // 0x162240: 0xa6630032  sh          $v1, 0x32($s3)
    ctx->pc = 0x162240u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 3));
label_162244:
    // 0x162244: 0xae660034  sw          $a2, 0x34($s3)
    ctx->pc = 0x162244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 6));
label_162248:
    // 0x162248: 0x9023761c  lbu         $v1, 0x761C($at)
    ctx->pc = 0x162248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_16224c:
    // 0x16224c: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_162250:
    // 0x162250: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x162250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_162254:
    // 0x162254: 0x0  nop
    ctx->pc = 0x162254u;
    // NOP
label_162258:
    // 0x162258: 0x0  nop
    ctx->pc = 0x162258u;
    // NOP
label_16225c:
    // 0x16225c: 0x1810  mfhi        $v1
    ctx->pc = 0x16225cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_162260:
    // 0x162260: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x162260u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_162264:
    // 0x162264: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x162264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_162268:
    // 0x162268: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_16226c:
    // 0x16226c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_162270:
    // 0x162270: 0xa263002b  sb          $v1, 0x2B($s3)
    ctx->pc = 0x162270u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
label_162274:
    // 0x162274: 0xa263001b  sb          $v1, 0x1B($s3)
    ctx->pc = 0x162274u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 27), (uint8_t)GPR_U32(ctx, 3));
label_162278:
    // 0x162278: 0x1480ffba  bnez        $a0, . + 4 + (-0x46 << 2)
label_16227c:
    if (ctx->pc == 0x16227Cu) {
        ctx->pc = 0x16227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162278u;
        // 0x16227c: 0xa263000b  sb          $v1, 0xB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162280u;
        goto label_162280;
    }
    ctx->pc = 0x162278u;
    {
        const bool branch_taken_0x162278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162278u;
        // 0x16227c: 0xa263000b  sb          $v1, 0xB($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162278) {
            ctx->pc = 0x162164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162164;
        }
    }
    ctx->pc = 0x162280u;
label_162280:
    // 0x162280: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162284:
    // 0x162284: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x162284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_162288:
    // 0x162288: 0x26f70140  addiu       $s7, $s7, 0x140
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 320));
label_16228c:
    // 0x16228c: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
label_162290:
    if (ctx->pc == 0x162290u) {
        ctx->pc = 0x162290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16228Cu;
        // 0x162290: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162294u;
        goto label_162294;
    }
    ctx->pc = 0x16228Cu;
    {
        const bool branch_taken_0x16228c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16228Cu;
        // 0x162290: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16228c) {
            ctx->pc = 0x162024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162024;
        }
    }
    ctx->pc = 0x162294u;
label_162294:
    // 0x162294: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x162294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_162298:
    // 0x162298: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x162298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16229c:
    // 0x16229c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x16229cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1622a0:
    // 0x1622a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1622a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1622a4:
    // 0x1622a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1622a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1622a8:
    // 0x1622a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1622a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1622ac:
    // 0x1622ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1622acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1622b0:
    // 0x1622b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1622b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1622b4:
    // 0x1622b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1622b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1622b8:
    // 0x1622b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1622b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1622bc:
    // 0x1622bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1622bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1622c0:
    // 0x1622c0: 0x3e00008  jr          $ra
label_1622c4:
    if (ctx->pc == 0x1622C4u) {
        ctx->pc = 0x1622C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622C0u;
        // 0x1622c4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1622C8u;
        goto label_1622c8;
    }
    ctx->pc = 0x1622C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1622C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622C0u;
        // 0x1622c4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1622C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1622C8u;
label_1622c8:
    // 0x1622c8: 0x0  nop
    ctx->pc = 0x1622c8u;
    // NOP
label_1622cc:
    // 0x1622cc: 0x0  nop
    ctx->pc = 0x1622ccu;
    // NOP
label_1622d0:
    // 0x1622d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1622d4:
    // 0x1622d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1622d8:
    // 0x1622d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1622d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1622dc:
    // 0x1622dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1622dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1622e0:
    // 0x1622e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1622e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1622e4:
    // 0x1622e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1622e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1622e8:
    // 0x1622e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1622e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1622ec:
    // 0x1622ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1622ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1622f0:
    // 0x1622f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1622f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1622f4:
    // 0x1622f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1622f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1622f8:
    // 0x1622f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1622f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1622fc:
    // 0x1622fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1622fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_162300:
    // 0x162300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_162304:
    // 0x162304: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x162304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_162308:
    // 0x162308: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x162308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16230c:
    // 0x16230c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x16230cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_162310:
    // 0x162310: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_162314:
    // 0x162314: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_162318:
    // 0x162318: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x162318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_16231c:
    // 0x16231c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_162320:
    // 0x162320: 0x2a18021  addu        $s0, $s5, $at
    ctx->pc = 0x162320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_162324:
    // 0x162324: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_162328:
    // 0x162328: 0x8c2251f0  lw          $v0, 0x51F0($at)
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20976)));
label_16232c:
    // 0x16232c: 0x24450218  addiu       $a1, $v0, 0x218
    ctx->pc = 0x16232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
label_162330:
    // 0x162330: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x162330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_162334:
    // 0x162334: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x162334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_162338:
    // 0x162338: 0xdc440100  ld          $a0, 0x100($v0)
    ctx->pc = 0x162338u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 256)));
label_16233c:
    // 0x16233c: 0xc06064c  jal         func_181930
label_162340:
    if (ctx->pc == 0x162340u) {
        ctx->pc = 0x162340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16233Cu;
        // 0x162340: 0x24510100  addiu       $s1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162344u;
        goto label_162344;
    }
    ctx->pc = 0x16233Cu;
    SET_GPR_U32(ctx, 31, 0x162344u);
    ctx->pc = 0x162340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16233Cu;
    // 0x162340: 0x24510100  addiu       $s1, $v0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x162344u;
label_162344:
    // 0x162344: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x162344u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_162348:
    // 0x162348: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16234c:
    // 0x16234c: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x16234cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_162350:
    // 0x162350: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_162354:
    // 0x162354: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_162358:
    if (ctx->pc == 0x162358u) {
        ctx->pc = 0x16235Cu;
        goto label_16235c;
    }
    ctx->pc = 0x162354u;
    {
        const bool branch_taken_0x162354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162354) {
            ctx->pc = 0x1623A0u;
            goto label_1623a0;
        }
    }
    ctx->pc = 0x16235Cu;
label_16235c:
    // 0x16235c: 0x3c02429f  lui         $v0, 0x429F
    ctx->pc = 0x16235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17055 << 16));
label_162360:
    // 0x162360: 0x9204000f  lbu         $a0, 0xF($s0)
    ctx->pc = 0x162360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_162364:
    // 0x162364: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x162364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_162368:
    // 0x162368: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16236c:
    // 0x16236c: 0x24635694  addiu       $v1, $v1, 0x5694
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22164));
label_162370:
    // 0x162370: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_162374:
    // 0x162374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162378:
    // 0x162378: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x162378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16237c:
    // 0x16237c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x16237cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_162380:
    // 0x162380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_162384:
    // 0x162384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x162384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162388:
    // 0x162388: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x162388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16238c:
    // 0x16238c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x16238cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_162390:
    // 0x162390: 0x0  nop
    ctx->pc = 0x162390u;
    // NOP
label_162394:
    // 0x162394: 0x0  nop
    ctx->pc = 0x162394u;
    // NOP
label_162398:
    // 0x162398: 0x1000000c  b           . + 4 + (0xC << 2)
label_16239c:
    if (ctx->pc == 0x16239Cu) {
        ctx->pc = 0x1623A0u;
        goto label_1623a0;
    }
    ctx->pc = 0x162398u;
    {
        const bool branch_taken_0x162398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162398) {
            ctx->pc = 0x1623CCu;
            goto label_1623cc;
        }
    }
    ctx->pc = 0x1623A0u;
label_1623a0:
    // 0x1623a0: 0x9204000f  lbu         $a0, 0xF($s0)
    ctx->pc = 0x1623a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1623a4:
    // 0x1623a4: 0x3c02431f  lui         $v0, 0x431F
    ctx->pc = 0x1623a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17183 << 16));
label_1623a8:
    // 0x1623a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1623a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1623ac:
    // 0x1623ac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1623b0:
    // 0x1623b0: 0x24425694  addiu       $v0, $v0, 0x5694
    ctx->pc = 0x1623b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22164));
label_1623b4:
    // 0x1623b4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1623b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1623b8:
    // 0x1623b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1623b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1623bc:
    // 0x1623bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1623c0:
    // 0x1623c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1623c4:
    // 0x1623c4: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1623c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1623c8:
    // 0x1623c8: 0x0  nop
    ctx->pc = 0x1623c8u;
    // NOP
label_1623cc:
    // 0x1623cc: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x1623ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1623d0:
    // 0x1623d0: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x1623d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1623d4:
    // 0x1623d4: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1623d8:
    // 0x1623d8: 0x27b300bc  addiu       $s3, $sp, 0xBC
    ctx->pc = 0x1623d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1623dc:
    // 0x1623dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1623dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1623e0:
    // 0x1623e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1623e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1623e4:
    // 0x1623e4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1623e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1623e8:
    // 0x1623e8: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x1623e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1623ec:
    // 0x1623ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1623ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1623f0:
    // 0x1623f0: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x1623f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1623f4:
    // 0x1623f4: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1623f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1623f8:
    // 0x1623f8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1623f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1623fc:
    // 0x1623fc: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x1623fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162400:
    // 0x162400: 0xc066e34  jal         func_19B8D0
label_162404:
    if (ctx->pc == 0x162404u) {
        ctx->pc = 0x162404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162400u;
        // 0x162404: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162408u;
        goto label_162408;
    }
    ctx->pc = 0x162400u;
    SET_GPR_U32(ctx, 31, 0x162408u);
    ctx->pc = 0x162404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162400u;
    // 0x162404: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x162408u;
label_162408:
    // 0x162408: 0x87a300c0  lh          $v1, 0xC0($sp)
    ctx->pc = 0x162408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_16240c:
    // 0x16240c: 0x3c02431f  lui         $v0, 0x431F
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17183 << 16));
label_162410:
    // 0x162410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162414:
    // 0x162414: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x162414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_162418:
    // 0x162418: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16241c:
    // 0x16241c: 0x27b400cc  addiu       $s4, $sp, 0xCC
    ctx->pc = 0x16241cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->pc = 0x162420u;
    return;
}
