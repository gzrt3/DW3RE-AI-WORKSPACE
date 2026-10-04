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


void FUN_0019b618_part350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x245ca8u: goto label_245ca8;
        case 0x245cacu: goto label_245cac;
        case 0x245cb0u: goto label_245cb0;
        case 0x245cb4u: goto label_245cb4;
        case 0x245cb8u: goto label_245cb8;
        case 0x245cbcu: goto label_245cbc;
        case 0x245cc0u: goto label_245cc0;
        case 0x245cc4u: goto label_245cc4;
        case 0x245cc8u: goto label_245cc8;
        case 0x245cccu: goto label_245ccc;
        case 0x245cd0u: goto label_245cd0;
        case 0x245cd4u: goto label_245cd4;
        case 0x245cd8u: goto label_245cd8;
        case 0x245cdcu: goto label_245cdc;
        case 0x245ce0u: goto label_245ce0;
        case 0x245ce4u: goto label_245ce4;
        case 0x245ce8u: goto label_245ce8;
        case 0x245cecu: goto label_245cec;
        case 0x245cf0u: goto label_245cf0;
        case 0x245cf4u: goto label_245cf4;
        case 0x245cf8u: goto label_245cf8;
        case 0x245cfcu: goto label_245cfc;
        case 0x245d00u: goto label_245d00;
        case 0x245d04u: goto label_245d04;
        case 0x245d08u: goto label_245d08;
        case 0x245d0cu: goto label_245d0c;
        case 0x245d10u: goto label_245d10;
        case 0x245d14u: goto label_245d14;
        case 0x245d18u: goto label_245d18;
        case 0x245d1cu: goto label_245d1c;
        case 0x245d20u: goto label_245d20;
        case 0x245d24u: goto label_245d24;
        case 0x245d28u: goto label_245d28;
        case 0x245d2cu: goto label_245d2c;
        case 0x245d30u: goto label_245d30;
        case 0x245d34u: goto label_245d34;
        case 0x245d38u: goto label_245d38;
        case 0x245d3cu: goto label_245d3c;
        case 0x245d40u: goto label_245d40;
        case 0x245d44u: goto label_245d44;
        case 0x245d48u: goto label_245d48;
        case 0x245d4cu: goto label_245d4c;
        case 0x245d50u: goto label_245d50;
        case 0x245d54u: goto label_245d54;
        case 0x245d58u: goto label_245d58;
        case 0x245d5cu: goto label_245d5c;
        case 0x245d60u: goto label_245d60;
        case 0x245d64u: goto label_245d64;
        case 0x245d68u: goto label_245d68;
        case 0x245d6cu: goto label_245d6c;
        case 0x245d70u: goto label_245d70;
        case 0x245d74u: goto label_245d74;
        case 0x245d78u: goto label_245d78;
        case 0x245d7cu: goto label_245d7c;
        case 0x245d80u: goto label_245d80;
        case 0x245d84u: goto label_245d84;
        case 0x245d88u: goto label_245d88;
        case 0x245d8cu: goto label_245d8c;
        case 0x245d90u: goto label_245d90;
        case 0x245d94u: goto label_245d94;
        case 0x245d98u: goto label_245d98;
        case 0x245d9cu: goto label_245d9c;
        case 0x245da0u: goto label_245da0;
        case 0x245da4u: goto label_245da4;
        case 0x245da8u: goto label_245da8;
        case 0x245dacu: goto label_245dac;
        case 0x245db0u: goto label_245db0;
        case 0x245db4u: goto label_245db4;
        case 0x245db8u: goto label_245db8;
        case 0x245dbcu: goto label_245dbc;
        case 0x245dc0u: goto label_245dc0;
        case 0x245dc4u: goto label_245dc4;
        case 0x245dc8u: goto label_245dc8;
        case 0x245dccu: goto label_245dcc;
        case 0x245dd0u: goto label_245dd0;
        case 0x245dd4u: goto label_245dd4;
        case 0x245dd8u: goto label_245dd8;
        case 0x245ddcu: goto label_245ddc;
        case 0x245de0u: goto label_245de0;
        case 0x245de4u: goto label_245de4;
        case 0x245de8u: goto label_245de8;
        case 0x245decu: goto label_245dec;
        case 0x245df0u: goto label_245df0;
        case 0x245df4u: goto label_245df4;
        case 0x245df8u: goto label_245df8;
        case 0x245dfcu: goto label_245dfc;
        case 0x245e00u: goto label_245e00;
        case 0x245e04u: goto label_245e04;
        case 0x245e08u: goto label_245e08;
        case 0x245e0cu: goto label_245e0c;
        case 0x245e10u: goto label_245e10;
        case 0x245e14u: goto label_245e14;
        case 0x245e18u: goto label_245e18;
        case 0x245e1cu: goto label_245e1c;
        case 0x245e20u: goto label_245e20;
        case 0x245e24u: goto label_245e24;
        case 0x245e28u: goto label_245e28;
        case 0x245e2cu: goto label_245e2c;
        case 0x245e30u: goto label_245e30;
        case 0x245e34u: goto label_245e34;
        case 0x245e38u: goto label_245e38;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e40u: goto label_245e40;
        case 0x245e44u: goto label_245e44;
        case 0x245e48u: goto label_245e48;
        case 0x245e4cu: goto label_245e4c;
        case 0x245e50u: goto label_245e50;
        case 0x245e54u: goto label_245e54;
        case 0x245e58u: goto label_245e58;
        case 0x245e5cu: goto label_245e5c;
        case 0x245e60u: goto label_245e60;
        case 0x245e64u: goto label_245e64;
        case 0x245e68u: goto label_245e68;
        case 0x245e6cu: goto label_245e6c;
        case 0x245e70u: goto label_245e70;
        case 0x245e74u: goto label_245e74;
        case 0x245e78u: goto label_245e78;
        case 0x245e7cu: goto label_245e7c;
        case 0x245e80u: goto label_245e80;
        case 0x245e84u: goto label_245e84;
        case 0x245e88u: goto label_245e88;
        case 0x245e8cu: goto label_245e8c;
        case 0x245e90u: goto label_245e90;
        case 0x245e94u: goto label_245e94;
        case 0x245e98u: goto label_245e98;
        case 0x245e9cu: goto label_245e9c;
        case 0x245ea0u: goto label_245ea0;
        case 0x245ea4u: goto label_245ea4;
        case 0x245ea8u: goto label_245ea8;
        case 0x245eacu: goto label_245eac;
        case 0x245eb0u: goto label_245eb0;
        case 0x245eb4u: goto label_245eb4;
        case 0x245eb8u: goto label_245eb8;
        case 0x245ebcu: goto label_245ebc;
        case 0x245ec0u: goto label_245ec0;
        case 0x245ec4u: goto label_245ec4;
        case 0x245ec8u: goto label_245ec8;
        case 0x245eccu: goto label_245ecc;
        case 0x245ed0u: goto label_245ed0;
        case 0x245ed4u: goto label_245ed4;
        case 0x245ed8u: goto label_245ed8;
        case 0x245edcu: goto label_245edc;
        case 0x245ee0u: goto label_245ee0;
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        case 0x245eecu: goto label_245eec;
        case 0x245ef0u: goto label_245ef0;
        case 0x245ef4u: goto label_245ef4;
        case 0x245ef8u: goto label_245ef8;
        case 0x245efcu: goto label_245efc;
        case 0x245f00u: goto label_245f00;
        case 0x245f04u: goto label_245f04;
        case 0x245f08u: goto label_245f08;
        case 0x245f0cu: goto label_245f0c;
        case 0x245f10u: goto label_245f10;
        case 0x245f14u: goto label_245f14;
        case 0x245f18u: goto label_245f18;
        case 0x245f1cu: goto label_245f1c;
        case 0x245f20u: goto label_245f20;
        case 0x245f24u: goto label_245f24;
        case 0x245f28u: goto label_245f28;
        case 0x245f2cu: goto label_245f2c;
        case 0x245f30u: goto label_245f30;
        case 0x245f34u: goto label_245f34;
        case 0x245f38u: goto label_245f38;
        case 0x245f3cu: goto label_245f3c;
        case 0x245f40u: goto label_245f40;
        case 0x245f44u: goto label_245f44;
        case 0x245f48u: goto label_245f48;
        case 0x245f4cu: goto label_245f4c;
        case 0x245f50u: goto label_245f50;
        case 0x245f54u: goto label_245f54;
        case 0x245f58u: goto label_245f58;
        case 0x245f5cu: goto label_245f5c;
        case 0x245f60u: goto label_245f60;
        case 0x245f64u: goto label_245f64;
        case 0x245f68u: goto label_245f68;
        case 0x245f6cu: goto label_245f6c;
        case 0x245f70u: goto label_245f70;
        case 0x245f74u: goto label_245f74;
        case 0x245f78u: goto label_245f78;
        case 0x245f7cu: goto label_245f7c;
        case 0x245f80u: goto label_245f80;
        case 0x245f84u: goto label_245f84;
        case 0x245f88u: goto label_245f88;
        case 0x245f8cu: goto label_245f8c;
        case 0x245f90u: goto label_245f90;
        case 0x245f94u: goto label_245f94;
        case 0x245f98u: goto label_245f98;
        case 0x245f9cu: goto label_245f9c;
        case 0x245fa0u: goto label_245fa0;
        case 0x245fa4u: goto label_245fa4;
        case 0x245fa8u: goto label_245fa8;
        case 0x245facu: goto label_245fac;
        case 0x245fb0u: goto label_245fb0;
        case 0x245fb4u: goto label_245fb4;
        case 0x245fb8u: goto label_245fb8;
        case 0x245fbcu: goto label_245fbc;
        case 0x245fc0u: goto label_245fc0;
        case 0x245fc4u: goto label_245fc4;
        case 0x245fc8u: goto label_245fc8;
        case 0x245fccu: goto label_245fcc;
        case 0x245fd0u: goto label_245fd0;
        case 0x245fd4u: goto label_245fd4;
        case 0x245fd8u: goto label_245fd8;
        case 0x245fdcu: goto label_245fdc;
        case 0x245fe0u: goto label_245fe0;
        case 0x245fe4u: goto label_245fe4;
        case 0x245fe8u: goto label_245fe8;
        case 0x245fecu: goto label_245fec;
        case 0x245ff0u: goto label_245ff0;
        case 0x245ff4u: goto label_245ff4;
        case 0x245ff8u: goto label_245ff8;
        case 0x245ffcu: goto label_245ffc;
        case 0x246000u: goto label_246000;
        case 0x246004u: goto label_246004;
        case 0x246008u: goto label_246008;
        case 0x24600cu: goto label_24600c;
        case 0x246010u: goto label_246010;
        case 0x246014u: goto label_246014;
        case 0x246018u: goto label_246018;
        case 0x24601cu: goto label_24601c;
        case 0x246020u: goto label_246020;
        case 0x246024u: goto label_246024;
        case 0x246028u: goto label_246028;
        case 0x24602cu: goto label_24602c;
        case 0x246030u: goto label_246030;
        case 0x246034u: goto label_246034;
        case 0x246038u: goto label_246038;
        case 0x24603cu: goto label_24603c;
        case 0x246040u: goto label_246040;
        case 0x246044u: goto label_246044;
        case 0x246048u: goto label_246048;
        case 0x24604cu: goto label_24604c;
        case 0x246050u: goto label_246050;
        case 0x246054u: goto label_246054;
        case 0x246058u: goto label_246058;
        case 0x24605cu: goto label_24605c;
        case 0x246060u: goto label_246060;
        case 0x246064u: goto label_246064;
        case 0x246068u: goto label_246068;
        case 0x24606cu: goto label_24606c;
        case 0x246070u: goto label_246070;
        case 0x246074u: goto label_246074;
        case 0x246078u: goto label_246078;
        case 0x24607cu: goto label_24607c;
        case 0x246080u: goto label_246080;
        case 0x246084u: goto label_246084;
        case 0x246088u: goto label_246088;
        case 0x24608cu: goto label_24608c;
        case 0x246090u: goto label_246090;
        case 0x246094u: goto label_246094;
        case 0x246098u: goto label_246098;
        case 0x24609cu: goto label_24609c;
        case 0x2460a0u: goto label_2460a0;
        case 0x2460a4u: goto label_2460a4;
        case 0x2460a8u: goto label_2460a8;
        case 0x2460acu: goto label_2460ac;
        case 0x2460b0u: goto label_2460b0;
        case 0x2460b4u: goto label_2460b4;
        case 0x2460b8u: goto label_2460b8;
        case 0x2460bcu: goto label_2460bc;
        case 0x2460c0u: goto label_2460c0;
        case 0x2460c4u: goto label_2460c4;
        case 0x2460c8u: goto label_2460c8;
        case 0x2460ccu: goto label_2460cc;
        case 0x2460d0u: goto label_2460d0;
        case 0x2460d4u: goto label_2460d4;
        case 0x2460d8u: goto label_2460d8;
        case 0x2460dcu: goto label_2460dc;
        case 0x2460e0u: goto label_2460e0;
        case 0x2460e4u: goto label_2460e4;
        case 0x2460e8u: goto label_2460e8;
        case 0x2460ecu: goto label_2460ec;
        case 0x2460f0u: goto label_2460f0;
        case 0x2460f4u: goto label_2460f4;
        case 0x2460f8u: goto label_2460f8;
        case 0x2460fcu: goto label_2460fc;
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        case 0x2461a0u: goto label_2461a0;
        case 0x2461a4u: goto label_2461a4;
        case 0x2461a8u: goto label_2461a8;
        case 0x2461acu: goto label_2461ac;
        case 0x2461b0u: goto label_2461b0;
        case 0x2461b4u: goto label_2461b4;
        case 0x2461b8u: goto label_2461b8;
        case 0x2461bcu: goto label_2461bc;
        case 0x2461c0u: goto label_2461c0;
        case 0x2461c4u: goto label_2461c4;
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        case 0x2461d0u: goto label_2461d0;
        case 0x2461d4u: goto label_2461d4;
        case 0x2461d8u: goto label_2461d8;
        case 0x2461dcu: goto label_2461dc;
        case 0x2461e0u: goto label_2461e0;
        case 0x2461e4u: goto label_2461e4;
        case 0x2461e8u: goto label_2461e8;
        case 0x2461ecu: goto label_2461ec;
        case 0x2461f0u: goto label_2461f0;
        case 0x2461f4u: goto label_2461f4;
        case 0x2461f8u: goto label_2461f8;
        case 0x2461fcu: goto label_2461fc;
        case 0x246200u: goto label_246200;
        case 0x246204u: goto label_246204;
        case 0x246208u: goto label_246208;
        case 0x24620cu: goto label_24620c;
        case 0x246210u: goto label_246210;
        case 0x246214u: goto label_246214;
        case 0x246218u: goto label_246218;
        case 0x24621cu: goto label_24621c;
        case 0x246220u: goto label_246220;
        case 0x246224u: goto label_246224;
        case 0x246228u: goto label_246228;
        case 0x24622cu: goto label_24622c;
        case 0x246230u: goto label_246230;
        case 0x246234u: goto label_246234;
        case 0x246238u: goto label_246238;
        case 0x24623cu: goto label_24623c;
        case 0x246240u: goto label_246240;
        case 0x246244u: goto label_246244;
        case 0x246248u: goto label_246248;
        case 0x24624cu: goto label_24624c;
        case 0x246250u: goto label_246250;
        case 0x246254u: goto label_246254;
        case 0x246258u: goto label_246258;
        case 0x24625cu: goto label_24625c;
        case 0x246260u: goto label_246260;
        case 0x246264u: goto label_246264;
        case 0x246268u: goto label_246268;
        case 0x24626cu: goto label_24626c;
        case 0x246270u: goto label_246270;
        case 0x246274u: goto label_246274;
        case 0x246278u: goto label_246278;
        case 0x24627cu: goto label_24627c;
        case 0x246280u: goto label_246280;
        case 0x246284u: goto label_246284;
        case 0x246288u: goto label_246288;
        case 0x24628cu: goto label_24628c;
        case 0x246290u: goto label_246290;
        case 0x246294u: goto label_246294;
        case 0x246298u: goto label_246298;
        case 0x24629cu: goto label_24629c;
        case 0x2462a0u: goto label_2462a0;
        case 0x2462a4u: goto label_2462a4;
        case 0x2462a8u: goto label_2462a8;
        case 0x2462acu: goto label_2462ac;
        case 0x2462b0u: goto label_2462b0;
        case 0x2462b4u: goto label_2462b4;
        case 0x2462b8u: goto label_2462b8;
        case 0x2462bcu: goto label_2462bc;
        case 0x2462c0u: goto label_2462c0;
        case 0x2462c4u: goto label_2462c4;
        case 0x2462c8u: goto label_2462c8;
        case 0x2462ccu: goto label_2462cc;
        case 0x2462d0u: goto label_2462d0;
        case 0x2462d4u: goto label_2462d4;
        case 0x2462d8u: goto label_2462d8;
        case 0x2462dcu: goto label_2462dc;
        case 0x2462e0u: goto label_2462e0;
        case 0x2462e4u: goto label_2462e4;
        case 0x2462e8u: goto label_2462e8;
        case 0x2462ecu: goto label_2462ec;
        case 0x2462f0u: goto label_2462f0;
        case 0x2462f4u: goto label_2462f4;
        case 0x2462f8u: goto label_2462f8;
        case 0x2462fcu: goto label_2462fc;
        case 0x246300u: goto label_246300;
        case 0x246304u: goto label_246304;
        case 0x246308u: goto label_246308;
        case 0x24630cu: goto label_24630c;
        case 0x246310u: goto label_246310;
        case 0x246314u: goto label_246314;
        case 0x246318u: goto label_246318;
        case 0x24631cu: goto label_24631c;
        case 0x246320u: goto label_246320;
        case 0x246324u: goto label_246324;
        case 0x246328u: goto label_246328;
        case 0x24632cu: goto label_24632c;
        case 0x246330u: goto label_246330;
        case 0x246334u: goto label_246334;
        case 0x246338u: goto label_246338;
        case 0x24633cu: goto label_24633c;
        case 0x246340u: goto label_246340;
        case 0x246344u: goto label_246344;
        case 0x246348u: goto label_246348;
        case 0x24634cu: goto label_24634c;
        case 0x246350u: goto label_246350;
        case 0x246354u: goto label_246354;
        case 0x246358u: goto label_246358;
        case 0x24635cu: goto label_24635c;
        case 0x246360u: goto label_246360;
        case 0x246364u: goto label_246364;
        case 0x246368u: goto label_246368;
        case 0x24636cu: goto label_24636c;
        case 0x246370u: goto label_246370;
        case 0x246374u: goto label_246374;
        case 0x246378u: goto label_246378;
        case 0x24637cu: goto label_24637c;
        case 0x246380u: goto label_246380;
        case 0x246384u: goto label_246384;
        case 0x246388u: goto label_246388;
        case 0x24638cu: goto label_24638c;
        case 0x246390u: goto label_246390;
        case 0x246394u: goto label_246394;
        case 0x246398u: goto label_246398;
        case 0x24639cu: goto label_24639c;
        case 0x2463a0u: goto label_2463a0;
        case 0x2463a4u: goto label_2463a4;
        case 0x2463a8u: goto label_2463a8;
        case 0x2463acu: goto label_2463ac;
        case 0x2463b0u: goto label_2463b0;
        case 0x2463b4u: goto label_2463b4;
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        default: return;
    }

label_245ca8:
    // 0x245ca8: 0x30e50020  andi        $a1, $a3, 0x20
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_245cac:
    // 0x245cac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_245cb0:
    if (ctx->pc == 0x245CB0u) {
        ctx->pc = 0x245CB4u;
        goto label_245cb4;
    }
    ctx->pc = 0x245CACu;
    {
        const bool branch_taken_0x245cac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x245cac) {
            ctx->pc = 0x245CC8u;
            goto label_245cc8;
        }
    }
    ctx->pc = 0x245CB4u;
label_245cb4:
    // 0x245cb4: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_245cb8:
    // 0x245cb8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_245cbc:
    if (ctx->pc == 0x245CBCu) {
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0x30e50080  andi        $a1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245CC0u;
        goto label_245cc0;
    }
    ctx->pc = 0x245CB8u;
    {
        const bool branch_taken_0x245cb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x245CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CB8u;
        // 0x245cbc: 0x30e50080  andi        $a1, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cb8) {
            ctx->pc = 0x245CC8u;
            goto label_245cc8;
        }
    }
    ctx->pc = 0x245CC0u;
label_245cc0:
    // 0x245cc0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_245cc4:
    if (ctx->pc == 0x245CC4u) {
        ctx->pc = 0x245CC8u;
        goto label_245cc8;
    }
    ctx->pc = 0x245CC0u;
    {
        const bool branch_taken_0x245cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245cc0) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CC8u;
label_245cc8:
    // 0x245cc8: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245ccc:
    // 0x245ccc: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x245cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_245cd0:
    // 0x245cd0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245cd4:
    // 0x245cd4: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x245cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_245cd8:
    // 0x245cd8: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x245cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_245cdc:
    // 0x245cdc: 0x9025eb07  lbu         $a1, -0x14F9($at)
    ctx->pc = 0x245cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961927)));
label_245ce0:
    // 0x245ce0: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x245ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
label_245ce4:
    // 0x245ce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x245ce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_245ce8:
    // 0x245ce8: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
label_245cec:
    if (ctx->pc == 0x245CECu) {
        ctx->pc = 0x245CF0u;
        goto label_245cf0;
    }
    ctx->pc = 0x245CE8u;
    {
        const bool branch_taken_0x245ce8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x245ce8) {
            ctx->pc = 0x245D18u;
            goto label_245d18;
        }
    }
    ctx->pc = 0x245CF0u;
label_245cf0:
    // 0x245cf0: 0x8465000e  lh          $a1, 0xE($v1)
    ctx->pc = 0x245cf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245cf4:
    // 0x245cf4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_245cf8:
    // 0x245cf8: 0x28a10064  slti        $at, $a1, 0x64
    ctx->pc = 0x245cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
label_245cfc:
    // 0x245cfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d00:
    if (ctx->pc == 0x245D00u) {
        ctx->pc = 0x245D04u;
        goto label_245d04;
    }
    ctx->pc = 0x245CFCu;
    {
        const bool branch_taken_0x245cfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245cfc) {
            ctx->pc = 0x245D0Cu;
            goto label_245d0c;
        }
    }
    ctx->pc = 0x245D04u;
label_245d04:
    // 0x245d04: 0x10000003  b           . + 4 + (0x3 << 2)
label_245d08:
    if (ctx->pc == 0x245D08u) {
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0xa465000e  sh          $a1, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D0Cu;
        goto label_245d0c;
    }
    ctx->pc = 0x245D04u;
    {
        const bool branch_taken_0x245d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D04u;
        // 0x245d08: 0xa465000e  sh          $a1, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d04) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245D0Cu;
label_245d0c:
    // 0x245d0c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x245d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245d10:
    // 0x245d10: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x245d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
label_245d14:
    // 0x245d14: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x245d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_245d18:
    // 0x245d18: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_245d1c:
    // 0x245d1c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x245d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_245d20:
    // 0x245d20: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x245d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245d24:
    // 0x245d24: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_245d28:
    if (ctx->pc == 0x245D28u) {
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0x30c50008  andi        $a1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D2Cu;
        goto label_245d2c;
    }
    ctx->pc = 0x245D24u;
    {
        const bool branch_taken_0x245d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D24u;
        // 0x245d28: 0x30c50008  andi        $a1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d24) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D2Cu;
label_245d2c:
    // 0x245d2c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x245d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245d30:
    // 0x245d30: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x245d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_245d34:
    // 0x245d34: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x245d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245d38:
    // 0x245d38: 0x148004bd  bnez        $a0, . + 4 + (0x4BD << 2)
label_245d3c:
    if (ctx->pc == 0x245D3Cu) {
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D40u;
        goto label_245d40;
    }
    ctx->pc = 0x245D38u;
    {
        const bool branch_taken_0x245d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D38u;
        // 0x245d3c: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d38) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x245d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_245d44:
    // 0x245d44: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x245d44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245d48:
    // 0x245d48: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x245d48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_245d4c:
    // 0x245d4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d50:
    if (ctx->pc == 0x245D50u) {
        ctx->pc = 0x245D54u;
        goto label_245d54;
    }
    ctx->pc = 0x245D4Cu;
    {
        const bool branch_taken_0x245d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d4c) {
            ctx->pc = 0x245D5Cu;
            goto label_245d5c;
        }
    }
    ctx->pc = 0x245D54u;
label_245d54:
    // 0x245d54: 0x10000005  b           . + 4 + (0x5 << 2)
label_245d58:
    if (ctx->pc == 0x245D58u) {
        ctx->pc = 0x245D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D54u;
        // 0x245d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D5Cu;
        goto label_245d5c;
    }
    ctx->pc = 0x245D54u;
    {
        const bool branch_taken_0x245d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D54u;
        // 0x245d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d54) {
            ctx->pc = 0x245D6Cu;
            goto label_245d6c;
        }
    }
    ctx->pc = 0x245D5Cu;
label_245d5c:
    // 0x245d5c: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x245d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_245d60:
    // 0x245d60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245d64:
    // 0x245d64: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245d68:
    // 0x245d68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245d68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245d6c:
    // 0x245d6c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x245d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_245d70:
    // 0x245d70: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245d74:
    // 0x245d74: 0x9024eb02  lbu         $a0, -0x14FE($at)
    ctx->pc = 0x245d74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961922)));
label_245d78:
    // 0x245d78: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x245d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_245d7c:
    // 0x245d7c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245d7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245d80:
    // 0x245d80: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245d84:
    // 0x245d84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245d84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245d88:
    // 0x245d88: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245d8c:
    // 0x245d8c: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x245d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_245d90:
    // 0x245d90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245d94:
    if (ctx->pc == 0x245D94u) {
        ctx->pc = 0x245D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D90u;
        // 0x245d94: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245D98u;
        goto label_245d98;
    }
    ctx->pc = 0x245D90u;
    {
        const bool branch_taken_0x245d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D90u;
        // 0x245d94: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d90) {
            ctx->pc = 0x245DA0u;
            goto label_245da0;
        }
    }
    ctx->pc = 0x245D98u;
label_245d98:
    // 0x245d98: 0x10000003  b           . + 4 + (0x3 << 2)
label_245d9c:
    if (ctx->pc == 0x245D9Cu) {
        ctx->pc = 0x245D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D98u;
        // 0x245d9c: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DA0u;
        goto label_245da0;
    }
    ctx->pc = 0x245D98u;
    {
        const bool branch_taken_0x245d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D98u;
        // 0x245d9c: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d98) {
            ctx->pc = 0x245DA8u;
            goto label_245da8;
        }
    }
    ctx->pc = 0x245DA0u;
label_245da0:
    // 0x245da0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x245da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_245da4:
    // 0x245da4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x245da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_245da8:
    // 0x245da8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245dac:
    // 0x245dac: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x245dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_245db0:
    // 0x245db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245db4:
    if (ctx->pc == 0x245DB4u) {
        ctx->pc = 0x245DB8u;
        goto label_245db8;
    }
    ctx->pc = 0x245DB0u;
    {
        const bool branch_taken_0x245db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245db0) {
            ctx->pc = 0x245DC0u;
            goto label_245dc0;
        }
    }
    ctx->pc = 0x245DB8u;
label_245db8:
    // 0x245db8: 0x10000005  b           . + 4 + (0x5 << 2)
label_245dbc:
    if (ctx->pc == 0x245DBCu) {
        ctx->pc = 0x245DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB8u;
        // 0x245dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245DC0u;
        goto label_245dc0;
    }
    ctx->pc = 0x245DB8u;
    {
        const bool branch_taken_0x245db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245DB8u;
        // 0x245dbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245db8) {
            ctx->pc = 0x245DD0u;
            goto label_245dd0;
        }
    }
    ctx->pc = 0x245DC0u;
label_245dc0:
    // 0x245dc0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x245dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_245dc4:
    // 0x245dc4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245dc8:
    // 0x245dc8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245dcc:
    // 0x245dcc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245dccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245dd0:
    // 0x245dd0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245dd4:
    // 0x245dd4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x245dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_245dd8:
    // 0x245dd8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245dd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245ddc:
    // 0x245ddc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ddcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245de0:
    // 0x245de0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245de4:
    // 0x245de4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245de8:
    // 0x245de8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245de8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245dec:
    // 0x245dec: 0x18a00490  blez        $a1, . + 4 + (0x490 << 2)
label_245df0:
    if (ctx->pc == 0x245DF0u) {
        ctx->pc = 0x245DF4u;
        goto label_245df4;
    }
    ctx->pc = 0x245DECu;
    {
        const bool branch_taken_0x245dec = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x245dec) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245DF4u;
label_245df4:
    // 0x245df4: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245df8:
    // 0x245df8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_245dfc:
    // 0x245dfc: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x245dfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_245e00:
    // 0x245e00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e04:
    if (ctx->pc == 0x245E04u) {
        ctx->pc = 0x245E08u;
        goto label_245e08;
    }
    ctx->pc = 0x245E00u;
    {
        const bool branch_taken_0x245e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e00) {
            ctx->pc = 0x245E10u;
            goto label_245e10;
        }
    }
    ctx->pc = 0x245E08u;
label_245e08:
    // 0x245e08: 0x10000003  b           . + 4 + (0x3 << 2)
label_245e0c:
    if (ctx->pc == 0x245E0Cu) {
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E10u;
        goto label_245e10;
    }
    ctx->pc = 0x245E08u;
    {
        const bool branch_taken_0x245e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E08u;
        // 0x245e0c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e08) {
            ctx->pc = 0x245E18u;
            goto label_245e18;
        }
    }
    ctx->pc = 0x245E10u;
label_245e10:
    // 0x245e10: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245e14:
    // 0x245e14: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x245e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_245e18:
    // 0x245e18: 0x10000485  b           . + 4 + (0x485 << 2)
label_245e1c:
    if (ctx->pc == 0x245E1Cu) {
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E20u;
        goto label_245e20;
    }
    ctx->pc = 0x245E18u;
    {
        const bool branch_taken_0x245e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E18u;
        // 0x245e1c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e18) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_245e24:
    if (ctx->pc == 0x245E24u) {
        ctx->pc = 0x245E28u;
        goto label_245e28;
    }
    ctx->pc = 0x245E20u;
    {
        const bool branch_taken_0x245e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e20) {
            ctx->pc = 0x245F1Cu;
            goto label_245f1c;
        }
    }
    ctx->pc = 0x245E28u;
label_245e28:
    // 0x245e28: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x245e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245e2c:
    // 0x245e2c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x245e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_245e30:
    // 0x245e30: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x245e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245e34:
    // 0x245e34: 0x1480047e  bnez        $a0, . + 4 + (0x47E << 2)
label_245e38:
    if (ctx->pc == 0x245E38u) {
        ctx->pc = 0x245E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E34u;
        // 0x245e38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E3Cu;
        goto label_245e3c;
    }
    ctx->pc = 0x245E34u;
    {
        const bool branch_taken_0x245e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E34u;
        // 0x245e38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e34) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245E3Cu;
label_245e3c:
    // 0x245e3c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x245e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_245e40:
    // 0x245e40: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x245e40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245e44:
    // 0x245e44: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x245e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_245e48:
    // 0x245e48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e4c:
    if (ctx->pc == 0x245E4Cu) {
        ctx->pc = 0x245E50u;
        goto label_245e50;
    }
    ctx->pc = 0x245E48u;
    {
        const bool branch_taken_0x245e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e48) {
            ctx->pc = 0x245E58u;
            goto label_245e58;
        }
    }
    ctx->pc = 0x245E50u;
label_245e50:
    // 0x245e50: 0x10000005  b           . + 4 + (0x5 << 2)
label_245e54:
    if (ctx->pc == 0x245E54u) {
        ctx->pc = 0x245E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E50u;
        // 0x245e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E58u;
        goto label_245e58;
    }
    ctx->pc = 0x245E50u;
    {
        const bool branch_taken_0x245e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E50u;
        // 0x245e54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e50) {
            ctx->pc = 0x245E68u;
            goto label_245e68;
        }
    }
    ctx->pc = 0x245E58u;
label_245e58:
    // 0x245e58: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x245e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_245e5c:
    // 0x245e5c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245e60:
    // 0x245e60: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245e64:
    // 0x245e64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245e64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245e68:
    // 0x245e68: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_245e6c:
    // 0x245e6c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245e70:
    // 0x245e70: 0x9024eb01  lbu         $a0, -0x14FF($at)
    ctx->pc = 0x245e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961921)));
label_245e74:
    // 0x245e74: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x245e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_245e78:
    // 0x245e78: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245e78u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245e7c:
    // 0x245e7c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245e80:
    // 0x245e80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245e80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245e84:
    // 0x245e84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245e88:
    // 0x245e88: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x245e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_245e8c:
    // 0x245e8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245e90:
    if (ctx->pc == 0x245E90u) {
        ctx->pc = 0x245E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E8Cu;
        // 0x245e90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E94u;
        goto label_245e94;
    }
    ctx->pc = 0x245E8Cu;
    {
        const bool branch_taken_0x245e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E8Cu;
        // 0x245e90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e8c) {
            ctx->pc = 0x245E9Cu;
            goto label_245e9c;
        }
    }
    ctx->pc = 0x245E94u;
label_245e94:
    // 0x245e94: 0x10000003  b           . + 4 + (0x3 << 2)
label_245e98:
    if (ctx->pc == 0x245E98u) {
        ctx->pc = 0x245E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E94u;
        // 0x245e98: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245E9Cu;
        goto label_245e9c;
    }
    ctx->pc = 0x245E94u;
    {
        const bool branch_taken_0x245e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245E94u;
        // 0x245e98: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245e94) {
            ctx->pc = 0x245EA4u;
            goto label_245ea4;
        }
    }
    ctx->pc = 0x245E9Cu;
label_245e9c:
    // 0x245e9c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x245e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_245ea0:
    // 0x245ea0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x245ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_245ea4:
    // 0x245ea4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x245ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245ea8:
    // 0x245ea8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x245ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_245eac:
    // 0x245eac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245eb0:
    if (ctx->pc == 0x245EB0u) {
        ctx->pc = 0x245EB4u;
        goto label_245eb4;
    }
    ctx->pc = 0x245EACu;
    {
        const bool branch_taken_0x245eac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245eac) {
            ctx->pc = 0x245EBCu;
            goto label_245ebc;
        }
    }
    ctx->pc = 0x245EB4u;
label_245eb4:
    // 0x245eb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_245eb8:
    if (ctx->pc == 0x245EB8u) {
        ctx->pc = 0x245EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB4u;
        // 0x245eb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245EBCu;
        goto label_245ebc;
    }
    ctx->pc = 0x245EB4u;
    {
        const bool branch_taken_0x245eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EB4u;
        // 0x245eb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245eb4) {
            ctx->pc = 0x245ECCu;
            goto label_245ecc;
        }
    }
    ctx->pc = 0x245EBCu;
label_245ebc:
    // 0x245ebc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x245ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_245ec0:
    // 0x245ec0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245ec4:
    // 0x245ec4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245ec8:
    // 0x245ec8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ec8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245ecc:
    // 0x245ecc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245ed0:
    // 0x245ed0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x245ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_245ed4:
    // 0x245ed4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245ed4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245ed8:
    // 0x245ed8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ed8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245edc:
    // 0x245edc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x245edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245ee0:
    // 0x245ee0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245ee4:
    // 0x245ee4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245ee4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245ee8:
    // 0x245ee8: 0x18a00451  blez        $a1, . + 4 + (0x451 << 2)
label_245eec:
    if (ctx->pc == 0x245EECu) {
        ctx->pc = 0x245EF0u;
        goto label_245ef0;
    }
    ctx->pc = 0x245EE8u;
    {
        const bool branch_taken_0x245ee8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x245ee8) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245EF0u;
label_245ef0:
    // 0x245ef0: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245ef4:
    // 0x245ef4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_245ef8:
    // 0x245ef8: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x245ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_245efc:
    // 0x245efc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245f00:
    if (ctx->pc == 0x245F00u) {
        ctx->pc = 0x245F04u;
        goto label_245f04;
    }
    ctx->pc = 0x245EFCu;
    {
        const bool branch_taken_0x245efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245efc) {
            ctx->pc = 0x245F0Cu;
            goto label_245f0c;
        }
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0x10000003  b           . + 4 + (0x3 << 2)
label_245f08:
    if (ctx->pc == 0x245F08u) {
        ctx->pc = 0x245F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F04u;
        // 0x245f08: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F0Cu;
        goto label_245f0c;
    }
    ctx->pc = 0x245F04u;
    {
        const bool branch_taken_0x245f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F04u;
        // 0x245f08: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f04) {
            ctx->pc = 0x245F14u;
            goto label_245f14;
        }
    }
    ctx->pc = 0x245F0Cu;
label_245f0c:
    // 0x245f0c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_245f10:
    // 0x245f10: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x245f10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_245f14:
    // 0x245f14: 0x10000446  b           . + 4 + (0x446 << 2)
label_245f18:
    if (ctx->pc == 0x245F18u) {
        ctx->pc = 0x245F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F14u;
        // 0x245f18: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F1Cu;
        goto label_245f1c;
    }
    ctx->pc = 0x245F14u;
    {
        const bool branch_taken_0x245f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F14u;
        // 0x245f18: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f14) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245F1Cu;
label_245f1c:
    // 0x245f1c: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x245f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_245f20:
    // 0x245f20: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_245f24:
    if (ctx->pc == 0x245F24u) {
        ctx->pc = 0x245F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F20u;
        // 0x245f24: 0x30c50040  andi        $a1, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F28u;
        goto label_245f28;
    }
    ctx->pc = 0x245F20u;
    {
        const bool branch_taken_0x245f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F20u;
        // 0x245f24: 0x30c50040  andi        $a1, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f20) {
            ctx->pc = 0x24601Cu;
            goto label_24601c;
        }
    }
    ctx->pc = 0x245F28u;
label_245f28:
    // 0x245f28: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_245f2c:
    // 0x245f2c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_245f30:
    // 0x245f30: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x245f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_245f34:
    // 0x245f34: 0x1480043e  bnez        $a0, . + 4 + (0x43E << 2)
label_245f38:
    if (ctx->pc == 0x245F38u) {
        ctx->pc = 0x245F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F34u;
        // 0x245f38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F3Cu;
        goto label_245f3c;
    }
    ctx->pc = 0x245F34u;
    {
        const bool branch_taken_0x245f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F34u;
        // 0x245f38: 0xc52025  or          $a0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f34) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245F3Cu;
label_245f3c:
    // 0x245f3c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x245f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_245f40:
    // 0x245f40: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x245f40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245f44:
    // 0x245f44: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x245f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_245f48:
    // 0x245f48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245f4c:
    if (ctx->pc == 0x245F4Cu) {
        ctx->pc = 0x245F50u;
        goto label_245f50;
    }
    ctx->pc = 0x245F48u;
    {
        const bool branch_taken_0x245f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f48) {
            ctx->pc = 0x245F58u;
            goto label_245f58;
        }
    }
    ctx->pc = 0x245F50u;
label_245f50:
    // 0x245f50: 0x10000005  b           . + 4 + (0x5 << 2)
label_245f54:
    if (ctx->pc == 0x245F54u) {
        ctx->pc = 0x245F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F50u;
        // 0x245f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F58u;
        goto label_245f58;
    }
    ctx->pc = 0x245F50u;
    {
        const bool branch_taken_0x245f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F50u;
        // 0x245f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f50) {
            ctx->pc = 0x245F68u;
            goto label_245f68;
        }
    }
    ctx->pc = 0x245F58u;
label_245f58:
    // 0x245f58: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x245f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_245f5c:
    // 0x245f5c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245f60:
    // 0x245f60: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245f64:
    // 0x245f64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245f64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245f68:
    // 0x245f68: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x245f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_245f6c:
    // 0x245f6c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x245f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_245f70:
    // 0x245f70: 0x9024eb00  lbu         $a0, -0x1500($at)
    ctx->pc = 0x245f70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961920)));
label_245f74:
    // 0x245f74: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x245f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_245f78:
    // 0x245f78: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245f78u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245f7c:
    // 0x245f7c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245f80:
    // 0x245f80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245f80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245f84:
    // 0x245f84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x245f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245f88:
    // 0x245f88: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x245f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_245f8c:
    // 0x245f8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245f90:
    if (ctx->pc == 0x245F90u) {
        ctx->pc = 0x245F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F8Cu;
        // 0x245f90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F94u;
        goto label_245f94;
    }
    ctx->pc = 0x245F8Cu;
    {
        const bool branch_taken_0x245f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F8Cu;
        // 0x245f90: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f8c) {
            ctx->pc = 0x245F9Cu;
            goto label_245f9c;
        }
    }
    ctx->pc = 0x245F94u;
label_245f94:
    // 0x245f94: 0x10000003  b           . + 4 + (0x3 << 2)
label_245f98:
    if (ctx->pc == 0x245F98u) {
        ctx->pc = 0x245F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F94u;
        // 0x245f98: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245F9Cu;
        goto label_245f9c;
    }
    ctx->pc = 0x245F94u;
    {
        const bool branch_taken_0x245f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245F94u;
        // 0x245f98: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245f94) {
            ctx->pc = 0x245FA4u;
            goto label_245fa4;
        }
    }
    ctx->pc = 0x245F9Cu;
label_245f9c:
    // 0x245f9c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_245fa0:
    // 0x245fa0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x245fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_245fa4:
    // 0x245fa4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x245fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_245fa8:
    // 0x245fa8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x245fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_245fac:
    // 0x245fac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_245fb0:
    if (ctx->pc == 0x245FB0u) {
        ctx->pc = 0x245FB4u;
        goto label_245fb4;
    }
    ctx->pc = 0x245FACu;
    {
        const bool branch_taken_0x245fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fac) {
            ctx->pc = 0x245FBCu;
            goto label_245fbc;
        }
    }
    ctx->pc = 0x245FB4u;
label_245fb4:
    // 0x245fb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_245fb8:
    if (ctx->pc == 0x245FB8u) {
        ctx->pc = 0x245FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FB4u;
        // 0x245fb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245FBCu;
        goto label_245fbc;
    }
    ctx->pc = 0x245FB4u;
    {
        const bool branch_taken_0x245fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245FB4u;
        // 0x245fb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245fb4) {
            ctx->pc = 0x245FCCu;
            goto label_245fcc;
        }
    }
    ctx->pc = 0x245FBCu;
label_245fbc:
    // 0x245fbc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x245fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_245fc0:
    // 0x245fc0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_245fc4:
    // 0x245fc4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x245fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_245fc8:
    // 0x245fc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245fcc:
    // 0x245fcc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245fd0:
    // 0x245fd0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x245fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_245fd4:
    // 0x245fd4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245fd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245fd8:
    // 0x245fd8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245fd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_245fdc:
    // 0x245fdc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x245fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_245fe0:
    // 0x245fe0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x245fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_245fe4:
    // 0x245fe4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x245fe4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_245fe8:
    // 0x245fe8: 0x18a00411  blez        $a1, . + 4 + (0x411 << 2)
label_245fec:
    if (ctx->pc == 0x245FECu) {
        ctx->pc = 0x245FF0u;
        goto label_245ff0;
    }
    ctx->pc = 0x245FE8u;
    {
        const bool branch_taken_0x245fe8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x245fe8) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x245FF0u;
label_245ff0:
    // 0x245ff0: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x245ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_245ff4:
    // 0x245ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_245ff8:
    // 0x245ff8: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x245ff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_245ffc:
    // 0x245ffc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246000:
    if (ctx->pc == 0x246000u) {
        ctx->pc = 0x246004u;
        goto label_246004;
    }
    ctx->pc = 0x245FFCu;
    {
        const bool branch_taken_0x245ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ffc) {
            ctx->pc = 0x24600Cu;
            goto label_24600c;
        }
    }
    ctx->pc = 0x246004u;
label_246004:
    // 0x246004: 0x10000003  b           . + 4 + (0x3 << 2)
label_246008:
    if (ctx->pc == 0x246008u) {
        ctx->pc = 0x246008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246004u;
        // 0x246008: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24600Cu;
        goto label_24600c;
    }
    ctx->pc = 0x246004u;
    {
        const bool branch_taken_0x246004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246004u;
        // 0x246008: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246004) {
            ctx->pc = 0x246014u;
            goto label_246014;
        }
    }
    ctx->pc = 0x24600Cu;
label_24600c:
    // 0x24600c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x24600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246010:
    // 0x246010: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246010u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246014:
    // 0x246014: 0x10000406  b           . + 4 + (0x406 << 2)
label_246018:
    if (ctx->pc == 0x246018u) {
        ctx->pc = 0x246018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246014u;
        // 0x246018: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24601Cu;
        goto label_24601c;
    }
    ctx->pc = 0x246014u;
    {
        const bool branch_taken_0x246014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246014u;
        // 0x246018: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246014) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24601Cu;
label_24601c:
    // 0x24601c: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_246020:
    if (ctx->pc == 0x246020u) {
        ctx->pc = 0x246024u;
        goto label_246024;
    }
    ctx->pc = 0x24601Cu;
    {
        const bool branch_taken_0x24601c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24601c) {
            ctx->pc = 0x246118u;
            goto label_246118;
        }
    }
    ctx->pc = 0x246024u;
label_246024:
    // 0x246024: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x246024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246028:
    // 0x246028: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x246028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_24602c:
    // 0x24602c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x24602cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_246030:
    // 0x246030: 0x148003ff  bnez        $a0, . + 4 + (0x3FF << 2)
label_246034:
    if (ctx->pc == 0x246034u) {
        ctx->pc = 0x246034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246030u;
        // 0x246034: 0x34a48000  ori         $a0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246038u;
        goto label_246038;
    }
    ctx->pc = 0x246030u;
    {
        const bool branch_taken_0x246030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246030u;
        // 0x246034: 0x34a48000  ori         $a0, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246030) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246038u;
label_246038:
    // 0x246038: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_24603c:
    // 0x24603c: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x24603cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246040:
    // 0x246040: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246044:
    // 0x246044: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246048:
    if (ctx->pc == 0x246048u) {
        ctx->pc = 0x24604Cu;
        goto label_24604c;
    }
    ctx->pc = 0x246044u;
    {
        const bool branch_taken_0x246044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246044) {
            ctx->pc = 0x246054u;
            goto label_246054;
        }
    }
    ctx->pc = 0x24604Cu;
label_24604c:
    // 0x24604c: 0x10000005  b           . + 4 + (0x5 << 2)
label_246050:
    if (ctx->pc == 0x246050u) {
        ctx->pc = 0x246050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24604Cu;
        // 0x246050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246054u;
        goto label_246054;
    }
    ctx->pc = 0x24604Cu;
    {
        const bool branch_taken_0x24604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24604Cu;
        // 0x246050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24604c) {
            ctx->pc = 0x246064u;
            goto label_246064;
        }
    }
    ctx->pc = 0x246054u;
label_246054:
    // 0x246054: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246058:
    // 0x246058: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_24605c:
    // 0x24605c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x24605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246060:
    // 0x246060: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246060u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246064:
    // 0x246064: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246068:
    // 0x246068: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_24606c:
    // 0x24606c: 0x9024eaff  lbu         $a0, -0x1501($at)
    ctx->pc = 0x24606cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961919)));
label_246070:
    // 0x246070: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246074:
    // 0x246074: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246074u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246078:
    // 0x246078: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_24607c:
    // 0x24607c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24607cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246080:
    // 0x246080: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246084:
    // 0x246084: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246088:
    // 0x246088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_24608c:
    if (ctx->pc == 0x24608Cu) {
        ctx->pc = 0x24608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246088u;
        // 0x24608c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246090u;
        goto label_246090;
    }
    ctx->pc = 0x246088u;
    {
        const bool branch_taken_0x246088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246088u;
        // 0x24608c: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246088) {
            ctx->pc = 0x246098u;
            goto label_246098;
        }
    }
    ctx->pc = 0x246090u;
label_246090:
    // 0x246090: 0x10000003  b           . + 4 + (0x3 << 2)
label_246094:
    if (ctx->pc == 0x246094u) {
        ctx->pc = 0x246094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246090u;
        // 0x246094: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246098u;
        goto label_246098;
    }
    ctx->pc = 0x246090u;
    {
        const bool branch_taken_0x246090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246090u;
        // 0x246094: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246090) {
            ctx->pc = 0x2460A0u;
            goto label_2460a0;
        }
    }
    ctx->pc = 0x246098u;
label_246098:
    // 0x246098: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_24609c:
    // 0x24609c: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x24609cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2460a0:
    // 0x2460a0: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2460a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2460a4:
    // 0x2460a4: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2460a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2460a8:
    // 0x2460a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2460ac:
    if (ctx->pc == 0x2460ACu) {
        ctx->pc = 0x2460B0u;
        goto label_2460b0;
    }
    ctx->pc = 0x2460A8u;
    {
        const bool branch_taken_0x2460a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460a8) {
            ctx->pc = 0x2460B8u;
            goto label_2460b8;
        }
    }
    ctx->pc = 0x2460B0u;
label_2460b0:
    // 0x2460b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2460b4:
    if (ctx->pc == 0x2460B4u) {
        ctx->pc = 0x2460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B0u;
        // 0x2460b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2460B8u;
        goto label_2460b8;
    }
    ctx->pc = 0x2460B0u;
    {
        const bool branch_taken_0x2460b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2460B0u;
        // 0x2460b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2460b0) {
            ctx->pc = 0x2460C8u;
            goto label_2460c8;
        }
    }
    ctx->pc = 0x2460B8u;
label_2460b8:
    // 0x2460b8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2460b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2460bc:
    // 0x2460bc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2460bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2460c0:
    // 0x2460c0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2460c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2460c4:
    // 0x2460c4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2460c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2460c8:
    // 0x2460c8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2460c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2460cc:
    // 0x2460cc: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2460ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2460d0:
    // 0x2460d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2460d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2460d4:
    // 0x2460d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2460d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2460d8:
    // 0x2460d8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2460d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2460dc:
    // 0x2460dc: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2460dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2460e0:
    // 0x2460e0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2460e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2460e4:
    // 0x2460e4: 0x18a003d2  blez        $a1, . + 4 + (0x3D2 << 2)
label_2460e8:
    if (ctx->pc == 0x2460E8u) {
        ctx->pc = 0x2460ECu;
        goto label_2460ec;
    }
    ctx->pc = 0x2460E4u;
    {
        const bool branch_taken_0x2460e4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2460e4) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x2460ECu;
label_2460ec:
    // 0x2460ec: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2460f0:
    // 0x2460f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2460f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2460f4:
    // 0x2460f4: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x2460f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2460f8:
    // 0x2460f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2460fc:
    if (ctx->pc == 0x2460FCu) {
        ctx->pc = 0x246100u;
        goto label_246100;
    }
    ctx->pc = 0x2460F8u;
    {
        const bool branch_taken_0x2460f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2460f8) {
            ctx->pc = 0x246108u;
            goto label_246108;
        }
    }
    ctx->pc = 0x246100u;
label_246100:
    // 0x246100: 0x10000003  b           . + 4 + (0x3 << 2)
label_246104:
    if (ctx->pc == 0x246104u) {
        ctx->pc = 0x246104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246100u;
        // 0x246104: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246108u;
        goto label_246108;
    }
    ctx->pc = 0x246100u;
    {
        const bool branch_taken_0x246100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246100u;
        // 0x246104: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246100) {
            ctx->pc = 0x246110u;
            goto label_246110;
        }
    }
    ctx->pc = 0x246108u;
label_246108:
    // 0x246108: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24610c:
    // 0x24610c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x24610cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246110:
    // 0x246110: 0x100003c7  b           . + 4 + (0x3C7 << 2)
label_246114:
    if (ctx->pc == 0x246114u) {
        ctx->pc = 0x246114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246110u;
        // 0x246114: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246118u;
        goto label_246118;
    }
    ctx->pc = 0x246110u;
    {
        const bool branch_taken_0x246110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246110u;
        // 0x246114: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246110) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246118u;
label_246118:
    // 0x246118: 0x30c50020  andi        $a1, $a2, 0x20
    ctx->pc = 0x246118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_24611c:
    // 0x24611c: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
label_246120:
    if (ctx->pc == 0x246120u) {
        ctx->pc = 0x246120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24611Cu;
        // 0x246120: 0x30c50001  andi        $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246124u;
        goto label_246124;
    }
    ctx->pc = 0x24611Cu;
    {
        const bool branch_taken_0x24611c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24611Cu;
        // 0x246120: 0x30c50001  andi        $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24611c) {
            ctx->pc = 0x246214u;
            goto label_246214;
        }
    }
    ctx->pc = 0x246124u;
label_246124:
    // 0x246124: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x246124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246128:
    // 0x246128: 0x30a44000  andi        $a0, $a1, 0x4000
    ctx->pc = 0x246128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
label_24612c:
    // 0x24612c: 0x148003c0  bnez        $a0, . + 4 + (0x3C0 << 2)
label_246130:
    if (ctx->pc == 0x246130u) {
        ctx->pc = 0x246130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24612Cu;
        // 0x246130: 0x34a44000  ori         $a0, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246134u;
        goto label_246134;
    }
    ctx->pc = 0x24612Cu;
    {
        const bool branch_taken_0x24612c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x246130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24612Cu;
        // 0x246130: 0x34a44000  ori         $a0, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24612c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246134u;
label_246134:
    // 0x246134: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246138:
    // 0x246138: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246138u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_24613c:
    // 0x24613c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x24613cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246140:
    // 0x246140: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246144:
    if (ctx->pc == 0x246144u) {
        ctx->pc = 0x246148u;
        goto label_246148;
    }
    ctx->pc = 0x246140u;
    {
        const bool branch_taken_0x246140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246140) {
            ctx->pc = 0x246150u;
            goto label_246150;
        }
    }
    ctx->pc = 0x246148u;
label_246148:
    // 0x246148: 0x10000005  b           . + 4 + (0x5 << 2)
label_24614c:
    if (ctx->pc == 0x24614Cu) {
        ctx->pc = 0x24614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246148u;
        // 0x24614c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246150u;
        goto label_246150;
    }
    ctx->pc = 0x246148u;
    {
        const bool branch_taken_0x246148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246148u;
        // 0x24614c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246148) {
            ctx->pc = 0x246160u;
            goto label_246160;
        }
    }
    ctx->pc = 0x246150u;
label_246150:
    // 0x246150: 0x24a4fffe  addiu       $a0, $a1, -0x2
    ctx->pc = 0x246150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_246154:
    // 0x246154: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246158:
    // 0x246158: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_24615c:
    // 0x24615c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24615cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246160:
    // 0x246160: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246164:
    // 0x246164: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246168:
    // 0x246168: 0x9024eafe  lbu         $a0, -0x1502($at)
    ctx->pc = 0x246168u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961918)));
label_24616c:
    // 0x24616c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x24616cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246170:
    // 0x246170: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246170u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246174:
    // 0x246174: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246178:
    // 0x246178: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246178u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24617c:
    // 0x24617c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x24617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246180:
    // 0x246180: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246184:
    // 0x246184: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246188:
    if (ctx->pc == 0x246188u) {
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24618Cu;
        goto label_24618c;
    }
    ctx->pc = 0x246184u;
    {
        const bool branch_taken_0x246184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246184u;
        // 0x246188: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246184) {
            ctx->pc = 0x246194u;
            goto label_246194;
        }
    }
    ctx->pc = 0x24618Cu;
label_24618c:
    // 0x24618c: 0x10000003  b           . + 4 + (0x3 << 2)
label_246190:
    if (ctx->pc == 0x246190u) {
        ctx->pc = 0x246190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24618Cu;
        // 0x246190: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246194u;
        goto label_246194;
    }
    ctx->pc = 0x24618Cu;
    {
        const bool branch_taken_0x24618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24618Cu;
        // 0x246190: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24618c) {
            ctx->pc = 0x24619Cu;
            goto label_24619c;
        }
    }
    ctx->pc = 0x246194u;
label_246194:
    // 0x246194: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246198:
    // 0x246198: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_24619c:
    // 0x24619c: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x24619cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2461a0:
    // 0x2461a0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2461a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2461a4:
    // 0x2461a4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2461a8:
    if (ctx->pc == 0x2461A8u) {
        ctx->pc = 0x2461ACu;
        goto label_2461ac;
    }
    ctx->pc = 0x2461A4u;
    {
        const bool branch_taken_0x2461a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461a4) {
            ctx->pc = 0x2461B4u;
            goto label_2461b4;
        }
    }
    ctx->pc = 0x2461ACu;
label_2461ac:
    // 0x2461ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_2461b0:
    if (ctx->pc == 0x2461B0u) {
        ctx->pc = 0x2461B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461ACu;
        // 0x2461b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2461B4u;
        goto label_2461b4;
    }
    ctx->pc = 0x2461ACu;
    {
        const bool branch_taken_0x2461ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2461B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461ACu;
        // 0x2461b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461ac) {
            ctx->pc = 0x2461C4u;
            goto label_2461c4;
        }
    }
    ctx->pc = 0x2461B4u;
label_2461b4:
    // 0x2461b4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2461b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2461b8:
    // 0x2461b8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2461b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2461bc:
    // 0x2461bc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2461bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2461c0:
    // 0x2461c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2461c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2461c4:
    // 0x2461c4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2461c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2461c8:
    // 0x2461c8: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2461c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2461cc:
    // 0x2461cc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2461ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2461d0:
    // 0x2461d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2461d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2461d4:
    // 0x2461d4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2461d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2461d8:
    // 0x2461d8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2461d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2461dc:
    // 0x2461dc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2461dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2461e0:
    // 0x2461e0: 0x18a00393  blez        $a1, . + 4 + (0x393 << 2)
label_2461e4:
    if (ctx->pc == 0x2461E4u) {
        ctx->pc = 0x2461E8u;
        goto label_2461e8;
    }
    ctx->pc = 0x2461E0u;
    {
        const bool branch_taken_0x2461e0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2461e0) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x2461E8u;
label_2461e8:
    // 0x2461e8: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x2461e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_2461ec:
    // 0x2461ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2461ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2461f0:
    // 0x2461f0: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x2461f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2461f4:
    // 0x2461f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2461f8:
    if (ctx->pc == 0x2461F8u) {
        ctx->pc = 0x2461FCu;
        goto label_2461fc;
    }
    ctx->pc = 0x2461F4u;
    {
        const bool branch_taken_0x2461f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2461f4) {
            ctx->pc = 0x246204u;
            goto label_246204;
        }
    }
    ctx->pc = 0x2461FCu;
label_2461fc:
    // 0x2461fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_246200:
    if (ctx->pc == 0x246200u) {
        ctx->pc = 0x246200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461FCu;
        // 0x246200: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246204u;
        goto label_246204;
    }
    ctx->pc = 0x2461FCu;
    {
        const bool branch_taken_0x2461fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461FCu;
        // 0x246200: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2461fc) {
            ctx->pc = 0x24620Cu;
            goto label_24620c;
        }
    }
    ctx->pc = 0x246204u;
label_246204:
    // 0x246204: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246208:
    // 0x246208: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246208u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_24620c:
    // 0x24620c: 0x10000388  b           . + 4 + (0x388 << 2)
label_246210:
    if (ctx->pc == 0x246210u) {
        ctx->pc = 0x246210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24620Cu;
        // 0x246210: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246214u;
        goto label_246214;
    }
    ctx->pc = 0x24620Cu;
    {
        const bool branch_taken_0x24620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24620Cu;
        // 0x246210: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24620c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246214u;
label_246214:
    // 0x246214: 0x10a00206  beqz        $a1, . + 4 + (0x206 << 2)
label_246218:
    if (ctx->pc == 0x246218u) {
        ctx->pc = 0x24621Cu;
        goto label_24621c;
    }
    ctx->pc = 0x246214u;
    {
        const bool branch_taken_0x246214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x246214) {
            ctx->pc = 0x246A30u;
            { ctx->pc = 0x246a30; return; }
        }
    }
    ctx->pc = 0x24621Cu;
label_24621c:
    // 0x24621c: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x24621cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246220:
    // 0x246220: 0x24053fc0  addiu       $a1, $zero, 0x3FC0
    ctx->pc = 0x246220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16320));
label_246224:
    // 0x246224: 0x30e63fc0  andi        $a2, $a3, 0x3FC0
    ctx->pc = 0x246224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16320);
label_246228:
    // 0x246228: 0x10c50381  beq         $a2, $a1, . + 4 + (0x381 << 2)
label_24622c:
    if (ctx->pc == 0x24622Cu) {
        ctx->pc = 0x246230u;
        goto label_246230;
    }
    ctx->pc = 0x246228u;
    {
        const bool branch_taken_0x246228 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x246228) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246230u;
label_246230:
    // 0x246230: 0x8485003c  lh          $a1, 0x3C($a0)
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_246234:
    // 0x246234: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x246234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_246238:
    // 0x246238: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_24623c:
    if (ctx->pc == 0x24623Cu) {
        ctx->pc = 0x246240u;
        goto label_246240;
    }
    ctx->pc = 0x246238u;
    {
        const bool branch_taken_0x246238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x246238) {
            ctx->pc = 0x24624Cu;
            goto label_24624c;
        }
    }
    ctx->pc = 0x246240u;
label_246240:
    // 0x246240: 0x240400e9  addiu       $a0, $zero, 0xE9
    ctx->pc = 0x246240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
label_246244:
    // 0x246244: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246248:
    if (ctx->pc == 0x246248u) {
        ctx->pc = 0x246248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246244u;
        // 0x246248: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24624Cu;
        goto label_24624c;
    }
    ctx->pc = 0x246244u;
    {
        const bool branch_taken_0x246244 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x246248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246244u;
        // 0x246248: 0x2404009f  addiu       $a0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246244) {
            ctx->pc = 0x24633Cu;
            goto label_24633c;
        }
    }
    ctx->pc = 0x24624Cu;
label_24624c:
    // 0x24624c: 0x30e40040  andi        $a0, $a3, 0x40
    ctx->pc = 0x24624cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_246250:
    // 0x246250: 0x14800377  bnez        $a0, . + 4 + (0x377 << 2)
label_246254:
    if (ctx->pc == 0x246254u) {
        ctx->pc = 0x246258u;
        goto label_246258;
    }
    ctx->pc = 0x246250u;
    {
        const bool branch_taken_0x246250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246250) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246258u;
label_246258:
    // 0x246258: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24625c:
    // 0x24625c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x24625cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_246260:
    // 0x246260: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246264:
    // 0x246264: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246268:
    // 0x246268: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_24626c:
    // 0x24626c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246270:
    if (ctx->pc == 0x246270u) {
        ctx->pc = 0x246270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24626Cu;
        // 0x246270: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246274u;
        goto label_246274;
    }
    ctx->pc = 0x24626Cu;
    {
        const bool branch_taken_0x24626c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24626Cu;
        // 0x246270: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24626c) {
            ctx->pc = 0x24627Cu;
            goto label_24627c;
        }
    }
    ctx->pc = 0x246274u;
label_246274:
    // 0x246274: 0x10000004  b           . + 4 + (0x4 << 2)
label_246278:
    if (ctx->pc == 0x246278u) {
        ctx->pc = 0x246278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246274u;
        // 0x246278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24627Cu;
        goto label_24627c;
    }
    ctx->pc = 0x246274u;
    {
        const bool branch_taken_0x246274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246274u;
        // 0x246278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246274) {
            ctx->pc = 0x246288u;
            goto label_246288;
        }
    }
    ctx->pc = 0x24627Cu;
label_24627c:
    // 0x24627c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x24627cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246280:
    // 0x246280: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246284:
    // 0x246284: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246284u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246288:
    // 0x246288: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_24628c:
    // 0x24628c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x24628cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246290:
    // 0x246290: 0x9024eaf6  lbu         $a0, -0x150A($at)
    ctx->pc = 0x246290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961910)));
label_246294:
    // 0x246294: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246298:
    // 0x246298: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246298u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_24629c:
    // 0x24629c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x24629cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2462a0:
    // 0x2462a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2462a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2462a4:
    // 0x2462a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2462a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2462a8:
    // 0x2462a8: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x2462a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2462ac:
    // 0x2462ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2462b0:
    if (ctx->pc == 0x2462B0u) {
        ctx->pc = 0x2462B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462ACu;
        // 0x2462b0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462B4u;
        goto label_2462b4;
    }
    ctx->pc = 0x2462ACu;
    {
        const bool branch_taken_0x2462ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462ACu;
        // 0x2462b0: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462ac) {
            ctx->pc = 0x2462BCu;
            goto label_2462bc;
        }
    }
    ctx->pc = 0x2462B4u;
label_2462b4:
    // 0x2462b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2462b8:
    if (ctx->pc == 0x2462B8u) {
        ctx->pc = 0x2462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462B4u;
        // 0x2462b8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462BCu;
        goto label_2462bc;
    }
    ctx->pc = 0x2462B4u;
    {
        const bool branch_taken_0x2462b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462B4u;
        // 0x2462b8: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462b4) {
            ctx->pc = 0x2462C4u;
            goto label_2462c4;
        }
    }
    ctx->pc = 0x2462BCu;
label_2462bc:
    // 0x2462bc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2462bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2462c0:
    // 0x2462c0: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2462c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2462c4:
    // 0x2462c4: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2462c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2462c8:
    // 0x2462c8: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2462c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2462cc:
    // 0x2462cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2462d0:
    if (ctx->pc == 0x2462D0u) {
        ctx->pc = 0x2462D4u;
        goto label_2462d4;
    }
    ctx->pc = 0x2462CCu;
    {
        const bool branch_taken_0x2462cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2462cc) {
            ctx->pc = 0x2462DCu;
            goto label_2462dc;
        }
    }
    ctx->pc = 0x2462D4u;
label_2462d4:
    // 0x2462d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2462d8:
    if (ctx->pc == 0x2462D8u) {
        ctx->pc = 0x2462D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462D4u;
        // 0x2462d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2462DCu;
        goto label_2462dc;
    }
    ctx->pc = 0x2462D4u;
    {
        const bool branch_taken_0x2462d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2462D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2462D4u;
        // 0x2462d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2462d4) {
            ctx->pc = 0x2462ECu;
            goto label_2462ec;
        }
    }
    ctx->pc = 0x2462DCu;
label_2462dc:
    // 0x2462dc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2462dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2462e0:
    // 0x2462e0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2462e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2462e4:
    // 0x2462e4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2462e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2462e8:
    // 0x2462e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2462e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2462ec:
    // 0x2462ec: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2462ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2462f0:
    // 0x2462f0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2462f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2462f4:
    // 0x2462f4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2462f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2462f8:
    // 0x2462f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2462f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2462fc:
    // 0x2462fc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2462fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246300:
    // 0x246300: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246304:
    // 0x246304: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246304u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246308:
    // 0x246308: 0x18a00349  blez        $a1, . + 4 + (0x349 << 2)
label_24630c:
    if (ctx->pc == 0x24630Cu) {
        ctx->pc = 0x246310u;
        goto label_246310;
    }
    ctx->pc = 0x246308u;
    {
        const bool branch_taken_0x246308 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246308) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246310u;
label_246310:
    // 0x246310: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246314:
    // 0x246314: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246318:
    // 0x246318: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_24631c:
    // 0x24631c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246320:
    if (ctx->pc == 0x246320u) {
        ctx->pc = 0x246324u;
        goto label_246324;
    }
    ctx->pc = 0x24631Cu;
    {
        const bool branch_taken_0x24631c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24631c) {
            ctx->pc = 0x24632Cu;
            goto label_24632c;
        }
    }
    ctx->pc = 0x246324u;
label_246324:
    // 0x246324: 0x10000003  b           . + 4 + (0x3 << 2)
label_246328:
    if (ctx->pc == 0x246328u) {
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24632Cu;
        goto label_24632c;
    }
    ctx->pc = 0x246324u;
    {
        const bool branch_taken_0x246324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246324u;
        // 0x246328: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246324) {
            ctx->pc = 0x246334u;
            goto label_246334;
        }
    }
    ctx->pc = 0x24632Cu;
label_24632c:
    // 0x24632c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x24632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246330:
    // 0x246330: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246330u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246334:
    // 0x246334: 0x1000033e  b           . + 4 + (0x33E << 2)
label_246338:
    if (ctx->pc == 0x246338u) {
        ctx->pc = 0x246338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246334u;
        // 0x246338: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24633Cu;
        goto label_24633c;
    }
    ctx->pc = 0x246334u;
    {
        const bool branch_taken_0x246334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246334u;
        // 0x246338: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246334) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24633Cu;
label_24633c:
    // 0x24633c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_246340:
    if (ctx->pc == 0x246340u) {
        ctx->pc = 0x246344u;
        goto label_246344;
    }
    ctx->pc = 0x24633Cu;
    {
        const bool branch_taken_0x24633c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x24633c) {
            ctx->pc = 0x246350u;
            goto label_246350;
        }
    }
    ctx->pc = 0x246344u;
label_246344:
    // 0x246344: 0x240400ea  addiu       $a0, $zero, 0xEA
    ctx->pc = 0x246344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_246348:
    // 0x246348: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_24634c:
    if (ctx->pc == 0x24634Cu) {
        ctx->pc = 0x24634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246348u;
        // 0x24634c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246350u;
        goto label_246350;
    }
    ctx->pc = 0x246348u;
    {
        const bool branch_taken_0x246348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x24634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246348u;
        // 0x24634c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246348) {
            ctx->pc = 0x246440u;
            goto label_246440;
        }
    }
    ctx->pc = 0x246350u;
label_246350:
    // 0x246350: 0x30e40080  andi        $a0, $a3, 0x80
    ctx->pc = 0x246350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_246354:
    // 0x246354: 0x14800336  bnez        $a0, . + 4 + (0x336 << 2)
label_246358:
    if (ctx->pc == 0x246358u) {
        ctx->pc = 0x24635Cu;
        goto label_24635c;
    }
    ctx->pc = 0x246354u;
    {
        const bool branch_taken_0x246354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246354) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x24635Cu;
label_24635c:
    // 0x24635c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x24635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246360:
    // 0x246360: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x246360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_246364:
    // 0x246364: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246368:
    // 0x246368: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_24636c:
    // 0x24636c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x24636cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246370:
    // 0x246370: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246374:
    if (ctx->pc == 0x246374u) {
        ctx->pc = 0x246374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246370u;
        // 0x246374: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246378u;
        goto label_246378;
    }
    ctx->pc = 0x246370u;
    {
        const bool branch_taken_0x246370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246370u;
        // 0x246374: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246370) {
            ctx->pc = 0x246380u;
            goto label_246380;
        }
    }
    ctx->pc = 0x246378u;
label_246378:
    // 0x246378: 0x10000004  b           . + 4 + (0x4 << 2)
label_24637c:
    if (ctx->pc == 0x24637Cu) {
        ctx->pc = 0x24637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246378u;
        // 0x24637c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246380u;
        goto label_246380;
    }
    ctx->pc = 0x246378u;
    {
        const bool branch_taken_0x246378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246378u;
        // 0x24637c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246378) {
            ctx->pc = 0x24638Cu;
            goto label_24638c;
        }
    }
    ctx->pc = 0x246380u;
label_246380:
    // 0x246380: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246384:
    // 0x246384: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246388:
    // 0x246388: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246388u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_24638c:
    // 0x24638c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x24638cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246390:
    // 0x246390: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246394:
    // 0x246394: 0x9024eaf7  lbu         $a0, -0x1509($at)
    ctx->pc = 0x246394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961911)));
label_246398:
    // 0x246398: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_24639c:
    // 0x24639c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x24639cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2463a0:
    // 0x2463a0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2463a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2463a4:
    // 0x2463a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2463a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2463a8:
    // 0x2463a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2463ac:
    // 0x2463ac: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x2463acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_2463b0:
    // 0x2463b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2463b4:
    if (ctx->pc == 0x2463B4u) {
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463B8u;
        goto label_2463b8;
    }
    ctx->pc = 0x2463B0u;
    {
        const bool branch_taken_0x2463b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463b0) {
            ctx->pc = 0x2463C0u;
            goto label_2463c0;
        }
    }
    ctx->pc = 0x2463B8u;
label_2463b8:
    // 0x2463b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2463bc:
    if (ctx->pc == 0x2463BCu) {
        ctx->pc = 0x2463BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B8u;
        // 0x2463bc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463C0u;
        goto label_2463c0;
    }
    ctx->pc = 0x2463B8u;
    {
        const bool branch_taken_0x2463b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B8u;
        // 0x2463bc: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463b8) {
            ctx->pc = 0x2463C8u;
            goto label_2463c8;
        }
    }
    ctx->pc = 0x2463C0u;
label_2463c0:
    // 0x2463c0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2463c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2463c4:
    // 0x2463c4: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2463c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2463c8:
    // 0x2463c8: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_2463cc:
    // 0x2463cc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2463ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2463d0:
    // 0x2463d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2463d4:
    if (ctx->pc == 0x2463D4u) {
        ctx->pc = 0x2463D8u;
        goto label_2463d8;
    }
    ctx->pc = 0x2463D0u;
    {
        const bool branch_taken_0x2463d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463d0) {
            ctx->pc = 0x2463E0u;
            goto label_2463e0;
        }
    }
    ctx->pc = 0x2463D8u;
label_2463d8:
    // 0x2463d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2463dc:
    if (ctx->pc == 0x2463DCu) {
        ctx->pc = 0x2463DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D8u;
        // 0x2463dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463E0u;
        goto label_2463e0;
    }
    ctx->pc = 0x2463D8u;
    {
        const bool branch_taken_0x2463d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D8u;
        // 0x2463dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463d8) {
            ctx->pc = 0x2463F0u;
            goto label_2463f0;
        }
    }
    ctx->pc = 0x2463E0u;
label_2463e0:
    // 0x2463e0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2463e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2463e4:
    // 0x2463e4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2463e8:
    // 0x2463e8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2463e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2463ec:
    // 0x2463ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2463ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2463f0:
    // 0x2463f0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2463f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_2463f4:
    // 0x2463f4: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x2463f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_2463f8:
    // 0x2463f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2463f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_2463fc:
    // 0x2463fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2463fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246400:
    // 0x246400: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246400u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246404:
    // 0x246404: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246408:
    // 0x246408: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246408u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_24640c:
    // 0x24640c: 0x18a00308  blez        $a1, . + 4 + (0x308 << 2)
label_246410:
    if (ctx->pc == 0x246410u) {
        ctx->pc = 0x246414u;
        goto label_246414;
    }
    ctx->pc = 0x24640Cu;
    {
        const bool branch_taken_0x24640c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x24640c) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246414u;
label_246414:
    // 0x246414: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246418:
    // 0x246418: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24641c:
    // 0x24641c: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x24641cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246420:
    // 0x246420: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246424:
    if (ctx->pc == 0x246424u) {
        ctx->pc = 0x246428u;
        goto label_246428;
    }
    ctx->pc = 0x246420u;
    {
        const bool branch_taken_0x246420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246420) {
            ctx->pc = 0x246430u;
            goto label_246430;
        }
    }
    ctx->pc = 0x246428u;
label_246428:
    // 0x246428: 0x10000003  b           . + 4 + (0x3 << 2)
label_24642c:
    if (ctx->pc == 0x24642Cu) {
        ctx->pc = 0x24642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246428u;
        // 0x24642c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246430u;
        goto label_246430;
    }
    ctx->pc = 0x246428u;
    {
        const bool branch_taken_0x246428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246428u;
        // 0x24642c: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246428) {
            ctx->pc = 0x246438u;
            goto label_246438;
        }
    }
    ctx->pc = 0x246430u;
label_246430:
    // 0x246430: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246434:
    // 0x246434: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246434u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246438:
    // 0x246438: 0x100002fd  b           . + 4 + (0x2FD << 2)
label_24643c:
    if (ctx->pc == 0x24643Cu) {
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246440u;
        goto label_246440;
    }
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246438) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246440u;
label_246440:
    // 0x246440: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_246444:
    if (ctx->pc == 0x246444u) {
        ctx->pc = 0x246448u;
        goto label_246448;
    }
    ctx->pc = 0x246440u;
    {
        const bool branch_taken_0x246440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x246440) {
            ctx->pc = 0x246454u;
            goto label_246454;
        }
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0x240400eb  addiu       $a0, $zero, 0xEB
    ctx->pc = 0x246448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
label_24644c:
    // 0x24644c: 0x14a4003d  bne         $a1, $a0, . + 4 + (0x3D << 2)
label_246450:
    if (ctx->pc == 0x246450u) {
        ctx->pc = 0x246450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24644Cu;
        // 0x246450: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246454u;
        goto label_246454;
    }
    ctx->pc = 0x24644Cu;
    {
        const bool branch_taken_0x24644c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x246450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24644Cu;
        // 0x246450: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24644c) {
            ctx->pc = 0x246544u;
            { ctx->pc = 0x246544; return; }
        }
    }
    ctx->pc = 0x246454u;
label_246454:
    // 0x246454: 0x30e40100  andi        $a0, $a3, 0x100
    ctx->pc = 0x246454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
label_246458:
    // 0x246458: 0x148002f5  bnez        $a0, . + 4 + (0x2F5 << 2)
label_24645c:
    if (ctx->pc == 0x24645Cu) {
        ctx->pc = 0x246460u;
        goto label_246460;
    }
    ctx->pc = 0x246458u;
    {
        const bool branch_taken_0x246458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246458) {
            ctx->pc = 0x247030u;
            { ctx->pc = 0x247030; return; }
        }
    }
    ctx->pc = 0x246460u;
label_246460:
    // 0x246460: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x246460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_246464:
    // 0x246464: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x246464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_246468:
    // 0x246468: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_24646c:
    // 0x24646c: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246470:
    // 0x246470: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246474:
    // 0x246474: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x246478u;
    return;
}
