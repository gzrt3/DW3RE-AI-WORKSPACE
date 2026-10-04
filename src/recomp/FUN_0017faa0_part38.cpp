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


void FUN_0017faa0_part38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x191bb0u: goto label_191bb0;
        case 0x191bb4u: goto label_191bb4;
        case 0x191bb8u: goto label_191bb8;
        case 0x191bbcu: goto label_191bbc;
        case 0x191bc0u: goto label_191bc0;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bc8u: goto label_191bc8;
        case 0x191bccu: goto label_191bcc;
        case 0x191bd0u: goto label_191bd0;
        case 0x191bd4u: goto label_191bd4;
        case 0x191bd8u: goto label_191bd8;
        case 0x191bdcu: goto label_191bdc;
        case 0x191be0u: goto label_191be0;
        case 0x191be4u: goto label_191be4;
        case 0x191be8u: goto label_191be8;
        case 0x191becu: goto label_191bec;
        case 0x191bf0u: goto label_191bf0;
        case 0x191bf4u: goto label_191bf4;
        case 0x191bf8u: goto label_191bf8;
        case 0x191bfcu: goto label_191bfc;
        case 0x191c00u: goto label_191c00;
        case 0x191c04u: goto label_191c04;
        case 0x191c08u: goto label_191c08;
        case 0x191c0cu: goto label_191c0c;
        case 0x191c10u: goto label_191c10;
        case 0x191c14u: goto label_191c14;
        case 0x191c18u: goto label_191c18;
        case 0x191c1cu: goto label_191c1c;
        case 0x191c20u: goto label_191c20;
        case 0x191c24u: goto label_191c24;
        case 0x191c28u: goto label_191c28;
        case 0x191c2cu: goto label_191c2c;
        case 0x191c30u: goto label_191c30;
        case 0x191c34u: goto label_191c34;
        case 0x191c38u: goto label_191c38;
        case 0x191c3cu: goto label_191c3c;
        case 0x191c40u: goto label_191c40;
        case 0x191c44u: goto label_191c44;
        case 0x191c48u: goto label_191c48;
        case 0x191c4cu: goto label_191c4c;
        case 0x191c50u: goto label_191c50;
        case 0x191c54u: goto label_191c54;
        case 0x191c58u: goto label_191c58;
        case 0x191c5cu: goto label_191c5c;
        case 0x191c60u: goto label_191c60;
        case 0x191c64u: goto label_191c64;
        case 0x191c68u: goto label_191c68;
        case 0x191c6cu: goto label_191c6c;
        case 0x191c70u: goto label_191c70;
        case 0x191c74u: goto label_191c74;
        case 0x191c78u: goto label_191c78;
        case 0x191c7cu: goto label_191c7c;
        case 0x191c80u: goto label_191c80;
        case 0x191c84u: goto label_191c84;
        case 0x191c88u: goto label_191c88;
        case 0x191c8cu: goto label_191c8c;
        case 0x191c90u: goto label_191c90;
        case 0x191c94u: goto label_191c94;
        case 0x191c98u: goto label_191c98;
        case 0x191c9cu: goto label_191c9c;
        case 0x191ca0u: goto label_191ca0;
        case 0x191ca4u: goto label_191ca4;
        case 0x191ca8u: goto label_191ca8;
        case 0x191cacu: goto label_191cac;
        case 0x191cb0u: goto label_191cb0;
        case 0x191cb4u: goto label_191cb4;
        case 0x191cb8u: goto label_191cb8;
        case 0x191cbcu: goto label_191cbc;
        case 0x191cc0u: goto label_191cc0;
        case 0x191cc4u: goto label_191cc4;
        case 0x191cc8u: goto label_191cc8;
        case 0x191cccu: goto label_191ccc;
        case 0x191cd0u: goto label_191cd0;
        case 0x191cd4u: goto label_191cd4;
        case 0x191cd8u: goto label_191cd8;
        case 0x191cdcu: goto label_191cdc;
        case 0x191ce0u: goto label_191ce0;
        case 0x191ce4u: goto label_191ce4;
        case 0x191ce8u: goto label_191ce8;
        case 0x191cecu: goto label_191cec;
        case 0x191cf0u: goto label_191cf0;
        case 0x191cf4u: goto label_191cf4;
        case 0x191cf8u: goto label_191cf8;
        case 0x191cfcu: goto label_191cfc;
        case 0x191d00u: goto label_191d00;
        case 0x191d04u: goto label_191d04;
        case 0x191d08u: goto label_191d08;
        case 0x191d0cu: goto label_191d0c;
        case 0x191d10u: goto label_191d10;
        case 0x191d14u: goto label_191d14;
        case 0x191d18u: goto label_191d18;
        case 0x191d1cu: goto label_191d1c;
        case 0x191d20u: goto label_191d20;
        case 0x191d24u: goto label_191d24;
        case 0x191d28u: goto label_191d28;
        case 0x191d2cu: goto label_191d2c;
        case 0x191d30u: goto label_191d30;
        case 0x191d34u: goto label_191d34;
        case 0x191d38u: goto label_191d38;
        case 0x191d3cu: goto label_191d3c;
        case 0x191d40u: goto label_191d40;
        case 0x191d44u: goto label_191d44;
        case 0x191d48u: goto label_191d48;
        case 0x191d4cu: goto label_191d4c;
        case 0x191d50u: goto label_191d50;
        case 0x191d54u: goto label_191d54;
        case 0x191d58u: goto label_191d58;
        case 0x191d5cu: goto label_191d5c;
        case 0x191d60u: goto label_191d60;
        case 0x191d64u: goto label_191d64;
        case 0x191d68u: goto label_191d68;
        case 0x191d6cu: goto label_191d6c;
        case 0x191d70u: goto label_191d70;
        case 0x191d74u: goto label_191d74;
        case 0x191d78u: goto label_191d78;
        case 0x191d7cu: goto label_191d7c;
        case 0x191d80u: goto label_191d80;
        case 0x191d84u: goto label_191d84;
        case 0x191d88u: goto label_191d88;
        case 0x191d8cu: goto label_191d8c;
        case 0x191d90u: goto label_191d90;
        case 0x191d94u: goto label_191d94;
        case 0x191d98u: goto label_191d98;
        case 0x191d9cu: goto label_191d9c;
        case 0x191da0u: goto label_191da0;
        case 0x191da4u: goto label_191da4;
        case 0x191da8u: goto label_191da8;
        case 0x191dacu: goto label_191dac;
        case 0x191db0u: goto label_191db0;
        case 0x191db4u: goto label_191db4;
        case 0x191db8u: goto label_191db8;
        case 0x191dbcu: goto label_191dbc;
        case 0x191dc0u: goto label_191dc0;
        case 0x191dc4u: goto label_191dc4;
        case 0x191dc8u: goto label_191dc8;
        case 0x191dccu: goto label_191dcc;
        case 0x191dd0u: goto label_191dd0;
        case 0x191dd4u: goto label_191dd4;
        case 0x191dd8u: goto label_191dd8;
        case 0x191ddcu: goto label_191ddc;
        case 0x191de0u: goto label_191de0;
        case 0x191de4u: goto label_191de4;
        case 0x191de8u: goto label_191de8;
        case 0x191decu: goto label_191dec;
        case 0x191df0u: goto label_191df0;
        case 0x191df4u: goto label_191df4;
        case 0x191df8u: goto label_191df8;
        case 0x191dfcu: goto label_191dfc;
        case 0x191e00u: goto label_191e00;
        case 0x191e04u: goto label_191e04;
        case 0x191e08u: goto label_191e08;
        case 0x191e0cu: goto label_191e0c;
        case 0x191e10u: goto label_191e10;
        case 0x191e14u: goto label_191e14;
        case 0x191e18u: goto label_191e18;
        case 0x191e1cu: goto label_191e1c;
        case 0x191e20u: goto label_191e20;
        case 0x191e24u: goto label_191e24;
        case 0x191e28u: goto label_191e28;
        case 0x191e2cu: goto label_191e2c;
        case 0x191e30u: goto label_191e30;
        case 0x191e34u: goto label_191e34;
        case 0x191e38u: goto label_191e38;
        case 0x191e3cu: goto label_191e3c;
        case 0x191e40u: goto label_191e40;
        case 0x191e44u: goto label_191e44;
        case 0x191e48u: goto label_191e48;
        case 0x191e4cu: goto label_191e4c;
        case 0x191e50u: goto label_191e50;
        case 0x191e54u: goto label_191e54;
        case 0x191e58u: goto label_191e58;
        case 0x191e5cu: goto label_191e5c;
        case 0x191e60u: goto label_191e60;
        case 0x191e64u: goto label_191e64;
        case 0x191e68u: goto label_191e68;
        case 0x191e6cu: goto label_191e6c;
        case 0x191e70u: goto label_191e70;
        case 0x191e74u: goto label_191e74;
        case 0x191e78u: goto label_191e78;
        case 0x191e7cu: goto label_191e7c;
        case 0x191e80u: goto label_191e80;
        case 0x191e84u: goto label_191e84;
        case 0x191e88u: goto label_191e88;
        case 0x191e8cu: goto label_191e8c;
        case 0x191e90u: goto label_191e90;
        case 0x191e94u: goto label_191e94;
        case 0x191e98u: goto label_191e98;
        case 0x191e9cu: goto label_191e9c;
        case 0x191ea0u: goto label_191ea0;
        case 0x191ea4u: goto label_191ea4;
        case 0x191ea8u: goto label_191ea8;
        case 0x191eacu: goto label_191eac;
        case 0x191eb0u: goto label_191eb0;
        case 0x191eb4u: goto label_191eb4;
        case 0x191eb8u: goto label_191eb8;
        case 0x191ebcu: goto label_191ebc;
        case 0x191ec0u: goto label_191ec0;
        case 0x191ec4u: goto label_191ec4;
        case 0x191ec8u: goto label_191ec8;
        case 0x191eccu: goto label_191ecc;
        case 0x191ed0u: goto label_191ed0;
        case 0x191ed4u: goto label_191ed4;
        case 0x191ed8u: goto label_191ed8;
        case 0x191edcu: goto label_191edc;
        case 0x191ee0u: goto label_191ee0;
        case 0x191ee4u: goto label_191ee4;
        case 0x191ee8u: goto label_191ee8;
        case 0x191eecu: goto label_191eec;
        case 0x191ef0u: goto label_191ef0;
        case 0x191ef4u: goto label_191ef4;
        case 0x191ef8u: goto label_191ef8;
        case 0x191efcu: goto label_191efc;
        case 0x191f00u: goto label_191f00;
        case 0x191f04u: goto label_191f04;
        case 0x191f08u: goto label_191f08;
        case 0x191f0cu: goto label_191f0c;
        case 0x191f10u: goto label_191f10;
        case 0x191f14u: goto label_191f14;
        case 0x191f18u: goto label_191f18;
        case 0x191f1cu: goto label_191f1c;
        case 0x191f20u: goto label_191f20;
        case 0x191f24u: goto label_191f24;
        case 0x191f28u: goto label_191f28;
        case 0x191f2cu: goto label_191f2c;
        case 0x191f30u: goto label_191f30;
        case 0x191f34u: goto label_191f34;
        case 0x191f38u: goto label_191f38;
        case 0x191f3cu: goto label_191f3c;
        case 0x191f40u: goto label_191f40;
        case 0x191f44u: goto label_191f44;
        case 0x191f48u: goto label_191f48;
        case 0x191f4cu: goto label_191f4c;
        case 0x191f50u: goto label_191f50;
        case 0x191f54u: goto label_191f54;
        case 0x191f58u: goto label_191f58;
        case 0x191f5cu: goto label_191f5c;
        case 0x191f60u: goto label_191f60;
        case 0x191f64u: goto label_191f64;
        case 0x191f68u: goto label_191f68;
        case 0x191f6cu: goto label_191f6c;
        case 0x191f70u: goto label_191f70;
        case 0x191f74u: goto label_191f74;
        case 0x191f78u: goto label_191f78;
        case 0x191f7cu: goto label_191f7c;
        case 0x191f80u: goto label_191f80;
        case 0x191f84u: goto label_191f84;
        case 0x191f88u: goto label_191f88;
        case 0x191f8cu: goto label_191f8c;
        case 0x191f90u: goto label_191f90;
        case 0x191f94u: goto label_191f94;
        case 0x191f98u: goto label_191f98;
        case 0x191f9cu: goto label_191f9c;
        case 0x191fa0u: goto label_191fa0;
        case 0x191fa4u: goto label_191fa4;
        case 0x191fa8u: goto label_191fa8;
        case 0x191facu: goto label_191fac;
        case 0x191fb0u: goto label_191fb0;
        case 0x191fb4u: goto label_191fb4;
        case 0x191fb8u: goto label_191fb8;
        case 0x191fbcu: goto label_191fbc;
        case 0x191fc0u: goto label_191fc0;
        case 0x191fc4u: goto label_191fc4;
        case 0x191fc8u: goto label_191fc8;
        case 0x191fccu: goto label_191fcc;
        case 0x191fd0u: goto label_191fd0;
        case 0x191fd4u: goto label_191fd4;
        case 0x191fd8u: goto label_191fd8;
        case 0x191fdcu: goto label_191fdc;
        case 0x191fe0u: goto label_191fe0;
        case 0x191fe4u: goto label_191fe4;
        case 0x191fe8u: goto label_191fe8;
        case 0x191fecu: goto label_191fec;
        case 0x191ff0u: goto label_191ff0;
        case 0x191ff4u: goto label_191ff4;
        case 0x191ff8u: goto label_191ff8;
        case 0x191ffcu: goto label_191ffc;
        case 0x192000u: goto label_192000;
        case 0x192004u: goto label_192004;
        case 0x192008u: goto label_192008;
        case 0x19200cu: goto label_19200c;
        case 0x192010u: goto label_192010;
        case 0x192014u: goto label_192014;
        case 0x192018u: goto label_192018;
        case 0x19201cu: goto label_19201c;
        case 0x192020u: goto label_192020;
        case 0x192024u: goto label_192024;
        case 0x192028u: goto label_192028;
        case 0x19202cu: goto label_19202c;
        case 0x192030u: goto label_192030;
        case 0x192034u: goto label_192034;
        case 0x192038u: goto label_192038;
        case 0x19203cu: goto label_19203c;
        case 0x192040u: goto label_192040;
        case 0x192044u: goto label_192044;
        case 0x192048u: goto label_192048;
        case 0x19204cu: goto label_19204c;
        case 0x192050u: goto label_192050;
        case 0x192054u: goto label_192054;
        case 0x192058u: goto label_192058;
        case 0x19205cu: goto label_19205c;
        case 0x192060u: goto label_192060;
        case 0x192064u: goto label_192064;
        case 0x192068u: goto label_192068;
        case 0x19206cu: goto label_19206c;
        case 0x192070u: goto label_192070;
        case 0x192074u: goto label_192074;
        case 0x192078u: goto label_192078;
        case 0x19207cu: goto label_19207c;
        case 0x192080u: goto label_192080;
        case 0x192084u: goto label_192084;
        case 0x192088u: goto label_192088;
        case 0x19208cu: goto label_19208c;
        case 0x192090u: goto label_192090;
        case 0x192094u: goto label_192094;
        case 0x192098u: goto label_192098;
        case 0x19209cu: goto label_19209c;
        case 0x1920a0u: goto label_1920a0;
        case 0x1920a4u: goto label_1920a4;
        case 0x1920a8u: goto label_1920a8;
        case 0x1920acu: goto label_1920ac;
        case 0x1920b0u: goto label_1920b0;
        case 0x1920b4u: goto label_1920b4;
        case 0x1920b8u: goto label_1920b8;
        case 0x1920bcu: goto label_1920bc;
        case 0x1920c0u: goto label_1920c0;
        case 0x1920c4u: goto label_1920c4;
        case 0x1920c8u: goto label_1920c8;
        case 0x1920ccu: goto label_1920cc;
        case 0x1920d0u: goto label_1920d0;
        case 0x1920d4u: goto label_1920d4;
        case 0x1920d8u: goto label_1920d8;
        case 0x1920dcu: goto label_1920dc;
        case 0x1920e0u: goto label_1920e0;
        case 0x1920e4u: goto label_1920e4;
        case 0x1920e8u: goto label_1920e8;
        case 0x1920ecu: goto label_1920ec;
        case 0x1920f0u: goto label_1920f0;
        case 0x1920f4u: goto label_1920f4;
        case 0x1920f8u: goto label_1920f8;
        case 0x1920fcu: goto label_1920fc;
        case 0x192100u: goto label_192100;
        case 0x192104u: goto label_192104;
        case 0x192108u: goto label_192108;
        case 0x19210cu: goto label_19210c;
        case 0x192110u: goto label_192110;
        case 0x192114u: goto label_192114;
        case 0x192118u: goto label_192118;
        case 0x19211cu: goto label_19211c;
        case 0x192120u: goto label_192120;
        case 0x192124u: goto label_192124;
        case 0x192128u: goto label_192128;
        case 0x19212cu: goto label_19212c;
        case 0x192130u: goto label_192130;
        case 0x192134u: goto label_192134;
        case 0x192138u: goto label_192138;
        case 0x19213cu: goto label_19213c;
        case 0x192140u: goto label_192140;
        case 0x192144u: goto label_192144;
        case 0x192148u: goto label_192148;
        case 0x19214cu: goto label_19214c;
        case 0x192150u: goto label_192150;
        case 0x192154u: goto label_192154;
        case 0x192158u: goto label_192158;
        case 0x19215cu: goto label_19215c;
        case 0x192160u: goto label_192160;
        case 0x192164u: goto label_192164;
        case 0x192168u: goto label_192168;
        case 0x19216cu: goto label_19216c;
        case 0x192170u: goto label_192170;
        case 0x192174u: goto label_192174;
        case 0x192178u: goto label_192178;
        case 0x19217cu: goto label_19217c;
        case 0x192180u: goto label_192180;
        case 0x192184u: goto label_192184;
        case 0x192188u: goto label_192188;
        case 0x19218cu: goto label_19218c;
        case 0x192190u: goto label_192190;
        case 0x192194u: goto label_192194;
        case 0x192198u: goto label_192198;
        case 0x19219cu: goto label_19219c;
        case 0x1921a0u: goto label_1921a0;
        case 0x1921a4u: goto label_1921a4;
        case 0x1921a8u: goto label_1921a8;
        case 0x1921acu: goto label_1921ac;
        case 0x1921b0u: goto label_1921b0;
        case 0x1921b4u: goto label_1921b4;
        case 0x1921b8u: goto label_1921b8;
        case 0x1921bcu: goto label_1921bc;
        case 0x1921c0u: goto label_1921c0;
        case 0x1921c4u: goto label_1921c4;
        case 0x1921c8u: goto label_1921c8;
        case 0x1921ccu: goto label_1921cc;
        case 0x1921d0u: goto label_1921d0;
        case 0x1921d4u: goto label_1921d4;
        case 0x1921d8u: goto label_1921d8;
        case 0x1921dcu: goto label_1921dc;
        case 0x1921e0u: goto label_1921e0;
        case 0x1921e4u: goto label_1921e4;
        case 0x1921e8u: goto label_1921e8;
        case 0x1921ecu: goto label_1921ec;
        case 0x1921f0u: goto label_1921f0;
        case 0x1921f4u: goto label_1921f4;
        case 0x1921f8u: goto label_1921f8;
        case 0x1921fcu: goto label_1921fc;
        case 0x192200u: goto label_192200;
        case 0x192204u: goto label_192204;
        case 0x192208u: goto label_192208;
        case 0x19220cu: goto label_19220c;
        case 0x192210u: goto label_192210;
        case 0x192214u: goto label_192214;
        case 0x192218u: goto label_192218;
        case 0x19221cu: goto label_19221c;
        case 0x192220u: goto label_192220;
        case 0x192224u: goto label_192224;
        case 0x192228u: goto label_192228;
        case 0x19222cu: goto label_19222c;
        case 0x192230u: goto label_192230;
        case 0x192234u: goto label_192234;
        case 0x192238u: goto label_192238;
        case 0x19223cu: goto label_19223c;
        case 0x192240u: goto label_192240;
        case 0x192244u: goto label_192244;
        case 0x192248u: goto label_192248;
        case 0x19224cu: goto label_19224c;
        case 0x192250u: goto label_192250;
        case 0x192254u: goto label_192254;
        case 0x192258u: goto label_192258;
        case 0x19225cu: goto label_19225c;
        case 0x192260u: goto label_192260;
        case 0x192264u: goto label_192264;
        case 0x192268u: goto label_192268;
        case 0x19226cu: goto label_19226c;
        case 0x192270u: goto label_192270;
        case 0x192274u: goto label_192274;
        case 0x192278u: goto label_192278;
        case 0x19227cu: goto label_19227c;
        case 0x192280u: goto label_192280;
        case 0x192284u: goto label_192284;
        case 0x192288u: goto label_192288;
        case 0x19228cu: goto label_19228c;
        case 0x192290u: goto label_192290;
        case 0x192294u: goto label_192294;
        case 0x192298u: goto label_192298;
        case 0x19229cu: goto label_19229c;
        case 0x1922a0u: goto label_1922a0;
        case 0x1922a4u: goto label_1922a4;
        case 0x1922a8u: goto label_1922a8;
        case 0x1922acu: goto label_1922ac;
        case 0x1922b0u: goto label_1922b0;
        case 0x1922b4u: goto label_1922b4;
        case 0x1922b8u: goto label_1922b8;
        case 0x1922bcu: goto label_1922bc;
        case 0x1922c0u: goto label_1922c0;
        case 0x1922c4u: goto label_1922c4;
        case 0x1922c8u: goto label_1922c8;
        case 0x1922ccu: goto label_1922cc;
        case 0x1922d0u: goto label_1922d0;
        case 0x1922d4u: goto label_1922d4;
        case 0x1922d8u: goto label_1922d8;
        case 0x1922dcu: goto label_1922dc;
        case 0x1922e0u: goto label_1922e0;
        case 0x1922e4u: goto label_1922e4;
        case 0x1922e8u: goto label_1922e8;
        case 0x1922ecu: goto label_1922ec;
        case 0x1922f0u: goto label_1922f0;
        case 0x1922f4u: goto label_1922f4;
        case 0x1922f8u: goto label_1922f8;
        case 0x1922fcu: goto label_1922fc;
        case 0x192300u: goto label_192300;
        case 0x192304u: goto label_192304;
        case 0x192308u: goto label_192308;
        case 0x19230cu: goto label_19230c;
        case 0x192310u: goto label_192310;
        case 0x192314u: goto label_192314;
        case 0x192318u: goto label_192318;
        case 0x19231cu: goto label_19231c;
        case 0x192320u: goto label_192320;
        case 0x192324u: goto label_192324;
        case 0x192328u: goto label_192328;
        case 0x19232cu: goto label_19232c;
        case 0x192330u: goto label_192330;
        case 0x192334u: goto label_192334;
        case 0x192338u: goto label_192338;
        case 0x19233cu: goto label_19233c;
        case 0x192340u: goto label_192340;
        case 0x192344u: goto label_192344;
        case 0x192348u: goto label_192348;
        case 0x19234cu: goto label_19234c;
        case 0x192350u: goto label_192350;
        case 0x192354u: goto label_192354;
        case 0x192358u: goto label_192358;
        case 0x19235cu: goto label_19235c;
        case 0x192360u: goto label_192360;
        case 0x192364u: goto label_192364;
        case 0x192368u: goto label_192368;
        case 0x19236cu: goto label_19236c;
        case 0x192370u: goto label_192370;
        case 0x192374u: goto label_192374;
        case 0x192378u: goto label_192378;
        case 0x19237cu: goto label_19237c;
        default: return;
    }

label_191bb0:
    if (ctx->pc == 0x191BB0u) {
        ctx->pc = 0x191BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BACu;
        // 0x191bb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BB4u;
        goto label_191bb4;
    }
    ctx->pc = 0x191BACu;
    {
        const bool branch_taken_0x191bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BACu;
        // 0x191bb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bac) {
            ctx->pc = 0x191BC4u;
            goto label_191bc4;
        }
    }
    ctx->pc = 0x191BB4u;
label_191bb4:
    // 0x191bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191bb8:
    // 0x191bb8: 0xc066e26  jal         func_19B898
label_191bbc:
    if (ctx->pc == 0x191BBCu) {
        ctx->pc = 0x191BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BB8u;
        // 0x191bbc: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BC0u;
        goto label_191bc0;
    }
    ctx->pc = 0x191BB8u;
    SET_GPR_U32(ctx, 31, 0x191BC0u);
    ctx->pc = 0x191BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BB8u;
    // 0x191bbc: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x191BC0u;
label_191bc0:
    // 0x191bc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191bc4:
    // 0x191bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191bc8:
    // 0x191bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_191bcc:
    // 0x191bcc: 0x3e00008  jr          $ra
label_191bd0:
    if (ctx->pc == 0x191BD0u) {
        ctx->pc = 0x191BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BCCu;
        // 0x191bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191BD4u;
        goto label_191bd4;
    }
    ctx->pc = 0x191BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BCCu;
        // 0x191bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191BD4u;
label_191bd4:
    // 0x191bd4: 0x0  nop
    ctx->pc = 0x191bd4u;
    // NOP
label_191bd8:
    // 0x191bd8: 0x0  nop
    ctx->pc = 0x191bd8u;
    // NOP
label_191bdc:
    // 0x191bdc: 0x0  nop
    ctx->pc = 0x191bdcu;
    // NOP
label_191be0:
    // 0x191be0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x191be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_191be4:
    // 0x191be4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x191be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_191be8:
    // 0x191be8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x191be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_191bec:
    // 0x191bec: 0x4a0002ff  vnop
    ctx->pc = 0x191becu;
    // NOP operation, no action needed for VU0
label_191bf0:
    // 0x191bf0: 0x4a0002ff  vnop
    ctx->pc = 0x191bf0u;
    // NOP operation, no action needed for VU0
label_191bf4:
    // 0x191bf4: 0x4a0002ff  vnop
    ctx->pc = 0x191bf4u;
    // NOP operation, no action needed for VU0
label_191bf8:
    // 0x191bf8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x191bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_191bfc:
    // 0x191bfc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x191bfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_191c00:
    // 0x191c00: 0x4a0002ff  vnop
    ctx->pc = 0x191c00u;
    // NOP operation, no action needed for VU0
label_191c04:
    // 0x191c04: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x191c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_191c08:
    // 0x191c08: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x191c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_191c0c:
    // 0x191c0c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x191c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_191c10:
    // 0x191c10: 0x4a0002ff  vnop
    ctx->pc = 0x191c10u;
    // NOP operation, no action needed for VU0
label_191c14:
    // 0x191c14: 0x4a0002ff  vnop
    ctx->pc = 0x191c14u;
    // NOP operation, no action needed for VU0
label_191c18:
    // 0x191c18: 0x4a0002ff  vnop
    ctx->pc = 0x191c18u;
    // NOP operation, no action needed for VU0
label_191c1c:
    // 0x191c1c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x191c1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_191c20:
    // 0x191c20: 0x4a0003bf  vwaitq
    ctx->pc = 0x191c20u;
    // VWAITQ (Q already resolved in this runtime)
label_191c24:
    // 0x191c24: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x191c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_191c28:
    // 0x191c28: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x191c28u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191c2c:
    // 0x191c2c: 0x3e00008  jr          $ra
label_191c30:
    if (ctx->pc == 0x191C30u) {
        ctx->pc = 0x191C34u;
        goto label_191c34;
    }
    ctx->pc = 0x191C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C34u;
label_191c34:
    // 0x191c34: 0x0  nop
    ctx->pc = 0x191c34u;
    // NOP
label_191c38:
    // 0x191c38: 0x0  nop
    ctx->pc = 0x191c38u;
    // NOP
label_191c3c:
    // 0x191c3c: 0x0  nop
    ctx->pc = 0x191c3cu;
    // NOP
label_191c40:
    // 0x191c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191c44:
    // 0x191c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191c48:
    // 0x191c48: 0xc064720  jal         func_191C80
label_191c4c:
    if (ctx->pc == 0x191C4Cu) {
        ctx->pc = 0x191C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C48u;
        // 0x191c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C50u;
        goto label_191c50;
    }
    ctx->pc = 0x191C48u;
    SET_GPR_U32(ctx, 31, 0x191C50u);
    ctx->pc = 0x191C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C48u;
    // 0x191c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    goto label_191c80;
    ctx->pc = 0x191C50u;
label_191c50:
    // 0x191c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191c54:
    // 0x191c54: 0x3e00008  jr          $ra
label_191c58:
    if (ctx->pc == 0x191C58u) {
        ctx->pc = 0x191C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C54u;
        // 0x191c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C5Cu;
        goto label_191c5c;
    }
    ctx->pc = 0x191C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C54u;
        // 0x191c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C5Cu;
label_191c5c:
    // 0x191c5c: 0x0  nop
    ctx->pc = 0x191c5cu;
    // NOP
label_191c60:
    // 0x191c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191c64:
    // 0x191c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191c68:
    // 0x191c68: 0xc064720  jal         func_191C80
label_191c6c:
    if (ctx->pc == 0x191C6Cu) {
        ctx->pc = 0x191C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C68u;
        // 0x191c6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C70u;
        goto label_191c70;
    }
    ctx->pc = 0x191C68u;
    SET_GPR_U32(ctx, 31, 0x191C70u);
    ctx->pc = 0x191C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C68u;
    // 0x191c6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    goto label_191c80;
    ctx->pc = 0x191C70u;
label_191c70:
    // 0x191c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191c74:
    // 0x191c74: 0x3e00008  jr          $ra
label_191c78:
    if (ctx->pc == 0x191C78u) {
        ctx->pc = 0x191C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C74u;
        // 0x191c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C7Cu;
        goto label_191c7c;
    }
    ctx->pc = 0x191C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C74u;
        // 0x191c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C7Cu;
label_191c7c:
    // 0x191c7c: 0x0  nop
    ctx->pc = 0x191c7cu;
    // NOP
label_191c80:
    // 0x191c80: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x191c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_191c84:
    // 0x191c84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x191c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_191c88:
    // 0x191c88: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x191c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_191c8c:
    // 0x191c8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x191c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_191c90:
    // 0x191c90: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x191c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_191c94:
    // 0x191c94: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x191c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_191c98:
    // 0x191c98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x191c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_191c9c:
    // 0x191c9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_191ca0:
    // 0x191ca0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x191ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_191ca4:
    // 0x191ca4: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x191ca4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_191ca8:
    // 0x191ca8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_191cac:
    if (ctx->pc == 0x191CACu) {
        ctx->pc = 0x191CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CA8u;
        // 0x191cac: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CB0u;
        goto label_191cb0;
    }
    ctx->pc = 0x191CA8u;
    {
        const bool branch_taken_0x191ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CA8u;
        // 0x191cac: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ca8) {
            ctx->pc = 0x191D04u;
            goto label_191d04;
        }
    }
    ctx->pc = 0x191CB0u;
label_191cb0:
    // 0x191cb0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x191cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_191cb4:
    // 0x191cb4: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x191cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_191cb8:
    // 0x191cb8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_191cbc:
    if (ctx->pc == 0x191CBCu) {
        ctx->pc = 0x191CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CB8u;
        // 0x191cbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CC0u;
        goto label_191cc0;
    }
    ctx->pc = 0x191CB8u;
    {
        const bool branch_taken_0x191cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CB8u;
        // 0x191cbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cb8) {
            ctx->pc = 0x191CECu;
            goto label_191cec;
        }
    }
    ctx->pc = 0x191CC0u;
label_191cc0:
    // 0x191cc0: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x191cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_191cc4:
    // 0x191cc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_191cc8:
    if (ctx->pc == 0x191CC8u) {
        ctx->pc = 0x191CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CC4u;
        // 0x191cc8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CCCu;
        goto label_191ccc;
    }
    ctx->pc = 0x191CC4u;
    {
        const bool branch_taken_0x191cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CC4u;
        // 0x191cc8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cc4) {
            ctx->pc = 0x191CDCu;
            goto label_191cdc;
        }
    }
    ctx->pc = 0x191CCCu;
label_191ccc:
    // 0x191ccc: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x191cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_191cd0:
    // 0x191cd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_191cd4:
    if (ctx->pc == 0x191CD4u) {
        ctx->pc = 0x191CD8u;
        goto label_191cd8;
    }
    ctx->pc = 0x191CD0u;
    {
        const bool branch_taken_0x191cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191cd0) {
            ctx->pc = 0x191CE8u;
            goto label_191ce8;
        }
    }
    ctx->pc = 0x191CD8u;
label_191cd8:
    // 0x191cd8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x191cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_191cdc:
    // 0x191cdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x191cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_191ce0:
    // 0x191ce0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_191ce4:
    if (ctx->pc == 0x191CE4u) {
        ctx->pc = 0x191CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CE0u;
        // 0x191ce4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CE8u;
        goto label_191ce8;
    }
    ctx->pc = 0x191CE0u;
    {
        const bool branch_taken_0x191ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CE0u;
        // 0x191ce4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ce0) {
            ctx->pc = 0x191CECu;
            goto label_191cec;
        }
    }
    ctx->pc = 0x191CE8u;
label_191ce8:
    // 0x191ce8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191ce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191cec:
    // 0x191cec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_191cf0:
    if (ctx->pc == 0x191CF0u) {
        ctx->pc = 0x191CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CECu;
        // 0x191cf0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CF4u;
        goto label_191cf4;
    }
    ctx->pc = 0x191CECu;
    {
        const bool branch_taken_0x191cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CECu;
        // 0x191cf0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cec) {
            ctx->pc = 0x191CFCu;
            goto label_191cfc;
        }
    }
    ctx->pc = 0x191CF4u;
label_191cf4:
    // 0x191cf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_191cf8:
    if (ctx->pc == 0x191CF8u) {
        ctx->pc = 0x191CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CF4u;
        // 0x191cf8: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191CFCu;
        goto label_191cfc;
    }
    ctx->pc = 0x191CF4u;
    {
        const bool branch_taken_0x191cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CF4u;
        // 0x191cf8: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cf4) {
            ctx->pc = 0x191D08u;
            goto label_191d08;
        }
    }
    ctx->pc = 0x191CFCu;
label_191cfc:
    // 0x191cfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_191d00:
    if (ctx->pc == 0x191D00u) {
        ctx->pc = 0x191D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CFCu;
        // 0x191d00: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D04u;
        goto label_191d04;
    }
    ctx->pc = 0x191CFCu;
    {
        const bool branch_taken_0x191cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191CFCu;
        // 0x191d00: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191cfc) {
            ctx->pc = 0x191D0Cu;
            goto label_191d0c;
        }
    }
    ctx->pc = 0x191D04u;
label_191d04:
    // 0x191d04: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191d08:
    // 0x191d08: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x191d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_191d0c:
    // 0x191d0c: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
label_191d10:
    if (ctx->pc == 0x191D10u) {
        ctx->pc = 0x191D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D0Cu;
        // 0x191d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D14u;
        goto label_191d14;
    }
    ctx->pc = 0x191D0Cu;
    {
        const bool branch_taken_0x191d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D0Cu;
        // 0x191d10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d0c) {
            ctx->pc = 0x1920ECu;
            goto label_1920ec;
        }
    }
    ctx->pc = 0x191D14u;
label_191d14:
    // 0x191d14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191d18:
    // 0x191d18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x191d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191d1c:
    // 0x191d1c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_191d20:
    // 0x191d20: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_191d24:
    // 0x191d24: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191d28:
    // 0x191d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191d2c:
    // 0x191d2c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_191d30:
    // 0x191d30: 0x27828890  addiu       $v0, $gp, -0x7770
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936720));
label_191d34:
    // 0x191d34: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x191d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_191d38:
    // 0x191d38: 0xc07f1a0  jal         func_1FC680
label_191d3c:
    if (ctx->pc == 0x191D3Cu) {
        ctx->pc = 0x191D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D38u;
        // 0x191d3c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D40u;
        goto label_191d40;
    }
    ctx->pc = 0x191D38u;
    SET_GPR_U32(ctx, 31, 0x191D40u);
    ctx->pc = 0x191D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D38u;
    // 0x191d3c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x191D40u;
label_191d40:
    // 0x191d40: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x191d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191d44:
    // 0x191d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191d48:
    // 0x191d48: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x191d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191d4c:
    // 0x191d4c: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x191d4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_191d50:
    // 0x191d50: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
label_191d54:
    if (ctx->pc == 0x191D54u) {
        ctx->pc = 0x191D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D50u;
        // 0x191d54: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191D58u;
        goto label_191d58;
    }
    ctx->pc = 0x191D50u;
    {
        const bool branch_taken_0x191d50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x191D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D50u;
        // 0x191d54: 0xe601009c  swc1        $f1, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d50) {
            ctx->pc = 0x191D70u;
            goto label_191d70;
        }
    }
    ctx->pc = 0x191D58u;
label_191d58:
    // 0x191d58: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x191d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191d5c:
    // 0x191d5c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x191d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_191d60:
    // 0x191d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191d64:
    // 0x191d64: 0x0  nop
    ctx->pc = 0x191d64u;
    // NOP
label_191d68:
    // 0x191d68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191d6c:
    // 0x191d6c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x191d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_191d70:
    // 0x191d70: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_191d74:
    // 0x191d74: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x191d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_191d78:
    // 0x191d78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191d7c:
    // 0x191d7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x191d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_191d80:
    // 0x191d80: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_191d84:
    // 0x191d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191d88:
    // 0x191d88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x191d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_191d8c:
    // 0x191d8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_191d90:
    // 0x191d90: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x191d90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_191d94:
    // 0x191d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191d98:
    // 0x191d98: 0x0  nop
    ctx->pc = 0x191d98u;
    // NOP
label_191d9c:
    // 0x191d9c: 0x0  nop
    ctx->pc = 0x191d9cu;
    // NOP
label_191da0:
    // 0x191da0: 0xc06d4fa  jal         func_1B53E8
label_191da4:
    if (ctx->pc == 0x191DA4u) {
        ctx->pc = 0x191DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DA0u;
        // 0x191da4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DA8u;
        goto label_191da8;
    }
    ctx->pc = 0x191DA0u;
    SET_GPR_U32(ctx, 31, 0x191DA8u);
    ctx->pc = 0x191DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DA0u;
    // 0x191da4: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53E8u;
    { ctx->pc = 0x1b53e8; return; }
    ctx->pc = 0x191DA8u;
label_191da8:
    // 0x191da8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x191da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_191dac:
    // 0x191dac: 0x3c02422a  lui         $v0, 0x422A
    ctx->pc = 0x191dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16938 << 16));
label_191db0:
    // 0x191db0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x191db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_191db4:
    // 0x191db4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x191db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_191db8:
    // 0x191db8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191dbc:
    // 0x191dbc: 0x0  nop
    ctx->pc = 0x191dbcu;
    // NOP
label_191dc0:
    // 0x191dc0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x191dc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_191dc4:
    // 0x191dc4: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x191dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_191dc8:
    // 0x191dc8: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x191dc8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_191dcc:
    // 0x191dcc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x191dccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_191dd0:
    // 0x191dd0: 0x0  nop
    ctx->pc = 0x191dd0u;
    // NOP
label_191dd4:
    // 0x191dd4: 0x0  nop
    ctx->pc = 0x191dd4u;
    // NOP
label_191dd8:
    // 0x191dd8: 0xc06d35a  jal         func_1B4D68
label_191ddc:
    if (ctx->pc == 0x191DDCu) {
        ctx->pc = 0x191DE0u;
        goto label_191de0;
    }
    ctx->pc = 0x191DD8u;
    SET_GPR_U32(ctx, 31, 0x191DE0u);
    ctx->pc = 0x1B4D68u;
    { ctx->pc = 0x1b4d68; return; }
    ctx->pc = 0x191DE0u;
label_191de0:
    // 0x191de0: 0xc06d448  jal         func_1B5120
label_191de4:
    if (ctx->pc == 0x191DE4u) {
        ctx->pc = 0x191DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DE0u;
        // 0x191de4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191DE8u;
        goto label_191de8;
    }
    ctx->pc = 0x191DE0u;
    SET_GPR_U32(ctx, 31, 0x191DE8u);
    ctx->pc = 0x191DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DE0u;
    // 0x191de4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x191DE8u;
label_191de8:
    // 0x191de8: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x191de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_191dec:
    // 0x191dec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x191decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_191df0:
    // 0x191df0: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x191df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191df4:
    // 0x191df4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191df8:
    // 0x191df8: 0x0  nop
    ctx->pc = 0x191df8u;
    // NOP
label_191dfc:
    // 0x191dfc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x191dfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_191e00:
    // 0x191e00: 0x0  nop
    ctx->pc = 0x191e00u;
    // NOP
label_191e04:
    // 0x191e04: 0x0  nop
    ctx->pc = 0x191e04u;
    // NOP
label_191e08:
    // 0x191e08: 0xc06d35a  jal         func_1B4D68
label_191e0c:
    if (ctx->pc == 0x191E0Cu) {
        ctx->pc = 0x191E10u;
        goto label_191e10;
    }
    ctx->pc = 0x191E08u;
    SET_GPR_U32(ctx, 31, 0x191E10u);
    ctx->pc = 0x1B4D68u;
    { ctx->pc = 0x1b4d68; return; }
    ctx->pc = 0x191E10u;
label_191e10:
    // 0x191e10: 0xc06d448  jal         func_1B5120
label_191e14:
    if (ctx->pc == 0x191E14u) {
        ctx->pc = 0x191E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E10u;
        // 0x191e14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E18u;
        goto label_191e18;
    }
    ctx->pc = 0x191E10u;
    SET_GPR_U32(ctx, 31, 0x191E18u);
    ctx->pc = 0x191E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E10u;
    // 0x191e14: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x191E18u;
label_191e18:
    // 0x191e18: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x191e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_191e1c:
    // 0x191e1c: 0xc066e44  jal         func_19B910
label_191e20:
    if (ctx->pc == 0x191E20u) {
        ctx->pc = 0x191E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E1Cu;
        // 0x191e20: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E24u;
        goto label_191e24;
    }
    ctx->pc = 0x191E1Cu;
    SET_GPR_U32(ctx, 31, 0x191E24u);
    ctx->pc = 0x191E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E1Cu;
    // 0x191e20: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191E24u;
label_191e24:
    // 0x191e24: 0xc066e44  jal         func_19B910
label_191e28:
    if (ctx->pc == 0x191E28u) {
        ctx->pc = 0x191E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E24u;
        // 0x191e28: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E2Cu;
        goto label_191e2c;
    }
    ctx->pc = 0x191E24u;
    SET_GPR_U32(ctx, 31, 0x191E2Cu);
    ctx->pc = 0x191E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E24u;
    // 0x191e28: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191E2Cu;
label_191e2c:
    // 0x191e2c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x191e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191e30:
    // 0x191e30: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_191e34:
    // 0x191e34: 0xc066e96  jal         func_19BA58
label_191e38:
    if (ctx->pc == 0x191E38u) {
        ctx->pc = 0x191E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E34u;
        // 0x191e38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E3Cu;
        goto label_191e3c;
    }
    ctx->pc = 0x191E34u;
    SET_GPR_U32(ctx, 31, 0x191E3Cu);
    ctx->pc = 0x191E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E34u;
    // 0x191e38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x191E3Cu;
label_191e3c:
    // 0x191e3c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x191e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191e40:
    // 0x191e40: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x191e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_191e44:
    // 0x191e44: 0xc066ec0  jal         func_19BB00
label_191e48:
    if (ctx->pc == 0x191E48u) {
        ctx->pc = 0x191E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E44u;
        // 0x191e48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E4Cu;
        goto label_191e4c;
    }
    ctx->pc = 0x191E44u;
    SET_GPR_U32(ctx, 31, 0x191E4Cu);
    ctx->pc = 0x191E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E44u;
    // 0x191e48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x191E4Cu;
label_191e4c:
    // 0x191e4c: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x191e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191e50:
    // 0x191e50: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x191e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_191e54:
    // 0x191e54: 0xc066e6c  jal         func_19B9B0
label_191e58:
    if (ctx->pc == 0x191E58u) {
        ctx->pc = 0x191E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E54u;
        // 0x191e58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E5Cu;
        goto label_191e5c;
    }
    ctx->pc = 0x191E54u;
    SET_GPR_U32(ctx, 31, 0x191E5Cu);
    ctx->pc = 0x191E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E54u;
    // 0x191e58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x191E5Cu;
label_191e5c:
    // 0x191e5c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x191e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191e60:
    // 0x191e60: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_191e64:
    // 0x191e64: 0xc066e96  jal         func_19BA58
label_191e68:
    if (ctx->pc == 0x191E68u) {
        ctx->pc = 0x191E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E64u;
        // 0x191e68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E6Cu;
        goto label_191e6c;
    }
    ctx->pc = 0x191E64u;
    SET_GPR_U32(ctx, 31, 0x191E6Cu);
    ctx->pc = 0x191E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E64u;
    // 0x191e68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x191E6Cu;
label_191e6c:
    // 0x191e6c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x191e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191e70:
    // 0x191e70: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_191e74:
    // 0x191e74: 0xc066ec0  jal         func_19BB00
label_191e78:
    if (ctx->pc == 0x191E78u) {
        ctx->pc = 0x191E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E74u;
        // 0x191e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E7Cu;
        goto label_191e7c;
    }
    ctx->pc = 0x191E74u;
    SET_GPR_U32(ctx, 31, 0x191E7Cu);
    ctx->pc = 0x191E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E74u;
    // 0x191e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x191E7Cu;
label_191e7c:
    // 0x191e7c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x191e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_191e80:
    // 0x191e80: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_191e84:
    // 0x191e84: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x191e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_191e88:
    // 0x191e88: 0xc066d7a  jal         func_19B5E8
label_191e8c:
    if (ctx->pc == 0x191E8Cu) {
        ctx->pc = 0x191E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E88u;
        // 0x191e8c: 0x24c62f50  addiu       $a2, $a2, 0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E90u;
        goto label_191e90;
    }
    ctx->pc = 0x191E88u;
    SET_GPR_U32(ctx, 31, 0x191E90u);
    ctx->pc = 0x191E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E88u;
    // 0x191e8c: 0x24c62f50  addiu       $a2, $a2, 0x2F50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x191E90u;
label_191e90:
    // 0x191e90: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_191e94:
    // 0x191e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191e98:
    // 0x191e98: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_191e9c:
    // 0x191e9c: 0xc066d7a  jal         func_19B5E8
label_191ea0:
    if (ctx->pc == 0x191EA0u) {
        ctx->pc = 0x191EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E9Cu;
        // 0x191ea0: 0x24c62f60  addiu       $a2, $a2, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EA4u;
        goto label_191ea4;
    }
    ctx->pc = 0x191E9Cu;
    SET_GPR_U32(ctx, 31, 0x191EA4u);
    ctx->pc = 0x191EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E9Cu;
    // 0x191ea0: 0x24c62f60  addiu       $a2, $a2, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x191EA4u;
label_191ea4:
    // 0x191ea4: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_191ea8:
    // 0x191ea8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_191eac:
    // 0x191eac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_191eb0:
    // 0x191eb0: 0x24639cc0  addiu       $v1, $v1, -0x6340
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941888));
label_191eb4:
    // 0x191eb4: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_191eb8:
    // 0x191eb8: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x191eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_191ebc:
    // 0x191ebc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x191ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_191ec0:
    // 0x191ec0: 0xc066e2a  jal         func_19B8A8
label_191ec4:
    if (ctx->pc == 0x191EC4u) {
        ctx->pc = 0x191EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EC0u;
        // 0x191ec4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EC8u;
        goto label_191ec8;
    }
    ctx->pc = 0x191EC0u;
    SET_GPR_U32(ctx, 31, 0x191EC8u);
    ctx->pc = 0x191EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EC0u;
    // 0x191ec4: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x191EC8u;
label_191ec8:
    // 0x191ec8: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x191ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_191ecc:
    // 0x191ecc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_191ed0:
    // 0x191ed0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x191ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_191ed4:
    // 0x191ed4: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x191ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
label_191ed8:
    // 0x191ed8: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x191ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_191edc:
    // 0x191edc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x191edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_191ee0:
    // 0x191ee0: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x191ee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191ee4:
    // 0x191ee4: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x191ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_191ee8:
    // 0x191ee8: 0xc066e44  jal         func_19B910
label_191eec:
    if (ctx->pc == 0x191EECu) {
        ctx->pc = 0x191EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EE8u;
        // 0x191eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EF0u;
        goto label_191ef0;
    }
    ctx->pc = 0x191EE8u;
    SET_GPR_U32(ctx, 31, 0x191EF0u);
    ctx->pc = 0x191EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EE8u;
    // 0x191eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191EF0u;
label_191ef0:
    // 0x191ef0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x191ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_191ef4:
    // 0x191ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191ef8:
    // 0x191ef8: 0xc066d98  jal         func_19B660
label_191efc:
    if (ctx->pc == 0x191EFCu) {
        ctx->pc = 0x191EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EF8u;
        // 0x191efc: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F00u;
        goto label_191f00;
    }
    ctx->pc = 0x191EF8u;
    SET_GPR_U32(ctx, 31, 0x191F00u);
    ctx->pc = 0x191EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EF8u;
    // 0x191efc: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x191F00u;
label_191f00:
    // 0x191f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191f04:
    // 0x191f04: 0xc066daa  jal         func_19B6A8
label_191f08:
    if (ctx->pc == 0x191F08u) {
        ctx->pc = 0x191F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F04u;
        // 0x191f08: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F0Cu;
        goto label_191f0c;
    }
    ctx->pc = 0x191F04u;
    SET_GPR_U32(ctx, 31, 0x191F0Cu);
    ctx->pc = 0x191F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F04u;
    // 0x191f08: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x191F0Cu;
label_191f0c:
    // 0x191f0c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x191f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_191f10:
    // 0x191f10: 0xc066e26  jal         func_19B898
label_191f14:
    if (ctx->pc == 0x191F14u) {
        ctx->pc = 0x191F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F10u;
        // 0x191f14: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F18u;
        goto label_191f18;
    }
    ctx->pc = 0x191F10u;
    SET_GPR_U32(ctx, 31, 0x191F18u);
    ctx->pc = 0x191F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F10u;
    // 0x191f14: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x191F18u;
label_191f18:
    // 0x191f18: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x191f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_191f1c:
    // 0x191f1c: 0xc066e26  jal         func_19B898
label_191f20:
    if (ctx->pc == 0x191F20u) {
        ctx->pc = 0x191F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F1Cu;
        // 0x191f20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F24u;
        goto label_191f24;
    }
    ctx->pc = 0x191F1Cu;
    SET_GPR_U32(ctx, 31, 0x191F24u);
    ctx->pc = 0x191F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F1Cu;
    // 0x191f20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x191F24u;
label_191f24:
    // 0x191f24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x191f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_191f28:
    // 0x191f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191f2c:
    // 0x191f2c: 0xc066e1a  jal         func_19B868
label_191f30:
    if (ctx->pc == 0x191F30u) {
        ctx->pc = 0x191F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F2Cu;
        // 0x191f30: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F34u;
        goto label_191f34;
    }
    ctx->pc = 0x191F2Cu;
    SET_GPR_U32(ctx, 31, 0x191F34u);
    ctx->pc = 0x191F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F2Cu;
    // 0x191f30: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x191F34u;
label_191f34:
    // 0x191f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x191f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191f38:
    // 0x191f38: 0xc066dcc  jal         func_19B730
label_191f3c:
    if (ctx->pc == 0x191F3Cu) {
        ctx->pc = 0x191F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F38u;
        // 0x191f3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191F40u;
        goto label_191f40;
    }
    ctx->pc = 0x191F38u;
    SET_GPR_U32(ctx, 31, 0x191F40u);
    ctx->pc = 0x191F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F38u;
    // 0x191f3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B730u;
    { ctx->pc = 0x19b730; return; }
    ctx->pc = 0x191F40u;
label_191f40:
    // 0x191f40: 0xc78587fc  lwc1        $f5, -0x7804($gp)
    ctx->pc = 0x191f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_191f44:
    // 0x191f44: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_191f48:
    // 0x191f48: 0xc78387f8  lwc1        $f3, -0x7808($gp)
    ctx->pc = 0x191f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_191f4c:
    // 0x191f4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x191f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_191f50:
    // 0x191f50: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x191f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_191f54:
    // 0x191f54: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x191f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191f58:
    // 0x191f58: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x191f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191f5c:
    // 0x191f5c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_191f60:
    // 0x191f60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x191f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_191f64:
    // 0x191f64: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x191f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_191f68:
    // 0x191f68: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
label_191f6c:
    // 0x191f6c: 0x3443df00  ori         $v1, $v0, 0xDF00
    ctx->pc = 0x191f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
label_191f70:
    // 0x191f70: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_191f74:
    // 0x191f74: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x191f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_191f78:
    // 0x191f78: 0x46042b43  div.s       $f13, $f5, $f4
    ctx->pc = 0x191f78u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[5] * 0.0f); } else ctx->f[13] = ctx->f[5] / ctx->f[4];
label_191f7c:
    // 0x191f7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x191f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_191f80:
    // 0x191f80: 0x46021b83  div.s       $f14, $f3, $f2
    ctx->pc = 0x191f80u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[14] = ctx->f[3] / ctx->f[2];
label_191f84:
    // 0x191f84: 0xc60c00c4  lwc1        $f12, 0xC4($s0)
    ctx->pc = 0x191f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191f88:
    // 0x191f88: 0x46800be0  cvt.s.w     $f15, $f1
    ctx->pc = 0x191f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_191f8c:
    // 0x191f8c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x191f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_191f90:
    // 0x191f90: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x191f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_191f94:
    // 0x191f94: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x191f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_191f98:
    // 0x191f98: 0xc066f7e  jal         func_19BDF8
label_191f9c:
    if (ctx->pc == 0x191F9Cu) {
        ctx->pc = 0x191F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F98u;
        // 0x191f9c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FA0u;
        goto label_191fa0;
    }
    ctx->pc = 0x191F98u;
    SET_GPR_U32(ctx, 31, 0x191FA0u);
    ctx->pc = 0x191F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F98u;
    // 0x191f9c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDF8u;
    { ctx->pc = 0x19bdf8; return; }
    ctx->pc = 0x191FA0u;
label_191fa0:
    // 0x191fa0: 0xc61500c4  lwc1        $f21, 0xC4($s0)
    ctx->pc = 0x191fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_191fa4:
    // 0x191fa4: 0xc066e44  jal         func_19B910
label_191fa8:
    if (ctx->pc == 0x191FA8u) {
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FACu;
        goto label_191fac;
    }
    ctx->pc = 0x191FA4u;
    SET_GPR_U32(ctx, 31, 0x191FACu);
    ctx->pc = 0x191FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FA4u;
    // 0x191fa8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191FACu;
label_191fac:
    // 0x191fac: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x191facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_191fb0:
    // 0x191fb0: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x191fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_191fb4:
    // 0x191fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x191fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191fb8:
    // 0x191fb8: 0x3c024374  lui         $v0, 0x4374
    ctx->pc = 0x191fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17268 << 16));
label_191fbc:
    // 0x191fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191fc0:
    // 0x191fc0: 0x0  nop
    ctx->pc = 0x191fc0u;
    // NOP
label_191fc4:
    // 0x191fc4: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x191fc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
label_191fc8:
    // 0x191fc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_191fcc:
    // 0x191fcc: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x191fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_191fd0:
    // 0x191fd0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x191fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_191fd4:
    // 0x191fd4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_191fd8:
    // 0x191fd8: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x191fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_191fdc:
    // 0x191fdc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x191fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_191fe0:
    // 0x191fe0: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x191fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_191fe4:
    // 0x191fe4: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x191fe4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_191fe8:
    // 0x191fe8: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x191fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_191fec:
    // 0x191fec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x191fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_191ff0:
    // 0x191ff0: 0xc61500c4  lwc1        $f21, 0xC4($s0)
    ctx->pc = 0x191ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_191ff4:
    // 0x191ff4: 0xc066e44  jal         func_19B910
label_191ff8:
    if (ctx->pc == 0x191FF8u) {
        ctx->pc = 0x191FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FF4u;
        // 0x191ff8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191FFCu;
        goto label_191ffc;
    }
    ctx->pc = 0x191FF4u;
    SET_GPR_U32(ctx, 31, 0x191FFCu);
    ctx->pc = 0x191FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FF4u;
    // 0x191ff8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191FFCu;
label_191ffc:
    // 0x191ffc: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x191ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_192000:
    // 0x192000: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_192004:
    // 0x192004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192008:
    // 0x192008: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_19200c:
    // 0x19200c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x19200cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_192010:
    // 0x192010: 0x24639ac0  addiu       $v1, $v1, -0x6540
    ctx->pc = 0x192010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941376));
label_192014:
    // 0x192014: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
label_192018:
    // 0x192018: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x192018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_19201c:
    // 0x19201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192020:
    // 0x192020: 0x0  nop
    ctx->pc = 0x192020u;
    // NOP
label_192024:
    // 0x192024: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x192024u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
label_192028:
    // 0x192028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19202c:
    // 0x19202c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x19202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_192030:
    // 0x192030: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_192034:
    // 0x192034: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x192034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_192038:
    // 0x192038: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x192038u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
label_19203c:
    // 0x19203c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x19203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_192040:
    // 0x192040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192044:
    // 0x192044: 0x0  nop
    ctx->pc = 0x192044u;
    // NOP
label_192048:
    // 0x192048: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x192048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_19204c:
    // 0x19204c: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x19204cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_192050:
    // 0x192050: 0x4600a081  sub.s       $f2, $f20, $f0
    ctx->pc = 0x192050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_192054:
    // 0x192054: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x192054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_192058:
    // 0x192058: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x192058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19205c:
    // 0x19205c: 0x0  nop
    ctx->pc = 0x19205cu;
    // NOP
label_192060:
    // 0x192060: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_192064:
    // 0x192064: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x192064u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[2];
label_192068:
    // 0x192068: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x192068u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_19206c:
    // 0x19206c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x19206cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_192070:
    // 0x192070: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x192070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_192074:
    // 0x192074: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x192074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_192078:
    // 0x192078: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x192078u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_19207c:
    // 0x19207c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_192080:
    // 0x192080: 0xc066d86  jal         func_19B618
label_192084:
    if (ctx->pc == 0x192084u) {
        ctx->pc = 0x192084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192080u;
        // 0x192084: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192088u;
        goto label_192088;
    }
    ctx->pc = 0x192080u;
    SET_GPR_U32(ctx, 31, 0x192088u);
    ctx->pc = 0x192084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192080u;
    // 0x192084: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x192088u;
label_192088:
    // 0x192088: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_19208c:
    // 0x19208c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_192090:
    // 0x192090: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_192094:
    // 0x192094: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_192098:
    // 0x192098: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x192098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_19209c:
    // 0x19209c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x19209cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1920a0:
    // 0x1920a0: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1920a4:
    // 0x1920a4: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1920a8:
    // 0x1920a8: 0xc066d86  jal         func_19B618
label_1920ac:
    if (ctx->pc == 0x1920ACu) {
        ctx->pc = 0x1920ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920A8u;
        // 0x1920ac: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920B0u;
        goto label_1920b0;
    }
    ctx->pc = 0x1920A8u;
    SET_GPR_U32(ctx, 31, 0x1920B0u);
    ctx->pc = 0x1920ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920A8u;
    // 0x1920ac: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x1920B0u;
label_1920b0:
    // 0x1920b0: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x1920b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1920b4:
    // 0x1920b4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1920b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1920b8:
    // 0x1920b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1920bc:
    // 0x1920bc: 0x24639b40  addiu       $v1, $v1, -0x64C0
    ctx->pc = 0x1920bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941504));
label_1920c0:
    // 0x1920c0: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1920c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1920c4:
    // 0x1920c4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1920c8:
    // 0x1920c8: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1920cc:
    // 0x1920cc: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1920d0:
    // 0x1920d0: 0xc066d86  jal         func_19B618
label_1920d4:
    if (ctx->pc == 0x1920D4u) {
        ctx->pc = 0x1920D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920D0u;
        // 0x1920d4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920D8u;
        goto label_1920d8;
    }
    ctx->pc = 0x1920D0u;
    SET_GPR_U32(ctx, 31, 0x1920D8u);
    ctx->pc = 0x1920D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1920D0u;
    // 0x1920d4: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x1920D8u;
label_1920d8:
    // 0x1920d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1920dc:
    // 0x1920dc: 0x267300f0  addiu       $s3, $s3, 0xF0
    ctx->pc = 0x1920dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
label_1920e0:
    // 0x1920e0: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x1920e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1920e4:
    // 0x1920e4: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
label_1920e8:
    if (ctx->pc == 0x1920E8u) {
        ctx->pc = 0x1920E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E4u;
        // 0x1920e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1920ECu;
        goto label_1920ec;
    }
    ctx->pc = 0x1920E4u;
    {
        const bool branch_taken_0x1920e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1920E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920E4u;
        // 0x1920e8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920e4) {
            ctx->pc = 0x191D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191d1c;
        }
    }
    ctx->pc = 0x1920ECu;
label_1920ec:
    // 0x1920ec: 0x0  nop
    ctx->pc = 0x1920ecu;
    // NOP
label_1920f0:
    // 0x1920f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1920f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1920f4:
    // 0x1920f4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1920f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1920f8:
    // 0x1920f8: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x1920f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1920fc:
    // 0x1920fc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1920fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_192100:
    // 0x192100: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x192100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192104:
    // 0x192104: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x192104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_192108:
    // 0x192108: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x192108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19210c:
    // 0x19210c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19210cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_192110:
    // 0x192110: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x192110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192114:
    // 0x192114: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192118:
    // 0x192118: 0x3e00008  jr          $ra
label_19211c:
    if (ctx->pc == 0x19211Cu) {
        ctx->pc = 0x19211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192118u;
        // 0x19211c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192120u;
        goto label_192120;
    }
    ctx->pc = 0x192118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192118u;
        // 0x19211c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192120u;
label_192120:
    // 0x192120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x192120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_192124:
    // 0x192124: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_192128:
    // 0x192128: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x192128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_19212c:
    // 0x19212c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_192130:
    // 0x192130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x192130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192134:
    // 0x192134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_192138:
    // 0x192138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x192138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19213c:
    // 0x19213c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19213cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_192140:
    // 0x192140: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_192144:
    // 0x192144: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_192148:
    // 0x192148: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_19214c:
    // 0x19214c: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x19214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192150:
    // 0x192150: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x192150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192154:
    // 0x192154: 0x0  nop
    ctx->pc = 0x192154u;
    // NOP
label_192158:
    // 0x192158: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x192158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19215c:
    // 0x19215c: 0x0  nop
    ctx->pc = 0x19215cu;
    // NOP
label_192160:
    // 0x192160: 0x4501006f  bc1t        . + 4 + (0x6F << 2)
label_192164:
    if (ctx->pc == 0x192164u) {
        ctx->pc = 0x192168u;
        goto label_192168;
    }
    ctx->pc = 0x192160u;
    {
        const bool branch_taken_0x192160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192160) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x192168u;
label_192168:
    // 0x192168: 0xc08f0cc  jal         func_23C330
label_19216c:
    if (ctx->pc == 0x19216Cu) {
        ctx->pc = 0x192170u;
        goto label_192170;
    }
    ctx->pc = 0x192168u;
    SET_GPR_U32(ctx, 31, 0x192170u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x192170u;
label_192170:
    // 0x192170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192174:
    // 0x192174: 0x0  nop
    ctx->pc = 0x192174u;
    // NOP
label_192178:
    // 0x192178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19217c:
    // 0x19217c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_192180:
    // 0x192180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192184:
    // 0x192184: 0x0  nop
    ctx->pc = 0x192184u;
    // NOP
label_192188:
    // 0x192188: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192188u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_19218c:
    // 0x19218c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_192190:
    // 0x192190: 0x0  nop
    ctx->pc = 0x192190u;
    // NOP
label_192194:
    // 0x192194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192198:
    // 0x192198: 0x0  nop
    ctx->pc = 0x192198u;
    // NOP
label_19219c:
    // 0x19219c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19219cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1921a0:
    // 0x1921a0: 0x0  nop
    ctx->pc = 0x1921a0u;
    // NOP
label_1921a4:
    // 0x1921a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1921a8:
    if (ctx->pc == 0x1921A8u) {
        ctx->pc = 0x1921ACu;
        goto label_1921ac;
    }
    ctx->pc = 0x1921A4u;
    {
        const bool branch_taken_0x1921a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1921a4) {
            ctx->pc = 0x1921C0u;
            goto label_1921c0;
        }
    }
    ctx->pc = 0x1921ACu;
label_1921ac:
    // 0x1921ac: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1921acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1921b0:
    // 0x1921b0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1921b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1921b4:
    // 0x1921b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1921b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1921b8:
    // 0x1921b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1921bc:
    if (ctx->pc == 0x1921BCu) {
        ctx->pc = 0x1921BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921B8u;
        // 0x1921bc: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921C0u;
        goto label_1921c0;
    }
    ctx->pc = 0x1921B8u;
    {
        const bool branch_taken_0x1921b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1921BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921B8u;
        // 0x1921bc: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921b8) {
            ctx->pc = 0x1921D0u;
            goto label_1921d0;
        }
    }
    ctx->pc = 0x1921C0u;
label_1921c0:
    // 0x1921c0: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1921c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1921c4:
    // 0x1921c4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1921c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1921c8:
    // 0x1921c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1921c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1921cc:
    // 0x1921cc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1921ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1921d0:
    // 0x1921d0: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x1921d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1921d4:
    // 0x1921d4: 0xc06d448  jal         func_1B5120
label_1921d8:
    if (ctx->pc == 0x1921D8u) {
        ctx->pc = 0x1921D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921D4u;
        // 0x1921d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921DCu;
        goto label_1921dc;
    }
    ctx->pc = 0x1921D4u;
    SET_GPR_U32(ctx, 31, 0x1921DCu);
    ctx->pc = 0x1921D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921D4u;
    // 0x1921d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1921DCu;
label_1921dc:
    // 0x1921dc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1921dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1921e0:
    // 0x1921e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1921e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1921e4:
    // 0x1921e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1921e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1921e8:
    // 0x1921e8: 0x0  nop
    ctx->pc = 0x1921e8u;
    // NOP
label_1921ec:
    // 0x1921ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1921ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1921f0:
    // 0x1921f0: 0x0  nop
    ctx->pc = 0x1921f0u;
    // NOP
label_1921f4:
    // 0x1921f4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1921f8:
    if (ctx->pc == 0x1921F8u) {
        ctx->pc = 0x1921FCu;
        goto label_1921fc;
    }
    ctx->pc = 0x1921F4u;
    {
        const bool branch_taken_0x1921f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1921f4) {
            ctx->pc = 0x192218u;
            goto label_192218;
        }
    }
    ctx->pc = 0x1921FCu;
label_1921fc:
    // 0x1921fc: 0x0  nop
    ctx->pc = 0x1921fcu;
    // NOP
label_192200:
    // 0x192200: 0x0  nop
    ctx->pc = 0x192200u;
    // NOP
label_192204:
    // 0x192204: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x192204u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_192208:
    // 0x192208: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19220c:
    // 0x19220c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19220cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192210:
    // 0x192210: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_192214:
    // 0x192214: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x192214u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_192218:
    // 0x192218: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x192218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19221c:
    // 0x19221c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192220:
    // 0x192220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192224:
    // 0x192224: 0x0  nop
    ctx->pc = 0x192224u;
    // NOP
label_192228:
    // 0x192228: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x192228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19222c:
    // 0x19222c: 0x0  nop
    ctx->pc = 0x19222cu;
    // NOP
label_192230:
    // 0x192230: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_192234:
    if (ctx->pc == 0x192234u) {
        ctx->pc = 0x192234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192230u;
        // 0x192234: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192238u;
        goto label_192238;
    }
    ctx->pc = 0x192230u;
    {
        const bool branch_taken_0x192230 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192230u;
        // 0x192234: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192230) {
            ctx->pc = 0x192248u;
            goto label_192248;
        }
    }
    ctx->pc = 0x192238u;
label_192238:
    // 0x192238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19223c:
    // 0x19223c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19223cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192240:
    // 0x192240: 0x1000000d  b           . + 4 + (0xD << 2)
label_192244:
    if (ctx->pc == 0x192244u) {
        ctx->pc = 0x192244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192240u;
        // 0x192244: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192248u;
        goto label_192248;
    }
    ctx->pc = 0x192240u;
    {
        const bool branch_taken_0x192240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192240u;
        // 0x192244: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192240) {
            ctx->pc = 0x192278u;
            goto label_192278;
        }
    }
    ctx->pc = 0x192248u;
label_192248:
    // 0x192248: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x192248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19224c:
    // 0x19224c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192250:
    // 0x192250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192254:
    // 0x192254: 0x0  nop
    ctx->pc = 0x192254u;
    // NOP
label_192258:
    // 0x192258: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19225c:
    // 0x19225c: 0x0  nop
    ctx->pc = 0x19225cu;
    // NOP
label_192260:
    // 0x192260: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_192264:
    if (ctx->pc == 0x192264u) {
        ctx->pc = 0x192264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192260u;
        // 0x192264: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192268u;
        goto label_192268;
    }
    ctx->pc = 0x192260u;
    {
        const bool branch_taken_0x192260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192260u;
        // 0x192264: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192260) {
            ctx->pc = 0x192278u;
            goto label_192278;
        }
    }
    ctx->pc = 0x192268u;
label_192268:
    // 0x192268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19226c:
    // 0x19226c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19226cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192270:
    // 0x192270: 0x0  nop
    ctx->pc = 0x192270u;
    // NOP
label_192274:
    // 0x192274: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x192274u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_192278:
    // 0x192278: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x192278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19227c:
    // 0x19227c: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x19227cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_192280:
    // 0x192280: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_192284:
    // 0x192284: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_192288:
    // 0x192288: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_19228c:
    // 0x19228c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_192290:
    // 0x192290: 0xc066e44  jal         func_19B910
label_192294:
    if (ctx->pc == 0x192294u) {
        ctx->pc = 0x192294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192290u;
        // 0x192294: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192298u;
        goto label_192298;
    }
    ctx->pc = 0x192290u;
    SET_GPR_U32(ctx, 31, 0x192298u);
    ctx->pc = 0x192294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192290u;
    // 0x192294: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x192298u;
label_192298:
    // 0x192298: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x192298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19229c:
    // 0x19229c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1922a0:
    // 0x1922a0: 0xc066e6c  jal         func_19B9B0
label_1922a4:
    if (ctx->pc == 0x1922A4u) {
        ctx->pc = 0x1922A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922A0u;
        // 0x1922a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922A8u;
        goto label_1922a8;
    }
    ctx->pc = 0x1922A0u;
    SET_GPR_U32(ctx, 31, 0x1922A8u);
    ctx->pc = 0x1922A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922A0u;
    // 0x1922a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1922A8u;
label_1922a8:
    // 0x1922a8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1922a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1922ac:
    // 0x1922ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1922acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1922b0:
    // 0x1922b0: 0xc066e96  jal         func_19BA58
label_1922b4:
    if (ctx->pc == 0x1922B4u) {
        ctx->pc = 0x1922B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922B0u;
        // 0x1922b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922B8u;
        goto label_1922b8;
    }
    ctx->pc = 0x1922B0u;
    SET_GPR_U32(ctx, 31, 0x1922B8u);
    ctx->pc = 0x1922B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922B0u;
    // 0x1922b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1922B8u;
label_1922b8:
    // 0x1922b8: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1922b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1922bc:
    // 0x1922bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1922bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1922c0:
    // 0x1922c0: 0xc066ec0  jal         func_19BB00
label_1922c4:
    if (ctx->pc == 0x1922C4u) {
        ctx->pc = 0x1922C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922C0u;
        // 0x1922c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922C8u;
        goto label_1922c8;
    }
    ctx->pc = 0x1922C0u;
    SET_GPR_U32(ctx, 31, 0x1922C8u);
    ctx->pc = 0x1922C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922C0u;
    // 0x1922c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1922C8u;
label_1922c8:
    // 0x1922c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1922cc:
    // 0x1922cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1922ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1922d0:
    // 0x1922d0: 0xc066d7a  jal         func_19B5E8
label_1922d4:
    if (ctx->pc == 0x1922D4u) {
        ctx->pc = 0x1922D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922D0u;
        // 0x1922d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922D8u;
        goto label_1922d8;
    }
    ctx->pc = 0x1922D0u;
    SET_GPR_U32(ctx, 31, 0x1922D8u);
    ctx->pc = 0x1922D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922D0u;
    // 0x1922d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1922D8u;
label_1922d8:
    // 0x1922d8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1922d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1922dc:
    // 0x1922dc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1922dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1922e0:
    // 0x1922e0: 0xc066e02  jal         func_19B808
label_1922e4:
    if (ctx->pc == 0x1922E4u) {
        ctx->pc = 0x1922E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922E0u;
        // 0x1922e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1922E8u;
        goto label_1922e8;
    }
    ctx->pc = 0x1922E0u;
    SET_GPR_U32(ctx, 31, 0x1922E8u);
    ctx->pc = 0x1922E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1922E0u;
    // 0x1922e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1922E8u;
label_1922e8:
    // 0x1922e8: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1922e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1922ec:
    // 0x1922ec: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1922ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
label_1922f0:
    // 0x1922f0: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1922f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1922f4:
    // 0x1922f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1922f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1922f8:
    // 0x1922f8: 0x3c0239a4  lui         $v0, 0x39A4
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14756 << 16));
label_1922fc:
    // 0x1922fc: 0x3442b5be  ori         $v0, $v0, 0xB5BE
    ctx->pc = 0x1922fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46526);
label_192300:
    // 0x192300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192304:
    // 0x192304: 0x0  nop
    ctx->pc = 0x192304u;
    // NOP
label_192308:
    // 0x192308: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x192308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_19230c:
    // 0x19230c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19230cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192310:
    // 0x192310: 0x0  nop
    ctx->pc = 0x192310u;
    // NOP
label_192314:
    // 0x192314: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_192318:
    if (ctx->pc == 0x192318u) {
        ctx->pc = 0x192318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192314u;
        // 0x192318: 0xe60100c8  swc1        $f1, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19231Cu;
        goto label_19231c;
    }
    ctx->pc = 0x192314u;
    {
        const bool branch_taken_0x192314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192314u;
        // 0x192318: 0xe60100c8  swc1        $f1, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192314) {
            ctx->pc = 0x192320u;
            goto label_192320;
        }
    }
    ctx->pc = 0x19231Cu;
label_19231c:
    // 0x19231c: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x19231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_192320:
    // 0x192320: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x192320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_192324:
    // 0x192324: 0xc066e26  jal         func_19B898
label_192328:
    if (ctx->pc == 0x192328u) {
        ctx->pc = 0x192328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192324u;
        // 0x192328: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19232Cu;
        goto label_19232c;
    }
    ctx->pc = 0x192324u;
    SET_GPR_U32(ctx, 31, 0x19232Cu);
    ctx->pc = 0x192328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192324u;
    // 0x192328: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19232Cu;
label_19232c:
    // 0x19232c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x19232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_192330:
    // 0x192330: 0xc066e26  jal         func_19B898
label_192334:
    if (ctx->pc == 0x192334u) {
        ctx->pc = 0x192334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192330u;
        // 0x192334: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192338u;
        goto label_192338;
    }
    ctx->pc = 0x192330u;
    SET_GPR_U32(ctx, 31, 0x192338u);
    ctx->pc = 0x192334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192330u;
    // 0x192334: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192338u;
label_192338:
    // 0x192338: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x192338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19233c:
    // 0x19233c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x19233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_192340:
    // 0x192340: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_192344:
    if (ctx->pc == 0x192344u) {
        ctx->pc = 0x192348u;
        goto label_192348;
    }
    ctx->pc = 0x192340u;
    {
        const bool branch_taken_0x192340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192340) {
            ctx->pc = 0x1923B0u;
            { ctx->pc = 0x1923b0; return; }
        }
    }
    ctx->pc = 0x192348u;
label_192348:
    // 0x192348: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x192348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_19234c:
    // 0x19234c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_192350:
    if (ctx->pc == 0x192350u) {
        ctx->pc = 0x192354u;
        goto label_192354;
    }
    ctx->pc = 0x19234Cu;
    {
        const bool branch_taken_0x19234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19234c) {
            ctx->pc = 0x1923B0u;
            { ctx->pc = 0x1923b0; return; }
        }
    }
    ctx->pc = 0x192354u;
label_192354:
    // 0x192354: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x192354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_192358:
    // 0x192358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19235c:
    // 0x19235c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x19235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_192360:
    // 0x192360: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_192364:
    if (ctx->pc == 0x192364u) {
        ctx->pc = 0x192368u;
        goto label_192368;
    }
    ctx->pc = 0x192360u;
    {
        const bool branch_taken_0x192360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x192360) {
            ctx->pc = 0x1923A8u;
            { ctx->pc = 0x1923a8; return; }
        }
    }
    ctx->pc = 0x192368u;
label_192368:
    // 0x192368: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x192368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19236c:
    // 0x19236c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x19236cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_192370:
    // 0x192370: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x192370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_192374:
    // 0x192374: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_192378:
    if (ctx->pc == 0x192378u) {
        ctx->pc = 0x19237Cu;
        goto label_19237c;
    }
    ctx->pc = 0x192374u;
    {
        const bool branch_taken_0x192374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192374) {
            ctx->pc = 0x192384u;
            { ctx->pc = 0x192384; return; }
        }
    }
    ctx->pc = 0x19237Cu;
label_19237c:
    // 0x19237c: 0xc0641a4  jal         func_190690
    ctx->pc = 0x192380u;
    return;
}
