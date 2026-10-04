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


void FUN_0014eba0_part249(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c7d20u: goto label_1c7d20;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d28u: goto label_1c7d28;
        case 0x1c7d2cu: goto label_1c7d2c;
        case 0x1c7d30u: goto label_1c7d30;
        case 0x1c7d34u: goto label_1c7d34;
        case 0x1c7d38u: goto label_1c7d38;
        case 0x1c7d3cu: goto label_1c7d3c;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d44u: goto label_1c7d44;
        case 0x1c7d48u: goto label_1c7d48;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d58u: goto label_1c7d58;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7d60u: goto label_1c7d60;
        case 0x1c7d64u: goto label_1c7d64;
        case 0x1c7d68u: goto label_1c7d68;
        case 0x1c7d6cu: goto label_1c7d6c;
        case 0x1c7d70u: goto label_1c7d70;
        case 0x1c7d74u: goto label_1c7d74;
        case 0x1c7d78u: goto label_1c7d78;
        case 0x1c7d7cu: goto label_1c7d7c;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7d88u: goto label_1c7d88;
        case 0x1c7d8cu: goto label_1c7d8c;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7d94u: goto label_1c7d94;
        case 0x1c7d98u: goto label_1c7d98;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7da4u: goto label_1c7da4;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7dacu: goto label_1c7dac;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7db8u: goto label_1c7db8;
        case 0x1c7dbcu: goto label_1c7dbc;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd0u: goto label_1c7dd0;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7dd8u: goto label_1c7dd8;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7de4u: goto label_1c7de4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df0u: goto label_1c7df0;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e14u: goto label_1c7e14;
        case 0x1c7e18u: goto label_1c7e18;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e20u: goto label_1c7e20;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        case 0x1c8000u: goto label_1c8000;
        case 0x1c8004u: goto label_1c8004;
        case 0x1c8008u: goto label_1c8008;
        case 0x1c800cu: goto label_1c800c;
        case 0x1c8010u: goto label_1c8010;
        case 0x1c8014u: goto label_1c8014;
        case 0x1c8018u: goto label_1c8018;
        case 0x1c801cu: goto label_1c801c;
        case 0x1c8020u: goto label_1c8020;
        case 0x1c8024u: goto label_1c8024;
        case 0x1c8028u: goto label_1c8028;
        case 0x1c802cu: goto label_1c802c;
        case 0x1c8030u: goto label_1c8030;
        case 0x1c8034u: goto label_1c8034;
        case 0x1c8038u: goto label_1c8038;
        case 0x1c803cu: goto label_1c803c;
        case 0x1c8040u: goto label_1c8040;
        case 0x1c8044u: goto label_1c8044;
        case 0x1c8048u: goto label_1c8048;
        case 0x1c804cu: goto label_1c804c;
        case 0x1c8050u: goto label_1c8050;
        case 0x1c8054u: goto label_1c8054;
        case 0x1c8058u: goto label_1c8058;
        case 0x1c805cu: goto label_1c805c;
        case 0x1c8060u: goto label_1c8060;
        case 0x1c8064u: goto label_1c8064;
        case 0x1c8068u: goto label_1c8068;
        case 0x1c806cu: goto label_1c806c;
        case 0x1c8070u: goto label_1c8070;
        case 0x1c8074u: goto label_1c8074;
        case 0x1c8078u: goto label_1c8078;
        case 0x1c807cu: goto label_1c807c;
        case 0x1c8080u: goto label_1c8080;
        case 0x1c8084u: goto label_1c8084;
        case 0x1c8088u: goto label_1c8088;
        case 0x1c808cu: goto label_1c808c;
        case 0x1c8090u: goto label_1c8090;
        case 0x1c8094u: goto label_1c8094;
        case 0x1c8098u: goto label_1c8098;
        case 0x1c809cu: goto label_1c809c;
        case 0x1c80a0u: goto label_1c80a0;
        case 0x1c80a4u: goto label_1c80a4;
        case 0x1c80a8u: goto label_1c80a8;
        case 0x1c80acu: goto label_1c80ac;
        case 0x1c80b0u: goto label_1c80b0;
        case 0x1c80b4u: goto label_1c80b4;
        case 0x1c80b8u: goto label_1c80b8;
        case 0x1c80bcu: goto label_1c80bc;
        case 0x1c80c0u: goto label_1c80c0;
        case 0x1c80c4u: goto label_1c80c4;
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80ccu: goto label_1c80cc;
        case 0x1c80d0u: goto label_1c80d0;
        case 0x1c80d4u: goto label_1c80d4;
        case 0x1c80d8u: goto label_1c80d8;
        case 0x1c80dcu: goto label_1c80dc;
        case 0x1c80e0u: goto label_1c80e0;
        case 0x1c80e4u: goto label_1c80e4;
        case 0x1c80e8u: goto label_1c80e8;
        case 0x1c80ecu: goto label_1c80ec;
        case 0x1c80f0u: goto label_1c80f0;
        case 0x1c80f4u: goto label_1c80f4;
        case 0x1c80f8u: goto label_1c80f8;
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c8100u: goto label_1c8100;
        case 0x1c8104u: goto label_1c8104;
        case 0x1c8108u: goto label_1c8108;
        case 0x1c810cu: goto label_1c810c;
        case 0x1c8110u: goto label_1c8110;
        case 0x1c8114u: goto label_1c8114;
        case 0x1c8118u: goto label_1c8118;
        case 0x1c811cu: goto label_1c811c;
        case 0x1c8120u: goto label_1c8120;
        case 0x1c8124u: goto label_1c8124;
        case 0x1c8128u: goto label_1c8128;
        case 0x1c812cu: goto label_1c812c;
        case 0x1c8130u: goto label_1c8130;
        case 0x1c8134u: goto label_1c8134;
        case 0x1c8138u: goto label_1c8138;
        case 0x1c813cu: goto label_1c813c;
        case 0x1c8140u: goto label_1c8140;
        case 0x1c8144u: goto label_1c8144;
        case 0x1c8148u: goto label_1c8148;
        case 0x1c814cu: goto label_1c814c;
        case 0x1c8150u: goto label_1c8150;
        case 0x1c8154u: goto label_1c8154;
        case 0x1c8158u: goto label_1c8158;
        case 0x1c815cu: goto label_1c815c;
        case 0x1c8160u: goto label_1c8160;
        case 0x1c8164u: goto label_1c8164;
        case 0x1c8168u: goto label_1c8168;
        case 0x1c816cu: goto label_1c816c;
        case 0x1c8170u: goto label_1c8170;
        case 0x1c8174u: goto label_1c8174;
        case 0x1c8178u: goto label_1c8178;
        case 0x1c817cu: goto label_1c817c;
        case 0x1c8180u: goto label_1c8180;
        case 0x1c8184u: goto label_1c8184;
        case 0x1c8188u: goto label_1c8188;
        case 0x1c818cu: goto label_1c818c;
        case 0x1c8190u: goto label_1c8190;
        case 0x1c8194u: goto label_1c8194;
        case 0x1c8198u: goto label_1c8198;
        case 0x1c819cu: goto label_1c819c;
        case 0x1c81a0u: goto label_1c81a0;
        case 0x1c81a4u: goto label_1c81a4;
        case 0x1c81a8u: goto label_1c81a8;
        case 0x1c81acu: goto label_1c81ac;
        case 0x1c81b0u: goto label_1c81b0;
        case 0x1c81b4u: goto label_1c81b4;
        case 0x1c81b8u: goto label_1c81b8;
        case 0x1c81bcu: goto label_1c81bc;
        case 0x1c81c0u: goto label_1c81c0;
        case 0x1c81c4u: goto label_1c81c4;
        case 0x1c81c8u: goto label_1c81c8;
        case 0x1c81ccu: goto label_1c81cc;
        case 0x1c81d0u: goto label_1c81d0;
        case 0x1c81d4u: goto label_1c81d4;
        case 0x1c81d8u: goto label_1c81d8;
        case 0x1c81dcu: goto label_1c81dc;
        case 0x1c81e0u: goto label_1c81e0;
        case 0x1c81e4u: goto label_1c81e4;
        case 0x1c81e8u: goto label_1c81e8;
        case 0x1c81ecu: goto label_1c81ec;
        case 0x1c81f0u: goto label_1c81f0;
        case 0x1c81f4u: goto label_1c81f4;
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c81fcu: goto label_1c81fc;
        case 0x1c8200u: goto label_1c8200;
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8208u: goto label_1c8208;
        case 0x1c820cu: goto label_1c820c;
        case 0x1c8210u: goto label_1c8210;
        case 0x1c8214u: goto label_1c8214;
        case 0x1c8218u: goto label_1c8218;
        case 0x1c821cu: goto label_1c821c;
        case 0x1c8220u: goto label_1c8220;
        case 0x1c8224u: goto label_1c8224;
        case 0x1c8228u: goto label_1c8228;
        case 0x1c822cu: goto label_1c822c;
        case 0x1c8230u: goto label_1c8230;
        case 0x1c8234u: goto label_1c8234;
        case 0x1c8238u: goto label_1c8238;
        case 0x1c823cu: goto label_1c823c;
        case 0x1c8240u: goto label_1c8240;
        case 0x1c8244u: goto label_1c8244;
        case 0x1c8248u: goto label_1c8248;
        case 0x1c824cu: goto label_1c824c;
        case 0x1c8250u: goto label_1c8250;
        case 0x1c8254u: goto label_1c8254;
        case 0x1c8258u: goto label_1c8258;
        case 0x1c825cu: goto label_1c825c;
        case 0x1c8260u: goto label_1c8260;
        case 0x1c8264u: goto label_1c8264;
        case 0x1c8268u: goto label_1c8268;
        case 0x1c826cu: goto label_1c826c;
        case 0x1c8270u: goto label_1c8270;
        case 0x1c8274u: goto label_1c8274;
        case 0x1c8278u: goto label_1c8278;
        case 0x1c827cu: goto label_1c827c;
        case 0x1c8280u: goto label_1c8280;
        case 0x1c8284u: goto label_1c8284;
        case 0x1c8288u: goto label_1c8288;
        case 0x1c828cu: goto label_1c828c;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c8294u: goto label_1c8294;
        case 0x1c8298u: goto label_1c8298;
        case 0x1c829cu: goto label_1c829c;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a4u: goto label_1c82a4;
        case 0x1c82a8u: goto label_1c82a8;
        case 0x1c82acu: goto label_1c82ac;
        case 0x1c82b0u: goto label_1c82b0;
        case 0x1c82b4u: goto label_1c82b4;
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82bcu: goto label_1c82bc;
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82c4u: goto label_1c82c4;
        case 0x1c82c8u: goto label_1c82c8;
        case 0x1c82ccu: goto label_1c82cc;
        case 0x1c82d0u: goto label_1c82d0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82d8u: goto label_1c82d8;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82e0u: goto label_1c82e0;
        case 0x1c82e4u: goto label_1c82e4;
        case 0x1c82e8u: goto label_1c82e8;
        case 0x1c82ecu: goto label_1c82ec;
        case 0x1c82f0u: goto label_1c82f0;
        case 0x1c82f4u: goto label_1c82f4;
        case 0x1c82f8u: goto label_1c82f8;
        case 0x1c82fcu: goto label_1c82fc;
        case 0x1c8300u: goto label_1c8300;
        case 0x1c8304u: goto label_1c8304;
        case 0x1c8308u: goto label_1c8308;
        case 0x1c830cu: goto label_1c830c;
        case 0x1c8310u: goto label_1c8310;
        case 0x1c8314u: goto label_1c8314;
        case 0x1c8318u: goto label_1c8318;
        case 0x1c831cu: goto label_1c831c;
        case 0x1c8320u: goto label_1c8320;
        case 0x1c8324u: goto label_1c8324;
        case 0x1c8328u: goto label_1c8328;
        case 0x1c832cu: goto label_1c832c;
        case 0x1c8330u: goto label_1c8330;
        case 0x1c8334u: goto label_1c8334;
        case 0x1c8338u: goto label_1c8338;
        case 0x1c833cu: goto label_1c833c;
        case 0x1c8340u: goto label_1c8340;
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8348u: goto label_1c8348;
        case 0x1c834cu: goto label_1c834c;
        case 0x1c8350u: goto label_1c8350;
        case 0x1c8354u: goto label_1c8354;
        case 0x1c8358u: goto label_1c8358;
        case 0x1c835cu: goto label_1c835c;
        case 0x1c8360u: goto label_1c8360;
        case 0x1c8364u: goto label_1c8364;
        case 0x1c8368u: goto label_1c8368;
        case 0x1c836cu: goto label_1c836c;
        case 0x1c8370u: goto label_1c8370;
        case 0x1c8374u: goto label_1c8374;
        case 0x1c8378u: goto label_1c8378;
        case 0x1c837cu: goto label_1c837c;
        case 0x1c8380u: goto label_1c8380;
        case 0x1c8384u: goto label_1c8384;
        case 0x1c8388u: goto label_1c8388;
        case 0x1c838cu: goto label_1c838c;
        case 0x1c8390u: goto label_1c8390;
        case 0x1c8394u: goto label_1c8394;
        case 0x1c8398u: goto label_1c8398;
        case 0x1c839cu: goto label_1c839c;
        case 0x1c83a0u: goto label_1c83a0;
        case 0x1c83a4u: goto label_1c83a4;
        case 0x1c83a8u: goto label_1c83a8;
        case 0x1c83acu: goto label_1c83ac;
        case 0x1c83b0u: goto label_1c83b0;
        case 0x1c83b4u: goto label_1c83b4;
        case 0x1c83b8u: goto label_1c83b8;
        case 0x1c83bcu: goto label_1c83bc;
        case 0x1c83c0u: goto label_1c83c0;
        case 0x1c83c4u: goto label_1c83c4;
        case 0x1c83c8u: goto label_1c83c8;
        case 0x1c83ccu: goto label_1c83cc;
        case 0x1c83d0u: goto label_1c83d0;
        case 0x1c83d4u: goto label_1c83d4;
        case 0x1c83d8u: goto label_1c83d8;
        case 0x1c83dcu: goto label_1c83dc;
        case 0x1c83e0u: goto label_1c83e0;
        case 0x1c83e4u: goto label_1c83e4;
        case 0x1c83e8u: goto label_1c83e8;
        case 0x1c83ecu: goto label_1c83ec;
        case 0x1c83f0u: goto label_1c83f0;
        case 0x1c83f4u: goto label_1c83f4;
        case 0x1c83f8u: goto label_1c83f8;
        case 0x1c83fcu: goto label_1c83fc;
        case 0x1c8400u: goto label_1c8400;
        case 0x1c8404u: goto label_1c8404;
        case 0x1c8408u: goto label_1c8408;
        case 0x1c840cu: goto label_1c840c;
        case 0x1c8410u: goto label_1c8410;
        case 0x1c8414u: goto label_1c8414;
        case 0x1c8418u: goto label_1c8418;
        case 0x1c841cu: goto label_1c841c;
        case 0x1c8420u: goto label_1c8420;
        case 0x1c8424u: goto label_1c8424;
        case 0x1c8428u: goto label_1c8428;
        case 0x1c842cu: goto label_1c842c;
        case 0x1c8430u: goto label_1c8430;
        case 0x1c8434u: goto label_1c8434;
        case 0x1c8438u: goto label_1c8438;
        case 0x1c843cu: goto label_1c843c;
        case 0x1c8440u: goto label_1c8440;
        case 0x1c8444u: goto label_1c8444;
        case 0x1c8448u: goto label_1c8448;
        case 0x1c844cu: goto label_1c844c;
        case 0x1c8450u: goto label_1c8450;
        case 0x1c8454u: goto label_1c8454;
        case 0x1c8458u: goto label_1c8458;
        case 0x1c845cu: goto label_1c845c;
        case 0x1c8460u: goto label_1c8460;
        case 0x1c8464u: goto label_1c8464;
        case 0x1c8468u: goto label_1c8468;
        case 0x1c846cu: goto label_1c846c;
        case 0x1c8470u: goto label_1c8470;
        case 0x1c8474u: goto label_1c8474;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c847cu: goto label_1c847c;
        case 0x1c8480u: goto label_1c8480;
        case 0x1c8484u: goto label_1c8484;
        case 0x1c8488u: goto label_1c8488;
        case 0x1c848cu: goto label_1c848c;
        case 0x1c8490u: goto label_1c8490;
        case 0x1c8494u: goto label_1c8494;
        case 0x1c8498u: goto label_1c8498;
        case 0x1c849cu: goto label_1c849c;
        case 0x1c84a0u: goto label_1c84a0;
        case 0x1c84a4u: goto label_1c84a4;
        case 0x1c84a8u: goto label_1c84a8;
        case 0x1c84acu: goto label_1c84ac;
        case 0x1c84b0u: goto label_1c84b0;
        case 0x1c84b4u: goto label_1c84b4;
        case 0x1c84b8u: goto label_1c84b8;
        case 0x1c84bcu: goto label_1c84bc;
        case 0x1c84c0u: goto label_1c84c0;
        case 0x1c84c4u: goto label_1c84c4;
        case 0x1c84c8u: goto label_1c84c8;
        case 0x1c84ccu: goto label_1c84cc;
        case 0x1c84d0u: goto label_1c84d0;
        case 0x1c84d4u: goto label_1c84d4;
        case 0x1c84d8u: goto label_1c84d8;
        case 0x1c84dcu: goto label_1c84dc;
        case 0x1c84e0u: goto label_1c84e0;
        case 0x1c84e4u: goto label_1c84e4;
        case 0x1c84e8u: goto label_1c84e8;
        case 0x1c84ecu: goto label_1c84ec;
        default: return;
    }

label_1c7d20:
    // 0x1c7d20: 0xc68c02d8  lwc1        $f12, 0x2D8($s4)
    ctx->pc = 0x1c7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7d24:
    // 0x1c7d24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c7d28:
    // 0x1c7d28: 0xc066e14  jal         func_19B850
label_1c7d2c:
    if (ctx->pc == 0x1C7D2Cu) {
        ctx->pc = 0x1C7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D28u;
        // 0x1c7d2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D30u;
        goto label_1c7d30;
    }
    ctx->pc = 0x1C7D28u;
    SET_GPR_U32(ctx, 31, 0x1C7D30u);
    ctx->pc = 0x1C7D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D28u;
    // 0x1c7d2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1C7D30u;
label_1c7d30:
    // 0x1c7d30: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7d34:
    // 0x1c7d34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c7d38:
    // 0x1c7d38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7d3c:
    // 0x1c7d3c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7d40:
    // 0x1c7d40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7d44:
    // 0x1c7d44: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c7d48:
    // 0x1c7d48: 0xc066d86  jal         func_19B618
label_1c7d4c:
    if (ctx->pc == 0x1C7D4Cu) {
        ctx->pc = 0x1C7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D48u;
        // 0x1c7d4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D50u;
        goto label_1c7d50;
    }
    ctx->pc = 0x1C7D48u;
    SET_GPR_U32(ctx, 31, 0x1C7D50u);
    ctx->pc = 0x1C7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D48u;
    // 0x1c7d4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x1C7D50u;
label_1c7d50:
    // 0x1c7d50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7d54:
    // 0x1c7d54: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7d58:
    // 0x1c7d58: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c7d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7d5c:
    // 0x1c7d5c: 0x26870260  addiu       $a3, $s4, 0x260
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_1c7d60:
    // 0x1c7d60: 0xc067090  jal         func_19C240
label_1c7d64:
    if (ctx->pc == 0x1C7D64u) {
        ctx->pc = 0x1C7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D60u;
        // 0x1c7d64: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D68u;
        goto label_1c7d68;
    }
    ctx->pc = 0x1C7D60u;
    SET_GPR_U32(ctx, 31, 0x1C7D68u);
    ctx->pc = 0x1C7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D60u;
    // 0x1c7d64: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1C7D68u;
label_1c7d68:
    // 0x1c7d68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c7d6c:
    if (ctx->pc == 0x1C7D6Cu) {
        ctx->pc = 0x1C7D70u;
        goto label_1c7d70;
    }
    ctx->pc = 0x1C7D68u;
    {
        const bool branch_taken_0x1c7d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d68) {
            ctx->pc = 0x1C7DA0u;
            goto label_1c7da0;
        }
    }
    ctx->pc = 0x1C7D70u;
label_1c7d70:
    // 0x1c7d70: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7d74:
    // 0x1c7d74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c7d78:
    // 0x1c7d78: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7d7c:
    // 0x1c7d7c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7d80:
    // 0x1c7d80: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7d84:
    // 0x1c7d84: 0x26870250  addiu       $a3, $s4, 0x250
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c7d88:
    // 0x1c7d88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7d8c:
    // 0x1c7d8c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c7d90:
    // 0x1c7d90: 0xc067090  jal         func_19C240
label_1c7d94:
    if (ctx->pc == 0x1C7D94u) {
        ctx->pc = 0x1C7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D90u;
        // 0x1c7d94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D98u;
        goto label_1c7d98;
    }
    ctx->pc = 0x1C7D90u;
    SET_GPR_U32(ctx, 31, 0x1C7D98u);
    ctx->pc = 0x1C7D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D90u;
    // 0x1c7d94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1C7D98u;
label_1c7d98:
    // 0x1c7d98: 0x1440013b  bnez        $v0, . + 4 + (0x13B << 2)
label_1c7d9c:
    if (ctx->pc == 0x1C7D9Cu) {
        ctx->pc = 0x1C7DA0u;
        goto label_1c7da0;
    }
    ctx->pc = 0x1C7D98u;
    {
        const bool branch_taken_0x1c7d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d98) {
            ctx->pc = 0x1C8288u;
            goto label_1c8288;
        }
    }
    ctx->pc = 0x1C7DA0u;
label_1c7da0:
    // 0x1c7da0: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c7da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c7da4:
    // 0x1c7da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7da8:
    // 0x1c7da8: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1c7dac:
    if (ctx->pc == 0x1C7DACu) {
        ctx->pc = 0x1C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DA8u;
        // 0x1c7dac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7DB0u;
        goto label_1c7db0;
    }
    ctx->pc = 0x1C7DA8u;
    {
        const bool branch_taken_0x1c7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DA8u;
        // 0x1c7dac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7da8) {
            ctx->pc = 0x1C7FD8u;
            goto label_1c7fd8;
        }
    }
    ctx->pc = 0x1C7DB0u;
label_1c7db0:
    // 0x1c7db0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7db4:
    // 0x1c7db4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7db8:
    // 0x1c7db8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dbc:
    // 0x1c7dbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dc0:
    // 0x1c7dc0: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1c7dc4:
    // 0x1c7dc4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7dc8:
    // 0x1c7dc8: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c7dcc:
    // 0x1c7dcc: 0xc066d7a  jal         func_19B5E8
label_1c7dd0:
    if (ctx->pc == 0x1C7DD0u) {
        ctx->pc = 0x1C7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DCCu;
        // 0x1c7dd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7DD4u;
        goto label_1c7dd4;
    }
    ctx->pc = 0x1C7DCCu;
    SET_GPR_U32(ctx, 31, 0x1C7DD4u);
    ctx->pc = 0x1C7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DCCu;
    // 0x1c7dd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0x27b6019c  addiu       $s6, $sp, 0x19C
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_1c7dd8:
    // 0x1c7dd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7ddc:
    // 0x1c7ddc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7de0:
    // 0x1c7de0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7de4:
    // 0x1c7de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7de8:
    // 0x1c7de8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dec:
    // 0x1c7dec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c7decu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1c7df0:
    // 0x1c7df0: 0x0  nop
    ctx->pc = 0x1c7df0u;
    // NOP
label_1c7df4:
    // 0x1c7df4: 0x0  nop
    ctx->pc = 0x1c7df4u;
    // NOP
label_1c7df8:
    // 0x1c7df8: 0xc066e14  jal         func_19B850
label_1c7dfc:
    if (ctx->pc == 0x1C7DFCu) {
        ctx->pc = 0x1C7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DF8u;
        // 0x1c7dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E00u;
        goto label_1c7e00;
    }
    ctx->pc = 0x1C7DF8u;
    SET_GPR_U32(ctx, 31, 0x1C7E00u);
    ctx->pc = 0x1C7DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DF8u;
    // 0x1c7dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1C7E00u;
label_1c7e00:
    // 0x1c7e00: 0xc07f198  jal         func_1FC660
label_1c7e04:
    if (ctx->pc == 0x1C7E04u) {
        ctx->pc = 0x1C7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E00u;
        // 0x1c7e04: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E08u;
        goto label_1c7e08;
    }
    ctx->pc = 0x1C7E00u;
    SET_GPR_U32(ctx, 31, 0x1C7E08u);
    ctx->pc = 0x1C7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E00u;
    // 0x1c7e04: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C7E08u;
label_1c7e08:
    // 0x1c7e08: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7e0c:
    // 0x1c7e0c: 0xc07f190  jal         func_1FC640
label_1c7e10:
    if (ctx->pc == 0x1C7E10u) {
        ctx->pc = 0x1C7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E0Cu;
        // 0x1c7e10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E14u;
        goto label_1c7e14;
    }
    ctx->pc = 0x1C7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E14u);
    ctx->pc = 0x1C7E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E0Cu;
    // 0x1c7e10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C7E14u;
label_1c7e14:
    // 0x1c7e14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c7e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c7e18:
    // 0x1c7e18: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c7e1c:
    // 0x1c7e1c: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1c7e1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1c7e20:
    // 0x1c7e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e24:
    // 0x1c7e24: 0x0  nop
    ctx->pc = 0x1c7e24u;
    // NOP
label_1c7e28:
    // 0x1c7e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7e2c:
    // 0x1c7e2c: 0x0  nop
    ctx->pc = 0x1c7e2cu;
    // NOP
label_1c7e30:
    // 0x1c7e30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c7e34:
    if (ctx->pc == 0x1C7E34u) {
        ctx->pc = 0x1C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E30u;
        // 0x1c7e34: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E38u;
        goto label_1c7e38;
    }
    ctx->pc = 0x1C7E30u;
    {
        const bool branch_taken_0x1c7e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E30u;
        // 0x1c7e34: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e30) {
            ctx->pc = 0x1C7E40u;
            goto label_1c7e40;
        }
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7e3c:
    if (ctx->pc == 0x1C7E3Cu) {
        ctx->pc = 0x1C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E38u;
        // 0x1c7e3c: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E40u;
        goto label_1c7e40;
    }
    ctx->pc = 0x1C7E38u;
    {
        const bool branch_taken_0x1c7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E38u;
        // 0x1c7e3c: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e38) {
            ctx->pc = 0x1C7E5Cu;
            goto label_1c7e5c;
        }
    }
    ctx->pc = 0x1C7E40u;
label_1c7e40:
    // 0x1c7e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e44:
    // 0x1c7e44: 0x0  nop
    ctx->pc = 0x1c7e44u;
    // NOP
label_1c7e48:
    // 0x1c7e48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7e4c:
    // 0x1c7e4c: 0x0  nop
    ctx->pc = 0x1c7e4cu;
    // NOP
label_1c7e50:
    // 0x1c7e50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c7e54:
    if (ctx->pc == 0x1C7E54u) {
        ctx->pc = 0x1C7E58u;
        goto label_1c7e58;
    }
    ctx->pc = 0x1C7E50u;
    {
        const bool branch_taken_0x1c7e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7e50) {
            ctx->pc = 0x1C7E5Cu;
            goto label_1c7e5c;
        }
    }
    ctx->pc = 0x1C7E58u;
label_1c7e58:
    // 0x1c7e58: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1c7e5c:
    // 0x1c7e5c: 0x0  nop
    ctx->pc = 0x1c7e5cu;
    // NOP
label_1c7e60:
    // 0x1c7e60: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c7e64:
    // 0x1c7e64: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1c7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7e68:
    // 0x1c7e68: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c7e6c:
    // 0x1c7e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7e70:
    // 0x1c7e70: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7e74:
    // 0x1c7e74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7e78:
    // 0x1c7e78: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1c7e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1c7e7c:
    // 0x1c7e7c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7e80:
    // 0x1c7e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7e84:
    // 0x1c7e84: 0xc066e34  jal         func_19B8D0
label_1c7e88:
    if (ctx->pc == 0x1C7E88u) {
        ctx->pc = 0x1C7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E84u;
        // 0x1c7e88: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E8Cu;
        goto label_1c7e8c;
    }
    ctx->pc = 0x1C7E84u;
    SET_GPR_U32(ctx, 31, 0x1C7E8Cu);
    ctx->pc = 0x1C7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E84u;
    // 0x1c7e88: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C7E8Cu;
label_1c7e8c:
    // 0x1c7e8c: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c7e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c7e90:
    // 0x1c7e90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c7e94:
    // 0x1c7e94: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1c7e98:
    if (ctx->pc == 0x1C7E98u) {
        ctx->pc = 0x1C7E9Cu;
        goto label_1c7e9c;
    }
    ctx->pc = 0x1C7E94u;
    {
        const bool branch_taken_0x1c7e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e94) {
            ctx->pc = 0x1C7F58u;
            goto label_1c7f58;
        }
    }
    ctx->pc = 0x1C7E9Cu;
label_1c7e9c:
    // 0x1c7e9c: 0x928202e3  lbu         $v0, 0x2E3($s4)
    ctx->pc = 0x1c7e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 739)));
label_1c7ea0:
    // 0x1c7ea0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1c7ea4:
    if (ctx->pc == 0x1C7EA4u) {
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EA8u;
        goto label_1c7ea8;
    }
    ctx->pc = 0x1C7EA0u;
    {
        const bool branch_taken_0x1c7ea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea0) {
            ctx->pc = 0x1C7EB4u;
            goto label_1c7eb4;
        }
    }
    ctx->pc = 0x1C7EA8u;
label_1c7ea8:
    // 0x1c7ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7eac:
    // 0x1c7eac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c7eb0:
    if (ctx->pc == 0x1C7EB0u) {
        ctx->pc = 0x1C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EACu;
        // 0x1c7eb0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EB4u;
        goto label_1c7eb4;
    }
    ctx->pc = 0x1C7EACu;
    {
        const bool branch_taken_0x1c7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EACu;
        // 0x1c7eb0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7eac) {
            ctx->pc = 0x1C7ECCu;
            goto label_1c7ecc;
        }
    }
    ctx->pc = 0x1C7EB4u;
label_1c7eb4:
    // 0x1c7eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7eb8:
    // 0x1c7eb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7ebc:
    // 0x1c7ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ec0:
    // 0x1c7ec0: 0x0  nop
    ctx->pc = 0x1c7ec0u;
    // NOP
label_1c7ec4:
    // 0x1c7ec4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c7ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c7ec8:
    // 0x1c7ec8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c7ec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c7ecc:
    // 0x1c7ecc: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1c7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7ed0:
    // 0x1c7ed0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_1c7ed4:
    // 0x1c7ed4: 0x3443806e  ori         $v1, $v0, 0x806E
    ctx->pc = 0x1c7ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32878);
label_1c7ed8:
    // 0x1c7ed8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1c7edc:
    // 0x1c7edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7ee0:
    // 0x1c7ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ee4:
    // 0x1c7ee4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c7ee8:
    // 0x1c7ee8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c7ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c7eec:
    // 0x1c7eec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c7ef0:
    // 0x1c7ef0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c7ef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7ef4:
    // 0x1c7ef4: 0x0  nop
    ctx->pc = 0x1c7ef4u;
    // NOP
label_1c7ef8:
    // 0x1c7ef8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c7efc:
    if (ctx->pc == 0x1C7EFCu) {
        ctx->pc = 0x1C7F00u;
        goto label_1c7f00;
    }
    ctx->pc = 0x1C7EF8u;
    {
        const bool branch_taken_0x1c7ef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7ef8) {
            ctx->pc = 0x1C7F10u;
            goto label_1c7f10;
        }
    }
    ctx->pc = 0x1C7F00u;
label_1c7f00:
    // 0x1c7f00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c7f04:
    // 0x1c7f04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c7f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7f08:
    // 0x1c7f08: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7f0c:
    if (ctx->pc == 0x1C7F0Cu) {
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F10u;
        goto label_1c7f10;
    }
    ctx->pc = 0x1C7F08u;
    {
        const bool branch_taken_0x1c7f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f08) {
            ctx->pc = 0x1C7F2Cu;
            goto label_1c7f2c;
        }
    }
    ctx->pc = 0x1C7F10u;
label_1c7f10:
    // 0x1c7f10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c7f10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c7f14:
    // 0x1c7f14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1c7f18:
    // 0x1c7f18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c7f1c:
    // 0x1c7f1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c7f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7f20:
    // 0x1c7f20: 0x0  nop
    ctx->pc = 0x1c7f20u;
    // NOP
label_1c7f24:
    // 0x1c7f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7f28:
    // 0x1c7f28: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c7f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c7f2c:
    // 0x1c7f2c: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1c7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c7f30:
    // 0x1c7f30: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c7f34:
    // 0x1c7f34: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c7f38:
    // 0x1c7f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7f3c:
    // 0x1c7f3c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7f40:
    // 0x1c7f40: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7f44:
    // 0x1c7f44: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c7f48:
    // 0x1c7f48: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c7f4c:
    // 0x1c7f4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7f50:
    // 0x1c7f50: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c7f54:
    // 0x1c7f54: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c7f58:
    // 0x1c7f58: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1c7f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_1c7f5c:
    // 0x1c7f5c: 0x97a600f8  lhu         $a2, 0xF8($sp)
    ctx->pc = 0x1c7f5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
label_1c7f60:
    // 0x1c7f60: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x1c7f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c7f64:
    // 0x1c7f64: 0x87a500f4  lh          $a1, 0xF4($sp)
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
label_1c7f68:
    // 0x1c7f68: 0x2934021  addu        $t0, $s4, $s3
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c7f6c:
    // 0x1c7f6c: 0x87a300f0  lh          $v1, 0xF0($sp)
    ctx->pc = 0x1c7f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1c7f70:
    // 0x1c7f70: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c7f74:
    // 0x1c7f74: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c7f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c7f78:
    // 0x1c7f78: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1c7f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1c7f7c:
    // 0x1c7f7c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c7f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c7f80:
    // 0x1c7f80: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c7f84:
    // 0x1c7f84: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1c7f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c7f88:
    // 0x1c7f88: 0xa4e30020  sh          $v1, 0x20($a3)
    ctx->pc = 0x1c7f88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 3));
label_1c7f8c:
    // 0x1c7f8c: 0xa4e50022  sh          $a1, 0x22($a3)
    ctx->pc = 0x1c7f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c7f90:
    // 0x1c7f90: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
label_1c7f94:
    // 0x1c7f94: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c7f98:
    // 0x1c7f98: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7f9c:
    // 0x1c7f9c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7fa0:
    // 0x1c7fa0: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c7fa4:
    // 0x1c7fa4: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c7fa8:
    // 0x1c7fa8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7fac:
    // 0x1c7fac: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c7facu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c7fb0:
    // 0x1c7fb0: 0xc50002b0  lwc1        $f0, 0x2B0($t0)
    ctx->pc = 0x1c7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7fb4:
    // 0x1c7fb4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c7fb8:
    // 0x1c7fb8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1c7fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1c7fbc:
    // 0x1c7fbc: 0xc50002b4  lwc1        $f0, 0x2B4($t0)
    ctx->pc = 0x1c7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7fc0:
    // 0x1c7fc0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c7fc4:
    // 0x1c7fc4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1c7fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1c7fc8:
    // 0x1c7fc8: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
label_1c7fcc:
    if (ctx->pc == 0x1C7FCCu) {
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FD0u;
        goto label_1c7fd0;
    }
    ctx->pc = 0x1C7FC8u;
    {
        const bool branch_taken_0x1c7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fc8) {
            ctx->pc = 0x1C7DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7dc0;
        }
    }
    ctx->pc = 0x1C7FD0u;
label_1c7fd0:
    // 0x1c7fd0: 0x10000065  b           . + 4 + (0x65 << 2)
label_1c7fd4:
    if (ctx->pc == 0x1C7FD4u) {
        ctx->pc = 0x1C7FD8u;
        goto label_1c7fd8;
    }
    ctx->pc = 0x1C7FD0u;
    {
        const bool branch_taken_0x1c7fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fd0) {
            ctx->pc = 0x1C8168u;
            goto label_1c8168;
        }
    }
    ctx->pc = 0x1C7FD8u;
label_1c7fd8:
    // 0x1c7fd8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fdc:
    // 0x1c7fdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fe0:
    // 0x1c7fe0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fe4:
    // 0x1c7fe4: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1c7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1c7fe8:
    // 0x1c7fe8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1c7fec:
    // 0x1c7fec: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c7ff0:
    // 0x1c7ff0: 0xc066d7a  jal         func_19B5E8
label_1c7ff4:
    if (ctx->pc == 0x1C7FF4u) {
        ctx->pc = 0x1C7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FF0u;
        // 0x1c7ff4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FF8u;
        goto label_1c7ff8;
    }
    ctx->pc = 0x1C7FF0u;
    SET_GPR_U32(ctx, 31, 0x1C7FF8u);
    ctx->pc = 0x1C7FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FF0u;
    // 0x1c7ff4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1C7FF8u;
label_1c7ff8:
    // 0x1c7ff8: 0x27b601ac  addiu       $s6, $sp, 0x1AC
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_1c7ffc:
    // 0x1c7ffc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c8000:
    // 0x1c8000: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8004:
    // 0x1c8004: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c8004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1c8008:
    // 0x1c8008: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c800c:
    // 0x1c800c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c800cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8010:
    // 0x1c8010: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c8010u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1c8014:
    // 0x1c8014: 0x0  nop
    ctx->pc = 0x1c8014u;
    // NOP
label_1c8018:
    // 0x1c8018: 0x0  nop
    ctx->pc = 0x1c8018u;
    // NOP
label_1c801c:
    // 0x1c801c: 0xc066e14  jal         func_19B850
label_1c8020:
    if (ctx->pc == 0x1C8020u) {
        ctx->pc = 0x1C8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C801Cu;
        // 0x1c8020: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8024u;
        goto label_1c8024;
    }
    ctx->pc = 0x1C801Cu;
    SET_GPR_U32(ctx, 31, 0x1C8024u);
    ctx->pc = 0x1C8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C801Cu;
    // 0x1c8020: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1C8024u;
label_1c8024:
    // 0x1c8024: 0xc07f198  jal         func_1FC660
label_1c8028:
    if (ctx->pc == 0x1C8028u) {
        ctx->pc = 0x1C8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8024u;
        // 0x1c8028: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C802Cu;
        goto label_1c802c;
    }
    ctx->pc = 0x1C8024u;
    SET_GPR_U32(ctx, 31, 0x1C802Cu);
    ctx->pc = 0x1C8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8024u;
    // 0x1c8028: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C802Cu;
label_1c802c:
    // 0x1c802c: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c8030:
    // 0x1c8030: 0xc07f190  jal         func_1FC640
label_1c8034:
    if (ctx->pc == 0x1C8034u) {
        ctx->pc = 0x1C8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8030u;
        // 0x1c8034: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8038u;
        goto label_1c8038;
    }
    ctx->pc = 0x1C8030u;
    SET_GPR_U32(ctx, 31, 0x1C8038u);
    ctx->pc = 0x1C8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8030u;
    // 0x1c8034: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C8038u;
label_1c8038:
    // 0x1c8038: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c803c:
    // 0x1c803c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c8040:
    // 0x1c8040: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1c8040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1c8044:
    // 0x1c8044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8048:
    // 0x1c8048: 0x0  nop
    ctx->pc = 0x1c8048u;
    // NOP
label_1c804c:
    // 0x1c804c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c804cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8050:
    // 0x1c8050: 0x0  nop
    ctx->pc = 0x1c8050u;
    // NOP
label_1c8054:
    // 0x1c8054: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c8058:
    if (ctx->pc == 0x1C8058u) {
        ctx->pc = 0x1C8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8054u;
        // 0x1c8058: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C805Cu;
        goto label_1c805c;
    }
    ctx->pc = 0x1C8054u;
    {
        const bool branch_taken_0x1c8054 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8054u;
        // 0x1c8058: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8054) {
            ctx->pc = 0x1C8064u;
            goto label_1c8064;
        }
    }
    ctx->pc = 0x1C805Cu;
label_1c805c:
    // 0x1c805c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c8060:
    if (ctx->pc == 0x1C8060u) {
        ctx->pc = 0x1C8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C805Cu;
        // 0x1c8060: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8064u;
        goto label_1c8064;
    }
    ctx->pc = 0x1C805Cu;
    {
        const bool branch_taken_0x1c805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C805Cu;
        // 0x1c8060: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c805c) {
            ctx->pc = 0x1C8084u;
            goto label_1c8084;
        }
    }
    ctx->pc = 0x1C8064u;
label_1c8064:
    // 0x1c8064: 0x0  nop
    ctx->pc = 0x1c8064u;
    // NOP
label_1c8068:
    // 0x1c8068: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c806c:
    // 0x1c806c: 0x0  nop
    ctx->pc = 0x1c806cu;
    // NOP
label_1c8070:
    // 0x1c8070: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c8074:
    // 0x1c8074: 0x0  nop
    ctx->pc = 0x1c8074u;
    // NOP
label_1c8078:
    // 0x1c8078: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c807c:
    if (ctx->pc == 0x1C807Cu) {
        ctx->pc = 0x1C8080u;
        goto label_1c8080;
    }
    ctx->pc = 0x1C8078u;
    {
        const bool branch_taken_0x1c8078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8078) {
            ctx->pc = 0x1C8084u;
            goto label_1c8084;
        }
    }
    ctx->pc = 0x1C8080u;
label_1c8080:
    // 0x1c8080: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c8080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1c8084:
    // 0x1c8084: 0x0  nop
    ctx->pc = 0x1c8084u;
    // NOP
label_1c8088:
    // 0x1c8088: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c808c:
    // 0x1c808c: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x1c808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8090:
    // 0x1c8090: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c8094:
    // 0x1c8094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8098:
    // 0x1c8098: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1c8098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1c809c:
    // 0x1c809c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c809cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c80a0:
    // 0x1c80a0: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x1c80a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_1c80a4:
    // 0x1c80a4: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c80a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c80a8:
    // 0x1c80a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c80a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c80ac:
    // 0x1c80ac: 0xc066e34  jal         func_19B8D0
label_1c80b0:
    if (ctx->pc == 0x1C80B0u) {
        ctx->pc = 0x1C80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80ACu;
        // 0x1c80b0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C80B4u;
        goto label_1c80b4;
    }
    ctx->pc = 0x1C80ACu;
    SET_GPR_U32(ctx, 31, 0x1C80B4u);
    ctx->pc = 0x1C80B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80ACu;
    // 0x1c80b0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C80B4u;
label_1c80b4:
    // 0x1c80b4: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c80b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c80b8:
    // 0x1c80b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c80b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c80bc:
    // 0x1c80bc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c80c0:
    if (ctx->pc == 0x1C80C0u) {
        ctx->pc = 0x1C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80BCu;
        // 0x1c80c0: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C80C4u;
        goto label_1c80c4;
    }
    ctx->pc = 0x1C80BCu;
    {
        const bool branch_taken_0x1c80bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80BCu;
        // 0x1c80c0: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80bc) {
            ctx->pc = 0x1C80F0u;
            goto label_1c80f0;
        }
    }
    ctx->pc = 0x1C80C4u;
label_1c80c4:
    // 0x1c80c4: 0x928402e3  lbu         $a0, 0x2E3($s4)
    ctx->pc = 0x1c80c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 739)));
label_1c80c8:
    // 0x1c80c8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c80c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c80cc:
    // 0x1c80cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c80d0:
    // 0x1c80d0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1c80d4:
    // 0x1c80d4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c80d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c80d8:
    // 0x1c80d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c80d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c80dc:
    // 0x1c80dc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c80e0:
    // 0x1c80e0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c80e4:
    // 0x1c80e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c80e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c80e8:
    // 0x1c80e8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c80e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c80ec:
    // 0x1c80ec: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c80ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c80f0:
    // 0x1c80f0: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1c80f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_1c80f4:
    // 0x1c80f4: 0x97a600f8  lhu         $a2, 0xF8($sp)
    ctx->pc = 0x1c80f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
label_1c80f8:
    // 0x1c80f8: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1c80f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c80fc:
    // 0x1c80fc: 0x87a500f4  lh          $a1, 0xF4($sp)
    ctx->pc = 0x1c80fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
label_1c8100:
    // 0x1c8100: 0x2924021  addu        $t0, $s4, $s2
    ctx->pc = 0x1c8100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1c8104:
    // 0x1c8104: 0x87a300f0  lh          $v1, 0xF0($sp)
    ctx->pc = 0x1c8104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1c8108:
    // 0x1c8108: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c8108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c810c:
    // 0x1c810c: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1c810cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1c8110:
    // 0x1c8110: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1c8110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1c8114:
    // 0x1c8114: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1c8118:
    // 0x1c8118: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c8118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c811c:
    // 0x1c811c: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1c811cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c8120:
    // 0x1c8120: 0xa4e30020  sh          $v1, 0x20($a3)
    ctx->pc = 0x1c8120u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 3));
label_1c8124:
    // 0x1c8124: 0xa4e50022  sh          $a1, 0x22($a3)
    ctx->pc = 0x1c8124u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c8128:
    // 0x1c8128: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c8128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
label_1c812c:
    // 0x1c812c: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c8130:
    // 0x1c8130: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c8134:
    // 0x1c8134: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c8138:
    // 0x1c8138: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c8138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c813c:
    // 0x1c813c: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c8140:
    // 0x1c8140: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c8144:
    // 0x1c8144: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c8144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c8148:
    // 0x1c8148: 0xc50002b0  lwc1        $f0, 0x2B0($t0)
    ctx->pc = 0x1c8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c814c:
    // 0x1c814c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c814cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c8150:
    // 0x1c8150: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1c8150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1c8154:
    // 0x1c8154: 0xc50002b4  lwc1        $f0, 0x2B4($t0)
    ctx->pc = 0x1c8154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8158:
    // 0x1c8158: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c8158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c815c:
    // 0x1c815c: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1c815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1c8160:
    // 0x1c8160: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1c8164:
    if (ctx->pc == 0x1C8164u) {
        ctx->pc = 0x1C8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8160u;
        // 0x1c8164: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8168u;
        goto label_1c8168;
    }
    ctx->pc = 0x1C8160u;
    {
        const bool branch_taken_0x1c8160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8160u;
        // 0x1c8164: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8160) {
            ctx->pc = 0x1C7FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7fe4;
        }
    }
    ctx->pc = 0x1C8168u;
label_1c8168:
    // 0x1c8168: 0x928302e1  lbu         $v1, 0x2E1($s4)
    ctx->pc = 0x1c8168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
label_1c816c:
    // 0x1c816c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1c8170:
    if (ctx->pc == 0x1C8170u) {
        ctx->pc = 0x1C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C816Cu;
        // 0x1c8170: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8174u;
        goto label_1c8174;
    }
    ctx->pc = 0x1C816Cu;
    {
        const bool branch_taken_0x1c816c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C816Cu;
        // 0x1c8170: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c816c) {
            ctx->pc = 0x1C8200u;
            goto label_1c8200;
        }
    }
    ctx->pc = 0x1C8174u;
label_1c8174:
    // 0x1c8174: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c8174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8178:
    // 0x1c8178: 0x10660019  beq         $v1, $a2, . + 4 + (0x19 << 2)
label_1c817c:
    if (ctx->pc == 0x1C817Cu) {
        ctx->pc = 0x1C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8178u;
        // 0x1c817c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8180u;
        goto label_1c8180;
    }
    ctx->pc = 0x1C8178u;
    {
        const bool branch_taken_0x1c8178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8178u;
        // 0x1c817c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8178) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C8180u;
label_1c8180:
    // 0x1c8180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c8184:
    // 0x1c8184: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1c8188:
    if (ctx->pc == 0x1C8188u) {
        ctx->pc = 0x1C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8184u;
        // 0x1c8188: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C818Cu;
        goto label_1c818c;
    }
    ctx->pc = 0x1C8184u;
    {
        const bool branch_taken_0x1c8184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8184u;
        // 0x1c8188: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8184) {
            ctx->pc = 0x1C81C0u;
            goto label_1c81c0;
        }
    }
    ctx->pc = 0x1C818Cu;
label_1c818c:
    // 0x1c818c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8190:
    // 0x1c8190: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c8194:
    if (ctx->pc == 0x1C8194u) {
        ctx->pc = 0x1C8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8190u;
        // 0x1c8194: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8198u;
        goto label_1c8198;
    }
    ctx->pc = 0x1C8190u;
    {
        const bool branch_taken_0x1c8190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8190u;
        // 0x1c8194: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8190) {
            ctx->pc = 0x1C81A0u;
            goto label_1c81a0;
        }
    }
    ctx->pc = 0x1C8198u;
label_1c8198:
    // 0x1c8198: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c819c:
    if (ctx->pc == 0x1C819Cu) {
        ctx->pc = 0x1C819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8198u;
        // 0x1c819c: 0x928202e1  lbu         $v0, 0x2E1($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81A0u;
        goto label_1c81a0;
    }
    ctx->pc = 0x1C8198u;
    {
        const bool branch_taken_0x1c8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8198u;
        // 0x1c819c: 0x928202e1  lbu         $v0, 0x2E1($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8198) {
            ctx->pc = 0x1C8220u;
            goto label_1c8220;
        }
    }
    ctx->pc = 0x1C81A0u;
label_1c81a0:
    // 0x1c81a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c81a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c81a4:
    // 0x1c81a4: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x1c81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_1c81a8:
    // 0x1c81a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c81a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81ac:
    // 0x1c81ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81b0:
    // 0x1c81b0: 0xc066c72  jal         func_19B1C8
label_1c81b4:
    if (ctx->pc == 0x1C81B4u) {
        ctx->pc = 0x1C81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81B0u;
        // 0x1c81b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81B8u;
        goto label_1c81b8;
    }
    ctx->pc = 0x1C81B0u;
    SET_GPR_U32(ctx, 31, 0x1C81B8u);
    ctx->pc = 0x1C81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B0u;
    // 0x1c81b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C81B8u;
label_1c81b8:
    // 0x1c81b8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c81bc:
    if (ctx->pc == 0x1C81BCu) {
        ctx->pc = 0x1C81C0u;
        goto label_1c81c0;
    }
    ctx->pc = 0x1C81B8u;
    {
        const bool branch_taken_0x1c81b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81b8) {
            ctx->pc = 0x1C821Cu;
            goto label_1c821c;
        }
    }
    ctx->pc = 0x1C81C0u;
label_1c81c0:
    // 0x1c81c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c81c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c81c4:
    // 0x1c81c4: 0x24a54b20  addiu       $a1, $a1, 0x4B20
    ctx->pc = 0x1c81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19232));
label_1c81c8:
    // 0x1c81c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c81c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81cc:
    // 0x1c81cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81d0:
    // 0x1c81d0: 0xc066c72  jal         func_19B1C8
label_1c81d4:
    if (ctx->pc == 0x1C81D4u) {
        ctx->pc = 0x1C81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81D0u;
        // 0x1c81d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81D8u;
        goto label_1c81d8;
    }
    ctx->pc = 0x1C81D0u;
    SET_GPR_U32(ctx, 31, 0x1C81D8u);
    ctx->pc = 0x1C81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81D0u;
    // 0x1c81d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C81D8u;
label_1c81d8:
    // 0x1c81d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c81dc:
    if (ctx->pc == 0x1C81DCu) {
        ctx->pc = 0x1C81E0u;
        goto label_1c81e0;
    }
    ctx->pc = 0x1C81D8u;
    {
        const bool branch_taken_0x1c81d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81d8) {
            ctx->pc = 0x1C821Cu;
            goto label_1c821c;
        }
    }
    ctx->pc = 0x1C81E0u;
label_1c81e0:
    // 0x1c81e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c81e4:
    // 0x1c81e4: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x1c81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
label_1c81e8:
    // 0x1c81e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c81e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81ec:
    // 0x1c81ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c81f0:
    // 0x1c81f0: 0xc066c72  jal         func_19B1C8
label_1c81f4:
    if (ctx->pc == 0x1C81F4u) {
        ctx->pc = 0x1C81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81F0u;
        // 0x1c81f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C81F8u;
        goto label_1c81f8;
    }
    ctx->pc = 0x1C81F0u;
    SET_GPR_U32(ctx, 31, 0x1C81F8u);
    ctx->pc = 0x1C81F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81F0u;
    // 0x1c81f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C81F8u;
label_1c81f8:
    // 0x1c81f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c81fc:
    if (ctx->pc == 0x1C81FCu) {
        ctx->pc = 0x1C8200u;
        goto label_1c8200;
    }
    ctx->pc = 0x1C81F8u;
    {
        const bool branch_taken_0x1c81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81f8) {
            ctx->pc = 0x1C821Cu;
            goto label_1c821c;
        }
    }
    ctx->pc = 0x1C8200u;
label_1c8200:
    // 0x1c8200: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c8200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c8204:
    // 0x1c8204: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
label_1c8208:
    // 0x1c8208: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c8208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c820c:
    // 0x1c820c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c820cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8210:
    // 0x1c8210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8214:
    // 0x1c8214: 0xc066c72  jal         func_19B1C8
label_1c8218:
    if (ctx->pc == 0x1C8218u) {
        ctx->pc = 0x1C8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8214u;
        // 0x1c8218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C821Cu;
        goto label_1c821c;
    }
    ctx->pc = 0x1C8214u;
    SET_GPR_U32(ctx, 31, 0x1C821Cu);
    ctx->pc = 0x1C8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8214u;
    // 0x1c8218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C821Cu;
label_1c821c:
    // 0x1c821c: 0x928202e1  lbu         $v0, 0x2E1($s4)
    ctx->pc = 0x1c821cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
label_1c8220:
    // 0x1c8220: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1c8224:
    if (ctx->pc == 0x1C8224u) {
        ctx->pc = 0x1C8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8220u;
        // 0x1c8224: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8228u;
        goto label_1c8228;
    }
    ctx->pc = 0x1C8220u;
    {
        const bool branch_taken_0x1c8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8220u;
        // 0x1c8224: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8220) {
            ctx->pc = 0x1C8250u;
            goto label_1c8250;
        }
    }
    ctx->pc = 0x1C8228u;
label_1c8228:
    // 0x1c8228: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c8228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c822c:
    // 0x1c822c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c8230:
    // 0x1c8230: 0x24a54c70  addiu       $a1, $a1, 0x4C70
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
label_1c8234:
    // 0x1c8234: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c8234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c8238:
    // 0x1c8238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c823c:
    // 0x1c823c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c823cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8240:
    // 0x1c8240: 0xc066c72  jal         func_19B1C8
label_1c8244:
    if (ctx->pc == 0x1C8244u) {
        ctx->pc = 0x1C8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8240u;
        // 0x1c8244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8248u;
        goto label_1c8248;
    }
    ctx->pc = 0x1C8240u;
    SET_GPR_U32(ctx, 31, 0x1C8248u);
    ctx->pc = 0x1C8244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8240u;
    // 0x1c8244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C8248u;
label_1c8248:
    // 0x1c8248: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c824c:
    if (ctx->pc == 0x1C824Cu) {
        ctx->pc = 0x1C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8248u;
        // 0x1c824c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8250u;
        goto label_1c8250;
    }
    ctx->pc = 0x1C8248u;
    {
        const bool branch_taken_0x1c8248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8248u;
        // 0x1c824c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8248) {
            ctx->pc = 0x1C8270u;
            goto label_1c8270;
        }
    }
    ctx->pc = 0x1C8250u;
label_1c8250:
    // 0x1c8250: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c8250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c8254:
    // 0x1c8254: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x1c8254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
label_1c8258:
    // 0x1c8258: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c825c:
    // 0x1c825c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c825cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8260:
    // 0x1c8260: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8264:
    // 0x1c8264: 0xc066c72  jal         func_19B1C8
label_1c8268:
    if (ctx->pc == 0x1C8268u) {
        ctx->pc = 0x1C8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8264u;
        // 0x1c8268: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C826Cu;
        goto label_1c826c;
    }
    ctx->pc = 0x1C8264u;
    SET_GPR_U32(ctx, 31, 0x1C826Cu);
    ctx->pc = 0x1C8268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8264u;
    // 0x1c8268: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C826Cu;
label_1c826c:
    // 0x1c826c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c826cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c8270:
    // 0x1c8270: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c8270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c8274:
    // 0x1c8274: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c8274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c8278:
    // 0x1c8278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c827c:
    // 0x1c827c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c827cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8280:
    // 0x1c8280: 0xc066c72  jal         func_19B1C8
label_1c8284:
    if (ctx->pc == 0x1C8284u) {
        ctx->pc = 0x1C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8280u;
        // 0x1c8284: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8288u;
        goto label_1c8288;
    }
    ctx->pc = 0x1C8280u;
    SET_GPR_U32(ctx, 31, 0x1C8288u);
    ctx->pc = 0x1C8284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8280u;
    // 0x1c8284: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C8288u;
label_1c8288:
    // 0x1c8288: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c8288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1c828c:
    // 0x1c828c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c8290:
    // 0x1c8290: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c8290u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c8294:
    // 0x1c8294: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c8298:
    // 0x1c8298: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c8298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c829c:
    // 0x1c829c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c829cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c82a0:
    // 0x1c82a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c82a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c82a4:
    // 0x1c82a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c82a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c82a8:
    // 0x1c82a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c82a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c82ac:
    // 0x1c82ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c82acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c82b0:
    // 0x1c82b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c82b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c82b4:
    // 0x1c82b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c82b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c82b8:
    // 0x1c82b8: 0x3e00008  jr          $ra
label_1c82bc:
    if (ctx->pc == 0x1C82BCu) {
        ctx->pc = 0x1C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B8u;
        // 0x1c82bc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82C0u;
        goto label_1c82c0;
    }
    ctx->pc = 0x1C82B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B8u;
        // 0x1c82bc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c82c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c82c4:
    // 0x1c82c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c82c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c82c8:
    // 0x1c82c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c82c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c82cc:
    // 0x1c82cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c82ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c82d0:
    // 0x1c82d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c82d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c82d4:
    // 0x1c82d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c82d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c82d8:
    // 0x1c82d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c82dc:
    // 0x1c82dc: 0xc066d7a  jal         func_19B5E8
label_1c82e0:
    if (ctx->pc == 0x1C82E0u) {
        ctx->pc = 0x1C82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82DCu;
        // 0x1c82e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82E4u;
        goto label_1c82e4;
    }
    ctx->pc = 0x1C82DCu;
    SET_GPR_U32(ctx, 31, 0x1C82E4u);
    ctx->pc = 0x1C82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82DCu;
    // 0x1c82e0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1C82E4u;
label_1c82e4:
    // 0x1c82e4: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1c82e8:
    // 0x1c82e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c82ec:
    // 0x1c82ec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c82ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c82f0:
    // 0x1c82f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c82f4:
    // 0x1c82f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c82f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c82f8:
    // 0x1c82f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c82fc:
    // 0x1c82fc: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1c82fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1c8300:
    // 0x1c8300: 0x0  nop
    ctx->pc = 0x1c8300u;
    // NOP
label_1c8304:
    // 0x1c8304: 0x0  nop
    ctx->pc = 0x1c8304u;
    // NOP
label_1c8308:
    // 0x1c8308: 0xc066e14  jal         func_19B850
label_1c830c:
    if (ctx->pc == 0x1C830Cu) {
        ctx->pc = 0x1C830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8308u;
        // 0x1c830c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8310u;
        goto label_1c8310;
    }
    ctx->pc = 0x1C8308u;
    SET_GPR_U32(ctx, 31, 0x1C8310u);
    ctx->pc = 0x1C830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8308u;
    // 0x1c830c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1C8310u;
label_1c8310:
    // 0x1c8310: 0xc07f198  jal         func_1FC660
label_1c8314:
    if (ctx->pc == 0x1C8314u) {
        ctx->pc = 0x1C8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8310u;
        // 0x1c8314: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8318u;
        goto label_1c8318;
    }
    ctx->pc = 0x1C8310u;
    SET_GPR_U32(ctx, 31, 0x1C8318u);
    ctx->pc = 0x1C8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8310u;
    // 0x1c8314: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C8318u;
label_1c8318:
    // 0x1c8318: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c8318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c831c:
    // 0x1c831c: 0xc07f190  jal         func_1FC640
label_1c8320:
    if (ctx->pc == 0x1C8320u) {
        ctx->pc = 0x1C8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C831Cu;
        // 0x1c8320: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8324u;
        goto label_1c8324;
    }
    ctx->pc = 0x1C831Cu;
    SET_GPR_U32(ctx, 31, 0x1C8324u);
    ctx->pc = 0x1C8320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C831Cu;
    // 0x1c8320: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C8324u;
label_1c8324:
    // 0x1c8324: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c8324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c8328:
    // 0x1c8328: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c8328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c832c:
    // 0x1c832c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1c832cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c8330:
    // 0x1c8330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8334:
    // 0x1c8334: 0x0  nop
    ctx->pc = 0x1c8334u;
    // NOP
label_1c8338:
    // 0x1c8338: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c8338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c833c:
    // 0x1c833c: 0x0  nop
    ctx->pc = 0x1c833cu;
    // NOP
label_1c8340:
    // 0x1c8340: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c8344:
    if (ctx->pc == 0x1C8344u) {
        ctx->pc = 0x1C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8340u;
        // 0x1c8344: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8348u;
        goto label_1c8348;
    }
    ctx->pc = 0x1C8340u;
    {
        const bool branch_taken_0x1c8340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8340u;
        // 0x1c8344: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8340) {
            ctx->pc = 0x1C8350u;
            goto label_1c8350;
        }
    }
    ctx->pc = 0x1C8348u;
label_1c8348:
    // 0x1c8348: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c834c:
    if (ctx->pc == 0x1C834Cu) {
        ctx->pc = 0x1C834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8348u;
        // 0x1c834c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8350u;
        goto label_1c8350;
    }
    ctx->pc = 0x1C8348u;
    {
        const bool branch_taken_0x1c8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8348u;
        // 0x1c834c: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8348) {
            ctx->pc = 0x1C836Cu;
            goto label_1c836c;
        }
    }
    ctx->pc = 0x1C8350u;
label_1c8350:
    // 0x1c8350: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c8350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8354:
    // 0x1c8354: 0x0  nop
    ctx->pc = 0x1c8354u;
    // NOP
label_1c8358:
    // 0x1c8358: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c8358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c835c:
    // 0x1c835c: 0x0  nop
    ctx->pc = 0x1c835cu;
    // NOP
label_1c8360:
    // 0x1c8360: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c8364:
    if (ctx->pc == 0x1C8364u) {
        ctx->pc = 0x1C8368u;
        goto label_1c8368;
    }
    ctx->pc = 0x1C8360u;
    {
        const bool branch_taken_0x1c8360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8360) {
            ctx->pc = 0x1C836Cu;
            goto label_1c836c;
        }
    }
    ctx->pc = 0x1C8368u;
label_1c8368:
    // 0x1c8368: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1c8368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1c836c:
    // 0x1c836c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8370:
    // 0x1c8370: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c8370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c8374:
    // 0x1c8374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c8374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c8378:
    // 0x1c8378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c837c:
    // 0x1c837c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c8380:
    // 0x1c8380: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c8384:
    // 0x1c8384: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c8384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c8388:
    // 0x1c8388: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c8388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c838c:
    // 0x1c838c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c838cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c8390:
    // 0x1c8390: 0xc066e34  jal         func_19B8D0
label_1c8394:
    if (ctx->pc == 0x1C8394u) {
        ctx->pc = 0x1C8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8390u;
        // 0x1c8394: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8398u;
        goto label_1c8398;
    }
    ctx->pc = 0x1C8390u;
    SET_GPR_U32(ctx, 31, 0x1C8398u);
    ctx->pc = 0x1C8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8390u;
    // 0x1c8394: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1C8398u;
label_1c8398:
    // 0x1c8398: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1c8398u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1c839c:
    // 0x1c839c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c839cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c83a0:
    // 0x1c83a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c83a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c83a4:
    // 0x1c83a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c83a8:
    // 0x1c83a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c83a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c83ac:
    // 0x1c83ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c83b0:
    // 0x1c83b0: 0x3e00008  jr          $ra
label_1c83b4:
    if (ctx->pc == 0x1C83B4u) {
        ctx->pc = 0x1C83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B0u;
        // 0x1c83b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C83B8u;
        goto label_1c83b8;
    }
    ctx->pc = 0x1C83B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B0u;
        // 0x1c83b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83B8u;
label_1c83b8:
    // 0x1c83b8: 0x0  nop
    ctx->pc = 0x1c83b8u;
    // NOP
label_1c83bc:
    // 0x1c83bc: 0x0  nop
    ctx->pc = 0x1c83bcu;
    // NOP
label_1c83c0:
    // 0x1c83c0: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1c83c4:
    // 0x1c83c4: 0x248702b0  addiu       $a3, $a0, 0x2B0
    ctx->pc = 0x1c83c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
label_1c83c8:
    // 0x1c83c8: 0x248302b4  addiu       $v1, $a0, 0x2B4
    ctx->pc = 0x1c83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 692));
label_1c83cc:
    // 0x1c83cc: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x1c83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1c83d0:
    // 0x1c83d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1c83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c83d4:
    // 0x1c83d4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x1c83d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1c83d8:
    // 0x1c83d8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1c83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1c83dc:
    // 0x1c83dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c83e0:
    // 0x1c83e0: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c83e4:
    // 0x1c83e4: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x1c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_1c83e8:
    // 0x1c83e8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1c83e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1c83ec:
    // 0x1c83ec: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x1c83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1c83f0:
    // 0x1c83f0: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x1c83f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1c83f4:
    // 0x1c83f4: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1c83f8:
    // 0x1c83f8: 0x24a3001c  addiu       $v1, $a1, 0x1C
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_1c83fc:
    // 0x1c83fc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1c8400:
    // 0x1c8400: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1c8400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1c8404:
    // 0x1c8404: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c8404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8408:
    // 0x1c8408: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1c8408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1c840c:
    // 0x1c840c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c840cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c8410:
    // 0x1c8410: 0x3e00008  jr          $ra
label_1c8414:
    if (ctx->pc == 0x1C8414u) {
        ctx->pc = 0x1C8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8410u;
        // 0x1c8414: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8418u;
        goto label_1c8418;
    }
    ctx->pc = 0x1C8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8410u;
        // 0x1c8414: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8418u;
label_1c8418:
    // 0x1c8418: 0x0  nop
    ctx->pc = 0x1c8418u;
    // NOP
label_1c841c:
    // 0x1c841c: 0x0  nop
    ctx->pc = 0x1c841cu;
    // NOP
label_1c8420:
    // 0x1c8420: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x1c8420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_1c8424:
    // 0x1c8424: 0x34e00  sll         $t1, $v1, 24
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1c8428:
    // 0x1c8428: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1c842c:
    // 0x1c842c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c8430:
    // 0x1c8430: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x1c8430u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c8434:
    // 0x1c8434: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1c8434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1c8438:
    // 0x1c8438: 0xab5021  addu        $t2, $a1, $t3
    ctx->pc = 0x1c8438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1c843c:
    // 0x1c843c: 0x24830022  addiu       $v1, $a0, 0x22
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 34));
label_1c8440:
    // 0x1c8440: 0x6b2821  addu        $a1, $v1, $t3
    ctx->pc = 0x1c8440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1c8444:
    // 0x1c8444: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x1c8444u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
label_1c8448:
    // 0x1c8448: 0x24830024  addiu       $v1, $a0, 0x24
    ctx->pc = 0x1c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_1c844c:
    // 0x1c844c: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x1c844cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_1c8450:
    // 0x1c8450: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1c8454:
    // 0x1c8454: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1c8454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1c8458:
    // 0x1c8458: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c845c:
    // 0x1c845c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c8460:
    // 0x1c8460: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c8460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c8464:
    // 0x1c8464: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c8464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1c8468:
    // 0x1c8468: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c846c:
    // 0x1c846c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_1c8470:
    // 0x1c8470: 0x3e00008  jr          $ra
label_1c8474:
    if (ctx->pc == 0x1C8474u) {
        ctx->pc = 0x1C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8470u;
        // 0x1c8474: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8478u;
        goto label_1c8478;
    }
    ctx->pc = 0x1C8470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8470u;
        // 0x1c8474: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8478u;
label_1c8478:
    // 0x1c8478: 0x0  nop
    ctx->pc = 0x1c8478u;
    // NOP
label_1c847c:
    // 0x1c847c: 0x0  nop
    ctx->pc = 0x1c847cu;
    // NOP
label_1c8480:
    // 0x1c8480: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x1c8480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1c8484:
    // 0x1c8484: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1c8484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1c8488:
    // 0x1c8488: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x1c8488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1c848c:
    // 0x1c848c: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1c8490:
    // 0x1c8490: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1c8494:
    // 0x1c8494: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x1c8494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_1c8498:
    // 0x1c8498: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x1c8498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1c849c:
    // 0x1c849c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c849cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1c84a0:
    // 0x1c84a0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1c84a4:
    // 0x1c84a4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1c84a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1c84a8:
    // 0x1c84a8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1c84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1c84ac:
    // 0x1c84ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c84b0:
    // 0x1c84b0: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c84b4:
    // 0x1c84b4: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_1c84b8:
    // 0x1c84b8: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_1c84bc:
    // 0x1c84bc: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x1c84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1c84c0:
    // 0x1c84c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1c84c4:
    // 0x1c84c4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1c84c8:
    // 0x1c84c8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1c84cc:
    // 0x1c84cc: 0x3e00008  jr          $ra
label_1c84d0:
    if (ctx->pc == 0x1C84D0u) {
        ctx->pc = 0x1C84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84CCu;
        // 0x1c84d0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C84D4u;
        goto label_1c84d4;
    }
    ctx->pc = 0x1C84CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C84CCu;
        // 0x1c84d0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C84CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C84D4u;
label_1c84d4:
    // 0x1c84d4: 0x0  nop
    ctx->pc = 0x1c84d4u;
    // NOP
label_1c84d8:
    // 0x1c84d8: 0x0  nop
    ctx->pc = 0x1c84d8u;
    // NOP
label_1c84dc:
    // 0x1c84dc: 0x0  nop
    ctx->pc = 0x1c84dcu;
    // NOP
label_1c84e0:
    // 0x1c84e0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1c84e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1c84e4:
    // 0x1c84e4: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x1c84e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1c84e8:
    // 0x1c84e8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1c84ec:
    // 0x1c84ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x1c84f0u;
    return;
}
