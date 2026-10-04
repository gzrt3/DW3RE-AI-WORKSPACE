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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part5(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        case 0x256d50u: goto label_256d50;
        case 0x256d54u: goto label_256d54;
        case 0x256d58u: goto label_256d58;
        case 0x256d5cu: goto label_256d5c;
        case 0x256d60u: goto label_256d60;
        case 0x256d64u: goto label_256d64;
        case 0x256d68u: goto label_256d68;
        case 0x256d6cu: goto label_256d6c;
        case 0x256d70u: goto label_256d70;
        case 0x256d74u: goto label_256d74;
        case 0x256d78u: goto label_256d78;
        case 0x256d7cu: goto label_256d7c;
        case 0x256d80u: goto label_256d80;
        case 0x256d84u: goto label_256d84;
        case 0x256d88u: goto label_256d88;
        case 0x256d8cu: goto label_256d8c;
        case 0x256d90u: goto label_256d90;
        case 0x256d94u: goto label_256d94;
        case 0x256d98u: goto label_256d98;
        case 0x256d9cu: goto label_256d9c;
        case 0x256da0u: goto label_256da0;
        case 0x256da4u: goto label_256da4;
        case 0x256da8u: goto label_256da8;
        case 0x256dacu: goto label_256dac;
        case 0x256db0u: goto label_256db0;
        case 0x256db4u: goto label_256db4;
        case 0x256db8u: goto label_256db8;
        case 0x256dbcu: goto label_256dbc;
        case 0x256dc0u: goto label_256dc0;
        case 0x256dc4u: goto label_256dc4;
        case 0x256dc8u: goto label_256dc8;
        case 0x256dccu: goto label_256dcc;
        case 0x256dd0u: goto label_256dd0;
        case 0x256dd4u: goto label_256dd4;
        case 0x256dd8u: goto label_256dd8;
        case 0x256ddcu: goto label_256ddc;
        case 0x256de0u: goto label_256de0;
        case 0x256de4u: goto label_256de4;
        case 0x256de8u: goto label_256de8;
        case 0x256decu: goto label_256dec;
        case 0x256df0u: goto label_256df0;
        case 0x256df4u: goto label_256df4;
        case 0x256df8u: goto label_256df8;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e00u: goto label_256e00;
        case 0x256e04u: goto label_256e04;
        case 0x256e08u: goto label_256e08;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e10u: goto label_256e10;
        case 0x256e14u: goto label_256e14;
        case 0x256e18u: goto label_256e18;
        case 0x256e1cu: goto label_256e1c;
        case 0x256e20u: goto label_256e20;
        case 0x256e24u: goto label_256e24;
        case 0x256e28u: goto label_256e28;
        case 0x256e2cu: goto label_256e2c;
        case 0x256e30u: goto label_256e30;
        case 0x256e34u: goto label_256e34;
        case 0x256e38u: goto label_256e38;
        case 0x256e3cu: goto label_256e3c;
        case 0x256e40u: goto label_256e40;
        case 0x256e44u: goto label_256e44;
        case 0x256e48u: goto label_256e48;
        case 0x256e4cu: goto label_256e4c;
        case 0x256e50u: goto label_256e50;
        case 0x256e54u: goto label_256e54;
        case 0x256e58u: goto label_256e58;
        case 0x256e5cu: goto label_256e5c;
        case 0x256e60u: goto label_256e60;
        case 0x256e64u: goto label_256e64;
        case 0x256e68u: goto label_256e68;
        case 0x256e6cu: goto label_256e6c;
        case 0x256e70u: goto label_256e70;
        case 0x256e74u: goto label_256e74;
        case 0x256e78u: goto label_256e78;
        case 0x256e7cu: goto label_256e7c;
        case 0x256e80u: goto label_256e80;
        case 0x256e84u: goto label_256e84;
        case 0x256e88u: goto label_256e88;
        case 0x256e8cu: goto label_256e8c;
        case 0x256e90u: goto label_256e90;
        case 0x256e94u: goto label_256e94;
        case 0x256e98u: goto label_256e98;
        case 0x256e9cu: goto label_256e9c;
        case 0x256ea0u: goto label_256ea0;
        case 0x256ea4u: goto label_256ea4;
        case 0x256ea8u: goto label_256ea8;
        case 0x256eacu: goto label_256eac;
        case 0x256eb0u: goto label_256eb0;
        case 0x256eb4u: goto label_256eb4;
        case 0x256eb8u: goto label_256eb8;
        case 0x256ebcu: goto label_256ebc;
        case 0x256ec0u: goto label_256ec0;
        case 0x256ec4u: goto label_256ec4;
        case 0x256ec8u: goto label_256ec8;
        case 0x256eccu: goto label_256ecc;
        case 0x256ed0u: goto label_256ed0;
        case 0x256ed4u: goto label_256ed4;
        case 0x256ed8u: goto label_256ed8;
        case 0x256edcu: goto label_256edc;
        case 0x256ee0u: goto label_256ee0;
        case 0x256ee4u: goto label_256ee4;
        case 0x256ee8u: goto label_256ee8;
        case 0x256eecu: goto label_256eec;
        case 0x256ef0u: goto label_256ef0;
        case 0x256ef4u: goto label_256ef4;
        case 0x256ef8u: goto label_256ef8;
        case 0x256efcu: goto label_256efc;
        case 0x256f00u: goto label_256f00;
        case 0x256f04u: goto label_256f04;
        case 0x256f08u: goto label_256f08;
        case 0x256f0cu: goto label_256f0c;
        case 0x256f10u: goto label_256f10;
        case 0x256f14u: goto label_256f14;
        case 0x256f18u: goto label_256f18;
        case 0x256f1cu: goto label_256f1c;
        case 0x256f20u: goto label_256f20;
        case 0x256f24u: goto label_256f24;
        case 0x256f28u: goto label_256f28;
        case 0x256f2cu: goto label_256f2c;
        case 0x256f30u: goto label_256f30;
        case 0x256f34u: goto label_256f34;
        case 0x256f38u: goto label_256f38;
        case 0x256f3cu: goto label_256f3c;
        case 0x256f40u: goto label_256f40;
        case 0x256f44u: goto label_256f44;
        case 0x256f48u: goto label_256f48;
        case 0x256f4cu: goto label_256f4c;
        case 0x256f50u: goto label_256f50;
        case 0x256f54u: goto label_256f54;
        case 0x256f58u: goto label_256f58;
        case 0x256f5cu: goto label_256f5c;
        case 0x256f60u: goto label_256f60;
        case 0x256f64u: goto label_256f64;
        case 0x256f68u: goto label_256f68;
        case 0x256f6cu: goto label_256f6c;
        case 0x256f70u: goto label_256f70;
        case 0x256f74u: goto label_256f74;
        case 0x256f78u: goto label_256f78;
        case 0x256f7cu: goto label_256f7c;
        case 0x256f80u: goto label_256f80;
        case 0x256f84u: goto label_256f84;
        case 0x256f88u: goto label_256f88;
        case 0x256f8cu: goto label_256f8c;
        case 0x256f90u: goto label_256f90;
        case 0x256f94u: goto label_256f94;
        case 0x256f98u: goto label_256f98;
        case 0x256f9cu: goto label_256f9c;
        case 0x256fa0u: goto label_256fa0;
        case 0x256fa4u: goto label_256fa4;
        case 0x256fa8u: goto label_256fa8;
        case 0x256facu: goto label_256fac;
        case 0x256fb0u: goto label_256fb0;
        case 0x256fb4u: goto label_256fb4;
        case 0x256fb8u: goto label_256fb8;
        case 0x256fbcu: goto label_256fbc;
        case 0x256fc0u: goto label_256fc0;
        case 0x256fc4u: goto label_256fc4;
        case 0x256fc8u: goto label_256fc8;
        case 0x256fccu: goto label_256fcc;
        case 0x256fd0u: goto label_256fd0;
        case 0x256fd4u: goto label_256fd4;
        case 0x256fd8u: goto label_256fd8;
        case 0x256fdcu: goto label_256fdc;
        case 0x256fe0u: goto label_256fe0;
        case 0x256fe4u: goto label_256fe4;
        case 0x256fe8u: goto label_256fe8;
        case 0x256fecu: goto label_256fec;
        case 0x256ff0u: goto label_256ff0;
        case 0x256ff4u: goto label_256ff4;
        case 0x256ff8u: goto label_256ff8;
        case 0x256ffcu: goto label_256ffc;
        case 0x257000u: goto label_257000;
        case 0x257004u: goto label_257004;
        case 0x257008u: goto label_257008;
        case 0x25700cu: goto label_25700c;
        case 0x257010u: goto label_257010;
        case 0x257014u: goto label_257014;
        case 0x257018u: goto label_257018;
        case 0x25701cu: goto label_25701c;
        case 0x257020u: goto label_257020;
        case 0x257024u: goto label_257024;
        case 0x257028u: goto label_257028;
        case 0x25702cu: goto label_25702c;
        case 0x257030u: goto label_257030;
        case 0x257034u: goto label_257034;
        case 0x257038u: goto label_257038;
        case 0x25703cu: goto label_25703c;
        case 0x257040u: goto label_257040;
        case 0x257044u: goto label_257044;
        case 0x257048u: goto label_257048;
        case 0x25704cu: goto label_25704c;
        case 0x257050u: goto label_257050;
        case 0x257054u: goto label_257054;
        case 0x257058u: goto label_257058;
        case 0x25705cu: goto label_25705c;
        case 0x257060u: goto label_257060;
        case 0x257064u: goto label_257064;
        case 0x257068u: goto label_257068;
        case 0x25706cu: goto label_25706c;
        case 0x257070u: goto label_257070;
        case 0x257074u: goto label_257074;
        case 0x257078u: goto label_257078;
        case 0x25707cu: goto label_25707c;
        case 0x257080u: goto label_257080;
        case 0x257084u: goto label_257084;
        case 0x257088u: goto label_257088;
        case 0x25708cu: goto label_25708c;
        case 0x257090u: goto label_257090;
        case 0x257094u: goto label_257094;
        case 0x257098u: goto label_257098;
        case 0x25709cu: goto label_25709c;
        case 0x2570a0u: goto label_2570a0;
        case 0x2570a4u: goto label_2570a4;
        case 0x2570a8u: goto label_2570a8;
        case 0x2570acu: goto label_2570ac;
        case 0x2570b0u: goto label_2570b0;
        case 0x2570b4u: goto label_2570b4;
        case 0x2570b8u: goto label_2570b8;
        case 0x2570bcu: goto label_2570bc;
        case 0x2570c0u: goto label_2570c0;
        case 0x2570c4u: goto label_2570c4;
        case 0x2570c8u: goto label_2570c8;
        case 0x2570ccu: goto label_2570cc;
        case 0x2570d0u: goto label_2570d0;
        case 0x2570d4u: goto label_2570d4;
        case 0x2570d8u: goto label_2570d8;
        case 0x2570dcu: goto label_2570dc;
        case 0x2570e0u: goto label_2570e0;
        case 0x2570e4u: goto label_2570e4;
        case 0x2570e8u: goto label_2570e8;
        case 0x2570ecu: goto label_2570ec;
        case 0x2570f0u: goto label_2570f0;
        case 0x2570f4u: goto label_2570f4;
        case 0x2570f8u: goto label_2570f8;
        case 0x2570fcu: goto label_2570fc;
        case 0x257100u: goto label_257100;
        case 0x257104u: goto label_257104;
        case 0x257108u: goto label_257108;
        case 0x25710cu: goto label_25710c;
        case 0x257110u: goto label_257110;
        case 0x257114u: goto label_257114;
        case 0x257118u: goto label_257118;
        case 0x25711cu: goto label_25711c;
        case 0x257120u: goto label_257120;
        case 0x257124u: goto label_257124;
        case 0x257128u: goto label_257128;
        case 0x25712cu: goto label_25712c;
        case 0x257130u: goto label_257130;
        case 0x257134u: goto label_257134;
        case 0x257138u: goto label_257138;
        case 0x25713cu: goto label_25713c;
        case 0x257140u: goto label_257140;
        case 0x257144u: goto label_257144;
        case 0x257148u: goto label_257148;
        case 0x25714cu: goto label_25714c;
        case 0x257150u: goto label_257150;
        case 0x257154u: goto label_257154;
        case 0x257158u: goto label_257158;
        case 0x25715cu: goto label_25715c;
        case 0x257160u: goto label_257160;
        case 0x257164u: goto label_257164;
        case 0x257168u: goto label_257168;
        case 0x25716cu: goto label_25716c;
        case 0x257170u: goto label_257170;
        case 0x257174u: goto label_257174;
        case 0x257178u: goto label_257178;
        case 0x25717cu: goto label_25717c;
        case 0x257180u: goto label_257180;
        case 0x257184u: goto label_257184;
        case 0x257188u: goto label_257188;
        case 0x25718cu: goto label_25718c;
        case 0x257190u: goto label_257190;
        case 0x257194u: goto label_257194;
        case 0x257198u: goto label_257198;
        case 0x25719cu: goto label_25719c;
        case 0x2571a0u: goto label_2571a0;
        case 0x2571a4u: goto label_2571a4;
        case 0x2571a8u: goto label_2571a8;
        case 0x2571acu: goto label_2571ac;
        case 0x2571b0u: goto label_2571b0;
        case 0x2571b4u: goto label_2571b4;
        case 0x2571b8u: goto label_2571b8;
        case 0x2571bcu: goto label_2571bc;
        case 0x2571c0u: goto label_2571c0;
        case 0x2571c4u: goto label_2571c4;
        case 0x2571c8u: goto label_2571c8;
        case 0x2571ccu: goto label_2571cc;
        case 0x2571d0u: goto label_2571d0;
        case 0x2571d4u: goto label_2571d4;
        case 0x2571d8u: goto label_2571d8;
        case 0x2571dcu: goto label_2571dc;
        case 0x2571e0u: goto label_2571e0;
        case 0x2571e4u: goto label_2571e4;
        case 0x2571e8u: goto label_2571e8;
        case 0x2571ecu: goto label_2571ec;
        case 0x2571f0u: goto label_2571f0;
        case 0x2571f4u: goto label_2571f4;
        case 0x2571f8u: goto label_2571f8;
        case 0x2571fcu: goto label_2571fc;
        case 0x257200u: goto label_257200;
        case 0x257204u: goto label_257204;
        case 0x257208u: goto label_257208;
        case 0x25720cu: goto label_25720c;
        case 0x257210u: goto label_257210;
        case 0x257214u: goto label_257214;
        case 0x257218u: goto label_257218;
        case 0x25721cu: goto label_25721c;
        case 0x257220u: goto label_257220;
        case 0x257224u: goto label_257224;
        case 0x257228u: goto label_257228;
        case 0x25722cu: goto label_25722c;
        case 0x257230u: goto label_257230;
        case 0x257234u: goto label_257234;
        case 0x257238u: goto label_257238;
        case 0x25723cu: goto label_25723c;
        case 0x257240u: goto label_257240;
        case 0x257244u: goto label_257244;
        case 0x257248u: goto label_257248;
        case 0x25724cu: goto label_25724c;
        case 0x257250u: goto label_257250;
        case 0x257254u: goto label_257254;
        case 0x257258u: goto label_257258;
        case 0x25725cu: goto label_25725c;
        case 0x257260u: goto label_257260;
        case 0x257264u: goto label_257264;
        case 0x257268u: goto label_257268;
        case 0x25726cu: goto label_25726c;
        case 0x257270u: goto label_257270;
        case 0x257274u: goto label_257274;
        case 0x257278u: goto label_257278;
        case 0x25727cu: goto label_25727c;
        case 0x257280u: goto label_257280;
        case 0x257284u: goto label_257284;
        case 0x257288u: goto label_257288;
        case 0x25728cu: goto label_25728c;
        case 0x257290u: goto label_257290;
        case 0x257294u: goto label_257294;
        case 0x257298u: goto label_257298;
        case 0x25729cu: goto label_25729c;
        case 0x2572a0u: goto label_2572a0;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572a8u: goto label_2572a8;
        case 0x2572acu: goto label_2572ac;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572b4u: goto label_2572b4;
        case 0x2572b8u: goto label_2572b8;
        case 0x2572bcu: goto label_2572bc;
        case 0x2572c0u: goto label_2572c0;
        case 0x2572c4u: goto label_2572c4;
        case 0x2572c8u: goto label_2572c8;
        case 0x2572ccu: goto label_2572cc;
        case 0x2572d0u: goto label_2572d0;
        case 0x2572d4u: goto label_2572d4;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572dcu: goto label_2572dc;
        case 0x2572e0u: goto label_2572e0;
        case 0x2572e4u: goto label_2572e4;
        case 0x2572e8u: goto label_2572e8;
        case 0x2572ecu: goto label_2572ec;
        case 0x2572f0u: goto label_2572f0;
        case 0x2572f4u: goto label_2572f4;
        case 0x2572f8u: goto label_2572f8;
        case 0x2572fcu: goto label_2572fc;
        case 0x257300u: goto label_257300;
        case 0x257304u: goto label_257304;
        case 0x257308u: goto label_257308;
        case 0x25730cu: goto label_25730c;
        case 0x257310u: goto label_257310;
        case 0x257314u: goto label_257314;
        case 0x257318u: goto label_257318;
        case 0x25731cu: goto label_25731c;
        case 0x257320u: goto label_257320;
        case 0x257324u: goto label_257324;
        case 0x257328u: goto label_257328;
        case 0x25732cu: goto label_25732c;
        case 0x257330u: goto label_257330;
        case 0x257334u: goto label_257334;
        case 0x257338u: goto label_257338;
        case 0x25733cu: goto label_25733c;
        case 0x257340u: goto label_257340;
        case 0x257344u: goto label_257344;
        case 0x257348u: goto label_257348;
        case 0x25734cu: goto label_25734c;
        case 0x257350u: goto label_257350;
        case 0x257354u: goto label_257354;
        case 0x257358u: goto label_257358;
        case 0x25735cu: goto label_25735c;
        case 0x257360u: goto label_257360;
        case 0x257364u: goto label_257364;
        case 0x257368u: goto label_257368;
        case 0x25736cu: goto label_25736c;
        case 0x257370u: goto label_257370;
        case 0x257374u: goto label_257374;
        case 0x257378u: goto label_257378;
        case 0x25737cu: goto label_25737c;
        case 0x257380u: goto label_257380;
        case 0x257384u: goto label_257384;
        case 0x257388u: goto label_257388;
        case 0x25738cu: goto label_25738c;
        case 0x257390u: goto label_257390;
        case 0x257394u: goto label_257394;
        case 0x257398u: goto label_257398;
        case 0x25739cu: goto label_25739c;
        case 0x2573a0u: goto label_2573a0;
        case 0x2573a4u: goto label_2573a4;
        case 0x2573a8u: goto label_2573a8;
        case 0x2573acu: goto label_2573ac;
        case 0x2573b0u: goto label_2573b0;
        case 0x2573b4u: goto label_2573b4;
        case 0x2573b8u: goto label_2573b8;
        case 0x2573bcu: goto label_2573bc;
        case 0x2573c0u: goto label_2573c0;
        case 0x2573c4u: goto label_2573c4;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ccu: goto label_2573cc;
        case 0x2573d0u: goto label_2573d0;
        case 0x2573d4u: goto label_2573d4;
        case 0x2573d8u: goto label_2573d8;
        case 0x2573dcu: goto label_2573dc;
        case 0x2573e0u: goto label_2573e0;
        case 0x2573e4u: goto label_2573e4;
        case 0x2573e8u: goto label_2573e8;
        case 0x2573ecu: goto label_2573ec;
        case 0x2573f0u: goto label_2573f0;
        case 0x2573f4u: goto label_2573f4;
        case 0x2573f8u: goto label_2573f8;
        case 0x2573fcu: goto label_2573fc;
        case 0x257400u: goto label_257400;
        case 0x257404u: goto label_257404;
        case 0x257408u: goto label_257408;
        case 0x25740cu: goto label_25740c;
        case 0x257410u: goto label_257410;
        case 0x257414u: goto label_257414;
        case 0x257418u: goto label_257418;
        case 0x25741cu: goto label_25741c;
        case 0x257420u: goto label_257420;
        case 0x257424u: goto label_257424;
        case 0x257428u: goto label_257428;
        case 0x25742cu: goto label_25742c;
        case 0x257430u: goto label_257430;
        case 0x257434u: goto label_257434;
        case 0x257438u: goto label_257438;
        case 0x25743cu: goto label_25743c;
        case 0x257440u: goto label_257440;
        case 0x257444u: goto label_257444;
        default: return;
    }

label_256c78:
    // 0x256c78: 0x0  nop
    ctx->pc = 0x256c78u;
    // NOP
label_256c7c:
    // 0x256c7c: 0x0  nop
    ctx->pc = 0x256c7cu;
    // NOP
label_256c80:
    // 0x256c80: 0x60d  break       0, 24
    ctx->pc = 0x256c80u;
    runtime->handleBreak(rdram, ctx);
label_256c84:
    // 0x256c84: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x256c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c88:
    // 0x256c88: 0x0  nop
    ctx->pc = 0x256c88u;
    // NOP
label_256c8c:
    // 0x256c8c: 0x0  nop
    ctx->pc = 0x256c8cu;
    // NOP
label_256c90:
    // 0x256c90: 0x61c  .word       0x0000061C                   # dmult       $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256C90 raw=0x0000061C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256c94:
    // 0x256c94: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_256c98:
    // 0x256c98: 0x0  nop
    ctx->pc = 0x256c98u;
    // NOP
label_256c9c:
    // 0x256c9c: 0x0  nop
    ctx->pc = 0x256c9cu;
    // NOP
label_256ca0:
    // 0x256ca0: 0x62f  .word       0x0000062F                   # dsubu       $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_256ca4:
    // 0x256ca4: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x256ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ca8:
    // 0x256ca8: 0x0  nop
    ctx->pc = 0x256ca8u;
    // NOP
label_256cac:
    // 0x256cac: 0x0  nop
    ctx->pc = 0x256cacu;
    // NOP
label_256cb0:
    // 0x256cb0: 0x63e  dsrl32      $zero, $zero, 24
    ctx->pc = 0x256cb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 24));
label_256cb4:
    // 0x256cb4: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256cb8:
    // 0x256cb8: 0x0  nop
    ctx->pc = 0x256cb8u;
    // NOP
label_256cbc:
    // 0x256cbc: 0x0  nop
    ctx->pc = 0x256cbcu;
    // NOP
label_256cc0:
    // 0x256cc0: 0x64d  break       0, 25
    ctx->pc = 0x256cc0u;
    runtime->handleBreak(rdram, ctx);
label_256cc4:
    // 0x256cc4: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256cc8:
    // 0x256cc8: 0x0  nop
    ctx->pc = 0x256cc8u;
    // NOP
label_256ccc:
    // 0x256ccc: 0x0  nop
    ctx->pc = 0x256cccu;
    // NOP
label_256cd0:
    // 0x256cd0: 0x65a  .word       0x0000065A                   # div         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256cd4:
    // 0x256cd4: 0x59b0  tge         $zero, $zero, 358
    ctx->pc = 0x256cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256cd8:
    // 0x256cd8: 0x0  nop
    ctx->pc = 0x256cd8u;
    // NOP
label_256cdc:
    // 0x256cdc: 0x0  nop
    ctx->pc = 0x256cdcu;
    // NOP
label_256ce0:
    // 0x256ce0: 0x666  .word       0x00000666                   # xor         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ce0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256ce4:
    // 0x256ce4: 0x14d70  tge         $zero, $at, 309
    ctx->pc = 0x256ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256ce8:
    // 0x256ce8: 0x0  nop
    ctx->pc = 0x256ce8u;
    // NOP
label_256cec:
    // 0x256cec: 0x0  nop
    ctx->pc = 0x256cecu;
    // NOP
label_256cf0:
    // 0x256cf0: 0x690  .word       0x00000690                   # mfhi        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_256cf4:
    // 0x256cf4: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256cf8:
    // 0x256cf8: 0x0  nop
    ctx->pc = 0x256cf8u;
    // NOP
label_256cfc:
    // 0x256cfc: 0x0  nop
    ctx->pc = 0x256cfcu;
    // NOP
label_256d00:
    // 0x256d00: 0x6a1  .word       0x000006A1                   # addu        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256d04:
    // 0x256d04: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d08:
    // 0x256d08: 0x0  nop
    ctx->pc = 0x256d08u;
    // NOP
label_256d0c:
    // 0x256d0c: 0x0  nop
    ctx->pc = 0x256d0cu;
    // NOP
label_256d10:
    // 0x256d10: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x256d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d14:
    // 0x256d14: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x256d14u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256d18:
    // 0x256d18: 0x0  nop
    ctx->pc = 0x256d18u;
    // NOP
label_256d1c:
    // 0x256d1c: 0x0  nop
    ctx->pc = 0x256d1cu;
    // NOP
label_256d20:
    // 0x256d20: 0x6bf  dsra32      $zero, $zero, 26
    ctx->pc = 0x256d20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 26));
label_256d24:
    // 0x256d24: 0x7010  mfhi        $t6
    ctx->pc = 0x256d24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_256d28:
    // 0x256d28: 0x0  nop
    ctx->pc = 0x256d28u;
    // NOP
label_256d2c:
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
label_256d30:
    // 0x256d30: 0x6ce  .word       0x000006CE                   # INVALID     $zero, $zero, 0x6CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256D30 raw=0x000006CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256d34:
    // 0x256d34: 0x6e10  .word       0x00006E10                   # mfhi        $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256d38:
    // 0x256d38: 0x0  nop
    ctx->pc = 0x256d38u;
    // NOP
label_256d3c:
    // 0x256d3c: 0x0  nop
    ctx->pc = 0x256d3cu;
    // NOP
label_256d40:
    // 0x256d40: 0x6dc  .word       0x000006DC                   # dmult       $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256D40 raw=0x000006DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256d44:
    // 0x256d44: 0x6370  tge         $zero, $zero, 397
    ctx->pc = 0x256d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d48:
    // 0x256d48: 0x0  nop
    ctx->pc = 0x256d48u;
    // NOP
label_256d4c:
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
label_256d50:
    // 0x256d50: 0x6e9  .word       0x000006E9                   # mtsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256d50u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_256d54:
    // 0x256d54: 0x10070  tge         $zero, $at, 1
    ctx->pc = 0x256d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256d58:
    // 0x256d58: 0x0  nop
    ctx->pc = 0x256d58u;
    // NOP
label_256d5c:
    // 0x256d5c: 0x0  nop
    ctx->pc = 0x256d5cu;
    // NOP
label_256d60:
    // 0x256d60: 0x70a  .word       0x0000070A                   # movz        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256d64:
    // 0x256d64: 0x7900  sll         $t7, $zero, 4
    ctx->pc = 0x256d64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_256d68:
    // 0x256d68: 0x0  nop
    ctx->pc = 0x256d68u;
    // NOP
label_256d6c:
    // 0x256d6c: 0x0  nop
    ctx->pc = 0x256d6cu;
    // NOP
label_256d70:
    // 0x256d70: 0x71a  .word       0x0000071A                   # div         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256d74:
    // 0x256d74: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x256d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d78:
    // 0x256d78: 0x0  nop
    ctx->pc = 0x256d78u;
    // NOP
label_256d7c:
    // 0x256d7c: 0x0  nop
    ctx->pc = 0x256d7cu;
    // NOP
label_256d80:
    // 0x256d80: 0x72b  .word       0x0000072B                   # sltu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_256d84:
    // 0x256d84: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256d88:
    // 0x256d88: 0x0  nop
    ctx->pc = 0x256d88u;
    // NOP
label_256d8c:
    // 0x256d8c: 0x0  nop
    ctx->pc = 0x256d8cu;
    // NOP
label_256d90:
    // 0x256d90: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x256d90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_256d94:
    // 0x256d94: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d98:
    // 0x256d98: 0x0  nop
    ctx->pc = 0x256d98u;
    // NOP
label_256d9c:
    // 0x256d9c: 0x0  nop
    ctx->pc = 0x256d9cu;
    // NOP
label_256da0:
    // 0x256da0: 0x74c  syscall     29
    ctx->pc = 0x256da0u;
    ctx->pc = 0x256DA4u;
runtime->handleSyscall(rdram, ctx, 0x1Du);
label_256da4:
    // 0x256da4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256da8:
    // 0x256da8: 0x0  nop
    ctx->pc = 0x256da8u;
    // NOP
label_256dac:
    // 0x256dac: 0x0  nop
    ctx->pc = 0x256dacu;
    // NOP
label_256db0:
    // 0x256db0: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256DB0 raw=0x0000075C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256db4:
    // 0x256db4: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x256db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_256db8:
    // 0x256db8: 0x0  nop
    ctx->pc = 0x256db8u;
    // NOP
label_256dbc:
    // 0x256dbc: 0x0  nop
    ctx->pc = 0x256dbcu;
    // NOP
label_256dc0:
    // 0x256dc0: 0x76d  .word       0x0000076D                   # daddu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dc0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256dc4:
    // 0x256dc4: 0xebb0  tge         $zero, $zero, 942
    ctx->pc = 0x256dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256dc8:
    // 0x256dc8: 0x0  nop
    ctx->pc = 0x256dc8u;
    // NOP
label_256dcc:
    // 0x256dcc: 0x0  nop
    ctx->pc = 0x256dccu;
    // NOP
label_256dd0:
    // 0x256dd0: 0x78b  .word       0x0000078B                   # movn        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256dd4:
    // 0x256dd4: 0xa460  .word       0x0000A460                   # add         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_256dd8:
    // 0x256dd8: 0x0  nop
    ctx->pc = 0x256dd8u;
    // NOP
label_256ddc:
    // 0x256ddc: 0x0  nop
    ctx->pc = 0x256ddcu;
    // NOP
label_256de0:
    // 0x256de0: 0x7a0  .word       0x000007A0                   # add         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256de0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256de4:
    // 0x256de4: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x256de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256de8:
    // 0x256de8: 0x0  nop
    ctx->pc = 0x256de8u;
    // NOP
label_256dec:
    // 0x256dec: 0x0  nop
    ctx->pc = 0x256decu;
    // NOP
label_256df0:
    // 0x256df0: 0x7b3  tltu        $zero, $zero, 30
    ctx->pc = 0x256df0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df4:
    // 0x256df4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x256df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df8:
    // 0x256df8: 0x0  nop
    ctx->pc = 0x256df8u;
    // NOP
label_256dfc:
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
label_256e00:
    // 0x256e00: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256E00 raw=0x000007C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256e04:
    // 0x256e04: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256e08:
    // 0x256e08: 0x0  nop
    ctx->pc = 0x256e08u;
    // NOP
label_256e0c:
    // 0x256e0c: 0x0  nop
    ctx->pc = 0x256e0cu;
    // NOP
label_256e10:
    // 0x256e10: 0x7cd  break       0, 31
    ctx->pc = 0x256e10u;
    runtime->handleBreak(rdram, ctx);
label_256e14:
    // 0x256e14: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256e18:
    // 0x256e18: 0x0  nop
    ctx->pc = 0x256e18u;
    // NOP
label_256e1c:
    // 0x256e1c: 0x0  nop
    ctx->pc = 0x256e1cu;
    // NOP
label_256e20:
    // 0x256e20: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256e24:
    // 0x256e24: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_256e28:
    // 0x256e28: 0x0  nop
    ctx->pc = 0x256e28u;
    // NOP
label_256e2c:
    // 0x256e2c: 0x0  nop
    ctx->pc = 0x256e2cu;
    // NOP
label_256e30:
    // 0x256e30: 0x7e8  .word       0x000007E8                   # mfsa        $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256e30u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_256e34:
    // 0x256e34: 0x15810  .word       0x00015810                   # mfhi        $t3 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e34u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256e38:
    // 0x256e38: 0x0  nop
    ctx->pc = 0x256e38u;
    // NOP
label_256e3c:
    // 0x256e3c: 0x0  nop
    ctx->pc = 0x256e3cu;
    // NOP
label_256e40:
    // 0x256e40: 0x814  dsllv       $at, $zero, $zero
    ctx->pc = 0x256e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_256e44:
    // 0x256e44: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x256e44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256e48:
    // 0x256e48: 0x0  nop
    ctx->pc = 0x256e48u;
    // NOP
label_256e4c:
    // 0x256e4c: 0x0  nop
    ctx->pc = 0x256e4cu;
    // NOP
label_256e50:
    // 0x256e50: 0x826  xor         $at, $zero, $zero
    ctx->pc = 0x256e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256e54:
    // 0x256e54: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x256e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e58:
    // 0x256e58: 0x0  nop
    ctx->pc = 0x256e58u;
    // NOP
label_256e5c:
    // 0x256e5c: 0x0  nop
    ctx->pc = 0x256e5cu;
    // NOP
label_256e60:
    // 0x256e60: 0x833  tltu        $zero, $zero, 32
    ctx->pc = 0x256e60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e64:
    // 0x256e64: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x256e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e68:
    // 0x256e68: 0x0  nop
    ctx->pc = 0x256e68u;
    // NOP
label_256e6c:
    // 0x256e6c: 0x0  nop
    ctx->pc = 0x256e6cu;
    // NOP
label_256e70:
    // 0x256e70: 0x846  .word       0x00000846                   # srlv        $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e70u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256e74:
    // 0x256e74: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x256e74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256e78:
    // 0x256e78: 0x0  nop
    ctx->pc = 0x256e78u;
    // NOP
label_256e7c:
    // 0x256e7c: 0x0  nop
    ctx->pc = 0x256e7cu;
    // NOP
label_256e80:
    // 0x256e80: 0x859  .word       0x00000859                   # multu       $zero, $zero # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e80u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_256e84:
    // 0x256e84: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256e88:
    // 0x256e88: 0x0  nop
    ctx->pc = 0x256e88u;
    // NOP
label_256e8c:
    // 0x256e8c: 0x0  nop
    ctx->pc = 0x256e8cu;
    // NOP
label_256e90:
    // 0x256e90: 0x86c  .word       0x0000086C                   # dadd        $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_256e94:
    // 0x256e94: 0xaa00  sll         $s5, $zero, 8
    ctx->pc = 0x256e94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256e98:
    // 0x256e98: 0x0  nop
    ctx->pc = 0x256e98u;
    // NOP
label_256e9c:
    // 0x256e9c: 0x0  nop
    ctx->pc = 0x256e9cu;
    // NOP
label_256ea0:
    // 0x256ea0: 0x882  srl         $at, $zero, 2
    ctx->pc = 0x256ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_256ea4:
    // 0x256ea4: 0x17ea0  .word       0x00017EA0                   # add         $t7, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256ea8:
    // 0x256ea8: 0x0  nop
    ctx->pc = 0x256ea8u;
    // NOP
label_256eac:
    // 0x256eac: 0x0  nop
    ctx->pc = 0x256eacu;
    // NOP
label_256eb0:
    // 0x256eb0: 0x8b2  tlt         $zero, $zero, 34
    ctx->pc = 0x256eb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256eb4:
    // 0x256eb4: 0x83c0  sll         $s0, $zero, 15
    ctx->pc = 0x256eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_256eb8:
    // 0x256eb8: 0x0  nop
    ctx->pc = 0x256eb8u;
    // NOP
label_256ebc:
    // 0x256ebc: 0x0  nop
    ctx->pc = 0x256ebcu;
    // NOP
label_256ec0:
    // 0x256ec0: 0x8c3  sra         $at, $zero, 3
    ctx->pc = 0x256ec0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 3));
label_256ec4:
    // 0x256ec4: 0xf050  .word       0x0000F050                   # mfhi        $fp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ec4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_256ec8:
    // 0x256ec8: 0x0  nop
    ctx->pc = 0x256ec8u;
    // NOP
label_256ecc:
    // 0x256ecc: 0x0  nop
    ctx->pc = 0x256eccu;
    // NOP
label_256ed0:
    // 0x256ed0: 0x8e2  .word       0x000008E2                   # neg         $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256ed4:
    // 0x256ed4: 0xcf20  .word       0x0000CF20                   # add         $t9, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_256ed8:
    // 0x256ed8: 0x0  nop
    ctx->pc = 0x256ed8u;
    // NOP
label_256edc:
    // 0x256edc: 0x0  nop
    ctx->pc = 0x256edcu;
    // NOP
label_256ee0:
    // 0x256ee0: 0x8fc  dsll32      $at, $zero, 3
    ctx->pc = 0x256ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 3));
label_256ee4:
    // 0x256ee4: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x256ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ee8:
    // 0x256ee8: 0x0  nop
    ctx->pc = 0x256ee8u;
    // NOP
label_256eec:
    // 0x256eec: 0x0  nop
    ctx->pc = 0x256eecu;
    // NOP
label_256ef0:
    // 0x256ef0: 0x912  .word       0x00000912                   # mflo        $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ef0u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_256ef4:
    // 0x256ef4: 0x7a60  .word       0x00007A60                   # add         $t7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256ef8:
    // 0x256ef8: 0x0  nop
    ctx->pc = 0x256ef8u;
    // NOP
label_256efc:
    // 0x256efc: 0x0  nop
    ctx->pc = 0x256efcu;
    // NOP
label_256f00:
    // 0x256f00: 0x922  .word       0x00000922                   # neg         $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256f04:
    // 0x256f04: 0x6600  sll         $t4, $zero, 24
    ctx->pc = 0x256f04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_256f08:
    // 0x256f08: 0x0  nop
    ctx->pc = 0x256f08u;
    // NOP
label_256f0c:
    // 0x256f0c: 0x0  nop
    ctx->pc = 0x256f0cu;
    // NOP
label_256f10:
    // 0x256f10: 0x92f  .word       0x0000092F                   # dsubu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_256f14:
    // 0x256f14: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x256f14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f18:
    // 0x256f18: 0x0  nop
    ctx->pc = 0x256f18u;
    // NOP
label_256f1c:
    // 0x256f1c: 0x0  nop
    ctx->pc = 0x256f1cu;
    // NOP
label_256f20:
    // 0x256f20: 0x94b  .word       0x0000094B                   # movn        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_256f24:
    // 0x256f24: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256f28:
    // 0x256f28: 0x0  nop
    ctx->pc = 0x256f28u;
    // NOP
label_256f2c:
    // 0x256f2c: 0x0  nop
    ctx->pc = 0x256f2cu;
    // NOP
label_256f30:
    // 0x256f30: 0x962  .word       0x00000962                   # neg         $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f30u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_256f34:
    // 0x256f34: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x256f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f38:
    // 0x256f38: 0x0  nop
    ctx->pc = 0x256f38u;
    // NOP
label_256f3c:
    // 0x256f3c: 0x0  nop
    ctx->pc = 0x256f3cu;
    // NOP
label_256f40:
    // 0x256f40: 0x976  tne         $zero, $zero, 37
    ctx->pc = 0x256f40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f44:
    // 0x256f44: 0x9430  tge         $zero, $zero, 592
    ctx->pc = 0x256f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f48:
    // 0x256f48: 0x0  nop
    ctx->pc = 0x256f48u;
    // NOP
label_256f4c:
    // 0x256f4c: 0x0  nop
    ctx->pc = 0x256f4cu;
    // NOP
label_256f50:
    // 0x256f50: 0x989  .word       0x00000989                   # jalr        $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_256f54:
    if (ctx->pc == 0x256F54u) {
        ctx->pc = 0x256F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F50u;
        // 0x256f54: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x256F58u;
        goto label_256f58;
    }
    ctx->pc = 0x256F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x256F58u);
        ctx->pc = 0x256F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F50u;
        // 0x256f54: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F50u, 0x256F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256F58u;
label_256f58:
    // 0x256f58: 0x0  nop
    ctx->pc = 0x256f58u;
    // NOP
label_256f5c:
    // 0x256f5c: 0x0  nop
    ctx->pc = 0x256f5cu;
    // NOP
label_256f60:
    // 0x256f60: 0x999  .word       0x00000999                   # multu       $zero, $zero # 00000980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_256f64:
    // 0x256f64: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x256f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256f68:
    // 0x256f68: 0x0  nop
    ctx->pc = 0x256f68u;
    // NOP
label_256f6c:
    // 0x256f6c: 0x0  nop
    ctx->pc = 0x256f6cu;
    // NOP
label_256f70:
    // 0x256f70: 0x9ad  .word       0x000009AD                   # daddu       $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f70u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256f74:
    // 0x256f74: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f74u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_256f78:
    // 0x256f78: 0x0  nop
    ctx->pc = 0x256f78u;
    // NOP
label_256f7c:
    // 0x256f7c: 0x0  nop
    ctx->pc = 0x256f7cu;
    // NOP
label_256f80:
    // 0x256f80: 0x9c3  sra         $at, $zero, 7
    ctx->pc = 0x256f80u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 7));
label_256f84:
    // 0x256f84: 0xfa80  sll         $ra, $zero, 10
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256f88:
    // 0x256f88: 0x0  nop
    ctx->pc = 0x256f88u;
    // NOP
label_256f8c:
    // 0x256f8c: 0x0  nop
    ctx->pc = 0x256f8cu;
    // NOP
label_256f90:
    // 0x256f90: 0x9e3  .word       0x000009E3                   # negu        $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f90u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256f94:
    // 0x256f94: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_256f98:
    // 0x256f98: 0x0  nop
    ctx->pc = 0x256f98u;
    // NOP
label_256f9c:
    // 0x256f9c: 0x0  nop
    ctx->pc = 0x256f9cu;
    // NOP
label_256fa0:
    // 0x256fa0: 0x9ee  .word       0x000009EE                   # dsub        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_256fa4:
    // 0x256fa4: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_256fa8:
    // 0x256fa8: 0x0  nop
    ctx->pc = 0x256fa8u;
    // NOP
label_256fac:
    // 0x256fac: 0x0  nop
    ctx->pc = 0x256facu;
    // NOP
label_256fb0:
    // 0x256fb0: 0xa02  srl         $at, $zero, 8
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_256fb4:
    // 0x256fb4: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_256fb8:
    // 0x256fb8: 0x0  nop
    ctx->pc = 0x256fb8u;
    // NOP
label_256fbc:
    // 0x256fbc: 0x0  nop
    ctx->pc = 0x256fbcu;
    // NOP
label_256fc0:
    // 0x256fc0: 0xa15  .word       0x00000A15                   # INVALID     $zero, $zero, 0xA15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x256FC0 raw=0x00000A15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256fc4:
    // 0x256fc4: 0x7c60  .word       0x00007C60                   # add         $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256fc8:
    // 0x256fc8: 0x0  nop
    ctx->pc = 0x256fc8u;
    // NOP
label_256fcc:
    // 0x256fcc: 0x0  nop
    ctx->pc = 0x256fccu;
    // NOP
label_256fd0:
    // 0x256fd0: 0xa25  .word       0x00000A25                   # move        $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256fd4:
    // 0x256fd4: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256fd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256fd8:
    // 0x256fd8: 0x0  nop
    ctx->pc = 0x256fd8u;
    // NOP
label_256fdc:
    // 0x256fdc: 0x0  nop
    ctx->pc = 0x256fdcu;
    // NOP
label_256fe0:
    // 0x256fe0: 0xa32  tlt         $zero, $zero, 40
    ctx->pc = 0x256fe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256fe4:
    // 0x256fe4: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x256fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256fe8:
    // 0x256fe8: 0x0  nop
    ctx->pc = 0x256fe8u;
    // NOP
label_256fec:
    // 0x256fec: 0x0  nop
    ctx->pc = 0x256fecu;
    // NOP
label_256ff0:
    // 0x256ff0: 0xa42  srl         $at, $zero, 9
    ctx->pc = 0x256ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_256ff4:
    // 0x256ff4: 0x13bb0  tge         $zero, $at, 238
    ctx->pc = 0x256ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256ff8:
    // 0x256ff8: 0x0  nop
    ctx->pc = 0x256ff8u;
    // NOP
label_256ffc:
    // 0x256ffc: 0x0  nop
    ctx->pc = 0x256ffcu;
    // NOP
label_257000:
    // 0x257000: 0xa6a  .word       0x00000A6A                   # slt         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_257004:
    // 0x257004: 0x4770  tge         $zero, $zero, 285
    ctx->pc = 0x257004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257008:
    // 0x257008: 0x0  nop
    ctx->pc = 0x257008u;
    // NOP
label_25700c:
    // 0x25700c: 0x0  nop
    ctx->pc = 0x25700cu;
    // NOP
label_257010:
    // 0x257010: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x257010u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257014:
    // 0x257014: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_257018:
    // 0x257018: 0x0  nop
    ctx->pc = 0x257018u;
    // NOP
label_25701c:
    // 0x25701c: 0x0  nop
    ctx->pc = 0x25701cu;
    // NOP
label_257020:
    // 0x257020: 0xa80  sll         $at, $zero, 10
    ctx->pc = 0x257020u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_257024:
    // 0x257024: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x257024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257028:
    // 0x257028: 0x0  nop
    ctx->pc = 0x257028u;
    // NOP
label_25702c:
    // 0x25702c: 0x0  nop
    ctx->pc = 0x25702cu;
    // NOP
label_257030:
    // 0x257030: 0xa8a  .word       0x00000A8A                   # movz        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257030u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_257034:
    // 0x257034: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x257034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_257038:
    // 0x257038: 0x0  nop
    ctx->pc = 0x257038u;
    // NOP
label_25703c:
    // 0x25703c: 0x0  nop
    ctx->pc = 0x25703cu;
    // NOP
label_257040:
    // 0x257040: 0xa94  .word       0x00000A94                   # dsllv       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257044:
    // 0x257044: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x257044u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_257048:
    // 0x257048: 0x0  nop
    ctx->pc = 0x257048u;
    // NOP
label_25704c:
    // 0x25704c: 0x0  nop
    ctx->pc = 0x25704cu;
    // NOP
label_257050:
    // 0x257050: 0xaa7  .word       0x00000AA7                   # not         $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257050u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_257054:
    // 0x257054: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257058:
    // 0x257058: 0x0  nop
    ctx->pc = 0x257058u;
    // NOP
label_25705c:
    // 0x25705c: 0x0  nop
    ctx->pc = 0x25705cu;
    // NOP
label_257060:
    // 0x257060: 0xab1  tgeu        $zero, $zero, 42
    ctx->pc = 0x257060u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257064:
    // 0x257064: 0xeae0  .word       0x0000EAE0                   # add         $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_257068:
    // 0x257068: 0x0  nop
    ctx->pc = 0x257068u;
    // NOP
label_25706c:
    // 0x25706c: 0x0  nop
    ctx->pc = 0x25706cu;
    // NOP
label_257070:
    // 0x257070: 0xacf  .word       0x00000ACF                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_257074:
    // 0x257074: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_257078:
    // 0x257078: 0x0  nop
    ctx->pc = 0x257078u;
    // NOP
label_25707c:
    // 0x25707c: 0x0  nop
    ctx->pc = 0x25707cu;
    // NOP
label_257080:
    // 0x257080: 0xadd  .word       0x00000ADD                   # dmultu      $zero, $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x257080 raw=0x00000ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257084:
    // 0x257084: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257084u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_257088:
    // 0x257088: 0x0  nop
    ctx->pc = 0x257088u;
    // NOP
label_25708c:
    // 0x25708c: 0x0  nop
    ctx->pc = 0x25708cu;
    // NOP
label_257090:
    // 0x257090: 0xaeb  .word       0x00000AEB                   # sltu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_257094:
    // 0x257094: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257094u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_257098:
    // 0x257098: 0x0  nop
    ctx->pc = 0x257098u;
    // NOP
label_25709c:
    // 0x25709c: 0x0  nop
    ctx->pc = 0x25709cu;
    // NOP
label_2570a0:
    // 0x2570a0: 0xaf9  .word       0x00000AF9                   # INVALID     $zero, $zero, 0xAF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2570A0 raw=0x00000AF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2570a4:
    // 0x2570a4: 0x5ad0  .word       0x00005AD0                   # mfhi        $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2570a8:
    // 0x2570a8: 0x0  nop
    ctx->pc = 0x2570a8u;
    // NOP
label_2570ac:
    // 0x2570ac: 0x0  nop
    ctx->pc = 0x2570acu;
    // NOP
label_2570b0:
    // 0x2570b0: 0xb05  .word       0x00000B05                   # INVALID     $zero, $zero, 0xB05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2570B0 raw=0x00000B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2570b4:
    // 0x2570b4: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2570b8:
    // 0x2570b8: 0x0  nop
    ctx->pc = 0x2570b8u;
    // NOP
label_2570bc:
    // 0x2570bc: 0x0  nop
    ctx->pc = 0x2570bcu;
    // NOP
label_2570c0:
    // 0x2570c0: 0xb1a  .word       0x00000B1A                   # div         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2570c4:
    // 0x2570c4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2570c8:
    // 0x2570c8: 0x0  nop
    ctx->pc = 0x2570c8u;
    // NOP
label_2570cc:
    // 0x2570cc: 0x0  nop
    ctx->pc = 0x2570ccu;
    // NOP
label_2570d0:
    // 0x2570d0: 0xb26  .word       0x00000B26                   # xor         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2570d4:
    // 0x2570d4: 0x16490  .word       0x00016490                   # mfhi        $t4 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2570d8:
    // 0x2570d8: 0x0  nop
    ctx->pc = 0x2570d8u;
    // NOP
label_2570dc:
    // 0x2570dc: 0x0  nop
    ctx->pc = 0x2570dcu;
    // NOP
label_2570e0:
    // 0x2570e0: 0xb53  .word       0x00000B53                   # mtlo        $zero # 00000B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2570e4:
    // 0x2570e4: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x2570e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2570e8:
    // 0x2570e8: 0x0  nop
    ctx->pc = 0x2570e8u;
    // NOP
label_2570ec:
    // 0x2570ec: 0x0  nop
    ctx->pc = 0x2570ecu;
    // NOP
label_2570f0:
    // 0x2570f0: 0xb64  .word       0x00000B64                   # and         $at, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2570f4:
    // 0x2570f4: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2570f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2570f8:
    // 0x2570f8: 0x0  nop
    ctx->pc = 0x2570f8u;
    // NOP
label_2570fc:
    // 0x2570fc: 0x0  nop
    ctx->pc = 0x2570fcu;
    // NOP
label_257100:
    // 0x257100: 0xb75  .word       0x00000B75                   # INVALID     $zero, $zero, 0xB75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257100 raw=0x00000B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257104:
    // 0x257104: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_257108:
    // 0x257108: 0x0  nop
    ctx->pc = 0x257108u;
    // NOP
label_25710c:
    // 0x25710c: 0x0  nop
    ctx->pc = 0x25710cu;
    // NOP
label_257110:
    // 0x257110: 0xb88  .word       0x00000B88                   # jr          $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
label_257114:
    if (ctx->pc == 0x257114u) {
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257110u;
        // 0x257114: 0x6c80  sll         $t5, $zero, 18 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257118u;
        goto label_257118;
    }
    ctx->pc = 0x257110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257110u;
        // 0x257114: 0x6c80  sll         $t5, $zero, 18 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257118u;
label_257118:
    // 0x257118: 0x0  nop
    ctx->pc = 0x257118u;
    // NOP
label_25711c:
    // 0x25711c: 0x0  nop
    ctx->pc = 0x25711cu;
    // NOP
label_257120:
    // 0x257120: 0xb96  .word       0x00000B96                   # dsrlv       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257124:
    // 0x257124: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_257128:
    // 0x257128: 0x0  nop
    ctx->pc = 0x257128u;
    // NOP
label_25712c:
    // 0x25712c: 0x0  nop
    ctx->pc = 0x25712cu;
    // NOP
label_257130:
    // 0x257130: 0xbb3  tltu        $zero, $zero, 46
    ctx->pc = 0x257130u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257134:
    // 0x257134: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257134u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_257138:
    // 0x257138: 0x0  nop
    ctx->pc = 0x257138u;
    // NOP
label_25713c:
    // 0x25713c: 0x0  nop
    ctx->pc = 0x25713cu;
    // NOP
label_257140:
    // 0x257140: 0xbc6  .word       0x00000BC6                   # srlv        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257144:
    // 0x257144: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x257144u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_257148:
    // 0x257148: 0x0  nop
    ctx->pc = 0x257148u;
    // NOP
label_25714c:
    // 0x25714c: 0x0  nop
    ctx->pc = 0x25714cu;
    // NOP
label_257150:
    // 0x257150: 0xbe0  .word       0x00000BE0                   # add         $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257150u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_257154:
    // 0x257154: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_257158:
    // 0x257158: 0x0  nop
    ctx->pc = 0x257158u;
    // NOP
label_25715c:
    // 0x25715c: 0x0  nop
    ctx->pc = 0x25715cu;
    // NOP
label_257160:
    // 0x257160: 0xbf3  tltu        $zero, $zero, 47
    ctx->pc = 0x257160u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257164:
    // 0x257164: 0x82b0  tge         $zero, $zero, 522
    ctx->pc = 0x257164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257168:
    // 0x257168: 0x0  nop
    ctx->pc = 0x257168u;
    // NOP
label_25716c:
    // 0x25716c: 0x0  nop
    ctx->pc = 0x25716cu;
    // NOP
label_257170:
    // 0x257170: 0xc04  .word       0x00000C04                   # sllv        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_257174:
    // 0x257174: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x257174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257178:
    // 0x257178: 0x0  nop
    ctx->pc = 0x257178u;
    // NOP
label_25717c:
    // 0x25717c: 0x0  nop
    ctx->pc = 0x25717cu;
    // NOP
label_257180:
    // 0x257180: 0xc17  .word       0x00000C17                   # dsrav       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257180u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_257184:
    // 0x257184: 0x6b80  sll         $t5, $zero, 14
    ctx->pc = 0x257184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_257188:
    // 0x257188: 0x0  nop
    ctx->pc = 0x257188u;
    // NOP
label_25718c:
    // 0x25718c: 0x0  nop
    ctx->pc = 0x25718cu;
    // NOP
label_257190:
    // 0x257190: 0xc25  .word       0x00000C25                   # move        $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_257194:
    // 0x257194: 0x4ee0  .word       0x00004EE0                   # add         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_257198:
    // 0x257198: 0x0  nop
    ctx->pc = 0x257198u;
    // NOP
label_25719c:
    // 0x25719c: 0x0  nop
    ctx->pc = 0x25719cu;
    // NOP
label_2571a0:
    // 0x2571a0: 0xc2f  .word       0x00000C2F                   # dsubu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2571a4:
    // 0x2571a4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2571a8:
    // 0x2571a8: 0x0  nop
    ctx->pc = 0x2571a8u;
    // NOP
label_2571ac:
    // 0x2571ac: 0x0  nop
    ctx->pc = 0x2571acu;
    // NOP
label_2571b0:
    // 0x2571b0: 0xc43  sra         $at, $zero, 17
    ctx->pc = 0x2571b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 17));
label_2571b4:
    // 0x2571b4: 0x16f70  tge         $zero, $at, 445
    ctx->pc = 0x2571b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2571b8:
    // 0x2571b8: 0x0  nop
    ctx->pc = 0x2571b8u;
    // NOP
label_2571bc:
    // 0x2571bc: 0x0  nop
    ctx->pc = 0x2571bcu;
    // NOP
label_2571c0:
    // 0x2571c0: 0xc71  tgeu        $zero, $zero, 49
    ctx->pc = 0x2571c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2571c4:
    // 0x2571c4: 0x92e0  .word       0x000092E0                   # add         $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2571c8:
    // 0x2571c8: 0x0  nop
    ctx->pc = 0x2571c8u;
    // NOP
label_2571cc:
    // 0x2571cc: 0x0  nop
    ctx->pc = 0x2571ccu;
    // NOP
label_2571d0:
    // 0x2571d0: 0xc84  .word       0x00000C84                   # sllv        $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2571d4:
    // 0x2571d4: 0x8d00  sll         $s1, $zero, 20
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2571d8:
    // 0x2571d8: 0x0  nop
    ctx->pc = 0x2571d8u;
    // NOP
label_2571dc:
    // 0x2571dc: 0x0  nop
    ctx->pc = 0x2571dcu;
    // NOP
label_2571e0:
    // 0x2571e0: 0xc96  .word       0x00000C96                   # dsrlv       $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2571e4:
    // 0x2571e4: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2571e8:
    // 0x2571e8: 0x0  nop
    ctx->pc = 0x2571e8u;
    // NOP
label_2571ec:
    // 0x2571ec: 0x0  nop
    ctx->pc = 0x2571ecu;
    // NOP
label_2571f0:
    // 0x2571f0: 0xca7  .word       0x00000CA7                   # not         $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571f0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2571f4:
    // 0x2571f4: 0x26e0  .word       0x000026E0                   # add         $a0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2571f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2571f8:
    // 0x2571f8: 0x0  nop
    ctx->pc = 0x2571f8u;
    // NOP
label_2571fc:
    // 0x2571fc: 0x0  nop
    ctx->pc = 0x2571fcu;
    // NOP
label_257200:
    // 0x257200: 0xcac  .word       0x00000CAC                   # dadd        $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_257204:
    // 0x257204: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257204u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_257208:
    // 0x257208: 0x0  nop
    ctx->pc = 0x257208u;
    // NOP
label_25720c:
    // 0x25720c: 0x0  nop
    ctx->pc = 0x25720cu;
    // NOP
label_257210:
    // 0x257210: 0xcb5  .word       0x00000CB5                   # INVALID     $zero, $zero, 0xCB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x257210 raw=0x00000CB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257214:
    // 0x257214: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x257214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257218:
    // 0x257218: 0x0  nop
    ctx->pc = 0x257218u;
    // NOP
label_25721c:
    // 0x25721c: 0x0  nop
    ctx->pc = 0x25721cu;
    // NOP
label_257220:
    // 0x257220: 0xcc0  sll         $at, $zero, 19
    ctx->pc = 0x257220u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_257224:
    // 0x257224: 0xffd0  .word       0x0000FFD0                   # mfhi        $ra # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257224u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_257228:
    // 0x257228: 0x0  nop
    ctx->pc = 0x257228u;
    // NOP
label_25722c:
    // 0x25722c: 0x0  nop
    ctx->pc = 0x25722cu;
    // NOP
label_257230:
    // 0x257230: 0xce0  .word       0x00000CE0                   # add         $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257230u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_257234:
    // 0x257234: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x257234u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_257238:
    // 0x257238: 0x0  nop
    ctx->pc = 0x257238u;
    // NOP
label_25723c:
    // 0x25723c: 0x0  nop
    ctx->pc = 0x25723cu;
    // NOP
label_257240:
    // 0x257240: 0xcee  .word       0x00000CEE                   # dsub        $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_257244:
    // 0x257244: 0x63b0  tge         $zero, $zero, 398
    ctx->pc = 0x257244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257248:
    // 0x257248: 0x0  nop
    ctx->pc = 0x257248u;
    // NOP
label_25724c:
    // 0x25724c: 0x0  nop
    ctx->pc = 0x25724cu;
    // NOP
label_257250:
    // 0x257250: 0xcfb  dsra        $at, $zero, 19
    ctx->pc = 0x257250u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 19);
label_257254:
    // 0x257254: 0xb3e0  .word       0x0000B3E0                   # add         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_257258:
    // 0x257258: 0x0  nop
    ctx->pc = 0x257258u;
    // NOP
label_25725c:
    // 0x25725c: 0x0  nop
    ctx->pc = 0x25725cu;
    // NOP
label_257260:
    // 0x257260: 0xd12  .word       0x00000D12                   # mflo        $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257260u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_257264:
    // 0x257264: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257264u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_257268:
    // 0x257268: 0x0  nop
    ctx->pc = 0x257268u;
    // NOP
label_25726c:
    // 0x25726c: 0x0  nop
    ctx->pc = 0x25726cu;
    // NOP
label_257270:
    // 0x257270: 0xd28  .word       0x00000D28                   # mfsa        $at # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257270u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_257274:
    // 0x257274: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257274u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_257278:
    // 0x257278: 0x0  nop
    ctx->pc = 0x257278u;
    // NOP
label_25727c:
    // 0x25727c: 0x0  nop
    ctx->pc = 0x25727cu;
    // NOP
label_257280:
    // 0x257280: 0xd41  .word       0x00000D41                   # INVALID     $zero, $zero, 0xD41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x257280 raw=0x00000D41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257284:
    // 0x257284: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257284u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_257288:
    // 0x257288: 0x0  nop
    ctx->pc = 0x257288u;
    // NOP
label_25728c:
    // 0x25728c: 0x0  nop
    ctx->pc = 0x25728cu;
    // NOP
label_257290:
    // 0x257290: 0xd59  .word       0x00000D59                   # multu       $zero, $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257290u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_257294:
    // 0x257294: 0x10a40  sll         $at, $at, 9
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_257298:
    // 0x257298: 0x0  nop
    ctx->pc = 0x257298u;
    // NOP
label_25729c:
    // 0x25729c: 0x0  nop
    ctx->pc = 0x25729cu;
    // NOP
label_2572a0:
    // 0x2572a0: 0xd7b  dsra        $at, $zero, 21
    ctx->pc = 0x2572a0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 21);
label_2572a4:
    // 0x2572a4: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x2572a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2572a8:
    // 0x2572a8: 0x0  nop
    ctx->pc = 0x2572a8u;
    // NOP
label_2572ac:
    // 0x2572ac: 0x0  nop
    ctx->pc = 0x2572acu;
    // NOP
label_2572b0:
    // 0x2572b0: 0xd93  .word       0x00000D93                   # mtlo        $zero # 00000D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2572b4:
    // 0x2572b4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2572b8:
    // 0x2572b8: 0x0  nop
    ctx->pc = 0x2572b8u;
    // NOP
label_2572bc:
    // 0x2572bc: 0x0  nop
    ctx->pc = 0x2572bcu;
    // NOP
label_2572c0:
    // 0x2572c0: 0xda7  .word       0x00000DA7                   # not         $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572c0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2572c4:
    // 0x2572c4: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2572c8:
    // 0x2572c8: 0x0  nop
    ctx->pc = 0x2572c8u;
    // NOP
label_2572cc:
    // 0x2572cc: 0x0  nop
    ctx->pc = 0x2572ccu;
    // NOP
label_2572d0:
    // 0x2572d0: 0xdbc  dsll32      $at, $zero, 22
    ctx->pc = 0x2572d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 22));
label_2572d4:
    // 0x2572d4: 0xa1f0  tge         $zero, $zero, 647
    ctx->pc = 0x2572d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2572d8:
    // 0x2572d8: 0x0  nop
    ctx->pc = 0x2572d8u;
    // NOP
label_2572dc:
    // 0x2572dc: 0x0  nop
    ctx->pc = 0x2572dcu;
    // NOP
label_2572e0:
    // 0x2572e0: 0xdd1  .word       0x00000DD1                   # mthi        $zero # 00000DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2572e4:
    // 0x2572e4: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2572e8:
    // 0x2572e8: 0x0  nop
    ctx->pc = 0x2572e8u;
    // NOP
label_2572ec:
    // 0x2572ec: 0x0  nop
    ctx->pc = 0x2572ecu;
    // NOP
label_2572f0:
    // 0x2572f0: 0xddf  .word       0x00000DDF                   # ddivu       $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2572F0 raw=0x00000DDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2572f4:
    // 0x2572f4: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2572f4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2572f8:
    // 0x2572f8: 0x0  nop
    ctx->pc = 0x2572f8u;
    // NOP
label_2572fc:
    // 0x2572fc: 0x0  nop
    ctx->pc = 0x2572fcu;
    // NOP
label_257300:
    // 0x257300: 0xdf6  tne         $zero, $zero, 55
    ctx->pc = 0x257300u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257304:
    // 0x257304: 0x1de40  sll         $k1, $at, 25
    ctx->pc = 0x257304u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_257308:
    // 0x257308: 0x0  nop
    ctx->pc = 0x257308u;
    // NOP
label_25730c:
    // 0x25730c: 0x0  nop
    ctx->pc = 0x25730cu;
    // NOP
label_257310:
    // 0x257310: 0xe32  tlt         $zero, $zero, 56
    ctx->pc = 0x257310u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257314:
    // 0x257314: 0x2db0  tge         $zero, $zero, 182
    ctx->pc = 0x257314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257318:
    // 0x257318: 0x0  nop
    ctx->pc = 0x257318u;
    // NOP
label_25731c:
    // 0x25731c: 0x0  nop
    ctx->pc = 0x25731cu;
    // NOP
label_257320:
    // 0x257320: 0xe38  dsll        $at, $zero, 24
    ctx->pc = 0x257320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 24);
label_257324:
    // 0x257324: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x257324u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_257328:
    // 0x257328: 0x0  nop
    ctx->pc = 0x257328u;
    // NOP
label_25732c:
    // 0x25732c: 0x0  nop
    ctx->pc = 0x25732cu;
    // NOP
label_257330:
    // 0x257330: 0xe4a  .word       0x00000E4A                   # movz        $at, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257330u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_257334:
    // 0x257334: 0x4930  tge         $zero, $zero, 292
    ctx->pc = 0x257334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257338:
    // 0x257338: 0x0  nop
    ctx->pc = 0x257338u;
    // NOP
label_25733c:
    // 0x25733c: 0x0  nop
    ctx->pc = 0x25733cu;
    // NOP
label_257340:
    // 0x257340: 0xe54  .word       0x00000E54                   # dsllv       $at, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_257344:
    // 0x257344: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257348:
    // 0x257348: 0x0  nop
    ctx->pc = 0x257348u;
    // NOP
label_25734c:
    // 0x25734c: 0x0  nop
    ctx->pc = 0x25734cu;
    // NOP
label_257350:
    // 0x257350: 0xe63  .word       0x00000E63                   # negu        $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_257354:
    // 0x257354: 0xcd30  tge         $zero, $zero, 820
    ctx->pc = 0x257354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_257358:
    // 0x257358: 0x0  nop
    ctx->pc = 0x257358u;
    // NOP
label_25735c:
    // 0x25735c: 0x0  nop
    ctx->pc = 0x25735cu;
    // NOP
label_257360:
    // 0x257360: 0xe7d  .word       0x00000E7D                   # INVALID     $zero, $zero, 0xE7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x257360 raw=0x00000E7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_257364:
    // 0x257364: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257368:
    // 0x257368: 0x0  nop
    ctx->pc = 0x257368u;
    // NOP
label_25736c:
    // 0x25736c: 0x0  nop
    ctx->pc = 0x25736cu;
    // NOP
label_257370:
    // 0x257370: 0xe88  .word       0x00000E88                   # jr          $zero # 00000E80 <InstrIdType: CPU_SPECIAL>
label_257374:
    if (ctx->pc == 0x257374u) {
        ctx->pc = 0x257374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257370u;
        // 0x257374: 0x10430  tge         $zero, $at, 16 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x257378u;
        goto label_257378;
    }
    ctx->pc = 0x257370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x257374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257370u;
        // 0x257374: 0x10430  tge         $zero, $at, 16 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257370u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257378u;
label_257378:
    // 0x257378: 0x0  nop
    ctx->pc = 0x257378u;
    // NOP
label_25737c:
    // 0x25737c: 0x0  nop
    ctx->pc = 0x25737cu;
    // NOP
label_257380:
    // 0x257380: 0xea9  .word       0x00000EA9                   # mtsa        $zero # 00000E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257380u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_257384:
    // 0x257384: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_257388:
    // 0x257388: 0x0  nop
    ctx->pc = 0x257388u;
    // NOP
label_25738c:
    // 0x25738c: 0x0  nop
    ctx->pc = 0x25738cu;
    // NOP
label_257390:
    // 0x257390: 0xebf  dsra32      $at, $zero, 26
    ctx->pc = 0x257390u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 26));
label_257394:
    // 0x257394: 0xc850  .word       0x0000C850                   # mfhi        $t9 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257394u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_257398:
    // 0x257398: 0x0  nop
    ctx->pc = 0x257398u;
    // NOP
label_25739c:
    // 0x25739c: 0x0  nop
    ctx->pc = 0x25739cu;
    // NOP
label_2573a0:
    // 0x2573a0: 0xed9  .word       0x00000ED9                   # multu       $zero, $zero # 00000EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2573a4:
    // 0x2573a4: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x2573a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573a8:
    // 0x2573a8: 0x0  nop
    ctx->pc = 0x2573a8u;
    // NOP
label_2573ac:
    // 0x2573ac: 0x0  nop
    ctx->pc = 0x2573acu;
    // NOP
label_2573b0:
    // 0x2573b0: 0xef1  tgeu        $zero, $zero, 59
    ctx->pc = 0x2573b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573b4:
    // 0x2573b4: 0xe730  tge         $zero, $zero, 924
    ctx->pc = 0x2573b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573b8:
    // 0x2573b8: 0x0  nop
    ctx->pc = 0x2573b8u;
    // NOP
label_2573bc:
    // 0x2573bc: 0x0  nop
    ctx->pc = 0x2573bcu;
    // NOP
label_2573c0:
    // 0x2573c0: 0xf0e  .word       0x00000F0E                   # INVALID     $zero, $zero, 0xF0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2573C0 raw=0x00000F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2573c4:
    // 0x2573c4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x2573c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2573c8:
    // 0x2573c8: 0x0  nop
    ctx->pc = 0x2573c8u;
    // NOP
label_2573cc:
    // 0x2573cc: 0x0  nop
    ctx->pc = 0x2573ccu;
    // NOP
label_2573d0:
    // 0x2573d0: 0xf27  .word       0x00000F27                   # not         $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2573d0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2573d4:
    // 0x2573d4: 0xb940  sll         $s7, $zero, 5
    ctx->pc = 0x2573d4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2573d8:
    // 0x2573d8: 0x0  nop
    ctx->pc = 0x2573d8u;
    // NOP
label_2573dc:
    // 0x2573dc: 0x0  nop
    ctx->pc = 0x2573dcu;
    // NOP
label_2573e0:
    // 0x2573e0: 0xf3f  dsra32      $at, $zero, 28
    ctx->pc = 0x2573e0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 28));
label_2573e4:
    // 0x2573e4: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x2573e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2573e8:
    // 0x2573e8: 0x0  nop
    ctx->pc = 0x2573e8u;
    // NOP
label_2573ec:
    // 0x2573ec: 0x0  nop
    ctx->pc = 0x2573ecu;
    // NOP
label_2573f0:
    // 0x2573f0: 0xf69  .word       0x00000F69                   # mtsa        $zero # 00000F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2573f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2573f4:
    // 0x2573f4: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x2573f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2573f8:
    // 0x2573f8: 0x0  nop
    ctx->pc = 0x2573f8u;
    // NOP
label_2573fc:
    // 0x2573fc: 0x0  nop
    ctx->pc = 0x2573fcu;
    // NOP
label_257400:
    // 0x257400: 0xf7a  dsrl        $at, $zero, 29
    ctx->pc = 0x257400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 29);
label_257404:
    // 0x257404: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_257408:
    // 0x257408: 0x0  nop
    ctx->pc = 0x257408u;
    // NOP
label_25740c:
    // 0x25740c: 0x0  nop
    ctx->pc = 0x25740cu;
    // NOP
label_257410:
    // 0x257410: 0xf89  .word       0x00000F89                   # jalr        $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_257414:
    if (ctx->pc == 0x257414u) {
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x7140  sll         $t6, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x257418u;
        goto label_257418;
    }
    ctx->pc = 0x257410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x257418u);
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x7140  sll         $t6, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257410u, 0x257418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x257418u;
label_257418:
    // 0x257418: 0x0  nop
    ctx->pc = 0x257418u;
    // NOP
label_25741c:
    // 0x25741c: 0x0  nop
    ctx->pc = 0x25741cu;
    // NOP
label_257420:
    // 0x257420: 0xf98  .word       0x00000F98                   # mult        $at, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x257420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_257424:
    // 0x257424: 0x5d60  .word       0x00005D60                   # add         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_257428:
    // 0x257428: 0x0  nop
    ctx->pc = 0x257428u;
    // NOP
label_25742c:
    // 0x25742c: 0x0  nop
    ctx->pc = 0x25742cu;
    // NOP
label_257430:
    // 0x257430: 0xfa4  .word       0x00000FA4                   # and         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_257434:
    // 0x257434: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257434u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_257438:
    // 0x257438: 0x0  nop
    ctx->pc = 0x257438u;
    // NOP
label_25743c:
    // 0x25743c: 0x0  nop
    ctx->pc = 0x25743cu;
    // NOP
label_257440:
    // 0x257440: 0xfaf  .word       0x00000FAF                   # dsubu       $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_257444:
    // 0x257444: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x257444u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    ctx->pc = 0x257448u;
    return;
}
