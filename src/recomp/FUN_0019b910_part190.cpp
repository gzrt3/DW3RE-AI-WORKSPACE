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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f7da0u: goto label_1f7da0;
        case 0x1f7da4u: goto label_1f7da4;
        case 0x1f7da8u: goto label_1f7da8;
        case 0x1f7dacu: goto label_1f7dac;
        case 0x1f7db0u: goto label_1f7db0;
        case 0x1f7db4u: goto label_1f7db4;
        case 0x1f7db8u: goto label_1f7db8;
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc0u: goto label_1f7dc0;
        case 0x1f7dc4u: goto label_1f7dc4;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7dccu: goto label_1f7dcc;
        case 0x1f7dd0u: goto label_1f7dd0;
        case 0x1f7dd4u: goto label_1f7dd4;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7ddcu: goto label_1f7ddc;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7de4u: goto label_1f7de4;
        case 0x1f7de8u: goto label_1f7de8;
        case 0x1f7decu: goto label_1f7dec;
        case 0x1f7df0u: goto label_1f7df0;
        case 0x1f7df4u: goto label_1f7df4;
        case 0x1f7df8u: goto label_1f7df8;
        case 0x1f7dfcu: goto label_1f7dfc;
        case 0x1f7e00u: goto label_1f7e00;
        case 0x1f7e04u: goto label_1f7e04;
        case 0x1f7e08u: goto label_1f7e08;
        case 0x1f7e0cu: goto label_1f7e0c;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e14u: goto label_1f7e14;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e28u: goto label_1f7e28;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e38u: goto label_1f7e38;
        case 0x1f7e3cu: goto label_1f7e3c;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e44u: goto label_1f7e44;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e58u: goto label_1f7e58;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e64u: goto label_1f7e64;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e70u: goto label_1f7e70;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7e7cu: goto label_1f7e7c;
        case 0x1f7e80u: goto label_1f7e80;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e88u: goto label_1f7e88;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7e94u: goto label_1f7e94;
        case 0x1f7e98u: goto label_1f7e98;
        case 0x1f7e9cu: goto label_1f7e9c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7ea4u: goto label_1f7ea4;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7eacu: goto label_1f7eac;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7eb4u: goto label_1f7eb4;
        case 0x1f7eb8u: goto label_1f7eb8;
        case 0x1f7ebcu: goto label_1f7ebc;
        case 0x1f7ec0u: goto label_1f7ec0;
        case 0x1f7ec4u: goto label_1f7ec4;
        case 0x1f7ec8u: goto label_1f7ec8;
        case 0x1f7eccu: goto label_1f7ecc;
        case 0x1f7ed0u: goto label_1f7ed0;
        case 0x1f7ed4u: goto label_1f7ed4;
        case 0x1f7ed8u: goto label_1f7ed8;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ee0u: goto label_1f7ee0;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7ee8u: goto label_1f7ee8;
        case 0x1f7eecu: goto label_1f7eec;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef4u: goto label_1f7ef4;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7efcu: goto label_1f7efc;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f04u: goto label_1f7f04;
        case 0x1f7f08u: goto label_1f7f08;
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f10u: goto label_1f7f10;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f18u: goto label_1f7f18;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f20u: goto label_1f7f20;
        case 0x1f7f24u: goto label_1f7f24;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f30u: goto label_1f7f30;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f38u: goto label_1f7f38;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f40u: goto label_1f7f40;
        case 0x1f7f44u: goto label_1f7f44;
        case 0x1f7f48u: goto label_1f7f48;
        case 0x1f7f4cu: goto label_1f7f4c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f54u: goto label_1f7f54;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f5cu: goto label_1f7f5c;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f64u: goto label_1f7f64;
        case 0x1f7f68u: goto label_1f7f68;
        case 0x1f7f6cu: goto label_1f7f6c;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f74u: goto label_1f7f74;
        case 0x1f7f78u: goto label_1f7f78;
        case 0x1f7f7cu: goto label_1f7f7c;
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f84u: goto label_1f7f84;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f8cu: goto label_1f7f8c;
        case 0x1f7f90u: goto label_1f7f90;
        case 0x1f7f94u: goto label_1f7f94;
        case 0x1f7f98u: goto label_1f7f98;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fa0u: goto label_1f7fa0;
        case 0x1f7fa4u: goto label_1f7fa4;
        case 0x1f7fa8u: goto label_1f7fa8;
        case 0x1f7facu: goto label_1f7fac;
        case 0x1f7fb0u: goto label_1f7fb0;
        case 0x1f7fb4u: goto label_1f7fb4;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fbcu: goto label_1f7fbc;
        case 0x1f7fc0u: goto label_1f7fc0;
        case 0x1f7fc4u: goto label_1f7fc4;
        case 0x1f7fc8u: goto label_1f7fc8;
        case 0x1f7fccu: goto label_1f7fcc;
        case 0x1f7fd0u: goto label_1f7fd0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7fe0u: goto label_1f7fe0;
        case 0x1f7fe4u: goto label_1f7fe4;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7fecu: goto label_1f7fec;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f7ffcu: goto label_1f7ffc;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8004u: goto label_1f8004;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8010u: goto label_1f8010;
        case 0x1f8014u: goto label_1f8014;
        case 0x1f8018u: goto label_1f8018;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8028u: goto label_1f8028;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8038u: goto label_1f8038;
        case 0x1f803cu: goto label_1f803c;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8048u: goto label_1f8048;
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8054u: goto label_1f8054;
        case 0x1f8058u: goto label_1f8058;
        case 0x1f805cu: goto label_1f805c;
        case 0x1f8060u: goto label_1f8060;
        case 0x1f8064u: goto label_1f8064;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80e0u: goto label_1f80e0;
        case 0x1f80e4u: goto label_1f80e4;
        case 0x1f80e8u: goto label_1f80e8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f80f0u: goto label_1f80f0;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80f8u: goto label_1f80f8;
        case 0x1f80fcu: goto label_1f80fc;
        case 0x1f8100u: goto label_1f8100;
        case 0x1f8104u: goto label_1f8104;
        case 0x1f8108u: goto label_1f8108;
        case 0x1f810cu: goto label_1f810c;
        case 0x1f8110u: goto label_1f8110;
        case 0x1f8114u: goto label_1f8114;
        case 0x1f8118u: goto label_1f8118;
        case 0x1f811cu: goto label_1f811c;
        case 0x1f8120u: goto label_1f8120;
        case 0x1f8124u: goto label_1f8124;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f812cu: goto label_1f812c;
        case 0x1f8130u: goto label_1f8130;
        case 0x1f8134u: goto label_1f8134;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f813cu: goto label_1f813c;
        case 0x1f8140u: goto label_1f8140;
        case 0x1f8144u: goto label_1f8144;
        case 0x1f8148u: goto label_1f8148;
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8150u: goto label_1f8150;
        case 0x1f8154u: goto label_1f8154;
        case 0x1f8158u: goto label_1f8158;
        case 0x1f815cu: goto label_1f815c;
        case 0x1f8160u: goto label_1f8160;
        case 0x1f8164u: goto label_1f8164;
        case 0x1f8168u: goto label_1f8168;
        case 0x1f816cu: goto label_1f816c;
        case 0x1f8170u: goto label_1f8170;
        case 0x1f8174u: goto label_1f8174;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f8188u: goto label_1f8188;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f8190u: goto label_1f8190;
        case 0x1f8194u: goto label_1f8194;
        case 0x1f8198u: goto label_1f8198;
        case 0x1f819cu: goto label_1f819c;
        case 0x1f81a0u: goto label_1f81a0;
        case 0x1f81a4u: goto label_1f81a4;
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81acu: goto label_1f81ac;
        case 0x1f81b0u: goto label_1f81b0;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81b8u: goto label_1f81b8;
        case 0x1f81bcu: goto label_1f81bc;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f81c8u: goto label_1f81c8;
        case 0x1f81ccu: goto label_1f81cc;
        case 0x1f81d0u: goto label_1f81d0;
        case 0x1f81d4u: goto label_1f81d4;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81dcu: goto label_1f81dc;
        case 0x1f81e0u: goto label_1f81e0;
        case 0x1f81e4u: goto label_1f81e4;
        case 0x1f81e8u: goto label_1f81e8;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f81f0u: goto label_1f81f0;
        case 0x1f81f4u: goto label_1f81f4;
        case 0x1f81f8u: goto label_1f81f8;
        case 0x1f81fcu: goto label_1f81fc;
        case 0x1f8200u: goto label_1f8200;
        case 0x1f8204u: goto label_1f8204;
        case 0x1f8208u: goto label_1f8208;
        case 0x1f820cu: goto label_1f820c;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8218u: goto label_1f8218;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8220u: goto label_1f8220;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f822cu: goto label_1f822c;
        case 0x1f8230u: goto label_1f8230;
        case 0x1f8234u: goto label_1f8234;
        case 0x1f8238u: goto label_1f8238;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8240u: goto label_1f8240;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8248u: goto label_1f8248;
        case 0x1f824cu: goto label_1f824c;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8258u: goto label_1f8258;
        case 0x1f825cu: goto label_1f825c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8268u: goto label_1f8268;
        case 0x1f826cu: goto label_1f826c;
        case 0x1f8270u: goto label_1f8270;
        case 0x1f8274u: goto label_1f8274;
        case 0x1f8278u: goto label_1f8278;
        case 0x1f827cu: goto label_1f827c;
        case 0x1f8280u: goto label_1f8280;
        case 0x1f8284u: goto label_1f8284;
        case 0x1f8288u: goto label_1f8288;
        case 0x1f828cu: goto label_1f828c;
        case 0x1f8290u: goto label_1f8290;
        case 0x1f8294u: goto label_1f8294;
        case 0x1f8298u: goto label_1f8298;
        case 0x1f829cu: goto label_1f829c;
        case 0x1f82a0u: goto label_1f82a0;
        case 0x1f82a4u: goto label_1f82a4;
        case 0x1f82a8u: goto label_1f82a8;
        case 0x1f82acu: goto label_1f82ac;
        case 0x1f82b0u: goto label_1f82b0;
        case 0x1f82b4u: goto label_1f82b4;
        case 0x1f82b8u: goto label_1f82b8;
        case 0x1f82bcu: goto label_1f82bc;
        case 0x1f82c0u: goto label_1f82c0;
        case 0x1f82c4u: goto label_1f82c4;
        case 0x1f82c8u: goto label_1f82c8;
        case 0x1f82ccu: goto label_1f82cc;
        case 0x1f82d0u: goto label_1f82d0;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82d8u: goto label_1f82d8;
        case 0x1f82dcu: goto label_1f82dc;
        case 0x1f82e0u: goto label_1f82e0;
        case 0x1f82e4u: goto label_1f82e4;
        case 0x1f82e8u: goto label_1f82e8;
        case 0x1f82ecu: goto label_1f82ec;
        case 0x1f82f0u: goto label_1f82f0;
        case 0x1f82f4u: goto label_1f82f4;
        case 0x1f82f8u: goto label_1f82f8;
        case 0x1f82fcu: goto label_1f82fc;
        case 0x1f8300u: goto label_1f8300;
        case 0x1f8304u: goto label_1f8304;
        case 0x1f8308u: goto label_1f8308;
        case 0x1f830cu: goto label_1f830c;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f8314u: goto label_1f8314;
        case 0x1f8318u: goto label_1f8318;
        case 0x1f831cu: goto label_1f831c;
        case 0x1f8320u: goto label_1f8320;
        case 0x1f8324u: goto label_1f8324;
        case 0x1f8328u: goto label_1f8328;
        case 0x1f832cu: goto label_1f832c;
        case 0x1f8330u: goto label_1f8330;
        case 0x1f8334u: goto label_1f8334;
        case 0x1f8338u: goto label_1f8338;
        case 0x1f833cu: goto label_1f833c;
        case 0x1f8340u: goto label_1f8340;
        case 0x1f8344u: goto label_1f8344;
        case 0x1f8348u: goto label_1f8348;
        case 0x1f834cu: goto label_1f834c;
        case 0x1f8350u: goto label_1f8350;
        case 0x1f8354u: goto label_1f8354;
        case 0x1f8358u: goto label_1f8358;
        case 0x1f835cu: goto label_1f835c;
        case 0x1f8360u: goto label_1f8360;
        case 0x1f8364u: goto label_1f8364;
        case 0x1f8368u: goto label_1f8368;
        case 0x1f836cu: goto label_1f836c;
        case 0x1f8370u: goto label_1f8370;
        case 0x1f8374u: goto label_1f8374;
        case 0x1f8378u: goto label_1f8378;
        case 0x1f837cu: goto label_1f837c;
        case 0x1f8380u: goto label_1f8380;
        case 0x1f8384u: goto label_1f8384;
        case 0x1f8388u: goto label_1f8388;
        case 0x1f838cu: goto label_1f838c;
        case 0x1f8390u: goto label_1f8390;
        case 0x1f8394u: goto label_1f8394;
        case 0x1f8398u: goto label_1f8398;
        case 0x1f839cu: goto label_1f839c;
        case 0x1f83a0u: goto label_1f83a0;
        case 0x1f83a4u: goto label_1f83a4;
        case 0x1f83a8u: goto label_1f83a8;
        case 0x1f83acu: goto label_1f83ac;
        case 0x1f83b0u: goto label_1f83b0;
        case 0x1f83b4u: goto label_1f83b4;
        case 0x1f83b8u: goto label_1f83b8;
        case 0x1f83bcu: goto label_1f83bc;
        case 0x1f83c0u: goto label_1f83c0;
        case 0x1f83c4u: goto label_1f83c4;
        case 0x1f83c8u: goto label_1f83c8;
        case 0x1f83ccu: goto label_1f83cc;
        case 0x1f83d0u: goto label_1f83d0;
        case 0x1f83d4u: goto label_1f83d4;
        case 0x1f83d8u: goto label_1f83d8;
        case 0x1f83dcu: goto label_1f83dc;
        case 0x1f83e0u: goto label_1f83e0;
        case 0x1f83e4u: goto label_1f83e4;
        case 0x1f83e8u: goto label_1f83e8;
        case 0x1f83ecu: goto label_1f83ec;
        case 0x1f83f0u: goto label_1f83f0;
        case 0x1f83f4u: goto label_1f83f4;
        case 0x1f83f8u: goto label_1f83f8;
        case 0x1f83fcu: goto label_1f83fc;
        case 0x1f8400u: goto label_1f8400;
        case 0x1f8404u: goto label_1f8404;
        case 0x1f8408u: goto label_1f8408;
        case 0x1f840cu: goto label_1f840c;
        case 0x1f8410u: goto label_1f8410;
        case 0x1f8414u: goto label_1f8414;
        case 0x1f8418u: goto label_1f8418;
        case 0x1f841cu: goto label_1f841c;
        case 0x1f8420u: goto label_1f8420;
        case 0x1f8424u: goto label_1f8424;
        case 0x1f8428u: goto label_1f8428;
        case 0x1f842cu: goto label_1f842c;
        case 0x1f8430u: goto label_1f8430;
        case 0x1f8434u: goto label_1f8434;
        case 0x1f8438u: goto label_1f8438;
        case 0x1f843cu: goto label_1f843c;
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8444u: goto label_1f8444;
        case 0x1f8448u: goto label_1f8448;
        case 0x1f844cu: goto label_1f844c;
        case 0x1f8450u: goto label_1f8450;
        case 0x1f8454u: goto label_1f8454;
        case 0x1f8458u: goto label_1f8458;
        case 0x1f845cu: goto label_1f845c;
        case 0x1f8460u: goto label_1f8460;
        case 0x1f8464u: goto label_1f8464;
        case 0x1f8468u: goto label_1f8468;
        case 0x1f846cu: goto label_1f846c;
        case 0x1f8470u: goto label_1f8470;
        case 0x1f8474u: goto label_1f8474;
        case 0x1f8478u: goto label_1f8478;
        case 0x1f847cu: goto label_1f847c;
        case 0x1f8480u: goto label_1f8480;
        case 0x1f8484u: goto label_1f8484;
        case 0x1f8488u: goto label_1f8488;
        case 0x1f848cu: goto label_1f848c;
        case 0x1f8490u: goto label_1f8490;
        case 0x1f8494u: goto label_1f8494;
        case 0x1f8498u: goto label_1f8498;
        case 0x1f849cu: goto label_1f849c;
        case 0x1f84a0u: goto label_1f84a0;
        case 0x1f84a4u: goto label_1f84a4;
        case 0x1f84a8u: goto label_1f84a8;
        case 0x1f84acu: goto label_1f84ac;
        case 0x1f84b0u: goto label_1f84b0;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f84b8u: goto label_1f84b8;
        case 0x1f84bcu: goto label_1f84bc;
        case 0x1f84c0u: goto label_1f84c0;
        case 0x1f84c4u: goto label_1f84c4;
        case 0x1f84c8u: goto label_1f84c8;
        case 0x1f84ccu: goto label_1f84cc;
        case 0x1f84d0u: goto label_1f84d0;
        case 0x1f84d4u: goto label_1f84d4;
        case 0x1f84d8u: goto label_1f84d8;
        case 0x1f84dcu: goto label_1f84dc;
        case 0x1f84e0u: goto label_1f84e0;
        case 0x1f84e4u: goto label_1f84e4;
        case 0x1f84e8u: goto label_1f84e8;
        case 0x1f84ecu: goto label_1f84ec;
        case 0x1f84f0u: goto label_1f84f0;
        case 0x1f84f4u: goto label_1f84f4;
        case 0x1f84f8u: goto label_1f84f8;
        case 0x1f84fcu: goto label_1f84fc;
        case 0x1f8500u: goto label_1f8500;
        case 0x1f8504u: goto label_1f8504;
        case 0x1f8508u: goto label_1f8508;
        case 0x1f850cu: goto label_1f850c;
        case 0x1f8510u: goto label_1f8510;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8518u: goto label_1f8518;
        case 0x1f851cu: goto label_1f851c;
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f852cu: goto label_1f852c;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f8534u: goto label_1f8534;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f853cu: goto label_1f853c;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8544u: goto label_1f8544;
        case 0x1f8548u: goto label_1f8548;
        case 0x1f854cu: goto label_1f854c;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8554u: goto label_1f8554;
        case 0x1f8558u: goto label_1f8558;
        case 0x1f855cu: goto label_1f855c;
        case 0x1f8560u: goto label_1f8560;
        case 0x1f8564u: goto label_1f8564;
        case 0x1f8568u: goto label_1f8568;
        case 0x1f856cu: goto label_1f856c;
        default: return;
    }

label_1f7da0:
    // 0x1f7da0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f7da4:
    // 0x1f7da4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7da8:
    // 0x1f7da8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7dac:
    // 0x1f7dac: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7db0:
    // 0x1f7db0: 0x0  nop
    ctx->pc = 0x1f7db0u;
    // NOP
label_1f7db4:
    // 0x1f7db4: 0x0  nop
    ctx->pc = 0x1f7db4u;
    // NOP
label_1f7db8:
    // 0x1f7db8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7db8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7dbc:
    // 0x1f7dbc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7dc0:
    // 0x1f7dc0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7dc4:
    // 0x1f7dc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f7dc8:
    // 0x1f7dc8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1f7dcc:
    if (ctx->pc == 0x1F7DCCu) {
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0x2450ff58  addiu       $s0, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DD0u;
        goto label_1f7dd0;
    }
    ctx->pc = 0x1F7DC8u;
    {
        const bool branch_taken_0x1f7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0x2450ff58  addiu       $s0, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dc8) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7DD0u;
label_1f7dd0:
    // 0x1f7dd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7dd4:
    // 0x1f7dd4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1f7dd8:
    if (ctx->pc == 0x1F7DD8u) {
        ctx->pc = 0x1F7DDCu;
        goto label_1f7ddc;
    }
    ctx->pc = 0x1F7DD4u;
    {
        const bool branch_taken_0x1f7dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7dd4) {
            ctx->pc = 0x1F7E20u;
            goto label_1f7e20;
        }
    }
    ctx->pc = 0x1F7DDCu;
label_1f7ddc:
    // 0x1f7ddc: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1f7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7de0:
    // 0x1f7de0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7de4:
    // 0x1f7de4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7de8:
    // 0x1f7de8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1f7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f7dec:
    // 0x1f7dec: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7df0:
    // 0x1f7df0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f7df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f7df4:
    // 0x1f7df4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7df8:
    // 0x1f7df8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7dfc:
    // 0x1f7dfc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e00:
    // 0x1f7e00: 0x0  nop
    ctx->pc = 0x1f7e00u;
    // NOP
label_1f7e04:
    // 0x1f7e04: 0x0  nop
    ctx->pc = 0x1f7e04u;
    // NOP
label_1f7e08:
    // 0x1f7e08: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7e08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7e0c:
    // 0x1f7e0c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7e10:
    // 0x1f7e10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7e14:
    // 0x1f7e14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f7e18:
    // 0x1f7e18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f7e1c:
    if (ctx->pc == 0x1F7E1Cu) {
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E18u;
        // 0x1f7e1c: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E20u;
        goto label_1f7e20;
    }
    ctx->pc = 0x1F7E18u;
    {
        const bool branch_taken_0x1f7e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E18u;
        // 0x1f7e1c: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e18) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7E20u;
label_1f7e20:
    // 0x1f7e20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7e24:
    // 0x1f7e24: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1f7e28:
    if (ctx->pc == 0x1F7E28u) {
        ctx->pc = 0x1F7E2Cu;
        goto label_1f7e2c;
    }
    ctx->pc = 0x1F7E24u;
    {
        const bool branch_taken_0x1f7e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7e24) {
            ctx->pc = 0x1F7E5Cu;
            goto label_1f7e5c;
        }
    }
    ctx->pc = 0x1F7E2Cu;
label_1f7e2c:
    // 0x1f7e2c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x1f7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7e30:
    // 0x1f7e30: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7e34:
    // 0x1f7e34: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7e38:
    // 0x1f7e38: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f7e3c:
    // 0x1f7e3c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e40:
    // 0x1f7e40: 0x0  nop
    ctx->pc = 0x1f7e40u;
    // NOP
label_1f7e44:
    // 0x1f7e44: 0x0  nop
    ctx->pc = 0x1f7e44u;
    // NOP
label_1f7e48:
    // 0x1f7e48: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7e48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7e4c:
    // 0x1f7e4c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7e50:
    // 0x1f7e50: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7e54:
    // 0x1f7e54: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1f7e58:
    if (ctx->pc == 0x1F7E58u) {
        ctx->pc = 0x1F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E54u;
        // 0x1f7e58: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E5Cu;
        goto label_1f7e5c;
    }
    ctx->pc = 0x1F7E54u;
    {
        const bool branch_taken_0x1f7e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E54u;
        // 0x1f7e58: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e54) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7E5Cu;
label_1f7e5c:
    // 0x1f7e5c: 0x0  nop
    ctx->pc = 0x1f7e5cu;
    // NOP
label_1f7e60:
    // 0x1f7e60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7e64:
    // 0x1f7e64: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7e68:
    if (ctx->pc == 0x1F7E68u) {
        ctx->pc = 0x1F7E6Cu;
        goto label_1f7e6c;
    }
    ctx->pc = 0x1F7E64u;
    {
        const bool branch_taken_0x1f7e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7e64) {
            ctx->pc = 0x1F7EA4u;
            goto label_1f7ea4;
        }
    }
    ctx->pc = 0x1F7E6Cu;
label_1f7e6c:
    // 0x1f7e6c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7e70:
    // 0x1f7e70: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7e74:
    // 0x1f7e74: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x1f7e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7e78:
    // 0x1f7e78: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f7e7c:
    // 0x1f7e7c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1f7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1f7e80:
    // 0x1f7e80: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1f7e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e84:
    // 0x1f7e84: 0x0  nop
    ctx->pc = 0x1f7e84u;
    // NOP
label_1f7e88:
    // 0x1f7e88: 0x0  nop
    ctx->pc = 0x1f7e88u;
    // NOP
label_1f7e8c:
    // 0x1f7e8c: 0x2010  mfhi        $a0
    ctx->pc = 0x1f7e8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1f7e90:
    // 0x1f7e90: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f7e94:
    // 0x1f7e94: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1f7e98:
    // 0x1f7e98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7e9c:
    // 0x1f7e9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f7ea0:
    if (ctx->pc == 0x1F7EA0u) {
        ctx->pc = 0x1F7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E9Cu;
        // 0x1f7ea0: 0x448023  subu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EA4u;
        goto label_1f7ea4;
    }
    ctx->pc = 0x1F7E9Cu;
    {
        const bool branch_taken_0x1f7e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E9Cu;
        // 0x1f7ea0: 0x448023  subu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e9c) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7EA4u;
label_1f7ea4:
    // 0x1f7ea4: 0x0  nop
    ctx->pc = 0x1f7ea4u;
    // NOP
label_1f7ea8:
    // 0x1f7ea8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7eac:
    // 0x1f7eac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1f7eb0:
    if (ctx->pc == 0x1F7EB0u) {
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EB4u;
        goto label_1f7eb4;
    }
    ctx->pc = 0x1F7EACu;
    {
        const bool branch_taken_0x1f7eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7eac) {
            ctx->pc = 0x1F7EBCu;
            goto label_1f7ebc;
        }
    }
    ctx->pc = 0x1F7EB4u;
label_1f7eb4:
    // 0x1f7eb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f7eb8:
    if (ctx->pc == 0x1F7EB8u) {
        ctx->pc = 0x1F7EBCu;
        goto label_1f7ebc;
    }
    ctx->pc = 0x1F7EB4u;
    {
        const bool branch_taken_0x1f7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7eb4) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7EBCu;
label_1f7ebc:
    // 0x1f7ebc: 0x0  nop
    ctx->pc = 0x1f7ebcu;
    // NOP
label_1f7ec0:
    // 0x1f7ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7ec4:
    // 0x1f7ec4: 0x0  nop
    ctx->pc = 0x1f7ec4u;
    // NOP
label_1f7ec8:
    // 0x1f7ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7ecc:
    // 0x1f7ecc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7ed0:
    if (ctx->pc == 0x1F7ED0u) {
        ctx->pc = 0x1F7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ECCu;
        // 0x1f7ed0: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7ED4u;
        goto label_1f7ed4;
    }
    ctx->pc = 0x1F7ECCu;
    {
        const bool branch_taken_0x1f7ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ECCu;
        // 0x1f7ed0: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ecc) {
            ctx->pc = 0x1F7F0Cu;
            goto label_1f7f0c;
        }
    }
    ctx->pc = 0x1F7ED4u;
label_1f7ed4:
    // 0x1f7ed4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1f7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7ed8:
    // 0x1f7ed8: 0x2624ffc0  addiu       $a0, $s1, -0x40
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_1f7edc:
    // 0x1f7edc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7ee0:
    // 0x1f7ee0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7ee4:
    // 0x1f7ee4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f7ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f7ee8:
    // 0x1f7ee8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f7ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7eec:
    // 0x1f7eec: 0x0  nop
    ctx->pc = 0x1f7eecu;
    // NOP
label_1f7ef0:
    // 0x1f7ef0: 0x0  nop
    ctx->pc = 0x1f7ef0u;
    // NOP
label_1f7ef4:
    // 0x1f7ef4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7ef4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7ef8:
    // 0x1f7ef8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f7efc:
    // 0x1f7efc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7f00:
    // 0x1f7f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7f04:
    // 0x1f7f04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f7f08:
    if (ctx->pc == 0x1F7F08u) {
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7F0Cu;
        goto label_1f7f0c;
    }
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F0Cu;
label_1f7f0c:
    // 0x1f7f0c: 0x0  nop
    ctx->pc = 0x1f7f0cu;
    // NOP
label_1f7f10:
    // 0x1f7f10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7f14:
    // 0x1f7f14: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7f18:
    if (ctx->pc == 0x1F7F18u) {
        ctx->pc = 0x1F7F1Cu;
        goto label_1f7f1c;
    }
    ctx->pc = 0x1F7F14u;
    {
        const bool branch_taken_0x1f7f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7f14) {
            ctx->pc = 0x1F7F54u;
            goto label_1f7f54;
        }
    }
    ctx->pc = 0x1F7F1Cu;
label_1f7f1c:
    // 0x1f7f1c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7f20:
    // 0x1f7f20: 0x2624ffc0  addiu       $a0, $s1, -0x40
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_1f7f24:
    // 0x1f7f24: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7f28:
    // 0x1f7f28: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7f2c:
    // 0x1f7f2c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f7f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f7f30:
    // 0x1f7f30: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f7f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7f34:
    // 0x1f7f34: 0x0  nop
    ctx->pc = 0x1f7f34u;
    // NOP
label_1f7f38:
    // 0x1f7f38: 0x0  nop
    ctx->pc = 0x1f7f38u;
    // NOP
label_1f7f3c:
    // 0x1f7f3c: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7f3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7f40:
    // 0x1f7f40: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f7f44:
    // 0x1f7f44: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7f48:
    // 0x1f7f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7f4c:
    // 0x1f7f4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f7f50:
    if (ctx->pc == 0x1F7F50u) {
        ctx->pc = 0x1F7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F4Cu;
        // 0x1f7f50: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7F54u;
        goto label_1f7f54;
    }
    ctx->pc = 0x1F7F4Cu;
    {
        const bool branch_taken_0x1f7f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F4Cu;
        // 0x1f7f50: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f4c) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F54u;
label_1f7f54:
    // 0x1f7f54: 0x0  nop
    ctx->pc = 0x1f7f54u;
    // NOP
label_1f7f58:
    // 0x1f7f58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7f5c:
    // 0x1f7f5c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f7f60:
    if (ctx->pc == 0x1F7F60u) {
        ctx->pc = 0x1F7F64u;
        goto label_1f7f64;
    }
    ctx->pc = 0x1F7F5Cu;
    {
        const bool branch_taken_0x1f7f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7f5c) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F64u;
label_1f7f64:
    // 0x1f7f64: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f7f68:
    // 0x1f7f68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1f7f6c:
    // 0x1f7f6c: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1f7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f7f70:
    // 0x1f7f70: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f7f74:
    // 0x1f7f74: 0x24426f40  addiu       $v0, $v0, 0x6F40
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28480));
label_1f7f78:
    // 0x1f7f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f7c:
    // 0x1f7f7c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1f7f80:
    // 0x1f7f80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f84:
    // 0x1f7f84: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f7f88:
    // 0x1f7f88: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1f7f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7f8c:
    // 0x1f7f8c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7f90:
    // 0x1f7f90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7f94:
    // 0x1f7f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7f98:
    // 0x1f7f98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7f9c:
    // 0x1f7f9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7fa0:
    // 0x1f7fa0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7fa4:
    // 0x1f7fa4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7fa8:
    // 0x1f7fa8: 0xc07c25c  jal         func_1F0970
label_1f7fac:
    if (ctx->pc == 0x1F7FACu) {
        ctx->pc = 0x1F7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FA8u;
        // 0x1f7fac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7FB0u;
        goto label_1f7fb0;
    }
    ctx->pc = 0x1F7FA8u;
    SET_GPR_U32(ctx, 31, 0x1F7FB0u);
    ctx->pc = 0x1F7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FA8u;
    // 0x1f7fac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1F7FB0u;
label_1f7fb0:
    // 0x1f7fb0: 0x92ca0008  lbu         $t2, 0x8($s6)
    ctx->pc = 0x1f7fb0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
label_1f7fb4:
    // 0x1f7fb4: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_1f7fb8:
    // 0x1f7fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fbc:
    // 0x1f7fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fc0:
    // 0x1f7fc0: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7fc4:
    // 0x1f7fc4: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1f7fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7fc8:
    // 0x1f7fc8: 0xc07c0d0  jal         func_1F0340
label_1f7fcc:
    if (ctx->pc == 0x1F7FCCu) {
        ctx->pc = 0x1F7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC8u;
        // 0x1f7fcc: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7FD0u;
        goto label_1f7fd0;
    }
    ctx->pc = 0x1F7FC8u;
    SET_GPR_U32(ctx, 31, 0x1F7FD0u);
    ctx->pc = 0x1F7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FC8u;
    // 0x1f7fcc: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x1F7FD0u;
label_1f7fd0:
    // 0x1f7fd0: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x1f7fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1f7fd4:
    // 0x1f7fd4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f7fd8:
    // 0x1f7fd8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f7fdc:
    // 0x1f7fdc: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1f7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1f7fe0:
    // 0x1f7fe0: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x1f7fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f7fe4:
    // 0x1f7fe4: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1f7fe8:
    // 0x1f7fe8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x1f7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_1f7fec:
    // 0x1f7fec: 0xa64508f0  sh          $a1, 0x8F0($s2)
    ctx->pc = 0x1f7fecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2288), (uint16_t)GPR_U32(ctx, 5));
label_1f7ff0:
    // 0x1f7ff0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7ff4:
    // 0x1f7ff4: 0xa64408f2  sh          $a0, 0x8F2($s2)
    ctx->pc = 0x1f7ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2290), (uint16_t)GPR_U32(ctx, 4));
label_1f7ff8:
    // 0x1f7ff8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7ffc:
    // 0x1f7ffc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8000:
    // 0x1f8000: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f8004:
    // 0x1f8004: 0xae4708f4  sw          $a3, 0x8F4($s2)
    ctx->pc = 0x1f8004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2292), GPR_U32(ctx, 7));
label_1f8008:
    // 0x1f8008: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1f8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1f800c:
    // 0x1f800c: 0xa6430900  sh          $v1, 0x900($s2)
    ctx->pc = 0x1f800cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2304), (uint16_t)GPR_U32(ctx, 3));
label_1f8010:
    // 0x1f8010: 0xa6420902  sh          $v0, 0x902($s2)
    ctx->pc = 0x1f8010u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2306), (uint16_t)GPR_U32(ctx, 2));
label_1f8014:
    // 0x1f8014: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f8018:
    // 0x1f8018: 0xae470904  sw          $a3, 0x904($s2)
    ctx->pc = 0x1f8018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2308), GPR_U32(ctx, 7));
label_1f801c:
    // 0x1f801c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f801cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8020:
    // 0x1f8020: 0x24060091  addiu       $a2, $zero, 0x91
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_1f8024:
    // 0x1f8024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f8024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8028:
    // 0x1f8028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f802c:
    // 0x1f802c: 0xc066c72  jal         func_19B1C8
label_1f8030:
    if (ctx->pc == 0x1F8030u) {
        ctx->pc = 0x1F8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F802Cu;
        // 0x1f8030: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8034u;
        goto label_1f8034;
    }
    ctx->pc = 0x1F802Cu;
    SET_GPR_U32(ctx, 31, 0x1F8034u);
    ctx->pc = 0x1F8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F802Cu;
    // 0x1f8030: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F802Cu, 0x1F8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8034u;
label_1f8034:
    // 0x1f8034: 0x0  nop
    ctx->pc = 0x1f8034u;
    // NOP
label_1f8038:
    // 0x1f8038: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1f803c:
    // 0x1f803c: 0x2ae30003  slti        $v1, $s7, 0x3
    ctx->pc = 0x1f803cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f8040:
    // 0x1f8040: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1f8040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f8044:
    // 0x1f8044: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_1f8048:
    // 0x1f8048: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
label_1f804c:
    if (ctx->pc == 0x1F804Cu) {
        ctx->pc = 0x1F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8048u;
        // 0x1f804c: 0x26b51220  addiu       $s5, $s5, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8050u;
        goto label_1f8050;
    }
    ctx->pc = 0x1F8048u;
    {
        const bool branch_taken_0x1f8048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8048u;
        // 0x1f804c: 0x26b51220  addiu       $s5, $s5, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8048) {
            ctx->pc = 0x1F7D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f7d68; return; }
        }
    }
    ctx->pc = 0x1F8050u;
label_1f8050:
    // 0x1f8050: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f8050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8054:
    // 0x1f8054: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f8054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f8058:
    // 0x1f8058: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f8058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f805c:
    // 0x1f805c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f805cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f8060:
    // 0x1f8060: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f8060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8064:
    // 0x1f8064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8068:
    // 0x1f8068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f806c:
    // 0x1f806c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f806cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8070:
    // 0x1f8070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8074:
    // 0x1f8074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8078:
    // 0x1f8078: 0x3e00008  jr          $ra
label_1f807c:
    if (ctx->pc == 0x1F807Cu) {
        ctx->pc = 0x1F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8078u;
        // 0x1f807c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8080u;
        goto label_1f8080;
    }
    ctx->pc = 0x1F8078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8078u;
        // 0x1f807c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8080u;
label_1f8080:
    // 0x1f8080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f8084:
    // 0x1f8084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f8088:
    // 0x1f8088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f808c:
    // 0x1f808c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8090:
    // 0x1f8090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8094:
    // 0x1f8094: 0xc0590dc  jal         func_164370
label_1f8098:
    if (ctx->pc == 0x1F8098u) {
        ctx->pc = 0x1F8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8094u;
        // 0x1f8098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F809Cu;
        goto label_1f809c;
    }
    ctx->pc = 0x1F8094u;
    SET_GPR_U32(ctx, 31, 0x1F809Cu);
    ctx->pc = 0x1F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8094u;
    // 0x1f8098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8094u, 0x1F809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F809Cu;
label_1f809c:
    // 0x1f809c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_1f80a0:
    if (ctx->pc == 0x1F80A0u) {
        ctx->pc = 0x1F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F809Cu;
        // 0x1f80a0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80A4u;
        goto label_1f80a4;
    }
    ctx->pc = 0x1F809Cu;
    {
        const bool branch_taken_0x1f809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F809Cu;
        // 0x1f80a0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f809c) {
            ctx->pc = 0x1F81C8u;
            goto label_1f81c8;
        }
    }
    ctx->pc = 0x1F80A4u;
label_1f80a4:
    // 0x1f80a4: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x1f80a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
label_1f80a8:
    // 0x1f80a8: 0x246381e0  addiu       $v1, $v1, -0x7E20
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935008));
label_1f80ac:
    // 0x1f80ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f80b0:
    // 0x1f80b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1f80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1f80b4:
    // 0x1f80b4: 0x115880  sll         $t3, $s1, 2
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f80b8:
    // 0x1f80b8: 0x90460010  lbu         $a2, 0x10($v0)
    ctx->pc = 0x1f80b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1f80bc:
    // 0x1f80bc: 0x27838238  addiu       $v1, $gp, -0x7DC8
    ctx->pc = 0x1f80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1f80c0:
    // 0x1f80c0: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f80c4:
    // 0x1f80c4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f80c8:
    // 0x1f80c8: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80cc:
    // 0x1f80cc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f80d0:
    // 0x1f80d0: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1f80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1f80d4:
    // 0x1f80d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f80d8:
    // 0x1f80d8: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80dc:
    // 0x1f80dc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1f80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_1f80e0:
    // 0x1f80e0: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
label_1f80e4:
    // 0x1f80e4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1f80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_1f80e8:
    // 0x1f80e8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80ec:
    // 0x1f80ec: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1f80f0:
    // 0x1f80f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f80f4:
    // 0x1f80f4: 0x4b3821  addu        $a3, $v0, $t3
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80f8:
    // 0x1f80f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f80f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f80fc:
    // 0x1f80fc: 0x27828260  addiu       $v0, $gp, -0x7DA0
    ctx->pc = 0x1f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
label_1f8100:
    // 0x1f8100: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f8100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1f8104:
    // 0x1f8104: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8108:
    // 0x1f8108: 0x27828268  addiu       $v0, $gp, -0x7D98
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1f810c:
    // 0x1f810c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f810cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1f8110:
    // 0x1f8110: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8114:
    // 0x1f8114: 0x27828270  addiu       $v0, $gp, -0x7D90
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1f8118:
    // 0x1f8118: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f8118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f811c:
    // 0x1f811c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8120:
    // 0x1f8120: 0xc0552d8  jal         func_154B60
label_1f8124:
    if (ctx->pc == 0x1F8124u) {
        ctx->pc = 0x1F8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8120u;
        // 0x1f8124: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8128u;
        goto label_1f8128;
    }
    ctx->pc = 0x1F8120u;
    SET_GPR_U32(ctx, 31, 0x1F8128u);
    ctx->pc = 0x1F8124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8120u;
    // 0x1f8124: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8120u, 0x1F8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8128u;
label_1f8128:
    // 0x1f8128: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_1f812c:
    if (ctx->pc == 0x1F812Cu) {
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8130u;
        goto label_1f8130;
    }
    ctx->pc = 0x1F8128u;
    {
        const bool branch_taken_0x1f8128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8128) {
            ctx->pc = 0x1F81ACu;
            goto label_1f81ac;
        }
    }
    ctx->pc = 0x1F8130u;
label_1f8130:
    // 0x1f8130: 0xc0590dc  jal         func_164370
label_1f8134:
    if (ctx->pc == 0x1F8134u) {
        ctx->pc = 0x1F8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8130u;
        // 0x1f8134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8138u;
        goto label_1f8138;
    }
    ctx->pc = 0x1F8130u;
    SET_GPR_U32(ctx, 31, 0x1F8138u);
    ctx->pc = 0x1F8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8130u;
    // 0x1f8134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8130u, 0x1F8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8138u;
label_1f8138:
    // 0x1f8138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f813c:
    // 0x1f813c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_1f8140:
    if (ctx->pc == 0x1F8140u) {
        ctx->pc = 0x1F8144u;
        goto label_1f8144;
    }
    ctx->pc = 0x1F813Cu;
    {
        const bool branch_taken_0x1f813c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f813c) {
            ctx->pc = 0x1F81A8u;
            goto label_1f81a8;
        }
    }
    ctx->pc = 0x1F8144u;
label_1f8144:
    // 0x1f8144: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_1f8148:
    // 0x1f8148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f814c:
    // 0x1f814c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f8150:
    // 0x1f8150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8154:
    // 0x1f8154: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1f8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1f8158:
    // 0x1f8158: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f815c:
    // 0x1f815c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1f8160:
    // 0x1f8160: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1f8160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1f8164:
    // 0x1f8164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8168:
    // 0x1f8168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f816c:
    // 0x1f816c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f8170:
    // 0x1f8170: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_1f8174:
    // 0x1f8174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f8174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f8178:
    // 0x1f8178: 0xc0718c4  jal         func_1C6310
label_1f817c:
    if (ctx->pc == 0x1F817Cu) {
        ctx->pc = 0x1F817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8178u;
        // 0x1f817c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8180u;
        goto label_1f8180;
    }
    ctx->pc = 0x1F8178u;
    SET_GPR_U32(ctx, 31, 0x1F8180u);
    ctx->pc = 0x1F817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8178u;
    // 0x1f817c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    { ctx->pc = 0x1c6310; return; }
    ctx->pc = 0x1F8180u;
label_1f8180:
    // 0x1f8180: 0xa20002e1  sb          $zero, 0x2E1($s0)
    ctx->pc = 0x1f8180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 0));
label_1f8184:
    // 0x1f8184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8188:
    // 0x1f8188: 0xa20202e4  sb          $v0, 0x2E4($s0)
    ctx->pc = 0x1f8188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 2));
label_1f818c:
    // 0x1f818c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f8190:
    // 0x1f8190: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1f8194:
    // 0x1f8194: 0x2463ca30  addiu       $v1, $v1, -0x35D0
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953520));
label_1f8198:
    // 0x1f8198: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1f8198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_1f819c:
    // 0x1f819c: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
label_1f81a0:
    // 0x1f81a0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1f81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1f81a4:
    // 0x1f81a4: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x1f81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_1f81a8:
    // 0x1f81a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f81ac:
    // 0x1f81ac: 0xc04f198  jal         func_13C660
label_1f81b0:
    if (ctx->pc == 0x1F81B0u) {
        ctx->pc = 0x1F81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81ACu;
        // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81B4u;
        goto label_1f81b4;
    }
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x1F81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81ACu;
    // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f81b8:
    // 0x1f81b8: 0xc04f198  jal         func_13C660
label_1f81bc:
    if (ctx->pc == 0x1F81BCu) {
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B8u;
        // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81C0u;
        goto label_1f81c0;
    }
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x1F81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81B8u;
    // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81B8u, 0x1F81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0xc04f208  jal         func_13C820
label_1f81c4:
    if (ctx->pc == 0x1F81C4u) {
        ctx->pc = 0x1F81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81C0u;
        // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81C8u;
        goto label_1f81c8;
    }
    ctx->pc = 0x1F81C0u;
    SET_GPR_U32(ctx, 31, 0x1F81C8u);
    ctx->pc = 0x1F81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81C0u;
    // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x1F81C0u, 0x1F81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C8u;
label_1f81c8:
    // 0x1f81c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f81cc:
    // 0x1f81cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f81ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f81d0:
    // 0x1f81d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f81d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f81d4:
    // 0x1f81d4: 0x3e00008  jr          $ra
label_1f81d8:
    if (ctx->pc == 0x1F81D8u) {
        ctx->pc = 0x1F81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D4u;
        // 0x1f81d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81DCu;
        goto label_1f81dc;
    }
    ctx->pc = 0x1F81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D4u;
        // 0x1f81d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F81DCu;
label_1f81dc:
    // 0x1f81dc: 0x0  nop
    ctx->pc = 0x1f81dcu;
    // NOP
label_1f81e0:
    // 0x1f81e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1f81e4:
    // 0x1f81e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f81e8:
    // 0x1f81e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f81e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f81ec:
    // 0x1f81ec: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f81f0:
    // 0x1f81f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f81f4:
    // 0x1f81f4: 0x2442c558  addiu       $v0, $v0, -0x3AA8
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
label_1f81f8:
    // 0x1f81f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f81fc:
    // 0x1f81fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f8200:
    // 0x1f8200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f8204:
    // 0x1f8204: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f8204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f8208:
    // 0x1f8208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f820c:
    // 0x1f820c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x1f820cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_1f8210:
    // 0x1f8210: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f8210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8214:
    // 0x1f8214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8218:
    // 0x1f8218: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f821c:
    // 0x1f821c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8220:
    // 0x1f8220: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8224:
    // 0x1f8224: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8228:
    // 0x1f8228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f822c:
    // 0x1f822c: 0xc04f190  jal         func_13C640
label_1f8230:
    if (ctx->pc == 0x1F8230u) {
        ctx->pc = 0x1F8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F822Cu;
        // 0x1f8230: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8234u;
        goto label_1f8234;
    }
    ctx->pc = 0x1F822Cu;
    SET_GPR_U32(ctx, 31, 0x1F8234u);
    ctx->pc = 0x1F8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F822Cu;
    // 0x1f8230: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C640u, 0x1F822Cu, 0x1F8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8234u;
label_1f8234:
    // 0x1f8234: 0xc0713f8  jal         func_1C4FE0
label_1f8238:
    if (ctx->pc == 0x1F8238u) {
        ctx->pc = 0x1F823Cu;
        goto label_1f823c;
    }
    ctx->pc = 0x1F8234u;
    SET_GPR_U32(ctx, 31, 0x1F823Cu);
    ctx->pc = 0x1C4FE0u;
    { ctx->pc = 0x1c4fe0; return; }
    ctx->pc = 0x1F823Cu;
label_1f823c:
    // 0x1f823c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1f8240:
    if (ctx->pc == 0x1F8240u) {
        ctx->pc = 0x1F8244u;
        goto label_1f8244;
    }
    ctx->pc = 0x1F823Cu;
    {
        const bool branch_taken_0x1f823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f823c) {
            ctx->pc = 0x1F82E0u;
            goto label_1f82e0;
        }
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1f8244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f8248:
    // 0x1f8248: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1f824c:
    if (ctx->pc == 0x1F824Cu) {
        ctx->pc = 0x1F8250u;
        goto label_1f8250;
    }
    ctx->pc = 0x1F8248u;
    {
        const bool branch_taken_0x1f8248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8248) {
            ctx->pc = 0x1F82B8u;
            goto label_1f82b8;
        }
    }
    ctx->pc = 0x1F8250u;
label_1f8250:
    // 0x1f8250: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f8250u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8254:
    // 0x1f8254: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8258:
    // 0x1f8258: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f825c:
    // 0x1f825c: 0x2442c554  addiu       $v0, $v0, -0x3AAC
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952276));
label_1f8260:
    // 0x1f8260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f8260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8264:
    // 0x1f8264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8268:
    // 0x1f8268: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f826c:
    // 0x1f826c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f8270:
    // 0x1f8270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8274:
    // 0x1f8274: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8278:
    // 0x1f8278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f827c:
    // 0x1f827c: 0xc08f0cc  jal         func_23C330
label_1f8280:
    if (ctx->pc == 0x1F8280u) {
        ctx->pc = 0x1F8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F827Cu;
        // 0x1f8280: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8284u;
        goto label_1f8284;
    }
    ctx->pc = 0x1F827Cu;
    SET_GPR_U32(ctx, 31, 0x1F8284u);
    ctx->pc = 0x1F8280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F827Cu;
    // 0x1f8280: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F8284u;
label_1f8284:
    // 0x1f8284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f8288:
    // 0x1f8288: 0x0  nop
    ctx->pc = 0x1f8288u;
    // NOP
label_1f828c:
    // 0x1f828c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f828cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f8290:
    // 0x1f8290: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f8290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f8294:
    // 0x1f8294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8298:
    // 0x1f8298: 0x0  nop
    ctx->pc = 0x1f8298u;
    // NOP
label_1f829c:
    // 0x1f829c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f829cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1f82a0:
    // 0x1f82a0: 0x0  nop
    ctx->pc = 0x1f82a0u;
    // NOP
label_1f82a4:
    // 0x1f82a4: 0x0  nop
    ctx->pc = 0x1f82a4u;
    // NOP
label_1f82a8:
    // 0x1f82a8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f82a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f82ac:
    // 0x1f82ac: 0x0  nop
    ctx->pc = 0x1f82acu;
    // NOP
label_1f82b0:
    // 0x1f82b0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1f82b4:
    if (ctx->pc == 0x1F82B4u) {
        ctx->pc = 0x1F82B8u;
        goto label_1f82b8;
    }
    ctx->pc = 0x1F82B0u;
    {
        const bool branch_taken_0x1f82b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f82b0) {
            ctx->pc = 0x1F82E0u;
            goto label_1f82e0;
        }
    }
    ctx->pc = 0x1F82B8u;
label_1f82b8:
    // 0x1f82b8: 0xc07388c  jal         func_1CE230
label_1f82bc:
    if (ctx->pc == 0x1F82BCu) {
        ctx->pc = 0x1F82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82B8u;
        // 0x1f82bc: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F82C0u;
        goto label_1f82c0;
    }
    ctx->pc = 0x1F82B8u;
    SET_GPR_U32(ctx, 31, 0x1F82C0u);
    ctx->pc = 0x1F82BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F82B8u;
    // 0x1f82bc: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE230u;
    { ctx->pc = 0x1ce230; return; }
    ctx->pc = 0x1F82C0u;
label_1f82c0:
    // 0x1f82c0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1f82c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f82c4:
    // 0x1f82c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f82c8:
    // 0x1f82c8: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1f82c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_1f82cc:
    // 0x1f82cc: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1f82ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f82d0:
    // 0x1f82d0: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1f82d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1f82d4:
    // 0x1f82d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1f82d8:
    if (ctx->pc == 0x1F82D8u) {
        ctx->pc = 0x1F82DCu;
        goto label_1f82dc;
    }
    ctx->pc = 0x1F82D4u;
    {
        const bool branch_taken_0x1f82d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f82d4) {
            ctx->pc = 0x1F82E0u;
            goto label_1f82e0;
        }
    }
    ctx->pc = 0x1F82DCu;
label_1f82dc:
    // 0x1f82dc: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1f82dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
label_1f82e0:
    // 0x1f82e0: 0x8f82903c  lw          $v0, -0x6FC4($gp)
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938684)));
label_1f82e4:
    // 0x1f82e4: 0x14400325  bnez        $v0, . + 4 + (0x325 << 2)
label_1f82e8:
    if (ctx->pc == 0x1F82E8u) {
        ctx->pc = 0x1F82ECu;
        goto label_1f82ec;
    }
    ctx->pc = 0x1F82E4u;
    {
        const bool branch_taken_0x1f82e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f82e4) {
            ctx->pc = 0x1F8F7Cu;
            { ctx->pc = 0x1f8f7c; return; }
        }
    }
    ctx->pc = 0x1F82ECu;
label_1f82ec:
    // 0x1f82ec: 0xc08f0cc  jal         func_23C330
label_1f82f0:
    if (ctx->pc == 0x1F82F0u) {
        ctx->pc = 0x1F82F4u;
        goto label_1f82f4;
    }
    ctx->pc = 0x1F82ECu;
    SET_GPR_U32(ctx, 31, 0x1F82F4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F82F4u;
label_1f82f4:
    // 0x1f82f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f82f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f82f8:
    // 0x1f82f8: 0x0  nop
    ctx->pc = 0x1f82f8u;
    // NOP
label_1f82fc:
    // 0x1f82fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f82fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f8300:
    // 0x1f8300: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f8300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f8304:
    // 0x1f8304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8308:
    // 0x1f8308: 0x0  nop
    ctx->pc = 0x1f8308u;
    // NOP
label_1f830c:
    // 0x1f830c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f830cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f8310:
    // 0x1f8310: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1f8314:
    // 0x1f8314: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f8314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1f8318:
    // 0x1f8318: 0x0  nop
    ctx->pc = 0x1f8318u;
    // NOP
label_1f831c:
    // 0x1f831c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f831cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8320:
    // 0x1f8320: 0x0  nop
    ctx->pc = 0x1f8320u;
    // NOP
label_1f8324:
    // 0x1f8324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8328:
    // 0x1f8328: 0x0  nop
    ctx->pc = 0x1f8328u;
    // NOP
label_1f832c:
    // 0x1f832c: 0x450000e4  bc1f        . + 4 + (0xE4 << 2)
label_1f8330:
    if (ctx->pc == 0x1F8330u) {
        ctx->pc = 0x1F8334u;
        goto label_1f8334;
    }
    ctx->pc = 0x1F832Cu;
    {
        const bool branch_taken_0x1f832c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f832c) {
            ctx->pc = 0x1F86C0u;
            { ctx->pc = 0x1f86c0; return; }
        }
    }
    ctx->pc = 0x1F8334u;
label_1f8334:
    // 0x1f8334: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8334u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8338:
    // 0x1f8338: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f833c:
    // 0x1f833c: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8340:
    // 0x1f8340: 0x2442c5a8  addiu       $v0, $v0, -0x3A58
    ctx->pc = 0x1f8340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952360));
label_1f8344:
    // 0x1f8344: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f8344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8348:
    // 0x1f8348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f834c:
    // 0x1f834c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8350:
    // 0x1f8350: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f8350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f8354:
    // 0x1f8354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8358:
    // 0x1f8358: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f835c:
    // 0x1f835c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f8360:
    // 0x1f8360: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1f8360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8364:
    // 0x1f8364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f8364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f8368:
    // 0x1f8368: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1f836c:
    if (ctx->pc == 0x1F836Cu) {
        ctx->pc = 0x1F836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8368u;
        // 0x1f836c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8370u;
        goto label_1f8370;
    }
    ctx->pc = 0x1F8368u;
    {
        const bool branch_taken_0x1f8368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8368u;
        // 0x1f836c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8368) {
            ctx->pc = 0x1F84ACu;
            goto label_1f84ac;
        }
    }
    ctx->pc = 0x1F8370u;
label_1f8370:
    // 0x1f8370: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1f8370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f8374:
    // 0x1f8374: 0x2463c5a0  addiu       $v1, $v1, -0x3A60
    ctx->pc = 0x1f8374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952352));
label_1f8378:
    // 0x1f8378: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f8378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f837c:
    // 0x1f837c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8380:
    // 0x1f8380: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1f8380u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8384:
    // 0x1f8384: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f8384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f8388:
    // 0x1f8388: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f8388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f838c:
    // 0x1f838c: 0x2442a688  addiu       $v0, $v0, -0x5978
    ctx->pc = 0x1f838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944392));
label_1f8390:
    // 0x1f8390: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f8390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8394:
    // 0x1f8394: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f8394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8398:
    // 0x1f8398: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1f8398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f839c:
    // 0x1f839c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f83a0:
    if (ctx->pc == 0x1F83A0u) {
        ctx->pc = 0x1F83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F839Cu;
        // 0x1f83a0: 0x44082a  slt         $at, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F83A4u;
        goto label_1f83a4;
    }
    ctx->pc = 0x1F839Cu;
    {
        const bool branch_taken_0x1f839c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F839Cu;
        // 0x1f83a0: 0x44082a  slt         $at, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f839c) {
            ctx->pc = 0x1F83B0u;
            goto label_1f83b0;
        }
    }
    ctx->pc = 0x1F83A4u;
label_1f83a4:
    // 0x1f83a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f83a8:
    // 0x1f83a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f83ac:
    if (ctx->pc == 0x1F83ACu) {
        ctx->pc = 0x1F83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83A8u;
        // 0x1f83ac: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F83B0u;
        goto label_1f83b0;
    }
    ctx->pc = 0x1F83A8u;
    {
        const bool branch_taken_0x1f83a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83A8u;
        // 0x1f83ac: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83a8) {
            ctx->pc = 0x1F83C0u;
            goto label_1f83c0;
        }
    }
    ctx->pc = 0x1F83B0u;
label_1f83b0:
    // 0x1f83b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f83b4:
    if (ctx->pc == 0x1F83B4u) {
        ctx->pc = 0x1F83B8u;
        goto label_1f83b8;
    }
    ctx->pc = 0x1F83B0u;
    {
        const bool branch_taken_0x1f83b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f83b0) {
            ctx->pc = 0x1F83C0u;
            goto label_1f83c0;
        }
    }
    ctx->pc = 0x1F83B8u;
label_1f83b8:
    // 0x1f83b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f83bc:
    // 0x1f83bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1f83bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f83c0:
    // 0x1f83c0: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x1f83c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f83c4:
    // 0x1f83c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f83c8:
    // 0x1f83c8: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1f83cc:
    // 0x1f83cc: 0x27858278  addiu       $a1, $gp, -0x7D88
    ctx->pc = 0x1f83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f83d0:
    // 0x1f83d0: 0x2442a689  addiu       $v0, $v0, -0x5977
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944393));
label_1f83d4:
    // 0x1f83d4: 0x2484c5a1  addiu       $a0, $a0, -0x3A5F
    ctx->pc = 0x1f83d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952353));
label_1f83d8:
    // 0x1f83d8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1f83d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f83dc:
    // 0x1f83dc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1f83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1f83e0:
    // 0x1f83e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f83e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f83e4:
    // 0x1f83e4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f83e8:
    // 0x1f83e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f83ec:
    // 0x1f83ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f83f0:
    // 0x1f83f0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f83f4:
    // 0x1f83f4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1f83f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f83f8:
    // 0x1f83f8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f83fc:
    // 0x1f83fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8400:
    // 0x1f8400: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8404:
    // 0x1f8404: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f8404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f8408:
    // 0x1f8408: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f8408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f840c:
    // 0x1f840c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1f840cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f8410:
    // 0x1f8410: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f8414:
    if (ctx->pc == 0x1F8414u) {
        ctx->pc = 0x1F8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8410u;
        // 0x1f8414: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8418u;
        goto label_1f8418;
    }
    ctx->pc = 0x1F8410u;
    {
        const bool branch_taken_0x1f8410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8410u;
        // 0x1f8414: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8410) {
            ctx->pc = 0x1F8424u;
            goto label_1f8424;
        }
    }
    ctx->pc = 0x1F8418u;
label_1f8418:
    // 0x1f8418: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f8418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f841c:
    // 0x1f841c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f8420:
    if (ctx->pc == 0x1F8420u) {
        ctx->pc = 0x1F8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F841Cu;
        // 0x1f8420: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8424u;
        goto label_1f8424;
    }
    ctx->pc = 0x1F841Cu;
    {
        const bool branch_taken_0x1f841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F841Cu;
        // 0x1f8420: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f841c) {
            ctx->pc = 0x1F8434u;
            goto label_1f8434;
        }
    }
    ctx->pc = 0x1F8424u;
label_1f8424:
    // 0x1f8424: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f8428:
    if (ctx->pc == 0x1F8428u) {
        ctx->pc = 0x1F842Cu;
        goto label_1f842c;
    }
    ctx->pc = 0x1F8424u;
    {
        const bool branch_taken_0x1f8424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8424) {
            ctx->pc = 0x1F8434u;
            goto label_1f8434;
        }
    }
    ctx->pc = 0x1F842Cu;
label_1f842c:
    // 0x1f842c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f8430:
    // 0x1f8430: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1f8430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f8434:
    // 0x1f8434: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x1f8434u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8438:
    // 0x1f8438: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1f843c:
    // 0x1f843c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1f843cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1f8440:
    // 0x1f8440: 0x27858278  addiu       $a1, $gp, -0x7D88
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8444:
    // 0x1f8444: 0x2442a68a  addiu       $v0, $v0, -0x5976
    ctx->pc = 0x1f8444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944394));
label_1f8448:
    // 0x1f8448: 0x2484c5a2  addiu       $a0, $a0, -0x3A5E
    ctx->pc = 0x1f8448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952354));
label_1f844c:
    // 0x1f844c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1f844cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f8450:
    // 0x1f8450: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1f8454:
    // 0x1f8454: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f8454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f8458:
    // 0x1f8458: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f8458u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f845c:
    // 0x1f845c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8460:
    // 0x1f8460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f8464:
    // 0x1f8464: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1f8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8468:
    // 0x1f8468: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1f8468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f846c:
    // 0x1f846c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f846cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8470:
    // 0x1f8470: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8474:
    // 0x1f8474: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8478:
    // 0x1f8478: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f847c:
    // 0x1f847c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f847cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8480:
    // 0x1f8480: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1f8480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f8484:
    // 0x1f8484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f8488:
    if (ctx->pc == 0x1F8488u) {
        ctx->pc = 0x1F8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8484u;
        // 0x1f8488: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F848Cu;
        goto label_1f848c;
    }
    ctx->pc = 0x1F8484u;
    {
        const bool branch_taken_0x1f8484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8484u;
        // 0x1f8488: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8484) {
            ctx->pc = 0x1F8498u;
            goto label_1f8498;
        }
    }
    ctx->pc = 0x1F848Cu;
label_1f848c:
    // 0x1f848c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f8490:
    // 0x1f8490: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1f8494:
    if (ctx->pc == 0x1F8494u) {
        ctx->pc = 0x1F8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8490u;
        // 0x1f8494: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8498u;
        goto label_1f8498;
    }
    ctx->pc = 0x1F8490u;
    {
        const bool branch_taken_0x1f8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8490u;
        // 0x1f8494: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8490) {
            ctx->pc = 0x1F86C0u;
            { ctx->pc = 0x1f86c0; return; }
        }
    }
    ctx->pc = 0x1F8498u;
label_1f8498:
    // 0x1f8498: 0x10200089  beqz        $at, . + 4 + (0x89 << 2)
label_1f849c:
    if (ctx->pc == 0x1F849Cu) {
        ctx->pc = 0x1F84A0u;
        goto label_1f84a0;
    }
    ctx->pc = 0x1F8498u;
    {
        const bool branch_taken_0x1f8498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8498) {
            ctx->pc = 0x1F86C0u;
            { ctx->pc = 0x1f86c0; return; }
        }
    }
    ctx->pc = 0x1F84A0u;
label_1f84a0:
    // 0x1f84a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f84a4:
    // 0x1f84a4: 0x10000086  b           . + 4 + (0x86 << 2)
label_1f84a8:
    if (ctx->pc == 0x1F84A8u) {
        ctx->pc = 0x1F84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84A4u;
        // 0x1f84a8: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84ACu;
        goto label_1f84ac;
    }
    ctx->pc = 0x1F84A4u;
    {
        const bool branch_taken_0x1f84a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84A4u;
        // 0x1f84a8: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84a4) {
            ctx->pc = 0x1F86C0u;
            { ctx->pc = 0x1f86c0; return; }
        }
    }
    ctx->pc = 0x1F84ACu;
label_1f84ac:
    // 0x1f84ac: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1f84acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f84b0:
    // 0x1f84b0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1f84b4:
    if (ctx->pc == 0x1F84B4u) {
        ctx->pc = 0x1F84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B0u;
        // 0x1f84b4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84B8u;
        goto label_1f84b8;
    }
    ctx->pc = 0x1F84B0u;
    {
        const bool branch_taken_0x1f84b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B0u;
        // 0x1f84b4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84b0) {
            ctx->pc = 0x1F85C0u;
            { ctx->pc = 0x1f85c0; return; }
        }
    }
    ctx->pc = 0x1F84B8u;
label_1f84b8:
    // 0x1f84b8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1f84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f84bc:
    // 0x1f84bc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f84c0:
    // 0x1f84c0: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1f84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f84c4:
    // 0x1f84c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f84c8:
    // 0x1f84c8: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x1f84c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f84cc:
    // 0x1f84cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f84d0:
    // 0x1f84d0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f84d4:
    // 0x1f84d4: 0x2484a688  addiu       $a0, $a0, -0x5978
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944392));
label_1f84d8:
    // 0x1f84d8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f84dc:
    // 0x1f84dc: 0x2463c4e0  addiu       $v1, $v1, -0x3B20
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952160));
label_1f84e0:
    // 0x1f84e0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f84e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f84e4:
    // 0x1f84e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f84e8:
    // 0x1f84e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f84ec:
    // 0x1f84ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f84ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f84f0:
    // 0x1f84f0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f84f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f84f4:
    // 0x1f84f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f84f8:
    if (ctx->pc == 0x1F84F8u) {
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F84FCu;
        goto label_1f84fc;
    }
    ctx->pc = 0x1F84F4u;
    {
        const bool branch_taken_0x1f84f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84F4u;
        // 0x1f84f8: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84f4) {
            ctx->pc = 0x1F8508u;
            goto label_1f8508;
        }
    }
    ctx->pc = 0x1F84FCu;
label_1f84fc:
    // 0x1f84fc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8500:
    // 0x1f8500: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f8504:
    if (ctx->pc == 0x1F8504u) {
        ctx->pc = 0x1F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8500u;
        // 0x1f8504: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8508u;
        goto label_1f8508;
    }
    ctx->pc = 0x1F8500u;
    {
        const bool branch_taken_0x1f8500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8500u;
        // 0x1f8504: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8500) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f850c:
    if (ctx->pc == 0x1F850Cu) {
        ctx->pc = 0x1F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8508u;
        // 0x1f850c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8510u;
        goto label_1f8510;
    }
    ctx->pc = 0x1F8508u;
    {
        const bool branch_taken_0x1f8508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8508u;
        // 0x1f850c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8508) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8510u;
label_1f8510:
    // 0x1f8510: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f8514:
    // 0x1f8514: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8514u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8518:
    // 0x1f8518: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f851c:
    // 0x1f851c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f8520:
    // 0x1f8520: 0x2484a689  addiu       $a0, $a0, -0x5977
    ctx->pc = 0x1f8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944393));
label_1f8524:
    // 0x1f8524: 0x2463c4e1  addiu       $v1, $v1, -0x3B1F
    ctx->pc = 0x1f8524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952161));
label_1f8528:
    // 0x1f8528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f852c:
    // 0x1f852c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f852cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8530:
    // 0x1f8530: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f8534:
    // 0x1f8534: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1f8534u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f8538:
    // 0x1f8538: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f853c:
    // 0x1f853c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f8540:
    // 0x1f8540: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f8540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8544:
    // 0x1f8544: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1f8544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1f8548:
    // 0x1f8548: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f854c:
    if (ctx->pc == 0x1F854Cu) {
        ctx->pc = 0x1F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8548u;
        // 0x1f854c: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8550u;
        goto label_1f8550;
    }
    ctx->pc = 0x1F8548u;
    {
        const bool branch_taken_0x1f8548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8548u;
        // 0x1f854c: 0x83082a  slt         $at, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8548) {
            ctx->pc = 0x1F855Cu;
            goto label_1f855c;
        }
    }
    ctx->pc = 0x1F8550u;
label_1f8550:
    // 0x1f8550: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8554:
    // 0x1f8554: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f8558:
    if (ctx->pc == 0x1F8558u) {
        ctx->pc = 0x1F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8554u;
        // 0x1f8558: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F855Cu;
        goto label_1f855c;
    }
    ctx->pc = 0x1F8554u;
    {
        const bool branch_taken_0x1f8554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8554u;
        // 0x1f8558: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8554) {
            ctx->pc = 0x1F8568u;
            goto label_1f8568;
        }
    }
    ctx->pc = 0x1F855Cu;
label_1f855c:
    // 0x1f855c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1f8560:
    if (ctx->pc == 0x1F8560u) {
        ctx->pc = 0x1F8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F855Cu;
        // 0x1f8560: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8564u;
        goto label_1f8564;
    }
    ctx->pc = 0x1F855Cu;
    {
        const bool branch_taken_0x1f855c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F855Cu;
        // 0x1f8560: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f855c) {
            ctx->pc = 0x1F8568u;
            goto label_1f8568;
        }
    }
    ctx->pc = 0x1F8564u;
label_1f8564:
    // 0x1f8564: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1f8564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1f8568:
    // 0x1f8568: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8568u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f856c:
    // 0x1f856c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x1f8570u;
    return;
}
