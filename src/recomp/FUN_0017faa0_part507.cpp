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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part507(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        case 0x276c20u: goto label_276c20;
        case 0x276c24u: goto label_276c24;
        case 0x276c28u: goto label_276c28;
        case 0x276c2cu: goto label_276c2c;
        case 0x276c30u: goto label_276c30;
        case 0x276c34u: goto label_276c34;
        case 0x276c38u: goto label_276c38;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c40u: goto label_276c40;
        case 0x276c44u: goto label_276c44;
        case 0x276c48u: goto label_276c48;
        case 0x276c4cu: goto label_276c4c;
        case 0x276c50u: goto label_276c50;
        case 0x276c54u: goto label_276c54;
        case 0x276c58u: goto label_276c58;
        case 0x276c5cu: goto label_276c5c;
        case 0x276c60u: goto label_276c60;
        case 0x276c64u: goto label_276c64;
        case 0x276c68u: goto label_276c68;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c70u: goto label_276c70;
        case 0x276c74u: goto label_276c74;
        case 0x276c78u: goto label_276c78;
        case 0x276c7cu: goto label_276c7c;
        case 0x276c80u: goto label_276c80;
        case 0x276c84u: goto label_276c84;
        case 0x276c88u: goto label_276c88;
        case 0x276c8cu: goto label_276c8c;
        case 0x276c90u: goto label_276c90;
        case 0x276c94u: goto label_276c94;
        case 0x276c98u: goto label_276c98;
        case 0x276c9cu: goto label_276c9c;
        case 0x276ca0u: goto label_276ca0;
        case 0x276ca4u: goto label_276ca4;
        case 0x276ca8u: goto label_276ca8;
        case 0x276cacu: goto label_276cac;
        case 0x276cb0u: goto label_276cb0;
        case 0x276cb4u: goto label_276cb4;
        case 0x276cb8u: goto label_276cb8;
        case 0x276cbcu: goto label_276cbc;
        case 0x276cc0u: goto label_276cc0;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cc8u: goto label_276cc8;
        case 0x276cccu: goto label_276ccc;
        case 0x276cd0u: goto label_276cd0;
        case 0x276cd4u: goto label_276cd4;
        case 0x276cd8u: goto label_276cd8;
        case 0x276cdcu: goto label_276cdc;
        case 0x276ce0u: goto label_276ce0;
        case 0x276ce4u: goto label_276ce4;
        case 0x276ce8u: goto label_276ce8;
        case 0x276cecu: goto label_276cec;
        case 0x276cf0u: goto label_276cf0;
        case 0x276cf4u: goto label_276cf4;
        case 0x276cf8u: goto label_276cf8;
        case 0x276cfcu: goto label_276cfc;
        case 0x276d00u: goto label_276d00;
        case 0x276d04u: goto label_276d04;
        case 0x276d08u: goto label_276d08;
        case 0x276d0cu: goto label_276d0c;
        case 0x276d10u: goto label_276d10;
        case 0x276d14u: goto label_276d14;
        case 0x276d18u: goto label_276d18;
        case 0x276d1cu: goto label_276d1c;
        case 0x276d20u: goto label_276d20;
        case 0x276d24u: goto label_276d24;
        case 0x276d28u: goto label_276d28;
        case 0x276d2cu: goto label_276d2c;
        case 0x276d30u: goto label_276d30;
        case 0x276d34u: goto label_276d34;
        case 0x276d38u: goto label_276d38;
        case 0x276d3cu: goto label_276d3c;
        case 0x276d40u: goto label_276d40;
        case 0x276d44u: goto label_276d44;
        case 0x276d48u: goto label_276d48;
        case 0x276d4cu: goto label_276d4c;
        case 0x276d50u: goto label_276d50;
        case 0x276d54u: goto label_276d54;
        case 0x276d58u: goto label_276d58;
        case 0x276d5cu: goto label_276d5c;
        case 0x276d60u: goto label_276d60;
        case 0x276d64u: goto label_276d64;
        case 0x276d68u: goto label_276d68;
        case 0x276d6cu: goto label_276d6c;
        case 0x276d70u: goto label_276d70;
        case 0x276d74u: goto label_276d74;
        case 0x276d78u: goto label_276d78;
        case 0x276d7cu: goto label_276d7c;
        case 0x276d80u: goto label_276d80;
        case 0x276d84u: goto label_276d84;
        case 0x276d88u: goto label_276d88;
        case 0x276d8cu: goto label_276d8c;
        case 0x276d90u: goto label_276d90;
        case 0x276d94u: goto label_276d94;
        case 0x276d98u: goto label_276d98;
        case 0x276d9cu: goto label_276d9c;
        case 0x276da0u: goto label_276da0;
        case 0x276da4u: goto label_276da4;
        case 0x276da8u: goto label_276da8;
        case 0x276dacu: goto label_276dac;
        case 0x276db0u: goto label_276db0;
        case 0x276db4u: goto label_276db4;
        case 0x276db8u: goto label_276db8;
        case 0x276dbcu: goto label_276dbc;
        case 0x276dc0u: goto label_276dc0;
        case 0x276dc4u: goto label_276dc4;
        case 0x276dc8u: goto label_276dc8;
        case 0x276dccu: goto label_276dcc;
        case 0x276dd0u: goto label_276dd0;
        case 0x276dd4u: goto label_276dd4;
        case 0x276dd8u: goto label_276dd8;
        case 0x276ddcu: goto label_276ddc;
        case 0x276de0u: goto label_276de0;
        case 0x276de4u: goto label_276de4;
        case 0x276de8u: goto label_276de8;
        case 0x276decu: goto label_276dec;
        case 0x276df0u: goto label_276df0;
        case 0x276df4u: goto label_276df4;
        case 0x276df8u: goto label_276df8;
        case 0x276dfcu: goto label_276dfc;
        case 0x276e00u: goto label_276e00;
        case 0x276e04u: goto label_276e04;
        case 0x276e08u: goto label_276e08;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e10u: goto label_276e10;
        case 0x276e14u: goto label_276e14;
        case 0x276e18u: goto label_276e18;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e20u: goto label_276e20;
        case 0x276e24u: goto label_276e24;
        case 0x276e28u: goto label_276e28;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e30u: goto label_276e30;
        case 0x276e34u: goto label_276e34;
        case 0x276e38u: goto label_276e38;
        case 0x276e3cu: goto label_276e3c;
        case 0x276e40u: goto label_276e40;
        case 0x276e44u: goto label_276e44;
        case 0x276e48u: goto label_276e48;
        case 0x276e4cu: goto label_276e4c;
        case 0x276e50u: goto label_276e50;
        case 0x276e54u: goto label_276e54;
        case 0x276e58u: goto label_276e58;
        case 0x276e5cu: goto label_276e5c;
        case 0x276e60u: goto label_276e60;
        case 0x276e64u: goto label_276e64;
        case 0x276e68u: goto label_276e68;
        case 0x276e6cu: goto label_276e6c;
        case 0x276e70u: goto label_276e70;
        case 0x276e74u: goto label_276e74;
        case 0x276e78u: goto label_276e78;
        case 0x276e7cu: goto label_276e7c;
        case 0x276e80u: goto label_276e80;
        case 0x276e84u: goto label_276e84;
        case 0x276e88u: goto label_276e88;
        case 0x276e8cu: goto label_276e8c;
        case 0x276e90u: goto label_276e90;
        case 0x276e94u: goto label_276e94;
        case 0x276e98u: goto label_276e98;
        case 0x276e9cu: goto label_276e9c;
        case 0x276ea0u: goto label_276ea0;
        case 0x276ea4u: goto label_276ea4;
        case 0x276ea8u: goto label_276ea8;
        case 0x276eacu: goto label_276eac;
        case 0x276eb0u: goto label_276eb0;
        case 0x276eb4u: goto label_276eb4;
        case 0x276eb8u: goto label_276eb8;
        case 0x276ebcu: goto label_276ebc;
        case 0x276ec0u: goto label_276ec0;
        case 0x276ec4u: goto label_276ec4;
        case 0x276ec8u: goto label_276ec8;
        case 0x276eccu: goto label_276ecc;
        case 0x276ed0u: goto label_276ed0;
        case 0x276ed4u: goto label_276ed4;
        case 0x276ed8u: goto label_276ed8;
        case 0x276edcu: goto label_276edc;
        case 0x276ee0u: goto label_276ee0;
        case 0x276ee4u: goto label_276ee4;
        case 0x276ee8u: goto label_276ee8;
        case 0x276eecu: goto label_276eec;
        case 0x276ef0u: goto label_276ef0;
        case 0x276ef4u: goto label_276ef4;
        case 0x276ef8u: goto label_276ef8;
        case 0x276efcu: goto label_276efc;
        case 0x276f00u: goto label_276f00;
        case 0x276f04u: goto label_276f04;
        case 0x276f08u: goto label_276f08;
        case 0x276f0cu: goto label_276f0c;
        case 0x276f10u: goto label_276f10;
        case 0x276f14u: goto label_276f14;
        case 0x276f18u: goto label_276f18;
        case 0x276f1cu: goto label_276f1c;
        case 0x276f20u: goto label_276f20;
        case 0x276f24u: goto label_276f24;
        case 0x276f28u: goto label_276f28;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f30u: goto label_276f30;
        case 0x276f34u: goto label_276f34;
        case 0x276f38u: goto label_276f38;
        case 0x276f3cu: goto label_276f3c;
        case 0x276f40u: goto label_276f40;
        case 0x276f44u: goto label_276f44;
        case 0x276f48u: goto label_276f48;
        case 0x276f4cu: goto label_276f4c;
        case 0x276f50u: goto label_276f50;
        case 0x276f54u: goto label_276f54;
        case 0x276f58u: goto label_276f58;
        case 0x276f5cu: goto label_276f5c;
        case 0x276f60u: goto label_276f60;
        case 0x276f64u: goto label_276f64;
        case 0x276f68u: goto label_276f68;
        case 0x276f6cu: goto label_276f6c;
        case 0x276f70u: goto label_276f70;
        case 0x276f74u: goto label_276f74;
        case 0x276f78u: goto label_276f78;
        case 0x276f7cu: goto label_276f7c;
        case 0x276f80u: goto label_276f80;
        case 0x276f84u: goto label_276f84;
        case 0x276f88u: goto label_276f88;
        case 0x276f8cu: goto label_276f8c;
        case 0x276f90u: goto label_276f90;
        case 0x276f94u: goto label_276f94;
        case 0x276f98u: goto label_276f98;
        case 0x276f9cu: goto label_276f9c;
        case 0x276fa0u: goto label_276fa0;
        case 0x276fa4u: goto label_276fa4;
        case 0x276fa8u: goto label_276fa8;
        case 0x276facu: goto label_276fac;
        case 0x276fb0u: goto label_276fb0;
        case 0x276fb4u: goto label_276fb4;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fbcu: goto label_276fbc;
        case 0x276fc0u: goto label_276fc0;
        case 0x276fc4u: goto label_276fc4;
        case 0x276fc8u: goto label_276fc8;
        case 0x276fccu: goto label_276fcc;
        case 0x276fd0u: goto label_276fd0;
        case 0x276fd4u: goto label_276fd4;
        case 0x276fd8u: goto label_276fd8;
        case 0x276fdcu: goto label_276fdc;
        case 0x276fe0u: goto label_276fe0;
        case 0x276fe4u: goto label_276fe4;
        case 0x276fe8u: goto label_276fe8;
        case 0x276fecu: goto label_276fec;
        case 0x276ff0u: goto label_276ff0;
        case 0x276ff4u: goto label_276ff4;
        case 0x276ff8u: goto label_276ff8;
        case 0x276ffcu: goto label_276ffc;
        case 0x277000u: goto label_277000;
        case 0x277004u: goto label_277004;
        case 0x277008u: goto label_277008;
        case 0x27700cu: goto label_27700c;
        case 0x277010u: goto label_277010;
        case 0x277014u: goto label_277014;
        case 0x277018u: goto label_277018;
        case 0x27701cu: goto label_27701c;
        case 0x277020u: goto label_277020;
        case 0x277024u: goto label_277024;
        case 0x277028u: goto label_277028;
        case 0x27702cu: goto label_27702c;
        case 0x277030u: goto label_277030;
        case 0x277034u: goto label_277034;
        case 0x277038u: goto label_277038;
        case 0x27703cu: goto label_27703c;
        case 0x277040u: goto label_277040;
        case 0x277044u: goto label_277044;
        case 0x277048u: goto label_277048;
        case 0x27704cu: goto label_27704c;
        case 0x277050u: goto label_277050;
        case 0x277054u: goto label_277054;
        case 0x277058u: goto label_277058;
        case 0x27705cu: goto label_27705c;
        case 0x277060u: goto label_277060;
        case 0x277064u: goto label_277064;
        case 0x277068u: goto label_277068;
        case 0x27706cu: goto label_27706c;
        case 0x277070u: goto label_277070;
        case 0x277074u: goto label_277074;
        case 0x277078u: goto label_277078;
        case 0x27707cu: goto label_27707c;
        case 0x277080u: goto label_277080;
        case 0x277084u: goto label_277084;
        case 0x277088u: goto label_277088;
        case 0x27708cu: goto label_27708c;
        case 0x277090u: goto label_277090;
        case 0x277094u: goto label_277094;
        case 0x277098u: goto label_277098;
        case 0x27709cu: goto label_27709c;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770a4u: goto label_2770a4;
        case 0x2770a8u: goto label_2770a8;
        case 0x2770acu: goto label_2770ac;
        case 0x2770b0u: goto label_2770b0;
        case 0x2770b4u: goto label_2770b4;
        case 0x2770b8u: goto label_2770b8;
        case 0x2770bcu: goto label_2770bc;
        case 0x2770c0u: goto label_2770c0;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770c8u: goto label_2770c8;
        case 0x2770ccu: goto label_2770cc;
        case 0x2770d0u: goto label_2770d0;
        case 0x2770d4u: goto label_2770d4;
        case 0x2770d8u: goto label_2770d8;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e0u: goto label_2770e0;
        case 0x2770e4u: goto label_2770e4;
        case 0x2770e8u: goto label_2770e8;
        case 0x2770ecu: goto label_2770ec;
        case 0x2770f0u: goto label_2770f0;
        case 0x2770f4u: goto label_2770f4;
        case 0x2770f8u: goto label_2770f8;
        case 0x2770fcu: goto label_2770fc;
        case 0x277100u: goto label_277100;
        case 0x277104u: goto label_277104;
        case 0x277108u: goto label_277108;
        case 0x27710cu: goto label_27710c;
        case 0x277110u: goto label_277110;
        case 0x277114u: goto label_277114;
        case 0x277118u: goto label_277118;
        case 0x27711cu: goto label_27711c;
        case 0x277120u: goto label_277120;
        case 0x277124u: goto label_277124;
        case 0x277128u: goto label_277128;
        case 0x27712cu: goto label_27712c;
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        case 0x2771b8u: goto label_2771b8;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        case 0x277240u: goto label_277240;
        case 0x277244u: goto label_277244;
        case 0x277248u: goto label_277248;
        case 0x27724cu: goto label_27724c;
        case 0x277250u: goto label_277250;
        case 0x277254u: goto label_277254;
        case 0x277258u: goto label_277258;
        case 0x27725cu: goto label_27725c;
        case 0x277260u: goto label_277260;
        case 0x277264u: goto label_277264;
        case 0x277268u: goto label_277268;
        case 0x27726cu: goto label_27726c;
        case 0x277270u: goto label_277270;
        case 0x277274u: goto label_277274;
        case 0x277278u: goto label_277278;
        case 0x27727cu: goto label_27727c;
        case 0x277280u: goto label_277280;
        case 0x277284u: goto label_277284;
        case 0x277288u: goto label_277288;
        case 0x27728cu: goto label_27728c;
        case 0x277290u: goto label_277290;
        case 0x277294u: goto label_277294;
        case 0x277298u: goto label_277298;
        case 0x27729cu: goto label_27729c;
        case 0x2772a0u: goto label_2772a0;
        case 0x2772a4u: goto label_2772a4;
        case 0x2772a8u: goto label_2772a8;
        case 0x2772acu: goto label_2772ac;
        case 0x2772b0u: goto label_2772b0;
        case 0x2772b4u: goto label_2772b4;
        case 0x2772b8u: goto label_2772b8;
        case 0x2772bcu: goto label_2772bc;
        case 0x2772c0u: goto label_2772c0;
        case 0x2772c4u: goto label_2772c4;
        case 0x2772c8u: goto label_2772c8;
        case 0x2772ccu: goto label_2772cc;
        case 0x2772d0u: goto label_2772d0;
        case 0x2772d4u: goto label_2772d4;
        case 0x2772d8u: goto label_2772d8;
        case 0x2772dcu: goto label_2772dc;
        case 0x2772e0u: goto label_2772e0;
        case 0x2772e4u: goto label_2772e4;
        case 0x2772e8u: goto label_2772e8;
        case 0x2772ecu: goto label_2772ec;
        case 0x2772f0u: goto label_2772f0;
        case 0x2772f4u: goto label_2772f4;
        case 0x2772f8u: goto label_2772f8;
        case 0x2772fcu: goto label_2772fc;
        case 0x277300u: goto label_277300;
        case 0x277304u: goto label_277304;
        case 0x277308u: goto label_277308;
        case 0x27730cu: goto label_27730c;
        case 0x277310u: goto label_277310;
        case 0x277314u: goto label_277314;
        case 0x277318u: goto label_277318;
        case 0x27731cu: goto label_27731c;
        case 0x277320u: goto label_277320;
        case 0x277324u: goto label_277324;
        case 0x277328u: goto label_277328;
        case 0x27732cu: goto label_27732c;
        case 0x277330u: goto label_277330;
        case 0x277334u: goto label_277334;
        case 0x277338u: goto label_277338;
        case 0x27733cu: goto label_27733c;
        case 0x277340u: goto label_277340;
        case 0x277344u: goto label_277344;
        case 0x277348u: goto label_277348;
        case 0x27734cu: goto label_27734c;
        case 0x277350u: goto label_277350;
        case 0x277354u: goto label_277354;
        case 0x277358u: goto label_277358;
        case 0x27735cu: goto label_27735c;
        case 0x277360u: goto label_277360;
        case 0x277364u: goto label_277364;
        case 0x277368u: goto label_277368;
        case 0x27736cu: goto label_27736c;
        case 0x277370u: goto label_277370;
        case 0x277374u: goto label_277374;
        case 0x277378u: goto label_277378;
        case 0x27737cu: goto label_27737c;
        case 0x277380u: goto label_277380;
        case 0x277384u: goto label_277384;
        case 0x277388u: goto label_277388;
        case 0x27738cu: goto label_27738c;
        default: return;
    }

label_276bc0:
    // 0x276bc0: 0xe2c1  .word       0x0000E2C1                   # INVALID     $zero, $zero, -0x1D3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x276BC0 raw=0x0000E2C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276bc4:
    // 0x276bc4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x276bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276bc8:
    // 0x276bc8: 0x0  nop
    ctx->pc = 0x276bc8u;
    // NOP
label_276bcc:
    // 0x276bcc: 0x0  nop
    ctx->pc = 0x276bccu;
    // NOP
label_276bd0:
    // 0x276bd0: 0xe2c8  .word       0x0000E2C8                   # jr          $zero # 0000E2C0 <InstrIdType: CPU_SPECIAL>
label_276bd4:
    if (ctx->pc == 0x276BD4u) {
        ctx->pc = 0x276BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD0u;
        // 0x276bd4: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BD8u;
        goto label_276bd8;
    }
    ctx->pc = 0x276BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD0u;
        // 0x276bd4: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276BD8u;
label_276bd8:
    // 0x276bd8: 0x0  nop
    ctx->pc = 0x276bd8u;
    // NOP
label_276bdc:
    // 0x276bdc: 0x0  nop
    ctx->pc = 0x276bdcu;
    // NOP
label_276be0:
    // 0x276be0: 0xe2d1  .word       0x0000E2D1                   # mthi        $zero # 0000E2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276be0u;
    ctx->hi = GPR_U64(ctx, 0);
label_276be4:
    // 0x276be4: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276be4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_276be8:
    // 0x276be8: 0x0  nop
    ctx->pc = 0x276be8u;
    // NOP
label_276bec:
    // 0x276bec: 0x0  nop
    ctx->pc = 0x276becu;
    // NOP
label_276bf0:
    // 0x276bf0: 0xe2de  .word       0x0000E2DE                   # ddiv        $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x276BF0 raw=0x0000E2DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276bf4:
    // 0x276bf4: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x276bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276bf8:
    // 0x276bf8: 0x0  nop
    ctx->pc = 0x276bf8u;
    // NOP
label_276bfc:
    // 0x276bfc: 0x0  nop
    ctx->pc = 0x276bfcu;
    // NOP
label_276c00:
    // 0x276c00: 0xe2e5  .word       0x0000E2E5                   # move        $gp, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c00u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_276c04:
    // 0x276c04: 0x59d0  .word       0x000059D0                   # mfhi        $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276c08:
    // 0x276c08: 0x0  nop
    ctx->pc = 0x276c08u;
    // NOP
label_276c0c:
    // 0x276c0c: 0x0  nop
    ctx->pc = 0x276c0cu;
    // NOP
label_276c10:
    // 0x276c10: 0xe2f1  tgeu        $zero, $zero, 907
    ctx->pc = 0x276c10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276c14:
    // 0x276c14: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276c18:
    // 0x276c18: 0x0  nop
    ctx->pc = 0x276c18u;
    // NOP
label_276c1c:
    // 0x276c1c: 0x0  nop
    ctx->pc = 0x276c1cu;
    // NOP
label_276c20:
    // 0x276c20: 0xe2fa  dsrl        $gp, $zero, 11
    ctx->pc = 0x276c20u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> 11);
label_276c24:
    // 0x276c24: 0x4df0  tge         $zero, $zero, 311
    ctx->pc = 0x276c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276c28:
    // 0x276c28: 0x0  nop
    ctx->pc = 0x276c28u;
    // NOP
label_276c2c:
    // 0x276c2c: 0x0  nop
    ctx->pc = 0x276c2cu;
    // NOP
label_276c30:
    // 0x276c30: 0xe304  .word       0x0000E304                   # sllv        $gp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c30u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_276c34:
    // 0x276c34: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276c38:
    // 0x276c38: 0x0  nop
    ctx->pc = 0x276c38u;
    // NOP
label_276c3c:
    // 0x276c3c: 0x0  nop
    ctx->pc = 0x276c3cu;
    // NOP
label_276c40:
    // 0x276c40: 0xe30d  break       0, 908
    ctx->pc = 0x276c40u;
    runtime->handleBreak(rdram, ctx);
label_276c44:
    // 0x276c44: 0x3c70  tge         $zero, $zero, 241
    ctx->pc = 0x276c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276c48:
    // 0x276c48: 0x0  nop
    ctx->pc = 0x276c48u;
    // NOP
label_276c4c:
    // 0x276c4c: 0x0  nop
    ctx->pc = 0x276c4cu;
    // NOP
label_276c50:
    // 0x276c50: 0xe315  .word       0x0000E315                   # INVALID     $zero, $zero, -0x1CEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x276C50 raw=0x0000E315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276c54:
    // 0x276c54: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x276c54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_276c58:
    // 0x276c58: 0x0  nop
    ctx->pc = 0x276c58u;
    // NOP
label_276c5c:
    // 0x276c5c: 0x0  nop
    ctx->pc = 0x276c5cu;
    // NOP
label_276c60:
    // 0x276c60: 0xe31c  .word       0x0000E31C                   # dmult       $zero, $zero # 0000E300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x276C60 raw=0x0000E31C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276c64:
    // 0x276c64: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x276c64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_276c68:
    // 0x276c68: 0x0  nop
    ctx->pc = 0x276c68u;
    // NOP
label_276c6c:
    // 0x276c6c: 0x0  nop
    ctx->pc = 0x276c6cu;
    // NOP
label_276c70:
    // 0x276c70: 0xe327  .word       0x0000E327                   # not         $gp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_276c74:
    // 0x276c74: 0x6d80  sll         $t5, $zero, 22
    ctx->pc = 0x276c74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_276c78:
    // 0x276c78: 0x0  nop
    ctx->pc = 0x276c78u;
    // NOP
label_276c7c:
    // 0x276c7c: 0x0  nop
    ctx->pc = 0x276c7cu;
    // NOP
label_276c80:
    // 0x276c80: 0xe335  .word       0x0000E335                   # INVALID     $zero, $zero, -0x1CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276C80 raw=0x0000E335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276c84:
    // 0x276c84: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x276c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276c88:
    // 0x276c88: 0x0  nop
    ctx->pc = 0x276c88u;
    // NOP
label_276c8c:
    // 0x276c8c: 0x0  nop
    ctx->pc = 0x276c8cu;
    // NOP
label_276c90:
    // 0x276c90: 0xe344  .word       0x0000E344                   # sllv        $gp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c90u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_276c94:
    // 0x276c94: 0x8360  .word       0x00008360                   # add         $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_276c98:
    // 0x276c98: 0x0  nop
    ctx->pc = 0x276c98u;
    // NOP
label_276c9c:
    // 0x276c9c: 0x0  nop
    ctx->pc = 0x276c9cu;
    // NOP
label_276ca0:
    // 0x276ca0: 0xe355  .word       0x0000E355                   # INVALID     $zero, $zero, -0x1CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x276CA0 raw=0x0000E355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276ca4:
    // 0x276ca4: 0x7e80  sll         $t7, $zero, 26
    ctx->pc = 0x276ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_276ca8:
    // 0x276ca8: 0x0  nop
    ctx->pc = 0x276ca8u;
    // NOP
label_276cac:
    // 0x276cac: 0x0  nop
    ctx->pc = 0x276cacu;
    // NOP
label_276cb0:
    // 0x276cb0: 0xe365  .word       0x0000E365                   # move        $gp, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_276cb4:
    // 0x276cb4: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_276cb8:
    // 0x276cb8: 0x0  nop
    ctx->pc = 0x276cb8u;
    // NOP
label_276cbc:
    // 0x276cbc: 0x0  nop
    ctx->pc = 0x276cbcu;
    // NOP
label_276cc0:
    // 0x276cc0: 0xe375  .word       0x0000E375                   # INVALID     $zero, $zero, -0x1C8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276CC0 raw=0x0000E375"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276cc4:
    // 0x276cc4: 0x5bc0  sll         $t3, $zero, 15
    ctx->pc = 0x276cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_276cc8:
    // 0x276cc8: 0x0  nop
    ctx->pc = 0x276cc8u;
    // NOP
label_276ccc:
    // 0x276ccc: 0x0  nop
    ctx->pc = 0x276cccu;
    // NOP
label_276cd0:
    // 0x276cd0: 0xe381  .word       0x0000E381                   # INVALID     $zero, $zero, -0x1C7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x276CD0 raw=0x0000E381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276cd4:
    // 0x276cd4: 0x4010  mfhi        $t0
    ctx->pc = 0x276cd4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276cd8:
    // 0x276cd8: 0x0  nop
    ctx->pc = 0x276cd8u;
    // NOP
label_276cdc:
    // 0x276cdc: 0x0  nop
    ctx->pc = 0x276cdcu;
    // NOP
label_276ce0:
    // 0x276ce0: 0xe38a  .word       0x0000E38A                   # movz        $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_276ce4:
    // 0x276ce4: 0x5460  .word       0x00005460                   # add         $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_276ce8:
    // 0x276ce8: 0x0  nop
    ctx->pc = 0x276ce8u;
    // NOP
label_276cec:
    // 0x276cec: 0x0  nop
    ctx->pc = 0x276cecu;
    // NOP
label_276cf0:
    // 0x276cf0: 0xe395  .word       0x0000E395                   # INVALID     $zero, $zero, -0x1C6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x276CF0 raw=0x0000E395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276cf4:
    // 0x276cf4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_276cf8:
    // 0x276cf8: 0x0  nop
    ctx->pc = 0x276cf8u;
    // NOP
label_276cfc:
    // 0x276cfc: 0x0  nop
    ctx->pc = 0x276cfcu;
    // NOP
label_276d00:
    // 0x276d00: 0xe3a1  .word       0x0000E3A1                   # addu        $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d00u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276d04:
    // 0x276d04: 0x5bf0  tge         $zero, $zero, 367
    ctx->pc = 0x276d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276d08:
    // 0x276d08: 0x0  nop
    ctx->pc = 0x276d08u;
    // NOP
label_276d0c:
    // 0x276d0c: 0x0  nop
    ctx->pc = 0x276d0cu;
    // NOP
label_276d10:
    // 0x276d10: 0xe3ad  .word       0x0000E3AD                   # daddu       $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d10u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276d14:
    // 0x276d14: 0x3240  sll         $a2, $zero, 9
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_276d18:
    // 0x276d18: 0x0  nop
    ctx->pc = 0x276d18u;
    // NOP
label_276d1c:
    // 0x276d1c: 0x0  nop
    ctx->pc = 0x276d1cu;
    // NOP
label_276d20:
    // 0x276d20: 0xe3b4  teq         $zero, $zero, 910
    ctx->pc = 0x276d20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276d24:
    // 0x276d24: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x276d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276d28:
    // 0x276d28: 0x0  nop
    ctx->pc = 0x276d28u;
    // NOP
label_276d2c:
    // 0x276d2c: 0x0  nop
    ctx->pc = 0x276d2cu;
    // NOP
label_276d30:
    // 0x276d30: 0xe3c2  srl         $gp, $zero, 15
    ctx->pc = 0x276d30u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_276d34:
    // 0x276d34: 0x73c0  sll         $t6, $zero, 15
    ctx->pc = 0x276d34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_276d38:
    // 0x276d38: 0x0  nop
    ctx->pc = 0x276d38u;
    // NOP
label_276d3c:
    // 0x276d3c: 0x0  nop
    ctx->pc = 0x276d3cu;
    // NOP
label_276d40:
    // 0x276d40: 0xe3d1  .word       0x0000E3D1                   # mthi        $zero # 0000E3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d40u;
    ctx->hi = GPR_U64(ctx, 0);
label_276d44:
    // 0x276d44: 0x46b0  tge         $zero, $zero, 282
    ctx->pc = 0x276d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276d48:
    // 0x276d48: 0x0  nop
    ctx->pc = 0x276d48u;
    // NOP
label_276d4c:
    // 0x276d4c: 0x0  nop
    ctx->pc = 0x276d4cu;
    // NOP
label_276d50:
    // 0x276d50: 0xe3da  .word       0x0000E3DA                   # div         $gp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_276d54:
    // 0x276d54: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x276d54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_276d58:
    // 0x276d58: 0x0  nop
    ctx->pc = 0x276d58u;
    // NOP
label_276d5c:
    // 0x276d5c: 0x0  nop
    ctx->pc = 0x276d5cu;
    // NOP
label_276d60:
    // 0x276d60: 0xe3ee  .word       0x0000E3EE                   # dsub        $gp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_276d64:
    // 0x276d64: 0x33e0  .word       0x000033E0                   # add         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_276d68:
    // 0x276d68: 0x0  nop
    ctx->pc = 0x276d68u;
    // NOP
label_276d6c:
    // 0x276d6c: 0x0  nop
    ctx->pc = 0x276d6cu;
    // NOP
label_276d70:
    // 0x276d70: 0xe3f5  .word       0x0000E3F5                   # INVALID     $zero, $zero, -0x1C0B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276D70 raw=0x0000E3F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276d74:
    // 0x276d74: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d74u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_276d78:
    // 0x276d78: 0x0  nop
    ctx->pc = 0x276d78u;
    // NOP
label_276d7c:
    // 0x276d7c: 0x0  nop
    ctx->pc = 0x276d7cu;
    // NOP
label_276d80:
    // 0x276d80: 0xe407  .word       0x0000E407                   # srav        $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d80u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_276d84:
    // 0x276d84: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_276d88:
    // 0x276d88: 0x0  nop
    ctx->pc = 0x276d88u;
    // NOP
label_276d8c:
    // 0x276d8c: 0x0  nop
    ctx->pc = 0x276d8cu;
    // NOP
label_276d90:
    // 0x276d90: 0xe412  .word       0x0000E412                   # mflo        $gp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276d90u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_276d94:
    // 0x276d94: 0x4a30  tge         $zero, $zero, 296
    ctx->pc = 0x276d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276d98:
    // 0x276d98: 0x0  nop
    ctx->pc = 0x276d98u;
    // NOP
label_276d9c:
    // 0x276d9c: 0x0  nop
    ctx->pc = 0x276d9cu;
    // NOP
label_276da0:
    // 0x276da0: 0xe41c  .word       0x0000E41C                   # dmult       $zero, $zero # 0000E400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x276DA0 raw=0x0000E41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276da4:
    // 0x276da4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x276da4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_276da8:
    // 0x276da8: 0x0  nop
    ctx->pc = 0x276da8u;
    // NOP
label_276dac:
    // 0x276dac: 0x0  nop
    ctx->pc = 0x276dacu;
    // NOP
label_276db0:
    // 0x276db0: 0xe42a  .word       0x0000E42A                   # slt         $gp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276db0u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_276db4:
    // 0x276db4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x276db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276db8:
    // 0x276db8: 0x0  nop
    ctx->pc = 0x276db8u;
    // NOP
label_276dbc:
    // 0x276dbc: 0x0  nop
    ctx->pc = 0x276dbcu;
    // NOP
label_276dc0:
    // 0x276dc0: 0xe439  .word       0x0000E439                   # INVALID     $zero, $zero, -0x1BC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x276DC0 raw=0x0000E439"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276dc4:
    // 0x276dc4: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x276dc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_276dc8:
    // 0x276dc8: 0x0  nop
    ctx->pc = 0x276dc8u;
    // NOP
label_276dcc:
    // 0x276dcc: 0x0  nop
    ctx->pc = 0x276dccu;
    // NOP
label_276dd0:
    // 0x276dd0: 0xe445  .word       0x0000E445                   # INVALID     $zero, $zero, -0x1BBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x276DD0 raw=0x0000E445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276dd4:
    // 0x276dd4: 0x9cf0  tge         $zero, $zero, 627
    ctx->pc = 0x276dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276dd8:
    // 0x276dd8: 0x0  nop
    ctx->pc = 0x276dd8u;
    // NOP
label_276ddc:
    // 0x276ddc: 0x0  nop
    ctx->pc = 0x276ddcu;
    // NOP
label_276de0:
    // 0x276de0: 0xe459  .word       0x0000E459                   # multu       $zero, $zero # 0000E440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276de0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_276de4:
    // 0x276de4: 0x33b0  tge         $zero, $zero, 206
    ctx->pc = 0x276de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276de8:
    // 0x276de8: 0x0  nop
    ctx->pc = 0x276de8u;
    // NOP
label_276dec:
    // 0x276dec: 0x0  nop
    ctx->pc = 0x276decu;
    // NOP
label_276df0:
    // 0x276df0: 0xe460  .word       0x0000E460                   # add         $gp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276df0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_276df4:
    // 0x276df4: 0x4ca0  .word       0x00004CA0                   # add         $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_276df8:
    // 0x276df8: 0x0  nop
    ctx->pc = 0x276df8u;
    // NOP
label_276dfc:
    // 0x276dfc: 0x0  nop
    ctx->pc = 0x276dfcu;
    // NOP
label_276e00:
    // 0x276e00: 0xe46a  .word       0x0000E46A                   # slt         $gp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e00u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_276e04:
    // 0x276e04: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_276e08:
    // 0x276e08: 0x0  nop
    ctx->pc = 0x276e08u;
    // NOP
label_276e0c:
    // 0x276e0c: 0x0  nop
    ctx->pc = 0x276e0cu;
    // NOP
label_276e10:
    // 0x276e10: 0xe474  teq         $zero, $zero, 913
    ctx->pc = 0x276e10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e14:
    // 0x276e14: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x276e14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e18:
    // 0x276e18: 0x0  nop
    ctx->pc = 0x276e18u;
    // NOP
label_276e1c:
    // 0x276e1c: 0x0  nop
    ctx->pc = 0x276e1cu;
    // NOP
label_276e20:
    // 0x276e20: 0xe47e  dsrl32      $gp, $zero, 17
    ctx->pc = 0x276e20u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 17));
label_276e24:
    // 0x276e24: 0x8e80  sll         $s1, $zero, 26
    ctx->pc = 0x276e24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_276e28:
    // 0x276e28: 0x0  nop
    ctx->pc = 0x276e28u;
    // NOP
label_276e2c:
    // 0x276e2c: 0x0  nop
    ctx->pc = 0x276e2cu;
    // NOP
label_276e30:
    // 0x276e30: 0xe490  .word       0x0000E490                   # mfhi        $gp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e30u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_276e34:
    // 0x276e34: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_276e38:
    // 0x276e38: 0x0  nop
    ctx->pc = 0x276e38u;
    // NOP
label_276e3c:
    // 0x276e3c: 0x0  nop
    ctx->pc = 0x276e3cu;
    // NOP
label_276e40:
    // 0x276e40: 0xe4a2  .word       0x0000E4A2                   # neg         $gp, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_276e44:
    // 0x276e44: 0x8db0  tge         $zero, $zero, 566
    ctx->pc = 0x276e44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e48:
    // 0x276e48: 0x0  nop
    ctx->pc = 0x276e48u;
    // NOP
label_276e4c:
    // 0x276e4c: 0x0  nop
    ctx->pc = 0x276e4cu;
    // NOP
label_276e50:
    // 0x276e50: 0xe4b4  teq         $zero, $zero, 914
    ctx->pc = 0x276e50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e54:
    // 0x276e54: 0x9ff0  tge         $zero, $zero, 639
    ctx->pc = 0x276e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e58:
    // 0x276e58: 0x0  nop
    ctx->pc = 0x276e58u;
    // NOP
label_276e5c:
    // 0x276e5c: 0x0  nop
    ctx->pc = 0x276e5cu;
    // NOP
label_276e60:
    // 0x276e60: 0xe4c8  .word       0x0000E4C8                   # jr          $zero # 0000E4C0 <InstrIdType: CPU_SPECIAL>
label_276e64:
    if (ctx->pc == 0x276E64u) {
        ctx->pc = 0x276E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E60u;
        // 0x276e64: 0x51c0  sll         $t2, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E68u;
        goto label_276e68;
    }
    ctx->pc = 0x276E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E60u;
        // 0x276e64: 0x51c0  sll         $t2, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276E68u;
label_276e68:
    // 0x276e68: 0x0  nop
    ctx->pc = 0x276e68u;
    // NOP
label_276e6c:
    // 0x276e6c: 0x0  nop
    ctx->pc = 0x276e6cu;
    // NOP
label_276e70:
    // 0x276e70: 0xe4d3  .word       0x0000E4D3                   # mtlo        $zero # 0000E4C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e70u;
    ctx->lo = GPR_U64(ctx, 0);
label_276e74:
    // 0x276e74: 0x7ae0  .word       0x00007AE0                   # add         $t7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_276e78:
    // 0x276e78: 0x0  nop
    ctx->pc = 0x276e78u;
    // NOP
label_276e7c:
    // 0x276e7c: 0x0  nop
    ctx->pc = 0x276e7cu;
    // NOP
label_276e80:
    // 0x276e80: 0xe4e3  .word       0x0000E4E3                   # negu        $gp, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e80u;
    SET_GPR_S32(ctx, 28, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276e84:
    // 0x276e84: 0x56f0  tge         $zero, $zero, 347
    ctx->pc = 0x276e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276e88:
    // 0x276e88: 0x0  nop
    ctx->pc = 0x276e88u;
    // NOP
label_276e8c:
    // 0x276e8c: 0x0  nop
    ctx->pc = 0x276e8cu;
    // NOP
label_276e90:
    // 0x276e90: 0xe4ee  .word       0x0000E4EE                   # dsub        $gp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276e90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_276e94:
    // 0x276e94: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x276e94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_276e98:
    // 0x276e98: 0x0  nop
    ctx->pc = 0x276e98u;
    // NOP
label_276e9c:
    // 0x276e9c: 0x0  nop
    ctx->pc = 0x276e9cu;
    // NOP
label_276ea0:
    // 0x276ea0: 0xe4fe  dsrl32      $gp, $zero, 19
    ctx->pc = 0x276ea0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 19));
label_276ea4:
    // 0x276ea4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ea4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_276ea8:
    // 0x276ea8: 0x0  nop
    ctx->pc = 0x276ea8u;
    // NOP
label_276eac:
    // 0x276eac: 0x0  nop
    ctx->pc = 0x276eacu;
    // NOP
label_276eb0:
    // 0x276eb0: 0xe50d  break       0, 916
    ctx->pc = 0x276eb0u;
    runtime->handleBreak(rdram, ctx);
label_276eb4:
    // 0x276eb4: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x276eb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276eb8:
    // 0x276eb8: 0x0  nop
    ctx->pc = 0x276eb8u;
    // NOP
label_276ebc:
    // 0x276ebc: 0x0  nop
    ctx->pc = 0x276ebcu;
    // NOP
label_276ec0:
    // 0x276ec0: 0xe516  .word       0x0000E516                   # dsrlv       $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ec0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276ec4:
    // 0x276ec4: 0x5ef0  tge         $zero, $zero, 379
    ctx->pc = 0x276ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276ec8:
    // 0x276ec8: 0x0  nop
    ctx->pc = 0x276ec8u;
    // NOP
label_276ecc:
    // 0x276ecc: 0x0  nop
    ctx->pc = 0x276eccu;
    // NOP
label_276ed0:
    // 0x276ed0: 0xe522  .word       0x0000E522                   # neg         $gp, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_276ed4:
    // 0x276ed4: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x276ed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276ed8:
    // 0x276ed8: 0x0  nop
    ctx->pc = 0x276ed8u;
    // NOP
label_276edc:
    // 0x276edc: 0x0  nop
    ctx->pc = 0x276edcu;
    // NOP
label_276ee0:
    // 0x276ee0: 0xe52e  .word       0x0000E52E                   # dsub        $gp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ee0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_276ee4:
    // 0x276ee4: 0x6860  .word       0x00006860                   # add         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_276ee8:
    // 0x276ee8: 0x0  nop
    ctx->pc = 0x276ee8u;
    // NOP
label_276eec:
    // 0x276eec: 0x0  nop
    ctx->pc = 0x276eecu;
    // NOP
label_276ef0:
    // 0x276ef0: 0xe53c  dsll32      $gp, $zero, 20
    ctx->pc = 0x276ef0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 20));
label_276ef4:
    // 0x276ef4: 0x7340  sll         $t6, $zero, 13
    ctx->pc = 0x276ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_276ef8:
    // 0x276ef8: 0x0  nop
    ctx->pc = 0x276ef8u;
    // NOP
label_276efc:
    // 0x276efc: 0x0  nop
    ctx->pc = 0x276efcu;
    // NOP
label_276f00:
    // 0x276f00: 0xe54b  .word       0x0000E54B                   # movn        $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f00u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_276f04:
    // 0x276f04: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f04u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_276f08:
    // 0x276f08: 0x0  nop
    ctx->pc = 0x276f08u;
    // NOP
label_276f0c:
    // 0x276f0c: 0x0  nop
    ctx->pc = 0x276f0cu;
    // NOP
label_276f10:
    // 0x276f10: 0xe555  .word       0x0000E555                   # INVALID     $zero, $zero, -0x1AAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x276F10 raw=0x0000E555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276f14:
    // 0x276f14: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_276f18:
    // 0x276f18: 0x0  nop
    ctx->pc = 0x276f18u;
    // NOP
label_276f1c:
    // 0x276f1c: 0x0  nop
    ctx->pc = 0x276f1cu;
    // NOP
label_276f20:
    // 0x276f20: 0xe563  .word       0x0000E563                   # negu        $gp, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f20u;
    SET_GPR_S32(ctx, 28, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276f24:
    // 0x276f24: 0x4e60  .word       0x00004E60                   # add         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_276f28:
    // 0x276f28: 0x0  nop
    ctx->pc = 0x276f28u;
    // NOP
label_276f2c:
    // 0x276f2c: 0x0  nop
    ctx->pc = 0x276f2cu;
    // NOP
label_276f30:
    // 0x276f30: 0xe56d  .word       0x0000E56D                   # daddu       $gp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f30u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276f34:
    // 0x276f34: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_276f38:
    // 0x276f38: 0x0  nop
    ctx->pc = 0x276f38u;
    // NOP
label_276f3c:
    // 0x276f3c: 0x0  nop
    ctx->pc = 0x276f3cu;
    // NOP
label_276f40:
    // 0x276f40: 0xe576  tne         $zero, $zero, 917
    ctx->pc = 0x276f40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276f44:
    // 0x276f44: 0xab40  sll         $s5, $zero, 13
    ctx->pc = 0x276f44u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_276f48:
    // 0x276f48: 0x0  nop
    ctx->pc = 0x276f48u;
    // NOP
label_276f4c:
    // 0x276f4c: 0x0  nop
    ctx->pc = 0x276f4cu;
    // NOP
label_276f50:
    // 0x276f50: 0xe58c  syscall     918
    ctx->pc = 0x276f50u;
    ctx->pc = 0x276F54u;
runtime->handleSyscall(rdram, ctx, 0x396u);
label_276f54:
    // 0x276f54: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_276f58:
    // 0x276f58: 0x0  nop
    ctx->pc = 0x276f58u;
    // NOP
label_276f5c:
    // 0x276f5c: 0x0  nop
    ctx->pc = 0x276f5cu;
    // NOP
label_276f60:
    // 0x276f60: 0xe59b  .word       0x0000E59B                   # divu        $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f60u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_276f64:
    // 0x276f64: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f64u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276f68:
    // 0x276f68: 0x0  nop
    ctx->pc = 0x276f68u;
    // NOP
label_276f6c:
    // 0x276f6c: 0x0  nop
    ctx->pc = 0x276f6cu;
    // NOP
label_276f70:
    // 0x276f70: 0xe5a4  .word       0x0000E5A4                   # and         $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f70u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276f74:
    // 0x276f74: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x276f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276f78:
    // 0x276f78: 0x0  nop
    ctx->pc = 0x276f78u;
    // NOP
label_276f7c:
    // 0x276f7c: 0x0  nop
    ctx->pc = 0x276f7cu;
    // NOP
label_276f80:
    // 0x276f80: 0xe5b2  tlt         $zero, $zero, 918
    ctx->pc = 0x276f80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276f84:
    // 0x276f84: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x276f84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_276f88:
    // 0x276f88: 0x0  nop
    ctx->pc = 0x276f88u;
    // NOP
label_276f8c:
    // 0x276f8c: 0x0  nop
    ctx->pc = 0x276f8cu;
    // NOP
label_276f90:
    // 0x276f90: 0xe5bc  dsll32      $gp, $zero, 22
    ctx->pc = 0x276f90u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 22));
label_276f94:
    // 0x276f94: 0x4fd0  .word       0x00004FD0                   # mfhi        $t1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276f94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_276f98:
    // 0x276f98: 0x0  nop
    ctx->pc = 0x276f98u;
    // NOP
label_276f9c:
    // 0x276f9c: 0x0  nop
    ctx->pc = 0x276f9cu;
    // NOP
label_276fa0:
    // 0x276fa0: 0xe5c6  .word       0x0000E5C6                   # srlv        $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276fa0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_276fa4:
    // 0x276fa4: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x276fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_276fa8:
    // 0x276fa8: 0x0  nop
    ctx->pc = 0x276fa8u;
    // NOP
label_276fac:
    // 0x276fac: 0x0  nop
    ctx->pc = 0x276facu;
    // NOP
label_276fb0:
    // 0x276fb0: 0xe5d6  .word       0x0000E5D6                   # dsrlv       $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276fb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276fb4:
    // 0x276fb4: 0x59b0  tge         $zero, $zero, 358
    ctx->pc = 0x276fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276fb8:
    // 0x276fb8: 0x0  nop
    ctx->pc = 0x276fb8u;
    // NOP
label_276fbc:
    // 0x276fbc: 0x0  nop
    ctx->pc = 0x276fbcu;
    // NOP
label_276fc0:
    // 0x276fc0: 0xe5e2  .word       0x0000E5E2                   # neg         $gp, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276fc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_276fc4:
    // 0x276fc4: 0x4eb0  tge         $zero, $zero, 314
    ctx->pc = 0x276fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276fc8:
    // 0x276fc8: 0x0  nop
    ctx->pc = 0x276fc8u;
    // NOP
label_276fcc:
    // 0x276fcc: 0x0  nop
    ctx->pc = 0x276fccu;
    // NOP
label_276fd0:
    // 0x276fd0: 0xe5ec  .word       0x0000E5EC                   # dadd        $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276fd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_276fd4:
    // 0x276fd4: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276fd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_276fd8:
    // 0x276fd8: 0x0  nop
    ctx->pc = 0x276fd8u;
    // NOP
label_276fdc:
    // 0x276fdc: 0x0  nop
    ctx->pc = 0x276fdcu;
    // NOP
label_276fe0:
    // 0x276fe0: 0xe5ff  dsra32      $gp, $zero, 23
    ctx->pc = 0x276fe0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 23));
label_276fe4:
    // 0x276fe4: 0x8480  sll         $s0, $zero, 18
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_276fe8:
    // 0x276fe8: 0x0  nop
    ctx->pc = 0x276fe8u;
    // NOP
label_276fec:
    // 0x276fec: 0x0  nop
    ctx->pc = 0x276fecu;
    // NOP
label_276ff0:
    // 0x276ff0: 0xe610  .word       0x0000E610                   # mfhi        $gp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ff0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_276ff4:
    // 0x276ff4: 0x97c0  sll         $s2, $zero, 31
    ctx->pc = 0x276ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_276ff8:
    // 0x276ff8: 0x0  nop
    ctx->pc = 0x276ff8u;
    // NOP
label_276ffc:
    // 0x276ffc: 0x0  nop
    ctx->pc = 0x276ffcu;
    // NOP
label_277000:
    // 0x277000: 0xe623  .word       0x0000E623                   # negu        $gp, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 28, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277004:
    // 0x277004: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277004u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_277008:
    // 0x277008: 0x0  nop
    ctx->pc = 0x277008u;
    // NOP
label_27700c:
    // 0x27700c: 0x0  nop
    ctx->pc = 0x27700cu;
    // NOP
label_277010:
    // 0x277010: 0xe631  tgeu        $zero, $zero, 920
    ctx->pc = 0x277010u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277014:
    // 0x277014: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x277014u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_277018:
    // 0x277018: 0x0  nop
    ctx->pc = 0x277018u;
    // NOP
label_27701c:
    // 0x27701c: 0x0  nop
    ctx->pc = 0x27701cu;
    // NOP
label_277020:
    // 0x277020: 0xe640  sll         $gp, $zero, 25
    ctx->pc = 0x277020u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_277024:
    // 0x277024: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277024u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277028:
    // 0x277028: 0x0  nop
    ctx->pc = 0x277028u;
    // NOP
label_27702c:
    // 0x27702c: 0x0  nop
    ctx->pc = 0x27702cu;
    // NOP
label_277030:
    // 0x277030: 0xe64d  break       0, 921
    ctx->pc = 0x277030u;
    runtime->handleBreak(rdram, ctx);
label_277034:
    // 0x277034: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277034u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277038:
    // 0x277038: 0x0  nop
    ctx->pc = 0x277038u;
    // NOP
label_27703c:
    // 0x27703c: 0x0  nop
    ctx->pc = 0x27703cu;
    // NOP
label_277040:
    // 0x277040: 0xe65c  .word       0x0000E65C                   # dmult       $zero, $zero # 0000E640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x277040 raw=0x0000E65C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277044:
    // 0x277044: 0x53f0  tge         $zero, $zero, 335
    ctx->pc = 0x277044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277048:
    // 0x277048: 0x0  nop
    ctx->pc = 0x277048u;
    // NOP
label_27704c:
    // 0x27704c: 0x0  nop
    ctx->pc = 0x27704cu;
    // NOP
label_277050:
    // 0x277050: 0xe667  .word       0x0000E667                   # not         $gp, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277050u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_277054:
    // 0x277054: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_277058:
    // 0x277058: 0x0  nop
    ctx->pc = 0x277058u;
    // NOP
label_27705c:
    // 0x27705c: 0x0  nop
    ctx->pc = 0x27705cu;
    // NOP
label_277060:
    // 0x277060: 0xe677  .word       0x0000E677                   # INVALID     $zero, $zero, -0x1989 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x277060 raw=0x0000E677"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277064:
    // 0x277064: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_277068:
    // 0x277068: 0x0  nop
    ctx->pc = 0x277068u;
    // NOP
label_27706c:
    // 0x27706c: 0x0  nop
    ctx->pc = 0x27706cu;
    // NOP
label_277070:
    // 0x277070: 0xe688  .word       0x0000E688                   # jr          $zero # 0000E680 <InstrIdType: CPU_SPECIAL>
label_277074:
    if (ctx->pc == 0x277074u) {
        ctx->pc = 0x277074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277070u;
        // 0x277074: 0x7bb0  tge         $zero, $zero, 494 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277078u;
        goto label_277078;
    }
    ctx->pc = 0x277070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x277074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277070u;
        // 0x277074: 0x7bb0  tge         $zero, $zero, 494 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277078u;
label_277078:
    // 0x277078: 0x0  nop
    ctx->pc = 0x277078u;
    // NOP
label_27707c:
    // 0x27707c: 0x0  nop
    ctx->pc = 0x27707cu;
    // NOP
label_277080:
    // 0x277080: 0xe698  .word       0x0000E698                   # mult        $gp, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_277084:
    // 0x277084: 0x88a0  .word       0x000088A0                   # add         $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_277088:
    // 0x277088: 0x0  nop
    ctx->pc = 0x277088u;
    // NOP
label_27708c:
    // 0x27708c: 0x0  nop
    ctx->pc = 0x27708cu;
    // NOP
label_277090:
    // 0x277090: 0xe6aa  .word       0x0000E6AA                   # slt         $gp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277090u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_277094:
    // 0x277094: 0x8eb0  tge         $zero, $zero, 570
    ctx->pc = 0x277094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277098:
    // 0x277098: 0x0  nop
    ctx->pc = 0x277098u;
    // NOP
label_27709c:
    // 0x27709c: 0x0  nop
    ctx->pc = 0x27709cu;
    // NOP
label_2770a0:
    // 0x2770a0: 0xe6bc  dsll32      $gp, $zero, 26
    ctx->pc = 0x2770a0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 26));
label_2770a4:
    // 0x2770a4: 0x9c70  tge         $zero, $zero, 625
    ctx->pc = 0x2770a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2770a8:
    // 0x2770a8: 0x0  nop
    ctx->pc = 0x2770a8u;
    // NOP
label_2770ac:
    // 0x2770ac: 0x0  nop
    ctx->pc = 0x2770acu;
    // NOP
label_2770b0:
    // 0x2770b0: 0xe6d0  .word       0x0000E6D0                   # mfhi        $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2770b0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2770b4:
    // 0x2770b4: 0x7d40  sll         $t7, $zero, 21
    ctx->pc = 0x2770b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2770b8:
    // 0x2770b8: 0x0  nop
    ctx->pc = 0x2770b8u;
    // NOP
label_2770bc:
    // 0x2770bc: 0x0  nop
    ctx->pc = 0x2770bcu;
    // NOP
label_2770c0:
    // 0x2770c0: 0xe6e0  .word       0x0000E6E0                   # add         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2770c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2770c4:
    // 0x2770c4: 0x4b70  tge         $zero, $zero, 301
    ctx->pc = 0x2770c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2770c8:
    // 0x2770c8: 0x0  nop
    ctx->pc = 0x2770c8u;
    // NOP
label_2770cc:
    // 0x2770cc: 0x0  nop
    ctx->pc = 0x2770ccu;
    // NOP
label_2770d0:
    // 0x2770d0: 0xe6ea  .word       0x0000E6EA                   # slt         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2770d0u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2770d4:
    // 0x2770d4: 0x8a90  .word       0x00008A90                   # mfhi        $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2770d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2770d8:
    // 0x2770d8: 0x0  nop
    ctx->pc = 0x2770d8u;
    // NOP
label_2770dc:
    // 0x2770dc: 0x0  nop
    ctx->pc = 0x2770dcu;
    // NOP
label_2770e0:
    // 0x2770e0: 0xe6fc  dsll32      $gp, $zero, 27
    ctx->pc = 0x2770e0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 27));
label_2770e4:
    // 0x2770e4: 0x8530  tge         $zero, $zero, 532
    ctx->pc = 0x2770e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2770e8:
    // 0x2770e8: 0x0  nop
    ctx->pc = 0x2770e8u;
    // NOP
label_2770ec:
    // 0x2770ec: 0x0  nop
    ctx->pc = 0x2770ecu;
    // NOP
label_2770f0:
    // 0x2770f0: 0xe70d  break       0, 924
    ctx->pc = 0x2770f0u;
    runtime->handleBreak(rdram, ctx);
label_2770f4:
    // 0x2770f4: 0x87f0  tge         $zero, $zero, 543
    ctx->pc = 0x2770f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2770f8:
    // 0x2770f8: 0x0  nop
    ctx->pc = 0x2770f8u;
    // NOP
label_2770fc:
    // 0x2770fc: 0x0  nop
    ctx->pc = 0x2770fcu;
    // NOP
label_277100:
    // 0x277100: 0xe71e  .word       0x0000E71E                   # ddiv        $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x277100 raw=0x0000E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277104:
    // 0x277104: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277104u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277108:
    // 0x277108: 0x0  nop
    ctx->pc = 0x277108u;
    // NOP
label_27710c:
    // 0x27710c: 0x0  nop
    ctx->pc = 0x27710cu;
    // NOP
label_277110:
    // 0x277110: 0xe72b  .word       0x0000E72B                   # sltu        $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277110u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277114:
    // 0x277114: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x277114u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_277118:
    // 0x277118: 0x0  nop
    ctx->pc = 0x277118u;
    // NOP
label_27711c:
    // 0x27711c: 0x0  nop
    ctx->pc = 0x27711cu;
    // NOP
label_277120:
    // 0x277120: 0xe739  .word       0x0000E739                   # INVALID     $zero, $zero, -0x18C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277120 raw=0x0000E739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277124:
    // 0x277124: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277124u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277128:
    // 0x277128: 0x0  nop
    ctx->pc = 0x277128u;
    // NOP
label_27712c:
    // 0x27712c: 0x0  nop
    ctx->pc = 0x27712cu;
    // NOP
label_277130:
    // 0x277130: 0xe746  .word       0x0000E746                   # srlv        $gp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277130u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277134:
    // 0x277134: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277134u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_277138:
    // 0x277138: 0x0  nop
    ctx->pc = 0x277138u;
    // NOP
label_27713c:
    // 0x27713c: 0x0  nop
    ctx->pc = 0x27713cu;
    // NOP
label_277140:
    // 0x277140: 0xe756  .word       0x0000E756                   # dsrlv       $gp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277140u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277144:
    // 0x277144: 0x9640  sll         $s2, $zero, 25
    ctx->pc = 0x277144u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_277148:
    // 0x277148: 0x0  nop
    ctx->pc = 0x277148u;
    // NOP
label_27714c:
    // 0x27714c: 0x0  nop
    ctx->pc = 0x27714cu;
    // NOP
label_277150:
    // 0x277150: 0xe769  .word       0x0000E769                   # mtsa        $zero # 0000E740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277150u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_277154:
    // 0x277154: 0xb870  tge         $zero, $zero, 737
    ctx->pc = 0x277154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277158:
    // 0x277158: 0x0  nop
    ctx->pc = 0x277158u;
    // NOP
label_27715c:
    // 0x27715c: 0x0  nop
    ctx->pc = 0x27715cu;
    // NOP
label_277160:
    // 0x277160: 0xe781  .word       0x0000E781                   # INVALID     $zero, $zero, -0x187F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x277160 raw=0x0000E781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277164:
    // 0x277164: 0x9710  .word       0x00009710                   # mfhi        $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277164u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_277168:
    // 0x277168: 0x0  nop
    ctx->pc = 0x277168u;
    // NOP
label_27716c:
    // 0x27716c: 0x0  nop
    ctx->pc = 0x27716cu;
    // NOP
label_277170:
    // 0x277170: 0xe794  .word       0x0000E794                   # dsllv       $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277170u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_277174:
    // 0x277174: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_277178:
    // 0x277178: 0x0  nop
    ctx->pc = 0x277178u;
    // NOP
label_27717c:
    // 0x27717c: 0x0  nop
    ctx->pc = 0x27717cu;
    // NOP
label_277180:
    // 0x277180: 0xe7a6  .word       0x0000E7A6                   # xor         $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277180u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_277184:
    // 0x277184: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_277188:
    // 0x277188: 0x0  nop
    ctx->pc = 0x277188u;
    // NOP
label_27718c:
    // 0x27718c: 0x0  nop
    ctx->pc = 0x27718cu;
    // NOP
label_277190:
    // 0x277190: 0xe7bb  dsra        $gp, $zero, 30
    ctx->pc = 0x277190u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 30);
label_277194:
    // 0x277194: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x277194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277198:
    // 0x277198: 0x0  nop
    ctx->pc = 0x277198u;
    // NOP
label_27719c:
    // 0x27719c: 0x0  nop
    ctx->pc = 0x27719cu;
    // NOP
label_2771a0:
    // 0x2771a0: 0xe7cb  .word       0x0000E7CB                   # movn        $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_2771a4:
    // 0x2771a4: 0xcb10  .word       0x0000CB10                   # mfhi        $t9 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771a4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2771a8:
    // 0x2771a8: 0x0  nop
    ctx->pc = 0x2771a8u;
    // NOP
label_2771ac:
    // 0x2771ac: 0x0  nop
    ctx->pc = 0x2771acu;
    // NOP
label_2771b0:
    // 0x2771b0: 0xe7e5  .word       0x0000E7E5                   # move        $gp, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771b0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2771b4:
    // 0x2771b4: 0x98f0  tge         $zero, $zero, 611
    ctx->pc = 0x2771b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2771b8:
    // 0x2771b8: 0x0  nop
    ctx->pc = 0x2771b8u;
    // NOP
label_2771bc:
    // 0x2771bc: 0x0  nop
    ctx->pc = 0x2771bcu;
    // NOP
label_2771c0:
    // 0x2771c0: 0xe7f9  .word       0x0000E7F9                   # INVALID     $zero, $zero, -0x1807 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2771C0 raw=0x0000E7F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2771c4:
    // 0x2771c4: 0x2280  sll         $a0, $zero, 10
    ctx->pc = 0x2771c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2771c8:
    // 0x2771c8: 0x0  nop
    ctx->pc = 0x2771c8u;
    // NOP
label_2771cc:
    // 0x2771cc: 0x0  nop
    ctx->pc = 0x2771ccu;
    // NOP
label_2771d0:
    // 0x2771d0: 0xe7fe  dsrl32      $gp, $zero, 31
    ctx->pc = 0x2771d0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 31));
label_2771d4:
    // 0x2771d4: 0x29a0  .word       0x000029A0                   # add         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2771d8:
    // 0x2771d8: 0x0  nop
    ctx->pc = 0x2771d8u;
    // NOP
label_2771dc:
    // 0x2771dc: 0x0  nop
    ctx->pc = 0x2771dcu;
    // NOP
label_2771e0:
    // 0x2771e0: 0xe804  sllv        $sp, $zero, $zero
    ctx->pc = 0x2771e0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2771e4:
    // 0x2771e4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2771e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2771e8:
    // 0x2771e8: 0x0  nop
    ctx->pc = 0x2771e8u;
    // NOP
label_2771ec:
    // 0x2771ec: 0x0  nop
    ctx->pc = 0x2771ecu;
    // NOP
label_2771f0:
    // 0x2771f0: 0xe812  mflo        $sp
    ctx->pc = 0x2771f0u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_2771f4:
    // 0x2771f4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2771f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2771f8:
    // 0x2771f8: 0x0  nop
    ctx->pc = 0x2771f8u;
    // NOP
label_2771fc:
    // 0x2771fc: 0x0  nop
    ctx->pc = 0x2771fcu;
    // NOP
label_277200:
    // 0x277200: 0xe823  negu        $sp, $zero
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277204:
    // 0x277204: 0x2c70  tge         $zero, $zero, 177
    ctx->pc = 0x277204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277208:
    // 0x277208: 0x0  nop
    ctx->pc = 0x277208u;
    // NOP
label_27720c:
    // 0x27720c: 0x0  nop
    ctx->pc = 0x27720cu;
    // NOP
label_277210:
    // 0x277210: 0xe829  .word       0x0000E829                   # mtsa        $zero # 0000E800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277210u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_277214:
    // 0x277214: 0x56b0  tge         $zero, $zero, 346
    ctx->pc = 0x277214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277218:
    // 0x277218: 0x0  nop
    ctx->pc = 0x277218u;
    // NOP
label_27721c:
    // 0x27721c: 0x0  nop
    ctx->pc = 0x27721cu;
    // NOP
label_277220:
    // 0x277220: 0xe834  teq         $zero, $zero, 928
    ctx->pc = 0x277220u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277224:
    // 0x277224: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x277224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277228:
    // 0x277228: 0x0  nop
    ctx->pc = 0x277228u;
    // NOP
label_27722c:
    // 0x27722c: 0x0  nop
    ctx->pc = 0x27722cu;
    // NOP
label_277230:
    // 0x277230: 0xe83c  dsll32      $sp, $zero, 0
    ctx->pc = 0x277230u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 0));
label_277234:
    // 0x277234: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_277238:
    // 0x277238: 0x0  nop
    ctx->pc = 0x277238u;
    // NOP
label_27723c:
    // 0x27723c: 0x0  nop
    ctx->pc = 0x27723cu;
    // NOP
label_277240:
    // 0x277240: 0xe84d  break       0, 929
    ctx->pc = 0x277240u;
    runtime->handleBreak(rdram, ctx);
label_277244:
    // 0x277244: 0x5660  .word       0x00005660                   # add         $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_277248:
    // 0x277248: 0x0  nop
    ctx->pc = 0x277248u;
    // NOP
label_27724c:
    // 0x27724c: 0x0  nop
    ctx->pc = 0x27724cu;
    // NOP
label_277250:
    // 0x277250: 0xe858  .word       0x0000E858                   # mult        $sp, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_277254:
    // 0x277254: 0x3550  .word       0x00003550                   # mfhi        $a2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277254u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277258:
    // 0x277258: 0x0  nop
    ctx->pc = 0x277258u;
    // NOP
label_27725c:
    // 0x27725c: 0x0  nop
    ctx->pc = 0x27725cu;
    // NOP
label_277260:
    // 0x277260: 0xe85f  .word       0x0000E85F                   # ddivu       $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x277260 raw=0x0000E85F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277264:
    // 0x277264: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_277268:
    // 0x277268: 0x0  nop
    ctx->pc = 0x277268u;
    // NOP
label_27726c:
    // 0x27726c: 0x0  nop
    ctx->pc = 0x27726cu;
    // NOP
label_277270:
    // 0x277270: 0xe86b  .word       0x0000E86B                   # sltu        $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277270u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277274:
    // 0x277274: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277274u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_277278:
    // 0x277278: 0x0  nop
    ctx->pc = 0x277278u;
    // NOP
label_27727c:
    // 0x27727c: 0x0  nop
    ctx->pc = 0x27727cu;
    // NOP
label_277280:
    // 0x277280: 0xe879  .word       0x0000E879                   # INVALID     $zero, $zero, -0x1787 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277280 raw=0x0000E879"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277284:
    // 0x277284: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277284u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_277288:
    // 0x277288: 0x0  nop
    ctx->pc = 0x277288u;
    // NOP
label_27728c:
    // 0x27728c: 0x0  nop
    ctx->pc = 0x27728cu;
    // NOP
label_277290:
    // 0x277290: 0xe883  sra         $sp, $zero, 2
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 2));
label_277294:
    // 0x277294: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x277294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_277298:
    // 0x277298: 0x0  nop
    ctx->pc = 0x277298u;
    // NOP
label_27729c:
    // 0x27729c: 0x0  nop
    ctx->pc = 0x27729cu;
    // NOP
label_2772a0:
    // 0x2772a0: 0xe889  .word       0x0000E889                   # jalr        $sp, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_2772a4:
    if (ctx->pc == 0x2772A4u) {
        ctx->pc = 0x2772A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772A0u;
        // 0x2772a4: 0x2cd0  .word       0x00002CD0                   # mfhi        $a1 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2772A8u;
        goto label_2772a8;
    }
    ctx->pc = 0x2772A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 29, 0x2772A8u);
        ctx->pc = 0x2772A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772A0u;
        // 0x2772a4: 0x2cd0  .word       0x00002CD0                   # mfhi        $a1 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2772A0u, 0x2772A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2772A8u;
label_2772a8:
    // 0x2772a8: 0x0  nop
    ctx->pc = 0x2772a8u;
    // NOP
label_2772ac:
    // 0x2772ac: 0x0  nop
    ctx->pc = 0x2772acu;
    // NOP
label_2772b0:
    // 0x2772b0: 0xe88f  .word       0x0000E88F                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2772b4:
    // 0x2772b4: 0x3420  .word       0x00003420                   # add         $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2772b8:
    // 0x2772b8: 0x0  nop
    ctx->pc = 0x2772b8u;
    // NOP
label_2772bc:
    // 0x2772bc: 0x0  nop
    ctx->pc = 0x2772bcu;
    // NOP
label_2772c0:
    // 0x2772c0: 0xe896  .word       0x0000E896                   # dsrlv       $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772c0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2772c4:
    // 0x2772c4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2772c8:
    // 0x2772c8: 0x0  nop
    ctx->pc = 0x2772c8u;
    // NOP
label_2772cc:
    // 0x2772cc: 0x0  nop
    ctx->pc = 0x2772ccu;
    // NOP
label_2772d0:
    // 0x2772d0: 0xe8a1  .word       0x0000E8A1                   # addu        $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2772d4:
    // 0x2772d4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2772d8:
    // 0x2772d8: 0x0  nop
    ctx->pc = 0x2772d8u;
    // NOP
label_2772dc:
    // 0x2772dc: 0x0  nop
    ctx->pc = 0x2772dcu;
    // NOP
label_2772e0:
    // 0x2772e0: 0xe8ad  .word       0x0000E8AD                   # daddu       $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2772e4:
    // 0x2772e4: 0x7110  .word       0x00007110                   # mfhi        $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2772e8:
    // 0x2772e8: 0x0  nop
    ctx->pc = 0x2772e8u;
    // NOP
label_2772ec:
    // 0x2772ec: 0x0  nop
    ctx->pc = 0x2772ecu;
    // NOP
label_2772f0:
    // 0x2772f0: 0xe8bc  dsll32      $sp, $zero, 2
    ctx->pc = 0x2772f0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 2));
label_2772f4:
    // 0x2772f4: 0x2a10  .word       0x00002A10                   # mfhi        $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2772f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2772f8:
    // 0x2772f8: 0x0  nop
    ctx->pc = 0x2772f8u;
    // NOP
label_2772fc:
    // 0x2772fc: 0x0  nop
    ctx->pc = 0x2772fcu;
    // NOP
label_277300:
    // 0x277300: 0xe8c2  srl         $sp, $zero, 3
    ctx->pc = 0x277300u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_277304:
    // 0x277304: 0x35a0  .word       0x000035A0                   # add         $a2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_277308:
    // 0x277308: 0x0  nop
    ctx->pc = 0x277308u;
    // NOP
label_27730c:
    // 0x27730c: 0x0  nop
    ctx->pc = 0x27730cu;
    // NOP
label_277310:
    // 0x277310: 0xe8c9  .word       0x0000E8C9                   # jalr        $sp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_277314:
    if (ctx->pc == 0x277314u) {
        ctx->pc = 0x277314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277310u;
        // 0x277314: 0x5d10  .word       0x00005D10                   # mfhi        $t3 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277318u;
        goto label_277318;
    }
    ctx->pc = 0x277310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 29, 0x277318u);
        ctx->pc = 0x277314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277310u;
        // 0x277314: 0x5d10  .word       0x00005D10                   # mfhi        $t3 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277310u, 0x277318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277318u;
label_277318:
    // 0x277318: 0x0  nop
    ctx->pc = 0x277318u;
    // NOP
label_27731c:
    // 0x27731c: 0x0  nop
    ctx->pc = 0x27731cu;
    // NOP
label_277320:
    // 0x277320: 0xe8d5  .word       0x0000E8D5                   # INVALID     $zero, $zero, -0x172B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x277320 raw=0x0000E8D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277324:
    // 0x277324: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277328:
    // 0x277328: 0x0  nop
    ctx->pc = 0x277328u;
    // NOP
label_27732c:
    // 0x27732c: 0x0  nop
    ctx->pc = 0x27732cu;
    // NOP
label_277330:
    // 0x277330: 0xe8e4  .word       0x0000E8E4                   # and         $sp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277330u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_277334:
    // 0x277334: 0x29e0  .word       0x000029E0                   # add         $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_277338:
    // 0x277338: 0x0  nop
    ctx->pc = 0x277338u;
    // NOP
label_27733c:
    // 0x27733c: 0x0  nop
    ctx->pc = 0x27733cu;
    // NOP
label_277340:
    // 0x277340: 0xe8ea  .word       0x0000E8EA                   # slt         $sp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277340u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_277344:
    // 0x277344: 0x43d0  .word       0x000043D0                   # mfhi        $t0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277344u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277348:
    // 0x277348: 0x0  nop
    ctx->pc = 0x277348u;
    // NOP
label_27734c:
    // 0x27734c: 0x0  nop
    ctx->pc = 0x27734cu;
    // NOP
label_277350:
    // 0x277350: 0xe8f3  tltu        $zero, $zero, 931
    ctx->pc = 0x277350u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277354:
    // 0x277354: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x277354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277358:
    // 0x277358: 0x0  nop
    ctx->pc = 0x277358u;
    // NOP
label_27735c:
    // 0x27735c: 0x0  nop
    ctx->pc = 0x27735cu;
    // NOP
label_277360:
    // 0x277360: 0xe8fb  dsra        $sp, $zero, 3
    ctx->pc = 0x277360u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 3);
label_277364:
    // 0x277364: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277368:
    // 0x277368: 0x0  nop
    ctx->pc = 0x277368u;
    // NOP
label_27736c:
    // 0x27736c: 0x0  nop
    ctx->pc = 0x27736cu;
    // NOP
label_277370:
    // 0x277370: 0xe90a  .word       0x0000E90A                   # movz        $sp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277370u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_277374:
    // 0x277374: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x277374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277378:
    // 0x277378: 0x0  nop
    ctx->pc = 0x277378u;
    // NOP
label_27737c:
    // 0x27737c: 0x0  nop
    ctx->pc = 0x27737cu;
    // NOP
label_277380:
    // 0x277380: 0xe916  .word       0x0000E916                   # dsrlv       $sp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277380u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277384:
    // 0x277384: 0x26c0  sll         $a0, $zero, 27
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_277388:
    // 0x277388: 0x0  nop
    ctx->pc = 0x277388u;
    // NOP
label_27738c:
    // 0x27738c: 0x0  nop
    ctx->pc = 0x27738cu;
    // NOP
    ctx->pc = 0x277390u;
    return;
}
