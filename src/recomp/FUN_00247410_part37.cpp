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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part37(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x258d50u: goto label_258d50;
        case 0x258d54u: goto label_258d54;
        case 0x258d58u: goto label_258d58;
        case 0x258d5cu: goto label_258d5c;
        case 0x258d60u: goto label_258d60;
        case 0x258d64u: goto label_258d64;
        case 0x258d68u: goto label_258d68;
        case 0x258d6cu: goto label_258d6c;
        case 0x258d70u: goto label_258d70;
        case 0x258d74u: goto label_258d74;
        case 0x258d78u: goto label_258d78;
        case 0x258d7cu: goto label_258d7c;
        case 0x258d80u: goto label_258d80;
        case 0x258d84u: goto label_258d84;
        case 0x258d88u: goto label_258d88;
        case 0x258d8cu: goto label_258d8c;
        case 0x258d90u: goto label_258d90;
        case 0x258d94u: goto label_258d94;
        case 0x258d98u: goto label_258d98;
        case 0x258d9cu: goto label_258d9c;
        case 0x258da0u: goto label_258da0;
        case 0x258da4u: goto label_258da4;
        case 0x258da8u: goto label_258da8;
        case 0x258dacu: goto label_258dac;
        case 0x258db0u: goto label_258db0;
        case 0x258db4u: goto label_258db4;
        case 0x258db8u: goto label_258db8;
        case 0x258dbcu: goto label_258dbc;
        case 0x258dc0u: goto label_258dc0;
        case 0x258dc4u: goto label_258dc4;
        case 0x258dc8u: goto label_258dc8;
        case 0x258dccu: goto label_258dcc;
        case 0x258dd0u: goto label_258dd0;
        case 0x258dd4u: goto label_258dd4;
        case 0x258dd8u: goto label_258dd8;
        case 0x258ddcu: goto label_258ddc;
        case 0x258de0u: goto label_258de0;
        case 0x258de4u: goto label_258de4;
        case 0x258de8u: goto label_258de8;
        case 0x258decu: goto label_258dec;
        case 0x258df0u: goto label_258df0;
        case 0x258df4u: goto label_258df4;
        case 0x258df8u: goto label_258df8;
        case 0x258dfcu: goto label_258dfc;
        case 0x258e00u: goto label_258e00;
        case 0x258e04u: goto label_258e04;
        case 0x258e08u: goto label_258e08;
        case 0x258e0cu: goto label_258e0c;
        case 0x258e10u: goto label_258e10;
        case 0x258e14u: goto label_258e14;
        case 0x258e18u: goto label_258e18;
        case 0x258e1cu: goto label_258e1c;
        case 0x258e20u: goto label_258e20;
        case 0x258e24u: goto label_258e24;
        case 0x258e28u: goto label_258e28;
        case 0x258e2cu: goto label_258e2c;
        case 0x258e30u: goto label_258e30;
        case 0x258e34u: goto label_258e34;
        case 0x258e38u: goto label_258e38;
        case 0x258e3cu: goto label_258e3c;
        case 0x258e40u: goto label_258e40;
        case 0x258e44u: goto label_258e44;
        case 0x258e48u: goto label_258e48;
        case 0x258e4cu: goto label_258e4c;
        case 0x258e50u: goto label_258e50;
        case 0x258e54u: goto label_258e54;
        case 0x258e58u: goto label_258e58;
        case 0x258e5cu: goto label_258e5c;
        case 0x258e60u: goto label_258e60;
        case 0x258e64u: goto label_258e64;
        case 0x258e68u: goto label_258e68;
        case 0x258e6cu: goto label_258e6c;
        case 0x258e70u: goto label_258e70;
        case 0x258e74u: goto label_258e74;
        case 0x258e78u: goto label_258e78;
        case 0x258e7cu: goto label_258e7c;
        case 0x258e80u: goto label_258e80;
        case 0x258e84u: goto label_258e84;
        case 0x258e88u: goto label_258e88;
        case 0x258e8cu: goto label_258e8c;
        case 0x258e90u: goto label_258e90;
        case 0x258e94u: goto label_258e94;
        case 0x258e98u: goto label_258e98;
        case 0x258e9cu: goto label_258e9c;
        case 0x258ea0u: goto label_258ea0;
        case 0x258ea4u: goto label_258ea4;
        case 0x258ea8u: goto label_258ea8;
        case 0x258eacu: goto label_258eac;
        case 0x258eb0u: goto label_258eb0;
        case 0x258eb4u: goto label_258eb4;
        case 0x258eb8u: goto label_258eb8;
        case 0x258ebcu: goto label_258ebc;
        case 0x258ec0u: goto label_258ec0;
        case 0x258ec4u: goto label_258ec4;
        case 0x258ec8u: goto label_258ec8;
        case 0x258eccu: goto label_258ecc;
        case 0x258ed0u: goto label_258ed0;
        case 0x258ed4u: goto label_258ed4;
        case 0x258ed8u: goto label_258ed8;
        case 0x258edcu: goto label_258edc;
        case 0x258ee0u: goto label_258ee0;
        case 0x258ee4u: goto label_258ee4;
        case 0x258ee8u: goto label_258ee8;
        case 0x258eecu: goto label_258eec;
        case 0x258ef0u: goto label_258ef0;
        case 0x258ef4u: goto label_258ef4;
        case 0x258ef8u: goto label_258ef8;
        case 0x258efcu: goto label_258efc;
        case 0x258f00u: goto label_258f00;
        case 0x258f04u: goto label_258f04;
        case 0x258f08u: goto label_258f08;
        case 0x258f0cu: goto label_258f0c;
        case 0x258f10u: goto label_258f10;
        case 0x258f14u: goto label_258f14;
        case 0x258f18u: goto label_258f18;
        case 0x258f1cu: goto label_258f1c;
        case 0x258f20u: goto label_258f20;
        case 0x258f24u: goto label_258f24;
        case 0x258f28u: goto label_258f28;
        case 0x258f2cu: goto label_258f2c;
        case 0x258f30u: goto label_258f30;
        case 0x258f34u: goto label_258f34;
        case 0x258f38u: goto label_258f38;
        case 0x258f3cu: goto label_258f3c;
        case 0x258f40u: goto label_258f40;
        case 0x258f44u: goto label_258f44;
        case 0x258f48u: goto label_258f48;
        case 0x258f4cu: goto label_258f4c;
        case 0x258f50u: goto label_258f50;
        case 0x258f54u: goto label_258f54;
        case 0x258f58u: goto label_258f58;
        case 0x258f5cu: goto label_258f5c;
        case 0x258f60u: goto label_258f60;
        case 0x258f64u: goto label_258f64;
        case 0x258f68u: goto label_258f68;
        case 0x258f6cu: goto label_258f6c;
        case 0x258f70u: goto label_258f70;
        case 0x258f74u: goto label_258f74;
        case 0x258f78u: goto label_258f78;
        case 0x258f7cu: goto label_258f7c;
        case 0x258f80u: goto label_258f80;
        case 0x258f84u: goto label_258f84;
        case 0x258f88u: goto label_258f88;
        case 0x258f8cu: goto label_258f8c;
        case 0x258f90u: goto label_258f90;
        case 0x258f94u: goto label_258f94;
        case 0x258f98u: goto label_258f98;
        case 0x258f9cu: goto label_258f9c;
        case 0x258fa0u: goto label_258fa0;
        case 0x258fa4u: goto label_258fa4;
        case 0x258fa8u: goto label_258fa8;
        case 0x258facu: goto label_258fac;
        case 0x258fb0u: goto label_258fb0;
        case 0x258fb4u: goto label_258fb4;
        case 0x258fb8u: goto label_258fb8;
        case 0x258fbcu: goto label_258fbc;
        case 0x258fc0u: goto label_258fc0;
        case 0x258fc4u: goto label_258fc4;
        case 0x258fc8u: goto label_258fc8;
        case 0x258fccu: goto label_258fcc;
        case 0x258fd0u: goto label_258fd0;
        case 0x258fd4u: goto label_258fd4;
        case 0x258fd8u: goto label_258fd8;
        case 0x258fdcu: goto label_258fdc;
        case 0x258fe0u: goto label_258fe0;
        case 0x258fe4u: goto label_258fe4;
        case 0x258fe8u: goto label_258fe8;
        case 0x258fecu: goto label_258fec;
        case 0x258ff0u: goto label_258ff0;
        case 0x258ff4u: goto label_258ff4;
        case 0x258ff8u: goto label_258ff8;
        case 0x258ffcu: goto label_258ffc;
        case 0x259000u: goto label_259000;
        case 0x259004u: goto label_259004;
        case 0x259008u: goto label_259008;
        case 0x25900cu: goto label_25900c;
        case 0x259010u: goto label_259010;
        case 0x259014u: goto label_259014;
        case 0x259018u: goto label_259018;
        case 0x25901cu: goto label_25901c;
        case 0x259020u: goto label_259020;
        case 0x259024u: goto label_259024;
        case 0x259028u: goto label_259028;
        case 0x25902cu: goto label_25902c;
        case 0x259030u: goto label_259030;
        case 0x259034u: goto label_259034;
        case 0x259038u: goto label_259038;
        case 0x25903cu: goto label_25903c;
        case 0x259040u: goto label_259040;
        case 0x259044u: goto label_259044;
        case 0x259048u: goto label_259048;
        case 0x25904cu: goto label_25904c;
        case 0x259050u: goto label_259050;
        case 0x259054u: goto label_259054;
        case 0x259058u: goto label_259058;
        case 0x25905cu: goto label_25905c;
        case 0x259060u: goto label_259060;
        case 0x259064u: goto label_259064;
        case 0x259068u: goto label_259068;
        case 0x25906cu: goto label_25906c;
        case 0x259070u: goto label_259070;
        case 0x259074u: goto label_259074;
        case 0x259078u: goto label_259078;
        case 0x25907cu: goto label_25907c;
        case 0x259080u: goto label_259080;
        case 0x259084u: goto label_259084;
        case 0x259088u: goto label_259088;
        case 0x25908cu: goto label_25908c;
        case 0x259090u: goto label_259090;
        case 0x259094u: goto label_259094;
        case 0x259098u: goto label_259098;
        case 0x25909cu: goto label_25909c;
        case 0x2590a0u: goto label_2590a0;
        case 0x2590a4u: goto label_2590a4;
        case 0x2590a8u: goto label_2590a8;
        case 0x2590acu: goto label_2590ac;
        case 0x2590b0u: goto label_2590b0;
        case 0x2590b4u: goto label_2590b4;
        case 0x2590b8u: goto label_2590b8;
        case 0x2590bcu: goto label_2590bc;
        case 0x2590c0u: goto label_2590c0;
        case 0x2590c4u: goto label_2590c4;
        case 0x2590c8u: goto label_2590c8;
        case 0x2590ccu: goto label_2590cc;
        case 0x2590d0u: goto label_2590d0;
        case 0x2590d4u: goto label_2590d4;
        case 0x2590d8u: goto label_2590d8;
        case 0x2590dcu: goto label_2590dc;
        case 0x2590e0u: goto label_2590e0;
        case 0x2590e4u: goto label_2590e4;
        case 0x2590e8u: goto label_2590e8;
        case 0x2590ecu: goto label_2590ec;
        case 0x2590f0u: goto label_2590f0;
        case 0x2590f4u: goto label_2590f4;
        case 0x2590f8u: goto label_2590f8;
        case 0x2590fcu: goto label_2590fc;
        case 0x259100u: goto label_259100;
        case 0x259104u: goto label_259104;
        case 0x259108u: goto label_259108;
        case 0x25910cu: goto label_25910c;
        case 0x259110u: goto label_259110;
        case 0x259114u: goto label_259114;
        case 0x259118u: goto label_259118;
        case 0x25911cu: goto label_25911c;
        case 0x259120u: goto label_259120;
        case 0x259124u: goto label_259124;
        case 0x259128u: goto label_259128;
        case 0x25912cu: goto label_25912c;
        case 0x259130u: goto label_259130;
        case 0x259134u: goto label_259134;
        case 0x259138u: goto label_259138;
        case 0x25913cu: goto label_25913c;
        case 0x259140u: goto label_259140;
        case 0x259144u: goto label_259144;
        case 0x259148u: goto label_259148;
        case 0x25914cu: goto label_25914c;
        case 0x259150u: goto label_259150;
        case 0x259154u: goto label_259154;
        case 0x259158u: goto label_259158;
        case 0x25915cu: goto label_25915c;
        case 0x259160u: goto label_259160;
        case 0x259164u: goto label_259164;
        case 0x259168u: goto label_259168;
        case 0x25916cu: goto label_25916c;
        case 0x259170u: goto label_259170;
        case 0x259174u: goto label_259174;
        case 0x259178u: goto label_259178;
        case 0x25917cu: goto label_25917c;
        case 0x259180u: goto label_259180;
        case 0x259184u: goto label_259184;
        case 0x259188u: goto label_259188;
        case 0x25918cu: goto label_25918c;
        case 0x259190u: goto label_259190;
        case 0x259194u: goto label_259194;
        case 0x259198u: goto label_259198;
        case 0x25919cu: goto label_25919c;
        case 0x2591a0u: goto label_2591a0;
        case 0x2591a4u: goto label_2591a4;
        case 0x2591a8u: goto label_2591a8;
        case 0x2591acu: goto label_2591ac;
        case 0x2591b0u: goto label_2591b0;
        case 0x2591b4u: goto label_2591b4;
        case 0x2591b8u: goto label_2591b8;
        case 0x2591bcu: goto label_2591bc;
        case 0x2591c0u: goto label_2591c0;
        case 0x2591c4u: goto label_2591c4;
        case 0x2591c8u: goto label_2591c8;
        case 0x2591ccu: goto label_2591cc;
        case 0x2591d0u: goto label_2591d0;
        case 0x2591d4u: goto label_2591d4;
        case 0x2591d8u: goto label_2591d8;
        case 0x2591dcu: goto label_2591dc;
        case 0x2591e0u: goto label_2591e0;
        case 0x2591e4u: goto label_2591e4;
        case 0x2591e8u: goto label_2591e8;
        case 0x2591ecu: goto label_2591ec;
        case 0x2591f0u: goto label_2591f0;
        case 0x2591f4u: goto label_2591f4;
        case 0x2591f8u: goto label_2591f8;
        case 0x2591fcu: goto label_2591fc;
        case 0x259200u: goto label_259200;
        case 0x259204u: goto label_259204;
        case 0x259208u: goto label_259208;
        case 0x25920cu: goto label_25920c;
        case 0x259210u: goto label_259210;
        case 0x259214u: goto label_259214;
        case 0x259218u: goto label_259218;
        case 0x25921cu: goto label_25921c;
        case 0x259220u: goto label_259220;
        case 0x259224u: goto label_259224;
        case 0x259228u: goto label_259228;
        case 0x25922cu: goto label_25922c;
        case 0x259230u: goto label_259230;
        case 0x259234u: goto label_259234;
        case 0x259238u: goto label_259238;
        case 0x25923cu: goto label_25923c;
        case 0x259240u: goto label_259240;
        case 0x259244u: goto label_259244;
        case 0x259248u: goto label_259248;
        case 0x25924cu: goto label_25924c;
        case 0x259250u: goto label_259250;
        case 0x259254u: goto label_259254;
        case 0x259258u: goto label_259258;
        case 0x25925cu: goto label_25925c;
        case 0x259260u: goto label_259260;
        case 0x259264u: goto label_259264;
        case 0x259268u: goto label_259268;
        case 0x25926cu: goto label_25926c;
        case 0x259270u: goto label_259270;
        case 0x259274u: goto label_259274;
        case 0x259278u: goto label_259278;
        case 0x25927cu: goto label_25927c;
        case 0x259280u: goto label_259280;
        case 0x259284u: goto label_259284;
        case 0x259288u: goto label_259288;
        case 0x25928cu: goto label_25928c;
        case 0x259290u: goto label_259290;
        case 0x259294u: goto label_259294;
        case 0x259298u: goto label_259298;
        case 0x25929cu: goto label_25929c;
        case 0x2592a0u: goto label_2592a0;
        case 0x2592a4u: goto label_2592a4;
        case 0x2592a8u: goto label_2592a8;
        case 0x2592acu: goto label_2592ac;
        case 0x2592b0u: goto label_2592b0;
        case 0x2592b4u: goto label_2592b4;
        case 0x2592b8u: goto label_2592b8;
        case 0x2592bcu: goto label_2592bc;
        case 0x2592c0u: goto label_2592c0;
        case 0x2592c4u: goto label_2592c4;
        case 0x2592c8u: goto label_2592c8;
        case 0x2592ccu: goto label_2592cc;
        case 0x2592d0u: goto label_2592d0;
        case 0x2592d4u: goto label_2592d4;
        case 0x2592d8u: goto label_2592d8;
        case 0x2592dcu: goto label_2592dc;
        case 0x2592e0u: goto label_2592e0;
        case 0x2592e4u: goto label_2592e4;
        case 0x2592e8u: goto label_2592e8;
        case 0x2592ecu: goto label_2592ec;
        case 0x2592f0u: goto label_2592f0;
        case 0x2592f4u: goto label_2592f4;
        case 0x2592f8u: goto label_2592f8;
        case 0x2592fcu: goto label_2592fc;
        case 0x259300u: goto label_259300;
        case 0x259304u: goto label_259304;
        case 0x259308u: goto label_259308;
        case 0x25930cu: goto label_25930c;
        case 0x259310u: goto label_259310;
        case 0x259314u: goto label_259314;
        case 0x259318u: goto label_259318;
        case 0x25931cu: goto label_25931c;
        case 0x259320u: goto label_259320;
        case 0x259324u: goto label_259324;
        case 0x259328u: goto label_259328;
        case 0x25932cu: goto label_25932c;
        case 0x259330u: goto label_259330;
        case 0x259334u: goto label_259334;
        case 0x259338u: goto label_259338;
        case 0x25933cu: goto label_25933c;
        case 0x259340u: goto label_259340;
        case 0x259344u: goto label_259344;
        case 0x259348u: goto label_259348;
        case 0x25934cu: goto label_25934c;
        case 0x259350u: goto label_259350;
        case 0x259354u: goto label_259354;
        case 0x259358u: goto label_259358;
        case 0x25935cu: goto label_25935c;
        case 0x259360u: goto label_259360;
        case 0x259364u: goto label_259364;
        case 0x259368u: goto label_259368;
        case 0x25936cu: goto label_25936c;
        case 0x259370u: goto label_259370;
        case 0x259374u: goto label_259374;
        case 0x259378u: goto label_259378;
        case 0x25937cu: goto label_25937c;
        case 0x259380u: goto label_259380;
        case 0x259384u: goto label_259384;
        case 0x259388u: goto label_259388;
        case 0x25938cu: goto label_25938c;
        case 0x259390u: goto label_259390;
        case 0x259394u: goto label_259394;
        case 0x259398u: goto label_259398;
        case 0x25939cu: goto label_25939c;
        case 0x2593a0u: goto label_2593a0;
        case 0x2593a4u: goto label_2593a4;
        case 0x2593a8u: goto label_2593a8;
        case 0x2593acu: goto label_2593ac;
        case 0x2593b0u: goto label_2593b0;
        case 0x2593b4u: goto label_2593b4;
        case 0x2593b8u: goto label_2593b8;
        case 0x2593bcu: goto label_2593bc;
        case 0x2593c0u: goto label_2593c0;
        case 0x2593c4u: goto label_2593c4;
        case 0x2593c8u: goto label_2593c8;
        case 0x2593ccu: goto label_2593cc;
        case 0x2593d0u: goto label_2593d0;
        case 0x2593d4u: goto label_2593d4;
        case 0x2593d8u: goto label_2593d8;
        case 0x2593dcu: goto label_2593dc;
        case 0x2593e0u: goto label_2593e0;
        case 0x2593e4u: goto label_2593e4;
        case 0x2593e8u: goto label_2593e8;
        case 0x2593ecu: goto label_2593ec;
        case 0x2593f0u: goto label_2593f0;
        case 0x2593f4u: goto label_2593f4;
        case 0x2593f8u: goto label_2593f8;
        case 0x2593fcu: goto label_2593fc;
        case 0x259400u: goto label_259400;
        case 0x259404u: goto label_259404;
        case 0x259408u: goto label_259408;
        case 0x25940cu: goto label_25940c;
        case 0x259410u: goto label_259410;
        case 0x259414u: goto label_259414;
        case 0x259418u: goto label_259418;
        case 0x25941cu: goto label_25941c;
        case 0x259420u: goto label_259420;
        case 0x259424u: goto label_259424;
        case 0x259428u: goto label_259428;
        case 0x25942cu: goto label_25942c;
        case 0x259430u: goto label_259430;
        case 0x259434u: goto label_259434;
        case 0x259438u: goto label_259438;
        case 0x25943cu: goto label_25943c;
        case 0x259440u: goto label_259440;
        case 0x259444u: goto label_259444;
        case 0x259448u: goto label_259448;
        case 0x25944cu: goto label_25944c;
        case 0x259450u: goto label_259450;
        case 0x259454u: goto label_259454;
        case 0x259458u: goto label_259458;
        case 0x25945cu: goto label_25945c;
        case 0x259460u: goto label_259460;
        case 0x259464u: goto label_259464;
        case 0x259468u: goto label_259468;
        case 0x25946cu: goto label_25946c;
        case 0x259470u: goto label_259470;
        case 0x259474u: goto label_259474;
        case 0x259478u: goto label_259478;
        case 0x25947cu: goto label_25947c;
        case 0x259480u: goto label_259480;
        case 0x259484u: goto label_259484;
        case 0x259488u: goto label_259488;
        case 0x25948cu: goto label_25948c;
        case 0x259490u: goto label_259490;
        case 0x259494u: goto label_259494;
        case 0x259498u: goto label_259498;
        case 0x25949cu: goto label_25949c;
        case 0x2594a0u: goto label_2594a0;
        case 0x2594a4u: goto label_2594a4;
        case 0x2594a8u: goto label_2594a8;
        case 0x2594acu: goto label_2594ac;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594b4u: goto label_2594b4;
        case 0x2594b8u: goto label_2594b8;
        case 0x2594bcu: goto label_2594bc;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594c4u: goto label_2594c4;
        case 0x2594c8u: goto label_2594c8;
        case 0x2594ccu: goto label_2594cc;
        case 0x2594d0u: goto label_2594d0;
        case 0x2594d4u: goto label_2594d4;
        case 0x2594d8u: goto label_2594d8;
        case 0x2594dcu: goto label_2594dc;
        case 0x2594e0u: goto label_2594e0;
        case 0x2594e4u: goto label_2594e4;
        case 0x2594e8u: goto label_2594e8;
        case 0x2594ecu: goto label_2594ec;
        case 0x2594f0u: goto label_2594f0;
        case 0x2594f4u: goto label_2594f4;
        case 0x2594f8u: goto label_2594f8;
        case 0x2594fcu: goto label_2594fc;
        case 0x259500u: goto label_259500;
        case 0x259504u: goto label_259504;
        case 0x259508u: goto label_259508;
        case 0x25950cu: goto label_25950c;
        case 0x259510u: goto label_259510;
        case 0x259514u: goto label_259514;
        case 0x259518u: goto label_259518;
        case 0x25951cu: goto label_25951c;
        default: return;
    }

label_258d50:
    // 0x258d50: 0x27ec  .word       0x000027EC                   # dadd        $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_258d54:
    // 0x258d54: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_258d58:
    // 0x258d58: 0x0  nop
    ctx->pc = 0x258d58u;
    // NOP
label_258d5c:
    // 0x258d5c: 0x0  nop
    ctx->pc = 0x258d5cu;
    // NOP
label_258d60:
    // 0x258d60: 0x27f5  .word       0x000027F5                   # INVALID     $zero, $zero, 0x27F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x258D60 raw=0x000027F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258d64:
    // 0x258d64: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_258d68:
    // 0x258d68: 0x0  nop
    ctx->pc = 0x258d68u;
    // NOP
label_258d6c:
    // 0x258d6c: 0x0  nop
    ctx->pc = 0x258d6cu;
    // NOP
label_258d70:
    // 0x258d70: 0x2801  .word       0x00002801                   # INVALID     $zero, $zero, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258D70 raw=0x00002801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258d74:
    // 0x258d74: 0x4cb0  tge         $zero, $zero, 306
    ctx->pc = 0x258d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258d78:
    // 0x258d78: 0x0  nop
    ctx->pc = 0x258d78u;
    // NOP
label_258d7c:
    // 0x258d7c: 0x0  nop
    ctx->pc = 0x258d7cu;
    // NOP
label_258d80:
    // 0x258d80: 0x280b  movn        $a1, $zero, $zero
    ctx->pc = 0x258d80u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_258d84:
    // 0x258d84: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d84u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_258d88:
    // 0x258d88: 0x0  nop
    ctx->pc = 0x258d88u;
    // NOP
label_258d8c:
    // 0x258d8c: 0x0  nop
    ctx->pc = 0x258d8cu;
    // NOP
label_258d90:
    // 0x258d90: 0x2814  dsllv       $a1, $zero, $zero
    ctx->pc = 0x258d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_258d94:
    // 0x258d94: 0x5120  .word       0x00005120                   # add         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_258d98:
    // 0x258d98: 0x0  nop
    ctx->pc = 0x258d98u;
    // NOP
label_258d9c:
    // 0x258d9c: 0x0  nop
    ctx->pc = 0x258d9cu;
    // NOP
label_258da0:
    // 0x258da0: 0x281f  ddivu       $a1, $zero, $zero
    ctx->pc = 0x258da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x258DA0 raw=0x0000281F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258da4:
    // 0x258da4: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258da4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_258da8:
    // 0x258da8: 0x0  nop
    ctx->pc = 0x258da8u;
    // NOP
label_258dac:
    // 0x258dac: 0x0  nop
    ctx->pc = 0x258dacu;
    // NOP
label_258db0:
    // 0x258db0: 0x2829  .word       0x00002829                   # mtsa        $zero # 00002800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258db0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_258db4:
    // 0x258db4: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x258db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258db8:
    // 0x258db8: 0x0  nop
    ctx->pc = 0x258db8u;
    // NOP
label_258dbc:
    // 0x258dbc: 0x0  nop
    ctx->pc = 0x258dbcu;
    // NOP
label_258dc0:
    // 0x258dc0: 0x2832  tlt         $zero, $zero, 160
    ctx->pc = 0x258dc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258dc4:
    // 0x258dc4: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258dc4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_258dc8:
    // 0x258dc8: 0x0  nop
    ctx->pc = 0x258dc8u;
    // NOP
label_258dcc:
    // 0x258dcc: 0x0  nop
    ctx->pc = 0x258dccu;
    // NOP
label_258dd0:
    // 0x258dd0: 0x283e  dsrl32      $a1, $zero, 0
    ctx->pc = 0x258dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (32 + 0));
label_258dd4:
    // 0x258dd4: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x258dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_258dd8:
    // 0x258dd8: 0x0  nop
    ctx->pc = 0x258dd8u;
    // NOP
label_258ddc:
    // 0x258ddc: 0x0  nop
    ctx->pc = 0x258ddcu;
    // NOP
label_258de0:
    // 0x258de0: 0x284d  break       0, 161
    ctx->pc = 0x258de0u;
    runtime->handleBreak(rdram, ctx);
label_258de4:
    // 0x258de4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x258de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_258de8:
    // 0x258de8: 0x0  nop
    ctx->pc = 0x258de8u;
    // NOP
label_258dec:
    // 0x258dec: 0x0  nop
    ctx->pc = 0x258decu;
    // NOP
label_258df0:
    // 0x258df0: 0x285e  .word       0x0000285E                   # ddiv        $a1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x258DF0 raw=0x0000285E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258df4:
    // 0x258df4: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x258df4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_258df8:
    // 0x258df8: 0x0  nop
    ctx->pc = 0x258df8u;
    // NOP
label_258dfc:
    // 0x258dfc: 0x0  nop
    ctx->pc = 0x258dfcu;
    // NOP
label_258e00:
    // 0x258e00: 0x2867  .word       0x00002867                   # not         $a1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e00u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_258e04:
    // 0x258e04: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x258e04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_258e08:
    // 0x258e08: 0x0  nop
    ctx->pc = 0x258e08u;
    // NOP
label_258e0c:
    // 0x258e0c: 0x0  nop
    ctx->pc = 0x258e0cu;
    // NOP
label_258e10:
    // 0x258e10: 0x286f  .word       0x0000286F                   # dsubu       $a1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_258e14:
    // 0x258e14: 0x3860  .word       0x00003860                   # add         $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_258e18:
    // 0x258e18: 0x0  nop
    ctx->pc = 0x258e18u;
    // NOP
label_258e1c:
    // 0x258e1c: 0x0  nop
    ctx->pc = 0x258e1cu;
    // NOP
label_258e20:
    // 0x258e20: 0x2877  .word       0x00002877                   # INVALID     $zero, $zero, 0x2877 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x258E20 raw=0x00002877"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258e24:
    // 0x258e24: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x258e24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_258e28:
    // 0x258e28: 0x0  nop
    ctx->pc = 0x258e28u;
    // NOP
label_258e2c:
    // 0x258e2c: 0x0  nop
    ctx->pc = 0x258e2cu;
    // NOP
label_258e30:
    // 0x258e30: 0x2880  sll         $a1, $zero, 2
    ctx->pc = 0x258e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_258e34:
    // 0x258e34: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_258e38:
    // 0x258e38: 0x0  nop
    ctx->pc = 0x258e38u;
    // NOP
label_258e3c:
    // 0x258e3c: 0x0  nop
    ctx->pc = 0x258e3cu;
    // NOP
label_258e40:
    // 0x258e40: 0x2889  .word       0x00002889                   # jalr        $a1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_258e44:
    if (ctx->pc == 0x258E44u) {
        ctx->pc = 0x258E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E40u;
        // 0x258e44: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258E48u;
        goto label_258e48;
    }
    ctx->pc = 0x258E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x258E48u);
        ctx->pc = 0x258E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E40u;
        // 0x258e44: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E40u, 0x258E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258E48u;
label_258e48:
    // 0x258e48: 0x0  nop
    ctx->pc = 0x258e48u;
    // NOP
label_258e4c:
    // 0x258e4c: 0x0  nop
    ctx->pc = 0x258e4cu;
    // NOP
label_258e50:
    // 0x258e50: 0x2890  .word       0x00002890                   # mfhi        $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e50u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_258e54:
    // 0x258e54: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x258e54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_258e58:
    // 0x258e58: 0x0  nop
    ctx->pc = 0x258e58u;
    // NOP
label_258e5c:
    // 0x258e5c: 0x0  nop
    ctx->pc = 0x258e5cu;
    // NOP
label_258e60:
    // 0x258e60: 0x2899  .word       0x00002899                   # multu       $zero, $zero # 00002880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_258e64:
    // 0x258e64: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_258e68:
    // 0x258e68: 0x0  nop
    ctx->pc = 0x258e68u;
    // NOP
label_258e6c:
    // 0x258e6c: 0x0  nop
    ctx->pc = 0x258e6cu;
    // NOP
label_258e70:
    // 0x258e70: 0x28a0  .word       0x000028A0                   # add         $a1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_258e74:
    // 0x258e74: 0x4150  .word       0x00004150                   # mfhi        $t0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e74u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_258e78:
    // 0x258e78: 0x0  nop
    ctx->pc = 0x258e78u;
    // NOP
label_258e7c:
    // 0x258e7c: 0x0  nop
    ctx->pc = 0x258e7cu;
    // NOP
label_258e80:
    // 0x258e80: 0x28a9  .word       0x000028A9                   # mtsa        $zero # 00002880 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258e80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_258e84:
    // 0x258e84: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x258e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_258e88:
    // 0x258e88: 0x0  nop
    ctx->pc = 0x258e88u;
    // NOP
label_258e8c:
    // 0x258e8c: 0x0  nop
    ctx->pc = 0x258e8cu;
    // NOP
label_258e90:
    // 0x258e90: 0x28b0  tge         $zero, $zero, 162
    ctx->pc = 0x258e90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258e94:
    // 0x258e94: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258e94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_258e98:
    // 0x258e98: 0x0  nop
    ctx->pc = 0x258e98u;
    // NOP
label_258e9c:
    // 0x258e9c: 0x0  nop
    ctx->pc = 0x258e9cu;
    // NOP
label_258ea0:
    // 0x258ea0: 0x28bc  dsll32      $a1, $zero, 2
    ctx->pc = 0x258ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 2));
label_258ea4:
    // 0x258ea4: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ea4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_258ea8:
    // 0x258ea8: 0x0  nop
    ctx->pc = 0x258ea8u;
    // NOP
label_258eac:
    // 0x258eac: 0x0  nop
    ctx->pc = 0x258eacu;
    // NOP
label_258eb0:
    // 0x258eb0: 0x28c7  .word       0x000028C7                   # srav        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258eb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_258eb4:
    // 0x258eb4: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x258eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_258eb8:
    // 0x258eb8: 0x0  nop
    ctx->pc = 0x258eb8u;
    // NOP
label_258ebc:
    // 0x258ebc: 0x0  nop
    ctx->pc = 0x258ebcu;
    // NOP
label_258ec0:
    // 0x258ec0: 0x28d0  .word       0x000028D0                   # mfhi        $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ec0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_258ec4:
    // 0x258ec4: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ec4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_258ec8:
    // 0x258ec8: 0x0  nop
    ctx->pc = 0x258ec8u;
    // NOP
label_258ecc:
    // 0x258ecc: 0x0  nop
    ctx->pc = 0x258eccu;
    // NOP
label_258ed0:
    // 0x258ed0: 0x28da  .word       0x000028DA                   # div         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ed0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_258ed4:
    // 0x258ed4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_258ed8:
    // 0x258ed8: 0x0  nop
    ctx->pc = 0x258ed8u;
    // NOP
label_258edc:
    // 0x258edc: 0x0  nop
    ctx->pc = 0x258edcu;
    // NOP
label_258ee0:
    // 0x258ee0: 0x28e6  .word       0x000028E6                   # xor         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_258ee4:
    // 0x258ee4: 0x4d70  tge         $zero, $zero, 309
    ctx->pc = 0x258ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258ee8:
    // 0x258ee8: 0x0  nop
    ctx->pc = 0x258ee8u;
    // NOP
label_258eec:
    // 0x258eec: 0x0  nop
    ctx->pc = 0x258eecu;
    // NOP
label_258ef0:
    // 0x258ef0: 0x28f0  tge         $zero, $zero, 163
    ctx->pc = 0x258ef0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258ef4:
    // 0x258ef4: 0x3060  .word       0x00003060                   # add         $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_258ef8:
    // 0x258ef8: 0x0  nop
    ctx->pc = 0x258ef8u;
    // NOP
label_258efc:
    // 0x258efc: 0x0  nop
    ctx->pc = 0x258efcu;
    // NOP
label_258f00:
    // 0x258f00: 0x28f7  .word       0x000028F7                   # INVALID     $zero, $zero, 0x28F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x258F00 raw=0x000028F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258f04:
    // 0x258f04: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f04u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_258f08:
    // 0x258f08: 0x0  nop
    ctx->pc = 0x258f08u;
    // NOP
label_258f0c:
    // 0x258f0c: 0x0  nop
    ctx->pc = 0x258f0cu;
    // NOP
label_258f10:
    // 0x258f10: 0x28ff  dsra32      $a1, $zero, 3
    ctx->pc = 0x258f10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 3));
label_258f14:
    // 0x258f14: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x258f14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_258f18:
    // 0x258f18: 0x0  nop
    ctx->pc = 0x258f18u;
    // NOP
label_258f1c:
    // 0x258f1c: 0x0  nop
    ctx->pc = 0x258f1cu;
    // NOP
label_258f20:
    // 0x258f20: 0x2908  .word       0x00002908                   # jr          $zero # 00002900 <InstrIdType: CPU_SPECIAL>
label_258f24:
    if (ctx->pc == 0x258F24u) {
        ctx->pc = 0x258F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F20u;
        // 0x258f24: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258F28u;
        goto label_258f28;
    }
    ctx->pc = 0x258F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F20u;
        // 0x258f24: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258F20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258F28u;
label_258f28:
    // 0x258f28: 0x0  nop
    ctx->pc = 0x258f28u;
    // NOP
label_258f2c:
    // 0x258f2c: 0x0  nop
    ctx->pc = 0x258f2cu;
    // NOP
label_258f30:
    // 0x258f30: 0x2911  .word       0x00002911                   # mthi        $zero # 00002900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f30u;
    ctx->hi = GPR_U64(ctx, 0);
label_258f34:
    // 0x258f34: 0x3810  mfhi        $a3
    ctx->pc = 0x258f34u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_258f38:
    // 0x258f38: 0x0  nop
    ctx->pc = 0x258f38u;
    // NOP
label_258f3c:
    // 0x258f3c: 0x0  nop
    ctx->pc = 0x258f3cu;
    // NOP
label_258f40:
    // 0x258f40: 0x2919  .word       0x00002919                   # multu       $zero, $zero # 00002900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_258f44:
    // 0x258f44: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_258f48:
    // 0x258f48: 0x0  nop
    ctx->pc = 0x258f48u;
    // NOP
label_258f4c:
    // 0x258f4c: 0x0  nop
    ctx->pc = 0x258f4cu;
    // NOP
label_258f50:
    // 0x258f50: 0x2924  .word       0x00002924                   # and         $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_258f54:
    // 0x258f54: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x258f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258f58:
    // 0x258f58: 0x0  nop
    ctx->pc = 0x258f58u;
    // NOP
label_258f5c:
    // 0x258f5c: 0x0  nop
    ctx->pc = 0x258f5cu;
    // NOP
label_258f60:
    // 0x258f60: 0x292e  .word       0x0000292E                   # dsub        $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_258f64:
    // 0x258f64: 0x48b0  tge         $zero, $zero, 290
    ctx->pc = 0x258f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258f68:
    // 0x258f68: 0x0  nop
    ctx->pc = 0x258f68u;
    // NOP
label_258f6c:
    // 0x258f6c: 0x0  nop
    ctx->pc = 0x258f6cu;
    // NOP
label_258f70:
    // 0x258f70: 0x2938  dsll        $a1, $zero, 4
    ctx->pc = 0x258f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 4);
label_258f74:
    // 0x258f74: 0x4780  sll         $t0, $zero, 30
    ctx->pc = 0x258f74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_258f78:
    // 0x258f78: 0x0  nop
    ctx->pc = 0x258f78u;
    // NOP
label_258f7c:
    // 0x258f7c: 0x0  nop
    ctx->pc = 0x258f7cu;
    // NOP
label_258f80:
    // 0x258f80: 0x2941  .word       0x00002941                   # INVALID     $zero, $zero, 0x2941 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x258F80 raw=0x00002941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258f84:
    // 0x258f84: 0x97e0  .word       0x000097E0                   # add         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_258f88:
    // 0x258f88: 0x0  nop
    ctx->pc = 0x258f88u;
    // NOP
label_258f8c:
    // 0x258f8c: 0x0  nop
    ctx->pc = 0x258f8cu;
    // NOP
label_258f90:
    // 0x258f90: 0x2954  .word       0x00002954                   # dsllv       $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_258f94:
    // 0x258f94: 0x9ee0  .word       0x00009EE0                   # add         $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_258f98:
    // 0x258f98: 0x0  nop
    ctx->pc = 0x258f98u;
    // NOP
label_258f9c:
    // 0x258f9c: 0x0  nop
    ctx->pc = 0x258f9cu;
    // NOP
label_258fa0:
    // 0x258fa0: 0x2968  .word       0x00002968                   # mfsa        $a1 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x258fa0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_258fa4:
    // 0x258fa4: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x258fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_258fa8:
    // 0x258fa8: 0x0  nop
    ctx->pc = 0x258fa8u;
    // NOP
label_258fac:
    // 0x258fac: 0x0  nop
    ctx->pc = 0x258facu;
    // NOP
label_258fb0:
    // 0x258fb0: 0x297c  dsll32      $a1, $zero, 5
    ctx->pc = 0x258fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 5));
label_258fb4:
    // 0x258fb4: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_258fb8:
    // 0x258fb8: 0x0  nop
    ctx->pc = 0x258fb8u;
    // NOP
label_258fbc:
    // 0x258fbc: 0x0  nop
    ctx->pc = 0x258fbcu;
    // NOP
label_258fc0:
    // 0x258fc0: 0x298e  .word       0x0000298E                   # INVALID     $zero, $zero, 0x298E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x258FC0 raw=0x0000298E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_258fc4:
    // 0x258fc4: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_258fc8:
    // 0x258fc8: 0x0  nop
    ctx->pc = 0x258fc8u;
    // NOP
label_258fcc:
    // 0x258fcc: 0x0  nop
    ctx->pc = 0x258fccu;
    // NOP
label_258fd0:
    // 0x258fd0: 0x299b  .word       0x0000299B                   # divu        $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_258fd4:
    // 0x258fd4: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x258fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_258fd8:
    // 0x258fd8: 0x0  nop
    ctx->pc = 0x258fd8u;
    // NOP
label_258fdc:
    // 0x258fdc: 0x0  nop
    ctx->pc = 0x258fdcu;
    // NOP
label_258fe0:
    // 0x258fe0: 0x29ae  .word       0x000029AE                   # dsub        $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fe0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_258fe4:
    // 0x258fe4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x258fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_258fe8:
    // 0x258fe8: 0x0  nop
    ctx->pc = 0x258fe8u;
    // NOP
label_258fec:
    // 0x258fec: 0x0  nop
    ctx->pc = 0x258fecu;
    // NOP
label_258ff0:
    // 0x258ff0: 0x29c8  .word       0x000029C8                   # jr          $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
label_258ff4:
    if (ctx->pc == 0x258FF4u) {
        ctx->pc = 0x258FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FF0u;
        // 0x258ff4: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x258FF8u;
        goto label_258ff8;
    }
    ctx->pc = 0x258FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x258FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FF0u;
        // 0x258ff4: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258FF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258FF8u;
label_258ff8:
    // 0x258ff8: 0x0  nop
    ctx->pc = 0x258ff8u;
    // NOP
label_258ffc:
    // 0x258ffc: 0x0  nop
    ctx->pc = 0x258ffcu;
    // NOP
label_259000:
    // 0x259000: 0x29db  .word       0x000029DB                   # divu        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259000u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259004:
    // 0x259004: 0x9640  sll         $s2, $zero, 25
    ctx->pc = 0x259004u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_259008:
    // 0x259008: 0x0  nop
    ctx->pc = 0x259008u;
    // NOP
label_25900c:
    // 0x25900c: 0x0  nop
    ctx->pc = 0x25900cu;
    // NOP
label_259010:
    // 0x259010: 0x29ee  .word       0x000029EE                   # dsub        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259010u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_259014:
    // 0x259014: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259014u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_259018:
    // 0x259018: 0x0  nop
    ctx->pc = 0x259018u;
    // NOP
label_25901c:
    // 0x25901c: 0x0  nop
    ctx->pc = 0x25901cu;
    // NOP
label_259020:
    // 0x259020: 0x2a04  .word       0x00002A04                   # sllv        $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259020u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259024:
    // 0x259024: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_259028:
    // 0x259028: 0x0  nop
    ctx->pc = 0x259028u;
    // NOP
label_25902c:
    // 0x25902c: 0x0  nop
    ctx->pc = 0x25902cu;
    // NOP
label_259030:
    // 0x259030: 0x2a19  .word       0x00002A19                   # multu       $zero, $zero # 00002A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259030u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_259034:
    // 0x259034: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259034u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_259038:
    // 0x259038: 0x0  nop
    ctx->pc = 0x259038u;
    // NOP
label_25903c:
    // 0x25903c: 0x0  nop
    ctx->pc = 0x25903cu;
    // NOP
label_259040:
    // 0x259040: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x259040u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259044:
    // 0x259044: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259044u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_259048:
    // 0x259048: 0x0  nop
    ctx->pc = 0x259048u;
    // NOP
label_25904c:
    // 0x25904c: 0x0  nop
    ctx->pc = 0x25904cu;
    // NOP
label_259050:
    // 0x259050: 0x2a44  .word       0x00002A44                   # sllv        $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259054:
    // 0x259054: 0x9f70  tge         $zero, $zero, 637
    ctx->pc = 0x259054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259058:
    // 0x259058: 0x0  nop
    ctx->pc = 0x259058u;
    // NOP
label_25905c:
    // 0x25905c: 0x0  nop
    ctx->pc = 0x25905cu;
    // NOP
label_259060:
    // 0x259060: 0x2a58  .word       0x00002A58                   # mult        $a1, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_259064:
    // 0x259064: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x259064u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259068:
    // 0x259068: 0x0  nop
    ctx->pc = 0x259068u;
    // NOP
label_25906c:
    // 0x25906c: 0x0  nop
    ctx->pc = 0x25906cu;
    // NOP
label_259070:
    // 0x259070: 0x2a6a  .word       0x00002A6A                   # slt         $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259070u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_259074:
    // 0x259074: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x259074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_259078:
    // 0x259078: 0x0  nop
    ctx->pc = 0x259078u;
    // NOP
label_25907c:
    // 0x25907c: 0x0  nop
    ctx->pc = 0x25907cu;
    // NOP
label_259080:
    // 0x259080: 0x2a7b  dsra        $a1, $zero, 9
    ctx->pc = 0x259080u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 9);
label_259084:
    // 0x259084: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_259088:
    // 0x259088: 0x0  nop
    ctx->pc = 0x259088u;
    // NOP
label_25908c:
    // 0x25908c: 0x0  nop
    ctx->pc = 0x25908cu;
    // NOP
label_259090:
    // 0x259090: 0x2a8d  break       0, 170
    ctx->pc = 0x259090u;
    runtime->handleBreak(rdram, ctx);
label_259094:
    // 0x259094: 0xafd0  .word       0x0000AFD0                   # mfhi        $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259094u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_259098:
    // 0x259098: 0x0  nop
    ctx->pc = 0x259098u;
    // NOP
label_25909c:
    // 0x25909c: 0x0  nop
    ctx->pc = 0x25909cu;
    // NOP
label_2590a0:
    // 0x2590a0: 0x2aa3  .word       0x00002AA3                   # negu        $a1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2590a4:
    // 0x2590a4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x2590a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2590a8:
    // 0x2590a8: 0x0  nop
    ctx->pc = 0x2590a8u;
    // NOP
label_2590ac:
    // 0x2590ac: 0x0  nop
    ctx->pc = 0x2590acu;
    // NOP
label_2590b0:
    // 0x2590b0: 0x2ab5  .word       0x00002AB5                   # INVALID     $zero, $zero, 0x2AB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2590B0 raw=0x00002AB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2590b4:
    // 0x2590b4: 0x9440  sll         $s2, $zero, 17
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2590b8:
    // 0x2590b8: 0x0  nop
    ctx->pc = 0x2590b8u;
    // NOP
label_2590bc:
    // 0x2590bc: 0x0  nop
    ctx->pc = 0x2590bcu;
    // NOP
label_2590c0:
    // 0x2590c0: 0x2ac8  .word       0x00002AC8                   # jr          $zero # 00002AC0 <InstrIdType: CPU_SPECIAL>
label_2590c4:
    if (ctx->pc == 0x2590C4u) {
        ctx->pc = 0x2590C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590C0u;
        // 0x2590c4: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2590C8u;
        goto label_2590c8;
    }
    ctx->pc = 0x2590C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2590C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590C0u;
        // 0x2590c4: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2590C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2590C8u;
label_2590c8:
    // 0x2590c8: 0x0  nop
    ctx->pc = 0x2590c8u;
    // NOP
label_2590cc:
    // 0x2590cc: 0x0  nop
    ctx->pc = 0x2590ccu;
    // NOP
label_2590d0:
    // 0x2590d0: 0x2adc  .word       0x00002ADC                   # dmult       $zero, $zero # 00002AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2590D0 raw=0x00002ADC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2590d4:
    // 0x2590d4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2590d8:
    // 0x2590d8: 0x0  nop
    ctx->pc = 0x2590d8u;
    // NOP
label_2590dc:
    // 0x2590dc: 0x0  nop
    ctx->pc = 0x2590dcu;
    // NOP
label_2590e0:
    // 0x2590e0: 0x2aee  .word       0x00002AEE                   # dsub        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2590e4:
    // 0x2590e4: 0x9d10  .word       0x00009D10                   # mfhi        $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590e4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2590e8:
    // 0x2590e8: 0x0  nop
    ctx->pc = 0x2590e8u;
    // NOP
label_2590ec:
    // 0x2590ec: 0x0  nop
    ctx->pc = 0x2590ecu;
    // NOP
label_2590f0:
    // 0x2590f0: 0x2b02  srl         $a1, $zero, 12
    ctx->pc = 0x2590f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_2590f4:
    // 0x2590f4: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2590f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2590f8:
    // 0x2590f8: 0x0  nop
    ctx->pc = 0x2590f8u;
    // NOP
label_2590fc:
    // 0x2590fc: 0x0  nop
    ctx->pc = 0x2590fcu;
    // NOP
label_259100:
    // 0x259100: 0x2b14  .word       0x00002B14                   # dsllv       $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_259104:
    // 0x259104: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_259108:
    // 0x259108: 0x0  nop
    ctx->pc = 0x259108u;
    // NOP
label_25910c:
    // 0x25910c: 0x0  nop
    ctx->pc = 0x25910cu;
    // NOP
label_259110:
    // 0x259110: 0x2b2a  .word       0x00002B2A                   # slt         $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259110u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_259114:
    // 0x259114: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x259114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259118:
    // 0x259118: 0x0  nop
    ctx->pc = 0x259118u;
    // NOP
label_25911c:
    // 0x25911c: 0x0  nop
    ctx->pc = 0x25911cu;
    // NOP
label_259120:
    // 0x259120: 0x2b3d  .word       0x00002B3D                   # INVALID     $zero, $zero, 0x2B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259120 raw=0x00002B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259124:
    // 0x259124: 0x9920  .word       0x00009920                   # add         $s3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259128:
    // 0x259128: 0x0  nop
    ctx->pc = 0x259128u;
    // NOP
label_25912c:
    // 0x25912c: 0x0  nop
    ctx->pc = 0x25912cu;
    // NOP
label_259130:
    // 0x259130: 0x2b51  .word       0x00002B51                   # mthi        $zero # 00002B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259130u;
    ctx->hi = GPR_U64(ctx, 0);
label_259134:
    // 0x259134: 0x96e0  .word       0x000096E0                   # add         $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_259138:
    // 0x259138: 0x0  nop
    ctx->pc = 0x259138u;
    // NOP
label_25913c:
    // 0x25913c: 0x0  nop
    ctx->pc = 0x25913cu;
    // NOP
label_259140:
    // 0x259140: 0x2b64  .word       0x00002B64                   # and         $a1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_259144:
    // 0x259144: 0x9a90  .word       0x00009A90                   # mfhi        $s3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259144u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_259148:
    // 0x259148: 0x0  nop
    ctx->pc = 0x259148u;
    // NOP
label_25914c:
    // 0x25914c: 0x0  nop
    ctx->pc = 0x25914cu;
    // NOP
label_259150:
    // 0x259150: 0x2b78  dsll        $a1, $zero, 13
    ctx->pc = 0x259150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 13);
label_259154:
    // 0x259154: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259154u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_259158:
    // 0x259158: 0x0  nop
    ctx->pc = 0x259158u;
    // NOP
label_25915c:
    // 0x25915c: 0x0  nop
    ctx->pc = 0x25915cu;
    // NOP
label_259160:
    // 0x259160: 0x2b87  .word       0x00002B87                   # srav        $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259160u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259164:
    // 0x259164: 0x9e20  .word       0x00009E20                   # add         $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259168:
    // 0x259168: 0x0  nop
    ctx->pc = 0x259168u;
    // NOP
label_25916c:
    // 0x25916c: 0x0  nop
    ctx->pc = 0x25916cu;
    // NOP
label_259170:
    // 0x259170: 0x2b9b  .word       0x00002B9B                   # divu        $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259170u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259174:
    // 0x259174: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x259174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259178:
    // 0x259178: 0x0  nop
    ctx->pc = 0x259178u;
    // NOP
label_25917c:
    // 0x25917c: 0x0  nop
    ctx->pc = 0x25917cu;
    // NOP
label_259180:
    // 0x259180: 0x2bae  .word       0x00002BAE                   # dsub        $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259180u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_259184:
    // 0x259184: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259184u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_259188:
    // 0x259188: 0x0  nop
    ctx->pc = 0x259188u;
    // NOP
label_25918c:
    // 0x25918c: 0x0  nop
    ctx->pc = 0x25918cu;
    // NOP
label_259190:
    // 0x259190: 0x2bc3  sra         $a1, $zero, 15
    ctx->pc = 0x259190u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), 15));
label_259194:
    // 0x259194: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_259198:
    // 0x259198: 0x0  nop
    ctx->pc = 0x259198u;
    // NOP
label_25919c:
    // 0x25919c: 0x0  nop
    ctx->pc = 0x25919cu;
    // NOP
label_2591a0:
    // 0x2591a0: 0x2bd8  .word       0x00002BD8                   # mult        $a1, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2591a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2591a4:
    // 0x2591a4: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2591a8:
    // 0x2591a8: 0x0  nop
    ctx->pc = 0x2591a8u;
    // NOP
label_2591ac:
    // 0x2591ac: 0x0  nop
    ctx->pc = 0x2591acu;
    // NOP
label_2591b0:
    // 0x2591b0: 0x2beb  .word       0x00002BEB                   # sltu        $a1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2591b4:
    // 0x2591b4: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x2591b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2591b8:
    // 0x2591b8: 0x0  nop
    ctx->pc = 0x2591b8u;
    // NOP
label_2591bc:
    // 0x2591bc: 0x0  nop
    ctx->pc = 0x2591bcu;
    // NOP
label_2591c0:
    // 0x2591c0: 0x2bfb  dsra        $a1, $zero, 15
    ctx->pc = 0x2591c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 15);
label_2591c4:
    // 0x2591c4: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2591c8:
    // 0x2591c8: 0x0  nop
    ctx->pc = 0x2591c8u;
    // NOP
label_2591cc:
    // 0x2591cc: 0x0  nop
    ctx->pc = 0x2591ccu;
    // NOP
label_2591d0:
    // 0x2591d0: 0x2c0f  .word       0x00002C0F                   # sync.p # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2591d4:
    // 0x2591d4: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x2591d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2591d8:
    // 0x2591d8: 0x0  nop
    ctx->pc = 0x2591d8u;
    // NOP
label_2591dc:
    // 0x2591dc: 0x0  nop
    ctx->pc = 0x2591dcu;
    // NOP
label_2591e0:
    // 0x2591e0: 0x2c23  .word       0x00002C23                   # negu        $a1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2591e4:
    // 0x2591e4: 0x8660  .word       0x00008660                   # add         $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2591e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2591e8:
    // 0x2591e8: 0x0  nop
    ctx->pc = 0x2591e8u;
    // NOP
label_2591ec:
    // 0x2591ec: 0x0  nop
    ctx->pc = 0x2591ecu;
    // NOP
label_2591f0:
    // 0x2591f0: 0x2c34  teq         $zero, $zero, 176
    ctx->pc = 0x2591f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2591f4:
    // 0x2591f4: 0xa5f0  tge         $zero, $zero, 663
    ctx->pc = 0x2591f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2591f8:
    // 0x2591f8: 0x0  nop
    ctx->pc = 0x2591f8u;
    // NOP
label_2591fc:
    // 0x2591fc: 0x0  nop
    ctx->pc = 0x2591fcu;
    // NOP
label_259200:
    // 0x259200: 0x2c49  .word       0x00002C49                   # jalr        $a1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_259204:
    if (ctx->pc == 0x259204u) {
        ctx->pc = 0x259204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259200u;
        // 0x259204: 0x9970  tge         $zero, $zero, 613 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x259208u;
        goto label_259208;
    }
    ctx->pc = 0x259200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x259208u);
        ctx->pc = 0x259204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259200u;
        // 0x259204: 0x9970  tge         $zero, $zero, 613 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259200u, 0x259208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259208u;
label_259208:
    // 0x259208: 0x0  nop
    ctx->pc = 0x259208u;
    // NOP
label_25920c:
    // 0x25920c: 0x0  nop
    ctx->pc = 0x25920cu;
    // NOP
label_259210:
    // 0x259210: 0x2c5d  .word       0x00002C5D                   # dmultu      $zero, $zero # 00002C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x259210 raw=0x00002C5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259214:
    // 0x259214: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_259218:
    // 0x259218: 0x0  nop
    ctx->pc = 0x259218u;
    // NOP
label_25921c:
    // 0x25921c: 0x0  nop
    ctx->pc = 0x25921cu;
    // NOP
label_259220:
    // 0x259220: 0x2c68  .word       0x00002C68                   # mfsa        $a1 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259220u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_259224:
    // 0x259224: 0x55f0  tge         $zero, $zero, 343
    ctx->pc = 0x259224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259228:
    // 0x259228: 0x0  nop
    ctx->pc = 0x259228u;
    // NOP
label_25922c:
    // 0x25922c: 0x0  nop
    ctx->pc = 0x25922cu;
    // NOP
label_259230:
    // 0x259230: 0x2c73  tltu        $zero, $zero, 177
    ctx->pc = 0x259230u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259234:
    // 0x259234: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259234u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_259238:
    // 0x259238: 0x0  nop
    ctx->pc = 0x259238u;
    // NOP
label_25923c:
    // 0x25923c: 0x0  nop
    ctx->pc = 0x25923cu;
    // NOP
label_259240:
    // 0x259240: 0x2c83  sra         $a1, $zero, 18
    ctx->pc = 0x259240u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), 18));
label_259244:
    // 0x259244: 0x7d40  sll         $t7, $zero, 21
    ctx->pc = 0x259244u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_259248:
    // 0x259248: 0x0  nop
    ctx->pc = 0x259248u;
    // NOP
label_25924c:
    // 0x25924c: 0x0  nop
    ctx->pc = 0x25924cu;
    // NOP
label_259250:
    // 0x259250: 0x2c93  .word       0x00002C93                   # mtlo        $zero # 00002C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259250u;
    ctx->lo = GPR_U64(ctx, 0);
label_259254:
    // 0x259254: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259258:
    // 0x259258: 0x0  nop
    ctx->pc = 0x259258u;
    // NOP
label_25925c:
    // 0x25925c: 0x0  nop
    ctx->pc = 0x25925cu;
    // NOP
label_259260:
    // 0x259260: 0x2c9f  .word       0x00002C9F                   # ddivu       $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x259260 raw=0x00002C9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259264:
    // 0x259264: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_259268:
    // 0x259268: 0x0  nop
    ctx->pc = 0x259268u;
    // NOP
label_25926c:
    // 0x25926c: 0x0  nop
    ctx->pc = 0x25926cu;
    // NOP
label_259270:
    // 0x259270: 0x2ca9  .word       0x00002CA9                   # mtsa        $zero # 00002C80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259270u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_259274:
    // 0x259274: 0x46b0  tge         $zero, $zero, 282
    ctx->pc = 0x259274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259278:
    // 0x259278: 0x0  nop
    ctx->pc = 0x259278u;
    // NOP
label_25927c:
    // 0x25927c: 0x0  nop
    ctx->pc = 0x25927cu;
    // NOP
label_259280:
    // 0x259280: 0x2cb2  tlt         $zero, $zero, 178
    ctx->pc = 0x259280u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259284:
    // 0x259284: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259284u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259288:
    // 0x259288: 0x0  nop
    ctx->pc = 0x259288u;
    // NOP
label_25928c:
    // 0x25928c: 0x0  nop
    ctx->pc = 0x25928cu;
    // NOP
label_259290:
    // 0x259290: 0x2cbd  .word       0x00002CBD                   # INVALID     $zero, $zero, 0x2CBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259290u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259290 raw=0x00002CBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259294:
    // 0x259294: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x259294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259298:
    // 0x259298: 0x0  nop
    ctx->pc = 0x259298u;
    // NOP
label_25929c:
    // 0x25929c: 0x0  nop
    ctx->pc = 0x25929cu;
    // NOP
label_2592a0:
    // 0x2592a0: 0x2cc9  .word       0x00002CC9                   # jalr        $a1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_2592a4:
    if (ctx->pc == 0x2592A4u) {
        ctx->pc = 0x2592A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A0u;
        // 0x2592a4: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2592A8u;
        goto label_2592a8;
    }
    ctx->pc = 0x2592A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2592A8u);
        ctx->pc = 0x2592A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A0u;
        // 0x2592a4: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2592A0u, 0x2592A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2592A8u;
label_2592a8:
    // 0x2592a8: 0x0  nop
    ctx->pc = 0x2592a8u;
    // NOP
label_2592ac:
    // 0x2592ac: 0x0  nop
    ctx->pc = 0x2592acu;
    // NOP
label_2592b0:
    // 0x2592b0: 0x2cd4  .word       0x00002CD4                   # dsllv       $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2592b4:
    // 0x2592b4: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x2592b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2592b8:
    // 0x2592b8: 0x0  nop
    ctx->pc = 0x2592b8u;
    // NOP
label_2592bc:
    // 0x2592bc: 0x0  nop
    ctx->pc = 0x2592bcu;
    // NOP
label_2592c0:
    // 0x2592c0: 0x2ce0  .word       0x00002CE0                   # add         $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2592c4:
    // 0x2592c4: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2592c8:
    // 0x2592c8: 0x0  nop
    ctx->pc = 0x2592c8u;
    // NOP
label_2592cc:
    // 0x2592cc: 0x0  nop
    ctx->pc = 0x2592ccu;
    // NOP
label_2592d0:
    // 0x2592d0: 0x2cee  .word       0x00002CEE                   # dsub        $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2592d4:
    // 0x2592d4: 0x6700  sll         $t4, $zero, 28
    ctx->pc = 0x2592d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2592d8:
    // 0x2592d8: 0x0  nop
    ctx->pc = 0x2592d8u;
    // NOP
label_2592dc:
    // 0x2592dc: 0x0  nop
    ctx->pc = 0x2592dcu;
    // NOP
label_2592e0:
    // 0x2592e0: 0x2cfb  dsra        $a1, $zero, 19
    ctx->pc = 0x2592e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 19);
label_2592e4:
    // 0x2592e4: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2592e8:
    // 0x2592e8: 0x0  nop
    ctx->pc = 0x2592e8u;
    // NOP
label_2592ec:
    // 0x2592ec: 0x0  nop
    ctx->pc = 0x2592ecu;
    // NOP
label_2592f0:
    // 0x2592f0: 0x2d07  .word       0x00002D07                   # srav        $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2592f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2592f4:
    // 0x2592f4: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x2592f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2592f8:
    // 0x2592f8: 0x0  nop
    ctx->pc = 0x2592f8u;
    // NOP
label_2592fc:
    // 0x2592fc: 0x0  nop
    ctx->pc = 0x2592fcu;
    // NOP
label_259300:
    // 0x259300: 0x2d11  .word       0x00002D11                   # mthi        $zero # 00002D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259300u;
    ctx->hi = GPR_U64(ctx, 0);
label_259304:
    // 0x259304: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x259304u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_259308:
    // 0x259308: 0x0  nop
    ctx->pc = 0x259308u;
    // NOP
label_25930c:
    // 0x25930c: 0x0  nop
    ctx->pc = 0x25930cu;
    // NOP
label_259310:
    // 0x259310: 0x2d1c  .word       0x00002D1C                   # dmult       $zero, $zero # 00002D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x259310 raw=0x00002D1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259314:
    // 0x259314: 0x5600  sll         $t2, $zero, 24
    ctx->pc = 0x259314u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_259318:
    // 0x259318: 0x0  nop
    ctx->pc = 0x259318u;
    // NOP
label_25931c:
    // 0x25931c: 0x0  nop
    ctx->pc = 0x25931cu;
    // NOP
label_259320:
    // 0x259320: 0x2d27  .word       0x00002D27                   # not         $a1, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259320u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_259324:
    // 0x259324: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259328:
    // 0x259328: 0x0  nop
    ctx->pc = 0x259328u;
    // NOP
label_25932c:
    // 0x25932c: 0x0  nop
    ctx->pc = 0x25932cu;
    // NOP
label_259330:
    // 0x259330: 0x2d2f  .word       0x00002D2F                   # dsubu       $a1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_259334:
    // 0x259334: 0x8580  sll         $s0, $zero, 22
    ctx->pc = 0x259334u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_259338:
    // 0x259338: 0x0  nop
    ctx->pc = 0x259338u;
    // NOP
label_25933c:
    // 0x25933c: 0x0  nop
    ctx->pc = 0x25933cu;
    // NOP
label_259340:
    // 0x259340: 0x2d40  sll         $a1, $zero, 21
    ctx->pc = 0x259340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_259344:
    // 0x259344: 0x7060  .word       0x00007060                   # add         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259348:
    // 0x259348: 0x0  nop
    ctx->pc = 0x259348u;
    // NOP
label_25934c:
    // 0x25934c: 0x0  nop
    ctx->pc = 0x25934cu;
    // NOP
label_259350:
    // 0x259350: 0x2d4f  .word       0x00002D4F                   # sync.p # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_259354:
    // 0x259354: 0x44b0  tge         $zero, $zero, 274
    ctx->pc = 0x259354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259358:
    // 0x259358: 0x0  nop
    ctx->pc = 0x259358u;
    // NOP
label_25935c:
    // 0x25935c: 0x0  nop
    ctx->pc = 0x25935cu;
    // NOP
label_259360:
    // 0x259360: 0x2d58  .word       0x00002D58                   # mult        $a1, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_259364:
    // 0x259364: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259364u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259368:
    // 0x259368: 0x0  nop
    ctx->pc = 0x259368u;
    // NOP
label_25936c:
    // 0x25936c: 0x0  nop
    ctx->pc = 0x25936cu;
    // NOP
label_259370:
    // 0x259370: 0x2d64  .word       0x00002D64                   # and         $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_259374:
    // 0x259374: 0x4f60  .word       0x00004F60                   # add         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_259378:
    // 0x259378: 0x0  nop
    ctx->pc = 0x259378u;
    // NOP
label_25937c:
    // 0x25937c: 0x0  nop
    ctx->pc = 0x25937cu;
    // NOP
label_259380:
    // 0x259380: 0x2d6e  .word       0x00002D6E                   # dsub        $a1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259380u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_259384:
    // 0x259384: 0x96e0  .word       0x000096E0                   # add         $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_259388:
    // 0x259388: 0x0  nop
    ctx->pc = 0x259388u;
    // NOP
label_25938c:
    // 0x25938c: 0x0  nop
    ctx->pc = 0x25938cu;
    // NOP
label_259390:
    // 0x259390: 0x2d81  .word       0x00002D81                   # INVALID     $zero, $zero, 0x2D81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x259390 raw=0x00002D81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259394:
    // 0x259394: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_259398:
    // 0x259398: 0x0  nop
    ctx->pc = 0x259398u;
    // NOP
label_25939c:
    // 0x25939c: 0x0  nop
    ctx->pc = 0x25939cu;
    // NOP
label_2593a0:
    // 0x2593a0: 0x2d8c  syscall     182
    ctx->pc = 0x2593a0u;
    ctx->pc = 0x2593A4u;
runtime->handleSyscall(rdram, ctx, 0xB6u);
label_2593a4:
    // 0x2593a4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2593a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2593a8:
    // 0x2593a8: 0x0  nop
    ctx->pc = 0x2593a8u;
    // NOP
label_2593ac:
    // 0x2593ac: 0x0  nop
    ctx->pc = 0x2593acu;
    // NOP
label_2593b0:
    // 0x2593b0: 0x2d9a  .word       0x00002D9A                   # div         $a1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2593b0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2593b4:
    // 0x2593b4: 0x5450  .word       0x00005450                   # mfhi        $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2593b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2593b8:
    // 0x2593b8: 0x0  nop
    ctx->pc = 0x2593b8u;
    // NOP
label_2593bc:
    // 0x2593bc: 0x0  nop
    ctx->pc = 0x2593bcu;
    // NOP
label_2593c0:
    // 0x2593c0: 0x2da5  .word       0x00002DA5                   # move        $a1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2593c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2593c4:
    // 0x2593c4: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x2593c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2593c8:
    // 0x2593c8: 0x0  nop
    ctx->pc = 0x2593c8u;
    // NOP
label_2593cc:
    // 0x2593cc: 0x0  nop
    ctx->pc = 0x2593ccu;
    // NOP
label_2593d0:
    // 0x2593d0: 0x2db2  tlt         $zero, $zero, 182
    ctx->pc = 0x2593d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2593d4:
    // 0x2593d4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x2593d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2593d8:
    // 0x2593d8: 0x0  nop
    ctx->pc = 0x2593d8u;
    // NOP
label_2593dc:
    // 0x2593dc: 0x0  nop
    ctx->pc = 0x2593dcu;
    // NOP
label_2593e0:
    // 0x2593e0: 0x2dbd  .word       0x00002DBD                   # INVALID     $zero, $zero, 0x2DBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2593e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2593E0 raw=0x00002DBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2593e4:
    // 0x2593e4: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x2593e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2593e8:
    // 0x2593e8: 0x0  nop
    ctx->pc = 0x2593e8u;
    // NOP
label_2593ec:
    // 0x2593ec: 0x0  nop
    ctx->pc = 0x2593ecu;
    // NOP
label_2593f0:
    // 0x2593f0: 0x2dcc  syscall     183
    ctx->pc = 0x2593f0u;
    ctx->pc = 0x2593F4u;
runtime->handleSyscall(rdram, ctx, 0xB7u);
label_2593f4:
    // 0x2593f4: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x2593f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2593f8:
    // 0x2593f8: 0x0  nop
    ctx->pc = 0x2593f8u;
    // NOP
label_2593fc:
    // 0x2593fc: 0x0  nop
    ctx->pc = 0x2593fcu;
    // NOP
label_259400:
    // 0x259400: 0x2dd8  .word       0x00002DD8                   # mult        $a1, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_259404:
    // 0x259404: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_259408:
    // 0x259408: 0x0  nop
    ctx->pc = 0x259408u;
    // NOP
label_25940c:
    // 0x25940c: 0x0  nop
    ctx->pc = 0x25940cu;
    // NOP
label_259410:
    // 0x259410: 0x2de6  .word       0x00002DE6                   # xor         $a1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_259414:
    // 0x259414: 0x5b80  sll         $t3, $zero, 14
    ctx->pc = 0x259414u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_259418:
    // 0x259418: 0x0  nop
    ctx->pc = 0x259418u;
    // NOP
label_25941c:
    // 0x25941c: 0x0  nop
    ctx->pc = 0x25941cu;
    // NOP
label_259420:
    // 0x259420: 0x2df2  tlt         $zero, $zero, 183
    ctx->pc = 0x259420u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259424:
    // 0x259424: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_259428:
    // 0x259428: 0x0  nop
    ctx->pc = 0x259428u;
    // NOP
label_25942c:
    // 0x25942c: 0x0  nop
    ctx->pc = 0x25942cu;
    // NOP
label_259430:
    // 0x259430: 0x2e03  sra         $a1, $zero, 24
    ctx->pc = 0x259430u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), 24));
label_259434:
    // 0x259434: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x259434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259438:
    // 0x259438: 0x0  nop
    ctx->pc = 0x259438u;
    // NOP
label_25943c:
    // 0x25943c: 0x0  nop
    ctx->pc = 0x25943cu;
    // NOP
label_259440:
    // 0x259440: 0x2e0e  .word       0x00002E0E                   # INVALID     $zero, $zero, 0x2E0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x259440 raw=0x00002E0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259444:
    // 0x259444: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_259448:
    // 0x259448: 0x0  nop
    ctx->pc = 0x259448u;
    // NOP
label_25944c:
    // 0x25944c: 0x0  nop
    ctx->pc = 0x25944cu;
    // NOP
label_259450:
    // 0x259450: 0x2e1f  .word       0x00002E1F                   # ddivu       $a1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x259450 raw=0x00002E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259454:
    // 0x259454: 0x43d0  .word       0x000043D0                   # mfhi        $t0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259454u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_259458:
    // 0x259458: 0x0  nop
    ctx->pc = 0x259458u;
    // NOP
label_25945c:
    // 0x25945c: 0x0  nop
    ctx->pc = 0x25945cu;
    // NOP
label_259460:
    // 0x259460: 0x2e28  .word       0x00002E28                   # mfsa        $a1 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259460u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_259464:
    // 0x259464: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259464u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259468:
    // 0x259468: 0x0  nop
    ctx->pc = 0x259468u;
    // NOP
label_25946c:
    // 0x25946c: 0x0  nop
    ctx->pc = 0x25946cu;
    // NOP
label_259470:
    // 0x259470: 0x2e33  tltu        $zero, $zero, 184
    ctx->pc = 0x259470u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259474:
    // 0x259474: 0x62b0  tge         $zero, $zero, 394
    ctx->pc = 0x259474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259478:
    // 0x259478: 0x0  nop
    ctx->pc = 0x259478u;
    // NOP
label_25947c:
    // 0x25947c: 0x0  nop
    ctx->pc = 0x25947cu;
    // NOP
label_259480:
    // 0x259480: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x259480u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_259484:
    // 0x259484: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_259488:
    // 0x259488: 0x0  nop
    ctx->pc = 0x259488u;
    // NOP
label_25948c:
    // 0x25948c: 0x0  nop
    ctx->pc = 0x25948cu;
    // NOP
label_259490:
    // 0x259490: 0x2e4a  .word       0x00002E4A                   # movz        $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259490u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_259494:
    // 0x259494: 0x6240  sll         $t4, $zero, 9
    ctx->pc = 0x259494u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_259498:
    // 0x259498: 0x0  nop
    ctx->pc = 0x259498u;
    // NOP
label_25949c:
    // 0x25949c: 0x0  nop
    ctx->pc = 0x25949cu;
    // NOP
label_2594a0:
    // 0x2594a0: 0x2e57  .word       0x00002E57                   # dsrav       $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2594a4:
    // 0x2594a4: 0x4dc0  sll         $t1, $zero, 23
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2594a8:
    // 0x2594a8: 0x0  nop
    ctx->pc = 0x2594a8u;
    // NOP
label_2594ac:
    // 0x2594ac: 0x0  nop
    ctx->pc = 0x2594acu;
    // NOP
label_2594b0:
    // 0x2594b0: 0x2e61  .word       0x00002E61                   # addu        $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2594b4:
    // 0x2594b4: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2594b8:
    // 0x2594b8: 0x0  nop
    ctx->pc = 0x2594b8u;
    // NOP
label_2594bc:
    // 0x2594bc: 0x0  nop
    ctx->pc = 0x2594bcu;
    // NOP
label_2594c0:
    // 0x2594c0: 0x2e6b  .word       0x00002E6B                   # sltu        $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2594c4:
    // 0x2594c4: 0x72a0  .word       0x000072A0                   # add         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2594c8:
    // 0x2594c8: 0x0  nop
    ctx->pc = 0x2594c8u;
    // NOP
label_2594cc:
    // 0x2594cc: 0x0  nop
    ctx->pc = 0x2594ccu;
    // NOP
label_2594d0:
    // 0x2594d0: 0x2e7a  dsrl        $a1, $zero, 25
    ctx->pc = 0x2594d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> 25);
label_2594d4:
    // 0x2594d4: 0x53d0  .word       0x000053D0                   # mfhi        $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2594d8:
    // 0x2594d8: 0x0  nop
    ctx->pc = 0x2594d8u;
    // NOP
label_2594dc:
    // 0x2594dc: 0x0  nop
    ctx->pc = 0x2594dcu;
    // NOP
label_2594e0:
    // 0x2594e0: 0x2e85  .word       0x00002E85                   # INVALID     $zero, $zero, 0x2E85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2594e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2594E0 raw=0x00002E85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2594e4:
    // 0x2594e4: 0x3f70  tge         $zero, $zero, 253
    ctx->pc = 0x2594e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2594e8:
    // 0x2594e8: 0x0  nop
    ctx->pc = 0x2594e8u;
    // NOP
label_2594ec:
    // 0x2594ec: 0x0  nop
    ctx->pc = 0x2594ecu;
    // NOP
label_2594f0:
    // 0x2594f0: 0x2e8d  break       0, 186
    ctx->pc = 0x2594f0u;
    runtime->handleBreak(rdram, ctx);
label_2594f4:
    // 0x2594f4: 0x47b0  tge         $zero, $zero, 286
    ctx->pc = 0x2594f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2594f8:
    // 0x2594f8: 0x0  nop
    ctx->pc = 0x2594f8u;
    // NOP
label_2594fc:
    // 0x2594fc: 0x0  nop
    ctx->pc = 0x2594fcu;
    // NOP
label_259500:
    // 0x259500: 0x2e96  .word       0x00002E96                   # dsrlv       $a1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259504:
    // 0x259504: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x259504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259508:
    // 0x259508: 0x0  nop
    ctx->pc = 0x259508u;
    // NOP
label_25950c:
    // 0x25950c: 0x0  nop
    ctx->pc = 0x25950cu;
    // NOP
label_259510:
    // 0x259510: 0x2e9e  .word       0x00002E9E                   # ddiv        $a1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259510 raw=0x00002E9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259514:
    // 0x259514: 0x42a0  .word       0x000042A0                   # add         $t0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259518:
    // 0x259518: 0x0  nop
    ctx->pc = 0x259518u;
    // NOP
label_25951c:
    // 0x25951c: 0x0  nop
    ctx->pc = 0x25951cu;
    // NOP
    ctx->pc = 0x259520u;
    return;
}
