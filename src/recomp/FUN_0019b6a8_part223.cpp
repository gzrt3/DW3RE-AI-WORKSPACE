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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part223(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x207d08u: goto label_207d08;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d10u: goto label_207d10;
        case 0x207d14u: goto label_207d14;
        case 0x207d18u: goto label_207d18;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d20u: goto label_207d20;
        case 0x207d24u: goto label_207d24;
        case 0x207d28u: goto label_207d28;
        case 0x207d2cu: goto label_207d2c;
        case 0x207d30u: goto label_207d30;
        case 0x207d34u: goto label_207d34;
        case 0x207d38u: goto label_207d38;
        case 0x207d3cu: goto label_207d3c;
        case 0x207d40u: goto label_207d40;
        case 0x207d44u: goto label_207d44;
        case 0x207d48u: goto label_207d48;
        case 0x207d4cu: goto label_207d4c;
        case 0x207d50u: goto label_207d50;
        case 0x207d54u: goto label_207d54;
        case 0x207d58u: goto label_207d58;
        case 0x207d5cu: goto label_207d5c;
        case 0x207d60u: goto label_207d60;
        case 0x207d64u: goto label_207d64;
        case 0x207d68u: goto label_207d68;
        case 0x207d6cu: goto label_207d6c;
        case 0x207d70u: goto label_207d70;
        case 0x207d74u: goto label_207d74;
        case 0x207d78u: goto label_207d78;
        case 0x207d7cu: goto label_207d7c;
        case 0x207d80u: goto label_207d80;
        case 0x207d84u: goto label_207d84;
        case 0x207d88u: goto label_207d88;
        case 0x207d8cu: goto label_207d8c;
        case 0x207d90u: goto label_207d90;
        case 0x207d94u: goto label_207d94;
        case 0x207d98u: goto label_207d98;
        case 0x207d9cu: goto label_207d9c;
        case 0x207da0u: goto label_207da0;
        case 0x207da4u: goto label_207da4;
        case 0x207da8u: goto label_207da8;
        case 0x207dacu: goto label_207dac;
        case 0x207db0u: goto label_207db0;
        case 0x207db4u: goto label_207db4;
        case 0x207db8u: goto label_207db8;
        case 0x207dbcu: goto label_207dbc;
        case 0x207dc0u: goto label_207dc0;
        case 0x207dc4u: goto label_207dc4;
        case 0x207dc8u: goto label_207dc8;
        case 0x207dccu: goto label_207dcc;
        case 0x207dd0u: goto label_207dd0;
        case 0x207dd4u: goto label_207dd4;
        case 0x207dd8u: goto label_207dd8;
        case 0x207ddcu: goto label_207ddc;
        case 0x207de0u: goto label_207de0;
        case 0x207de4u: goto label_207de4;
        case 0x207de8u: goto label_207de8;
        case 0x207decu: goto label_207dec;
        case 0x207df0u: goto label_207df0;
        case 0x207df4u: goto label_207df4;
        case 0x207df8u: goto label_207df8;
        case 0x207dfcu: goto label_207dfc;
        case 0x207e00u: goto label_207e00;
        case 0x207e04u: goto label_207e04;
        case 0x207e08u: goto label_207e08;
        case 0x207e0cu: goto label_207e0c;
        case 0x207e10u: goto label_207e10;
        case 0x207e14u: goto label_207e14;
        case 0x207e18u: goto label_207e18;
        case 0x207e1cu: goto label_207e1c;
        case 0x207e20u: goto label_207e20;
        case 0x207e24u: goto label_207e24;
        case 0x207e28u: goto label_207e28;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e30u: goto label_207e30;
        case 0x207e34u: goto label_207e34;
        case 0x207e38u: goto label_207e38;
        case 0x207e3cu: goto label_207e3c;
        case 0x207e40u: goto label_207e40;
        case 0x207e44u: goto label_207e44;
        case 0x207e48u: goto label_207e48;
        case 0x207e4cu: goto label_207e4c;
        case 0x207e50u: goto label_207e50;
        case 0x207e54u: goto label_207e54;
        case 0x207e58u: goto label_207e58;
        case 0x207e5cu: goto label_207e5c;
        case 0x207e60u: goto label_207e60;
        case 0x207e64u: goto label_207e64;
        case 0x207e68u: goto label_207e68;
        case 0x207e6cu: goto label_207e6c;
        case 0x207e70u: goto label_207e70;
        case 0x207e74u: goto label_207e74;
        case 0x207e78u: goto label_207e78;
        case 0x207e7cu: goto label_207e7c;
        case 0x207e80u: goto label_207e80;
        case 0x207e84u: goto label_207e84;
        case 0x207e88u: goto label_207e88;
        case 0x207e8cu: goto label_207e8c;
        case 0x207e90u: goto label_207e90;
        case 0x207e94u: goto label_207e94;
        case 0x207e98u: goto label_207e98;
        case 0x207e9cu: goto label_207e9c;
        case 0x207ea0u: goto label_207ea0;
        case 0x207ea4u: goto label_207ea4;
        case 0x207ea8u: goto label_207ea8;
        case 0x207eacu: goto label_207eac;
        case 0x207eb0u: goto label_207eb0;
        case 0x207eb4u: goto label_207eb4;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ebcu: goto label_207ebc;
        case 0x207ec0u: goto label_207ec0;
        case 0x207ec4u: goto label_207ec4;
        case 0x207ec8u: goto label_207ec8;
        case 0x207eccu: goto label_207ecc;
        case 0x207ed0u: goto label_207ed0;
        case 0x207ed4u: goto label_207ed4;
        case 0x207ed8u: goto label_207ed8;
        case 0x207edcu: goto label_207edc;
        case 0x207ee0u: goto label_207ee0;
        case 0x207ee4u: goto label_207ee4;
        case 0x207ee8u: goto label_207ee8;
        case 0x207eecu: goto label_207eec;
        case 0x207ef0u: goto label_207ef0;
        case 0x207ef4u: goto label_207ef4;
        case 0x207ef8u: goto label_207ef8;
        case 0x207efcu: goto label_207efc;
        case 0x207f00u: goto label_207f00;
        case 0x207f04u: goto label_207f04;
        case 0x207f08u: goto label_207f08;
        case 0x207f0cu: goto label_207f0c;
        case 0x207f10u: goto label_207f10;
        case 0x207f14u: goto label_207f14;
        case 0x207f18u: goto label_207f18;
        case 0x207f1cu: goto label_207f1c;
        case 0x207f20u: goto label_207f20;
        case 0x207f24u: goto label_207f24;
        case 0x207f28u: goto label_207f28;
        case 0x207f2cu: goto label_207f2c;
        case 0x207f30u: goto label_207f30;
        case 0x207f34u: goto label_207f34;
        case 0x207f38u: goto label_207f38;
        case 0x207f3cu: goto label_207f3c;
        case 0x207f40u: goto label_207f40;
        case 0x207f44u: goto label_207f44;
        case 0x207f48u: goto label_207f48;
        case 0x207f4cu: goto label_207f4c;
        case 0x207f50u: goto label_207f50;
        case 0x207f54u: goto label_207f54;
        case 0x207f58u: goto label_207f58;
        case 0x207f5cu: goto label_207f5c;
        case 0x207f60u: goto label_207f60;
        case 0x207f64u: goto label_207f64;
        case 0x207f68u: goto label_207f68;
        case 0x207f6cu: goto label_207f6c;
        case 0x207f70u: goto label_207f70;
        case 0x207f74u: goto label_207f74;
        case 0x207f78u: goto label_207f78;
        case 0x207f7cu: goto label_207f7c;
        case 0x207f80u: goto label_207f80;
        case 0x207f84u: goto label_207f84;
        case 0x207f88u: goto label_207f88;
        case 0x207f8cu: goto label_207f8c;
        case 0x207f90u: goto label_207f90;
        case 0x207f94u: goto label_207f94;
        case 0x207f98u: goto label_207f98;
        case 0x207f9cu: goto label_207f9c;
        case 0x207fa0u: goto label_207fa0;
        case 0x207fa4u: goto label_207fa4;
        case 0x207fa8u: goto label_207fa8;
        case 0x207facu: goto label_207fac;
        case 0x207fb0u: goto label_207fb0;
        case 0x207fb4u: goto label_207fb4;
        case 0x207fb8u: goto label_207fb8;
        case 0x207fbcu: goto label_207fbc;
        case 0x207fc0u: goto label_207fc0;
        case 0x207fc4u: goto label_207fc4;
        case 0x207fc8u: goto label_207fc8;
        case 0x207fccu: goto label_207fcc;
        case 0x207fd0u: goto label_207fd0;
        case 0x207fd4u: goto label_207fd4;
        case 0x207fd8u: goto label_207fd8;
        case 0x207fdcu: goto label_207fdc;
        case 0x207fe0u: goto label_207fe0;
        case 0x207fe4u: goto label_207fe4;
        case 0x207fe8u: goto label_207fe8;
        case 0x207fecu: goto label_207fec;
        case 0x207ff0u: goto label_207ff0;
        case 0x207ff4u: goto label_207ff4;
        case 0x207ff8u: goto label_207ff8;
        case 0x207ffcu: goto label_207ffc;
        case 0x208000u: goto label_208000;
        case 0x208004u: goto label_208004;
        case 0x208008u: goto label_208008;
        case 0x20800cu: goto label_20800c;
        case 0x208010u: goto label_208010;
        case 0x208014u: goto label_208014;
        case 0x208018u: goto label_208018;
        case 0x20801cu: goto label_20801c;
        case 0x208020u: goto label_208020;
        case 0x208024u: goto label_208024;
        case 0x208028u: goto label_208028;
        case 0x20802cu: goto label_20802c;
        case 0x208030u: goto label_208030;
        case 0x208034u: goto label_208034;
        case 0x208038u: goto label_208038;
        case 0x20803cu: goto label_20803c;
        case 0x208040u: goto label_208040;
        case 0x208044u: goto label_208044;
        case 0x208048u: goto label_208048;
        case 0x20804cu: goto label_20804c;
        case 0x208050u: goto label_208050;
        case 0x208054u: goto label_208054;
        case 0x208058u: goto label_208058;
        case 0x20805cu: goto label_20805c;
        case 0x208060u: goto label_208060;
        case 0x208064u: goto label_208064;
        case 0x208068u: goto label_208068;
        case 0x20806cu: goto label_20806c;
        case 0x208070u: goto label_208070;
        case 0x208074u: goto label_208074;
        case 0x208078u: goto label_208078;
        case 0x20807cu: goto label_20807c;
        case 0x208080u: goto label_208080;
        case 0x208084u: goto label_208084;
        case 0x208088u: goto label_208088;
        case 0x20808cu: goto label_20808c;
        case 0x208090u: goto label_208090;
        case 0x208094u: goto label_208094;
        case 0x208098u: goto label_208098;
        case 0x20809cu: goto label_20809c;
        case 0x2080a0u: goto label_2080a0;
        case 0x2080a4u: goto label_2080a4;
        case 0x2080a8u: goto label_2080a8;
        case 0x2080acu: goto label_2080ac;
        case 0x2080b0u: goto label_2080b0;
        case 0x2080b4u: goto label_2080b4;
        case 0x2080b8u: goto label_2080b8;
        case 0x2080bcu: goto label_2080bc;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080c4u: goto label_2080c4;
        case 0x2080c8u: goto label_2080c8;
        case 0x2080ccu: goto label_2080cc;
        case 0x2080d0u: goto label_2080d0;
        case 0x2080d4u: goto label_2080d4;
        case 0x2080d8u: goto label_2080d8;
        case 0x2080dcu: goto label_2080dc;
        case 0x2080e0u: goto label_2080e0;
        case 0x2080e4u: goto label_2080e4;
        case 0x2080e8u: goto label_2080e8;
        case 0x2080ecu: goto label_2080ec;
        case 0x2080f0u: goto label_2080f0;
        case 0x2080f4u: goto label_2080f4;
        case 0x2080f8u: goto label_2080f8;
        case 0x2080fcu: goto label_2080fc;
        case 0x208100u: goto label_208100;
        case 0x208104u: goto label_208104;
        case 0x208108u: goto label_208108;
        case 0x20810cu: goto label_20810c;
        case 0x208110u: goto label_208110;
        case 0x208114u: goto label_208114;
        case 0x208118u: goto label_208118;
        case 0x20811cu: goto label_20811c;
        case 0x208120u: goto label_208120;
        case 0x208124u: goto label_208124;
        case 0x208128u: goto label_208128;
        case 0x20812cu: goto label_20812c;
        case 0x208130u: goto label_208130;
        case 0x208134u: goto label_208134;
        case 0x208138u: goto label_208138;
        case 0x20813cu: goto label_20813c;
        case 0x208140u: goto label_208140;
        case 0x208144u: goto label_208144;
        case 0x208148u: goto label_208148;
        case 0x20814cu: goto label_20814c;
        case 0x208150u: goto label_208150;
        case 0x208154u: goto label_208154;
        case 0x208158u: goto label_208158;
        case 0x20815cu: goto label_20815c;
        case 0x208160u: goto label_208160;
        case 0x208164u: goto label_208164;
        case 0x208168u: goto label_208168;
        case 0x20816cu: goto label_20816c;
        case 0x208170u: goto label_208170;
        case 0x208174u: goto label_208174;
        case 0x208178u: goto label_208178;
        case 0x20817cu: goto label_20817c;
        case 0x208180u: goto label_208180;
        case 0x208184u: goto label_208184;
        case 0x208188u: goto label_208188;
        case 0x20818cu: goto label_20818c;
        case 0x208190u: goto label_208190;
        case 0x208194u: goto label_208194;
        case 0x208198u: goto label_208198;
        case 0x20819cu: goto label_20819c;
        case 0x2081a0u: goto label_2081a0;
        case 0x2081a4u: goto label_2081a4;
        case 0x2081a8u: goto label_2081a8;
        case 0x2081acu: goto label_2081ac;
        case 0x2081b0u: goto label_2081b0;
        case 0x2081b4u: goto label_2081b4;
        case 0x2081b8u: goto label_2081b8;
        case 0x2081bcu: goto label_2081bc;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081c4u: goto label_2081c4;
        case 0x2081c8u: goto label_2081c8;
        case 0x2081ccu: goto label_2081cc;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081d4u: goto label_2081d4;
        case 0x2081d8u: goto label_2081d8;
        case 0x2081dcu: goto label_2081dc;
        case 0x2081e0u: goto label_2081e0;
        case 0x2081e4u: goto label_2081e4;
        case 0x2081e8u: goto label_2081e8;
        case 0x2081ecu: goto label_2081ec;
        case 0x2081f0u: goto label_2081f0;
        case 0x2081f4u: goto label_2081f4;
        case 0x2081f8u: goto label_2081f8;
        case 0x2081fcu: goto label_2081fc;
        case 0x208200u: goto label_208200;
        case 0x208204u: goto label_208204;
        case 0x208208u: goto label_208208;
        case 0x20820cu: goto label_20820c;
        case 0x208210u: goto label_208210;
        case 0x208214u: goto label_208214;
        case 0x208218u: goto label_208218;
        case 0x20821cu: goto label_20821c;
        case 0x208220u: goto label_208220;
        case 0x208224u: goto label_208224;
        case 0x208228u: goto label_208228;
        case 0x20822cu: goto label_20822c;
        case 0x208230u: goto label_208230;
        case 0x208234u: goto label_208234;
        case 0x208238u: goto label_208238;
        case 0x20823cu: goto label_20823c;
        case 0x208240u: goto label_208240;
        case 0x208244u: goto label_208244;
        case 0x208248u: goto label_208248;
        case 0x20824cu: goto label_20824c;
        case 0x208250u: goto label_208250;
        case 0x208254u: goto label_208254;
        case 0x208258u: goto label_208258;
        case 0x20825cu: goto label_20825c;
        case 0x208260u: goto label_208260;
        case 0x208264u: goto label_208264;
        case 0x208268u: goto label_208268;
        case 0x20826cu: goto label_20826c;
        case 0x208270u: goto label_208270;
        case 0x208274u: goto label_208274;
        case 0x208278u: goto label_208278;
        case 0x20827cu: goto label_20827c;
        case 0x208280u: goto label_208280;
        case 0x208284u: goto label_208284;
        case 0x208288u: goto label_208288;
        case 0x20828cu: goto label_20828c;
        case 0x208290u: goto label_208290;
        case 0x208294u: goto label_208294;
        case 0x208298u: goto label_208298;
        case 0x20829cu: goto label_20829c;
        case 0x2082a0u: goto label_2082a0;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082a8u: goto label_2082a8;
        case 0x2082acu: goto label_2082ac;
        case 0x2082b0u: goto label_2082b0;
        case 0x2082b4u: goto label_2082b4;
        case 0x2082b8u: goto label_2082b8;
        case 0x2082bcu: goto label_2082bc;
        case 0x2082c0u: goto label_2082c0;
        case 0x2082c4u: goto label_2082c4;
        case 0x2082c8u: goto label_2082c8;
        case 0x2082ccu: goto label_2082cc;
        case 0x2082d0u: goto label_2082d0;
        case 0x2082d4u: goto label_2082d4;
        case 0x2082d8u: goto label_2082d8;
        case 0x2082dcu: goto label_2082dc;
        case 0x2082e0u: goto label_2082e0;
        case 0x2082e4u: goto label_2082e4;
        case 0x2082e8u: goto label_2082e8;
        case 0x2082ecu: goto label_2082ec;
        case 0x2082f0u: goto label_2082f0;
        case 0x2082f4u: goto label_2082f4;
        case 0x2082f8u: goto label_2082f8;
        case 0x2082fcu: goto label_2082fc;
        case 0x208300u: goto label_208300;
        case 0x208304u: goto label_208304;
        case 0x208308u: goto label_208308;
        case 0x20830cu: goto label_20830c;
        case 0x208310u: goto label_208310;
        case 0x208314u: goto label_208314;
        case 0x208318u: goto label_208318;
        case 0x20831cu: goto label_20831c;
        case 0x208320u: goto label_208320;
        case 0x208324u: goto label_208324;
        case 0x208328u: goto label_208328;
        case 0x20832cu: goto label_20832c;
        case 0x208330u: goto label_208330;
        case 0x208334u: goto label_208334;
        case 0x208338u: goto label_208338;
        case 0x20833cu: goto label_20833c;
        case 0x208340u: goto label_208340;
        case 0x208344u: goto label_208344;
        case 0x208348u: goto label_208348;
        case 0x20834cu: goto label_20834c;
        case 0x208350u: goto label_208350;
        case 0x208354u: goto label_208354;
        case 0x208358u: goto label_208358;
        case 0x20835cu: goto label_20835c;
        case 0x208360u: goto label_208360;
        case 0x208364u: goto label_208364;
        case 0x208368u: goto label_208368;
        case 0x20836cu: goto label_20836c;
        case 0x208370u: goto label_208370;
        case 0x208374u: goto label_208374;
        case 0x208378u: goto label_208378;
        case 0x20837cu: goto label_20837c;
        case 0x208380u: goto label_208380;
        case 0x208384u: goto label_208384;
        case 0x208388u: goto label_208388;
        case 0x20838cu: goto label_20838c;
        case 0x208390u: goto label_208390;
        case 0x208394u: goto label_208394;
        case 0x208398u: goto label_208398;
        case 0x20839cu: goto label_20839c;
        case 0x2083a0u: goto label_2083a0;
        case 0x2083a4u: goto label_2083a4;
        case 0x2083a8u: goto label_2083a8;
        case 0x2083acu: goto label_2083ac;
        case 0x2083b0u: goto label_2083b0;
        case 0x2083b4u: goto label_2083b4;
        case 0x2083b8u: goto label_2083b8;
        case 0x2083bcu: goto label_2083bc;
        case 0x2083c0u: goto label_2083c0;
        case 0x2083c4u: goto label_2083c4;
        case 0x2083c8u: goto label_2083c8;
        case 0x2083ccu: goto label_2083cc;
        case 0x2083d0u: goto label_2083d0;
        case 0x2083d4u: goto label_2083d4;
        case 0x2083d8u: goto label_2083d8;
        case 0x2083dcu: goto label_2083dc;
        case 0x2083e0u: goto label_2083e0;
        case 0x2083e4u: goto label_2083e4;
        case 0x2083e8u: goto label_2083e8;
        case 0x2083ecu: goto label_2083ec;
        case 0x2083f0u: goto label_2083f0;
        case 0x2083f4u: goto label_2083f4;
        case 0x2083f8u: goto label_2083f8;
        case 0x2083fcu: goto label_2083fc;
        case 0x208400u: goto label_208400;
        case 0x208404u: goto label_208404;
        case 0x208408u: goto label_208408;
        case 0x20840cu: goto label_20840c;
        case 0x208410u: goto label_208410;
        case 0x208414u: goto label_208414;
        case 0x208418u: goto label_208418;
        case 0x20841cu: goto label_20841c;
        case 0x208420u: goto label_208420;
        case 0x208424u: goto label_208424;
        case 0x208428u: goto label_208428;
        case 0x20842cu: goto label_20842c;
        case 0x208430u: goto label_208430;
        case 0x208434u: goto label_208434;
        case 0x208438u: goto label_208438;
        case 0x20843cu: goto label_20843c;
        case 0x208440u: goto label_208440;
        case 0x208444u: goto label_208444;
        case 0x208448u: goto label_208448;
        case 0x20844cu: goto label_20844c;
        case 0x208450u: goto label_208450;
        case 0x208454u: goto label_208454;
        case 0x208458u: goto label_208458;
        case 0x20845cu: goto label_20845c;
        case 0x208460u: goto label_208460;
        case 0x208464u: goto label_208464;
        case 0x208468u: goto label_208468;
        case 0x20846cu: goto label_20846c;
        case 0x208470u: goto label_208470;
        case 0x208474u: goto label_208474;
        case 0x208478u: goto label_208478;
        case 0x20847cu: goto label_20847c;
        case 0x208480u: goto label_208480;
        case 0x208484u: goto label_208484;
        case 0x208488u: goto label_208488;
        case 0x20848cu: goto label_20848c;
        case 0x208490u: goto label_208490;
        case 0x208494u: goto label_208494;
        case 0x208498u: goto label_208498;
        case 0x20849cu: goto label_20849c;
        case 0x2084a0u: goto label_2084a0;
        case 0x2084a4u: goto label_2084a4;
        case 0x2084a8u: goto label_2084a8;
        case 0x2084acu: goto label_2084ac;
        case 0x2084b0u: goto label_2084b0;
        case 0x2084b4u: goto label_2084b4;
        case 0x2084b8u: goto label_2084b8;
        case 0x2084bcu: goto label_2084bc;
        case 0x2084c0u: goto label_2084c0;
        case 0x2084c4u: goto label_2084c4;
        case 0x2084c8u: goto label_2084c8;
        case 0x2084ccu: goto label_2084cc;
        case 0x2084d0u: goto label_2084d0;
        case 0x2084d4u: goto label_2084d4;
        default: return;
    }

label_207d08:
    // 0x207d08: 0xa6001120  sh          $zero, 0x1120($s0)
    ctx->pc = 0x207d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4384), (uint16_t)GPR_U32(ctx, 0));
label_207d0c:
    // 0x207d0c: 0xa6001122  sh          $zero, 0x1122($s0)
    ctx->pc = 0x207d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4386), (uint16_t)GPR_U32(ctx, 0));
label_207d10:
    // 0x207d10: 0xae021124  sw          $v0, 0x1124($s0)
    ctx->pc = 0x207d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4388), GPR_U32(ctx, 2));
label_207d14:
    // 0x207d14: 0xa2001103  sb          $zero, 0x1103($s0)
    ctx->pc = 0x207d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4355), (uint8_t)GPR_U32(ctx, 0));
label_207d18:
    // 0x207d18: 0x26e5ffb0  addiu       $a1, $s7, -0x50
    ctx->pc = 0x207d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
label_207d1c:
    // 0x207d1c: 0x260405b0  addiu       $a0, $s0, 0x5B0
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
label_207d20:
    // 0x207d20: 0x2406013a  addiu       $a2, $zero, 0x13A
    ctx->pc = 0x207d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_207d24:
    // 0x207d24: 0x24070152  addiu       $a3, $zero, 0x152
    ctx->pc = 0x207d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_207d28:
    // 0x207d28: 0x24080056  addiu       $t0, $zero, 0x56
    ctx->pc = 0x207d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_207d2c:
    // 0x207d2c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207d30:
    // 0x207d30: 0xc07c17c  jal         func_1F05F0
label_207d34:
    if (ctx->pc == 0x207D34u) {
        ctx->pc = 0x207D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D30u;
        // 0x207d34: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D38u;
        goto label_207d38;
    }
    ctx->pc = 0x207D30u;
    SET_GPR_U32(ctx, 31, 0x207D38u);
    ctx->pc = 0x207D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D30u;
    // 0x207d34: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x207D38u;
label_207d38:
    // 0x207d38: 0x26e2ffb0  addiu       $v0, $s7, -0x50
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967216));
label_207d3c:
    // 0x207d3c: 0x340482f0  ori         $a0, $zero, 0x82F0
    ctx->pc = 0x207d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33520);
label_207d40:
    // 0x207d40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207d44:
    // 0x207d44: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207d48:
    // 0x207d48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207d4c:
    // 0x207d4c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x207d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_207d50:
    // 0x207d50: 0xa60311b0  sh          $v1, 0x11B0($s0)
    ctx->pc = 0x207d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4528), (uint16_t)GPR_U32(ctx, 3));
label_207d54:
    // 0x207d54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207d58:
    // 0x207d58: 0xa60411b2  sh          $a0, 0x11B2($s0)
    ctx->pc = 0x207d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4530), (uint16_t)GPR_U32(ctx, 4));
label_207d5c:
    // 0x207d5c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207d60:
    // 0x207d60: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207d64:
    // 0x207d64: 0x34028370  ori         $v0, $zero, 0x8370
    ctx->pc = 0x207d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33648);
label_207d68:
    // 0x207d68: 0xae0411b4  sw          $a0, 0x11B4($s0)
    ctx->pc = 0x207d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4532), GPR_U32(ctx, 4));
label_207d6c:
    // 0x207d6c: 0xa60311c0  sh          $v1, 0x11C0($s0)
    ctx->pc = 0x207d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4544), (uint16_t)GPR_U32(ctx, 3));
label_207d70:
    // 0x207d70: 0xa60211c2  sh          $v0, 0x11C2($s0)
    ctx->pc = 0x207d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4546), (uint16_t)GPR_U32(ctx, 2));
label_207d74:
    // 0x207d74: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_207d78:
    // 0x207d78: 0xae0411c4  sw          $a0, 0x11C4($s0)
    ctx->pc = 0x207d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 4));
label_207d7c:
    // 0x207d7c: 0x246333f0  addiu       $v1, $v1, 0x33F0
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13296));
label_207d80:
    // 0x207d80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207d84:
    // 0x207d84: 0x9042009b  lbu         $v0, 0x9B($v0)
    ctx->pc = 0x207d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207d88:
    // 0x207d88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207d8c:
    // 0x207d8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207d90:
    // 0x207d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207d94:
    // 0x207d94: 0xc055148  jal         func_154520
label_207d98:
    if (ctx->pc == 0x207D98u) {
        ctx->pc = 0x207D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D94u;
        // 0x207d98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207D9Cu;
        goto label_207d9c;
    }
    ctx->pc = 0x207D94u;
    SET_GPR_U32(ctx, 31, 0x207D9Cu);
    ctx->pc = 0x207D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D94u;
    // 0x207d98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x207D94u, 0x207D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D9Cu;
label_207d9c:
    // 0x207d9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_207da0:
    // 0x207da0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207da4:
    // 0x207da4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207da8:
    // 0x207da8: 0x9043009b  lbu         $v1, 0x9B($v0)
    ctx->pc = 0x207da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207dac:
    // 0x207dac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207db0:
    // 0x207db0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207db4:
    // 0x207db4: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_207db8:
    // 0x207db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207dbc:
    // 0x207dbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207dc0:
    // 0x207dc0: 0xc0550d0  jal         func_154340
label_207dc4:
    if (ctx->pc == 0x207DC4u) {
        ctx->pc = 0x207DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DC0u;
        // 0x207dc4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207DC8u;
        goto label_207dc8;
    }
    ctx->pc = 0x207DC0u;
    SET_GPR_U32(ctx, 31, 0x207DC8u);
    ctx->pc = 0x207DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DC0u;
    // 0x207dc4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x207DC0u, 0x207DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC8u;
label_207dc8:
    // 0x207dc8: 0x26e40048  addiu       $a0, $s7, 0x48
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_207dcc:
    // 0x207dcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x207dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_207dd0:
    // 0x207dd0: 0x824023  subu        $t0, $a0, $v0
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_207dd4:
    // 0x207dd4: 0x11180a  movz        $v1, $zero, $s1
    ctx->pc = 0x207dd4u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_207dd8:
    // 0x207dd8: 0x2402013c  addiu       $v0, $zero, 0x13C
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_207ddc:
    // 0x207ddc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_207de0:
    // 0x207de0: 0x434823  subu        $t1, $v0, $v1
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207de4:
    // 0x207de4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_207de8:
    // 0x207de8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207dec:
    // 0x207dec: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207df0:
    // 0x207df0: 0x51280a  movz        $a1, $v0, $s1
    ctx->pc = 0x207df0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_207df4:
    // 0x207df4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207df8:
    // 0x207df8: 0xc054e5c  jal         func_153970
label_207dfc:
    if (ctx->pc == 0x207DFCu) {
        ctx->pc = 0x207DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF8u;
        // 0x207dfc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E00u;
        goto label_207e00;
    }
    ctx->pc = 0x207DF8u;
    SET_GPR_U32(ctx, 31, 0x207E00u);
    ctx->pc = 0x207DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DF8u;
    // 0x207dfc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207DF8u, 0x207E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E00u;
label_207e00:
    // 0x207e00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207e04:
    // 0x207e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207e08:
    // 0x207e08: 0x260411d0  addiu       $a0, $s0, 0x11D0
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4560));
label_207e0c:
    // 0x207e0c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x207e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_207e10:
    // 0x207e10: 0x9043009b  lbu         $v1, 0x9B($v0)
    ctx->pc = 0x207e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 155)));
label_207e14:
    // 0x207e14: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207e18:
    // 0x207e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207e1c:
    // 0x207e1c: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x207e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_207e20:
    // 0x207e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207e24:
    // 0x207e24: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e28:
    // 0x207e28: 0xc054e74  jal         func_1539D0
label_207e2c:
    if (ctx->pc == 0x207E2Cu) {
        ctx->pc = 0x207E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E28u;
        // 0x207e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E30u;
        goto label_207e30;
    }
    ctx->pc = 0x207E28u;
    SET_GPR_U32(ctx, 31, 0x207E30u);
    ctx->pc = 0x207E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E28u;
    // 0x207e2c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207E28u, 0x207E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E30u;
label_207e30:
    // 0x207e30: 0x26e2ffb8  addiu       $v0, $s7, -0x48
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967224));
label_207e34:
    // 0x207e34: 0x340483b0  ori         $a0, $zero, 0x83B0
    ctx->pc = 0x207e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33712);
label_207e38:
    // 0x207e38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207e3c:
    // 0x207e3c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207e40:
    // 0x207e40: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207e44:
    // 0x207e44: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
label_207e48:
    // 0x207e48: 0xa6031ce0  sh          $v1, 0x1CE0($s0)
    ctx->pc = 0x207e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7392), (uint16_t)GPR_U32(ctx, 3));
label_207e4c:
    // 0x207e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207e50:
    // 0x207e50: 0xa6041ce2  sh          $a0, 0x1CE2($s0)
    ctx->pc = 0x207e50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7394), (uint16_t)GPR_U32(ctx, 4));
label_207e54:
    // 0x207e54: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207e58:
    // 0x207e58: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207e5c:
    // 0x207e5c: 0x34028430  ori         $v0, $zero, 0x8430
    ctx->pc = 0x207e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33840);
label_207e60:
    // 0x207e60: 0xae041ce4  sw          $a0, 0x1CE4($s0)
    ctx->pc = 0x207e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7396), GPR_U32(ctx, 4));
label_207e64:
    // 0x207e64: 0xa6031cf0  sh          $v1, 0x1CF0($s0)
    ctx->pc = 0x207e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7408), (uint16_t)GPR_U32(ctx, 3));
label_207e68:
    // 0x207e68: 0xa6021cf2  sh          $v0, 0x1CF2($s0)
    ctx->pc = 0x207e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7410), (uint16_t)GPR_U32(ctx, 2));
label_207e6c:
    // 0x207e6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_207e70:
    // 0x207e70: 0xae041cf4  sw          $a0, 0x1CF4($s0)
    ctx->pc = 0x207e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7412), GPR_U32(ctx, 4));
label_207e74:
    // 0x207e74: 0x246333a0  addiu       $v1, $v1, 0x33A0
    ctx->pc = 0x207e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13216));
label_207e78:
    // 0x207e78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207e7c:
    // 0x207e7c: 0x904200a1  lbu         $v0, 0xA1($v0)
    ctx->pc = 0x207e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 161)));
label_207e80:
    // 0x207e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207e84:
    // 0x207e84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207e88:
    // 0x207e88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207e8c:
    // 0x207e8c: 0xc0550d0  jal         func_154340
label_207e90:
    if (ctx->pc == 0x207E90u) {
        ctx->pc = 0x207E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E8Cu;
        // 0x207e90: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207E94u;
        goto label_207e94;
    }
    ctx->pc = 0x207E8Cu;
    SET_GPR_U32(ctx, 31, 0x207E94u);
    ctx->pc = 0x207E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E8Cu;
    // 0x207e90: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x207E8Cu, 0x207E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E94u;
label_207e94:
    // 0x207e94: 0x26e30048  addiu       $v1, $s7, 0x48
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_207e98:
    // 0x207e98: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207e9c:
    // 0x207e9c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_207ea0:
    // 0x207ea0: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207ea4:
    // 0x207ea4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x207ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207ea8:
    // 0x207ea8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207eac:
    // 0x207eac: 0x24090154  addiu       $t1, $zero, 0x154
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_207eb0:
    // 0x207eb0: 0xc054e5c  jal         func_153970
label_207eb4:
    if (ctx->pc == 0x207EB4u) {
        ctx->pc = 0x207EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EB0u;
        // 0x207eb4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EB8u;
        goto label_207eb8;
    }
    ctx->pc = 0x207EB0u;
    SET_GPR_U32(ctx, 31, 0x207EB8u);
    ctx->pc = 0x207EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EB0u;
    // 0x207eb4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207EB0u, 0x207EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EB8u;
label_207eb8:
    // 0x207eb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207ebc:
    // 0x207ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207ec0:
    // 0x207ec0: 0x26041d00  addiu       $a0, $s0, 0x1D00
    ctx->pc = 0x207ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7424));
label_207ec4:
    // 0x207ec4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x207ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207ec8:
    // 0x207ec8: 0x904300a1  lbu         $v1, 0xA1($v0)
    ctx->pc = 0x207ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 161)));
label_207ecc:
    // 0x207ecc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207ed0:
    // 0x207ed0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207ed4:
    // 0x207ed4: 0x244233a0  addiu       $v0, $v0, 0x33A0
    ctx->pc = 0x207ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
label_207ed8:
    // 0x207ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207edc:
    // 0x207edc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207ee0:
    // 0x207ee0: 0xc054e74  jal         func_1539D0
label_207ee4:
    if (ctx->pc == 0x207EE4u) {
        ctx->pc = 0x207EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EE0u;
        // 0x207ee4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207EE8u;
        goto label_207ee8;
    }
    ctx->pc = 0x207EE0u;
    SET_GPR_U32(ctx, 31, 0x207EE8u);
    ctx->pc = 0x207EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EE0u;
    // 0x207ee4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207EE0u, 0x207EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EE8u;
label_207ee8:
    // 0x207ee8: 0x26e2ffb8  addiu       $v0, $s7, -0x48
    ctx->pc = 0x207ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967224));
label_207eec:
    // 0x207eec: 0x34048470  ori         $a0, $zero, 0x8470
    ctx->pc = 0x207eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33904);
label_207ef0:
    // 0x207ef0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207ef4:
    // 0x207ef4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x207ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207ef8:
    // 0x207ef8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207efc:
    // 0x207efc: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x207efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
label_207f00:
    // 0x207f00: 0xa6032400  sh          $v1, 0x2400($s0)
    ctx->pc = 0x207f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9216), (uint16_t)GPR_U32(ctx, 3));
label_207f04:
    // 0x207f04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207f08:
    // 0x207f08: 0xa6042402  sh          $a0, 0x2402($s0)
    ctx->pc = 0x207f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9218), (uint16_t)GPR_U32(ctx, 4));
label_207f0c:
    // 0x207f0c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207f10:
    // 0x207f10: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x207f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207f14:
    // 0x207f14: 0x340284f0  ori         $v0, $zero, 0x84F0
    ctx->pc = 0x207f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34032);
label_207f18:
    // 0x207f18: 0xae042404  sw          $a0, 0x2404($s0)
    ctx->pc = 0x207f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9220), GPR_U32(ctx, 4));
label_207f1c:
    // 0x207f1c: 0xa6032410  sh          $v1, 0x2410($s0)
    ctx->pc = 0x207f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9232), (uint16_t)GPR_U32(ctx, 3));
label_207f20:
    // 0x207f20: 0xa6022412  sh          $v0, 0x2412($s0)
    ctx->pc = 0x207f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9234), (uint16_t)GPR_U32(ctx, 2));
label_207f24:
    // 0x207f24: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x207f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_207f28:
    // 0x207f28: 0xae042414  sw          $a0, 0x2414($s0)
    ctx->pc = 0x207f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9236), GPR_U32(ctx, 4));
label_207f2c:
    // 0x207f2c: 0x246333b0  addiu       $v1, $v1, 0x33B0
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13232));
label_207f30:
    // 0x207f30: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207f34:
    // 0x207f34: 0x904200a2  lbu         $v0, 0xA2($v0)
    ctx->pc = 0x207f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 162)));
label_207f38:
    // 0x207f38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x207f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_207f3c:
    // 0x207f3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207f40:
    // 0x207f40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207f44:
    // 0x207f44: 0xc0550d0  jal         func_154340
label_207f48:
    if (ctx->pc == 0x207F48u) {
        ctx->pc = 0x207F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F44u;
        // 0x207f48: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F4Cu;
        goto label_207f4c;
    }
    ctx->pc = 0x207F44u;
    SET_GPR_U32(ctx, 31, 0x207F4Cu);
    ctx->pc = 0x207F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F44u;
    // 0x207f48: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x207F44u, 0x207F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F4Cu;
label_207f4c:
    // 0x207f4c: 0x26e30048  addiu       $v1, $s7, 0x48
    ctx->pc = 0x207f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_207f50:
    // 0x207f50: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207f54:
    // 0x207f54: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x207f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_207f58:
    // 0x207f58: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207f5c:
    // 0x207f5c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_207f60:
    // 0x207f60: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207f64:
    // 0x207f64: 0x2409016c  addiu       $t1, $zero, 0x16C
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 364));
label_207f68:
    // 0x207f68: 0xc054e5c  jal         func_153970
label_207f6c:
    if (ctx->pc == 0x207F6Cu) {
        ctx->pc = 0x207F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F68u;
        // 0x207f6c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x207F70u;
        goto label_207f70;
    }
    ctx->pc = 0x207F68u;
    SET_GPR_U32(ctx, 31, 0x207F70u);
    ctx->pc = 0x207F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F68u;
    // 0x207f6c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x207F68u, 0x207F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F70u;
label_207f70:
    // 0x207f70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207f74:
    // 0x207f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207f78:
    // 0x207f78: 0x26042420  addiu       $a0, $s0, 0x2420
    ctx->pc = 0x207f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9248));
label_207f7c:
    // 0x207f7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x207f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_207f80:
    // 0x207f80: 0x904300a2  lbu         $v1, 0xA2($v0)
    ctx->pc = 0x207f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 162)));
label_207f84:
    // 0x207f84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x207f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_207f88:
    // 0x207f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207f8c:
    // 0x207f8c: 0x244233b0  addiu       $v0, $v0, 0x33B0
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
label_207f90:
    // 0x207f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207f94:
    // 0x207f94: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207f98:
    // 0x207f98: 0xc054e74  jal         func_1539D0
label_207f9c:
    if (ctx->pc == 0x207F9Cu) {
        ctx->pc = 0x207F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F98u;
        // 0x207f9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FA0u;
        goto label_207fa0;
    }
    ctx->pc = 0x207F98u;
    SET_GPR_U32(ctx, 31, 0x207FA0u);
    ctx->pc = 0x207F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F98u;
    // 0x207f9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x207F98u, 0x207FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA0u;
label_207fa0:
    // 0x207fa0: 0x26e20050  addiu       $v0, $s7, 0x50
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
label_207fa4:
    // 0x207fa4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_207fa8:
    // 0x207fa8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x207fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207fac:
    // 0x207fac: 0x340482b0  ori         $a0, $zero, 0x82B0
    ctx->pc = 0x207facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33456);
label_207fb0:
    // 0x207fb0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x207fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_207fb4:
    // 0x207fb4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_207fb8:
    // 0x207fb8: 0xa6032b20  sh          $v1, 0x2B20($s0)
    ctx->pc = 0x207fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 3));
label_207fbc:
    // 0x207fbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_207fc0:
    // 0x207fc0: 0xa6042b22  sh          $a0, 0x2B22($s0)
    ctx->pc = 0x207fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 4));
label_207fc4:
    // 0x207fc4: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x207fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_207fc8:
    // 0x207fc8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_207fcc:
    // 0x207fcc: 0xae062b24  sw          $a2, 0x2B24($s0)
    ctx->pc = 0x207fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 6));
label_207fd0:
    // 0x207fd0: 0x34028330  ori         $v0, $zero, 0x8330
    ctx->pc = 0x207fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33584);
label_207fd4:
    // 0x207fd4: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x207fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_207fd8:
    // 0x207fd8: 0xa6022b32  sh          $v0, 0x2B32($s0)
    ctx->pc = 0x207fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 2));
label_207fdc:
    // 0x207fdc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x207fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_207fe0:
    // 0x207fe0: 0xae062b34  sw          $a2, 0x2B34($s0)
    ctx->pc = 0x207fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11060), GPR_U32(ctx, 6));
label_207fe4:
    // 0x207fe4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x207fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_207fe8:
    // 0x207fe8: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x207fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_207fec:
    // 0x207fec: 0xc08f20e  jal         func_23C838
label_207ff0:
    if (ctx->pc == 0x207FF0u) {
        ctx->pc = 0x207FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207FECu;
        // 0x207ff0: 0x24a5e030  addiu       $a1, $a1, -0x1FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207FF4u;
        goto label_207ff4;
    }
    ctx->pc = 0x207FECu;
    SET_GPR_U32(ctx, 31, 0x207FF4u);
    ctx->pc = 0x207FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207FECu;
    // 0x207ff0: 0x24a5e030  addiu       $a1, $a1, -0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x207FF4u;
label_207ff4:
    // 0x207ff4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x207ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_207ff8:
    // 0x207ff8: 0x26e600b8  addiu       $a2, $s7, 0xB8
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 184));
label_207ffc:
    // 0x207ffc: 0x26042b40  addiu       $a0, $s0, 0x2B40
    ctx->pc = 0x207ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
label_208000:
    // 0x208000: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x208000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_208004:
    // 0x208004: 0x24070136  addiu       $a3, $zero, 0x136
    ctx->pc = 0x208004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_208008:
    // 0x208008: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x208008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20800c:
    // 0x20800c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x20800cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_208010:
    // 0x208010: 0xc0708ac  jal         func_1C22B0
label_208014:
    if (ctx->pc == 0x208014u) {
        ctx->pc = 0x208014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208010u;
        // 0x208014: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208018u;
        goto label_208018;
    }
    ctx->pc = 0x208010u;
    SET_GPR_U32(ctx, 31, 0x208018u);
    ctx->pc = 0x208014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208010u;
    // 0x208014: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x208018u;
label_208018:
    // 0x208018: 0x26e20050  addiu       $v0, $s7, 0x50
    ctx->pc = 0x208018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
label_20801c:
    // 0x20801c: 0x34038330  ori         $v1, $zero, 0x8330
    ctx->pc = 0x20801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33584);
label_208020:
    // 0x208020: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x208020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208024:
    // 0x208024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x208024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208028:
    // 0x208028: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x208028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_20802c:
    // 0x20802c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_208030:
    // 0x208030: 0xa6042ee0  sh          $a0, 0x2EE0($s0)
    ctx->pc = 0x208030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12000), (uint16_t)GPR_U32(ctx, 4));
label_208034:
    // 0x208034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x208034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_208038:
    // 0x208038: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x208038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20803c:
    // 0x20803c: 0xa6032ee2  sh          $v1, 0x2EE2($s0)
    ctx->pc = 0x20803cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12002), (uint16_t)GPR_U32(ctx, 3));
label_208040:
    // 0x208040: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x208040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_208044:
    // 0x208044: 0x34038530  ori         $v1, $zero, 0x8530
    ctx->pc = 0x208044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34096);
label_208048:
    // 0x208048: 0xae022ee4  sw          $v0, 0x2EE4($s0)
    ctx->pc = 0x208048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12004), GPR_U32(ctx, 2));
label_20804c:
    // 0x20804c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208050:
    // 0x208050: 0xa6042ef0  sh          $a0, 0x2EF0($s0)
    ctx->pc = 0x208050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12016), (uint16_t)GPR_U32(ctx, 4));
label_208054:
    // 0x208054: 0xa6032ef2  sh          $v1, 0x2EF2($s0)
    ctx->pc = 0x208054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12018), (uint16_t)GPR_U32(ctx, 3));
label_208058:
    // 0x208058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20805c:
    // 0x20805c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20805cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208060:
    // 0x208060: 0xae022ef4  sw          $v0, 0x2EF4($s0)
    ctx->pc = 0x208060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12020), GPR_U32(ctx, 2));
label_208064:
    // 0x208064: 0x26e70088  addiu       $a3, $s7, 0x88
    ctx->pc = 0x208064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 136));
label_208068:
    // 0x208068: 0x24e90088  addiu       $t1, $a3, 0x88
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
label_20806c:
    // 0x20806c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x20806cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_208070:
    // 0x208070: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_208074:
    // 0x208074: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_208078:
    // 0x208078: 0x252b6c00  addiu       $t3, $t1, 0x6C00
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_20807c:
    // 0x20807c: 0x246d014a  addiu       $t5, $v1, 0x14A
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 330));
label_208080:
    // 0x208080: 0x2046021  addu        $t4, $s0, $a0
    ctx->pc = 0x208080u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_208084:
    // 0x208084: 0xd48c0  sll         $t1, $t5, 3
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_208088:
    // 0x208088: 0xa5862f80  sh          $a2, 0x2F80($t4)
    ctx->pc = 0x208088u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12160), (uint16_t)GPR_U32(ctx, 6));
label_20808c:
    // 0x20808c: 0x252a7900  addiu       $t2, $t1, 0x7900
    ctx->pc = 0x20808cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_208090:
    // 0x208090: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x208090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_208094:
    // 0x208094: 0x25a90008  addiu       $t1, $t5, 0x8
    ctx->pc = 0x208094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_208098:
    // 0x208098: 0xa58a2f82  sh          $t2, 0x2F82($t4)
    ctx->pc = 0x208098u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12162), (uint16_t)GPR_U32(ctx, 10));
label_20809c:
    // 0x20809c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x20809cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2080a0:
    // 0x2080a0: 0xad822f84  sw          $v0, 0x2F84($t4)
    ctx->pc = 0x2080a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12164), GPR_U32(ctx, 2));
label_2080a4:
    // 0x2080a4: 0x252d7900  addiu       $t5, $t1, 0x7900
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_2080a8:
    // 0x2080a8: 0xa58b2f90  sh          $t3, 0x2F90($t4)
    ctx->pc = 0x2080a8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12176), (uint16_t)GPR_U32(ctx, 11));
label_2080ac:
    // 0x2080ac: 0xa58d2f92  sh          $t5, 0x2F92($t4)
    ctx->pc = 0x2080acu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12178), (uint16_t)GPR_U32(ctx, 13));
label_2080b0:
    // 0x2080b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2080b4:
    // 0x2080b4: 0xad822f94  sw          $v0, 0x2F94($t4)
    ctx->pc = 0x2080b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12180), GPR_U32(ctx, 2));
label_2080b8:
    // 0x2080b8: 0x29090004  slti        $t1, $t0, 0x4
    ctx->pc = 0x2080b8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_2080bc:
    // 0x2080bc: 0xa5863200  sh          $a2, 0x3200($t4)
    ctx->pc = 0x2080bcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12800), (uint16_t)GPR_U32(ctx, 6));
label_2080c0:
    // 0x2080c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2080c4:
    // 0x2080c4: 0xa58a3202  sh          $t2, 0x3202($t4)
    ctx->pc = 0x2080c4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12802), (uint16_t)GPR_U32(ctx, 10));
label_2080c8:
    // 0x2080c8: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2080c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_2080cc:
    // 0x2080cc: 0xad823204  sw          $v0, 0x3204($t4)
    ctx->pc = 0x2080ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12804), GPR_U32(ctx, 2));
label_2080d0:
    // 0x2080d0: 0x8f8a90fc  lw          $t2, -0x6F04($gp)
    ctx->pc = 0x2080d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2080d4:
    // 0x2080d4: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x2080d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_2080d8:
    // 0x2080d8: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x2080d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_2080dc:
    // 0x2080dc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2080dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2080e0:
    // 0x2080e0: 0x842ae2ec  lh          $t2, -0x1D14($at)
    ctx->pc = 0x2080e0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294959852)));
label_2080e4:
    // 0x2080e4: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_2080e8:
    // 0x2080e8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2080e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_2080ec:
    // 0x2080ec: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_2080f0:
    // 0x2080f0: 0xa58a3210  sh          $t2, 0x3210($t4)
    ctx->pc = 0x2080f0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12816), (uint16_t)GPR_U32(ctx, 10));
label_2080f4:
    // 0x2080f4: 0xa58d3212  sh          $t5, 0x3212($t4)
    ctx->pc = 0x2080f4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 12818), (uint16_t)GPR_U32(ctx, 13));
label_2080f8:
    // 0x2080f8: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
label_2080fc:
    if (ctx->pc == 0x2080FCu) {
        ctx->pc = 0x2080FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080F8u;
        // 0x2080fc: 0xad823214  sw          $v0, 0x3214($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208100u;
        goto label_208100;
    }
    ctx->pc = 0x2080F8u;
    {
        const bool branch_taken_0x2080f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2080FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080F8u;
        // 0x2080fc: 0xad823214  sw          $v0, 0x3214($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080f8) {
            ctx->pc = 0x20807Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20807c;
        }
    }
    ctx->pc = 0x208100u;
label_208100:
    // 0x208100: 0x26e30030  addiu       $v1, $s7, 0x30
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
label_208104:
    // 0x208104: 0x24047cb0  addiu       $a0, $zero, 0x7CB0
    ctx->pc = 0x208104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31920));
label_208108:
    // 0x208108: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x208108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20810c:
    // 0x20810c: 0x24077e90  addiu       $a3, $zero, 0x7E90
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32400));
label_208110:
    // 0x208110: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x208110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_208114:
    // 0x208114: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_208118:
    // 0x208118: 0xa6053660  sh          $a1, 0x3660($s0)
    ctx->pc = 0x208118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13920), (uint16_t)GPR_U32(ctx, 5));
label_20811c:
    // 0x20811c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20811cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_208120:
    // 0x208120: 0xa6043662  sh          $a0, 0x3662($s0)
    ctx->pc = 0x208120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13922), (uint16_t)GPR_U32(ctx, 4));
label_208124:
    // 0x208124: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x208124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_208128:
    // 0x208128: 0xae023664  sw          $v0, 0x3664($s0)
    ctx->pc = 0x208128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13924), GPR_U32(ctx, 2));
label_20812c:
    // 0x20812c: 0x26e50020  addiu       $a1, $s7, 0x20
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_208130:
    // 0x208130: 0xa6033670  sh          $v1, 0x3670($s0)
    ctx->pc = 0x208130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13936), (uint16_t)GPR_U32(ctx, 3));
label_208134:
    // 0x208134: 0x24047d70  addiu       $a0, $zero, 0x7D70
    ctx->pc = 0x208134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
label_208138:
    // 0x208138: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20813c:
    // 0x20813c: 0xa6043672  sh          $a0, 0x3672($s0)
    ctx->pc = 0x20813cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13938), (uint16_t)GPR_U32(ctx, 4));
label_208140:
    // 0x208140: 0x24686c00  addiu       $t0, $v1, 0x6C00
    ctx->pc = 0x208140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_208144:
    // 0x208144: 0xae023674  sw          $v0, 0x3674($s0)
    ctx->pc = 0x208144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13940), GPR_U32(ctx, 2));
label_208148:
    // 0x208148: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x208148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_20814c:
    // 0x20814c: 0xa6083480  sh          $t0, 0x3480($s0)
    ctx->pc = 0x20814cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13440), (uint16_t)GPR_U32(ctx, 8));
label_208150:
    // 0x208150: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x208150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_208154:
    // 0x208154: 0x24067f50  addiu       $a2, $zero, 0x7F50
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32592));
label_208158:
    // 0x208158: 0x246d6c00  addiu       $t5, $v1, 0x6C00
    ctx->pc = 0x208158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20815c:
    // 0x20815c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x20815cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
label_208160:
    // 0x208160: 0x24037dd0  addiu       $v1, $zero, 0x7DD0
    ctx->pc = 0x208160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32208));
label_208164:
    // 0x208164: 0x26e90010  addiu       $t1, $s7, 0x10
    ctx->pc = 0x208164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_208168:
    // 0x208168: 0xa6033482  sh          $v1, 0x3482($s0)
    ctx->pc = 0x208168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13442), (uint16_t)GPR_U32(ctx, 3));
label_20816c:
    // 0x20816c: 0x340b80d0  ori         $t3, $zero, 0x80D0
    ctx->pc = 0x20816cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
label_208170:
    // 0x208170: 0xae023484  sw          $v0, 0x3484($s0)
    ctx->pc = 0x208170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13444), GPR_U32(ctx, 2));
label_208174:
    // 0x208174: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x208174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_208178:
    // 0x208178: 0xa60d3490  sh          $t5, 0x3490($s0)
    ctx->pc = 0x208178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13456), (uint16_t)GPR_U32(ctx, 13));
label_20817c:
    // 0x20817c: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_208180:
    // 0x208180: 0xa6073492  sh          $a3, 0x3492($s0)
    ctx->pc = 0x208180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13458), (uint16_t)GPR_U32(ctx, 7));
label_208184:
    // 0x208184: 0x25230060  addiu       $v1, $t1, 0x60
    ctx->pc = 0x208184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
label_208188:
    // 0x208188: 0xae023494  sw          $v0, 0x3494($s0)
    ctx->pc = 0x208188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13460), GPR_U32(ctx, 2));
label_20818c:
    // 0x20818c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20818cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_208190:
    // 0x208190: 0xa6083520  sh          $t0, 0x3520($s0)
    ctx->pc = 0x208190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13600), (uint16_t)GPR_U32(ctx, 8));
label_208194:
    // 0x208194: 0x246c6c00  addiu       $t4, $v1, 0x6C00
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_208198:
    // 0x208198: 0xa6073522  sh          $a3, 0x3522($s0)
    ctx->pc = 0x208198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13602), (uint16_t)GPR_U32(ctx, 7));
label_20819c:
    // 0x20819c: 0xae023524  sw          $v0, 0x3524($s0)
    ctx->pc = 0x20819cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13604), GPR_U32(ctx, 2));
label_2081a0:
    // 0x2081a0: 0x26e70022  addiu       $a3, $s7, 0x22
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 34));
label_2081a4:
    // 0x2081a4: 0xa60d3530  sh          $t5, 0x3530($s0)
    ctx->pc = 0x2081a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13616), (uint16_t)GPR_U32(ctx, 13));
label_2081a8:
    // 0x2081a8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2081ac:
    // 0x2081ac: 0xa6063532  sh          $a2, 0x3532($s0)
    ctx->pc = 0x2081acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13618), (uint16_t)GPR_U32(ctx, 6));
label_2081b0:
    // 0x2081b0: 0x246a6c00  addiu       $t2, $v1, 0x6C00
    ctx->pc = 0x2081b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2081b4:
    // 0x2081b4: 0xae023534  sw          $v0, 0x3534($s0)
    ctx->pc = 0x2081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13620), GPR_U32(ctx, 2));
label_2081b8:
    // 0x2081b8: 0x24e30060  addiu       $v1, $a3, 0x60
    ctx->pc = 0x2081b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_2081bc:
    // 0x2081bc: 0xa60835c0  sh          $t0, 0x35C0($s0)
    ctx->pc = 0x2081bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13760), (uint16_t)GPR_U32(ctx, 8));
label_2081c0:
    // 0x2081c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2081c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2081c4:
    // 0x2081c4: 0xa60635c2  sh          $a2, 0x35C2($s0)
    ctx->pc = 0x2081c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13762), (uint16_t)GPR_U32(ctx, 6));
label_2081c8:
    // 0x2081c8: 0x24696c00  addiu       $t1, $v1, 0x6C00
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2081cc:
    // 0x2081cc: 0xae0235c4  sw          $v0, 0x35C4($s0)
    ctx->pc = 0x2081ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13764), GPR_U32(ctx, 2));
label_2081d0:
    // 0x2081d0: 0x26e60040  addiu       $a2, $s7, 0x40
    ctx->pc = 0x2081d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_2081d4:
    // 0x2081d4: 0xa60d35d0  sh          $t5, 0x35D0($s0)
    ctx->pc = 0x2081d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13776), (uint16_t)GPR_U32(ctx, 13));
label_2081d8:
    // 0x2081d8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2081dc:
    // 0x2081dc: 0xa60535d2  sh          $a1, 0x35D2($s0)
    ctx->pc = 0x2081dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 13778), (uint16_t)GPR_U32(ctx, 5));
label_2081e0:
    // 0x2081e0: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2081e4:
    // 0x2081e4: 0xae0235d4  sw          $v0, 0x35D4($s0)
    ctx->pc = 0x2081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13780), GPR_U32(ctx, 2));
label_2081e8:
    // 0x2081e8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x2081e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_2081ec:
    // 0x2081ec: 0xa6043700  sh          $a0, 0x3700($s0)
    ctx->pc = 0x2081ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14080), (uint16_t)GPR_U32(ctx, 4));
label_2081f0:
    // 0x2081f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2081f4:
    // 0x2081f4: 0xa6053702  sh          $a1, 0x3702($s0)
    ctx->pc = 0x2081f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14082), (uint16_t)GPR_U32(ctx, 5));
label_2081f8:
    // 0x2081f8: 0x24666c00  addiu       $a2, $v1, 0x6C00
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_2081fc:
    // 0x2081fc: 0xae023704  sw          $v0, 0x3704($s0)
    ctx->pc = 0x2081fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14084), GPR_U32(ctx, 2));
label_208200:
    // 0x208200: 0x34088190  ori         $t0, $zero, 0x8190
    ctx->pc = 0x208200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33168);
label_208204:
    // 0x208204: 0xa60c3710  sh          $t4, 0x3710($s0)
    ctx->pc = 0x208204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14096), (uint16_t)GPR_U32(ctx, 12));
label_208208:
    // 0x208208: 0x34038250  ori         $v1, $zero, 0x8250
    ctx->pc = 0x208208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33360);
label_20820c:
    // 0x20820c: 0xa60b3712  sh          $t3, 0x3712($s0)
    ctx->pc = 0x20820cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14098), (uint16_t)GPR_U32(ctx, 11));
label_208210:
    // 0x208210: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208214:
    // 0x208214: 0xae023714  sw          $v0, 0x3714($s0)
    ctx->pc = 0x208214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14100), GPR_U32(ctx, 2));
label_208218:
    // 0x208218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20821c:
    // 0x20821c: 0xa60a37a0  sh          $t2, 0x37A0($s0)
    ctx->pc = 0x20821cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14240), (uint16_t)GPR_U32(ctx, 10));
label_208220:
    // 0x208220: 0xa60b37a2  sh          $t3, 0x37A2($s0)
    ctx->pc = 0x208220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14242), (uint16_t)GPR_U32(ctx, 11));
label_208224:
    // 0x208224: 0xae0237a4  sw          $v0, 0x37A4($s0)
    ctx->pc = 0x208224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14244), GPR_U32(ctx, 2));
label_208228:
    // 0x208228: 0xa60937b0  sh          $t1, 0x37B0($s0)
    ctx->pc = 0x208228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14256), (uint16_t)GPR_U32(ctx, 9));
label_20822c:
    // 0x20822c: 0xa60837b2  sh          $t0, 0x37B2($s0)
    ctx->pc = 0x20822cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14258), (uint16_t)GPR_U32(ctx, 8));
label_208230:
    // 0x208230: 0xae0237b4  sw          $v0, 0x37B4($s0)
    ctx->pc = 0x208230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14260), GPR_U32(ctx, 2));
label_208234:
    // 0x208234: 0xa6073840  sh          $a3, 0x3840($s0)
    ctx->pc = 0x208234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14400), (uint16_t)GPR_U32(ctx, 7));
label_208238:
    // 0x208238: 0xa6083842  sh          $t0, 0x3842($s0)
    ctx->pc = 0x208238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14402), (uint16_t)GPR_U32(ctx, 8));
label_20823c:
    // 0x20823c: 0xae023844  sw          $v0, 0x3844($s0)
    ctx->pc = 0x20823cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14404), GPR_U32(ctx, 2));
label_208240:
    // 0x208240: 0xa6063850  sh          $a2, 0x3850($s0)
    ctx->pc = 0x208240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14416), (uint16_t)GPR_U32(ctx, 6));
label_208244:
    // 0x208244: 0xa6033852  sh          $v1, 0x3852($s0)
    ctx->pc = 0x208244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14418), (uint16_t)GPR_U32(ctx, 3));
label_208248:
    // 0x208248: 0xc054e6c  jal         func_1539B0
label_20824c:
    if (ctx->pc == 0x20824Cu) {
        ctx->pc = 0x20824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208248u;
        // 0x20824c: 0xae023854  sw          $v0, 0x3854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 14420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208250u;
        goto label_208250;
    }
    ctx->pc = 0x208248u;
    SET_GPR_U32(ctx, 31, 0x208250u);
    ctx->pc = 0x20824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208248u;
    // 0x20824c: 0xae023854  sw          $v0, 0x3854($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 14420), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x208248u, 0x208250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208250u;
label_208250:
    // 0x208250: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x208250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_208254:
    // 0x208254: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_208258:
    // 0x208258: 0xc0550d0  jal         func_154340
label_20825c:
    if (ctx->pc == 0x20825Cu) {
        ctx->pc = 0x20825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208258u;
        // 0x20825c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208260u;
        goto label_208260;
    }
    ctx->pc = 0x208258u;
    SET_GPR_U32(ctx, 31, 0x208260u);
    ctx->pc = 0x20825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208258u;
    // 0x20825c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x208258u, 0x208260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208260u;
label_208260:
    // 0x208260: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x208260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_208264:
    // 0x208264: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x208264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208268:
    // 0x208268: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20826c:
    if (ctx->pc == 0x20826Cu) {
        ctx->pc = 0x20826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208268u;
        // 0x20826c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208270u;
        goto label_208270;
    }
    ctx->pc = 0x208268u;
    {
        const bool branch_taken_0x208268 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208268u;
        // 0x20826c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208268) {
            ctx->pc = 0x208278u;
            goto label_208278;
        }
    }
    ctx->pc = 0x208270u;
label_208270:
    // 0x208270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208274:
    // 0x208274: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_208278:
    // 0x208278: 0x26e20090  addiu       $v0, $s7, 0x90
    ctx->pc = 0x208278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
label_20827c:
    // 0x20827c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_208280:
    // 0x208280: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_208284:
    // 0x208284: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x208284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208288:
    // 0x208288: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20828c:
    // 0x20828c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20828cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208290:
    // 0x208290: 0x24090076  addiu       $t1, $zero, 0x76
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_208294:
    // 0x208294: 0xc054e5c  jal         func_153970
label_208298:
    if (ctx->pc == 0x208298u) {
        ctx->pc = 0x208298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208294u;
        // 0x208298: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20829Cu;
        goto label_20829c;
    }
    ctx->pc = 0x208294u;
    SET_GPR_U32(ctx, 31, 0x20829Cu);
    ctx->pc = 0x208298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208294u;
    // 0x208298: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x208294u, 0x20829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20829Cu;
label_20829c:
    // 0x20829c: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x20829cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2082a0:
    // 0x2082a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2082a4:
    // 0x2082a4: 0x26043860  addiu       $a0, $s0, 0x3860
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14432));
label_2082a8:
    // 0x2082a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2082a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2082ac:
    // 0x2082ac: 0xc054e74  jal         func_1539D0
label_2082b0:
    if (ctx->pc == 0x2082B0u) {
        ctx->pc = 0x2082B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082ACu;
        // 0x2082b0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082B4u;
        goto label_2082b4;
    }
    ctx->pc = 0x2082ACu;
    SET_GPR_U32(ctx, 31, 0x2082B4u);
    ctx->pc = 0x2082B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082ACu;
    // 0x2082b0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2082ACu, 0x2082B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082B4u;
label_2082b4:
    // 0x2082b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2082b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2082b8:
    // 0x2082b8: 0xc054e6c  jal         func_1539B0
label_2082bc:
    if (ctx->pc == 0x2082BCu) {
        ctx->pc = 0x2082BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082B8u;
        // 0x2082bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082C0u;
        goto label_2082c0;
    }
    ctx->pc = 0x2082B8u;
    SET_GPR_U32(ctx, 31, 0x2082C0u);
    ctx->pc = 0x2082BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082B8u;
    // 0x2082bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x2082B8u, 0x2082C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082C0u;
label_2082c0:
    // 0x2082c0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2082c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2082c4:
    // 0x2082c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2082c8:
    // 0x2082c8: 0x3463e300  ori         $v1, $v1, 0xE300
    ctx->pc = 0x2082c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58112);
label_2082cc:
    // 0x2082cc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2082ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2082d0:
    // 0x2082d0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2082d4:
    // 0x2082d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2082d8:
    // 0x2082d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2082d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2082dc:
    // 0x2082dc: 0xc08f20e  jal         func_23C838
label_2082e0:
    if (ctx->pc == 0x2082E0u) {
        ctx->pc = 0x2082E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082DCu;
        // 0x2082e0: 0x24a5e038  addiu       $a1, $a1, -0x1FC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082E4u;
        goto label_2082e4;
    }
    ctx->pc = 0x2082DCu;
    SET_GPR_U32(ctx, 31, 0x2082E4u);
    ctx->pc = 0x2082E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082DCu;
    // 0x2082e0: 0x24a5e038  addiu       $a1, $a1, -0x1FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x2082E4u;
label_2082e4:
    // 0x2082e4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2082e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2082e8:
    // 0x2082e8: 0x26e6009a  addiu       $a2, $s7, 0x9A
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 154));
label_2082ec:
    // 0x2082ec: 0x26044560  addiu       $a0, $s0, 0x4560
    ctx->pc = 0x2082ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17760));
label_2082f0:
    // 0x2082f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2082f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2082f4:
    // 0x2082f4: 0x2407009a  addiu       $a3, $zero, 0x9A
    ctx->pc = 0x2082f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_2082f8:
    // 0x2082f8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2082f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2082fc:
    // 0x2082fc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2082fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_208300:
    // 0x208300: 0xc0708ac  jal         func_1C22B0
label_208304:
    if (ctx->pc == 0x208304u) {
        ctx->pc = 0x208304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208300u;
        // 0x208304: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208308u;
        goto label_208308;
    }
    ctx->pc = 0x208300u;
    SET_GPR_U32(ctx, 31, 0x208308u);
    ctx->pc = 0x208304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208300u;
    // 0x208304: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x208308u;
label_208308:
    // 0x208308: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x208308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20830c:
    // 0x20830c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_208310:
    // 0x208310: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x208310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_208314:
    // 0x208314: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x208314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_208318:
    // 0x208318: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x208318u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20831c:
    // 0x20831c: 0x8c26e2fc  lw          $a2, -0x1D04($at)
    ctx->pc = 0x20831cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959868)));
label_208320:
    // 0x208320: 0xc08f20e  jal         func_23C838
label_208324:
    if (ctx->pc == 0x208324u) {
        ctx->pc = 0x208324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208320u;
        // 0x208324: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208328u;
        goto label_208328;
    }
    ctx->pc = 0x208320u;
    SET_GPR_U32(ctx, 31, 0x208328u);
    ctx->pc = 0x208324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208320u;
    // 0x208324: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x208328u;
label_208328:
    // 0x208328: 0x26e600be  addiu       $a2, $s7, 0xBE
    ctx->pc = 0x208328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 190));
label_20832c:
    // 0x20832c: 0x26044600  addiu       $a0, $s0, 0x4600
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
label_208330:
    // 0x208330: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_208334:
    // 0x208334: 0x2407009a  addiu       $a3, $zero, 0x9A
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_208338:
    // 0x208338: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x208338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20833c:
    // 0x20833c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208340:
    // 0x208340: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x208340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_208344:
    // 0x208344: 0xc0708ac  jal         func_1C22B0
label_208348:
    if (ctx->pc == 0x208348u) {
        ctx->pc = 0x208348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208344u;
        // 0x208348: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20834Cu;
        goto label_20834c;
    }
    ctx->pc = 0x208344u;
    SET_GPR_U32(ctx, 31, 0x20834Cu);
    ctx->pc = 0x208348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208344u;
    // 0x208348: 0x27ab00c0  addiu       $t3, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20834Cu;
label_20834c:
    // 0x20834c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208350:
    // 0x208350: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x208350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_208354:
    // 0x208354: 0x3444e304  ori         $a0, $v0, 0xE304
    ctx->pc = 0x208354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58116);
label_208358:
    // 0x208358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x208358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20835c:
    // 0x20835c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_208360:
    // 0x208360: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208364:
    // 0x208364: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_208368:
    if (ctx->pc == 0x208368u) {
        ctx->pc = 0x208368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208364u;
        // 0x208368: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20836Cu;
        goto label_20836c;
    }
    ctx->pc = 0x208364u;
    {
        const bool branch_taken_0x208364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208364u;
        // 0x208368: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208364) {
            ctx->pc = 0x2083D0u;
            goto label_2083d0;
        }
    }
    ctx->pc = 0x20836Cu;
label_20836c:
    // 0x20836c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x20836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208370:
    // 0x208370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208374:
    // 0x208374: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x208374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_208378:
    // 0x208378: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20837c:
    // 0x20837c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208380:
    // 0x208380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208384:
    // 0x208384: 0xc0550d0  jal         func_154340
label_208388:
    if (ctx->pc == 0x208388u) {
        ctx->pc = 0x208388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208384u;
        // 0x208388: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20838Cu;
        goto label_20838c;
    }
    ctx->pc = 0x208384u;
    SET_GPR_U32(ctx, 31, 0x20838Cu);
    ctx->pc = 0x208388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208384u;
    // 0x208388: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x208384u, 0x20838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20838Cu;
label_20838c:
    // 0x20838c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x20838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_208390:
    // 0x208390: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x208390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208394:
    // 0x208394: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_208398:
    if (ctx->pc == 0x208398u) {
        ctx->pc = 0x208398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208394u;
        // 0x208398: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20839Cu;
        goto label_20839c;
    }
    ctx->pc = 0x208394u;
    {
        const bool branch_taken_0x208394 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x208398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208394u;
        // 0x208398: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208394) {
            ctx->pc = 0x2083A4u;
            goto label_2083a4;
        }
    }
    ctx->pc = 0x20839Cu;
label_20839c:
    // 0x20839c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2083a0:
    // 0x2083a0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2083a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2083a4:
    // 0x2083a4: 0x26e2009c  addiu       $v0, $s7, 0x9C
    ctx->pc = 0x2083a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 156));
label_2083a8:
    // 0x2083a8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2083ac:
    // 0x2083ac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2083acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2083b0:
    // 0x2083b0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2083b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2083b4:
    // 0x2083b4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2083b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2083b8:
    // 0x2083b8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2083b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2083bc:
    // 0x2083bc: 0x240900b2  addiu       $t1, $zero, 0xB2
    ctx->pc = 0x2083bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_2083c0:
    // 0x2083c0: 0xc054e5c  jal         func_153970
label_2083c4:
    if (ctx->pc == 0x2083C4u) {
        ctx->pc = 0x2083C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C0u;
        // 0x2083c4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083C8u;
        goto label_2083c8;
    }
    ctx->pc = 0x2083C0u;
    SET_GPR_U32(ctx, 31, 0x2083C8u);
    ctx->pc = 0x2083C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083C0u;
    // 0x2083c4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2083C0u, 0x2083C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083C8u;
label_2083c8:
    // 0x2083c8: 0x10000018  b           . + 4 + (0x18 << 2)
label_2083cc:
    if (ctx->pc == 0x2083CCu) {
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0x8f8390fc  lw          $v1, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083D0u;
        goto label_2083d0;
    }
    ctx->pc = 0x2083C8u;
    {
        const bool branch_taken_0x2083c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083C8u;
        // 0x2083cc: 0x8f8390fc  lw          $v1, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083c8) {
            ctx->pc = 0x20842Cu;
            goto label_20842c;
        }
    }
    ctx->pc = 0x2083D0u;
label_2083d0:
    // 0x2083d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2083d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2083d4:
    // 0x2083d4: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_2083d8:
    // 0x2083d8: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x2083d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2083dc:
    // 0x2083dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2083dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2083e0:
    // 0x2083e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2083e4:
    // 0x2083e4: 0xc0550d0  jal         func_154340
label_2083e8:
    if (ctx->pc == 0x2083E8u) {
        ctx->pc = 0x2083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E4u;
        // 0x2083e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083ECu;
        goto label_2083ec;
    }
    ctx->pc = 0x2083E4u;
    SET_GPR_U32(ctx, 31, 0x2083ECu);
    ctx->pc = 0x2083E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083E4u;
    // 0x2083e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x2083E4u, 0x2083ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083ECu;
label_2083ec:
    // 0x2083ec: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2083f0:
    // 0x2083f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2083f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2083f4:
    // 0x2083f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2083f8:
    if (ctx->pc == 0x2083F8u) {
        ctx->pc = 0x2083F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F4u;
        // 0x2083f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2083FCu;
        goto label_2083fc;
    }
    ctx->pc = 0x2083F4u;
    {
        const bool branch_taken_0x2083f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2083F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083F4u;
        // 0x2083f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083f4) {
            ctx->pc = 0x208404u;
            goto label_208404;
        }
    }
    ctx->pc = 0x2083FCu;
label_2083fc:
    // 0x2083fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_208400:
    // 0x208400: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x208400u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_208404:
    // 0x208404: 0x26e2009c  addiu       $v0, $s7, 0x9C
    ctx->pc = 0x208404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 156));
label_208408:
    // 0x208408: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20840c:
    // 0x20840c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_208410:
    // 0x208410: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x208410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208414:
    // 0x208414: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x208414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_208418:
    // 0x208418: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x208418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20841c:
    // 0x20841c: 0x240900b2  addiu       $t1, $zero, 0xB2
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_208420:
    // 0x208420: 0xc054e5c  jal         func_153970
label_208424:
    if (ctx->pc == 0x208424u) {
        ctx->pc = 0x208424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208420u;
        // 0x208424: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208428u;
        goto label_208428;
    }
    ctx->pc = 0x208420u;
    SET_GPR_U32(ctx, 31, 0x208428u);
    ctx->pc = 0x208424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208420u;
    // 0x208424: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x208420u, 0x208428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208428u;
label_208428:
    // 0x208428: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20842c:
    // 0x20842c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_208430:
    // 0x208430: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208434:
    // 0x208434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208438:
    // 0x208438: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_20843c:
    // 0x20843c: 0x26044740  addiu       $a0, $s0, 0x4740
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18240));
label_208440:
    // 0x208440: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_208444:
    // 0x208444: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x208444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_208448:
    // 0x208448: 0x8c23e304  lw          $v1, -0x1CFC($at)
    ctx->pc = 0x208448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959876)));
label_20844c:
    // 0x20844c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208450:
    // 0x208450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208454:
    // 0x208454: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208458:
    // 0x208458: 0xc054e74  jal         func_1539D0
label_20845c:
    if (ctx->pc == 0x20845Cu) {
        ctx->pc = 0x20845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208458u;
        // 0x20845c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208460u;
        goto label_208460;
    }
    ctx->pc = 0x208458u;
    SET_GPR_U32(ctx, 31, 0x208460u);
    ctx->pc = 0x20845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208458u;
    // 0x20845c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x208458u, 0x208460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208460u;
label_208460:
    // 0x208460: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x208460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_208464:
    // 0x208464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_208468:
    // 0x208468: 0x3444e308  ori         $a0, $v0, 0xE308
    ctx->pc = 0x208468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58120);
label_20846c:
    // 0x20846c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x20846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_208470:
    // 0x208470: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_208474:
    // 0x208474: 0x24423390  addiu       $v0, $v0, 0x3390
    ctx->pc = 0x208474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
label_208478:
    // 0x208478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20847c:
    // 0x20847c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_208480:
    // 0x208480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x208480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_208484:
    // 0x208484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208488:
    // 0x208488: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20848c:
    // 0x20848c: 0xc0550d0  jal         func_154340
label_208490:
    if (ctx->pc == 0x208490u) {
        ctx->pc = 0x208490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20848Cu;
        // 0x208490: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208494u;
        goto label_208494;
    }
    ctx->pc = 0x20848Cu;
    SET_GPR_U32(ctx, 31, 0x208494u);
    ctx->pc = 0x208490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20848Cu;
    // 0x208490: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x20848Cu, 0x208494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208494u;
label_208494:
    // 0x208494: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_208498:
    // 0x208498: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20849c:
    // 0x20849c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2084a0:
    if (ctx->pc == 0x2084A0u) {
        ctx->pc = 0x2084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20849Cu;
        // 0x2084a0: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084A4u;
        goto label_2084a4;
    }
    ctx->pc = 0x20849Cu;
    {
        const bool branch_taken_0x20849c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20849Cu;
        // 0x2084a0: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20849c) {
            ctx->pc = 0x2084ACu;
            goto label_2084ac;
        }
    }
    ctx->pc = 0x2084A4u;
label_2084a4:
    // 0x2084a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2084a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2084a8:
    // 0x2084a8: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2084ac:
    // 0x2084ac: 0x26e2009c  addiu       $v0, $s7, 0x9C
    ctx->pc = 0x2084acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 156));
label_2084b0:
    // 0x2084b0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2084b4:
    // 0x2084b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2084b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2084b8:
    // 0x2084b8: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2084bc:
    // 0x2084bc: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2084c0:
    // 0x2084c0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2084c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2084c4:
    // 0x2084c4: 0x240900ca  addiu       $t1, $zero, 0xCA
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
label_2084c8:
    // 0x2084c8: 0xc054e5c  jal         func_153970
label_2084cc:
    if (ctx->pc == 0x2084CCu) {
        ctx->pc = 0x2084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084C8u;
        // 0x2084cc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084D0u;
        goto label_2084d0;
    }
    ctx->pc = 0x2084C8u;
    SET_GPR_U32(ctx, 31, 0x2084D0u);
    ctx->pc = 0x2084CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084C8u;
    // 0x2084cc: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2084C8u, 0x2084D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084D0u;
label_2084d0:
    // 0x2084d0: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2084d4:
    // 0x2084d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2084d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    ctx->pc = 0x2084d8u;
    return;
}
