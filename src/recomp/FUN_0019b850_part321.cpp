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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part321(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        case 0x237e90u: goto label_237e90;
        case 0x237e94u: goto label_237e94;
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        case 0x237f90u: goto label_237f90;
        case 0x237f94u: goto label_237f94;
        case 0x237f98u: goto label_237f98;
        case 0x237f9cu: goto label_237f9c;
        case 0x237fa0u: goto label_237fa0;
        case 0x237fa4u: goto label_237fa4;
        case 0x237fa8u: goto label_237fa8;
        case 0x237facu: goto label_237fac;
        case 0x237fb0u: goto label_237fb0;
        case 0x237fb4u: goto label_237fb4;
        case 0x237fb8u: goto label_237fb8;
        case 0x237fbcu: goto label_237fbc;
        case 0x237fc0u: goto label_237fc0;
        case 0x237fc4u: goto label_237fc4;
        case 0x237fc8u: goto label_237fc8;
        case 0x237fccu: goto label_237fcc;
        case 0x237fd0u: goto label_237fd0;
        case 0x237fd4u: goto label_237fd4;
        case 0x237fd8u: goto label_237fd8;
        case 0x237fdcu: goto label_237fdc;
        case 0x237fe0u: goto label_237fe0;
        case 0x237fe4u: goto label_237fe4;
        case 0x237fe8u: goto label_237fe8;
        case 0x237fecu: goto label_237fec;
        case 0x237ff0u: goto label_237ff0;
        case 0x237ff4u: goto label_237ff4;
        case 0x237ff8u: goto label_237ff8;
        case 0x237ffcu: goto label_237ffc;
        case 0x238000u: goto label_238000;
        case 0x238004u: goto label_238004;
        case 0x238008u: goto label_238008;
        case 0x23800cu: goto label_23800c;
        case 0x238010u: goto label_238010;
        case 0x238014u: goto label_238014;
        case 0x238018u: goto label_238018;
        case 0x23801cu: goto label_23801c;
        case 0x238020u: goto label_238020;
        case 0x238024u: goto label_238024;
        case 0x238028u: goto label_238028;
        case 0x23802cu: goto label_23802c;
        case 0x238030u: goto label_238030;
        case 0x238034u: goto label_238034;
        case 0x238038u: goto label_238038;
        case 0x23803cu: goto label_23803c;
        case 0x238040u: goto label_238040;
        case 0x238044u: goto label_238044;
        case 0x238048u: goto label_238048;
        case 0x23804cu: goto label_23804c;
        case 0x238050u: goto label_238050;
        case 0x238054u: goto label_238054;
        case 0x238058u: goto label_238058;
        case 0x23805cu: goto label_23805c;
        case 0x238060u: goto label_238060;
        case 0x238064u: goto label_238064;
        case 0x238068u: goto label_238068;
        case 0x23806cu: goto label_23806c;
        case 0x238070u: goto label_238070;
        case 0x238074u: goto label_238074;
        case 0x238078u: goto label_238078;
        case 0x23807cu: goto label_23807c;
        case 0x238080u: goto label_238080;
        case 0x238084u: goto label_238084;
        case 0x238088u: goto label_238088;
        case 0x23808cu: goto label_23808c;
        case 0x238090u: goto label_238090;
        case 0x238094u: goto label_238094;
        case 0x238098u: goto label_238098;
        case 0x23809cu: goto label_23809c;
        case 0x2380a0u: goto label_2380a0;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380a8u: goto label_2380a8;
        case 0x2380acu: goto label_2380ac;
        case 0x2380b0u: goto label_2380b0;
        case 0x2380b4u: goto label_2380b4;
        case 0x2380b8u: goto label_2380b8;
        case 0x2380bcu: goto label_2380bc;
        case 0x2380c0u: goto label_2380c0;
        case 0x2380c4u: goto label_2380c4;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380ccu: goto label_2380cc;
        case 0x2380d0u: goto label_2380d0;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380d8u: goto label_2380d8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380e0u: goto label_2380e0;
        case 0x2380e4u: goto label_2380e4;
        case 0x2380e8u: goto label_2380e8;
        case 0x2380ecu: goto label_2380ec;
        case 0x2380f0u: goto label_2380f0;
        case 0x2380f4u: goto label_2380f4;
        case 0x2380f8u: goto label_2380f8;
        case 0x2380fcu: goto label_2380fc;
        case 0x238100u: goto label_238100;
        case 0x238104u: goto label_238104;
        case 0x238108u: goto label_238108;
        case 0x23810cu: goto label_23810c;
        case 0x238110u: goto label_238110;
        case 0x238114u: goto label_238114;
        case 0x238118u: goto label_238118;
        case 0x23811cu: goto label_23811c;
        case 0x238120u: goto label_238120;
        case 0x238124u: goto label_238124;
        case 0x238128u: goto label_238128;
        case 0x23812cu: goto label_23812c;
        case 0x238130u: goto label_238130;
        case 0x238134u: goto label_238134;
        case 0x238138u: goto label_238138;
        case 0x23813cu: goto label_23813c;
        case 0x238140u: goto label_238140;
        case 0x238144u: goto label_238144;
        case 0x238148u: goto label_238148;
        case 0x23814cu: goto label_23814c;
        case 0x238150u: goto label_238150;
        case 0x238154u: goto label_238154;
        case 0x238158u: goto label_238158;
        case 0x23815cu: goto label_23815c;
        case 0x238160u: goto label_238160;
        case 0x238164u: goto label_238164;
        case 0x238168u: goto label_238168;
        case 0x23816cu: goto label_23816c;
        case 0x238170u: goto label_238170;
        case 0x238174u: goto label_238174;
        case 0x238178u: goto label_238178;
        case 0x23817cu: goto label_23817c;
        case 0x238180u: goto label_238180;
        case 0x238184u: goto label_238184;
        case 0x238188u: goto label_238188;
        case 0x23818cu: goto label_23818c;
        case 0x238190u: goto label_238190;
        case 0x238194u: goto label_238194;
        case 0x238198u: goto label_238198;
        case 0x23819cu: goto label_23819c;
        case 0x2381a0u: goto label_2381a0;
        case 0x2381a4u: goto label_2381a4;
        case 0x2381a8u: goto label_2381a8;
        case 0x2381acu: goto label_2381ac;
        case 0x2381b0u: goto label_2381b0;
        case 0x2381b4u: goto label_2381b4;
        case 0x2381b8u: goto label_2381b8;
        case 0x2381bcu: goto label_2381bc;
        case 0x2381c0u: goto label_2381c0;
        case 0x2381c4u: goto label_2381c4;
        case 0x2381c8u: goto label_2381c8;
        case 0x2381ccu: goto label_2381cc;
        case 0x2381d0u: goto label_2381d0;
        case 0x2381d4u: goto label_2381d4;
        case 0x2381d8u: goto label_2381d8;
        case 0x2381dcu: goto label_2381dc;
        case 0x2381e0u: goto label_2381e0;
        case 0x2381e4u: goto label_2381e4;
        case 0x2381e8u: goto label_2381e8;
        case 0x2381ecu: goto label_2381ec;
        case 0x2381f0u: goto label_2381f0;
        case 0x2381f4u: goto label_2381f4;
        case 0x2381f8u: goto label_2381f8;
        case 0x2381fcu: goto label_2381fc;
        case 0x238200u: goto label_238200;
        case 0x238204u: goto label_238204;
        case 0x238208u: goto label_238208;
        case 0x23820cu: goto label_23820c;
        case 0x238210u: goto label_238210;
        case 0x238214u: goto label_238214;
        case 0x238218u: goto label_238218;
        case 0x23821cu: goto label_23821c;
        case 0x238220u: goto label_238220;
        case 0x238224u: goto label_238224;
        case 0x238228u: goto label_238228;
        case 0x23822cu: goto label_23822c;
        case 0x238230u: goto label_238230;
        case 0x238234u: goto label_238234;
        case 0x238238u: goto label_238238;
        case 0x23823cu: goto label_23823c;
        case 0x238240u: goto label_238240;
        case 0x238244u: goto label_238244;
        case 0x238248u: goto label_238248;
        case 0x23824cu: goto label_23824c;
        case 0x238250u: goto label_238250;
        case 0x238254u: goto label_238254;
        case 0x238258u: goto label_238258;
        case 0x23825cu: goto label_23825c;
        case 0x238260u: goto label_238260;
        case 0x238264u: goto label_238264;
        case 0x238268u: goto label_238268;
        case 0x23826cu: goto label_23826c;
        case 0x238270u: goto label_238270;
        case 0x238274u: goto label_238274;
        case 0x238278u: goto label_238278;
        case 0x23827cu: goto label_23827c;
        case 0x238280u: goto label_238280;
        case 0x238284u: goto label_238284;
        case 0x238288u: goto label_238288;
        case 0x23828cu: goto label_23828c;
        case 0x238290u: goto label_238290;
        case 0x238294u: goto label_238294;
        case 0x238298u: goto label_238298;
        case 0x23829cu: goto label_23829c;
        case 0x2382a0u: goto label_2382a0;
        case 0x2382a4u: goto label_2382a4;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382acu: goto label_2382ac;
        case 0x2382b0u: goto label_2382b0;
        case 0x2382b4u: goto label_2382b4;
        case 0x2382b8u: goto label_2382b8;
        case 0x2382bcu: goto label_2382bc;
        case 0x2382c0u: goto label_2382c0;
        case 0x2382c4u: goto label_2382c4;
        case 0x2382c8u: goto label_2382c8;
        case 0x2382ccu: goto label_2382cc;
        case 0x2382d0u: goto label_2382d0;
        case 0x2382d4u: goto label_2382d4;
        case 0x2382d8u: goto label_2382d8;
        case 0x2382dcu: goto label_2382dc;
        case 0x2382e0u: goto label_2382e0;
        case 0x2382e4u: goto label_2382e4;
        case 0x2382e8u: goto label_2382e8;
        case 0x2382ecu: goto label_2382ec;
        case 0x2382f0u: goto label_2382f0;
        case 0x2382f4u: goto label_2382f4;
        case 0x2382f8u: goto label_2382f8;
        case 0x2382fcu: goto label_2382fc;
        case 0x238300u: goto label_238300;
        case 0x238304u: goto label_238304;
        case 0x238308u: goto label_238308;
        case 0x23830cu: goto label_23830c;
        case 0x238310u: goto label_238310;
        case 0x238314u: goto label_238314;
        case 0x238318u: goto label_238318;
        case 0x23831cu: goto label_23831c;
        case 0x238320u: goto label_238320;
        case 0x238324u: goto label_238324;
        case 0x238328u: goto label_238328;
        case 0x23832cu: goto label_23832c;
        case 0x238330u: goto label_238330;
        case 0x238334u: goto label_238334;
        case 0x238338u: goto label_238338;
        case 0x23833cu: goto label_23833c;
        case 0x238340u: goto label_238340;
        case 0x238344u: goto label_238344;
        case 0x238348u: goto label_238348;
        case 0x23834cu: goto label_23834c;
        case 0x238350u: goto label_238350;
        case 0x238354u: goto label_238354;
        case 0x238358u: goto label_238358;
        case 0x23835cu: goto label_23835c;
        case 0x238360u: goto label_238360;
        case 0x238364u: goto label_238364;
        case 0x238368u: goto label_238368;
        case 0x23836cu: goto label_23836c;
        case 0x238370u: goto label_238370;
        case 0x238374u: goto label_238374;
        case 0x238378u: goto label_238378;
        case 0x23837cu: goto label_23837c;
        case 0x238380u: goto label_238380;
        case 0x238384u: goto label_238384;
        case 0x238388u: goto label_238388;
        case 0x23838cu: goto label_23838c;
        case 0x238390u: goto label_238390;
        case 0x238394u: goto label_238394;
        case 0x238398u: goto label_238398;
        case 0x23839cu: goto label_23839c;
        case 0x2383a0u: goto label_2383a0;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383acu: goto label_2383ac;
        case 0x2383b0u: goto label_2383b0;
        case 0x2383b4u: goto label_2383b4;
        case 0x2383b8u: goto label_2383b8;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c0u: goto label_2383c0;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383c8u: goto label_2383c8;
        case 0x2383ccu: goto label_2383cc;
        case 0x2383d0u: goto label_2383d0;
        case 0x2383d4u: goto label_2383d4;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383dcu: goto label_2383dc;
        case 0x2383e0u: goto label_2383e0;
        case 0x2383e4u: goto label_2383e4;
        case 0x2383e8u: goto label_2383e8;
        case 0x2383ecu: goto label_2383ec;
        case 0x2383f0u: goto label_2383f0;
        case 0x2383f4u: goto label_2383f4;
        case 0x2383f8u: goto label_2383f8;
        case 0x2383fcu: goto label_2383fc;
        case 0x238400u: goto label_238400;
        case 0x238404u: goto label_238404;
        case 0x238408u: goto label_238408;
        case 0x23840cu: goto label_23840c;
        case 0x238410u: goto label_238410;
        case 0x238414u: goto label_238414;
        case 0x238418u: goto label_238418;
        case 0x23841cu: goto label_23841c;
        default: return;
    }

label_237c50:
    // 0x237c50: 0xc06df38  jal         func_1B7CE0
label_237c54:
    if (ctx->pc == 0x237C54u) {
        ctx->pc = 0x237C58u;
        goto label_237c58;
    }
    ctx->pc = 0x237C50u;
    SET_GPR_U32(ctx, 31, 0x237C58u);
    ctx->pc = 0x1B7CE0u;
    { ctx->pc = 0x1b7ce0; return; }
    ctx->pc = 0x237C58u;
label_237c58:
    // 0x237c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c5c:
    // 0x237c5c: 0xc06df0a  jal         func_1B7C28
label_237c60:
    if (ctx->pc == 0x237C60u) {
        ctx->pc = 0x237C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C5Cu;
        // 0x237c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C64u;
        goto label_237c64;
    }
    ctx->pc = 0x237C5Cu;
    SET_GPR_U32(ctx, 31, 0x237C64u);
    ctx->pc = 0x237C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C5Cu;
    // 0x237c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x237C64u;
label_237c64:
    // 0x237c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237c68:
    // 0x237c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c6c:
    // 0x237c6c: 0xc06dd8a  jal         func_1B7628
label_237c70:
    if (ctx->pc == 0x237C70u) {
        ctx->pc = 0x237C74u;
        goto label_237c74;
    }
    ctx->pc = 0x237C6Cu;
    SET_GPR_U32(ctx, 31, 0x237C74u);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x237C74u;
label_237c74:
    // 0x237c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237c78:
    // 0x237c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c7c:
    // 0x237c7c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_237c80:
    // 0x237c80: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237c80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_237c84:
    // 0x237c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237c88:
    // 0x237c88: 0xc06def6  jal         func_1B7BD8
label_237c8c:
    if (ctx->pc == 0x237C8Cu) {
        ctx->pc = 0x237C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C88u;
        // 0x237c8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C90u;
        goto label_237c90;
    }
    ctx->pc = 0x237C88u;
    SET_GPR_U32(ctx, 31, 0x237C90u);
    ctx->pc = 0x237C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C88u;
    // 0x237c8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237C90u;
label_237c90:
    // 0x237c90: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
label_237c94:
    if (ctx->pc == 0x237C94u) {
        ctx->pc = 0x237C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C90u;
        // 0x237c94: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237C98u;
        goto label_237c98;
    }
    ctx->pc = 0x237C90u;
    {
        const bool branch_taken_0x237c90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x237C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C90u;
        // 0x237c94: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c90) {
            ctx->pc = 0x2386DCu;
            { ctx->pc = 0x2386dc; return; }
        }
    }
    ctx->pc = 0x237C98u;
label_237c98:
    // 0x237c98: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x237c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_237c9c:
    // 0x237c9c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_237ca0:
    // 0x237ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237ca4:
    // 0x237ca4: 0xc06dd8a  jal         func_1B7628
label_237ca8:
    if (ctx->pc == 0x237CA8u) {
        ctx->pc = 0x237CACu;
        goto label_237cac;
    }
    ctx->pc = 0x237CA4u;
    SET_GPR_U32(ctx, 31, 0x237CACu);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x237CACu;
label_237cac:
    // 0x237cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237cb0:
    // 0x237cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237cb4:
    // 0x237cb4: 0xc06def6  jal         func_1B7BD8
label_237cb8:
    if (ctx->pc == 0x237CB8u) {
        ctx->pc = 0x237CBCu;
        goto label_237cbc;
    }
    ctx->pc = 0x237CB4u;
    SET_GPR_U32(ctx, 31, 0x237CBCu);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237CBCu;
label_237cbc:
    // 0x237cbc: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
label_237cc0:
    if (ctx->pc == 0x237CC0u) {
        ctx->pc = 0x237CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CBCu;
        // 0x237cc0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CC4u;
        goto label_237cc4;
    }
    ctx->pc = 0x237CBCu;
    {
        const bool branch_taken_0x237cbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x237CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CBCu;
        // 0x237cc0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cbc) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237CC4u;
label_237cc4:
    // 0x237cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_237cc8:
    // 0x237cc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_237ccc:
    // 0x237ccc: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x237cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_237cd0:
    // 0x237cd0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_237cd4:
    if (ctx->pc == 0x237CD4u) {
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD0u;
        // 0x237cd4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CD8u;
        goto label_237cd8;
    }
    ctx->pc = 0x237CD0u;
    {
        const bool branch_taken_0x237cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD0u;
        // 0x237cd4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cd0) {
            ctx->pc = 0x237C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x237c20; return; }
        }
    }
    ctx->pc = 0x237CD8u;
label_237cd8:
    // 0x237cd8: 0x10000043  b           . + 4 + (0x43 << 2)
label_237cdc:
    if (ctx->pc == 0x237CDCu) {
        ctx->pc = 0x237CE0u;
        goto label_237ce0;
    }
    ctx->pc = 0x237CD8u;
    {
        const bool branch_taken_0x237cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cd8) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237CE0u;
label_237ce0:
    // 0x237ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237ce4:
    // 0x237ce4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_237ce8:
    // 0x237ce8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x237ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_237cec:
    // 0x237cec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_237cf0:
    // 0x237cf0: 0xdc84e3b0  ld          $a0, -0x1C50($a0)
    ctx->pc = 0x237cf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_237cf4:
    // 0x237cf4: 0xc06dda4  jal         func_1B7690
label_237cf8:
    if (ctx->pc == 0x237CF8u) {
        ctx->pc = 0x237CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CF4u;
        // 0x237cf8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237CFCu;
        goto label_237cfc;
    }
    ctx->pc = 0x237CF4u;
    SET_GPR_U32(ctx, 31, 0x237CFCu);
    ctx->pc = 0x237CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CF4u;
    // 0x237cf8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237CFCu;
label_237cfc:
    // 0x237cfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d00:
    // 0x237d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237d04:
    // 0x237d04: 0xc06df38  jal         func_1B7CE0
label_237d08:
    if (ctx->pc == 0x237D08u) {
        ctx->pc = 0x237D0Cu;
        goto label_237d0c;
    }
    ctx->pc = 0x237D04u;
    SET_GPR_U32(ctx, 31, 0x237D0Cu);
    ctx->pc = 0x1B7CE0u;
    { ctx->pc = 0x1b7ce0; return; }
    ctx->pc = 0x237D0Cu;
label_237d0c:
    // 0x237d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d10:
    // 0x237d10: 0xc06df0a  jal         func_1B7C28
label_237d14:
    if (ctx->pc == 0x237D14u) {
        ctx->pc = 0x237D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D10u;
        // 0x237d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D18u;
        goto label_237d18;
    }
    ctx->pc = 0x237D10u;
    SET_GPR_U32(ctx, 31, 0x237D18u);
    ctx->pc = 0x237D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D10u;
    // 0x237d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x237D18u;
label_237d18:
    // 0x237d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237d1c:
    // 0x237d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d20:
    // 0x237d20: 0xc06dd8a  jal         func_1B7628
label_237d24:
    if (ctx->pc == 0x237D24u) {
        ctx->pc = 0x237D28u;
        goto label_237d28;
    }
    ctx->pc = 0x237D20u;
    SET_GPR_U32(ctx, 31, 0x237D28u);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x237D28u;
label_237d28:
    // 0x237d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d2c:
    // 0x237d2c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_237d30:
    // 0x237d30: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237d30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_237d34:
    // 0x237d34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_237d38:
    // 0x237d38: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
label_237d3c:
    if (ctx->pc == 0x237D3Cu) {
        ctx->pc = 0x237D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D38u;
        // 0x237d3c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D40u;
        goto label_237d40;
    }
    ctx->pc = 0x237D38u;
    {
        const bool branch_taken_0x237d38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x237D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D38u;
        // 0x237d3c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d38) {
            ctx->pc = 0x237DC8u;
            goto label_237dc8;
        }
    }
    ctx->pc = 0x237D40u;
label_237d40:
    // 0x237d40: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x237d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_237d44:
    // 0x237d44: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_237d48:
    // 0x237d48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237d4c:
    // 0x237d4c: 0xc06dd74  jal         func_1B75D0
label_237d50:
    if (ctx->pc == 0x237D50u) {
        ctx->pc = 0x237D54u;
        goto label_237d54;
    }
    ctx->pc = 0x237D4Cu;
    SET_GPR_U32(ctx, 31, 0x237D54u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x237D54u;
label_237d54:
    // 0x237d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237d58:
    // 0x237d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d5c:
    // 0x237d5c: 0xc06def6  jal         func_1B7BD8
label_237d60:
    if (ctx->pc == 0x237D60u) {
        ctx->pc = 0x237D64u;
        goto label_237d64;
    }
    ctx->pc = 0x237D5Cu;
    SET_GPR_U32(ctx, 31, 0x237D64u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237D64u;
label_237d64:
    // 0x237d64: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
label_237d68:
    if (ctx->pc == 0x237D68u) {
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D6Cu;
        goto label_237d6c;
    }
    ctx->pc = 0x237D64u;
    {
        const bool branch_taken_0x237d64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d64) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237D6Cu;
label_237d6c:
    // 0x237d6c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_237d70:
    // 0x237d70: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_237d74:
    // 0x237d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237d78:
    // 0x237d78: 0xc06dd8a  jal         func_1B7628
label_237d7c:
    if (ctx->pc == 0x237D7Cu) {
        ctx->pc = 0x237D80u;
        goto label_237d80;
    }
    ctx->pc = 0x237D78u;
    SET_GPR_U32(ctx, 31, 0x237D80u);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x237D80u;
label_237d80:
    // 0x237d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237d84:
    // 0x237d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d88:
    // 0x237d88: 0xc06def6  jal         func_1B7BD8
label_237d8c:
    if (ctx->pc == 0x237D8Cu) {
        ctx->pc = 0x237D90u;
        goto label_237d90;
    }
    ctx->pc = 0x237D88u;
    SET_GPR_U32(ctx, 31, 0x237D90u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237D90u;
label_237d90:
    // 0x237d90: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
label_237d94:
    if (ctx->pc == 0x237D94u) {
        ctx->pc = 0x237D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D90u;
        // 0x237d94: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237D98u;
        goto label_237d98;
    }
    ctx->pc = 0x237D90u;
    {
        const bool branch_taken_0x237d90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x237D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D90u;
        // 0x237d94: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d90) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237D98u;
label_237d98:
    // 0x237d98: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x237d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_237d9c:
    // 0x237d9c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_237da0:
    // 0x237da0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_237da4:
    // 0x237da4: 0x0  nop
    ctx->pc = 0x237da4u;
    // NOP
label_237da8:
    // 0x237da8: 0x0  nop
    ctx->pc = 0x237da8u;
    // NOP
label_237dac:
    // 0x237dac: 0x0  nop
    ctx->pc = 0x237dacu;
    // NOP
label_237db0:
    // 0x237db0: 0x0  nop
    ctx->pc = 0x237db0u;
    // NOP
label_237db4:
    // 0x237db4: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
label_237db8:
    if (ctx->pc == 0x237DB8u) {
        ctx->pc = 0x237DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DB4u;
        // 0x237db8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DBCu;
        goto label_237dbc;
    }
    ctx->pc = 0x237DB4u;
    {
        const bool branch_taken_0x237db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237db4) {
            ctx->pc = 0x237DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DB4u;
            // 0x237db8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237da0;
        }
    }
    ctx->pc = 0x237DBCu;
label_237dbc:
    // 0x237dbc: 0x10000246  b           . + 4 + (0x246 << 2)
label_237dc0:
    if (ctx->pc == 0x237DC0u) {
        ctx->pc = 0x237DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DBCu;
        // 0x237dc0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DC4u;
        goto label_237dc4;
    }
    ctx->pc = 0x237DBCu;
    {
        const bool branch_taken_0x237dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DBCu;
        // 0x237dc0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dbc) {
            ctx->pc = 0x2386D8u;
            { ctx->pc = 0x2386d8; return; }
        }
    }
    ctx->pc = 0x237DC4u;
label_237dc4:
    // 0x237dc4: 0x0  nop
    ctx->pc = 0x237dc4u;
    // NOP
label_237dc8:
    // 0x237dc8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_237dcc:
    // 0x237dcc: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_237dd0:
    // 0x237dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237dd4:
    // 0x237dd4: 0xc06dda4  jal         func_1B7690
label_237dd8:
    if (ctx->pc == 0x237DD8u) {
        ctx->pc = 0x237DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DD4u;
        // 0x237dd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DDCu;
        goto label_237ddc;
    }
    ctx->pc = 0x237DD4u;
    SET_GPR_U32(ctx, 31, 0x237DDCu);
    ctx->pc = 0x237DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DD4u;
    // 0x237dd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237DDCu;
label_237ddc:
    // 0x237ddc: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_237de0:
    if (ctx->pc == 0x237DE0u) {
        ctx->pc = 0x237DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DDCu;
        // 0x237de0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237DE4u;
        goto label_237de4;
    }
    ctx->pc = 0x237DDCu;
    {
        const bool branch_taken_0x237ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DDCu;
        // 0x237de0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ddc) {
            ctx->pc = 0x237D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237d00;
        }
    }
    ctx->pc = 0x237DE4u;
label_237de4:
    // 0x237de4: 0x0  nop
    ctx->pc = 0x237de4u;
    // NOP
label_237de8:
    // 0x237de8: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x237de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_237dec:
    // 0x237dec: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_237df0:
    // 0x237df0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x237df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_237df4:
    // 0x237df4: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x237df4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_237df8:
    // 0x237df8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x237df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_237dfc:
    // 0x237dfc: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
label_237e00:
    if (ctx->pc == 0x237E00u) {
        ctx->pc = 0x237E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DFCu;
        // 0x237e00: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E04u;
        goto label_237e04;
    }
    ctx->pc = 0x237DFCu;
    {
        const bool branch_taken_0x237dfc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x237E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DFCu;
        // 0x237e00: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dfc) {
            ctx->pc = 0x237FA8u;
            goto label_237fa8;
        }
    }
    ctx->pc = 0x237E04u;
label_237e04:
    // 0x237e04: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_237e08:
    if (ctx->pc == 0x237E08u) {
        ctx->pc = 0x237E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E04u;
        // 0x237e08: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E0Cu;
        goto label_237e0c;
    }
    ctx->pc = 0x237E04u;
    {
        const bool branch_taken_0x237e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E04u;
        // 0x237e08: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e04) {
            ctx->pc = 0x237FACu;
            goto label_237fac;
        }
    }
    ctx->pc = 0x237E0Cu;
label_237e0c:
    // 0x237e0c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_237e10:
    // 0x237e10: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x237e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_237e14:
    // 0x237e14: 0x3c11002d  lui         $s1, 0x2D
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
label_237e18:
    // 0x237e18: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x237e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_237e1c:
    // 0x237e1c: 0xde31e3b8  ld          $s1, -0x1C48($s1)
    ctx->pc = 0x237e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294960056)));
label_237e20:
    // 0x237e20: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
label_237e24:
    if (ctx->pc == 0x237E24u) {
        ctx->pc = 0x237E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E20u;
        // 0x237e24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E28u;
        goto label_237e28;
    }
    ctx->pc = 0x237E20u;
    {
        const bool branch_taken_0x237e20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x237E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E20u;
        // 0x237e24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e20) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237E28u;
label_237e28:
    // 0x237e28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_237e2c:
    // 0x237e2c: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
label_237e30:
    if (ctx->pc == 0x237E30u) {
        ctx->pc = 0x237E34u;
        goto label_237e34;
    }
    ctx->pc = 0x237E2Cu;
    {
        const bool branch_taken_0x237e2c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x237e2c) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237E34u;
label_237e34:
    // 0x237e34: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x237e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_237e38:
    // 0x237e38: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
label_237e3c:
    if (ctx->pc == 0x237E3Cu) {
        ctx->pc = 0x237E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E38u;
        // 0x237e3c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E40u;
        goto label_237e40;
    }
    ctx->pc = 0x237E38u;
    {
        const bool branch_taken_0x237e38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x237E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E38u;
        // 0x237e3c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e38) {
            ctx->pc = 0x238328u;
            goto label_238328;
        }
    }
    ctx->pc = 0x237E40u;
label_237e40:
    // 0x237e40: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x237e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
label_237e44:
    // 0x237e44: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_237e48:
    // 0x237e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237e4c:
    // 0x237e4c: 0xc06dda4  jal         func_1B7690
label_237e50:
    if (ctx->pc == 0x237E50u) {
        ctx->pc = 0x237E54u;
        goto label_237e54;
    }
    ctx->pc = 0x237E4Cu;
    SET_GPR_U32(ctx, 31, 0x237E54u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237E54u;
label_237e54:
    // 0x237e54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237e58:
    // 0x237e58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237e5c:
    // 0x237e5c: 0xc06def6  jal         func_1B7BD8
label_237e60:
    if (ctx->pc == 0x237E60u) {
        ctx->pc = 0x237E64u;
        goto label_237e64;
    }
    ctx->pc = 0x237E5Cu;
    SET_GPR_U32(ctx, 31, 0x237E64u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237E64u;
label_237e64:
    // 0x237e64: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
label_237e68:
    if (ctx->pc == 0x237E68u) {
        ctx->pc = 0x237E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E64u;
        // 0x237e68: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E6Cu;
        goto label_237e6c;
    }
    ctx->pc = 0x237E64u;
    {
        const bool branch_taken_0x237e64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E64u;
        // 0x237e68: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e64) {
            ctx->pc = 0x23832Cu;
            goto label_23832c;
        }
    }
    ctx->pc = 0x237E6Cu;
label_237e6c:
    // 0x237e6c: 0x10000132  b           . + 4 + (0x132 << 2)
label_237e70:
    if (ctx->pc == 0x237E70u) {
        ctx->pc = 0x237E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E6Cu;
        // 0x237e70: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237E74u;
        goto label_237e74;
    }
    ctx->pc = 0x237E6Cu;
    {
        const bool branch_taken_0x237e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E6Cu;
        // 0x237e70: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e6c) {
            ctx->pc = 0x238338u;
            goto label_238338;
        }
    }
    ctx->pc = 0x237E74u;
label_237e74:
    // 0x237e74: 0x0  nop
    ctx->pc = 0x237e74u;
    // NOP
label_237e78:
    // 0x237e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237e7c:
    // 0x237e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237e80:
    // 0x237e80: 0xc06de50  jal         func_1B7940
label_237e84:
    if (ctx->pc == 0x237E84u) {
        ctx->pc = 0x237E88u;
        goto label_237e88;
    }
    ctx->pc = 0x237E80u;
    SET_GPR_U32(ctx, 31, 0x237E88u);
    ctx->pc = 0x1B7940u;
    { ctx->pc = 0x1b7940; return; }
    ctx->pc = 0x237E88u;
label_237e88:
    // 0x237e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237e8c:
    // 0x237e8c: 0xc06df38  jal         func_1B7CE0
label_237e90:
    if (ctx->pc == 0x237E90u) {
        ctx->pc = 0x237E94u;
        goto label_237e94;
    }
    ctx->pc = 0x237E8Cu;
    SET_GPR_U32(ctx, 31, 0x237E94u);
    ctx->pc = 0x1B7CE0u;
    { ctx->pc = 0x1b7ce0; return; }
    ctx->pc = 0x237E94u;
label_237e94:
    // 0x237e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237e98:
    // 0x237e98: 0xc06df0a  jal         func_1B7C28
label_237e9c:
    if (ctx->pc == 0x237E9Cu) {
        ctx->pc = 0x237E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E98u;
        // 0x237e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237EA0u;
        goto label_237ea0;
    }
    ctx->pc = 0x237E98u;
    SET_GPR_U32(ctx, 31, 0x237EA0u);
    ctx->pc = 0x237E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E98u;
    // 0x237e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x237EA0u;
label_237ea0:
    // 0x237ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237ea4:
    // 0x237ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ea8:
    // 0x237ea8: 0xc06dda4  jal         func_1B7690
label_237eac:
    if (ctx->pc == 0x237EACu) {
        ctx->pc = 0x237EB0u;
        goto label_237eb0;
    }
    ctx->pc = 0x237EA8u;
    SET_GPR_U32(ctx, 31, 0x237EB0u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237EB0u;
label_237eb0:
    // 0x237eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237eb4:
    // 0x237eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237eb8:
    // 0x237eb8: 0xc06dd8a  jal         func_1B7628
label_237ebc:
    if (ctx->pc == 0x237EBCu) {
        ctx->pc = 0x237EC0u;
        goto label_237ec0;
    }
    ctx->pc = 0x237EB8u;
    SET_GPR_U32(ctx, 31, 0x237EC0u);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x237EC0u;
label_237ec0:
    // 0x237ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237ec4:
    // 0x237ec4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_237ec8:
    // 0x237ec8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_237ecc:
    // 0x237ecc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_237ed0:
    // 0x237ed0: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
label_237ed4:
    if (ctx->pc == 0x237ED4u) {
        ctx->pc = 0x237ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED0u;
        // 0x237ed4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237ED8u;
        goto label_237ed8;
    }
    ctx->pc = 0x237ED0u;
    {
        const bool branch_taken_0x237ed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x237ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED0u;
        // 0x237ed4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed0) {
            ctx->pc = 0x237F70u;
            goto label_237f70;
        }
    }
    ctx->pc = 0x237ED8u;
label_237ed8:
    // 0x237ed8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237edc:
    // 0x237edc: 0xc06dd74  jal         func_1B75D0
label_237ee0:
    if (ctx->pc == 0x237EE0u) {
        ctx->pc = 0x237EE4u;
        goto label_237ee4;
    }
    ctx->pc = 0x237EDCu;
    SET_GPR_U32(ctx, 31, 0x237EE4u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x237EE4u;
label_237ee4:
    // 0x237ee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237ee8:
    // 0x237ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237eec:
    // 0x237eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237ef0:
    // 0x237ef0: 0xc06def6  jal         func_1B7BD8
label_237ef4:
    if (ctx->pc == 0x237EF4u) {
        ctx->pc = 0x237EF8u;
        goto label_237ef8;
    }
    ctx->pc = 0x237EF0u;
    SET_GPR_U32(ctx, 31, 0x237EF8u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237EF8u;
label_237ef8:
    // 0x237ef8: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_237efc:
    if (ctx->pc == 0x237EFCu) {
        ctx->pc = 0x237EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EF8u;
        // 0x237efc: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F00u;
        goto label_237f00;
    }
    ctx->pc = 0x237EF8u;
    {
        const bool branch_taken_0x237ef8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x237EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EF8u;
        // 0x237efc: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ef8) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237F00u;
label_237f00:
    // 0x237f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237f04:
    // 0x237f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237f08:
    // 0x237f08: 0xc06def6  jal         func_1B7BD8
label_237f0c:
    if (ctx->pc == 0x237F0Cu) {
        ctx->pc = 0x237F10u;
        goto label_237f10;
    }
    ctx->pc = 0x237F08u;
    SET_GPR_U32(ctx, 31, 0x237F10u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237F10u;
label_237f10:
    // 0x237f10: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
label_237f14:
    if (ctx->pc == 0x237F14u) {
        ctx->pc = 0x237F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F10u;
        // 0x237f14: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F18u;
        goto label_237f18;
    }
    ctx->pc = 0x237F10u;
    {
        const bool branch_taken_0x237f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F10u;
        // 0x237f14: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f10) {
            ctx->pc = 0x2386DCu;
            { ctx->pc = 0x2386dc; return; }
        }
    }
    ctx->pc = 0x237F18u;
label_237f18:
    // 0x237f18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_237f1c:
    // 0x237f1c: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
label_237f20:
    if (ctx->pc == 0x237F20u) {
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F1Cu;
        // 0x237f20: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F24u;
        goto label_237f24;
    }
    ctx->pc = 0x237F1Cu;
    {
        const bool branch_taken_0x237f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F1Cu;
        // 0x237f20: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f1c) {
            ctx->pc = 0x2386DCu;
            { ctx->pc = 0x2386dc; return; }
        }
    }
    ctx->pc = 0x237F24u;
label_237f24:
    // 0x237f24: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x237f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_237f28:
    // 0x237f28: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x237f28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_237f2c:
    // 0x237f2c: 0x0  nop
    ctx->pc = 0x237f2cu;
    // NOP
label_237f30:
    // 0x237f30: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_237f34:
    // 0x237f34: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_237f38:
    if (ctx->pc == 0x237F38u) {
        ctx->pc = 0x237F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F34u;
        // 0x237f38: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F3Cu;
        goto label_237f3c;
    }
    ctx->pc = 0x237F34u;
    {
        const bool branch_taken_0x237f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F34u;
        // 0x237f38: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f34) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237F3Cu;
label_237f3c:
    // 0x237f3c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x237f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_237f40:
    // 0x237f40: 0x0  nop
    ctx->pc = 0x237f40u;
    // NOP
label_237f44:
    // 0x237f44: 0x0  nop
    ctx->pc = 0x237f44u;
    // NOP
label_237f48:
    // 0x237f48: 0x0  nop
    ctx->pc = 0x237f48u;
    // NOP
label_237f4c:
    // 0x237f4c: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
label_237f50:
    if (ctx->pc == 0x237F50u) {
        ctx->pc = 0x237F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F4Cu;
        // 0x237f50: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F54u;
        goto label_237f54;
    }
    ctx->pc = 0x237F4Cu;
    {
        const bool branch_taken_0x237f4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x237f4c) {
            ctx->pc = 0x237F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F4Cu;
            // 0x237f50: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f30;
        }
    }
    ctx->pc = 0x237F54u;
label_237f54:
    // 0x237f54: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x237f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_237f58:
    // 0x237f58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237f5c:
    // 0x237f5c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x237f5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_237f60:
    // 0x237f60: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x237f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_237f64:
    // 0x237f64: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237f64u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_237f68:
    // 0x237f68: 0x100001db  b           . + 4 + (0x1DB << 2)
label_237f6c:
    if (ctx->pc == 0x237F6Cu) {
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F70u;
        goto label_237f70;
    }
    ctx->pc = 0x237F68u;
    {
        const bool branch_taken_0x237f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f68) {
            ctx->pc = 0x2386D8u;
            { ctx->pc = 0x2386d8; return; }
        }
    }
    ctx->pc = 0x237F70u;
label_237f70:
    // 0x237f70: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_237f74:
    // 0x237f74: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_237f78:
    // 0x237f78: 0xc06dda4  jal         func_1B7690
label_237f7c:
    if (ctx->pc == 0x237F7Cu) {
        ctx->pc = 0x237F80u;
        goto label_237f80;
    }
    ctx->pc = 0x237F78u;
    SET_GPR_U32(ctx, 31, 0x237F80u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237F80u;
label_237f80:
    // 0x237f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237f84:
    // 0x237f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237f88:
    // 0x237f88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237f8c:
    // 0x237f8c: 0xc06def6  jal         func_1B7BD8
label_237f90:
    if (ctx->pc == 0x237F90u) {
        ctx->pc = 0x237F94u;
        goto label_237f94;
    }
    ctx->pc = 0x237F8Cu;
    SET_GPR_U32(ctx, 31, 0x237F94u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237F94u;
label_237f94:
    // 0x237f94: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
label_237f98:
    if (ctx->pc == 0x237F98u) {
        ctx->pc = 0x237F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F94u;
        // 0x237f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237F9Cu;
        goto label_237f9c;
    }
    ctx->pc = 0x237F94u;
    {
        const bool branch_taken_0x237f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F94u;
        // 0x237f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f94) {
            ctx->pc = 0x2386D8u;
            { ctx->pc = 0x2386d8; return; }
        }
    }
    ctx->pc = 0x237F9Cu;
label_237f9c:
    // 0x237f9c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_237fa0:
    if (ctx->pc == 0x237FA0u) {
        ctx->pc = 0x237FA4u;
        goto label_237fa4;
    }
    ctx->pc = 0x237F9Cu;
    {
        const bool branch_taken_0x237f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f9c) {
            ctx->pc = 0x237E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237e78;
        }
    }
    ctx->pc = 0x237FA4u;
label_237fa4:
    // 0x237fa4: 0x0  nop
    ctx->pc = 0x237fa4u;
    // NOP
label_237fa8:
    // 0x237fa8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x237fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_237fac:
    // 0x237fac: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x237facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_237fb0:
    // 0x237fb0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_237fb4:
    // 0x237fb4: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x237fb4u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_237fb8:
    // 0x237fb8: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_237fbc:
    // 0x237fbc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x237fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_237fc0:
    // 0x237fc0: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_237fc4:
    if (ctx->pc == 0x237FC4u) {
        ctx->pc = 0x237FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC0u;
        // 0x237fc4: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FC8u;
        goto label_237fc8;
    }
    ctx->pc = 0x237FC0u;
    {
        const bool branch_taken_0x237fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC0u;
        // 0x237fc4: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fc0) {
            ctx->pc = 0x238064u;
            goto label_238064;
        }
    }
    ctx->pc = 0x237FC8u;
label_237fc8:
    // 0x237fc8: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
label_237fcc:
    if (ctx->pc == 0x237FCCu) {
        ctx->pc = 0x237FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC8u;
        // 0x237fcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FD0u;
        goto label_237fd0;
    }
    ctx->pc = 0x237FC8u;
    {
        const bool branch_taken_0x237fc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x237fc8) {
            ctx->pc = 0x237FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FC8u;
            // 0x237fcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FF0u;
            goto label_237ff0;
        }
    }
    ctx->pc = 0x237FD0u;
label_237fd0:
    // 0x237fd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x237fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_237fd4:
    // 0x237fd4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_237fd8:
    if (ctx->pc == 0x237FD8u) {
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD4u;
        // 0x237fd8: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FDCu;
        goto label_237fdc;
    }
    ctx->pc = 0x237FD4u;
    {
        const bool branch_taken_0x237fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD4u;
        // 0x237fd8: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fd4) {
            ctx->pc = 0x23803Cu;
            goto label_23803c;
        }
    }
    ctx->pc = 0x237FDCu;
label_237fdc:
    // 0x237fdc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x237fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_237fe0:
    // 0x237fe0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x237fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_237fe4:
    // 0x237fe4: 0x10000015  b           . + 4 + (0x15 << 2)
label_237fe8:
    if (ctx->pc == 0x237FE8u) {
        ctx->pc = 0x237FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FE4u;
        // 0x237fe8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237FECu;
        goto label_237fec;
    }
    ctx->pc = 0x237FE4u;
    {
        const bool branch_taken_0x237fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FE4u;
        // 0x237fe8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fe4) {
            ctx->pc = 0x23803Cu;
            goto label_23803c;
        }
    }
    ctx->pc = 0x237FECu;
label_237fec:
    // 0x237fec: 0x0  nop
    ctx->pc = 0x237fecu;
    // NOP
label_237ff0:
    // 0x237ff0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x237ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_237ff4:
    // 0x237ff4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237ff8:
    // 0x237ff8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x237ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_237ffc:
    // 0x237ffc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_238000:
    if (ctx->pc == 0x238000u) {
        ctx->pc = 0x238000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FFCu;
        // 0x238000: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238004u;
        goto label_238004;
    }
    ctx->pc = 0x237FFCu;
    {
        const bool branch_taken_0x237ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FFCu;
        // 0x238000: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ffc) {
            ctx->pc = 0x238024u;
            goto label_238024;
        }
    }
    ctx->pc = 0x238004u;
label_238004:
    // 0x238004: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x238004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_238008:
    // 0x238008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x238008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23800c:
    // 0x23800c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_238010:
    // 0x238010: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_238014:
    // 0x238014: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x238014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_238018:
    // 0x238018: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x238018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23801c:
    // 0x23801c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x23801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_238020:
    // 0x238020: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x238020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_238024:
    // 0x238024: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_238028:
    // 0x238028: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
label_23802c:
    if (ctx->pc == 0x23802Cu) {
        ctx->pc = 0x23802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238028u;
        // 0x23802c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238030u;
        goto label_238030;
    }
    ctx->pc = 0x238028u;
    {
        const bool branch_taken_0x238028 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238028u;
        // 0x23802c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238028) {
            ctx->pc = 0x238040u;
            goto label_238040;
        }
    }
    ctx->pc = 0x238030u;
label_238030:
    // 0x238030: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x238030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_238034:
    // 0x238034: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x238034u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_238038:
    // 0x238038: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23803c:
    // 0x23803c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_238040:
    // 0x238040: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_238044:
    // 0x238044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238048:
    // 0x238048: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x238048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23804c:
    // 0x23804c: 0xc08eb24  jal         func_23AC90
label_238050:
    if (ctx->pc == 0x238050u) {
        ctx->pc = 0x238050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23804Cu;
        // 0x238050: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238054u;
        goto label_238054;
    }
    ctx->pc = 0x23804Cu;
    SET_GPR_U32(ctx, 31, 0x238054u);
    ctx->pc = 0x238050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23804Cu;
    // 0x238050: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    { ctx->pc = 0x23ac90; return; }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_238058:
    // 0x238058: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_23805c:
    // 0x23805c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_238060:
    // 0x238060: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x238060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_238064:
    // 0x238064: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
label_238068:
    if (ctx->pc == 0x238068u) {
        ctx->pc = 0x238068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238064u;
        // 0x238068: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23806Cu;
        goto label_23806c;
    }
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x238068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238064u;
        // 0x238068: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238064) {
            ctx->pc = 0x23809Cu;
            goto label_23809c;
        }
    }
    ctx->pc = 0x23806Cu;
label_23806c:
    // 0x23806c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_238070:
    // 0x238070: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_238074:
    if (ctx->pc == 0x238074u) {
        ctx->pc = 0x238074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238070u;
        // 0x238074: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238078u;
        goto label_238078;
    }
    ctx->pc = 0x238070u;
    {
        const bool branch_taken_0x238070 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x238074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238070u;
        // 0x238074: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238070) {
            ctx->pc = 0x23809Cu;
            goto label_23809c;
        }
    }
    ctx->pc = 0x238078u;
label_238078:
    // 0x238078: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x238078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_23807c:
    // 0x23807c: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x23807cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
label_238080:
    // 0x238080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_238084:
    // 0x238084: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x238084u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_238088:
    // 0x238088: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x238088u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_23808c:
    // 0x23808c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x23808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_238090:
    // 0x238090: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x238090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_238094:
    // 0x238094: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x238094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_238098:
    // 0x238098: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x238098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23809c:
    // 0x23809c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
label_2380a0:
    if (ctx->pc == 0x2380A0u) {
        ctx->pc = 0x2380A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23809Cu;
        // 0x2380a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380A4u;
        goto label_2380a4;
    }
    ctx->pc = 0x23809Cu;
    {
        const bool branch_taken_0x23809c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2380A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23809Cu;
        // 0x2380a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23809c) {
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x2380A4u;
label_2380a4:
    // 0x2380a4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2380a8:
    // 0x2380a8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_2380ac:
    if (ctx->pc == 0x2380ACu) {
        ctx->pc = 0x2380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380A8u;
        // 0x2380ac: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380B0u;
        goto label_2380b0;
    }
    ctx->pc = 0x2380A8u;
    {
        const bool branch_taken_0x2380a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380A8u;
        // 0x2380ac: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380a8) {
            ctx->pc = 0x238118u;
            goto label_238118;
        }
    }
    ctx->pc = 0x2380B0u;
label_2380b0:
    // 0x2380b0: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
label_2380b4:
    if (ctx->pc == 0x2380B4u) {
        ctx->pc = 0x2380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380B0u;
        // 0x2380b4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380B8u;
        goto label_2380b8;
    }
    ctx->pc = 0x2380B0u;
    {
        const bool branch_taken_0x2380b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380B0u;
        // 0x2380b4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380b0) {
            ctx->pc = 0x2380F4u;
            goto label_2380f4;
        }
    }
    ctx->pc = 0x2380B8u;
label_2380b8:
    // 0x2380b8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2380bc:
    // 0x2380bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2380c0:
    // 0x2380c0: 0xc08ebb6  jal         func_23AED8
label_2380c4:
    if (ctx->pc == 0x2380C4u) {
        ctx->pc = 0x2380C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380C0u;
        // 0x2380c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380C8u;
        goto label_2380c8;
    }
    ctx->pc = 0x2380C0u;
    SET_GPR_U32(ctx, 31, 0x2380C8u);
    ctx->pc = 0x2380C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380C0u;
    // 0x2380c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    { ctx->pc = 0x23aed8; return; }
    ctx->pc = 0x2380C8u;
label_2380c8:
    // 0x2380c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2380cc:
    // 0x2380cc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2380ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2380d0:
    // 0x2380d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2380d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2380d4:
    // 0x2380d4: 0xc08eb32  jal         func_23ACC8
label_2380d8:
    if (ctx->pc == 0x2380D8u) {
        ctx->pc = 0x2380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380D4u;
        // 0x2380d8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380DCu;
        goto label_2380dc;
    }
    ctx->pc = 0x2380D4u;
    SET_GPR_U32(ctx, 31, 0x2380DCu);
    ctx->pc = 0x2380D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380D4u;
    // 0x2380d8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    { ctx->pc = 0x23acc8; return; }
    ctx->pc = 0x2380DCu;
label_2380dc:
    // 0x2380dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2380e0:
    // 0x2380e0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2380e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2380e4:
    // 0x2380e4: 0xc08ea3a  jal         func_23A8E8
label_2380e8:
    if (ctx->pc == 0x2380E8u) {
        ctx->pc = 0x2380E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380E4u;
        // 0x2380e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2380ECu;
        goto label_2380ec;
    }
    ctx->pc = 0x2380E4u;
    SET_GPR_U32(ctx, 31, 0x2380ECu);
    ctx->pc = 0x2380E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380E4u;
    // 0x2380e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2380ECu;
label_2380ec:
    // 0x2380ec: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x2380ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
label_2380f0:
    // 0x2380f0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2380f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2380f4:
    // 0x2380f4: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2380f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2380f8:
    // 0x2380f8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2380fc:
    if (ctx->pc == 0x2380FCu) {
        ctx->pc = 0x2380FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380F8u;
        // 0x2380fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238100u;
        goto label_238100;
    }
    ctx->pc = 0x2380F8u;
    {
        const bool branch_taken_0x2380f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2380f8) {
            ctx->pc = 0x2380FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380F8u;
            // 0x2380fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x238100u;
label_238100:
    // 0x238100: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238104:
    // 0x238104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x238104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238108:
    // 0x238108: 0xc08ebb6  jal         func_23AED8
label_23810c:
    if (ctx->pc == 0x23810Cu) {
        ctx->pc = 0x23810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238108u;
        // 0x23810c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238110u;
        goto label_238110;
    }
    ctx->pc = 0x238108u;
    SET_GPR_U32(ctx, 31, 0x238110u);
    ctx->pc = 0x23810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238108u;
    // 0x23810c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    { ctx->pc = 0x23aed8; return; }
    ctx->pc = 0x238110u;
label_238110:
    // 0x238110: 0x10000005  b           . + 4 + (0x5 << 2)
label_238114:
    if (ctx->pc == 0x238114u) {
        ctx->pc = 0x238114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238110u;
        // 0x238114: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238118u;
        goto label_238118;
    }
    ctx->pc = 0x238110u;
    {
        const bool branch_taken_0x238110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238110u;
        // 0x238114: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238110) {
            ctx->pc = 0x238128u;
            goto label_238128;
        }
    }
    ctx->pc = 0x238118u;
label_238118:
    // 0x238118: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23811c:
    // 0x23811c: 0xc08ebb6  jal         func_23AED8
label_238120:
    if (ctx->pc == 0x238120u) {
        ctx->pc = 0x238120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23811Cu;
        // 0x238120: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238124u;
        goto label_238124;
    }
    ctx->pc = 0x23811Cu;
    SET_GPR_U32(ctx, 31, 0x238124u);
    ctx->pc = 0x238120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23811Cu;
    // 0x238120: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    { ctx->pc = 0x23aed8; return; }
    ctx->pc = 0x238124u;
label_238124:
    // 0x238124: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x238124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_238128:
    // 0x238128: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23812c:
    // 0x23812c: 0xc08eb24  jal         func_23AC90
label_238130:
    if (ctx->pc == 0x238130u) {
        ctx->pc = 0x238130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23812Cu;
        // 0x238130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238134u;
        goto label_238134;
    }
    ctx->pc = 0x23812Cu;
    SET_GPR_U32(ctx, 31, 0x238134u);
    ctx->pc = 0x238130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23812Cu;
    // 0x238130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    { ctx->pc = 0x23ac90; return; }
    ctx->pc = 0x238134u;
label_238134:
    // 0x238134: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x238134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_238138:
    // 0x238138: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_23813c:
    if (ctx->pc == 0x23813Cu) {
        ctx->pc = 0x23813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238138u;
        // 0x23813c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238140u;
        goto label_238140;
    }
    ctx->pc = 0x238138u;
    {
        const bool branch_taken_0x238138 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238138u;
        // 0x23813c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238138) {
            ctx->pc = 0x238154u;
            goto label_238154;
        }
    }
    ctx->pc = 0x238140u;
label_238140:
    // 0x238140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238144:
    // 0x238144: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_238148:
    // 0x238148: 0xc08ebb6  jal         func_23AED8
label_23814c:
    if (ctx->pc == 0x23814Cu) {
        ctx->pc = 0x23814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238148u;
        // 0x23814c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238150u;
        goto label_238150;
    }
    ctx->pc = 0x238148u;
    SET_GPR_U32(ctx, 31, 0x238150u);
    ctx->pc = 0x23814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238148u;
    // 0x23814c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    { ctx->pc = 0x23aed8; return; }
    ctx->pc = 0x238150u;
label_238150:
    // 0x238150: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x238150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_238154:
    // 0x238154: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_238158:
    if (ctx->pc == 0x238158u) {
        ctx->pc = 0x238158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238154u;
        // 0x238158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23815Cu;
        goto label_23815c;
    }
    ctx->pc = 0x238154u;
    {
        const bool branch_taken_0x238154 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x238158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238154u;
        // 0x238158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238154) {
            ctx->pc = 0x23819Cu;
            goto label_23819c;
        }
    }
    ctx->pc = 0x23815Cu;
label_23815c:
    // 0x23815c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238160:
    // 0x238160: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x238160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_238164:
    // 0x238164: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x238164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_238168:
    // 0x238168: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23816c:
    if (ctx->pc == 0x23816Cu) {
        ctx->pc = 0x23816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238168u;
        // 0x23816c: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238170u;
        goto label_238170;
    }
    ctx->pc = 0x238168u;
    {
        const bool branch_taken_0x238168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238168u;
        // 0x23816c: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238168) {
            ctx->pc = 0x2381A0u;
            goto label_2381a0;
        }
    }
    ctx->pc = 0x238170u;
label_238170:
    // 0x238170: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x238170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
label_238174:
    // 0x238174: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x238174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
label_238178:
    // 0x238178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23817c:
    // 0x23817c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_238180:
    if (ctx->pc == 0x238180u) {
        ctx->pc = 0x238180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23817Cu;
        // 0x238180: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238184u;
        goto label_238184;
    }
    ctx->pc = 0x23817Cu;
    {
        const bool branch_taken_0x23817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23817Cu;
        // 0x238180: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23817c) {
            ctx->pc = 0x23819Cu;
            goto label_23819c;
        }
    }
    ctx->pc = 0x238184u;
label_238184:
    // 0x238184: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238188:
    // 0x238188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23818c:
    // 0x23818c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_238190:
    // 0x238190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_238194:
    // 0x238194: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x238194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_238198:
    // 0x238198: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x238198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_23819c:
    // 0x23819c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2381a0:
    // 0x2381a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2381a4:
    if (ctx->pc == 0x2381A4u) {
        ctx->pc = 0x2381A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381A0u;
        // 0x2381a4: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2381A8u;
        goto label_2381a8;
    }
    ctx->pc = 0x2381A0u;
    {
        const bool branch_taken_0x2381a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381A0u;
        // 0x2381a4: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381a0) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381A8u;
label_2381a8:
    // 0x2381a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2381ac:
    // 0x2381ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2381acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2381b0:
    // 0x2381b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2381b4:
    // 0x2381b4: 0xc08ead4  jal         func_23AB50
label_2381b8:
    if (ctx->pc == 0x2381B8u) {
        ctx->pc = 0x2381B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381B4u;
        // 0x2381b8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2381BCu;
        goto label_2381bc;
    }
    ctx->pc = 0x2381B4u;
    SET_GPR_U32(ctx, 31, 0x2381BCu);
    ctx->pc = 0x2381B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381B4u;
    // 0x2381b8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    { ctx->pc = 0x23ab50; return; }
    ctx->pc = 0x2381BCu;
label_2381bc:
    // 0x2381bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2381bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2381c0:
    // 0x2381c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2381c4:
    if (ctx->pc == 0x2381C4u) {
        ctx->pc = 0x2381C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381C0u;
        // 0x2381c4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2381C8u;
        goto label_2381c8;
    }
    ctx->pc = 0x2381C0u;
    {
        const bool branch_taken_0x2381c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381C0u;
        // 0x2381c4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381c0) {
            ctx->pc = 0x2381D0u;
            goto label_2381d0;
        }
    }
    ctx->pc = 0x2381C8u;
label_2381c8:
    // 0x2381c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2381cc:
    // 0x2381cc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2381ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2381d0:
    // 0x2381d0: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x2381d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2381d4:
    // 0x2381d4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_2381d8:
    if (ctx->pc == 0x2381D8u) {
        ctx->pc = 0x2381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381D4u;
        // 0x2381d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2381DCu;
        goto label_2381dc;
    }
    ctx->pc = 0x2381D4u;
    {
        const bool branch_taken_0x2381d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381D4u;
        // 0x2381d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381d4) {
            ctx->pc = 0x2381E0u;
            goto label_2381e0;
        }
    }
    ctx->pc = 0x2381DCu;
label_2381dc:
    // 0x2381dc: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x2381dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2381e0:
    // 0x2381e0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2381e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_2381e4:
    // 0x2381e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2381e8:
    if (ctx->pc == 0x2381E8u) {
        ctx->pc = 0x2381E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381E4u;
        // 0x2381e8: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2381ECu;
        goto label_2381ec;
    }
    ctx->pc = 0x2381E4u;
    {
        const bool branch_taken_0x2381e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2381E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381E4u;
        // 0x2381e8: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381e4) {
            ctx->pc = 0x238210u;
            goto label_238210;
        }
    }
    ctx->pc = 0x2381ECu;
label_2381ec:
    // 0x2381ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2381f0:
    // 0x2381f0: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_2381f4:
    // 0x2381f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2381f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2381f8:
    // 0x2381f8: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2381f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_2381fc:
    // 0x2381fc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_238200:
    // 0x238200: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x238200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_238204:
    // 0x238204: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x238204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_238208:
    // 0x238208: 0x1000000b  b           . + 4 + (0xB << 2)
label_23820c:
    if (ctx->pc == 0x23820Cu) {
        ctx->pc = 0x23820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238208u;
        // 0x23820c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238210u;
        goto label_238210;
    }
    ctx->pc = 0x238208u;
    {
        const bool branch_taken_0x238208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238208u;
        // 0x23820c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238208) {
            ctx->pc = 0x238238u;
            goto label_238238;
        }
    }
    ctx->pc = 0x238210u;
label_238210:
    // 0x238210: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_238214:
    if (ctx->pc == 0x238214u) {
        ctx->pc = 0x238214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238210u;
        // 0x238214: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238218u;
        goto label_238218;
    }
    ctx->pc = 0x238210u;
    {
        const bool branch_taken_0x238210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238210u;
        // 0x238214: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238210) {
            ctx->pc = 0x23823Cu;
            goto label_23823c;
        }
    }
    ctx->pc = 0x238218u;
label_238218:
    // 0x238218: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23821c:
    // 0x23821c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x23821cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_238220:
    // 0x238220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_238224:
    // 0x238224: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_238228:
    // 0x238228: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_23822c:
    // 0x23822c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_238230:
    // 0x238230: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x238230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_238234:
    // 0x238234: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x238234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_238238:
    // 0x238238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23823c:
    // 0x23823c: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
label_238240:
    if (ctx->pc == 0x238240u) {
        ctx->pc = 0x238240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23823Cu;
        // 0x238240: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238244u;
        goto label_238244;
    }
    ctx->pc = 0x23823Cu;
    {
        const bool branch_taken_0x23823c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23823c) {
            ctx->pc = 0x238240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23823Cu;
            // 0x238240: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23825Cu;
            goto label_23825c;
        }
    }
    ctx->pc = 0x238244u;
label_238244:
    // 0x238244: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238248:
    // 0x238248: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23824c:
    // 0x23824c: 0xc08ebf6  jal         func_23AFD8
label_238250:
    if (ctx->pc == 0x238250u) {
        ctx->pc = 0x238250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23824Cu;
        // 0x238250: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238254u;
        goto label_238254;
    }
    ctx->pc = 0x23824Cu;
    SET_GPR_U32(ctx, 31, 0x238254u);
    ctx->pc = 0x238250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23824Cu;
    // 0x238250: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x238254u;
label_238254:
    // 0x238254: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x238254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_238258:
    // 0x238258: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23825c:
    // 0x23825c: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
label_238260:
    if (ctx->pc == 0x238260u) {
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238264u;
        goto label_238264;
    }
    ctx->pc = 0x23825Cu;
    {
        const bool branch_taken_0x23825c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23825c) {
            ctx->pc = 0x23827Cu;
            goto label_23827c;
        }
    }
    ctx->pc = 0x238264u;
label_238264:
    // 0x238264: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_238268:
    // 0x238268: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23826c:
    // 0x23826c: 0xc08ebf6  jal         func_23AFD8
label_238270:
    if (ctx->pc == 0x238270u) {
        ctx->pc = 0x238270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23826Cu;
        // 0x238270: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238274u;
        goto label_238274;
    }
    ctx->pc = 0x23826Cu;
    SET_GPR_U32(ctx, 31, 0x238274u);
    ctx->pc = 0x238270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23826Cu;
    // 0x238270: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x238274u;
label_238274:
    // 0x238274: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x238274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_238278:
    // 0x238278: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x238278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23827c:
    // 0x23827c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_238280:
    if (ctx->pc == 0x238280u) {
        ctx->pc = 0x238280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23827Cu;
        // 0x238280: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238284u;
        goto label_238284;
    }
    ctx->pc = 0x23827Cu;
    {
        const bool branch_taken_0x23827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23827Cu;
        // 0x238280: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23827c) {
            ctx->pc = 0x2382D8u;
            goto label_2382d8;
        }
    }
    ctx->pc = 0x238284u;
label_238284:
    // 0x238284: 0xc08ec4c  jal         func_23B130
label_238288:
    if (ctx->pc == 0x238288u) {
        ctx->pc = 0x238288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238284u;
        // 0x238288: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23828Cu;
        goto label_23828c;
    }
    ctx->pc = 0x238284u;
    SET_GPR_U32(ctx, 31, 0x23828Cu);
    ctx->pc = 0x238288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238284u;
    // 0x238288: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x23828Cu;
label_23828c:
    // 0x23828c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
label_238290:
    if (ctx->pc == 0x238290u) {
        ctx->pc = 0x238290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23828Cu;
        // 0x238290: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238294u;
        goto label_238294;
    }
    ctx->pc = 0x23828Cu;
    {
        const bool branch_taken_0x23828c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23828c) {
            ctx->pc = 0x238290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23828Cu;
            // 0x238290: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2382DCu;
            goto label_2382dc;
        }
    }
    ctx->pc = 0x238294u;
label_238294:
    // 0x238294: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238298:
    // 0x238298: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23829c:
    // 0x23829c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2382a0:
    // 0x2382a0: 0xc08ea46  jal         func_23A918
label_2382a4:
    if (ctx->pc == 0x2382A4u) {
        ctx->pc = 0x2382A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382A0u;
        // 0x2382a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382A8u;
        goto label_2382a8;
    }
    ctx->pc = 0x2382A0u;
    SET_GPR_U32(ctx, 31, 0x2382A8u);
    ctx->pc = 0x2382A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382A0u;
    // 0x2382a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x2382A8u;
label_2382a8:
    // 0x2382a8: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2382a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_2382ac:
    // 0x2382ac: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2382b0:
    // 0x2382b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2382b4:
    if (ctx->pc == 0x2382B4u) {
        ctx->pc = 0x2382B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B0u;
        // 0x2382b4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382B8u;
        goto label_2382b8;
    }
    ctx->pc = 0x2382B0u;
    {
        const bool branch_taken_0x2382b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B0u;
        // 0x2382b4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382b0) {
            ctx->pc = 0x2382D0u;
            goto label_2382d0;
        }
    }
    ctx->pc = 0x2382B8u;
label_2382b8:
    // 0x2382b8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2382bc:
    // 0x2382bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2382bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2382c0:
    // 0x2382c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2382c4:
    // 0x2382c4: 0xc08ea46  jal         func_23A918
label_2382c8:
    if (ctx->pc == 0x2382C8u) {
        ctx->pc = 0x2382C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382C4u;
        // 0x2382c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382CCu;
        goto label_2382cc;
    }
    ctx->pc = 0x2382C4u;
    SET_GPR_U32(ctx, 31, 0x2382CCu);
    ctx->pc = 0x2382C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382C4u;
    // 0x2382c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x2382CCu;
label_2382cc:
    // 0x2382cc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2382ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2382d0:
    // 0x2382d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2382d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2382d4:
    // 0x2382d4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2382d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2382d8:
    // 0x2382d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2382d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2382dc:
    // 0x2382dc: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
label_2382e0:
    if (ctx->pc == 0x2382E0u) {
        ctx->pc = 0x2382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382DCu;
        // 0x2382e0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2382E4u;
        goto label_2382e4;
    }
    ctx->pc = 0x2382DCu;
    {
        const bool branch_taken_0x2382dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382DCu;
        // 0x2382e0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382dc) {
            ctx->pc = 0x238350u;
            goto label_238350;
        }
    }
    ctx->pc = 0x2382E4u;
label_2382e4:
    // 0x2382e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2382e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2382e8:
    // 0x2382e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2382e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2382ec:
    // 0x2382ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2382f0:
    if (ctx->pc == 0x2382F0u) {
        ctx->pc = 0x2382F4u;
        goto label_2382f4;
    }
    ctx->pc = 0x2382ECu;
    {
        const bool branch_taken_0x2382ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2382ec) {
            ctx->pc = 0x238350u;
            goto label_238350;
        }
    }
    ctx->pc = 0x2382F4u;
label_2382f4:
    // 0x2382f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2382f8:
    // 0x2382f8: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_2382fc:
    if (ctx->pc == 0x2382FCu) {
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238300u;
        goto label_238300;
    }
    ctx->pc = 0x2382F8u;
    {
        const bool branch_taken_0x2382f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f8) {
            ctx->pc = 0x238328u;
            goto label_238328;
        }
    }
    ctx->pc = 0x238300u;
label_238300:
    // 0x238300: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_238304:
    // 0x238304: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x238304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_238308:
    // 0x238308: 0xc08ea46  jal         func_23A918
label_23830c:
    if (ctx->pc == 0x23830Cu) {
        ctx->pc = 0x23830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238308u;
        // 0x23830c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238310u;
        goto label_238310;
    }
    ctx->pc = 0x238308u;
    SET_GPR_U32(ctx, 31, 0x238310u);
    ctx->pc = 0x23830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238308u;
    // 0x23830c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x238310u;
label_238310:
    // 0x238310: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238314:
    // 0x238314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238318:
    // 0x238318: 0xc08ec4c  jal         func_23B130
label_23831c:
    if (ctx->pc == 0x23831Cu) {
        ctx->pc = 0x23831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238318u;
        // 0x23831c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238320u;
        goto label_238320;
    }
    ctx->pc = 0x238318u;
    SET_GPR_U32(ctx, 31, 0x238320u);
    ctx->pc = 0x23831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238318u;
    // 0x23831c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x238320u;
label_238320:
    // 0x238320: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_238324:
    if (ctx->pc == 0x238324u) {
        ctx->pc = 0x238324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238320u;
        // 0x238324: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238328u;
        goto label_238328;
    }
    ctx->pc = 0x238320u;
    {
        const bool branch_taken_0x238320 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x238320) {
            ctx->pc = 0x238324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238320u;
            // 0x238324: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238338u;
            goto label_238338;
        }
    }
    ctx->pc = 0x238328u;
label_238328:
    // 0x238328: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23832c:
    // 0x23832c: 0x100000db  b           . + 4 + (0xDB << 2)
label_238330:
    if (ctx->pc == 0x238330u) {
        ctx->pc = 0x238330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23832Cu;
        // 0x238330: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238334u;
        goto label_238334;
    }
    ctx->pc = 0x23832Cu;
    {
        const bool branch_taken_0x23832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23832Cu;
        // 0x238330: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23832c) {
            ctx->pc = 0x23869Cu;
            { ctx->pc = 0x23869c; return; }
        }
    }
    ctx->pc = 0x238334u;
label_238334:
    // 0x238334: 0x0  nop
    ctx->pc = 0x238334u;
    // NOP
label_238338:
    // 0x238338: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_23833c:
    // 0x23833c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x23833cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_238340:
    // 0x238340: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x238340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_238344:
    // 0x238344: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_238348:
    if (ctx->pc == 0x238348u) {
        ctx->pc = 0x238348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238344u;
        // 0x238348: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23834Cu;
        goto label_23834c;
    }
    ctx->pc = 0x238344u;
    {
        const bool branch_taken_0x238344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238344u;
        // 0x238348: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238344) {
            ctx->pc = 0x23869Cu;
            { ctx->pc = 0x23869c; return; }
        }
    }
    ctx->pc = 0x23834Cu;
label_23834c:
    // 0x23834c: 0x0  nop
    ctx->pc = 0x23834cu;
    // NOP
label_238350:
    // 0x238350: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
label_238354:
    if (ctx->pc == 0x238354u) {
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238350u;
        // 0x238354: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238358u;
        goto label_238358;
    }
    ctx->pc = 0x238350u;
    {
        const bool branch_taken_0x238350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238350u;
        // 0x238354: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238350) {
            ctx->pc = 0x2385BCu;
            { ctx->pc = 0x2385bc; return; }
        }
    }
    ctx->pc = 0x238358u;
label_238358:
    // 0x238358: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
label_23835c:
    if (ctx->pc == 0x23835Cu) {
        ctx->pc = 0x23835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238358u;
        // 0x23835c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238360u;
        goto label_238360;
    }
    ctx->pc = 0x238358u;
    {
        const bool branch_taken_0x238358 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238358u;
        // 0x23835c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238358) {
            ctx->pc = 0x238378u;
            goto label_238378;
        }
    }
    ctx->pc = 0x238360u;
label_238360:
    // 0x238360: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x238360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_238364:
    // 0x238364: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238368:
    // 0x238368: 0xc08ebf6  jal         func_23AFD8
label_23836c:
    if (ctx->pc == 0x23836Cu) {
        ctx->pc = 0x23836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238368u;
        // 0x23836c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238370u;
        goto label_238370;
    }
    ctx->pc = 0x238368u;
    SET_GPR_U32(ctx, 31, 0x238370u);
    ctx->pc = 0x23836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238368u;
    // 0x23836c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x238370u;
label_238370:
    // 0x238370: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_238374:
    // 0x238374: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x238374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_238378:
    // 0x238378: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_23837c:
    if (ctx->pc == 0x23837Cu) {
        ctx->pc = 0x23837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238378u;
        // 0x23837c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238380u;
        goto label_238380;
    }
    ctx->pc = 0x238378u;
    {
        const bool branch_taken_0x238378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238378u;
        // 0x23837c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238378) {
            ctx->pc = 0x2383C0u;
            goto label_2383c0;
        }
    }
    ctx->pc = 0x238380u;
label_238380:
    // 0x238380: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_238384:
    // 0x238384: 0xc08ea10  jal         func_23A840
label_238388:
    if (ctx->pc == 0x238388u) {
        ctx->pc = 0x238388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238384u;
        // 0x238388: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23838Cu;
        goto label_23838c;
    }
    ctx->pc = 0x238384u;
    SET_GPR_U32(ctx, 31, 0x23838Cu);
    ctx->pc = 0x238388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238384u;
    // 0x238388: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23838Cu;
label_23838c:
    // 0x23838c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_238390:
    // 0x238390: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x238390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_238394:
    // 0x238394: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_238398:
    // 0x238398: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x238398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_23839c:
    // 0x23839c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2383a0:
    // 0x2383a0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2383a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2383a4:
    // 0x2383a4: 0xc08e93e  jal         func_23A4F8
label_2383a8:
    if (ctx->pc == 0x2383A8u) {
        ctx->pc = 0x2383A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383A4u;
        // 0x2383a8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2383ACu;
        goto label_2383ac;
    }
    ctx->pc = 0x2383A4u;
    SET_GPR_U32(ctx, 31, 0x2383ACu);
    ctx->pc = 0x2383A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A4u;
    // 0x2383a8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2383ACu;
label_2383ac:
    // 0x2383ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2383acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2383b0:
    // 0x2383b0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2383b4:
    // 0x2383b4: 0xc08ebf6  jal         func_23AFD8
label_2383b8:
    if (ctx->pc == 0x2383B8u) {
        ctx->pc = 0x2383B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383B4u;
        // 0x2383b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2383BCu;
        goto label_2383bc;
    }
    ctx->pc = 0x2383B4u;
    SET_GPR_U32(ctx, 31, 0x2383BCu);
    ctx->pc = 0x2383B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383B4u;
    // 0x2383b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x2383BCu;
label_2383bc:
    // 0x2383bc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2383bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2383c0:
    // 0x2383c0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2383c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_2383c4:
    // 0x2383c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2383c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2383c8:
    // 0x2383c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2383cc:
    // 0x2383cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_2383d0:
    if (ctx->pc == 0x2383D0u) {
        ctx->pc = 0x2383D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383CCu;
        // 0x2383d0: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2383D4u;
        goto label_2383d4;
    }
    ctx->pc = 0x2383CCu;
    {
        const bool branch_taken_0x2383cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383CCu;
        // 0x2383d0: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383cc) {
            ctx->pc = 0x238450u;
            { ctx->pc = 0x238450; return; }
        }
    }
    ctx->pc = 0x2383D4u;
label_2383d4:
    // 0x2383d4: 0x0  nop
    ctx->pc = 0x2383d4u;
    // NOP
label_2383d8:
    // 0x2383d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2383dc:
    // 0x2383dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2383dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2383e0:
    // 0x2383e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2383e4:
    // 0x2383e4: 0xc08ea46  jal         func_23A918
label_2383e8:
    if (ctx->pc == 0x2383E8u) {
        ctx->pc = 0x2383E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383E4u;
        // 0x2383e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2383ECu;
        goto label_2383ec;
    }
    ctx->pc = 0x2383E4u;
    SET_GPR_U32(ctx, 31, 0x2383ECu);
    ctx->pc = 0x2383E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383E4u;
    // 0x2383e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x2383ECu;
label_2383ec:
    // 0x2383ec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2383f0:
    // 0x2383f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2383f4:
    // 0x2383f4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2383f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2383f8:
    // 0x2383f8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_2383fc:
    if (ctx->pc == 0x2383FCu) {
        ctx->pc = 0x2383FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383F8u;
        // 0x2383fc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238400u;
        goto label_238400;
    }
    ctx->pc = 0x2383F8u;
    {
        const bool branch_taken_0x2383f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383F8u;
        // 0x2383fc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383f8) {
            ctx->pc = 0x238420u;
            { ctx->pc = 0x238420; return; }
        }
    }
    ctx->pc = 0x238400u;
label_238400:
    // 0x238400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238404:
    // 0x238404: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_238408:
    // 0x238408: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23840c:
    // 0x23840c: 0xc08ea46  jal         func_23A918
label_238410:
    if (ctx->pc == 0x238410u) {
        ctx->pc = 0x238410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23840Cu;
        // 0x238410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238414u;
        goto label_238414;
    }
    ctx->pc = 0x23840Cu;
    SET_GPR_U32(ctx, 31, 0x238414u);
    ctx->pc = 0x238410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23840Cu;
    // 0x238410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x238414u;
label_238414:
    // 0x238414: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_238418:
    // 0x238418: 0x1000000c  b           . + 4 + (0xC << 2)
label_23841c:
    if (ctx->pc == 0x23841Cu) {
        ctx->pc = 0x23841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238418u;
        // 0x23841c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238420u;
        { ctx->pc = 0x238420; return; }
    }
    ctx->pc = 0x238418u;
    {
        const bool branch_taken_0x238418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238418u;
        // 0x23841c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238418) {
            ctx->pc = 0x23844Cu;
            { ctx->pc = 0x23844c; return; }
        }
    }
    ctx->pc = 0x238420u;
    ctx->pc = 0x238420u;
    return;
}
