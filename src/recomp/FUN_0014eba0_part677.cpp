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


void FUN_0014eba0_part677(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x298ce0u: goto label_298ce0;
        case 0x298ce4u: goto label_298ce4;
        case 0x298ce8u: goto label_298ce8;
        case 0x298cecu: goto label_298cec;
        case 0x298cf0u: goto label_298cf0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298cf8u: goto label_298cf8;
        case 0x298cfcu: goto label_298cfc;
        case 0x298d00u: goto label_298d00;
        case 0x298d04u: goto label_298d04;
        case 0x298d08u: goto label_298d08;
        case 0x298d0cu: goto label_298d0c;
        case 0x298d10u: goto label_298d10;
        case 0x298d14u: goto label_298d14;
        case 0x298d18u: goto label_298d18;
        case 0x298d1cu: goto label_298d1c;
        case 0x298d20u: goto label_298d20;
        case 0x298d24u: goto label_298d24;
        case 0x298d28u: goto label_298d28;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d30u: goto label_298d30;
        case 0x298d34u: goto label_298d34;
        case 0x298d38u: goto label_298d38;
        case 0x298d3cu: goto label_298d3c;
        case 0x298d40u: goto label_298d40;
        case 0x298d44u: goto label_298d44;
        case 0x298d48u: goto label_298d48;
        case 0x298d4cu: goto label_298d4c;
        case 0x298d50u: goto label_298d50;
        case 0x298d54u: goto label_298d54;
        case 0x298d58u: goto label_298d58;
        case 0x298d5cu: goto label_298d5c;
        case 0x298d60u: goto label_298d60;
        case 0x298d64u: goto label_298d64;
        case 0x298d68u: goto label_298d68;
        case 0x298d6cu: goto label_298d6c;
        case 0x298d70u: goto label_298d70;
        case 0x298d74u: goto label_298d74;
        case 0x298d78u: goto label_298d78;
        case 0x298d7cu: goto label_298d7c;
        case 0x298d80u: goto label_298d80;
        case 0x298d84u: goto label_298d84;
        case 0x298d88u: goto label_298d88;
        case 0x298d8cu: goto label_298d8c;
        case 0x298d90u: goto label_298d90;
        case 0x298d94u: goto label_298d94;
        case 0x298d98u: goto label_298d98;
        case 0x298d9cu: goto label_298d9c;
        case 0x298da0u: goto label_298da0;
        case 0x298da4u: goto label_298da4;
        case 0x298da8u: goto label_298da8;
        case 0x298dacu: goto label_298dac;
        case 0x298db0u: goto label_298db0;
        case 0x298db4u: goto label_298db4;
        case 0x298db8u: goto label_298db8;
        case 0x298dbcu: goto label_298dbc;
        case 0x298dc0u: goto label_298dc0;
        case 0x298dc4u: goto label_298dc4;
        case 0x298dc8u: goto label_298dc8;
        case 0x298dccu: goto label_298dcc;
        case 0x298dd0u: goto label_298dd0;
        case 0x298dd4u: goto label_298dd4;
        case 0x298dd8u: goto label_298dd8;
        case 0x298ddcu: goto label_298ddc;
        case 0x298de0u: goto label_298de0;
        case 0x298de4u: goto label_298de4;
        case 0x298de8u: goto label_298de8;
        case 0x298decu: goto label_298dec;
        case 0x298df0u: goto label_298df0;
        case 0x298df4u: goto label_298df4;
        case 0x298df8u: goto label_298df8;
        case 0x298dfcu: goto label_298dfc;
        case 0x298e00u: goto label_298e00;
        case 0x298e04u: goto label_298e04;
        case 0x298e08u: goto label_298e08;
        case 0x298e0cu: goto label_298e0c;
        case 0x298e10u: goto label_298e10;
        case 0x298e14u: goto label_298e14;
        case 0x298e18u: goto label_298e18;
        case 0x298e1cu: goto label_298e1c;
        case 0x298e20u: goto label_298e20;
        case 0x298e24u: goto label_298e24;
        case 0x298e28u: goto label_298e28;
        case 0x298e2cu: goto label_298e2c;
        case 0x298e30u: goto label_298e30;
        case 0x298e34u: goto label_298e34;
        case 0x298e38u: goto label_298e38;
        case 0x298e3cu: goto label_298e3c;
        case 0x298e40u: goto label_298e40;
        case 0x298e44u: goto label_298e44;
        case 0x298e48u: goto label_298e48;
        case 0x298e4cu: goto label_298e4c;
        case 0x298e50u: goto label_298e50;
        case 0x298e54u: goto label_298e54;
        case 0x298e58u: goto label_298e58;
        case 0x298e5cu: goto label_298e5c;
        case 0x298e60u: goto label_298e60;
        case 0x298e64u: goto label_298e64;
        case 0x298e68u: goto label_298e68;
        case 0x298e6cu: goto label_298e6c;
        case 0x298e70u: goto label_298e70;
        case 0x298e74u: goto label_298e74;
        case 0x298e78u: goto label_298e78;
        case 0x298e7cu: goto label_298e7c;
        case 0x298e80u: goto label_298e80;
        case 0x298e84u: goto label_298e84;
        case 0x298e88u: goto label_298e88;
        case 0x298e8cu: goto label_298e8c;
        case 0x298e90u: goto label_298e90;
        case 0x298e94u: goto label_298e94;
        case 0x298e98u: goto label_298e98;
        case 0x298e9cu: goto label_298e9c;
        case 0x298ea0u: goto label_298ea0;
        case 0x298ea4u: goto label_298ea4;
        case 0x298ea8u: goto label_298ea8;
        case 0x298eacu: goto label_298eac;
        case 0x298eb0u: goto label_298eb0;
        case 0x298eb4u: goto label_298eb4;
        case 0x298eb8u: goto label_298eb8;
        case 0x298ebcu: goto label_298ebc;
        case 0x298ec0u: goto label_298ec0;
        case 0x298ec4u: goto label_298ec4;
        case 0x298ec8u: goto label_298ec8;
        case 0x298eccu: goto label_298ecc;
        case 0x298ed0u: goto label_298ed0;
        case 0x298ed4u: goto label_298ed4;
        case 0x298ed8u: goto label_298ed8;
        case 0x298edcu: goto label_298edc;
        case 0x298ee0u: goto label_298ee0;
        case 0x298ee4u: goto label_298ee4;
        case 0x298ee8u: goto label_298ee8;
        case 0x298eecu: goto label_298eec;
        case 0x298ef0u: goto label_298ef0;
        case 0x298ef4u: goto label_298ef4;
        case 0x298ef8u: goto label_298ef8;
        case 0x298efcu: goto label_298efc;
        case 0x298f00u: goto label_298f00;
        case 0x298f04u: goto label_298f04;
        case 0x298f08u: goto label_298f08;
        case 0x298f0cu: goto label_298f0c;
        case 0x298f10u: goto label_298f10;
        case 0x298f14u: goto label_298f14;
        case 0x298f18u: goto label_298f18;
        case 0x298f1cu: goto label_298f1c;
        case 0x298f20u: goto label_298f20;
        case 0x298f24u: goto label_298f24;
        case 0x298f28u: goto label_298f28;
        case 0x298f2cu: goto label_298f2c;
        case 0x298f30u: goto label_298f30;
        case 0x298f34u: goto label_298f34;
        case 0x298f38u: goto label_298f38;
        case 0x298f3cu: goto label_298f3c;
        case 0x298f40u: goto label_298f40;
        case 0x298f44u: goto label_298f44;
        case 0x298f48u: goto label_298f48;
        case 0x298f4cu: goto label_298f4c;
        case 0x298f50u: goto label_298f50;
        case 0x298f54u: goto label_298f54;
        case 0x298f58u: goto label_298f58;
        case 0x298f5cu: goto label_298f5c;
        case 0x298f60u: goto label_298f60;
        case 0x298f64u: goto label_298f64;
        case 0x298f68u: goto label_298f68;
        case 0x298f6cu: goto label_298f6c;
        case 0x298f70u: goto label_298f70;
        case 0x298f74u: goto label_298f74;
        case 0x298f78u: goto label_298f78;
        case 0x298f7cu: goto label_298f7c;
        case 0x298f80u: goto label_298f80;
        case 0x298f84u: goto label_298f84;
        case 0x298f88u: goto label_298f88;
        case 0x298f8cu: goto label_298f8c;
        case 0x298f90u: goto label_298f90;
        case 0x298f94u: goto label_298f94;
        case 0x298f98u: goto label_298f98;
        case 0x298f9cu: goto label_298f9c;
        case 0x298fa0u: goto label_298fa0;
        case 0x298fa4u: goto label_298fa4;
        case 0x298fa8u: goto label_298fa8;
        case 0x298facu: goto label_298fac;
        case 0x298fb0u: goto label_298fb0;
        case 0x298fb4u: goto label_298fb4;
        case 0x298fb8u: goto label_298fb8;
        case 0x298fbcu: goto label_298fbc;
        case 0x298fc0u: goto label_298fc0;
        case 0x298fc4u: goto label_298fc4;
        case 0x298fc8u: goto label_298fc8;
        case 0x298fccu: goto label_298fcc;
        case 0x298fd0u: goto label_298fd0;
        case 0x298fd4u: goto label_298fd4;
        case 0x298fd8u: goto label_298fd8;
        case 0x298fdcu: goto label_298fdc;
        case 0x298fe0u: goto label_298fe0;
        case 0x298fe4u: goto label_298fe4;
        case 0x298fe8u: goto label_298fe8;
        case 0x298fecu: goto label_298fec;
        case 0x298ff0u: goto label_298ff0;
        case 0x298ff4u: goto label_298ff4;
        case 0x298ff8u: goto label_298ff8;
        case 0x298ffcu: goto label_298ffc;
        case 0x299000u: goto label_299000;
        case 0x299004u: goto label_299004;
        case 0x299008u: goto label_299008;
        case 0x29900cu: goto label_29900c;
        case 0x299010u: goto label_299010;
        case 0x299014u: goto label_299014;
        case 0x299018u: goto label_299018;
        case 0x29901cu: goto label_29901c;
        case 0x299020u: goto label_299020;
        case 0x299024u: goto label_299024;
        case 0x299028u: goto label_299028;
        case 0x29902cu: goto label_29902c;
        case 0x299030u: goto label_299030;
        case 0x299034u: goto label_299034;
        case 0x299038u: goto label_299038;
        case 0x29903cu: goto label_29903c;
        case 0x299040u: goto label_299040;
        case 0x299044u: goto label_299044;
        case 0x299048u: goto label_299048;
        case 0x29904cu: goto label_29904c;
        case 0x299050u: goto label_299050;
        case 0x299054u: goto label_299054;
        case 0x299058u: goto label_299058;
        case 0x29905cu: goto label_29905c;
        case 0x299060u: goto label_299060;
        case 0x299064u: goto label_299064;
        case 0x299068u: goto label_299068;
        case 0x29906cu: goto label_29906c;
        case 0x299070u: goto label_299070;
        case 0x299074u: goto label_299074;
        case 0x299078u: goto label_299078;
        case 0x29907cu: goto label_29907c;
        case 0x299080u: goto label_299080;
        case 0x299084u: goto label_299084;
        case 0x299088u: goto label_299088;
        case 0x29908cu: goto label_29908c;
        case 0x299090u: goto label_299090;
        case 0x299094u: goto label_299094;
        case 0x299098u: goto label_299098;
        case 0x29909cu: goto label_29909c;
        case 0x2990a0u: goto label_2990a0;
        case 0x2990a4u: goto label_2990a4;
        case 0x2990a8u: goto label_2990a8;
        case 0x2990acu: goto label_2990ac;
        case 0x2990b0u: goto label_2990b0;
        case 0x2990b4u: goto label_2990b4;
        case 0x2990b8u: goto label_2990b8;
        case 0x2990bcu: goto label_2990bc;
        case 0x2990c0u: goto label_2990c0;
        case 0x2990c4u: goto label_2990c4;
        case 0x2990c8u: goto label_2990c8;
        case 0x2990ccu: goto label_2990cc;
        case 0x2990d0u: goto label_2990d0;
        case 0x2990d4u: goto label_2990d4;
        case 0x2990d8u: goto label_2990d8;
        case 0x2990dcu: goto label_2990dc;
        case 0x2990e0u: goto label_2990e0;
        case 0x2990e4u: goto label_2990e4;
        case 0x2990e8u: goto label_2990e8;
        case 0x2990ecu: goto label_2990ec;
        case 0x2990f0u: goto label_2990f0;
        case 0x2990f4u: goto label_2990f4;
        case 0x2990f8u: goto label_2990f8;
        case 0x2990fcu: goto label_2990fc;
        case 0x299100u: goto label_299100;
        case 0x299104u: goto label_299104;
        case 0x299108u: goto label_299108;
        case 0x29910cu: goto label_29910c;
        case 0x299110u: goto label_299110;
        case 0x299114u: goto label_299114;
        case 0x299118u: goto label_299118;
        case 0x29911cu: goto label_29911c;
        case 0x299120u: goto label_299120;
        case 0x299124u: goto label_299124;
        case 0x299128u: goto label_299128;
        case 0x29912cu: goto label_29912c;
        case 0x299130u: goto label_299130;
        case 0x299134u: goto label_299134;
        case 0x299138u: goto label_299138;
        case 0x29913cu: goto label_29913c;
        case 0x299140u: goto label_299140;
        case 0x299144u: goto label_299144;
        case 0x299148u: goto label_299148;
        case 0x29914cu: goto label_29914c;
        case 0x299150u: goto label_299150;
        case 0x299154u: goto label_299154;
        case 0x299158u: goto label_299158;
        case 0x29915cu: goto label_29915c;
        case 0x299160u: goto label_299160;
        case 0x299164u: goto label_299164;
        case 0x299168u: goto label_299168;
        case 0x29916cu: goto label_29916c;
        case 0x299170u: goto label_299170;
        case 0x299174u: goto label_299174;
        case 0x299178u: goto label_299178;
        case 0x29917cu: goto label_29917c;
        case 0x299180u: goto label_299180;
        case 0x299184u: goto label_299184;
        case 0x299188u: goto label_299188;
        case 0x29918cu: goto label_29918c;
        case 0x299190u: goto label_299190;
        case 0x299194u: goto label_299194;
        case 0x299198u: goto label_299198;
        case 0x29919cu: goto label_29919c;
        case 0x2991a0u: goto label_2991a0;
        case 0x2991a4u: goto label_2991a4;
        case 0x2991a8u: goto label_2991a8;
        case 0x2991acu: goto label_2991ac;
        case 0x2991b0u: goto label_2991b0;
        case 0x2991b4u: goto label_2991b4;
        case 0x2991b8u: goto label_2991b8;
        case 0x2991bcu: goto label_2991bc;
        case 0x2991c0u: goto label_2991c0;
        case 0x2991c4u: goto label_2991c4;
        case 0x2991c8u: goto label_2991c8;
        case 0x2991ccu: goto label_2991cc;
        case 0x2991d0u: goto label_2991d0;
        case 0x2991d4u: goto label_2991d4;
        case 0x2991d8u: goto label_2991d8;
        case 0x2991dcu: goto label_2991dc;
        case 0x2991e0u: goto label_2991e0;
        case 0x2991e4u: goto label_2991e4;
        case 0x2991e8u: goto label_2991e8;
        case 0x2991ecu: goto label_2991ec;
        case 0x2991f0u: goto label_2991f0;
        case 0x2991f4u: goto label_2991f4;
        case 0x2991f8u: goto label_2991f8;
        case 0x2991fcu: goto label_2991fc;
        case 0x299200u: goto label_299200;
        case 0x299204u: goto label_299204;
        case 0x299208u: goto label_299208;
        case 0x29920cu: goto label_29920c;
        case 0x299210u: goto label_299210;
        case 0x299214u: goto label_299214;
        case 0x299218u: goto label_299218;
        case 0x29921cu: goto label_29921c;
        case 0x299220u: goto label_299220;
        case 0x299224u: goto label_299224;
        case 0x299228u: goto label_299228;
        case 0x29922cu: goto label_29922c;
        case 0x299230u: goto label_299230;
        case 0x299234u: goto label_299234;
        case 0x299238u: goto label_299238;
        case 0x29923cu: goto label_29923c;
        case 0x299240u: goto label_299240;
        case 0x299244u: goto label_299244;
        case 0x299248u: goto label_299248;
        case 0x29924cu: goto label_29924c;
        case 0x299250u: goto label_299250;
        case 0x299254u: goto label_299254;
        case 0x299258u: goto label_299258;
        case 0x29925cu: goto label_29925c;
        case 0x299260u: goto label_299260;
        case 0x299264u: goto label_299264;
        case 0x299268u: goto label_299268;
        case 0x29926cu: goto label_29926c;
        case 0x299270u: goto label_299270;
        case 0x299274u: goto label_299274;
        case 0x299278u: goto label_299278;
        case 0x29927cu: goto label_29927c;
        case 0x299280u: goto label_299280;
        case 0x299284u: goto label_299284;
        case 0x299288u: goto label_299288;
        case 0x29928cu: goto label_29928c;
        case 0x299290u: goto label_299290;
        case 0x299294u: goto label_299294;
        case 0x299298u: goto label_299298;
        case 0x29929cu: goto label_29929c;
        case 0x2992a0u: goto label_2992a0;
        case 0x2992a4u: goto label_2992a4;
        case 0x2992a8u: goto label_2992a8;
        case 0x2992acu: goto label_2992ac;
        case 0x2992b0u: goto label_2992b0;
        case 0x2992b4u: goto label_2992b4;
        case 0x2992b8u: goto label_2992b8;
        case 0x2992bcu: goto label_2992bc;
        case 0x2992c0u: goto label_2992c0;
        case 0x2992c4u: goto label_2992c4;
        case 0x2992c8u: goto label_2992c8;
        case 0x2992ccu: goto label_2992cc;
        case 0x2992d0u: goto label_2992d0;
        case 0x2992d4u: goto label_2992d4;
        case 0x2992d8u: goto label_2992d8;
        case 0x2992dcu: goto label_2992dc;
        case 0x2992e0u: goto label_2992e0;
        case 0x2992e4u: goto label_2992e4;
        case 0x2992e8u: goto label_2992e8;
        case 0x2992ecu: goto label_2992ec;
        case 0x2992f0u: goto label_2992f0;
        case 0x2992f4u: goto label_2992f4;
        case 0x2992f8u: goto label_2992f8;
        case 0x2992fcu: goto label_2992fc;
        case 0x299300u: goto label_299300;
        case 0x299304u: goto label_299304;
        case 0x299308u: goto label_299308;
        case 0x29930cu: goto label_29930c;
        case 0x299310u: goto label_299310;
        case 0x299314u: goto label_299314;
        case 0x299318u: goto label_299318;
        case 0x29931cu: goto label_29931c;
        case 0x299320u: goto label_299320;
        case 0x299324u: goto label_299324;
        case 0x299328u: goto label_299328;
        case 0x29932cu: goto label_29932c;
        case 0x299330u: goto label_299330;
        case 0x299334u: goto label_299334;
        case 0x299338u: goto label_299338;
        case 0x29933cu: goto label_29933c;
        case 0x299340u: goto label_299340;
        case 0x299344u: goto label_299344;
        case 0x299348u: goto label_299348;
        case 0x29934cu: goto label_29934c;
        case 0x299350u: goto label_299350;
        case 0x299354u: goto label_299354;
        case 0x299358u: goto label_299358;
        case 0x29935cu: goto label_29935c;
        case 0x299360u: goto label_299360;
        case 0x299364u: goto label_299364;
        case 0x299368u: goto label_299368;
        case 0x29936cu: goto label_29936c;
        case 0x299370u: goto label_299370;
        case 0x299374u: goto label_299374;
        case 0x299378u: goto label_299378;
        case 0x29937cu: goto label_29937c;
        case 0x299380u: goto label_299380;
        case 0x299384u: goto label_299384;
        case 0x299388u: goto label_299388;
        case 0x29938cu: goto label_29938c;
        case 0x299390u: goto label_299390;
        case 0x299394u: goto label_299394;
        case 0x299398u: goto label_299398;
        case 0x29939cu: goto label_29939c;
        case 0x2993a0u: goto label_2993a0;
        case 0x2993a4u: goto label_2993a4;
        case 0x2993a8u: goto label_2993a8;
        case 0x2993acu: goto label_2993ac;
        case 0x2993b0u: goto label_2993b0;
        case 0x2993b4u: goto label_2993b4;
        case 0x2993b8u: goto label_2993b8;
        case 0x2993bcu: goto label_2993bc;
        case 0x2993c0u: goto label_2993c0;
        case 0x2993c4u: goto label_2993c4;
        case 0x2993c8u: goto label_2993c8;
        case 0x2993ccu: goto label_2993cc;
        case 0x2993d0u: goto label_2993d0;
        case 0x2993d4u: goto label_2993d4;
        case 0x2993d8u: goto label_2993d8;
        case 0x2993dcu: goto label_2993dc;
        case 0x2993e0u: goto label_2993e0;
        case 0x2993e4u: goto label_2993e4;
        case 0x2993e8u: goto label_2993e8;
        case 0x2993ecu: goto label_2993ec;
        case 0x2993f0u: goto label_2993f0;
        case 0x2993f4u: goto label_2993f4;
        case 0x2993f8u: goto label_2993f8;
        case 0x2993fcu: goto label_2993fc;
        case 0x299400u: goto label_299400;
        case 0x299404u: goto label_299404;
        case 0x299408u: goto label_299408;
        case 0x29940cu: goto label_29940c;
        case 0x299410u: goto label_299410;
        case 0x299414u: goto label_299414;
        case 0x299418u: goto label_299418;
        case 0x29941cu: goto label_29941c;
        case 0x299420u: goto label_299420;
        case 0x299424u: goto label_299424;
        case 0x299428u: goto label_299428;
        case 0x29942cu: goto label_29942c;
        case 0x299430u: goto label_299430;
        case 0x299434u: goto label_299434;
        case 0x299438u: goto label_299438;
        case 0x29943cu: goto label_29943c;
        case 0x299440u: goto label_299440;
        case 0x299444u: goto label_299444;
        case 0x299448u: goto label_299448;
        case 0x29944cu: goto label_29944c;
        case 0x299450u: goto label_299450;
        case 0x299454u: goto label_299454;
        case 0x299458u: goto label_299458;
        case 0x29945cu: goto label_29945c;
        case 0x299460u: goto label_299460;
        case 0x299464u: goto label_299464;
        case 0x299468u: goto label_299468;
        case 0x29946cu: goto label_29946c;
        case 0x299470u: goto label_299470;
        case 0x299474u: goto label_299474;
        case 0x299478u: goto label_299478;
        case 0x29947cu: goto label_29947c;
        case 0x299480u: goto label_299480;
        case 0x299484u: goto label_299484;
        case 0x299488u: goto label_299488;
        case 0x29948cu: goto label_29948c;
        case 0x299490u: goto label_299490;
        case 0x299494u: goto label_299494;
        case 0x299498u: goto label_299498;
        case 0x29949cu: goto label_29949c;
        case 0x2994a0u: goto label_2994a0;
        case 0x2994a4u: goto label_2994a4;
        case 0x2994a8u: goto label_2994a8;
        case 0x2994acu: goto label_2994ac;
        default: return;
    }

label_298ce0:
    // 0x298ce0: 0x262b3  tltu        $zero, $v0, 394
    ctx->pc = 0x298ce0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298ce4:
    // 0x298ce4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298ce4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298ce8:
    // 0x298ce8: 0x4c10  .word       0x00004C10                   # mfhi        $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ce8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_298cec:
    // 0x298cec: 0x0  nop
    ctx->pc = 0x298cecu;
    // NOP
label_298cf0:
    // 0x298cf0: 0x262bd  .word       0x000262BD                   # INVALID     $zero, $v0, 0x62BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298cf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298CF0 raw=0x000262BD");
 /* MITIGATED */
label_298cf4:
    // 0x298cf4: 0x9  jalr        $zero, $zero
label_298cf8:
    if (ctx->pc == 0x298CF8u) {
        ctx->pc = 0x298CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CF4u;
        // 0x298cf8: 0x45f0  tge         $zero, $zero, 279 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CFCu;
        goto label_298cfc;
    }
    ctx->pc = 0x298CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CF4u;
        // 0x298cf8: 0x45f0  tge         $zero, $zero, 279 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CF4u, 0x298CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298CFCu;
label_298cfc:
    // 0x298cfc: 0x0  nop
    ctx->pc = 0x298cfcu;
    // NOP
label_298d00:
    // 0x298d00: 0x262c6  .word       0x000262C6                   # srlv        $t4, $v0, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d00u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298d04:
    // 0x298d04: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298d04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298d08:
    // 0x298d08: 0x5640  sll         $t2, $zero, 25
    ctx->pc = 0x298d08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_298d0c:
    // 0x298d0c: 0x0  nop
    ctx->pc = 0x298d0cu;
    // NOP
label_298d10:
    // 0x298d10: 0x262d1  .word       0x000262D1                   # mthi        $zero # 000262C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d10u;
    ctx->hi = GPR_U64(ctx, 0);
label_298d14:
    // 0x298d14: 0xc  syscall     0
    ctx->pc = 0x298d14u;
    ctx->pc = 0x298D18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_298d18:
    // 0x298d18: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_298d1c:
    // 0x298d1c: 0x0  nop
    ctx->pc = 0x298d1cu;
    // NOP
label_298d20:
    // 0x298d20: 0x262dd  .word       0x000262DD                   # dmultu      $zero, $v0 # 000062C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298D20 raw=0x000262DD");
 /* MITIGATED */
label_298d24:
    // 0x298d24: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298d24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298d28:
    // 0x298d28: 0x3520  .word       0x00003520                   # add         $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_298d2c:
    // 0x298d2c: 0x0  nop
    ctx->pc = 0x298d2cu;
    // NOP
label_298d30:
    // 0x298d30: 0x262e4  .word       0x000262E4                   # and         $t4, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_298d34:
    // 0x298d34: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x298d34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298d38:
    // 0x298d38: 0x2f40  sll         $a1, $zero, 29
    ctx->pc = 0x298d38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_298d3c:
    // 0x298d3c: 0x0  nop
    ctx->pc = 0x298d3cu;
    // NOP
label_298d40:
    // 0x298d40: 0x262ea  .word       0x000262EA                   # slt         $t4, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d40u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298d44:
    // 0x298d44: 0x9  jalr        $zero, $zero
label_298d48:
    if (ctx->pc == 0x298D48u) {
        ctx->pc = 0x298D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D44u;
        // 0x298d48: 0x47c0  sll         $t0, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D4Cu;
        goto label_298d4c;
    }
    ctx->pc = 0x298D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D44u;
        // 0x298d48: 0x47c0  sll         $t0, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D44u, 0x298D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298D4Cu;
label_298d4c:
    // 0x298d4c: 0x0  nop
    ctx->pc = 0x298d4cu;
    // NOP
label_298d50:
    // 0x298d50: 0x262f3  tltu        $zero, $v0, 395
    ctx->pc = 0x298d50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298d54:
    // 0x298d54: 0x8  jr          $zero
label_298d58:
    if (ctx->pc == 0x298D58u) {
        ctx->pc = 0x298D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D54u;
        // 0x298d58: 0x3c30  tge         $zero, $zero, 240 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298D5Cu;
        goto label_298d5c;
    }
    ctx->pc = 0x298D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D54u;
        // 0x298d58: 0x3c30  tge         $zero, $zero, 240 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298D5Cu;
label_298d5c:
    // 0x298d5c: 0x0  nop
    ctx->pc = 0x298d5cu;
    // NOP
label_298d60:
    // 0x298d60: 0x262fb  dsra        $t4, $v0, 11
    ctx->pc = 0x298d60u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> 11);
label_298d64:
    // 0x298d64: 0xc  syscall     0
    ctx->pc = 0x298d64u;
    ctx->pc = 0x298D68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_298d68:
    // 0x298d68: 0x58f0  tge         $zero, $zero, 355
    ctx->pc = 0x298d68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298d6c:
    // 0x298d6c: 0x0  nop
    ctx->pc = 0x298d6cu;
    // NOP
label_298d70:
    // 0x298d70: 0x26307  .word       0x00026307                   # srav        $t4, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d70u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298d74:
    // 0x298d74: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298d74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298d78:
    // 0x298d78: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d78u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_298d7c:
    // 0x298d7c: 0x0  nop
    ctx->pc = 0x298d7cu;
    // NOP
label_298d80:
    // 0x298d80: 0x2630e  .word       0x0002630E                   # INVALID     $zero, $v0, 0x630E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x298D80 raw=0x0002630E");
 /* MITIGATED */
label_298d84:
    // 0x298d84: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298d84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298d88:
    // 0x298d88: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x298d88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298d8c:
    // 0x298d8c: 0x0  nop
    ctx->pc = 0x298d8cu;
    // NOP
label_298d90:
    // 0x298d90: 0x26319  .word       0x00026319                   # multu       $zero, $v0 # 00006300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298d90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_298d94:
    // 0x298d94: 0xd  break       0
    ctx->pc = 0x298d94u;
    runtime->handleBreak(rdram, ctx);
label_298d98:
    // 0x298d98: 0x6330  tge         $zero, $zero, 396
    ctx->pc = 0x298d98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298d9c:
    // 0x298d9c: 0x0  nop
    ctx->pc = 0x298d9cu;
    // NOP
label_298da0:
    // 0x298da0: 0x26326  .word       0x00026326                   # xor         $t4, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298da0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_298da4:
    // 0x298da4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298da4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298da8:
    // 0x298da8: 0x5380  sll         $t2, $zero, 14
    ctx->pc = 0x298da8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_298dac:
    // 0x298dac: 0x0  nop
    ctx->pc = 0x298dacu;
    // NOP
label_298db0:
    // 0x298db0: 0x26331  tgeu        $zero, $v0, 396
    ctx->pc = 0x298db0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298db4:
    // 0x298db4: 0x9  jalr        $zero, $zero
label_298db8:
    if (ctx->pc == 0x298DB8u) {
        ctx->pc = 0x298DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB4u;
        // 0x298db8: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DBCu;
        goto label_298dbc;
    }
    ctx->pc = 0x298DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DB4u;
        // 0x298db8: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DB4u, 0x298DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298DBCu;
label_298dbc:
    // 0x298dbc: 0x0  nop
    ctx->pc = 0x298dbcu;
    // NOP
label_298dc0:
    // 0x298dc0: 0x2633a  dsrl        $t4, $v0, 12
    ctx->pc = 0x298dc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> 12);
label_298dc4:
    // 0x298dc4: 0x9  jalr        $zero, $zero
label_298dc8:
    if (ctx->pc == 0x298DC8u) {
        ctx->pc = 0x298DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DC4u;
        // 0x298dc8: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DCCu;
        goto label_298dcc;
    }
    ctx->pc = 0x298DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DC4u;
        // 0x298dc8: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DC4u, 0x298DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298DCCu;
label_298dcc:
    // 0x298dcc: 0x0  nop
    ctx->pc = 0x298dccu;
    // NOP
label_298dd0:
    // 0x298dd0: 0x26343  sra         $t4, $v0, 13
    ctx->pc = 0x298dd0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 13));
label_298dd4:
    // 0x298dd4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298dd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298dd8:
    // 0x298dd8: 0x4a20  .word       0x00004A20                   # add         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_298ddc:
    // 0x298ddc: 0x0  nop
    ctx->pc = 0x298ddcu;
    // NOP
label_298de0:
    // 0x298de0: 0x2634d  break       2, 397
    ctx->pc = 0x298de0u;
    runtime->handleBreak(rdram, ctx);
label_298de4:
    // 0x298de4: 0x8  jr          $zero
label_298de8:
    if (ctx->pc == 0x298DE8u) {
        ctx->pc = 0x298DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DE4u;
        // 0x298de8: 0x3a00  sll         $a3, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298DECu;
        goto label_298dec;
    }
    ctx->pc = 0x298DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DE4u;
        // 0x298de8: 0x3a00  sll         $a3, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298DECu;
label_298dec:
    // 0x298dec: 0x0  nop
    ctx->pc = 0x298decu;
    // NOP
label_298df0:
    // 0x298df0: 0x26355  .word       0x00026355                   # INVALID     $zero, $v0, 0x6355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298df0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298DF0 raw=0x00026355");
 /* MITIGATED */
label_298df4:
    // 0x298df4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298df4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298df8:
    // 0x298df8: 0x4a90  .word       0x00004A90                   # mfhi        $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298df8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_298dfc:
    // 0x298dfc: 0x0  nop
    ctx->pc = 0x298dfcu;
    // NOP
label_298e00:
    // 0x298e00: 0x2635f  .word       0x0002635F                   # ddivu       $t4, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x298E00 raw=0x0002635F");
 /* MITIGATED */
label_298e04:
    // 0x298e04: 0x9  jalr        $zero, $zero
label_298e08:
    if (ctx->pc == 0x298E08u) {
        ctx->pc = 0x298E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E04u;
        // 0x298e08: 0x4200  sll         $t0, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E0Cu;
        goto label_298e0c;
    }
    ctx->pc = 0x298E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E04u;
        // 0x298e08: 0x4200  sll         $t0, $zero, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E04u, 0x298E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298E0Cu;
label_298e0c:
    // 0x298e0c: 0x0  nop
    ctx->pc = 0x298e0cu;
    // NOP
label_298e10:
    // 0x298e10: 0x26368  .word       0x00026368                   # mfsa        $t4 # 00020340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298e10u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_298e14:
    // 0x298e14: 0x9  jalr        $zero, $zero
label_298e18:
    if (ctx->pc == 0x298E18u) {
        ctx->pc = 0x298E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E14u;
        // 0x298e18: 0x4650  .word       0x00004650                   # mfhi        $t0 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E1Cu;
        goto label_298e1c;
    }
    ctx->pc = 0x298E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E14u;
        // 0x298e18: 0x4650  .word       0x00004650                   # mfhi        $t0 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E14u, 0x298E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298E1Cu;
label_298e1c:
    // 0x298e1c: 0x0  nop
    ctx->pc = 0x298e1cu;
    // NOP
label_298e20:
    // 0x298e20: 0x26371  tgeu        $zero, $v0, 397
    ctx->pc = 0x298e20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298e24:
    // 0x298e24: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298e24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e28:
    // 0x298e28: 0x4c50  .word       0x00004C50                   # mfhi        $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e28u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_298e2c:
    // 0x298e2c: 0x0  nop
    ctx->pc = 0x298e2cu;
    // NOP
label_298e30:
    // 0x298e30: 0x2637b  dsra        $t4, $v0, 13
    ctx->pc = 0x298e30u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> 13);
label_298e34:
    // 0x298e34: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298e34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298e38:
    // 0x298e38: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_298e3c:
    // 0x298e3c: 0x0  nop
    ctx->pc = 0x298e3cu;
    // NOP
label_298e40:
    // 0x298e40: 0x26382  srl         $t4, $v0, 14
    ctx->pc = 0x298e40u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
label_298e44:
    // 0x298e44: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298e44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e48:
    // 0x298e48: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x298e48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298e4c:
    // 0x298e4c: 0x0  nop
    ctx->pc = 0x298e4cu;
    // NOP
label_298e50:
    // 0x298e50: 0x2638d  break       2, 398
    ctx->pc = 0x298e50u;
    runtime->handleBreak(rdram, ctx);
label_298e54:
    // 0x298e54: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298e54u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e58:
    // 0x298e58: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x298e58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_298e5c:
    // 0x298e5c: 0x0  nop
    ctx->pc = 0x298e5cu;
    // NOP
label_298e60:
    // 0x298e60: 0x26398  .word       0x00026398                   # mult        $t4, $zero, $v0 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_298e64:
    // 0x298e64: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298e64u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e68:
    // 0x298e68: 0x4b30  tge         $zero, $zero, 300
    ctx->pc = 0x298e68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298e6c:
    // 0x298e6c: 0x0  nop
    ctx->pc = 0x298e6cu;
    // NOP
label_298e70:
    // 0x298e70: 0x263a2  .word       0x000263A2                   # neg         $t4, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_298e74:
    // 0x298e74: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298e74u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e78:
    // 0x298e78: 0x4a20  .word       0x00004A20                   # add         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_298e7c:
    // 0x298e7c: 0x0  nop
    ctx->pc = 0x298e7cu;
    // NOP
label_298e80:
    // 0x298e80: 0x263ac  .word       0x000263AC                   # dadd        $t4, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_298e84:
    // 0x298e84: 0x9  jalr        $zero, $zero
label_298e88:
    if (ctx->pc == 0x298E88u) {
        ctx->pc = 0x298E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E84u;
        // 0x298e88: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298E8Cu;
        goto label_298e8c;
    }
    ctx->pc = 0x298E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E84u;
        // 0x298e88: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E84u, 0x298E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298E8Cu;
label_298e8c:
    // 0x298e8c: 0x0  nop
    ctx->pc = 0x298e8cu;
    // NOP
label_298e90:
    // 0x298e90: 0x263b5  .word       0x000263B5                   # INVALID     $zero, $v0, 0x63B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298e90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298E90 raw=0x000263B5");
 /* MITIGATED */
label_298e94:
    // 0x298e94: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298e94u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298e98:
    // 0x298e98: 0x4ab0  tge         $zero, $zero, 298
    ctx->pc = 0x298e98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298e9c:
    // 0x298e9c: 0x0  nop
    ctx->pc = 0x298e9cu;
    // NOP
label_298ea0:
    // 0x298ea0: 0x263bf  dsra32      $t4, $v0, 14
    ctx->pc = 0x298ea0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 14));
label_298ea4:
    // 0x298ea4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298ea4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298ea8:
    // 0x298ea8: 0x3250  .word       0x00003250                   # mfhi        $a2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ea8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_298eac:
    // 0x298eac: 0x0  nop
    ctx->pc = 0x298eacu;
    // NOP
label_298eb0:
    // 0x298eb0: 0x263c6  .word       0x000263C6                   # srlv        $t4, $v0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298eb4:
    // 0x298eb4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298eb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298eb8:
    // 0x298eb8: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x298eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298ebc:
    // 0x298ebc: 0x0  nop
    ctx->pc = 0x298ebcu;
    // NOP
label_298ec0:
    // 0x298ec0: 0x263d1  .word       0x000263D1                   # mthi        $zero # 000263C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ec0u;
    ctx->hi = GPR_U64(ctx, 0);
label_298ec4:
    // 0x298ec4: 0xc  syscall     0
    ctx->pc = 0x298ec4u;
    ctx->pc = 0x298EC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_298ec8:
    // 0x298ec8: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ec8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_298ecc:
    // 0x298ecc: 0x0  nop
    ctx->pc = 0x298eccu;
    // NOP
label_298ed0:
    // 0x298ed0: 0x263dd  .word       0x000263DD                   # dmultu      $zero, $v0 # 000063C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ed0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298ED0 raw=0x000263DD");
 /* MITIGATED */
label_298ed4:
    // 0x298ed4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298ed4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298ed8:
    // 0x298ed8: 0x53f0  tge         $zero, $zero, 335
    ctx->pc = 0x298ed8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298edc:
    // 0x298edc: 0x0  nop
    ctx->pc = 0x298edcu;
    // NOP
label_298ee0:
    // 0x298ee0: 0x263e8  .word       0x000263E8                   # mfsa        $t4 # 000203C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298ee0u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_298ee4:
    // 0x298ee4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298ee4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298ee8:
    // 0x298ee8: 0x3200  sll         $a2, $zero, 8
    ctx->pc = 0x298ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_298eec:
    // 0x298eec: 0x0  nop
    ctx->pc = 0x298eecu;
    // NOP
label_298ef0:
    // 0x298ef0: 0x263ef  .word       0x000263EF                   # dsubu       $t4, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_298ef4:
    // 0x298ef4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298ef4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298ef8:
    // 0x298ef8: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ef8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_298efc:
    // 0x298efc: 0x0  nop
    ctx->pc = 0x298efcu;
    // NOP
label_298f00:
    // 0x298f00: 0x263f9  .word       0x000263F9                   # INVALID     $zero, $v0, 0x63F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298F00 raw=0x000263F9");
 /* MITIGATED */
label_298f04:
    // 0x298f04: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x298f04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298f08:
    // 0x298f08: 0x50a0  .word       0x000050A0                   # add         $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_298f0c:
    // 0x298f0c: 0x0  nop
    ctx->pc = 0x298f0cu;
    // NOP
label_298f10:
    // 0x298f10: 0x26404  .word       0x00026404                   # sllv        $t4, $v0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298f14:
    // 0x298f14: 0x9  jalr        $zero, $zero
label_298f18:
    if (ctx->pc == 0x298F18u) {
        ctx->pc = 0x298F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F14u;
        // 0x298f18: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F1Cu;
        goto label_298f1c;
    }
    ctx->pc = 0x298F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F14u;
        // 0x298f18: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F14u, 0x298F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298F1Cu;
label_298f1c:
    // 0x298f1c: 0x0  nop
    ctx->pc = 0x298f1cu;
    // NOP
label_298f20:
    // 0x298f20: 0x2640d  break       2, 400
    ctx->pc = 0x298f20u;
    runtime->handleBreak(rdram, ctx);
label_298f24:
    // 0x298f24: 0x9  jalr        $zero, $zero
label_298f28:
    if (ctx->pc == 0x298F28u) {
        ctx->pc = 0x298F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F24u;
        // 0x298f28: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298F2Cu;
        goto label_298f2c;
    }
    ctx->pc = 0x298F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F24u;
        // 0x298f28: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F24u, 0x298F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298F2Cu;
label_298f2c:
    // 0x298f2c: 0x0  nop
    ctx->pc = 0x298f2cu;
    // NOP
label_298f30:
    // 0x298f30: 0x26416  .word       0x00026416                   # dsrlv       $t4, $v0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_298f34:
    // 0x298f34: 0xc  syscall     0
    ctx->pc = 0x298f34u;
    ctx->pc = 0x298F38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_298f38:
    // 0x298f38: 0x5830  tge         $zero, $zero, 352
    ctx->pc = 0x298f38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f3c:
    // 0x298f3c: 0x0  nop
    ctx->pc = 0x298f3cu;
    // NOP
label_298f40:
    // 0x298f40: 0x26422  .word       0x00026422                   # neg         $t4, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_298f44:
    // 0x298f44: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298f44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298f48:
    // 0x298f48: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_298f4c:
    // 0x298f4c: 0x0  nop
    ctx->pc = 0x298f4cu;
    // NOP
label_298f50:
    // 0x298f50: 0x26429  .word       0x00026429                   # mtsa        $zero # 00026400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298f50u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298f54:
    // 0x298f54: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298f54u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f58:
    // 0x298f58: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f58u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298f5c:
    // 0x298f5c: 0x0  nop
    ctx->pc = 0x298f5cu;
    // NOP
label_298f60:
    // 0x298f60: 0x2645c  .word       0x0002645C                   # dmult       $zero, $v0 # 00006440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298F60 raw=0x0002645C");
 /* MITIGATED */
label_298f64:
    // 0x298f64: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298f64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f68:
    // 0x298f68: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f68u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298f6c:
    // 0x298f6c: 0x0  nop
    ctx->pc = 0x298f6cu;
    // NOP
label_298f70:
    // 0x298f70: 0x2648f  .word       0x0002648F                   # sync.p # 00026000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_298f74:
    // 0x298f74: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298f74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f78:
    // 0x298f78: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f78u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298f7c:
    // 0x298f7c: 0x0  nop
    ctx->pc = 0x298f7cu;
    // NOP
label_298f80:
    // 0x298f80: 0x264c2  srl         $t4, $v0, 19
    ctx->pc = 0x298f80u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_298f84:
    // 0x298f84: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298f84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f88:
    // 0x298f88: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f88u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298f8c:
    // 0x298f8c: 0x0  nop
    ctx->pc = 0x298f8cu;
    // NOP
label_298f90:
    // 0x298f90: 0x264f5  .word       0x000264F5                   # INVALID     $zero, $v0, 0x64F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298F90 raw=0x000264F5");
 /* MITIGATED */
label_298f94:
    // 0x298f94: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298f94u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298f98:
    // 0x298f98: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298f98u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298f9c:
    // 0x298f9c: 0x0  nop
    ctx->pc = 0x298f9cu;
    // NOP
label_298fa0:
    // 0x298fa0: 0x26528  .word       0x00026528                   # mfsa        $t4 # 00020500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298fa0u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_298fa4:
    // 0x298fa4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298fa4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298fa8:
    // 0x298fa8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fa8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298fac:
    // 0x298fac: 0x0  nop
    ctx->pc = 0x298facu;
    // NOP
label_298fb0:
    // 0x298fb0: 0x2655b  .word       0x0002655B                   # divu        $t4, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fb0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_298fb4:
    // 0x298fb4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298fb4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298fb8:
    // 0x298fb8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fb8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298fbc:
    // 0x298fbc: 0x0  nop
    ctx->pc = 0x298fbcu;
    // NOP
label_298fc0:
    // 0x298fc0: 0x2658e  .word       0x0002658E                   # INVALID     $zero, $v0, 0x658E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x298FC0 raw=0x0002658E");
 /* MITIGATED */
label_298fc4:
    // 0x298fc4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298fc4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298fc8:
    // 0x298fc8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fc8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298fcc:
    // 0x298fcc: 0x0  nop
    ctx->pc = 0x298fccu;
    // NOP
label_298fd0:
    // 0x298fd0: 0x265c1  .word       0x000265C1                   # INVALID     $zero, $v0, 0x65C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298FD0 raw=0x000265C1");
 /* MITIGATED */
label_298fd4:
    // 0x298fd4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298fd4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298fd8:
    // 0x298fd8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fd8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298fdc:
    // 0x298fdc: 0x0  nop
    ctx->pc = 0x298fdcu;
    // NOP
label_298fe0:
    // 0x298fe0: 0x265f4  teq         $zero, $v0, 407
    ctx->pc = 0x298fe0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298fe4:
    // 0x298fe4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298fe4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298fe8:
    // 0x298fe8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298fe8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298fec:
    // 0x298fec: 0x0  nop
    ctx->pc = 0x298fecu;
    // NOP
label_298ff0:
    // 0x298ff0: 0x26627  .word       0x00026627                   # nor         $t4, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ff0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_298ff4:
    // 0x298ff4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x298ff4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298ff8:
    // 0x298ff8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ff8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298ffc:
    // 0x298ffc: 0x0  nop
    ctx->pc = 0x298ffcu;
    // NOP
label_299000:
    // 0x299000: 0x2665a  .word       0x0002665A                   # div         $t4, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299000u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_299004:
    // 0x299004: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299004u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299008:
    // 0x299008: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299008u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29900c:
    // 0x29900c: 0x0  nop
    ctx->pc = 0x29900cu;
    // NOP
label_299010:
    // 0x299010: 0x2668d  break       2, 410
    ctx->pc = 0x299010u;
    runtime->handleBreak(rdram, ctx);
label_299014:
    // 0x299014: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299014u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299018:
    // 0x299018: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299018u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29901c:
    // 0x29901c: 0x0  nop
    ctx->pc = 0x29901cu;
    // NOP
label_299020:
    // 0x299020: 0x266c0  sll         $t4, $v0, 27
    ctx->pc = 0x299020u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
label_299024:
    // 0x299024: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299024u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299028:
    // 0x299028: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299028u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29902c:
    // 0x29902c: 0x0  nop
    ctx->pc = 0x29902cu;
    // NOP
label_299030:
    // 0x299030: 0x266f3  tltu        $zero, $v0, 411
    ctx->pc = 0x299030u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299034:
    // 0x299034: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299034u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299038:
    // 0x299038: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299038u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29903c:
    // 0x29903c: 0x0  nop
    ctx->pc = 0x29903cu;
    // NOP
label_299040:
    // 0x299040: 0x26726  .word       0x00026726                   # xor         $t4, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299040u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_299044:
    // 0x299044: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299044u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299048:
    // 0x299048: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299048u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29904c:
    // 0x29904c: 0x0  nop
    ctx->pc = 0x29904cu;
    // NOP
label_299050:
    // 0x299050: 0x26759  .word       0x00026759                   # multu       $zero, $v0 # 00006740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299050u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_299054:
    // 0x299054: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299054u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299058:
    // 0x299058: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299058u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29905c:
    // 0x29905c: 0x0  nop
    ctx->pc = 0x29905cu;
    // NOP
label_299060:
    // 0x299060: 0x2678c  .word       0x0002678C                   # syscall     414 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299060u;
    ctx->pc = 0x299064u;
runtime->handleSyscall(rdram, ctx, 0x99Eu);
label_299064:
    // 0x299064: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299064u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299068:
    // 0x299068: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299068u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29906c:
    // 0x29906c: 0x0  nop
    ctx->pc = 0x29906cu;
    // NOP
label_299070:
    // 0x299070: 0x267bf  dsra32      $t4, $v0, 30
    ctx->pc = 0x299070u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 2) >> (32 + 30));
label_299074:
    // 0x299074: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299074u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299078:
    // 0x299078: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299078u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29907c:
    // 0x29907c: 0x0  nop
    ctx->pc = 0x29907cu;
    // NOP
label_299080:
    // 0x299080: 0x267f2  tlt         $zero, $v0, 415
    ctx->pc = 0x299080u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299084:
    // 0x299084: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299084u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299088:
    // 0x299088: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299088u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29908c:
    // 0x29908c: 0x0  nop
    ctx->pc = 0x29908cu;
    // NOP
label_299090:
    // 0x299090: 0x26825  or          $t5, $zero, $v0
    ctx->pc = 0x299090u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_299094:
    // 0x299094: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299094u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299098:
    // 0x299098: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299098u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29909c:
    // 0x29909c: 0x0  nop
    ctx->pc = 0x29909cu;
    // NOP
label_2990a0:
    // 0x2990a0: 0x26858  .word       0x00026858                   # mult        $t5, $zero, $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2990a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2990a4:
    // 0x2990a4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990a4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990a8:
    // 0x2990a8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990a8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990ac:
    // 0x2990ac: 0x0  nop
    ctx->pc = 0x2990acu;
    // NOP
label_2990b0:
    // 0x2990b0: 0x2688b  .word       0x0002688B                   # movn        $t5, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_2990b4:
    // 0x2990b4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990b8:
    // 0x2990b8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990bc:
    // 0x2990bc: 0x0  nop
    ctx->pc = 0x2990bcu;
    // NOP
label_2990c0:
    // 0x2990c0: 0x268be  dsrl32      $t5, $v0, 2
    ctx->pc = 0x2990c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 2));
label_2990c4:
    // 0x2990c4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990c8:
    // 0x2990c8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990c8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990cc:
    // 0x2990cc: 0x0  nop
    ctx->pc = 0x2990ccu;
    // NOP
label_2990d0:
    // 0x2990d0: 0x268f1  tgeu        $zero, $v0, 419
    ctx->pc = 0x2990d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2990d4:
    // 0x2990d4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990d8:
    // 0x2990d8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990dc:
    // 0x2990dc: 0x0  nop
    ctx->pc = 0x2990dcu;
    // NOP
label_2990e0:
    // 0x2990e0: 0x26924  .word       0x00026924                   # and         $t5, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_2990e4:
    // 0x2990e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990e8:
    // 0x2990e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990ec:
    // 0x2990ec: 0x0  nop
    ctx->pc = 0x2990ecu;
    // NOP
label_2990f0:
    // 0x2990f0: 0x26957  .word       0x00026957                   # dsrav       $t5, $v0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990f0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2990f4:
    // 0x2990f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2990f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2990f8:
    // 0x2990f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2990f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2990fc:
    // 0x2990fc: 0x0  nop
    ctx->pc = 0x2990fcu;
    // NOP
label_299100:
    // 0x299100: 0x2698a  .word       0x0002698A                   # movz        $t5, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299100u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_299104:
    // 0x299104: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299104u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299108:
    // 0x299108: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299108u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29910c:
    // 0x29910c: 0x0  nop
    ctx->pc = 0x29910cu;
    // NOP
label_299110:
    // 0x299110: 0x269bd  .word       0x000269BD                   # INVALID     $zero, $v0, 0x69BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299110u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x299110 raw=0x000269BD");
 /* MITIGATED */
label_299114:
    // 0x299114: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299114u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299118:
    // 0x299118: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299118u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29911c:
    // 0x29911c: 0x0  nop
    ctx->pc = 0x29911cu;
    // NOP
label_299120:
    // 0x299120: 0x269f0  tge         $zero, $v0, 423
    ctx->pc = 0x299120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299124:
    // 0x299124: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299124u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299128:
    // 0x299128: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299128u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29912c:
    // 0x29912c: 0x0  nop
    ctx->pc = 0x29912cu;
    // NOP
label_299130:
    // 0x299130: 0x26a23  .word       0x00026A23                   # negu        $t5, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299134:
    // 0x299134: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299134u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299138:
    // 0x299138: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299138u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29913c:
    // 0x29913c: 0x0  nop
    ctx->pc = 0x29913cu;
    // NOP
label_299140:
    // 0x299140: 0x26a56  .word       0x00026A56                   # dsrlv       $t5, $v0, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299140u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299144:
    // 0x299144: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299144u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299148:
    // 0x299148: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29914c:
    // 0x29914c: 0x0  nop
    ctx->pc = 0x29914cu;
    // NOP
label_299150:
    // 0x299150: 0x26a89  .word       0x00026A89                   # jalr        $t5, $zero # 00020280 <InstrIdType: CPU_SPECIAL>
label_299154:
    if (ctx->pc == 0x299154u) {
        ctx->pc = 0x299154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299150u;
        // 0x299154: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299158u;
        goto label_299158;
    }
    ctx->pc = 0x299150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x299158u);
        ctx->pc = 0x299154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299150u;
        // 0x299154: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299150u, 0x299158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299158u;
label_299158:
    // 0x299158: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299158u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29915c:
    // 0x29915c: 0x0  nop
    ctx->pc = 0x29915cu;
    // NOP
label_299160:
    // 0x299160: 0x26abc  dsll32      $t5, $v0, 10
    ctx->pc = 0x299160u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 10));
label_299164:
    // 0x299164: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299164u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299168:
    // 0x299168: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299168u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29916c:
    // 0x29916c: 0x0  nop
    ctx->pc = 0x29916cu;
    // NOP
label_299170:
    // 0x299170: 0x26aef  .word       0x00026AEF                   # dsubu       $t5, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299170u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_299174:
    // 0x299174: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299174u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299178:
    // 0x299178: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299178u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29917c:
    // 0x29917c: 0x0  nop
    ctx->pc = 0x29917cu;
    // NOP
label_299180:
    // 0x299180: 0x26b22  .word       0x00026B22                   # neg         $t5, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299180u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_299184:
    // 0x299184: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299184u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299188:
    // 0x299188: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299188u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29918c:
    // 0x29918c: 0x0  nop
    ctx->pc = 0x29918cu;
    // NOP
label_299190:
    // 0x299190: 0x26b55  .word       0x00026B55                   # INVALID     $zero, $v0, 0x6B55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299190u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299190 raw=0x00026B55");
 /* MITIGATED */
label_299194:
    // 0x299194: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x299194u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299198:
    // 0x299198: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299198u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29919c:
    // 0x29919c: 0x0  nop
    ctx->pc = 0x29919cu;
    // NOP
label_2991a0:
    // 0x2991a0: 0x26b88  .word       0x00026B88                   # jr          $zero # 00026B80 <InstrIdType: CPU_SPECIAL>
label_2991a4:
    if (ctx->pc == 0x2991A4u) {
        ctx->pc = 0x2991A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A0u;
        // 0x2991a4: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2991A8u;
        goto label_2991a8;
    }
    ctx->pc = 0x2991A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2991A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991A0u;
        // 0x2991a4: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2991A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2991A8u;
label_2991a8:
    // 0x2991a8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991a8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991ac:
    // 0x2991ac: 0x0  nop
    ctx->pc = 0x2991acu;
    // NOP
label_2991b0:
    // 0x2991b0: 0x26bbb  dsra        $t5, $v0, 14
    ctx->pc = 0x2991b0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> 14);
label_2991b4:
    // 0x2991b4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2991b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2991b8:
    // 0x2991b8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991bc:
    // 0x2991bc: 0x0  nop
    ctx->pc = 0x2991bcu;
    // NOP
label_2991c0:
    // 0x2991c0: 0x26bee  .word       0x00026BEE                   # dsub        $t5, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2991c4:
    // 0x2991c4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2991c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2991c8:
    // 0x2991c8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991c8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991cc:
    // 0x2991cc: 0x0  nop
    ctx->pc = 0x2991ccu;
    // NOP
label_2991d0:
    // 0x2991d0: 0x26c21  .word       0x00026C21                   # addu        $t5, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2991d4:
    // 0x2991d4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2991d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2991d8:
    // 0x2991d8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991dc:
    // 0x2991dc: 0x0  nop
    ctx->pc = 0x2991dcu;
    // NOP
label_2991e0:
    // 0x2991e0: 0x26c54  .word       0x00026C54                   # dsllv       $t5, $v0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_2991e4:
    // 0x2991e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2991e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2991e8:
    // 0x2991e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991ec:
    // 0x2991ec: 0x0  nop
    ctx->pc = 0x2991ecu;
    // NOP
label_2991f0:
    // 0x2991f0: 0x26c87  .word       0x00026C87                   # srav        $t5, $v0, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991f0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2991f4:
    // 0x2991f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2991f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2991f8:
    // 0x2991f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2991f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2991fc:
    // 0x2991fc: 0x0  nop
    ctx->pc = 0x2991fcu;
    // NOP
label_299200:
    // 0x299200: 0x26cba  dsrl        $t5, $v0, 18
    ctx->pc = 0x299200u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> 18);
label_299204:
    // 0x299204: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299204u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x299204 raw=0x0000009C");
 /* MITIGATED */
label_299208:
    // 0x299208: 0x4dc50  .word       0x0004DC50                   # mfhi        $k1 # 00040440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299208u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_29920c:
    // 0x29920c: 0x0  nop
    ctx->pc = 0x29920cu;
    // NOP
label_299210:
    // 0x299210: 0x26d56  .word       0x00026D56                   # dsrlv       $t5, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299210u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299214:
    // 0x299214: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299214u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x299214 raw=0x0000009D");
 /* MITIGATED */
label_299218:
    // 0x299218: 0x4e0a0  .word       0x0004E0A0                   # add         $gp, $zero, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_29921c:
    // 0x29921c: 0x0  nop
    ctx->pc = 0x29921cu;
    // NOP
label_299220:
    // 0x299220: 0x26df3  tltu        $zero, $v0, 439
    ctx->pc = 0x299220u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299224:
    // 0x299224: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299224u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299228:
    // 0x299228: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299228u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29922c:
    // 0x29922c: 0x0  nop
    ctx->pc = 0x29922cu;
    // NOP
label_299230:
    // 0x299230: 0x26e0e  .word       0x00026E0E                   # INVALID     $zero, $v0, 0x6E0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299230u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x299230 raw=0x00026E0E");
 /* MITIGATED */
label_299234:
    // 0x299234: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299234u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299238:
    // 0x299238: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299238u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29923c:
    // 0x29923c: 0x0  nop
    ctx->pc = 0x29923cu;
    // NOP
label_299240:
    // 0x299240: 0x26e29  .word       0x00026E29                   # mtsa        $zero # 00026E00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299240u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299244:
    // 0x299244: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299244u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299248:
    // 0x299248: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29924c:
    // 0x29924c: 0x0  nop
    ctx->pc = 0x29924cu;
    // NOP
label_299250:
    // 0x299250: 0x26e44  .word       0x00026E44                   # sllv        $t5, $v0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299250u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299254:
    // 0x299254: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299254u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299258:
    // 0x299258: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299258u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29925c:
    // 0x29925c: 0x0  nop
    ctx->pc = 0x29925cu;
    // NOP
label_299260:
    // 0x299260: 0x26e5f  .word       0x00026E5F                   # ddivu       $t5, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299260u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x299260 raw=0x00026E5F");
 /* MITIGATED */
label_299264:
    // 0x299264: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299264u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299268:
    // 0x299268: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299268u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29926c:
    // 0x29926c: 0x0  nop
    ctx->pc = 0x29926cu;
    // NOP
label_299270:
    // 0x299270: 0x26e7a  dsrl        $t5, $v0, 25
    ctx->pc = 0x299270u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> 25);
label_299274:
    // 0x299274: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299274u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299278:
    // 0x299278: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299278u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29927c:
    // 0x29927c: 0x0  nop
    ctx->pc = 0x29927cu;
    // NOP
label_299280:
    // 0x299280: 0x26e95  .word       0x00026E95                   # INVALID     $zero, $v0, 0x6E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299280u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299280 raw=0x00026E95");
 /* MITIGATED */
label_299284:
    // 0x299284: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299284u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299288:
    // 0x299288: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299288u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29928c:
    // 0x29928c: 0x0  nop
    ctx->pc = 0x29928cu;
    // NOP
label_299290:
    // 0x299290: 0x26eb0  tge         $zero, $v0, 442
    ctx->pc = 0x299290u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299294:
    // 0x299294: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299294u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299298:
    // 0x299298: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29929c:
    // 0x29929c: 0x0  nop
    ctx->pc = 0x29929cu;
    // NOP
label_2992a0:
    // 0x2992a0: 0x26ecb  .word       0x00026ECB                   # movn        $t5, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_2992a4:
    // 0x2992a4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992a8:
    // 0x2992a8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992a8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992ac:
    // 0x2992ac: 0x0  nop
    ctx->pc = 0x2992acu;
    // NOP
label_2992b0:
    // 0x2992b0: 0x26ee6  .word       0x00026EE6                   # xor         $t5, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_2992b4:
    // 0x2992b4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992b4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992b8:
    // 0x2992b8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992b8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992bc:
    // 0x2992bc: 0x0  nop
    ctx->pc = 0x2992bcu;
    // NOP
label_2992c0:
    // 0x2992c0: 0x26f01  .word       0x00026F01                   # INVALID     $zero, $v0, 0x6F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2992C0 raw=0x00026F01");
 /* MITIGATED */
label_2992c4:
    // 0x2992c4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992c8:
    // 0x2992c8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992c8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992cc:
    // 0x2992cc: 0x0  nop
    ctx->pc = 0x2992ccu;
    // NOP
label_2992d0:
    // 0x2992d0: 0x26f1c  .word       0x00026F1C                   # dmult       $zero, $v0 # 00006F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2992D0 raw=0x00026F1C");
 /* MITIGATED */
label_2992d4:
    // 0x2992d4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992d8:
    // 0x2992d8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992d8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992dc:
    // 0x2992dc: 0x0  nop
    ctx->pc = 0x2992dcu;
    // NOP
label_2992e0:
    // 0x2992e0: 0x26f37  .word       0x00026F37                   # INVALID     $zero, $v0, 0x6F37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2992E0 raw=0x00026F37");
 /* MITIGATED */
label_2992e4:
    // 0x2992e4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992e4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992e8:
    // 0x2992e8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992e8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992ec:
    // 0x2992ec: 0x0  nop
    ctx->pc = 0x2992ecu;
    // NOP
label_2992f0:
    // 0x2992f0: 0x26f52  .word       0x00026F52                   # mflo        $t5 # 00020740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992f0u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_2992f4:
    // 0x2992f4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2992f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2992f8:
    // 0x2992f8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2992f8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2992fc:
    // 0x2992fc: 0x0  nop
    ctx->pc = 0x2992fcu;
    // NOP
label_299300:
    // 0x299300: 0x26f6d  .word       0x00026F6D                   # daddu       $t5, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299300u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_299304:
    // 0x299304: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299304u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299308:
    // 0x299308: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299308u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29930c:
    // 0x29930c: 0x0  nop
    ctx->pc = 0x29930cu;
    // NOP
label_299310:
    // 0x299310: 0x26f88  .word       0x00026F88                   # jr          $zero # 00026F80 <InstrIdType: CPU_SPECIAL>
label_299314:
    if (ctx->pc == 0x299314u) {
        ctx->pc = 0x299314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299310u;
        // 0x299314: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299318u;
        goto label_299318;
    }
    ctx->pc = 0x299310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x299314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299310u;
        // 0x299314: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x299318u;
label_299318:
    // 0x299318: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299318u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29931c:
    // 0x29931c: 0x0  nop
    ctx->pc = 0x29931cu;
    // NOP
label_299320:
    // 0x299320: 0x26fa3  .word       0x00026FA3                   # negu        $t5, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299320u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299324:
    // 0x299324: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299324u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299328:
    // 0x299328: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299328u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29932c:
    // 0x29932c: 0x0  nop
    ctx->pc = 0x29932cu;
    // NOP
label_299330:
    // 0x299330: 0x26fbe  dsrl32      $t5, $v0, 30
    ctx->pc = 0x299330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 30));
label_299334:
    // 0x299334: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299334u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299338:
    // 0x299338: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299338u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29933c:
    // 0x29933c: 0x0  nop
    ctx->pc = 0x29933cu;
    // NOP
label_299340:
    // 0x299340: 0x26fd9  .word       0x00026FD9                   # multu       $zero, $v0 # 00006FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299340u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_299344:
    // 0x299344: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299344u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299348:
    // 0x299348: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29934c:
    // 0x29934c: 0x0  nop
    ctx->pc = 0x29934cu;
    // NOP
label_299350:
    // 0x299350: 0x26ff4  teq         $zero, $v0, 447
    ctx->pc = 0x299350u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299354:
    // 0x299354: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299354u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299358:
    // 0x299358: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299358u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29935c:
    // 0x29935c: 0x0  nop
    ctx->pc = 0x29935cu;
    // NOP
label_299360:
    // 0x299360: 0x2700f  .word       0x0002700F                   # sync # 00027000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299364:
    // 0x299364: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299364u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299368:
    // 0x299368: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299368u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29936c:
    // 0x29936c: 0x0  nop
    ctx->pc = 0x29936cu;
    // NOP
label_299370:
    // 0x299370: 0x2702a  slt         $t6, $zero, $v0
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299374:
    // 0x299374: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299374u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299378:
    // 0x299378: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299378u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29937c:
    // 0x29937c: 0x0  nop
    ctx->pc = 0x29937cu;
    // NOP
label_299380:
    // 0x299380: 0x27045  .word       0x00027045                   # INVALID     $zero, $v0, 0x7045 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299380u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x299380 raw=0x00027045");
 /* MITIGATED */
label_299384:
    // 0x299384: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299384u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299388:
    // 0x299388: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299388u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29938c:
    // 0x29938c: 0x0  nop
    ctx->pc = 0x29938cu;
    // NOP
label_299390:
    // 0x299390: 0x27060  .word       0x00027060                   # add         $t6, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299390u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_299394:
    // 0x299394: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299394u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299398:
    // 0x299398: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299398u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29939c:
    // 0x29939c: 0x0  nop
    ctx->pc = 0x29939cu;
    // NOP
label_2993a0:
    // 0x2993a0: 0x2707b  dsra        $t6, $v0, 1
    ctx->pc = 0x2993a0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> 1);
label_2993a4:
    // 0x2993a4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993a8:
    // 0x2993a8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993a8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993ac:
    // 0x2993ac: 0x0  nop
    ctx->pc = 0x2993acu;
    // NOP
label_2993b0:
    // 0x2993b0: 0x27096  .word       0x00027096                   # dsrlv       $t6, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2993b4:
    // 0x2993b4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993b4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993b8:
    // 0x2993b8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993b8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993bc:
    // 0x2993bc: 0x0  nop
    ctx->pc = 0x2993bcu;
    // NOP
label_2993c0:
    // 0x2993c0: 0x270b1  tgeu        $zero, $v0, 450
    ctx->pc = 0x2993c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2993c4:
    // 0x2993c4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993c8:
    // 0x2993c8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993c8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993cc:
    // 0x2993cc: 0x0  nop
    ctx->pc = 0x2993ccu;
    // NOP
label_2993d0:
    // 0x2993d0: 0x270cc  .word       0x000270CC                   # syscall     451 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993d0u;
    ctx->pc = 0x2993D4u;
runtime->handleSyscall(rdram, ctx, 0x9C3u);
label_2993d4:
    // 0x2993d4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993d8:
    // 0x2993d8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993d8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993dc:
    // 0x2993dc: 0x0  nop
    ctx->pc = 0x2993dcu;
    // NOP
label_2993e0:
    // 0x2993e0: 0x270e7  .word       0x000270E7                   # nor         $t6, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993e0u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2993e4:
    // 0x2993e4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993e4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993e8:
    // 0x2993e8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993e8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993ec:
    // 0x2993ec: 0x0  nop
    ctx->pc = 0x2993ecu;
    // NOP
label_2993f0:
    // 0x2993f0: 0x27102  srl         $t6, $v0, 4
    ctx->pc = 0x2993f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2993f4:
    // 0x2993f4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2993f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2993f8:
    // 0x2993f8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2993f8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2993fc:
    // 0x2993fc: 0x0  nop
    ctx->pc = 0x2993fcu;
    // NOP
label_299400:
    // 0x299400: 0x2711d  .word       0x0002711D                   # dmultu      $zero, $v0 # 00007100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299400u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x299400 raw=0x0002711D");
 /* MITIGATED */
label_299404:
    // 0x299404: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299404u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299408:
    // 0x299408: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299408u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29940c:
    // 0x29940c: 0x0  nop
    ctx->pc = 0x29940cu;
    // NOP
label_299410:
    // 0x299410: 0x27138  dsll        $t6, $v0, 4
    ctx->pc = 0x299410u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << 4);
label_299414:
    // 0x299414: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299414u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299418:
    // 0x299418: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29941c:
    // 0x29941c: 0x0  nop
    ctx->pc = 0x29941cu;
    // NOP
label_299420:
    // 0x299420: 0x27153  .word       0x00027153                   # mtlo        $zero # 00027140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299420u;
    ctx->lo = GPR_U64(ctx, 0);
label_299424:
    // 0x299424: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299424u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299428:
    // 0x299428: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299428u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29942c:
    // 0x29942c: 0x0  nop
    ctx->pc = 0x29942cu;
    // NOP
label_299430:
    // 0x299430: 0x2716e  .word       0x0002716E                   # dsub        $t6, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299430u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_299434:
    // 0x299434: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299434u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299438:
    // 0x299438: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299438u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29943c:
    // 0x29943c: 0x0  nop
    ctx->pc = 0x29943cu;
    // NOP
label_299440:
    // 0x299440: 0x27189  .word       0x00027189                   # jalr        $t6, $zero # 00020180 <InstrIdType: CPU_SPECIAL>
label_299444:
    if (ctx->pc == 0x299444u) {
        ctx->pc = 0x299444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299440u;
        // 0x299444: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299448u;
        goto label_299448;
    }
    ctx->pc = 0x299440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x299448u);
        ctx->pc = 0x299444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299440u;
        // 0x299444: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299440u, 0x299448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299448u;
label_299448:
    // 0x299448: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299448u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29944c:
    // 0x29944c: 0x0  nop
    ctx->pc = 0x29944cu;
    // NOP
label_299450:
    // 0x299450: 0x271a4  .word       0x000271A4                   # and         $t6, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299450u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_299454:
    // 0x299454: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299454u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299458:
    // 0x299458: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299458u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29945c:
    // 0x29945c: 0x0  nop
    ctx->pc = 0x29945cu;
    // NOP
label_299460:
    // 0x299460: 0x271bf  dsra32      $t6, $v0, 6
    ctx->pc = 0x299460u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 2) >> (32 + 6));
label_299464:
    // 0x299464: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299464u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299468:
    // 0x299468: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299468u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29946c:
    // 0x29946c: 0x0  nop
    ctx->pc = 0x29946cu;
    // NOP
label_299470:
    // 0x299470: 0x271da  .word       0x000271DA                   # div         $t6, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299470u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_299474:
    // 0x299474: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299474u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299478:
    // 0x299478: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299478u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29947c:
    // 0x29947c: 0x0  nop
    ctx->pc = 0x29947cu;
    // NOP
label_299480:
    // 0x299480: 0x271f5  .word       0x000271F5                   # INVALID     $zero, $v0, 0x71F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299480u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x299480 raw=0x000271F5");
 /* MITIGATED */
label_299484:
    // 0x299484: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299484u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299488:
    // 0x299488: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29948c:
    // 0x29948c: 0x0  nop
    ctx->pc = 0x29948cu;
    // NOP
label_299490:
    // 0x299490: 0x27210  .word       0x00027210                   # mfhi        $t6 # 00020200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299490u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_299494:
    // 0x299494: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x299494u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299498:
    // 0x299498: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299498u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29949c:
    // 0x29949c: 0x0  nop
    ctx->pc = 0x29949cu;
    // NOP
label_2994a0:
    // 0x2994a0: 0x2722b  .word       0x0002722B                   # sltu        $t6, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2994a0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2994a4:
    // 0x2994a4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2994a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2994a8:
    // 0x2994a8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2994a8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2994ac:
    // 0x2994ac: 0x0  nop
    ctx->pc = 0x2994acu;
    // NOP
    ctx->pc = 0x2994b0u;
    return;
}
