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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part307(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        case 0x230cb0u: goto label_230cb0;
        case 0x230cb4u: goto label_230cb4;
        case 0x230cb8u: goto label_230cb8;
        case 0x230cbcu: goto label_230cbc;
        case 0x230cc0u: goto label_230cc0;
        case 0x230cc4u: goto label_230cc4;
        case 0x230cc8u: goto label_230cc8;
        case 0x230cccu: goto label_230ccc;
        case 0x230cd0u: goto label_230cd0;
        case 0x230cd4u: goto label_230cd4;
        case 0x230cd8u: goto label_230cd8;
        case 0x230cdcu: goto label_230cdc;
        case 0x230ce0u: goto label_230ce0;
        case 0x230ce4u: goto label_230ce4;
        case 0x230ce8u: goto label_230ce8;
        case 0x230cecu: goto label_230cec;
        case 0x230cf0u: goto label_230cf0;
        case 0x230cf4u: goto label_230cf4;
        case 0x230cf8u: goto label_230cf8;
        case 0x230cfcu: goto label_230cfc;
        case 0x230d00u: goto label_230d00;
        case 0x230d04u: goto label_230d04;
        case 0x230d08u: goto label_230d08;
        case 0x230d0cu: goto label_230d0c;
        case 0x230d10u: goto label_230d10;
        case 0x230d14u: goto label_230d14;
        case 0x230d18u: goto label_230d18;
        case 0x230d1cu: goto label_230d1c;
        case 0x230d20u: goto label_230d20;
        case 0x230d24u: goto label_230d24;
        case 0x230d28u: goto label_230d28;
        case 0x230d2cu: goto label_230d2c;
        case 0x230d30u: goto label_230d30;
        case 0x230d34u: goto label_230d34;
        case 0x230d38u: goto label_230d38;
        case 0x230d3cu: goto label_230d3c;
        case 0x230d40u: goto label_230d40;
        case 0x230d44u: goto label_230d44;
        case 0x230d48u: goto label_230d48;
        case 0x230d4cu: goto label_230d4c;
        case 0x230d50u: goto label_230d50;
        case 0x230d54u: goto label_230d54;
        case 0x230d58u: goto label_230d58;
        case 0x230d5cu: goto label_230d5c;
        case 0x230d60u: goto label_230d60;
        case 0x230d64u: goto label_230d64;
        case 0x230d68u: goto label_230d68;
        case 0x230d6cu: goto label_230d6c;
        case 0x230d70u: goto label_230d70;
        case 0x230d74u: goto label_230d74;
        case 0x230d78u: goto label_230d78;
        case 0x230d7cu: goto label_230d7c;
        case 0x230d80u: goto label_230d80;
        case 0x230d84u: goto label_230d84;
        case 0x230d88u: goto label_230d88;
        case 0x230d8cu: goto label_230d8c;
        case 0x230d90u: goto label_230d90;
        case 0x230d94u: goto label_230d94;
        case 0x230d98u: goto label_230d98;
        case 0x230d9cu: goto label_230d9c;
        case 0x230da0u: goto label_230da0;
        case 0x230da4u: goto label_230da4;
        case 0x230da8u: goto label_230da8;
        case 0x230dacu: goto label_230dac;
        case 0x230db0u: goto label_230db0;
        case 0x230db4u: goto label_230db4;
        case 0x230db8u: goto label_230db8;
        case 0x230dbcu: goto label_230dbc;
        case 0x230dc0u: goto label_230dc0;
        case 0x230dc4u: goto label_230dc4;
        case 0x230dc8u: goto label_230dc8;
        case 0x230dccu: goto label_230dcc;
        case 0x230dd0u: goto label_230dd0;
        case 0x230dd4u: goto label_230dd4;
        case 0x230dd8u: goto label_230dd8;
        case 0x230ddcu: goto label_230ddc;
        case 0x230de0u: goto label_230de0;
        case 0x230de4u: goto label_230de4;
        case 0x230de8u: goto label_230de8;
        case 0x230decu: goto label_230dec;
        case 0x230df0u: goto label_230df0;
        case 0x230df4u: goto label_230df4;
        case 0x230df8u: goto label_230df8;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e00u: goto label_230e00;
        case 0x230e04u: goto label_230e04;
        case 0x230e08u: goto label_230e08;
        case 0x230e0cu: goto label_230e0c;
        case 0x230e10u: goto label_230e10;
        case 0x230e14u: goto label_230e14;
        case 0x230e18u: goto label_230e18;
        case 0x230e1cu: goto label_230e1c;
        case 0x230e20u: goto label_230e20;
        case 0x230e24u: goto label_230e24;
        case 0x230e28u: goto label_230e28;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e30u: goto label_230e30;
        case 0x230e34u: goto label_230e34;
        case 0x230e38u: goto label_230e38;
        case 0x230e3cu: goto label_230e3c;
        case 0x230e40u: goto label_230e40;
        case 0x230e44u: goto label_230e44;
        case 0x230e48u: goto label_230e48;
        case 0x230e4cu: goto label_230e4c;
        case 0x230e50u: goto label_230e50;
        case 0x230e54u: goto label_230e54;
        case 0x230e58u: goto label_230e58;
        case 0x230e5cu: goto label_230e5c;
        case 0x230e60u: goto label_230e60;
        case 0x230e64u: goto label_230e64;
        case 0x230e68u: goto label_230e68;
        case 0x230e6cu: goto label_230e6c;
        case 0x230e70u: goto label_230e70;
        case 0x230e74u: goto label_230e74;
        case 0x230e78u: goto label_230e78;
        case 0x230e7cu: goto label_230e7c;
        case 0x230e80u: goto label_230e80;
        case 0x230e84u: goto label_230e84;
        case 0x230e88u: goto label_230e88;
        case 0x230e8cu: goto label_230e8c;
        case 0x230e90u: goto label_230e90;
        case 0x230e94u: goto label_230e94;
        case 0x230e98u: goto label_230e98;
        case 0x230e9cu: goto label_230e9c;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ea4u: goto label_230ea4;
        case 0x230ea8u: goto label_230ea8;
        case 0x230eacu: goto label_230eac;
        case 0x230eb0u: goto label_230eb0;
        case 0x230eb4u: goto label_230eb4;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ebcu: goto label_230ebc;
        case 0x230ec0u: goto label_230ec0;
        case 0x230ec4u: goto label_230ec4;
        case 0x230ec8u: goto label_230ec8;
        case 0x230eccu: goto label_230ecc;
        case 0x230ed0u: goto label_230ed0;
        case 0x230ed4u: goto label_230ed4;
        case 0x230ed8u: goto label_230ed8;
        case 0x230edcu: goto label_230edc;
        case 0x230ee0u: goto label_230ee0;
        case 0x230ee4u: goto label_230ee4;
        case 0x230ee8u: goto label_230ee8;
        case 0x230eecu: goto label_230eec;
        case 0x230ef0u: goto label_230ef0;
        case 0x230ef4u: goto label_230ef4;
        case 0x230ef8u: goto label_230ef8;
        case 0x230efcu: goto label_230efc;
        case 0x230f00u: goto label_230f00;
        case 0x230f04u: goto label_230f04;
        case 0x230f08u: goto label_230f08;
        case 0x230f0cu: goto label_230f0c;
        case 0x230f10u: goto label_230f10;
        case 0x230f14u: goto label_230f14;
        case 0x230f18u: goto label_230f18;
        case 0x230f1cu: goto label_230f1c;
        case 0x230f20u: goto label_230f20;
        case 0x230f24u: goto label_230f24;
        case 0x230f28u: goto label_230f28;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f30u: goto label_230f30;
        case 0x230f34u: goto label_230f34;
        case 0x230f38u: goto label_230f38;
        case 0x230f3cu: goto label_230f3c;
        case 0x230f40u: goto label_230f40;
        case 0x230f44u: goto label_230f44;
        case 0x230f48u: goto label_230f48;
        case 0x230f4cu: goto label_230f4c;
        case 0x230f50u: goto label_230f50;
        case 0x230f54u: goto label_230f54;
        case 0x230f58u: goto label_230f58;
        case 0x230f5cu: goto label_230f5c;
        case 0x230f60u: goto label_230f60;
        case 0x230f64u: goto label_230f64;
        case 0x230f68u: goto label_230f68;
        case 0x230f6cu: goto label_230f6c;
        case 0x230f70u: goto label_230f70;
        case 0x230f74u: goto label_230f74;
        case 0x230f78u: goto label_230f78;
        case 0x230f7cu: goto label_230f7c;
        case 0x230f80u: goto label_230f80;
        case 0x230f84u: goto label_230f84;
        case 0x230f88u: goto label_230f88;
        case 0x230f8cu: goto label_230f8c;
        case 0x230f90u: goto label_230f90;
        case 0x230f94u: goto label_230f94;
        case 0x230f98u: goto label_230f98;
        case 0x230f9cu: goto label_230f9c;
        case 0x230fa0u: goto label_230fa0;
        case 0x230fa4u: goto label_230fa4;
        case 0x230fa8u: goto label_230fa8;
        case 0x230facu: goto label_230fac;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fb4u: goto label_230fb4;
        case 0x230fb8u: goto label_230fb8;
        case 0x230fbcu: goto label_230fbc;
        case 0x230fc0u: goto label_230fc0;
        case 0x230fc4u: goto label_230fc4;
        case 0x230fc8u: goto label_230fc8;
        case 0x230fccu: goto label_230fcc;
        case 0x230fd0u: goto label_230fd0;
        case 0x230fd4u: goto label_230fd4;
        case 0x230fd8u: goto label_230fd8;
        case 0x230fdcu: goto label_230fdc;
        case 0x230fe0u: goto label_230fe0;
        case 0x230fe4u: goto label_230fe4;
        case 0x230fe8u: goto label_230fe8;
        case 0x230fecu: goto label_230fec;
        case 0x230ff0u: goto label_230ff0;
        case 0x230ff4u: goto label_230ff4;
        case 0x230ff8u: goto label_230ff8;
        case 0x230ffcu: goto label_230ffc;
        case 0x231000u: goto label_231000;
        case 0x231004u: goto label_231004;
        case 0x231008u: goto label_231008;
        case 0x23100cu: goto label_23100c;
        case 0x231010u: goto label_231010;
        case 0x231014u: goto label_231014;
        case 0x231018u: goto label_231018;
        case 0x23101cu: goto label_23101c;
        case 0x231020u: goto label_231020;
        case 0x231024u: goto label_231024;
        case 0x231028u: goto label_231028;
        case 0x23102cu: goto label_23102c;
        case 0x231030u: goto label_231030;
        case 0x231034u: goto label_231034;
        case 0x231038u: goto label_231038;
        case 0x23103cu: goto label_23103c;
        case 0x231040u: goto label_231040;
        case 0x231044u: goto label_231044;
        case 0x231048u: goto label_231048;
        case 0x23104cu: goto label_23104c;
        case 0x231050u: goto label_231050;
        case 0x231054u: goto label_231054;
        case 0x231058u: goto label_231058;
        case 0x23105cu: goto label_23105c;
        case 0x231060u: goto label_231060;
        case 0x231064u: goto label_231064;
        case 0x231068u: goto label_231068;
        case 0x23106cu: goto label_23106c;
        case 0x231070u: goto label_231070;
        case 0x231074u: goto label_231074;
        case 0x231078u: goto label_231078;
        case 0x23107cu: goto label_23107c;
        case 0x231080u: goto label_231080;
        case 0x231084u: goto label_231084;
        case 0x231088u: goto label_231088;
        case 0x23108cu: goto label_23108c;
        case 0x231090u: goto label_231090;
        case 0x231094u: goto label_231094;
        case 0x231098u: goto label_231098;
        case 0x23109cu: goto label_23109c;
        case 0x2310a0u: goto label_2310a0;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310a8u: goto label_2310a8;
        case 0x2310acu: goto label_2310ac;
        case 0x2310b0u: goto label_2310b0;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310b8u: goto label_2310b8;
        case 0x2310bcu: goto label_2310bc;
        case 0x2310c0u: goto label_2310c0;
        case 0x2310c4u: goto label_2310c4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310ccu: goto label_2310cc;
        case 0x2310d0u: goto label_2310d0;
        case 0x2310d4u: goto label_2310d4;
        case 0x2310d8u: goto label_2310d8;
        case 0x2310dcu: goto label_2310dc;
        case 0x2310e0u: goto label_2310e0;
        case 0x2310e4u: goto label_2310e4;
        case 0x2310e8u: goto label_2310e8;
        case 0x2310ecu: goto label_2310ec;
        case 0x2310f0u: goto label_2310f0;
        case 0x2310f4u: goto label_2310f4;
        case 0x2310f8u: goto label_2310f8;
        case 0x2310fcu: goto label_2310fc;
        case 0x231100u: goto label_231100;
        case 0x231104u: goto label_231104;
        case 0x231108u: goto label_231108;
        case 0x23110cu: goto label_23110c;
        case 0x231110u: goto label_231110;
        case 0x231114u: goto label_231114;
        case 0x231118u: goto label_231118;
        case 0x23111cu: goto label_23111c;
        case 0x231120u: goto label_231120;
        case 0x231124u: goto label_231124;
        case 0x231128u: goto label_231128;
        case 0x23112cu: goto label_23112c;
        case 0x231130u: goto label_231130;
        case 0x231134u: goto label_231134;
        case 0x231138u: goto label_231138;
        case 0x23113cu: goto label_23113c;
        case 0x231140u: goto label_231140;
        case 0x231144u: goto label_231144;
        case 0x231148u: goto label_231148;
        case 0x23114cu: goto label_23114c;
        case 0x231150u: goto label_231150;
        case 0x231154u: goto label_231154;
        case 0x231158u: goto label_231158;
        case 0x23115cu: goto label_23115c;
        case 0x231160u: goto label_231160;
        case 0x231164u: goto label_231164;
        case 0x231168u: goto label_231168;
        case 0x23116cu: goto label_23116c;
        case 0x231170u: goto label_231170;
        case 0x231174u: goto label_231174;
        case 0x231178u: goto label_231178;
        case 0x23117cu: goto label_23117c;
        case 0x231180u: goto label_231180;
        case 0x231184u: goto label_231184;
        case 0x231188u: goto label_231188;
        case 0x23118cu: goto label_23118c;
        case 0x231190u: goto label_231190;
        case 0x231194u: goto label_231194;
        case 0x231198u: goto label_231198;
        case 0x23119cu: goto label_23119c;
        case 0x2311a0u: goto label_2311a0;
        case 0x2311a4u: goto label_2311a4;
        case 0x2311a8u: goto label_2311a8;
        case 0x2311acu: goto label_2311ac;
        case 0x2311b0u: goto label_2311b0;
        case 0x2311b4u: goto label_2311b4;
        case 0x2311b8u: goto label_2311b8;
        case 0x2311bcu: goto label_2311bc;
        case 0x2311c0u: goto label_2311c0;
        case 0x2311c4u: goto label_2311c4;
        case 0x2311c8u: goto label_2311c8;
        case 0x2311ccu: goto label_2311cc;
        case 0x2311d0u: goto label_2311d0;
        case 0x2311d4u: goto label_2311d4;
        case 0x2311d8u: goto label_2311d8;
        case 0x2311dcu: goto label_2311dc;
        case 0x2311e0u: goto label_2311e0;
        case 0x2311e4u: goto label_2311e4;
        case 0x2311e8u: goto label_2311e8;
        case 0x2311ecu: goto label_2311ec;
        case 0x2311f0u: goto label_2311f0;
        case 0x2311f4u: goto label_2311f4;
        case 0x2311f8u: goto label_2311f8;
        case 0x2311fcu: goto label_2311fc;
        case 0x231200u: goto label_231200;
        case 0x231204u: goto label_231204;
        case 0x231208u: goto label_231208;
        case 0x23120cu: goto label_23120c;
        case 0x231210u: goto label_231210;
        case 0x231214u: goto label_231214;
        case 0x231218u: goto label_231218;
        case 0x23121cu: goto label_23121c;
        case 0x231220u: goto label_231220;
        case 0x231224u: goto label_231224;
        case 0x231228u: goto label_231228;
        case 0x23122cu: goto label_23122c;
        case 0x231230u: goto label_231230;
        case 0x231234u: goto label_231234;
        case 0x231238u: goto label_231238;
        case 0x23123cu: goto label_23123c;
        case 0x231240u: goto label_231240;
        case 0x231244u: goto label_231244;
        case 0x231248u: goto label_231248;
        case 0x23124cu: goto label_23124c;
        case 0x231250u: goto label_231250;
        case 0x231254u: goto label_231254;
        case 0x231258u: goto label_231258;
        case 0x23125cu: goto label_23125c;
        case 0x231260u: goto label_231260;
        case 0x231264u: goto label_231264;
        case 0x231268u: goto label_231268;
        case 0x23126cu: goto label_23126c;
        case 0x231270u: goto label_231270;
        case 0x231274u: goto label_231274;
        case 0x231278u: goto label_231278;
        case 0x23127cu: goto label_23127c;
        case 0x231280u: goto label_231280;
        case 0x231284u: goto label_231284;
        case 0x231288u: goto label_231288;
        case 0x23128cu: goto label_23128c;
        case 0x231290u: goto label_231290;
        case 0x231294u: goto label_231294;
        case 0x231298u: goto label_231298;
        case 0x23129cu: goto label_23129c;
        case 0x2312a0u: goto label_2312a0;
        case 0x2312a4u: goto label_2312a4;
        case 0x2312a8u: goto label_2312a8;
        case 0x2312acu: goto label_2312ac;
        case 0x2312b0u: goto label_2312b0;
        case 0x2312b4u: goto label_2312b4;
        case 0x2312b8u: goto label_2312b8;
        case 0x2312bcu: goto label_2312bc;
        case 0x2312c0u: goto label_2312c0;
        case 0x2312c4u: goto label_2312c4;
        case 0x2312c8u: goto label_2312c8;
        case 0x2312ccu: goto label_2312cc;
        case 0x2312d0u: goto label_2312d0;
        case 0x2312d4u: goto label_2312d4;
        case 0x2312d8u: goto label_2312d8;
        case 0x2312dcu: goto label_2312dc;
        case 0x2312e0u: goto label_2312e0;
        case 0x2312e4u: goto label_2312e4;
        case 0x2312e8u: goto label_2312e8;
        case 0x2312ecu: goto label_2312ec;
        case 0x2312f0u: goto label_2312f0;
        case 0x2312f4u: goto label_2312f4;
        case 0x2312f8u: goto label_2312f8;
        case 0x2312fcu: goto label_2312fc;
        case 0x231300u: goto label_231300;
        case 0x231304u: goto label_231304;
        case 0x231308u: goto label_231308;
        case 0x23130cu: goto label_23130c;
        case 0x231310u: goto label_231310;
        case 0x231314u: goto label_231314;
        case 0x231318u: goto label_231318;
        case 0x23131cu: goto label_23131c;
        case 0x231320u: goto label_231320;
        case 0x231324u: goto label_231324;
        case 0x231328u: goto label_231328;
        case 0x23132cu: goto label_23132c;
        case 0x231330u: goto label_231330;
        case 0x231334u: goto label_231334;
        case 0x231338u: goto label_231338;
        case 0x23133cu: goto label_23133c;
        case 0x231340u: goto label_231340;
        case 0x231344u: goto label_231344;
        case 0x231348u: goto label_231348;
        case 0x23134cu: goto label_23134c;
        case 0x231350u: goto label_231350;
        case 0x231354u: goto label_231354;
        case 0x231358u: goto label_231358;
        case 0x23135cu: goto label_23135c;
        case 0x231360u: goto label_231360;
        case 0x231364u: goto label_231364;
        case 0x231368u: goto label_231368;
        case 0x23136cu: goto label_23136c;
        case 0x231370u: goto label_231370;
        case 0x231374u: goto label_231374;
        case 0x231378u: goto label_231378;
        case 0x23137cu: goto label_23137c;
        case 0x231380u: goto label_231380;
        case 0x231384u: goto label_231384;
        case 0x231388u: goto label_231388;
        case 0x23138cu: goto label_23138c;
        case 0x231390u: goto label_231390;
        case 0x231394u: goto label_231394;
        case 0x231398u: goto label_231398;
        case 0x23139cu: goto label_23139c;
        case 0x2313a0u: goto label_2313a0;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313a8u: goto label_2313a8;
        case 0x2313acu: goto label_2313ac;
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        default: return;
    }

label_230c88:
    // 0x230c88: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_230c8c:
    if (ctx->pc == 0x230C8Cu) {
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C90u;
        goto label_230c90;
    }
    ctx->pc = 0x230C88u;
    {
        const bool branch_taken_0x230c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x245204b0  addiu       $s2, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c88) {
            ctx->pc = 0x230CE8u;
            goto label_230ce8;
        }
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_230c94:
    // 0x230c94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_230c98:
    if (ctx->pc == 0x230C98u) {
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230C9Cu;
        goto label_230c9c;
    }
    ctx->pc = 0x230C94u;
    {
        const bool branch_taken_0x230c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C94u;
        // 0x230c98: 0x8f8682d0  lw          $a2, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c94) {
            ctx->pc = 0x230CA8u;
            goto label_230ca8;
        }
    }
    ctx->pc = 0x230C9Cu;
label_230c9c:
    // 0x230c9c: 0x40f809  jalr        $v0
label_230ca0:
    if (ctx->pc == 0x230CA0u) {
        ctx->pc = 0x230CA4u;
        goto label_230ca4;
    }
    ctx->pc = 0x230C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C9Cu, 0x230CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0x8f8682d0  lw          $a2, -0x7D30($gp)
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230ca8:
    // 0x230ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230cac:
    // 0x230cac: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x230cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_230cb0:
    // 0x230cb0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x230cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_230cb4:
    // 0x230cb4: 0x8ce71274  lw          $a3, 0x1274($a3)
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4724)));
label_230cb8:
    // 0x230cb8: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_230cbc:
    // 0x230cbc: 0x34a51158  ori         $a1, $a1, 0x1158
    ctx->pc = 0x230cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4440);
label_230cc0:
    // 0x230cc0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_230cc4:
    // 0x230cc4: 0xc08c358  jal         func_230D60
label_230cc8:
    if (ctx->pc == 0x230CC8u) {
        ctx->pc = 0x230CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CC4u;
        // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CCCu;
        goto label_230ccc;
    }
    ctx->pc = 0x230CC4u;
    SET_GPR_U32(ctx, 31, 0x230CCCu);
    ctx->pc = 0x230CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CC4u;
    // 0x230cc8: 0x24c61100  addiu       $a2, $a2, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D60u;
    goto label_230d60;
    ctx->pc = 0x230CCCu;
label_230ccc:
    // 0x230ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230cd0:
    // 0x230cd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_230cd4:
    // 0x230cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230cd8:
    if (ctx->pc == 0x230CD8u) {
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230CDCu;
        goto label_230cdc;
    }
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230CE4u;
            goto label_230ce4;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0x40f809  jalr        $v0
label_230ce0:
    if (ctx->pc == 0x230CE0u) {
        ctx->pc = 0x230CE4u;
        goto label_230ce4;
    }
    ctx->pc = 0x230CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230CE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230CE4u;
label_230ce4:
    // 0x230ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230ce8:
    // 0x230ce8: 0xc08c62e  jal         func_2318B8
label_230cec:
    if (ctx->pc == 0x230CECu) {
        ctx->pc = 0x230CF0u;
        goto label_230cf0;
    }
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x2318B8u;
    { ctx->pc = 0x2318b8; return; }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230cf4:
    // 0x230cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230cf8:
    // 0x230cf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230cfc:
    // 0x230cfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_230d00:
    // 0x230d00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_230d04:
    // 0x230d04: 0x3e00008  jr          $ra
label_230d08:
    if (ctx->pc == 0x230D08u) {
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D0Cu;
        goto label_230d0c;
    }
    ctx->pc = 0x230D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0x0  nop
    ctx->pc = 0x230d0cu;
    // NOP
label_230d10:
    // 0x230d10: 0x3e00008  jr          $ra
label_230d14:
    if (ctx->pc == 0x230D14u) {
        ctx->pc = 0x230D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D10u;
        // 0x230d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D18u;
        goto label_230d18;
    }
    ctx->pc = 0x230D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D10u;
        // 0x230d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D18u;
label_230d18:
    // 0x230d18: 0x3e00008  jr          $ra
label_230d1c:
    if (ctx->pc == 0x230D1Cu) {
        ctx->pc = 0x230D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D18u;
        // 0x230d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D20u;
        goto label_230d20;
    }
    ctx->pc = 0x230D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D18u;
        // 0x230d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D20u;
label_230d20:
    // 0x230d20: 0x3e00008  jr          $ra
label_230d24:
    if (ctx->pc == 0x230D24u) {
        ctx->pc = 0x230D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D20u;
        // 0x230d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D28u;
        goto label_230d28;
    }
    ctx->pc = 0x230D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D20u;
        // 0x230d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D28u;
label_230d28:
    // 0x230d28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x230d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_230d2c:
    // 0x230d2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_230d30:
    // 0x230d30: 0x8c4204e0  lw          $v0, 0x4E0($v0)
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
label_230d34:
    // 0x230d34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230d38:
    if (ctx->pc == 0x230D38u) {
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D3Cu;
        goto label_230d3c;
    }
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D4Cu;
            goto label_230d4c;
        }
    }
    ctx->pc = 0x230D3Cu;
label_230d3c:
    // 0x230d3c: 0x40f809  jalr        $v0
label_230d40:
    if (ctx->pc == 0x230D40u) {
        ctx->pc = 0x230D44u;
        goto label_230d44;
    }
    ctx->pc = 0x230D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D3Cu, 0x230D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230D44u;
label_230d44:
    // 0x230d44: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_230d48:
    if (ctx->pc == 0x230D48u) {
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D4Cu;
        goto label_230d4c;
    }
    ctx->pc = 0x230D44u;
    {
        const bool branch_taken_0x230d44 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x230D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D44u;
        // 0x230d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d44) {
            ctx->pc = 0x230D54u;
            goto label_230d54;
        }
    }
    ctx->pc = 0x230D4Cu;
label_230d4c:
    // 0x230d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d50:
    // 0x230d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230d54:
    // 0x230d54: 0x3e00008  jr          $ra
label_230d58:
    if (ctx->pc == 0x230D58u) {
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230D5Cu;
        goto label_230d5c;
    }
    ctx->pc = 0x230D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D54u;
        // 0x230d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230D5Cu;
label_230d5c:
    // 0x230d5c: 0x0  nop
    ctx->pc = 0x230d5cu;
    // NOP
label_230d60:
    // 0x230d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230d64:
    // 0x230d64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_230d68:
    // 0x230d68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x230d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_230d6c:
    // 0x230d6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x230d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_230d70:
    // 0x230d70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x230d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_230d74:
    // 0x230d74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x230d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_230d78:
    // 0x230d78: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x230d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230d7c:
    // 0x230d7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x230d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_230d80:
    // 0x230d80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x230d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230d84:
    // 0x230d84: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x230d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_230d88:
    // 0x230d88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d8c:
    // 0x230d8c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x230d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_230d90:
    // 0x230d90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x230d90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230d94:
    // 0x230d94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x230d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_230d98:
    // 0x230d98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x230d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_230d9c:
    // 0x230d9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x230d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_230da0:
    // 0x230da0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x230da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_230da4:
    // 0x230da4: 0x10000085  b           . + 4 + (0x85 << 2)
label_230da8:
    if (ctx->pc == 0x230DA8u) {
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x2a560005  slti        $s6, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DACu;
        goto label_230dac;
    }
    ctx->pc = 0x230DA4u;
    {
        const bool branch_taken_0x230da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x2a560005  slti        $s6, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230da4) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230DACu;
label_230dac:
    // 0x230dac: 0x0  nop
    ctx->pc = 0x230dacu;
    // NOP
label_230db0:
    // 0x230db0: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
label_230db4:
    if (ctx->pc == 0x230DB4u) {
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DB8u;
        goto label_230db8;
    }
    ctx->pc = 0x230DB0u;
    {
        const bool branch_taken_0x230db0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db0) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DB8u;
label_230db8:
    // 0x230db8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_230dbc:
    if (ctx->pc == 0x230DBCu) {
        ctx->pc = 0x230DC0u;
        goto label_230dc0;
    }
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DC0u;
label_230dc0:
    // 0x230dc0: 0xc08c34a  jal         func_230D28
label_230dc4:
    if (ctx->pc == 0x230DC4u) {
        ctx->pc = 0x230DC8u;
        goto label_230dc8;
    }
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x230D28u;
    goto label_230d28;
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230dcc:
    // 0x230dcc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_230dd0:
    if (ctx->pc == 0x230DD0u) {
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DD4u;
        goto label_230dd4;
    }
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DD4u;
label_230dd4:
    // 0x230dd4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230dd8:
    // 0x230dd8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230ddc:
    // 0x230ddc: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_230de0:
    // 0x230de0: 0xc08cd30  jal         func_2334C0
label_230de4:
    if (ctx->pc == 0x230DE4u) {
        ctx->pc = 0x230DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DE0u;
        // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DE8u;
        goto label_230de8;
    }
    ctx->pc = 0x230DE0u;
    SET_GPR_U32(ctx, 31, 0x230DE8u);
    ctx->pc = 0x230DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE0u;
    // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    { ctx->pc = 0x2334c0; return; }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0x1000008f  b           . + 4 + (0x8F << 2)
label_230dec:
    if (ctx->pc == 0x230DECu) {
        ctx->pc = 0x230DF0u;
        goto label_230df0;
    }
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230de8) {
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0xc08c768  jal         func_231DA0
label_230df4:
    if (ctx->pc == 0x230DF4u) {
        ctx->pc = 0x230DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF0u;
        // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230DF8u;
        goto label_230df8;
    }
    ctx->pc = 0x230DF0u;
    SET_GPR_U32(ctx, 31, 0x230DF8u);
    ctx->pc = 0x230DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF0u;
    // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DA0u;
    { ctx->pc = 0x231da0; return; }
    ctx->pc = 0x230DF8u;
label_230df8:
    // 0x230df8: 0x1a600042  blez        $s3, . + 4 + (0x42 << 2)
label_230dfc:
    if (ctx->pc == 0x230DFCu) {
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E00u;
        goto label_230e00;
    }
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230F04u;
            goto label_230f04;
        }
    }
    ctx->pc = 0x230E00u;
label_230e00:
    // 0x230e00: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_230e04:
    // 0x230e04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_230e08:
    // 0x230e08: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_230e0c:
    if (ctx->pc == 0x230E0Cu) {
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E10u;
        goto label_230e10;
    }
    ctx->pc = 0x230E08u;
    {
        const bool branch_taken_0x230e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e08) {
            ctx->pc = 0x230F04u;
            goto label_230f04;
        }
    }
    ctx->pc = 0x230E10u;
label_230e10:
    // 0x230e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e14:
    // 0x230e14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_230e18:
    if (ctx->pc == 0x230E18u) {
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E1Cu;
        goto label_230e1c;
    }
    ctx->pc = 0x230E14u;
    {
        const bool branch_taken_0x230e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e14) {
            ctx->pc = 0x230E38u;
            goto label_230e38;
        }
    }
    ctx->pc = 0x230E1Cu;
label_230e1c:
    // 0x230e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e20:
    // 0x230e20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230e24:
    // 0x230e24: 0xc08dac2  jal         func_236B08
label_230e28:
    if (ctx->pc == 0x230E28u) {
        ctx->pc = 0x230E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E24u;
        // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E2Cu;
        goto label_230e2c;
    }
    ctx->pc = 0x230E24u;
    SET_GPR_U32(ctx, 31, 0x230E2Cu);
    ctx->pc = 0x230E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E24u;
    // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B08u;
    { ctx->pc = 0x236b08; return; }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x10000030  b           . + 4 + (0x30 << 2)
label_230e30:
    if (ctx->pc == 0x230E30u) {
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E34u;
        goto label_230e34;
    }
    ctx->pc = 0x230E2Cu;
    {
        const bool branch_taken_0x230e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e2c) {
            ctx->pc = 0x230EF0u;
            goto label_230ef0;
        }
    }
    ctx->pc = 0x230E34u;
label_230e34:
    // 0x230e34: 0x0  nop
    ctx->pc = 0x230e34u;
    // NOP
label_230e38:
    // 0x230e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e3c:
    // 0x230e3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230e40:
    // 0x230e40: 0xc06c2f0  jal         func_1B0BC0
label_230e44:
    if (ctx->pc == 0x230E44u) {
        ctx->pc = 0x230E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E40u;
        // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E48u;
        goto label_230e48;
    }
    ctx->pc = 0x230E40u;
    SET_GPR_U32(ctx, 31, 0x230E48u);
    ctx->pc = 0x230E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E40u;
    // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0BC0u;
    { ctx->pc = 0x1b0bc0; return; }
    ctx->pc = 0x230E48u;
label_230e48:
    // 0x230e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e4c:
    // 0x230e4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_230e50:
    // 0x230e50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_230e54:
    if (ctx->pc == 0x230E54u) {
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E58u;
        goto label_230e58;
    }
    ctx->pc = 0x230E50u;
    {
        const bool branch_taken_0x230e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e50) {
            ctx->pc = 0x230ED4u;
            goto label_230ed4;
        }
    }
    ctx->pc = 0x230E58u;
label_230e58:
    // 0x230e58: 0xc06c2e2  jal         func_1B0B88
label_230e5c:
    if (ctx->pc == 0x230E5Cu) {
        ctx->pc = 0x230E60u;
        goto label_230e60;
    }
    ctx->pc = 0x230E58u;
    SET_GPR_U32(ctx, 31, 0x230E60u);
    ctx->pc = 0x1B0B88u;
    { ctx->pc = 0x1b0b88; return; }
    ctx->pc = 0x230E60u;
label_230e60:
    // 0x230e60: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
label_230e64:
    if (ctx->pc == 0x230E64u) {
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E68u;
        goto label_230e68;
    }
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e58;
        }
    }
    ctx->pc = 0x230E68u;
label_230e68:
    // 0x230e68: 0x1000000b  b           . + 4 + (0xB << 2)
label_230e6c:
    if (ctx->pc == 0x230E6Cu) {
        ctx->pc = 0x230E70u;
        goto label_230e70;
    }
    ctx->pc = 0x230E68u;
    {
        const bool branch_taken_0x230e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e68) {
            ctx->pc = 0x230E98u;
            goto label_230e98;
        }
    }
    ctx->pc = 0x230E70u;
label_230e70:
    // 0x230e70: 0xc08c34a  jal         func_230D28
label_230e74:
    if (ctx->pc == 0x230E74u) {
        ctx->pc = 0x230E78u;
        goto label_230e78;
    }
    ctx->pc = 0x230E70u;
    SET_GPR_U32(ctx, 31, 0x230E78u);
    ctx->pc = 0x230D28u;
    goto label_230d28;
    ctx->pc = 0x230E78u;
label_230e78:
    // 0x230e78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e7c:
    // 0x230e7c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_230e80:
    if (ctx->pc == 0x230E80u) {
        ctx->pc = 0x230E84u;
        goto label_230e84;
    }
    ctx->pc = 0x230E7Cu;
    {
        const bool branch_taken_0x230e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e7c) {
            ctx->pc = 0x230E98u;
            goto label_230e98;
        }
    }
    ctx->pc = 0x230E84u;
label_230e84:
    // 0x230e84: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230e88:
    // 0x230e88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230e8c:
    // 0x230e8c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_230e90:
    // 0x230e90: 0xc08cd30  jal         func_2334C0
label_230e94:
    if (ctx->pc == 0x230E94u) {
        ctx->pc = 0x230E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E90u;
        // 0x230e94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E98u;
        goto label_230e98;
    }
    ctx->pc = 0x230E90u;
    SET_GPR_U32(ctx, 31, 0x230E98u);
    ctx->pc = 0x230E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E90u;
    // 0x230e94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    { ctx->pc = 0x2334c0; return; }
    ctx->pc = 0x230E98u;
label_230e98:
    // 0x230e98: 0xc06c03a  jal         func_1B00E8
label_230e9c:
    if (ctx->pc == 0x230E9Cu) {
        ctx->pc = 0x230E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E98u;
        // 0x230e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EA0u;
        goto label_230ea0;
    }
    ctx->pc = 0x230E98u;
    SET_GPR_U32(ctx, 31, 0x230EA0u);
    ctx->pc = 0x230E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E98u;
    // 0x230e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    { ctx->pc = 0x1b00e8; return; }
    ctx->pc = 0x230EA0u;
label_230ea0:
    // 0x230ea0: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
label_230ea4:
    if (ctx->pc == 0x230EA4u) {
        ctx->pc = 0x230EA8u;
        goto label_230ea8;
    }
    ctx->pc = 0x230EA0u;
    {
        const bool branch_taken_0x230ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x230ea0) {
            ctx->pc = 0x230E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e70;
        }
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230eac:
    // 0x230eac: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_230eb0:
    // 0x230eb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_230eb4:
    // 0x230eb4: 0x8c84128c  lw          $a0, 0x128C($a0)
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
label_230eb8:
    // 0x230eb8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230ebc:
    // 0x230ebc: 0x34211284  ori         $at, $at, 0x1284
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4740);
label_230ec0:
    // 0x230ec0: 0xc06c2bc  jal         func_1B0AF0
label_230ec4:
    if (ctx->pc == 0x230EC4u) {
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC0u;
        // 0x230ec4: 0x252821  addu        $a1, $at, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EC8u;
        goto label_230ec8;
    }
    ctx->pc = 0x230EC0u;
    SET_GPR_U32(ctx, 31, 0x230EC8u);
    ctx->pc = 0x230EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EC0u;
    // 0x230ec4: 0x252821  addu        $a1, $at, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    { ctx->pc = 0x1b0af0; return; }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_230ecc:
    if (ctx->pc == 0x230ECCu) {
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC8u;
        // 0x230ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230ED0u;
        goto label_230ed0;
    }
    ctx->pc = 0x230EC8u;
    {
        const bool branch_taken_0x230ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC8u;
        // 0x230ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec8) {
            ctx->pc = 0x230EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230ea8;
        }
    }
    ctx->pc = 0x230ED0u;
label_230ed0:
    // 0x230ed0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230ed4:
    // 0x230ed4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_230ed8:
    // 0x230ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_230edc:
    // 0x230edc: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
label_230ee0:
    // 0x230ee0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_230ee4:
    // 0x230ee4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230ee8:
    // 0x230ee8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_230eec:
    // 0x230eec: 0xac22128c  sw          $v0, 0x128C($at)
    ctx->pc = 0x230eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4748), GPR_U32(ctx, 2));
label_230ef0:
    // 0x230ef0: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x230ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_230ef4:
    // 0x230ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230ef8:
    // 0x230ef8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x230ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_230efc:
    // 0x230efc: 0xc08c778  jal         func_231DE0
label_230f00:
    if (ctx->pc == 0x230F00u) {
        ctx->pc = 0x230F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EFCu;
        // 0x230f00: 0x2669823  subu        $s3, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F04u;
        goto label_230f04;
    }
    ctx->pc = 0x230EFCu;
    SET_GPR_U32(ctx, 31, 0x230F04u);
    ctx->pc = 0x230F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EFCu;
    // 0x230f00: 0x2669823  subu        $s3, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DE0u;
    { ctx->pc = 0x231de0; return; }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0xc08c42e  jal         func_2310B8
label_230f08:
    if (ctx->pc == 0x230F08u) {
        ctx->pc = 0x230F0Cu;
        goto label_230f0c;
    }
    ctx->pc = 0x230F04u;
    SET_GPR_U32(ctx, 31, 0x230F0Cu);
    ctx->pc = 0x2310B8u;
    goto label_2310b8;
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230f10:
    // 0x230f10: 0xc08c792  jal         func_231E48
label_230f14:
    if (ctx->pc == 0x230F14u) {
        ctx->pc = 0x230F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F10u;
        // 0x230f14: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F18u;
        goto label_230f18;
    }
    ctx->pc = 0x230F10u;
    SET_GPR_U32(ctx, 31, 0x230F18u);
    ctx->pc = 0x230F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F10u;
    // 0x230f14: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E48u;
    { ctx->pc = 0x231e48; return; }
    ctx->pc = 0x230F18u;
label_230f18:
    // 0x230f18: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_230f1c:
    if (ctx->pc == 0x230F1Cu) {
        ctx->pc = 0x230F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F18u;
        // 0x230f1c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F20u;
        goto label_230f20;
    }
    ctx->pc = 0x230F18u;
    {
        const bool branch_taken_0x230f18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x230f18) {
            ctx->pc = 0x230F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F18u;
            // 0x230f1c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F58u;
            goto label_230f58;
        }
    }
    ctx->pc = 0x230F20u;
label_230f20:
    // 0x230f20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_230f24:
    // 0x230f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230f28:
    // 0x230f28: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x230f28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
label_230f2c:
    // 0x230f2c: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
label_230f30:
    // 0x230f30: 0x8d088008  lw          $t0, -0x7FF8($t0)
    ctx->pc = 0x230f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934536)));
label_230f34:
    // 0x230f34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230f38:
    // 0x230f38: 0xc0686fa  jal         func_1A1BE8
label_230f3c:
    if (ctx->pc == 0x230F3Cu) {
        ctx->pc = 0x230F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F38u;
        // 0x230f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F40u;
        goto label_230f40;
    }
    ctx->pc = 0x230F38u;
    SET_GPR_U32(ctx, 31, 0x230F40u);
    ctx->pc = 0x230F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F38u;
    // 0x230f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    { ctx->pc = 0x1a1be8; return; }
    ctx->pc = 0x230F40u;
label_230f40:
    // 0x230f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230f44:
    // 0x230f44: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_230f48:
    // 0x230f48: 0xc08c7aa  jal         func_231EA8
label_230f4c:
    if (ctx->pc == 0x230F4Cu) {
        ctx->pc = 0x230F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F48u;
        // 0x230f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F50u;
        goto label_230f50;
    }
    ctx->pc = 0x230F48u;
    SET_GPR_U32(ctx, 31, 0x230F50u);
    ctx->pc = 0x230F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F48u;
    // 0x230f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231EA8u;
    { ctx->pc = 0x231ea8; return; }
    ctx->pc = 0x230F50u;
label_230f50:
    // 0x230f50: 0x2a560005  slti        $s6, $s2, 0x5
    ctx->pc = 0x230f50u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_230f54:
    // 0x230f54: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230f58:
    // 0x230f58: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230f5c:
    // 0x230f5c: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_230f60:
    // 0x230f60: 0xc08c86e  jal         func_2321B8
label_230f64:
    if (ctx->pc == 0x230F64u) {
        ctx->pc = 0x230F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F60u;
        // 0x230f64: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F68u;
        goto label_230f68;
    }
    ctx->pc = 0x230F60u;
    SET_GPR_U32(ctx, 31, 0x230F68u);
    ctx->pc = 0x230F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F60u;
    // 0x230f64: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2321B8u;
    { ctx->pc = 0x2321b8; return; }
    ctx->pc = 0x230F68u;
label_230f68:
    // 0x230f68: 0x16e00014  bnez        $s7, . + 4 + (0x14 << 2)
label_230f6c:
    if (ctx->pc == 0x230F6Cu) {
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F70u;
        goto label_230f70;
    }
    ctx->pc = 0x230F68u;
    {
        const bool branch_taken_0x230f68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f68) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230F70u;
label_230f70:
    // 0x230f70: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230f74:
    // 0x230f74: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_230f78:
    // 0x230f78: 0xc08c864  jal         func_232190
label_230f7c:
    if (ctx->pc == 0x230F7Cu) {
        ctx->pc = 0x230F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F78u;
        // 0x230f7c: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F80u;
        goto label_230f80;
    }
    ctx->pc = 0x230F78u;
    SET_GPR_U32(ctx, 31, 0x230F80u);
    ctx->pc = 0x230F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F78u;
    // 0x230f7c: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232190u;
    { ctx->pc = 0x232190; return; }
    ctx->pc = 0x230F80u;
label_230f80:
    // 0x230f80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_230f84:
    if (ctx->pc == 0x230F84u) {
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F88u;
        goto label_230f88;
    }
    ctx->pc = 0x230F80u;
    {
        const bool branch_taken_0x230f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f80) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230F88u;
label_230f88:
    // 0x230f88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230f8c:
    // 0x230f8c: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x230f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_230f90:
    // 0x230f90: 0xc08cf6c  jal         func_233DB0
label_230f94:
    if (ctx->pc == 0x230F94u) {
        ctx->pc = 0x230F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F90u;
        // 0x230f94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F98u;
        goto label_230f98;
    }
    ctx->pc = 0x230F90u;
    SET_GPR_U32(ctx, 31, 0x230F98u);
    ctx->pc = 0x230F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F90u;
    // 0x230f94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    { ctx->pc = 0x233db0; return; }
    ctx->pc = 0x230F98u;
label_230f98:
    // 0x230f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_230f9c:
    if (ctx->pc == 0x230F9Cu) {
        ctx->pc = 0x230F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F98u;
        // 0x230f9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FA0u;
        goto label_230fa0;
    }
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F98u;
        // 0x230f9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230FA0u;
label_230fa0:
    // 0x230fa0: 0xc08d0d4  jal         func_234350
label_230fa4:
    if (ctx->pc == 0x230FA4u) {
        ctx->pc = 0x230FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA0u;
        // 0x230fa4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FA8u;
        goto label_230fa8;
    }
    ctx->pc = 0x230FA0u;
    SET_GPR_U32(ctx, 31, 0x230FA8u);
    ctx->pc = 0x230FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA0u;
    // 0x230fa4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234350u;
    { ctx->pc = 0x234350; return; }
    ctx->pc = 0x230FA8u;
label_230fa8:
    // 0x230fa8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230fac:
    // 0x230fac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_230fb0:
    // 0x230fb0: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_230fb4:
    // 0x230fb4: 0xc08c7c6  jal         func_231F18
label_230fb8:
    if (ctx->pc == 0x230FB8u) {
        ctx->pc = 0x230FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FB4u;
        // 0x230fb8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FBCu;
        goto label_230fbc;
    }
    ctx->pc = 0x230FB4u;
    SET_GPR_U32(ctx, 31, 0x230FBCu);
    ctx->pc = 0x230FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FB4u;
    // 0x230fb8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F18u;
    { ctx->pc = 0x231f18; return; }
    ctx->pc = 0x230FBCu;
label_230fbc:
    // 0x230fbc: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
label_230fc0:
    if (ctx->pc == 0x230FC0u) {
        ctx->pc = 0x230FC4u;
        goto label_230fc4;
    }
    ctx->pc = 0x230FBCu;
    {
        const bool branch_taken_0x230fbc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x230fbc) {
            ctx->pc = 0x230FE8u;
            goto label_230fe8;
        }
    }
    ctx->pc = 0x230FC4u;
label_230fc4:
    // 0x230fc4: 0xc08cd34  jal         func_2334D0
label_230fc8:
    if (ctx->pc == 0x230FC8u) {
        ctx->pc = 0x230FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC4u;
        // 0x230fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FCCu;
        goto label_230fcc;
    }
    ctx->pc = 0x230FC4u;
    SET_GPR_U32(ctx, 31, 0x230FCCu);
    ctx->pc = 0x230FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FC4u;
    // 0x230fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    { ctx->pc = 0x2334d0; return; }
    ctx->pc = 0x230FCCu;
label_230fcc:
    // 0x230fcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_230fd0:
    // 0x230fd0: 0x1443ff77  bne         $v0, $v1, . + 4 + (-0x89 << 2)
label_230fd4:
    if (ctx->pc == 0x230FD4u) {
        ctx->pc = 0x230FD8u;
        goto label_230fd8;
    }
    ctx->pc = 0x230FD0u;
    {
        const bool branch_taken_0x230fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230fd0) {
            ctx->pc = 0x230DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230db0;
        }
    }
    ctx->pc = 0x230FD8u;
label_230fd8:
    // 0x230fd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_230fdc:
    if (ctx->pc == 0x230FDCu) {
        ctx->pc = 0x230FE0u;
        goto label_230fe0;
    }
    ctx->pc = 0x230FD8u;
    {
        const bool branch_taken_0x230fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fd8) {
            ctx->pc = 0x230FE8u;
            goto label_230fe8;
        }
    }
    ctx->pc = 0x230FE0u;
label_230fe0:
    // 0x230fe0: 0xc08c42e  jal         func_2310B8
label_230fe4:
    if (ctx->pc == 0x230FE4u) {
        ctx->pc = 0x230FE8u;
        goto label_230fe8;
    }
    ctx->pc = 0x230FE0u;
    SET_GPR_U32(ctx, 31, 0x230FE8u);
    ctx->pc = 0x2310B8u;
    goto label_2310b8;
    ctx->pc = 0x230FE8u;
label_230fe8:
    // 0x230fe8: 0xc08cd5c  jal         func_233570
label_230fec:
    if (ctx->pc == 0x230FECu) {
        ctx->pc = 0x230FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE8u;
        // 0x230fec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FF0u;
        goto label_230ff0;
    }
    ctx->pc = 0x230FE8u;
    SET_GPR_U32(ctx, 31, 0x230FF0u);
    ctx->pc = 0x230FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FE8u;
    // 0x230fec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233570u;
    { ctx->pc = 0x233570; return; }
    ctx->pc = 0x230FF0u;
label_230ff0:
    // 0x230ff0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_230ff4:
    if (ctx->pc == 0x230FF4u) {
        ctx->pc = 0x230FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF0u;
        // 0x230ff4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FF8u;
        goto label_230ff8;
    }
    ctx->pc = 0x230FF0u;
    {
        const bool branch_taken_0x230ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF0u;
        // 0x230ff4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff0) {
            ctx->pc = 0x230FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230fe0;
        }
    }
    ctx->pc = 0x230FF8u;
label_230ff8:
    // 0x230ff8: 0x10000003  b           . + 4 + (0x3 << 2)
label_230ffc:
    if (ctx->pc == 0x230FFCu) {
        ctx->pc = 0x231000u;
        goto label_231000;
    }
    ctx->pc = 0x230FF8u;
    {
        const bool branch_taken_0x230ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ff8) {
            ctx->pc = 0x231008u;
            goto label_231008;
        }
    }
    ctx->pc = 0x231000u;
label_231000:
    // 0x231000: 0xc08c42e  jal         func_2310B8
label_231004:
    if (ctx->pc == 0x231004u) {
        ctx->pc = 0x231008u;
        goto label_231008;
    }
    ctx->pc = 0x231000u;
    SET_GPR_U32(ctx, 31, 0x231008u);
    ctx->pc = 0x2310B8u;
    goto label_2310b8;
    ctx->pc = 0x231008u;
label_231008:
    // 0x231008: 0xc08cd90  jal         func_233640
label_23100c:
    if (ctx->pc == 0x23100Cu) {
        ctx->pc = 0x23100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231008u;
        // 0x23100c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231010u;
        goto label_231010;
    }
    ctx->pc = 0x231008u;
    SET_GPR_U32(ctx, 31, 0x231010u);
    ctx->pc = 0x23100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231008u;
    // 0x23100c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233640u;
    { ctx->pc = 0x233640; return; }
    ctx->pc = 0x231010u;
label_231010:
    // 0x231010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_231014:
    if (ctx->pc == 0x231014u) {
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231010u;
        // 0x231014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231018u;
        goto label_231018;
    }
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231010u;
        // 0x231014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231010) {
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x231018u;
label_231018:
    // 0x231018: 0xc08cd34  jal         func_2334D0
label_23101c:
    if (ctx->pc == 0x23101Cu) {
        ctx->pc = 0x231020u;
        goto label_231020;
    }
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x2334D0u;
    { ctx->pc = 0x2334d0; return; }
    ctx->pc = 0x231020u;
label_231020:
    // 0x231020: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
label_231024:
    if (ctx->pc == 0x231024u) {
        ctx->pc = 0x231028u;
        goto label_231028;
    }
    ctx->pc = 0x231020u;
    {
        const bool branch_taken_0x231020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x231020) {
            ctx->pc = 0x231000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231000;
        }
    }
    ctx->pc = 0x231028u;
label_231028:
    // 0x231028: 0xc08db50  jal         func_236D40
label_23102c:
    if (ctx->pc == 0x23102Cu) {
        ctx->pc = 0x23102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231028u;
        // 0x23102c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231030u;
        goto label_231030;
    }
    ctx->pc = 0x231028u;
    SET_GPR_U32(ctx, 31, 0x231030u);
    ctx->pc = 0x23102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231028u;
    // 0x23102c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    { ctx->pc = 0x236d40; return; }
    ctx->pc = 0x231030u;
label_231030:
    // 0x231030: 0xc08d7f6  jal         func_235FD8
label_231034:
    if (ctx->pc == 0x231034u) {
        ctx->pc = 0x231034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231030u;
        // 0x231034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231038u;
        goto label_231038;
    }
    ctx->pc = 0x231030u;
    SET_GPR_U32(ctx, 31, 0x231038u);
    ctx->pc = 0x231034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231030u;
    // 0x231034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    { ctx->pc = 0x235fd8; return; }
    ctx->pc = 0x231038u;
label_231038:
    // 0x231038: 0xc08d0e8  jal         func_2343A0
label_23103c:
    if (ctx->pc == 0x23103Cu) {
        ctx->pc = 0x231040u;
        goto label_231040;
    }
    ctx->pc = 0x231038u;
    SET_GPR_U32(ctx, 31, 0x231040u);
    ctx->pc = 0x2343A0u;
    { ctx->pc = 0x2343a0; return; }
    ctx->pc = 0x231040u;
label_231040:
    // 0x231040: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231044:
    // 0x231044: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231048:
    // 0x231048: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_23104c:
    // 0x23104c: 0xc08c7d8  jal         func_231F60
label_231050:
    if (ctx->pc == 0x231050u) {
        ctx->pc = 0x231050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23104Cu;
        // 0x231050: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231054u;
        goto label_231054;
    }
    ctx->pc = 0x23104Cu;
    SET_GPR_U32(ctx, 31, 0x231054u);
    ctx->pc = 0x231050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23104Cu;
    // 0x231050: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F60u;
    { ctx->pc = 0x231f60; return; }
    ctx->pc = 0x231054u;
label_231054:
    // 0x231054: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231058:
    // 0x231058: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_23105c:
    // 0x23105c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231060:
    // 0x231060: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x231060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
label_231064:
    // 0x231064: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_231068:
    if (ctx->pc == 0x231068u) {
        ctx->pc = 0x231068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231064u;
        // 0x231068: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23106Cu;
        goto label_23106c;
    }
    ctx->pc = 0x231064u;
    {
        const bool branch_taken_0x231064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231064u;
        // 0x231068: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231064) {
            ctx->pc = 0x231070u;
            goto label_231070;
        }
    }
    ctx->pc = 0x23106Cu;
label_23106c:
    // 0x23106c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23106cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_231070:
    // 0x231070: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x231070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_231074:
    // 0x231074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_231078:
    if (ctx->pc == 0x231078u) {
        ctx->pc = 0x231078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231074u;
        // 0x231078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23107Cu;
        goto label_23107c;
    }
    ctx->pc = 0x231074u;
    {
        const bool branch_taken_0x231074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231074u;
        // 0x231078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231074) {
            ctx->pc = 0x231088u;
            goto label_231088;
        }
    }
    ctx->pc = 0x23107Cu;
label_23107c:
    // 0x23107c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_231080:
    // 0x231080: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231084:
    // 0x231084: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x231084u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_231088:
    // 0x231088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x231088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23108c:
    // 0x23108c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23108cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_231090:
    // 0x231090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231094:
    // 0x231094: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_231098:
    // 0x231098: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23109c:
    // 0x23109c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23109cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2310a0:
    // 0x2310a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2310a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2310a4:
    // 0x2310a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2310a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2310a8:
    // 0x2310a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2310a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2310ac:
    // 0x2310ac: 0x3e00008  jr          $ra
label_2310b0:
    if (ctx->pc == 0x2310B0u) {
        ctx->pc = 0x2310B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310ACu;
        // 0x2310b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310B4u;
        goto label_2310b4;
    }
    ctx->pc = 0x2310ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2310B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310ACu;
        // 0x2310b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2310B4u;
label_2310b4:
    // 0x2310b4: 0x0  nop
    ctx->pc = 0x2310b4u;
    // NOP
label_2310b8:
    // 0x2310b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2310bc:
    // 0x2310bc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2310bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2310c0:
    // 0x2310c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2310c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2310c4:
    // 0x2310c4: 0x904404ce  lbu         $a0, 0x4CE($v0)
    ctx->pc = 0x2310c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1230)));
label_2310c8:
    // 0x2310c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2310c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2310cc:
    // 0x2310cc: 0x80691b4  j           func_1A46D0
label_2310d0:
    if (ctx->pc == 0x2310D0u) {
        ctx->pc = 0x2310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310CCu;
        // 0x2310d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310D4u;
        goto label_2310d4;
    }
    ctx->pc = 0x2310CCu;
    ctx->pc = 0x2310D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310CCu;
    // 0x2310d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46D0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a46d0; return; }
    ctx->pc = 0x2310D4u;
label_2310d4:
    // 0x2310d4: 0x0  nop
    ctx->pc = 0x2310d4u;
    // NOP
label_2310d8:
    // 0x2310d8: 0x8f8382d8  lw          $v1, -0x7D28($gp)
    ctx->pc = 0x2310d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
label_2310dc:
    // 0x2310dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2310e0:
    // 0x2310e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2310e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2310e4:
    // 0x2310e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2310e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2310e8:
    // 0x2310e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2310ec:
    if (ctx->pc == 0x2310ECu) {
        ctx->pc = 0x2310ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310E8u;
        // 0x2310ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310F0u;
        goto label_2310f0;
    }
    ctx->pc = 0x2310E8u;
    {
        const bool branch_taken_0x2310e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2310ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310E8u;
        // 0x2310ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310e8) {
            ctx->pc = 0x231110u;
            goto label_231110;
        }
    }
    ctx->pc = 0x2310F0u;
label_2310f0:
    // 0x2310f0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2310f4:
    // 0x2310f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2310f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2310f8:
    // 0x2310f8: 0x904404cd  lbu         $a0, 0x4CD($v0)
    ctx->pc = 0x2310f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1229)));
label_2310fc:
    // 0x2310fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2310fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_231100:
    // 0x231100: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x231100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_231104:
    // 0x231104: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x231104u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_231108:
    // 0x231108: 0x808daf0  j           func_236BC0
label_23110c:
    if (ctx->pc == 0x23110Cu) {
        ctx->pc = 0x23110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231108u;
        // 0x23110c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231110u;
        goto label_231110;
    }
    ctx->pc = 0x231108u;
    ctx->pc = 0x23110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231108u;
    // 0x23110c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    { ctx->pc = 0x236bc0; return; }
    ctx->pc = 0x231110u;
label_231110:
    // 0x231110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_231114:
    // 0x231114: 0x3e00008  jr          $ra
label_231118:
    if (ctx->pc == 0x231118u) {
        ctx->pc = 0x231118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231114u;
        // 0x231118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23111Cu;
        goto label_23111c;
    }
    ctx->pc = 0x231114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231114u;
        // 0x231118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23111Cu;
label_23111c:
    // 0x23111c: 0x0  nop
    ctx->pc = 0x23111cu;
    // NOP
label_231120:
    // 0x231120: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x231120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_231124:
    // 0x231124: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x231124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_231128:
    // 0x231128: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x231128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_23112c:
    // 0x23112c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23112cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231130:
    // 0x231130: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x231130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_231134:
    // 0x231134: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231138:
    // 0x231138: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x231138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_23113c:
    // 0x23113c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23113cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231140:
    // 0x231140: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x231140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_231144:
    // 0x231144: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x231144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_231148:
    // 0x231148: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x231148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_23114c:
    // 0x23114c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x23114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_231150:
    // 0x231150: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x231150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_231154:
    // 0x231154: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x231154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_231158:
    // 0x231158: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x231158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_23115c:
    // 0x23115c: 0xaf8082d4  sw          $zero, -0x7D2C($gp)
    ctx->pc = 0x23115cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 0));
label_231160:
    // 0x231160: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_231164:
    if (ctx->pc == 0x231164u) {
        ctx->pc = 0x231164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231160u;
        // 0x231164: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231168u;
        goto label_231168;
    }
    ctx->pc = 0x231160u;
    {
        const bool branch_taken_0x231160 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231160u;
        // 0x231164: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231160) {
            ctx->pc = 0x231188u;
            goto label_231188;
        }
    }
    ctx->pc = 0x231168u;
label_231168:
    // 0x231168: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x231168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23116c:
    // 0x23116c: 0xc08db68  jal         func_236DA0
label_231170:
    if (ctx->pc == 0x231170u) {
        ctx->pc = 0x231170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23116Cu;
        // 0x231170: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231174u;
        goto label_231174;
    }
    ctx->pc = 0x23116Cu;
    SET_GPR_U32(ctx, 31, 0x231174u);
    ctx->pc = 0x231170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23116Cu;
    // 0x231170: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA0u;
    { ctx->pc = 0x236da0; return; }
    ctx->pc = 0x231174u;
label_231174:
    // 0x231174: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_231178:
    if (ctx->pc == 0x231178u) {
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23117Cu;
        goto label_23117c;
    }
    ctx->pc = 0x231174u;
    {
        const bool branch_taken_0x231174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231174) {
            ctx->pc = 0x231888u;
            { ctx->pc = 0x231888; return; }
        }
    }
    ctx->pc = 0x23117Cu;
label_23117c:
    // 0x23117c: 0x8f8282d4  lw          $v0, -0x7D2C($gp)
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_231180:
    // 0x231180: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x231180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_231184:
    // 0x231184: 0xaf8282d4  sw          $v0, -0x7D2C($gp)
    ctx->pc = 0x231184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 2));
label_231188:
    // 0x231188: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
label_23118c:
    // 0x23118c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x23118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_231190:
    // 0x231190: 0x26c404b0  addiu       $a0, $s6, 0x4B0
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231194:
    // 0x231194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231198:
    // 0x231198: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_23119c:
    // 0x23119c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2311a0:
    // 0x2311a0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2311a4:
    // 0x2311a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311a8:
    // 0x2311a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2311ac:
    // 0x2311ac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2311acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2311b0:
    // 0x2311b0: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2311b4:
    // 0x2311b4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2311b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2311b8:
    // 0x2311b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311bc:
    // 0x2311bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2311bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2311c0:
    // 0x2311c0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2311c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2311c4:
    // 0x2311c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2311c8:
    // 0x2311c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2311c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2311cc:
    // 0x2311cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2311d0:
    // 0x2311d0: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_2311d4:
    // 0x2311d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2311d8:
    // 0x2311d8: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_2311dc:
    // 0x2311dc: 0x24a5008f  addiu       $a1, $a1, 0x8F
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 143));
label_2311e0:
    // 0x2311e0: 0x24c217a7  addiu       $v0, $a2, 0x17A7
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6055));
label_2311e4:
    // 0x2311e4: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_2311e8:
    // 0x2311e8: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_2311ec:
    // 0x2311ec: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_2311f0:
    // 0x2311f0: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_2311f4:
    // 0x2311f4: 0x3a980  sll         $s5, $v1, 6
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2311f8:
    // 0x2311f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2311fc:
    // 0x2311fc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_231200:
    // 0x231200: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231204:
    // 0x231204: 0x342112c0  ori         $at, $at, 0x12C0
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4800);
label_231208:
    // 0x231208: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_23120c:
    // 0x23120c: 0x59180  sll         $s2, $a1, 6
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_231210:
    // 0x231210: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_231214:
    // 0x231214: 0x24de1768  addiu       $fp, $a2, 0x1768
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 5992));
label_231218:
    // 0x231218: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_23121c:
    if (ctx->pc == 0x23121Cu) {
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231220u;
        goto label_231220;
    }
    ctx->pc = 0x231218u;
    {
        const bool branch_taken_0x231218 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231218) {
            ctx->pc = 0x231230u;
            goto label_231230;
        }
    }
    ctx->pc = 0x231220u;
label_231220:
    // 0x231220: 0x100f809  jalr        $t0
label_231224:
    if (ctx->pc == 0x231224u) {
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231228u;
        goto label_231228;
    }
    ctx->pc = 0x231220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x231228u);
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231220u, 0x231228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231228u;
label_231228:
    // 0x231228: 0x10000004  b           . + 4 + (0x4 << 2)
label_23122c:
    if (ctx->pc == 0x23122Cu) {
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231230u;
        goto label_231230;
    }
    ctx->pc = 0x231228u;
    {
        const bool branch_taken_0x231228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231228) {
            ctx->pc = 0x23123Cu;
            goto label_23123c;
        }
    }
    ctx->pc = 0x231230u;
label_231230:
    // 0x231230: 0xc08e5be  jal         func_2396F8
label_231234:
    if (ctx->pc == 0x231234u) {
        ctx->pc = 0x231234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231230u;
        // 0x231234: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231238u;
        goto label_231238;
    }
    ctx->pc = 0x231230u;
    SET_GPR_U32(ctx, 31, 0x231238u);
    ctx->pc = 0x231234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231230u;
    // 0x231234: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2396F8u;
    { ctx->pc = 0x2396f8; return; }
    ctx->pc = 0x231238u;
label_231238:
    // 0x231238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23123c:
    // 0x23123c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231240:
    // 0x231240: 0x10800191  beqz        $a0, . + 4 + (0x191 << 2)
label_231244:
    if (ctx->pc == 0x231244u) {
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xaf8482d0  sw          $a0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231248u;
        goto label_231248;
    }
    ctx->pc = 0x231240u;
    {
        const bool branch_taken_0x231240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xaf8482d0  sw          $a0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231240) {
            ctx->pc = 0x231888u;
            { ctx->pc = 0x231888; return; }
        }
    }
    ctx->pc = 0x231248u;
label_231248:
    // 0x231248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23124c:
    // 0x23124c: 0xc0692a8  jal         func_1A4AA0
label_231250:
    if (ctx->pc == 0x231250u) {
        ctx->pc = 0x231250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23124Cu;
        // 0x231250: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231254u;
        goto label_231254;
    }
    ctx->pc = 0x23124Cu;
    SET_GPR_U32(ctx, 31, 0x231254u);
    ctx->pc = 0x231250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23124Cu;
    // 0x231250: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231258:
    // 0x231258: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x231258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_23125c:
    // 0x23125c: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
label_231260:
    // 0x231260: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_231264:
    // 0x231264: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
label_231268:
    // 0x231268: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_23126c:
    // 0x23126c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231270:
    // 0x231270: 0xc08e9ac  jal         func_23A6B0
label_231274:
    if (ctx->pc == 0x231274u) {
        ctx->pc = 0x231274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231270u;
        // 0x231274: 0x34c612c0  ori         $a2, $a2, 0x12C0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4800);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231278u;
        goto label_231278;
    }
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 31, 0x231278u);
    ctx->pc = 0x231274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231270u;
    // 0x231274: 0x34c612c0  ori         $a2, $a2, 0x12C0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x231278u;
label_231278:
    // 0x231278: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23127c:
    // 0x23127c: 0x27c2003f  addiu       $v0, $fp, 0x3F
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 63));
label_231280:
    // 0x231280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231284:
    // 0x231284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231288:
    // 0x231288: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_23128c:
    // 0x23128c: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x23128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_231290:
    // 0x231290: 0x346312c0  ori         $v1, $v1, 0x12C0
    ctx->pc = 0x231290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4800);
label_231294:
    // 0x231294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x231294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_231298:
    // 0x231298: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_23129c:
    // 0x23129c: 0x708024  and         $s0, $v1, $s0
    ctx->pc = 0x23129cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_2312a0:
    // 0x2312a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2312a4:
    // 0x2312a4: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2312a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_2312a8:
    // 0x2312a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2312a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2312ac:
    // 0x2312ac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2312b0:
    // 0x2312b0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2312b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_2312b4:
    // 0x2312b4: 0xac301140  sw          $s0, 0x1140($at)
    ctx->pc = 0x2312b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4416), GPR_U32(ctx, 16));
label_2312b8:
    // 0x2312b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2312b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2312bc:
    // 0x2312bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2312c0:
    // 0x2312c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2312c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2312c4:
    // 0x2312c4: 0x0  nop
    ctx->pc = 0x2312c4u;
    // NOP
label_2312c8:
    // 0x2312c8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2312cc:
    // 0x2312cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2312d0:
    // 0x2312d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2312d4:
    // 0x2312d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2312d8:
    // 0x2312d8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2312dc:
    // 0x2312dc: 0x0  nop
    ctx->pc = 0x2312dcu;
    // NOP
label_2312e0:
    // 0x2312e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2312e4:
    // 0x2312e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2312e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2312e8:
    // 0x2312e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2312ec:
    // 0x2312ec: 0x0  nop
    ctx->pc = 0x2312ecu;
    // NOP
label_2312f0:
    // 0x2312f0: 0x0  nop
    ctx->pc = 0x2312f0u;
    // NOP
label_2312f4:
    // 0x2312f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_2312f8:
    if (ctx->pc == 0x2312F8u) {
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2312FCu;
        goto label_2312fc;
    }
    ctx->pc = 0x2312F4u;
    {
        const bool branch_taken_0x2312f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312f4) {
            ctx->pc = 0x2312E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312e0;
        }
    }
    ctx->pc = 0x2312FCu;
label_2312fc:
    // 0x2312fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2312fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_231300:
    // 0x231300: 0x18c0fff1  blez        $a2, . + 4 + (-0xF << 2)
label_231304:
    if (ctx->pc == 0x231304u) {
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231300u;
        // 0x231304: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231308u;
        goto label_231308;
    }
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231300u;
        // 0x231304: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231300) {
            ctx->pc = 0x2312C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312c8;
        }
    }
    ctx->pc = 0x231308u;
label_231308:
    // 0x231308: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x231308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23130c:
    // 0x23130c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_231310:
    if (ctx->pc == 0x231310u) {
        ctx->pc = 0x231310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23130Cu;
        // 0x231310: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231314u;
        goto label_231314;
    }
    ctx->pc = 0x23130Cu;
    {
        const bool branch_taken_0x23130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23130c) {
            ctx->pc = 0x231310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23130Cu;
            // 0x231310: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231314u;
            goto label_231314;
        }
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_231318:
    // 0x231318: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x231318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23131c:
    // 0x23131c: 0x24420508  addiu       $v0, $v0, 0x508
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1288));
label_231320:
    // 0x231320: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231324:
    // 0x231324: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231328:
    // 0x231328: 0xac241278  sw          $a0, 0x1278($at)
    ctx->pc = 0x231328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 4));
label_23132c:
    // 0x23132c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x23132cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_231330:
    // 0x231330: 0x26c304b0  addiu       $v1, $s6, 0x4B0
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231334:
    // 0x231334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_231338:
    // 0x231338: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x231338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_23133c:
    // 0x23133c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231340:
    // 0x231340: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231344:
    // 0x231344: 0xac241208  sw          $a0, 0x1208($at)
    ctx->pc = 0x231344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 4));
label_231348:
    // 0x231348: 0x9064001d  lbu         $a0, 0x1D($v1)
    ctx->pc = 0x231348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
label_23134c:
    // 0x23134c: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_231350:
    // 0x231350: 0xc06adbe  jal         func_1AB6F8
label_231354:
    if (ctx->pc == 0x231354u) {
        ctx->pc = 0x231354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231350u;
        // 0x231354: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231358u;
        goto label_231358;
    }
    ctx->pc = 0x231350u;
    SET_GPR_U32(ctx, 31, 0x231358u);
    ctx->pc = 0x231354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231350u;
    // 0x231354: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6F8u;
    { ctx->pc = 0x1ab6f8; return; }
    ctx->pc = 0x231358u;
label_231358:
    // 0x231358: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23135c:
    // 0x23135c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231360:
    // 0x231360: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231364:
    // 0x231364: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231368:
    // 0x231368: 0xac231280  sw          $v1, 0x1280($at)
    ctx->pc = 0x231368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4736), GPR_U32(ctx, 3));
label_23136c:
    // 0x23136c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
label_231370:
    if (ctx->pc == 0x231370u) {
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231374u;
        goto label_231374;
    }
    ctx->pc = 0x23136Cu;
    {
        const bool branch_taken_0x23136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23136c) {
            ctx->pc = 0x231888u;
            { ctx->pc = 0x231888; return; }
        }
    }
    ctx->pc = 0x231374u;
label_231374:
    // 0x231374: 0xaf8082d8  sw          $zero, -0x7D28($gp)
    ctx->pc = 0x231374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 0));
label_231378:
    // 0x231378: 0x16800068  bnez        $s4, . + 4 + (0x68 << 2)
label_23137c:
    if (ctx->pc == 0x23137Cu) {
        ctx->pc = 0x23137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231378u;
        // 0x23137c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231380u;
        goto label_231380;
    }
    ctx->pc = 0x231378u;
    {
        const bool branch_taken_0x231378 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231378u;
        // 0x23137c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231378) {
            ctx->pc = 0x23151Cu;
            { ctx->pc = 0x23151c; return; }
        }
    }
    ctx->pc = 0x231380u;
label_231380:
    // 0x231380: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_231384:
    // 0x231384: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_231388:
    // 0x231388: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23138c:
    // 0x23138c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_231390:
    if (ctx->pc == 0x231390u) {
        ctx->pc = 0x231390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23138Cu;
        // 0x231390: 0x92660000  lbu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231394u;
        goto label_231394;
    }
    ctx->pc = 0x23138Cu;
    {
        const bool branch_taken_0x23138c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x231390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23138Cu;
        // 0x231390: 0x92660000  lbu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23138c) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x231394u;
label_231394:
    // 0x231394: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_231398:
    // 0x231398: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_23139c:
    // 0x23139c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313a0:
    // 0x2313a0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313a4:
    // 0x2313a4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_2313a8:
    if (ctx->pc == 0x2313A8u) {
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313ACu;
        goto label_2313ac;
    }
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313ACu;
label_2313ac:
    // 0x2313ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313b0:
    // 0x2313b0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2313b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2313b4:
    // 0x2313b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313b8:
    // 0x2313b8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313bc:
    // 0x2313bc: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_2313c0:
    if (ctx->pc == 0x2313C0u) {
        ctx->pc = 0x2313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313BCu;
        // 0x2313c0: 0x26700003  addiu       $s0, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313C4u;
        goto label_2313c4;
    }
    ctx->pc = 0x2313BCu;
    {
        const bool branch_taken_0x2313bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313BCu;
        // 0x2313c0: 0x26700003  addiu       $s0, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313bc) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313C4u;
label_2313c4:
    // 0x2313c4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313c8:
    // 0x2313c8: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2313cc:
    // 0x2313cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313d0:
    // 0x2313d0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313d4:
    // 0x2313d4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_2313d8:
    if (ctx->pc == 0x2313D8u) {
        ctx->pc = 0x2313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D4u;
        // 0x2313d8: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313DCu;
        goto label_2313dc;
    }
    ctx->pc = 0x2313D4u;
    {
        const bool branch_taken_0x2313d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D4u;
        // 0x2313d8: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313DCu;
label_2313dc:
    // 0x2313dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313e0:
    // 0x2313e0: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2313e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2313e4:
    // 0x2313e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313e8:
    // 0x2313e8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313ec:
    // 0x2313ec: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2313f0:
    if (ctx->pc == 0x2313F0u) {
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313F4u;
        goto label_2313f4;
    }
    ctx->pc = 0x2313ECu;
    {
        const bool branch_taken_0x2313ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313ec) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313F4u;
label_2313f4:
    // 0x2313f4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313f8:
    // 0x2313f8: 0x26640006  addiu       $a0, $s3, 0x6
    ctx->pc = 0x2313f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
label_2313fc:
    // 0x2313fc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2313fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_231400:
    // 0x231400: 0x38630030  xori        $v1, $v1, 0x30
    ctx->pc = 0x231400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)48);
label_231404:
    // 0x231404: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x231404u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_231408:
    // 0x231408: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23140c:
    // 0x23140c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_231410:
    // 0x231410: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_231414:
    // 0x231414: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
label_231418:
    if (ctx->pc == 0x231418u) {
        ctx->pc = 0x231418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231414u;
        // 0x231418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23141Cu;
        goto label_23141c;
    }
    ctx->pc = 0x231414u;
    {
        const bool branch_taken_0x231414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x231418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231414u;
        // 0x231418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231414) {
            ctx->pc = 0x231480u;
            { ctx->pc = 0x231480; return; }
        }
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x23141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_231420:
    // 0x231420: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_231424:
    // 0x231424: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_231428:
    if (ctx->pc == 0x231428u) {
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23142Cu;
        goto label_23142c;
    }
    ctx->pc = 0x231424u;
    {
        const bool branch_taken_0x231424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231424) {
            ctx->pc = 0x23147Cu;
            { ctx->pc = 0x23147c; return; }
        }
    }
    ctx->pc = 0x23142Cu;
label_23142c:
    // 0x23142c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_231430:
    // 0x231430: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_231434:
    if (ctx->pc == 0x231434u) {
        ctx->pc = 0x231434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231430u;
        // 0x231434: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231438u;
        goto label_231438;
    }
    ctx->pc = 0x231430u;
    {
        const bool branch_taken_0x231430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231430u;
        // 0x231434: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231430) {
            ctx->pc = 0x231470u;
            { ctx->pc = 0x231470; return; }
        }
    }
    ctx->pc = 0x231438u;
label_231438:
    // 0x231438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23143c:
    // 0x23143c: 0x0  nop
    ctx->pc = 0x23143cu;
    // NOP
label_231440:
    // 0x231440: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_231444:
    // 0x231444: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_231448:
    if (ctx->pc == 0x231448u) {
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23144Cu;
        goto label_23144c;
    }
    ctx->pc = 0x231444u;
    {
        const bool branch_taken_0x231444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231444) {
            ctx->pc = 0x23147Cu;
            { ctx->pc = 0x23147c; return; }
        }
    }
    ctx->pc = 0x23144Cu;
label_23144c:
    // 0x23144c: 0x0  nop
    ctx->pc = 0x23144cu;
    // NOP
label_231450:
    // 0x231450: 0x0  nop
    ctx->pc = 0x231450u;
    // NOP
label_231454:
    // 0x231454: 0x0  nop
    ctx->pc = 0x231454u;
    // NOP
    ctx->pc = 0x231458u;
    return;
}
