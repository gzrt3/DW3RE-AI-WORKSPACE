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


void FUN_0014eba0_part83(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x176c40u: goto label_176c40;
        case 0x176c44u: goto label_176c44;
        case 0x176c48u: goto label_176c48;
        case 0x176c4cu: goto label_176c4c;
        case 0x176c50u: goto label_176c50;
        case 0x176c54u: goto label_176c54;
        case 0x176c58u: goto label_176c58;
        case 0x176c5cu: goto label_176c5c;
        case 0x176c60u: goto label_176c60;
        case 0x176c64u: goto label_176c64;
        case 0x176c68u: goto label_176c68;
        case 0x176c6cu: goto label_176c6c;
        case 0x176c70u: goto label_176c70;
        case 0x176c74u: goto label_176c74;
        case 0x176c78u: goto label_176c78;
        case 0x176c7cu: goto label_176c7c;
        case 0x176c80u: goto label_176c80;
        case 0x176c84u: goto label_176c84;
        case 0x176c88u: goto label_176c88;
        case 0x176c8cu: goto label_176c8c;
        case 0x176c90u: goto label_176c90;
        case 0x176c94u: goto label_176c94;
        case 0x176c98u: goto label_176c98;
        case 0x176c9cu: goto label_176c9c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176ca4u: goto label_176ca4;
        case 0x176ca8u: goto label_176ca8;
        case 0x176cacu: goto label_176cac;
        case 0x176cb0u: goto label_176cb0;
        case 0x176cb4u: goto label_176cb4;
        case 0x176cb8u: goto label_176cb8;
        case 0x176cbcu: goto label_176cbc;
        case 0x176cc0u: goto label_176cc0;
        case 0x176cc4u: goto label_176cc4;
        case 0x176cc8u: goto label_176cc8;
        case 0x176cccu: goto label_176ccc;
        case 0x176cd0u: goto label_176cd0;
        case 0x176cd4u: goto label_176cd4;
        case 0x176cd8u: goto label_176cd8;
        case 0x176cdcu: goto label_176cdc;
        case 0x176ce0u: goto label_176ce0;
        case 0x176ce4u: goto label_176ce4;
        case 0x176ce8u: goto label_176ce8;
        case 0x176cecu: goto label_176cec;
        case 0x176cf0u: goto label_176cf0;
        case 0x176cf4u: goto label_176cf4;
        case 0x176cf8u: goto label_176cf8;
        case 0x176cfcu: goto label_176cfc;
        case 0x176d00u: goto label_176d00;
        case 0x176d04u: goto label_176d04;
        case 0x176d08u: goto label_176d08;
        case 0x176d0cu: goto label_176d0c;
        case 0x176d10u: goto label_176d10;
        case 0x176d14u: goto label_176d14;
        case 0x176d18u: goto label_176d18;
        case 0x176d1cu: goto label_176d1c;
        case 0x176d20u: goto label_176d20;
        case 0x176d24u: goto label_176d24;
        case 0x176d28u: goto label_176d28;
        case 0x176d2cu: goto label_176d2c;
        case 0x176d30u: goto label_176d30;
        case 0x176d34u: goto label_176d34;
        case 0x176d38u: goto label_176d38;
        case 0x176d3cu: goto label_176d3c;
        case 0x176d40u: goto label_176d40;
        case 0x176d44u: goto label_176d44;
        case 0x176d48u: goto label_176d48;
        case 0x176d4cu: goto label_176d4c;
        case 0x176d50u: goto label_176d50;
        case 0x176d54u: goto label_176d54;
        case 0x176d58u: goto label_176d58;
        case 0x176d5cu: goto label_176d5c;
        case 0x176d60u: goto label_176d60;
        case 0x176d64u: goto label_176d64;
        case 0x176d68u: goto label_176d68;
        case 0x176d6cu: goto label_176d6c;
        case 0x176d70u: goto label_176d70;
        case 0x176d74u: goto label_176d74;
        case 0x176d78u: goto label_176d78;
        case 0x176d7cu: goto label_176d7c;
        case 0x176d80u: goto label_176d80;
        case 0x176d84u: goto label_176d84;
        case 0x176d88u: goto label_176d88;
        case 0x176d8cu: goto label_176d8c;
        case 0x176d90u: goto label_176d90;
        case 0x176d94u: goto label_176d94;
        case 0x176d98u: goto label_176d98;
        case 0x176d9cu: goto label_176d9c;
        case 0x176da0u: goto label_176da0;
        case 0x176da4u: goto label_176da4;
        case 0x176da8u: goto label_176da8;
        case 0x176dacu: goto label_176dac;
        case 0x176db0u: goto label_176db0;
        case 0x176db4u: goto label_176db4;
        case 0x176db8u: goto label_176db8;
        case 0x176dbcu: goto label_176dbc;
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc4u: goto label_176dc4;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dccu: goto label_176dcc;
        case 0x176dd0u: goto label_176dd0;
        case 0x176dd4u: goto label_176dd4;
        case 0x176dd8u: goto label_176dd8;
        case 0x176ddcu: goto label_176ddc;
        case 0x176de0u: goto label_176de0;
        case 0x176de4u: goto label_176de4;
        case 0x176de8u: goto label_176de8;
        case 0x176decu: goto label_176dec;
        case 0x176df0u: goto label_176df0;
        case 0x176df4u: goto label_176df4;
        case 0x176df8u: goto label_176df8;
        case 0x176dfcu: goto label_176dfc;
        case 0x176e00u: goto label_176e00;
        case 0x176e04u: goto label_176e04;
        case 0x176e08u: goto label_176e08;
        case 0x176e0cu: goto label_176e0c;
        case 0x176e10u: goto label_176e10;
        case 0x176e14u: goto label_176e14;
        case 0x176e18u: goto label_176e18;
        case 0x176e1cu: goto label_176e1c;
        case 0x176e20u: goto label_176e20;
        case 0x176e24u: goto label_176e24;
        case 0x176e28u: goto label_176e28;
        case 0x176e2cu: goto label_176e2c;
        case 0x176e30u: goto label_176e30;
        case 0x176e34u: goto label_176e34;
        case 0x176e38u: goto label_176e38;
        case 0x176e3cu: goto label_176e3c;
        case 0x176e40u: goto label_176e40;
        case 0x176e44u: goto label_176e44;
        case 0x176e48u: goto label_176e48;
        case 0x176e4cu: goto label_176e4c;
        case 0x176e50u: goto label_176e50;
        case 0x176e54u: goto label_176e54;
        case 0x176e58u: goto label_176e58;
        case 0x176e5cu: goto label_176e5c;
        case 0x176e60u: goto label_176e60;
        case 0x176e64u: goto label_176e64;
        case 0x176e68u: goto label_176e68;
        case 0x176e6cu: goto label_176e6c;
        case 0x176e70u: goto label_176e70;
        case 0x176e74u: goto label_176e74;
        case 0x176e78u: goto label_176e78;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e80u: goto label_176e80;
        case 0x176e84u: goto label_176e84;
        case 0x176e88u: goto label_176e88;
        case 0x176e8cu: goto label_176e8c;
        case 0x176e90u: goto label_176e90;
        case 0x176e94u: goto label_176e94;
        case 0x176e98u: goto label_176e98;
        case 0x176e9cu: goto label_176e9c;
        case 0x176ea0u: goto label_176ea0;
        case 0x176ea4u: goto label_176ea4;
        case 0x176ea8u: goto label_176ea8;
        case 0x176eacu: goto label_176eac;
        case 0x176eb0u: goto label_176eb0;
        case 0x176eb4u: goto label_176eb4;
        case 0x176eb8u: goto label_176eb8;
        case 0x176ebcu: goto label_176ebc;
        case 0x176ec0u: goto label_176ec0;
        case 0x176ec4u: goto label_176ec4;
        case 0x176ec8u: goto label_176ec8;
        case 0x176eccu: goto label_176ecc;
        case 0x176ed0u: goto label_176ed0;
        case 0x176ed4u: goto label_176ed4;
        case 0x176ed8u: goto label_176ed8;
        case 0x176edcu: goto label_176edc;
        case 0x176ee0u: goto label_176ee0;
        case 0x176ee4u: goto label_176ee4;
        case 0x176ee8u: goto label_176ee8;
        case 0x176eecu: goto label_176eec;
        case 0x176ef0u: goto label_176ef0;
        case 0x176ef4u: goto label_176ef4;
        case 0x176ef8u: goto label_176ef8;
        case 0x176efcu: goto label_176efc;
        case 0x176f00u: goto label_176f00;
        case 0x176f04u: goto label_176f04;
        case 0x176f08u: goto label_176f08;
        case 0x176f0cu: goto label_176f0c;
        case 0x176f10u: goto label_176f10;
        case 0x176f14u: goto label_176f14;
        case 0x176f18u: goto label_176f18;
        case 0x176f1cu: goto label_176f1c;
        case 0x176f20u: goto label_176f20;
        case 0x176f24u: goto label_176f24;
        case 0x176f28u: goto label_176f28;
        case 0x176f2cu: goto label_176f2c;
        case 0x176f30u: goto label_176f30;
        case 0x176f34u: goto label_176f34;
        case 0x176f38u: goto label_176f38;
        case 0x176f3cu: goto label_176f3c;
        case 0x176f40u: goto label_176f40;
        case 0x176f44u: goto label_176f44;
        case 0x176f48u: goto label_176f48;
        case 0x176f4cu: goto label_176f4c;
        case 0x176f50u: goto label_176f50;
        case 0x176f54u: goto label_176f54;
        case 0x176f58u: goto label_176f58;
        case 0x176f5cu: goto label_176f5c;
        case 0x176f60u: goto label_176f60;
        case 0x176f64u: goto label_176f64;
        case 0x176f68u: goto label_176f68;
        case 0x176f6cu: goto label_176f6c;
        case 0x176f70u: goto label_176f70;
        case 0x176f74u: goto label_176f74;
        case 0x176f78u: goto label_176f78;
        case 0x176f7cu: goto label_176f7c;
        case 0x176f80u: goto label_176f80;
        case 0x176f84u: goto label_176f84;
        case 0x176f88u: goto label_176f88;
        case 0x176f8cu: goto label_176f8c;
        case 0x176f90u: goto label_176f90;
        case 0x176f94u: goto label_176f94;
        case 0x176f98u: goto label_176f98;
        case 0x176f9cu: goto label_176f9c;
        case 0x176fa0u: goto label_176fa0;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fa8u: goto label_176fa8;
        case 0x176facu: goto label_176fac;
        case 0x176fb0u: goto label_176fb0;
        case 0x176fb4u: goto label_176fb4;
        case 0x176fb8u: goto label_176fb8;
        case 0x176fbcu: goto label_176fbc;
        case 0x176fc0u: goto label_176fc0;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fc8u: goto label_176fc8;
        case 0x176fccu: goto label_176fcc;
        case 0x176fd0u: goto label_176fd0;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fd8u: goto label_176fd8;
        case 0x176fdcu: goto label_176fdc;
        case 0x176fe0u: goto label_176fe0;
        case 0x176fe4u: goto label_176fe4;
        case 0x176fe8u: goto label_176fe8;
        case 0x176fecu: goto label_176fec;
        case 0x176ff0u: goto label_176ff0;
        case 0x176ff4u: goto label_176ff4;
        case 0x176ff8u: goto label_176ff8;
        case 0x176ffcu: goto label_176ffc;
        case 0x177000u: goto label_177000;
        case 0x177004u: goto label_177004;
        case 0x177008u: goto label_177008;
        case 0x17700cu: goto label_17700c;
        case 0x177010u: goto label_177010;
        case 0x177014u: goto label_177014;
        case 0x177018u: goto label_177018;
        case 0x17701cu: goto label_17701c;
        case 0x177020u: goto label_177020;
        case 0x177024u: goto label_177024;
        case 0x177028u: goto label_177028;
        case 0x17702cu: goto label_17702c;
        case 0x177030u: goto label_177030;
        case 0x177034u: goto label_177034;
        case 0x177038u: goto label_177038;
        case 0x17703cu: goto label_17703c;
        case 0x177040u: goto label_177040;
        case 0x177044u: goto label_177044;
        case 0x177048u: goto label_177048;
        case 0x17704cu: goto label_17704c;
        case 0x177050u: goto label_177050;
        case 0x177054u: goto label_177054;
        case 0x177058u: goto label_177058;
        case 0x17705cu: goto label_17705c;
        case 0x177060u: goto label_177060;
        case 0x177064u: goto label_177064;
        case 0x177068u: goto label_177068;
        case 0x17706cu: goto label_17706c;
        case 0x177070u: goto label_177070;
        case 0x177074u: goto label_177074;
        case 0x177078u: goto label_177078;
        case 0x17707cu: goto label_17707c;
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        case 0x177090u: goto label_177090;
        case 0x177094u: goto label_177094;
        case 0x177098u: goto label_177098;
        case 0x17709cu: goto label_17709c;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770a4u: goto label_1770a4;
        case 0x1770a8u: goto label_1770a8;
        case 0x1770acu: goto label_1770ac;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b4u: goto label_1770b4;
        case 0x1770b8u: goto label_1770b8;
        case 0x1770bcu: goto label_1770bc;
        case 0x1770c0u: goto label_1770c0;
        case 0x1770c4u: goto label_1770c4;
        case 0x1770c8u: goto label_1770c8;
        case 0x1770ccu: goto label_1770cc;
        case 0x1770d0u: goto label_1770d0;
        case 0x1770d4u: goto label_1770d4;
        case 0x1770d8u: goto label_1770d8;
        case 0x1770dcu: goto label_1770dc;
        case 0x1770e0u: goto label_1770e0;
        case 0x1770e4u: goto label_1770e4;
        case 0x1770e8u: goto label_1770e8;
        case 0x1770ecu: goto label_1770ec;
        case 0x1770f0u: goto label_1770f0;
        case 0x1770f4u: goto label_1770f4;
        case 0x1770f8u: goto label_1770f8;
        case 0x1770fcu: goto label_1770fc;
        case 0x177100u: goto label_177100;
        case 0x177104u: goto label_177104;
        case 0x177108u: goto label_177108;
        case 0x17710cu: goto label_17710c;
        case 0x177110u: goto label_177110;
        case 0x177114u: goto label_177114;
        case 0x177118u: goto label_177118;
        case 0x17711cu: goto label_17711c;
        case 0x177120u: goto label_177120;
        case 0x177124u: goto label_177124;
        case 0x177128u: goto label_177128;
        case 0x17712cu: goto label_17712c;
        case 0x177130u: goto label_177130;
        case 0x177134u: goto label_177134;
        case 0x177138u: goto label_177138;
        case 0x17713cu: goto label_17713c;
        case 0x177140u: goto label_177140;
        case 0x177144u: goto label_177144;
        case 0x177148u: goto label_177148;
        case 0x17714cu: goto label_17714c;
        case 0x177150u: goto label_177150;
        case 0x177154u: goto label_177154;
        case 0x177158u: goto label_177158;
        case 0x17715cu: goto label_17715c;
        case 0x177160u: goto label_177160;
        case 0x177164u: goto label_177164;
        case 0x177168u: goto label_177168;
        case 0x17716cu: goto label_17716c;
        case 0x177170u: goto label_177170;
        case 0x177174u: goto label_177174;
        case 0x177178u: goto label_177178;
        case 0x17717cu: goto label_17717c;
        case 0x177180u: goto label_177180;
        case 0x177184u: goto label_177184;
        case 0x177188u: goto label_177188;
        case 0x17718cu: goto label_17718c;
        case 0x177190u: goto label_177190;
        case 0x177194u: goto label_177194;
        case 0x177198u: goto label_177198;
        case 0x17719cu: goto label_17719c;
        case 0x1771a0u: goto label_1771a0;
        case 0x1771a4u: goto label_1771a4;
        case 0x1771a8u: goto label_1771a8;
        case 0x1771acu: goto label_1771ac;
        case 0x1771b0u: goto label_1771b0;
        case 0x1771b4u: goto label_1771b4;
        case 0x1771b8u: goto label_1771b8;
        case 0x1771bcu: goto label_1771bc;
        case 0x1771c0u: goto label_1771c0;
        case 0x1771c4u: goto label_1771c4;
        case 0x1771c8u: goto label_1771c8;
        case 0x1771ccu: goto label_1771cc;
        case 0x1771d0u: goto label_1771d0;
        case 0x1771d4u: goto label_1771d4;
        case 0x1771d8u: goto label_1771d8;
        case 0x1771dcu: goto label_1771dc;
        case 0x1771e0u: goto label_1771e0;
        case 0x1771e4u: goto label_1771e4;
        case 0x1771e8u: goto label_1771e8;
        case 0x1771ecu: goto label_1771ec;
        case 0x1771f0u: goto label_1771f0;
        case 0x1771f4u: goto label_1771f4;
        case 0x1771f8u: goto label_1771f8;
        case 0x1771fcu: goto label_1771fc;
        case 0x177200u: goto label_177200;
        case 0x177204u: goto label_177204;
        case 0x177208u: goto label_177208;
        case 0x17720cu: goto label_17720c;
        case 0x177210u: goto label_177210;
        case 0x177214u: goto label_177214;
        case 0x177218u: goto label_177218;
        case 0x17721cu: goto label_17721c;
        case 0x177220u: goto label_177220;
        case 0x177224u: goto label_177224;
        case 0x177228u: goto label_177228;
        case 0x17722cu: goto label_17722c;
        case 0x177230u: goto label_177230;
        case 0x177234u: goto label_177234;
        case 0x177238u: goto label_177238;
        case 0x17723cu: goto label_17723c;
        case 0x177240u: goto label_177240;
        case 0x177244u: goto label_177244;
        case 0x177248u: goto label_177248;
        case 0x17724cu: goto label_17724c;
        case 0x177250u: goto label_177250;
        case 0x177254u: goto label_177254;
        case 0x177258u: goto label_177258;
        case 0x17725cu: goto label_17725c;
        case 0x177260u: goto label_177260;
        case 0x177264u: goto label_177264;
        case 0x177268u: goto label_177268;
        case 0x17726cu: goto label_17726c;
        case 0x177270u: goto label_177270;
        case 0x177274u: goto label_177274;
        case 0x177278u: goto label_177278;
        case 0x17727cu: goto label_17727c;
        case 0x177280u: goto label_177280;
        case 0x177284u: goto label_177284;
        case 0x177288u: goto label_177288;
        case 0x17728cu: goto label_17728c;
        case 0x177290u: goto label_177290;
        case 0x177294u: goto label_177294;
        case 0x177298u: goto label_177298;
        case 0x17729cu: goto label_17729c;
        case 0x1772a0u: goto label_1772a0;
        case 0x1772a4u: goto label_1772a4;
        case 0x1772a8u: goto label_1772a8;
        case 0x1772acu: goto label_1772ac;
        case 0x1772b0u: goto label_1772b0;
        case 0x1772b4u: goto label_1772b4;
        case 0x1772b8u: goto label_1772b8;
        case 0x1772bcu: goto label_1772bc;
        case 0x1772c0u: goto label_1772c0;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772c8u: goto label_1772c8;
        case 0x1772ccu: goto label_1772cc;
        case 0x1772d0u: goto label_1772d0;
        case 0x1772d4u: goto label_1772d4;
        case 0x1772d8u: goto label_1772d8;
        case 0x1772dcu: goto label_1772dc;
        case 0x1772e0u: goto label_1772e0;
        case 0x1772e4u: goto label_1772e4;
        case 0x1772e8u: goto label_1772e8;
        case 0x1772ecu: goto label_1772ec;
        case 0x1772f0u: goto label_1772f0;
        case 0x1772f4u: goto label_1772f4;
        case 0x1772f8u: goto label_1772f8;
        case 0x1772fcu: goto label_1772fc;
        case 0x177300u: goto label_177300;
        case 0x177304u: goto label_177304;
        case 0x177308u: goto label_177308;
        case 0x17730cu: goto label_17730c;
        case 0x177310u: goto label_177310;
        case 0x177314u: goto label_177314;
        case 0x177318u: goto label_177318;
        case 0x17731cu: goto label_17731c;
        case 0x177320u: goto label_177320;
        case 0x177324u: goto label_177324;
        case 0x177328u: goto label_177328;
        case 0x17732cu: goto label_17732c;
        case 0x177330u: goto label_177330;
        case 0x177334u: goto label_177334;
        case 0x177338u: goto label_177338;
        case 0x17733cu: goto label_17733c;
        case 0x177340u: goto label_177340;
        case 0x177344u: goto label_177344;
        case 0x177348u: goto label_177348;
        case 0x17734cu: goto label_17734c;
        case 0x177350u: goto label_177350;
        case 0x177354u: goto label_177354;
        case 0x177358u: goto label_177358;
        case 0x17735cu: goto label_17735c;
        case 0x177360u: goto label_177360;
        case 0x177364u: goto label_177364;
        case 0x177368u: goto label_177368;
        case 0x17736cu: goto label_17736c;
        case 0x177370u: goto label_177370;
        case 0x177374u: goto label_177374;
        case 0x177378u: goto label_177378;
        case 0x17737cu: goto label_17737c;
        case 0x177380u: goto label_177380;
        case 0x177384u: goto label_177384;
        case 0x177388u: goto label_177388;
        case 0x17738cu: goto label_17738c;
        case 0x177390u: goto label_177390;
        case 0x177394u: goto label_177394;
        case 0x177398u: goto label_177398;
        case 0x17739cu: goto label_17739c;
        case 0x1773a0u: goto label_1773a0;
        case 0x1773a4u: goto label_1773a4;
        case 0x1773a8u: goto label_1773a8;
        case 0x1773acu: goto label_1773ac;
        case 0x1773b0u: goto label_1773b0;
        case 0x1773b4u: goto label_1773b4;
        case 0x1773b8u: goto label_1773b8;
        case 0x1773bcu: goto label_1773bc;
        case 0x1773c0u: goto label_1773c0;
        case 0x1773c4u: goto label_1773c4;
        case 0x1773c8u: goto label_1773c8;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773d0u: goto label_1773d0;
        case 0x1773d4u: goto label_1773d4;
        case 0x1773d8u: goto label_1773d8;
        case 0x1773dcu: goto label_1773dc;
        case 0x1773e0u: goto label_1773e0;
        case 0x1773e4u: goto label_1773e4;
        case 0x1773e8u: goto label_1773e8;
        case 0x1773ecu: goto label_1773ec;
        case 0x1773f0u: goto label_1773f0;
        case 0x1773f4u: goto label_1773f4;
        case 0x1773f8u: goto label_1773f8;
        case 0x1773fcu: goto label_1773fc;
        case 0x177400u: goto label_177400;
        case 0x177404u: goto label_177404;
        case 0x177408u: goto label_177408;
        case 0x17740cu: goto label_17740c;
        default: return;
    }

label_176c40:
    // 0x176c40: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176c44:
    // 0x176c44: 0xac224904  sw          $v0, 0x4904($at)
    ctx->pc = 0x176c44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 2));
label_176c48:
    // 0x176c48: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c4c:
    // 0x176c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176c50:
    // 0x176c50: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x176c50u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 0));
label_176c54:
    // 0x176c54: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c58:
    // 0x176c58: 0xa42051f4  sh          $zero, 0x51F4($at)
    ctx->pc = 0x176c58u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
label_176c5c:
    // 0x176c5c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x176c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_176c60:
    // 0x176c60: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_176c64:
    // 0x176c64: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x176c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_176c68:
    // 0x176c68: 0xa0600680  sb          $zero, 0x680($v1)
    ctx->pc = 0x176c68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1664), (uint8_t)GPR_U32(ctx, 0));
label_176c6c:
    // 0x176c6c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x176c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_176c70:
    // 0x176c70: 0xa0600681  sb          $zero, 0x681($v1)
    ctx->pc = 0x176c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1665), (uint8_t)GPR_U32(ctx, 0));
label_176c74:
    // 0x176c74: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x176c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
label_176c78:
    // 0x176c78: 0xa0600682  sb          $zero, 0x682($v1)
    ctx->pc = 0x176c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1666), (uint8_t)GPR_U32(ctx, 0));
label_176c7c:
    // 0x176c7c: 0xa0600683  sb          $zero, 0x683($v1)
    ctx->pc = 0x176c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1667), (uint8_t)GPR_U32(ctx, 0));
label_176c80:
    // 0x176c80: 0xa0600684  sb          $zero, 0x684($v1)
    ctx->pc = 0x176c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1668), (uint8_t)GPR_U32(ctx, 0));
label_176c84:
    // 0x176c84: 0xa0600685  sb          $zero, 0x685($v1)
    ctx->pc = 0x176c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1669), (uint8_t)GPR_U32(ctx, 0));
label_176c88:
    // 0x176c88: 0xa0600686  sb          $zero, 0x686($v1)
    ctx->pc = 0x176c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1670), (uint8_t)GPR_U32(ctx, 0));
label_176c8c:
    // 0x176c8c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_176c90:
    if (ctx->pc == 0x176C90u) {
        ctx->pc = 0x176C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C8Cu;
        // 0x176c90: 0xa0600687  sb          $zero, 0x687($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1671), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C94u;
        goto label_176c94;
    }
    ctx->pc = 0x176C8Cu;
    {
        const bool branch_taken_0x176c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C8Cu;
        // 0x176c90: 0xa0600687  sb          $zero, 0x687($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1671), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c8c) {
            ctx->pc = 0x176C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176c64;
        }
    }
    ctx->pc = 0x176C94u;
label_176c94:
    // 0x176c94: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c98:
    // 0x176c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176c9c:
    // 0x176c9c: 0xac2050e0  sw          $zero, 0x50E0($at)
    ctx->pc = 0x176c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20704), GPR_U32(ctx, 0));
label_176ca0:
    // 0x176ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176ca4:
    // 0x176ca4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176ca8:
    // 0x176ca8: 0xac2050e4  sw          $zero, 0x50E4($at)
    ctx->pc = 0x176ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20708), GPR_U32(ctx, 0));
label_176cac:
    // 0x176cac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cb0:
    // 0x176cb0: 0xac2050e8  sw          $zero, 0x50E8($at)
    ctx->pc = 0x176cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20712), GPR_U32(ctx, 0));
label_176cb4:
    // 0x176cb4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cb8:
    // 0x176cb8: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x176cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20626), (uint16_t)GPR_U32(ctx, 0));
label_176cbc:
    // 0x176cbc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cc0:
    // 0x176cc0: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x176cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20624), (uint16_t)GPR_U32(ctx, 0));
label_176cc4:
    // 0x176cc4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cc8:
    // 0x176cc8: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x176cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_176ccc:
    // 0x176ccc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cd0:
    // 0x176cd0: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x176cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 0));
label_176cd4:
    // 0x176cd4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cd8:
    // 0x176cd8: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x176cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20634), (uint16_t)GPR_U32(ctx, 0));
label_176cdc:
    // 0x176cdc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176ce0:
    // 0x176ce0: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x176ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20632), (uint16_t)GPR_U32(ctx, 0));
label_176ce4:
    // 0x176ce4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176ce8:
    // 0x176ce8: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x176ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20638), (uint16_t)GPR_U32(ctx, 0));
label_176cec:
    // 0x176cec: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cf0:
    // 0x176cf0: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x176cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20636), (uint16_t)GPR_U32(ctx, 0));
label_176cf4:
    // 0x176cf4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176cf8:
    // 0x176cf8: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x176cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20642), (uint16_t)GPR_U32(ctx, 0));
label_176cfc:
    // 0x176cfc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d00:
    // 0x176d00: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x176d00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20640), (uint16_t)GPR_U32(ctx, 0));
label_176d04:
    // 0x176d04: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d08:
    // 0x176d08: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x176d08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20646), (uint16_t)GPR_U32(ctx, 0));
label_176d0c:
    // 0x176d0c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d10:
    // 0x176d10: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x176d10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20644), (uint16_t)GPR_U32(ctx, 0));
label_176d14:
    // 0x176d14: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d18:
    // 0x176d18: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x176d18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20650), (uint16_t)GPR_U32(ctx, 0));
label_176d1c:
    // 0x176d1c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d20:
    // 0x176d20: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x176d20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20648), (uint16_t)GPR_U32(ctx, 0));
label_176d24:
    // 0x176d24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d28:
    // 0x176d28: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x176d28u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20654), (uint16_t)GPR_U32(ctx, 0));
label_176d2c:
    // 0x176d2c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176d30:
    // 0x176d30: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x176d30u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20652), (uint16_t)GPR_U32(ctx, 0));
label_176d34:
    // 0x176d34: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_176d38:
    // 0x176d38: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_176d3c:
    // 0x176d3c: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x176d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_176d40:
    // 0x176d40: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_176d44:
    // 0x176d44: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x176d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_176d48:
    // 0x176d48: 0xacc40074  sw          $a0, 0x74($a2)
    ctx->pc = 0x176d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 4));
label_176d4c:
    // 0x176d4c: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x176d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
label_176d50:
    // 0x176d50: 0xacc4008c  sw          $a0, 0x8C($a2)
    ctx->pc = 0x176d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 4));
label_176d54:
    // 0x176d54: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x176d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_176d58:
    // 0x176d58: 0xacc400a4  sw          $a0, 0xA4($a2)
    ctx->pc = 0x176d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 4));
label_176d5c:
    // 0x176d5c: 0xacc400bc  sw          $a0, 0xBC($a2)
    ctx->pc = 0x176d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 4));
label_176d60:
    // 0x176d60: 0xacc400d4  sw          $a0, 0xD4($a2)
    ctx->pc = 0x176d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 4));
label_176d64:
    // 0x176d64: 0xacc400ec  sw          $a0, 0xEC($a2)
    ctx->pc = 0x176d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 236), GPR_U32(ctx, 4));
label_176d68:
    // 0x176d68: 0xacc40104  sw          $a0, 0x104($a2)
    ctx->pc = 0x176d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 4));
label_176d6c:
    // 0x176d6c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_176d70:
    if (ctx->pc == 0x176D70u) {
        ctx->pc = 0x176D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D6Cu;
        // 0x176d70: 0xacc4011c  sw          $a0, 0x11C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D74u;
        goto label_176d74;
    }
    ctx->pc = 0x176D6Cu;
    {
        const bool branch_taken_0x176d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D6Cu;
        // 0x176d70: 0xacc4011c  sw          $a0, 0x11C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d6c) {
            ctx->pc = 0x176D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176d40;
        }
    }
    ctx->pc = 0x176D74u;
label_176d74:
    // 0x176d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176d78:
    // 0x176d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176d7c:
    // 0x176d7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_176d80:
    // 0x176d80: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x176d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_176d84:
    // 0x176d84: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x176d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_176d88:
    // 0x176d88: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x176d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_176d8c:
    // 0x176d8c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x176d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_176d90:
    // 0x176d90: 0xacc40074  sw          $a0, 0x74($a2)
    ctx->pc = 0x176d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 4));
label_176d94:
    // 0x176d94: 0x28e20040  slti        $v0, $a3, 0x40
    ctx->pc = 0x176d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
label_176d98:
    // 0x176d98: 0xacc4008c  sw          $a0, 0x8C($a2)
    ctx->pc = 0x176d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 4));
label_176d9c:
    // 0x176d9c: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x176d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_176da0:
    // 0x176da0: 0xacc400a4  sw          $a0, 0xA4($a2)
    ctx->pc = 0x176da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 4));
label_176da4:
    // 0x176da4: 0xacc400bc  sw          $a0, 0xBC($a2)
    ctx->pc = 0x176da4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 188), GPR_U32(ctx, 4));
label_176da8:
    // 0x176da8: 0xacc400d4  sw          $a0, 0xD4($a2)
    ctx->pc = 0x176da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 4));
label_176dac:
    // 0x176dac: 0xacc400ec  sw          $a0, 0xEC($a2)
    ctx->pc = 0x176dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 236), GPR_U32(ctx, 4));
label_176db0:
    // 0x176db0: 0xacc40104  sw          $a0, 0x104($a2)
    ctx->pc = 0x176db0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 4));
label_176db4:
    // 0x176db4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_176db8:
    if (ctx->pc == 0x176DB8u) {
        ctx->pc = 0x176DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DB4u;
        // 0x176db8: 0xacc4011c  sw          $a0, 0x11C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176DBCu;
        goto label_176dbc;
    }
    ctx->pc = 0x176DB4u;
    {
        const bool branch_taken_0x176db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DB4u;
        // 0x176db8: 0xacc4011c  sw          $a0, 0x11C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 284), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176db4) {
            ctx->pc = 0x176D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176d88;
        }
    }
    ctx->pc = 0x176DBCu;
label_176dbc:
    // 0x176dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176dc0:
    // 0x176dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176dc4:
    // 0x176dc4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_176dc8:
    // 0x176dc8: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_176dcc:
    // 0x176dcc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x176dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_176dd0:
    // 0x176dd0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_176dd4:
    // 0x176dd4: 0xa4a006c4  sh          $zero, 0x6C4($a1)
    ctx->pc = 0x176dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1732), (uint16_t)GPR_U32(ctx, 0));
label_176dd8:
    // 0x176dd8: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x176dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_176ddc:
    // 0x176ddc: 0xa4a006d4  sh          $zero, 0x6D4($a1)
    ctx->pc = 0x176ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1748), (uint16_t)GPR_U32(ctx, 0));
label_176de0:
    // 0x176de0: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x176de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_176de4:
    // 0x176de4: 0xa4a006e4  sh          $zero, 0x6E4($a1)
    ctx->pc = 0x176de4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1764), (uint16_t)GPR_U32(ctx, 0));
label_176de8:
    // 0x176de8: 0xa4a006f4  sh          $zero, 0x6F4($a1)
    ctx->pc = 0x176de8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1780), (uint16_t)GPR_U32(ctx, 0));
label_176dec:
    // 0x176dec: 0xa4a00704  sh          $zero, 0x704($a1)
    ctx->pc = 0x176decu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1796), (uint16_t)GPR_U32(ctx, 0));
label_176df0:
    // 0x176df0: 0xa4a00714  sh          $zero, 0x714($a1)
    ctx->pc = 0x176df0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1812), (uint16_t)GPR_U32(ctx, 0));
label_176df4:
    // 0x176df4: 0xa4a00724  sh          $zero, 0x724($a1)
    ctx->pc = 0x176df4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1828), (uint16_t)GPR_U32(ctx, 0));
label_176df8:
    // 0x176df8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_176dfc:
    if (ctx->pc == 0x176DFCu) {
        ctx->pc = 0x176DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF8u;
        // 0x176dfc: 0xa4a00734  sh          $zero, 0x734($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1844), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E00u;
        goto label_176e00;
    }
    ctx->pc = 0x176DF8u;
    {
        const bool branch_taken_0x176df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176DF8u;
        // 0x176dfc: 0xa4a00734  sh          $zero, 0x734($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1844), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176df8) {
            ctx->pc = 0x176DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176dcc;
        }
    }
    ctx->pc = 0x176E00u;
label_176e00:
    // 0x176e00: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176e04:
    // 0x176e04: 0xa0204911  sb          $zero, 0x4911($at)
    ctx->pc = 0x176e04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18705), (uint8_t)GPR_U32(ctx, 0));
label_176e08:
    // 0x176e08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176e0c:
    // 0x176e0c: 0xa0204912  sb          $zero, 0x4912($at)
    ctx->pc = 0x176e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18706), (uint8_t)GPR_U32(ctx, 0));
label_176e10:
    // 0x176e10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176e14:
    // 0x176e14: 0xc08899c  jal         func_222670
label_176e18:
    if (ctx->pc == 0x176E18u) {
        ctx->pc = 0x176E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E14u;
        // 0x176e18: 0xa0204913  sb          $zero, 0x4913($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18707), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E1Cu;
        goto label_176e1c;
    }
    ctx->pc = 0x176E14u;
    SET_GPR_U32(ctx, 31, 0x176E1Cu);
    ctx->pc = 0x176E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E14u;
    // 0x176e18: 0xa0204913  sb          $zero, 0x4913($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 18707), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222670u;
    { ctx->pc = 0x222670; return; }
    ctx->pc = 0x176E1Cu;
label_176e1c:
    // 0x176e1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176e20:
    // 0x176e20: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x176e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_176e24:
    // 0x176e24: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x176e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_176e28:
    // 0x176e28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_176e2c:
    if (ctx->pc == 0x176E2Cu) {
        ctx->pc = 0x176E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E28u;
        // 0x176e2c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E30u;
        goto label_176e30;
    }
    ctx->pc = 0x176E28u;
    {
        const bool branch_taken_0x176e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E28u;
        // 0x176e2c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e28) {
            ctx->pc = 0x176E38u;
            goto label_176e38;
        }
    }
    ctx->pc = 0x176E30u;
label_176e30:
    // 0x176e30: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_176e34:
    if (ctx->pc == 0x176E34u) {
        ctx->pc = 0x176E38u;
        goto label_176e38;
    }
    ctx->pc = 0x176E30u;
    {
        const bool branch_taken_0x176e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176e30) {
            ctx->pc = 0x176E40u;
            goto label_176e40;
        }
    }
    ctx->pc = 0x176E38u;
label_176e38:
    // 0x176e38: 0x10000003  b           . + 4 + (0x3 << 2)
label_176e3c:
    if (ctx->pc == 0x176E3Cu) {
        ctx->pc = 0x176E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E38u;
        // 0x176e3c: 0xaf808748  sw          $zero, -0x78B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E40u;
        goto label_176e40;
    }
    ctx->pc = 0x176E38u;
    {
        const bool branch_taken_0x176e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E38u;
        // 0x176e3c: 0xaf808748  sw          $zero, -0x78B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e38) {
            ctx->pc = 0x176E48u;
            goto label_176e48;
        }
    }
    ctx->pc = 0x176E40u;
label_176e40:
    // 0x176e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176e44:
    // 0x176e44: 0xaf838748  sw          $v1, -0x78B8($gp)
    ctx->pc = 0x176e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 3));
label_176e48:
    // 0x176e48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176e4c:
    // 0x176e4c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_176e50:
    // 0x176e50: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176e50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_176e54:
    // 0x176e54: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_176e58:
    if (ctx->pc == 0x176E58u) {
        ctx->pc = 0x176E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E54u;
        // 0x176e58: 0x24030062  addiu       $v1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E5Cu;
        goto label_176e5c;
    }
    ctx->pc = 0x176E54u;
    {
        const bool branch_taken_0x176e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x176E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E54u;
        // 0x176e58: 0x24030062  addiu       $v1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e54) {
            ctx->pc = 0x176E6Cu;
            goto label_176e6c;
        }
    }
    ctx->pc = 0x176E5Cu;
label_176e5c:
    // 0x176e5c: 0xc08ab44  jal         func_22AD10
label_176e60:
    if (ctx->pc == 0x176E60u) {
        ctx->pc = 0x176E64u;
        goto label_176e64;
    }
    ctx->pc = 0x176E5Cu;
    SET_GPR_U32(ctx, 31, 0x176E64u);
    ctx->pc = 0x22AD10u;
    { ctx->pc = 0x22ad10; return; }
    ctx->pc = 0x176E64u;
label_176e64:
    // 0x176e64: 0x10000012  b           . + 4 + (0x12 << 2)
label_176e68:
    if (ctx->pc == 0x176E68u) {
        ctx->pc = 0x176E6Cu;
        goto label_176e6c;
    }
    ctx->pc = 0x176E64u;
    {
        const bool branch_taken_0x176e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e64) {
            ctx->pc = 0x176EB0u;
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176E6Cu;
label_176e6c:
    // 0x176e6c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_176e70:
    if (ctx->pc == 0x176E70u) {
        ctx->pc = 0x176E74u;
        goto label_176e74;
    }
    ctx->pc = 0x176E6Cu;
    {
        const bool branch_taken_0x176e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176e6c) {
            ctx->pc = 0x176E84u;
            goto label_176e84;
        }
    }
    ctx->pc = 0x176E74u;
label_176e74:
    // 0x176e74: 0xc08ab44  jal         func_22AD10
label_176e78:
    if (ctx->pc == 0x176E78u) {
        ctx->pc = 0x176E7Cu;
        goto label_176e7c;
    }
    ctx->pc = 0x176E74u;
    SET_GPR_U32(ctx, 31, 0x176E7Cu);
    ctx->pc = 0x22AD10u;
    { ctx->pc = 0x22ad10; return; }
    ctx->pc = 0x176E7Cu;
label_176e7c:
    // 0x176e7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_176e80:
    if (ctx->pc == 0x176E80u) {
        ctx->pc = 0x176E84u;
        goto label_176e84;
    }
    ctx->pc = 0x176E7Cu;
    {
        const bool branch_taken_0x176e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e7c) {
            ctx->pc = 0x176EB0u;
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176E84u;
label_176e84:
    // 0x176e84: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x176e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_176e88:
    // 0x176e88: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_176e8c:
    if (ctx->pc == 0x176E8Cu) {
        ctx->pc = 0x176E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E88u;
        // 0x176e8c: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176E90u;
        goto label_176e90;
    }
    ctx->pc = 0x176E88u;
    {
        const bool branch_taken_0x176e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x176E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E88u;
        // 0x176e8c: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e88) {
            ctx->pc = 0x176EA0u;
            goto label_176ea0;
        }
    }
    ctx->pc = 0x176E90u;
label_176e90:
    // 0x176e90: 0xc08ab44  jal         func_22AD10
label_176e94:
    if (ctx->pc == 0x176E94u) {
        ctx->pc = 0x176E98u;
        goto label_176e98;
    }
    ctx->pc = 0x176E90u;
    SET_GPR_U32(ctx, 31, 0x176E98u);
    ctx->pc = 0x22AD10u;
    { ctx->pc = 0x22ad10; return; }
    ctx->pc = 0x176E98u;
label_176e98:
    // 0x176e98: 0x10000005  b           . + 4 + (0x5 << 2)
label_176e9c:
    if (ctx->pc == 0x176E9Cu) {
        ctx->pc = 0x176EA0u;
        goto label_176ea0;
    }
    ctx->pc = 0x176E98u;
    {
        const bool branch_taken_0x176e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e98) {
            ctx->pc = 0x176EB0u;
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_176ea4:
    if (ctx->pc == 0x176EA4u) {
        ctx->pc = 0x176EA8u;
        goto label_176ea8;
    }
    ctx->pc = 0x176EA0u;
    {
        const bool branch_taken_0x176ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176ea0) {
            ctx->pc = 0x176EB0u;
            goto label_176eb0;
        }
    }
    ctx->pc = 0x176EA8u;
label_176ea8:
    // 0x176ea8: 0xc08ab44  jal         func_22AD10
label_176eac:
    if (ctx->pc == 0x176EACu) {
        ctx->pc = 0x176EB0u;
        goto label_176eb0;
    }
    ctx->pc = 0x176EA8u;
    SET_GPR_U32(ctx, 31, 0x176EB0u);
    ctx->pc = 0x22AD10u;
    { ctx->pc = 0x22ad10; return; }
    ctx->pc = 0x176EB0u;
label_176eb0:
    // 0x176eb0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176eb4:
    // 0x176eb4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_176eb8:
    // 0x176eb8: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176eb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_176ebc:
    // 0x176ebc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_176ec0:
    if (ctx->pc == 0x176EC0u) {
        ctx->pc = 0x176EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EBCu;
        // 0x176ec0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176EC4u;
        goto label_176ec4;
    }
    ctx->pc = 0x176EBCu;
    {
        const bool branch_taken_0x176ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EBCu;
        // 0x176ec0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ebc) {
            ctx->pc = 0x176ECCu;
            goto label_176ecc;
        }
    }
    ctx->pc = 0x176EC4u;
label_176ec4:
    // 0x176ec4: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_176ec8:
    if (ctx->pc == 0x176EC8u) {
        ctx->pc = 0x176ECCu;
        goto label_176ecc;
    }
    ctx->pc = 0x176EC4u;
    {
        const bool branch_taken_0x176ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176ec4) {
            ctx->pc = 0x176F0Cu;
            goto label_176f0c;
        }
    }
    ctx->pc = 0x176ECCu;
label_176ecc:
    // 0x176ecc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x176eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_176ed0:
    // 0x176ed0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x176ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_176ed4:
    // 0x176ed4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x176ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_176ed8:
    // 0x176ed8: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x176ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_176edc:
    // 0x176edc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x176edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_176ee0:
    // 0x176ee0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x176ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_176ee4:
    // 0x176ee4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x176ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_176ee8:
    // 0x176ee8: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
label_176eec:
    // 0x176eec: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x176eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_176ef0:
    // 0x176ef0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x176ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_176ef4:
    // 0x176ef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x176ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_176ef8:
    // 0x176ef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_176efc:
    // 0x176efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176f00:
    // 0x176f00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_176f04:
    // 0x176f04: 0x40f809  jalr        $v0
label_176f08:
    if (ctx->pc == 0x176F08u) {
        ctx->pc = 0x176F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F04u;
        // 0x176f08: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F0Cu;
        goto label_176f0c;
    }
    ctx->pc = 0x176F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176F0Cu);
        ctx->pc = 0x176F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F04u;
        // 0x176f08: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F04u, 0x176F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176F0Cu;
label_176f0c:
    // 0x176f0c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176f10:
    // 0x176f10: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x176f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_176f14:
    // 0x176f14: 0x1460004f  bnez        $v1, . + 4 + (0x4F << 2)
label_176f18:
    if (ctx->pc == 0x176F18u) {
        ctx->pc = 0x176F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F14u;
        // 0x176f18: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F1Cu;
        goto label_176f1c;
    }
    ctx->pc = 0x176F14u;
    {
        const bool branch_taken_0x176f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F14u;
        // 0x176f18: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f14) {
            ctx->pc = 0x177054u;
            goto label_177054;
        }
    }
    ctx->pc = 0x176F1Cu;
label_176f1c:
    // 0x176f1c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x176f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_176f20:
    // 0x176f20: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_176f24:
    // 0x176f24: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_176f28:
    if (ctx->pc == 0x176F28u) {
        ctx->pc = 0x176F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F24u;
        // 0x176f28: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F2Cu;
        goto label_176f2c;
    }
    ctx->pc = 0x176F24u;
    {
        const bool branch_taken_0x176f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x176F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F24u;
        // 0x176f28: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f24) {
            ctx->pc = 0x176FA8u;
            goto label_176fa8;
        }
    }
    ctx->pc = 0x176F2Cu;
label_176f2c:
    // 0x176f2c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_176f30:
    // 0x176f30: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_176f34:
    // 0x176f34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x176f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_176f38:
    // 0x176f38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_176f3c:
    // 0x176f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176f40:
    // 0x176f40: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x176f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_176f44:
    // 0x176f44: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x176f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_176f48:
    // 0x176f48: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x176f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_176f4c:
    // 0x176f4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_176f50:
    // 0x176f50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x176f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_176f54:
    // 0x176f54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x176f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_176f58:
    // 0x176f58: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_176f5c:
    // 0x176f5c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x176f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_176f60:
    // 0x176f60: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_176f64:
    // 0x176f64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x176f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_176f68:
    // 0x176f68: 0xc089af0  jal         func_226BC0
label_176f6c:
    if (ctx->pc == 0x176F6Cu) {
        ctx->pc = 0x176F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F68u;
        // 0x176f6c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176F70u;
        goto label_176f70;
    }
    ctx->pc = 0x176F68u;
    SET_GPR_U32(ctx, 31, 0x176F70u);
    ctx->pc = 0x176F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F68u;
    // 0x176f6c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    { ctx->pc = 0x226bc0; return; }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_176f74:
    // 0x176f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176f78:
    // 0x176f78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x176f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_176f7c:
    // 0x176f7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_176f80:
    // 0x176f80: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x176f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_176f84:
    // 0x176f84: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_176f88:
    // 0x176f88: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_176f8c:
    // 0x176f8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x176f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_176f90:
    // 0x176f90: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x176f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_176f94:
    // 0x176f94: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x176f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_176f98:
    // 0x176f98: 0xc089af0  jal         func_226BC0
label_176f9c:
    if (ctx->pc == 0x176F9Cu) {
        ctx->pc = 0x176F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F98u;
        // 0x176f9c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FA0u;
        goto label_176fa0;
    }
    ctx->pc = 0x176F98u;
    SET_GPR_U32(ctx, 31, 0x176FA0u);
    ctx->pc = 0x176F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F98u;
    // 0x176f9c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    { ctx->pc = 0x226bc0; return; }
    ctx->pc = 0x176FA0u;
label_176fa0:
    // 0x176fa0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_176fa4:
    if (ctx->pc == 0x176FA4u) {
        ctx->pc = 0x176FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA0u;
        // 0x176fa4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FA8u;
        goto label_176fa8;
    }
    ctx->pc = 0x176FA0u;
    {
        const bool branch_taken_0x176fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA0u;
        // 0x176fa4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fa0) {
            ctx->pc = 0x177058u;
            goto label_177058;
        }
    }
    ctx->pc = 0x176FA8u;
label_176fa8:
    // 0x176fa8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_176fac:
    if (ctx->pc == 0x176FACu) {
        ctx->pc = 0x176FB0u;
        goto label_176fb0;
    }
    ctx->pc = 0x176FA8u;
    {
        const bool branch_taken_0x176fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176fa8) {
            ctx->pc = 0x176FBCu;
            goto label_176fbc;
        }
    }
    ctx->pc = 0x176FB0u;
label_176fb0:
    // 0x176fb0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_176fb4:
    // 0x176fb4: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_176fb8:
    if (ctx->pc == 0x176FB8u) {
        ctx->pc = 0x176FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FB4u;
        // 0x176fb8: 0x2403005b  addiu       $v1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FBCu;
        goto label_176fbc;
    }
    ctx->pc = 0x176FB4u;
    {
        const bool branch_taken_0x176fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x176FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FB4u;
        // 0x176fb8: 0x2403005b  addiu       $v1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fb4) {
            ctx->pc = 0x176FD8u;
            goto label_176fd8;
        }
    }
    ctx->pc = 0x176FBCu;
label_176fbc:
    // 0x176fbc: 0xc08a488  jal         func_229220
label_176fc0:
    if (ctx->pc == 0x176FC0u) {
        ctx->pc = 0x176FC4u;
        goto label_176fc4;
    }
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x229220u;
    { ctx->pc = 0x229220; return; }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_176fc8:
    // 0x176fc8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176fcc:
    // 0x176fcc: 0x34637e40  ori         $v1, $v1, 0x7E40
    ctx->pc = 0x176fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32320);
label_176fd0:
    // 0x176fd0: 0x10000020  b           . + 4 + (0x20 << 2)
label_176fd4:
    if (ctx->pc == 0x176FD4u) {
        ctx->pc = 0x176FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FD0u;
        // 0x176fd4: 0xac234904  sw          $v1, 0x4904($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176FD8u;
        goto label_176fd8;
    }
    ctx->pc = 0x176FD0u;
    {
        const bool branch_taken_0x176fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FD0u;
        // 0x176fd4: 0xac234904  sw          $v1, 0x4904($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fd0) {
            ctx->pc = 0x177054u;
            goto label_177054;
        }
    }
    ctx->pc = 0x176FD8u;
label_176fd8:
    // 0x176fd8: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_176fdc:
    if (ctx->pc == 0x176FDCu) {
        ctx->pc = 0x176FE0u;
        goto label_176fe0;
    }
    ctx->pc = 0x176FD8u;
    {
        const bool branch_taken_0x176fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176fd8) {
            ctx->pc = 0x177054u;
            goto label_177054;
        }
    }
    ctx->pc = 0x176FE0u;
label_176fe0:
    // 0x176fe0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x176fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_176fe4:
    // 0x176fe4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x176fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_176fe8:
    // 0x176fe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x176fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_176fec:
    // 0x176fec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x176fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_176ff0:
    // 0x176ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176ff4:
    // 0x176ff4: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_176ff8:
    // 0x176ff8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x176ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_176ffc:
    // 0x176ffc: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_177000:
    // 0x177000: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x177000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177004:
    // 0x177004: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x177004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_177008:
    // 0x177008: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x177008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17700c:
    // 0x17700c: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_177010:
    // 0x177010: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x177010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_177014:
    // 0x177014: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x177014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_177018:
    // 0x177018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x177018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17701c:
    // 0x17701c: 0xc089af0  jal         func_226BC0
label_177020:
    if (ctx->pc == 0x177020u) {
        ctx->pc = 0x177020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17701Cu;
        // 0x177020: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177024u;
        goto label_177024;
    }
    ctx->pc = 0x17701Cu;
    SET_GPR_U32(ctx, 31, 0x177024u);
    ctx->pc = 0x177020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17701Cu;
    // 0x177020: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    { ctx->pc = 0x226bc0; return; }
    ctx->pc = 0x177024u;
label_177024:
    // 0x177024: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x177024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_177028:
    // 0x177028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17702c:
    // 0x17702c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_177030:
    // 0x177030: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x177030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_177034:
    // 0x177034: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x177034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_177038:
    // 0x177038: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_17703c:
    // 0x17703c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_177040:
    // 0x177040: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x177040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_177044:
    // 0x177044: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x177044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_177048:
    // 0x177048: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x177048u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_17704c:
    // 0x17704c: 0xc089af0  jal         func_226BC0
label_177050:
    if (ctx->pc == 0x177050u) {
        ctx->pc = 0x177050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17704Cu;
        // 0x177050: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177054u;
        goto label_177054;
    }
    ctx->pc = 0x17704Cu;
    SET_GPR_U32(ctx, 31, 0x177054u);
    ctx->pc = 0x177050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17704Cu;
    // 0x177050: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    { ctx->pc = 0x226bc0; return; }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_177058:
    // 0x177058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17705c:
    // 0x17705c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17705cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177060:
    // 0x177060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177064:
    // 0x177064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177068:
    // 0x177068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17706c:
    // 0x17706c: 0x3e00008  jr          $ra
label_177070:
    if (ctx->pc == 0x177070u) {
        ctx->pc = 0x177070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17706Cu;
        // 0x177070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177074u;
        goto label_177074;
    }
    ctx->pc = 0x17706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17706Cu;
        // 0x177070: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177074u;
label_177074:
    // 0x177074: 0x0  nop
    ctx->pc = 0x177074u;
    // NOP
label_177078:
    // 0x177078: 0x0  nop
    ctx->pc = 0x177078u;
    // NOP
label_17707c:
    // 0x17707c: 0x0  nop
    ctx->pc = 0x17707cu;
    // NOP
label_177080:
    // 0x177080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x177080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_177084:
    // 0x177084: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x177084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_177088:
    // 0x177088: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17708c:
    // 0x17708c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_177090:
    // 0x177090: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_177094:
    // 0x177094: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_177098:
    // 0x177098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17709c:
    // 0x17709c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1770a0:
    // 0x1770a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1770a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1770a4:
    // 0x1770a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1770a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1770a8:
    // 0x1770a8: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1770a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1770ac:
    // 0x1770ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1770b0:
    if (ctx->pc == 0x1770B0u) {
        ctx->pc = 0x1770B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770ACu;
        // 0x1770b0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770B4u;
        goto label_1770b4;
    }
    ctx->pc = 0x1770ACu;
    {
        const bool branch_taken_0x1770ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1770B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770ACu;
        // 0x1770b0: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770ac) {
            ctx->pc = 0x1770F0u;
            goto label_1770f0;
        }
    }
    ctx->pc = 0x1770B4u;
label_1770b4:
    // 0x1770b4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1770b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1770b8:
    // 0x1770b8: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1770b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_1770bc:
    // 0x1770bc: 0x24422090  addiu       $v0, $v0, 0x2090
    ctx->pc = 0x1770bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
label_1770c0:
    // 0x1770c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1770c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1770c4:
    // 0x1770c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1770c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1770c8:
    // 0x1770c8: 0xc041738  jal         func_105CE0
label_1770cc:
    if (ctx->pc == 0x1770CCu) {
        ctx->pc = 0x1770CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770C8u;
        // 0x1770cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770D0u;
        goto label_1770d0;
    }
    ctx->pc = 0x1770C8u;
    SET_GPR_U32(ctx, 31, 0x1770D0u);
    ctx->pc = 0x1770CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770C8u;
    // 0x1770cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1770C8u, 0x1770D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770D0u;
label_1770d0:
    // 0x1770d0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1770d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1770d4:
    // 0x1770d4: 0xc070080  jal         func_1C0200
label_1770d8:
    if (ctx->pc == 0x1770D8u) {
        ctx->pc = 0x1770D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770D4u;
        // 0x1770d8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770DCu;
        goto label_1770dc;
    }
    ctx->pc = 0x1770D4u;
    SET_GPR_U32(ctx, 31, 0x1770DCu);
    ctx->pc = 0x1770D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770D4u;
    // 0x1770d8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1770DCu;
label_1770dc:
    // 0x1770dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1770dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1770e0:
    // 0x1770e0: 0xc0416e4  jal         func_105B90
label_1770e4:
    if (ctx->pc == 0x1770E4u) {
        ctx->pc = 0x1770E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770E0u;
        // 0x1770e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770E8u;
        goto label_1770e8;
    }
    ctx->pc = 0x1770E0u;
    SET_GPR_U32(ctx, 31, 0x1770E8u);
    ctx->pc = 0x1770E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1770E0u;
    // 0x1770e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1770E0u, 0x1770E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1770E8u;
label_1770e8:
    // 0x1770e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1770ec:
    if (ctx->pc == 0x1770ECu) {
        ctx->pc = 0x1770ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770E8u;
        // 0x1770ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1770F0u;
        goto label_1770f0;
    }
    ctx->pc = 0x1770E8u;
    {
        const bool branch_taken_0x1770e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1770ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1770E8u;
        // 0x1770ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1770e8) {
            ctx->pc = 0x177128u;
            goto label_177128;
        }
    }
    ctx->pc = 0x1770F0u;
label_1770f0:
    // 0x1770f0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1770f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1770f4:
    // 0x1770f4: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1770f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_1770f8:
    // 0x1770f8: 0x24421fd0  addiu       $v0, $v0, 0x1FD0
    ctx->pc = 0x1770f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8144));
label_1770fc:
    // 0x1770fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1770fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_177100:
    // 0x177100: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177104:
    // 0x177104: 0xc041738  jal         func_105CE0
label_177108:
    if (ctx->pc == 0x177108u) {
        ctx->pc = 0x177108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177104u;
        // 0x177108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17710Cu;
        goto label_17710c;
    }
    ctx->pc = 0x177104u;
    SET_GPR_U32(ctx, 31, 0x17710Cu);
    ctx->pc = 0x177108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177104u;
    // 0x177108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x177104u, 0x17710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17710Cu;
label_17710c:
    // 0x17710c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x17710cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_177110:
    // 0x177110: 0xc070080  jal         func_1C0200
label_177114:
    if (ctx->pc == 0x177114u) {
        ctx->pc = 0x177114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177110u;
        // 0x177114: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177118u;
        goto label_177118;
    }
    ctx->pc = 0x177110u;
    SET_GPR_U32(ctx, 31, 0x177118u);
    ctx->pc = 0x177114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177110u;
    // 0x177114: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x177118u;
label_177118:
    // 0x177118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17711c:
    // 0x17711c: 0xc0416e4  jal         func_105B90
label_177120:
    if (ctx->pc == 0x177120u) {
        ctx->pc = 0x177120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17711Cu;
        // 0x177120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177124u;
        goto label_177124;
    }
    ctx->pc = 0x17711Cu;
    SET_GPR_U32(ctx, 31, 0x177124u);
    ctx->pc = 0x177120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17711Cu;
    // 0x177120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x17711Cu, 0x177124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177124u;
label_177124:
    // 0x177124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177128:
    // 0x177128: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x177128u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17712c:
    // 0x17712c: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x17712cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_177130:
    // 0x177130: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x177130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_177134:
    // 0x177134: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_177138:
    if (ctx->pc == 0x177138u) {
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17713Cu;
        goto label_17713c;
    }
    ctx->pc = 0x177134u;
    {
        const bool branch_taken_0x177134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x177138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177134u;
        // 0x177138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177134) {
            ctx->pc = 0x1771ECu;
            goto label_1771ec;
        }
    }
    ctx->pc = 0x17713Cu;
label_17713c:
    // 0x17713c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17713cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177140:
    // 0x177140: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x177140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177144:
    // 0x177144: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x177144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177148:
    // 0x177148: 0x0  nop
    ctx->pc = 0x177148u;
    // NOP
label_17714c:
    // 0x17714c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_177150:
    // 0x177150: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x177150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_177154:
    // 0x177154: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x177154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_177158:
    // 0x177158: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x177158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_17715c:
    // 0x17715c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_177160:
    if (ctx->pc == 0x177160u) {
        ctx->pc = 0x177164u;
        goto label_177164;
    }
    ctx->pc = 0x17715Cu;
    {
        const bool branch_taken_0x17715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17715c) {
            ctx->pc = 0x1771C8u;
            goto label_1771c8;
        }
    }
    ctx->pc = 0x177164u;
label_177164:
    // 0x177164: 0x8c623670  lw          $v0, 0x3670($v1)
    ctx->pc = 0x177164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_177168:
    // 0x177168: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x177168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_17716c:
    // 0x17716c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x17716cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_177170:
    // 0x177170: 0x0  nop
    ctx->pc = 0x177170u;
    // NOP
label_177174:
    // 0x177174: 0x0  nop
    ctx->pc = 0x177174u;
    // NOP
label_177178:
    // 0x177178: 0x1810  mfhi        $v1
    ctx->pc = 0x177178u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17717c:
    // 0x17717c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_177180:
    if (ctx->pc == 0x177180u) {
        ctx->pc = 0x177180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17717Cu;
        // 0x177180: 0x3c0263e7  lui         $v0, 0x63E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25575 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177184u;
        goto label_177184;
    }
    ctx->pc = 0x17717Cu;
    {
        const bool branch_taken_0x17717c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x177180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17717Cu;
        // 0x177180: 0x3c0263e7  lui         $v0, 0x63E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25575 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17717c) {
            ctx->pc = 0x1771C8u;
            goto label_1771c8;
        }
    }
    ctx->pc = 0x177184u;
label_177184:
    // 0x177184: 0x1037c2  srl         $a2, $s0, 31
    ctx->pc = 0x177184u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_177188:
    // 0x177188: 0x3443063f  ori         $v1, $v0, 0x63F
    ctx->pc = 0x177188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1599);
label_17718c:
    // 0x17718c: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x17718cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_177190:
    // 0x177190: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x177190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_177194:
    // 0x177194: 0x24424670  addiu       $v0, $v0, 0x4670
    ctx->pc = 0x177194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18032));
label_177198:
    // 0x177198: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x177198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_17719c:
    // 0x17719c: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x17719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1771a0:
    // 0x1771a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1771a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1771a4:
    // 0x1771a4: 0x2010  mfhi        $a0
    ctx->pc = 0x1771a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1771a8:
    // 0x1771a8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1771a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1771ac:
    // 0x1771ac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1771acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1771b0:
    // 0x1771b0: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1771b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1771b4:
    // 0x1771b4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1771b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1771b8:
    // 0x1771b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1771bc:
    // 0x1771bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1771c0:
    // 0x1771c0: 0xc08f390  jal         func_23CE40
label_1771c4:
    if (ctx->pc == 0x1771C4u) {
        ctx->pc = 0x1771C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771C0u;
        // 0x1771c4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771C8u;
        goto label_1771c8;
    }
    ctx->pc = 0x1771C0u;
    SET_GPR_U32(ctx, 31, 0x1771C8u);
    ctx->pc = 0x1771C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771C0u;
    // 0x1771c4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x1771C8u;
label_1771c8:
    // 0x1771c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1771c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1771cc:
    // 0x1771cc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1771ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1771d0:
    // 0x1771d0: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_1771d4:
    // 0x1771d4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1771d8:
    if (ctx->pc == 0x1771D8u) {
        ctx->pc = 0x1771D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D4u;
        // 0x1771d8: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771DCu;
        goto label_1771dc;
    }
    ctx->pc = 0x1771D4u;
    {
        const bool branch_taken_0x1771d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D4u;
        // 0x1771d8: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771d4) {
            ctx->pc = 0x177148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177148;
        }
    }
    ctx->pc = 0x1771DCu;
label_1771dc:
    // 0x1771dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1771dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1771e0:
    // 0x1771e0: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1771e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1771e4:
    // 0x1771e4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1771e8:
    if (ctx->pc == 0x1771E8u) {
        ctx->pc = 0x1771E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E4u;
        // 0x1771e8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771ECu;
        goto label_1771ec;
    }
    ctx->pc = 0x1771E4u;
    {
        const bool branch_taken_0x1771e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E4u;
        // 0x1771e8: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771e4) {
            ctx->pc = 0x17713Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17713c;
        }
    }
    ctx->pc = 0x1771ECu;
label_1771ec:
    // 0x1771ec: 0x0  nop
    ctx->pc = 0x1771ecu;
    // NOP
label_1771f0:
    // 0x1771f0: 0xc070038  jal         func_1C00E0
label_1771f4:
    if (ctx->pc == 0x1771F4u) {
        ctx->pc = 0x1771F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F0u;
        // 0x1771f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771F8u;
        goto label_1771f8;
    }
    ctx->pc = 0x1771F0u;
    SET_GPR_U32(ctx, 31, 0x1771F8u);
    ctx->pc = 0x1771F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771F0u;
    // 0x1771f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1771F8u;
label_1771f8:
    // 0x1771f8: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1771f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1771fc:
    // 0x1771fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_177200:
    if (ctx->pc == 0x177200u) {
        ctx->pc = 0x177200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771FCu;
        // 0x177200: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177204u;
        goto label_177204;
    }
    ctx->pc = 0x1771FCu;
    {
        const bool branch_taken_0x1771fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771FCu;
        // 0x177200: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771fc) {
            ctx->pc = 0x177294u;
            goto label_177294;
        }
    }
    ctx->pc = 0x177204u;
label_177204:
    // 0x177204: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_177208:
    // 0x177208: 0x16e20013  bne         $s7, $v0, . + 4 + (0x13 << 2)
label_17720c:
    if (ctx->pc == 0x17720Cu) {
        ctx->pc = 0x177210u;
        goto label_177210;
    }
    ctx->pc = 0x177208u;
    {
        const bool branch_taken_0x177208 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x177208) {
            ctx->pc = 0x177258u;
            goto label_177258;
        }
    }
    ctx->pc = 0x177210u;
label_177210:
    // 0x177210: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x177210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_177214:
    // 0x177214: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x177214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_177218:
    // 0x177218: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x177218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_17721c:
    // 0x17721c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_177220:
    if (ctx->pc == 0x177220u) {
        ctx->pc = 0x177220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17721Cu;
        // 0x177220: 0x24040b04  addiu       $a0, $zero, 0xB04 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177224u;
        goto label_177224;
    }
    ctx->pc = 0x17721Cu;
    {
        const bool branch_taken_0x17721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17721Cu;
        // 0x177220: 0x24040b04  addiu       $a0, $zero, 0xB04 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17721c) {
            ctx->pc = 0x177230u;
            goto label_177230;
        }
    }
    ctx->pc = 0x177224u;
label_177224:
    // 0x177224: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x177224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_177228:
    // 0x177228: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_17722c:
    if (ctx->pc == 0x17722Cu) {
        ctx->pc = 0x177230u;
        goto label_177230;
    }
    ctx->pc = 0x177228u;
    {
        const bool branch_taken_0x177228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177228) {
            ctx->pc = 0x177258u;
            goto label_177258;
        }
    }
    ctx->pc = 0x177230u;
label_177230:
    // 0x177230: 0xc041738  jal         func_105CE0
label_177234:
    if (ctx->pc == 0x177234u) {
        ctx->pc = 0x177238u;
        goto label_177238;
    }
    ctx->pc = 0x177230u;
    SET_GPR_U32(ctx, 31, 0x177238u);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x177230u, 0x177238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177238u;
label_177238:
    // 0x177238: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x177238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_17723c:
    // 0x17723c: 0xc070080  jal         func_1C0200
label_177240:
    if (ctx->pc == 0x177240u) {
        ctx->pc = 0x177240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17723Cu;
        // 0x177240: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177244u;
        goto label_177244;
    }
    ctx->pc = 0x17723Cu;
    SET_GPR_U32(ctx, 31, 0x177244u);
    ctx->pc = 0x177240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17723Cu;
    // 0x177240: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x177244u;
label_177244:
    // 0x177244: 0x24040b04  addiu       $a0, $zero, 0xB04
    ctx->pc = 0x177244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
label_177248:
    // 0x177248: 0xc0416e4  jal         func_105B90
label_17724c:
    if (ctx->pc == 0x17724Cu) {
        ctx->pc = 0x17724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177248u;
        // 0x17724c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177250u;
        goto label_177250;
    }
    ctx->pc = 0x177248u;
    SET_GPR_U32(ctx, 31, 0x177250u);
    ctx->pc = 0x17724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177248u;
    // 0x17724c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x177248u, 0x177250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177250u;
label_177250:
    // 0x177250: 0x1000001d  b           . + 4 + (0x1D << 2)
label_177254:
    if (ctx->pc == 0x177254u) {
        ctx->pc = 0x177254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177250u;
        // 0x177254: 0xaf82874c  sw          $v0, -0x78B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177258u;
        goto label_177258;
    }
    ctx->pc = 0x177250u;
    {
        const bool branch_taken_0x177250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177250u;
        // 0x177254: 0xaf82874c  sw          $v0, -0x78B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177250) {
            ctx->pc = 0x1772C8u;
            goto label_1772c8;
        }
    }
    ctx->pc = 0x177258u;
label_177258:
    // 0x177258: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x177258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_17725c:
    // 0x17725c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x17725cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_177260:
    // 0x177260: 0x244220f0  addiu       $v0, $v0, 0x20F0
    ctx->pc = 0x177260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8432));
label_177264:
    // 0x177264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_177268:
    // 0x177268: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x177268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17726c:
    // 0x17726c: 0xc041738  jal         func_105CE0
label_177270:
    if (ctx->pc == 0x177270u) {
        ctx->pc = 0x177270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17726Cu;
        // 0x177270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177274u;
        goto label_177274;
    }
    ctx->pc = 0x17726Cu;
    SET_GPR_U32(ctx, 31, 0x177274u);
    ctx->pc = 0x177270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17726Cu;
    // 0x177270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x17726Cu, 0x177274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177274u;
label_177274:
    // 0x177274: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x177274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_177278:
    // 0x177278: 0xc070080  jal         func_1C0200
label_17727c:
    if (ctx->pc == 0x17727Cu) {
        ctx->pc = 0x17727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177278u;
        // 0x17727c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177280u;
        goto label_177280;
    }
    ctx->pc = 0x177278u;
    SET_GPR_U32(ctx, 31, 0x177280u);
    ctx->pc = 0x17727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177278u;
    // 0x17727c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x177280u;
label_177280:
    // 0x177280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177284:
    // 0x177284: 0xc0416e4  jal         func_105B90
label_177288:
    if (ctx->pc == 0x177288u) {
        ctx->pc = 0x177288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177284u;
        // 0x177288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17728Cu;
        goto label_17728c;
    }
    ctx->pc = 0x177284u;
    SET_GPR_U32(ctx, 31, 0x17728Cu);
    ctx->pc = 0x177288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177284u;
    // 0x177288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x177284u, 0x17728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17728Cu;
label_17728c:
    // 0x17728c: 0x1000000e  b           . + 4 + (0xE << 2)
label_177290:
    if (ctx->pc == 0x177290u) {
        ctx->pc = 0x177290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17728Cu;
        // 0x177290: 0xaf82874c  sw          $v0, -0x78B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177294u;
        goto label_177294;
    }
    ctx->pc = 0x17728Cu;
    {
        const bool branch_taken_0x17728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17728Cu;
        // 0x177290: 0xaf82874c  sw          $v0, -0x78B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17728c) {
            ctx->pc = 0x1772C8u;
            goto label_1772c8;
        }
    }
    ctx->pc = 0x177294u;
label_177294:
    // 0x177294: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x177294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_177298:
    // 0x177298: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
label_17729c:
    // 0x17729c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1772a0:
    // 0x1772a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1772a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1772a4:
    // 0x1772a4: 0xc041738  jal         func_105CE0
label_1772a8:
    if (ctx->pc == 0x1772A8u) {
        ctx->pc = 0x1772A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772A4u;
        // 0x1772a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772ACu;
        goto label_1772ac;
    }
    ctx->pc = 0x1772A4u;
    SET_GPR_U32(ctx, 31, 0x1772ACu);
    ctx->pc = 0x1772A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772A4u;
    // 0x1772a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1772A4u, 0x1772ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772ACu;
label_1772ac:
    // 0x1772ac: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1772acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1772b0:
    // 0x1772b0: 0xc070080  jal         func_1C0200
label_1772b4:
    if (ctx->pc == 0x1772B4u) {
        ctx->pc = 0x1772B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772B0u;
        // 0x1772b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772B8u;
        goto label_1772b8;
    }
    ctx->pc = 0x1772B0u;
    SET_GPR_U32(ctx, 31, 0x1772B8u);
    ctx->pc = 0x1772B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772B0u;
    // 0x1772b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1772B8u;
label_1772b8:
    // 0x1772b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1772b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1772bc:
    // 0x1772bc: 0xc0416e4  jal         func_105B90
label_1772c0:
    if (ctx->pc == 0x1772C0u) {
        ctx->pc = 0x1772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772BCu;
        // 0x1772c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772C4u;
        goto label_1772c4;
    }
    ctx->pc = 0x1772BCu;
    SET_GPR_U32(ctx, 31, 0x1772C4u);
    ctx->pc = 0x1772C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772BCu;
    // 0x1772c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1772BCu, 0x1772C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772C4u;
label_1772c4:
    // 0x1772c4: 0xaf82874c  sw          $v0, -0x78B4($gp)
    ctx->pc = 0x1772c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936396), GPR_U32(ctx, 2));
label_1772c8:
    // 0x1772c8: 0x8f86874c  lw          $a2, -0x78B4($gp)
    ctx->pc = 0x1772c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936396)));
label_1772cc:
    // 0x1772cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1772ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1772d0:
    // 0x1772d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1772d4:
    // 0x1772d4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1772d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1772d8:
    // 0x1772d8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1772dc:
    if (ctx->pc == 0x1772DCu) {
        ctx->pc = 0x1772DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772D8u;
        // 0x1772dc: 0x24c80004  addiu       $t0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772E0u;
        goto label_1772e0;
    }
    ctx->pc = 0x1772D8u;
    {
        const bool branch_taken_0x1772d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772D8u;
        // 0x1772dc: 0x24c80004  addiu       $t0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772d8) {
            ctx->pc = 0x1773A8u;
            goto label_1773a8;
        }
    }
    ctx->pc = 0x1772E0u;
label_1772e0:
    // 0x1772e0: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1772e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1772e4:
    // 0x1772e4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1772e8:
    if (ctx->pc == 0x1772E8u) {
        ctx->pc = 0x1772E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772E4u;
        // 0x1772e8: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1772ECu;
        goto label_1772ec;
    }
    ctx->pc = 0x1772E4u;
    {
        const bool branch_taken_0x1772e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1772E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772E4u;
        // 0x1772e8: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772e4) {
            ctx->pc = 0x177370u;
            goto label_177370;
        }
    }
    ctx->pc = 0x1772ECu;
label_1772ec:
    // 0x1772ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1772ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1772f0:
    // 0x1772f0: 0x3c0c0036  lui         $t4, 0x36
    ctx->pc = 0x1772f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)54 << 16));
label_1772f4:
    // 0x1772f4: 0x258c4970  addiu       $t4, $t4, 0x4970
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 18800));
label_1772f8:
    // 0x1772f8: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x1772f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1772fc:
    // 0x1772fc: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1772fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_177300:
    // 0x177300: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_177304:
    // 0x177304: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x177304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_177308:
    // 0x177308: 0x124502a  slt         $t2, $t1, $a0
    ctx->pc = 0x177308u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17730c:
    // 0x17730c: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177310:
    // 0x177310: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x177310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_177314:
    // 0x177314: 0x8d0b0004  lw          $t3, 0x4($t0)
    ctx->pc = 0x177314u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_177318:
    // 0x177318: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_17731c:
    // 0x17731c: 0xaceb0004  sw          $t3, 0x4($a3)
    ctx->pc = 0x17731cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 11));
label_177320:
    // 0x177320: 0x8d0b0008  lw          $t3, 0x8($t0)
    ctx->pc = 0x177320u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_177324:
    // 0x177324: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177328:
    // 0x177328: 0xaceb0008  sw          $t3, 0x8($a3)
    ctx->pc = 0x177328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 11));
label_17732c:
    // 0x17732c: 0x8d0b000c  lw          $t3, 0xC($t0)
    ctx->pc = 0x17732cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_177330:
    // 0x177330: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177330u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177334:
    // 0x177334: 0xaceb000c  sw          $t3, 0xC($a3)
    ctx->pc = 0x177334u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 11));
label_177338:
    // 0x177338: 0x8d0b0010  lw          $t3, 0x10($t0)
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_17733c:
    // 0x17733c: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177340:
    // 0x177340: 0xaceb0010  sw          $t3, 0x10($a3)
    ctx->pc = 0x177340u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 11));
label_177344:
    // 0x177344: 0x8d0b0014  lw          $t3, 0x14($t0)
    ctx->pc = 0x177344u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_177348:
    // 0x177348: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177348u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_17734c:
    // 0x17734c: 0xaceb0014  sw          $t3, 0x14($a3)
    ctx->pc = 0x17734cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 11));
label_177350:
    // 0x177350: 0x8d0b0018  lw          $t3, 0x18($t0)
    ctx->pc = 0x177350u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_177354:
    // 0x177354: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177358:
    // 0x177358: 0xaceb0018  sw          $t3, 0x18($a3)
    ctx->pc = 0x177358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 11));
label_17735c:
    // 0x17735c: 0x8d0b001c  lw          $t3, 0x1C($t0)
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_177360:
    // 0x177360: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_177364:
    // 0x177364: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x177364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_177368:
    // 0x177368: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
label_17736c:
    if (ctx->pc == 0x17736Cu) {
        ctx->pc = 0x17736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177368u;
        // 0x17736c: 0xaceb001c  sw          $t3, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177370u;
        goto label_177370;
    }
    ctx->pc = 0x177368u;
    {
        const bool branch_taken_0x177368 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x17736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177368u;
        // 0x17736c: 0xaceb001c  sw          $t3, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177368) {
            ctx->pc = 0x1772F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1772f8;
        }
    }
    ctx->pc = 0x177370u;
label_177370:
    // 0x177370: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x177370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177374:
    // 0x177374: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_177378:
    if (ctx->pc == 0x177378u) {
        ctx->pc = 0x177378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177374u;
        // 0x177378: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17737Cu;
        goto label_17737c;
    }
    ctx->pc = 0x177374u;
    {
        const bool branch_taken_0x177374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x177378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177374u;
        // 0x177378: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177374) {
            ctx->pc = 0x1773A8u;
            goto label_1773a8;
        }
    }
    ctx->pc = 0x17737Cu;
label_17737c:
    // 0x17737c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x17737cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_177380:
    // 0x177380: 0x24e74970  addiu       $a3, $a3, 0x4970
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18800));
label_177384:
    // 0x177384: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x177384u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_177388:
    // 0x177388: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x177388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_17738c:
    // 0x17738c: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x17738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_177390:
    // 0x177390: 0x123202a  slt         $a0, $t1, $v1
    ctx->pc = 0x177390u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177394:
    // 0x177394: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x177394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_177398:
    // 0x177398: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x177398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_17739c:
    // 0x17739c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1773a0:
    // 0x1773a0: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_1773a4:
    if (ctx->pc == 0x1773A4u) {
        ctx->pc = 0x1773A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773A0u;
        // 0x1773a4: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773A8u;
        goto label_1773a8;
    }
    ctx->pc = 0x1773A0u;
    {
        const bool branch_taken_0x1773a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1773A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773A0u;
        // 0x1773a4: 0xacaa0000  sw          $t2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773a0) {
            ctx->pc = 0x177384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177384;
        }
    }
    ctx->pc = 0x1773A8u;
label_1773a8:
    // 0x1773a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1773a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1773ac:
    // 0x1773ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1773acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1773b0:
    // 0x1773b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1773b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1773b4:
    // 0x1773b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1773b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1773b8:
    // 0x1773b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1773b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1773bc:
    // 0x1773bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1773bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1773c0:
    // 0x1773c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1773c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1773c4:
    // 0x1773c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1773c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1773c8:
    // 0x1773c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1773c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1773cc:
    // 0x1773cc: 0x3e00008  jr          $ra
label_1773d0:
    if (ctx->pc == 0x1773D0u) {
        ctx->pc = 0x1773D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773CCu;
        // 0x1773d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773D4u;
        goto label_1773d4;
    }
    ctx->pc = 0x1773CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1773D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773CCu;
        // 0x1773d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1773CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1773D4u;
label_1773d4:
    // 0x1773d4: 0x0  nop
    ctx->pc = 0x1773d4u;
    // NOP
label_1773d8:
    // 0x1773d8: 0x0  nop
    ctx->pc = 0x1773d8u;
    // NOP
label_1773dc:
    // 0x1773dc: 0x0  nop
    ctx->pc = 0x1773dcu;
    // NOP
label_1773e0:
    // 0x1773e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1773e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1773e4:
    // 0x1773e4: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1773e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1773e8:
    // 0x1773e8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1773ec:
    if (ctx->pc == 0x1773ECu) {
        ctx->pc = 0x1773ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773E8u;
        // 0x1773ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1773F0u;
        goto label_1773f0;
    }
    ctx->pc = 0x1773E8u;
    {
        const bool branch_taken_0x1773e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773E8u;
        // 0x1773ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773e8) {
            ctx->pc = 0x177414u;
            { ctx->pc = 0x177414; return; }
        }
    }
    ctx->pc = 0x1773F0u;
label_1773f0:
    // 0x1773f0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1773f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1773f4:
    // 0x1773f4: 0x278281d8  addiu       $v0, $gp, -0x7E28
    ctx->pc = 0x1773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935000));
label_1773f8:
    // 0x1773f8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1773f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1773fc:
    // 0x1773fc: 0x278281d9  addiu       $v0, $gp, -0x7E27
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935001));
label_177400:
    // 0x177400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x177400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_177404:
    // 0x177404: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x177404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_177408:
    // 0x177408: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x177408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17740c:
    // 0x17740c: 0xc044934  jal         func_1124D0
    ctx->pc = 0x177410u;
    return;
}
