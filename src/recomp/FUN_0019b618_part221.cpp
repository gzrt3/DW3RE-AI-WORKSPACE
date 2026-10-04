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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part221(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x206cd8u: goto label_206cd8;
        case 0x206cdcu: goto label_206cdc;
        case 0x206ce0u: goto label_206ce0;
        case 0x206ce4u: goto label_206ce4;
        case 0x206ce8u: goto label_206ce8;
        case 0x206cecu: goto label_206cec;
        case 0x206cf0u: goto label_206cf0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206cf8u: goto label_206cf8;
        case 0x206cfcu: goto label_206cfc;
        case 0x206d00u: goto label_206d00;
        case 0x206d04u: goto label_206d04;
        case 0x206d08u: goto label_206d08;
        case 0x206d0cu: goto label_206d0c;
        case 0x206d10u: goto label_206d10;
        case 0x206d14u: goto label_206d14;
        case 0x206d18u: goto label_206d18;
        case 0x206d1cu: goto label_206d1c;
        case 0x206d20u: goto label_206d20;
        case 0x206d24u: goto label_206d24;
        case 0x206d28u: goto label_206d28;
        case 0x206d2cu: goto label_206d2c;
        case 0x206d30u: goto label_206d30;
        case 0x206d34u: goto label_206d34;
        case 0x206d38u: goto label_206d38;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d40u: goto label_206d40;
        case 0x206d44u: goto label_206d44;
        case 0x206d48u: goto label_206d48;
        case 0x206d4cu: goto label_206d4c;
        case 0x206d50u: goto label_206d50;
        case 0x206d54u: goto label_206d54;
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        case 0x206d88u: goto label_206d88;
        case 0x206d8cu: goto label_206d8c;
        case 0x206d90u: goto label_206d90;
        case 0x206d94u: goto label_206d94;
        case 0x206d98u: goto label_206d98;
        case 0x206d9cu: goto label_206d9c;
        case 0x206da0u: goto label_206da0;
        case 0x206da4u: goto label_206da4;
        case 0x206da8u: goto label_206da8;
        case 0x206dacu: goto label_206dac;
        case 0x206db0u: goto label_206db0;
        case 0x206db4u: goto label_206db4;
        case 0x206db8u: goto label_206db8;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dc0u: goto label_206dc0;
        case 0x206dc4u: goto label_206dc4;
        case 0x206dc8u: goto label_206dc8;
        case 0x206dccu: goto label_206dcc;
        case 0x206dd0u: goto label_206dd0;
        case 0x206dd4u: goto label_206dd4;
        case 0x206dd8u: goto label_206dd8;
        case 0x206ddcu: goto label_206ddc;
        case 0x206de0u: goto label_206de0;
        case 0x206de4u: goto label_206de4;
        case 0x206de8u: goto label_206de8;
        case 0x206decu: goto label_206dec;
        case 0x206df0u: goto label_206df0;
        case 0x206df4u: goto label_206df4;
        case 0x206df8u: goto label_206df8;
        case 0x206dfcu: goto label_206dfc;
        case 0x206e00u: goto label_206e00;
        case 0x206e04u: goto label_206e04;
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        case 0x206e50u: goto label_206e50;
        case 0x206e54u: goto label_206e54;
        case 0x206e58u: goto label_206e58;
        case 0x206e5cu: goto label_206e5c;
        case 0x206e60u: goto label_206e60;
        case 0x206e64u: goto label_206e64;
        case 0x206e68u: goto label_206e68;
        case 0x206e6cu: goto label_206e6c;
        case 0x206e70u: goto label_206e70;
        case 0x206e74u: goto label_206e74;
        case 0x206e78u: goto label_206e78;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e80u: goto label_206e80;
        case 0x206e84u: goto label_206e84;
        case 0x206e88u: goto label_206e88;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e90u: goto label_206e90;
        case 0x206e94u: goto label_206e94;
        case 0x206e98u: goto label_206e98;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ea0u: goto label_206ea0;
        case 0x206ea4u: goto label_206ea4;
        case 0x206ea8u: goto label_206ea8;
        case 0x206eacu: goto label_206eac;
        case 0x206eb0u: goto label_206eb0;
        case 0x206eb4u: goto label_206eb4;
        case 0x206eb8u: goto label_206eb8;
        case 0x206ebcu: goto label_206ebc;
        case 0x206ec0u: goto label_206ec0;
        case 0x206ec4u: goto label_206ec4;
        case 0x206ec8u: goto label_206ec8;
        case 0x206eccu: goto label_206ecc;
        case 0x206ed0u: goto label_206ed0;
        case 0x206ed4u: goto label_206ed4;
        case 0x206ed8u: goto label_206ed8;
        case 0x206edcu: goto label_206edc;
        case 0x206ee0u: goto label_206ee0;
        case 0x206ee4u: goto label_206ee4;
        case 0x206ee8u: goto label_206ee8;
        case 0x206eecu: goto label_206eec;
        case 0x206ef0u: goto label_206ef0;
        case 0x206ef4u: goto label_206ef4;
        case 0x206ef8u: goto label_206ef8;
        case 0x206efcu: goto label_206efc;
        case 0x206f00u: goto label_206f00;
        case 0x206f04u: goto label_206f04;
        case 0x206f08u: goto label_206f08;
        case 0x206f0cu: goto label_206f0c;
        case 0x206f10u: goto label_206f10;
        case 0x206f14u: goto label_206f14;
        case 0x206f18u: goto label_206f18;
        case 0x206f1cu: goto label_206f1c;
        case 0x206f20u: goto label_206f20;
        case 0x206f24u: goto label_206f24;
        case 0x206f28u: goto label_206f28;
        case 0x206f2cu: goto label_206f2c;
        case 0x206f30u: goto label_206f30;
        case 0x206f34u: goto label_206f34;
        case 0x206f38u: goto label_206f38;
        case 0x206f3cu: goto label_206f3c;
        case 0x206f40u: goto label_206f40;
        case 0x206f44u: goto label_206f44;
        case 0x206f48u: goto label_206f48;
        case 0x206f4cu: goto label_206f4c;
        case 0x206f50u: goto label_206f50;
        case 0x206f54u: goto label_206f54;
        case 0x206f58u: goto label_206f58;
        case 0x206f5cu: goto label_206f5c;
        case 0x206f60u: goto label_206f60;
        case 0x206f64u: goto label_206f64;
        case 0x206f68u: goto label_206f68;
        case 0x206f6cu: goto label_206f6c;
        case 0x206f70u: goto label_206f70;
        case 0x206f74u: goto label_206f74;
        case 0x206f78u: goto label_206f78;
        case 0x206f7cu: goto label_206f7c;
        case 0x206f80u: goto label_206f80;
        case 0x206f84u: goto label_206f84;
        case 0x206f88u: goto label_206f88;
        case 0x206f8cu: goto label_206f8c;
        case 0x206f90u: goto label_206f90;
        case 0x206f94u: goto label_206f94;
        case 0x206f98u: goto label_206f98;
        case 0x206f9cu: goto label_206f9c;
        case 0x206fa0u: goto label_206fa0;
        case 0x206fa4u: goto label_206fa4;
        case 0x206fa8u: goto label_206fa8;
        case 0x206facu: goto label_206fac;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fb4u: goto label_206fb4;
        case 0x206fb8u: goto label_206fb8;
        case 0x206fbcu: goto label_206fbc;
        case 0x206fc0u: goto label_206fc0;
        case 0x206fc4u: goto label_206fc4;
        case 0x206fc8u: goto label_206fc8;
        case 0x206fccu: goto label_206fcc;
        case 0x206fd0u: goto label_206fd0;
        case 0x206fd4u: goto label_206fd4;
        case 0x206fd8u: goto label_206fd8;
        case 0x206fdcu: goto label_206fdc;
        case 0x206fe0u: goto label_206fe0;
        case 0x206fe4u: goto label_206fe4;
        case 0x206fe8u: goto label_206fe8;
        case 0x206fecu: goto label_206fec;
        case 0x206ff0u: goto label_206ff0;
        case 0x206ff4u: goto label_206ff4;
        case 0x206ff8u: goto label_206ff8;
        case 0x206ffcu: goto label_206ffc;
        case 0x207000u: goto label_207000;
        case 0x207004u: goto label_207004;
        case 0x207008u: goto label_207008;
        case 0x20700cu: goto label_20700c;
        case 0x207010u: goto label_207010;
        case 0x207014u: goto label_207014;
        case 0x207018u: goto label_207018;
        case 0x20701cu: goto label_20701c;
        case 0x207020u: goto label_207020;
        case 0x207024u: goto label_207024;
        case 0x207028u: goto label_207028;
        case 0x20702cu: goto label_20702c;
        case 0x207030u: goto label_207030;
        case 0x207034u: goto label_207034;
        case 0x207038u: goto label_207038;
        case 0x20703cu: goto label_20703c;
        case 0x207040u: goto label_207040;
        case 0x207044u: goto label_207044;
        case 0x207048u: goto label_207048;
        case 0x20704cu: goto label_20704c;
        case 0x207050u: goto label_207050;
        case 0x207054u: goto label_207054;
        case 0x207058u: goto label_207058;
        case 0x20705cu: goto label_20705c;
        case 0x207060u: goto label_207060;
        case 0x207064u: goto label_207064;
        case 0x207068u: goto label_207068;
        case 0x20706cu: goto label_20706c;
        case 0x207070u: goto label_207070;
        case 0x207074u: goto label_207074;
        case 0x207078u: goto label_207078;
        case 0x20707cu: goto label_20707c;
        case 0x207080u: goto label_207080;
        case 0x207084u: goto label_207084;
        case 0x207088u: goto label_207088;
        case 0x20708cu: goto label_20708c;
        case 0x207090u: goto label_207090;
        case 0x207094u: goto label_207094;
        case 0x207098u: goto label_207098;
        case 0x20709cu: goto label_20709c;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a4u: goto label_2070a4;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070acu: goto label_2070ac;
        case 0x2070b0u: goto label_2070b0;
        case 0x2070b4u: goto label_2070b4;
        case 0x2070b8u: goto label_2070b8;
        case 0x2070bcu: goto label_2070bc;
        case 0x2070c0u: goto label_2070c0;
        case 0x2070c4u: goto label_2070c4;
        case 0x2070c8u: goto label_2070c8;
        case 0x2070ccu: goto label_2070cc;
        case 0x2070d0u: goto label_2070d0;
        case 0x2070d4u: goto label_2070d4;
        case 0x2070d8u: goto label_2070d8;
        case 0x2070dcu: goto label_2070dc;
        case 0x2070e0u: goto label_2070e0;
        case 0x2070e4u: goto label_2070e4;
        case 0x2070e8u: goto label_2070e8;
        case 0x2070ecu: goto label_2070ec;
        case 0x2070f0u: goto label_2070f0;
        case 0x2070f4u: goto label_2070f4;
        case 0x2070f8u: goto label_2070f8;
        case 0x2070fcu: goto label_2070fc;
        case 0x207100u: goto label_207100;
        case 0x207104u: goto label_207104;
        case 0x207108u: goto label_207108;
        case 0x20710cu: goto label_20710c;
        case 0x207110u: goto label_207110;
        case 0x207114u: goto label_207114;
        case 0x207118u: goto label_207118;
        case 0x20711cu: goto label_20711c;
        case 0x207120u: goto label_207120;
        case 0x207124u: goto label_207124;
        case 0x207128u: goto label_207128;
        case 0x20712cu: goto label_20712c;
        case 0x207130u: goto label_207130;
        case 0x207134u: goto label_207134;
        case 0x207138u: goto label_207138;
        case 0x20713cu: goto label_20713c;
        case 0x207140u: goto label_207140;
        case 0x207144u: goto label_207144;
        case 0x207148u: goto label_207148;
        case 0x20714cu: goto label_20714c;
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        case 0x2073e8u: goto label_2073e8;
        case 0x2073ecu: goto label_2073ec;
        case 0x2073f0u: goto label_2073f0;
        case 0x2073f4u: goto label_2073f4;
        case 0x2073f8u: goto label_2073f8;
        case 0x2073fcu: goto label_2073fc;
        case 0x207400u: goto label_207400;
        case 0x207404u: goto label_207404;
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        default: return;
    }

label_206cd8:
    // 0x206cd8: 0xc070834  jal         func_1C20D0
label_206cdc:
    if (ctx->pc == 0x206CDCu) {
        ctx->pc = 0x206CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD8u;
        // 0x206cdc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CE0u;
        goto label_206ce0;
    }
    ctx->pc = 0x206CD8u;
    SET_GPR_U32(ctx, 31, 0x206CE0u);
    ctx->pc = 0x206CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CD8u;
    // 0x206cdc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206CE0u;
label_206ce0:
    // 0x206ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ce4:
    // 0x206ce4: 0x26042e60  addiu       $a0, $s0, 0x2E60
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11872));
label_206ce8:
    // 0x206ce8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x206ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_206cec:
    // 0x206cec: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206cf0:
    // 0x206cf0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206cf4:
    // 0x206cf4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206cf8:
    // 0x206cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206cfc:
    // 0x206cfc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206d00:
    // 0x206d00: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206d04:
    // 0x206d04: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_206d08:
    // 0x206d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206d0c:
    // 0x206d0c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206d10:
    // 0x206d10: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206d14:
    // 0x206d14: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206d18:
    // 0x206d18: 0xc05de30  jal         func_1778C0
label_206d1c:
    if (ctx->pc == 0x206D1Cu) {
        ctx->pc = 0x206D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D18u;
        // 0x206d1c: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D20u;
        goto label_206d20;
    }
    ctx->pc = 0x206D18u;
    SET_GPR_U32(ctx, 31, 0x206D20u);
    ctx->pc = 0x206D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D18u;
    // 0x206d1c: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206D18u, 0x206D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D20u;
label_206d20:
    // 0x206d20: 0xc070834  jal         func_1C20D0
label_206d24:
    if (ctx->pc == 0x206D24u) {
        ctx->pc = 0x206D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D20u;
        // 0x206d24: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D28u;
        goto label_206d28;
    }
    ctx->pc = 0x206D20u;
    SET_GPR_U32(ctx, 31, 0x206D28u);
    ctx->pc = 0x206D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D20u;
    // 0x206d24: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206D28u;
label_206d28:
    // 0x206d28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x206d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206d2c:
    // 0x206d2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x206d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206d30:
    // 0x206d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206d34:
    // 0x206d34: 0x0  nop
    ctx->pc = 0x206d34u;
    // NOP
label_206d38:
    // 0x206d38: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206d3c:
    // 0x206d3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206d40:
    // 0x206d40: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x206d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_206d44:
    // 0x206d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206d48:
    // 0x206d48: 0x26442f00  addiu       $a0, $s2, 0x2F00
    ctx->pc = 0x206d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12032));
label_206d4c:
    // 0x206d4c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206d50:
    // 0x206d50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206d54:
    // 0x206d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206d58:
    // 0x206d58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206d5c:
    // 0x206d5c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206d60:
    // 0x206d60: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206d64:
    // 0x206d64: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206d68:
    // 0x206d68: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206d6c:
    // 0x206d6c: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x206d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_206d70:
    // 0x206d70: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x206d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_206d74:
    // 0x206d74: 0xc05de30  jal         func_1778C0
label_206d78:
    if (ctx->pc == 0x206D78u) {
        ctx->pc = 0x206D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D74u;
        // 0x206d78: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D7Cu;
        goto label_206d7c;
    }
    ctx->pc = 0x206D74u;
    SET_GPR_U32(ctx, 31, 0x206D7Cu);
    ctx->pc = 0x206D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D74u;
    // 0x206d78: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206D74u, 0x206D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D7Cu;
label_206d7c:
    // 0x206d7c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x206d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_206d80:
    // 0x206d80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x206d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_206d84:
    // 0x206d84: 0xa2432f70  sb          $v1, 0x2F70($s2)
    ctx->pc = 0x206d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12144), (uint8_t)GPR_U32(ctx, 3));
label_206d88:
    // 0x206d88: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_206d8c:
    // 0x206d8c: 0xa2432f71  sb          $v1, 0x2F71($s2)
    ctx->pc = 0x206d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12145), (uint8_t)GPR_U32(ctx, 3));
label_206d90:
    // 0x206d90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x206d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206d94:
    // 0x206d94: 0xa2432f72  sb          $v1, 0x2F72($s2)
    ctx->pc = 0x206d94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12146), (uint8_t)GPR_U32(ctx, 3));
label_206d98:
    // 0x206d98: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206d9c:
    // 0x206d9c: 0xa2422f73  sb          $v0, 0x2F73($s2)
    ctx->pc = 0x206d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12147), (uint8_t)GPR_U32(ctx, 2));
label_206da0:
    // 0x206da0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206da4:
    // 0x206da4: 0xae442f74  sw          $a0, 0x2F74($s2)
    ctx->pc = 0x206da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12148), GPR_U32(ctx, 4));
label_206da8:
    // 0x206da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206dac:
    // 0x206dac: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x206dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_206db0:
    // 0x206db0: 0x26443180  addiu       $a0, $s2, 0x3180
    ctx->pc = 0x206db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12672));
label_206db4:
    // 0x206db4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206db8:
    // 0x206db8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206dbc:
    // 0x206dbc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206dc0:
    // 0x206dc0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206dc4:
    // 0x206dc4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206dc8:
    // 0x206dc8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206dcc:
    // 0x206dcc: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x206dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_206dd0:
    // 0x206dd0: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_206dd4:
    // 0x206dd4: 0xc05de30  jal         func_1778C0
label_206dd8:
    if (ctx->pc == 0x206DD8u) {
        ctx->pc = 0x206DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD4u;
        // 0x206dd8: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DDCu;
        goto label_206ddc;
    }
    ctx->pc = 0x206DD4u;
    SET_GPR_U32(ctx, 31, 0x206DDCu);
    ctx->pc = 0x206DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DD4u;
    // 0x206dd8: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206DD4u, 0x206DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DDCu;
label_206ddc:
    // 0x206ddc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_206de0:
    // 0x206de0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_206de4:
    // 0x206de4: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_206de8:
    if (ctx->pc == 0x206DE8u) {
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DECu;
        goto label_206dec;
    }
    ctx->pc = 0x206DE4u;
    {
        const bool branch_taken_0x206de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206de4) {
            ctx->pc = 0x206D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206d34;
        }
    }
    ctx->pc = 0x206DECu;
label_206dec:
    // 0x206dec: 0x24090023  addiu       $t1, $zero, 0x23
    ctx->pc = 0x206decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_206df0:
    // 0x206df0: 0x2408005f  addiu       $t0, $zero, 0x5F
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_206df4:
    // 0x206df4: 0xa20931f0  sb          $t1, 0x31F0($s0)
    ctx->pc = 0x206df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12784), (uint8_t)GPR_U32(ctx, 9));
label_206df8:
    // 0x206df8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x206df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_206dfc:
    // 0x206dfc: 0xa20831f1  sb          $t0, 0x31F1($s0)
    ctx->pc = 0x206dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12785), (uint8_t)GPR_U32(ctx, 8));
label_206e00:
    // 0x206e00: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x206e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_206e04:
    // 0x206e04: 0xa20831f2  sb          $t0, 0x31F2($s0)
    ctx->pc = 0x206e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12786), (uint8_t)GPR_U32(ctx, 8));
label_206e08:
    // 0x206e08: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_206e0c:
    // 0x206e0c: 0xa20731f3  sb          $a3, 0x31F3($s0)
    ctx->pc = 0x206e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12787), (uint8_t)GPR_U32(ctx, 7));
label_206e10:
    // 0x206e10: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_206e14:
    // 0x206e14: 0xae0631f4  sw          $a2, 0x31F4($s0)
    ctx->pc = 0x206e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12788), GPR_U32(ctx, 6));
label_206e18:
    // 0x206e18: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x206e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_206e1c:
    // 0x206e1c: 0xa2083290  sb          $t0, 0x3290($s0)
    ctx->pc = 0x206e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12944), (uint8_t)GPR_U32(ctx, 8));
label_206e20:
    // 0x206e20: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x206e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_206e24:
    // 0x206e24: 0xa2053291  sb          $a1, 0x3291($s0)
    ctx->pc = 0x206e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12945), (uint8_t)GPR_U32(ctx, 5));
label_206e28:
    // 0x206e28: 0xa2043292  sb          $a0, 0x3292($s0)
    ctx->pc = 0x206e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12946), (uint8_t)GPR_U32(ctx, 4));
label_206e2c:
    // 0x206e2c: 0xa2073293  sb          $a3, 0x3293($s0)
    ctx->pc = 0x206e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12947), (uint8_t)GPR_U32(ctx, 7));
label_206e30:
    // 0x206e30: 0xae063294  sw          $a2, 0x3294($s0)
    ctx->pc = 0x206e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12948), GPR_U32(ctx, 6));
label_206e34:
    // 0x206e34: 0xa2083330  sb          $t0, 0x3330($s0)
    ctx->pc = 0x206e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13104), (uint8_t)GPR_U32(ctx, 8));
label_206e38:
    // 0x206e38: 0xa2033331  sb          $v1, 0x3331($s0)
    ctx->pc = 0x206e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13105), (uint8_t)GPR_U32(ctx, 3));
label_206e3c:
    // 0x206e3c: 0xa2053332  sb          $a1, 0x3332($s0)
    ctx->pc = 0x206e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13106), (uint8_t)GPR_U32(ctx, 5));
label_206e40:
    // 0x206e40: 0xa2073333  sb          $a3, 0x3333($s0)
    ctx->pc = 0x206e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13107), (uint8_t)GPR_U32(ctx, 7));
label_206e44:
    // 0x206e44: 0xae063334  sw          $a2, 0x3334($s0)
    ctx->pc = 0x206e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13108), GPR_U32(ctx, 6));
label_206e48:
    // 0x206e48: 0xa20933d0  sb          $t1, 0x33D0($s0)
    ctx->pc = 0x206e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13264), (uint8_t)GPR_U32(ctx, 9));
label_206e4c:
    // 0x206e4c: 0xa20833d1  sb          $t0, 0x33D1($s0)
    ctx->pc = 0x206e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13265), (uint8_t)GPR_U32(ctx, 8));
label_206e50:
    // 0x206e50: 0xa20233d2  sb          $v0, 0x33D2($s0)
    ctx->pc = 0x206e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13266), (uint8_t)GPR_U32(ctx, 2));
label_206e54:
    // 0x206e54: 0xa20733d3  sb          $a3, 0x33D3($s0)
    ctx->pc = 0x206e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13267), (uint8_t)GPR_U32(ctx, 7));
label_206e58:
    // 0x206e58: 0xc070820  jal         func_1C2080
label_206e5c:
    if (ctx->pc == 0x206E5Cu) {
        ctx->pc = 0x206E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E58u;
        // 0x206e5c: 0xae0633d4  sw          $a2, 0x33D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 13268), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E60u;
        goto label_206e60;
    }
    ctx->pc = 0x206E58u;
    SET_GPR_U32(ctx, 31, 0x206E60u);
    ctx->pc = 0x206E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E58u;
    // 0x206e5c: 0xae0633d4  sw          $a2, 0x33D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 13268), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2080u;
    { ctx->pc = 0x1c2080; return; }
    ctx->pc = 0x206E60u;
label_206e60:
    // 0x206e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206e64:
    // 0x206e64: 0x260435e0  addiu       $a0, $s0, 0x35E0
    ctx->pc = 0x206e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13792));
label_206e68:
    // 0x206e68: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206e6c:
    // 0x206e6c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206e70:
    // 0x206e70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206e74:
    // 0x206e74: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206e78:
    // 0x206e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206e7c:
    // 0x206e7c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206e80:
    // 0x206e80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206e84:
    // 0x206e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206e88:
    // 0x206e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206e8c:
    // 0x206e8c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206e90:
    // 0x206e90: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206e94:
    // 0x206e94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x206e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206e98:
    // 0x206e98: 0xc05de30  jal         func_1778C0
label_206e9c:
    if (ctx->pc == 0x206E9Cu) {
        ctx->pc = 0x206E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E98u;
        // 0x206e9c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EA0u;
        goto label_206ea0;
    }
    ctx->pc = 0x206E98u;
    SET_GPR_U32(ctx, 31, 0x206EA0u);
    ctx->pc = 0x206E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E98u;
    // 0x206e9c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206E98u, 0x206EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EA0u;
label_206ea0:
    // 0x206ea0: 0xc07082c  jal         func_1C20B0
label_206ea4:
    if (ctx->pc == 0x206EA4u) {
        ctx->pc = 0x206EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EA0u;
        // 0x206ea4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EA8u;
        goto label_206ea8;
    }
    ctx->pc = 0x206EA0u;
    SET_GPR_U32(ctx, 31, 0x206EA8u);
    ctx->pc = 0x206EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EA0u;
    // 0x206ea4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x206EA8u;
label_206ea8:
    // 0x206ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206eac:
    // 0x206eac: 0x26043400  addiu       $a0, $s0, 0x3400
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13312));
label_206eb0:
    // 0x206eb0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206eb4:
    // 0x206eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206eb8:
    // 0x206eb8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206ebc:
    // 0x206ebc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206ec0:
    // 0x206ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206ec4:
    // 0x206ec4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206ec8:
    // 0x206ec8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206ecc:
    // 0x206ecc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206ed0:
    // 0x206ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206ed4:
    // 0x206ed4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206ed8:
    // 0x206ed8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206edc:
    // 0x206edc: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206ee0:
    // 0x206ee0: 0x240a01b8  addiu       $t2, $zero, 0x1B8
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_206ee4:
    // 0x206ee4: 0xc05de30  jal         func_1778C0
label_206ee8:
    if (ctx->pc == 0x206EE8u) {
        ctx->pc = 0x206EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EE4u;
        // 0x206ee8: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EECu;
        goto label_206eec;
    }
    ctx->pc = 0x206EE4u;
    SET_GPR_U32(ctx, 31, 0x206EECu);
    ctx->pc = 0x206EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EE4u;
    // 0x206ee8: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206EE4u, 0x206EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EECu;
label_206eec:
    // 0x206eec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206ef0:
    // 0x206ef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206ef4:
    // 0x206ef4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206ef8:
    // 0x206ef8: 0x260434a0  addiu       $a0, $s0, 0x34A0
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13472));
label_206efc:
    // 0x206efc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206f00:
    // 0x206f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206f04:
    // 0x206f04: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206f08:
    // 0x206f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f0c:
    // 0x206f0c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206f10:
    // 0x206f10: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206f14:
    // 0x206f14: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206f18:
    // 0x206f18: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206f18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206f1c:
    // 0x206f1c: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x206f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206f20:
    // 0x206f20: 0x240a01d0  addiu       $t2, $zero, 0x1D0
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_206f24:
    // 0x206f24: 0xc05de30  jal         func_1778C0
label_206f28:
    if (ctx->pc == 0x206F28u) {
        ctx->pc = 0x206F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F24u;
        // 0x206f28: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F2Cu;
        goto label_206f2c;
    }
    ctx->pc = 0x206F24u;
    SET_GPR_U32(ctx, 31, 0x206F2Cu);
    ctx->pc = 0x206F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F24u;
    // 0x206f28: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206F24u, 0x206F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206f30:
    // 0x206f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f34:
    // 0x206f34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206f38:
    // 0x206f38: 0x26043540  addiu       $a0, $s0, 0x3540
    ctx->pc = 0x206f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13632));
label_206f3c:
    // 0x206f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206f40:
    // 0x206f40: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206f44:
    // 0x206f44: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206f48:
    // 0x206f48: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206f4c:
    // 0x206f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206f50:
    // 0x206f50: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206f54:
    // 0x206f54: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206f58:
    // 0x206f58: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206f58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206f5c:
    // 0x206f5c: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x206f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206f60:
    // 0x206f60: 0x240a01e8  addiu       $t2, $zero, 0x1E8
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
label_206f64:
    // 0x206f64: 0xc05de30  jal         func_1778C0
label_206f68:
    if (ctx->pc == 0x206F68u) {
        ctx->pc = 0x206F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F64u;
        // 0x206f68: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F6Cu;
        goto label_206f6c;
    }
    ctx->pc = 0x206F64u;
    SET_GPR_U32(ctx, 31, 0x206F6Cu);
    ctx->pc = 0x206F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F64u;
    // 0x206f68: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206F64u, 0x206F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F6Cu;
label_206f6c:
    // 0x206f6c: 0xc070820  jal         func_1C2080
label_206f70:
    if (ctx->pc == 0x206F70u) {
        ctx->pc = 0x206F74u;
        goto label_206f74;
    }
    ctx->pc = 0x206F6Cu;
    SET_GPR_U32(ctx, 31, 0x206F74u);
    ctx->pc = 0x1C2080u;
    { ctx->pc = 0x1c2080; return; }
    ctx->pc = 0x206F74u;
label_206f74:
    // 0x206f74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206f78:
    // 0x206f78: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x206f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206f7c:
    // 0x206f7c: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x206f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_206f80:
    // 0x206f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206f84:
    // 0x206f84: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206f88:
    // 0x206f88: 0x26043680  addiu       $a0, $s0, 0x3680
    ctx->pc = 0x206f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13952));
label_206f8c:
    // 0x206f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206f90:
    // 0x206f90: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206f94:
    // 0x206f94: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206f98:
    // 0x206f98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f9c:
    // 0x206f9c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206fa0:
    // 0x206fa0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206fa4:
    // 0x206fa4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206fa8:
    // 0x206fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206fac:
    // 0x206fac: 0xc05de30  jal         func_1778C0
label_206fb0:
    if (ctx->pc == 0x206FB0u) {
        ctx->pc = 0x206FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FACu;
        // 0x206fb0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FB4u;
        goto label_206fb4;
    }
    ctx->pc = 0x206FACu;
    SET_GPR_U32(ctx, 31, 0x206FB4u);
    ctx->pc = 0x206FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FACu;
    // 0x206fb0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206FACu, 0x206FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB4u;
label_206fb4:
    // 0x206fb4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206fb8:
    // 0x206fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206fbc:
    // 0x206fbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206fc0:
    // 0x206fc0: 0x26043720  addiu       $a0, $s0, 0x3720
    ctx->pc = 0x206fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14112));
label_206fc4:
    // 0x206fc4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206fc8:
    // 0x206fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206fcc:
    // 0x206fcc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206fd0:
    // 0x206fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206fd4:
    // 0x206fd4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206fd8:
    // 0x206fd8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206fdc:
    // 0x206fdc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206fe0:
    // 0x206fe0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206fe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206fe4:
    // 0x206fe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206fe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206fe8:
    // 0x206fe8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x206fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_206fec:
    // 0x206fec: 0xc05de30  jal         func_1778C0
label_206ff0:
    if (ctx->pc == 0x206FF0u) {
        ctx->pc = 0x206FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FECu;
        // 0x206ff0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206FF4u;
        goto label_206ff4;
    }
    ctx->pc = 0x206FECu;
    SET_GPR_U32(ctx, 31, 0x206FF4u);
    ctx->pc = 0x206FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FECu;
    // 0x206ff0: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206FECu, 0x206FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FF4u;
label_206ff4:
    // 0x206ff4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206ff8:
    // 0x206ff8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206ffc:
    // 0x206ffc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207000:
    // 0x207000: 0x260437c0  addiu       $a0, $s0, 0x37C0
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14272));
label_207004:
    // 0x207004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207008:
    // 0x207008: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20700c:
    // 0x20700c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_207010:
    // 0x207010: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207014:
    // 0x207014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207018:
    // 0x207018: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x207018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20701c:
    // 0x20701c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207020:
    // 0x207020: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207024:
    // 0x207024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207028:
    // 0x207028: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x207028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20702c:
    // 0x20702c: 0xc05de30  jal         func_1778C0
label_207030:
    if (ctx->pc == 0x207030u) {
        ctx->pc = 0x207030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20702Cu;
        // 0x207030: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207034u;
        goto label_207034;
    }
    ctx->pc = 0x20702Cu;
    SET_GPR_U32(ctx, 31, 0x207034u);
    ctx->pc = 0x207030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20702Cu;
    // 0x207030: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20702Cu, 0x207034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207038:
    // 0x207038: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20703c:
    // 0x20703c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207040:
    // 0x207040: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207044:
    // 0x207044: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207048:
    // 0x207048: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20704c:
    // 0x20704c: 0xc054e5c  jal         func_153970
label_207050:
    if (ctx->pc == 0x207050u) {
        ctx->pc = 0x207050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20704Cu;
        // 0x207050: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207054u;
        goto label_207054;
    }
    ctx->pc = 0x20704Cu;
    SET_GPR_U32(ctx, 31, 0x207054u);
    ctx->pc = 0x207050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20704Cu;
    // 0x207050: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x20704Cu, 0x207054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207054u;
label_207054:
    // 0x207054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207058:
    // 0x207058: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207058u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_20705c:
    // 0x20705c: 0x26043860  addiu       $a0, $s0, 0x3860
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14432));
label_207060:
    // 0x207060: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207064:
    // 0x207064: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207068:
    // 0x207068: 0xc054e74  jal         func_1539D0
label_20706c:
    if (ctx->pc == 0x20706Cu) {
        ctx->pc = 0x20706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207068u;
        // 0x20706c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207070u;
        goto label_207070;
    }
    ctx->pc = 0x207068u;
    SET_GPR_U32(ctx, 31, 0x207070u);
    ctx->pc = 0x20706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207068u;
    // 0x20706c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207068u, 0x207070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207070u;
label_207070:
    // 0x207070: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207074:
    // 0x207074: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207074u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_207078:
    // 0x207078: 0x26044560  addiu       $a0, $s0, 0x4560
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17760));
label_20707c:
    // 0x20707c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207080:
    // 0x207080: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207084:
    // 0x207084: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207088:
    // 0x207088: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20708c:
    // 0x20708c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x20708cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_207090:
    // 0x207090: 0xc0708ac  jal         func_1C22B0
label_207094:
    if (ctx->pc == 0x207094u) {
        ctx->pc = 0x207094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207090u;
        // 0x207094: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207098u;
        goto label_207098;
    }
    ctx->pc = 0x207090u;
    SET_GPR_U32(ctx, 31, 0x207098u);
    ctx->pc = 0x207094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207090u;
    // 0x207094: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207098u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20709c:
    // 0x20709c: 0x26044600  addiu       $a0, $s0, 0x4600
    ctx->pc = 0x20709cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_2070a0:
    // 0x2070a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2070a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2070a4:
    // 0x2070a4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2070a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2070a8:
    // 0x2070a8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2070a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2070ac:
    // 0x2070ac: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2070acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2070b0:
    // 0x2070b0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2070b4:
    // 0x2070b4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2070b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2070b8:
    // 0x2070b8: 0xc0708ac  jal         func_1C22B0
label_2070bc:
    if (ctx->pc == 0x2070BCu) {
        ctx->pc = 0x2070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070B8u;
        // 0x2070bc: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070C0u;
        goto label_2070c0;
    }
    ctx->pc = 0x2070B8u;
    SET_GPR_U32(ctx, 31, 0x2070C0u);
    ctx->pc = 0x2070BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070B8u;
    // 0x2070bc: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x2070C0u;
label_2070c0:
    // 0x2070c0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2070c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2070c4:
    // 0x2070c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2070c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2070c8:
    // 0x2070c8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2070c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2070cc:
    // 0x2070cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2070ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2070d0:
    // 0x2070d0: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2070d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2070d4:
    // 0x2070d4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2070d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2070d8:
    // 0x2070d8: 0xc054e5c  jal         func_153970
label_2070dc:
    if (ctx->pc == 0x2070DCu) {
        ctx->pc = 0x2070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070D8u;
        // 0x2070dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070E0u;
        goto label_2070e0;
    }
    ctx->pc = 0x2070D8u;
    SET_GPR_U32(ctx, 31, 0x2070E0u);
    ctx->pc = 0x2070DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070D8u;
    // 0x2070dc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2070D8u, 0x2070E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070E0u;
label_2070e0:
    // 0x2070e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2070e4:
    // 0x2070e4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2070e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2070e8:
    // 0x2070e8: 0x26044740  addiu       $a0, $s0, 0x4740
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18240));
label_2070ec:
    // 0x2070ec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2070ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2070f0:
    // 0x2070f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2070f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2070f4:
    // 0x2070f4: 0xc054e74  jal         func_1539D0
label_2070f8:
    if (ctx->pc == 0x2070F8u) {
        ctx->pc = 0x2070F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070F4u;
        // 0x2070f8: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2070FCu;
        goto label_2070fc;
    }
    ctx->pc = 0x2070F4u;
    SET_GPR_U32(ctx, 31, 0x2070FCu);
    ctx->pc = 0x2070F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070F4u;
    // 0x2070f8: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2070F4u, 0x2070FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070FCu;
label_2070fc:
    // 0x2070fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207100:
    // 0x207100: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207104:
    // 0x207104: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207108:
    // 0x207108: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20710c:
    // 0x20710c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207110:
    // 0x207110: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207114:
    // 0x207114: 0xc054e5c  jal         func_153970
label_207118:
    if (ctx->pc == 0x207118u) {
        ctx->pc = 0x207118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207114u;
        // 0x207118: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20711Cu;
        goto label_20711c;
    }
    ctx->pc = 0x207114u;
    SET_GPR_U32(ctx, 31, 0x20711Cu);
    ctx->pc = 0x207118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207114u;
    // 0x207118: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207114u, 0x20711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20711Cu;
label_20711c:
    // 0x20711c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207120:
    // 0x207120: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207120u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207124:
    // 0x207124: 0x26044dc0  addiu       $a0, $s0, 0x4DC0
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 19904));
label_207128:
    // 0x207128: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x207128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20712c:
    // 0x20712c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20712cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207130:
    // 0x207130: 0xc054e74  jal         func_1539D0
label_207134:
    if (ctx->pc == 0x207134u) {
        ctx->pc = 0x207134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207130u;
        // 0x207134: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207138u;
        goto label_207138;
    }
    ctx->pc = 0x207130u;
    SET_GPR_U32(ctx, 31, 0x207138u);
    ctx->pc = 0x207134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207130u;
    // 0x207134: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207130u, 0x207138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207138u;
label_207138:
    // 0x207138: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20713c:
    // 0x20713c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207140:
    // 0x207140: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207144:
    // 0x207144: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207148:
    // 0x207148: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20714c:
    // 0x20714c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207150:
    // 0x207150: 0xc054e5c  jal         func_153970
label_207154:
    if (ctx->pc == 0x207154u) {
        ctx->pc = 0x207154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207150u;
        // 0x207154: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207158u;
        goto label_207158;
    }
    ctx->pc = 0x207150u;
    SET_GPR_U32(ctx, 31, 0x207158u);
    ctx->pc = 0x207154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207150u;
    // 0x207154: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207150u, 0x207158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207158u;
label_207158:
    // 0x207158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20715c:
    // 0x20715c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x20715cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207160:
    // 0x207160: 0x26045370  addiu       $a0, $s0, 0x5370
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21360));
label_207164:
    // 0x207164: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x207164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_207168:
    // 0x207168: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20716c:
    // 0x20716c: 0xc054e74  jal         func_1539D0
label_207170:
    if (ctx->pc == 0x207170u) {
        ctx->pc = 0x207170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20716Cu;
        // 0x207170: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207174u;
        goto label_207174;
    }
    ctx->pc = 0x20716Cu;
    SET_GPR_U32(ctx, 31, 0x207174u);
    ctx->pc = 0x207170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20716Cu;
    // 0x207170: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x20716Cu, 0x207174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207174u;
label_207174:
    // 0x207174: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207178:
    // 0x207178: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20717c:
    // 0x20717c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207180:
    // 0x207180: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207184:
    // 0x207184: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207188:
    // 0x207188: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20718c:
    // 0x20718c: 0xc054e5c  jal         func_153970
label_207190:
    if (ctx->pc == 0x207190u) {
        ctx->pc = 0x207190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20718Cu;
        // 0x207190: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207194u;
        goto label_207194;
    }
    ctx->pc = 0x20718Cu;
    SET_GPR_U32(ctx, 31, 0x207194u);
    ctx->pc = 0x207190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20718Cu;
    // 0x207190: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x20718Cu, 0x207194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207194u;
label_207194:
    // 0x207194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207198:
    // 0x207198: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_20719c:
    // 0x20719c: 0x26045b90  addiu       $a0, $s0, 0x5B90
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23440));
label_2071a0:
    // 0x2071a0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2071a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2071a4:
    // 0x2071a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2071a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2071a8:
    // 0x2071a8: 0xc054e74  jal         func_1539D0
label_2071ac:
    if (ctx->pc == 0x2071ACu) {
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071A8u;
        // 0x2071ac: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071B0u;
        goto label_2071b0;
    }
    ctx->pc = 0x2071A8u;
    SET_GPR_U32(ctx, 31, 0x2071B0u);
    ctx->pc = 0x2071ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071A8u;
    // 0x2071ac: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2071A8u, 0x2071B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0xc070834  jal         func_1C20D0
label_2071b4:
    if (ctx->pc == 0x2071B4u) {
        ctx->pc = 0x2071B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071B0u;
        // 0x2071b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071B8u;
        goto label_2071b8;
    }
    ctx->pc = 0x2071B0u;
    SET_GPR_U32(ctx, 31, 0x2071B8u);
    ctx->pc = 0x2071B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B0u;
    // 0x2071b4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x2071B8u;
label_2071b8:
    // 0x2071b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2071b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2071bc:
    // 0x2071bc: 0x26046210  addiu       $a0, $s0, 0x6210
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25104));
label_2071c0:
    // 0x2071c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2071c4:
    // 0x2071c4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2071c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2071c8:
    // 0x2071c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2071c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2071cc:
    // 0x2071cc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2071ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2071d0:
    // 0x2071d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2071d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2071d4:
    // 0x2071d4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2071d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2071d8:
    // 0x2071d8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2071d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2071dc:
    // 0x2071dc: 0x240902c8  addiu       $t1, $zero, 0x2C8
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
label_2071e0:
    // 0x2071e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2071e4:
    // 0x2071e4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2071e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2071e8:
    // 0x2071e8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2071e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2071ec:
    // 0x2071ec: 0x240a00f0  addiu       $t2, $zero, 0xF0
    ctx->pc = 0x2071ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2071f0:
    // 0x2071f0: 0xc05de30  jal         func_1778C0
label_2071f4:
    if (ctx->pc == 0x2071F4u) {
        ctx->pc = 0x2071F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071F0u;
        // 0x2071f4: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071F8u;
        goto label_2071f8;
    }
    ctx->pc = 0x2071F0u;
    SET_GPR_U32(ctx, 31, 0x2071F8u);
    ctx->pc = 0x2071F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071F0u;
    // 0x2071f4: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2071F0u, 0x2071F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F8u;
label_2071f8:
    // 0x2071f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2071f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2071fc:
    // 0x2071fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207200:
    // 0x207200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207204:
    // 0x207204: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207208:
    // 0x207208: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_20720c:
    // 0x20720c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x20720cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207210:
    // 0x207210: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_207214:
    // 0x207214: 0x24446930  addiu       $a0, $v0, 0x6930
    ctx->pc = 0x207214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26928));
label_207218:
    // 0x207218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20721c:
    // 0x20721c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207220:
    // 0x207220: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207224:
    // 0x207224: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207228:
    // 0x207228: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20722c:
    // 0x20722c: 0xc0708ac  jal         func_1C22B0
label_207230:
    if (ctx->pc == 0x207230u) {
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207234u;
        goto label_207234;
    }
    ctx->pc = 0x20722Cu;
    SET_GPR_U32(ctx, 31, 0x207234u);
    ctx->pc = 0x207230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20722Cu;
    // 0x207230: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x207234u;
label_207234:
    // 0x207234: 0xc070834  jal         func_1C20D0
label_207238:
    if (ctx->pc == 0x207238u) {
        ctx->pc = 0x207238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207234u;
        // 0x207238: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20723Cu;
        goto label_20723c;
    }
    ctx->pc = 0x207234u;
    SET_GPR_U32(ctx, 31, 0x20723Cu);
    ctx->pc = 0x207238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207234u;
    // 0x207238: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x20723Cu;
label_20723c:
    // 0x20723c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207240:
    // 0x207240: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_207244:
    // 0x207244: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x207244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_207248:
    // 0x207248: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x207248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20724c:
    // 0x20724c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207250:
    // 0x207250: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207254:
    // 0x207254: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x207254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_207258:
    // 0x207258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20725c:
    // 0x20725c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x20725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_207260:
    // 0x207260: 0x266462b0  addiu       $a0, $s3, 0x62B0
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25264));
label_207264:
    // 0x207264: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x207264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207268:
    // 0x207268: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20726c:
    // 0x20726c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207270:
    // 0x207270: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x207270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_207274:
    // 0x207274: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x207274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_207278:
    // 0x207278: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20727c:
    // 0x20727c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20727cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207280:
    // 0x207280: 0xc05ded8  jal         func_177B60
label_207284:
    if (ctx->pc == 0x207284u) {
        ctx->pc = 0x207284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207280u;
        // 0x207284: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207288u;
        goto label_207288;
    }
    ctx->pc = 0x207280u;
    SET_GPR_U32(ctx, 31, 0x207288u);
    ctx->pc = 0x207284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207280u;
    // 0x207284: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x207280u, 0x207288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207288u;
label_207288:
    // 0x207288: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20728c:
    // 0x20728c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207290:
    // 0x207290: 0xa262636b  sb          $v0, 0x636B($s3)
    ctx->pc = 0x207290u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25451), (uint8_t)GPR_U32(ctx, 2));
label_207294:
    // 0x207294: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x207294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207298:
    // 0x207298: 0xa262633b  sb          $v0, 0x633B($s3)
    ctx->pc = 0x207298u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25403), (uint8_t)GPR_U32(ctx, 2));
label_20729c:
    // 0x20729c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x20729cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2072a0:
    // 0x2072a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2072a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072a4:
    // 0x2072a4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2072a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2072a8:
    // 0x2072a8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2072ac:
    // 0x2072ac: 0xc054e5c  jal         func_153970
label_2072b0:
    if (ctx->pc == 0x2072B0u) {
        ctx->pc = 0x2072B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ACu;
        // 0x2072b0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072B4u;
        goto label_2072b4;
    }
    ctx->pc = 0x2072ACu;
    SET_GPR_U32(ctx, 31, 0x2072B4u);
    ctx->pc = 0x2072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072ACu;
    // 0x2072b0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2072ACu, 0x2072B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072B4u;
label_2072b4:
    // 0x2072b4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2072b8:
    // 0x2072b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2072bc:
    // 0x2072bc: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2072c0:
    // 0x2072c0: 0x24446e30  addiu       $a0, $v0, 0x6E30
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
label_2072c4:
    // 0x2072c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2072c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2072c8:
    // 0x2072c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2072c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072cc:
    // 0x2072cc: 0xc054e74  jal         func_1539D0
label_2072d0:
    if (ctx->pc == 0x2072D0u) {
        ctx->pc = 0x2072D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072CCu;
        // 0x2072d0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072D4u;
        goto label_2072d4;
    }
    ctx->pc = 0x2072CCu;
    SET_GPR_U32(ctx, 31, 0x2072D4u);
    ctx->pc = 0x2072D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072CCu;
    // 0x2072d0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2072CCu, 0x2072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072D4u;
label_2072d4:
    // 0x2072d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2072d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2072d8:
    // 0x2072d8: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_2072dc:
    // 0x2072dc: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x2072dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_2072e0:
    // 0x2072e0: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2072e4:
    // 0x2072e4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_2072e8:
    if (ctx->pc == 0x2072E8u) {
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x26520d00  addiu       $s2, $s2, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072ECu;
        goto label_2072ec;
    }
    ctx->pc = 0x2072E4u;
    {
        const bool branch_taken_0x2072e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072E4u;
        // 0x2072e8: 0x26520d00  addiu       $s2, $s2, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072e4) {
            ctx->pc = 0x207208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207208;
        }
    }
    ctx->pc = 0x2072ECu;
label_2072ec:
    // 0x2072ec: 0xc07082c  jal         func_1C20B0
label_2072f0:
    if (ctx->pc == 0x2072F0u) {
        ctx->pc = 0x2072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ECu;
        // 0x2072f0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072F4u;
        goto label_2072f4;
    }
    ctx->pc = 0x2072ECu;
    SET_GPR_U32(ctx, 31, 0x2072F4u);
    ctx->pc = 0x2072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2072ECu;
    // 0x2072f0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x2072F4u;
label_2072f4:
    // 0x2072f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2072f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2072f8:
    // 0x2072f8: 0x3401d630  ori         $at, $zero, 0xD630
    ctx->pc = 0x2072f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54832);
label_2072fc:
    // 0x2072fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207300:
    // 0x207300: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207304:
    // 0x207304: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x207304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207308:
    // 0x207308: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20730c:
    // 0x20730c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207310:
    // 0x207310: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207314:
    // 0x207314: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x207314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_207318:
    // 0x207318: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x207318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20731c:
    // 0x20731c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207320:
    // 0x207320: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x207320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_207324:
    // 0x207324: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x207324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_207328:
    // 0x207328: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x207328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20732c:
    // 0x20732c: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_207330:
    // 0x207330: 0xc05de30  jal         func_1778C0
label_207334:
    if (ctx->pc == 0x207334u) {
        ctx->pc = 0x207334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207330u;
        // 0x207334: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207338u;
        goto label_207338;
    }
    ctx->pc = 0x207330u;
    SET_GPR_U32(ctx, 31, 0x207338u);
    ctx->pc = 0x207334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207330u;
    // 0x207334: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x207330u, 0x207338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207338u;
label_207338:
    // 0x207338: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20733c:
    // 0x20733c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207340:
    // 0x207340: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_207344:
    // 0x207344: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207348:
    // 0x207348: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x207348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20734c:
    // 0x20734c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x20734cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_207350:
    // 0x207350: 0xc054e5c  jal         func_153970
label_207354:
    if (ctx->pc == 0x207354u) {
        ctx->pc = 0x207354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207350u;
        // 0x207354: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207358u;
        goto label_207358;
    }
    ctx->pc = 0x207350u;
    SET_GPR_U32(ctx, 31, 0x207358u);
    ctx->pc = 0x207354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207350u;
    // 0x207354: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207350u, 0x207358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207358u;
label_207358:
    // 0x207358: 0x3401d6d0  ori         $at, $zero, 0xD6D0
    ctx->pc = 0x207358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54992);
label_20735c:
    // 0x20735c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207360:
    // 0x207360: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_207364:
    // 0x207364: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207368:
    // 0x207368: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20736c:
    // 0x20736c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20736cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207370:
    // 0x207370: 0xc054e74  jal         func_1539D0
label_207374:
    if (ctx->pc == 0x207374u) {
        ctx->pc = 0x207374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207370u;
        // 0x207374: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207378u;
        goto label_207378;
    }
    ctx->pc = 0x207370u;
    SET_GPR_U32(ctx, 31, 0x207378u);
    ctx->pc = 0x207374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207370u;
    // 0x207374: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207370u, 0x207378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207378u;
label_207378:
    // 0x207378: 0xc07082c  jal         func_1C20B0
label_20737c:
    if (ctx->pc == 0x20737Cu) {
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207378u;
        // 0x20737c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207380u;
        goto label_207380;
    }
    ctx->pc = 0x207378u;
    SET_GPR_U32(ctx, 31, 0x207380u);
    ctx->pc = 0x20737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207378u;
    // 0x20737c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x207380u;
label_207380:
    // 0x207380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207384:
    // 0x207384: 0x3401e3d0  ori         $at, $zero, 0xE3D0
    ctx->pc = 0x207384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58320);
label_207388:
    // 0x207388: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x207388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20738c:
    // 0x20738c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x20738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_207390:
    // 0x207390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x207390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_207394:
    // 0x207394: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x207394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_207398:
    // 0x207398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20739c:
    // 0x20739c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20739cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2073a0:
    // 0x2073a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2073a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2073a4:
    // 0x2073a4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2073a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2073a8:
    // 0x2073a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2073a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2073ac:
    // 0x2073ac: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2073acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2073b0:
    // 0x2073b0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2073b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2073b4:
    // 0x2073b4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2073b8:
    // 0x2073b8: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_2073bc:
    // 0x2073bc: 0xc05de30  jal         func_1778C0
label_2073c0:
    if (ctx->pc == 0x2073C0u) {
        ctx->pc = 0x2073C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073BCu;
        // 0x2073c0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073C4u;
        goto label_2073c4;
    }
    ctx->pc = 0x2073BCu;
    SET_GPR_U32(ctx, 31, 0x2073C4u);
    ctx->pc = 0x2073C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073BCu;
    // 0x2073c0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2073BCu, 0x2073C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073C4u;
label_2073c4:
    // 0x2073c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2073c8:
    // 0x2073c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2073c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2073cc:
    // 0x2073cc: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2073ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2073d0:
    // 0x2073d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2073d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2073d4:
    // 0x2073d4: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2073d8:
    // 0x2073d8: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2073dc:
    // 0x2073dc: 0xc054e5c  jal         func_153970
label_2073e0:
    if (ctx->pc == 0x2073E0u) {
        ctx->pc = 0x2073E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073DCu;
        // 0x2073e0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073E4u;
        goto label_2073e4;
    }
    ctx->pc = 0x2073DCu;
    SET_GPR_U32(ctx, 31, 0x2073E4u);
    ctx->pc = 0x2073E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073DCu;
    // 0x2073e0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2073DCu, 0x2073E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2073E4u;
label_2073e4:
    // 0x2073e4: 0x3401e470  ori         $at, $zero, 0xE470
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58480);
label_2073e8:
    // 0x2073e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2073e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2073ec:
    // 0x2073ec: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2073ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2073f0:
    // 0x2073f0: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2073f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2073f4:
    // 0x2073f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2073f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2073f8:
    // 0x2073f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2073f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2073fc:
    // 0x2073fc: 0xc054e74  jal         func_1539D0
label_207400:
    if (ctx->pc == 0x207400u) {
        ctx->pc = 0x207400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073FCu;
        // 0x207400: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207404u;
        goto label_207404;
    }
    ctx->pc = 0x2073FCu;
    SET_GPR_U32(ctx, 31, 0x207404u);
    ctx->pc = 0x207400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073FCu;
    // 0x207400: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2073FCu, 0x207404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207404u;
label_207404:
    // 0x207404: 0x26c37fff  addiu       $v1, $s6, 0x7FFF
    ctx->pc = 0x207404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32767));
label_207408:
    // 0x207408: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_20740c:
    // 0x20740c: 0x24767171  addiu       $s6, $v1, 0x7171
    ctx->pc = 0x20740cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 29041));
label_207410:
    // 0x207410: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_207414:
    // 0x207414: 0x1460fd52  bnez        $v1, . + 4 + (-0x2AE << 2)
label_207418:
    if (ctx->pc == 0x207418u) {
        ctx->pc = 0x20741Cu;
        goto label_20741c;
    }
    ctx->pc = 0x207414u;
    {
        const bool branch_taken_0x207414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207414) {
            ctx->pc = 0x206960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x206960; return; }
        }
    }
    ctx->pc = 0x20741Cu;
label_20741c:
    // 0x20741c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x20741cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_207420:
    // 0x207420: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x207420u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_207424:
    // 0x207424: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x207424u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_207428:
    // 0x207428: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x207428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20742c:
    // 0x20742c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x20742cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_207430:
    // 0x207430: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x207430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207434:
    // 0x207434: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x207434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207438:
    // 0x207438: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x207438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20743c:
    // 0x20743c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20743cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207440:
    // 0x207440: 0x3e00008  jr          $ra
label_207444:
    if (ctx->pc == 0x207444u) {
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207440u;
        // 0x207444: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207448u;
        goto label_207448;
    }
    ctx->pc = 0x207440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207440u;
        // 0x207444: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207448u;
label_207448:
    // 0x207448: 0x0  nop
    ctx->pc = 0x207448u;
    // NOP
label_20744c:
    // 0x20744c: 0x0  nop
    ctx->pc = 0x20744cu;
    // NOP
label_207450:
    // 0x207450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_207454:
    // 0x207454: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_207458:
    // 0x207458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20745c:
    // 0x20745c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_207460:
    // 0x207460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207464:
    // 0x207464: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x207464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_207468:
    // 0x207468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20746c:
    // 0x20746c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207470:
    // 0x207470: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x207470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_207474:
    // 0x207474: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_207478:
    // 0x207478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x207478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20747c:
    // 0x20747c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_207480:
    // 0x207480: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_207484:
    // 0x207484: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x207484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_207488:
    // 0x207488: 0x91233690  lbu         $v1, 0x3690($t1)
    ctx->pc = 0x207488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13968)));
label_20748c:
    // 0x20748c: 0x25303620  addiu       $s0, $t1, 0x3620
    ctx->pc = 0x20748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 13856));
label_207490:
    // 0x207490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207494:
    // 0x207494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207498:
    // 0x207498: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20749c:
    // 0x20749c: 0xac23e310  sw          $v1, -0x1CF0($at)
    ctx->pc = 0x20749cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 3));
label_2074a0:
    // 0x2074a0: 0x91273694  lbu         $a3, 0x3694($t1)
    ctx->pc = 0x2074a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13972)));
label_2074a4:
    // 0x2074a4: 0x91293695  lbu         $t1, 0x3695($t1)
    ctx->pc = 0x2074a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13973)));
    ctx->pc = 0x2074a8u;
    return;
}
