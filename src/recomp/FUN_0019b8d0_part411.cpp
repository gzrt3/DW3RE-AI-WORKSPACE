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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part411(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x263bf0u: goto label_263bf0;
        case 0x263bf4u: goto label_263bf4;
        case 0x263bf8u: goto label_263bf8;
        case 0x263bfcu: goto label_263bfc;
        case 0x263c00u: goto label_263c00;
        case 0x263c04u: goto label_263c04;
        case 0x263c08u: goto label_263c08;
        case 0x263c0cu: goto label_263c0c;
        case 0x263c10u: goto label_263c10;
        case 0x263c14u: goto label_263c14;
        case 0x263c18u: goto label_263c18;
        case 0x263c1cu: goto label_263c1c;
        case 0x263c20u: goto label_263c20;
        case 0x263c24u: goto label_263c24;
        case 0x263c28u: goto label_263c28;
        case 0x263c2cu: goto label_263c2c;
        case 0x263c30u: goto label_263c30;
        case 0x263c34u: goto label_263c34;
        case 0x263c38u: goto label_263c38;
        case 0x263c3cu: goto label_263c3c;
        case 0x263c40u: goto label_263c40;
        case 0x263c44u: goto label_263c44;
        case 0x263c48u: goto label_263c48;
        case 0x263c4cu: goto label_263c4c;
        case 0x263c50u: goto label_263c50;
        case 0x263c54u: goto label_263c54;
        case 0x263c58u: goto label_263c58;
        case 0x263c5cu: goto label_263c5c;
        case 0x263c60u: goto label_263c60;
        case 0x263c64u: goto label_263c64;
        case 0x263c68u: goto label_263c68;
        case 0x263c6cu: goto label_263c6c;
        case 0x263c70u: goto label_263c70;
        case 0x263c74u: goto label_263c74;
        case 0x263c78u: goto label_263c78;
        case 0x263c7cu: goto label_263c7c;
        case 0x263c80u: goto label_263c80;
        case 0x263c84u: goto label_263c84;
        case 0x263c88u: goto label_263c88;
        case 0x263c8cu: goto label_263c8c;
        case 0x263c90u: goto label_263c90;
        case 0x263c94u: goto label_263c94;
        case 0x263c98u: goto label_263c98;
        case 0x263c9cu: goto label_263c9c;
        case 0x263ca0u: goto label_263ca0;
        case 0x263ca4u: goto label_263ca4;
        case 0x263ca8u: goto label_263ca8;
        case 0x263cacu: goto label_263cac;
        case 0x263cb0u: goto label_263cb0;
        case 0x263cb4u: goto label_263cb4;
        case 0x263cb8u: goto label_263cb8;
        case 0x263cbcu: goto label_263cbc;
        case 0x263cc0u: goto label_263cc0;
        case 0x263cc4u: goto label_263cc4;
        case 0x263cc8u: goto label_263cc8;
        case 0x263cccu: goto label_263ccc;
        case 0x263cd0u: goto label_263cd0;
        case 0x263cd4u: goto label_263cd4;
        case 0x263cd8u: goto label_263cd8;
        case 0x263cdcu: goto label_263cdc;
        case 0x263ce0u: goto label_263ce0;
        case 0x263ce4u: goto label_263ce4;
        case 0x263ce8u: goto label_263ce8;
        case 0x263cecu: goto label_263cec;
        case 0x263cf0u: goto label_263cf0;
        case 0x263cf4u: goto label_263cf4;
        case 0x263cf8u: goto label_263cf8;
        case 0x263cfcu: goto label_263cfc;
        case 0x263d00u: goto label_263d00;
        case 0x263d04u: goto label_263d04;
        case 0x263d08u: goto label_263d08;
        case 0x263d0cu: goto label_263d0c;
        case 0x263d10u: goto label_263d10;
        case 0x263d14u: goto label_263d14;
        case 0x263d18u: goto label_263d18;
        case 0x263d1cu: goto label_263d1c;
        case 0x263d20u: goto label_263d20;
        case 0x263d24u: goto label_263d24;
        case 0x263d28u: goto label_263d28;
        case 0x263d2cu: goto label_263d2c;
        case 0x263d30u: goto label_263d30;
        case 0x263d34u: goto label_263d34;
        case 0x263d38u: goto label_263d38;
        case 0x263d3cu: goto label_263d3c;
        case 0x263d40u: goto label_263d40;
        case 0x263d44u: goto label_263d44;
        case 0x263d48u: goto label_263d48;
        case 0x263d4cu: goto label_263d4c;
        case 0x263d50u: goto label_263d50;
        case 0x263d54u: goto label_263d54;
        case 0x263d58u: goto label_263d58;
        case 0x263d5cu: goto label_263d5c;
        case 0x263d60u: goto label_263d60;
        case 0x263d64u: goto label_263d64;
        case 0x263d68u: goto label_263d68;
        case 0x263d6cu: goto label_263d6c;
        case 0x263d70u: goto label_263d70;
        case 0x263d74u: goto label_263d74;
        case 0x263d78u: goto label_263d78;
        case 0x263d7cu: goto label_263d7c;
        case 0x263d80u: goto label_263d80;
        case 0x263d84u: goto label_263d84;
        case 0x263d88u: goto label_263d88;
        case 0x263d8cu: goto label_263d8c;
        case 0x263d90u: goto label_263d90;
        case 0x263d94u: goto label_263d94;
        case 0x263d98u: goto label_263d98;
        case 0x263d9cu: goto label_263d9c;
        case 0x263da0u: goto label_263da0;
        case 0x263da4u: goto label_263da4;
        case 0x263da8u: goto label_263da8;
        case 0x263dacu: goto label_263dac;
        case 0x263db0u: goto label_263db0;
        case 0x263db4u: goto label_263db4;
        case 0x263db8u: goto label_263db8;
        case 0x263dbcu: goto label_263dbc;
        case 0x263dc0u: goto label_263dc0;
        case 0x263dc4u: goto label_263dc4;
        case 0x263dc8u: goto label_263dc8;
        case 0x263dccu: goto label_263dcc;
        case 0x263dd0u: goto label_263dd0;
        case 0x263dd4u: goto label_263dd4;
        case 0x263dd8u: goto label_263dd8;
        case 0x263ddcu: goto label_263ddc;
        case 0x263de0u: goto label_263de0;
        case 0x263de4u: goto label_263de4;
        case 0x263de8u: goto label_263de8;
        case 0x263decu: goto label_263dec;
        case 0x263df0u: goto label_263df0;
        case 0x263df4u: goto label_263df4;
        case 0x263df8u: goto label_263df8;
        case 0x263dfcu: goto label_263dfc;
        case 0x263e00u: goto label_263e00;
        case 0x263e04u: goto label_263e04;
        case 0x263e08u: goto label_263e08;
        case 0x263e0cu: goto label_263e0c;
        case 0x263e10u: goto label_263e10;
        case 0x263e14u: goto label_263e14;
        case 0x263e18u: goto label_263e18;
        case 0x263e1cu: goto label_263e1c;
        case 0x263e20u: goto label_263e20;
        case 0x263e24u: goto label_263e24;
        case 0x263e28u: goto label_263e28;
        case 0x263e2cu: goto label_263e2c;
        case 0x263e30u: goto label_263e30;
        case 0x263e34u: goto label_263e34;
        case 0x263e38u: goto label_263e38;
        case 0x263e3cu: goto label_263e3c;
        case 0x263e40u: goto label_263e40;
        case 0x263e44u: goto label_263e44;
        case 0x263e48u: goto label_263e48;
        case 0x263e4cu: goto label_263e4c;
        case 0x263e50u: goto label_263e50;
        case 0x263e54u: goto label_263e54;
        case 0x263e58u: goto label_263e58;
        case 0x263e5cu: goto label_263e5c;
        case 0x263e60u: goto label_263e60;
        case 0x263e64u: goto label_263e64;
        case 0x263e68u: goto label_263e68;
        case 0x263e6cu: goto label_263e6c;
        case 0x263e70u: goto label_263e70;
        case 0x263e74u: goto label_263e74;
        case 0x263e78u: goto label_263e78;
        case 0x263e7cu: goto label_263e7c;
        case 0x263e80u: goto label_263e80;
        case 0x263e84u: goto label_263e84;
        case 0x263e88u: goto label_263e88;
        case 0x263e8cu: goto label_263e8c;
        case 0x263e90u: goto label_263e90;
        case 0x263e94u: goto label_263e94;
        case 0x263e98u: goto label_263e98;
        case 0x263e9cu: goto label_263e9c;
        case 0x263ea0u: goto label_263ea0;
        case 0x263ea4u: goto label_263ea4;
        case 0x263ea8u: goto label_263ea8;
        case 0x263eacu: goto label_263eac;
        case 0x263eb0u: goto label_263eb0;
        case 0x263eb4u: goto label_263eb4;
        case 0x263eb8u: goto label_263eb8;
        case 0x263ebcu: goto label_263ebc;
        case 0x263ec0u: goto label_263ec0;
        case 0x263ec4u: goto label_263ec4;
        case 0x263ec8u: goto label_263ec8;
        case 0x263eccu: goto label_263ecc;
        case 0x263ed0u: goto label_263ed0;
        case 0x263ed4u: goto label_263ed4;
        case 0x263ed8u: goto label_263ed8;
        case 0x263edcu: goto label_263edc;
        case 0x263ee0u: goto label_263ee0;
        case 0x263ee4u: goto label_263ee4;
        case 0x263ee8u: goto label_263ee8;
        case 0x263eecu: goto label_263eec;
        case 0x263ef0u: goto label_263ef0;
        case 0x263ef4u: goto label_263ef4;
        case 0x263ef8u: goto label_263ef8;
        case 0x263efcu: goto label_263efc;
        case 0x263f00u: goto label_263f00;
        case 0x263f04u: goto label_263f04;
        case 0x263f08u: goto label_263f08;
        case 0x263f0cu: goto label_263f0c;
        case 0x263f10u: goto label_263f10;
        case 0x263f14u: goto label_263f14;
        case 0x263f18u: goto label_263f18;
        case 0x263f1cu: goto label_263f1c;
        case 0x263f20u: goto label_263f20;
        case 0x263f24u: goto label_263f24;
        case 0x263f28u: goto label_263f28;
        case 0x263f2cu: goto label_263f2c;
        case 0x263f30u: goto label_263f30;
        case 0x263f34u: goto label_263f34;
        case 0x263f38u: goto label_263f38;
        case 0x263f3cu: goto label_263f3c;
        case 0x263f40u: goto label_263f40;
        case 0x263f44u: goto label_263f44;
        case 0x263f48u: goto label_263f48;
        case 0x263f4cu: goto label_263f4c;
        case 0x263f50u: goto label_263f50;
        case 0x263f54u: goto label_263f54;
        case 0x263f58u: goto label_263f58;
        case 0x263f5cu: goto label_263f5c;
        case 0x263f60u: goto label_263f60;
        case 0x263f64u: goto label_263f64;
        case 0x263f68u: goto label_263f68;
        case 0x263f6cu: goto label_263f6c;
        case 0x263f70u: goto label_263f70;
        case 0x263f74u: goto label_263f74;
        case 0x263f78u: goto label_263f78;
        case 0x263f7cu: goto label_263f7c;
        case 0x263f80u: goto label_263f80;
        case 0x263f84u: goto label_263f84;
        case 0x263f88u: goto label_263f88;
        case 0x263f8cu: goto label_263f8c;
        case 0x263f90u: goto label_263f90;
        case 0x263f94u: goto label_263f94;
        case 0x263f98u: goto label_263f98;
        case 0x263f9cu: goto label_263f9c;
        case 0x263fa0u: goto label_263fa0;
        case 0x263fa4u: goto label_263fa4;
        case 0x263fa8u: goto label_263fa8;
        case 0x263facu: goto label_263fac;
        case 0x263fb0u: goto label_263fb0;
        case 0x263fb4u: goto label_263fb4;
        case 0x263fb8u: goto label_263fb8;
        case 0x263fbcu: goto label_263fbc;
        case 0x263fc0u: goto label_263fc0;
        case 0x263fc4u: goto label_263fc4;
        case 0x263fc8u: goto label_263fc8;
        case 0x263fccu: goto label_263fcc;
        case 0x263fd0u: goto label_263fd0;
        case 0x263fd4u: goto label_263fd4;
        case 0x263fd8u: goto label_263fd8;
        case 0x263fdcu: goto label_263fdc;
        case 0x263fe0u: goto label_263fe0;
        case 0x263fe4u: goto label_263fe4;
        case 0x263fe8u: goto label_263fe8;
        case 0x263fecu: goto label_263fec;
        case 0x263ff0u: goto label_263ff0;
        case 0x263ff4u: goto label_263ff4;
        case 0x263ff8u: goto label_263ff8;
        case 0x263ffcu: goto label_263ffc;
        case 0x264000u: goto label_264000;
        case 0x264004u: goto label_264004;
        case 0x264008u: goto label_264008;
        case 0x26400cu: goto label_26400c;
        case 0x264010u: goto label_264010;
        case 0x264014u: goto label_264014;
        case 0x264018u: goto label_264018;
        case 0x26401cu: goto label_26401c;
        case 0x264020u: goto label_264020;
        case 0x264024u: goto label_264024;
        case 0x264028u: goto label_264028;
        case 0x26402cu: goto label_26402c;
        case 0x264030u: goto label_264030;
        case 0x264034u: goto label_264034;
        case 0x264038u: goto label_264038;
        case 0x26403cu: goto label_26403c;
        case 0x264040u: goto label_264040;
        case 0x264044u: goto label_264044;
        case 0x264048u: goto label_264048;
        case 0x26404cu: goto label_26404c;
        case 0x264050u: goto label_264050;
        case 0x264054u: goto label_264054;
        case 0x264058u: goto label_264058;
        case 0x26405cu: goto label_26405c;
        case 0x264060u: goto label_264060;
        case 0x264064u: goto label_264064;
        case 0x264068u: goto label_264068;
        case 0x26406cu: goto label_26406c;
        case 0x264070u: goto label_264070;
        case 0x264074u: goto label_264074;
        case 0x264078u: goto label_264078;
        case 0x26407cu: goto label_26407c;
        case 0x264080u: goto label_264080;
        case 0x264084u: goto label_264084;
        case 0x264088u: goto label_264088;
        case 0x26408cu: goto label_26408c;
        case 0x264090u: goto label_264090;
        case 0x264094u: goto label_264094;
        case 0x264098u: goto label_264098;
        case 0x26409cu: goto label_26409c;
        case 0x2640a0u: goto label_2640a0;
        case 0x2640a4u: goto label_2640a4;
        case 0x2640a8u: goto label_2640a8;
        case 0x2640acu: goto label_2640ac;
        case 0x2640b0u: goto label_2640b0;
        case 0x2640b4u: goto label_2640b4;
        case 0x2640b8u: goto label_2640b8;
        case 0x2640bcu: goto label_2640bc;
        case 0x2640c0u: goto label_2640c0;
        case 0x2640c4u: goto label_2640c4;
        case 0x2640c8u: goto label_2640c8;
        case 0x2640ccu: goto label_2640cc;
        case 0x2640d0u: goto label_2640d0;
        case 0x2640d4u: goto label_2640d4;
        case 0x2640d8u: goto label_2640d8;
        case 0x2640dcu: goto label_2640dc;
        case 0x2640e0u: goto label_2640e0;
        case 0x2640e4u: goto label_2640e4;
        case 0x2640e8u: goto label_2640e8;
        case 0x2640ecu: goto label_2640ec;
        case 0x2640f0u: goto label_2640f0;
        case 0x2640f4u: goto label_2640f4;
        case 0x2640f8u: goto label_2640f8;
        case 0x2640fcu: goto label_2640fc;
        case 0x264100u: goto label_264100;
        case 0x264104u: goto label_264104;
        case 0x264108u: goto label_264108;
        case 0x26410cu: goto label_26410c;
        case 0x264110u: goto label_264110;
        case 0x264114u: goto label_264114;
        case 0x264118u: goto label_264118;
        case 0x26411cu: goto label_26411c;
        case 0x264120u: goto label_264120;
        case 0x264124u: goto label_264124;
        case 0x264128u: goto label_264128;
        case 0x26412cu: goto label_26412c;
        case 0x264130u: goto label_264130;
        case 0x264134u: goto label_264134;
        case 0x264138u: goto label_264138;
        case 0x26413cu: goto label_26413c;
        case 0x264140u: goto label_264140;
        case 0x264144u: goto label_264144;
        case 0x264148u: goto label_264148;
        case 0x26414cu: goto label_26414c;
        case 0x264150u: goto label_264150;
        case 0x264154u: goto label_264154;
        case 0x264158u: goto label_264158;
        case 0x26415cu: goto label_26415c;
        case 0x264160u: goto label_264160;
        case 0x264164u: goto label_264164;
        case 0x264168u: goto label_264168;
        case 0x26416cu: goto label_26416c;
        case 0x264170u: goto label_264170;
        case 0x264174u: goto label_264174;
        case 0x264178u: goto label_264178;
        case 0x26417cu: goto label_26417c;
        case 0x264180u: goto label_264180;
        case 0x264184u: goto label_264184;
        case 0x264188u: goto label_264188;
        case 0x26418cu: goto label_26418c;
        case 0x264190u: goto label_264190;
        case 0x264194u: goto label_264194;
        case 0x264198u: goto label_264198;
        case 0x26419cu: goto label_26419c;
        case 0x2641a0u: goto label_2641a0;
        case 0x2641a4u: goto label_2641a4;
        case 0x2641a8u: goto label_2641a8;
        case 0x2641acu: goto label_2641ac;
        case 0x2641b0u: goto label_2641b0;
        case 0x2641b4u: goto label_2641b4;
        case 0x2641b8u: goto label_2641b8;
        case 0x2641bcu: goto label_2641bc;
        case 0x2641c0u: goto label_2641c0;
        case 0x2641c4u: goto label_2641c4;
        case 0x2641c8u: goto label_2641c8;
        case 0x2641ccu: goto label_2641cc;
        case 0x2641d0u: goto label_2641d0;
        case 0x2641d4u: goto label_2641d4;
        case 0x2641d8u: goto label_2641d8;
        case 0x2641dcu: goto label_2641dc;
        case 0x2641e0u: goto label_2641e0;
        case 0x2641e4u: goto label_2641e4;
        case 0x2641e8u: goto label_2641e8;
        case 0x2641ecu: goto label_2641ec;
        case 0x2641f0u: goto label_2641f0;
        case 0x2641f4u: goto label_2641f4;
        case 0x2641f8u: goto label_2641f8;
        case 0x2641fcu: goto label_2641fc;
        case 0x264200u: goto label_264200;
        case 0x264204u: goto label_264204;
        case 0x264208u: goto label_264208;
        case 0x26420cu: goto label_26420c;
        case 0x264210u: goto label_264210;
        case 0x264214u: goto label_264214;
        case 0x264218u: goto label_264218;
        case 0x26421cu: goto label_26421c;
        case 0x264220u: goto label_264220;
        case 0x264224u: goto label_264224;
        case 0x264228u: goto label_264228;
        case 0x26422cu: goto label_26422c;
        case 0x264230u: goto label_264230;
        case 0x264234u: goto label_264234;
        case 0x264238u: goto label_264238;
        case 0x26423cu: goto label_26423c;
        case 0x264240u: goto label_264240;
        case 0x264244u: goto label_264244;
        case 0x264248u: goto label_264248;
        case 0x26424cu: goto label_26424c;
        case 0x264250u: goto label_264250;
        case 0x264254u: goto label_264254;
        case 0x264258u: goto label_264258;
        case 0x26425cu: goto label_26425c;
        case 0x264260u: goto label_264260;
        case 0x264264u: goto label_264264;
        case 0x264268u: goto label_264268;
        case 0x26426cu: goto label_26426c;
        case 0x264270u: goto label_264270;
        case 0x264274u: goto label_264274;
        case 0x264278u: goto label_264278;
        case 0x26427cu: goto label_26427c;
        case 0x264280u: goto label_264280;
        case 0x264284u: goto label_264284;
        case 0x264288u: goto label_264288;
        case 0x26428cu: goto label_26428c;
        case 0x264290u: goto label_264290;
        case 0x264294u: goto label_264294;
        case 0x264298u: goto label_264298;
        case 0x26429cu: goto label_26429c;
        case 0x2642a0u: goto label_2642a0;
        case 0x2642a4u: goto label_2642a4;
        case 0x2642a8u: goto label_2642a8;
        case 0x2642acu: goto label_2642ac;
        case 0x2642b0u: goto label_2642b0;
        case 0x2642b4u: goto label_2642b4;
        case 0x2642b8u: goto label_2642b8;
        case 0x2642bcu: goto label_2642bc;
        case 0x2642c0u: goto label_2642c0;
        case 0x2642c4u: goto label_2642c4;
        case 0x2642c8u: goto label_2642c8;
        case 0x2642ccu: goto label_2642cc;
        case 0x2642d0u: goto label_2642d0;
        case 0x2642d4u: goto label_2642d4;
        case 0x2642d8u: goto label_2642d8;
        case 0x2642dcu: goto label_2642dc;
        case 0x2642e0u: goto label_2642e0;
        case 0x2642e4u: goto label_2642e4;
        case 0x2642e8u: goto label_2642e8;
        case 0x2642ecu: goto label_2642ec;
        case 0x2642f0u: goto label_2642f0;
        case 0x2642f4u: goto label_2642f4;
        case 0x2642f8u: goto label_2642f8;
        case 0x2642fcu: goto label_2642fc;
        case 0x264300u: goto label_264300;
        case 0x264304u: goto label_264304;
        case 0x264308u: goto label_264308;
        case 0x26430cu: goto label_26430c;
        case 0x264310u: goto label_264310;
        case 0x264314u: goto label_264314;
        case 0x264318u: goto label_264318;
        case 0x26431cu: goto label_26431c;
        case 0x264320u: goto label_264320;
        case 0x264324u: goto label_264324;
        case 0x264328u: goto label_264328;
        case 0x26432cu: goto label_26432c;
        case 0x264330u: goto label_264330;
        case 0x264334u: goto label_264334;
        case 0x264338u: goto label_264338;
        case 0x26433cu: goto label_26433c;
        case 0x264340u: goto label_264340;
        case 0x264344u: goto label_264344;
        case 0x264348u: goto label_264348;
        case 0x26434cu: goto label_26434c;
        case 0x264350u: goto label_264350;
        case 0x264354u: goto label_264354;
        case 0x264358u: goto label_264358;
        case 0x26435cu: goto label_26435c;
        case 0x264360u: goto label_264360;
        case 0x264364u: goto label_264364;
        case 0x264368u: goto label_264368;
        case 0x26436cu: goto label_26436c;
        case 0x264370u: goto label_264370;
        case 0x264374u: goto label_264374;
        case 0x264378u: goto label_264378;
        case 0x26437cu: goto label_26437c;
        case 0x264380u: goto label_264380;
        case 0x264384u: goto label_264384;
        case 0x264388u: goto label_264388;
        case 0x26438cu: goto label_26438c;
        case 0x264390u: goto label_264390;
        case 0x264394u: goto label_264394;
        case 0x264398u: goto label_264398;
        case 0x26439cu: goto label_26439c;
        case 0x2643a0u: goto label_2643a0;
        case 0x2643a4u: goto label_2643a4;
        case 0x2643a8u: goto label_2643a8;
        case 0x2643acu: goto label_2643ac;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643b4u: goto label_2643b4;
        case 0x2643b8u: goto label_2643b8;
        case 0x2643bcu: goto label_2643bc;
        default: return;
    }

label_263bf0:
    // 0x263bf0: 0xe6f3  tltu        $zero, $zero, 923
    ctx->pc = 0x263bf0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263bf4:
    // 0x263bf4: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_263bf8:
    // 0x263bf8: 0x0  nop
    ctx->pc = 0x263bf8u;
    // NOP
label_263bfc:
    // 0x263bfc: 0x0  nop
    ctx->pc = 0x263bfcu;
    // NOP
label_263c00:
    // 0x263c00: 0xe6fb  dsra        $gp, $zero, 27
    ctx->pc = 0x263c00u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 27);
label_263c04:
    // 0x263c04: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x263c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c08:
    // 0x263c08: 0x0  nop
    ctx->pc = 0x263c08u;
    // NOP
label_263c0c:
    // 0x263c0c: 0x0  nop
    ctx->pc = 0x263c0cu;
    // NOP
label_263c10:
    // 0x263c10: 0xe707  .word       0x0000E707                   # srav        $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c10u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263c14:
    // 0x263c14: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263c18:
    // 0x263c18: 0x0  nop
    ctx->pc = 0x263c18u;
    // NOP
label_263c1c:
    // 0x263c1c: 0x0  nop
    ctx->pc = 0x263c1cu;
    // NOP
label_263c20:
    // 0x263c20: 0xe712  .word       0x0000E712                   # mflo        $gp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 28, ctx->lo);
label_263c24:
    // 0x263c24: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263c28:
    // 0x263c28: 0x0  nop
    ctx->pc = 0x263c28u;
    // NOP
label_263c2c:
    // 0x263c2c: 0x0  nop
    ctx->pc = 0x263c2cu;
    // NOP
label_263c30:
    // 0x263c30: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_263c34:
    // 0x263c34: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263c38:
    // 0x263c38: 0x0  nop
    ctx->pc = 0x263c38u;
    // NOP
label_263c3c:
    // 0x263c3c: 0x0  nop
    ctx->pc = 0x263c3cu;
    // NOP
label_263c40:
    // 0x263c40: 0xe730  tge         $zero, $zero, 924
    ctx->pc = 0x263c40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c44:
    // 0x263c44: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263c48:
    // 0x263c48: 0x0  nop
    ctx->pc = 0x263c48u;
    // NOP
label_263c4c:
    // 0x263c4c: 0x0  nop
    ctx->pc = 0x263c4cu;
    // NOP
label_263c50:
    // 0x263c50: 0xe73e  dsrl32      $gp, $zero, 28
    ctx->pc = 0x263c50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (32 + 28));
label_263c54:
    // 0x263c54: 0x6620  .word       0x00006620                   # add         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_263c58:
    // 0x263c58: 0x0  nop
    ctx->pc = 0x263c58u;
    // NOP
label_263c5c:
    // 0x263c5c: 0x0  nop
    ctx->pc = 0x263c5cu;
    // NOP
label_263c60:
    // 0x263c60: 0xe74b  .word       0x0000E74B                   # movn        $gp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_263c64:
    // 0x263c64: 0x2600  sll         $a0, $zero, 24
    ctx->pc = 0x263c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_263c68:
    // 0x263c68: 0x0  nop
    ctx->pc = 0x263c68u;
    // NOP
label_263c6c:
    // 0x263c6c: 0x0  nop
    ctx->pc = 0x263c6cu;
    // NOP
label_263c70:
    // 0x263c70: 0xe750  .word       0x0000E750                   # mfhi        $gp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c70u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_263c74:
    // 0x263c74: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263c78:
    // 0x263c78: 0x0  nop
    ctx->pc = 0x263c78u;
    // NOP
label_263c7c:
    // 0x263c7c: 0x0  nop
    ctx->pc = 0x263c7cu;
    // NOP
label_263c80:
    // 0x263c80: 0xe75d  .word       0x0000E75D                   # dmultu      $zero, $zero # 0000E740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x263C80 raw=0x0000E75D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263c84:
    // 0x263c84: 0x5130  tge         $zero, $zero, 324
    ctx->pc = 0x263c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263c88:
    // 0x263c88: 0x0  nop
    ctx->pc = 0x263c88u;
    // NOP
label_263c8c:
    // 0x263c8c: 0x0  nop
    ctx->pc = 0x263c8cu;
    // NOP
label_263c90:
    // 0x263c90: 0xe768  .word       0x0000E768                   # mfsa        $gp # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263c90u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_263c94:
    // 0x263c94: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263c94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263c98:
    // 0x263c98: 0x0  nop
    ctx->pc = 0x263c98u;
    // NOP
label_263c9c:
    // 0x263c9c: 0x0  nop
    ctx->pc = 0x263c9cu;
    // NOP
label_263ca0:
    // 0x263ca0: 0xe774  teq         $zero, $zero, 925
    ctx->pc = 0x263ca0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ca4:
    // 0x263ca4: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ca4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263ca8:
    // 0x263ca8: 0x0  nop
    ctx->pc = 0x263ca8u;
    // NOP
label_263cac:
    // 0x263cac: 0x0  nop
    ctx->pc = 0x263cacu;
    // NOP
label_263cb0:
    // 0x263cb0: 0xe77c  dsll32      $gp, $zero, 29
    ctx->pc = 0x263cb0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << (32 + 29));
label_263cb4:
    // 0x263cb4: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cb4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_263cb8:
    // 0x263cb8: 0x0  nop
    ctx->pc = 0x263cb8u;
    // NOP
label_263cbc:
    // 0x263cbc: 0x0  nop
    ctx->pc = 0x263cbcu;
    // NOP
label_263cc0:
    // 0x263cc0: 0xe783  sra         $gp, $zero, 30
    ctx->pc = 0x263cc0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 30));
label_263cc4:
    // 0x263cc4: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263cc8:
    // 0x263cc8: 0x0  nop
    ctx->pc = 0x263cc8u;
    // NOP
label_263ccc:
    // 0x263ccc: 0x0  nop
    ctx->pc = 0x263cccu;
    // NOP
label_263cd0:
    // 0x263cd0: 0xe78f  .word       0x0000E78F                   # sync.p # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_263cd4:
    // 0x263cd4: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_263cd8:
    // 0x263cd8: 0x0  nop
    ctx->pc = 0x263cd8u;
    // NOP
label_263cdc:
    // 0x263cdc: 0x0  nop
    ctx->pc = 0x263cdcu;
    // NOP
label_263ce0:
    // 0x263ce0: 0xe79e  .word       0x0000E79E                   # ddiv        $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x263CE0 raw=0x0000E79E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ce4:
    // 0x263ce4: 0x38b0  tge         $zero, $zero, 226
    ctx->pc = 0x263ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ce8:
    // 0x263ce8: 0x0  nop
    ctx->pc = 0x263ce8u;
    // NOP
label_263cec:
    // 0x263cec: 0x0  nop
    ctx->pc = 0x263cecu;
    // NOP
label_263cf0:
    // 0x263cf0: 0xe7a6  .word       0x0000E7A6                   # xor         $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263cf0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_263cf4:
    // 0x263cf4: 0x3af0  tge         $zero, $zero, 235
    ctx->pc = 0x263cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263cf8:
    // 0x263cf8: 0x0  nop
    ctx->pc = 0x263cf8u;
    // NOP
label_263cfc:
    // 0x263cfc: 0x0  nop
    ctx->pc = 0x263cfcu;
    // NOP
label_263d00:
    // 0x263d00: 0xe7ae  .word       0x0000E7AE                   # dsub        $gp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263d04:
    // 0x263d04: 0x28b0  tge         $zero, $zero, 162
    ctx->pc = 0x263d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d08:
    // 0x263d08: 0x0  nop
    ctx->pc = 0x263d08u;
    // NOP
label_263d0c:
    // 0x263d0c: 0x0  nop
    ctx->pc = 0x263d0cu;
    // NOP
label_263d10:
    // 0x263d10: 0xe7b4  teq         $zero, $zero, 926
    ctx->pc = 0x263d10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d14:
    // 0x263d14: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x263d14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_263d18:
    // 0x263d18: 0x0  nop
    ctx->pc = 0x263d18u;
    // NOP
label_263d1c:
    // 0x263d1c: 0x0  nop
    ctx->pc = 0x263d1cu;
    // NOP
label_263d20:
    // 0x263d20: 0xe7bf  dsra32      $gp, $zero, 30
    ctx->pc = 0x263d20u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 30));
label_263d24:
    // 0x263d24: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_263d28:
    // 0x263d28: 0x0  nop
    ctx->pc = 0x263d28u;
    // NOP
label_263d2c:
    // 0x263d2c: 0x0  nop
    ctx->pc = 0x263d2cu;
    // NOP
label_263d30:
    // 0x263d30: 0xe7c6  .word       0x0000E7C6                   # srlv        $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263d34:
    // 0x263d34: 0x4f70  tge         $zero, $zero, 317
    ctx->pc = 0x263d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d38:
    // 0x263d38: 0x0  nop
    ctx->pc = 0x263d38u;
    // NOP
label_263d3c:
    // 0x263d3c: 0x0  nop
    ctx->pc = 0x263d3cu;
    // NOP
label_263d40:
    // 0x263d40: 0xe7d0  .word       0x0000E7D0                   # mfhi        $gp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d40u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_263d44:
    // 0x263d44: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d44u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263d48:
    // 0x263d48: 0x0  nop
    ctx->pc = 0x263d48u;
    // NOP
label_263d4c:
    // 0x263d4c: 0x0  nop
    ctx->pc = 0x263d4cu;
    // NOP
label_263d50:
    // 0x263d50: 0xe7da  .word       0x0000E7DA                   # div         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_263d54:
    // 0x263d54: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x263d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d58:
    // 0x263d58: 0x0  nop
    ctx->pc = 0x263d58u;
    // NOP
label_263d5c:
    // 0x263d5c: 0x0  nop
    ctx->pc = 0x263d5cu;
    // NOP
label_263d60:
    // 0x263d60: 0xe7ee  .word       0x0000E7EE                   # dsub        $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_263d64:
    // 0x263d64: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x263d64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_263d68:
    // 0x263d68: 0x0  nop
    ctx->pc = 0x263d68u;
    // NOP
label_263d6c:
    // 0x263d6c: 0x0  nop
    ctx->pc = 0x263d6cu;
    // NOP
label_263d70:
    // 0x263d70: 0xe802  srl         $sp, $zero, 0
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_263d74:
    // 0x263d74: 0x82f0  tge         $zero, $zero, 523
    ctx->pc = 0x263d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263d78:
    // 0x263d78: 0x0  nop
    ctx->pc = 0x263d78u;
    // NOP
label_263d7c:
    // 0x263d7c: 0x0  nop
    ctx->pc = 0x263d7cu;
    // NOP
label_263d80:
    // 0x263d80: 0xe813  .word       0x0000E813                   # mtlo        $zero # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263d80u;
    ctx->lo = GPR_U64(ctx, 0);
label_263d84:
    // 0x263d84: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_263d88:
    // 0x263d88: 0x0  nop
    ctx->pc = 0x263d88u;
    // NOP
label_263d8c:
    // 0x263d8c: 0x0  nop
    ctx->pc = 0x263d8cu;
    // NOP
label_263d90:
    // 0x263d90: 0xe822  neg         $sp, $zero
    ctx->pc = 0x263d90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_263d94:
    // 0x263d94: 0x7540  sll         $t6, $zero, 21
    ctx->pc = 0x263d94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_263d98:
    // 0x263d98: 0x0  nop
    ctx->pc = 0x263d98u;
    // NOP
label_263d9c:
    // 0x263d9c: 0x0  nop
    ctx->pc = 0x263d9cu;
    // NOP
label_263da0:
    // 0x263da0: 0xe831  tgeu        $zero, $zero, 928
    ctx->pc = 0x263da0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263da4:
    // 0x263da4: 0x7270  tge         $zero, $zero, 457
    ctx->pc = 0x263da4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263da8:
    // 0x263da8: 0x0  nop
    ctx->pc = 0x263da8u;
    // NOP
label_263dac:
    // 0x263dac: 0x0  nop
    ctx->pc = 0x263dacu;
    // NOP
label_263db0:
    // 0x263db0: 0xe840  sll         $sp, $zero, 1
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_263db4:
    // 0x263db4: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x263db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263db8:
    // 0x263db8: 0x0  nop
    ctx->pc = 0x263db8u;
    // NOP
label_263dbc:
    // 0x263dbc: 0x0  nop
    ctx->pc = 0x263dbcu;
    // NOP
label_263dc0:
    // 0x263dc0: 0xe84c  syscall     929
    ctx->pc = 0x263dc0u;
    ctx->pc = 0x263DC4u;
runtime->handleSyscall(rdram, ctx, 0x3A1u);
label_263dc4:
    // 0x263dc4: 0x54e0  .word       0x000054E0                   # add         $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_263dc8:
    // 0x263dc8: 0x0  nop
    ctx->pc = 0x263dc8u;
    // NOP
label_263dcc:
    // 0x263dcc: 0x0  nop
    ctx->pc = 0x263dccu;
    // NOP
label_263dd0:
    // 0x263dd0: 0xe857  .word       0x0000E857                   # dsrav       $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dd0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263dd4:
    // 0x263dd4: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263dd4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_263dd8:
    // 0x263dd8: 0x0  nop
    ctx->pc = 0x263dd8u;
    // NOP
label_263ddc:
    // 0x263ddc: 0x0  nop
    ctx->pc = 0x263ddcu;
    // NOP
label_263de0:
    // 0x263de0: 0xe863  .word       0x0000E863                   # negu        $sp, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_263de4:
    // 0x263de4: 0x8db0  tge         $zero, $zero, 566
    ctx->pc = 0x263de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263de8:
    // 0x263de8: 0x0  nop
    ctx->pc = 0x263de8u;
    // NOP
label_263dec:
    // 0x263dec: 0x0  nop
    ctx->pc = 0x263decu;
    // NOP
label_263df0:
    // 0x263df0: 0xe875  .word       0x0000E875                   # INVALID     $zero, $zero, -0x178B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x263DF0 raw=0x0000E875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263df4:
    // 0x263df4: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_263df8:
    // 0x263df8: 0x0  nop
    ctx->pc = 0x263df8u;
    // NOP
label_263dfc:
    // 0x263dfc: 0x0  nop
    ctx->pc = 0x263dfcu;
    // NOP
label_263e00:
    // 0x263e00: 0xe87f  dsra32      $sp, $zero, 1
    ctx->pc = 0x263e00u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 1));
label_263e04:
    // 0x263e04: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_263e08:
    // 0x263e08: 0x0  nop
    ctx->pc = 0x263e08u;
    // NOP
label_263e0c:
    // 0x263e0c: 0x0  nop
    ctx->pc = 0x263e0cu;
    // NOP
label_263e10:
    // 0x263e10: 0xe88d  break       0, 930
    ctx->pc = 0x263e10u;
    runtime->handleBreak(rdram, ctx);
label_263e14:
    // 0x263e14: 0x4f80  sll         $t1, $zero, 30
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_263e18:
    // 0x263e18: 0x0  nop
    ctx->pc = 0x263e18u;
    // NOP
label_263e1c:
    // 0x263e1c: 0x0  nop
    ctx->pc = 0x263e1cu;
    // NOP
label_263e20:
    // 0x263e20: 0xe897  .word       0x0000E897                   # dsrav       $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e20u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_263e24:
    // 0x263e24: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_263e28:
    // 0x263e28: 0x0  nop
    ctx->pc = 0x263e28u;
    // NOP
label_263e2c:
    // 0x263e2c: 0x0  nop
    ctx->pc = 0x263e2cu;
    // NOP
label_263e30:
    // 0x263e30: 0xe8a8  .word       0x0000E8A8                   # mfsa        $sp # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263e30u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_263e34:
    // 0x263e34: 0x2db0  tge         $zero, $zero, 182
    ctx->pc = 0x263e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263e38:
    // 0x263e38: 0x0  nop
    ctx->pc = 0x263e38u;
    // NOP
label_263e3c:
    // 0x263e3c: 0x0  nop
    ctx->pc = 0x263e3cu;
    // NOP
label_263e40:
    // 0x263e40: 0xe8ae  .word       0x0000E8AE                   # dsub        $sp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_263e44:
    // 0x263e44: 0x2050  .word       0x00002050                   # mfhi        $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_263e48:
    // 0x263e48: 0x0  nop
    ctx->pc = 0x263e48u;
    // NOP
label_263e4c:
    // 0x263e4c: 0x0  nop
    ctx->pc = 0x263e4cu;
    // NOP
label_263e50:
    // 0x263e50: 0xe8b3  tltu        $zero, $zero, 930
    ctx->pc = 0x263e50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263e54:
    // 0x263e54: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_263e58:
    // 0x263e58: 0x0  nop
    ctx->pc = 0x263e58u;
    // NOP
label_263e5c:
    // 0x263e5c: 0x0  nop
    ctx->pc = 0x263e5cu;
    // NOP
label_263e60:
    // 0x263e60: 0xe8c0  sll         $sp, $zero, 3
    ctx->pc = 0x263e60u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_263e64:
    // 0x263e64: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x263e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_263e68:
    // 0x263e68: 0x0  nop
    ctx->pc = 0x263e68u;
    // NOP
label_263e6c:
    // 0x263e6c: 0x0  nop
    ctx->pc = 0x263e6cu;
    // NOP
label_263e70:
    // 0x263e70: 0xe8d1  .word       0x0000E8D1                   # mthi        $zero # 0000E8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e70u;
    ctx->hi = GPR_U64(ctx, 0);
label_263e74:
    // 0x263e74: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263e78:
    // 0x263e78: 0x0  nop
    ctx->pc = 0x263e78u;
    // NOP
label_263e7c:
    // 0x263e7c: 0x0  nop
    ctx->pc = 0x263e7cu;
    // NOP
label_263e80:
    // 0x263e80: 0xe8dc  .word       0x0000E8DC                   # dmult       $zero, $zero # 0000E8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263E80 raw=0x0000E8DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263e84:
    // 0x263e84: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_263e88:
    // 0x263e88: 0x0  nop
    ctx->pc = 0x263e88u;
    // NOP
label_263e8c:
    // 0x263e8c: 0x0  nop
    ctx->pc = 0x263e8cu;
    // NOP
label_263e90:
    // 0x263e90: 0xe8e7  .word       0x0000E8E7                   # not         $sp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e90u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_263e94:
    // 0x263e94: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263e94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_263e98:
    // 0x263e98: 0x0  nop
    ctx->pc = 0x263e98u;
    // NOP
label_263e9c:
    // 0x263e9c: 0x0  nop
    ctx->pc = 0x263e9cu;
    // NOP
label_263ea0:
    // 0x263ea0: 0xe8f1  tgeu        $zero, $zero, 931
    ctx->pc = 0x263ea0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ea4:
    // 0x263ea4: 0x6730  tge         $zero, $zero, 412
    ctx->pc = 0x263ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ea8:
    // 0x263ea8: 0x0  nop
    ctx->pc = 0x263ea8u;
    // NOP
label_263eac:
    // 0x263eac: 0x0  nop
    ctx->pc = 0x263eacu;
    // NOP
label_263eb0:
    // 0x263eb0: 0xe8fe  dsrl32      $sp, $zero, 3
    ctx->pc = 0x263eb0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (32 + 3));
label_263eb4:
    // 0x263eb4: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263eb4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_263eb8:
    // 0x263eb8: 0x0  nop
    ctx->pc = 0x263eb8u;
    // NOP
label_263ebc:
    // 0x263ebc: 0x0  nop
    ctx->pc = 0x263ebcu;
    // NOP
label_263ec0:
    // 0x263ec0: 0xe90e  .word       0x0000E90E                   # INVALID     $zero, $zero, -0x16F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x263EC0 raw=0x0000E90E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ec4:
    // 0x263ec4: 0x6ec0  sll         $t5, $zero, 27
    ctx->pc = 0x263ec4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_263ec8:
    // 0x263ec8: 0x0  nop
    ctx->pc = 0x263ec8u;
    // NOP
label_263ecc:
    // 0x263ecc: 0x0  nop
    ctx->pc = 0x263eccu;
    // NOP
label_263ed0:
    // 0x263ed0: 0xe91c  .word       0x0000E91C                   # dmult       $zero, $zero # 0000E900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x263ED0 raw=0x0000E91C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263ed4:
    // 0x263ed4: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_263ed8:
    // 0x263ed8: 0x0  nop
    ctx->pc = 0x263ed8u;
    // NOP
label_263edc:
    // 0x263edc: 0x0  nop
    ctx->pc = 0x263edcu;
    // NOP
label_263ee0:
    // 0x263ee0: 0xe92a  .word       0x0000E92A                   # slt         $sp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ee0u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263ee4:
    // 0x263ee4: 0x4ef0  tge         $zero, $zero, 315
    ctx->pc = 0x263ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ee8:
    // 0x263ee8: 0x0  nop
    ctx->pc = 0x263ee8u;
    // NOP
label_263eec:
    // 0x263eec: 0x0  nop
    ctx->pc = 0x263eecu;
    // NOP
label_263ef0:
    // 0x263ef0: 0xe934  teq         $zero, $zero, 932
    ctx->pc = 0x263ef0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263ef4:
    // 0x263ef4: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_263ef8:
    // 0x263ef8: 0x0  nop
    ctx->pc = 0x263ef8u;
    // NOP
label_263efc:
    // 0x263efc: 0x0  nop
    ctx->pc = 0x263efcu;
    // NOP
label_263f00:
    // 0x263f00: 0xe940  sll         $sp, $zero, 5
    ctx->pc = 0x263f00u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_263f04:
    // 0x263f04: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x263f04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f08:
    // 0x263f08: 0x0  nop
    ctx->pc = 0x263f08u;
    // NOP
label_263f0c:
    // 0x263f0c: 0x0  nop
    ctx->pc = 0x263f0cu;
    // NOP
label_263f10:
    // 0x263f10: 0xe94c  syscall     933
    ctx->pc = 0x263f10u;
    ctx->pc = 0x263F14u;
runtime->handleSyscall(rdram, ctx, 0x3A5u);
label_263f14:
    // 0x263f14: 0x90e0  .word       0x000090E0                   # add         $s2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_263f18:
    // 0x263f18: 0x0  nop
    ctx->pc = 0x263f18u;
    // NOP
label_263f1c:
    // 0x263f1c: 0x0  nop
    ctx->pc = 0x263f1cu;
    // NOP
label_263f20:
    // 0x263f20: 0xe95f  .word       0x0000E95F                   # ddivu       $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x263F20 raw=0x0000E95F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263f24:
    // 0x263f24: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x263f24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_263f28:
    // 0x263f28: 0x0  nop
    ctx->pc = 0x263f28u;
    // NOP
label_263f2c:
    // 0x263f2c: 0x0  nop
    ctx->pc = 0x263f2cu;
    // NOP
label_263f30:
    // 0x263f30: 0xe96a  .word       0x0000E96A                   # slt         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f30u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_263f34:
    // 0x263f34: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x263f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f38:
    // 0x263f38: 0x0  nop
    ctx->pc = 0x263f38u;
    // NOP
label_263f3c:
    // 0x263f3c: 0x0  nop
    ctx->pc = 0x263f3cu;
    // NOP
label_263f40:
    // 0x263f40: 0xe97a  dsrl        $sp, $zero, 5
    ctx->pc = 0x263f40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 5);
label_263f44:
    // 0x263f44: 0x4af0  tge         $zero, $zero, 299
    ctx->pc = 0x263f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f48:
    // 0x263f48: 0x0  nop
    ctx->pc = 0x263f48u;
    // NOP
label_263f4c:
    // 0x263f4c: 0x0  nop
    ctx->pc = 0x263f4cu;
    // NOP
label_263f50:
    // 0x263f50: 0xe984  .word       0x0000E984                   # sllv        $sp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f50u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263f54:
    // 0x263f54: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_263f58:
    // 0x263f58: 0x0  nop
    ctx->pc = 0x263f58u;
    // NOP
label_263f5c:
    // 0x263f5c: 0x0  nop
    ctx->pc = 0x263f5cu;
    // NOP
label_263f60:
    // 0x263f60: 0xe98d  break       0, 934
    ctx->pc = 0x263f60u;
    runtime->handleBreak(rdram, ctx);
label_263f64:
    // 0x263f64: 0x3b60  .word       0x00003B60                   # add         $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_263f68:
    // 0x263f68: 0x0  nop
    ctx->pc = 0x263f68u;
    // NOP
label_263f6c:
    // 0x263f6c: 0x0  nop
    ctx->pc = 0x263f6cu;
    // NOP
label_263f70:
    // 0x263f70: 0xe995  .word       0x0000E995                   # INVALID     $zero, $zero, -0x166B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x263F70 raw=0x0000E995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_263f74:
    // 0x263f74: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x263f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263f78:
    // 0x263f78: 0x0  nop
    ctx->pc = 0x263f78u;
    // NOP
label_263f7c:
    // 0x263f7c: 0x0  nop
    ctx->pc = 0x263f7cu;
    // NOP
label_263f80:
    // 0x263f80: 0xe9a0  .word       0x0000E9A0                   # add         $sp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_263f84:
    // 0x263f84: 0x6a20  .word       0x00006A20                   # add         $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_263f88:
    // 0x263f88: 0x0  nop
    ctx->pc = 0x263f88u;
    // NOP
label_263f8c:
    // 0x263f8c: 0x0  nop
    ctx->pc = 0x263f8cu;
    // NOP
label_263f90:
    // 0x263f90: 0xe9ae  .word       0x0000E9AE                   # dsub        $sp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_263f94:
    // 0x263f94: 0x8710  .word       0x00008710                   # mfhi        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263f94u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_263f98:
    // 0x263f98: 0x0  nop
    ctx->pc = 0x263f98u;
    // NOP
label_263f9c:
    // 0x263f9c: 0x0  nop
    ctx->pc = 0x263f9cu;
    // NOP
label_263fa0:
    // 0x263fa0: 0xe9bf  dsra32      $sp, $zero, 6
    ctx->pc = 0x263fa0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 6));
label_263fa4:
    // 0x263fa4: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263fa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263fa8:
    // 0x263fa8: 0x0  nop
    ctx->pc = 0x263fa8u;
    // NOP
label_263fac:
    // 0x263fac: 0x0  nop
    ctx->pc = 0x263facu;
    // NOP
label_263fb0:
    // 0x263fb0: 0xe9c7  .word       0x0000E9C7                   # srav        $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_263fb4:
    // 0x263fb4: 0x4040  sll         $t0, $zero, 1
    ctx->pc = 0x263fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_263fb8:
    // 0x263fb8: 0x0  nop
    ctx->pc = 0x263fb8u;
    // NOP
label_263fbc:
    // 0x263fbc: 0x0  nop
    ctx->pc = 0x263fbcu;
    // NOP
label_263fc0:
    // 0x263fc0: 0xe9d0  .word       0x0000E9D0                   # mfhi        $sp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263fc0u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_263fc4:
    // 0x263fc4: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_263fc8:
    // 0x263fc8: 0x0  nop
    ctx->pc = 0x263fc8u;
    // NOP
label_263fcc:
    // 0x263fcc: 0x0  nop
    ctx->pc = 0x263fccu;
    // NOP
label_263fd0:
    // 0x263fd0: 0xe9d8  .word       0x0000E9D8                   # mult        $sp, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x263fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_263fd4:
    // 0x263fd4: 0x52f0  tge         $zero, $zero, 331
    ctx->pc = 0x263fd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_263fd8:
    // 0x263fd8: 0x0  nop
    ctx->pc = 0x263fd8u;
    // NOP
label_263fdc:
    // 0x263fdc: 0x0  nop
    ctx->pc = 0x263fdcu;
    // NOP
label_263fe0:
    // 0x263fe0: 0xe9e3  .word       0x0000E9E3                   # negu        $sp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_263fe4:
    // 0x263fe4: 0x3e10  .word       0x00003E10                   # mfhi        $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263fe4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_263fe8:
    // 0x263fe8: 0x0  nop
    ctx->pc = 0x263fe8u;
    // NOP
label_263fec:
    // 0x263fec: 0x0  nop
    ctx->pc = 0x263fecu;
    // NOP
label_263ff0:
    // 0x263ff0: 0xe9eb  .word       0x0000E9EB                   # sltu        $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ff0u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_263ff4:
    // 0x263ff4: 0x3b60  .word       0x00003B60                   # add         $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x263ff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_263ff8:
    // 0x263ff8: 0x0  nop
    ctx->pc = 0x263ff8u;
    // NOP
label_263ffc:
    // 0x263ffc: 0x0  nop
    ctx->pc = 0x263ffcu;
    // NOP
label_264000:
    // 0x264000: 0xe9f3  tltu        $zero, $zero, 935
    ctx->pc = 0x264000u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264004:
    // 0x264004: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264008:
    // 0x264008: 0x0  nop
    ctx->pc = 0x264008u;
    // NOP
label_26400c:
    // 0x26400c: 0x0  nop
    ctx->pc = 0x26400cu;
    // NOP
label_264010:
    // 0x264010: 0xe9fd  .word       0x0000E9FD                   # INVALID     $zero, $zero, -0x1603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264010 raw=0x0000E9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264014:
    // 0x264014: 0x96a0  .word       0x000096A0                   # add         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_264018:
    // 0x264018: 0x0  nop
    ctx->pc = 0x264018u;
    // NOP
label_26401c:
    // 0x26401c: 0x0  nop
    ctx->pc = 0x26401cu;
    // NOP
label_264020:
    // 0x264020: 0xea10  .word       0x0000EA10                   # mfhi        $sp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264020u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_264024:
    // 0x264024: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_264028:
    // 0x264028: 0x0  nop
    ctx->pc = 0x264028u;
    // NOP
label_26402c:
    // 0x26402c: 0x0  nop
    ctx->pc = 0x26402cu;
    // NOP
label_264030:
    // 0x264030: 0xea21  .word       0x0000EA21                   # addu        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264034:
    // 0x264034: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_264038:
    // 0x264038: 0x0  nop
    ctx->pc = 0x264038u;
    // NOP
label_26403c:
    // 0x26403c: 0x0  nop
    ctx->pc = 0x26403cu;
    // NOP
label_264040:
    // 0x264040: 0xea2c  .word       0x0000EA2C                   # dadd        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264040u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_264044:
    // 0x264044: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x264044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264048:
    // 0x264048: 0x0  nop
    ctx->pc = 0x264048u;
    // NOP
label_26404c:
    // 0x26404c: 0x0  nop
    ctx->pc = 0x26404cu;
    // NOP
label_264050:
    // 0x264050: 0xea38  dsll        $sp, $zero, 8
    ctx->pc = 0x264050u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 8);
label_264054:
    // 0x264054: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_264058:
    // 0x264058: 0x0  nop
    ctx->pc = 0x264058u;
    // NOP
label_26405c:
    // 0x26405c: 0x0  nop
    ctx->pc = 0x26405cu;
    // NOP
label_264060:
    // 0x264060: 0xea47  .word       0x0000EA47                   # srav        $sp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264064:
    // 0x264064: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264064u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264068:
    // 0x264068: 0x0  nop
    ctx->pc = 0x264068u;
    // NOP
label_26406c:
    // 0x26406c: 0x0  nop
    ctx->pc = 0x26406cu;
    // NOP
label_264070:
    // 0x264070: 0xea53  .word       0x0000EA53                   # mtlo        $zero # 0000EA40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264070u;
    ctx->lo = GPR_U64(ctx, 0);
label_264074:
    // 0x264074: 0x4740  sll         $t0, $zero, 29
    ctx->pc = 0x264074u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_264078:
    // 0x264078: 0x0  nop
    ctx->pc = 0x264078u;
    // NOP
label_26407c:
    // 0x26407c: 0x0  nop
    ctx->pc = 0x26407cu;
    // NOP
label_264080:
    // 0x264080: 0xea5c  .word       0x0000EA5C                   # dmult       $zero, $zero # 0000EA40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x264080 raw=0x0000EA5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264084:
    // 0x264084: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264084u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264088:
    // 0x264088: 0x0  nop
    ctx->pc = 0x264088u;
    // NOP
label_26408c:
    // 0x26408c: 0x0  nop
    ctx->pc = 0x26408cu;
    // NOP
label_264090:
    // 0x264090: 0xea69  .word       0x0000EA69                   # mtsa        $zero # 0000EA40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264094:
    // 0x264094: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_264098:
    // 0x264098: 0x0  nop
    ctx->pc = 0x264098u;
    // NOP
label_26409c:
    // 0x26409c: 0x0  nop
    ctx->pc = 0x26409cu;
    // NOP
label_2640a0:
    // 0x2640a0: 0xea7c  dsll32      $sp, $zero, 9
    ctx->pc = 0x2640a0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 9));
label_2640a4:
    // 0x2640a4: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2640a8:
    // 0x2640a8: 0x0  nop
    ctx->pc = 0x2640a8u;
    // NOP
label_2640ac:
    // 0x2640ac: 0x0  nop
    ctx->pc = 0x2640acu;
    // NOP
label_2640b0:
    // 0x2640b0: 0xea8f  .word       0x0000EA8F                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2640b4:
    // 0x2640b4: 0x3800  sll         $a3, $zero, 0
    ctx->pc = 0x2640b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2640b8:
    // 0x2640b8: 0x0  nop
    ctx->pc = 0x2640b8u;
    // NOP
label_2640bc:
    // 0x2640bc: 0x0  nop
    ctx->pc = 0x2640bcu;
    // NOP
label_2640c0:
    // 0x2640c0: 0xea96  .word       0x0000EA96                   # dsrlv       $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640c0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2640c4:
    // 0x2640c4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2640c8:
    // 0x2640c8: 0x0  nop
    ctx->pc = 0x2640c8u;
    // NOP
label_2640cc:
    // 0x2640cc: 0x0  nop
    ctx->pc = 0x2640ccu;
    // NOP
label_2640d0:
    // 0x2640d0: 0xeaa1  .word       0x0000EAA1                   # addu        $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2640d4:
    // 0x2640d4: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2640d8:
    // 0x2640d8: 0x0  nop
    ctx->pc = 0x2640d8u;
    // NOP
label_2640dc:
    // 0x2640dc: 0x0  nop
    ctx->pc = 0x2640dcu;
    // NOP
label_2640e0:
    // 0x2640e0: 0xeaab  .word       0x0000EAAB                   # sltu        $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2640e0u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2640e4:
    // 0x2640e4: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x2640e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2640e8:
    // 0x2640e8: 0x0  nop
    ctx->pc = 0x2640e8u;
    // NOP
label_2640ec:
    // 0x2640ec: 0x0  nop
    ctx->pc = 0x2640ecu;
    // NOP
label_2640f0:
    // 0x2640f0: 0xeabe  dsrl32      $sp, $zero, 10
    ctx->pc = 0x2640f0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (32 + 10));
label_2640f4:
    // 0x2640f4: 0x4cb0  tge         $zero, $zero, 306
    ctx->pc = 0x2640f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2640f8:
    // 0x2640f8: 0x0  nop
    ctx->pc = 0x2640f8u;
    // NOP
label_2640fc:
    // 0x2640fc: 0x0  nop
    ctx->pc = 0x2640fcu;
    // NOP
label_264100:
    // 0x264100: 0xeac8  .word       0x0000EAC8                   # jr          $zero # 0000EAC0 <InstrIdType: CPU_SPECIAL>
label_264104:
    if (ctx->pc == 0x264104u) {
        ctx->pc = 0x264104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264100u;
        // 0x264104: 0x4fc0  sll         $t1, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264108u;
        goto label_264108;
    }
    ctx->pc = 0x264100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x264104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264100u;
        // 0x264104: 0x4fc0  sll         $t1, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264108u;
label_264108:
    // 0x264108: 0x0  nop
    ctx->pc = 0x264108u;
    // NOP
label_26410c:
    // 0x26410c: 0x0  nop
    ctx->pc = 0x26410cu;
    // NOP
label_264110:
    // 0x264110: 0xead2  .word       0x0000EAD2                   # mflo        $sp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264110u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_264114:
    // 0x264114: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264114u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264118:
    // 0x264118: 0x0  nop
    ctx->pc = 0x264118u;
    // NOP
label_26411c:
    // 0x26411c: 0x0  nop
    ctx->pc = 0x26411cu;
    // NOP
label_264120:
    // 0x264120: 0xeae1  .word       0x0000EAE1                   # addu        $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264124:
    // 0x264124: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_264128:
    // 0x264128: 0x0  nop
    ctx->pc = 0x264128u;
    // NOP
label_26412c:
    // 0x26412c: 0x0  nop
    ctx->pc = 0x26412cu;
    // NOP
label_264130:
    // 0x264130: 0xeaef  .word       0x0000EAEF                   # dsubu       $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264130u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264134:
    // 0x264134: 0x3970  tge         $zero, $zero, 229
    ctx->pc = 0x264134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264138:
    // 0x264138: 0x0  nop
    ctx->pc = 0x264138u;
    // NOP
label_26413c:
    // 0x26413c: 0x0  nop
    ctx->pc = 0x26413cu;
    // NOP
label_264140:
    // 0x264140: 0xeaf7  .word       0x0000EAF7                   # INVALID     $zero, $zero, -0x1509 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x264140 raw=0x0000EAF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264144:
    // 0x264144: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x264144u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264148:
    // 0x264148: 0x0  nop
    ctx->pc = 0x264148u;
    // NOP
label_26414c:
    // 0x26414c: 0x0  nop
    ctx->pc = 0x26414cu;
    // NOP
label_264150:
    // 0x264150: 0xeaff  dsra32      $sp, $zero, 11
    ctx->pc = 0x264150u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 11));
label_264154:
    // 0x264154: 0x2c40  sll         $a1, $zero, 17
    ctx->pc = 0x264154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_264158:
    // 0x264158: 0x0  nop
    ctx->pc = 0x264158u;
    // NOP
label_26415c:
    // 0x26415c: 0x0  nop
    ctx->pc = 0x26415cu;
    // NOP
label_264160:
    // 0x264160: 0xeb05  .word       0x0000EB05                   # INVALID     $zero, $zero, -0x14FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x264160 raw=0x0000EB05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264164:
    // 0x264164: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x264164u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_264168:
    // 0x264168: 0x0  nop
    ctx->pc = 0x264168u;
    // NOP
label_26416c:
    // 0x26416c: 0x0  nop
    ctx->pc = 0x26416cu;
    // NOP
label_264170:
    // 0x264170: 0xeb11  .word       0x0000EB11                   # mthi        $zero # 0000EB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264170u;
    ctx->hi = GPR_U64(ctx, 0);
label_264174:
    // 0x264174: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x264174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264178:
    // 0x264178: 0x0  nop
    ctx->pc = 0x264178u;
    // NOP
label_26417c:
    // 0x26417c: 0x0  nop
    ctx->pc = 0x26417cu;
    // NOP
label_264180:
    // 0x264180: 0xeb18  .word       0x0000EB18                   # mult        $sp, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_264184:
    // 0x264184: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264188:
    // 0x264188: 0x0  nop
    ctx->pc = 0x264188u;
    // NOP
label_26418c:
    // 0x26418c: 0x0  nop
    ctx->pc = 0x26418cu;
    // NOP
label_264190:
    // 0x264190: 0xeb22  .word       0x0000EB22                   # neg         $sp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264190u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_264194:
    // 0x264194: 0x50b0  tge         $zero, $zero, 322
    ctx->pc = 0x264194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264198:
    // 0x264198: 0x0  nop
    ctx->pc = 0x264198u;
    // NOP
label_26419c:
    // 0x26419c: 0x0  nop
    ctx->pc = 0x26419cu;
    // NOP
label_2641a0:
    // 0x2641a0: 0xeb2d  .word       0x0000EB2D                   # daddu       $sp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2641a4:
    // 0x2641a4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2641a8:
    // 0x2641a8: 0x0  nop
    ctx->pc = 0x2641a8u;
    // NOP
label_2641ac:
    // 0x2641ac: 0x0  nop
    ctx->pc = 0x2641acu;
    // NOP
label_2641b0:
    // 0x2641b0: 0xeb40  sll         $sp, $zero, 13
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2641b4:
    // 0x2641b4: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2641b8:
    // 0x2641b8: 0x0  nop
    ctx->pc = 0x2641b8u;
    // NOP
label_2641bc:
    // 0x2641bc: 0x0  nop
    ctx->pc = 0x2641bcu;
    // NOP
label_2641c0:
    // 0x2641c0: 0xeb54  .word       0x0000EB54                   # dsllv       $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641c0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2641c4:
    // 0x2641c4: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x2641c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2641c8:
    // 0x2641c8: 0x0  nop
    ctx->pc = 0x2641c8u;
    // NOP
label_2641cc:
    // 0x2641cc: 0x0  nop
    ctx->pc = 0x2641ccu;
    // NOP
label_2641d0:
    // 0x2641d0: 0xeb61  .word       0x0000EB61                   # addu        $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2641d4:
    // 0x2641d4: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x2641d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2641d8:
    // 0x2641d8: 0x0  nop
    ctx->pc = 0x2641d8u;
    // NOP
label_2641dc:
    // 0x2641dc: 0x0  nop
    ctx->pc = 0x2641dcu;
    // NOP
label_2641e0:
    // 0x2641e0: 0xeb6c  .word       0x0000EB6C                   # dadd        $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_2641e4:
    // 0x2641e4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2641e8:
    // 0x2641e8: 0x0  nop
    ctx->pc = 0x2641e8u;
    // NOP
label_2641ec:
    // 0x2641ec: 0x0  nop
    ctx->pc = 0x2641ecu;
    // NOP
label_2641f0:
    // 0x2641f0: 0xeb77  .word       0x0000EB77                   # INVALID     $zero, $zero, -0x1489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2641F0 raw=0x0000EB77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2641f4:
    // 0x2641f4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2641f8:
    // 0x2641f8: 0x0  nop
    ctx->pc = 0x2641f8u;
    // NOP
label_2641fc:
    // 0x2641fc: 0x0  nop
    ctx->pc = 0x2641fcu;
    // NOP
label_264200:
    // 0x264200: 0xeb83  sra         $sp, $zero, 14
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 14));
label_264204:
    // 0x264204: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264204u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264208:
    // 0x264208: 0x0  nop
    ctx->pc = 0x264208u;
    // NOP
label_26420c:
    // 0x26420c: 0x0  nop
    ctx->pc = 0x26420cu;
    // NOP
label_264210:
    // 0x264210: 0xeb8f  .word       0x0000EB8F                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264210u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264214:
    // 0x264214: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264218:
    // 0x264218: 0x0  nop
    ctx->pc = 0x264218u;
    // NOP
label_26421c:
    // 0x26421c: 0x0  nop
    ctx->pc = 0x26421cu;
    // NOP
label_264220:
    // 0x264220: 0xeb98  .word       0x0000EB98                   # mult        $sp, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_264224:
    // 0x264224: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x264224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264228:
    // 0x264228: 0x0  nop
    ctx->pc = 0x264228u;
    // NOP
label_26422c:
    // 0x26422c: 0x0  nop
    ctx->pc = 0x26422cu;
    // NOP
label_264230:
    // 0x264230: 0xeba4  .word       0x0000EBA4                   # and         $sp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264230u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_264234:
    // 0x264234: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_264238:
    // 0x264238: 0x0  nop
    ctx->pc = 0x264238u;
    // NOP
label_26423c:
    // 0x26423c: 0x0  nop
    ctx->pc = 0x26423cu;
    // NOP
label_264240:
    // 0x264240: 0xebb4  teq         $zero, $zero, 942
    ctx->pc = 0x264240u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264244:
    // 0x264244: 0x5cf0  tge         $zero, $zero, 371
    ctx->pc = 0x264244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264248:
    // 0x264248: 0x0  nop
    ctx->pc = 0x264248u;
    // NOP
label_26424c:
    // 0x26424c: 0x0  nop
    ctx->pc = 0x26424cu;
    // NOP
label_264250:
    // 0x264250: 0xebc0  sll         $sp, $zero, 15
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264254:
    // 0x264254: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264254u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264258:
    // 0x264258: 0x0  nop
    ctx->pc = 0x264258u;
    // NOP
label_26425c:
    // 0x26425c: 0x0  nop
    ctx->pc = 0x26425cu;
    // NOP
label_264260:
    // 0x264260: 0xebcf  .word       0x0000EBCF                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264260u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264264:
    // 0x264264: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264264u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_264268:
    // 0x264268: 0x0  nop
    ctx->pc = 0x264268u;
    // NOP
label_26426c:
    // 0x26426c: 0x0  nop
    ctx->pc = 0x26426cu;
    // NOP
label_264270:
    // 0x264270: 0xebdd  .word       0x0000EBDD                   # dmultu      $zero, $zero # 0000EBC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264270 raw=0x0000EBDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264274:
    // 0x264274: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264278:
    // 0x264278: 0x0  nop
    ctx->pc = 0x264278u;
    // NOP
label_26427c:
    // 0x26427c: 0x0  nop
    ctx->pc = 0x26427cu;
    // NOP
label_264280:
    // 0x264280: 0xebe7  .word       0x0000EBE7                   # not         $sp, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264280u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_264284:
    // 0x264284: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264288:
    // 0x264288: 0x0  nop
    ctx->pc = 0x264288u;
    // NOP
label_26428c:
    // 0x26428c: 0x0  nop
    ctx->pc = 0x26428cu;
    // NOP
label_264290:
    // 0x264290: 0xebef  .word       0x0000EBEF                   # dsubu       $sp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264290u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264294:
    // 0x264294: 0x33d0  .word       0x000033D0                   # mfhi        $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264294u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_264298:
    // 0x264298: 0x0  nop
    ctx->pc = 0x264298u;
    // NOP
label_26429c:
    // 0x26429c: 0x0  nop
    ctx->pc = 0x26429cu;
    // NOP
label_2642a0:
    // 0x2642a0: 0xebf6  tne         $zero, $zero, 943
    ctx->pc = 0x2642a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2642a4:
    // 0x2642a4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642a4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2642a8:
    // 0x2642a8: 0x0  nop
    ctx->pc = 0x2642a8u;
    // NOP
label_2642ac:
    // 0x2642ac: 0x0  nop
    ctx->pc = 0x2642acu;
    // NOP
label_2642b0:
    // 0x2642b0: 0xec01  .word       0x0000EC01                   # INVALID     $zero, $zero, -0x13FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2642B0 raw=0x0000EC01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2642b4:
    // 0x2642b4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x2642b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2642b8:
    // 0x2642b8: 0x0  nop
    ctx->pc = 0x2642b8u;
    // NOP
label_2642bc:
    // 0x2642bc: 0x0  nop
    ctx->pc = 0x2642bcu;
    // NOP
label_2642c0:
    // 0x2642c0: 0xec13  .word       0x0000EC13                   # mtlo        $zero # 0000EC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2642c4:
    // 0x2642c4: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2642c8:
    // 0x2642c8: 0x0  nop
    ctx->pc = 0x2642c8u;
    // NOP
label_2642cc:
    // 0x2642cc: 0x0  nop
    ctx->pc = 0x2642ccu;
    // NOP
label_2642d0:
    // 0x2642d0: 0xec1c  .word       0x0000EC1C                   # dmult       $zero, $zero # 0000EC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2642D0 raw=0x0000EC1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2642d4:
    // 0x2642d4: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2642d8:
    // 0x2642d8: 0x0  nop
    ctx->pc = 0x2642d8u;
    // NOP
label_2642dc:
    // 0x2642dc: 0x0  nop
    ctx->pc = 0x2642dcu;
    // NOP
label_2642e0:
    // 0x2642e0: 0xec23  .word       0x0000EC23                   # negu        $sp, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642e0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2642e4:
    // 0x2642e4: 0x24c0  sll         $a0, $zero, 19
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2642e8:
    // 0x2642e8: 0x0  nop
    ctx->pc = 0x2642e8u;
    // NOP
label_2642ec:
    // 0x2642ec: 0x0  nop
    ctx->pc = 0x2642ecu;
    // NOP
label_2642f0:
    // 0x2642f0: 0xec28  .word       0x0000EC28                   # mfsa        $sp # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2642f0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2642f4:
    // 0x2642f4: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2642f8:
    // 0x2642f8: 0x0  nop
    ctx->pc = 0x2642f8u;
    // NOP
label_2642fc:
    // 0x2642fc: 0x0  nop
    ctx->pc = 0x2642fcu;
    // NOP
label_264300:
    // 0x264300: 0xec30  tge         $zero, $zero, 944
    ctx->pc = 0x264300u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264304:
    // 0x264304: 0x2770  tge         $zero, $zero, 157
    ctx->pc = 0x264304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264308:
    // 0x264308: 0x0  nop
    ctx->pc = 0x264308u;
    // NOP
label_26430c:
    // 0x26430c: 0x0  nop
    ctx->pc = 0x26430cu;
    // NOP
label_264310:
    // 0x264310: 0xec35  .word       0x0000EC35                   # INVALID     $zero, $zero, -0x13CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x264310 raw=0x0000EC35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264314:
    // 0x264314: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x264314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264318:
    // 0x264318: 0x0  nop
    ctx->pc = 0x264318u;
    // NOP
label_26431c:
    // 0x26431c: 0x0  nop
    ctx->pc = 0x26431cu;
    // NOP
label_264320:
    // 0x264320: 0xec3f  dsra32      $sp, $zero, 16
    ctx->pc = 0x264320u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 16));
label_264324:
    // 0x264324: 0x53d0  .word       0x000053D0                   # mfhi        $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264324u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264328:
    // 0x264328: 0x0  nop
    ctx->pc = 0x264328u;
    // NOP
label_26432c:
    // 0x26432c: 0x0  nop
    ctx->pc = 0x26432cu;
    // NOP
label_264330:
    // 0x264330: 0xec4a  .word       0x0000EC4A                   # movz        $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264330u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_264334:
    // 0x264334: 0x99c0  sll         $s3, $zero, 7
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264338:
    // 0x264338: 0x0  nop
    ctx->pc = 0x264338u;
    // NOP
label_26433c:
    // 0x26433c: 0x0  nop
    ctx->pc = 0x26433cu;
    // NOP
label_264340:
    // 0x264340: 0xec5e  .word       0x0000EC5E                   # ddiv        $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x264340 raw=0x0000EC5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264344:
    // 0x264344: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264344u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264348:
    // 0x264348: 0x0  nop
    ctx->pc = 0x264348u;
    // NOP
label_26434c:
    // 0x26434c: 0x0  nop
    ctx->pc = 0x26434cu;
    // NOP
label_264350:
    // 0x264350: 0xec6f  .word       0x0000EC6F                   # dsubu       $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264350u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264354:
    // 0x264354: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x264354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264358:
    // 0x264358: 0x0  nop
    ctx->pc = 0x264358u;
    // NOP
label_26435c:
    // 0x26435c: 0x0  nop
    ctx->pc = 0x26435cu;
    // NOP
label_264360:
    // 0x264360: 0xec7b  dsra        $sp, $zero, 17
    ctx->pc = 0x264360u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 17);
label_264364:
    // 0x264364: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x264364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_264368:
    // 0x264368: 0x0  nop
    ctx->pc = 0x264368u;
    // NOP
label_26436c:
    // 0x26436c: 0x0  nop
    ctx->pc = 0x26436cu;
    // NOP
label_264370:
    // 0x264370: 0xec84  .word       0x0000EC84                   # sllv        $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264370u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264374:
    // 0x264374: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x264374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264378:
    // 0x264378: 0x0  nop
    ctx->pc = 0x264378u;
    // NOP
label_26437c:
    // 0x26437c: 0x0  nop
    ctx->pc = 0x26437cu;
    // NOP
label_264380:
    // 0x264380: 0xec8f  .word       0x0000EC8F                   # sync.p # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264384:
    // 0x264384: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x264384u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_264388:
    // 0x264388: 0x0  nop
    ctx->pc = 0x264388u;
    // NOP
label_26438c:
    // 0x26438c: 0x0  nop
    ctx->pc = 0x26438cu;
    // NOP
label_264390:
    // 0x264390: 0xec9c  .word       0x0000EC9C                   # dmult       $zero, $zero # 0000EC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x264390 raw=0x0000EC9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264394:
    // 0x264394: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264394u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_264398:
    // 0x264398: 0x0  nop
    ctx->pc = 0x264398u;
    // NOP
label_26439c:
    // 0x26439c: 0x0  nop
    ctx->pc = 0x26439cu;
    // NOP
label_2643a0:
    // 0x2643a0: 0xecb1  tgeu        $zero, $zero, 946
    ctx->pc = 0x2643a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2643a4:
    // 0x2643a4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2643a8:
    // 0x2643a8: 0x0  nop
    ctx->pc = 0x2643a8u;
    // NOP
label_2643ac:
    // 0x2643ac: 0x0  nop
    ctx->pc = 0x2643acu;
    // NOP
label_2643b0:
    // 0x2643b0: 0xecbd  .word       0x0000ECBD                   # INVALID     $zero, $zero, -0x1343 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2643B0 raw=0x0000ECBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2643b4:
    // 0x2643b4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2643b8:
    // 0x2643b8: 0x0  nop
    ctx->pc = 0x2643b8u;
    // NOP
label_2643bc:
    // 0x2643bc: 0x0  nop
    ctx->pc = 0x2643bcu;
    // NOP
    ctx->pc = 0x2643c0u;
    return;
}
