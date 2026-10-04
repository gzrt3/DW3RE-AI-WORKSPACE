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


void FUN_0019b910_part448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x275d40u: goto label_275d40;
        case 0x275d44u: goto label_275d44;
        case 0x275d48u: goto label_275d48;
        case 0x275d4cu: goto label_275d4c;
        case 0x275d50u: goto label_275d50;
        case 0x275d54u: goto label_275d54;
        case 0x275d58u: goto label_275d58;
        case 0x275d5cu: goto label_275d5c;
        case 0x275d60u: goto label_275d60;
        case 0x275d64u: goto label_275d64;
        case 0x275d68u: goto label_275d68;
        case 0x275d6cu: goto label_275d6c;
        case 0x275d70u: goto label_275d70;
        case 0x275d74u: goto label_275d74;
        case 0x275d78u: goto label_275d78;
        case 0x275d7cu: goto label_275d7c;
        case 0x275d80u: goto label_275d80;
        case 0x275d84u: goto label_275d84;
        case 0x275d88u: goto label_275d88;
        case 0x275d8cu: goto label_275d8c;
        case 0x275d90u: goto label_275d90;
        case 0x275d94u: goto label_275d94;
        case 0x275d98u: goto label_275d98;
        case 0x275d9cu: goto label_275d9c;
        case 0x275da0u: goto label_275da0;
        case 0x275da4u: goto label_275da4;
        case 0x275da8u: goto label_275da8;
        case 0x275dacu: goto label_275dac;
        case 0x275db0u: goto label_275db0;
        case 0x275db4u: goto label_275db4;
        case 0x275db8u: goto label_275db8;
        case 0x275dbcu: goto label_275dbc;
        case 0x275dc0u: goto label_275dc0;
        case 0x275dc4u: goto label_275dc4;
        case 0x275dc8u: goto label_275dc8;
        case 0x275dccu: goto label_275dcc;
        case 0x275dd0u: goto label_275dd0;
        case 0x275dd4u: goto label_275dd4;
        case 0x275dd8u: goto label_275dd8;
        case 0x275ddcu: goto label_275ddc;
        case 0x275de0u: goto label_275de0;
        case 0x275de4u: goto label_275de4;
        case 0x275de8u: goto label_275de8;
        case 0x275decu: goto label_275dec;
        case 0x275df0u: goto label_275df0;
        case 0x275df4u: goto label_275df4;
        case 0x275df8u: goto label_275df8;
        case 0x275dfcu: goto label_275dfc;
        case 0x275e00u: goto label_275e00;
        case 0x275e04u: goto label_275e04;
        case 0x275e08u: goto label_275e08;
        case 0x275e0cu: goto label_275e0c;
        case 0x275e10u: goto label_275e10;
        case 0x275e14u: goto label_275e14;
        case 0x275e18u: goto label_275e18;
        case 0x275e1cu: goto label_275e1c;
        case 0x275e20u: goto label_275e20;
        case 0x275e24u: goto label_275e24;
        case 0x275e28u: goto label_275e28;
        case 0x275e2cu: goto label_275e2c;
        case 0x275e30u: goto label_275e30;
        case 0x275e34u: goto label_275e34;
        case 0x275e38u: goto label_275e38;
        case 0x275e3cu: goto label_275e3c;
        case 0x275e40u: goto label_275e40;
        case 0x275e44u: goto label_275e44;
        case 0x275e48u: goto label_275e48;
        case 0x275e4cu: goto label_275e4c;
        case 0x275e50u: goto label_275e50;
        case 0x275e54u: goto label_275e54;
        case 0x275e58u: goto label_275e58;
        case 0x275e5cu: goto label_275e5c;
        case 0x275e60u: goto label_275e60;
        case 0x275e64u: goto label_275e64;
        case 0x275e68u: goto label_275e68;
        case 0x275e6cu: goto label_275e6c;
        case 0x275e70u: goto label_275e70;
        case 0x275e74u: goto label_275e74;
        case 0x275e78u: goto label_275e78;
        case 0x275e7cu: goto label_275e7c;
        case 0x275e80u: goto label_275e80;
        case 0x275e84u: goto label_275e84;
        case 0x275e88u: goto label_275e88;
        case 0x275e8cu: goto label_275e8c;
        case 0x275e90u: goto label_275e90;
        case 0x275e94u: goto label_275e94;
        case 0x275e98u: goto label_275e98;
        case 0x275e9cu: goto label_275e9c;
        case 0x275ea0u: goto label_275ea0;
        case 0x275ea4u: goto label_275ea4;
        case 0x275ea8u: goto label_275ea8;
        case 0x275eacu: goto label_275eac;
        case 0x275eb0u: goto label_275eb0;
        case 0x275eb4u: goto label_275eb4;
        case 0x275eb8u: goto label_275eb8;
        case 0x275ebcu: goto label_275ebc;
        case 0x275ec0u: goto label_275ec0;
        case 0x275ec4u: goto label_275ec4;
        case 0x275ec8u: goto label_275ec8;
        case 0x275eccu: goto label_275ecc;
        case 0x275ed0u: goto label_275ed0;
        case 0x275ed4u: goto label_275ed4;
        case 0x275ed8u: goto label_275ed8;
        case 0x275edcu: goto label_275edc;
        case 0x275ee0u: goto label_275ee0;
        case 0x275ee4u: goto label_275ee4;
        case 0x275ee8u: goto label_275ee8;
        case 0x275eecu: goto label_275eec;
        case 0x275ef0u: goto label_275ef0;
        case 0x275ef4u: goto label_275ef4;
        case 0x275ef8u: goto label_275ef8;
        case 0x275efcu: goto label_275efc;
        case 0x275f00u: goto label_275f00;
        case 0x275f04u: goto label_275f04;
        case 0x275f08u: goto label_275f08;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f10u: goto label_275f10;
        case 0x275f14u: goto label_275f14;
        case 0x275f18u: goto label_275f18;
        case 0x275f1cu: goto label_275f1c;
        case 0x275f20u: goto label_275f20;
        case 0x275f24u: goto label_275f24;
        case 0x275f28u: goto label_275f28;
        case 0x275f2cu: goto label_275f2c;
        case 0x275f30u: goto label_275f30;
        case 0x275f34u: goto label_275f34;
        case 0x275f38u: goto label_275f38;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f40u: goto label_275f40;
        case 0x275f44u: goto label_275f44;
        case 0x275f48u: goto label_275f48;
        case 0x275f4cu: goto label_275f4c;
        case 0x275f50u: goto label_275f50;
        case 0x275f54u: goto label_275f54;
        case 0x275f58u: goto label_275f58;
        case 0x275f5cu: goto label_275f5c;
        case 0x275f60u: goto label_275f60;
        case 0x275f64u: goto label_275f64;
        case 0x275f68u: goto label_275f68;
        case 0x275f6cu: goto label_275f6c;
        case 0x275f70u: goto label_275f70;
        case 0x275f74u: goto label_275f74;
        case 0x275f78u: goto label_275f78;
        case 0x275f7cu: goto label_275f7c;
        case 0x275f80u: goto label_275f80;
        case 0x275f84u: goto label_275f84;
        case 0x275f88u: goto label_275f88;
        case 0x275f8cu: goto label_275f8c;
        case 0x275f90u: goto label_275f90;
        case 0x275f94u: goto label_275f94;
        case 0x275f98u: goto label_275f98;
        case 0x275f9cu: goto label_275f9c;
        case 0x275fa0u: goto label_275fa0;
        case 0x275fa4u: goto label_275fa4;
        case 0x275fa8u: goto label_275fa8;
        case 0x275facu: goto label_275fac;
        case 0x275fb0u: goto label_275fb0;
        case 0x275fb4u: goto label_275fb4;
        case 0x275fb8u: goto label_275fb8;
        case 0x275fbcu: goto label_275fbc;
        case 0x275fc0u: goto label_275fc0;
        case 0x275fc4u: goto label_275fc4;
        case 0x275fc8u: goto label_275fc8;
        case 0x275fccu: goto label_275fcc;
        case 0x275fd0u: goto label_275fd0;
        case 0x275fd4u: goto label_275fd4;
        case 0x275fd8u: goto label_275fd8;
        case 0x275fdcu: goto label_275fdc;
        case 0x275fe0u: goto label_275fe0;
        case 0x275fe4u: goto label_275fe4;
        case 0x275fe8u: goto label_275fe8;
        case 0x275fecu: goto label_275fec;
        case 0x275ff0u: goto label_275ff0;
        case 0x275ff4u: goto label_275ff4;
        case 0x275ff8u: goto label_275ff8;
        case 0x275ffcu: goto label_275ffc;
        case 0x276000u: goto label_276000;
        case 0x276004u: goto label_276004;
        case 0x276008u: goto label_276008;
        case 0x27600cu: goto label_27600c;
        case 0x276010u: goto label_276010;
        case 0x276014u: goto label_276014;
        case 0x276018u: goto label_276018;
        case 0x27601cu: goto label_27601c;
        case 0x276020u: goto label_276020;
        case 0x276024u: goto label_276024;
        case 0x276028u: goto label_276028;
        case 0x27602cu: goto label_27602c;
        case 0x276030u: goto label_276030;
        case 0x276034u: goto label_276034;
        case 0x276038u: goto label_276038;
        case 0x27603cu: goto label_27603c;
        case 0x276040u: goto label_276040;
        case 0x276044u: goto label_276044;
        case 0x276048u: goto label_276048;
        case 0x27604cu: goto label_27604c;
        case 0x276050u: goto label_276050;
        case 0x276054u: goto label_276054;
        case 0x276058u: goto label_276058;
        case 0x27605cu: goto label_27605c;
        case 0x276060u: goto label_276060;
        case 0x276064u: goto label_276064;
        case 0x276068u: goto label_276068;
        case 0x27606cu: goto label_27606c;
        case 0x276070u: goto label_276070;
        case 0x276074u: goto label_276074;
        case 0x276078u: goto label_276078;
        case 0x27607cu: goto label_27607c;
        case 0x276080u: goto label_276080;
        case 0x276084u: goto label_276084;
        case 0x276088u: goto label_276088;
        case 0x27608cu: goto label_27608c;
        case 0x276090u: goto label_276090;
        case 0x276094u: goto label_276094;
        case 0x276098u: goto label_276098;
        case 0x27609cu: goto label_27609c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760a4u: goto label_2760a4;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760acu: goto label_2760ac;
        case 0x2760b0u: goto label_2760b0;
        case 0x2760b4u: goto label_2760b4;
        case 0x2760b8u: goto label_2760b8;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760c0u: goto label_2760c0;
        case 0x2760c4u: goto label_2760c4;
        case 0x2760c8u: goto label_2760c8;
        case 0x2760ccu: goto label_2760cc;
        case 0x2760d0u: goto label_2760d0;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760d8u: goto label_2760d8;
        case 0x2760dcu: goto label_2760dc;
        case 0x2760e0u: goto label_2760e0;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760e8u: goto label_2760e8;
        case 0x2760ecu: goto label_2760ec;
        case 0x2760f0u: goto label_2760f0;
        case 0x2760f4u: goto label_2760f4;
        case 0x2760f8u: goto label_2760f8;
        case 0x2760fcu: goto label_2760fc;
        case 0x276100u: goto label_276100;
        case 0x276104u: goto label_276104;
        case 0x276108u: goto label_276108;
        case 0x27610cu: goto label_27610c;
        case 0x276110u: goto label_276110;
        case 0x276114u: goto label_276114;
        case 0x276118u: goto label_276118;
        case 0x27611cu: goto label_27611c;
        case 0x276120u: goto label_276120;
        case 0x276124u: goto label_276124;
        case 0x276128u: goto label_276128;
        case 0x27612cu: goto label_27612c;
        case 0x276130u: goto label_276130;
        case 0x276134u: goto label_276134;
        case 0x276138u: goto label_276138;
        case 0x27613cu: goto label_27613c;
        case 0x276140u: goto label_276140;
        case 0x276144u: goto label_276144;
        case 0x276148u: goto label_276148;
        case 0x27614cu: goto label_27614c;
        case 0x276150u: goto label_276150;
        case 0x276154u: goto label_276154;
        case 0x276158u: goto label_276158;
        case 0x27615cu: goto label_27615c;
        case 0x276160u: goto label_276160;
        case 0x276164u: goto label_276164;
        case 0x276168u: goto label_276168;
        case 0x27616cu: goto label_27616c;
        case 0x276170u: goto label_276170;
        case 0x276174u: goto label_276174;
        case 0x276178u: goto label_276178;
        case 0x27617cu: goto label_27617c;
        case 0x276180u: goto label_276180;
        case 0x276184u: goto label_276184;
        case 0x276188u: goto label_276188;
        case 0x27618cu: goto label_27618c;
        case 0x276190u: goto label_276190;
        case 0x276194u: goto label_276194;
        case 0x276198u: goto label_276198;
        case 0x27619cu: goto label_27619c;
        case 0x2761a0u: goto label_2761a0;
        case 0x2761a4u: goto label_2761a4;
        case 0x2761a8u: goto label_2761a8;
        case 0x2761acu: goto label_2761ac;
        case 0x2761b0u: goto label_2761b0;
        case 0x2761b4u: goto label_2761b4;
        case 0x2761b8u: goto label_2761b8;
        case 0x2761bcu: goto label_2761bc;
        case 0x2761c0u: goto label_2761c0;
        case 0x2761c4u: goto label_2761c4;
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        case 0x276230u: goto label_276230;
        case 0x276234u: goto label_276234;
        case 0x276238u: goto label_276238;
        case 0x27623cu: goto label_27623c;
        case 0x276240u: goto label_276240;
        case 0x276244u: goto label_276244;
        case 0x276248u: goto label_276248;
        case 0x27624cu: goto label_27624c;
        case 0x276250u: goto label_276250;
        case 0x276254u: goto label_276254;
        case 0x276258u: goto label_276258;
        case 0x27625cu: goto label_27625c;
        case 0x276260u: goto label_276260;
        case 0x276264u: goto label_276264;
        case 0x276268u: goto label_276268;
        case 0x27626cu: goto label_27626c;
        case 0x276270u: goto label_276270;
        case 0x276274u: goto label_276274;
        case 0x276278u: goto label_276278;
        case 0x27627cu: goto label_27627c;
        case 0x276280u: goto label_276280;
        case 0x276284u: goto label_276284;
        case 0x276288u: goto label_276288;
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x276294u: goto label_276294;
        case 0x276298u: goto label_276298;
        case 0x27629cu: goto label_27629c;
        case 0x2762a0u: goto label_2762a0;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762acu: goto label_2762ac;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762b4u: goto label_2762b4;
        case 0x2762b8u: goto label_2762b8;
        case 0x2762bcu: goto label_2762bc;
        case 0x2762c0u: goto label_2762c0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762c8u: goto label_2762c8;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762d0u: goto label_2762d0;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762d8u: goto label_2762d8;
        case 0x2762dcu: goto label_2762dc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e4u: goto label_2762e4;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762ecu: goto label_2762ec;
        case 0x2762f0u: goto label_2762f0;
        case 0x2762f4u: goto label_2762f4;
        case 0x2762f8u: goto label_2762f8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276300u: goto label_276300;
        case 0x276304u: goto label_276304;
        case 0x276308u: goto label_276308;
        case 0x27630cu: goto label_27630c;
        case 0x276310u: goto label_276310;
        case 0x276314u: goto label_276314;
        case 0x276318u: goto label_276318;
        case 0x27631cu: goto label_27631c;
        case 0x276320u: goto label_276320;
        case 0x276324u: goto label_276324;
        case 0x276328u: goto label_276328;
        case 0x27632cu: goto label_27632c;
        case 0x276330u: goto label_276330;
        case 0x276334u: goto label_276334;
        case 0x276338u: goto label_276338;
        case 0x27633cu: goto label_27633c;
        case 0x276340u: goto label_276340;
        case 0x276344u: goto label_276344;
        case 0x276348u: goto label_276348;
        case 0x27634cu: goto label_27634c;
        case 0x276350u: goto label_276350;
        case 0x276354u: goto label_276354;
        case 0x276358u: goto label_276358;
        case 0x27635cu: goto label_27635c;
        case 0x276360u: goto label_276360;
        case 0x276364u: goto label_276364;
        case 0x276368u: goto label_276368;
        case 0x27636cu: goto label_27636c;
        case 0x276370u: goto label_276370;
        case 0x276374u: goto label_276374;
        case 0x276378u: goto label_276378;
        case 0x27637cu: goto label_27637c;
        case 0x276380u: goto label_276380;
        case 0x276384u: goto label_276384;
        case 0x276388u: goto label_276388;
        case 0x27638cu: goto label_27638c;
        case 0x276390u: goto label_276390;
        case 0x276394u: goto label_276394;
        case 0x276398u: goto label_276398;
        case 0x27639cu: goto label_27639c;
        case 0x2763a0u: goto label_2763a0;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763a8u: goto label_2763a8;
        case 0x2763acu: goto label_2763ac;
        case 0x2763b0u: goto label_2763b0;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763b8u: goto label_2763b8;
        case 0x2763bcu: goto label_2763bc;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c4u: goto label_2763c4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d0u: goto label_2763d0;
        case 0x2763d4u: goto label_2763d4;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e0u: goto label_2763e0;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763ecu: goto label_2763ec;
        case 0x2763f0u: goto label_2763f0;
        case 0x2763f4u: goto label_2763f4;
        case 0x2763f8u: goto label_2763f8;
        case 0x2763fcu: goto label_2763fc;
        case 0x276400u: goto label_276400;
        case 0x276404u: goto label_276404;
        case 0x276408u: goto label_276408;
        case 0x27640cu: goto label_27640c;
        case 0x276410u: goto label_276410;
        case 0x276414u: goto label_276414;
        case 0x276418u: goto label_276418;
        case 0x27641cu: goto label_27641c;
        case 0x276420u: goto label_276420;
        case 0x276424u: goto label_276424;
        case 0x276428u: goto label_276428;
        case 0x27642cu: goto label_27642c;
        case 0x276430u: goto label_276430;
        case 0x276434u: goto label_276434;
        case 0x276438u: goto label_276438;
        case 0x27643cu: goto label_27643c;
        case 0x276440u: goto label_276440;
        case 0x276444u: goto label_276444;
        case 0x276448u: goto label_276448;
        case 0x27644cu: goto label_27644c;
        case 0x276450u: goto label_276450;
        case 0x276454u: goto label_276454;
        case 0x276458u: goto label_276458;
        case 0x27645cu: goto label_27645c;
        case 0x276460u: goto label_276460;
        case 0x276464u: goto label_276464;
        case 0x276468u: goto label_276468;
        case 0x27646cu: goto label_27646c;
        case 0x276470u: goto label_276470;
        case 0x276474u: goto label_276474;
        case 0x276478u: goto label_276478;
        case 0x27647cu: goto label_27647c;
        case 0x276480u: goto label_276480;
        case 0x276484u: goto label_276484;
        case 0x276488u: goto label_276488;
        case 0x27648cu: goto label_27648c;
        case 0x276490u: goto label_276490;
        case 0x276494u: goto label_276494;
        case 0x276498u: goto label_276498;
        case 0x27649cu: goto label_27649c;
        case 0x2764a0u: goto label_2764a0;
        case 0x2764a4u: goto label_2764a4;
        case 0x2764a8u: goto label_2764a8;
        case 0x2764acu: goto label_2764ac;
        case 0x2764b0u: goto label_2764b0;
        case 0x2764b4u: goto label_2764b4;
        case 0x2764b8u: goto label_2764b8;
        case 0x2764bcu: goto label_2764bc;
        case 0x2764c0u: goto label_2764c0;
        case 0x2764c4u: goto label_2764c4;
        case 0x2764c8u: goto label_2764c8;
        case 0x2764ccu: goto label_2764cc;
        case 0x2764d0u: goto label_2764d0;
        case 0x2764d4u: goto label_2764d4;
        case 0x2764d8u: goto label_2764d8;
        case 0x2764dcu: goto label_2764dc;
        case 0x2764e0u: goto label_2764e0;
        case 0x2764e4u: goto label_2764e4;
        case 0x2764e8u: goto label_2764e8;
        case 0x2764ecu: goto label_2764ec;
        case 0x2764f0u: goto label_2764f0;
        case 0x2764f4u: goto label_2764f4;
        case 0x2764f8u: goto label_2764f8;
        case 0x2764fcu: goto label_2764fc;
        case 0x276500u: goto label_276500;
        case 0x276504u: goto label_276504;
        case 0x276508u: goto label_276508;
        case 0x27650cu: goto label_27650c;
        default: return;
    }

label_275d40:
    // 0x275d40: 0xd208  .word       0x0000D208                   # jr          $zero # 0000D200 <InstrIdType: CPU_SPECIAL>
label_275d44:
    if (ctx->pc == 0x275D44u) {
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D40u;
        // 0x275d44: 0x6610  .word       0x00006610                   # mfhi        $t4 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275D48u;
        goto label_275d48;
    }
    ctx->pc = 0x275D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D40u;
        // 0x275d44: 0x6610  .word       0x00006610                   # mfhi        $t4 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275D48u;
label_275d48:
    // 0x275d48: 0x0  nop
    ctx->pc = 0x275d48u;
    // NOP
label_275d4c:
    // 0x275d4c: 0x0  nop
    ctx->pc = 0x275d4cu;
    // NOP
label_275d50:
    // 0x275d50: 0xd215  .word       0x0000D215                   # INVALID     $zero, $zero, -0x2DEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x275D50 raw=0x0000D215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275d54:
    // 0x275d54: 0xf580  sll         $fp, $zero, 22
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275d58:
    // 0x275d58: 0x0  nop
    ctx->pc = 0x275d58u;
    // NOP
label_275d5c:
    // 0x275d5c: 0x0  nop
    ctx->pc = 0x275d5cu;
    // NOP
label_275d60:
    // 0x275d60: 0xd234  teq         $zero, $zero, 840
    ctx->pc = 0x275d60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275d64:
    // 0x275d64: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_275d68:
    // 0x275d68: 0x0  nop
    ctx->pc = 0x275d68u;
    // NOP
label_275d6c:
    // 0x275d6c: 0x0  nop
    ctx->pc = 0x275d6cu;
    // NOP
label_275d70:
    // 0x275d70: 0xd245  .word       0x0000D245                   # INVALID     $zero, $zero, -0x2DBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x275D70 raw=0x0000D245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275d74:
    // 0x275d74: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275d78:
    // 0x275d78: 0x0  nop
    ctx->pc = 0x275d78u;
    // NOP
label_275d7c:
    // 0x275d7c: 0x0  nop
    ctx->pc = 0x275d7cu;
    // NOP
label_275d80:
    // 0x275d80: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d80u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275d84:
    // 0x275d84: 0x14510  .word       0x00014510                   # mfhi        $t0 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d84u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_275d88:
    // 0x275d88: 0x0  nop
    ctx->pc = 0x275d88u;
    // NOP
label_275d8c:
    // 0x275d8c: 0x0  nop
    ctx->pc = 0x275d8cu;
    // NOP
label_275d90:
    // 0x275d90: 0xd279  .word       0x0000D279                   # INVALID     $zero, $zero, -0x2D87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x275D90 raw=0x0000D279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275d94:
    // 0x275d94: 0x11ad0  .word       0x00011AD0                   # mfhi        $v1 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_275d98:
    // 0x275d98: 0x0  nop
    ctx->pc = 0x275d98u;
    // NOP
label_275d9c:
    // 0x275d9c: 0x0  nop
    ctx->pc = 0x275d9cu;
    // NOP
label_275da0:
    // 0x275da0: 0xd29d  .word       0x0000D29D                   # dmultu      $zero, $zero # 0000D280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x275DA0 raw=0x0000D29D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275da4:
    // 0x275da4: 0x3b80  sll         $a3, $zero, 14
    ctx->pc = 0x275da4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275da8:
    // 0x275da8: 0x0  nop
    ctx->pc = 0x275da8u;
    // NOP
label_275dac:
    // 0x275dac: 0x0  nop
    ctx->pc = 0x275dacu;
    // NOP
label_275db0:
    // 0x275db0: 0xd2a5  .word       0x0000D2A5                   # move        $k0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275db0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275db4:
    // 0x275db4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x275db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275db8:
    // 0x275db8: 0x0  nop
    ctx->pc = 0x275db8u;
    // NOP
label_275dbc:
    // 0x275dbc: 0x0  nop
    ctx->pc = 0x275dbcu;
    // NOP
label_275dc0:
    // 0x275dc0: 0xd2ac  .word       0x0000D2AC                   # dadd        $k0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275dc4:
    // 0x275dc4: 0xb0b0  tge         $zero, $zero, 706
    ctx->pc = 0x275dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275dc8:
    // 0x275dc8: 0x0  nop
    ctx->pc = 0x275dc8u;
    // NOP
label_275dcc:
    // 0x275dcc: 0x0  nop
    ctx->pc = 0x275dccu;
    // NOP
label_275dd0:
    // 0x275dd0: 0xd2c3  sra         $k0, $zero, 11
    ctx->pc = 0x275dd0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 11));
label_275dd4:
    // 0x275dd4: 0xbc30  tge         $zero, $zero, 752
    ctx->pc = 0x275dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275dd8:
    // 0x275dd8: 0x0  nop
    ctx->pc = 0x275dd8u;
    // NOP
label_275ddc:
    // 0x275ddc: 0x0  nop
    ctx->pc = 0x275ddcu;
    // NOP
label_275de0:
    // 0x275de0: 0xd2db  .word       0x0000D2DB                   # divu        $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275de0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_275de4:
    // 0x275de4: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x275de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275de8:
    // 0x275de8: 0x0  nop
    ctx->pc = 0x275de8u;
    // NOP
label_275dec:
    // 0x275dec: 0x0  nop
    ctx->pc = 0x275decu;
    // NOP
label_275df0:
    // 0x275df0: 0xd2ee  .word       0x0000D2EE                   # dsub        $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275df0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275df4:
    // 0x275df4: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x275df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275df8:
    // 0x275df8: 0x0  nop
    ctx->pc = 0x275df8u;
    // NOP
label_275dfc:
    // 0x275dfc: 0x0  nop
    ctx->pc = 0x275dfcu;
    // NOP
label_275e00:
    // 0x275e00: 0xd309  .word       0x0000D309                   # jalr        $k0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_275e04:
    if (ctx->pc == 0x275E04u) {
        ctx->pc = 0x275E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E00u;
        // 0x275e04: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E08u;
        goto label_275e08;
    }
    ctx->pc = 0x275E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 26, 0x275E08u);
        ctx->pc = 0x275E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E00u;
        // 0x275e04: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E00u, 0x275E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275E08u;
label_275e08:
    // 0x275e08: 0x0  nop
    ctx->pc = 0x275e08u;
    // NOP
label_275e0c:
    // 0x275e0c: 0x0  nop
    ctx->pc = 0x275e0cu;
    // NOP
label_275e10:
    // 0x275e10: 0xd326  .word       0x0000D326                   # xor         $k0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e10u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_275e14:
    // 0x275e14: 0xb010  mfhi        $s6
    ctx->pc = 0x275e14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_275e18:
    // 0x275e18: 0x0  nop
    ctx->pc = 0x275e18u;
    // NOP
label_275e1c:
    // 0x275e1c: 0x0  nop
    ctx->pc = 0x275e1cu;
    // NOP
label_275e20:
    // 0x275e20: 0xd33d  .word       0x0000D33D                   # INVALID     $zero, $zero, -0x2CC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x275E20 raw=0x0000D33D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275e24:
    // 0x275e24: 0x1070  tge         $zero, $zero, 65
    ctx->pc = 0x275e24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275e28:
    // 0x275e28: 0x0  nop
    ctx->pc = 0x275e28u;
    // NOP
label_275e2c:
    // 0x275e2c: 0x0  nop
    ctx->pc = 0x275e2cu;
    // NOP
label_275e30:
    // 0x275e30: 0xd340  sll         $k0, $zero, 13
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_275e34:
    // 0x275e34: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x275e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275e38:
    // 0x275e38: 0x0  nop
    ctx->pc = 0x275e38u;
    // NOP
label_275e3c:
    // 0x275e3c: 0x0  nop
    ctx->pc = 0x275e3cu;
    // NOP
label_275e40:
    // 0x275e40: 0xd349  .word       0x0000D349                   # jalr        $k0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_275e44:
    if (ctx->pc == 0x275E44u) {
        ctx->pc = 0x275E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E40u;
        // 0x275e44: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E48u;
        goto label_275e48;
    }
    ctx->pc = 0x275E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 26, 0x275E48u);
        ctx->pc = 0x275E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E40u;
        // 0x275e44: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E40u, 0x275E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275E48u;
label_275e48:
    // 0x275e48: 0x0  nop
    ctx->pc = 0x275e48u;
    // NOP
label_275e4c:
    // 0x275e4c: 0x0  nop
    ctx->pc = 0x275e4cu;
    // NOP
label_275e50:
    // 0x275e50: 0xd365  .word       0x0000D365                   # move        $k0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e50u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_275e54:
    // 0x275e54: 0x3a60  .word       0x00003A60                   # add         $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_275e58:
    // 0x275e58: 0x0  nop
    ctx->pc = 0x275e58u;
    // NOP
label_275e5c:
    // 0x275e5c: 0x0  nop
    ctx->pc = 0x275e5cu;
    // NOP
label_275e60:
    // 0x275e60: 0xd36d  .word       0x0000D36D                   # daddu       $k0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e60u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275e64:
    // 0x275e64: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e64u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_275e68:
    // 0x275e68: 0x0  nop
    ctx->pc = 0x275e68u;
    // NOP
label_275e6c:
    // 0x275e6c: 0x0  nop
    ctx->pc = 0x275e6cu;
    // NOP
label_275e70:
    // 0x275e70: 0xd375  .word       0x0000D375                   # INVALID     $zero, $zero, -0x2C8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x275E70 raw=0x0000D375"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275e74:
    // 0x275e74: 0xb240  sll         $s6, $zero, 9
    ctx->pc = 0x275e74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_275e78:
    // 0x275e78: 0x0  nop
    ctx->pc = 0x275e78u;
    // NOP
label_275e7c:
    // 0x275e7c: 0x0  nop
    ctx->pc = 0x275e7cu;
    // NOP
label_275e80:
    // 0x275e80: 0xd38c  syscall     846
    ctx->pc = 0x275e80u;
    ctx->pc = 0x275E84u;
runtime->handleSyscall(rdram, ctx, 0x34Eu);
label_275e84:
    // 0x275e84: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e84u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_275e88:
    // 0x275e88: 0x0  nop
    ctx->pc = 0x275e88u;
    // NOP
label_275e8c:
    // 0x275e8c: 0x0  nop
    ctx->pc = 0x275e8cu;
    // NOP
label_275e90:
    // 0x275e90: 0xd397  .word       0x0000D397                   # dsrav       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e90u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_275e94:
    // 0x275e94: 0x11900  sll         $v1, $at, 4
    ctx->pc = 0x275e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_275e98:
    // 0x275e98: 0x0  nop
    ctx->pc = 0x275e98u;
    // NOP
label_275e9c:
    // 0x275e9c: 0x0  nop
    ctx->pc = 0x275e9cu;
    // NOP
label_275ea0:
    // 0x275ea0: 0xd3bb  dsra        $k0, $zero, 14
    ctx->pc = 0x275ea0u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 14);
label_275ea4:
    // 0x275ea4: 0x9170  tge         $zero, $zero, 581
    ctx->pc = 0x275ea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ea8:
    // 0x275ea8: 0x0  nop
    ctx->pc = 0x275ea8u;
    // NOP
label_275eac:
    // 0x275eac: 0x0  nop
    ctx->pc = 0x275eacu;
    // NOP
label_275eb0:
    // 0x275eb0: 0xd3ce  .word       0x0000D3CE                   # INVALID     $zero, $zero, -0x2C32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x275EB0 raw=0x0000D3CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275eb4:
    // 0x275eb4: 0x1340  sll         $v0, $zero, 13
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_275eb8:
    // 0x275eb8: 0x0  nop
    ctx->pc = 0x275eb8u;
    // NOP
label_275ebc:
    // 0x275ebc: 0x0  nop
    ctx->pc = 0x275ebcu;
    // NOP
label_275ec0:
    // 0x275ec0: 0xd3d1  .word       0x0000D3D1                   # mthi        $zero # 0000D3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ec0u;
    ctx->hi = GPR_U64(ctx, 0);
label_275ec4:
    // 0x275ec4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x275ec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ec8:
    // 0x275ec8: 0x0  nop
    ctx->pc = 0x275ec8u;
    // NOP
label_275ecc:
    // 0x275ecc: 0x0  nop
    ctx->pc = 0x275eccu;
    // NOP
label_275ed0:
    // 0x275ed0: 0xd3e7  .word       0x0000D3E7                   # not         $k0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ed0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_275ed4:
    // 0x275ed4: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x275ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_275ed8:
    // 0x275ed8: 0x0  nop
    ctx->pc = 0x275ed8u;
    // NOP
label_275edc:
    // 0x275edc: 0x0  nop
    ctx->pc = 0x275edcu;
    // NOP
label_275ee0:
    // 0x275ee0: 0xd3f6  tne         $zero, $zero, 847
    ctx->pc = 0x275ee0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ee4:
    // 0x275ee4: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x275ee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275ee8:
    // 0x275ee8: 0x0  nop
    ctx->pc = 0x275ee8u;
    // NOP
label_275eec:
    // 0x275eec: 0x0  nop
    ctx->pc = 0x275eecu;
    // NOP
label_275ef0:
    // 0x275ef0: 0xd40a  .word       0x0000D40A                   # movz        $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ef0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_275ef4:
    // 0x275ef4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x275ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_275ef8:
    // 0x275ef8: 0x0  nop
    ctx->pc = 0x275ef8u;
    // NOP
label_275efc:
    // 0x275efc: 0x0  nop
    ctx->pc = 0x275efcu;
    // NOP
label_275f00:
    // 0x275f00: 0xd41a  .word       0x0000D41A                   # div         $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_275f04:
    // 0x275f04: 0x15a0  .word       0x000015A0                   # add         $v0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_275f08:
    // 0x275f08: 0x0  nop
    ctx->pc = 0x275f08u;
    // NOP
label_275f0c:
    // 0x275f0c: 0x0  nop
    ctx->pc = 0x275f0cu;
    // NOP
label_275f10:
    // 0x275f10: 0xd41d  .word       0x0000D41D                   # dmultu      $zero, $zero # 0000D400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x275F10 raw=0x0000D41D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275f14:
    // 0x275f14: 0xe210  .word       0x0000E210                   # mfhi        $gp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f14u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_275f18:
    // 0x275f18: 0x0  nop
    ctx->pc = 0x275f18u;
    // NOP
label_275f1c:
    // 0x275f1c: 0x0  nop
    ctx->pc = 0x275f1cu;
    // NOP
label_275f20:
    // 0x275f20: 0xd43a  dsrl        $k0, $zero, 16
    ctx->pc = 0x275f20u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 16);
label_275f24:
    // 0x275f24: 0x69b0  tge         $zero, $zero, 422
    ctx->pc = 0x275f24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f28:
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
label_275f2c:
    // 0x275f2c: 0x0  nop
    ctx->pc = 0x275f2cu;
    // NOP
label_275f30:
    // 0x275f30: 0xd448  .word       0x0000D448                   # jr          $zero # 0000D440 <InstrIdType: CPU_SPECIAL>
label_275f34:
    if (ctx->pc == 0x275F34u) {
        ctx->pc = 0x275F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F30u;
        // 0x275f34: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275F38u;
        goto label_275f38;
    }
    ctx->pc = 0x275F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275F30u;
        // 0x275f34: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275F38u;
label_275f38:
    // 0x275f38: 0x0  nop
    ctx->pc = 0x275f38u;
    // NOP
label_275f3c:
    // 0x275f3c: 0x0  nop
    ctx->pc = 0x275f3cu;
    // NOP
label_275f40:
    // 0x275f40: 0xd450  .word       0x0000D450                   # mfhi        $k0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f40u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_275f44:
    // 0x275f44: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x275f44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f48:
    // 0x275f48: 0x0  nop
    ctx->pc = 0x275f48u;
    // NOP
label_275f4c:
    // 0x275f4c: 0x0  nop
    ctx->pc = 0x275f4cu;
    // NOP
label_275f50:
    // 0x275f50: 0xd45f  .word       0x0000D45F                   # ddivu       $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x275F50 raw=0x0000D45F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_275f54:
    // 0x275f54: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x275f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_275f58:
    // 0x275f58: 0x0  nop
    ctx->pc = 0x275f58u;
    // NOP
label_275f5c:
    // 0x275f5c: 0x0  nop
    ctx->pc = 0x275f5cu;
    // NOP
label_275f60:
    // 0x275f60: 0xd463  .word       0x0000D463                   # negu        $k0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f60u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_275f64:
    // 0x275f64: 0x43b0  tge         $zero, $zero, 270
    ctx->pc = 0x275f64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f68:
    // 0x275f68: 0x0  nop
    ctx->pc = 0x275f68u;
    // NOP
label_275f6c:
    // 0x275f6c: 0x0  nop
    ctx->pc = 0x275f6cu;
    // NOP
label_275f70:
    // 0x275f70: 0xd46c  .word       0x0000D46C                   # dadd        $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_275f74:
    // 0x275f74: 0x2cd0  .word       0x00002CD0                   # mfhi        $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_275f78:
    // 0x275f78: 0x0  nop
    ctx->pc = 0x275f78u;
    // NOP
label_275f7c:
    // 0x275f7c: 0x0  nop
    ctx->pc = 0x275f7cu;
    // NOP
label_275f80:
    // 0x275f80: 0xd472  tlt         $zero, $zero, 849
    ctx->pc = 0x275f80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f84:
    // 0x275f84: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x275f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275f88:
    // 0x275f88: 0x0  nop
    ctx->pc = 0x275f88u;
    // NOP
label_275f8c:
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
label_275f90:
    // 0x275f90: 0xd47e  dsrl32      $k0, $zero, 17
    ctx->pc = 0x275f90u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 17));
label_275f94:
    // 0x275f94: 0x48a0  .word       0x000048A0                   # add         $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_275f98:
    // 0x275f98: 0x0  nop
    ctx->pc = 0x275f98u;
    // NOP
label_275f9c:
    // 0x275f9c: 0x0  nop
    ctx->pc = 0x275f9cu;
    // NOP
label_275fa0:
    // 0x275fa0: 0xd488  .word       0x0000D488                   # jr          $zero # 0000D480 <InstrIdType: CPU_SPECIAL>
label_275fa4:
    if (ctx->pc == 0x275FA4u) {
        ctx->pc = 0x275FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FA0u;
        // 0x275fa4: 0x8830  tge         $zero, $zero, 544 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275FA8u;
        goto label_275fa8;
    }
    ctx->pc = 0x275FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x275FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FA0u;
        // 0x275fa4: 0x8830  tge         $zero, $zero, 544 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275FA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x275FA8u;
label_275fa8:
    // 0x275fa8: 0x0  nop
    ctx->pc = 0x275fa8u;
    // NOP
label_275fac:
    // 0x275fac: 0x0  nop
    ctx->pc = 0x275facu;
    // NOP
label_275fb0:
    // 0x275fb0: 0xd49a  .word       0x0000D49A                   # div         $k0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_275fb4:
    // 0x275fb4: 0xdeb0  tge         $zero, $zero, 890
    ctx->pc = 0x275fb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fb8:
    // 0x275fb8: 0x0  nop
    ctx->pc = 0x275fb8u;
    // NOP
label_275fbc:
    // 0x275fbc: 0x0  nop
    ctx->pc = 0x275fbcu;
    // NOP
label_275fc0:
    // 0x275fc0: 0xd4b6  tne         $zero, $zero, 850
    ctx->pc = 0x275fc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fc4:
    // 0x275fc4: 0x15b00  sll         $t3, $at, 12
    ctx->pc = 0x275fc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_275fc8:
    // 0x275fc8: 0x0  nop
    ctx->pc = 0x275fc8u;
    // NOP
label_275fcc:
    // 0x275fcc: 0x0  nop
    ctx->pc = 0x275fccu;
    // NOP
label_275fd0:
    // 0x275fd0: 0xd4e2  .word       0x0000D4E2                   # neg         $k0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_275fd4:
    // 0x275fd4: 0x71d0  .word       0x000071D0                   # mfhi        $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275fd4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_275fd8:
    // 0x275fd8: 0x0  nop
    ctx->pc = 0x275fd8u;
    // NOP
label_275fdc:
    // 0x275fdc: 0x0  nop
    ctx->pc = 0x275fdcu;
    // NOP
label_275fe0:
    // 0x275fe0: 0xd4f1  tgeu        $zero, $zero, 851
    ctx->pc = 0x275fe0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_275fe4:
    // 0x275fe4: 0x10df0  tge         $zero, $at, 55
    ctx->pc = 0x275fe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_275fe8:
    // 0x275fe8: 0x0  nop
    ctx->pc = 0x275fe8u;
    // NOP
label_275fec:
    // 0x275fec: 0x0  nop
    ctx->pc = 0x275fecu;
    // NOP
label_275ff0:
    // 0x275ff0: 0xd513  .word       0x0000D513                   # mtlo        $zero # 0000D500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ff0u;
    ctx->lo = GPR_U64(ctx, 0);
label_275ff4:
    // 0x275ff4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_275ff8:
    // 0x275ff8: 0x0  nop
    ctx->pc = 0x275ff8u;
    // NOP
label_275ffc:
    // 0x275ffc: 0x0  nop
    ctx->pc = 0x275ffcu;
    // NOP
label_276000:
    // 0x276000: 0xd51d  .word       0x0000D51D                   # dmultu      $zero, $zero # 0000D500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x276000 raw=0x0000D51D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276004:
    // 0x276004: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x276004u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_276008:
    // 0x276008: 0x0  nop
    ctx->pc = 0x276008u;
    // NOP
label_27600c:
    // 0x27600c: 0x0  nop
    ctx->pc = 0x27600cu;
    // NOP
label_276010:
    // 0x276010: 0xd536  tne         $zero, $zero, 852
    ctx->pc = 0x276010u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276014:
    // 0x276014: 0xa3b0  tge         $zero, $zero, 654
    ctx->pc = 0x276014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276018:
    // 0x276018: 0x0  nop
    ctx->pc = 0x276018u;
    // NOP
label_27601c:
    // 0x27601c: 0x0  nop
    ctx->pc = 0x27601cu;
    // NOP
label_276020:
    // 0x276020: 0xd54b  .word       0x0000D54B                   # movn        $k0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276020u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_276024:
    // 0x276024: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x276024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276028:
    // 0x276028: 0x0  nop
    ctx->pc = 0x276028u;
    // NOP
label_27602c:
    // 0x27602c: 0x0  nop
    ctx->pc = 0x27602cu;
    // NOP
label_276030:
    // 0x276030: 0xd55b  .word       0x0000D55B                   # divu        $k0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276030u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_276034:
    // 0x276034: 0x3650  .word       0x00003650                   # mfhi        $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276038:
    // 0x276038: 0x0  nop
    ctx->pc = 0x276038u;
    // NOP
label_27603c:
    // 0x27603c: 0x0  nop
    ctx->pc = 0x27603cu;
    // NOP
label_276040:
    // 0x276040: 0xd562  .word       0x0000D562                   # neg         $k0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276040u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_276044:
    // 0x276044: 0xdcb0  tge         $zero, $zero, 882
    ctx->pc = 0x276044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276048:
    // 0x276048: 0x0  nop
    ctx->pc = 0x276048u;
    // NOP
label_27604c:
    // 0x27604c: 0x0  nop
    ctx->pc = 0x27604cu;
    // NOP
label_276050:
    // 0x276050: 0xd57e  dsrl32      $k0, $zero, 21
    ctx->pc = 0x276050u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 21));
label_276054:
    // 0x276054: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x276054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276058:
    // 0x276058: 0x0  nop
    ctx->pc = 0x276058u;
    // NOP
label_27605c:
    // 0x27605c: 0x0  nop
    ctx->pc = 0x27605cu;
    // NOP
label_276060:
    // 0x276060: 0xd599  .word       0x0000D599                   # multu       $zero, $zero # 0000D580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276060u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276064:
    // 0x276064: 0xe1c0  sll         $gp, $zero, 7
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276068:
    // 0x276068: 0x0  nop
    ctx->pc = 0x276068u;
    // NOP
label_27606c:
    // 0x27606c: 0x0  nop
    ctx->pc = 0x27606cu;
    // NOP
label_276070:
    // 0x276070: 0xd5b6  tne         $zero, $zero, 854
    ctx->pc = 0x276070u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276074:
    // 0x276074: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x276074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276078:
    // 0x276078: 0x0  nop
    ctx->pc = 0x276078u;
    // NOP
label_27607c:
    // 0x27607c: 0x0  nop
    ctx->pc = 0x27607cu;
    // NOP
label_276080:
    // 0x276080: 0xd5cd  break       0, 855
    ctx->pc = 0x276080u;
    runtime->handleBreak(rdram, ctx);
label_276084:
    // 0x276084: 0xd840  sll         $k1, $zero, 1
    ctx->pc = 0x276084u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_276088:
    // 0x276088: 0x0  nop
    ctx->pc = 0x276088u;
    // NOP
label_27608c:
    // 0x27608c: 0x0  nop
    ctx->pc = 0x27608cu;
    // NOP
label_276090:
    // 0x276090: 0xd5e9  .word       0x0000D5E9                   # mtsa        $zero # 0000D5C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_276094:
    // 0x276094: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_276098:
    // 0x276098: 0x0  nop
    ctx->pc = 0x276098u;
    // NOP
label_27609c:
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
label_2760a0:
    // 0x2760a0: 0xd5fa  dsrl        $k0, $zero, 23
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 23);
label_2760a4:
    // 0x2760a4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2760a8:
    // 0x2760a8: 0x0  nop
    ctx->pc = 0x2760a8u;
    // NOP
label_2760ac:
    // 0x2760ac: 0x0  nop
    ctx->pc = 0x2760acu;
    // NOP
label_2760b0:
    // 0x2760b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2760b4:
    // 0x2760b4: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2760b8:
    // 0x2760b8: 0x0  nop
    ctx->pc = 0x2760b8u;
    // NOP
label_2760bc:
    // 0x2760bc: 0x0  nop
    ctx->pc = 0x2760bcu;
    // NOP
label_2760c0:
    // 0x2760c0: 0xd61e  .word       0x0000D61E                   # ddiv        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2760C0 raw=0x0000D61E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2760c4:
    // 0x2760c4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x2760c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760c8:
    // 0x2760c8: 0x0  nop
    ctx->pc = 0x2760c8u;
    // NOP
label_2760cc:
    // 0x2760cc: 0x0  nop
    ctx->pc = 0x2760ccu;
    // NOP
label_2760d0:
    // 0x2760d0: 0xd634  teq         $zero, $zero, 856
    ctx->pc = 0x2760d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760d4:
    // 0x2760d4: 0xd210  .word       0x0000D210                   # mfhi        $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760d4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2760d8:
    // 0x2760d8: 0x0  nop
    ctx->pc = 0x2760d8u;
    // NOP
label_2760dc:
    // 0x2760dc: 0x0  nop
    ctx->pc = 0x2760dcu;
    // NOP
label_2760e0:
    // 0x2760e0: 0xd64f  .word       0x0000D64F                   # sync.p # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2760e4:
    // 0x2760e4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2760e8:
    // 0x2760e8: 0x0  nop
    ctx->pc = 0x2760e8u;
    // NOP
label_2760ec:
    // 0x2760ec: 0x0  nop
    ctx->pc = 0x2760ecu;
    // NOP
label_2760f0:
    // 0x2760f0: 0xd65c  .word       0x0000D65C                   # dmult       $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2760F0 raw=0x0000D65C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2760f4:
    // 0x2760f4: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2760f8:
    // 0x2760f8: 0x0  nop
    ctx->pc = 0x2760f8u;
    // NOP
label_2760fc:
    // 0x2760fc: 0x0  nop
    ctx->pc = 0x2760fcu;
    // NOP
label_276100:
    // 0x276100: 0xd663  .word       0x0000D663                   # negu        $k0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276104:
    // 0x276104: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276104u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276108:
    // 0x276108: 0x0  nop
    ctx->pc = 0x276108u;
    // NOP
label_27610c:
    // 0x27610c: 0x0  nop
    ctx->pc = 0x27610cu;
    // NOP
label_276110:
    // 0x276110: 0xd66f  .word       0x0000D66F                   # dsubu       $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276110u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276114:
    // 0x276114: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_276118:
    // 0x276118: 0x0  nop
    ctx->pc = 0x276118u;
    // NOP
label_27611c:
    // 0x27611c: 0x0  nop
    ctx->pc = 0x27611cu;
    // NOP
label_276120:
    // 0x276120: 0xd67b  dsra        $k0, $zero, 25
    ctx->pc = 0x276120u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 25);
label_276124:
    // 0x276124: 0xee90  .word       0x0000EE90                   # mfhi        $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276124u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_276128:
    // 0x276128: 0x0  nop
    ctx->pc = 0x276128u;
    // NOP
label_27612c:
    // 0x27612c: 0x0  nop
    ctx->pc = 0x27612cu;
    // NOP
label_276130:
    // 0x276130: 0xd699  .word       0x0000D699                   # multu       $zero, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276130u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276134:
    // 0x276134: 0x10720  .word       0x00010720                   # add         $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_276138:
    // 0x276138: 0x0  nop
    ctx->pc = 0x276138u;
    // NOP
label_27613c:
    // 0x27613c: 0x0  nop
    ctx->pc = 0x27613cu;
    // NOP
label_276140:
    // 0x276140: 0xd6ba  dsrl        $k0, $zero, 26
    ctx->pc = 0x276140u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 26);
label_276144:
    // 0x276144: 0xb320  .word       0x0000B320                   # add         $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_276148:
    // 0x276148: 0x0  nop
    ctx->pc = 0x276148u;
    // NOP
label_27614c:
    // 0x27614c: 0x0  nop
    ctx->pc = 0x27614cu;
    // NOP
label_276150:
    // 0x276150: 0xd6d1  .word       0x0000D6D1                   # mthi        $zero # 0000D6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276150u;
    ctx->hi = GPR_U64(ctx, 0);
label_276154:
    // 0x276154: 0x11af0  tge         $zero, $at, 107
    ctx->pc = 0x276154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_276158:
    // 0x276158: 0x0  nop
    ctx->pc = 0x276158u;
    // NOP
label_27615c:
    // 0x27615c: 0x0  nop
    ctx->pc = 0x27615cu;
    // NOP
label_276160:
    // 0x276160: 0xd6f5  .word       0x0000D6F5                   # INVALID     $zero, $zero, -0x290B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276160 raw=0x0000D6F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276164:
    // 0x276164: 0xe370  tge         $zero, $zero, 909
    ctx->pc = 0x276164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276168:
    // 0x276168: 0x0  nop
    ctx->pc = 0x276168u;
    // NOP
label_27616c:
    // 0x27616c: 0x0  nop
    ctx->pc = 0x27616cu;
    // NOP
label_276170:
    // 0x276170: 0xd712  .word       0x0000D712                   # mflo        $k0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276170u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_276174:
    // 0x276174: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x276174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276178:
    // 0x276178: 0x0  nop
    ctx->pc = 0x276178u;
    // NOP
label_27617c:
    // 0x27617c: 0x0  nop
    ctx->pc = 0x27617cu;
    // NOP
label_276180:
    // 0x276180: 0xd716  .word       0x0000D716                   # dsrlv       $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276180u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276184:
    // 0x276184: 0x6d00  sll         $t5, $zero, 20
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_276188:
    // 0x276188: 0x0  nop
    ctx->pc = 0x276188u;
    // NOP
label_27618c:
    // 0x27618c: 0x0  nop
    ctx->pc = 0x27618cu;
    // NOP
label_276190:
    // 0x276190: 0xd724  .word       0x0000D724                   # and         $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276190u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276194:
    // 0x276194: 0xbc90  .word       0x0000BC90                   # mfhi        $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276194u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_276198:
    // 0x276198: 0x0  nop
    ctx->pc = 0x276198u;
    // NOP
label_27619c:
    // 0x27619c: 0x0  nop
    ctx->pc = 0x27619cu;
    // NOP
label_2761a0:
    // 0x2761a0: 0xd73c  dsll32      $k0, $zero, 28
    ctx->pc = 0x2761a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 28));
label_2761a4:
    // 0x2761a4: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x2761a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2761a8:
    // 0x2761a8: 0x0  nop
    ctx->pc = 0x2761a8u;
    // NOP
label_2761ac:
    // 0x2761ac: 0x0  nop
    ctx->pc = 0x2761acu;
    // NOP
label_2761b0:
    // 0x2761b0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2761b4:
    // 0x2761b4: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2761b8:
    // 0x2761b8: 0x0  nop
    ctx->pc = 0x2761b8u;
    // NOP
label_2761bc:
    // 0x2761bc: 0x0  nop
    ctx->pc = 0x2761bcu;
    // NOP
label_2761c0:
    // 0x2761c0: 0xd75c  .word       0x0000D75C                   # dmult       $zero, $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2761C0 raw=0x0000D75C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2761c4:
    // 0x2761c4: 0x12940  sll         $a1, $at, 5
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_2761c8:
    // 0x2761c8: 0x0  nop
    ctx->pc = 0x2761c8u;
    // NOP
label_2761cc:
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
label_2761d0:
    // 0x2761d0: 0xd782  srl         $k0, $zero, 30
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2761d4:
    // 0x2761d4: 0xd460  .word       0x0000D460                   # add         $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
label_2761dc:
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
label_2761e0:
    // 0x2761e0: 0xd79d  .word       0x0000D79D                   # dmultu      $zero, $zero # 0000D780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2761E0 raw=0x0000D79D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2761e4:
    // 0x2761e4: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2761e8:
    // 0x2761e8: 0x0  nop
    ctx->pc = 0x2761e8u;
    // NOP
label_2761ec:
    // 0x2761ec: 0x0  nop
    ctx->pc = 0x2761ecu;
    // NOP
label_2761f0:
    // 0x2761f0: 0xd7aa  .word       0x0000D7AA                   # slt         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761f0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2761f4:
    // 0x2761f4: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x2761f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2761f8:
    // 0x2761f8: 0x0  nop
    ctx->pc = 0x2761f8u;
    // NOP
label_2761fc:
    // 0x2761fc: 0x0  nop
    ctx->pc = 0x2761fcu;
    // NOP
label_276200:
    // 0x276200: 0xd7ae  .word       0x0000D7AE                   # dsub        $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_276204:
    // 0x276204: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_276208:
    // 0x276208: 0x0  nop
    ctx->pc = 0x276208u;
    // NOP
label_27620c:
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
label_276210:
    // 0x276210: 0xd7c3  sra         $k0, $zero, 31
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 31));
label_276214:
    // 0x276214: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_276218:
    // 0x276218: 0x0  nop
    ctx->pc = 0x276218u;
    // NOP
label_27621c:
    // 0x27621c: 0x0  nop
    ctx->pc = 0x27621cu;
    // NOP
label_276220:
    // 0x276220: 0xd7d9  .word       0x0000D7D9                   # multu       $zero, $zero # 0000D7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276224:
    // 0x276224: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x276224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276228:
    // 0x276228: 0x0  nop
    ctx->pc = 0x276228u;
    // NOP
label_27622c:
    // 0x27622c: 0x0  nop
    ctx->pc = 0x27622cu;
    // NOP
label_276230:
    // 0x276230: 0xd7ef  .word       0x0000D7EF                   # dsubu       $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276234:
    // 0x276234: 0xda40  sll         $k1, $zero, 9
    ctx->pc = 0x276234u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_276238:
    // 0x276238: 0x0  nop
    ctx->pc = 0x276238u;
    // NOP
label_27623c:
    // 0x27623c: 0x0  nop
    ctx->pc = 0x27623cu;
    // NOP
label_276240:
    // 0x276240: 0xd80b  movn        $k1, $zero, $zero
    ctx->pc = 0x276240u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276244:
    // 0x276244: 0x14490  .word       0x00014490                   # mfhi        $t0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276244u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276248:
    // 0x276248: 0x0  nop
    ctx->pc = 0x276248u;
    // NOP
label_27624c:
    // 0x27624c: 0x0  nop
    ctx->pc = 0x27624cu;
    // NOP
label_276250:
    // 0x276250: 0xd834  teq         $zero, $zero, 864
    ctx->pc = 0x276250u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276254:
    // 0x276254: 0x10ed0  .word       0x00010ED0                   # mfhi        $at # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276254u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_276258:
    // 0x276258: 0x0  nop
    ctx->pc = 0x276258u;
    // NOP
label_27625c:
    // 0x27625c: 0x0  nop
    ctx->pc = 0x27625cu;
    // NOP
label_276260:
    // 0x276260: 0xd856  .word       0x0000D856                   # dsrlv       $k1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276260u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276264:
    // 0x276264: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x276264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276268:
    // 0x276268: 0x0  nop
    ctx->pc = 0x276268u;
    // NOP
label_27626c:
    // 0x27626c: 0x0  nop
    ctx->pc = 0x27626cu;
    // NOP
label_276270:
    // 0x276270: 0xd862  .word       0x0000D862                   # neg         $k1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276270u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 27, (int32_t)tmp); }
label_276274:
    // 0x276274: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_276278:
    // 0x276278: 0x0  nop
    ctx->pc = 0x276278u;
    // NOP
label_27627c:
    // 0x27627c: 0x0  nop
    ctx->pc = 0x27627cu;
    // NOP
label_276280:
    // 0x276280: 0xd87e  dsrl32      $k1, $zero, 1
    ctx->pc = 0x276280u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 1));
label_276284:
    // 0x276284: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_276288:
    // 0x276288: 0x0  nop
    ctx->pc = 0x276288u;
    // NOP
label_27628c:
    // 0x27628c: 0x0  nop
    ctx->pc = 0x27628cu;
    // NOP
label_276290:
    // 0x276290: 0xd882  srl         $k1, $zero, 2
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_276294:
    // 0x276294: 0x1b00  sll         $v1, $zero, 12
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_276298:
    // 0x276298: 0x0  nop
    ctx->pc = 0x276298u;
    // NOP
label_27629c:
    // 0x27629c: 0x0  nop
    ctx->pc = 0x27629cu;
    // NOP
label_2762a0:
    // 0x2762a0: 0xd886  .word       0x0000D886                   # srlv        $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762a0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2762a4:
    // 0x2762a4: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2762a8:
    // 0x2762a8: 0x0  nop
    ctx->pc = 0x2762a8u;
    // NOP
label_2762ac:
    // 0x2762ac: 0x0  nop
    ctx->pc = 0x2762acu;
    // NOP
label_2762b0:
    // 0x2762b0: 0xd899  .word       0x0000D899                   # multu       $zero, $zero # 0000D880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2762b4:
    // 0x2762b4: 0xe5a0  .word       0x0000E5A0                   # add         $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2762b8:
    // 0x2762b8: 0x0  nop
    ctx->pc = 0x2762b8u;
    // NOP
label_2762bc:
    // 0x2762bc: 0x0  nop
    ctx->pc = 0x2762bcu;
    // NOP
label_2762c0:
    // 0x2762c0: 0xd8b6  tne         $zero, $zero, 866
    ctx->pc = 0x2762c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2762c4:
    // 0x2762c4: 0x14200  sll         $t0, $at, 8
    ctx->pc = 0x2762c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_2762c8:
    // 0x2762c8: 0x0  nop
    ctx->pc = 0x2762c8u;
    // NOP
label_2762cc:
    // 0x2762cc: 0x0  nop
    ctx->pc = 0x2762ccu;
    // NOP
label_2762d0:
    // 0x2762d0: 0xd8df  .word       0x0000D8DF                   # ddivu       $k1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2762D0 raw=0x0000D8DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2762d4:
    // 0x2762d4: 0xfb60  .word       0x0000FB60                   # add         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2762d8:
    // 0x2762d8: 0x0  nop
    ctx->pc = 0x2762d8u;
    // NOP
label_2762dc:
    // 0x2762dc: 0x0  nop
    ctx->pc = 0x2762dcu;
    // NOP
label_2762e0:
    // 0x2762e0: 0xd8ff  dsra32      $k1, $zero, 3
    ctx->pc = 0x2762e0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 3));
label_2762e4:
    // 0x2762e4: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2762e8:
    // 0x2762e8: 0x0  nop
    ctx->pc = 0x2762e8u;
    // NOP
label_2762ec:
    // 0x2762ec: 0x0  nop
    ctx->pc = 0x2762ecu;
    // NOP
label_2762f0:
    // 0x2762f0: 0xd90f  .word       0x0000D90F                   # sync # 0000D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2762f4:
    // 0x2762f4: 0x13580  sll         $a2, $at, 22
    ctx->pc = 0x2762f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_2762f8:
    // 0x2762f8: 0x0  nop
    ctx->pc = 0x2762f8u;
    // NOP
label_2762fc:
    // 0x2762fc: 0x0  nop
    ctx->pc = 0x2762fcu;
    // NOP
label_276300:
    // 0x276300: 0xd936  tne         $zero, $zero, 868
    ctx->pc = 0x276300u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276304:
    // 0x276304: 0xd9c0  sll         $k1, $zero, 7
    ctx->pc = 0x276304u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276308:
    // 0x276308: 0x0  nop
    ctx->pc = 0x276308u;
    // NOP
label_27630c:
    // 0x27630c: 0x0  nop
    ctx->pc = 0x27630cu;
    // NOP
label_276310:
    // 0x276310: 0xd952  .word       0x0000D952                   # mflo        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276310u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_276314:
    // 0x276314: 0x104a0  .word       0x000104A0                   # add         $zero, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_276318:
    // 0x276318: 0x0  nop
    ctx->pc = 0x276318u;
    // NOP
label_27631c:
    // 0x27631c: 0x0  nop
    ctx->pc = 0x27631cu;
    // NOP
label_276320:
    // 0x276320: 0xd973  tltu        $zero, $zero, 869
    ctx->pc = 0x276320u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276324:
    // 0x276324: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276324u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276328:
    // 0x276328: 0x0  nop
    ctx->pc = 0x276328u;
    // NOP
label_27632c:
    // 0x27632c: 0x0  nop
    ctx->pc = 0x27632cu;
    // NOP
label_276330:
    // 0x276330: 0xd97a  dsrl        $k1, $zero, 5
    ctx->pc = 0x276330u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 5);
label_276334:
    // 0x276334: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276334u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_276338:
    // 0x276338: 0x0  nop
    ctx->pc = 0x276338u;
    // NOP
label_27633c:
    // 0x27633c: 0x0  nop
    ctx->pc = 0x27633cu;
    // NOP
label_276340:
    // 0x276340: 0xd988  .word       0x0000D988                   # jr          $zero # 0000D980 <InstrIdType: CPU_SPECIAL>
label_276344:
    if (ctx->pc == 0x276344u) {
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x1500  sll         $v0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276348u;
        goto label_276348;
    }
    ctx->pc = 0x276340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x1500  sll         $v0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276340u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276348u;
label_276348:
    // 0x276348: 0x0  nop
    ctx->pc = 0x276348u;
    // NOP
label_27634c:
    // 0x27634c: 0x0  nop
    ctx->pc = 0x27634cu;
    // NOP
label_276350:
    // 0x276350: 0xd98b  .word       0x0000D98B                   # movn        $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276350u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276354:
    // 0x276354: 0x3410  .word       0x00003410                   # mfhi        $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276354u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276358:
    // 0x276358: 0x0  nop
    ctx->pc = 0x276358u;
    // NOP
label_27635c:
    // 0x27635c: 0x0  nop
    ctx->pc = 0x27635cu;
    // NOP
label_276360:
    // 0x276360: 0xd992  .word       0x0000D992                   # mflo        $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276360u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_276364:
    // 0x276364: 0x2510  .word       0x00002510                   # mfhi        $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276364u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_276368:
    // 0x276368: 0x0  nop
    ctx->pc = 0x276368u;
    // NOP
label_27636c:
    // 0x27636c: 0x0  nop
    ctx->pc = 0x27636cu;
    // NOP
label_276370:
    // 0x276370: 0xd997  .word       0x0000D997                   # dsrav       $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276370u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276374:
    // 0x276374: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x276374u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_276378:
    // 0x276378: 0x0  nop
    ctx->pc = 0x276378u;
    // NOP
label_27637c:
    // 0x27637c: 0x0  nop
    ctx->pc = 0x27637cu;
    // NOP
label_276380:
    // 0x276380: 0xd9a7  .word       0x0000D9A7                   # not         $k1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276380u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_276384:
    // 0x276384: 0xbb20  .word       0x0000BB20                   # add         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_276388:
    // 0x276388: 0x0  nop
    ctx->pc = 0x276388u;
    // NOP
label_27638c:
    // 0x27638c: 0x0  nop
    ctx->pc = 0x27638cu;
    // NOP
label_276390:
    // 0x276390: 0xd9bf  dsra32      $k1, $zero, 6
    ctx->pc = 0x276390u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 6));
label_276394:
    // 0x276394: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_276398:
    // 0x276398: 0x0  nop
    ctx->pc = 0x276398u;
    // NOP
label_27639c:
    // 0x27639c: 0x0  nop
    ctx->pc = 0x27639cu;
    // NOP
label_2763a0:
    // 0x2763a0: 0xd9cc  syscall     871
    ctx->pc = 0x2763a0u;
    ctx->pc = 0x2763A4u;
runtime->handleSyscall(rdram, ctx, 0x367u);
label_2763a4:
    // 0x2763a4: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2763a8:
    // 0x2763a8: 0x0  nop
    ctx->pc = 0x2763a8u;
    // NOP
label_2763ac:
    // 0x2763ac: 0x0  nop
    ctx->pc = 0x2763acu;
    // NOP
label_2763b0:
    // 0x2763b0: 0xd9d8  .word       0x0000D9D8                   # mult        $k1, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2763b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2763b4:
    // 0x2763b4: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2763b8:
    // 0x2763b8: 0x0  nop
    ctx->pc = 0x2763b8u;
    // NOP
label_2763bc:
    // 0x2763bc: 0x0  nop
    ctx->pc = 0x2763bcu;
    // NOP
label_2763c0:
    // 0x2763c0: 0xd9fb  dsra        $k1, $zero, 7
    ctx->pc = 0x2763c0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 7);
label_2763c4:
    // 0x2763c4: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x2763c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2763c8:
    // 0x2763c8: 0x0  nop
    ctx->pc = 0x2763c8u;
    // NOP
label_2763cc:
    // 0x2763cc: 0x0  nop
    ctx->pc = 0x2763ccu;
    // NOP
label_2763d0:
    // 0x2763d0: 0xd9ff  dsra32      $k1, $zero, 7
    ctx->pc = 0x2763d0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 7));
label_2763d4:
    // 0x2763d4: 0xc880  sll         $t9, $zero, 2
    ctx->pc = 0x2763d4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2763d8:
    // 0x2763d8: 0x0  nop
    ctx->pc = 0x2763d8u;
    // NOP
label_2763dc:
    // 0x2763dc: 0x0  nop
    ctx->pc = 0x2763dcu;
    // NOP
label_2763e0:
    // 0x2763e0: 0xda19  .word       0x0000DA19                   # multu       $zero, $zero # 0000DA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2763e4:
    // 0x2763e4: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x2763e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2763e8:
    // 0x2763e8: 0x0  nop
    ctx->pc = 0x2763e8u;
    // NOP
label_2763ec:
    // 0x2763ec: 0x0  nop
    ctx->pc = 0x2763ecu;
    // NOP
label_2763f0:
    // 0x2763f0: 0xda28  .word       0x0000DA28                   # mfsa        $k1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2763f0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2763f4:
    // 0x2763f4: 0x11660  .word       0x00011660                   # add         $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2763f8:
    // 0x2763f8: 0x0  nop
    ctx->pc = 0x2763f8u;
    // NOP
label_2763fc:
    // 0x2763fc: 0x0  nop
    ctx->pc = 0x2763fcu;
    // NOP
label_276400:
    // 0x276400: 0xda4b  .word       0x0000DA4B                   # movn        $k1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276400u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276404:
    // 0x276404: 0x14790  .word       0x00014790                   # mfhi        $t0 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276404u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276408:
    // 0x276408: 0x0  nop
    ctx->pc = 0x276408u;
    // NOP
label_27640c:
    // 0x27640c: 0x0  nop
    ctx->pc = 0x27640cu;
    // NOP
label_276410:
    // 0x276410: 0xda74  teq         $zero, $zero, 873
    ctx->pc = 0x276410u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276414:
    // 0x276414: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_276418:
    // 0x276418: 0x0  nop
    ctx->pc = 0x276418u;
    // NOP
label_27641c:
    // 0x27641c: 0x0  nop
    ctx->pc = 0x27641cu;
    // NOP
label_276420:
    // 0x276420: 0xda7f  dsra32      $k1, $zero, 9
    ctx->pc = 0x276420u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 9));
label_276424:
    // 0x276424: 0xa1c0  sll         $s4, $zero, 7
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276428:
    // 0x276428: 0x0  nop
    ctx->pc = 0x276428u;
    // NOP
label_27642c:
    // 0x27642c: 0x0  nop
    ctx->pc = 0x27642cu;
    // NOP
label_276430:
    // 0x276430: 0xda94  .word       0x0000DA94                   # dsllv       $k1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276430u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_276434:
    // 0x276434: 0x12b00  sll         $a1, $at, 12
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_276438:
    // 0x276438: 0x0  nop
    ctx->pc = 0x276438u;
    // NOP
label_27643c:
    // 0x27643c: 0x0  nop
    ctx->pc = 0x27643cu;
    // NOP
label_276440:
    // 0x276440: 0xdaba  dsrl        $k1, $zero, 10
    ctx->pc = 0x276440u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 10);
label_276444:
    // 0x276444: 0x13020  add         $a2, $zero, $at
    ctx->pc = 0x276444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_276448:
    // 0x276448: 0x0  nop
    ctx->pc = 0x276448u;
    // NOP
label_27644c:
    // 0x27644c: 0x0  nop
    ctx->pc = 0x27644cu;
    // NOP
label_276450:
    // 0x276450: 0xdae1  .word       0x0000DAE1                   # addu        $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276450u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276454:
    // 0x276454: 0x25f0  tge         $zero, $zero, 151
    ctx->pc = 0x276454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276458:
    // 0x276458: 0x0  nop
    ctx->pc = 0x276458u;
    // NOP
label_27645c:
    // 0x27645c: 0x0  nop
    ctx->pc = 0x27645cu;
    // NOP
label_276460:
    // 0x276460: 0xdae6  .word       0x0000DAE6                   # xor         $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276460u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_276464:
    // 0x276464: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x276464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_276468:
    // 0x276468: 0x0  nop
    ctx->pc = 0x276468u;
    // NOP
label_27646c:
    // 0x27646c: 0x0  nop
    ctx->pc = 0x27646cu;
    // NOP
label_276470:
    // 0x276470: 0xdaee  .word       0x0000DAEE                   # dsub        $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276470u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_276474:
    // 0x276474: 0x12a60  .word       0x00012A60                   # add         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_276478:
    // 0x276478: 0x0  nop
    ctx->pc = 0x276478u;
    // NOP
label_27647c:
    // 0x27647c: 0x0  nop
    ctx->pc = 0x27647cu;
    // NOP
label_276480:
    // 0x276480: 0xdb14  .word       0x0000DB14                   # dsllv       $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276480u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_276484:
    // 0x276484: 0xb940  sll         $s7, $zero, 5
    ctx->pc = 0x276484u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_276488:
    // 0x276488: 0x0  nop
    ctx->pc = 0x276488u;
    // NOP
label_27648c:
    // 0x27648c: 0x0  nop
    ctx->pc = 0x27648cu;
    // NOP
label_276490:
    // 0x276490: 0xdb2c  .word       0x0000DB2C                   # dadd        $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_276494:
    // 0x276494: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x276494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276498:
    // 0x276498: 0x0  nop
    ctx->pc = 0x276498u;
    // NOP
label_27649c:
    // 0x27649c: 0x0  nop
    ctx->pc = 0x27649cu;
    // NOP
label_2764a0:
    // 0x2764a0: 0xdb46  .word       0x0000DB46                   # srlv        $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2764a4:
    // 0x2764a4: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2764a8:
    // 0x2764a8: 0x0  nop
    ctx->pc = 0x2764a8u;
    // NOP
label_2764ac:
    // 0x2764ac: 0x0  nop
    ctx->pc = 0x2764acu;
    // NOP
label_2764b0:
    // 0x2764b0: 0xdb5c  .word       0x0000DB5C                   # dmult       $zero, $zero # 0000DB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2764B0 raw=0x0000DB5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2764b4:
    // 0x2764b4: 0x1ed0  .word       0x00001ED0                   # mfhi        $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2764b8:
    // 0x2764b8: 0x0  nop
    ctx->pc = 0x2764b8u;
    // NOP
label_2764bc:
    // 0x2764bc: 0x0  nop
    ctx->pc = 0x2764bcu;
    // NOP
label_2764c0:
    // 0x2764c0: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2764c4:
    // 0x2764c4: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x2764c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2764c8:
    // 0x2764c8: 0x0  nop
    ctx->pc = 0x2764c8u;
    // NOP
label_2764cc:
    // 0x2764cc: 0x0  nop
    ctx->pc = 0x2764ccu;
    // NOP
label_2764d0:
    // 0x2764d0: 0xdb6a  .word       0x0000DB6A                   # slt         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764d0u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2764d4:
    // 0x2764d4: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2764d8:
    // 0x2764d8: 0x0  nop
    ctx->pc = 0x2764d8u;
    // NOP
label_2764dc:
    // 0x2764dc: 0x0  nop
    ctx->pc = 0x2764dcu;
    // NOP
label_2764e0:
    // 0x2764e0: 0xdb7c  dsll32      $k1, $zero, 13
    ctx->pc = 0x2764e0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 13));
label_2764e4:
    // 0x2764e4: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2764e8:
    // 0x2764e8: 0x0  nop
    ctx->pc = 0x2764e8u;
    // NOP
label_2764ec:
    // 0x2764ec: 0x0  nop
    ctx->pc = 0x2764ecu;
    // NOP
label_2764f0:
    // 0x2764f0: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764f0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2764f4:
    // 0x2764f4: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2764f8:
    // 0x2764f8: 0x0  nop
    ctx->pc = 0x2764f8u;
    // NOP
label_2764fc:
    // 0x2764fc: 0x0  nop
    ctx->pc = 0x2764fcu;
    // NOP
label_276500:
    // 0x276500: 0xdb9f  .word       0x0000DB9F                   # ddivu       $k1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x276500 raw=0x0000DB9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276504:
    // 0x276504: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276504u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_276508:
    // 0x276508: 0x0  nop
    ctx->pc = 0x276508u;
    // NOP
label_27650c:
    // 0x27650c: 0x0  nop
    ctx->pc = 0x27650cu;
    // NOP
    ctx->pc = 0x276510u;
    return;
}
