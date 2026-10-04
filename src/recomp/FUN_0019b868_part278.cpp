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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x222c78u: goto label_222c78;
        case 0x222c7cu: goto label_222c7c;
        case 0x222c80u: goto label_222c80;
        case 0x222c84u: goto label_222c84;
        case 0x222c88u: goto label_222c88;
        case 0x222c8cu: goto label_222c8c;
        case 0x222c90u: goto label_222c90;
        case 0x222c94u: goto label_222c94;
        case 0x222c98u: goto label_222c98;
        case 0x222c9cu: goto label_222c9c;
        case 0x222ca0u: goto label_222ca0;
        case 0x222ca4u: goto label_222ca4;
        case 0x222ca8u: goto label_222ca8;
        case 0x222cacu: goto label_222cac;
        case 0x222cb0u: goto label_222cb0;
        case 0x222cb4u: goto label_222cb4;
        case 0x222cb8u: goto label_222cb8;
        case 0x222cbcu: goto label_222cbc;
        case 0x222cc0u: goto label_222cc0;
        case 0x222cc4u: goto label_222cc4;
        case 0x222cc8u: goto label_222cc8;
        case 0x222cccu: goto label_222ccc;
        case 0x222cd0u: goto label_222cd0;
        case 0x222cd4u: goto label_222cd4;
        case 0x222cd8u: goto label_222cd8;
        case 0x222cdcu: goto label_222cdc;
        case 0x222ce0u: goto label_222ce0;
        case 0x222ce4u: goto label_222ce4;
        case 0x222ce8u: goto label_222ce8;
        case 0x222cecu: goto label_222cec;
        case 0x222cf0u: goto label_222cf0;
        case 0x222cf4u: goto label_222cf4;
        case 0x222cf8u: goto label_222cf8;
        case 0x222cfcu: goto label_222cfc;
        case 0x222d00u: goto label_222d00;
        case 0x222d04u: goto label_222d04;
        case 0x222d08u: goto label_222d08;
        case 0x222d0cu: goto label_222d0c;
        case 0x222d10u: goto label_222d10;
        case 0x222d14u: goto label_222d14;
        case 0x222d18u: goto label_222d18;
        case 0x222d1cu: goto label_222d1c;
        case 0x222d20u: goto label_222d20;
        case 0x222d24u: goto label_222d24;
        case 0x222d28u: goto label_222d28;
        case 0x222d2cu: goto label_222d2c;
        case 0x222d30u: goto label_222d30;
        case 0x222d34u: goto label_222d34;
        case 0x222d38u: goto label_222d38;
        case 0x222d3cu: goto label_222d3c;
        case 0x222d40u: goto label_222d40;
        case 0x222d44u: goto label_222d44;
        case 0x222d48u: goto label_222d48;
        case 0x222d4cu: goto label_222d4c;
        case 0x222d50u: goto label_222d50;
        case 0x222d54u: goto label_222d54;
        case 0x222d58u: goto label_222d58;
        case 0x222d5cu: goto label_222d5c;
        case 0x222d60u: goto label_222d60;
        case 0x222d64u: goto label_222d64;
        case 0x222d68u: goto label_222d68;
        case 0x222d6cu: goto label_222d6c;
        case 0x222d70u: goto label_222d70;
        case 0x222d74u: goto label_222d74;
        case 0x222d78u: goto label_222d78;
        case 0x222d7cu: goto label_222d7c;
        case 0x222d80u: goto label_222d80;
        case 0x222d84u: goto label_222d84;
        case 0x222d88u: goto label_222d88;
        case 0x222d8cu: goto label_222d8c;
        case 0x222d90u: goto label_222d90;
        case 0x222d94u: goto label_222d94;
        case 0x222d98u: goto label_222d98;
        case 0x222d9cu: goto label_222d9c;
        case 0x222da0u: goto label_222da0;
        case 0x222da4u: goto label_222da4;
        case 0x222da8u: goto label_222da8;
        case 0x222dacu: goto label_222dac;
        case 0x222db0u: goto label_222db0;
        case 0x222db4u: goto label_222db4;
        case 0x222db8u: goto label_222db8;
        case 0x222dbcu: goto label_222dbc;
        case 0x222dc0u: goto label_222dc0;
        case 0x222dc4u: goto label_222dc4;
        case 0x222dc8u: goto label_222dc8;
        case 0x222dccu: goto label_222dcc;
        case 0x222dd0u: goto label_222dd0;
        case 0x222dd4u: goto label_222dd4;
        case 0x222dd8u: goto label_222dd8;
        case 0x222ddcu: goto label_222ddc;
        case 0x222de0u: goto label_222de0;
        case 0x222de4u: goto label_222de4;
        case 0x222de8u: goto label_222de8;
        case 0x222decu: goto label_222dec;
        case 0x222df0u: goto label_222df0;
        case 0x222df4u: goto label_222df4;
        case 0x222df8u: goto label_222df8;
        case 0x222dfcu: goto label_222dfc;
        case 0x222e00u: goto label_222e00;
        case 0x222e04u: goto label_222e04;
        case 0x222e08u: goto label_222e08;
        case 0x222e0cu: goto label_222e0c;
        case 0x222e10u: goto label_222e10;
        case 0x222e14u: goto label_222e14;
        case 0x222e18u: goto label_222e18;
        case 0x222e1cu: goto label_222e1c;
        case 0x222e20u: goto label_222e20;
        case 0x222e24u: goto label_222e24;
        case 0x222e28u: goto label_222e28;
        case 0x222e2cu: goto label_222e2c;
        case 0x222e30u: goto label_222e30;
        case 0x222e34u: goto label_222e34;
        case 0x222e38u: goto label_222e38;
        case 0x222e3cu: goto label_222e3c;
        case 0x222e40u: goto label_222e40;
        case 0x222e44u: goto label_222e44;
        case 0x222e48u: goto label_222e48;
        case 0x222e4cu: goto label_222e4c;
        case 0x222e50u: goto label_222e50;
        case 0x222e54u: goto label_222e54;
        case 0x222e58u: goto label_222e58;
        case 0x222e5cu: goto label_222e5c;
        case 0x222e60u: goto label_222e60;
        case 0x222e64u: goto label_222e64;
        case 0x222e68u: goto label_222e68;
        case 0x222e6cu: goto label_222e6c;
        case 0x222e70u: goto label_222e70;
        case 0x222e74u: goto label_222e74;
        case 0x222e78u: goto label_222e78;
        case 0x222e7cu: goto label_222e7c;
        case 0x222e80u: goto label_222e80;
        case 0x222e84u: goto label_222e84;
        case 0x222e88u: goto label_222e88;
        case 0x222e8cu: goto label_222e8c;
        case 0x222e90u: goto label_222e90;
        case 0x222e94u: goto label_222e94;
        case 0x222e98u: goto label_222e98;
        case 0x222e9cu: goto label_222e9c;
        case 0x222ea0u: goto label_222ea0;
        case 0x222ea4u: goto label_222ea4;
        case 0x222ea8u: goto label_222ea8;
        case 0x222eacu: goto label_222eac;
        case 0x222eb0u: goto label_222eb0;
        case 0x222eb4u: goto label_222eb4;
        case 0x222eb8u: goto label_222eb8;
        case 0x222ebcu: goto label_222ebc;
        case 0x222ec0u: goto label_222ec0;
        case 0x222ec4u: goto label_222ec4;
        case 0x222ec8u: goto label_222ec8;
        case 0x222eccu: goto label_222ecc;
        case 0x222ed0u: goto label_222ed0;
        case 0x222ed4u: goto label_222ed4;
        case 0x222ed8u: goto label_222ed8;
        case 0x222edcu: goto label_222edc;
        case 0x222ee0u: goto label_222ee0;
        case 0x222ee4u: goto label_222ee4;
        case 0x222ee8u: goto label_222ee8;
        case 0x222eecu: goto label_222eec;
        case 0x222ef0u: goto label_222ef0;
        case 0x222ef4u: goto label_222ef4;
        case 0x222ef8u: goto label_222ef8;
        case 0x222efcu: goto label_222efc;
        case 0x222f00u: goto label_222f00;
        case 0x222f04u: goto label_222f04;
        case 0x222f08u: goto label_222f08;
        case 0x222f0cu: goto label_222f0c;
        case 0x222f10u: goto label_222f10;
        case 0x222f14u: goto label_222f14;
        case 0x222f18u: goto label_222f18;
        case 0x222f1cu: goto label_222f1c;
        case 0x222f20u: goto label_222f20;
        case 0x222f24u: goto label_222f24;
        case 0x222f28u: goto label_222f28;
        case 0x222f2cu: goto label_222f2c;
        case 0x222f30u: goto label_222f30;
        case 0x222f34u: goto label_222f34;
        case 0x222f38u: goto label_222f38;
        case 0x222f3cu: goto label_222f3c;
        case 0x222f40u: goto label_222f40;
        case 0x222f44u: goto label_222f44;
        case 0x222f48u: goto label_222f48;
        case 0x222f4cu: goto label_222f4c;
        case 0x222f50u: goto label_222f50;
        case 0x222f54u: goto label_222f54;
        case 0x222f58u: goto label_222f58;
        case 0x222f5cu: goto label_222f5c;
        case 0x222f60u: goto label_222f60;
        case 0x222f64u: goto label_222f64;
        case 0x222f68u: goto label_222f68;
        case 0x222f6cu: goto label_222f6c;
        case 0x222f70u: goto label_222f70;
        case 0x222f74u: goto label_222f74;
        case 0x222f78u: goto label_222f78;
        case 0x222f7cu: goto label_222f7c;
        case 0x222f80u: goto label_222f80;
        case 0x222f84u: goto label_222f84;
        case 0x222f88u: goto label_222f88;
        case 0x222f8cu: goto label_222f8c;
        case 0x222f90u: goto label_222f90;
        case 0x222f94u: goto label_222f94;
        case 0x222f98u: goto label_222f98;
        case 0x222f9cu: goto label_222f9c;
        case 0x222fa0u: goto label_222fa0;
        case 0x222fa4u: goto label_222fa4;
        case 0x222fa8u: goto label_222fa8;
        case 0x222facu: goto label_222fac;
        case 0x222fb0u: goto label_222fb0;
        case 0x222fb4u: goto label_222fb4;
        case 0x222fb8u: goto label_222fb8;
        case 0x222fbcu: goto label_222fbc;
        case 0x222fc0u: goto label_222fc0;
        case 0x222fc4u: goto label_222fc4;
        case 0x222fc8u: goto label_222fc8;
        case 0x222fccu: goto label_222fcc;
        case 0x222fd0u: goto label_222fd0;
        case 0x222fd4u: goto label_222fd4;
        case 0x222fd8u: goto label_222fd8;
        case 0x222fdcu: goto label_222fdc;
        case 0x222fe0u: goto label_222fe0;
        case 0x222fe4u: goto label_222fe4;
        case 0x222fe8u: goto label_222fe8;
        case 0x222fecu: goto label_222fec;
        case 0x222ff0u: goto label_222ff0;
        case 0x222ff4u: goto label_222ff4;
        case 0x222ff8u: goto label_222ff8;
        case 0x222ffcu: goto label_222ffc;
        case 0x223000u: goto label_223000;
        case 0x223004u: goto label_223004;
        case 0x223008u: goto label_223008;
        case 0x22300cu: goto label_22300c;
        case 0x223010u: goto label_223010;
        case 0x223014u: goto label_223014;
        case 0x223018u: goto label_223018;
        case 0x22301cu: goto label_22301c;
        case 0x223020u: goto label_223020;
        case 0x223024u: goto label_223024;
        case 0x223028u: goto label_223028;
        case 0x22302cu: goto label_22302c;
        case 0x223030u: goto label_223030;
        case 0x223034u: goto label_223034;
        case 0x223038u: goto label_223038;
        case 0x22303cu: goto label_22303c;
        case 0x223040u: goto label_223040;
        case 0x223044u: goto label_223044;
        case 0x223048u: goto label_223048;
        case 0x22304cu: goto label_22304c;
        case 0x223050u: goto label_223050;
        case 0x223054u: goto label_223054;
        case 0x223058u: goto label_223058;
        case 0x22305cu: goto label_22305c;
        case 0x223060u: goto label_223060;
        case 0x223064u: goto label_223064;
        case 0x223068u: goto label_223068;
        case 0x22306cu: goto label_22306c;
        case 0x223070u: goto label_223070;
        case 0x223074u: goto label_223074;
        case 0x223078u: goto label_223078;
        case 0x22307cu: goto label_22307c;
        case 0x223080u: goto label_223080;
        case 0x223084u: goto label_223084;
        case 0x223088u: goto label_223088;
        case 0x22308cu: goto label_22308c;
        case 0x223090u: goto label_223090;
        case 0x223094u: goto label_223094;
        case 0x223098u: goto label_223098;
        case 0x22309cu: goto label_22309c;
        case 0x2230a0u: goto label_2230a0;
        case 0x2230a4u: goto label_2230a4;
        case 0x2230a8u: goto label_2230a8;
        case 0x2230acu: goto label_2230ac;
        case 0x2230b0u: goto label_2230b0;
        case 0x2230b4u: goto label_2230b4;
        case 0x2230b8u: goto label_2230b8;
        case 0x2230bcu: goto label_2230bc;
        case 0x2230c0u: goto label_2230c0;
        case 0x2230c4u: goto label_2230c4;
        case 0x2230c8u: goto label_2230c8;
        case 0x2230ccu: goto label_2230cc;
        case 0x2230d0u: goto label_2230d0;
        case 0x2230d4u: goto label_2230d4;
        case 0x2230d8u: goto label_2230d8;
        case 0x2230dcu: goto label_2230dc;
        case 0x2230e0u: goto label_2230e0;
        case 0x2230e4u: goto label_2230e4;
        case 0x2230e8u: goto label_2230e8;
        case 0x2230ecu: goto label_2230ec;
        case 0x2230f0u: goto label_2230f0;
        case 0x2230f4u: goto label_2230f4;
        case 0x2230f8u: goto label_2230f8;
        case 0x2230fcu: goto label_2230fc;
        case 0x223100u: goto label_223100;
        case 0x223104u: goto label_223104;
        case 0x223108u: goto label_223108;
        case 0x22310cu: goto label_22310c;
        case 0x223110u: goto label_223110;
        case 0x223114u: goto label_223114;
        case 0x223118u: goto label_223118;
        case 0x22311cu: goto label_22311c;
        case 0x223120u: goto label_223120;
        case 0x223124u: goto label_223124;
        case 0x223128u: goto label_223128;
        case 0x22312cu: goto label_22312c;
        case 0x223130u: goto label_223130;
        case 0x223134u: goto label_223134;
        case 0x223138u: goto label_223138;
        case 0x22313cu: goto label_22313c;
        case 0x223140u: goto label_223140;
        case 0x223144u: goto label_223144;
        case 0x223148u: goto label_223148;
        case 0x22314cu: goto label_22314c;
        case 0x223150u: goto label_223150;
        case 0x223154u: goto label_223154;
        case 0x223158u: goto label_223158;
        case 0x22315cu: goto label_22315c;
        case 0x223160u: goto label_223160;
        case 0x223164u: goto label_223164;
        case 0x223168u: goto label_223168;
        case 0x22316cu: goto label_22316c;
        case 0x223170u: goto label_223170;
        case 0x223174u: goto label_223174;
        case 0x223178u: goto label_223178;
        case 0x22317cu: goto label_22317c;
        case 0x223180u: goto label_223180;
        case 0x223184u: goto label_223184;
        case 0x223188u: goto label_223188;
        case 0x22318cu: goto label_22318c;
        case 0x223190u: goto label_223190;
        case 0x223194u: goto label_223194;
        case 0x223198u: goto label_223198;
        case 0x22319cu: goto label_22319c;
        case 0x2231a0u: goto label_2231a0;
        case 0x2231a4u: goto label_2231a4;
        case 0x2231a8u: goto label_2231a8;
        case 0x2231acu: goto label_2231ac;
        case 0x2231b0u: goto label_2231b0;
        case 0x2231b4u: goto label_2231b4;
        case 0x2231b8u: goto label_2231b8;
        case 0x2231bcu: goto label_2231bc;
        case 0x2231c0u: goto label_2231c0;
        case 0x2231c4u: goto label_2231c4;
        case 0x2231c8u: goto label_2231c8;
        case 0x2231ccu: goto label_2231cc;
        case 0x2231d0u: goto label_2231d0;
        case 0x2231d4u: goto label_2231d4;
        case 0x2231d8u: goto label_2231d8;
        case 0x2231dcu: goto label_2231dc;
        case 0x2231e0u: goto label_2231e0;
        case 0x2231e4u: goto label_2231e4;
        case 0x2231e8u: goto label_2231e8;
        case 0x2231ecu: goto label_2231ec;
        case 0x2231f0u: goto label_2231f0;
        case 0x2231f4u: goto label_2231f4;
        case 0x2231f8u: goto label_2231f8;
        case 0x2231fcu: goto label_2231fc;
        case 0x223200u: goto label_223200;
        case 0x223204u: goto label_223204;
        case 0x223208u: goto label_223208;
        case 0x22320cu: goto label_22320c;
        case 0x223210u: goto label_223210;
        case 0x223214u: goto label_223214;
        case 0x223218u: goto label_223218;
        case 0x22321cu: goto label_22321c;
        case 0x223220u: goto label_223220;
        case 0x223224u: goto label_223224;
        case 0x223228u: goto label_223228;
        case 0x22322cu: goto label_22322c;
        case 0x223230u: goto label_223230;
        case 0x223234u: goto label_223234;
        case 0x223238u: goto label_223238;
        case 0x22323cu: goto label_22323c;
        case 0x223240u: goto label_223240;
        case 0x223244u: goto label_223244;
        case 0x223248u: goto label_223248;
        case 0x22324cu: goto label_22324c;
        case 0x223250u: goto label_223250;
        case 0x223254u: goto label_223254;
        case 0x223258u: goto label_223258;
        case 0x22325cu: goto label_22325c;
        case 0x223260u: goto label_223260;
        case 0x223264u: goto label_223264;
        case 0x223268u: goto label_223268;
        case 0x22326cu: goto label_22326c;
        case 0x223270u: goto label_223270;
        case 0x223274u: goto label_223274;
        case 0x223278u: goto label_223278;
        case 0x22327cu: goto label_22327c;
        case 0x223280u: goto label_223280;
        case 0x223284u: goto label_223284;
        case 0x223288u: goto label_223288;
        case 0x22328cu: goto label_22328c;
        case 0x223290u: goto label_223290;
        case 0x223294u: goto label_223294;
        case 0x223298u: goto label_223298;
        case 0x22329cu: goto label_22329c;
        case 0x2232a0u: goto label_2232a0;
        case 0x2232a4u: goto label_2232a4;
        case 0x2232a8u: goto label_2232a8;
        case 0x2232acu: goto label_2232ac;
        case 0x2232b0u: goto label_2232b0;
        case 0x2232b4u: goto label_2232b4;
        case 0x2232b8u: goto label_2232b8;
        case 0x2232bcu: goto label_2232bc;
        case 0x2232c0u: goto label_2232c0;
        case 0x2232c4u: goto label_2232c4;
        case 0x2232c8u: goto label_2232c8;
        case 0x2232ccu: goto label_2232cc;
        case 0x2232d0u: goto label_2232d0;
        case 0x2232d4u: goto label_2232d4;
        case 0x2232d8u: goto label_2232d8;
        case 0x2232dcu: goto label_2232dc;
        case 0x2232e0u: goto label_2232e0;
        case 0x2232e4u: goto label_2232e4;
        case 0x2232e8u: goto label_2232e8;
        case 0x2232ecu: goto label_2232ec;
        case 0x2232f0u: goto label_2232f0;
        case 0x2232f4u: goto label_2232f4;
        case 0x2232f8u: goto label_2232f8;
        case 0x2232fcu: goto label_2232fc;
        case 0x223300u: goto label_223300;
        case 0x223304u: goto label_223304;
        case 0x223308u: goto label_223308;
        case 0x22330cu: goto label_22330c;
        case 0x223310u: goto label_223310;
        case 0x223314u: goto label_223314;
        case 0x223318u: goto label_223318;
        case 0x22331cu: goto label_22331c;
        case 0x223320u: goto label_223320;
        case 0x223324u: goto label_223324;
        case 0x223328u: goto label_223328;
        case 0x22332cu: goto label_22332c;
        case 0x223330u: goto label_223330;
        case 0x223334u: goto label_223334;
        case 0x223338u: goto label_223338;
        case 0x22333cu: goto label_22333c;
        case 0x223340u: goto label_223340;
        case 0x223344u: goto label_223344;
        case 0x223348u: goto label_223348;
        case 0x22334cu: goto label_22334c;
        case 0x223350u: goto label_223350;
        case 0x223354u: goto label_223354;
        case 0x223358u: goto label_223358;
        case 0x22335cu: goto label_22335c;
        case 0x223360u: goto label_223360;
        case 0x223364u: goto label_223364;
        case 0x223368u: goto label_223368;
        case 0x22336cu: goto label_22336c;
        case 0x223370u: goto label_223370;
        case 0x223374u: goto label_223374;
        case 0x223378u: goto label_223378;
        case 0x22337cu: goto label_22337c;
        case 0x223380u: goto label_223380;
        case 0x223384u: goto label_223384;
        case 0x223388u: goto label_223388;
        case 0x22338cu: goto label_22338c;
        case 0x223390u: goto label_223390;
        case 0x223394u: goto label_223394;
        case 0x223398u: goto label_223398;
        case 0x22339cu: goto label_22339c;
        case 0x2233a0u: goto label_2233a0;
        case 0x2233a4u: goto label_2233a4;
        case 0x2233a8u: goto label_2233a8;
        case 0x2233acu: goto label_2233ac;
        case 0x2233b0u: goto label_2233b0;
        case 0x2233b4u: goto label_2233b4;
        case 0x2233b8u: goto label_2233b8;
        case 0x2233bcu: goto label_2233bc;
        case 0x2233c0u: goto label_2233c0;
        case 0x2233c4u: goto label_2233c4;
        case 0x2233c8u: goto label_2233c8;
        case 0x2233ccu: goto label_2233cc;
        case 0x2233d0u: goto label_2233d0;
        case 0x2233d4u: goto label_2233d4;
        case 0x2233d8u: goto label_2233d8;
        case 0x2233dcu: goto label_2233dc;
        case 0x2233e0u: goto label_2233e0;
        case 0x2233e4u: goto label_2233e4;
        case 0x2233e8u: goto label_2233e8;
        case 0x2233ecu: goto label_2233ec;
        case 0x2233f0u: goto label_2233f0;
        case 0x2233f4u: goto label_2233f4;
        case 0x2233f8u: goto label_2233f8;
        case 0x2233fcu: goto label_2233fc;
        case 0x223400u: goto label_223400;
        case 0x223404u: goto label_223404;
        case 0x223408u: goto label_223408;
        case 0x22340cu: goto label_22340c;
        case 0x223410u: goto label_223410;
        case 0x223414u: goto label_223414;
        case 0x223418u: goto label_223418;
        case 0x22341cu: goto label_22341c;
        case 0x223420u: goto label_223420;
        case 0x223424u: goto label_223424;
        case 0x223428u: goto label_223428;
        case 0x22342cu: goto label_22342c;
        case 0x223430u: goto label_223430;
        case 0x223434u: goto label_223434;
        case 0x223438u: goto label_223438;
        case 0x22343cu: goto label_22343c;
        case 0x223440u: goto label_223440;
        case 0x223444u: goto label_223444;
        default: return;
    }

label_222c78:
    // 0x222c78: 0x29c70029  slti        $a3, $t6, 0x29
    ctx->pc = 0x222c78u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)41) ? 1 : 0);
label_222c7c:
    // 0x222c7c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_222c80:
    if (ctx->pc == 0x222C80u) {
        ctx->pc = 0x222C84u;
        goto label_222c84;
    }
    ctx->pc = 0x222C7Cu;
    {
        const bool branch_taken_0x222c7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x222c7c) {
            ctx->pc = 0x222C90u;
            goto label_222c90;
        }
    }
    ctx->pc = 0x222C84u;
label_222c84:
    // 0x222c84: 0x91a70012  lbu         $a3, 0x12($t5)
    ctx->pc = 0x222c84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 18)));
label_222c88:
    // 0x222c88: 0x14eb001c  bne         $a3, $t3, . + 4 + (0x1C << 2)
label_222c8c:
    if (ctx->pc == 0x222C8Cu) {
        ctx->pc = 0x222C90u;
        goto label_222c90;
    }
    ctx->pc = 0x222C88u;
    {
        const bool branch_taken_0x222c88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x222c88) {
            ctx->pc = 0x222CFCu;
            goto label_222cfc;
        }
    }
    ctx->pc = 0x222C90u;
label_222c90:
    // 0x222c90: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x222c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_222c94:
    // 0x222c94: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_222c98:
    if (ctx->pc == 0x222C98u) {
        ctx->pc = 0x222C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C94u;
        // 0x222c98: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222C9Cu;
        goto label_222c9c;
    }
    ctx->pc = 0x222C94u;
    {
        const bool branch_taken_0x222c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C94u;
        // 0x222c98: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c94) {
            ctx->pc = 0x222CC0u;
            goto label_222cc0;
        }
    }
    ctx->pc = 0x222C9Cu;
label_222c9c:
    // 0x222c9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x222c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222ca0:
    // 0x222ca0: 0x1483821  addu        $a3, $t2, $t0
    ctx->pc = 0x222ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_222ca4:
    // 0x222ca4: 0x90e70002  lbu         $a3, 0x2($a3)
    ctx->pc = 0x222ca4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_222ca8:
    // 0x222ca8: 0x10ee0005  beq         $a3, $t6, . + 4 + (0x5 << 2)
label_222cac:
    if (ctx->pc == 0x222CACu) {
        ctx->pc = 0x222CB0u;
        goto label_222cb0;
    }
    ctx->pc = 0x222CA8u;
    {
        const bool branch_taken_0x222ca8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x222ca8) {
            ctx->pc = 0x222CC0u;
            goto label_222cc0;
        }
    }
    ctx->pc = 0x222CB0u;
label_222cb0:
    // 0x222cb0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_222cb4:
    // 0x222cb4: 0x1a5382a  slt         $a3, $t5, $a1
    ctx->pc = 0x222cb4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_222cb8:
    // 0x222cb8: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
label_222cbc:
    if (ctx->pc == 0x222CBCu) {
        ctx->pc = 0x222CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CB8u;
        // 0x222cbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222CC0u;
        goto label_222cc0;
    }
    ctx->pc = 0x222CB8u;
    {
        const bool branch_taken_0x222cb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x222CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CB8u;
        // 0x222cbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cb8) {
            ctx->pc = 0x222CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222ca0;
        }
    }
    ctx->pc = 0x222CC0u;
label_222cc0:
    // 0x222cc0: 0x15a5000e  bne         $t5, $a1, . + 4 + (0xE << 2)
label_222cc4:
    if (ctx->pc == 0x222CC4u) {
        ctx->pc = 0x222CC8u;
        goto label_222cc8;
    }
    ctx->pc = 0x222CC0u;
    {
        const bool branch_taken_0x222cc0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 5));
        if (branch_taken_0x222cc0) {
            ctx->pc = 0x222CFCu;
            goto label_222cfc;
        }
    }
    ctx->pc = 0x222CC8u;
label_222cc8:
    // 0x222cc8: 0x1436821  addu        $t5, $t2, $v1
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_222ccc:
    // 0x222ccc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_222cd0:
    // 0x222cd0: 0xa1a90000  sb          $t1, 0x0($t5)
    ctx->pc = 0x222cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 9));
label_222cd4:
    // 0x222cd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_222cd8:
    // 0x222cd8: 0xa1a40001  sb          $a0, 0x1($t5)
    ctx->pc = 0x222cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 4));
label_222cdc:
    // 0x222cdc: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x222cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_222ce0:
    // 0x222ce0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x222ce0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_222ce4:
    // 0x222ce4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x222ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_222ce8:
    // 0x222ce8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x222ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_222cec:
    // 0x222cec: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x222cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_222cf0:
    // 0x222cf0: 0x90e70002  lbu         $a3, 0x2($a3)
    ctx->pc = 0x222cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_222cf4:
    // 0x222cf4: 0xa1a70002  sb          $a3, 0x2($t5)
    ctx->pc = 0x222cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 7));
label_222cf8:
    // 0x222cf8: 0xa1a00003  sb          $zero, 0x3($t5)
    ctx->pc = 0x222cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 0));
label_222cfc:
    // 0x222cfc: 0x0  nop
    ctx->pc = 0x222cfcu;
    // NOP
label_222d00:
    // 0x222d00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_222d04:
    // 0x222d04: 0x288700ff  slti        $a3, $a0, 0xFF
    ctx->pc = 0x222d04u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
label_222d08:
    // 0x222d08: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
label_222d0c:
    if (ctx->pc == 0x222D0Cu) {
        ctx->pc = 0x222D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D08u;
        // 0x222d0c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222D10u;
        goto label_222d10;
    }
    ctx->pc = 0x222D08u;
    {
        const bool branch_taken_0x222d08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D08u;
        // 0x222d0c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d08) {
            ctx->pc = 0x222C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x222c50; return; }
        }
    }
    ctx->pc = 0x222D10u;
label_222d10:
    // 0x222d10: 0x3e00008  jr          $ra
label_222d14:
    if (ctx->pc == 0x222D14u) {
        ctx->pc = 0x222D18u;
        goto label_222d18;
    }
    ctx->pc = 0x222D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222D18u;
label_222d18:
    // 0x222d18: 0x0  nop
    ctx->pc = 0x222d18u;
    // NOP
label_222d1c:
    // 0x222d1c: 0x0  nop
    ctx->pc = 0x222d1cu;
    // NOP
label_222d20:
    // 0x222d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222d24:
    // 0x222d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_222d28:
    // 0x222d28: 0xc0569a4  jal         func_15A690
label_222d2c:
    if (ctx->pc == 0x222D2Cu) {
        ctx->pc = 0x222D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D28u;
        // 0x222d2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222D30u;
        goto label_222d30;
    }
    ctx->pc = 0x222D28u;
    SET_GPR_U32(ctx, 31, 0x222D30u);
    ctx->pc = 0x222D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D28u;
    // 0x222d2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A690u, 0x222D28u, 0x222D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0xc088cbc  jal         func_2232F0
label_222d34:
    if (ctx->pc == 0x222D34u) {
        ctx->pc = 0x222D38u;
        goto label_222d38;
    }
    ctx->pc = 0x222D30u;
    SET_GPR_U32(ctx, 31, 0x222D38u);
    ctx->pc = 0x2232F0u;
    goto label_2232f0;
    ctx->pc = 0x222D38u;
label_222d38:
    // 0x222d38: 0xc08f0cc  jal         func_23C330
label_222d3c:
    if (ctx->pc == 0x222D3Cu) {
        ctx->pc = 0x222D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D38u;
        // 0x222d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222D40u;
        goto label_222d40;
    }
    ctx->pc = 0x222D38u;
    SET_GPR_U32(ctx, 31, 0x222D40u);
    ctx->pc = 0x222D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D38u;
    // 0x222d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222D40u;
label_222d40:
    // 0x222d40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_222d44:
    // 0x222d44: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x222d44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_222d48:
    // 0x222d48: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x222d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_222d4c:
    // 0x222d4c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x222d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_222d50:
    // 0x222d50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222d50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_222d54:
    // 0x222d54: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x222d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_222d58:
    // 0x222d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222d5c:
    // 0x222d5c: 0x0  nop
    ctx->pc = 0x222d5cu;
    // NOP
label_222d60:
    // 0x222d60: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x222d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_222d64:
    // 0x222d64: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x222d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_222d68:
    // 0x222d68: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x222d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_222d6c:
    // 0x222d6c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x222d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_222d70:
    // 0x222d70: 0x2442e4f0  addiu       $v0, $v0, -0x1B10
    ctx->pc = 0x222d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
label_222d74:
    // 0x222d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222d78:
    // 0x222d78: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x222d78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222d7c:
    // 0x222d7c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x222d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_222d80:
    // 0x222d80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x222d80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_222d84:
    // 0x222d84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_222d88:
    // 0x222d88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x222d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_222d8c:
    // 0x222d8c: 0x0  nop
    ctx->pc = 0x222d8cu;
    // NOP
label_222d90:
    // 0x222d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222d94:
    // 0x222d94: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x222d94u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_222d98:
    // 0x222d98: 0xc056904  jal         func_15A410
label_222d9c:
    if (ctx->pc == 0x222D9Cu) {
        ctx->pc = 0x222D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D98u;
        // 0x222d9c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DA0u;
        goto label_222da0;
    }
    ctx->pc = 0x222D98u;
    SET_GPR_U32(ctx, 31, 0x222DA0u);
    ctx->pc = 0x222D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D98u;
    // 0x222d9c: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A410u, 0x222D98u, 0x222DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DA0u;
label_222da0:
    // 0x222da0: 0xc08fefc  jal         func_23FBF0
label_222da4:
    if (ctx->pc == 0x222DA4u) {
        ctx->pc = 0x222DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA0u;
        // 0x222da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DA8u;
        goto label_222da8;
    }
    ctx->pc = 0x222DA0u;
    SET_GPR_U32(ctx, 31, 0x222DA8u);
    ctx->pc = 0x222DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DA0u;
    // 0x222da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FBF0u;
    { ctx->pc = 0x23fbf0; return; }
    ctx->pc = 0x222DA8u;
label_222da8:
    // 0x222da8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_222dac:
    if (ctx->pc == 0x222DACu) {
        ctx->pc = 0x222DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA8u;
        // 0x222dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DB0u;
        goto label_222db0;
    }
    ctx->pc = 0x222DA8u;
    {
        const bool branch_taken_0x222da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA8u;
        // 0x222dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222da8) {
            ctx->pc = 0x222DE8u;
            goto label_222de8;
        }
    }
    ctx->pc = 0x222DB0u;
label_222db0:
    // 0x222db0: 0xc08f0cc  jal         func_23C330
label_222db4:
    if (ctx->pc == 0x222DB4u) {
        ctx->pc = 0x222DB8u;
        goto label_222db8;
    }
    ctx->pc = 0x222DB0u;
    SET_GPR_U32(ctx, 31, 0x222DB8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222DB8u;
label_222db8:
    // 0x222db8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_222dbc:
    if (ctx->pc == 0x222DBCu) {
        ctx->pc = 0x222DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DB8u;
        // 0x222dbc: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DC0u;
        goto label_222dc0;
    }
    ctx->pc = 0x222DB8u;
    {
        const bool branch_taken_0x222db8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DB8u;
        // 0x222dbc: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222db8) {
            ctx->pc = 0x222DCCu;
            goto label_222dcc;
        }
    }
    ctx->pc = 0x222DC0u;
label_222dc0:
    // 0x222dc0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_222dc4:
    if (ctx->pc == 0x222DC4u) {
        ctx->pc = 0x222DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DC0u;
        // 0x222dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DC8u;
        goto label_222dc8;
    }
    ctx->pc = 0x222DC0u;
    {
        const bool branch_taken_0x222dc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DC0u;
        // 0x222dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dc0) {
            ctx->pc = 0x222DD0u;
            goto label_222dd0;
        }
    }
    ctx->pc = 0x222DC8u;
label_222dc8:
    // 0x222dc8: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x222dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_222dcc:
    // 0x222dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222dd0:
    // 0x222dd0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_222dd4:
    // 0x222dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222dd8:
    // 0x222dd8: 0xc056690  jal         func_159A40
label_222ddc:
    if (ctx->pc == 0x222DDCu) {
        ctx->pc = 0x222DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DD8u;
        // 0x222ddc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DE0u;
        goto label_222de0;
    }
    ctx->pc = 0x222DD8u;
    SET_GPR_U32(ctx, 31, 0x222DE0u);
    ctx->pc = 0x222DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DD8u;
    // 0x222ddc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x222DD8u, 0x222DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DE0u;
label_222de0:
    // 0x222de0: 0x10000007  b           . + 4 + (0x7 << 2)
label_222de4:
    if (ctx->pc == 0x222DE4u) {
        ctx->pc = 0x222DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DE0u;
        // 0x222de4: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DE8u;
        goto label_222de8;
    }
    ctx->pc = 0x222DE0u;
    {
        const bool branch_taken_0x222de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DE0u;
        // 0x222de4: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222de0) {
            ctx->pc = 0x222E00u;
            goto label_222e00;
        }
    }
    ctx->pc = 0x222DE8u;
label_222de8:
    // 0x222de8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_222dec:
    // 0x222dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222df0:
    // 0x222df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222df4:
    // 0x222df4: 0xc056690  jal         func_159A40
label_222df8:
    if (ctx->pc == 0x222DF8u) {
        ctx->pc = 0x222DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DF4u;
        // 0x222df8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222DFCu;
        goto label_222dfc;
    }
    ctx->pc = 0x222DF4u;
    SET_GPR_U32(ctx, 31, 0x222DFCu);
    ctx->pc = 0x222DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DF4u;
    // 0x222df8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x222DF4u, 0x222DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DFCu;
label_222dfc:
    // 0x222dfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x222dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_222e00:
    // 0x222e00: 0xc0568c0  jal         func_15A300
label_222e04:
    if (ctx->pc == 0x222E04u) {
        ctx->pc = 0x222E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E00u;
        // 0x222e04: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222E08u;
        goto label_222e08;
    }
    ctx->pc = 0x222E00u;
    SET_GPR_U32(ctx, 31, 0x222E08u);
    ctx->pc = 0x222E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E00u;
    // 0x222e04: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x222E00u, 0x222E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E08u;
label_222e08:
    // 0x222e08: 0xc05665c  jal         func_159970
label_222e0c:
    if (ctx->pc == 0x222E0Cu) {
        ctx->pc = 0x222E10u;
        goto label_222e10;
    }
    ctx->pc = 0x222E08u;
    SET_GPR_U32(ctx, 31, 0x222E10u);
    ctx->pc = 0x159970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159970u, 0x222E08u, 0x222E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E10u;
label_222e10:
    // 0x222e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222e14:
    // 0x222e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222e18:
    // 0x222e18: 0x3e00008  jr          $ra
label_222e1c:
    if (ctx->pc == 0x222E1Cu) {
        ctx->pc = 0x222E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E18u;
        // 0x222e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222E20u;
        goto label_222e20;
    }
    ctx->pc = 0x222E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E18u;
        // 0x222e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E20u;
label_222e20:
    // 0x222e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_222e24:
    // 0x222e24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x222e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_222e28:
    // 0x222e28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x222e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_222e2c:
    // 0x222e2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x222e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_222e30:
    // 0x222e30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_222e34:
    // 0x222e34: 0xc0569a4  jal         func_15A690
label_222e38:
    if (ctx->pc == 0x222E38u) {
        ctx->pc = 0x222E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E34u;
        // 0x222e38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222E3Cu;
        goto label_222e3c;
    }
    ctx->pc = 0x222E34u;
    SET_GPR_U32(ctx, 31, 0x222E3Cu);
    ctx->pc = 0x222E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E34u;
    // 0x222e38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A690u, 0x222E34u, 0x222E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E3Cu;
label_222e3c:
    // 0x222e3c: 0xc088cbc  jal         func_2232F0
label_222e40:
    if (ctx->pc == 0x222E40u) {
        ctx->pc = 0x222E44u;
        goto label_222e44;
    }
    ctx->pc = 0x222E3Cu;
    SET_GPR_U32(ctx, 31, 0x222E44u);
    ctx->pc = 0x2232F0u;
    goto label_2232f0;
    ctx->pc = 0x222E44u;
label_222e44:
    // 0x222e44: 0xc08f0cc  jal         func_23C330
label_222e48:
    if (ctx->pc == 0x222E48u) {
        ctx->pc = 0x222E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E44u;
        // 0x222e48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222E4Cu;
        goto label_222e4c;
    }
    ctx->pc = 0x222E44u;
    SET_GPR_U32(ctx, 31, 0x222E4Cu);
    ctx->pc = 0x222E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E44u;
    // 0x222e48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222E4Cu;
label_222e4c:
    // 0x222e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x222e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_222e50:
    // 0x222e50: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x222e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_222e54:
    // 0x222e54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x222e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_222e58:
    // 0x222e58: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x222e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_222e5c:
    // 0x222e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222e60:
    // 0x222e60: 0x0  nop
    ctx->pc = 0x222e60u;
    // NOP
label_222e64:
    // 0x222e64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x222e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_222e68:
    // 0x222e68: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x222e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_222e6c:
    // 0x222e6c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x222e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_222e70:
    // 0x222e70: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x222e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_222e74:
    // 0x222e74: 0x2442e4f0  addiu       $v0, $v0, -0x1B10
    ctx->pc = 0x222e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
label_222e78:
    // 0x222e78: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x222e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_222e7c:
    // 0x222e7c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x222e7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_222e80:
    // 0x222e80: 0x0  nop
    ctx->pc = 0x222e80u;
    // NOP
label_222e84:
    // 0x222e84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x222e84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_222e88:
    // 0x222e88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222e88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_222e8c:
    // 0x222e8c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x222e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_222e90:
    // 0x222e90: 0x0  nop
    ctx->pc = 0x222e90u;
    // NOP
label_222e94:
    // 0x222e94: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x222e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_222e98:
    // 0x222e98: 0xc08f0cc  jal         func_23C330
label_222e9c:
    if (ctx->pc == 0x222E9Cu) {
        ctx->pc = 0x222E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E98u;
        // 0x222e9c: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222EA0u;
        goto label_222ea0;
    }
    ctx->pc = 0x222E98u;
    SET_GPR_U32(ctx, 31, 0x222EA0u);
    ctx->pc = 0x222E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222E98u;
    // 0x222e9c: 0x90500000  lbu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222EA0u;
label_222ea0:
    // 0x222ea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222ea4:
    // 0x222ea4: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x222ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_222ea8:
    // 0x222ea8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x222ea8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_222eac:
    // 0x222eac: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x222eacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_222eb0:
    // 0x222eb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x222eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_222eb4:
    // 0x222eb4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x222eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_222eb8:
    // 0x222eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222ebc:
    // 0x222ebc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_222ec0:
    // 0x222ec0: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x222ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_222ec4:
    // 0x222ec4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x222ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_222ec8:
    // 0x222ec8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x222ec8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_222ecc:
    // 0x222ecc: 0x0  nop
    ctx->pc = 0x222eccu;
    // NOP
label_222ed0:
    // 0x222ed0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x222ed0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_222ed4:
    // 0x222ed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x222ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_222ed8:
    // 0x222ed8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x222ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_222edc:
    // 0x222edc: 0x0  nop
    ctx->pc = 0x222edcu;
    // NOP
label_222ee0:
    // 0x222ee0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x222ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_222ee4:
    // 0x222ee4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x222ee4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_222ee8:
    // 0x222ee8: 0x0  nop
    ctx->pc = 0x222ee8u;
    // NOP
label_222eec:
    // 0x222eec: 0x0  nop
    ctx->pc = 0x222eecu;
    // NOP
label_222ef0:
    // 0x222ef0: 0x1010  mfhi        $v0
    ctx->pc = 0x222ef0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_222ef4:
    // 0x222ef4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x222ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_222ef8:
    // 0x222ef8: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x222ef8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_222efc:
    // 0x222efc: 0xc056904  jal         func_15A410
label_222f00:
    if (ctx->pc == 0x222F00u) {
        ctx->pc = 0x222F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222EFCu;
        // 0x222f00: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F04u;
        goto label_222f04;
    }
    ctx->pc = 0x222EFCu;
    SET_GPR_U32(ctx, 31, 0x222F04u);
    ctx->pc = 0x222F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222EFCu;
    // 0x222f00: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A410u, 0x222EFCu, 0x222F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F04u;
label_222f04:
    // 0x222f04: 0x8fb2005c  lw          $s2, 0x5C($sp)
    ctx->pc = 0x222f04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_222f08:
    // 0x222f08: 0xc08fefc  jal         func_23FBF0
label_222f0c:
    if (ctx->pc == 0x222F0Cu) {
        ctx->pc = 0x222F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F08u;
        // 0x222f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F10u;
        goto label_222f10;
    }
    ctx->pc = 0x222F08u;
    SET_GPR_U32(ctx, 31, 0x222F10u);
    ctx->pc = 0x222F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F08u;
    // 0x222f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FBF0u;
    { ctx->pc = 0x23fbf0; return; }
    ctx->pc = 0x222F10u;
label_222f10:
    // 0x222f10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_222f14:
    if (ctx->pc == 0x222F14u) {
        ctx->pc = 0x222F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F10u;
        // 0x222f14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F18u;
        goto label_222f18;
    }
    ctx->pc = 0x222F10u;
    {
        const bool branch_taken_0x222f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F10u;
        // 0x222f14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f10) {
            ctx->pc = 0x222F40u;
            goto label_222f40;
        }
    }
    ctx->pc = 0x222F18u;
label_222f18:
    // 0x222f18: 0xc08f0cc  jal         func_23C330
label_222f1c:
    if (ctx->pc == 0x222F1Cu) {
        ctx->pc = 0x222F20u;
        goto label_222f20;
    }
    ctx->pc = 0x222F18u;
    SET_GPR_U32(ctx, 31, 0x222F20u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222F20u;
label_222f20:
    // 0x222f20: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_222f24:
    if (ctx->pc == 0x222F24u) {
        ctx->pc = 0x222F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F20u;
        // 0x222f24: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F28u;
        goto label_222f28;
    }
    ctx->pc = 0x222F20u;
    {
        const bool branch_taken_0x222f20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F20u;
        // 0x222f24: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f20) {
            ctx->pc = 0x222F40u;
            goto label_222f40;
        }
    }
    ctx->pc = 0x222F28u;
label_222f28:
    // 0x222f28: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_222f2c:
    if (ctx->pc == 0x222F2Cu) {
        ctx->pc = 0x222F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F28u;
        // 0x222f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F30u;
        goto label_222f30;
    }
    ctx->pc = 0x222F28u;
    {
        const bool branch_taken_0x222f28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F28u;
        // 0x222f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f28) {
            ctx->pc = 0x222F44u;
            goto label_222f44;
        }
    }
    ctx->pc = 0x222F30u;
label_222f30:
    // 0x222f30: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x222f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_222f34:
    // 0x222f34: 0x10000002  b           . + 4 + (0x2 << 2)
label_222f38:
    if (ctx->pc == 0x222F38u) {
        ctx->pc = 0x222F3Cu;
        goto label_222f3c;
    }
    ctx->pc = 0x222F34u;
    {
        const bool branch_taken_0x222f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222f34) {
            ctx->pc = 0x222F40u;
            goto label_222f40;
        }
    }
    ctx->pc = 0x222F3Cu;
label_222f3c:
    // 0x222f3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x222f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222f40:
    // 0x222f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222f44:
    // 0x222f44: 0xc08fefc  jal         func_23FBF0
label_222f48:
    if (ctx->pc == 0x222F48u) {
        ctx->pc = 0x222F4Cu;
        goto label_222f4c;
    }
    ctx->pc = 0x222F44u;
    SET_GPR_U32(ctx, 31, 0x222F4Cu);
    ctx->pc = 0x23FBF0u;
    { ctx->pc = 0x23fbf0; return; }
    ctx->pc = 0x222F4Cu;
label_222f4c:
    // 0x222f4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_222f50:
    if (ctx->pc == 0x222F50u) {
        ctx->pc = 0x222F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F4Cu;
        // 0x222f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F54u;
        goto label_222f54;
    }
    ctx->pc = 0x222F4Cu;
    {
        const bool branch_taken_0x222f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F4Cu;
        // 0x222f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f4c) {
            ctx->pc = 0x222F7Cu;
            goto label_222f7c;
        }
    }
    ctx->pc = 0x222F54u;
label_222f54:
    // 0x222f54: 0xc08f0cc  jal         func_23C330
label_222f58:
    if (ctx->pc == 0x222F58u) {
        ctx->pc = 0x222F5Cu;
        goto label_222f5c;
    }
    ctx->pc = 0x222F54u;
    SET_GPR_U32(ctx, 31, 0x222F5Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x222F5Cu;
label_222f5c:
    // 0x222f5c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_222f60:
    if (ctx->pc == 0x222F60u) {
        ctx->pc = 0x222F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F5Cu;
        // 0x222f60: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F64u;
        goto label_222f64;
    }
    ctx->pc = 0x222F5Cu;
    {
        const bool branch_taken_0x222f5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x222F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F5Cu;
        // 0x222f60: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f5c) {
            ctx->pc = 0x222F7Cu;
            goto label_222f7c;
        }
    }
    ctx->pc = 0x222F64u;
label_222f64:
    // 0x222f64: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_222f68:
    if (ctx->pc == 0x222F68u) {
        ctx->pc = 0x222F6Cu;
        goto label_222f6c;
    }
    ctx->pc = 0x222F64u;
    {
        const bool branch_taken_0x222f64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x222f64) {
            ctx->pc = 0x222F7Cu;
            goto label_222f7c;
        }
    }
    ctx->pc = 0x222F6Cu;
label_222f6c:
    // 0x222f6c: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_222f70:
    // 0x222f70: 0x10000003  b           . + 4 + (0x3 << 2)
label_222f74:
    if (ctx->pc == 0x222F74u) {
        ctx->pc = 0x222F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F70u;
        // 0x222f74: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F78u;
        goto label_222f78;
    }
    ctx->pc = 0x222F70u;
    {
        const bool branch_taken_0x222f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F70u;
        // 0x222f74: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222f70) {
            ctx->pc = 0x222F80u;
            goto label_222f80;
        }
    }
    ctx->pc = 0x222F78u;
label_222f78:
    // 0x222f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222f7c:
    // 0x222f7c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_222f80:
    // 0x222f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222f84:
    // 0x222f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222f88:
    // 0x222f88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x222f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_222f8c:
    // 0x222f8c: 0x524026  xor         $t0, $v0, $s2
    ctx->pc = 0x222f8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_222f90:
    // 0x222f90: 0xc056690  jal         func_159A40
label_222f94:
    if (ctx->pc == 0x222F94u) {
        ctx->pc = 0x222F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F90u;
        // 0x222f94: 0x8402b  sltu        $t0, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x222F98u;
        goto label_222f98;
    }
    ctx->pc = 0x222F90u;
    SET_GPR_U32(ctx, 31, 0x222F98u);
    ctx->pc = 0x222F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F90u;
    // 0x222f94: 0x8402b  sltu        $t0, $zero, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x222F90u, 0x222F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F98u;
label_222f98:
    // 0x222f98: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x222f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_222f9c:
    // 0x222f9c: 0xc0568c0  jal         func_15A300
label_222fa0:
    if (ctx->pc == 0x222FA0u) {
        ctx->pc = 0x222FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222F9Cu;
        // 0x222fa0: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FA4u;
        goto label_222fa4;
    }
    ctx->pc = 0x222F9Cu;
    SET_GPR_U32(ctx, 31, 0x222FA4u);
    ctx->pc = 0x222FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222F9Cu;
    // 0x222fa0: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x222F9Cu, 0x222FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FA4u;
label_222fa4:
    // 0x222fa4: 0xc05665c  jal         func_159970
label_222fa8:
    if (ctx->pc == 0x222FA8u) {
        ctx->pc = 0x222FACu;
        goto label_222fac;
    }
    ctx->pc = 0x222FA4u;
    SET_GPR_U32(ctx, 31, 0x222FACu);
    ctx->pc = 0x159970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159970u, 0x222FA4u, 0x222FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FACu;
label_222fac:
    // 0x222fac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x222facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_222fb0:
    // 0x222fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x222fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_222fb4:
    // 0x222fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_222fb8:
    // 0x222fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222fbc:
    // 0x222fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222fc0:
    // 0x222fc0: 0x3e00008  jr          $ra
label_222fc4:
    if (ctx->pc == 0x222FC4u) {
        ctx->pc = 0x222FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC0u;
        // 0x222fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222FC8u;
        goto label_222fc8;
    }
    ctx->pc = 0x222FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222FC0u;
        // 0x222fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222FC8u;
label_222fc8:
    // 0x222fc8: 0x0  nop
    ctx->pc = 0x222fc8u;
    // NOP
label_222fcc:
    // 0x222fcc: 0x0  nop
    ctx->pc = 0x222fccu;
    // NOP
label_222fd0:
    // 0x222fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_222fd4:
    // 0x222fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x222fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_222fd8:
    // 0x222fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x222fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_222fdc:
    // 0x222fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x222fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_222fe0:
    // 0x222fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_222fe4:
    // 0x222fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222fe8:
    // 0x222fe8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x222fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222fec:
    // 0x222fec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x222fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222ff0:
    // 0x222ff0: 0x0  nop
    ctx->pc = 0x222ff0u;
    // NOP
label_222ff4:
    // 0x222ff4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_222ff8:
    // 0x222ff8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x222ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_222ffc:
    // 0x222ffc: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x222ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_223000:
    // 0x223000: 0x9243367c  lbu         $v1, 0x367C($s2)
    ctx->pc = 0x223000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13948)));
label_223004:
    // 0x223004: 0x106000ad  beqz        $v1, . + 4 + (0xAD << 2)
label_223008:
    if (ctx->pc == 0x223008u) {
        ctx->pc = 0x22300Cu;
        goto label_22300c;
    }
    ctx->pc = 0x223004u;
    {
        const bool branch_taken_0x223004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223004) {
            ctx->pc = 0x2232BCu;
            goto label_2232bc;
        }
    }
    ctx->pc = 0x22300Cu;
label_22300c:
    // 0x22300c: 0xc08f0cc  jal         func_23C330
label_223010:
    if (ctx->pc == 0x223010u) {
        ctx->pc = 0x223014u;
        goto label_223014;
    }
    ctx->pc = 0x22300Cu;
    SET_GPR_U32(ctx, 31, 0x223014u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223014u;
label_223014:
    // 0x223014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223018:
    // 0x223018: 0x0  nop
    ctx->pc = 0x223018u;
    // NOP
label_22301c:
    // 0x22301c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22301cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223020:
    // 0x223020: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x223020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_223024:
    // 0x223024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223028:
    // 0x223028: 0x0  nop
    ctx->pc = 0x223028u;
    // NOP
label_22302c:
    // 0x22302c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22302cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_223030:
    // 0x223030: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_223034:
    // 0x223034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223038:
    // 0x223038: 0x0  nop
    ctx->pc = 0x223038u;
    // NOP
label_22303c:
    // 0x22303c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22303cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_223040:
    // 0x223040: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_223044:
    // 0x223044: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x223044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223048:
    // 0x223048: 0xc08f0cc  jal         func_23C330
label_22304c:
    if (ctx->pc == 0x22304Cu) {
        ctx->pc = 0x22304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223048u;
        // 0x22304c: 0xa2423683  sb          $v0, 0x3683($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13955), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223050u;
        goto label_223050;
    }
    ctx->pc = 0x223048u;
    SET_GPR_U32(ctx, 31, 0x223050u);
    ctx->pc = 0x22304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223048u;
    // 0x22304c: 0xa2423683  sb          $v0, 0x3683($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 13955), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223050u;
label_223050:
    // 0x223050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223054:
    // 0x223054: 0x0  nop
    ctx->pc = 0x223054u;
    // NOP
label_223058:
    // 0x223058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22305c:
    // 0x22305c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x22305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_223060:
    // 0x223060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223064:
    // 0x223064: 0x0  nop
    ctx->pc = 0x223064u;
    // NOP
label_223068:
    // 0x223068: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x223068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22306c:
    // 0x22306c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_223070:
    // 0x223070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223074:
    // 0x223074: 0x0  nop
    ctx->pc = 0x223074u;
    // NOP
label_223078:
    // 0x223078: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x223078u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22307c:
    // 0x22307c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22307cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_223080:
    // 0x223080: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x223080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223084:
    // 0x223084: 0xc08f0cc  jal         func_23C330
label_223088:
    if (ctx->pc == 0x223088u) {
        ctx->pc = 0x223088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223084u;
        // 0x223088: 0xa2423684  sb          $v0, 0x3684($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13956), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22308Cu;
        goto label_22308c;
    }
    ctx->pc = 0x223084u;
    SET_GPR_U32(ctx, 31, 0x22308Cu);
    ctx->pc = 0x223088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223084u;
    // 0x223088: 0xa2423684  sb          $v0, 0x3684($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 13956), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22308Cu;
label_22308c:
    // 0x22308c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223090:
    // 0x223090: 0x0  nop
    ctx->pc = 0x223090u;
    // NOP
label_223094:
    // 0x223094: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_223098:
    // 0x223098: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x223098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_22309c:
    // 0x22309c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22309cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2230a0:
    // 0x2230a0: 0x0  nop
    ctx->pc = 0x2230a0u;
    // NOP
label_2230a4:
    // 0x2230a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2230a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2230a8:
    // 0x2230a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2230ac:
    // 0x2230ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2230acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2230b0:
    // 0x2230b0: 0x0  nop
    ctx->pc = 0x2230b0u;
    // NOP
label_2230b4:
    // 0x2230b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2230b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2230b8:
    // 0x2230b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2230b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2230bc:
    // 0x2230bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2230bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2230c0:
    // 0x2230c0: 0xc08f0cc  jal         func_23C330
label_2230c4:
    if (ctx->pc == 0x2230C4u) {
        ctx->pc = 0x2230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230C0u;
        // 0x2230c4: 0xa2423685  sb          $v0, 0x3685($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13957), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2230C8u;
        goto label_2230c8;
    }
    ctx->pc = 0x2230C0u;
    SET_GPR_U32(ctx, 31, 0x2230C8u);
    ctx->pc = 0x2230C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230C0u;
    // 0x2230c4: 0xa2423685  sb          $v0, 0x3685($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 13957), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x2230C8u;
label_2230c8:
    // 0x2230c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2230c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2230cc:
    // 0x2230cc: 0x26533686  addiu       $s3, $s2, 0x3686
    ctx->pc = 0x2230ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 13958));
label_2230d0:
    // 0x2230d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2230d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2230d4:
    // 0x2230d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2230d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2230d8:
    // 0x2230d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2230d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2230dc:
    // 0x2230dc: 0x0  nop
    ctx->pc = 0x2230dcu;
    // NOP
label_2230e0:
    // 0x2230e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2230e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2230e4:
    // 0x2230e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2230e8:
    // 0x2230e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2230e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2230ec:
    // 0x2230ec: 0x0  nop
    ctx->pc = 0x2230ecu;
    // NOP
label_2230f0:
    // 0x2230f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2230f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2230f4:
    // 0x2230f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2230f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2230f8:
    // 0x2230f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2230f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2230fc:
    // 0x2230fc: 0xc08f0cc  jal         func_23C330
label_223100:
    if (ctx->pc == 0x223100u) {
        ctx->pc = 0x223100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230FCu;
        // 0x223100: 0xa2423686  sb          $v0, 0x3686($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13958), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223104u;
        goto label_223104;
    }
    ctx->pc = 0x2230FCu;
    SET_GPR_U32(ctx, 31, 0x223104u);
    ctx->pc = 0x223100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230FCu;
    // 0x223100: 0xa2423686  sb          $v0, 0x3686($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 13958), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223104u;
label_223104:
    // 0x223104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223108:
    // 0x223108: 0x0  nop
    ctx->pc = 0x223108u;
    // NOP
label_22310c:
    // 0x22310c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22310cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_223110:
    // 0x223110: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x223110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_223114:
    // 0x223114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223118:
    // 0x223118: 0x0  nop
    ctx->pc = 0x223118u;
    // NOP
label_22311c:
    // 0x22311c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22311cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223120:
    // 0x223120: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_223124:
    // 0x223124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223128:
    // 0x223128: 0x0  nop
    ctx->pc = 0x223128u;
    // NOP
label_22312c:
    // 0x22312c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22312cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_223130:
    // 0x223130: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_223134:
    // 0x223134: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x223134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_223138:
    // 0x223138: 0xc08f0cc  jal         func_23C330
label_22313c:
    if (ctx->pc == 0x22313Cu) {
        ctx->pc = 0x22313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223138u;
        // 0x22313c: 0xa2423687  sb          $v0, 0x3687($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13959), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223140u;
        goto label_223140;
    }
    ctx->pc = 0x223138u;
    SET_GPR_U32(ctx, 31, 0x223140u);
    ctx->pc = 0x22313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223138u;
    // 0x22313c: 0xa2423687  sb          $v0, 0x3687($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 13959), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223140u;
label_223140:
    // 0x223140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_223144:
    // 0x223144: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x223144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_223148:
    // 0x223148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22314c:
    // 0x22314c: 0x0  nop
    ctx->pc = 0x22314cu;
    // NOP
label_223150:
    // 0x223150: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_223154:
    // 0x223154: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x223154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_223158:
    // 0x223158: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x223158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22315c:
    // 0x22315c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22315cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223160:
    // 0x223160: 0x0  nop
    ctx->pc = 0x223160u;
    // NOP
label_223164:
    // 0x223164: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x223164u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_223168:
    // 0x223168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22316c:
    // 0x22316c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22316cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_223170:
    // 0x223170: 0x0  nop
    ctx->pc = 0x223170u;
    // NOP
label_223174:
    // 0x223174: 0xa2433688  sb          $v1, 0x3688($s2)
    ctx->pc = 0x223174u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13960), (uint8_t)GPR_U32(ctx, 3));
label_223178:
    // 0x223178: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x223178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_22317c:
    // 0x22317c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x22317cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_223180:
    // 0x223180: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_223184:
    if (ctx->pc == 0x223184u) {
        ctx->pc = 0x223188u;
        goto label_223188;
    }
    ctx->pc = 0x223180u;
    {
        const bool branch_taken_0x223180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223180) {
            ctx->pc = 0x223190u;
            goto label_223190;
        }
    }
    ctx->pc = 0x223188u;
label_223188:
    // 0x223188: 0x10000011  b           . + 4 + (0x11 << 2)
label_22318c:
    if (ctx->pc == 0x22318Cu) {
        ctx->pc = 0x22318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223188u;
        // 0x22318c: 0xa2403689  sb          $zero, 0x3689($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13961), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223190u;
        goto label_223190;
    }
    ctx->pc = 0x223188u;
    {
        const bool branch_taken_0x223188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223188u;
        // 0x22318c: 0xa2403689  sb          $zero, 0x3689($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13961), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223188) {
            ctx->pc = 0x2231D0u;
            goto label_2231d0;
        }
    }
    ctx->pc = 0x223190u;
label_223190:
    // 0x223190: 0xc08f0cc  jal         func_23C330
label_223194:
    if (ctx->pc == 0x223194u) {
        ctx->pc = 0x223198u;
        goto label_223198;
    }
    ctx->pc = 0x223190u;
    SET_GPR_U32(ctx, 31, 0x223198u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223198u;
label_223198:
    // 0x223198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22319c:
    // 0x22319c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x22319cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2231a0:
    // 0x2231a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2231a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2231a4:
    // 0x2231a4: 0x0  nop
    ctx->pc = 0x2231a4u;
    // NOP
label_2231a8:
    // 0x2231a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2231a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2231ac:
    // 0x2231ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2231acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2231b0:
    // 0x2231b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2231b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2231b4:
    // 0x2231b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2231b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2231b8:
    // 0x2231b8: 0x0  nop
    ctx->pc = 0x2231b8u;
    // NOP
label_2231bc:
    // 0x2231bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2231bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2231c0:
    // 0x2231c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2231c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2231c4:
    // 0x2231c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2231c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2231c8:
    // 0x2231c8: 0x0  nop
    ctx->pc = 0x2231c8u;
    // NOP
label_2231cc:
    // 0x2231cc: 0xa2433689  sb          $v1, 0x3689($s2)
    ctx->pc = 0x2231ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13961), (uint8_t)GPR_U32(ctx, 3));
label_2231d0:
    // 0x2231d0: 0x926c0000  lbu         $t4, 0x0($s3)
    ctx->pc = 0x2231d0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2231d4:
    // 0x2231d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2231d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2231d8:
    // 0x2231d8: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_2231dc:
    // 0x2231dc: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x2231dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_2231e0:
    // 0x2231e0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2231e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2231e4:
    // 0x2231e4: 0x25ef2570  addiu       $t7, $t7, 0x2570
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9584));
label_2231e8:
    // 0x2231e8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2231e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2231ec:
    // 0x2231ec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2231f0:
    // 0x2231f0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2231f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2231f4:
    // 0x2231f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2231f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2231f8:
    // 0x2231f8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2231fc:
    // 0x2231fc: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x2231fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_223200:
    // 0x223200: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x223200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_223204:
    // 0x223204: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x223204u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_223208:
    // 0x223208: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x223208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22320c:
    // 0x22320c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_223210:
    // 0x223210: 0xa24c368a  sb          $t4, 0x368A($s2)
    ctx->pc = 0x223210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13962), (uint8_t)GPR_U32(ctx, 12));
label_223214:
    // 0x223214: 0x8e533674  lw          $s3, 0x3674($s2)
    ctx->pc = 0x223214u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13940)));
label_223218:
    // 0x223218: 0x8e4e366c  lw          $t6, 0x366C($s2)
    ctx->pc = 0x223218u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13932)));
label_22321c:
    // 0x22321c: 0x924d368a  lbu         $t5, 0x368A($s2)
    ctx->pc = 0x22321cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13962)));
label_223220:
    // 0x223220: 0x136200  sll         $t4, $s3, 8
    ctx->pc = 0x223220u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_223224:
    // 0x223224: 0x1939823  subu        $s3, $t4, $s3
    ctx->pc = 0x223224u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
label_223228:
    // 0x223228: 0xe60c0  sll         $t4, $t6, 3
    ctx->pc = 0x223228u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_22322c:
    // 0x22322c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x22322cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_223230:
    // 0x223230: 0x1370c0  sll         $t6, $s3, 3
    ctx->pc = 0x223230u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_223234:
    // 0x223234: 0x26e9821  addu        $s3, $s3, $t6
    ctx->pc = 0x223234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
label_223238:
    // 0x223238: 0xc70c0  sll         $t6, $t4, 3
    ctx->pc = 0x223238u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_22323c:
    // 0x22323c: 0x1360c0  sll         $t4, $s3, 3
    ctx->pc = 0x22323cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_223240:
    // 0x223240: 0x1ec6021  addu        $t4, $t7, $t4
    ctx->pc = 0x223240u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_223244:
    // 0x223244: 0x258c0000  addiu       $t4, $t4, 0x0
    ctx->pc = 0x223244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 0));
label_223248:
    // 0x223248: 0x18e7021  addu        $t6, $t4, $t6
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_22324c:
    // 0x22324c: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x22324cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_223250:
    // 0x223250: 0xa18d0010  sb          $t5, 0x10($t4)
    ctx->pc = 0x223250u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 16), (uint8_t)GPR_U32(ctx, 13));
label_223254:
    // 0x223254: 0xa1cd002a  sb          $t5, 0x2A($t6)
    ctx->pc = 0x223254u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 42), (uint8_t)GPR_U32(ctx, 13));
label_223258:
    // 0x223258: 0x824c368a  lb          $t4, 0x368A($s2)
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 13962)));
label_22325c:
    // 0x22325c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x22325cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_223260:
    // 0x223260: 0xa24c3696  sb          $t4, 0x3696($s2)
    ctx->pc = 0x223260u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13974), (uint8_t)GPR_U32(ctx, 12));
label_223264:
    // 0x223264: 0x924c3696  lbu         $t4, 0x3696($s2)
    ctx->pc = 0x223264u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13974)));
label_223268:
    // 0x223268: 0xa24c3697  sb          $t4, 0x3697($s2)
    ctx->pc = 0x223268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13975), (uint8_t)GPR_U32(ctx, 12));
label_22326c:
    // 0x22326c: 0x924c3696  lbu         $t4, 0x3696($s2)
    ctx->pc = 0x22326cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13974)));
label_223270:
    // 0x223270: 0xc580a  movz        $t3, $zero, $t4
    ctx->pc = 0x223270u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_223274:
    // 0x223274: 0xa24b3698  sb          $t3, 0x3698($s2)
    ctx->pc = 0x223274u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13976), (uint8_t)GPR_U32(ctx, 11));
label_223278:
    // 0x223278: 0xa240369a  sb          $zero, 0x369A($s2)
    ctx->pc = 0x223278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13978), (uint8_t)GPR_U32(ctx, 0));
label_22327c:
    // 0x22327c: 0xa24a369b  sb          $t2, 0x369B($s2)
    ctx->pc = 0x22327cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13979), (uint8_t)GPR_U32(ctx, 10));
label_223280:
    // 0x223280: 0xa249369c  sb          $t1, 0x369C($s2)
    ctx->pc = 0x223280u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13980), (uint8_t)GPR_U32(ctx, 9));
label_223284:
    // 0x223284: 0xa248369d  sb          $t0, 0x369D($s2)
    ctx->pc = 0x223284u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13981), (uint8_t)GPR_U32(ctx, 8));
label_223288:
    // 0x223288: 0xa247369e  sb          $a3, 0x369E($s2)
    ctx->pc = 0x223288u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13982), (uint8_t)GPR_U32(ctx, 7));
label_22328c:
    // 0x22328c: 0xa246369f  sb          $a2, 0x369F($s2)
    ctx->pc = 0x22328cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13983), (uint8_t)GPR_U32(ctx, 6));
label_223290:
    // 0x223290: 0xa24536a0  sb          $a1, 0x36A0($s2)
    ctx->pc = 0x223290u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13984), (uint8_t)GPR_U32(ctx, 5));
label_223294:
    // 0x223294: 0xa24436a1  sb          $a0, 0x36A1($s2)
    ctx->pc = 0x223294u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13985), (uint8_t)GPR_U32(ctx, 4));
label_223298:
    // 0x223298: 0xa240368b  sb          $zero, 0x368B($s2)
    ctx->pc = 0x223298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13963), (uint8_t)GPR_U32(ctx, 0));
label_22329c:
    // 0x22329c: 0xa2403691  sb          $zero, 0x3691($s2)
    ctx->pc = 0x22329cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13969), (uint8_t)GPR_U32(ctx, 0));
label_2232a0:
    // 0x2232a0: 0xa2503692  sb          $s0, 0x3692($s2)
    ctx->pc = 0x2232a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13970), (uint8_t)GPR_U32(ctx, 16));
label_2232a4:
    // 0x2232a4: 0x82453689  lb          $a1, 0x3689($s2)
    ctx->pc = 0x2232a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 13961)));
label_2232a8:
    // 0x2232a8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2232a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2232ac:
    // 0x2232ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2232acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2232b0:
    // 0x2232b0: 0xa2443694  sb          $a0, 0x3694($s2)
    ctx->pc = 0x2232b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13972), (uint8_t)GPR_U32(ctx, 4));
label_2232b4:
    // 0x2232b4: 0xa2433695  sb          $v1, 0x3695($s2)
    ctx->pc = 0x2232b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13973), (uint8_t)GPR_U32(ctx, 3));
label_2232b8:
    // 0x2232b8: 0xa2503690  sb          $s0, 0x3690($s2)
    ctx->pc = 0x2232b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13968), (uint8_t)GPR_U32(ctx, 16));
label_2232bc:
    // 0x2232bc: 0x0  nop
    ctx->pc = 0x2232bcu;
    // NOP
label_2232c0:
    // 0x2232c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2232c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2232c4:
    // 0x2232c4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2232c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2232c8:
    // 0x2232c8: 0x1460ff49  bnez        $v1, . + 4 + (-0xB7 << 2)
label_2232cc:
    if (ctx->pc == 0x2232CCu) {
        ctx->pc = 0x2232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232C8u;
        // 0x2232cc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2232D0u;
        goto label_2232d0;
    }
    ctx->pc = 0x2232C8u;
    {
        const bool branch_taken_0x2232c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232C8u;
        // 0x2232cc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232c8) {
            ctx->pc = 0x222FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222ff0;
        }
    }
    ctx->pc = 0x2232D0u;
label_2232d0:
    // 0x2232d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2232d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2232d4:
    // 0x2232d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2232d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2232d8:
    // 0x2232d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2232d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2232dc:
    // 0x2232dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2232dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2232e0:
    // 0x2232e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2232e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2232e4:
    // 0x2232e4: 0x3e00008  jr          $ra
label_2232e8:
    if (ctx->pc == 0x2232E8u) {
        ctx->pc = 0x2232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232E4u;
        // 0x2232e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2232ECu;
        goto label_2232ec;
    }
    ctx->pc = 0x2232E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232E4u;
        // 0x2232e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2232E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2232ECu;
label_2232ec:
    // 0x2232ec: 0x0  nop
    ctx->pc = 0x2232ecu;
    // NOP
label_2232f0:
    // 0x2232f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2232f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2232f4:
    // 0x2232f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2232f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2232f8:
    // 0x2232f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2232f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2232fc:
    // 0x2232fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2232fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_223300:
    // 0x223300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223304:
    // 0x223304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223308:
    // 0x223308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22330c:
    // 0x22330c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_223310:
    // 0x223310: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
label_223314:
    // 0x223314: 0x0  nop
    ctx->pc = 0x223314u;
    // NOP
label_223318:
    // 0x223318: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x223318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22331c:
    // 0x22331c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22331cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_223320:
    // 0x223320: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_223324:
    if (ctx->pc == 0x223324u) {
        ctx->pc = 0x223328u;
        goto label_223328;
    }
    ctx->pc = 0x223320u;
    {
        const bool branch_taken_0x223320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223320) {
            ctx->pc = 0x22332Cu;
            goto label_22332c;
        }
    }
    ctx->pc = 0x223328u;
label_223328:
    // 0x223328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22332c:
    // 0x22332c: 0x0  nop
    ctx->pc = 0x22332cu;
    // NOP
label_223330:
    // 0x223330: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x223330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_223334:
    // 0x223334: 0x2882002a  slti        $v0, $a0, 0x2A
    ctx->pc = 0x223334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)42) ? 1 : 0);
label_223338:
    // 0x223338: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_22333c:
    if (ctx->pc == 0x22333Cu) {
        ctx->pc = 0x223340u;
        goto label_223340;
    }
    ctx->pc = 0x223338u;
    {
        const bool branch_taken_0x223338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223338) {
            ctx->pc = 0x223314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223314;
        }
    }
    ctx->pc = 0x223340u;
label_223340:
    // 0x223340: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
label_223344:
    if (ctx->pc == 0x223344u) {
        ctx->pc = 0x223344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223340u;
        // 0x223344: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223348u;
        goto label_223348;
    }
    ctx->pc = 0x223340u;
    {
        const bool branch_taken_0x223340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x223344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223340u;
        // 0x223344: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223340) {
            ctx->pc = 0x2233B0u;
            goto label_2233b0;
        }
    }
    ctx->pc = 0x223348u;
label_223348:
    // 0x223348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x223348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22334c:
    // 0x22334c: 0xc0901b4  jal         func_2406D0
label_223350:
    if (ctx->pc == 0x223350u) {
        ctx->pc = 0x223350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22334Cu;
        // 0x223350: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223354u;
        goto label_223354;
    }
    ctx->pc = 0x22334Cu;
    SET_GPR_U32(ctx, 31, 0x223354u);
    ctx->pc = 0x223350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22334Cu;
    // 0x223350: 0x26440038  addiu       $a0, $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406D0u;
    { ctx->pc = 0x2406d0; return; }
    ctx->pc = 0x223354u;
label_223354:
    // 0x223354: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_223358:
    if (ctx->pc == 0x223358u) {
        ctx->pc = 0x223358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223354u;
        // 0x223358: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22335Cu;
        goto label_22335c;
    }
    ctx->pc = 0x223354u;
    {
        const bool branch_taken_0x223354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223354u;
        // 0x223358: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223354) {
            ctx->pc = 0x223388u;
            goto label_223388;
        }
    }
    ctx->pc = 0x22335Cu;
label_22335c:
    // 0x22335c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x22335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_223360:
    // 0x223360: 0x2463e4f0  addiu       $v1, $v1, -0x1B10
    ctx->pc = 0x223360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960368));
label_223364:
    // 0x223364: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_223368:
    // 0x223368: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x223368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22336c:
    // 0x22336c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_223370:
    if (ctx->pc == 0x223370u) {
        ctx->pc = 0x223370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22336Cu;
        // 0x223370: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223374u;
        goto label_223374;
    }
    ctx->pc = 0x22336Cu;
    {
        const bool branch_taken_0x22336c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22336Cu;
        // 0x223370: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22336c) {
            ctx->pc = 0x223388u;
            goto label_223388;
        }
    }
    ctx->pc = 0x223374u;
label_223374:
    // 0x223374: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223378:
    // 0x223378: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x223378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
label_22337c:
    // 0x22337c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_223380:
    // 0x223380: 0x10000006  b           . + 4 + (0x6 << 2)
label_223384:
    if (ctx->pc == 0x223384u) {
        ctx->pc = 0x223384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223380u;
        // 0x223384: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223388u;
        goto label_223388;
    }
    ctx->pc = 0x223380u;
    {
        const bool branch_taken_0x223380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223380u;
        // 0x223384: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223380) {
            ctx->pc = 0x22339Cu;
            goto label_22339c;
        }
    }
    ctx->pc = 0x223388u;
label_223388:
    // 0x223388: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x223388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22338c:
    // 0x22338c: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x22338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
label_223390:
    // 0x223390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223394:
    // 0x223394: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x223394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_223398:
    // 0x223398: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x223398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_22339c:
    // 0x22339c: 0x0  nop
    ctx->pc = 0x22339cu;
    // NOP
label_2233a0:
    // 0x2233a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2233a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2233a4:
    // 0x2233a4: 0x2a42002a  slti        $v0, $s2, 0x2A
    ctx->pc = 0x2233a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)42) ? 1 : 0);
label_2233a8:
    // 0x2233a8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_2233ac:
    if (ctx->pc == 0x2233ACu) {
        ctx->pc = 0x2233ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233A8u;
        // 0x2233ac: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2233B0u;
        goto label_2233b0;
    }
    ctx->pc = 0x2233A8u;
    {
        const bool branch_taken_0x2233a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2233ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233A8u;
        // 0x2233ac: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233a8) {
            ctx->pc = 0x22334Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22334c;
        }
    }
    ctx->pc = 0x2233B0u;
label_2233b0:
    // 0x2233b0: 0xc08f0cc  jal         func_23C330
label_2233b4:
    if (ctx->pc == 0x2233B4u) {
        ctx->pc = 0x2233B8u;
        goto label_2233b8;
    }
    ctx->pc = 0x2233B0u;
    SET_GPR_U32(ctx, 31, 0x2233B8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x2233B8u;
label_2233b8:
    // 0x2233b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2233b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2233bc:
    // 0x2233bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2233bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2233c0:
    // 0x2233c0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2233c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2233c4:
    // 0x2233c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2233c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2233c8:
    // 0x2233c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2233c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2233cc:
    // 0x2233cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2233ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2233d0:
    // 0x2233d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2233d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2233d4:
    // 0x2233d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2233d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2233d8:
    // 0x2233d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2233d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2233dc:
    // 0x2233dc: 0x0  nop
    ctx->pc = 0x2233dcu;
    // NOP
label_2233e0:
    // 0x2233e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2233e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2233e4:
    // 0x2233e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2233e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2233e8:
    // 0x2233e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2233e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2233ec:
    // 0x2233ec: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x2233ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_2233f0:
    // 0x2233f0: 0x2484e4c0  addiu       $a0, $a0, -0x1B40
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
label_2233f4:
    // 0x2233f4: 0x0  nop
    ctx->pc = 0x2233f4u;
    // NOP
label_2233f8:
    // 0x2233f8: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2233f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2233fc:
    // 0x2233fc: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2233fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_223400:
    // 0x223400: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_223404:
    if (ctx->pc == 0x223404u) {
        ctx->pc = 0x223408u;
        goto label_223408;
    }
    ctx->pc = 0x223400u;
    {
        const bool branch_taken_0x223400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223400) {
            ctx->pc = 0x22341Cu;
            goto label_22341c;
        }
    }
    ctx->pc = 0x223408u;
label_223408:
    // 0x223408: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
label_22340c:
    if (ctx->pc == 0x22340Cu) {
        ctx->pc = 0x22340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223408u;
        // 0x22340c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223410u;
        goto label_223410;
    }
    ctx->pc = 0x223408u;
    {
        const bool branch_taken_0x223408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x22340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223408u;
        // 0x22340c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223408) {
            ctx->pc = 0x223418u;
            goto label_223418;
        }
    }
    ctx->pc = 0x223410u;
label_223410:
    // 0x223410: 0x10000007  b           . + 4 + (0x7 << 2)
label_223414:
    if (ctx->pc == 0x223414u) {
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223410u;
        // 0x223414: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223418u;
        goto label_223418;
    }
    ctx->pc = 0x223410u;
    {
        const bool branch_taken_0x223410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223410u;
        // 0x223414: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223410) {
            ctx->pc = 0x223430u;
            goto label_223430;
        }
    }
    ctx->pc = 0x223418u;
label_223418:
    // 0x223418: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x223418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22341c:
    // 0x22341c: 0x0  nop
    ctx->pc = 0x22341cu;
    // NOP
label_223420:
    // 0x223420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_223424:
    // 0x223424: 0x2843002a  slti        $v1, $v0, 0x2A
    ctx->pc = 0x223424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
label_223428:
    // 0x223428: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_22342c:
    if (ctx->pc == 0x22342Cu) {
        ctx->pc = 0x223430u;
        goto label_223430;
    }
    ctx->pc = 0x223428u;
    {
        const bool branch_taken_0x223428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223428) {
            ctx->pc = 0x2233F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2233f4;
        }
    }
    ctx->pc = 0x223430u;
label_223430:
    // 0x223430: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_223434:
    // 0x223434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223438:
    // 0x223438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22343c:
    // 0x22343c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223440:
    // 0x223440: 0x3e00008  jr          $ra
label_223444:
    if (ctx->pc == 0x223444u) {
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223440u;
        // 0x223444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223448u;
        { ctx->pc = 0x223448; return; }
    }
    ctx->pc = 0x223440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223440u;
        // 0x223444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223448u;
    ctx->pc = 0x223448u;
    return;
}
