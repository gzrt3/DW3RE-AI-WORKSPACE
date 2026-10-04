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


void FUN_0019b850_part319(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x236cb0u: goto label_236cb0;
        case 0x236cb4u: goto label_236cb4;
        case 0x236cb8u: goto label_236cb8;
        case 0x236cbcu: goto label_236cbc;
        case 0x236cc0u: goto label_236cc0;
        case 0x236cc4u: goto label_236cc4;
        case 0x236cc8u: goto label_236cc8;
        case 0x236cccu: goto label_236ccc;
        case 0x236cd0u: goto label_236cd0;
        case 0x236cd4u: goto label_236cd4;
        case 0x236cd8u: goto label_236cd8;
        case 0x236cdcu: goto label_236cdc;
        case 0x236ce0u: goto label_236ce0;
        case 0x236ce4u: goto label_236ce4;
        case 0x236ce8u: goto label_236ce8;
        case 0x236cecu: goto label_236cec;
        case 0x236cf0u: goto label_236cf0;
        case 0x236cf4u: goto label_236cf4;
        case 0x236cf8u: goto label_236cf8;
        case 0x236cfcu: goto label_236cfc;
        case 0x236d00u: goto label_236d00;
        case 0x236d04u: goto label_236d04;
        case 0x236d08u: goto label_236d08;
        case 0x236d0cu: goto label_236d0c;
        case 0x236d10u: goto label_236d10;
        case 0x236d14u: goto label_236d14;
        case 0x236d18u: goto label_236d18;
        case 0x236d1cu: goto label_236d1c;
        case 0x236d20u: goto label_236d20;
        case 0x236d24u: goto label_236d24;
        case 0x236d28u: goto label_236d28;
        case 0x236d2cu: goto label_236d2c;
        case 0x236d30u: goto label_236d30;
        case 0x236d34u: goto label_236d34;
        case 0x236d38u: goto label_236d38;
        case 0x236d3cu: goto label_236d3c;
        case 0x236d40u: goto label_236d40;
        case 0x236d44u: goto label_236d44;
        case 0x236d48u: goto label_236d48;
        case 0x236d4cu: goto label_236d4c;
        case 0x236d50u: goto label_236d50;
        case 0x236d54u: goto label_236d54;
        case 0x236d58u: goto label_236d58;
        case 0x236d5cu: goto label_236d5c;
        case 0x236d60u: goto label_236d60;
        case 0x236d64u: goto label_236d64;
        case 0x236d68u: goto label_236d68;
        case 0x236d6cu: goto label_236d6c;
        case 0x236d70u: goto label_236d70;
        case 0x236d74u: goto label_236d74;
        case 0x236d78u: goto label_236d78;
        case 0x236d7cu: goto label_236d7c;
        case 0x236d80u: goto label_236d80;
        case 0x236d84u: goto label_236d84;
        case 0x236d88u: goto label_236d88;
        case 0x236d8cu: goto label_236d8c;
        case 0x236d90u: goto label_236d90;
        case 0x236d94u: goto label_236d94;
        case 0x236d98u: goto label_236d98;
        case 0x236d9cu: goto label_236d9c;
        case 0x236da0u: goto label_236da0;
        case 0x236da4u: goto label_236da4;
        case 0x236da8u: goto label_236da8;
        case 0x236dacu: goto label_236dac;
        case 0x236db0u: goto label_236db0;
        case 0x236db4u: goto label_236db4;
        case 0x236db8u: goto label_236db8;
        case 0x236dbcu: goto label_236dbc;
        case 0x236dc0u: goto label_236dc0;
        case 0x236dc4u: goto label_236dc4;
        case 0x236dc8u: goto label_236dc8;
        case 0x236dccu: goto label_236dcc;
        case 0x236dd0u: goto label_236dd0;
        case 0x236dd4u: goto label_236dd4;
        case 0x236dd8u: goto label_236dd8;
        case 0x236ddcu: goto label_236ddc;
        case 0x236de0u: goto label_236de0;
        case 0x236de4u: goto label_236de4;
        case 0x236de8u: goto label_236de8;
        case 0x236decu: goto label_236dec;
        case 0x236df0u: goto label_236df0;
        case 0x236df4u: goto label_236df4;
        case 0x236df8u: goto label_236df8;
        case 0x236dfcu: goto label_236dfc;
        case 0x236e00u: goto label_236e00;
        case 0x236e04u: goto label_236e04;
        case 0x236e08u: goto label_236e08;
        case 0x236e0cu: goto label_236e0c;
        case 0x236e10u: goto label_236e10;
        case 0x236e14u: goto label_236e14;
        case 0x236e18u: goto label_236e18;
        case 0x236e1cu: goto label_236e1c;
        case 0x236e20u: goto label_236e20;
        case 0x236e24u: goto label_236e24;
        case 0x236e28u: goto label_236e28;
        case 0x236e2cu: goto label_236e2c;
        case 0x236e30u: goto label_236e30;
        case 0x236e34u: goto label_236e34;
        case 0x236e38u: goto label_236e38;
        case 0x236e3cu: goto label_236e3c;
        case 0x236e40u: goto label_236e40;
        case 0x236e44u: goto label_236e44;
        case 0x236e48u: goto label_236e48;
        case 0x236e4cu: goto label_236e4c;
        case 0x236e50u: goto label_236e50;
        case 0x236e54u: goto label_236e54;
        case 0x236e58u: goto label_236e58;
        case 0x236e5cu: goto label_236e5c;
        case 0x236e60u: goto label_236e60;
        case 0x236e64u: goto label_236e64;
        case 0x236e68u: goto label_236e68;
        case 0x236e6cu: goto label_236e6c;
        case 0x236e70u: goto label_236e70;
        case 0x236e74u: goto label_236e74;
        case 0x236e78u: goto label_236e78;
        case 0x236e7cu: goto label_236e7c;
        case 0x236e80u: goto label_236e80;
        case 0x236e84u: goto label_236e84;
        case 0x236e88u: goto label_236e88;
        case 0x236e8cu: goto label_236e8c;
        case 0x236e90u: goto label_236e90;
        case 0x236e94u: goto label_236e94;
        case 0x236e98u: goto label_236e98;
        case 0x236e9cu: goto label_236e9c;
        case 0x236ea0u: goto label_236ea0;
        case 0x236ea4u: goto label_236ea4;
        case 0x236ea8u: goto label_236ea8;
        case 0x236eacu: goto label_236eac;
        case 0x236eb0u: goto label_236eb0;
        case 0x236eb4u: goto label_236eb4;
        case 0x236eb8u: goto label_236eb8;
        case 0x236ebcu: goto label_236ebc;
        case 0x236ec0u: goto label_236ec0;
        case 0x236ec4u: goto label_236ec4;
        case 0x236ec8u: goto label_236ec8;
        case 0x236eccu: goto label_236ecc;
        case 0x236ed0u: goto label_236ed0;
        case 0x236ed4u: goto label_236ed4;
        case 0x236ed8u: goto label_236ed8;
        case 0x236edcu: goto label_236edc;
        case 0x236ee0u: goto label_236ee0;
        case 0x236ee4u: goto label_236ee4;
        case 0x236ee8u: goto label_236ee8;
        case 0x236eecu: goto label_236eec;
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        case 0x236f60u: goto label_236f60;
        case 0x236f64u: goto label_236f64;
        case 0x236f68u: goto label_236f68;
        case 0x236f6cu: goto label_236f6c;
        case 0x236f70u: goto label_236f70;
        case 0x236f74u: goto label_236f74;
        case 0x236f78u: goto label_236f78;
        case 0x236f7cu: goto label_236f7c;
        case 0x236f80u: goto label_236f80;
        case 0x236f84u: goto label_236f84;
        case 0x236f88u: goto label_236f88;
        case 0x236f8cu: goto label_236f8c;
        case 0x236f90u: goto label_236f90;
        case 0x236f94u: goto label_236f94;
        case 0x236f98u: goto label_236f98;
        case 0x236f9cu: goto label_236f9c;
        case 0x236fa0u: goto label_236fa0;
        case 0x236fa4u: goto label_236fa4;
        case 0x236fa8u: goto label_236fa8;
        case 0x236facu: goto label_236fac;
        case 0x236fb0u: goto label_236fb0;
        case 0x236fb4u: goto label_236fb4;
        case 0x236fb8u: goto label_236fb8;
        case 0x236fbcu: goto label_236fbc;
        case 0x236fc0u: goto label_236fc0;
        case 0x236fc4u: goto label_236fc4;
        case 0x236fc8u: goto label_236fc8;
        case 0x236fccu: goto label_236fcc;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236fd8u: goto label_236fd8;
        case 0x236fdcu: goto label_236fdc;
        case 0x236fe0u: goto label_236fe0;
        case 0x236fe4u: goto label_236fe4;
        case 0x236fe8u: goto label_236fe8;
        case 0x236fecu: goto label_236fec;
        case 0x236ff0u: goto label_236ff0;
        case 0x236ff4u: goto label_236ff4;
        case 0x236ff8u: goto label_236ff8;
        case 0x236ffcu: goto label_236ffc;
        case 0x237000u: goto label_237000;
        case 0x237004u: goto label_237004;
        case 0x237008u: goto label_237008;
        case 0x23700cu: goto label_23700c;
        case 0x237010u: goto label_237010;
        case 0x237014u: goto label_237014;
        case 0x237018u: goto label_237018;
        case 0x23701cu: goto label_23701c;
        case 0x237020u: goto label_237020;
        case 0x237024u: goto label_237024;
        case 0x237028u: goto label_237028;
        case 0x23702cu: goto label_23702c;
        case 0x237030u: goto label_237030;
        case 0x237034u: goto label_237034;
        case 0x237038u: goto label_237038;
        case 0x23703cu: goto label_23703c;
        case 0x237040u: goto label_237040;
        case 0x237044u: goto label_237044;
        case 0x237048u: goto label_237048;
        case 0x23704cu: goto label_23704c;
        case 0x237050u: goto label_237050;
        case 0x237054u: goto label_237054;
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        case 0x2370c8u: goto label_2370c8;
        case 0x2370ccu: goto label_2370cc;
        case 0x2370d0u: goto label_2370d0;
        case 0x2370d4u: goto label_2370d4;
        case 0x2370d8u: goto label_2370d8;
        case 0x2370dcu: goto label_2370dc;
        case 0x2370e0u: goto label_2370e0;
        case 0x2370e4u: goto label_2370e4;
        case 0x2370e8u: goto label_2370e8;
        case 0x2370ecu: goto label_2370ec;
        case 0x2370f0u: goto label_2370f0;
        case 0x2370f4u: goto label_2370f4;
        case 0x2370f8u: goto label_2370f8;
        case 0x2370fcu: goto label_2370fc;
        case 0x237100u: goto label_237100;
        case 0x237104u: goto label_237104;
        case 0x237108u: goto label_237108;
        case 0x23710cu: goto label_23710c;
        case 0x237110u: goto label_237110;
        case 0x237114u: goto label_237114;
        case 0x237118u: goto label_237118;
        case 0x23711cu: goto label_23711c;
        case 0x237120u: goto label_237120;
        case 0x237124u: goto label_237124;
        case 0x237128u: goto label_237128;
        case 0x23712cu: goto label_23712c;
        case 0x237130u: goto label_237130;
        case 0x237134u: goto label_237134;
        case 0x237138u: goto label_237138;
        case 0x23713cu: goto label_23713c;
        case 0x237140u: goto label_237140;
        case 0x237144u: goto label_237144;
        case 0x237148u: goto label_237148;
        case 0x23714cu: goto label_23714c;
        case 0x237150u: goto label_237150;
        case 0x237154u: goto label_237154;
        case 0x237158u: goto label_237158;
        case 0x23715cu: goto label_23715c;
        case 0x237160u: goto label_237160;
        case 0x237164u: goto label_237164;
        case 0x237168u: goto label_237168;
        case 0x23716cu: goto label_23716c;
        case 0x237170u: goto label_237170;
        case 0x237174u: goto label_237174;
        case 0x237178u: goto label_237178;
        case 0x23717cu: goto label_23717c;
        case 0x237180u: goto label_237180;
        case 0x237184u: goto label_237184;
        case 0x237188u: goto label_237188;
        case 0x23718cu: goto label_23718c;
        case 0x237190u: goto label_237190;
        case 0x237194u: goto label_237194;
        case 0x237198u: goto label_237198;
        case 0x23719cu: goto label_23719c;
        case 0x2371a0u: goto label_2371a0;
        case 0x2371a4u: goto label_2371a4;
        case 0x2371a8u: goto label_2371a8;
        case 0x2371acu: goto label_2371ac;
        case 0x2371b0u: goto label_2371b0;
        case 0x2371b4u: goto label_2371b4;
        case 0x2371b8u: goto label_2371b8;
        case 0x2371bcu: goto label_2371bc;
        case 0x2371c0u: goto label_2371c0;
        case 0x2371c4u: goto label_2371c4;
        case 0x2371c8u: goto label_2371c8;
        case 0x2371ccu: goto label_2371cc;
        case 0x2371d0u: goto label_2371d0;
        case 0x2371d4u: goto label_2371d4;
        case 0x2371d8u: goto label_2371d8;
        case 0x2371dcu: goto label_2371dc;
        case 0x2371e0u: goto label_2371e0;
        case 0x2371e4u: goto label_2371e4;
        case 0x2371e8u: goto label_2371e8;
        case 0x2371ecu: goto label_2371ec;
        case 0x2371f0u: goto label_2371f0;
        case 0x2371f4u: goto label_2371f4;
        case 0x2371f8u: goto label_2371f8;
        case 0x2371fcu: goto label_2371fc;
        case 0x237200u: goto label_237200;
        case 0x237204u: goto label_237204;
        case 0x237208u: goto label_237208;
        case 0x23720cu: goto label_23720c;
        case 0x237210u: goto label_237210;
        case 0x237214u: goto label_237214;
        case 0x237218u: goto label_237218;
        case 0x23721cu: goto label_23721c;
        case 0x237220u: goto label_237220;
        case 0x237224u: goto label_237224;
        case 0x237228u: goto label_237228;
        case 0x23722cu: goto label_23722c;
        case 0x237230u: goto label_237230;
        case 0x237234u: goto label_237234;
        case 0x237238u: goto label_237238;
        case 0x23723cu: goto label_23723c;
        case 0x237240u: goto label_237240;
        case 0x237244u: goto label_237244;
        case 0x237248u: goto label_237248;
        case 0x23724cu: goto label_23724c;
        case 0x237250u: goto label_237250;
        case 0x237254u: goto label_237254;
        case 0x237258u: goto label_237258;
        case 0x23725cu: goto label_23725c;
        case 0x237260u: goto label_237260;
        case 0x237264u: goto label_237264;
        case 0x237268u: goto label_237268;
        case 0x23726cu: goto label_23726c;
        case 0x237270u: goto label_237270;
        case 0x237274u: goto label_237274;
        case 0x237278u: goto label_237278;
        case 0x23727cu: goto label_23727c;
        case 0x237280u: goto label_237280;
        case 0x237284u: goto label_237284;
        case 0x237288u: goto label_237288;
        case 0x23728cu: goto label_23728c;
        case 0x237290u: goto label_237290;
        case 0x237294u: goto label_237294;
        case 0x237298u: goto label_237298;
        case 0x23729cu: goto label_23729c;
        case 0x2372a0u: goto label_2372a0;
        case 0x2372a4u: goto label_2372a4;
        case 0x2372a8u: goto label_2372a8;
        case 0x2372acu: goto label_2372ac;
        case 0x2372b0u: goto label_2372b0;
        case 0x2372b4u: goto label_2372b4;
        case 0x2372b8u: goto label_2372b8;
        case 0x2372bcu: goto label_2372bc;
        case 0x2372c0u: goto label_2372c0;
        case 0x2372c4u: goto label_2372c4;
        case 0x2372c8u: goto label_2372c8;
        case 0x2372ccu: goto label_2372cc;
        case 0x2372d0u: goto label_2372d0;
        case 0x2372d4u: goto label_2372d4;
        case 0x2372d8u: goto label_2372d8;
        case 0x2372dcu: goto label_2372dc;
        case 0x2372e0u: goto label_2372e0;
        case 0x2372e4u: goto label_2372e4;
        case 0x2372e8u: goto label_2372e8;
        case 0x2372ecu: goto label_2372ec;
        case 0x2372f0u: goto label_2372f0;
        case 0x2372f4u: goto label_2372f4;
        case 0x2372f8u: goto label_2372f8;
        case 0x2372fcu: goto label_2372fc;
        case 0x237300u: goto label_237300;
        case 0x237304u: goto label_237304;
        case 0x237308u: goto label_237308;
        case 0x23730cu: goto label_23730c;
        case 0x237310u: goto label_237310;
        case 0x237314u: goto label_237314;
        case 0x237318u: goto label_237318;
        case 0x23731cu: goto label_23731c;
        case 0x237320u: goto label_237320;
        case 0x237324u: goto label_237324;
        case 0x237328u: goto label_237328;
        case 0x23732cu: goto label_23732c;
        case 0x237330u: goto label_237330;
        case 0x237334u: goto label_237334;
        case 0x237338u: goto label_237338;
        case 0x23733cu: goto label_23733c;
        case 0x237340u: goto label_237340;
        case 0x237344u: goto label_237344;
        case 0x237348u: goto label_237348;
        case 0x23734cu: goto label_23734c;
        case 0x237350u: goto label_237350;
        case 0x237354u: goto label_237354;
        case 0x237358u: goto label_237358;
        case 0x23735cu: goto label_23735c;
        case 0x237360u: goto label_237360;
        case 0x237364u: goto label_237364;
        case 0x237368u: goto label_237368;
        case 0x23736cu: goto label_23736c;
        case 0x237370u: goto label_237370;
        case 0x237374u: goto label_237374;
        case 0x237378u: goto label_237378;
        case 0x23737cu: goto label_23737c;
        case 0x237380u: goto label_237380;
        case 0x237384u: goto label_237384;
        case 0x237388u: goto label_237388;
        case 0x23738cu: goto label_23738c;
        case 0x237390u: goto label_237390;
        case 0x237394u: goto label_237394;
        case 0x237398u: goto label_237398;
        case 0x23739cu: goto label_23739c;
        case 0x2373a0u: goto label_2373a0;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373acu: goto label_2373ac;
        case 0x2373b0u: goto label_2373b0;
        case 0x2373b4u: goto label_2373b4;
        case 0x2373b8u: goto label_2373b8;
        case 0x2373bcu: goto label_2373bc;
        case 0x2373c0u: goto label_2373c0;
        case 0x2373c4u: goto label_2373c4;
        case 0x2373c8u: goto label_2373c8;
        case 0x2373ccu: goto label_2373cc;
        case 0x2373d0u: goto label_2373d0;
        case 0x2373d4u: goto label_2373d4;
        case 0x2373d8u: goto label_2373d8;
        case 0x2373dcu: goto label_2373dc;
        case 0x2373e0u: goto label_2373e0;
        case 0x2373e4u: goto label_2373e4;
        case 0x2373e8u: goto label_2373e8;
        case 0x2373ecu: goto label_2373ec;
        case 0x2373f0u: goto label_2373f0;
        case 0x2373f4u: goto label_2373f4;
        case 0x2373f8u: goto label_2373f8;
        case 0x2373fcu: goto label_2373fc;
        case 0x237400u: goto label_237400;
        case 0x237404u: goto label_237404;
        case 0x237408u: goto label_237408;
        case 0x23740cu: goto label_23740c;
        case 0x237410u: goto label_237410;
        case 0x237414u: goto label_237414;
        case 0x237418u: goto label_237418;
        case 0x23741cu: goto label_23741c;
        case 0x237420u: goto label_237420;
        case 0x237424u: goto label_237424;
        case 0x237428u: goto label_237428;
        case 0x23742cu: goto label_23742c;
        case 0x237430u: goto label_237430;
        case 0x237434u: goto label_237434;
        case 0x237438u: goto label_237438;
        case 0x23743cu: goto label_23743c;
        case 0x237440u: goto label_237440;
        case 0x237444u: goto label_237444;
        case 0x237448u: goto label_237448;
        case 0x23744cu: goto label_23744c;
        case 0x237450u: goto label_237450;
        case 0x237454u: goto label_237454;
        case 0x237458u: goto label_237458;
        case 0x23745cu: goto label_23745c;
        case 0x237460u: goto label_237460;
        case 0x237464u: goto label_237464;
        case 0x237468u: goto label_237468;
        case 0x23746cu: goto label_23746c;
        case 0x237470u: goto label_237470;
        case 0x237474u: goto label_237474;
        case 0x237478u: goto label_237478;
        case 0x23747cu: goto label_23747c;
        default: return;
    }

label_236cb0:
    if (ctx->pc == 0x236CB0u) {
        ctx->pc = 0x236CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CACu;
        // 0x236cb0: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CB4u;
        goto label_236cb4;
    }
    ctx->pc = 0x236CACu;
    SET_GPR_U32(ctx, 31, 0x236CB4u);
    ctx->pc = 0x236CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CACu;
    // 0x236cb0: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    { ctx->pc = 0x236c30; return; }
    ctx->pc = 0x236CB4u;
label_236cb4:
    // 0x236cb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236cb8:
    // 0x236cb8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236cbc:
    // 0x236cbc: 0x2450b280  addiu       $s0, $v0, -0x4D80
    ctx->pc = 0x236cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
label_236cc0:
    // 0x236cc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x236cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_236cc4:
    // 0x236cc4: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x236cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_236cc8:
    // 0x236cc8: 0x2484b2e8  addiu       $a0, $a0, -0x4D18
    ctx->pc = 0x236cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947560));
label_236ccc:
    // 0x236ccc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236cd0:
    // 0x236cd0: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x236cd0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_236cd4:
    // 0x236cd4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x236cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236cd8:
    // 0x236cd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x236cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236cdc:
    // 0x236cdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x236cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236ce0:
    // 0x236ce0: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x236ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_236ce4:
    // 0x236ce4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_236ce8:
    if (ctx->pc == 0x236CE8u) {
        ctx->pc = 0x236CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE4u;
        // 0x236ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CECu;
        goto label_236cec;
    }
    ctx->pc = 0x236CE4u;
    {
        const bool branch_taken_0x236ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CE4u;
        // 0x236ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ce4) {
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236CECu;
label_236cec:
    // 0x236cec: 0xc069e2a  jal         func_1A78A8
label_236cf0:
    if (ctx->pc == 0x236CF0u) {
        ctx->pc = 0x236CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CECu;
        // 0x236cf0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236CF4u;
        goto label_236cf4;
    }
    ctx->pc = 0x236CECu;
    SET_GPR_U32(ctx, 31, 0x236CF4u);
    ctx->pc = 0x236CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CECu;
    // 0x236cf0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x236CF4u;
label_236cf4:
    // 0x236cf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236cf8:
    // 0x236cf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_236cfc:
    if (ctx->pc == 0x236CFCu) {
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D00u;
        goto label_236d00;
    }
    ctx->pc = 0x236CF8u;
    {
        const bool branch_taken_0x236cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x236CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236CF8u;
        // 0x236cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236cf8) {
            ctx->pc = 0x236D10u;
            goto label_236d10;
        }
    }
    ctx->pc = 0x236D00u;
label_236d00:
    // 0x236d00: 0x52620006  beql        $s3, $v0, . + 4 + (0x6 << 2)
label_236d04:
    if (ctx->pc == 0x236D04u) {
        ctx->pc = 0x236D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D00u;
        // 0x236d04: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D08u;
        goto label_236d08;
    }
    ctx->pc = 0x236D00u;
    {
        const bool branch_taken_0x236d00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x236d00) {
            ctx->pc = 0x236D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236D00u;
            // 0x236d04: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236D1Cu;
            goto label_236d1c;
        }
    }
    ctx->pc = 0x236D08u;
label_236d08:
    // 0x236d08: 0x10000005  b           . + 4 + (0x5 << 2)
label_236d0c:
    if (ctx->pc == 0x236D0Cu) {
        ctx->pc = 0x236D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D08u;
        // 0x236d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D10u;
        goto label_236d10;
    }
    ctx->pc = 0x236D08u;
    {
        const bool branch_taken_0x236d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D08u;
        // 0x236d0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d08) {
            ctx->pc = 0x236D20u;
            goto label_236d20;
        }
    }
    ctx->pc = 0x236D10u;
label_236d10:
    // 0x236d10: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x236d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_236d14:
    // 0x236d14: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x236d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_236d18:
    // 0x236d18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x236d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_236d1c:
    // 0x236d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236d20:
    // 0x236d20: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x236d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_236d24:
    // 0x236d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236d28:
    // 0x236d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236d2c:
    // 0x236d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_236d30:
    // 0x236d30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x236d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236d34:
    // 0x236d34: 0x3e00008  jr          $ra
label_236d38:
    if (ctx->pc == 0x236D38u) {
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D34u;
        // 0x236d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D3Cu;
        goto label_236d3c;
    }
    ctx->pc = 0x236D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D34u;
        // 0x236d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D3Cu;
label_236d3c:
    // 0x236d3c: 0x0  nop
    ctx->pc = 0x236d3cu;
    // NOP
label_236d40:
    // 0x236d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236d44:
    // 0x236d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236d48:
    // 0x236d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236d4c:
    // 0x236d4c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236d50:
    // 0x236d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d54:
    // 0x236d54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236d58:
    // 0x236d58: 0xc08dbf8  jal         func_236FE0
label_236d5c:
    if (ctx->pc == 0x236D5Cu) {
        ctx->pc = 0x236D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D58u;
        // 0x236d5c: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D60u;
        goto label_236d60;
    }
    ctx->pc = 0x236D58u;
    SET_GPR_U32(ctx, 31, 0x236D60u);
    ctx->pc = 0x236D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D58u;
    // 0x236d5c: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236D60u;
label_236d60:
    // 0x236d60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_236d64:
    if (ctx->pc == 0x236D64u) {
        ctx->pc = 0x236D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D60u;
        // 0x236d64: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D68u;
        goto label_236d68;
    }
    ctx->pc = 0x236D60u;
    {
        const bool branch_taken_0x236d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D60u;
        // 0x236d64: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d60) {
            ctx->pc = 0x236D8Cu;
            goto label_236d8c;
        }
    }
    ctx->pc = 0x236D68u;
label_236d68:
    // 0x236d68: 0xc08db0c  jal         func_236C30
label_236d6c:
    if (ctx->pc == 0x236D6Cu) {
        ctx->pc = 0x236D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D68u;
        // 0x236d6c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D70u;
        goto label_236d70;
    }
    ctx->pc = 0x236D68u;
    SET_GPR_U32(ctx, 31, 0x236D70u);
    ctx->pc = 0x236D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D68u;
    // 0x236d6c: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    { ctx->pc = 0x236c30; return; }
    ctx->pc = 0x236D70u;
label_236d70:
    // 0x236d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236d74:
    // 0x236d74: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_236d78:
    if (ctx->pc == 0x236D78u) {
        ctx->pc = 0x236D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D74u;
        // 0x236d78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D7Cu;
        goto label_236d7c;
    }
    ctx->pc = 0x236D74u;
    {
        const bool branch_taken_0x236d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D74u;
        // 0x236d78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236d74) {
            ctx->pc = 0x236D80u;
            goto label_236d80;
        }
    }
    ctx->pc = 0x236D7Cu;
label_236d7c:
    // 0x236d7c: 0x8c50b280  lw          $s0, -0x4D80($v0)
    ctx->pc = 0x236d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947456)));
label_236d80:
    // 0x236d80: 0xc069210  jal         func_1A4840
label_236d84:
    if (ctx->pc == 0x236D84u) {
        ctx->pc = 0x236D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D80u;
        // 0x236d84: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D88u;
        goto label_236d88;
    }
    ctx->pc = 0x236D80u;
    SET_GPR_U32(ctx, 31, 0x236D88u);
    ctx->pc = 0x236D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236D80u;
    // 0x236d84: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236D88u;
label_236d88:
    // 0x236d88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236d8c:
    // 0x236d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236d90:
    // 0x236d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236d94:
    // 0x236d94: 0x3e00008  jr          $ra
label_236d98:
    if (ctx->pc == 0x236D98u) {
        ctx->pc = 0x236D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D94u;
        // 0x236d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236D9Cu;
        goto label_236d9c;
    }
    ctx->pc = 0x236D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236D94u;
        // 0x236d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236D9Cu;
label_236d9c:
    // 0x236d9c: 0x0  nop
    ctx->pc = 0x236d9cu;
    // NOP
label_236da0:
    // 0x236da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236da4:
    // 0x236da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236da8:
    // 0x236da8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236dac:
    // 0x236dac: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236db0:
    // 0x236db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236db4:
    // 0x236db4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x236db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236db8:
    // 0x236db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236dbc:
    // 0x236dbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236dc0:
    // 0x236dc0: 0xc08dbf8  jal         func_236FE0
label_236dc4:
    if (ctx->pc == 0x236DC4u) {
        ctx->pc = 0x236DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DC0u;
        // 0x236dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DC8u;
        goto label_236dc8;
    }
    ctx->pc = 0x236DC0u;
    SET_GPR_U32(ctx, 31, 0x236DC8u);
    ctx->pc = 0x236DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DC0u;
    // 0x236dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236DC8u;
label_236dc8:
    // 0x236dc8: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x236dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_236dcc:
    // 0x236dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236dd0:
    // 0x236dd0: 0xc08db22  jal         func_236C88
label_236dd4:
    if (ctx->pc == 0x236DD4u) {
        ctx->pc = 0x236DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DD0u;
        // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DD8u;
        goto label_236dd8;
    }
    ctx->pc = 0x236DD0u;
    SET_GPR_U32(ctx, 31, 0x236DD8u);
    ctx->pc = 0x236DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DD0u;
    // 0x236dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236DD8u;
label_236dd8:
    // 0x236dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ddc:
    // 0x236ddc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236de0:
    // 0x236de0: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236de4:
    // 0x236de4: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x236de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_236de8:
    // 0x236de8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x236de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_236dec:
    // 0x236dec: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x236decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_236df0:
    // 0x236df0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x236df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_236df4:
    // 0x236df4: 0xc069210  jal         func_1A4840
label_236df8:
    if (ctx->pc == 0x236DF8u) {
        ctx->pc = 0x236DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DF4u;
        // 0x236df8: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236DFCu;
        goto label_236dfc;
    }
    ctx->pc = 0x236DF4u;
    SET_GPR_U32(ctx, 31, 0x236DFCu);
    ctx->pc = 0x236DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DF4u;
    // 0x236df8: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236DFCu;
label_236dfc:
    // 0x236dfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236e00:
    // 0x236e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236e04:
    // 0x236e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e08:
    // 0x236e08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236e0c:
    // 0x236e0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236e10:
    // 0x236e10: 0x3e00008  jr          $ra
label_236e14:
    if (ctx->pc == 0x236E14u) {
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E18u;
        goto label_236e18;
    }
    ctx->pc = 0x236E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E10u;
        // 0x236e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E18u;
label_236e18:
    // 0x236e18: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e1c:
    // 0x236e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236e20:
    // 0x236e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236e24:
    // 0x236e24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236e28:
    // 0x236e28: 0xc08dbf8  jal         func_236FE0
label_236e2c:
    if (ctx->pc == 0x236E2Cu) {
        ctx->pc = 0x236E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E28u;
        // 0x236e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E30u;
        goto label_236e30;
    }
    ctx->pc = 0x236E28u;
    SET_GPR_U32(ctx, 31, 0x236E30u);
    ctx->pc = 0x236E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E28u;
    // 0x236e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236E30u;
label_236e30:
    // 0x236e30: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x236e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
label_236e34:
    // 0x236e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236e38:
    // 0x236e38: 0xc08db22  jal         func_236C88
label_236e3c:
    if (ctx->pc == 0x236E3Cu) {
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E38u;
        // 0x236e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E40u;
        goto label_236e40;
    }
    ctx->pc = 0x236E38u;
    SET_GPR_U32(ctx, 31, 0x236E40u);
    ctx->pc = 0x236E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E38u;
    // 0x236e3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236E40u;
label_236e40:
    // 0x236e40: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e44:
    // 0x236e44: 0xc069210  jal         func_1A4840
label_236e48:
    if (ctx->pc == 0x236E48u) {
        ctx->pc = 0x236E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E44u;
        // 0x236e48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E4Cu;
        goto label_236e4c;
    }
    ctx->pc = 0x236E44u;
    SET_GPR_U32(ctx, 31, 0x236E4Cu);
    ctx->pc = 0x236E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E44u;
    // 0x236e48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236E4Cu;
label_236e4c:
    // 0x236e4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236e50:
    // 0x236e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236e54:
    // 0x236e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e58:
    // 0x236e58: 0x3e00008  jr          $ra
label_236e5c:
    if (ctx->pc == 0x236E5Cu) {
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E60u;
        goto label_236e60;
    }
    ctx->pc = 0x236E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E58u;
        // 0x236e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E60u;
label_236e60:
    // 0x236e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236e64:
    // 0x236e64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236e68:
    // 0x236e68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236e6c:
    // 0x236e6c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236e70:
    // 0x236e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236e74:
    // 0x236e74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236e78:
    // 0x236e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236e7c:
    // 0x236e7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x236e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_236e80:
    // 0x236e80: 0xc08dbf8  jal         func_236FE0
label_236e84:
    if (ctx->pc == 0x236E84u) {
        ctx->pc = 0x236E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E80u;
        // 0x236e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E88u;
        goto label_236e88;
    }
    ctx->pc = 0x236E80u;
    SET_GPR_U32(ctx, 31, 0x236E88u);
    ctx->pc = 0x236E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E80u;
    // 0x236e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236E88u;
label_236e88:
    // 0x236e88: 0xc08db0c  jal         func_236C30
label_236e8c:
    if (ctx->pc == 0x236E8Cu) {
        ctx->pc = 0x236E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E88u;
        // 0x236e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236E90u;
        goto label_236e90;
    }
    ctx->pc = 0x236E88u;
    SET_GPR_U32(ctx, 31, 0x236E90u);
    ctx->pc = 0x236E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236E88u;
    // 0x236e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    { ctx->pc = 0x236c30; return; }
    ctx->pc = 0x236E90u;
label_236e90:
    // 0x236e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236e94:
    // 0x236e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236e98:
    // 0x236e98: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236e9c:
    // 0x236e9c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x236e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_236ea0:
    // 0x236ea0: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_236ea4:
    // 0x236ea4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236ea8:
    if (ctx->pc == 0x236EA8u) {
        ctx->pc = 0x236EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA4u;
        // 0x236ea8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EACu;
        goto label_236eac;
    }
    ctx->pc = 0x236EA4u;
    {
        const bool branch_taken_0x236ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EA4u;
        // 0x236ea8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ea4) {
            ctx->pc = 0x236EBCu;
            goto label_236ebc;
        }
    }
    ctx->pc = 0x236EACu;
label_236eac:
    // 0x236eac: 0xac5100c4  sw          $s1, 0xC4($v0)
    ctx->pc = 0x236eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
label_236eb0:
    // 0x236eb0: 0xc08db22  jal         func_236C88
label_236eb4:
    if (ctx->pc == 0x236EB4u) {
        ctx->pc = 0x236EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EB0u;
        // 0x236eb4: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EB8u;
        goto label_236eb8;
    }
    ctx->pc = 0x236EB0u;
    SET_GPR_U32(ctx, 31, 0x236EB8u);
    ctx->pc = 0x236EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EB0u;
    // 0x236eb4: 0xac5200c0  sw          $s2, 0xC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236EB8u;
label_236eb8:
    // 0x236eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236ebc:
    // 0x236ebc: 0xc069210  jal         func_1A4840
label_236ec0:
    if (ctx->pc == 0x236EC0u) {
        ctx->pc = 0x236EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EBCu;
        // 0x236ec0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EC4u;
        goto label_236ec4;
    }
    ctx->pc = 0x236EBCu;
    SET_GPR_U32(ctx, 31, 0x236EC4u);
    ctx->pc = 0x236EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EBCu;
    // 0x236ec0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236ec8:
    // 0x236ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236ecc:
    // 0x236ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236ed0:
    // 0x236ed0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236ed4:
    // 0x236ed4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_236ed8:
    // 0x236ed8: 0x3e00008  jr          $ra
label_236edc:
    if (ctx->pc == 0x236EDCu) {
        ctx->pc = 0x236EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ED8u;
        // 0x236edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EE0u;
        goto label_236ee0;
    }
    ctx->pc = 0x236ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ED8u;
        // 0x236edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236EE0u;
label_236ee0:
    // 0x236ee0: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236ee4:
    // 0x236ee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236ee8:
    // 0x236ee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236eec:
    // 0x236eec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236ef0:
    // 0x236ef0: 0xc08dbf8  jal         func_236FE0
label_236ef4:
    if (ctx->pc == 0x236EF4u) {
        ctx->pc = 0x236EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236EF0u;
        // 0x236ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236EF8u;
        goto label_236ef8;
    }
    ctx->pc = 0x236EF0u;
    SET_GPR_U32(ctx, 31, 0x236EF8u);
    ctx->pc = 0x236EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236EF0u;
    // 0x236ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236EF8u;
label_236ef8:
    // 0x236ef8: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x236ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_236efc:
    // 0x236efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f00:
    // 0x236f00: 0xc08db22  jal         func_236C88
label_236f04:
    if (ctx->pc == 0x236F04u) {
        ctx->pc = 0x236F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F00u;
        // 0x236f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F08u;
        goto label_236f08;
    }
    ctx->pc = 0x236F00u;
    SET_GPR_U32(ctx, 31, 0x236F08u);
    ctx->pc = 0x236F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F00u;
    // 0x236f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f0c:
    // 0x236f0c: 0xc069210  jal         func_1A4840
label_236f10:
    if (ctx->pc == 0x236F10u) {
        ctx->pc = 0x236F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F0Cu;
        // 0x236f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F14u;
        goto label_236f14;
    }
    ctx->pc = 0x236F0Cu;
    SET_GPR_U32(ctx, 31, 0x236F14u);
    ctx->pc = 0x236F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F0Cu;
    // 0x236f10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236F14u;
label_236f14:
    // 0x236f14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236f18:
    // 0x236f18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236f1c:
    // 0x236f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236f20:
    // 0x236f20: 0x3e00008  jr          $ra
label_236f24:
    if (ctx->pc == 0x236F24u) {
        ctx->pc = 0x236F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F20u;
        // 0x236f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F28u;
        goto label_236f28;
    }
    ctx->pc = 0x236F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F20u;
        // 0x236f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236F28u;
label_236f28:
    // 0x236f28: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f2c:
    // 0x236f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236f30:
    // 0x236f30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236f34:
    // 0x236f34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_236f38:
    // 0x236f38: 0xc08dbf8  jal         func_236FE0
label_236f3c:
    if (ctx->pc == 0x236F3Cu) {
        ctx->pc = 0x236F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F38u;
        // 0x236f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F40u;
        goto label_236f40;
    }
    ctx->pc = 0x236F38u;
    SET_GPR_U32(ctx, 31, 0x236F40u);
    ctx->pc = 0x236F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F38u;
    // 0x236f3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236F40u;
label_236f40:
    // 0x236f40: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x236f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_236f44:
    // 0x236f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236f48:
    // 0x236f48: 0xc08db22  jal         func_236C88
label_236f4c:
    if (ctx->pc == 0x236F4Cu) {
        ctx->pc = 0x236F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F48u;
        // 0x236f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F50u;
        goto label_236f50;
    }
    ctx->pc = 0x236F48u;
    SET_GPR_U32(ctx, 31, 0x236F50u);
    ctx->pc = 0x236F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F48u;
    // 0x236f4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236F50u;
label_236f50:
    // 0x236f50: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f54:
    // 0x236f54: 0xc069210  jal         func_1A4840
label_236f58:
    if (ctx->pc == 0x236F58u) {
        ctx->pc = 0x236F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F54u;
        // 0x236f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F5Cu;
        goto label_236f5c;
    }
    ctx->pc = 0x236F54u;
    SET_GPR_U32(ctx, 31, 0x236F5Cu);
    ctx->pc = 0x236F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F54u;
    // 0x236f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236F5Cu;
label_236f5c:
    // 0x236f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236f60:
    // 0x236f60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236f64:
    // 0x236f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236f68:
    // 0x236f68: 0x3e00008  jr          $ra
label_236f6c:
    if (ctx->pc == 0x236F6Cu) {
        ctx->pc = 0x236F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F68u;
        // 0x236f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F70u;
        goto label_236f70;
    }
    ctx->pc = 0x236F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F68u;
        // 0x236f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236F70u;
label_236f70:
    // 0x236f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236f74:
    // 0x236f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236f78:
    // 0x236f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236f7c:
    // 0x236f7c: 0x8f8482f4  lw          $a0, -0x7D0C($gp)
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
label_236f80:
    // 0x236f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236f84:
    // 0x236f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236f88:
    // 0x236f88: 0xc08dbf8  jal         func_236FE0
label_236f8c:
    if (ctx->pc == 0x236F8Cu) {
        ctx->pc = 0x236F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F88u;
        // 0x236f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F90u;
        goto label_236f90;
    }
    ctx->pc = 0x236F88u;
    SET_GPR_U32(ctx, 31, 0x236F90u);
    ctx->pc = 0x236F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F88u;
    // 0x236f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    goto label_236fe0;
    ctx->pc = 0x236F90u;
label_236f90:
    // 0x236f90: 0xc08db0c  jal         func_236C30
label_236f94:
    if (ctx->pc == 0x236F94u) {
        ctx->pc = 0x236F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F90u;
        // 0x236f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F98u;
        goto label_236f98;
    }
    ctx->pc = 0x236F90u;
    SET_GPR_U32(ctx, 31, 0x236F98u);
    ctx->pc = 0x236F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F90u;
    // 0x236f94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C30u;
    { ctx->pc = 0x236c30; return; }
    ctx->pc = 0x236F98u;
label_236f98:
    // 0x236f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x236f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_236f9c:
    // 0x236f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fa0:
    // 0x236fa0: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x236fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_236fa4:
    // 0x236fa4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_236fa8:
    if (ctx->pc == 0x236FA8u) {
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FACu;
        goto label_236fac;
    }
    ctx->pc = 0x236FA4u;
    {
        const bool branch_taken_0x236fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA4u;
        // 0x236fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fa4) {
            ctx->pc = 0x236FBCu;
            goto label_236fbc;
        }
    }
    ctx->pc = 0x236FACu;
label_236fac:
    // 0x236fac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x236facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_236fb0:
    // 0x236fb0: 0xc08db22  jal         func_236C88
label_236fb4:
    if (ctx->pc == 0x236FB4u) {
        ctx->pc = 0x236FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FB0u;
        // 0x236fb4: 0xac51b280  sw          $s1, -0x4D80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947456), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FB8u;
        goto label_236fb8;
    }
    ctx->pc = 0x236FB0u;
    SET_GPR_U32(ctx, 31, 0x236FB8u);
    ctx->pc = 0x236FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FB0u;
    // 0x236fb4: 0xac51b280  sw          $s1, -0x4D80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947456), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C88u;
    { ctx->pc = 0x236c88; return; }
    ctx->pc = 0x236FB8u;
label_236fb8:
    // 0x236fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236fbc:
    // 0x236fbc: 0xc069210  jal         func_1A4840
label_236fc0:
    if (ctx->pc == 0x236FC0u) {
        ctx->pc = 0x236FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FBCu;
        // 0x236fc0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FC4u;
        goto label_236fc4;
    }
    ctx->pc = 0x236FBCu;
    SET_GPR_U32(ctx, 31, 0x236FC4u);
    ctx->pc = 0x236FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FBCu;
    // 0x236fc0: 0x8f8482f4  lw          $a0, -0x7D0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x236FC4u;
label_236fc4:
    // 0x236fc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_236fc8:
    // 0x236fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236fcc:
    // 0x236fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236fd0:
    // 0x236fd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236fd4:
    // 0x236fd4: 0x3e00008  jr          $ra
label_236fd8:
    if (ctx->pc == 0x236FD8u) {
        ctx->pc = 0x236FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FD4u;
        // 0x236fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FDCu;
        goto label_236fdc;
    }
    ctx->pc = 0x236FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FD4u;
        // 0x236fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FDCu;
label_236fdc:
    // 0x236fdc: 0x0  nop
    ctx->pc = 0x236fdcu;
    // NOP
label_236fe0:
    // 0x236fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_236fe4:
    // 0x236fe4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_236fe8:
    // 0x236fe8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_236fec:
    if (ctx->pc == 0x236FECu) {
        ctx->pc = 0x236FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE8u;
        // 0x236fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FF0u;
        goto label_236ff0;
    }
    ctx->pc = 0x236FE8u;
    {
        const bool branch_taken_0x236fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FE8u;
        // 0x236fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236fe8) {
            ctx->pc = 0x237000u;
            goto label_237000;
        }
    }
    ctx->pc = 0x236FF0u;
label_236ff0:
    // 0x236ff0: 0xc069218  jal         func_1A4860
label_236ff4:
    if (ctx->pc == 0x236FF4u) {
        ctx->pc = 0x236FF8u;
        goto label_236ff8;
    }
    ctx->pc = 0x236FF0u;
    SET_GPR_U32(ctx, 31, 0x236FF8u);
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x236FF8u;
label_236ff8:
    // 0x236ff8: 0x10000006  b           . + 4 + (0x6 << 2)
label_236ffc:
    if (ctx->pc == 0x236FFCu) {
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237000u;
        goto label_237000;
    }
    ctx->pc = 0x236FF8u;
    {
        const bool branch_taken_0x236ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF8u;
        // 0x236ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ff8) {
            ctx->pc = 0x237014u;
            goto label_237014;
        }
    }
    ctx->pc = 0x237000u;
label_237000:
    // 0x237000: 0xc06921c  jal         func_1A4870
label_237004:
    if (ctx->pc == 0x237004u) {
        ctx->pc = 0x237008u;
        goto label_237008;
    }
    ctx->pc = 0x237000u;
    SET_GPR_U32(ctx, 31, 0x237008u);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x237008u;
label_237008:
    // 0x237008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23700c:
    // 0x23700c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
label_237010:
    if (ctx->pc == 0x237010u) {
        ctx->pc = 0x237010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23700Cu;
        // 0x237010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237014u;
        goto label_237014;
    }
    ctx->pc = 0x23700Cu;
    {
        const bool branch_taken_0x23700c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23700c) {
            ctx->pc = 0x237010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23700Cu;
            // 0x237010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237014u;
            goto label_237014;
        }
    }
    ctx->pc = 0x237014u;
label_237014:
    // 0x237014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237018:
    // 0x237018: 0x3e00008  jr          $ra
label_23701c:
    if (ctx->pc == 0x23701Cu) {
        ctx->pc = 0x23701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237018u;
        // 0x23701c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237020u;
        goto label_237020;
    }
    ctx->pc = 0x237018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237018u;
        // 0x23701c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237020u;
label_237020:
    // 0x237020: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
label_237024:
    if (ctx->pc == 0x237024u) {
        ctx->pc = 0x237024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237020u;
        // 0x237024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237028u;
        goto label_237028;
    }
    ctx->pc = 0x237020u;
    {
        const bool branch_taken_0x237020 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x237024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237020u;
        // 0x237024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237020) {
            ctx->pc = 0x237078u;
            goto label_237078;
        }
    }
    ctx->pc = 0x237028u;
label_237028:
    // 0x237028: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23702c:
    // 0x23702c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_237030:
    // 0x237030: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x237030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_237034:
    // 0x237034: 0x0  nop
    ctx->pc = 0x237034u;
    // NOP
label_237038:
    // 0x237038: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23703c:
    // 0x23703c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x23703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_237040:
    // 0x237040: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_237044:
    if (ctx->pc == 0x237044u) {
        ctx->pc = 0x237048u;
        goto label_237048;
    }
    ctx->pc = 0x237040u;
    {
        const bool branch_taken_0x237040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237040) {
            ctx->pc = 0x237070u;
            goto label_237070;
        }
    }
    ctx->pc = 0x237048u;
label_237048:
    // 0x237048: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x237048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23704c:
    // 0x23704c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_237050:
    // 0x237050: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x237050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_237054:
    // 0x237054: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x237054u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_237058:
    // 0x237058: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_23705c:
    if (ctx->pc == 0x23705Cu) {
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237060u;
        goto label_237060;
    }
    ctx->pc = 0x237058u;
    {
        const bool branch_taken_0x237058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237058u;
        // 0x23705c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237058) {
            ctx->pc = 0x237038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237038;
        }
    }
    ctx->pc = 0x237060u;
label_237060:
    // 0x237060: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x237060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_237064:
    // 0x237064: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x237064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237068:
    // 0x237068: 0x3e00008  jr          $ra
label_23706c:
    if (ctx->pc == 0x23706Cu) {
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237070u;
        goto label_237070;
    }
    ctx->pc = 0x237068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237068u;
        // 0x23706c: 0xe3100a  movz        $v0, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237070u;
label_237070:
    // 0x237070: 0x3e00008  jr          $ra
label_237074:
    if (ctx->pc == 0x237074u) {
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237078u;
        goto label_237078;
    }
    ctx->pc = 0x237070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237070u;
        // 0x237074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237078u;
label_237078:
    // 0x237078: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x237078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_23707c:
    // 0x23707c: 0x3e00008  jr          $ra
label_237080:
    if (ctx->pc == 0x237080u) {
        ctx->pc = 0x237080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23707Cu;
        // 0x237080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237084u;
        goto label_237084;
    }
    ctx->pc = 0x23707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23707Cu;
        // 0x237080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237084u;
label_237084:
    // 0x237084: 0x0  nop
    ctx->pc = 0x237084u;
    // NOP
label_237088:
    // 0x237088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23708c:
    // 0x23708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237090:
    // 0x237090: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x237090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_237094:
    // 0x237094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237098:
    // 0x237098: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x237098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23709c:
    // 0x23709c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2370a0:
    // 0x2370a0: 0xc08e9ac  jal         func_23A6B0
label_2370a4:
    if (ctx->pc == 0x2370A4u) {
        ctx->pc = 0x2370A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370A0u;
        // 0x2370a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370A8u;
        goto label_2370a8;
    }
    ctx->pc = 0x2370A0u;
    SET_GPR_U32(ctx, 31, 0x2370A8u);
    ctx->pc = 0x2370A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370A0u;
    // 0x2370a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x2370A8u;
label_2370a8:
    // 0x2370a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2370a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2370ac:
    // 0x2370ac: 0xc08dc32  jal         func_2370C8
label_2370b0:
    if (ctx->pc == 0x2370B0u) {
        ctx->pc = 0x2370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ACu;
        // 0x2370b0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370B4u;
        goto label_2370b4;
    }
    ctx->pc = 0x2370ACu;
    SET_GPR_U32(ctx, 31, 0x2370B4u);
    ctx->pc = 0x2370B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370ACu;
    // 0x2370b0: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370C8u;
    goto label_2370c8;
    ctx->pc = 0x2370B4u;
label_2370b4:
    // 0x2370b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2370b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2370b8:
    // 0x2370b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2370b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2370bc:
    // 0x2370bc: 0x3e00008  jr          $ra
label_2370c0:
    if (ctx->pc == 0x2370C0u) {
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C4u;
        goto label_2370c4;
    }
    ctx->pc = 0x2370BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370BCu;
        // 0x2370c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2370BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2370C4u;
label_2370c4:
    // 0x2370c4: 0x0  nop
    ctx->pc = 0x2370c4u;
    // NOP
label_2370c8:
    // 0x2370c8: 0x8f838300  lw          $v1, -0x7D00($gp)
    ctx->pc = 0x2370c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_2370cc:
    // 0x2370cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2370ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2370d0:
    // 0x2370d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2370d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2370d4:
    // 0x2370d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2370d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2370d8:
    // 0x2370d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2370d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2370dc:
    // 0x2370dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2370e0:
    if (ctx->pc == 0x2370E0u) {
        ctx->pc = 0x2370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370DCu;
        // 0x2370e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370E4u;
        goto label_2370e4;
    }
    ctx->pc = 0x2370DCu;
    {
        const bool branch_taken_0x2370dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370DCu;
        // 0x2370e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370dc) {
            ctx->pc = 0x237104u;
            goto label_237104;
        }
    }
    ctx->pc = 0x2370E4u;
label_2370e4:
    // 0x2370e4: 0xc08d1d8  jal         func_234760
label_2370e8:
    if (ctx->pc == 0x2370E8u) {
        ctx->pc = 0x2370ECu;
        goto label_2370ec;
    }
    ctx->pc = 0x2370E4u;
    SET_GPR_U32(ctx, 31, 0x2370ECu);
    ctx->pc = 0x234760u;
    { ctx->pc = 0x234760; return; }
    ctx->pc = 0x2370ECu;
label_2370ec:
    // 0x2370ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2370f0:
    if (ctx->pc == 0x2370F0u) {
        ctx->pc = 0x2370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ECu;
        // 0x2370f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370F4u;
        goto label_2370f4;
    }
    ctx->pc = 0x2370ECu;
    {
        const bool branch_taken_0x2370ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2370F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370ECu;
        // 0x2370f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2370ec) {
            ctx->pc = 0x2370FCu;
            goto label_2370fc;
        }
    }
    ctx->pc = 0x2370F4u;
label_2370f4:
    // 0x2370f4: 0xc08d786  jal         func_235E18
label_2370f8:
    if (ctx->pc == 0x2370F8u) {
        ctx->pc = 0x2370FCu;
        goto label_2370fc;
    }
    ctx->pc = 0x2370F4u;
    SET_GPR_U32(ctx, 31, 0x2370FCu);
    ctx->pc = 0x235E18u;
    { ctx->pc = 0x235e18; return; }
    ctx->pc = 0x2370FCu;
label_2370fc:
    // 0x2370fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237100:
    // 0x237100: 0xaf838300  sw          $v1, -0x7D00($gp)
    ctx->pc = 0x237100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
label_237104:
    // 0x237104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237108:
    // 0x237108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23710c:
    // 0x23710c: 0x3e00008  jr          $ra
label_237110:
    if (ctx->pc == 0x237110u) {
        ctx->pc = 0x237110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23710Cu;
        // 0x237110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237114u;
        goto label_237114;
    }
    ctx->pc = 0x23710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23710Cu;
        // 0x237110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237114u;
label_237114:
    // 0x237114: 0x0  nop
    ctx->pc = 0x237114u;
    // NOP
label_237118:
    // 0x237118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23711c:
    // 0x23711c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237120:
    // 0x237120: 0xc08f1ac  jal         func_23C6B0
label_237124:
    if (ctx->pc == 0x237124u) {
        ctx->pc = 0x237124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237120u;
        // 0x237124: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237128u;
        goto label_237128;
    }
    ctx->pc = 0x237120u;
    SET_GPR_U32(ctx, 31, 0x237128u);
    ctx->pc = 0x237124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237120u;
    // 0x237124: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C6B0u;
    { ctx->pc = 0x23c6b0; return; }
    ctx->pc = 0x237128u;
label_237128:
    // 0x237128: 0xc04002e  jal         func_1000B8
label_23712c:
    if (ctx->pc == 0x23712Cu) {
        ctx->pc = 0x23712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237128u;
        // 0x23712c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237130u;
        goto label_237130;
    }
    ctx->pc = 0x237128u;
    SET_GPR_U32(ctx, 31, 0x237130u);
    ctx->pc = 0x23712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237128u;
    // 0x23712c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000B8u, 0x237128u, 0x237130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237130u;
label_237130:
    // 0x237130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_237134:
    // 0x237134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237138:
    // 0x237138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23713c:
    // 0x23713c: 0xc08f5fc  jal         func_23D7F0
label_237140:
    if (ctx->pc == 0x237140u) {
        ctx->pc = 0x237140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23713Cu;
        // 0x237140: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237144u;
        goto label_237144;
    }
    ctx->pc = 0x23713Cu;
    SET_GPR_U32(ctx, 31, 0x237144u);
    ctx->pc = 0x237140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23713Cu;
    // 0x237140: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D7F0u;
    { ctx->pc = 0x23d7f0; return; }
    ctx->pc = 0x237144u;
label_237144:
    // 0x237144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237148:
    // 0x237148: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23714c:
    // 0x23714c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23714cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_237150:
    // 0x237150: 0x3e00008  jr          $ra
label_237154:
    if (ctx->pc == 0x237154u) {
        ctx->pc = 0x237154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237150u;
        // 0x237154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237158u;
        goto label_237158;
    }
    ctx->pc = 0x237150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237150u;
        // 0x237154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237158u;
label_237158:
    // 0x237158: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_23715c:
    if (ctx->pc == 0x23715Cu) {
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237160u;
        goto label_237160;
    }
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237158) {
            ctx->pc = 0x237184u;
            goto label_237184;
        }
    }
    ctx->pc = 0x237160u;
label_237160:
    // 0x237160: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237164:
    // 0x237164: 0x0  nop
    ctx->pc = 0x237164u;
    // NOP
label_237168:
    // 0x237168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23716c:
    // 0x23716c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23716cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_237170:
    // 0x237170: 0x0  nop
    ctx->pc = 0x237170u;
    // NOP
label_237174:
    // 0x237174: 0x0  nop
    ctx->pc = 0x237174u;
    // NOP
label_237178:
    // 0x237178: 0x0  nop
    ctx->pc = 0x237178u;
    // NOP
label_23717c:
    // 0x23717c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_237180:
    if (ctx->pc == 0x237180u) {
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237184u;
        goto label_237184;
    }
    ctx->pc = 0x23717Cu;
    {
        const bool branch_taken_0x23717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23717c) {
            ctx->pc = 0x237168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237168;
        }
    }
    ctx->pc = 0x237184u;
label_237184:
    // 0x237184: 0x3e00008  jr          $ra
label_237188:
    if (ctx->pc == 0x237188u) {
        ctx->pc = 0x23718Cu;
        goto label_23718c;
    }
    ctx->pc = 0x237184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23718Cu;
label_23718c:
    // 0x23718c: 0x0  nop
    ctx->pc = 0x23718cu;
    // NOP
label_237190:
    // 0x237190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_237194:
    // 0x237194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237198:
    // 0x237198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23719c:
    // 0x23719c: 0xc08e708  jal         func_239C20
label_2371a0:
    if (ctx->pc == 0x2371A0u) {
        ctx->pc = 0x2371A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23719Cu;
        // 0x2371a0: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371A4u;
        goto label_2371a4;
    }
    ctx->pc = 0x23719Cu;
    SET_GPR_U32(ctx, 31, 0x2371A4u);
    ctx->pc = 0x2371A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23719Cu;
    // 0x2371a0: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x2371A4u;
label_2371a4:
    // 0x2371a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2371a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2371a8:
    // 0x2371a8: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2371ac:
    if (ctx->pc == 0x2371ACu) {
        ctx->pc = 0x2371ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371A8u;
        // 0x2371ac: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371B0u;
        goto label_2371b0;
    }
    ctx->pc = 0x2371A8u;
    {
        const bool branch_taken_0x2371a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371A8u;
        // 0x2371ac: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371a8) {
            ctx->pc = 0x237234u;
            goto label_237234;
        }
    }
    ctx->pc = 0x2371B0u;
label_2371b0:
    // 0x2371b0: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x2371b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_2371b4:
    // 0x2371b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2371b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2371b8:
    // 0x2371b8: 0x2447fffc  addiu       $a3, $v0, -0x4
    ctx->pc = 0x2371b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2371bc:
    // 0x2371bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2371bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2371c0:
    // 0x2371c0: 0x2ce20025  sltiu       $v0, $a3, 0x25
    ctx->pc = 0x2371c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_2371c4:
    // 0x2371c4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2371c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2371c8:
    // 0x2371c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2371c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2371cc:
    // 0x2371cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2371d0:
    if (ctx->pc == 0x2371D0u) {
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371CCu;
        // 0x2371d0: 0x2ce80014  sltiu       $t0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371D4u;
        goto label_2371d4;
    }
    ctx->pc = 0x2371CCu;
    {
        const bool branch_taken_0x2371cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2371D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371CCu;
        // 0x2371d0: 0x2ce80014  sltiu       $t0, $a3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371cc) {
            ctx->pc = 0x237228u;
            goto label_237228;
        }
    }
    ctx->pc = 0x2371D4u;
label_2371d4:
    // 0x2371d4: 0x1500000e  bnez        $t0, . + 4 + (0xE << 2)
label_2371d8:
    if (ctx->pc == 0x2371D8u) {
        ctx->pc = 0x2371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D4u;
        // 0x2371d8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371DCu;
        goto label_2371dc;
    }
    ctx->pc = 0x2371D4u;
    {
        const bool branch_taken_0x2371d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371D4u;
        // 0x2371d8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371d4) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x2371DCu;
label_2371dc:
    // 0x2371dc: 0x2ce2001c  sltiu       $v0, $a3, 0x1C
    ctx->pc = 0x2371dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
label_2371e0:
    // 0x2371e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2371e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2371e4:
    // 0x2371e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2371e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2371e8:
    // 0x2371e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2371ec:
    if (ctx->pc == 0x2371ECu) {
        ctx->pc = 0x2371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E8u;
        // 0x2371ec: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2371F0u;
        goto label_2371f0;
    }
    ctx->pc = 0x2371E8u;
    {
        const bool branch_taken_0x2371e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2371ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371E8u;
        // 0x2371ec: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371e8) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x2371F0u;
label_2371f0:
    // 0x2371f0: 0x2ce20024  sltiu       $v0, $a3, 0x24
    ctx->pc = 0x2371f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_2371f4:
    // 0x2371f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2371f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2371f8:
    // 0x2371f8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2371fc:
    // 0x2371fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_237200:
    if (ctx->pc == 0x237200u) {
        ctx->pc = 0x237200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371FCu;
        // 0x237200: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237204u;
        goto label_237204;
    }
    ctx->pc = 0x2371FCu;
    {
        const bool branch_taken_0x2371fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2371FCu;
        // 0x237200: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2371fc) {
            ctx->pc = 0x237210u;
            goto label_237210;
        }
    }
    ctx->pc = 0x237204u;
label_237204:
    // 0x237204: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x237204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_237208:
    // 0x237208: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x237208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_23720c:
    // 0x23720c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x23720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_237210:
    // 0x237210: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x237210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_237214:
    // 0x237214: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x237214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_237218:
    // 0x237218: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x237218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23721c:
    // 0x23721c: 0x10000004  b           . + 4 + (0x4 << 2)
label_237220:
    if (ctx->pc == 0x237220u) {
        ctx->pc = 0x237220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23721Cu;
        // 0x237220: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237224u;
        goto label_237224;
    }
    ctx->pc = 0x23721Cu;
    {
        const bool branch_taken_0x23721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23721Cu;
        // 0x237220: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23721c) {
            ctx->pc = 0x237230u;
            goto label_237230;
        }
    }
    ctx->pc = 0x237224u;
label_237224:
    // 0x237224: 0x0  nop
    ctx->pc = 0x237224u;
    // NOP
label_237228:
    // 0x237228: 0xc08e9ac  jal         func_23A6B0
label_23722c:
    if (ctx->pc == 0x23722Cu) {
        ctx->pc = 0x237230u;
        goto label_237230;
    }
    ctx->pc = 0x237228u;
    SET_GPR_U32(ctx, 31, 0x237230u);
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x237230u;
label_237230:
    // 0x237230: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237234:
    // 0x237234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237238:
    // 0x237238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23723c:
    // 0x23723c: 0x3e00008  jr          $ra
label_237240:
    if (ctx->pc == 0x237240u) {
        ctx->pc = 0x237240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23723Cu;
        // 0x237240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237244u;
        goto label_237244;
    }
    ctx->pc = 0x23723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23723Cu;
        // 0x237240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237244u;
label_237244:
    // 0x237244: 0x0  nop
    ctx->pc = 0x237244u;
    // NOP
label_237248:
    // 0x237248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23724c:
    // 0x23724c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_237250:
    // 0x237250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237254:
    // 0x237254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237258:
    // 0x237258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23725c:
    // 0x23725c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_237260:
    // 0x237260: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237264:
    // 0x237264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_237268:
    // 0x237268: 0xc0693c2  jal         func_1A4F08
label_23726c:
    if (ctx->pc == 0x23726Cu) {
        ctx->pc = 0x23726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237268u;
        // 0x23726c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237270u;
        goto label_237270;
    }
    ctx->pc = 0x237268u;
    SET_GPR_U32(ctx, 31, 0x237270u);
    ctx->pc = 0x23726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237268u;
    // 0x23726c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F08u;
    { ctx->pc = 0x1a4f08; return; }
    ctx->pc = 0x237270u;
label_237270:
    // 0x237270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237274:
    // 0x237274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237278:
    // 0x237278: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_23727c:
    if (ctx->pc == 0x23727Cu) {
        ctx->pc = 0x23727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237278u;
        // 0x23727c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237280u;
        goto label_237280;
    }
    ctx->pc = 0x237278u;
    {
        const bool branch_taken_0x237278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x237278) {
            ctx->pc = 0x23727Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237278u;
            // 0x23727c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237290u;
            goto label_237290;
        }
    }
    ctx->pc = 0x237280u;
label_237280:
    // 0x237280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x237280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_237284:
    // 0x237284: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_237288:
    if (ctx->pc == 0x237288u) {
        ctx->pc = 0x237288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237284u;
        // 0x237288: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23728Cu;
        goto label_23728c;
    }
    ctx->pc = 0x237284u;
    {
        const bool branch_taken_0x237284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x237284) {
            ctx->pc = 0x237288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237284u;
            // 0x237288: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23728Cu;
            goto label_23728c;
        }
    }
    ctx->pc = 0x23728Cu;
label_23728c:
    // 0x23728c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23728cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237290:
    // 0x237290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_237294:
    // 0x237294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237298:
    // 0x237298: 0x3e00008  jr          $ra
label_23729c:
    if (ctx->pc == 0x23729Cu) {
        ctx->pc = 0x23729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237298u;
        // 0x23729c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372A0u;
        goto label_2372a0;
    }
    ctx->pc = 0x237298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237298u;
        // 0x23729c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2372A0u;
label_2372a0:
    // 0x2372a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2372a4:
    // 0x2372a4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2372a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2372a8:
    // 0x2372a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2372a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2372ac:
    // 0x2372ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2372acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2372b0:
    // 0x2372b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2372b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2372b4:
    // 0x2372b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2372b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2372b8:
    // 0x2372b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2372b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2372bc:
    // 0x2372bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2372bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2372c0:
    // 0x2372c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2372c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2372c4:
    // 0x2372c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2372c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2372c8:
    // 0x2372c8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2372c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2372cc:
    // 0x2372cc: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x2372ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
label_2372d0:
    // 0x2372d0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2372d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2372d4:
    // 0x2372d4: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2372d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2372d8:
    // 0x2372d8: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_2372dc:
    if (ctx->pc == 0x2372DCu) {
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372E0u;
        goto label_2372e0;
    }
    ctx->pc = 0x2372D8u;
    {
        const bool branch_taken_0x2372d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d8) {
            ctx->pc = 0x2374A4u;
            { ctx->pc = 0x2374a4; return; }
        }
    }
    ctx->pc = 0x2372E0u;
label_2372e0:
    // 0x2372e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2372e4:
    // 0x2372e4: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2372e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
label_2372e8:
    // 0x2372e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2372ec:
    // 0x2372ec: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_2372f0:
    // 0x2372f0: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_2372f4:
    // 0x2372f4: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2372f8:
    // 0x2372f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2372fc:
    // 0x2372fc: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2372fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_237300:
    // 0x237300: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_237304:
    // 0x237304: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x237304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237308:
    // 0x237308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23730c:
    // 0x23730c: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x23730cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_237310:
    // 0x237310: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_237314:
    if (ctx->pc == 0x237314u) {
        ctx->pc = 0x237314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237310u;
        // 0x237314: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237318u;
        goto label_237318;
    }
    ctx->pc = 0x237310u;
    {
        const bool branch_taken_0x237310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237310) {
            ctx->pc = 0x237314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237310u;
            // 0x237314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x237318u;
label_237318:
    // 0x237318: 0xa812  mflo        $s5
    ctx->pc = 0x237318u;
    SET_GPR_U64(ctx, 21, ctx->lo);
label_23731c:
    // 0x23731c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x23731cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237320:
    // 0x237320: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_237324:
    if (ctx->pc == 0x237324u) {
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237320u;
        // 0x237324: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237328u;
        goto label_237328;
    }
    ctx->pc = 0x237320u;
    {
        const bool branch_taken_0x237320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237320u;
        // 0x237324: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237320) {
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x237328u;
label_237328:
    // 0x237328: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x237328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23732c:
    // 0x23732c: 0x0  nop
    ctx->pc = 0x23732cu;
    // NOP
label_237330:
    // 0x237330: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_237334:
    // 0x237334: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_237338:
    // 0x237338: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_23733c:
    // 0x23733c: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x23733cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_237340:
    // 0x237340: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_237344:
    // 0x237344: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x237344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_237348:
    // 0x237348: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x237348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_23734c:
    // 0x23734c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x23734cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_237350:
    // 0x237350: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x237350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_237354:
    // 0x237354: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x237354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_237358:
    // 0x237358: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x237358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23735c:
    // 0x23735c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_237360:
    // 0x237360: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_237364:
    // 0x237364: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_237368:
    // 0x237368: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_23736c:
    // 0x23736c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_237370:
    // 0x237370: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_237374:
    // 0x237374: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
label_237378:
    // 0x237378: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23737c:
    // 0x23737c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23737cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
label_237380:
    // 0x237380: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_237384:
    // 0x237384: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_237388:
    // 0x237388: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237388u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
label_23738c:
    // 0x23738c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23738cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_237390:
    // 0x237390: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
label_237394:
    if (ctx->pc == 0x237394u) {
        ctx->pc = 0x237394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237390u;
        // 0x237394: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237398u;
        goto label_237398;
    }
    ctx->pc = 0x237390u;
    {
        const bool branch_taken_0x237390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237390u;
        // 0x237394: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237390) {
            ctx->pc = 0x237330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237330;
        }
    }
    ctx->pc = 0x237398u;
label_237398:
    // 0x237398: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
label_23739c:
    if (ctx->pc == 0x23739Cu) {
        ctx->pc = 0x23739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237398u;
        // 0x23739c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373A0u;
        goto label_2373a0;
    }
    ctx->pc = 0x237398u;
    {
        const bool branch_taken_0x237398 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x237398) {
            ctx->pc = 0x23739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237398u;
            // 0x23739c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D4u;
            goto label_2373d4;
        }
    }
    ctx->pc = 0x2373A0u;
label_2373a0:
    // 0x2373a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2373a4:
    if (ctx->pc == 0x2373A4u) {
        ctx->pc = 0x2373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A0u;
        // 0x2373a4: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373A8u;
        goto label_2373a8;
    }
    ctx->pc = 0x2373A0u;
    {
        const bool branch_taken_0x2373a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A0u;
        // 0x2373a4: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373a0) {
            ctx->pc = 0x2373ACu;
            goto label_2373ac;
        }
    }
    ctx->pc = 0x2373A8u;
label_2373a8:
    // 0x2373a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2373ac:
    // 0x2373ac: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_2373b0:
    // 0x2373b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2373b4:
    if (ctx->pc == 0x2373B4u) {
        ctx->pc = 0x2373B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B0u;
        // 0x2373b4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373B8u;
        goto label_2373b8;
    }
    ctx->pc = 0x2373B0u;
    {
        const bool branch_taken_0x2373b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373b0) {
            ctx->pc = 0x2373B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373B0u;
            // 0x2373b4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x2373B8u;
label_2373b8:
    // 0x2373b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2373bc:
    // 0x2373bc: 0x0  nop
    ctx->pc = 0x2373bcu;
    // NOP
label_2373c0:
    // 0x2373c0: 0x0  nop
    ctx->pc = 0x2373c0u;
    // NOP
label_2373c4:
    // 0x2373c4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_2373c8:
    if (ctx->pc == 0x2373C8u) {
        ctx->pc = 0x2373C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C4u;
        // 0x2373c8: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373CCu;
        goto label_2373cc;
    }
    ctx->pc = 0x2373C4u;
    {
        const bool branch_taken_0x2373c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373c4) {
            ctx->pc = 0x2373C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373C4u;
            // 0x2373c8: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373a8;
        }
    }
    ctx->pc = 0x2373CCu;
label_2373cc:
    // 0x2373cc: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2373ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2373d0:
    // 0x2373d0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2373d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2373d4:
    // 0x2373d4: 0xc08ec4c  jal         func_23B130
label_2373d8:
    if (ctx->pc == 0x2373D8u) {
        ctx->pc = 0x2373D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373D4u;
        // 0x2373d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373DCu;
        goto label_2373dc;
    }
    ctx->pc = 0x2373D4u;
    SET_GPR_U32(ctx, 31, 0x2373DCu);
    ctx->pc = 0x2373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373D4u;
    // 0x2373d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x2373DCu;
label_2373dc:
    // 0x2373dc: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
label_2373e0:
    if (ctx->pc == 0x2373E0u) {
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373E4u;
        goto label_2373e4;
    }
    ctx->pc = 0x2373DCu;
    {
        const bool branch_taken_0x2373dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373dc) {
            ctx->pc = 0x2374A0u;
            { ctx->pc = 0x2374a0; return; }
        }
    }
    ctx->pc = 0x2373E4u;
label_2373e4:
    // 0x2373e4: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2373e8:
    // 0x2373e8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2373ec:
    // 0x2373ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2373ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2373f0:
    // 0x2373f0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2373f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2373f4:
    // 0x2373f4: 0x0  nop
    ctx->pc = 0x2373f4u;
    // NOP
label_2373f8:
    // 0x2373f8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2373fc:
    // 0x2373fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2373fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_237400:
    // 0x237400: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_237404:
    // 0x237404: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x237404u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_237408:
    // 0x237408: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_23740c:
    // 0x23740c: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x23740cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_237410:
    // 0x237410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237414:
    // 0x237414: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x237414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_237418:
    // 0x237418: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x237418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23741c:
    // 0x23741c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_237420:
    // 0x237420: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_237424:
    // 0x237424: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x237424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_237428:
    // 0x237428: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_23742c:
    // 0x23742c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_237430:
    // 0x237430: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_237434:
    // 0x237434: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
label_237438:
    // 0x237438: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23743c:
    // 0x23743c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23743cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
label_237440:
    // 0x237440: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x237440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_237444:
    // 0x237444: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_237448:
    // 0x237448: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237448u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
label_23744c:
    // 0x23744c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_237450:
    // 0x237450: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
label_237454:
    if (ctx->pc == 0x237454u) {
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237458u;
        goto label_237458;
    }
    ctx->pc = 0x237450u;
    {
        const bool branch_taken_0x237450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237450) {
            ctx->pc = 0x2373F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373f8;
        }
    }
    ctx->pc = 0x237458u;
label_237458:
    // 0x237458: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23745c:
    // 0x23745c: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_237460:
    // 0x237460: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_237464:
    // 0x237464: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_237468:
    if (ctx->pc == 0x237468u) {
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23746Cu;
        goto label_23746c;
    }
    ctx->pc = 0x237464u;
    {
        const bool branch_taken_0x237464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237464) {
            ctx->pc = 0x2374A4u;
            { ctx->pc = 0x2374a4; return; }
        }
    }
    ctx->pc = 0x23746Cu;
label_23746c:
    // 0x23746c: 0x10000003  b           . + 4 + (0x3 << 2)
label_237470:
    if (ctx->pc == 0x237470u) {
        ctx->pc = 0x237470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23746Cu;
        // 0x237470: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237474u;
        goto label_237474;
    }
    ctx->pc = 0x23746Cu;
    {
        const bool branch_taken_0x23746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23746Cu;
        // 0x237470: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23746c) {
            ctx->pc = 0x23747Cu;
            goto label_23747c;
        }
    }
    ctx->pc = 0x237474u;
label_237474:
    // 0x237474: 0x0  nop
    ctx->pc = 0x237474u;
    // NOP
label_237478:
    // 0x237478: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23747c:
    // 0x23747c: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x23747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    ctx->pc = 0x237480u;
    return;
}
